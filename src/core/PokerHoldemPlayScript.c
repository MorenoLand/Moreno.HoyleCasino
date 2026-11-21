#include "protos.h"

void f_004b7df0(void) /* PokerHoldemPlayScript::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b7df0);
    /* 004b7df0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b7df1: mov ebp, esp */ r_ebp = r_esp;
    /* 004b7df3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004b7df5: push 0x6a2158 */ { u32 v = 0x6a2158u; r_esp -= 4; W32(r_esp, v); }
    /* 004b7dfa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004b7e00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b7e01: sub esp, 0xa78 */ {  u32 a = r_esp; u32 b = 0xa78u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004b7e07: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 004b7e0c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b7e0e: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004b7e11: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004b7e12: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004b7e13: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b7e14: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 004b7e17: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 004b7e1d: mov dword ptr [ebp - 0x858], ecx */ W32((u32)(r_ebp+0xfffff7a8u), r_ecx);
    /* 004b7e23: mov dword ptr [ebp - 0x854], 0 */ W32((u32)(r_ebp+0xfffff7acu), 0x0u);
    /* 004b7e2d: mov eax, dword ptr [ebp - 0x858] */ r_eax = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004b7e33: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 004b7e36: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 004b7e39: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 004b7e3c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004b7e3f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b7e40: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004b7e46: call 0x5fc3a0 */ r_esp -= 4; W32(r_esp, 0x4b7e4bu); f_005fc3a0();
    /* 004b7e4b: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004b7e51: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 004b7e54: mov dword ptr [ebp - 0x85c], edx */ W32((u32)(r_ebp+0xfffff7a4u), r_edx);
    /* 004b7e5a: cmp dword ptr [ebp - 0x85c], 0x20 */ {  u32 a = R32((u32)(r_ebp+0xfffff7a4u)); u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004b7e61: ja 0x4c353d */ if ((!fC&&!fZ)) goto L_004c353d;
L_004b7e67:; BB(0x004b7e67);
    /* 004b7e67: mov eax, dword ptr [ebp - 0x85c] */ r_eax = R32((u32)(r_ebp+0xfffff7a4u));
    /* 004b7e6d: jmp dword ptr [eax*4 + 0x4c355c] */ { u32 t = R32((u32)(r_eax*4+0x4c355cu)); switch (t) { case 0x4b7e74u: goto L_004b7e74; case 0x4b814eu: goto L_004b814e; case 0x4b822eu: goto L_004b822e; case 0x4b83e5u: goto L_004b83e5; case 0x4b84c0u: goto L_004b84c0; case 0x4b8571u: goto L_004b8571; case 0x4bd6e4u: goto L_004bd6e4; case 0x4c353du: goto L_004c353d; case 0x4b8857u: goto L_004b8857; case 0x4bda3au: goto L_004bda3a; case 0x4bd83cu: goto L_004bd83c; case 0x4bdfa3u: goto L_004bdfa3; case 0x4be05du: goto L_004be05d; case 0x4be1cau: goto L_004be1ca; case 0x4be228u: goto L_004be228; case 0x4be479u: goto L_004be479; case 0x4be7f1u: goto L_004be7f1; case 0x4be895u: goto L_004be895; case 0x4bfc70u: goto L_004bfc70; case 0x4c1059u: goto L_004c1059; case 0x4c145au: goto L_004c145a; case 0x4c3324u: goto L_004c3324; case 0x4c343cu: goto L_004c343c; case 0x4c34a4u: goto L_004c34a4; case 0x4c34d0u: goto L_004c34d0; case 0x4c34fcu: goto L_004c34fc; case 0x4b8a1fu: goto L_004b8a1f; case 0x4b8aafu: goto L_004b8aaf; case 0x4b8b3fu: goto L_004b8b3f; case 0x4b8bcfu: goto L_004b8bcf; case 0x4b8c5fu: goto L_004b8c5f; case 0x4b8cefu: goto L_004b8cef; case 0x4b8d7fu: goto L_004b8d7f; case 0x4b8e0fu: goto L_004b8e0f; case 0x4b8e9fu: goto L_004b8e9f; case 0x4b8f2fu: goto L_004b8f2f; case 0x4b8fbfu: goto L_004b8fbf; case 0x4b904fu: goto L_004b904f; case 0x4b90dfu: goto L_004b90df; case 0x4b916fu: goto L_004b916f; case 0x4b91ffu: goto L_004b91ff; case 0x4b928fu: goto L_004b928f; case 0x4b931fu: goto L_004b931f; case 0x4b93afu: goto L_004b93af; case 0x4b9487u: goto L_004b9487; case 0x4b9517u: goto L_004b9517; case 0x4b95a7u: goto L_004b95a7; case 0x4b9637u: goto L_004b9637; case 0x4b96c7u: goto L_004b96c7; case 0x4b9757u: goto L_004b9757; case 0x4b97e7u: goto L_004b97e7; case 0x4b9877u: goto L_004b9877; case 0x4b9920u: goto L_004b9920; case 0x4b99c9u: goto L_004b99c9; case 0x4b9a59u: goto L_004b9a59; case 0x4b9ae9u: goto L_004b9ae9; case 0x4b9b79u: goto L_004b9b79; case 0x4b9c09u: goto L_004b9c09; case 0x4b9c99u: goto L_004b9c99; case 0x4b9d29u: goto L_004b9d29; case 0x4b9db9u: goto L_004b9db9; case 0x4b9e49u: goto L_004b9e49; case 0x4b9ed9u: goto L_004b9ed9; case 0x4b9f69u: goto L_004b9f69; case 0x4b9ff9u: goto L_004b9ff9; case 0x4ba089u: goto L_004ba089; case 0x4ba119u: goto L_004ba119; case 0x4ba1a9u: goto L_004ba1a9; case 0x4ba239u: goto L_004ba239; case 0x4ba2c9u: goto L_004ba2c9; case 0x4ba359u: goto L_004ba359; case 0x4ba3e9u: goto L_004ba3e9; case 0x4ba479u: goto L_004ba479; case 0x4ba509u: goto L_004ba509; case 0x4ba599u: goto L_004ba599; case 0x4ba629u: goto L_004ba629; case 0x4ba701u: goto L_004ba701; case 0x4ba7aau: goto L_004ba7aa; case 0x4ba83au: goto L_004ba83a; case 0x4ba8cau: goto L_004ba8ca; case 0x4ba9ebu: goto L_004ba9eb; case 0x4baac3u: goto L_004baac3; case 0x4bab53u: goto L_004bab53; case 0x4bac2bu: goto L_004bac2b; case 0x4bad03u: goto L_004bad03; case 0x4bad93u: goto L_004bad93; case 0x4bae23u: goto L_004bae23; case 0x4baeb3u: goto L_004baeb3; case 0x4baf5cu: goto L_004baf5c; case 0x4bb005u: goto L_004bb005; case 0x4bb095u: goto L_004bb095; case 0x4bb13eu: goto L_004bb13e; case 0x4bb1e7u: goto L_004bb1e7; case 0x4bb277u: goto L_004bb277; case 0x4bb307u: goto L_004bb307; case 0x4bb397u: goto L_004bb397; case 0x4bba1au: goto L_004bba1a; case 0x4bba7bu: goto L_004bba7b; case 0x4bbadcu: goto L_004bbadc; case 0x4bbb3du: goto L_004bbb3d; case 0x4bbb9eu: goto L_004bbb9e; case 0x4bbbffu: goto L_004bbbff; case 0x4bbc60u: goto L_004bbc60; case 0x4bbcc1u: goto L_004bbcc1; case 0x4bbd22u: goto L_004bbd22; case 0x4bbd83u: goto L_004bbd83; case 0x4bbde4u: goto L_004bbde4; case 0x4bbe45u: goto L_004bbe45; case 0x4bbea6u: goto L_004bbea6; case 0x4bbf07u: goto L_004bbf07; case 0x4bbf81u: goto L_004bbf81; case 0x4bbffbu: goto L_004bbffb; case 0x4bc05cu: goto L_004bc05c; case 0x4bc0bdu: goto L_004bc0bd; case 0x4bc11eu: goto L_004bc11e; case 0x4bc17fu: goto L_004bc17f; case 0x4bc1e0u: goto L_004bc1e0; case 0x4bc241u: goto L_004bc241; case 0x4bc2a2u: goto L_004bc2a2; case 0x4bc31cu: goto L_004bc31c; case 0x4bc37du: goto L_004bc37d; case 0x4bc3deu: goto L_004bc3de; case 0x4bc458u: goto L_004bc458; case 0x4bc4b9u: goto L_004bc4b9; case 0x4bc51au: goto L_004bc51a; case 0x4bc594u: goto L_004bc594; case 0x4bc60eu: goto L_004bc60e; case 0x4bc66fu: goto L_004bc66f; case 0x4bc6e9u: goto L_004bc6e9; case 0x4bc74au: goto L_004bc74a; case 0x4bc7a8u: goto L_004bc7a8; default: UNSUP(0x004b7e6d, "jump table entry is not a known target"); } }
L_004b7e74:; BB(0x004b7e74);
    /* 004b7e74: cmp dword ptr [0x791e50], 2 */ {  u32 a = R32((u32)(0x791e50u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b7e7b: jge 0x4b7eac */ if ((fS==fO)) goto L_004b7eac;
L_004b7e7d:; BB(0x004b7e7d);
    /* 004b7e7d: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 004b7e7f: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004b7e85: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b7e87: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004b7e8d: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004b7e90: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b7e92u); call_ind(t); }
    /* 004b7e92: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b7e94: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004b7e9a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b7e9c: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004b7ea2: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004b7ea5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b7ea7u); call_ind(t); }
    /* 004b7ea7: jmp 0x4c353d */ goto L_004c353d;
L_004b7eac:; BB(0x004b7eac);
    /* 004b7eac: mov dword ptr [0x791e74], 0 */ W32((u32)(0x791e74u), 0x0u);
    /* 004b7eb6: mov word ptr [0x791eac], 0 */ W16((u32)(0x791eacu), 0x0u);
    /* 004b7ebf: jmp 0x4b7ed3 */ goto L_004b7ed3;
L_004b7ec1:; BB(0x004b7ec1);
    /* 004b7ec1: mov cx, word ptr [0x791eac] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x791eacu))) & 0xffffu);
    /* 004b7ec8: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004b7ecc: mov word ptr [0x791eac], cx */ W16((u32)(0x791eacu), (u16)r_ecx);
L_004b7ed3:; BB(0x004b7ed3);
    /* 004b7ed3: movsx esi, word ptr [0x791eac] */ r_esi = (u32)(i32)(i16)R16((u32)(0x791eacu));
    /* 004b7eda: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b7ee0: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4b7ee5u); f_0047f950();
    /* 004b7ee5: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b7ee7: jge 0x4b811f */ if ((fS==fO)) goto L_004b811f;
L_004b7eed:; BB(0x004b7eed);
    /* 004b7eed: mov word ptr [0x791ea8], 0 */ W16((u32)(0x791ea8u), 0x0u);
    /* 004b7ef6: jmp 0x4b7f0a */ goto L_004b7f0a;
L_004b7ef8:; BB(0x004b7ef8);
    /* 004b7ef8: mov dx, word ptr [0x791ea8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x791ea8u))) & 0xffffu);
    /* 004b7eff: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004b7f03: mov word ptr [0x791ea8], dx */ W16((u32)(0x791ea8u), (u16)r_edx);
L_004b7f0a:; BB(0x004b7f0a);
    /* 004b7f0a: movsx esi, word ptr [0x791ea8] */ r_esi = (u32)(i32)(i16)R16((u32)(0x791ea8u));
    /* 004b7f11: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b7f17: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4b7f1cu); f_0047f950();
    /* 004b7f1c: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b7f1e: jge 0x4b811a */ if ((fS==fO)) goto L_004b811a;
L_004b7f24:; BB(0x004b7f24);
    /* 004b7f24: movsx eax, word ptr [0x791eac] */ r_eax = (u32)(i32)(i16)R16((u32)(0x791eacu));
    /* 004b7f2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b7f2c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b7f32: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4b7f37u); f_0047e390();
    /* 004b7f37: mov ecx, eax */ r_ecx = r_eax;
    /* 004b7f39: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x4b7f3eu); f_004c6cb0();
    /* 004b7f3e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b7f40: je 0x4b8115 */ if (fZ) goto L_004b8115;
L_004b7f46:; BB(0x004b7f46);
    /* 004b7f46: movsx ecx, word ptr [0x791ea8] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x791ea8u));
    /* 004b7f4d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b7f4e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b7f54: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4b7f59u); f_0047e390();
    /* 004b7f59: mov ecx, eax */ r_ecx = r_eax;
    /* 004b7f5b: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x4b7f60u); f_004c7010();
    /* 004b7f60: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b7f63: jne 0x4b8115 */ if (!fZ) goto L_004b8115;
L_004b7f69:; BB(0x004b7f69);
    /* 004b7f69: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b7f6f: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x4b7f74u); f_0047e190();
    /* 004b7f74: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b7f77: jne 0x4b7fa7 */ if (!fZ) goto L_004b7fa7;
L_004b7f79:; BB(0x004b7f79);
    /* 004b7f79: mov dx, word ptr [0x791e50] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x791e50u))) & 0xffffu);
    /* 004b7f80: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b7f81: mov ax, word ptr [0x791ea8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x791ea8u))) & 0xffffu);
    /* 004b7f87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b7f88: movsx ecx, word ptr [0x791eac] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x791eacu));
    /* 004b7f8f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b7f90: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b7f96: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4b7f9bu); f_0047e390();
    /* 004b7f9b: mov ecx, eax */ r_ecx = r_eax;
    /* 004b7f9d: call 0x4ceb90 */ r_esp -= 4; W32(r_esp, 0x4b7fa2u); f_004ceb90();
    /* 004b7fa2: jmp 0x4b80b3 */ goto L_004b80b3;
L_004b7fa7:; BB(0x004b7fa7);
    /* 004b7fa7: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b7fad: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x4b7fb2u); f_0047e190();
    /* 004b7fb2: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b7fb5: jne 0x4b7ff4 */ if (!fZ) goto L_004b7ff4;
L_004b7fb7:; BB(0x004b7fb7);
    /* 004b7fb7: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b7fbd: call 0x47e280 */ r_esp -= 4; W32(r_esp, 0x4b7fc2u); f_0047e280();
    /* 004b7fc2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b7fc4: jne 0x4b7ff4 */ if (!fZ) goto L_004b7ff4;
L_004b7fc6:; BB(0x004b7fc6);
    /* 004b7fc6: mov dx, word ptr [0x791e50] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x791e50u))) & 0xffffu);
    /* 004b7fcd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b7fce: mov ax, word ptr [0x791ea8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x791ea8u))) & 0xffffu);
    /* 004b7fd4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b7fd5: movsx ecx, word ptr [0x791eac] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x791eacu));
    /* 004b7fdc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b7fdd: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b7fe3: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4b7fe8u); f_0047e390();
    /* 004b7fe8: mov ecx, eax */ r_ecx = r_eax;
    /* 004b7fea: call 0x4d1340 */ r_esp -= 4; W32(r_esp, 0x4b7fefu); f_004d1340();
    /* 004b7fef: jmp 0x4b80b3 */ goto L_004b80b3;
L_004b7ff4:; BB(0x004b7ff4);
    /* 004b7ff4: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b7ffa: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x4b7fffu); f_0047e190();
    /* 004b7fff: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8002: jne 0x4b803f */ if (!fZ) goto L_004b803f;
L_004b8004:; BB(0x004b8004);
    /* 004b8004: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b800a: call 0x47e280 */ r_esp -= 4; W32(r_esp, 0x4b800fu); f_0047e280();
    /* 004b800f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8012: jne 0x4b803f */ if (!fZ) goto L_004b803f;
L_004b8014:; BB(0x004b8014);
    /* 004b8014: mov dx, word ptr [0x791e50] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x791e50u))) & 0xffffu);
    /* 004b801b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b801c: mov ax, word ptr [0x791ea8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x791ea8u))) & 0xffffu);
    /* 004b8022: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b8023: movsx ecx, word ptr [0x791eac] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x791eacu));
    /* 004b802a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b802b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b8031: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4b8036u); f_0047e390();
    /* 004b8036: mov ecx, eax */ r_ecx = r_eax;
    /* 004b8038: call 0x4d3f70 */ r_esp -= 4; W32(r_esp, 0x4b803du); f_004d3f70();
    /* 004b803d: jmp 0x4b80b3 */ goto L_004b80b3;
L_004b803f:; BB(0x004b803f);
    /* 004b803f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b8045: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x4b804au); f_0047e190();
    /* 004b804a: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b804d: jne 0x4b807a */ if (!fZ) goto L_004b807a;
L_004b804f:; BB(0x004b804f);
    /* 004b804f: mov dx, word ptr [0x791e50] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x791e50u))) & 0xffffu);
    /* 004b8056: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b8057: mov ax, word ptr [0x791ea8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x791ea8u))) & 0xffffu);
    /* 004b805d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b805e: movsx ecx, word ptr [0x791eac] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x791eacu));
    /* 004b8065: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b8066: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b806c: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4b8071u); f_0047e390();
    /* 004b8071: mov ecx, eax */ r_ecx = r_eax;
    /* 004b8073: call 0x4ee830 */ r_esp -= 4; W32(r_esp, 0x4b8078u); f_004ee830();
    /* 004b8078: jmp 0x4b80b3 */ goto L_004b80b3;
L_004b807a:; BB(0x004b807a);
    /* 004b807a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b8080: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x4b8085u); f_0047e190();
    /* 004b8085: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8088: jne 0x4b80b3 */ if (!fZ) goto L_004b80b3;
L_004b808a:; BB(0x004b808a);
    /* 004b808a: mov dx, word ptr [0x791e50] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x791e50u))) & 0xffffu);
    /* 004b8091: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b8092: mov ax, word ptr [0x791ea8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x791ea8u))) & 0xffffu);
    /* 004b8098: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b8099: movsx ecx, word ptr [0x791eac] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x791eacu));
    /* 004b80a0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b80a1: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b80a7: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4b80acu); f_0047e390();
    /* 004b80ac: mov ecx, eax */ r_ecx = r_eax;
    /* 004b80ae: call 0x4f0cf0 */ r_esp -= 4; W32(r_esp, 0x4b80b3u); f_004f0cf0();
L_004b80b3:; BB(0x004b80b3);
    /* 004b80b3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b80b5: movsx edx, word ptr [0x791eac] */ r_edx = (u32)(i32)(i16)R16((u32)(0x791eacu));
    /* 004b80bc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b80bd: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b80c3: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4b80c8u); f_0047e390();
    /* 004b80c8: mov ecx, eax */ r_ecx = r_eax;
    /* 004b80ca: call 0x4c6ed0 */ r_esp -= 4; W32(r_esp, 0x4b80cfu); f_004c6ed0();
    /* 004b80cf: movsx eax, word ptr [0x791eac] */ r_eax = (u32)(i32)(i16)R16((u32)(0x791eacu));
    /* 004b80d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b80d7: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b80dd: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4b80e2u); f_0047e390();
    /* 004b80e2: mov ecx, eax */ r_ecx = r_eax;
    /* 004b80e4: call 0x4c6e70 */ r_esp -= 4; W32(r_esp, 0x4b80e9u); f_004c6e70();
    /* 004b80e9: mov esi, eax */ r_esi = r_eax;
    /* 004b80eb: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 004b80ed: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4b80f2u); f_0062fbf0();
    /* 004b80f2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b80f5: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b80f7: jle 0x4b8115 */ if ((fZ||fS!=fO)) goto L_004b8115;
L_004b80f9:; BB(0x004b80f9);
    /* 004b80f9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004b80fb: movsx ecx, word ptr [0x791eac] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x791eacu));
    /* 004b8102: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b8103: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b8109: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4b810eu); f_0047e390();
    /* 004b810e: mov ecx, eax */ r_ecx = r_eax;
    /* 004b8110: call 0x4c6ed0 */ r_esp -= 4; W32(r_esp, 0x4b8115u); f_004c6ed0();
L_004b8115:; BB(0x004b8115);
    /* 004b8115: jmp 0x4b7ef8 */ goto L_004b7ef8;
L_004b811a:; BB(0x004b811a);
    /* 004b811a: jmp 0x4b7ec1 */ goto L_004b7ec1;
L_004b811f:; BB(0x004b811f);
    /* 004b811f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8121: mov edx, dword ptr [ebp - 0x858] */ r_edx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004b8127: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004b8129: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004b812f: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004b8132: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4b8134u); call_ind(t); }
    /* 004b8134: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8136: mov eax, dword ptr [ebp - 0x858] */ r_eax = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004b813c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004b813e: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004b8144: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004b8147: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b8149u); call_ind(t); }
    /* 004b8149: jmp 0x4c353d */ goto L_004c353d;
L_004b814e:; BB(0x004b814e);
    /* 004b814e: mov dword ptr [0x791ea4], 0 */ W32((u32)(0x791ea4u), 0x0u);
    /* 004b8158: jmp 0x4b8169 */ goto L_004b8169;
L_004b815a:; BB(0x004b815a);
    /* 004b815a: mov ecx, dword ptr [0x791ea4] */ r_ecx = R32((u32)(0x791ea4u));
    /* 004b8160: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004b8163: mov dword ptr [0x791ea4], ecx */ W32((u32)(0x791ea4u), r_ecx);
L_004b8169:; BB(0x004b8169);
    /* 004b8169: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b816f: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4b8174u); f_0047f950();
    /* 004b8174: cmp dword ptr [0x791ea4], eax */ {  u32 a = R32((u32)(0x791ea4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b817a: jge 0x4b81d9 */ if ((fS==fO)) goto L_004b81d9;
L_004b817c:; BB(0x004b817c);
    /* 004b817c: mov edx, dword ptr [0x791ea4] */ r_edx = R32((u32)(0x791ea4u));
    /* 004b8182: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b8183: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b8189: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4b818eu); f_0047e390();
    /* 004b818e: mov ecx, eax */ r_ecx = r_eax;
    /* 004b8190: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x4b8195u); f_004c6cb0();
    /* 004b8195: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8198: je 0x4b81a5 */ if (fZ) goto L_004b81a5;
L_004b819a:; BB(0x004b819a);
    /* 004b819a: movzx eax, byte ptr [0x791360] */ r_eax = (u32)R8((u32)(0x791360u));
    /* 004b81a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b81a3: je 0x4b81d7 */ if (fZ) goto L_004b81d7;
L_004b81a5:; BB(0x004b81a5);
    /* 004b81a5: mov ecx, dword ptr [0x791ea4] */ r_ecx = R32((u32)(0x791ea4u));
    /* 004b81ab: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b81ac: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b81b2: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4b81b7u); f_0047e390();
    /* 004b81b7: mov ecx, eax */ r_ecx = r_eax;
    /* 004b81b9: call 0x4c7360 */ r_esp -= 4; W32(r_esp, 0x4b81beu); f_004c7360();
    /* 004b81be: mov edx, dword ptr [0x791ea4] */ r_edx = R32((u32)(0x791ea4u));
    /* 004b81c4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b81c5: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b81cb: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4b81d0u); f_0047e390();
    /* 004b81d0: mov ecx, eax */ r_ecx = r_eax;
    /* 004b81d2: call 0x4c76e0 */ r_esp -= 4; W32(r_esp, 0x4b81d7u); f_004c76e0();
L_004b81d7:; BB(0x004b81d7);
    /* 004b81d7: jmp 0x4b815a */ goto L_004b815a;
L_004b81d9:; BB(0x004b81d9);
    /* 004b81d9: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b81df: call 0x47d6b0 */ r_esp -= 4; W32(r_esp, 0x4b81e4u); f_0047d6b0();
    /* 004b81e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b81e6: jne 0x4b81ff */ if (!fZ) goto L_004b81ff;
L_004b81e8:; BB(0x004b81e8);
    /* 004b81e8: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004b81ea: mov eax, dword ptr [ebp - 0x858] */ r_eax = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004b81f0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004b81f2: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004b81f8: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004b81fb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b81fdu); call_ind(t); }
    /* 004b81fd: jmp 0x4b8214 */ goto L_004b8214;
L_004b81ff:; BB(0x004b81ff);
    /* 004b81ff: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8201: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004b8207: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b8209: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004b820f: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004b8212: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b8214u); call_ind(t); }
L_004b8214:; BB(0x004b8214);
    /* 004b8214: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8216: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004b821c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b821e: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004b8224: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004b8227: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b8229u); call_ind(t); }
    /* 004b8229: jmp 0x4c353d */ goto L_004c353d;
L_004b822e:; BB(0x004b822e);
    /* 004b822e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b8234: mov dword ptr [ecx + 0x410], 0 */ W32((u32)(r_ecx+0x410u), 0x0u);
    /* 004b823e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b8244: call 0x47bbc0 */ r_esp -= 4; W32(r_esp, 0x4b8249u); f_0047bbc0();
    /* 004b8249: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b824a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b8250: call 0x47e400 */ r_esp -= 4; W32(r_esp, 0x4b8255u); f_0047e400();
L_004b8255:; BB(0x004b8255);
    /* 004b8255: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b825b: call 0x47e440 */ r_esp -= 4; W32(r_esp, 0x4b8260u); f_0047e440();
    /* 004b8260: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b8266: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4b826bu); f_0047e3b0();
    /* 004b826b: mov ecx, eax */ r_ecx = r_eax;
    /* 004b826d: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x4b8272u); f_004c7010();
    /* 004b8272: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8274: je 0x4b8255 */ if (fZ) goto L_004b8255;
L_004b8276:; BB(0x004b8276);
    /* 004b8276: movsx edx, word ptr [0x71edc4] */ r_edx = (u32)(i32)(i16)R16((u32)(0x71edc4u));
    /* 004b827d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b827f: cmp dword ptr [0x791e50], 2 */ {  u32 a = R32((u32)(0x791e50u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b8286: setg al */ r_eax = (r_eax & 0xffffff00u) | ((((!fZ&&fS==fO)) ? 1 : 0) & 0xffu);
    /* 004b8289: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004b828b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b828c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b8292: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4b8297u); f_0047e3b0();
    /* 004b8297: mov ecx, eax */ r_ecx = r_eax;
    /* 004b8299: call 0x4c7050 */ r_esp -= 4; W32(r_esp, 0x4b829eu); f_004c7050();
    /* 004b829e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b829f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b82a5: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004b82a8: call 0x4f5530 */ r_esp -= 4; W32(r_esp, 0x4b82adu); f_004f5530();
    /* 004b82ad: cmp dword ptr [0x791e50], 2 */ {  u32 a = R32((u32)(0x791e50u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b82b4: jle 0x4b832f */ if ((fZ||fS!=fO)) goto L_004b832f;
L_004b82b6:; BB(0x004b82b6);
    /* 004b82b6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b82bc: call 0x47bca0 */ r_esp -= 4; W32(r_esp, 0x4b82c1u); f_0047bca0();
    /* 004b82c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b82c2: call 0x4c3f40 */ r_esp -= 4; W32(r_esp, 0x4b82c7u); f_004c3f40();
    /* 004b82c7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b82ca: mov dword ptr [0x791e3c], eax */ W32((u32)(0x791e3cu), r_eax);
    /* 004b82cf: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b82d5: call 0x47e500 */ r_esp -= 4; W32(r_esp, 0x4b82dau); f_0047e500();
    /* 004b82da: cmp dword ptr [0x791e3c], 0 */ {  u32 a = R32((u32)(0x791e3cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b82e1: jge 0x4b82fa */ if ((fS==fO)) goto L_004b82fa;
L_004b82e3:; BB(0x004b82e3);
    /* 004b82e3: push 0x35b */ { u32 v = 0x35bu; r_esp -= 4; W32(r_esp, v); }
    /* 004b82e8: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b82ed: push 0x6bc628 */ { u32 v = 0x6bc628u; r_esp -= 4; W32(r_esp, v); }
    /* 004b82f2: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4b82f7u); f_005e9f20();
    /* 004b82f7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004b82fa:; BB(0x004b82fa);
    /* 004b82fa: mov edx, dword ptr [0x791e3c] */ r_edx = R32((u32)(0x791e3cu));
    /* 004b8300: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b8301: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b8307: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x4b830cu); f_0047e490();
    /* 004b830c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b830d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b8313: call 0x47e400 */ r_esp -= 4; W32(r_esp, 0x4b8318u); f_0047e400();
    /* 004b8318: call 0x4c4070 */ r_esp -= 4; W32(r_esp, 0x4b831du); f_004c4070();
    /* 004b831d: mov dword ptr [0x791e3c], eax */ W32((u32)(0x791e3cu), r_eax);
    /* 004b8322: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b8328: call 0x47e500 */ r_esp -= 4; W32(r_esp, 0x4b832du); f_0047e500();
    /* 004b832d: jmp 0x4b8353 */ goto L_004b8353;
L_004b832f:; BB(0x004b832f);
    /* 004b832f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b8335: call 0x47bce0 */ r_esp -= 4; W32(r_esp, 0x4b833au); f_0047bce0();
    /* 004b833a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b833b: call 0x4c3f40 */ r_esp -= 4; W32(r_esp, 0x4b8340u); f_004c3f40();
    /* 004b8340: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b8343: mov dword ptr [0x791e3c], eax */ W32((u32)(0x791e3cu), r_eax);
    /* 004b8348: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b834e: call 0x47e500 */ r_esp -= 4; W32(r_esp, 0x4b8353u); f_0047e500();
L_004b8353:; BB(0x004b8353);
    /* 004b8353: cmp dword ptr [0x791e3c], 0 */ {  u32 a = R32((u32)(0x791e3cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b835a: jl 0x4b8390 */ if ((fS!=fO)) goto L_004b8390;
L_004b835c:; BB(0x004b835c);
    /* 004b835c: mov eax, dword ptr [0x791e3c] */ r_eax = R32((u32)(0x791e3cu));
    /* 004b8361: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b8362: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b8368: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x4b836du); f_0047e490();
    /* 004b836d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b836e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b8374: call 0x47e400 */ r_esp -= 4; W32(r_esp, 0x4b8379u); f_0047e400();
    /* 004b8379: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004b837b: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004b8381: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b8383: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004b8389: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004b838c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b838eu); call_ind(t); }
    /* 004b838e: jmp 0x4b83cb */ goto L_004b83cb;
L_004b8390:; BB(0x004b8390);
    /* 004b8390: cmp dword ptr [0x791e3c], -3 */ {  u32 a = R32((u32)(0x791e3cu)); u32 b = 0xfffffffdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8397: jne 0x4b83b0 */ if (!fZ) goto L_004b83b0;
L_004b8399:; BB(0x004b8399);
    /* 004b8399: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 004b839b: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004b83a1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b83a3: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004b83a9: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004b83ac: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b83aeu); call_ind(t); }
    /* 004b83ae: jmp 0x4b83cb */ goto L_004b83cb;
L_004b83b0:; BB(0x004b83b0);
    /* 004b83b0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 004b83b2: jne 0x4b83cb */ if (!fZ) goto L_004b83cb;
L_004b83b4:; BB(0x004b83b4);
    /* 004b83b4: push 0x370 */ { u32 v = 0x370u; r_esp -= 4; W32(r_esp, v); }
    /* 004b83b9: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b83be: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 004b83c3: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4b83c8u); f_005e9f20();
    /* 004b83c8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004b83cb:; BB(0x004b83cb);
    /* 004b83cb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b83cd: mov eax, dword ptr [ebp - 0x858] */ r_eax = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004b83d3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004b83d5: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004b83db: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004b83de: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b83e0u); call_ind(t); }
    /* 004b83e0: jmp 0x4c353d */ goto L_004c353d;
L_004b83e5:; BB(0x004b83e5);
    /* 004b83e5: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b83eb: mov dword ptr [ecx + 0x410], 0 */ W32((u32)(r_ecx+0x410u), 0x0u);
    /* 004b83f5: movzx edx, byte ptr [0x791e38] */ r_edx = (u32)R8((u32)(0x791e38u));
    /* 004b83fc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b83fe: je 0x4b842f */ if (fZ) goto L_004b842f;
L_004b8400:; BB(0x004b8400);
    /* 004b8400: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 004b8402: mov eax, dword ptr [ebp - 0x858] */ r_eax = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004b8408: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004b840a: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004b8410: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004b8413: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b8415u); call_ind(t); }
    /* 004b8415: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 004b8417: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004b841d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b841f: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004b8425: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004b8428: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b842au); call_ind(t); }
    /* 004b842a: jmp 0x4c353d */ goto L_004c353d;
L_004b842f:; BB(0x004b842f);
    /* 004b842f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b8435: call 0x47bbc0 */ r_esp -= 4; W32(r_esp, 0x4b843au); f_0047bbc0();
    /* 004b843a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b843b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b8441: call 0x47e400 */ r_esp -= 4; W32(r_esp, 0x4b8446u); f_0047e400();
L_004b8446:; BB(0x004b8446);
    /* 004b8446: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b844c: call 0x47e440 */ r_esp -= 4; W32(r_esp, 0x4b8451u); f_0047e440();
    /* 004b8451: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b8457: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4b845cu); f_0047e3b0();
    /* 004b845c: mov ecx, eax */ r_ecx = r_eax;
    /* 004b845e: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x4b8463u); f_004c7010();
    /* 004b8463: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8466: jne 0x4b8446 */ if (!fZ) goto L_004b8446;
L_004b8468:; BB(0x004b8468);
    /* 004b8468: mov cx, word ptr [0x71edc4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x71edc4u))) & 0xffffu);
    /* 004b846f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b8470: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b8476: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4b847bu); f_0047e3b0();
    /* 004b847b: mov ecx, eax */ r_ecx = r_eax;
    /* 004b847d: call 0x4c7050 */ r_esp -= 4; W32(r_esp, 0x4b8482u); f_004c7050();
    /* 004b8482: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b8483: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b8489: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004b848c: call 0x4f5530 */ r_esp -= 4; W32(r_esp, 0x4b8491u); f_004f5530();
    /* 004b8491: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8493: mov edx, dword ptr [ebp - 0x858] */ r_edx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004b8499: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004b849b: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004b84a1: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004b84a4: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4b84a6u); call_ind(t); }
    /* 004b84a6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b84a8: mov eax, dword ptr [ebp - 0x858] */ r_eax = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004b84ae: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004b84b0: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004b84b6: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004b84b9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b84bbu); call_ind(t); }
    /* 004b84bb: jmp 0x4c353d */ goto L_004c353d;
L_004b84c0:; BB(0x004b84c0);
    /* 004b84c0: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b84c6: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4b84cbu); f_0047e3b0();
    /* 004b84cb: mov ecx, eax */ r_ecx = r_eax;
    /* 004b84cd: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x4b84d2u); f_004c6cb0();
    /* 004b84d2: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b84d5: jne 0x4b84e8 */ if (!fZ) goto L_004b84e8;
L_004b84d7:; BB(0x004b84d7);
    /* 004b84d7: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b84dd: movzx edx, byte ptr [ecx + 0xc8] */ r_edx = (u32)R8((u32)(r_ecx+0xc8u));
    /* 004b84e4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b84e6: je 0x4b84fe */ if (fZ) goto L_004b84fe;
L_004b84e8:; BB(0x004b84e8);
    /* 004b84e8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b84ea: push 0x63 */ { u32 v = 0x63u; r_esp -= 4; W32(r_esp, v); }
    /* 004b84ec: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b84f2: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4b84f7u); f_0047e3b0();
    /* 004b84f7: mov ecx, eax */ r_ecx = r_eax;
    /* 004b84f9: call 0x4dc4d0 */ r_esp -= 4; W32(r_esp, 0x4b84feu); f_004dc4d0();
L_004b84fe:; BB(0x004b84fe);
    /* 004b84fe: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004b8503: mov byte ptr [eax + 0xe8], 1 */ W8((u32)(r_eax+0xe8u), 0x1u);
    /* 004b850a: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004b850c: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004b8512: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b8514: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004b851a: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004b851d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b851fu); call_ind(t); }
    /* 004b851f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b8525: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4b852au); f_0047e3b0();
    /* 004b852a: mov ecx, eax */ r_ecx = r_eax;
    /* 004b852c: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x4b8531u); f_004c6cb0();
    /* 004b8531: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8534: jne 0x4b854d */ if (!fZ) goto L_004b854d;
L_004b8536:; BB(0x004b8536);
    /* 004b8536: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8538: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004b853e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b8540: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004b8546: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004b8549: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b854bu); call_ind(t); }
    /* 004b854b: jmp 0x4b856c */ goto L_004b856c;
L_004b854d:; BB(0x004b854d);
    /* 004b854d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b8553: call 0x47cba0 */ r_esp -= 4; W32(r_esp, 0x4b8558u); f_0047cba0();
    /* 004b8558: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b8559: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004b855f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b8561: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004b8567: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004b856a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b856cu); call_ind(t); }
L_004b856c:; BB(0x004b856c);
    /* 004b856c: jmp 0x4c353d */ goto L_004c353d;
L_004b8571:; BB(0x004b8571);
    /* 004b8571: movzx ecx, byte ptr [0x791e84] */ r_ecx = (u32)R8((u32)(0x791e84u));
    /* 004b8578: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b857a: je 0x4b858f */ if (fZ) goto L_004b858f;
L_004b857c:; BB(0x004b857c);
    /* 004b857c: mov byte ptr [0x791e84], 0 */ W8((u32)(0x791e84u), 0x0u);
    /* 004b8583: mov dword ptr [0x791ea0], 5 */ W32((u32)(0x791ea0u), 0x5u);
    /* 004b858d: jmp 0x4b8599 */ goto L_004b8599;
L_004b858f:; BB(0x004b858f);
    /* 004b858f: call 0x4c4290 */ r_esp -= 4; W32(r_esp, 0x4b8594u); f_004c4290();
    /* 004b8594: mov dword ptr [0x791ea0], eax */ W32((u32)(0x791ea0u), r_eax);
L_004b8599:; BB(0x004b8599);
    /* 004b8599: cmp dword ptr [0x791ea0], 5 */ {  u32 a = R32((u32)(0x791ea0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b85a0: jne 0x4b877b */ if (!fZ) goto L_004b877b;
L_004b85a6:; BB(0x004b85a6);
    /* 004b85a6: mov word ptr [ebp - 0x418], 0 */ W16((u32)(r_ebp+0xfffffbe8u), 0x0u);
    /* 004b85af: cmp dword ptr [0x791e7c], 5 */ {  u32 a = R32((u32)(0x791e7cu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b85b6: jne 0x4b85c3 */ if (!fZ) goto L_004b85c3;
L_004b85b8:; BB(0x004b85b8);
    /* 004b85b8: mov word ptr [ebp - 0x418], 0 */ W16((u32)(r_ebp+0xfffffbe8u), 0x0u);
    /* 004b85c1: jmp 0x4b8642 */ goto L_004b8642;
L_004b85c3:; BB(0x004b85c3);
    /* 004b85c3: cmp dword ptr [0x791e7c], 2 */ {  u32 a = R32((u32)(0x791e7cu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b85ca: jne 0x4b85d7 */ if (!fZ) goto L_004b85d7;
L_004b85cc:; BB(0x004b85cc);
    /* 004b85cc: mov word ptr [ebp - 0x418], 2 */ W16((u32)(r_ebp+0xfffffbe8u), 0x2u);
    /* 004b85d5: jmp 0x4b8642 */ goto L_004b8642;
L_004b85d7:; BB(0x004b85d7);
    /* 004b85d7: cmp dword ptr [0x791e7c], 1 */ {  u32 a = R32((u32)(0x791e7cu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b85de: jne 0x4b85eb */ if (!fZ) goto L_004b85eb;
L_004b85e0:; BB(0x004b85e0);
    /* 004b85e0: mov word ptr [ebp - 0x418], 1 */ W16((u32)(r_ebp+0xfffffbe8u), 0x1u);
    /* 004b85e9: jmp 0x4b8642 */ goto L_004b8642;
L_004b85eb:; BB(0x004b85eb);
    /* 004b85eb: cmp dword ptr [0x791e7c], 4 */ {  u32 a = R32((u32)(0x791e7cu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b85f2: jne 0x4b85ff */ if (!fZ) goto L_004b85ff;
L_004b85f4:; BB(0x004b85f4);
    /* 004b85f4: mov word ptr [ebp - 0x418], 2 */ W16((u32)(r_ebp+0xfffffbe8u), 0x2u);
    /* 004b85fd: jmp 0x4b8642 */ goto L_004b8642;
L_004b85ff:; BB(0x004b85ff);
    /* 004b85ff: cmp dword ptr [0x791e7c], 3 */ {  u32 a = R32((u32)(0x791e7cu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8606: jne 0x4b8613 */ if (!fZ) goto L_004b8613;
L_004b8608:; BB(0x004b8608);
    /* 004b8608: mov word ptr [ebp - 0x418], 1 */ W16((u32)(r_ebp+0xfffffbe8u), 0x1u);
    /* 004b8611: jmp 0x4b8642 */ goto L_004b8642;
L_004b8613:; BB(0x004b8613);
    /* 004b8613: cmp dword ptr [0x791e7c], 0 */ {  u32 a = R32((u32)(0x791e7cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b861a: jne 0x4b8627 */ if (!fZ) goto L_004b8627;
L_004b861c:; BB(0x004b861c);
    /* 004b861c: mov word ptr [ebp - 0x418], 3 */ W16((u32)(r_ebp+0xfffffbe8u), 0x3u);
    /* 004b8625: jmp 0x4b8642 */ goto L_004b8642;
L_004b8627:; BB(0x004b8627);
    /* 004b8627: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 004b8629: jne 0x4b8642 */ if (!fZ) goto L_004b8642;
L_004b862b:; BB(0x004b862b);
    /* 004b862b: push 0x3b4 */ { u32 v = 0x3b4u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8630: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8635: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 004b863a: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4b863fu); f_005e9f20();
    /* 004b863f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004b8642:; BB(0x004b8642);
    /* 004b8642: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b8648: call 0x47d6b0 */ r_esp -= 4; W32(r_esp, 0x4b864du); f_0047d6b0();
    /* 004b864d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b864f: jne 0x4b86a7 */ if (!fZ) goto L_004b86a7;
L_004b8651:; BB(0x004b8651);
    /* 004b8651: cmp dword ptr [0x791e74], 0 */ {  u32 a = R32((u32)(0x791e74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8658: jne 0x4b867f */ if (!fZ) goto L_004b867f;
L_004b865a:; BB(0x004b865a);
    /* 004b865a: mov cx, word ptr [ebp - 0x418] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffbe8u))) & 0xffffu);
    /* 004b8661: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b8662: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8664: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8666: call 0x4c3bb0 */ r_esp -= 4; W32(r_esp, 0x4b866bu); f_004c3bb0();
    /* 004b866b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b866c: mov edx, dword ptr [0x791eb8] */ r_edx = R32((u32)(0x791eb8u));
    /* 004b8672: mov ecx, dword ptr [edx + 0x9c] */ r_ecx = R32((u32)(r_edx+0x9cu));
    /* 004b8678: call 0x467fe0 */ r_esp -= 4; W32(r_esp, 0x4b867du); f_00467fe0();
    /* 004b867d: jmp 0x4b86a2 */ goto L_004b86a2;
L_004b867f:; BB(0x004b867f);
    /* 004b867f: mov ax, word ptr [ebp - 0x418] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffbe8u))) & 0xffffu);
    /* 004b8686: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b8687: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8689: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b868b: call 0x4c3bb0 */ r_esp -= 4; W32(r_esp, 0x4b8690u); f_004c3bb0();
    /* 004b8690: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b8691: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 004b8697: mov ecx, dword ptr [ecx + 0x9c] */ r_ecx = R32((u32)(r_ecx+0x9cu));
    /* 004b869d: call 0x467fe0 */ r_esp -= 4; W32(r_esp, 0x4b86a2u); f_00467fe0();
L_004b86a2:; BB(0x004b86a2);
    /* 004b86a2: jmp 0x4b8735 */ goto L_004b8735;
L_004b86a7:; BB(0x004b86a7);
    /* 004b86a7: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b86ad: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004b86b0: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x4b86b5u); f_004f6640();
    /* 004b86b5: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004b86b8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b86ba: jne 0x4b8716 */ if (!fZ) goto L_004b8716;
L_004b86bc:; BB(0x004b86bc);
    /* 004b86bc: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b86c2: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004b86c5: call 0x4f67d0 */ r_esp -= 4; W32(r_esp, 0x4b86cau); f_004f67d0();
    /* 004b86ca: mov esi, eax */ r_esi = r_eax;
    /* 004b86cc: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b86d2: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4b86d7u); f_0047e3b0();
    /* 004b86d7: mov ecx, eax */ r_ecx = r_eax;
    /* 004b86d9: call 0x4c6a70 */ r_esp -= 4; W32(r_esp, 0x4b86deu); f_004c6a70();
    /* 004b86de: mov edi, eax */ r_edi = r_eax;
    /* 004b86e0: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b86e6: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x4b86ebu); f_0047bc20();
    /* 004b86eb: mov ecx, eax */ r_ecx = r_eax;
    /* 004b86ed: mov eax, edi */ r_eax = r_edi;
    /* 004b86ef: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004b86f0: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004b86f0, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004b86f0, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004b86f2: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b86f4: jl 0x4b8716 */ if ((fS!=fO)) goto L_004b8716;
L_004b86f6:; BB(0x004b86f6);
    /* 004b86f6: mov dx, word ptr [ebp - 0x418] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffbe8u))) & 0xffffu);
    /* 004b86fd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b86fe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8700: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8702: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8704: mov eax, dword ptr [0x791eb8] */ r_eax = R32((u32)(0x791eb8u));
    /* 004b8709: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 004b870f: call 0x467fe0 */ r_esp -= 4; W32(r_esp, 0x4b8714u); f_00467fe0();
    /* 004b8714: jmp 0x4b8735 */ goto L_004b8735;
L_004b8716:; BB(0x004b8716);
    /* 004b8716: mov cx, word ptr [ebp - 0x418] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffbe8u))) & 0xffffu);
    /* 004b871d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b871e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8720: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8722: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004b8724: mov edx, dword ptr [0x791eb8] */ r_edx = R32((u32)(0x791eb8u));
    /* 004b872a: mov ecx, dword ptr [edx + 0x9c] */ r_ecx = R32((u32)(r_edx+0x9cu));
    /* 004b8730: call 0x467fe0 */ r_esp -= 4; W32(r_esp, 0x4b8735u); f_00467fe0();
L_004b8735:; BB(0x004b8735);
    /* 004b8735: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b873b: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4b8740u); f_0047e3b0();
    /* 004b8740: mov ecx, eax */ r_ecx = r_eax;
    /* 004b8742: call 0x4dc490 */ r_esp -= 4; W32(r_esp, 0x4b8747u); f_004dc490();
    /* 004b8747: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8749: mov eax, dword ptr [ebp - 0x858] */ r_eax = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004b874f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004b8751: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004b8757: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004b875a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b875cu); call_ind(t); }
    /* 004b875c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b875e: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004b8764: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b8766: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004b876c: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004b876f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b8771u); call_ind(t); }
    /* 004b8771: jmp 0x4c353d */ goto L_004c353d;
L_004b877b:; BB(0x004b877b);
    /* 004b877b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b8781: call 0x47d6b0 */ r_esp -= 4; W32(r_esp, 0x4b8786u); f_0047d6b0();
    /* 004b8786: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8789: jne 0x4b87b4 */ if (!fZ) goto L_004b87b4;
L_004b878b:; BB(0x004b878b);
    /* 004b878b: cmp dword ptr [0x791ea0], 2 */ {  u32 a = R32((u32)(0x791ea0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8792: je 0x4b879d */ if (fZ) goto L_004b879d;
L_004b8794:; BB(0x004b8794);
    /* 004b8794: cmp dword ptr [0x791ea0], 4 */ {  u32 a = R32((u32)(0x791ea0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b879b: jne 0x4b87b4 */ if (!fZ) goto L_004b87b4;
L_004b879d:; BB(0x004b879d);
    /* 004b879d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b87a3: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4b87a8u); f_0047e3b0();
    /* 004b87a8: mov ecx, eax */ r_ecx = r_eax;
    /* 004b87aa: call 0x4c7970 */ r_esp -= 4; W32(r_esp, 0x4b87afu); f_004c7970();
    /* 004b87af: mov dword ptr [0x791e44], eax */ W32((u32)(0x791e44u), r_eax);
L_004b87b4:; BB(0x004b87b4);
    /* 004b87b4: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b87ba: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4b87bfu); f_0047e3b0();
    /* 004b87bf: mov ecx, eax */ r_ecx = r_eax;
    /* 004b87c1: call 0x4dc490 */ r_esp -= 4; W32(r_esp, 0x4b87c6u); f_004dc490();
    /* 004b87c6: cmp dword ptr [0x791ea0], 2 */ {  u32 a = R32((u32)(0x791ea0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b87cd: jne 0x4b8828 */ if (!fZ) goto L_004b8828;
L_004b87cf:; BB(0x004b87cf);
    /* 004b87cf: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b87d5: call 0x47d6b0 */ r_esp -= 4; W32(r_esp, 0x4b87dau); f_0047d6b0();
    /* 004b87da: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b87dd: jne 0x4b8828 */ if (!fZ) goto L_004b8828;
L_004b87df:; BB(0x004b87df);
    /* 004b87df: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b87e5: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4b87eau); f_0047e3b0();
    /* 004b87ea: mov ecx, eax */ r_ecx = r_eax;
    /* 004b87ec: call 0x4c6a70 */ r_esp -= 4; W32(r_esp, 0x4b87f1u); f_004c6a70();
    /* 004b87f1: mov esi, eax */ r_esi = r_eax;
    /* 004b87f3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b87f9: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x4b87feu); f_0047bc20();
    /* 004b87fe: mov ecx, eax */ r_ecx = r_eax;
    /* 004b8800: mov eax, esi */ r_eax = r_esi;
    /* 004b8802: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004b8803: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004b8803, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004b8803, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004b8805: mov dword ptr [ebp - 0x41c], eax */ W32((u32)(r_ebp+0xfffffbe4u), r_eax);
    /* 004b880b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b8811: call 0x47bd60 */ r_esp -= 4; W32(r_esp, 0x4b8816u); f_0047bd60();
    /* 004b8816: cmp dword ptr [ebp - 0x41c], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffbe4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b881c: jge 0x4b8828 */ if ((fS==fO)) goto L_004b8828;
L_004b881e:; BB(0x004b881e);
    /* 004b881e: mov dword ptr [0x791ea0], 1 */ W32((u32)(0x791ea0u), 0x1u);
L_004b8828:; BB(0x004b8828);
    /* 004b8828: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 004b882a: mov edx, dword ptr [ebp - 0x858] */ r_edx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004b8830: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004b8832: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004b8838: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004b883b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4b883du); call_ind(t); }
    /* 004b883d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b883f: mov eax, dword ptr [ebp - 0x858] */ r_eax = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004b8845: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004b8847: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004b884d: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004b8850: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b8852u); call_ind(t); }
    /* 004b8852: jmp 0x4c353d */ goto L_004c353d;
L_004b8857:; BB(0x004b8857);
    /* 004b8857: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b885d: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x4b8862u); f_0047e190();
    /* 004b8862: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8865: jne 0x4bb558 */ if (!fZ) goto L_004bb558;
L_004b886b:; BB(0x004b886b);
    /* 004b886b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b8871: call 0x47e280 */ r_esp -= 4; W32(r_esp, 0x4b8876u); f_0047e280();
    /* 004b8876: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8878: je 0x4b8891 */ if (fZ) goto L_004b8891;
L_004b887a:; BB(0x004b887a);
    /* 004b887a: push 0x3e9 */ { u32 v = 0x3e9u; r_esp -= 4; W32(r_esp, v); }
    /* 004b887f: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8884: push 0x6bf2b4 */ { u32 v = 0x6bf2b4u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8889: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4b888eu); f_005e9f20();
    /* 004b888e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004b8891:; BB(0x004b8891);
    /* 004b8891: lea edx, [ebp - 0x428] */ r_edx = (u32)(r_ebp+0xfffffbd8u);
    /* 004b8897: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b8898: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b889e: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4b88a3u); f_0047e3b0();
    /* 004b88a3: mov ecx, eax */ r_ecx = r_eax;
    /* 004b88a5: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x4b88aau); f_004c7c40();
    /* 004b88aa: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004b88b1: lea eax, [ebp - 0x430] */ r_eax = (u32)(r_ebp+0xfffffbd0u);
    /* 004b88b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b88b8: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b88be: mov ecx, dword ptr [ecx + 0x24] */ r_ecx = R32((u32)(r_ecx+0x24u));
    /* 004b88c1: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x4b88c6u); f_004c7c40();
    /* 004b88c6: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004b88ca: lea edx, [ebp - 0x430] */ r_edx = (u32)(r_ebp+0xfffffbd0u);
    /* 004b88d0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b88d1: lea ecx, [ebp - 0x428] */ r_ecx = (u32)(r_ebp+0xfffffbd8u);
    /* 004b88d7: call 0x4846a0 */ r_esp -= 4; W32(r_esp, 0x4b88dcu); f_004846a0();
    /* 004b88dc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b88de: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b88e0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b88e2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004b88e4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004b88e6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004b88e8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004b88ea: lea eax, [ebp - 0x420] */ r_eax = (u32)(r_ebp+0xfffffbe0u);
    /* 004b88f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b88f1: lea ecx, [ebp - 0x428] */ r_ecx = (u32)(r_ebp+0xfffffbd8u);
    /* 004b88f7: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x4b88fcu); f_00485940();
    /* 004b88fc: mov byte ptr [ebp - 4], 2 */ W8((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 004b8900: lea ecx, [ebp - 0x645] */ r_ecx = (u32)(r_ebp+0xfffff9bbu);
    /* 004b8906: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b8907: lea ecx, [ebp - 0x420] */ r_ecx = (u32)(r_ebp+0xfffffbe0u);
    /* 004b890d: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x4b8912u); f_004a2160();
    /* 004b8912: mov dl, byte ptr [eax] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 004b8914: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b8915: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b891b: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4b8920u); f_0047e3b0();
    /* 004b8920: mov ecx, eax */ r_ecx = r_eax;
    /* 004b8922: call 0x4da4d0 */ r_esp -= 4; W32(r_esp, 0x4b8927u); f_004da4d0();
    /* 004b8927: lea ecx, [ebp - 0x430] */ r_ecx = (u32)(r_ebp+0xfffffbd0u);
    /* 004b892d: call 0x48f150 */ r_esp -= 4; W32(r_esp, 0x4b8932u); f_0048f150();
    /* 004b8932: mov word ptr [ebp - 0x434], ax */ W16((u32)(r_ebp+0xfffffbccu), (u16)r_eax);
    /* 004b8939: movsx eax, word ptr [ebp - 0x434] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffbccu));
    /* 004b8940: mov dword ptr [ebp - 0x860], eax */ W32((u32)(r_ebp+0xfffff7a0u), r_eax);
    /* 004b8946: mov ecx, dword ptr [ebp - 0x860] */ r_ecx = R32((u32)(r_ebp+0xfffff7a0u));
    /* 004b894c: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004b894f: mov dword ptr [ebp - 0x860], ecx */ W32((u32)(r_ebp+0xfffff7a0u), r_ecx);
    /* 004b8955: cmp dword ptr [ebp - 0x860], 0x45 */ {  u32 a = R32((u32)(r_ebp+0xfffff7a0u)); u32 b = 0x45u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004b895c: ja 0x4b896b */ if ((!fC&&!fZ)) goto L_004b896b;
L_004b895e:; BB(0x004b895e);
    /* 004b895e: mov edx, dword ptr [ebp - 0x860] */ r_edx = R32((u32)(r_ebp+0xfffff7a0u));
    /* 004b8964: jmp dword ptr [edx*4 + 0x4c35e0] */ { u32 t = R32((u32)(r_edx*4+0x4c35e0u)); switch (t) { case 0x4c34fcu: goto L_004c34fc; case 0x4c34d0u: goto L_004c34d0; case 0x4c34a4u: goto L_004c34a4; case 0x4c343cu: goto L_004c343c; case 0x4c3324u: goto L_004c3324; case 0x4c145au: goto L_004c145a; case 0x4c1059u: goto L_004c1059; case 0x4bfc70u: goto L_004bfc70; case 0x4be895u: goto L_004be895; case 0x4be7f1u: goto L_004be7f1; case 0x4c353du: goto L_004c353d; case 0x4be479u: goto L_004be479; case 0x4be228u: goto L_004be228; case 0x4be1cau: goto L_004be1ca; case 0x4be05du: goto L_004be05d; case 0x4bdfa3u: goto L_004bdfa3; case 0x4bd83cu: goto L_004bd83c; case 0x4bda3au: goto L_004bda3a; case 0x4b8857u: goto L_004b8857; case 0x4bd6e4u: goto L_004bd6e4; case 0x4b8571u: goto L_004b8571; case 0x4b84c0u: goto L_004b84c0; case 0x4b83e5u: goto L_004b83e5; case 0x4b822eu: goto L_004b822e; case 0x4b814eu: goto L_004b814e; case 0x4b7e74u: goto L_004b7e74; case 0x4b8a1fu: goto L_004b8a1f; case 0x4b8aafu: goto L_004b8aaf; case 0x4b8b3fu: goto L_004b8b3f; case 0x4b8bcfu: goto L_004b8bcf; case 0x4b8c5fu: goto L_004b8c5f; case 0x4b8cefu: goto L_004b8cef; case 0x4b8d7fu: goto L_004b8d7f; case 0x4b8e0fu: goto L_004b8e0f; case 0x4b8e9fu: goto L_004b8e9f; case 0x4b8f2fu: goto L_004b8f2f; case 0x4b8fbfu: goto L_004b8fbf; case 0x4b904fu: goto L_004b904f; case 0x4b90dfu: goto L_004b90df; case 0x4b916fu: goto L_004b916f; case 0x4b91ffu: goto L_004b91ff; case 0x4b928fu: goto L_004b928f; case 0x4b931fu: goto L_004b931f; case 0x4b93afu: goto L_004b93af; case 0x4b9487u: goto L_004b9487; case 0x4b9517u: goto L_004b9517; case 0x4b95a7u: goto L_004b95a7; case 0x4b9637u: goto L_004b9637; case 0x4b96c7u: goto L_004b96c7; case 0x4b9757u: goto L_004b9757; case 0x4b97e7u: goto L_004b97e7; case 0x4b9877u: goto L_004b9877; case 0x4b9920u: goto L_004b9920; case 0x4b99c9u: goto L_004b99c9; case 0x4b9a59u: goto L_004b9a59; case 0x4b9ae9u: goto L_004b9ae9; case 0x4b9b79u: goto L_004b9b79; case 0x4b9c09u: goto L_004b9c09; case 0x4b9c99u: goto L_004b9c99; case 0x4b9d29u: goto L_004b9d29; case 0x4b9db9u: goto L_004b9db9; case 0x4b9e49u: goto L_004b9e49; case 0x4b9ed9u: goto L_004b9ed9; case 0x4b9f69u: goto L_004b9f69; case 0x4b9ff9u: goto L_004b9ff9; case 0x4ba089u: goto L_004ba089; case 0x4ba119u: goto L_004ba119; case 0x4ba1a9u: goto L_004ba1a9; case 0x4ba239u: goto L_004ba239; case 0x4ba2c9u: goto L_004ba2c9; case 0x4ba359u: goto L_004ba359; case 0x4ba3e9u: goto L_004ba3e9; case 0x4ba479u: goto L_004ba479; case 0x4ba509u: goto L_004ba509; case 0x4ba599u: goto L_004ba599; case 0x4ba629u: goto L_004ba629; case 0x4ba701u: goto L_004ba701; case 0x4ba7aau: goto L_004ba7aa; case 0x4ba83au: goto L_004ba83a; case 0x4ba8cau: goto L_004ba8ca; case 0x4ba9ebu: goto L_004ba9eb; case 0x4baac3u: goto L_004baac3; case 0x4bab53u: goto L_004bab53; case 0x4bac2bu: goto L_004bac2b; case 0x4bad03u: goto L_004bad03; case 0x4bad93u: goto L_004bad93; case 0x4bae23u: goto L_004bae23; case 0x4baeb3u: goto L_004baeb3; case 0x4baf5cu: goto L_004baf5c; case 0x4bb005u: goto L_004bb005; case 0x4bb095u: goto L_004bb095; case 0x4bb13eu: goto L_004bb13e; case 0x4bb1e7u: goto L_004bb1e7; case 0x4bb277u: goto L_004bb277; case 0x4bb307u: goto L_004bb307; case 0x4bb397u: goto L_004bb397; case 0x4bba1au: goto L_004bba1a; case 0x4bba7bu: goto L_004bba7b; case 0x4bbadcu: goto L_004bbadc; case 0x4bbb3du: goto L_004bbb3d; case 0x4bbb9eu: goto L_004bbb9e; case 0x4bbbffu: goto L_004bbbff; case 0x4bbc60u: goto L_004bbc60; case 0x4bbcc1u: goto L_004bbcc1; case 0x4bbd22u: goto L_004bbd22; case 0x4bbd83u: goto L_004bbd83; case 0x4bbde4u: goto L_004bbde4; case 0x4bbe45u: goto L_004bbe45; case 0x4bbea6u: goto L_004bbea6; case 0x4bbf07u: goto L_004bbf07; case 0x4bbf81u: goto L_004bbf81; case 0x4bbffbu: goto L_004bbffb; case 0x4bc05cu: goto L_004bc05c; case 0x4bc0bdu: goto L_004bc0bd; case 0x4bc11eu: goto L_004bc11e; case 0x4bc17fu: goto L_004bc17f; case 0x4bc1e0u: goto L_004bc1e0; case 0x4bc241u: goto L_004bc241; case 0x4bc2a2u: goto L_004bc2a2; case 0x4bc31cu: goto L_004bc31c; case 0x4bc37du: goto L_004bc37d; case 0x4bc3deu: goto L_004bc3de; case 0x4bc458u: goto L_004bc458; case 0x4bc4b9u: goto L_004bc4b9; case 0x4bc51au: goto L_004bc51a; case 0x4bc594u: goto L_004bc594; case 0x4bc60eu: goto L_004bc60e; case 0x4bc66fu: goto L_004bc66f; case 0x4bc6e9u: goto L_004bc6e9; case 0x4bc74au: goto L_004bc74a; case 0x4bc7a8u: goto L_004bc7a8; default: UNSUP(0x004b8964, "jump table entry is not a known target"); } }
L_004b896b:; BB(0x004b896b);
    /* 004b896b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004b896d: lea ecx, [ebp - 0x430] */ r_ecx = (u32)(r_ebp+0xfffffbd0u);
    /* 004b8973: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4b8978u); f_0048edf0();
    /* 004b8978: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004b897b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b897d: je 0x4b8996 */ if (fZ) goto L_004b8996;
L_004b897f:; BB(0x004b897f);
    /* 004b897f: push 0x3f8 */ { u32 v = 0x3f8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8984: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8989: push 0x6bf280 */ { u32 v = 0x6bf280u; r_esp -= 4; W32(r_esp, v); }
    /* 004b898e: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4b8993u); f_005e9f20();
    /* 004b8993: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004b8996:; BB(0x004b8996);
    /* 004b8996: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b899c: call 0x47d6b0 */ r_esp -= 4; W32(r_esp, 0x4b89a1u); f_0047d6b0();
    /* 004b89a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b89a3: jne 0x4b89ce */ if (!fZ) goto L_004b89ce;
L_004b89a5:; BB(0x004b89a5);
    /* 004b89a5: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b89aa: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004b89b0: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004b89b6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b89bc: mov ecx, dword ptr [ecx + 0xdc] */ r_ecx = R32((u32)(r_ecx+0xdcu));
    /* 004b89c2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004b89c4: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b89ca: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b89ccu); call_ind(t); }
    /* 004b89cc: jmp 0x4b89f4 */ goto L_004b89f4;
L_004b89ce:; BB(0x004b89ce);
    /* 004b89ce: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b89d3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b89d9: mov edx, dword ptr [ecx + 0xdc] */ r_edx = R32((u32)(r_ecx+0xdcu));
    /* 004b89df: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004b89e4: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004b89ea: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004b89ec: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b89f2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b89f4u); call_ind(t); }
L_004b89f4:; BB(0x004b89f4);
    /* 004b89f4: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b89f9: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b89ff: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004b8a05: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004b8a0a: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004b8a10: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004b8a12: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b8a18: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b8a1au); call_ind(t); }
    /* 004b8a1a: jmp 0x4bb419 */ goto L_004bb419;
L_004b8a1f:; BB(0x004b8a1f);
    /* 004b8a1f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8a21: lea ecx, [ebp - 0x430] */ r_ecx = (u32)(r_ebp+0xfffffbd0u);
    /* 004b8a27: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4b8a2cu); f_0048edf0();
    /* 004b8a2c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004b8a2f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8a31: je 0x4b8a4a */ if (fZ) goto L_004b8a4a;
L_004b8a33:; BB(0x004b8a33);
    /* 004b8a33: push 0x400 */ { u32 v = 0x400u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8a38: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8a3d: push 0x6bf280 */ { u32 v = 0x6bf280u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8a42: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4b8a47u); f_005e9f20();
    /* 004b8a47: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004b8a4a:; BB(0x004b8a4a);
    /* 004b8a4a: push 0x6bf260 */ { u32 v = 0x6bf260u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8a4f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4b8a54u); f_00630f40();
    /* 004b8a54: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b8a57: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b8a58: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004b8a5d: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004b8a63: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004b8a69: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004b8a6f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b8a71: mov ecx, eax */ r_ecx = r_eax;
    /* 004b8a73: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b8a79: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b8a7bu); call_ind(t); }
    /* 004b8a7b: push 0x6bf244 */ { u32 v = 0x6bf244u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8a80: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4b8a85u); f_00630f40();
    /* 004b8a85: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b8a88: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b8a89: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b8a8f: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004b8a95: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004b8a9a: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004b8aa0: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004b8aa2: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b8aa8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b8aaau); call_ind(t); }
    /* 004b8aaa: jmp 0x4bb419 */ goto L_004bb419;
L_004b8aaf:; BB(0x004b8aaf);
    /* 004b8aaf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8ab1: lea ecx, [ebp - 0x430] */ r_ecx = (u32)(r_ebp+0xfffffbd0u);
    /* 004b8ab7: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4b8abcu); f_0048edf0();
    /* 004b8abc: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004b8abf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8ac1: je 0x4b8ada */ if (fZ) goto L_004b8ada;
L_004b8ac3:; BB(0x004b8ac3);
    /* 004b8ac3: push 0x405 */ { u32 v = 0x405u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8ac8: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8acd: push 0x6bf280 */ { u32 v = 0x6bf280u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8ad2: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4b8ad7u); f_005e9f20();
    /* 004b8ad7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004b8ada:; BB(0x004b8ada);
    /* 004b8ada: push 0x6bf218 */ { u32 v = 0x6bf218u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8adf: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4b8ae4u); f_00630f40();
    /* 004b8ae4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b8ae7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b8ae8: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004b8aed: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004b8af3: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004b8af9: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004b8aff: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b8b01: mov ecx, eax */ r_ecx = r_eax;
    /* 004b8b03: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b8b09: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b8b0bu); call_ind(t); }
    /* 004b8b0b: push 0x6bf1fc */ { u32 v = 0x6bf1fcu; r_esp -= 4; W32(r_esp, v); }
    /* 004b8b10: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4b8b15u); f_00630f40();
    /* 004b8b15: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b8b18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b8b19: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b8b1f: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004b8b25: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004b8b2a: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004b8b30: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004b8b32: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b8b38: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b8b3au); call_ind(t); }
    /* 004b8b3a: jmp 0x4bb419 */ goto L_004bb419;
L_004b8b3f:; BB(0x004b8b3f);
    /* 004b8b3f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8b41: lea ecx, [ebp - 0x430] */ r_ecx = (u32)(r_ebp+0xfffffbd0u);
    /* 004b8b47: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4b8b4cu); f_0048edf0();
    /* 004b8b4c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004b8b4f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8b51: je 0x4b8b6a */ if (fZ) goto L_004b8b6a;
L_004b8b53:; BB(0x004b8b53);
    /* 004b8b53: push 0x40a */ { u32 v = 0x40au; r_esp -= 4; W32(r_esp, v); }
    /* 004b8b58: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8b5d: push 0x6bf280 */ { u32 v = 0x6bf280u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8b62: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4b8b67u); f_005e9f20();
    /* 004b8b67: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004b8b6a:; BB(0x004b8b6a);
    /* 004b8b6a: push 0x6bf218 */ { u32 v = 0x6bf218u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8b6f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4b8b74u); f_00630f40();
    /* 004b8b74: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b8b77: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b8b78: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004b8b7d: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004b8b83: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004b8b89: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004b8b8f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b8b91: mov ecx, eax */ r_ecx = r_eax;
    /* 004b8b93: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b8b99: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b8b9bu); call_ind(t); }
    /* 004b8b9b: push 0x6bf1e4 */ { u32 v = 0x6bf1e4u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8ba0: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4b8ba5u); f_00630f40();
    /* 004b8ba5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b8ba8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b8ba9: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b8baf: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004b8bb5: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004b8bba: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004b8bc0: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004b8bc2: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b8bc8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b8bcau); call_ind(t); }
    /* 004b8bca: jmp 0x4bb419 */ goto L_004bb419;
L_004b8bcf:; BB(0x004b8bcf);
    /* 004b8bcf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8bd1: lea ecx, [ebp - 0x430] */ r_ecx = (u32)(r_ebp+0xfffffbd0u);
    /* 004b8bd7: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4b8bdcu); f_0048edf0();
    /* 004b8bdc: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004b8bdf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8be1: jne 0x4b8bfa */ if (!fZ) goto L_004b8bfa;
L_004b8be3:; BB(0x004b8be3);
    /* 004b8be3: push 0x40f */ { u32 v = 0x40fu; r_esp -= 4; W32(r_esp, v); }
    /* 004b8be8: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8bed: push 0x6bf1b0 */ { u32 v = 0x6bf1b0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8bf2: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4b8bf7u); f_005e9f20();
    /* 004b8bf7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004b8bfa:; BB(0x004b8bfa);
    /* 004b8bfa: push 0x6bf190 */ { u32 v = 0x6bf190u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8bff: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4b8c04u); f_00630f40();
    /* 004b8c04: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b8c07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b8c08: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004b8c0d: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004b8c13: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004b8c19: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004b8c1f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b8c21: mov ecx, eax */ r_ecx = r_eax;
    /* 004b8c23: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b8c29: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b8c2bu); call_ind(t); }
    /* 004b8c2b: push 0x6bf174 */ { u32 v = 0x6bf174u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8c30: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4b8c35u); f_00630f40();
    /* 004b8c35: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b8c38: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b8c39: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b8c3f: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004b8c45: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004b8c4a: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004b8c50: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004b8c52: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b8c58: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b8c5au); call_ind(t); }
    /* 004b8c5a: jmp 0x4bb419 */ goto L_004bb419;
L_004b8c5f:; BB(0x004b8c5f);
    /* 004b8c5f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8c61: lea ecx, [ebp - 0x430] */ r_ecx = (u32)(r_ebp+0xfffffbd0u);
    /* 004b8c67: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4b8c6cu); f_0048edf0();
    /* 004b8c6c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004b8c6f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8c71: je 0x4b8c8a */ if (fZ) goto L_004b8c8a;
L_004b8c73:; BB(0x004b8c73);
    /* 004b8c73: push 0x414 */ { u32 v = 0x414u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8c78: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8c7d: push 0x6bf280 */ { u32 v = 0x6bf280u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8c82: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4b8c87u); f_005e9f20();
    /* 004b8c87: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004b8c8a:; BB(0x004b8c8a);
    /* 004b8c8a: push 0x6bf15c */ { u32 v = 0x6bf15cu; r_esp -= 4; W32(r_esp, v); }
    /* 004b8c8f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4b8c94u); f_00630f40();
    /* 004b8c94: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b8c97: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b8c98: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004b8c9d: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004b8ca3: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004b8ca9: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004b8caf: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b8cb1: mov ecx, eax */ r_ecx = r_eax;
    /* 004b8cb3: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b8cb9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b8cbbu); call_ind(t); }
    /* 004b8cbb: push 0x6bf13c */ { u32 v = 0x6bf13cu; r_esp -= 4; W32(r_esp, v); }
    /* 004b8cc0: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4b8cc5u); f_00630f40();
    /* 004b8cc5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b8cc8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b8cc9: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b8ccf: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004b8cd5: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004b8cda: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004b8ce0: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004b8ce2: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b8ce8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b8ceau); call_ind(t); }
    /* 004b8cea: jmp 0x4bb419 */ goto L_004bb419;
L_004b8cef:; BB(0x004b8cef);
    /* 004b8cef: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8cf1: lea ecx, [ebp - 0x430] */ r_ecx = (u32)(r_ebp+0xfffffbd0u);
    /* 004b8cf7: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4b8cfcu); f_0048edf0();
    /* 004b8cfc: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004b8cff: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8d01: je 0x4b8d1a */ if (fZ) goto L_004b8d1a;
L_004b8d03:; BB(0x004b8d03);
    /* 004b8d03: push 0x419 */ { u32 v = 0x419u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8d08: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8d0d: push 0x6bf280 */ { u32 v = 0x6bf280u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8d12: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4b8d17u); f_005e9f20();
    /* 004b8d17: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004b8d1a:; BB(0x004b8d1a);
    /* 004b8d1a: push 0x6bf15c */ { u32 v = 0x6bf15cu; r_esp -= 4; W32(r_esp, v); }
    /* 004b8d1f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4b8d24u); f_00630f40();
    /* 004b8d24: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b8d27: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b8d28: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004b8d2d: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004b8d33: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004b8d39: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004b8d3f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b8d41: mov ecx, eax */ r_ecx = r_eax;
    /* 004b8d43: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b8d49: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b8d4bu); call_ind(t); }
    /* 004b8d4b: push 0x6bf124 */ { u32 v = 0x6bf124u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8d50: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4b8d55u); f_00630f40();
    /* 004b8d55: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b8d58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b8d59: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b8d5f: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004b8d65: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004b8d6a: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004b8d70: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004b8d72: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b8d78: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b8d7au); call_ind(t); }
    /* 004b8d7a: jmp 0x4bb419 */ goto L_004bb419;
L_004b8d7f:; BB(0x004b8d7f);
    /* 004b8d7f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8d81: lea ecx, [ebp - 0x430] */ r_ecx = (u32)(r_ebp+0xfffffbd0u);
    /* 004b8d87: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4b8d8cu); f_0048edf0();
    /* 004b8d8c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004b8d8f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8d91: je 0x4b8daa */ if (fZ) goto L_004b8daa;
L_004b8d93:; BB(0x004b8d93);
    /* 004b8d93: push 0x41e */ { u32 v = 0x41eu; r_esp -= 4; W32(r_esp, v); }
    /* 004b8d98: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8d9d: push 0x6bf280 */ { u32 v = 0x6bf280u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8da2: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4b8da7u); f_005e9f20();
    /* 004b8da7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004b8daa:; BB(0x004b8daa);
    /* 004b8daa: push 0x6bf1fc */ { u32 v = 0x6bf1fcu; r_esp -= 4; W32(r_esp, v); }
    /* 004b8daf: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4b8db4u); f_00630f40();
    /* 004b8db4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b8db7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b8db8: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004b8dbd: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004b8dc3: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004b8dc9: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004b8dcf: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b8dd1: mov ecx, eax */ r_ecx = r_eax;
    /* 004b8dd3: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b8dd9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b8ddbu); call_ind(t); }
    /* 004b8ddb: push 0x6bf174 */ { u32 v = 0x6bf174u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8de0: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4b8de5u); f_00630f40();
    /* 004b8de5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b8de8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b8de9: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b8def: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004b8df5: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004b8dfa: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004b8e00: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004b8e02: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b8e08: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b8e0au); call_ind(t); }
    /* 004b8e0a: jmp 0x4bb419 */ goto L_004bb419;
L_004b8e0f:; BB(0x004b8e0f);
    /* 004b8e0f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8e11: lea ecx, [ebp - 0x430] */ r_ecx = (u32)(r_ebp+0xfffffbd0u);
    /* 004b8e17: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4b8e1cu); f_0048edf0();
    /* 004b8e1c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004b8e1f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8e21: je 0x4b8e3a */ if (fZ) goto L_004b8e3a;
L_004b8e23:; BB(0x004b8e23);
    /* 004b8e23: push 0x423 */ { u32 v = 0x423u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8e28: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8e2d: push 0x6bf280 */ { u32 v = 0x6bf280u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8e32: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4b8e37u); f_005e9f20();
    /* 004b8e37: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004b8e3a:; BB(0x004b8e3a);
    /* 004b8e3a: push 0x6bf1fc */ { u32 v = 0x6bf1fcu; r_esp -= 4; W32(r_esp, v); }
    /* 004b8e3f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4b8e44u); f_00630f40();
    /* 004b8e44: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b8e47: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b8e48: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004b8e4d: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004b8e53: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004b8e59: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004b8e5f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b8e61: mov ecx, eax */ r_ecx = r_eax;
    /* 004b8e63: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b8e69: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b8e6bu); call_ind(t); }
    /* 004b8e6b: push 0x6bf13c */ { u32 v = 0x6bf13cu; r_esp -= 4; W32(r_esp, v); }
    /* 004b8e70: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4b8e75u); f_00630f40();
    /* 004b8e75: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b8e78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b8e79: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b8e7f: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004b8e85: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004b8e8a: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004b8e90: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004b8e92: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b8e98: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b8e9au); call_ind(t); }
    /* 004b8e9a: jmp 0x4bb419 */ goto L_004bb419;
L_004b8e9f:; BB(0x004b8e9f);
    /* 004b8e9f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8ea1: lea ecx, [ebp - 0x430] */ r_ecx = (u32)(r_ebp+0xfffffbd0u);
    /* 004b8ea7: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4b8eacu); f_0048edf0();
    /* 004b8eac: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004b8eaf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8eb1: je 0x4b8eca */ if (fZ) goto L_004b8eca;
L_004b8eb3:; BB(0x004b8eb3);
    /* 004b8eb3: push 0x428 */ { u32 v = 0x428u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8eb8: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8ebd: push 0x6bf280 */ { u32 v = 0x6bf280u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8ec2: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4b8ec7u); f_005e9f20();
    /* 004b8ec7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004b8eca:; BB(0x004b8eca);
    /* 004b8eca: push 0x6bf1fc */ { u32 v = 0x6bf1fcu; r_esp -= 4; W32(r_esp, v); }
    /* 004b8ecf: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4b8ed4u); f_00630f40();
    /* 004b8ed4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b8ed7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b8ed8: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004b8edd: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004b8ee3: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004b8ee9: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004b8eef: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b8ef1: mov ecx, eax */ r_ecx = r_eax;
    /* 004b8ef3: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b8ef9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b8efbu); call_ind(t); }
    /* 004b8efb: push 0x6bf124 */ { u32 v = 0x6bf124u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8f00: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4b8f05u); f_00630f40();
    /* 004b8f05: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b8f08: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b8f09: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b8f0f: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004b8f15: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004b8f1a: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004b8f20: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004b8f22: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b8f28: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b8f2au); call_ind(t); }
    /* 004b8f2a: jmp 0x4bb419 */ goto L_004bb419;
L_004b8f2f:; BB(0x004b8f2f);
    /* 004b8f2f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8f31: lea ecx, [ebp - 0x430] */ r_ecx = (u32)(r_ebp+0xfffffbd0u);
    /* 004b8f37: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4b8f3cu); f_0048edf0();
    /* 004b8f3c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004b8f3f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8f41: je 0x4b8f5a */ if (fZ) goto L_004b8f5a;
L_004b8f43:; BB(0x004b8f43);
    /* 004b8f43: push 0x42d */ { u32 v = 0x42du; r_esp -= 4; W32(r_esp, v); }
    /* 004b8f48: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8f4d: push 0x6bf280 */ { u32 v = 0x6bf280u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8f52: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4b8f57u); f_005e9f20();
    /* 004b8f57: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004b8f5a:; BB(0x004b8f5a);
    /* 004b8f5a: push 0x6bf1e4 */ { u32 v = 0x6bf1e4u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8f5f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4b8f64u); f_00630f40();
    /* 004b8f64: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b8f67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b8f68: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004b8f6d: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004b8f73: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004b8f79: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004b8f7f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b8f81: mov ecx, eax */ r_ecx = r_eax;
    /* 004b8f83: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b8f89: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b8f8bu); call_ind(t); }
    /* 004b8f8b: push 0x6bf174 */ { u32 v = 0x6bf174u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8f90: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4b8f95u); f_00630f40();
    /* 004b8f95: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b8f98: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b8f99: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b8f9f: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004b8fa5: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004b8faa: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004b8fb0: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004b8fb2: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b8fb8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b8fbau); call_ind(t); }
    /* 004b8fba: jmp 0x4bb419 */ goto L_004bb419;
L_004b8fbf:; BB(0x004b8fbf);
    /* 004b8fbf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8fc1: lea ecx, [ebp - 0x430] */ r_ecx = (u32)(r_ebp+0xfffffbd0u);
    /* 004b8fc7: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4b8fccu); f_0048edf0();
    /* 004b8fcc: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004b8fcf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8fd1: je 0x4b8fea */ if (fZ) goto L_004b8fea;
L_004b8fd3:; BB(0x004b8fd3);
    /* 004b8fd3: push 0x432 */ { u32 v = 0x432u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8fd8: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8fdd: push 0x6bf280 */ { u32 v = 0x6bf280u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8fe2: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4b8fe7u); f_005e9f20();
    /* 004b8fe7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004b8fea:; BB(0x004b8fea);
    /* 004b8fea: push 0x6bf1e4 */ { u32 v = 0x6bf1e4u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8fef: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4b8ff4u); f_00630f40();
    /* 004b8ff4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b8ff7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b8ff8: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004b8ffd: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004b9003: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004b9009: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004b900f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b9011: mov ecx, eax */ r_ecx = r_eax;
    /* 004b9013: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b9019: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b901bu); call_ind(t); }
    /* 004b901b: push 0x6bf13c */ { u32 v = 0x6bf13cu; r_esp -= 4; W32(r_esp, v); }
    /* 004b9020: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4b9025u); f_00630f40();
    /* 004b9025: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b9028: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b9029: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b902f: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004b9035: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004b903a: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004b9040: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004b9042: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b9048: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b904au); call_ind(t); }
    /* 004b904a: jmp 0x4bb419 */ goto L_004bb419;
L_004b904f:; BB(0x004b904f);
    /* 004b904f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9051: lea ecx, [ebp - 0x430] */ r_ecx = (u32)(r_ebp+0xfffffbd0u);
    /* 004b9057: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4b905cu); f_0048edf0();
    /* 004b905c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004b905f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b9061: je 0x4b907a */ if (fZ) goto L_004b907a;
L_004b9063:; BB(0x004b9063);
    /* 004b9063: push 0x437 */ { u32 v = 0x437u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9068: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b906d: push 0x6bf280 */ { u32 v = 0x6bf280u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9072: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4b9077u); f_005e9f20();
    /* 004b9077: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004b907a:; BB(0x004b907a);
    /* 004b907a: push 0x6bf1e4 */ { u32 v = 0x6bf1e4u; r_esp -= 4; W32(r_esp, v); }
    /* 004b907f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4b9084u); f_00630f40();
    /* 004b9084: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b9087: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b9088: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004b908d: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004b9093: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004b9099: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004b909f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b90a1: mov ecx, eax */ r_ecx = r_eax;
    /* 004b90a3: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b90a9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b90abu); call_ind(t); }
    /* 004b90ab: push 0x6bf124 */ { u32 v = 0x6bf124u; r_esp -= 4; W32(r_esp, v); }
    /* 004b90b0: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4b90b5u); f_00630f40();
    /* 004b90b5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b90b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b90b9: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b90bf: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004b90c5: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004b90ca: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004b90d0: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004b90d2: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b90d8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b90dau); call_ind(t); }
    /* 004b90da: jmp 0x4bb419 */ goto L_004bb419;
L_004b90df:; BB(0x004b90df);
    /* 004b90df: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004b90e1: lea ecx, [ebp - 0x430] */ r_ecx = (u32)(r_ebp+0xfffffbd0u);
    /* 004b90e7: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4b90ecu); f_0048edf0();
    /* 004b90ec: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004b90ef: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b90f1: je 0x4b910a */ if (fZ) goto L_004b910a;
L_004b90f3:; BB(0x004b90f3);
    /* 004b90f3: push 0x43c */ { u32 v = 0x43cu; r_esp -= 4; W32(r_esp, v); }
    /* 004b90f8: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b90fd: push 0x6bf280 */ { u32 v = 0x6bf280u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9102: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4b9107u); f_005e9f20();
    /* 004b9107: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004b910a:; BB(0x004b910a);
    /* 004b910a: push 0x6bf104 */ { u32 v = 0x6bf104u; r_esp -= 4; W32(r_esp, v); }
    /* 004b910f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4b9114u); f_00630f40();
    /* 004b9114: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b9117: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b9118: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004b911d: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004b9123: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004b9129: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004b912f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b9131: mov ecx, eax */ r_ecx = r_eax;
    /* 004b9133: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b9139: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b913bu); call_ind(t); }
    /* 004b913b: push 0x6bf0e8 */ { u32 v = 0x6bf0e8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9140: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4b9145u); f_00630f40();
    /* 004b9145: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b9148: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b9149: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b914f: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004b9155: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004b915a: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004b9160: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004b9162: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b9168: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b916au); call_ind(t); }
    /* 004b916a: jmp 0x4bb419 */ goto L_004bb419;
L_004b916f:; BB(0x004b916f);
    /* 004b916f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9171: lea ecx, [ebp - 0x430] */ r_ecx = (u32)(r_ebp+0xfffffbd0u);
    /* 004b9177: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4b917cu); f_0048edf0();
    /* 004b917c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004b917f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b9181: je 0x4b919a */ if (fZ) goto L_004b919a;
L_004b9183:; BB(0x004b9183);
    /* 004b9183: push 0x441 */ { u32 v = 0x441u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9188: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b918d: push 0x6bf280 */ { u32 v = 0x6bf280u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9192: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4b9197u); f_005e9f20();
    /* 004b9197: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004b919a:; BB(0x004b919a);
    /* 004b919a: push 0x6bf260 */ { u32 v = 0x6bf260u; r_esp -= 4; W32(r_esp, v); }
    /* 004b919f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4b91a4u); f_00630f40();
    /* 004b91a4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b91a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b91a8: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004b91ad: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004b91b3: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004b91b9: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004b91bf: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b91c1: mov ecx, eax */ r_ecx = r_eax;
    /* 004b91c3: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b91c9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b91cbu); call_ind(t); }
    /* 004b91cb: push 0x6bf244 */ { u32 v = 0x6bf244u; r_esp -= 4; W32(r_esp, v); }
    /* 004b91d0: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4b91d5u); f_00630f40();
    /* 004b91d5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b91d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b91d9: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b91df: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004b91e5: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004b91ea: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004b91f0: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004b91f2: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b91f8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b91fau); call_ind(t); }
    /* 004b91fa: jmp 0x4bb419 */ goto L_004bb419;
L_004b91ff:; BB(0x004b91ff);
    /* 004b91ff: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9201: lea ecx, [ebp - 0x430] */ r_ecx = (u32)(r_ebp+0xfffffbd0u);
    /* 004b9207: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4b920cu); f_0048edf0();
    /* 004b920c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004b920f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b9211: je 0x4b922a */ if (fZ) goto L_004b922a;
L_004b9213:; BB(0x004b9213);
    /* 004b9213: push 0x446 */ { u32 v = 0x446u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9218: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b921d: push 0x6bf280 */ { u32 v = 0x6bf280u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9222: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4b9227u); f_005e9f20();
    /* 004b9227: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004b922a:; BB(0x004b922a);
    /* 004b922a: push 0x6bf218 */ { u32 v = 0x6bf218u; r_esp -= 4; W32(r_esp, v); }
    /* 004b922f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4b9234u); f_00630f40();
    /* 004b9234: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b9237: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b9238: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004b923d: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004b9243: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004b9249: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004b924f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b9251: mov ecx, eax */ r_ecx = r_eax;
    /* 004b9253: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b9259: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b925bu); call_ind(t); }
    /* 004b925b: push 0x6bf0d4 */ { u32 v = 0x6bf0d4u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9260: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4b9265u); f_00630f40();
    /* 004b9265: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b9268: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b9269: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b926f: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004b9275: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004b927a: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004b9280: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004b9282: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b9288: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b928au); call_ind(t); }
    /* 004b928a: jmp 0x4bb419 */ goto L_004bb419;
L_004b928f:; BB(0x004b928f);
    /* 004b928f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9291: lea ecx, [ebp - 0x430] */ r_ecx = (u32)(r_ebp+0xfffffbd0u);
    /* 004b9297: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4b929cu); f_0048edf0();
    /* 004b929c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004b929f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b92a1: je 0x4b92ba */ if (fZ) goto L_004b92ba;
L_004b92a3:; BB(0x004b92a3);
    /* 004b92a3: push 0x44b */ { u32 v = 0x44bu; r_esp -= 4; W32(r_esp, v); }
    /* 004b92a8: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b92ad: push 0x6bf280 */ { u32 v = 0x6bf280u; r_esp -= 4; W32(r_esp, v); }
    /* 004b92b2: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4b92b7u); f_005e9f20();
    /* 004b92b7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004b92ba:; BB(0x004b92ba);
    /* 004b92ba: push 0x6bf218 */ { u32 v = 0x6bf218u; r_esp -= 4; W32(r_esp, v); }
    /* 004b92bf: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4b92c4u); f_00630f40();
    /* 004b92c4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b92c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b92c8: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004b92cd: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004b92d3: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004b92d9: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004b92df: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b92e1: mov ecx, eax */ r_ecx = r_eax;
    /* 004b92e3: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b92e9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b92ebu); call_ind(t); }
    /* 004b92eb: push 0x6bf0c0 */ { u32 v = 0x6bf0c0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b92f0: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4b92f5u); f_00630f40();
    /* 004b92f5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b92f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b92f9: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b92ff: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004b9305: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004b930a: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004b9310: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004b9312: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b9318: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b931au); call_ind(t); }
    /* 004b931a: jmp 0x4bb419 */ goto L_004bb419;
L_004b931f:; BB(0x004b931f);
    /* 004b931f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9321: lea ecx, [ebp - 0x430] */ r_ecx = (u32)(r_ebp+0xfffffbd0u);
    /* 004b9327: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4b932cu); f_0048edf0();
    /* 004b932c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004b932f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b9331: je 0x4b934a */ if (fZ) goto L_004b934a;
L_004b9333:; BB(0x004b9333);
    /* 004b9333: push 0x450 */ { u32 v = 0x450u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9338: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b933d: push 0x6bf280 */ { u32 v = 0x6bf280u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9342: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4b9347u); f_005e9f20();
    /* 004b9347: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004b934a:; BB(0x004b934a);
    /* 004b934a: push 0x6bf218 */ { u32 v = 0x6bf218u; r_esp -= 4; W32(r_esp, v); }
    /* 004b934f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4b9354u); f_00630f40();
    /* 004b9354: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b9357: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b9358: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004b935d: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004b9363: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004b9369: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004b936f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b9371: mov ecx, eax */ r_ecx = r_eax;
    /* 004b9373: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b9379: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b937bu); call_ind(t); }
    /* 004b937b: push 0x6bf0ac */ { u32 v = 0x6bf0acu; r_esp -= 4; W32(r_esp, v); }
    /* 004b9380: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4b9385u); f_00630f40();
    /* 004b9385: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b9388: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b9389: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b938f: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004b9395: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004b939a: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004b93a0: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004b93a2: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b93a8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b93aau); call_ind(t); }
    /* 004b93aa: jmp 0x4bb419 */ goto L_004bb419;
L_004b93af:; BB(0x004b93af);
    /* 004b93af: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004b93b1: lea ecx, [ebp - 0x430] */ r_ecx = (u32)(r_ebp+0xfffffbd0u);
    /* 004b93b7: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4b93bcu); f_0048edf0();
    /* 004b93bc: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004b93bf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b93c1: je 0x4b9424 */ if (fZ) goto L_004b9424;
L_004b93c3:; BB(0x004b93c3);
    /* 004b93c3: push 0x6bf088 */ { u32 v = 0x6bf088u; r_esp -= 4; W32(r_esp, v); }
    /* 004b93c8: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4b93cdu); f_00630f40();
    /* 004b93cd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b93d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b93d1: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004b93d7: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004b93dd: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b93e3: mov ecx, dword ptr [ecx + 0xdc] */ r_ecx = R32((u32)(r_ecx+0xdcu));
    /* 004b93e9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004b93eb: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b93f1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b93f3u); call_ind(t); }
    /* 004b93f3: push 0x6bf06c */ { u32 v = 0x6bf06cu; r_esp -= 4; W32(r_esp, v); }
    /* 004b93f8: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4b93fdu); f_00630f40();
    /* 004b93fd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b9400: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b9401: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b9407: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004b940d: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004b9412: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004b9418: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004b941a: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b9420: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b9422u); call_ind(t); }
    /* 004b9422: jmp 0x4b9482 */ goto L_004b9482;
L_004b9424:; BB(0x004b9424);
    /* 004b9424: push 0x6bf218 */ { u32 v = 0x6bf218u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9429: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4b942eu); f_00630f40();
    /* 004b942e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b9431: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b9432: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b9438: mov edx, dword ptr [ecx + 0xdc] */ r_edx = R32((u32)(r_ecx+0xdcu));
    /* 004b943e: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004b9443: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004b9449: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004b944b: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b9451: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b9453u); call_ind(t); }
    /* 004b9453: push 0x6bf054 */ { u32 v = 0x6bf054u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9458: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4b945du); f_00630f40();
    /* 004b945d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b9460: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b9461: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b9467: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004b946d: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004b9472: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004b9478: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004b947a: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b9480: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b9482u); call_ind(t); }
L_004b9482:; BB(0x004b9482);
    /* 004b9482: jmp 0x4bb419 */ goto L_004bb419;
L_004b9487:; BB(0x004b9487);
    /* 004b9487: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9489: lea ecx, [ebp - 0x430] */ r_ecx = (u32)(r_ebp+0xfffffbd0u);
    /* 004b948f: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4b9494u); f_0048edf0();
    /* 004b9494: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004b9497: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b9499: je 0x4b94b2 */ if (fZ) goto L_004b94b2;
L_004b949b:; BB(0x004b949b);
    /* 004b949b: push 0x461 */ { u32 v = 0x461u; r_esp -= 4; W32(r_esp, v); }
    /* 004b94a0: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b94a5: push 0x6bf280 */ { u32 v = 0x6bf280u; r_esp -= 4; W32(r_esp, v); }
    /* 004b94aa: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4b94afu); f_005e9f20();
    /* 004b94af: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004b94b2:; BB(0x004b94b2);
    /* 004b94b2: push 0x6bf218 */ { u32 v = 0x6bf218u; r_esp -= 4; W32(r_esp, v); }
    /* 004b94b7: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4b94bcu); f_00630f40();
    /* 004b94bc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b94bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b94c0: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004b94c5: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004b94cb: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004b94d1: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004b94d7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b94d9: mov ecx, eax */ r_ecx = r_eax;
    /* 004b94db: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b94e1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b94e3u); call_ind(t); }
    /* 004b94e3: push 0x6bf0d4 */ { u32 v = 0x6bf0d4u; r_esp -= 4; W32(r_esp, v); }
    /* 004b94e8: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4b94edu); f_00630f40();
    /* 004b94ed: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b94f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b94f1: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b94f7: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004b94fd: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004b9502: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004b9508: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004b950a: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b9510: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b9512u); call_ind(t); }
    /* 004b9512: jmp 0x4bb419 */ goto L_004bb419;
L_004b9517:; BB(0x004b9517);
    /* 004b9517: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9519: lea ecx, [ebp - 0x430] */ r_ecx = (u32)(r_ebp+0xfffffbd0u);
    /* 004b951f: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4b9524u); f_0048edf0();
    /* 004b9524: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004b9527: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b9529: je 0x4b9542 */ if (fZ) goto L_004b9542;
L_004b952b:; BB(0x004b952b);
    /* 004b952b: push 0x466 */ { u32 v = 0x466u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9530: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9535: push 0x6bf280 */ { u32 v = 0x6bf280u; r_esp -= 4; W32(r_esp, v); }
    /* 004b953a: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4b953fu); f_005e9f20();
    /* 004b953f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004b9542:; BB(0x004b9542);
    /* 004b9542: push 0x6bf218 */ { u32 v = 0x6bf218u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9547: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4b954cu); f_00630f40();
    /* 004b954c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b954f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b9550: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004b9555: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004b955b: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004b9561: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004b9567: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b9569: mov ecx, eax */ r_ecx = r_eax;
    /* 004b956b: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b9571: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b9573u); call_ind(t); }
    /* 004b9573: push 0x6bf0c0 */ { u32 v = 0x6bf0c0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9578: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4b957du); f_00630f40();
    /* 004b957d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b9580: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b9581: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b9587: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004b958d: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004b9592: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004b9598: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004b959a: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b95a0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b95a2u); call_ind(t); }
    /* 004b95a2: jmp 0x4bb419 */ goto L_004bb419;
L_004b95a7:; BB(0x004b95a7);
    /* 004b95a7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004b95a9: lea ecx, [ebp - 0x430] */ r_ecx = (u32)(r_ebp+0xfffffbd0u);
    /* 004b95af: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4b95b4u); f_0048edf0();
    /* 004b95b4: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004b95b7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b95b9: je 0x4b95d2 */ if (fZ) goto L_004b95d2;
L_004b95bb:; BB(0x004b95bb);
    /* 004b95bb: push 0x46b */ { u32 v = 0x46bu; r_esp -= 4; W32(r_esp, v); }
    /* 004b95c0: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b95c5: push 0x6bf280 */ { u32 v = 0x6bf280u; r_esp -= 4; W32(r_esp, v); }
    /* 004b95ca: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4b95cfu); f_005e9f20();
    /* 004b95cf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004b95d2:; BB(0x004b95d2);
    /* 004b95d2: push 0x6bf218 */ { u32 v = 0x6bf218u; r_esp -= 4; W32(r_esp, v); }
    /* 004b95d7: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4b95dcu); f_00630f40();
    /* 004b95dc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b95df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b95e0: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004b95e5: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004b95eb: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004b95f1: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004b95f7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b95f9: mov ecx, eax */ r_ecx = r_eax;
    /* 004b95fb: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b9601: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b9603u); call_ind(t); }
    /* 004b9603: push 0x6bf0ac */ { u32 v = 0x6bf0acu; r_esp -= 4; W32(r_esp, v); }
    /* 004b9608: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4b960du); f_00630f40();
    /* 004b960d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b9610: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b9611: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b9617: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004b961d: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004b9622: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004b9628: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004b962a: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b9630: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b9632u); call_ind(t); }
    /* 004b9632: jmp 0x4bb419 */ goto L_004bb419;
L_004b9637:; BB(0x004b9637);
    /* 004b9637: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9639: lea ecx, [ebp - 0x430] */ r_ecx = (u32)(r_ebp+0xfffffbd0u);
    /* 004b963f: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4b9644u); f_0048edf0();
    /* 004b9644: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004b9647: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b9649: jne 0x4b9662 */ if (!fZ) goto L_004b9662;
L_004b964b:; BB(0x004b964b);
    /* 004b964b: push 0x470 */ { u32 v = 0x470u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9650: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9655: push 0x6bf1b0 */ { u32 v = 0x6bf1b0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b965a: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4b965fu); f_005e9f20();
    /* 004b965f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004b9662:; BB(0x004b9662);
    /* 004b9662: push 0x6bf190 */ { u32 v = 0x6bf190u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9667: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4b966cu); f_00630f40();
    /* 004b966c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b966f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b9670: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004b9675: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004b967b: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004b9681: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004b9687: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b9689: mov ecx, eax */ r_ecx = r_eax;
    /* 004b968b: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b9691: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b9693u); call_ind(t); }
    /* 004b9693: push 0x6bf034 */ { u32 v = 0x6bf034u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9698: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4b969du); f_00630f40();
    /* 004b969d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b96a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b96a1: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b96a7: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004b96ad: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004b96b2: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004b96b8: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004b96ba: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b96c0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b96c2u); call_ind(t); }
    /* 004b96c2: jmp 0x4bb419 */ goto L_004bb419;
L_004b96c7:; BB(0x004b96c7);
    /* 004b96c7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004b96c9: lea ecx, [ebp - 0x430] */ r_ecx = (u32)(r_ebp+0xfffffbd0u);
    /* 004b96cf: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4b96d4u); f_0048edf0();
    /* 004b96d4: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004b96d7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b96d9: jne 0x4b96f2 */ if (!fZ) goto L_004b96f2;
L_004b96db:; BB(0x004b96db);
    /* 004b96db: push 0x475 */ { u32 v = 0x475u; r_esp -= 4; W32(r_esp, v); }
    /* 004b96e0: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b96e5: push 0x6bf1b0 */ { u32 v = 0x6bf1b0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b96ea: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4b96efu); f_005e9f20();
    /* 004b96ef: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004b96f2:; BB(0x004b96f2);
    /* 004b96f2: push 0x6bf190 */ { u32 v = 0x6bf190u; r_esp -= 4; W32(r_esp, v); }
    /* 004b96f7: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4b96fcu); f_00630f40();
    /* 004b96fc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b96ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b9700: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004b9705: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004b970b: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004b9711: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004b9717: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b9719: mov ecx, eax */ r_ecx = r_eax;
    /* 004b971b: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b9721: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b9723u); call_ind(t); }
    /* 004b9723: push 0x6bf174 */ { u32 v = 0x6bf174u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9728: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4b972du); f_00630f40();
    /* 004b972d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b9730: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b9731: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b9737: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004b973d: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004b9742: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004b9748: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004b974a: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b9750: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b9752u); call_ind(t); }
    /* 004b9752: jmp 0x4bb419 */ goto L_004bb419;
L_004b9757:; BB(0x004b9757);
    /* 004b9757: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9759: lea ecx, [ebp - 0x430] */ r_ecx = (u32)(r_ebp+0xfffffbd0u);
    /* 004b975f: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4b9764u); f_0048edf0();
    /* 004b9764: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004b9767: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b9769: je 0x4b9782 */ if (fZ) goto L_004b9782;
L_004b976b:; BB(0x004b976b);
    /* 004b976b: push 0x47a */ { u32 v = 0x47au; r_esp -= 4; W32(r_esp, v); }
    /* 004b9770: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9775: push 0x6bf280 */ { u32 v = 0x6bf280u; r_esp -= 4; W32(r_esp, v); }
    /* 004b977a: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4b977fu); f_005e9f20();
    /* 004b977f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004b9782:; BB(0x004b9782);
    /* 004b9782: push 0x6bf15c */ { u32 v = 0x6bf15cu; r_esp -= 4; W32(r_esp, v); }
    /* 004b9787: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4b978cu); f_00630f40();
    /* 004b978c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b978f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b9790: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004b9795: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004b979b: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004b97a1: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004b97a7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b97a9: mov ecx, eax */ r_ecx = r_eax;
    /* 004b97ab: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b97b1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b97b3u); call_ind(t); }
    /* 004b97b3: push 0x6bf124 */ { u32 v = 0x6bf124u; r_esp -= 4; W32(r_esp, v); }
    /* 004b97b8: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4b97bdu); f_00630f40();
    /* 004b97bd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b97c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b97c1: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b97c7: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004b97cd: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004b97d2: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004b97d8: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004b97da: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b97e0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b97e2u); call_ind(t); }
    /* 004b97e2: jmp 0x4bb419 */ goto L_004bb419;
L_004b97e7:; BB(0x004b97e7);
    /* 004b97e7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004b97e9: lea ecx, [ebp - 0x430] */ r_ecx = (u32)(r_ebp+0xfffffbd0u);
    /* 004b97ef: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4b97f4u); f_0048edf0();
    /* 004b97f4: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004b97f7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b97f9: je 0x4b9812 */ if (fZ) goto L_004b9812;
L_004b97fb:; BB(0x004b97fb);
    /* 004b97fb: push 0x47f */ { u32 v = 0x47fu; r_esp -= 4; W32(r_esp, v); }
    /* 004b9800: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9805: push 0x6bf280 */ { u32 v = 0x6bf280u; r_esp -= 4; W32(r_esp, v); }
    /* 004b980a: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4b980fu); f_005e9f20();
    /* 004b980f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004b9812:; BB(0x004b9812);
    /* 004b9812: push 0x6bf15c */ { u32 v = 0x6bf15cu; r_esp -= 4; W32(r_esp, v); }
    /* 004b9817: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4b981cu); f_00630f40();
    /* 004b981c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b981f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b9820: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004b9825: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004b982b: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004b9831: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004b9837: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b9839: mov ecx, eax */ r_ecx = r_eax;
    /* 004b983b: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b9841: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b9843u); call_ind(t); }
    /* 004b9843: push 0x6bf014 */ { u32 v = 0x6bf014u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9848: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4b984du); f_00630f40();
    /* 004b984d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b9850: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b9851: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b9857: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004b985d: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004b9862: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004b9868: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004b986a: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b9870: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b9872u); call_ind(t); }
    /* 004b9872: jmp 0x4bb419 */ goto L_004bb419;
L_004b9877:; BB(0x004b9877);
    /* 004b9877: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9879: lea ecx, [ebp - 0x430] */ r_ecx = (u32)(r_ebp+0xfffffbd0u);
    /* 004b987f: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4b9884u); f_0048edf0();
    /* 004b9884: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004b9887: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b9889: je 0x4b98bd */ if (fZ) goto L_004b98bd;
L_004b988b:; BB(0x004b988b);
    /* 004b988b: push 0x6beff4 */ { u32 v = 0x6beff4u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9890: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4b9895u); f_00630f40();
    /* 004b9895: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b9898: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b9899: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004b989f: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004b98a5: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b98ab: mov ecx, dword ptr [ecx + 0xdc] */ r_ecx = R32((u32)(r_ecx+0xdcu));
    /* 004b98b1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004b98b3: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b98b9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b98bbu); call_ind(t); }
    /* 004b98bb: jmp 0x4b98ec */ goto L_004b98ec;
L_004b98bd:; BB(0x004b98bd);
    /* 004b98bd: push 0x6bf054 */ { u32 v = 0x6bf054u; r_esp -= 4; W32(r_esp, v); }
    /* 004b98c2: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4b98c7u); f_00630f40();
    /* 004b98c7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b98ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b98cb: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b98d1: mov edx, dword ptr [ecx + 0xdc] */ r_edx = R32((u32)(r_ecx+0xdcu));
    /* 004b98d7: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004b98dc: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004b98e2: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004b98e4: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b98ea: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b98ecu); call_ind(t); }
L_004b98ec:; BB(0x004b98ec);
    /* 004b98ec: push 0x6bf034 */ { u32 v = 0x6bf034u; r_esp -= 4; W32(r_esp, v); }
    /* 004b98f1: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4b98f6u); f_00630f40();
    /* 004b98f6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b98f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b98fa: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b9900: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004b9906: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004b990b: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004b9911: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004b9913: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b9919: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b991bu); call_ind(t); }
    /* 004b991b: jmp 0x4bb419 */ goto L_004bb419;
L_004b9920:; BB(0x004b9920);
    /* 004b9920: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9922: lea ecx, [ebp - 0x430] */ r_ecx = (u32)(r_ebp+0xfffffbd0u);
    /* 004b9928: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4b992du); f_0048edf0();
    /* 004b992d: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004b9930: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b9932: je 0x4b9966 */ if (fZ) goto L_004b9966;
L_004b9934:; BB(0x004b9934);
    /* 004b9934: push 0x6beff4 */ { u32 v = 0x6beff4u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9939: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4b993eu); f_00630f40();
    /* 004b993e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b9941: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b9942: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004b9948: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004b994e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b9954: mov ecx, dword ptr [ecx + 0xdc] */ r_ecx = R32((u32)(r_ecx+0xdcu));
    /* 004b995a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004b995c: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b9962: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b9964u); call_ind(t); }
    /* 004b9964: jmp 0x4b9995 */ goto L_004b9995;
L_004b9966:; BB(0x004b9966);
    /* 004b9966: push 0x6bf054 */ { u32 v = 0x6bf054u; r_esp -= 4; W32(r_esp, v); }
    /* 004b996b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4b9970u); f_00630f40();
    /* 004b9970: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b9973: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b9974: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b997a: mov edx, dword ptr [ecx + 0xdc] */ r_edx = R32((u32)(r_ecx+0xdcu));
    /* 004b9980: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004b9985: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004b998b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004b998d: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b9993: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b9995u); call_ind(t); }
L_004b9995:; BB(0x004b9995);
    /* 004b9995: push 0x6bf174 */ { u32 v = 0x6bf174u; r_esp -= 4; W32(r_esp, v); }
    /* 004b999a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4b999fu); f_00630f40();
    /* 004b999f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b99a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b99a3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b99a9: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004b99af: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004b99b4: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004b99ba: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004b99bc: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b99c2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b99c4u); call_ind(t); }
    /* 004b99c4: jmp 0x4bb419 */ goto L_004bb419;
L_004b99c9:; BB(0x004b99c9);
    /* 004b99c9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004b99cb: lea ecx, [ebp - 0x430] */ r_ecx = (u32)(r_ebp+0xfffffbd0u);
    /* 004b99d1: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4b99d6u); f_0048edf0();
    /* 004b99d6: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004b99d9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b99db: je 0x4b99f4 */ if (fZ) goto L_004b99f4;
L_004b99dd:; BB(0x004b99dd);
    /* 004b99dd: push 0x492 */ { u32 v = 0x492u; r_esp -= 4; W32(r_esp, v); }
    /* 004b99e2: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b99e7: push 0x6bf280 */ { u32 v = 0x6bf280u; r_esp -= 4; W32(r_esp, v); }
    /* 004b99ec: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4b99f1u); f_005e9f20();
    /* 004b99f1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004b99f4:; BB(0x004b99f4);
    /* 004b99f4: push 0x6bf054 */ { u32 v = 0x6bf054u; r_esp -= 4; W32(r_esp, v); }
    /* 004b99f9: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4b99feu); f_00630f40();
    /* 004b99fe: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b9a01: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b9a02: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004b9a07: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004b9a0d: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004b9a13: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004b9a19: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b9a1b: mov ecx, eax */ r_ecx = r_eax;
    /* 004b9a1d: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b9a23: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b9a25u); call_ind(t); }
    /* 004b9a25: push 0x6bf124 */ { u32 v = 0x6bf124u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9a2a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4b9a2fu); f_00630f40();
    /* 004b9a2f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b9a32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b9a33: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b9a39: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004b9a3f: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004b9a44: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004b9a4a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004b9a4c: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b9a52: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b9a54u); call_ind(t); }
    /* 004b9a54: jmp 0x4bb419 */ goto L_004bb419;
L_004b9a59:; BB(0x004b9a59);
    /* 004b9a59: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9a5b: lea ecx, [ebp - 0x430] */ r_ecx = (u32)(r_ebp+0xfffffbd0u);
    /* 004b9a61: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4b9a66u); f_0048edf0();
    /* 004b9a66: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004b9a69: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b9a6b: je 0x4b9a84 */ if (fZ) goto L_004b9a84;
L_004b9a6d:; BB(0x004b9a6d);
    /* 004b9a6d: push 0x497 */ { u32 v = 0x497u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9a72: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9a77: push 0x6bf280 */ { u32 v = 0x6bf280u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9a7c: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4b9a81u); f_005e9f20();
    /* 004b9a81: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004b9a84:; BB(0x004b9a84);
    /* 004b9a84: push 0x6bf054 */ { u32 v = 0x6bf054u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9a89: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4b9a8eu); f_00630f40();
    /* 004b9a8e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b9a91: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b9a92: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004b9a97: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004b9a9d: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004b9aa3: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004b9aa9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b9aab: mov ecx, eax */ r_ecx = r_eax;
    /* 004b9aad: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b9ab3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b9ab5u); call_ind(t); }
    /* 004b9ab5: push 0x6bf014 */ { u32 v = 0x6bf014u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9aba: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4b9abfu); f_00630f40();
    /* 004b9abf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b9ac2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b9ac3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b9ac9: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004b9acf: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004b9ad4: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004b9ada: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004b9adc: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b9ae2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b9ae4u); call_ind(t); }
    /* 004b9ae4: jmp 0x4bb419 */ goto L_004bb419;
L_004b9ae9:; BB(0x004b9ae9);
    /* 004b9ae9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9aeb: lea ecx, [ebp - 0x430] */ r_ecx = (u32)(r_ebp+0xfffffbd0u);
    /* 004b9af1: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4b9af6u); f_0048edf0();
    /* 004b9af6: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004b9af9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b9afb: je 0x4b9b14 */ if (fZ) goto L_004b9b14;
L_004b9afd:; BB(0x004b9afd);
    /* 004b9afd: push 0x49c */ { u32 v = 0x49cu; r_esp -= 4; W32(r_esp, v); }
    /* 004b9b02: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9b07: push 0x6bf280 */ { u32 v = 0x6bf280u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9b0c: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4b9b11u); f_005e9f20();
    /* 004b9b11: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004b9b14:; BB(0x004b9b14);
    /* 004b9b14: push 0x6bf0d4 */ { u32 v = 0x6bf0d4u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9b19: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4b9b1eu); f_00630f40();
    /* 004b9b1e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b9b21: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b9b22: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004b9b27: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004b9b2d: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004b9b33: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004b9b39: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b9b3b: mov ecx, eax */ r_ecx = r_eax;
    /* 004b9b3d: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b9b43: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b9b45u); call_ind(t); }
    /* 004b9b45: push 0x6bf034 */ { u32 v = 0x6bf034u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9b4a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4b9b4fu); f_00630f40();
    /* 004b9b4f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b9b52: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b9b53: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b9b59: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004b9b5f: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004b9b64: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004b9b6a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004b9b6c: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b9b72: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b9b74u); call_ind(t); }
    /* 004b9b74: jmp 0x4bb419 */ goto L_004bb419;
L_004b9b79:; BB(0x004b9b79);
    /* 004b9b79: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9b7b: lea ecx, [ebp - 0x430] */ r_ecx = (u32)(r_ebp+0xfffffbd0u);
    /* 004b9b81: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4b9b86u); f_0048edf0();
    /* 004b9b86: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004b9b89: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b9b8b: je 0x4b9ba4 */ if (fZ) goto L_004b9ba4;
L_004b9b8d:; BB(0x004b9b8d);
    /* 004b9b8d: push 0x4a1 */ { u32 v = 0x4a1u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9b92: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9b97: push 0x6bf280 */ { u32 v = 0x6bf280u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9b9c: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4b9ba1u); f_005e9f20();
    /* 004b9ba1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004b9ba4:; BB(0x004b9ba4);
    /* 004b9ba4: push 0x6bf0d4 */ { u32 v = 0x6bf0d4u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9ba9: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4b9baeu); f_00630f40();
    /* 004b9bae: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b9bb1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b9bb2: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004b9bb7: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004b9bbd: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004b9bc3: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004b9bc9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b9bcb: mov ecx, eax */ r_ecx = r_eax;
    /* 004b9bcd: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b9bd3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b9bd5u); call_ind(t); }
    /* 004b9bd5: push 0x6bf174 */ { u32 v = 0x6bf174u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9bda: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4b9bdfu); f_00630f40();
    /* 004b9bdf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b9be2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b9be3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b9be9: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004b9bef: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004b9bf4: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004b9bfa: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004b9bfc: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b9c02: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b9c04u); call_ind(t); }
    /* 004b9c04: jmp 0x4bb419 */ goto L_004bb419;
L_004b9c09:; BB(0x004b9c09);
    /* 004b9c09: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9c0b: lea ecx, [ebp - 0x430] */ r_ecx = (u32)(r_ebp+0xfffffbd0u);
    /* 004b9c11: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4b9c16u); f_0048edf0();
    /* 004b9c16: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004b9c19: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b9c1b: je 0x4b9c34 */ if (fZ) goto L_004b9c34;
L_004b9c1d:; BB(0x004b9c1d);
    /* 004b9c1d: push 0x4a6 */ { u32 v = 0x4a6u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9c22: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9c27: push 0x6bf280 */ { u32 v = 0x6bf280u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9c2c: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4b9c31u); f_005e9f20();
    /* 004b9c31: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004b9c34:; BB(0x004b9c34);
    /* 004b9c34: push 0x6bf0d4 */ { u32 v = 0x6bf0d4u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9c39: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4b9c3eu); f_00630f40();
    /* 004b9c3e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b9c41: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b9c42: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004b9c47: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004b9c4d: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004b9c53: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004b9c59: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b9c5b: mov ecx, eax */ r_ecx = r_eax;
    /* 004b9c5d: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b9c63: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b9c65u); call_ind(t); }
    /* 004b9c65: push 0x6bf124 */ { u32 v = 0x6bf124u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9c6a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4b9c6fu); f_00630f40();
    /* 004b9c6f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b9c72: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b9c73: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b9c79: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004b9c7f: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004b9c84: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004b9c8a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004b9c8c: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b9c92: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b9c94u); call_ind(t); }
    /* 004b9c94: jmp 0x4bb419 */ goto L_004bb419;
L_004b9c99:; BB(0x004b9c99);
    /* 004b9c99: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9c9b: lea ecx, [ebp - 0x430] */ r_ecx = (u32)(r_ebp+0xfffffbd0u);
    /* 004b9ca1: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4b9ca6u); f_0048edf0();
    /* 004b9ca6: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004b9ca9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b9cab: je 0x4b9cc4 */ if (fZ) goto L_004b9cc4;
L_004b9cad:; BB(0x004b9cad);
    /* 004b9cad: push 0x4ab */ { u32 v = 0x4abu; r_esp -= 4; W32(r_esp, v); }
    /* 004b9cb2: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9cb7: push 0x6bf280 */ { u32 v = 0x6bf280u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9cbc: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4b9cc1u); f_005e9f20();
    /* 004b9cc1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004b9cc4:; BB(0x004b9cc4);
    /* 004b9cc4: push 0x6bf0d4 */ { u32 v = 0x6bf0d4u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9cc9: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4b9cceu); f_00630f40();
    /* 004b9cce: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b9cd1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b9cd2: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004b9cd7: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004b9cdd: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004b9ce3: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004b9ce9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b9ceb: mov ecx, eax */ r_ecx = r_eax;
    /* 004b9ced: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b9cf3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b9cf5u); call_ind(t); }
    /* 004b9cf5: push 0x6bf014 */ { u32 v = 0x6bf014u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9cfa: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4b9cffu); f_00630f40();
    /* 004b9cff: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b9d02: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b9d03: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b9d09: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004b9d0f: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004b9d14: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004b9d1a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004b9d1c: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b9d22: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b9d24u); call_ind(t); }
    /* 004b9d24: jmp 0x4bb419 */ goto L_004bb419;
L_004b9d29:; BB(0x004b9d29);
    /* 004b9d29: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9d2b: lea ecx, [ebp - 0x430] */ r_ecx = (u32)(r_ebp+0xfffffbd0u);
    /* 004b9d31: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4b9d36u); f_0048edf0();
    /* 004b9d36: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004b9d39: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b9d3b: je 0x4b9d54 */ if (fZ) goto L_004b9d54;
L_004b9d3d:; BB(0x004b9d3d);
    /* 004b9d3d: push 0x4b0 */ { u32 v = 0x4b0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9d42: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9d47: push 0x6bf280 */ { u32 v = 0x6bf280u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9d4c: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4b9d51u); f_005e9f20();
    /* 004b9d51: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004b9d54:; BB(0x004b9d54);
    /* 004b9d54: push 0x6bf0c0 */ { u32 v = 0x6bf0c0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9d59: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4b9d5eu); f_00630f40();
    /* 004b9d5e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b9d61: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b9d62: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004b9d67: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004b9d6d: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004b9d73: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004b9d79: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b9d7b: mov ecx, eax */ r_ecx = r_eax;
    /* 004b9d7d: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b9d83: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b9d85u); call_ind(t); }
    /* 004b9d85: push 0x6bf034 */ { u32 v = 0x6bf034u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9d8a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4b9d8fu); f_00630f40();
    /* 004b9d8f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b9d92: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b9d93: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b9d99: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004b9d9f: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004b9da4: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004b9daa: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004b9dac: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b9db2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b9db4u); call_ind(t); }
    /* 004b9db4: jmp 0x4bb419 */ goto L_004bb419;
L_004b9db9:; BB(0x004b9db9);
    /* 004b9db9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9dbb: lea ecx, [ebp - 0x430] */ r_ecx = (u32)(r_ebp+0xfffffbd0u);
    /* 004b9dc1: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4b9dc6u); f_0048edf0();
    /* 004b9dc6: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004b9dc9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b9dcb: je 0x4b9de4 */ if (fZ) goto L_004b9de4;
L_004b9dcd:; BB(0x004b9dcd);
    /* 004b9dcd: push 0x4b5 */ { u32 v = 0x4b5u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9dd2: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9dd7: push 0x6bf280 */ { u32 v = 0x6bf280u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9ddc: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4b9de1u); f_005e9f20();
    /* 004b9de1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004b9de4:; BB(0x004b9de4);
    /* 004b9de4: push 0x6bf0c0 */ { u32 v = 0x6bf0c0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9de9: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4b9deeu); f_00630f40();
    /* 004b9dee: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b9df1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b9df2: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004b9df7: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004b9dfd: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004b9e03: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004b9e09: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b9e0b: mov ecx, eax */ r_ecx = r_eax;
    /* 004b9e0d: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b9e13: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b9e15u); call_ind(t); }
    /* 004b9e15: push 0x6bf174 */ { u32 v = 0x6bf174u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9e1a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4b9e1fu); f_00630f40();
    /* 004b9e1f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b9e22: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b9e23: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b9e29: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004b9e2f: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004b9e34: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004b9e3a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004b9e3c: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b9e42: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b9e44u); call_ind(t); }
    /* 004b9e44: jmp 0x4bb419 */ goto L_004bb419;
L_004b9e49:; BB(0x004b9e49);
    /* 004b9e49: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9e4b: lea ecx, [ebp - 0x430] */ r_ecx = (u32)(r_ebp+0xfffffbd0u);
    /* 004b9e51: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4b9e56u); f_0048edf0();
    /* 004b9e56: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004b9e59: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b9e5b: je 0x4b9e74 */ if (fZ) goto L_004b9e74;
L_004b9e5d:; BB(0x004b9e5d);
    /* 004b9e5d: push 0x4ba */ { u32 v = 0x4bau; r_esp -= 4; W32(r_esp, v); }
    /* 004b9e62: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9e67: push 0x6bf280 */ { u32 v = 0x6bf280u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9e6c: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4b9e71u); f_005e9f20();
    /* 004b9e71: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004b9e74:; BB(0x004b9e74);
    /* 004b9e74: push 0x6bf0c0 */ { u32 v = 0x6bf0c0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9e79: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4b9e7eu); f_00630f40();
    /* 004b9e7e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b9e81: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b9e82: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004b9e87: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004b9e8d: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004b9e93: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004b9e99: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b9e9b: mov ecx, eax */ r_ecx = r_eax;
    /* 004b9e9d: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b9ea3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b9ea5u); call_ind(t); }
    /* 004b9ea5: push 0x6bf124 */ { u32 v = 0x6bf124u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9eaa: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4b9eafu); f_00630f40();
    /* 004b9eaf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b9eb2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b9eb3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b9eb9: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004b9ebf: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004b9ec4: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004b9eca: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004b9ecc: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b9ed2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b9ed4u); call_ind(t); }
    /* 004b9ed4: jmp 0x4bb419 */ goto L_004bb419;
L_004b9ed9:; BB(0x004b9ed9);
    /* 004b9ed9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9edb: lea ecx, [ebp - 0x430] */ r_ecx = (u32)(r_ebp+0xfffffbd0u);
    /* 004b9ee1: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4b9ee6u); f_0048edf0();
    /* 004b9ee6: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004b9ee9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b9eeb: je 0x4b9f04 */ if (fZ) goto L_004b9f04;
L_004b9eed:; BB(0x004b9eed);
    /* 004b9eed: push 0x4bf */ { u32 v = 0x4bfu; r_esp -= 4; W32(r_esp, v); }
    /* 004b9ef2: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9ef7: push 0x6bf280 */ { u32 v = 0x6bf280u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9efc: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4b9f01u); f_005e9f20();
    /* 004b9f01: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004b9f04:; BB(0x004b9f04);
    /* 004b9f04: push 0x6bf0c0 */ { u32 v = 0x6bf0c0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9f09: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4b9f0eu); f_00630f40();
    /* 004b9f0e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b9f11: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b9f12: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004b9f17: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004b9f1d: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004b9f23: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004b9f29: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b9f2b: mov ecx, eax */ r_ecx = r_eax;
    /* 004b9f2d: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b9f33: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b9f35u); call_ind(t); }
    /* 004b9f35: push 0x6bf014 */ { u32 v = 0x6bf014u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9f3a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4b9f3fu); f_00630f40();
    /* 004b9f3f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b9f42: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b9f43: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b9f49: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004b9f4f: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004b9f54: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004b9f5a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004b9f5c: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b9f62: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b9f64u); call_ind(t); }
    /* 004b9f64: jmp 0x4bb419 */ goto L_004bb419;
L_004b9f69:; BB(0x004b9f69);
    /* 004b9f69: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9f6b: lea ecx, [ebp - 0x430] */ r_ecx = (u32)(r_ebp+0xfffffbd0u);
    /* 004b9f71: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4b9f76u); f_0048edf0();
    /* 004b9f76: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004b9f79: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b9f7b: je 0x4b9f94 */ if (fZ) goto L_004b9f94;
L_004b9f7d:; BB(0x004b9f7d);
    /* 004b9f7d: push 0x4c4 */ { u32 v = 0x4c4u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9f82: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9f87: push 0x6bf280 */ { u32 v = 0x6bf280u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9f8c: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4b9f91u); f_005e9f20();
    /* 004b9f91: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004b9f94:; BB(0x004b9f94);
    /* 004b9f94: push 0x6bf0ac */ { u32 v = 0x6bf0acu; r_esp -= 4; W32(r_esp, v); }
    /* 004b9f99: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4b9f9eu); f_00630f40();
    /* 004b9f9e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b9fa1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b9fa2: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004b9fa7: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004b9fad: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004b9fb3: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004b9fb9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b9fbb: mov ecx, eax */ r_ecx = r_eax;
    /* 004b9fbd: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b9fc3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b9fc5u); call_ind(t); }
    /* 004b9fc5: push 0x6bf034 */ { u32 v = 0x6bf034u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9fca: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4b9fcfu); f_00630f40();
    /* 004b9fcf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b9fd2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b9fd3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b9fd9: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004b9fdf: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004b9fe4: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004b9fea: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004b9fec: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004b9ff2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4b9ff4u); call_ind(t); }
    /* 004b9ff4: jmp 0x4bb419 */ goto L_004bb419;
L_004b9ff9:; BB(0x004b9ff9);
    /* 004b9ff9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9ffb: lea ecx, [ebp - 0x430] */ r_ecx = (u32)(r_ebp+0xfffffbd0u);
    /* 004ba001: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4ba006u); f_0048edf0();
    /* 004ba006: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004ba009: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ba00b: je 0x4ba024 */ if (fZ) goto L_004ba024;
L_004ba00d:; BB(0x004ba00d);
    /* 004ba00d: push 0x4c9 */ { u32 v = 0x4c9u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba012: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba017: push 0x6bf280 */ { u32 v = 0x6bf280u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba01c: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4ba021u); f_005e9f20();
    /* 004ba021: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004ba024:; BB(0x004ba024);
    /* 004ba024: push 0x6bf0ac */ { u32 v = 0x6bf0acu; r_esp -= 4; W32(r_esp, v); }
    /* 004ba029: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4ba02eu); f_00630f40();
    /* 004ba02e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ba031: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ba032: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004ba037: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004ba03d: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004ba043: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004ba049: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004ba04b: mov ecx, eax */ r_ecx = r_eax;
    /* 004ba04d: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004ba053: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4ba055u); call_ind(t); }
    /* 004ba055: push 0x6bf174 */ { u32 v = 0x6bf174u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba05a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4ba05fu); f_00630f40();
    /* 004ba05f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ba062: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ba063: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004ba069: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004ba06f: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004ba074: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004ba07a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004ba07c: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004ba082: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4ba084u); call_ind(t); }
    /* 004ba084: jmp 0x4bb419 */ goto L_004bb419;
L_004ba089:; BB(0x004ba089);
    /* 004ba089: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba08b: lea ecx, [ebp - 0x430] */ r_ecx = (u32)(r_ebp+0xfffffbd0u);
    /* 004ba091: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4ba096u); f_0048edf0();
    /* 004ba096: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004ba099: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ba09b: je 0x4ba0b4 */ if (fZ) goto L_004ba0b4;
L_004ba09d:; BB(0x004ba09d);
    /* 004ba09d: push 0x4ce */ { u32 v = 0x4ceu; r_esp -= 4; W32(r_esp, v); }
    /* 004ba0a2: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba0a7: push 0x6bf280 */ { u32 v = 0x6bf280u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba0ac: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4ba0b1u); f_005e9f20();
    /* 004ba0b1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004ba0b4:; BB(0x004ba0b4);
    /* 004ba0b4: push 0x6bf0ac */ { u32 v = 0x6bf0acu; r_esp -= 4; W32(r_esp, v); }
    /* 004ba0b9: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4ba0beu); f_00630f40();
    /* 004ba0be: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ba0c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ba0c2: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004ba0c7: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004ba0cd: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004ba0d3: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004ba0d9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004ba0db: mov ecx, eax */ r_ecx = r_eax;
    /* 004ba0dd: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004ba0e3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4ba0e5u); call_ind(t); }
    /* 004ba0e5: push 0x6bf124 */ { u32 v = 0x6bf124u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba0ea: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4ba0efu); f_00630f40();
    /* 004ba0ef: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ba0f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ba0f3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004ba0f9: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004ba0ff: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004ba104: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004ba10a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004ba10c: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004ba112: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4ba114u); call_ind(t); }
    /* 004ba114: jmp 0x4bb419 */ goto L_004bb419;
L_004ba119:; BB(0x004ba119);
    /* 004ba119: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba11b: lea ecx, [ebp - 0x430] */ r_ecx = (u32)(r_ebp+0xfffffbd0u);
    /* 004ba121: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4ba126u); f_0048edf0();
    /* 004ba126: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004ba129: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ba12b: je 0x4ba144 */ if (fZ) goto L_004ba144;
L_004ba12d:; BB(0x004ba12d);
    /* 004ba12d: push 0x4d3 */ { u32 v = 0x4d3u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba132: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba137: push 0x6bf280 */ { u32 v = 0x6bf280u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba13c: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4ba141u); f_005e9f20();
    /* 004ba141: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004ba144:; BB(0x004ba144);
    /* 004ba144: push 0x6bf0ac */ { u32 v = 0x6bf0acu; r_esp -= 4; W32(r_esp, v); }
    /* 004ba149: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4ba14eu); f_00630f40();
    /* 004ba14e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ba151: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ba152: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004ba157: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004ba15d: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004ba163: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004ba169: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004ba16b: mov ecx, eax */ r_ecx = r_eax;
    /* 004ba16d: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004ba173: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4ba175u); call_ind(t); }
    /* 004ba175: push 0x6bf014 */ { u32 v = 0x6bf014u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba17a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4ba17fu); f_00630f40();
    /* 004ba17f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ba182: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ba183: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004ba189: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004ba18f: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004ba194: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004ba19a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004ba19c: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004ba1a2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4ba1a4u); call_ind(t); }
    /* 004ba1a4: jmp 0x4bb419 */ goto L_004bb419;
L_004ba1a9:; BB(0x004ba1a9);
    /* 004ba1a9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba1ab: lea ecx, [ebp - 0x430] */ r_ecx = (u32)(r_ebp+0xfffffbd0u);
    /* 004ba1b1: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4ba1b6u); f_0048edf0();
    /* 004ba1b6: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004ba1b9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ba1bb: jne 0x4ba1d4 */ if (!fZ) goto L_004ba1d4;
L_004ba1bd:; BB(0x004ba1bd);
    /* 004ba1bd: push 0x4d8 */ { u32 v = 0x4d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba1c2: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba1c7: push 0x6bf1b0 */ { u32 v = 0x6bf1b0u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba1cc: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4ba1d1u); f_005e9f20();
    /* 004ba1d1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004ba1d4:; BB(0x004ba1d4);
    /* 004ba1d4: push 0x6befd4 */ { u32 v = 0x6befd4u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba1d9: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4ba1deu); f_00630f40();
    /* 004ba1de: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ba1e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ba1e2: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004ba1e7: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004ba1ed: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004ba1f3: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004ba1f9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004ba1fb: mov ecx, eax */ r_ecx = r_eax;
    /* 004ba1fd: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004ba203: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4ba205u); call_ind(t); }
    /* 004ba205: push 0x6befbc */ { u32 v = 0x6befbcu; r_esp -= 4; W32(r_esp, v); }
    /* 004ba20a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4ba20fu); f_00630f40();
    /* 004ba20f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ba212: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ba213: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004ba219: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004ba21f: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004ba224: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004ba22a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004ba22c: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004ba232: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4ba234u); call_ind(t); }
    /* 004ba234: jmp 0x4bb419 */ goto L_004bb419;
L_004ba239:; BB(0x004ba239);
    /* 004ba239: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba23b: lea ecx, [ebp - 0x430] */ r_ecx = (u32)(r_ebp+0xfffffbd0u);
    /* 004ba241: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4ba246u); f_0048edf0();
    /* 004ba246: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004ba249: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ba24b: jne 0x4ba264 */ if (!fZ) goto L_004ba264;
L_004ba24d:; BB(0x004ba24d);
    /* 004ba24d: push 0x4dd */ { u32 v = 0x4ddu; r_esp -= 4; W32(r_esp, v); }
    /* 004ba252: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba257: push 0x6bf1b0 */ { u32 v = 0x6bf1b0u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba25c: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4ba261u); f_005e9f20();
    /* 004ba261: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004ba264:; BB(0x004ba264);
    /* 004ba264: push 0x6befd4 */ { u32 v = 0x6befd4u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba269: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4ba26eu); f_00630f40();
    /* 004ba26e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ba271: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ba272: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004ba277: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004ba27d: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004ba283: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004ba289: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004ba28b: mov ecx, eax */ r_ecx = r_eax;
    /* 004ba28d: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004ba293: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4ba295u); call_ind(t); }
    /* 004ba295: push 0x6bef98 */ { u32 v = 0x6bef98u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba29a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4ba29fu); f_00630f40();
    /* 004ba29f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ba2a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ba2a3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004ba2a9: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004ba2af: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004ba2b4: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004ba2ba: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004ba2bc: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004ba2c2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4ba2c4u); call_ind(t); }
    /* 004ba2c4: jmp 0x4bb419 */ goto L_004bb419;
L_004ba2c9:; BB(0x004ba2c9);
    /* 004ba2c9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba2cb: lea ecx, [ebp - 0x430] */ r_ecx = (u32)(r_ebp+0xfffffbd0u);
    /* 004ba2d1: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4ba2d6u); f_0048edf0();
    /* 004ba2d6: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004ba2d9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ba2db: je 0x4ba2f4 */ if (fZ) goto L_004ba2f4;
L_004ba2dd:; BB(0x004ba2dd);
    /* 004ba2dd: push 0x4e2 */ { u32 v = 0x4e2u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba2e2: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba2e7: push 0x6bf280 */ { u32 v = 0x6bf280u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba2ec: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4ba2f1u); f_005e9f20();
    /* 004ba2f1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004ba2f4:; BB(0x004ba2f4);
    /* 004ba2f4: push 0x6bf104 */ { u32 v = 0x6bf104u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba2f9: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4ba2feu); f_00630f40();
    /* 004ba2fe: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ba301: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ba302: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004ba307: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004ba30d: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004ba313: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004ba319: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004ba31b: mov ecx, eax */ r_ecx = r_eax;
    /* 004ba31d: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004ba323: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4ba325u); call_ind(t); }
    /* 004ba325: push 0x6befbc */ { u32 v = 0x6befbcu; r_esp -= 4; W32(r_esp, v); }
    /* 004ba32a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4ba32fu); f_00630f40();
    /* 004ba32f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ba332: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ba333: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004ba339: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004ba33f: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004ba344: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004ba34a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004ba34c: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004ba352: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4ba354u); call_ind(t); }
    /* 004ba354: jmp 0x4bb419 */ goto L_004bb419;
L_004ba359:; BB(0x004ba359);
    /* 004ba359: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba35b: lea ecx, [ebp - 0x430] */ r_ecx = (u32)(r_ebp+0xfffffbd0u);
    /* 004ba361: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4ba366u); f_0048edf0();
    /* 004ba366: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004ba369: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ba36b: je 0x4ba384 */ if (fZ) goto L_004ba384;
L_004ba36d:; BB(0x004ba36d);
    /* 004ba36d: push 0x4e7 */ { u32 v = 0x4e7u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba372: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba377: push 0x6bf280 */ { u32 v = 0x6bf280u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba37c: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4ba381u); f_005e9f20();
    /* 004ba381: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004ba384:; BB(0x004ba384);
    /* 004ba384: push 0x6bf104 */ { u32 v = 0x6bf104u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba389: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4ba38eu); f_00630f40();
    /* 004ba38e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ba391: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ba392: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004ba397: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004ba39d: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004ba3a3: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004ba3a9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004ba3ab: mov ecx, eax */ r_ecx = r_eax;
    /* 004ba3ad: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004ba3b3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4ba3b5u); call_ind(t); }
    /* 004ba3b5: push 0x6bf0e8 */ { u32 v = 0x6bf0e8u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba3ba: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4ba3bfu); f_00630f40();
    /* 004ba3bf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ba3c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ba3c3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004ba3c9: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004ba3cf: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004ba3d4: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004ba3da: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004ba3dc: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004ba3e2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4ba3e4u); call_ind(t); }
    /* 004ba3e4: jmp 0x4bb419 */ goto L_004bb419;
L_004ba3e9:; BB(0x004ba3e9);
    /* 004ba3e9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba3eb: lea ecx, [ebp - 0x430] */ r_ecx = (u32)(r_ebp+0xfffffbd0u);
    /* 004ba3f1: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4ba3f6u); f_0048edf0();
    /* 004ba3f6: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004ba3f9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ba3fb: je 0x4ba414 */ if (fZ) goto L_004ba414;
L_004ba3fd:; BB(0x004ba3fd);
    /* 004ba3fd: push 0x4ec */ { u32 v = 0x4ecu; r_esp -= 4; W32(r_esp, v); }
    /* 004ba402: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba407: push 0x6bf280 */ { u32 v = 0x6bf280u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba40c: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4ba411u); f_005e9f20();
    /* 004ba411: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004ba414:; BB(0x004ba414);
    /* 004ba414: push 0x6bf260 */ { u32 v = 0x6bf260u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba419: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4ba41eu); f_00630f40();
    /* 004ba41e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ba421: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ba422: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004ba427: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004ba42d: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004ba433: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004ba439: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004ba43b: mov ecx, eax */ r_ecx = r_eax;
    /* 004ba43d: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004ba443: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4ba445u); call_ind(t); }
    /* 004ba445: push 0x6bef7c */ { u32 v = 0x6bef7cu; r_esp -= 4; W32(r_esp, v); }
    /* 004ba44a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4ba44fu); f_00630f40();
    /* 004ba44f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ba452: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ba453: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004ba459: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004ba45f: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004ba464: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004ba46a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004ba46c: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004ba472: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4ba474u); call_ind(t); }
    /* 004ba474: jmp 0x4bb419 */ goto L_004bb419;
L_004ba479:; BB(0x004ba479);
    /* 004ba479: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba47b: lea ecx, [ebp - 0x430] */ r_ecx = (u32)(r_ebp+0xfffffbd0u);
    /* 004ba481: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4ba486u); f_0048edf0();
    /* 004ba486: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004ba489: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ba48b: jne 0x4ba4a4 */ if (!fZ) goto L_004ba4a4;
L_004ba48d:; BB(0x004ba48d);
    /* 004ba48d: push 0x4f1 */ { u32 v = 0x4f1u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba492: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba497: push 0x6bf1b0 */ { u32 v = 0x6bf1b0u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba49c: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4ba4a1u); f_005e9f20();
    /* 004ba4a1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004ba4a4:; BB(0x004ba4a4);
    /* 004ba4a4: push 0x6bef5c */ { u32 v = 0x6bef5cu; r_esp -= 4; W32(r_esp, v); }
    /* 004ba4a9: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4ba4aeu); f_00630f40();
    /* 004ba4ae: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ba4b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ba4b2: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004ba4b7: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004ba4bd: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004ba4c3: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004ba4c9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004ba4cb: mov ecx, eax */ r_ecx = r_eax;
    /* 004ba4cd: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004ba4d3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4ba4d5u); call_ind(t); }
    /* 004ba4d5: push 0x6bef44 */ { u32 v = 0x6bef44u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba4da: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4ba4dfu); f_00630f40();
    /* 004ba4df: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ba4e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ba4e3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004ba4e9: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004ba4ef: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004ba4f4: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004ba4fa: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004ba4fc: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004ba502: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4ba504u); call_ind(t); }
    /* 004ba504: jmp 0x4bb419 */ goto L_004bb419;
L_004ba509:; BB(0x004ba509);
    /* 004ba509: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba50b: lea ecx, [ebp - 0x430] */ r_ecx = (u32)(r_ebp+0xfffffbd0u);
    /* 004ba511: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4ba516u); f_0048edf0();
    /* 004ba516: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004ba519: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ba51b: jne 0x4ba534 */ if (!fZ) goto L_004ba534;
L_004ba51d:; BB(0x004ba51d);
    /* 004ba51d: push 0x4f6 */ { u32 v = 0x4f6u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba522: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba527: push 0x6bf1b0 */ { u32 v = 0x6bf1b0u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba52c: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4ba531u); f_005e9f20();
    /* 004ba531: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004ba534:; BB(0x004ba534);
    /* 004ba534: push 0x6bef5c */ { u32 v = 0x6bef5cu; r_esp -= 4; W32(r_esp, v); }
    /* 004ba539: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4ba53eu); f_00630f40();
    /* 004ba53e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ba541: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ba542: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004ba547: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004ba54d: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004ba553: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004ba559: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004ba55b: mov ecx, eax */ r_ecx = r_eax;
    /* 004ba55d: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004ba563: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4ba565u); call_ind(t); }
    /* 004ba565: push 0x6bef44 */ { u32 v = 0x6bef44u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba56a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4ba56fu); f_00630f40();
    /* 004ba56f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ba572: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ba573: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004ba579: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004ba57f: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004ba584: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004ba58a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004ba58c: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004ba592: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4ba594u); call_ind(t); }
    /* 004ba594: jmp 0x4bb419 */ goto L_004bb419;
L_004ba599:; BB(0x004ba599);
    /* 004ba599: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba59b: lea ecx, [ebp - 0x430] */ r_ecx = (u32)(r_ebp+0xfffffbd0u);
    /* 004ba5a1: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4ba5a6u); f_0048edf0();
    /* 004ba5a6: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004ba5a9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ba5ab: je 0x4ba5c4 */ if (fZ) goto L_004ba5c4;
L_004ba5ad:; BB(0x004ba5ad);
    /* 004ba5ad: push 0x4fb */ { u32 v = 0x4fbu; r_esp -= 4; W32(r_esp, v); }
    /* 004ba5b2: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba5b7: push 0x6bf280 */ { u32 v = 0x6bf280u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba5bc: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4ba5c1u); f_005e9f20();
    /* 004ba5c1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004ba5c4:; BB(0x004ba5c4);
    /* 004ba5c4: push 0x6bef44 */ { u32 v = 0x6bef44u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba5c9: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4ba5ceu); f_00630f40();
    /* 004ba5ce: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ba5d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ba5d2: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004ba5d7: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004ba5dd: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004ba5e3: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004ba5e9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004ba5eb: mov ecx, eax */ r_ecx = r_eax;
    /* 004ba5ed: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004ba5f3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4ba5f5u); call_ind(t); }
    /* 004ba5f5: push 0x6bef2c */ { u32 v = 0x6bef2cu; r_esp -= 4; W32(r_esp, v); }
    /* 004ba5fa: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4ba5ffu); f_00630f40();
    /* 004ba5ff: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ba602: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ba603: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004ba609: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004ba60f: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004ba614: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004ba61a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004ba61c: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004ba622: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4ba624u); call_ind(t); }
    /* 004ba624: jmp 0x4bb419 */ goto L_004bb419;
L_004ba629:; BB(0x004ba629);
    /* 004ba629: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba62b: lea ecx, [ebp - 0x430] */ r_ecx = (u32)(r_ebp+0xfffffbd0u);
    /* 004ba631: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4ba636u); f_0048edf0();
    /* 004ba636: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004ba639: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ba63b: je 0x4ba69e */ if (fZ) goto L_004ba69e;
L_004ba63d:; BB(0x004ba63d);
    /* 004ba63d: push 0x6bef5c */ { u32 v = 0x6bef5cu; r_esp -= 4; W32(r_esp, v); }
    /* 004ba642: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4ba647u); f_00630f40();
    /* 004ba647: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ba64a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ba64b: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004ba651: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004ba657: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004ba65d: mov ecx, dword ptr [ecx + 0xdc] */ r_ecx = R32((u32)(r_ecx+0xdcu));
    /* 004ba663: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004ba665: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004ba66b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4ba66du); call_ind(t); }
    /* 004ba66d: push 0x6bef04 */ { u32 v = 0x6bef04u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba672: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4ba677u); f_00630f40();
    /* 004ba677: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ba67a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ba67b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004ba681: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004ba687: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004ba68c: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004ba692: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004ba694: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004ba69a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4ba69cu); call_ind(t); }
    /* 004ba69c: jmp 0x4ba6fc */ goto L_004ba6fc;
L_004ba69e:; BB(0x004ba69e);
    /* 004ba69e: push 0x6bf15c */ { u32 v = 0x6bf15cu; r_esp -= 4; W32(r_esp, v); }
    /* 004ba6a3: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4ba6a8u); f_00630f40();
    /* 004ba6a8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ba6ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ba6ac: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004ba6b2: mov edx, dword ptr [ecx + 0xdc] */ r_edx = R32((u32)(r_ecx+0xdcu));
    /* 004ba6b8: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004ba6bd: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004ba6c3: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004ba6c5: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004ba6cb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4ba6cdu); call_ind(t); }
    /* 004ba6cd: push 0x6beee8 */ { u32 v = 0x6beee8u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba6d2: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4ba6d7u); f_00630f40();
    /* 004ba6d7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ba6da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ba6db: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004ba6e1: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004ba6e7: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004ba6ec: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004ba6f2: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004ba6f4: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004ba6fa: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4ba6fcu); call_ind(t); }
L_004ba6fc:; BB(0x004ba6fc);
    /* 004ba6fc: jmp 0x4bb419 */ goto L_004bb419;
L_004ba701:; BB(0x004ba701);
    /* 004ba701: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba703: lea ecx, [ebp - 0x430] */ r_ecx = (u32)(r_ebp+0xfffffbd0u);
    /* 004ba709: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4ba70eu); f_0048edf0();
    /* 004ba70e: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004ba711: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ba713: je 0x4ba747 */ if (fZ) goto L_004ba747;
L_004ba715:; BB(0x004ba715);
    /* 004ba715: push 0x6beff4 */ { u32 v = 0x6beff4u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba71a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4ba71fu); f_00630f40();
    /* 004ba71f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ba722: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ba723: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004ba729: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004ba72f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004ba735: mov ecx, dword ptr [ecx + 0xdc] */ r_ecx = R32((u32)(r_ecx+0xdcu));
    /* 004ba73b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004ba73d: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004ba743: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4ba745u); call_ind(t); }
    /* 004ba745: jmp 0x4ba776 */ goto L_004ba776;
L_004ba747:; BB(0x004ba747);
    /* 004ba747: push 0x6bf054 */ { u32 v = 0x6bf054u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba74c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4ba751u); f_00630f40();
    /* 004ba751: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ba754: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ba755: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004ba75b: mov edx, dword ptr [ecx + 0xdc] */ r_edx = R32((u32)(r_ecx+0xdcu));
    /* 004ba761: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004ba766: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004ba76c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004ba76e: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004ba774: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4ba776u); call_ind(t); }
L_004ba776:; BB(0x004ba776);
    /* 004ba776: push 0x6beee8 */ { u32 v = 0x6beee8u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba77b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4ba780u); f_00630f40();
    /* 004ba780: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ba783: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ba784: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004ba78a: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004ba790: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004ba795: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004ba79b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004ba79d: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004ba7a3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4ba7a5u); call_ind(t); }
    /* 004ba7a5: jmp 0x4bb419 */ goto L_004bb419;
L_004ba7aa:; BB(0x004ba7aa);
    /* 004ba7aa: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba7ac: lea ecx, [ebp - 0x430] */ r_ecx = (u32)(r_ebp+0xfffffbd0u);
    /* 004ba7b2: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4ba7b7u); f_0048edf0();
    /* 004ba7b7: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004ba7ba: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ba7bc: je 0x4ba7d5 */ if (fZ) goto L_004ba7d5;
L_004ba7be:; BB(0x004ba7be);
    /* 004ba7be: push 0x513 */ { u32 v = 0x513u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba7c3: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba7c8: push 0x6bf280 */ { u32 v = 0x6bf280u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba7cd: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4ba7d2u); f_005e9f20();
    /* 004ba7d2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004ba7d5:; BB(0x004ba7d5);
    /* 004ba7d5: push 0x6beee8 */ { u32 v = 0x6beee8u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba7da: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4ba7dfu); f_00630f40();
    /* 004ba7df: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ba7e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ba7e3: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004ba7e8: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004ba7ee: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004ba7f4: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004ba7fa: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004ba7fc: mov ecx, eax */ r_ecx = r_eax;
    /* 004ba7fe: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004ba804: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4ba806u); call_ind(t); }
    /* 004ba806: push 0x6befbc */ { u32 v = 0x6befbcu; r_esp -= 4; W32(r_esp, v); }
    /* 004ba80b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4ba810u); f_00630f40();
    /* 004ba810: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ba813: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ba814: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004ba81a: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004ba820: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004ba825: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004ba82b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004ba82d: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004ba833: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4ba835u); call_ind(t); }
    /* 004ba835: jmp 0x4bb419 */ goto L_004bb419;
L_004ba83a:; BB(0x004ba83a);
    /* 004ba83a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba83c: lea ecx, [ebp - 0x430] */ r_ecx = (u32)(r_ebp+0xfffffbd0u);
    /* 004ba842: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4ba847u); f_0048edf0();
    /* 004ba847: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004ba84a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ba84c: je 0x4ba865 */ if (fZ) goto L_004ba865;
L_004ba84e:; BB(0x004ba84e);
    /* 004ba84e: push 0x518 */ { u32 v = 0x518u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba853: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba858: push 0x6bf280 */ { u32 v = 0x6bf280u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba85d: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4ba862u); f_005e9f20();
    /* 004ba862: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004ba865:; BB(0x004ba865);
    /* 004ba865: push 0x6beee8 */ { u32 v = 0x6beee8u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba86a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4ba86fu); f_00630f40();
    /* 004ba86f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ba872: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ba873: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004ba878: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004ba87e: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004ba884: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004ba88a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004ba88c: mov ecx, eax */ r_ecx = r_eax;
    /* 004ba88e: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004ba894: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4ba896u); call_ind(t); }
    /* 004ba896: push 0x6beec8 */ { u32 v = 0x6beec8u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba89b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4ba8a0u); f_00630f40();
    /* 004ba8a0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ba8a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ba8a4: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004ba8aa: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004ba8b0: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004ba8b5: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004ba8bb: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004ba8bd: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004ba8c3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4ba8c5u); call_ind(t); }
    /* 004ba8c5: jmp 0x4bb419 */ goto L_004bb419;
L_004ba8ca:; BB(0x004ba8ca);
    /* 004ba8ca: lea ecx, [ebp - 0x430] */ r_ecx = (u32)(r_ebp+0xfffffbd0u);
    /* 004ba8d0: call 0x484bf0 */ r_esp -= 4; W32(r_esp, 0x4ba8d5u); f_00484bf0();
    /* 004ba8d5: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 004ba8d8: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ba8db: jne 0x4ba988 */ if (!fZ) goto L_004ba988;
L_004ba8e1:; BB(0x004ba8e1);
    /* 004ba8e1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba8e3: lea ecx, [ebp - 0x430] */ r_ecx = (u32)(r_ebp+0xfffffbd0u);
    /* 004ba8e9: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4ba8eeu); f_0048edf0();
    /* 004ba8ee: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004ba8f1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ba8f3: je 0x4ba928 */ if (fZ) goto L_004ba928;
L_004ba8f5:; BB(0x004ba8f5);
    /* 004ba8f5: push 0x6bf088 */ { u32 v = 0x6bf088u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba8fa: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4ba8ffu); f_00630f40();
    /* 004ba8ff: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ba902: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ba903: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004ba908: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004ba90e: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004ba914: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004ba91a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004ba91c: mov ecx, eax */ r_ecx = r_eax;
    /* 004ba91e: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004ba924: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4ba926u); call_ind(t); }
    /* 004ba926: jmp 0x4ba957 */ goto L_004ba957;
L_004ba928:; BB(0x004ba928);
    /* 004ba928: push 0x6bf260 */ { u32 v = 0x6bf260u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba92d: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4ba932u); f_00630f40();
    /* 004ba932: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ba935: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ba936: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004ba93c: mov edx, dword ptr [ecx + 0xdc] */ r_edx = R32((u32)(r_ecx+0xdcu));
    /* 004ba942: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004ba947: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004ba94d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004ba94f: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004ba955: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4ba957u); call_ind(t); }
L_004ba957:; BB(0x004ba957);
    /* 004ba957: push 0x6beea0 */ { u32 v = 0x6beea0u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba95c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4ba961u); f_00630f40();
    /* 004ba961: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ba964: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ba965: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004ba96b: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004ba971: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004ba976: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004ba97c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004ba97e: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004ba984: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4ba986u); call_ind(t); }
    /* 004ba986: jmp 0x4ba9e6 */ goto L_004ba9e6;
L_004ba988:; BB(0x004ba988);
    /* 004ba988: push 0x6bf260 */ { u32 v = 0x6bf260u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba98d: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4ba992u); f_00630f40();
    /* 004ba992: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ba995: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ba996: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004ba99c: mov edx, dword ptr [ecx + 0xdc] */ r_edx = R32((u32)(r_ecx+0xdcu));
    /* 004ba9a2: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004ba9a7: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004ba9ad: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004ba9af: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004ba9b5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4ba9b7u); call_ind(t); }
    /* 004ba9b7: push 0x6bf244 */ { u32 v = 0x6bf244u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba9bc: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4ba9c1u); f_00630f40();
    /* 004ba9c1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ba9c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ba9c5: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004ba9cb: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004ba9d1: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004ba9d6: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004ba9dc: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004ba9de: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004ba9e4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4ba9e6u); call_ind(t); }
L_004ba9e6:; BB(0x004ba9e6);
    /* 004ba9e6: jmp 0x4bb419 */ goto L_004bb419;
L_004ba9eb:; BB(0x004ba9eb);
    /* 004ba9eb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba9ed: lea ecx, [ebp - 0x430] */ r_ecx = (u32)(r_ebp+0xfffffbd0u);
    /* 004ba9f3: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4ba9f8u); f_0048edf0();
    /* 004ba9f8: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004ba9fb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ba9fd: je 0x4baa60 */ if (fZ) goto L_004baa60;
L_004ba9ff:; BB(0x004ba9ff);
    /* 004ba9ff: push 0x6bf088 */ { u32 v = 0x6bf088u; r_esp -= 4; W32(r_esp, v); }
    /* 004baa04: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4baa09u); f_00630f40();
    /* 004baa09: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004baa0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004baa0d: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004baa13: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004baa19: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004baa1f: mov ecx, dword ptr [ecx + 0xdc] */ r_ecx = R32((u32)(r_ecx+0xdcu));
    /* 004baa25: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004baa27: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004baa2d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4baa2fu); call_ind(t); }
    /* 004baa2f: push 0x6bf06c */ { u32 v = 0x6bf06cu; r_esp -= 4; W32(r_esp, v); }
    /* 004baa34: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4baa39u); f_00630f40();
    /* 004baa39: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004baa3c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004baa3d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004baa43: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004baa49: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004baa4e: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004baa54: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004baa56: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004baa5c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4baa5eu); call_ind(t); }
    /* 004baa5e: jmp 0x4baabe */ goto L_004baabe;
L_004baa60:; BB(0x004baa60);
    /* 004baa60: push 0x6bf218 */ { u32 v = 0x6bf218u; r_esp -= 4; W32(r_esp, v); }
    /* 004baa65: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4baa6au); f_00630f40();
    /* 004baa6a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004baa6d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004baa6e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004baa74: mov edx, dword ptr [ecx + 0xdc] */ r_edx = R32((u32)(r_ecx+0xdcu));
    /* 004baa7a: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004baa7f: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004baa85: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004baa87: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004baa8d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4baa8fu); call_ind(t); }
    /* 004baa8f: push 0x6bf054 */ { u32 v = 0x6bf054u; r_esp -= 4; W32(r_esp, v); }
    /* 004baa94: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4baa99u); f_00630f40();
    /* 004baa99: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004baa9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004baa9d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004baaa3: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004baaa9: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004baaae: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004baab4: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004baab6: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004baabc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4baabeu); call_ind(t); }
L_004baabe:; BB(0x004baabe);
    /* 004baabe: jmp 0x4bb419 */ goto L_004bb419;
L_004baac3:; BB(0x004baac3);
    /* 004baac3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004baac5: lea ecx, [ebp - 0x430] */ r_ecx = (u32)(r_ebp+0xfffffbd0u);
    /* 004baacb: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4baad0u); f_0048edf0();
    /* 004baad0: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004baad3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004baad5: je 0x4baaee */ if (fZ) goto L_004baaee;
L_004baad7:; BB(0x004baad7);
    /* 004baad7: push 0x538 */ { u32 v = 0x538u; r_esp -= 4; W32(r_esp, v); }
    /* 004baadc: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004baae1: push 0x6bf280 */ { u32 v = 0x6bf280u; r_esp -= 4; W32(r_esp, v); }
    /* 004baae6: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4baaebu); f_005e9f20();
    /* 004baaeb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004baaee:; BB(0x004baaee);
    /* 004baaee: push 0x6bf218 */ { u32 v = 0x6bf218u; r_esp -= 4; W32(r_esp, v); }
    /* 004baaf3: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4baaf8u); f_00630f40();
    /* 004baaf8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004baafb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004baafc: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bab01: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004bab07: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004bab0d: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004bab13: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004bab15: mov ecx, eax */ r_ecx = r_eax;
    /* 004bab17: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bab1d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bab1fu); call_ind(t); }
    /* 004bab1f: push 0x6bf0ac */ { u32 v = 0x6bf0acu; r_esp -= 4; W32(r_esp, v); }
    /* 004bab24: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bab29u); f_00630f40();
    /* 004bab29: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bab2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bab2d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bab33: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004bab39: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bab3e: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004bab44: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004bab46: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bab4c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bab4eu); call_ind(t); }
    /* 004bab4e: jmp 0x4bb419 */ goto L_004bb419;
L_004bab53:; BB(0x004bab53);
    /* 004bab53: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bab55: lea ecx, [ebp - 0x430] */ r_ecx = (u32)(r_ebp+0xfffffbd0u);
    /* 004bab5b: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4bab60u); f_0048edf0();
    /* 004bab60: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004bab63: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bab65: je 0x4babc8 */ if (fZ) goto L_004babc8;
L_004bab67:; BB(0x004bab67);
    /* 004bab67: push 0x6bf088 */ { u32 v = 0x6bf088u; r_esp -= 4; W32(r_esp, v); }
    /* 004bab6c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bab71u); f_00630f40();
    /* 004bab71: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bab74: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bab75: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004bab7b: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004bab81: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bab87: mov ecx, dword ptr [ecx + 0xdc] */ r_ecx = R32((u32)(r_ecx+0xdcu));
    /* 004bab8d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004bab8f: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bab95: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bab97u); call_ind(t); }
    /* 004bab97: push 0x6bee80 */ { u32 v = 0x6bee80u; r_esp -= 4; W32(r_esp, v); }
    /* 004bab9c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4baba1u); f_00630f40();
    /* 004baba1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004baba4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004baba5: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004babab: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004babb1: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004babb6: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004babbc: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004babbe: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004babc4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4babc6u); call_ind(t); }
    /* 004babc6: jmp 0x4bac26 */ goto L_004bac26;
L_004babc8:; BB(0x004babc8);
    /* 004babc8: push 0x6bf218 */ { u32 v = 0x6bf218u; r_esp -= 4; W32(r_esp, v); }
    /* 004babcd: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4babd2u); f_00630f40();
    /* 004babd2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004babd5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004babd6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004babdc: mov edx, dword ptr [ecx + 0xdc] */ r_edx = R32((u32)(r_ecx+0xdcu));
    /* 004babe2: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004babe7: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004babed: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004babef: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004babf5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4babf7u); call_ind(t); }
    /* 004babf7: push 0x6bf15c */ { u32 v = 0x6bf15cu; r_esp -= 4; W32(r_esp, v); }
    /* 004babfc: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bac01u); f_00630f40();
    /* 004bac01: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bac04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bac05: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bac0b: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004bac11: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bac16: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004bac1c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004bac1e: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bac24: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bac26u); call_ind(t); }
L_004bac26:; BB(0x004bac26);
    /* 004bac26: jmp 0x4bb419 */ goto L_004bb419;
L_004bac2b:; BB(0x004bac2b);
    /* 004bac2b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bac2d: lea ecx, [ebp - 0x430] */ r_ecx = (u32)(r_ebp+0xfffffbd0u);
    /* 004bac33: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4bac38u); f_0048edf0();
    /* 004bac38: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004bac3b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bac3d: je 0x4baca0 */ if (fZ) goto L_004baca0;
L_004bac3f:; BB(0x004bac3f);
    /* 004bac3f: push 0x6bf088 */ { u32 v = 0x6bf088u; r_esp -= 4; W32(r_esp, v); }
    /* 004bac44: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bac49u); f_00630f40();
    /* 004bac49: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bac4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bac4d: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004bac53: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004bac59: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bac5f: mov ecx, dword ptr [ecx + 0xdc] */ r_ecx = R32((u32)(r_ecx+0xdcu));
    /* 004bac65: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004bac67: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bac6d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bac6fu); call_ind(t); }
    /* 004bac6f: push 0x6bf06c */ { u32 v = 0x6bf06cu; r_esp -= 4; W32(r_esp, v); }
    /* 004bac74: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bac79u); f_00630f40();
    /* 004bac79: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bac7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bac7d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bac83: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004bac89: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bac8e: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004bac94: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004bac96: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bac9c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bac9eu); call_ind(t); }
    /* 004bac9e: jmp 0x4bacfe */ goto L_004bacfe;
L_004baca0:; BB(0x004baca0);
    /* 004baca0: push 0x6bf218 */ { u32 v = 0x6bf218u; r_esp -= 4; W32(r_esp, v); }
    /* 004baca5: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bacaau); f_00630f40();
    /* 004bacaa: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bacad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bacae: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bacb4: mov edx, dword ptr [ecx + 0xdc] */ r_edx = R32((u32)(r_ecx+0xdcu));
    /* 004bacba: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bacbf: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004bacc5: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004bacc7: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004baccd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4baccfu); call_ind(t); }
    /* 004baccf: push 0x6bf054 */ { u32 v = 0x6bf054u; r_esp -= 4; W32(r_esp, v); }
    /* 004bacd4: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bacd9u); f_00630f40();
    /* 004bacd9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bacdc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bacdd: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bace3: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004bace9: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bacee: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004bacf4: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004bacf6: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bacfc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bacfeu); call_ind(t); }
L_004bacfe:; BB(0x004bacfe);
    /* 004bacfe: jmp 0x4bb419 */ goto L_004bb419;
L_004bad03:; BB(0x004bad03);
    /* 004bad03: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bad05: lea ecx, [ebp - 0x430] */ r_ecx = (u32)(r_ebp+0xfffffbd0u);
    /* 004bad0b: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4bad10u); f_0048edf0();
    /* 004bad10: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004bad13: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bad15: je 0x4bad2e */ if (fZ) goto L_004bad2e;
L_004bad17:; BB(0x004bad17);
    /* 004bad17: push 0x555 */ { u32 v = 0x555u; r_esp -= 4; W32(r_esp, v); }
    /* 004bad1c: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004bad21: push 0x6bf280 */ { u32 v = 0x6bf280u; r_esp -= 4; W32(r_esp, v); }
    /* 004bad26: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4bad2bu); f_005e9f20();
    /* 004bad2b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004bad2e:; BB(0x004bad2e);
    /* 004bad2e: push 0x6bf218 */ { u32 v = 0x6bf218u; r_esp -= 4; W32(r_esp, v); }
    /* 004bad33: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bad38u); f_00630f40();
    /* 004bad38: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bad3b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bad3c: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bad41: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004bad47: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004bad4d: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004bad53: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004bad55: mov ecx, eax */ r_ecx = r_eax;
    /* 004bad57: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bad5d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bad5fu); call_ind(t); }
    /* 004bad5f: push 0x6bee54 */ { u32 v = 0x6bee54u; r_esp -= 4; W32(r_esp, v); }
    /* 004bad64: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bad69u); f_00630f40();
    /* 004bad69: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bad6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bad6d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bad73: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004bad79: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bad7e: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004bad84: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004bad86: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bad8c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bad8eu); call_ind(t); }
    /* 004bad8e: jmp 0x4bb419 */ goto L_004bb419;
L_004bad93:; BB(0x004bad93);
    /* 004bad93: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bad95: lea ecx, [ebp - 0x430] */ r_ecx = (u32)(r_ebp+0xfffffbd0u);
    /* 004bad9b: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4bada0u); f_0048edf0();
    /* 004bada0: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004bada3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bada5: je 0x4badbe */ if (fZ) goto L_004badbe;
L_004bada7:; BB(0x004bada7);
    /* 004bada7: push 0x55a */ { u32 v = 0x55au; r_esp -= 4; W32(r_esp, v); }
    /* 004badac: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004badb1: push 0x6bf280 */ { u32 v = 0x6bf280u; r_esp -= 4; W32(r_esp, v); }
    /* 004badb6: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4badbbu); f_005e9f20();
    /* 004badbb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004badbe:; BB(0x004badbe);
    /* 004badbe: push 0x6bf218 */ { u32 v = 0x6bf218u; r_esp -= 4; W32(r_esp, v); }
    /* 004badc3: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4badc8u); f_00630f40();
    /* 004badc8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004badcb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004badcc: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004badd1: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004badd7: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004baddd: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004bade3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004bade5: mov ecx, eax */ r_ecx = r_eax;
    /* 004bade7: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004baded: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4badefu); call_ind(t); }
    /* 004badef: push 0x6bee2c */ { u32 v = 0x6bee2cu; r_esp -= 4; W32(r_esp, v); }
    /* 004badf4: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4badf9u); f_00630f40();
    /* 004badf9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004badfc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004badfd: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bae03: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004bae09: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bae0e: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004bae14: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004bae16: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bae1c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bae1eu); call_ind(t); }
    /* 004bae1e: jmp 0x4bb419 */ goto L_004bb419;
L_004bae23:; BB(0x004bae23);
    /* 004bae23: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bae25: lea ecx, [ebp - 0x430] */ r_ecx = (u32)(r_ebp+0xfffffbd0u);
    /* 004bae2b: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4bae30u); f_0048edf0();
    /* 004bae30: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004bae33: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bae35: je 0x4bae4e */ if (fZ) goto L_004bae4e;
L_004bae37:; BB(0x004bae37);
    /* 004bae37: push 0x55f */ { u32 v = 0x55fu; r_esp -= 4; W32(r_esp, v); }
    /* 004bae3c: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004bae41: push 0x6bf280 */ { u32 v = 0x6bf280u; r_esp -= 4; W32(r_esp, v); }
    /* 004bae46: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4bae4bu); f_005e9f20();
    /* 004bae4b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004bae4e:; BB(0x004bae4e);
    /* 004bae4e: push 0x6bf218 */ { u32 v = 0x6bf218u; r_esp -= 4; W32(r_esp, v); }
    /* 004bae53: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bae58u); f_00630f40();
    /* 004bae58: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bae5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bae5c: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bae61: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004bae67: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004bae6d: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004bae73: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004bae75: mov ecx, eax */ r_ecx = r_eax;
    /* 004bae77: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bae7d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bae7fu); call_ind(t); }
    /* 004bae7f: push 0x6bee0c */ { u32 v = 0x6bee0cu; r_esp -= 4; W32(r_esp, v); }
    /* 004bae84: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bae89u); f_00630f40();
    /* 004bae89: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bae8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bae8d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bae93: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004bae99: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bae9e: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004baea4: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004baea6: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004baeac: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4baeaeu); call_ind(t); }
    /* 004baeae: jmp 0x4bb419 */ goto L_004bb419;
L_004baeb3:; BB(0x004baeb3);
    /* 004baeb3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004baeb5: lea ecx, [ebp - 0x430] */ r_ecx = (u32)(r_ebp+0xfffffbd0u);
    /* 004baebb: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4baec0u); f_0048edf0();
    /* 004baec0: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004baec3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004baec5: je 0x4baef9 */ if (fZ) goto L_004baef9;
L_004baec7:; BB(0x004baec7);
    /* 004baec7: push 0x6bf190 */ { u32 v = 0x6bf190u; r_esp -= 4; W32(r_esp, v); }
    /* 004baecc: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4baed1u); f_00630f40();
    /* 004baed1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004baed4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004baed5: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004baedb: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004baee1: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004baee7: mov ecx, dword ptr [ecx + 0xdc] */ r_ecx = R32((u32)(r_ecx+0xdcu));
    /* 004baeed: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004baeef: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004baef5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4baef7u); call_ind(t); }
    /* 004baef7: jmp 0x4baf28 */ goto L_004baf28;
L_004baef9:; BB(0x004baef9);
    /* 004baef9: push 0x6bf15c */ { u32 v = 0x6bf15cu; r_esp -= 4; W32(r_esp, v); }
    /* 004baefe: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4baf03u); f_00630f40();
    /* 004baf03: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004baf06: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004baf07: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004baf0d: mov edx, dword ptr [ecx + 0xdc] */ r_edx = R32((u32)(r_ecx+0xdcu));
    /* 004baf13: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004baf18: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004baf1e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004baf20: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004baf26: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4baf28u); call_ind(t); }
L_004baf28:; BB(0x004baf28);
    /* 004baf28: push 0x6bf034 */ { u32 v = 0x6bf034u; r_esp -= 4; W32(r_esp, v); }
    /* 004baf2d: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4baf32u); f_00630f40();
    /* 004baf32: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004baf35: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004baf36: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004baf3c: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004baf42: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004baf47: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004baf4d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004baf4f: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004baf55: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4baf57u); call_ind(t); }
    /* 004baf57: jmp 0x4bb419 */ goto L_004bb419;
L_004baf5c:; BB(0x004baf5c);
    /* 004baf5c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004baf5e: lea ecx, [ebp - 0x430] */ r_ecx = (u32)(r_ebp+0xfffffbd0u);
    /* 004baf64: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4baf69u); f_0048edf0();
    /* 004baf69: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004baf6c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004baf6e: je 0x4bafa2 */ if (fZ) goto L_004bafa2;
L_004baf70:; BB(0x004baf70);
    /* 004baf70: push 0x6bf190 */ { u32 v = 0x6bf190u; r_esp -= 4; W32(r_esp, v); }
    /* 004baf75: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4baf7au); f_00630f40();
    /* 004baf7a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004baf7d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004baf7e: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004baf84: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004baf8a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004baf90: mov ecx, dword ptr [ecx + 0xdc] */ r_ecx = R32((u32)(r_ecx+0xdcu));
    /* 004baf96: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004baf98: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004baf9e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bafa0u); call_ind(t); }
    /* 004bafa0: jmp 0x4bafd1 */ goto L_004bafd1;
L_004bafa2:; BB(0x004bafa2);
    /* 004bafa2: push 0x6bf15c */ { u32 v = 0x6bf15cu; r_esp -= 4; W32(r_esp, v); }
    /* 004bafa7: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bafacu); f_00630f40();
    /* 004bafac: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bafaf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bafb0: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bafb6: mov edx, dword ptr [ecx + 0xdc] */ r_edx = R32((u32)(r_ecx+0xdcu));
    /* 004bafbc: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bafc1: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004bafc7: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004bafc9: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bafcf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bafd1u); call_ind(t); }
L_004bafd1:; BB(0x004bafd1);
    /* 004bafd1: push 0x6bf174 */ { u32 v = 0x6bf174u; r_esp -= 4; W32(r_esp, v); }
    /* 004bafd6: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bafdbu); f_00630f40();
    /* 004bafdb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bafde: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bafdf: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bafe5: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004bafeb: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004baff0: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004baff6: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004baff8: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004baffe: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bb000u); call_ind(t); }
    /* 004bb000: jmp 0x4bb419 */ goto L_004bb419;
L_004bb005:; BB(0x004bb005);
    /* 004bb005: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb007: lea ecx, [ebp - 0x430] */ r_ecx = (u32)(r_ebp+0xfffffbd0u);
    /* 004bb00d: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4bb012u); f_0048edf0();
    /* 004bb012: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004bb015: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bb017: je 0x4bb030 */ if (fZ) goto L_004bb030;
L_004bb019:; BB(0x004bb019);
    /* 004bb019: push 0x572 */ { u32 v = 0x572u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb01e: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb023: push 0x6bf280 */ { u32 v = 0x6bf280u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb028: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4bb02du); f_005e9f20();
    /* 004bb02d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004bb030:; BB(0x004bb030);
    /* 004bb030: push 0x6bf15c */ { u32 v = 0x6bf15cu; r_esp -= 4; W32(r_esp, v); }
    /* 004bb035: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bb03au); f_00630f40();
    /* 004bb03a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bb03d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bb03e: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bb043: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004bb049: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004bb04f: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004bb055: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004bb057: mov ecx, eax */ r_ecx = r_eax;
    /* 004bb059: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bb05f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bb061u); call_ind(t); }
    /* 004bb061: push 0x6bf014 */ { u32 v = 0x6bf014u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb066: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bb06bu); f_00630f40();
    /* 004bb06b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bb06e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bb06f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bb075: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004bb07b: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bb080: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004bb086: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004bb088: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bb08e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bb090u); call_ind(t); }
    /* 004bb090: jmp 0x4bb419 */ goto L_004bb419;
L_004bb095:; BB(0x004bb095);
    /* 004bb095: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb097: lea ecx, [ebp - 0x430] */ r_ecx = (u32)(r_ebp+0xfffffbd0u);
    /* 004bb09d: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4bb0a2u); f_0048edf0();
    /* 004bb0a2: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004bb0a5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bb0a7: je 0x4bb0db */ if (fZ) goto L_004bb0db;
L_004bb0a9:; BB(0x004bb0a9);
    /* 004bb0a9: push 0x6beff4 */ { u32 v = 0x6beff4u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb0ae: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bb0b3u); f_00630f40();
    /* 004bb0b3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bb0b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bb0b7: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004bb0bd: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004bb0c3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bb0c9: mov ecx, dword ptr [ecx + 0xdc] */ r_ecx = R32((u32)(r_ecx+0xdcu));
    /* 004bb0cf: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004bb0d1: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bb0d7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bb0d9u); call_ind(t); }
    /* 004bb0d9: jmp 0x4bb10a */ goto L_004bb10a;
L_004bb0db:; BB(0x004bb0db);
    /* 004bb0db: push 0x6bf054 */ { u32 v = 0x6bf054u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb0e0: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bb0e5u); f_00630f40();
    /* 004bb0e5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bb0e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bb0e9: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bb0ef: mov edx, dword ptr [ecx + 0xdc] */ r_edx = R32((u32)(r_ecx+0xdcu));
    /* 004bb0f5: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bb0fa: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004bb100: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004bb102: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bb108: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bb10au); call_ind(t); }
L_004bb10a:; BB(0x004bb10a);
    /* 004bb10a: push 0x6bf034 */ { u32 v = 0x6bf034u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb10f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bb114u); f_00630f40();
    /* 004bb114: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bb117: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bb118: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bb11e: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004bb124: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bb129: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004bb12f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004bb131: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bb137: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bb139u); call_ind(t); }
    /* 004bb139: jmp 0x4bb419 */ goto L_004bb419;
L_004bb13e:; BB(0x004bb13e);
    /* 004bb13e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb140: lea ecx, [ebp - 0x430] */ r_ecx = (u32)(r_ebp+0xfffffbd0u);
    /* 004bb146: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4bb14bu); f_0048edf0();
    /* 004bb14b: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004bb14e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bb150: je 0x4bb184 */ if (fZ) goto L_004bb184;
L_004bb152:; BB(0x004bb152);
    /* 004bb152: push 0x6beff4 */ { u32 v = 0x6beff4u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb157: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bb15cu); f_00630f40();
    /* 004bb15c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bb15f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bb160: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004bb166: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004bb16c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bb172: mov ecx, dword ptr [ecx + 0xdc] */ r_ecx = R32((u32)(r_ecx+0xdcu));
    /* 004bb178: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004bb17a: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bb180: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bb182u); call_ind(t); }
    /* 004bb182: jmp 0x4bb1b3 */ goto L_004bb1b3;
L_004bb184:; BB(0x004bb184);
    /* 004bb184: push 0x6bf054 */ { u32 v = 0x6bf054u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb189: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bb18eu); f_00630f40();
    /* 004bb18e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bb191: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bb192: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bb198: mov edx, dword ptr [ecx + 0xdc] */ r_edx = R32((u32)(r_ecx+0xdcu));
    /* 004bb19e: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bb1a3: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004bb1a9: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004bb1ab: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bb1b1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bb1b3u); call_ind(t); }
L_004bb1b3:; BB(0x004bb1b3);
    /* 004bb1b3: push 0x6bf174 */ { u32 v = 0x6bf174u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb1b8: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bb1bdu); f_00630f40();
    /* 004bb1bd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bb1c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bb1c1: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bb1c7: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004bb1cd: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bb1d2: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004bb1d8: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004bb1da: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bb1e0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bb1e2u); call_ind(t); }
    /* 004bb1e2: jmp 0x4bb419 */ goto L_004bb419;
L_004bb1e7:; BB(0x004bb1e7);
    /* 004bb1e7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb1e9: lea ecx, [ebp - 0x430] */ r_ecx = (u32)(r_ebp+0xfffffbd0u);
    /* 004bb1ef: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4bb1f4u); f_0048edf0();
    /* 004bb1f4: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004bb1f7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bb1f9: je 0x4bb212 */ if (fZ) goto L_004bb212;
L_004bb1fb:; BB(0x004bb1fb);
    /* 004bb1fb: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb200: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb205: push 0x6bf280 */ { u32 v = 0x6bf280u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb20a: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4bb20fu); f_005e9f20();
    /* 004bb20f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004bb212:; BB(0x004bb212);
    /* 004bb212: push 0x6bf054 */ { u32 v = 0x6bf054u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb217: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bb21cu); f_00630f40();
    /* 004bb21c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bb21f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bb220: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bb225: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004bb22b: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004bb231: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004bb237: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004bb239: mov ecx, eax */ r_ecx = r_eax;
    /* 004bb23b: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bb241: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bb243u); call_ind(t); }
    /* 004bb243: push 0x6bf014 */ { u32 v = 0x6bf014u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb248: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bb24du); f_00630f40();
    /* 004bb24d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bb250: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bb251: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bb257: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004bb25d: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bb262: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004bb268: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004bb26a: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bb270: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bb272u); call_ind(t); }
    /* 004bb272: jmp 0x4bb419 */ goto L_004bb419;
L_004bb277:; BB(0x004bb277);
    /* 004bb277: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb279: lea ecx, [ebp - 0x430] */ r_ecx = (u32)(r_ebp+0xfffffbd0u);
    /* 004bb27f: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4bb284u); f_0048edf0();
    /* 004bb284: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004bb287: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bb289: je 0x4bb2a2 */ if (fZ) goto L_004bb2a2;
L_004bb28b:; BB(0x004bb28b);
    /* 004bb28b: push 0x58a */ { u32 v = 0x58au; r_esp -= 4; W32(r_esp, v); }
    /* 004bb290: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb295: push 0x6bf280 */ { u32 v = 0x6bf280u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb29a: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4bb29fu); f_005e9f20();
    /* 004bb29f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004bb2a2:; BB(0x004bb2a2);
    /* 004bb2a2: push 0x6bf0ac */ { u32 v = 0x6bf0acu; r_esp -= 4; W32(r_esp, v); }
    /* 004bb2a7: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bb2acu); f_00630f40();
    /* 004bb2ac: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bb2af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bb2b0: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bb2b5: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004bb2bb: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004bb2c1: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004bb2c7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004bb2c9: mov ecx, eax */ r_ecx = r_eax;
    /* 004bb2cb: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bb2d1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bb2d3u); call_ind(t); }
    /* 004bb2d3: push 0x6bf034 */ { u32 v = 0x6bf034u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb2d8: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bb2ddu); f_00630f40();
    /* 004bb2dd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bb2e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bb2e1: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bb2e7: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004bb2ed: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bb2f2: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004bb2f8: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004bb2fa: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bb300: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bb302u); call_ind(t); }
    /* 004bb302: jmp 0x4bb419 */ goto L_004bb419;
L_004bb307:; BB(0x004bb307);
    /* 004bb307: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb309: lea ecx, [ebp - 0x430] */ r_ecx = (u32)(r_ebp+0xfffffbd0u);
    /* 004bb30f: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4bb314u); f_0048edf0();
    /* 004bb314: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004bb317: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bb319: je 0x4bb332 */ if (fZ) goto L_004bb332;
L_004bb31b:; BB(0x004bb31b);
    /* 004bb31b: push 0x58f */ { u32 v = 0x58fu; r_esp -= 4; W32(r_esp, v); }
    /* 004bb320: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb325: push 0x6bf280 */ { u32 v = 0x6bf280u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb32a: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4bb32fu); f_005e9f20();
    /* 004bb32f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004bb332:; BB(0x004bb332);
    /* 004bb332: push 0x6bf0ac */ { u32 v = 0x6bf0acu; r_esp -= 4; W32(r_esp, v); }
    /* 004bb337: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bb33cu); f_00630f40();
    /* 004bb33c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bb33f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bb340: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bb345: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004bb34b: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004bb351: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004bb357: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004bb359: mov ecx, eax */ r_ecx = r_eax;
    /* 004bb35b: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bb361: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bb363u); call_ind(t); }
    /* 004bb363: push 0x6bf174 */ { u32 v = 0x6bf174u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb368: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bb36du); f_00630f40();
    /* 004bb36d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bb370: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bb371: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bb377: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004bb37d: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bb382: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004bb388: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004bb38a: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bb390: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bb392u); call_ind(t); }
    /* 004bb392: jmp 0x4bb419 */ goto L_004bb419;
L_004bb397:; BB(0x004bb397);
    /* 004bb397: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb399: lea ecx, [ebp - 0x430] */ r_ecx = (u32)(r_ebp+0xfffffbd0u);
    /* 004bb39f: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4bb3a4u); f_0048edf0();
    /* 004bb3a4: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004bb3a7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bb3a9: je 0x4bb3c2 */ if (fZ) goto L_004bb3c2;
L_004bb3ab:; BB(0x004bb3ab);
    /* 004bb3ab: push 0x594 */ { u32 v = 0x594u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb3b0: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb3b5: push 0x6bf280 */ { u32 v = 0x6bf280u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb3ba: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4bb3bfu); f_005e9f20();
    /* 004bb3bf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004bb3c2:; BB(0x004bb3c2);
    /* 004bb3c2: push 0x6bee0c */ { u32 v = 0x6bee0cu; r_esp -= 4; W32(r_esp, v); }
    /* 004bb3c7: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bb3ccu); f_00630f40();
    /* 004bb3cc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bb3cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bb3d0: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bb3d5: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004bb3db: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004bb3e1: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004bb3e7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004bb3e9: mov ecx, eax */ r_ecx = r_eax;
    /* 004bb3eb: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bb3f1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bb3f3u); call_ind(t); }
    /* 004bb3f3: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb3f8: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bb3fe: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004bb404: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bb409: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004bb40f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004bb411: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bb417: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bb419u); call_ind(t); }
L_004bb419:; BB(0x004bb419);
    /* 004bb419: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bb41f: mov edx, dword ptr [ecx + 0xdc] */ r_edx = R32((u32)(r_ecx+0xdcu));
    /* 004bb425: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bb42a: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004bb430: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004bb432: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 004bb438: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bb43au); call_ind(t); }
    /* 004bb43a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bb43b: lea ecx, [ebp - 0x414] */ r_ecx = (u32)(r_ebp+0xfffffbecu);
    /* 004bb441: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bb442: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x4bb447u); f_00686d8e();
    /* 004bb447: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bb44a: movsx edx, byte ptr [ebp - 0x414] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffbecu));
    /* 004bb451: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bb453: jne 0x4bb477 */ if (!fZ) goto L_004bb477;
L_004bb455:; BB(0x004bb455);
    /* 004bb455: push 0x6bedf8 */ { u32 v = 0x6bedf8u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb45a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bb45fu); f_00630f40();
    /* 004bb45f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bb462: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bb463: lea eax, [ebp - 0x414] */ r_eax = (u32)(r_ebp+0xfffffbecu);
    /* 004bb469: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bb46a: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x4bb46fu); f_00686d8e();
    /* 004bb46f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bb472: jmp 0x4bb50d */ goto L_004bb50d;
L_004bb477:; BB(0x004bb477);
    /* 004bb477: push 0x6beddc */ { u32 v = 0x6beddcu; r_esp -= 4; W32(r_esp, v); }
    /* 004bb47c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bb481u); f_00630f40();
    /* 004bb481: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bb484: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bb485: lea ecx, [ebp - 0x414] */ r_ecx = (u32)(r_ebp+0xfffffbecu);
    /* 004bb48b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bb48c: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x4bb491u); f_00686d8e();
    /* 004bb491: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bb494: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004bb49a: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004bb4a0: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bb4a6: mov ecx, dword ptr [ecx + 0xdc] */ r_ecx = R32((u32)(r_ecx+0xdcu));
    /* 004bb4ac: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004bb4ae: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 004bb4b4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bb4b6u); call_ind(t); }
    /* 004bb4b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bb4b7: lea ecx, [ebp - 0x414] */ r_ecx = (u32)(r_ebp+0xfffffbecu);
    /* 004bb4bd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bb4be: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x4bb4c3u); f_00686ec6();
    /* 004bb4c3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bb4c6: push 0x6bedd8 */ { u32 v = 0x6bedd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb4cb: lea edx, [ebp - 0x414] */ r_edx = (u32)(r_ebp+0xfffffbecu);
    /* 004bb4d1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bb4d2: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x4bb4d7u); f_00686ec6();
    /* 004bb4d7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bb4da: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bb4df: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004bb4e5: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004bb4eb: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 004bb4f1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004bb4f3: mov ecx, eax */ r_ecx = r_eax;
    /* 004bb4f5: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 004bb4fb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bb4fdu); call_ind(t); }
    /* 004bb4fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bb4fe: lea ecx, [ebp - 0x414] */ r_ecx = (u32)(r_ebp+0xfffffbecu);
    /* 004bb504: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bb505: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x4bb50au); f_00686ec6();
    /* 004bb50a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004bb50d:; BB(0x004bb50d);
    /* 004bb50d: lea edx, [ebp - 0x414] */ r_edx = (u32)(r_ebp+0xfffffbecu);
    /* 004bb513: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bb514: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb516: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb518: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 004bb51e: call 0x57be80 */ r_esp -= 4; W32(r_esp, 0x4bb523u); f_0057be80();
    /* 004bb523: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004bb527: lea ecx, [ebp - 0x420] */ r_ecx = (u32)(r_ebp+0xfffffbe0u);
    /* 004bb52d: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x4bb532u); f_004a20f0();
    /* 004bb532: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004bb536: lea ecx, [ebp - 0x430] */ r_ecx = (u32)(r_ebp+0xfffffbd0u);
    /* 004bb53c: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x4bb541u); f_00484470();
    /* 004bb541: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004bb548: lea ecx, [ebp - 0x428] */ r_ecx = (u32)(r_ebp+0xfffffbd8u);
    /* 004bb54e: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x4bb553u); f_00484470();
    /* 004bb553: jmp 0x4bd6b5 */ goto L_004bd6b5;
L_004bb558:; BB(0x004bb558);
    /* 004bb558: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bb55e: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x4bb563u); f_0047e190();
    /* 004bb563: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bb566: jne 0x4bccb4 */ if (!fZ) goto L_004bccb4;
L_004bb56c:; BB(0x004bb56c);
    /* 004bb56c: lea eax, [ebp - 0x43c] */ r_eax = (u32)(r_ebp+0xfffffbc4u);
    /* 004bb572: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bb573: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bb579: mov ecx, dword ptr [ecx + 0x24] */ r_ecx = R32((u32)(r_ecx+0x24u));
    /* 004bb57c: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x4bb581u); f_004c7c40();
    /* 004bb581: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 004bb588: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bb58e: call 0x47e280 */ r_esp -= 4; W32(r_esp, 0x4bb593u); f_0047e280();
    /* 004bb593: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bb595: jne 0x4bb6ac */ if (!fZ) goto L_004bb6ac;
L_004bb59b:; BB(0x004bb59b);
    /* 004bb59b: lea edx, [ebp - 0x448] */ r_edx = (u32)(r_ebp+0xfffffbb8u);
    /* 004bb5a1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bb5a2: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bb5a8: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4bb5adu); f_0047e3b0();
    /* 004bb5ad: mov ecx, eax */ r_ecx = r_eax;
    /* 004bb5af: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x4bb5b4u); f_004c7c40();
    /* 004bb5b4: mov byte ptr [ebp - 4], 4 */ W8((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 004bb5b8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb5ba: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb5bc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb5be: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb5c0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb5c2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb5c4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb5c6: lea eax, [ebp - 0x43c] */ r_eax = (u32)(r_ebp+0xfffffbc4u);
    /* 004bb5cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bb5cd: lea ecx, [ebp - 0x450] */ r_ecx = (u32)(r_ebp+0xfffffbb0u);
    /* 004bb5d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bb5d4: lea ecx, [ebp - 0x448] */ r_ecx = (u32)(r_ebp+0xfffffbb8u);
    /* 004bb5da: call 0x48c7b0 */ r_esp -= 4; W32(r_esp, 0x4bb5dfu); f_0048c7b0();
    /* 004bb5df: mov byte ptr [ebp - 4], 5 */ W8((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 004bb5e3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb5e5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb5e7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb5e9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb5eb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb5ed: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb5ef: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb5f1: lea edx, [ebp - 0x43c] */ r_edx = (u32)(r_ebp+0xfffffbc4u);
    /* 004bb5f7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bb5f8: lea eax, [ebp - 0x440] */ r_eax = (u32)(r_ebp+0xfffffbc0u);
    /* 004bb5fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bb5ff: lea ecx, [ebp - 0x448] */ r_ecx = (u32)(r_ebp+0xfffffbb8u);
    /* 004bb605: call 0x48cc10 */ r_esp -= 4; W32(r_esp, 0x4bb60au); f_0048cc10();
    /* 004bb60a: mov byte ptr [ebp - 4], 6 */ W8((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 004bb60e: lea ecx, [ebp - 0x646] */ r_ecx = (u32)(r_ebp+0xfffff9bau);
    /* 004bb614: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bb615: lea ecx, [ebp - 0x440] */ r_ecx = (u32)(r_ebp+0xfffffbc0u);
    /* 004bb61b: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x4bb620u); f_004a2160();
    /* 004bb620: mov dl, byte ptr [eax] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 004bb622: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bb623: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bb629: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4bb62eu); f_0047e3b0();
    /* 004bb62e: mov ecx, eax */ r_ecx = r_eax;
    /* 004bb630: call 0x4da4d0 */ r_esp -= 4; W32(r_esp, 0x4bb635u); f_004da4d0();
    /* 004bb635: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb637: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004bb63a: mov ecx, esp */ r_ecx = r_esp;
    /* 004bb63c: mov dword ptr [ebp - 0x64c], esp */ W32((u32)(r_ebp+0xfffff9b4u), r_esp);
    /* 004bb642: lea eax, [ebp - 0x450] */ r_eax = (u32)(r_ebp+0xfffffbb0u);
    /* 004bb648: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bb649: call 0x484320 */ r_esp -= 4; W32(r_esp, 0x4bb64eu); f_00484320();
    /* 004bb64e: mov dword ptr [ebp - 0x864], eax */ W32((u32)(r_ebp+0xfffff79cu), r_eax);
    /* 004bb654: mov ecx, dword ptr [ebp - 0x864] */ r_ecx = R32((u32)(r_ebp+0xfffff79cu));
    /* 004bb65a: mov dword ptr [ebp - 0x868], ecx */ W32((u32)(r_ebp+0xfffff798u), r_ecx);
    /* 004bb660: mov byte ptr [ebp - 4], 7 */ W8((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 004bb664: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bb66a: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4bb66fu); f_0047e3b0();
    /* 004bb66f: mov byte ptr [ebp - 4], 6 */ W8((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 004bb673: mov ecx, eax */ r_ecx = r_eax;
    /* 004bb675: call 0x4c88a0 */ r_esp -= 4; W32(r_esp, 0x4bb67au); f_004c88a0();
    /* 004bb67a: mov byte ptr [ebp - 4], 5 */ W8((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 004bb67e: lea ecx, [ebp - 0x440] */ r_ecx = (u32)(r_ebp+0xfffffbc0u);
    /* 004bb684: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x4bb689u); f_004a20f0();
    /* 004bb689: mov byte ptr [ebp - 4], 4 */ W8((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 004bb68d: lea ecx, [ebp - 0x450] */ r_ecx = (u32)(r_ebp+0xfffffbb0u);
    /* 004bb693: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x4bb698u); f_00484470();
    /* 004bb698: mov byte ptr [ebp - 4], 3 */ W8((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 004bb69c: lea ecx, [ebp - 0x448] */ r_ecx = (u32)(r_ebp+0xfffffbb8u);
    /* 004bb6a2: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x4bb6a7u); f_00484470();
    /* 004bb6a7: jmp 0x4bb979 */ goto L_004bb979;
L_004bb6ac:; BB(0x004bb6ac);
    /* 004bb6ac: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bb6b2: call 0x47e280 */ r_esp -= 4; W32(r_esp, 0x4bb6b7u); f_0047e280();
    /* 004bb6b7: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bb6ba: je 0x4bb6d3 */ if (fZ) goto L_004bb6d3;
L_004bb6bc:; BB(0x004bb6bc);
    /* 004bb6bc: push 0x5b8 */ { u32 v = 0x5b8u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb6c1: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb6c6: push 0x6bedb0 */ { u32 v = 0x6bedb0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb6cb: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4bb6d0u); f_005e9f20();
    /* 004bb6d0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004bb6d3:; BB(0x004bb6d3);
    /* 004bb6d3: lea eax, [ebp - 0x468] */ r_eax = (u32)(r_ebp+0xfffffb98u);
    /* 004bb6d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bb6da: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bb6e0: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4bb6e5u); f_0047e3b0();
    /* 004bb6e5: mov ecx, eax */ r_ecx = r_eax;
    /* 004bb6e7: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x4bb6ecu); f_004c7c40();
    /* 004bb6ec: mov byte ptr [ebp - 4], 8 */ W8((u32)(r_ebp+0xfffffffcu), 0x8u);
    /* 004bb6f0: lea ecx, [ebp - 0x478] */ r_ecx = (u32)(r_ebp+0xfffffb88u);
    /* 004bb6f6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bb6f7: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004bb6fd: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 004bb700: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x4bb705u); f_004c7c40();
    /* 004bb705: mov byte ptr [ebp - 4], 9 */ W8((u32)(r_ebp+0xfffffffcu), 0x9u);
    /* 004bb709: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb70b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb70d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb70f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb711: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb713: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb715: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb717: lea eax, [ebp - 0x478] */ r_eax = (u32)(r_ebp+0xfffffb88u);
    /* 004bb71d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bb71e: lea ecx, [ebp - 0x454] */ r_ecx = (u32)(r_ebp+0xfffffbacu);
    /* 004bb724: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bb725: lea ecx, [ebp - 0x468] */ r_ecx = (u32)(r_ebp+0xfffffb98u);
    /* 004bb72b: call 0x48cc10 */ r_esp -= 4; W32(r_esp, 0x4bb730u); f_0048cc10();
    /* 004bb730: mov byte ptr [ebp - 4], 0xa */ W8((u32)(r_ebp+0xfffffffcu), 0xau);
    /* 004bb734: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb736: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb738: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb73a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb73c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb73e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb740: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb742: lea edx, [ebp - 0x478] */ r_edx = (u32)(r_ebp+0xfffffb88u);
    /* 004bb748: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bb749: lea eax, [ebp - 0x458] */ r_eax = (u32)(r_ebp+0xfffffba8u);
    /* 004bb74f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bb750: lea ecx, [ebp - 0x468] */ r_ecx = (u32)(r_ebp+0xfffffb98u);
    /* 004bb756: call 0x48cc10 */ r_esp -= 4; W32(r_esp, 0x4bb75bu); f_0048cc10();
    /* 004bb75b: mov byte ptr [ebp - 4], 0xb */ W8((u32)(r_ebp+0xfffffffcu), 0xbu);
    /* 004bb75f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb761: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb763: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb765: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb767: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb769: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb76b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb76d: lea ecx, [ebp - 0x478] */ r_ecx = (u32)(r_ebp+0xfffffb88u);
    /* 004bb773: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bb774: lea edx, [ebp - 0x470] */ r_edx = (u32)(r_ebp+0xfffffb90u);
    /* 004bb77a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bb77b: lea ecx, [ebp - 0x468] */ r_ecx = (u32)(r_ebp+0xfffffb98u);
    /* 004bb781: call 0x48c7b0 */ r_esp -= 4; W32(r_esp, 0x4bb786u); f_0048c7b0();
    /* 004bb786: mov byte ptr [ebp - 4], 0xc */ W8((u32)(r_ebp+0xfffffffcu), 0xcu);
    /* 004bb78a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb78c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb78e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb790: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb792: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb794: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb796: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb798: lea eax, [ebp - 0x478] */ r_eax = (u32)(r_ebp+0xfffffb88u);
    /* 004bb79e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bb79f: lea ecx, [ebp - 0x460] */ r_ecx = (u32)(r_ebp+0xfffffba0u);
    /* 004bb7a5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bb7a6: lea ecx, [ebp - 0x468] */ r_ecx = (u32)(r_ebp+0xfffffb98u);
    /* 004bb7ac: call 0x48c7b0 */ r_esp -= 4; W32(r_esp, 0x4bb7b1u); f_0048c7b0();
    /* 004bb7b1: mov byte ptr [ebp - 4], 0xd */ W8((u32)(r_ebp+0xfffffffcu), 0xdu);
    /* 004bb7b5: lea edx, [ebp - 0x64d] */ r_edx = (u32)(r_ebp+0xfffff9b3u);
    /* 004bb7bb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bb7bc: lea ecx, [ebp - 0x454] */ r_ecx = (u32)(r_ebp+0xfffffbacu);
    /* 004bb7c2: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x4bb7c7u); f_004a2160();
    /* 004bb7c7: mov al, byte ptr [eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 004bb7c9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bb7ca: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bb7d0: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4bb7d5u); f_0047e3b0();
    /* 004bb7d5: mov ecx, eax */ r_ecx = r_eax;
    /* 004bb7d7: call 0x4da4d0 */ r_esp -= 4; W32(r_esp, 0x4bb7dcu); f_004da4d0();
    /* 004bb7dc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb7de: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004bb7e1: mov ecx, esp */ r_ecx = r_esp;
    /* 004bb7e3: mov dword ptr [ebp - 0x654], esp */ W32((u32)(r_ebp+0xfffff9acu), r_esp);
    /* 004bb7e9: lea edx, [ebp - 0x470] */ r_edx = (u32)(r_ebp+0xfffffb90u);
    /* 004bb7ef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bb7f0: call 0x484320 */ r_esp -= 4; W32(r_esp, 0x4bb7f5u); f_00484320();
    /* 004bb7f5: mov dword ptr [ebp - 0x86c], eax */ W32((u32)(r_ebp+0xfffff794u), r_eax);
    /* 004bb7fb: mov eax, dword ptr [ebp - 0x86c] */ r_eax = R32((u32)(r_ebp+0xfffff794u));
    /* 004bb801: mov dword ptr [ebp - 0x870], eax */ W32((u32)(r_ebp+0xfffff790u), r_eax);
    /* 004bb807: mov byte ptr [ebp - 4], 0xe */ W8((u32)(r_ebp+0xfffffffcu), 0xeu);
    /* 004bb80b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bb811: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4bb816u); f_0047e3b0();
    /* 004bb816: mov byte ptr [ebp - 4], 0xd */ W8((u32)(r_ebp+0xfffffffcu), 0xdu);
    /* 004bb81a: mov ecx, eax */ r_ecx = r_eax;
    /* 004bb81c: call 0x4c88a0 */ r_esp -= 4; W32(r_esp, 0x4bb821u); f_004c88a0();
    /* 004bb821: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bb827: call 0x47d7f0 */ r_esp -= 4; W32(r_esp, 0x4bb82cu); f_0047d7f0();
    /* 004bb82c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bb82f: je 0x4bb848 */ if (fZ) goto L_004bb848;
L_004bb831:; BB(0x004bb831);
    /* 004bb831: push 0x5c4 */ { u32 v = 0x5c4u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb836: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb83b: push 0x6bed74 */ { u32 v = 0x6bed74u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb840: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4bb845u); f_005e9f20();
    /* 004bb845: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004bb848:; BB(0x004bb848);
    /* 004bb848: lea ecx, [ebp - 0x65a] */ r_ecx = (u32)(r_ebp+0xfffff9a6u);
    /* 004bb84e: call 0x4a20d0 */ r_esp -= 4; W32(r_esp, 0x4bb853u); f_004a20d0();
    /* 004bb853: mov dword ptr [ebp - 0x874], eax */ W32((u32)(r_ebp+0xfffff78cu), r_eax);
    /* 004bb859: mov edx, dword ptr [ebp - 0x874] */ r_edx = R32((u32)(r_ebp+0xfffff78cu));
    /* 004bb85f: mov dword ptr [ebp - 0x878], edx */ W32((u32)(r_ebp+0xfffff788u), r_edx);
    /* 004bb865: mov byte ptr [ebp - 4], 0xf */ W8((u32)(r_ebp+0xfffffffcu), 0xfu);
    /* 004bb869: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 004bb86e: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 004bb873: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 004bb878: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 004bb87d: mov eax, dword ptr [0x7913f4] */ r_eax = R32((u32)(0x7913f4u));
    /* 004bb882: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bb883: mov ecx, dword ptr [0x791390] */ r_ecx = R32((u32)(0x791390u));
    /* 004bb889: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bb88a: mov ecx, dword ptr [ebp - 0x878] */ r_ecx = R32((u32)(r_ebp+0xfffff788u));
    /* 004bb890: call 0x4a2100 */ r_esp -= 4; W32(r_esp, 0x4bb895u); f_004a2100();
    /* 004bb895: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bb896: lea ecx, [ebp - 0x458] */ r_ecx = (u32)(r_ebp+0xfffffba8u);
    /* 004bb89c: call 0x4a2550 */ r_esp -= 4; W32(r_esp, 0x4bb8a1u); f_004a2550();
    /* 004bb8a1: mov byte ptr [ebp - 0x655], al */ W8((u32)(r_ebp+0xfffff9abu), (u8)r_eax);
    /* 004bb8a7: mov byte ptr [ebp - 4], 0xd */ W8((u32)(r_ebp+0xfffffffcu), 0xdu);
    /* 004bb8ab: lea ecx, [ebp - 0x65a] */ r_ecx = (u32)(r_ebp+0xfffff9a6u);
    /* 004bb8b1: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x4bb8b6u); f_004a20f0();
    /* 004bb8b6: movzx edx, byte ptr [ebp - 0x655] */ r_edx = (u32)R8((u32)(r_ebp+0xfffff9abu));
    /* 004bb8bd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bb8bf: je 0x4bb91f */ if (fZ) goto L_004bb91f;
L_004bb8c1:; BB(0x004bb8c1);
    /* 004bb8c1: mov eax, dword ptr [ebp - 0x458] */ r_eax = R32((u32)(r_ebp+0xfffffba8u));
    /* 004bb8c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bb8c8: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bb8ce: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4bb8d3u); f_0047e3b0();
    /* 004bb8d3: mov ecx, eax */ r_ecx = r_eax;
    /* 004bb8d5: call 0x4db070 */ r_esp -= 4; W32(r_esp, 0x4bb8dau); f_004db070();
    /* 004bb8da: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb8dc: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004bb8df: mov ecx, esp */ r_ecx = r_esp;
    /* 004bb8e1: mov dword ptr [ebp - 0x660], esp */ W32((u32)(r_ebp+0xfffff9a0u), r_esp);
    /* 004bb8e7: lea edx, [ebp - 0x460] */ r_edx = (u32)(r_ebp+0xfffffba0u);
    /* 004bb8ed: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bb8ee: call 0x484320 */ r_esp -= 4; W32(r_esp, 0x4bb8f3u); f_00484320();
    /* 004bb8f3: mov dword ptr [ebp - 0x87c], eax */ W32((u32)(r_ebp+0xfffff784u), r_eax);
    /* 004bb8f9: mov eax, dword ptr [ebp - 0x87c] */ r_eax = R32((u32)(r_ebp+0xfffff784u));
    /* 004bb8ff: mov dword ptr [ebp - 0x880], eax */ W32((u32)(r_ebp+0xfffff780u), r_eax);
    /* 004bb905: mov byte ptr [ebp - 4], 0x10 */ W8((u32)(r_ebp+0xfffffffcu), 0x10u);
    /* 004bb909: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bb90f: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4bb914u); f_0047e3b0();
    /* 004bb914: mov byte ptr [ebp - 4], 0xd */ W8((u32)(r_ebp+0xfffffffcu), 0xdu);
    /* 004bb918: mov ecx, eax */ r_ecx = r_eax;
    /* 004bb91a: call 0x4c88a0 */ r_esp -= 4; W32(r_esp, 0x4bb91fu); f_004c88a0();
L_004bb91f:; BB(0x004bb91f);
    /* 004bb91f: mov byte ptr [ebp - 4], 0xc */ W8((u32)(r_ebp+0xfffffffcu), 0xcu);
    /* 004bb923: lea ecx, [ebp - 0x460] */ r_ecx = (u32)(r_ebp+0xfffffba0u);
    /* 004bb929: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x4bb92eu); f_00484470();
    /* 004bb92e: mov byte ptr [ebp - 4], 0xb */ W8((u32)(r_ebp+0xfffffffcu), 0xbu);
    /* 004bb932: lea ecx, [ebp - 0x470] */ r_ecx = (u32)(r_ebp+0xfffffb90u);
    /* 004bb938: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x4bb93du); f_00484470();
    /* 004bb93d: mov byte ptr [ebp - 4], 0xa */ W8((u32)(r_ebp+0xfffffffcu), 0xau);
    /* 004bb941: lea ecx, [ebp - 0x458] */ r_ecx = (u32)(r_ebp+0xfffffba8u);
    /* 004bb947: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x4bb94cu); f_004a20f0();
    /* 004bb94c: mov byte ptr [ebp - 4], 9 */ W8((u32)(r_ebp+0xfffffffcu), 0x9u);
    /* 004bb950: lea ecx, [ebp - 0x454] */ r_ecx = (u32)(r_ebp+0xfffffbacu);
    /* 004bb956: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x4bb95bu); f_004a20f0();
    /* 004bb95b: mov byte ptr [ebp - 4], 8 */ W8((u32)(r_ebp+0xfffffffcu), 0x8u);
    /* 004bb95f: lea ecx, [ebp - 0x478] */ r_ecx = (u32)(r_ebp+0xfffffb88u);
    /* 004bb965: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x4bb96au); f_00484470();
    /* 004bb96a: mov byte ptr [ebp - 4], 3 */ W8((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 004bb96e: lea ecx, [ebp - 0x468] */ r_ecx = (u32)(r_ebp+0xfffffb98u);
    /* 004bb974: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x4bb979u); f_00484470();
L_004bb979:; BB(0x004bb979);
    /* 004bb979: lea ecx, [ebp - 0x43c] */ r_ecx = (u32)(r_ebp+0xfffffbc4u);
    /* 004bb97f: call 0x48f150 */ r_esp -= 4; W32(r_esp, 0x4bb984u); f_0048f150();
    /* 004bb984: mov word ptr [ebp - 0x47c], ax */ W16((u32)(r_ebp+0xfffffb84u), (u16)r_eax);
    /* 004bb98b: movsx ecx, word ptr [ebp - 0x47c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffb84u));
    /* 004bb992: mov dword ptr [ebp - 0x884], ecx */ W32((u32)(r_ebp+0xfffff77cu), r_ecx);
    /* 004bb998: mov edx, dword ptr [ebp - 0x884] */ r_edx = R32((u32)(r_ebp+0xfffff77cu));
    /* 004bb99e: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004bb9a1: mov dword ptr [ebp - 0x884], edx */ W32((u32)(r_ebp+0xfffff77cu), r_edx);
    /* 004bb9a7: cmp dword ptr [ebp - 0x884], 0x45 */ {  u32 a = R32((u32)(r_ebp+0xfffff77cu)); u32 b = 0x45u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004bb9ae: ja 0x4bb9c4 */ if ((!fC&&!fZ)) goto L_004bb9c4;
L_004bb9b0:; BB(0x004bb9b0);
    /* 004bb9b0: mov eax, dword ptr [ebp - 0x884] */ r_eax = R32((u32)(r_ebp+0xfffff77cu));
    /* 004bb9b6: movzx ecx, byte ptr [eax + 0x4c3784] */ r_ecx = (u32)R8((u32)(r_eax+0x4c3784u));
    /* 004bb9bd: jmp dword ptr [ecx*4 + 0x4c36f8] */ { u32 t = R32((u32)(r_ecx*4+0x4c36f8u)); switch (t) { case 0x4bb397u: goto L_004bb397; case 0x4bb307u: goto L_004bb307; case 0x4bb277u: goto L_004bb277; case 0x4bb1e7u: goto L_004bb1e7; case 0x4bb13eu: goto L_004bb13e; case 0x4bb095u: goto L_004bb095; case 0x4bb005u: goto L_004bb005; case 0x4baf5cu: goto L_004baf5c; case 0x4baeb3u: goto L_004baeb3; case 0x4bae23u: goto L_004bae23; case 0x4bad93u: goto L_004bad93; case 0x4bad03u: goto L_004bad03; case 0x4bac2bu: goto L_004bac2b; case 0x4bab53u: goto L_004bab53; case 0x4baac3u: goto L_004baac3; case 0x4ba9ebu: goto L_004ba9eb; case 0x4ba8cau: goto L_004ba8ca; case 0x4ba83au: goto L_004ba83a; case 0x4ba7aau: goto L_004ba7aa; case 0x4ba701u: goto L_004ba701; case 0x4ba629u: goto L_004ba629; case 0x4ba599u: goto L_004ba599; case 0x4ba509u: goto L_004ba509; case 0x4ba479u: goto L_004ba479; case 0x4ba3e9u: goto L_004ba3e9; case 0x4ba359u: goto L_004ba359; case 0x4ba2c9u: goto L_004ba2c9; case 0x4ba239u: goto L_004ba239; case 0x4ba1a9u: goto L_004ba1a9; case 0x4ba119u: goto L_004ba119; case 0x4ba089u: goto L_004ba089; case 0x4b9ff9u: goto L_004b9ff9; case 0x4b9f69u: goto L_004b9f69; case 0x4b9ed9u: goto L_004b9ed9; case 0x4b9e49u: goto L_004b9e49; case 0x4b9db9u: goto L_004b9db9; case 0x4b9d29u: goto L_004b9d29; case 0x4b9c99u: goto L_004b9c99; case 0x4b9c09u: goto L_004b9c09; case 0x4b9b79u: goto L_004b9b79; case 0x4b9ae9u: goto L_004b9ae9; case 0x4b9a59u: goto L_004b9a59; case 0x4b99c9u: goto L_004b99c9; case 0x4b9920u: goto L_004b9920; case 0x4b9877u: goto L_004b9877; case 0x4b97e7u: goto L_004b97e7; case 0x4b9757u: goto L_004b9757; case 0x4b96c7u: goto L_004b96c7; case 0x4b9637u: goto L_004b9637; case 0x4b95a7u: goto L_004b95a7; case 0x4b9517u: goto L_004b9517; case 0x4b9487u: goto L_004b9487; case 0x4b93afu: goto L_004b93af; case 0x4b931fu: goto L_004b931f; case 0x4b928fu: goto L_004b928f; case 0x4b91ffu: goto L_004b91ff; case 0x4b916fu: goto L_004b916f; case 0x4b90dfu: goto L_004b90df; case 0x4b904fu: goto L_004b904f; case 0x4b8fbfu: goto L_004b8fbf; case 0x4b8f2fu: goto L_004b8f2f; case 0x4b8e9fu: goto L_004b8e9f; case 0x4b8e0fu: goto L_004b8e0f; case 0x4b8d7fu: goto L_004b8d7f; case 0x4b8cefu: goto L_004b8cef; case 0x4b8c5fu: goto L_004b8c5f; case 0x4b8bcfu: goto L_004b8bcf; case 0x4b8b3fu: goto L_004b8b3f; case 0x4b8aafu: goto L_004b8aaf; case 0x4b8a1fu: goto L_004b8a1f; case 0x4c34fcu: goto L_004c34fc; case 0x4c34d0u: goto L_004c34d0; case 0x4c34a4u: goto L_004c34a4; case 0x4c343cu: goto L_004c343c; case 0x4c3324u: goto L_004c3324; case 0x4c145au: goto L_004c145a; case 0x4c1059u: goto L_004c1059; case 0x4bfc70u: goto L_004bfc70; case 0x4be895u: goto L_004be895; case 0x4be7f1u: goto L_004be7f1; case 0x4c353du: goto L_004c353d; case 0x4be479u: goto L_004be479; case 0x4be228u: goto L_004be228; case 0x4be1cau: goto L_004be1ca; case 0x4be05du: goto L_004be05d; case 0x4bdfa3u: goto L_004bdfa3; case 0x4bd83cu: goto L_004bd83c; case 0x4bda3au: goto L_004bda3a; case 0x4b8857u: goto L_004b8857; case 0x4bd6e4u: goto L_004bd6e4; case 0x4b8571u: goto L_004b8571; case 0x4b84c0u: goto L_004b84c0; case 0x4b83e5u: goto L_004b83e5; case 0x4b822eu: goto L_004b822e; case 0x4b814eu: goto L_004b814e; case 0x4b7e74u: goto L_004b7e74; case 0x4bba1au: goto L_004bba1a; case 0x4bba7bu: goto L_004bba7b; case 0x4bbadcu: goto L_004bbadc; case 0x4bbb3du: goto L_004bbb3d; case 0x4bbb9eu: goto L_004bbb9e; case 0x4bbbffu: goto L_004bbbff; case 0x4bbc60u: goto L_004bbc60; case 0x4bbcc1u: goto L_004bbcc1; case 0x4bbd22u: goto L_004bbd22; case 0x4bbd83u: goto L_004bbd83; case 0x4bbde4u: goto L_004bbde4; case 0x4bbe45u: goto L_004bbe45; case 0x4bbea6u: goto L_004bbea6; case 0x4bbf07u: goto L_004bbf07; case 0x4bbf81u: goto L_004bbf81; case 0x4bbffbu: goto L_004bbffb; case 0x4bc05cu: goto L_004bc05c; case 0x4bc0bdu: goto L_004bc0bd; case 0x4bc11eu: goto L_004bc11e; case 0x4bc17fu: goto L_004bc17f; case 0x4bc1e0u: goto L_004bc1e0; case 0x4bc241u: goto L_004bc241; case 0x4bc2a2u: goto L_004bc2a2; case 0x4bc31cu: goto L_004bc31c; case 0x4bc37du: goto L_004bc37d; case 0x4bc3deu: goto L_004bc3de; case 0x4bc458u: goto L_004bc458; case 0x4bc4b9u: goto L_004bc4b9; case 0x4bc51au: goto L_004bc51a; case 0x4bc594u: goto L_004bc594; case 0x4bc60eu: goto L_004bc60e; case 0x4bc66fu: goto L_004bc66f; case 0x4bc6e9u: goto L_004bc6e9; case 0x4bc74au: goto L_004bc74a; case 0x4bc7a8u: goto L_004bc7a8; default: UNSUP(0x004bb9bd, "jump table entry is not a known target"); } }
L_004bb9c4:; BB(0x004bb9c4);
    /* 004bb9c4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb9c6: lea ecx, [ebp - 0x43c] */ r_ecx = (u32)(r_ebp+0xfffffbc4u);
    /* 004bb9cc: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4bb9d1u); f_0048edf0();
    /* 004bb9d1: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004bb9d4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bb9d6: je 0x4bb9ef */ if (fZ) goto L_004bb9ef;
L_004bb9d8:; BB(0x004bb9d8);
    /* 004bb9d8: push 0x5d5 */ { u32 v = 0x5d5u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb9dd: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb9e2: push 0x6bed40 */ { u32 v = 0x6bed40u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb9e7: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4bb9ecu); f_005e9f20();
    /* 004bb9ec: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004bb9ef:; BB(0x004bb9ef);
    /* 004bb9ef: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb9f4: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bb9fa: mov edx, dword ptr [ecx + 0xdc] */ r_edx = R32((u32)(r_ecx+0xdcu));
    /* 004bba00: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bba05: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004bba0b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004bba0d: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bba13: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bba15u); call_ind(t); }
    /* 004bba15: jmp 0x4bc804 */ goto L_004bc804;
L_004bba1a:; BB(0x004bba1a);
    /* 004bba1a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bba1c: lea ecx, [ebp - 0x43c] */ r_ecx = (u32)(r_ebp+0xfffffbc4u);
    /* 004bba22: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4bba27u); f_0048edf0();
    /* 004bba27: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004bba2a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bba2c: je 0x4bba45 */ if (fZ) goto L_004bba45;
L_004bba2e:; BB(0x004bba2e);
    /* 004bba2e: push 0x5d9 */ { u32 v = 0x5d9u; r_esp -= 4; W32(r_esp, v); }
    /* 004bba33: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004bba38: push 0x6bed40 */ { u32 v = 0x6bed40u; r_esp -= 4; W32(r_esp, v); }
    /* 004bba3d: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4bba42u); f_005e9f20();
    /* 004bba42: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004bba45:; BB(0x004bba45);
    /* 004bba45: push 0x6bf218 */ { u32 v = 0x6bf218u; r_esp -= 4; W32(r_esp, v); }
    /* 004bba4a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bba4fu); f_00630f40();
    /* 004bba4f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bba52: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bba53: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bba58: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004bba5e: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004bba64: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004bba6a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004bba6c: mov ecx, eax */ r_ecx = r_eax;
    /* 004bba6e: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bba74: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bba76u); call_ind(t); }
    /* 004bba76: jmp 0x4bc804 */ goto L_004bc804;
L_004bba7b:; BB(0x004bba7b);
    /* 004bba7b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bba7d: lea ecx, [ebp - 0x43c] */ r_ecx = (u32)(r_ebp+0xfffffbc4u);
    /* 004bba83: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4bba88u); f_0048edf0();
    /* 004bba88: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004bba8b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bba8d: je 0x4bbaa6 */ if (fZ) goto L_004bbaa6;
L_004bba8f:; BB(0x004bba8f);
    /* 004bba8f: push 0x5dd */ { u32 v = 0x5ddu; r_esp -= 4; W32(r_esp, v); }
    /* 004bba94: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004bba99: push 0x6bed40 */ { u32 v = 0x6bed40u; r_esp -= 4; W32(r_esp, v); }
    /* 004bba9e: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4bbaa3u); f_005e9f20();
    /* 004bbaa3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004bbaa6:; BB(0x004bbaa6);
    /* 004bbaa6: push 0x6bf218 */ { u32 v = 0x6bf218u; r_esp -= 4; W32(r_esp, v); }
    /* 004bbaab: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bbab0u); f_00630f40();
    /* 004bbab0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bbab3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bbab4: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bbab9: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004bbabf: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004bbac5: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004bbacb: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004bbacd: mov ecx, eax */ r_ecx = r_eax;
    /* 004bbacf: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bbad5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bbad7u); call_ind(t); }
    /* 004bbad7: jmp 0x4bc804 */ goto L_004bc804;
L_004bbadc:; BB(0x004bbadc);
    /* 004bbadc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bbade: lea ecx, [ebp - 0x43c] */ r_ecx = (u32)(r_ebp+0xfffffbc4u);
    /* 004bbae4: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4bbae9u); f_0048edf0();
    /* 004bbae9: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004bbaec: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bbaee: je 0x4bbb07 */ if (fZ) goto L_004bbb07;
L_004bbaf0:; BB(0x004bbaf0);
    /* 004bbaf0: push 0x5e1 */ { u32 v = 0x5e1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bbaf5: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004bbafa: push 0x6bed40 */ { u32 v = 0x6bed40u; r_esp -= 4; W32(r_esp, v); }
    /* 004bbaff: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4bbb04u); f_005e9f20();
    /* 004bbb04: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004bbb07:; BB(0x004bbb07);
    /* 004bbb07: push 0x6bf218 */ { u32 v = 0x6bf218u; r_esp -= 4; W32(r_esp, v); }
    /* 004bbb0c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bbb11u); f_00630f40();
    /* 004bbb11: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bbb14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bbb15: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bbb1a: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004bbb20: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004bbb26: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004bbb2c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004bbb2e: mov ecx, eax */ r_ecx = r_eax;
    /* 004bbb30: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bbb36: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bbb38u); call_ind(t); }
    /* 004bbb38: jmp 0x4bc804 */ goto L_004bc804;
L_004bbb3d:; BB(0x004bbb3d);
    /* 004bbb3d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bbb3f: lea ecx, [ebp - 0x43c] */ r_ecx = (u32)(r_ebp+0xfffffbc4u);
    /* 004bbb45: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4bbb4au); f_0048edf0();
    /* 004bbb4a: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004bbb4d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bbb4f: jne 0x4bbb68 */ if (!fZ) goto L_004bbb68;
L_004bbb51:; BB(0x004bbb51);
    /* 004bbb51: push 0x5e5 */ { u32 v = 0x5e5u; r_esp -= 4; W32(r_esp, v); }
    /* 004bbb56: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004bbb5b: push 0x6bed0c */ { u32 v = 0x6bed0cu; r_esp -= 4; W32(r_esp, v); }
    /* 004bbb60: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4bbb65u); f_005e9f20();
    /* 004bbb65: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004bbb68:; BB(0x004bbb68);
    /* 004bbb68: push 0x6becdc */ { u32 v = 0x6becdcu; r_esp -= 4; W32(r_esp, v); }
    /* 004bbb6d: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bbb72u); f_00630f40();
    /* 004bbb72: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bbb75: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bbb76: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bbb7b: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004bbb81: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004bbb87: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004bbb8d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004bbb8f: mov ecx, eax */ r_ecx = r_eax;
    /* 004bbb91: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bbb97: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bbb99u); call_ind(t); }
    /* 004bbb99: jmp 0x4bc804 */ goto L_004bc804;
L_004bbb9e:; BB(0x004bbb9e);
    /* 004bbb9e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bbba0: lea ecx, [ebp - 0x43c] */ r_ecx = (u32)(r_ebp+0xfffffbc4u);
    /* 004bbba6: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4bbbabu); f_0048edf0();
    /* 004bbbab: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004bbbae: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bbbb0: je 0x4bbbc9 */ if (fZ) goto L_004bbbc9;
L_004bbbb2:; BB(0x004bbbb2);
    /* 004bbbb2: push 0x5ea */ { u32 v = 0x5eau; r_esp -= 4; W32(r_esp, v); }
    /* 004bbbb7: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004bbbbc: push 0x6bed40 */ { u32 v = 0x6bed40u; r_esp -= 4; W32(r_esp, v); }
    /* 004bbbc1: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4bbbc6u); f_005e9f20();
    /* 004bbbc6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004bbbc9:; BB(0x004bbbc9);
    /* 004bbbc9: push 0x6bf054 */ { u32 v = 0x6bf054u; r_esp -= 4; W32(r_esp, v); }
    /* 004bbbce: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bbbd3u); f_00630f40();
    /* 004bbbd3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bbbd6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bbbd7: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bbbdc: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004bbbe2: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004bbbe8: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004bbbee: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004bbbf0: mov ecx, eax */ r_ecx = r_eax;
    /* 004bbbf2: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bbbf8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bbbfau); call_ind(t); }
    /* 004bbbfa: jmp 0x4bc804 */ goto L_004bc804;
L_004bbbff:; BB(0x004bbbff);
    /* 004bbbff: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bbc01: lea ecx, [ebp - 0x43c] */ r_ecx = (u32)(r_ebp+0xfffffbc4u);
    /* 004bbc07: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4bbc0cu); f_0048edf0();
    /* 004bbc0c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004bbc0f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bbc11: je 0x4bbc2a */ if (fZ) goto L_004bbc2a;
L_004bbc13:; BB(0x004bbc13);
    /* 004bbc13: push 0x5ee */ { u32 v = 0x5eeu; r_esp -= 4; W32(r_esp, v); }
    /* 004bbc18: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004bbc1d: push 0x6bed40 */ { u32 v = 0x6bed40u; r_esp -= 4; W32(r_esp, v); }
    /* 004bbc22: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4bbc27u); f_005e9f20();
    /* 004bbc27: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004bbc2a:; BB(0x004bbc2a);
    /* 004bbc2a: push 0x6bf174 */ { u32 v = 0x6bf174u; r_esp -= 4; W32(r_esp, v); }
    /* 004bbc2f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bbc34u); f_00630f40();
    /* 004bbc34: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bbc37: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bbc38: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bbc3d: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004bbc43: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004bbc49: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004bbc4f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004bbc51: mov ecx, eax */ r_ecx = r_eax;
    /* 004bbc53: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bbc59: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bbc5bu); call_ind(t); }
    /* 004bbc5b: jmp 0x4bc804 */ goto L_004bc804;
L_004bbc60:; BB(0x004bbc60);
    /* 004bbc60: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bbc62: lea ecx, [ebp - 0x43c] */ r_ecx = (u32)(r_ebp+0xfffffbc4u);
    /* 004bbc68: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4bbc6du); f_0048edf0();
    /* 004bbc6d: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004bbc70: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bbc72: je 0x4bbc8b */ if (fZ) goto L_004bbc8b;
L_004bbc74:; BB(0x004bbc74);
    /* 004bbc74: push 0x5f2 */ { u32 v = 0x5f2u; r_esp -= 4; W32(r_esp, v); }
    /* 004bbc79: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004bbc7e: push 0x6bed40 */ { u32 v = 0x6bed40u; r_esp -= 4; W32(r_esp, v); }
    /* 004bbc83: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4bbc88u); f_005e9f20();
    /* 004bbc88: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004bbc8b:; BB(0x004bbc8b);
    /* 004bbc8b: push 0x6becb8 */ { u32 v = 0x6becb8u; r_esp -= 4; W32(r_esp, v); }
    /* 004bbc90: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bbc95u); f_00630f40();
    /* 004bbc95: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bbc98: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bbc99: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bbc9e: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004bbca4: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004bbcaa: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004bbcb0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004bbcb2: mov ecx, eax */ r_ecx = r_eax;
    /* 004bbcb4: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bbcba: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bbcbcu); call_ind(t); }
    /* 004bbcbc: jmp 0x4bc804 */ goto L_004bc804;
L_004bbcc1:; BB(0x004bbcc1);
    /* 004bbcc1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bbcc3: lea ecx, [ebp - 0x43c] */ r_ecx = (u32)(r_ebp+0xfffffbc4u);
    /* 004bbcc9: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4bbcceu); f_0048edf0();
    /* 004bbcce: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004bbcd1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bbcd3: je 0x4bbcec */ if (fZ) goto L_004bbcec;
L_004bbcd5:; BB(0x004bbcd5);
    /* 004bbcd5: push 0x5f6 */ { u32 v = 0x5f6u; r_esp -= 4; W32(r_esp, v); }
    /* 004bbcda: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004bbcdf: push 0x6bed40 */ { u32 v = 0x6bed40u; r_esp -= 4; W32(r_esp, v); }
    /* 004bbce4: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4bbce9u); f_005e9f20();
    /* 004bbce9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004bbcec:; BB(0x004bbcec);
    /* 004bbcec: push 0x6bec9c */ { u32 v = 0x6bec9cu; r_esp -= 4; W32(r_esp, v); }
    /* 004bbcf1: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bbcf6u); f_00630f40();
    /* 004bbcf6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bbcf9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bbcfa: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bbcff: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004bbd05: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004bbd0b: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004bbd11: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004bbd13: mov ecx, eax */ r_ecx = r_eax;
    /* 004bbd15: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bbd1b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bbd1du); call_ind(t); }
    /* 004bbd1d: jmp 0x4bc804 */ goto L_004bc804;
L_004bbd22:; BB(0x004bbd22);
    /* 004bbd22: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bbd24: lea ecx, [ebp - 0x43c] */ r_ecx = (u32)(r_ebp+0xfffffbc4u);
    /* 004bbd2a: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4bbd2fu); f_0048edf0();
    /* 004bbd2f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004bbd32: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bbd34: je 0x4bbd4d */ if (fZ) goto L_004bbd4d;
L_004bbd36:; BB(0x004bbd36);
    /* 004bbd36: push 0x5fa */ { u32 v = 0x5fau; r_esp -= 4; W32(r_esp, v); }
    /* 004bbd3b: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004bbd40: push 0x6bed40 */ { u32 v = 0x6bed40u; r_esp -= 4; W32(r_esp, v); }
    /* 004bbd45: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4bbd4au); f_005e9f20();
    /* 004bbd4a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004bbd4d:; BB(0x004bbd4d);
    /* 004bbd4d: push 0x6bf174 */ { u32 v = 0x6bf174u; r_esp -= 4; W32(r_esp, v); }
    /* 004bbd52: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bbd57u); f_00630f40();
    /* 004bbd57: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bbd5a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bbd5b: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bbd60: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004bbd66: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004bbd6c: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004bbd72: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004bbd74: mov ecx, eax */ r_ecx = r_eax;
    /* 004bbd76: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bbd7c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bbd7eu); call_ind(t); }
    /* 004bbd7e: jmp 0x4bc804 */ goto L_004bc804;
L_004bbd83:; BB(0x004bbd83);
    /* 004bbd83: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bbd85: lea ecx, [ebp - 0x43c] */ r_ecx = (u32)(r_ebp+0xfffffbc4u);
    /* 004bbd8b: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4bbd90u); f_0048edf0();
    /* 004bbd90: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004bbd93: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bbd95: je 0x4bbdae */ if (fZ) goto L_004bbdae;
L_004bbd97:; BB(0x004bbd97);
    /* 004bbd97: push 0x5fe */ { u32 v = 0x5feu; r_esp -= 4; W32(r_esp, v); }
    /* 004bbd9c: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004bbda1: push 0x6bed40 */ { u32 v = 0x6bed40u; r_esp -= 4; W32(r_esp, v); }
    /* 004bbda6: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4bbdabu); f_005e9f20();
    /* 004bbdab: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004bbdae:; BB(0x004bbdae);
    /* 004bbdae: push 0x6bf13c */ { u32 v = 0x6bf13cu; r_esp -= 4; W32(r_esp, v); }
    /* 004bbdb3: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bbdb8u); f_00630f40();
    /* 004bbdb8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bbdbb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bbdbc: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bbdc1: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004bbdc7: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004bbdcd: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004bbdd3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004bbdd5: mov ecx, eax */ r_ecx = r_eax;
    /* 004bbdd7: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bbddd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bbddfu); call_ind(t); }
    /* 004bbddf: jmp 0x4bc804 */ goto L_004bc804;
L_004bbde4:; BB(0x004bbde4);
    /* 004bbde4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bbde6: lea ecx, [ebp - 0x43c] */ r_ecx = (u32)(r_ebp+0xfffffbc4u);
    /* 004bbdec: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4bbdf1u); f_0048edf0();
    /* 004bbdf1: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004bbdf4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bbdf6: je 0x4bbe0f */ if (fZ) goto L_004bbe0f;
L_004bbdf8:; BB(0x004bbdf8);
    /* 004bbdf8: push 0x602 */ { u32 v = 0x602u; r_esp -= 4; W32(r_esp, v); }
    /* 004bbdfd: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004bbe02: push 0x6bed40 */ { u32 v = 0x6bed40u; r_esp -= 4; W32(r_esp, v); }
    /* 004bbe07: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4bbe0cu); f_005e9f20();
    /* 004bbe0c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004bbe0f:; BB(0x004bbe0f);
    /* 004bbe0f: push 0x6bec7c */ { u32 v = 0x6bec7cu; r_esp -= 4; W32(r_esp, v); }
    /* 004bbe14: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bbe19u); f_00630f40();
    /* 004bbe19: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bbe1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bbe1d: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bbe22: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004bbe28: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004bbe2e: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004bbe34: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004bbe36: mov ecx, eax */ r_ecx = r_eax;
    /* 004bbe38: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bbe3e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bbe40u); call_ind(t); }
    /* 004bbe40: jmp 0x4bc804 */ goto L_004bc804;
L_004bbe45:; BB(0x004bbe45);
    /* 004bbe45: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bbe47: lea ecx, [ebp - 0x43c] */ r_ecx = (u32)(r_ebp+0xfffffbc4u);
    /* 004bbe4d: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4bbe52u); f_0048edf0();
    /* 004bbe52: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004bbe55: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bbe57: je 0x4bbe70 */ if (fZ) goto L_004bbe70;
L_004bbe59:; BB(0x004bbe59);
    /* 004bbe59: push 0x606 */ { u32 v = 0x606u; r_esp -= 4; W32(r_esp, v); }
    /* 004bbe5e: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004bbe63: push 0x6bed40 */ { u32 v = 0x6bed40u; r_esp -= 4; W32(r_esp, v); }
    /* 004bbe68: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4bbe6du); f_005e9f20();
    /* 004bbe6d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004bbe70:; BB(0x004bbe70);
    /* 004bbe70: push 0x6bec60 */ { u32 v = 0x6bec60u; r_esp -= 4; W32(r_esp, v); }
    /* 004bbe75: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bbe7au); f_00630f40();
    /* 004bbe7a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bbe7d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bbe7e: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bbe83: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004bbe89: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004bbe8f: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004bbe95: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004bbe97: mov ecx, eax */ r_ecx = r_eax;
    /* 004bbe99: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bbe9f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bbea1u); call_ind(t); }
    /* 004bbea1: jmp 0x4bc804 */ goto L_004bc804;
L_004bbea6:; BB(0x004bbea6);
    /* 004bbea6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bbea8: lea ecx, [ebp - 0x43c] */ r_ecx = (u32)(r_ebp+0xfffffbc4u);
    /* 004bbeae: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4bbeb3u); f_0048edf0();
    /* 004bbeb3: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004bbeb6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bbeb8: je 0x4bbed1 */ if (fZ) goto L_004bbed1;
L_004bbeba:; BB(0x004bbeba);
    /* 004bbeba: push 0x610 */ { u32 v = 0x610u; r_esp -= 4; W32(r_esp, v); }
    /* 004bbebf: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004bbec4: push 0x6bed40 */ { u32 v = 0x6bed40u; r_esp -= 4; W32(r_esp, v); }
    /* 004bbec9: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4bbeceu); f_005e9f20();
    /* 004bbece: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004bbed1:; BB(0x004bbed1);
    /* 004bbed1: push 0x6bf218 */ { u32 v = 0x6bf218u; r_esp -= 4; W32(r_esp, v); }
    /* 004bbed6: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bbedbu); f_00630f40();
    /* 004bbedb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bbede: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bbedf: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bbee4: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004bbeea: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004bbef0: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004bbef6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004bbef8: mov ecx, eax */ r_ecx = r_eax;
    /* 004bbefa: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bbf00: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bbf02u); call_ind(t); }
    /* 004bbf02: jmp 0x4bc804 */ goto L_004bc804;
L_004bbf07:; BB(0x004bbf07);
    /* 004bbf07: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bbf09: lea ecx, [ebp - 0x43c] */ r_ecx = (u32)(r_ebp+0xfffffbc4u);
    /* 004bbf0f: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4bbf14u); f_0048edf0();
    /* 004bbf14: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004bbf17: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bbf19: je 0x4bbf4d */ if (fZ) goto L_004bbf4d;
L_004bbf1b:; BB(0x004bbf1b);
    /* 004bbf1b: push 0x6bf088 */ { u32 v = 0x6bf088u; r_esp -= 4; W32(r_esp, v); }
    /* 004bbf20: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bbf25u); f_00630f40();
    /* 004bbf25: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bbf28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bbf29: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004bbf2f: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004bbf35: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bbf3b: mov ecx, dword ptr [ecx + 0xdc] */ r_ecx = R32((u32)(r_ecx+0xdcu));
    /* 004bbf41: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004bbf43: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bbf49: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bbf4bu); call_ind(t); }
    /* 004bbf4b: jmp 0x4bbf7c */ goto L_004bbf7c;
L_004bbf4d:; BB(0x004bbf4d);
    /* 004bbf4d: push 0x6bec38 */ { u32 v = 0x6bec38u; r_esp -= 4; W32(r_esp, v); }
    /* 004bbf52: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bbf57u); f_00630f40();
    /* 004bbf57: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bbf5a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bbf5b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bbf61: mov edx, dword ptr [ecx + 0xdc] */ r_edx = R32((u32)(r_ecx+0xdcu));
    /* 004bbf67: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bbf6c: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004bbf72: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004bbf74: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bbf7a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bbf7cu); call_ind(t); }
L_004bbf7c:; BB(0x004bbf7c);
    /* 004bbf7c: jmp 0x4bc804 */ goto L_004bc804;
L_004bbf81:; BB(0x004bbf81);
    /* 004bbf81: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bbf83: lea ecx, [ebp - 0x43c] */ r_ecx = (u32)(r_ebp+0xfffffbc4u);
    /* 004bbf89: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4bbf8eu); f_0048edf0();
    /* 004bbf8e: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004bbf91: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bbf93: je 0x4bbfc7 */ if (fZ) goto L_004bbfc7;
L_004bbf95:; BB(0x004bbf95);
    /* 004bbf95: push 0x6becdc */ { u32 v = 0x6becdcu; r_esp -= 4; W32(r_esp, v); }
    /* 004bbf9a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bbf9fu); f_00630f40();
    /* 004bbf9f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bbfa2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bbfa3: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004bbfa9: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004bbfaf: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bbfb5: mov ecx, dword ptr [ecx + 0xdc] */ r_ecx = R32((u32)(r_ecx+0xdcu));
    /* 004bbfbb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004bbfbd: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bbfc3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bbfc5u); call_ind(t); }
    /* 004bbfc5: jmp 0x4bbff6 */ goto L_004bbff6;
L_004bbfc7:; BB(0x004bbfc7);
    /* 004bbfc7: push 0x6bec14 */ { u32 v = 0x6bec14u; r_esp -= 4; W32(r_esp, v); }
    /* 004bbfcc: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bbfd1u); f_00630f40();
    /* 004bbfd1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bbfd4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bbfd5: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bbfdb: mov edx, dword ptr [ecx + 0xdc] */ r_edx = R32((u32)(r_ecx+0xdcu));
    /* 004bbfe1: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bbfe6: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004bbfec: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004bbfee: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bbff4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bbff6u); call_ind(t); }
L_004bbff6:; BB(0x004bbff6);
    /* 004bbff6: jmp 0x4bc804 */ goto L_004bc804;
L_004bbffb:; BB(0x004bbffb);
    /* 004bbffb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bbffd: lea ecx, [ebp - 0x43c] */ r_ecx = (u32)(r_ebp+0xfffffbc4u);
    /* 004bc003: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4bc008u); f_0048edf0();
    /* 004bc008: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004bc00b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bc00d: je 0x4bc026 */ if (fZ) goto L_004bc026;
L_004bc00f:; BB(0x004bc00f);
    /* 004bc00f: push 0x626 */ { u32 v = 0x626u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc014: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc019: push 0x6bed40 */ { u32 v = 0x6bed40u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc01e: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4bc023u); f_005e9f20();
    /* 004bc023: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004bc026:; BB(0x004bc026);
    /* 004bc026: push 0x6bf054 */ { u32 v = 0x6bf054u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc02b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bc030u); f_00630f40();
    /* 004bc030: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bc033: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bc034: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bc039: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004bc03f: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004bc045: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004bc04b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004bc04d: mov ecx, eax */ r_ecx = r_eax;
    /* 004bc04f: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bc055: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bc057u); call_ind(t); }
    /* 004bc057: jmp 0x4bc804 */ goto L_004bc804;
L_004bc05c:; BB(0x004bc05c);
    /* 004bc05c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc05e: lea ecx, [ebp - 0x43c] */ r_ecx = (u32)(r_ebp+0xfffffbc4u);
    /* 004bc064: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4bc069u); f_0048edf0();
    /* 004bc069: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004bc06c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bc06e: je 0x4bc087 */ if (fZ) goto L_004bc087;
L_004bc070:; BB(0x004bc070);
    /* 004bc070: push 0x62b */ { u32 v = 0x62bu; r_esp -= 4; W32(r_esp, v); }
    /* 004bc075: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc07a: push 0x6bed40 */ { u32 v = 0x6bed40u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc07f: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4bc084u); f_005e9f20();
    /* 004bc084: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004bc087:; BB(0x004bc087);
    /* 004bc087: push 0x6bf174 */ { u32 v = 0x6bf174u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc08c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bc091u); f_00630f40();
    /* 004bc091: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bc094: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bc095: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bc09a: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004bc0a0: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004bc0a6: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004bc0ac: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004bc0ae: mov ecx, eax */ r_ecx = r_eax;
    /* 004bc0b0: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bc0b6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bc0b8u); call_ind(t); }
    /* 004bc0b8: jmp 0x4bc804 */ goto L_004bc804;
L_004bc0bd:; BB(0x004bc0bd);
    /* 004bc0bd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc0bf: lea ecx, [ebp - 0x43c] */ r_ecx = (u32)(r_ebp+0xfffffbc4u);
    /* 004bc0c5: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4bc0cau); f_0048edf0();
    /* 004bc0ca: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004bc0cd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bc0cf: je 0x4bc0e8 */ if (fZ) goto L_004bc0e8;
L_004bc0d1:; BB(0x004bc0d1);
    /* 004bc0d1: push 0x630 */ { u32 v = 0x630u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc0d6: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc0db: push 0x6bed40 */ { u32 v = 0x6bed40u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc0e0: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4bc0e5u); f_005e9f20();
    /* 004bc0e5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004bc0e8:; BB(0x004bc0e8);
    /* 004bc0e8: push 0x6becb8 */ { u32 v = 0x6becb8u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc0ed: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bc0f2u); f_00630f40();
    /* 004bc0f2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bc0f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bc0f6: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bc0fb: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004bc101: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004bc107: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004bc10d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004bc10f: mov ecx, eax */ r_ecx = r_eax;
    /* 004bc111: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bc117: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bc119u); call_ind(t); }
    /* 004bc119: jmp 0x4bc804 */ goto L_004bc804;
L_004bc11e:; BB(0x004bc11e);
    /* 004bc11e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc120: lea ecx, [ebp - 0x43c] */ r_ecx = (u32)(r_ebp+0xfffffbc4u);
    /* 004bc126: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4bc12bu); f_0048edf0();
    /* 004bc12b: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004bc12e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bc130: je 0x4bc149 */ if (fZ) goto L_004bc149;
L_004bc132:; BB(0x004bc132);
    /* 004bc132: push 0x635 */ { u32 v = 0x635u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc137: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc13c: push 0x6bed40 */ { u32 v = 0x6bed40u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc141: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4bc146u); f_005e9f20();
    /* 004bc146: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004bc149:; BB(0x004bc149);
    /* 004bc149: push 0x6bec9c */ { u32 v = 0x6bec9cu; r_esp -= 4; W32(r_esp, v); }
    /* 004bc14e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bc153u); f_00630f40();
    /* 004bc153: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bc156: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bc157: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bc15c: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004bc162: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004bc168: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004bc16e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004bc170: mov ecx, eax */ r_ecx = r_eax;
    /* 004bc172: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bc178: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bc17au); call_ind(t); }
    /* 004bc17a: jmp 0x4bc804 */ goto L_004bc804;
L_004bc17f:; BB(0x004bc17f);
    /* 004bc17f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc181: lea ecx, [ebp - 0x43c] */ r_ecx = (u32)(r_ebp+0xfffffbc4u);
    /* 004bc187: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4bc18cu); f_0048edf0();
    /* 004bc18c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004bc18f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bc191: je 0x4bc1aa */ if (fZ) goto L_004bc1aa;
L_004bc193:; BB(0x004bc193);
    /* 004bc193: push 0x63c */ { u32 v = 0x63cu; r_esp -= 4; W32(r_esp, v); }
    /* 004bc198: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc19d: push 0x6bed40 */ { u32 v = 0x6bed40u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc1a2: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4bc1a7u); f_005e9f20();
    /* 004bc1a7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004bc1aa:; BB(0x004bc1aa);
    /* 004bc1aa: push 0x6bf174 */ { u32 v = 0x6bf174u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc1af: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bc1b4u); f_00630f40();
    /* 004bc1b4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bc1b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bc1b8: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bc1bd: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004bc1c3: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004bc1c9: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004bc1cf: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004bc1d1: mov ecx, eax */ r_ecx = r_eax;
    /* 004bc1d3: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bc1d9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bc1dbu); call_ind(t); }
    /* 004bc1db: jmp 0x4bc804 */ goto L_004bc804;
L_004bc1e0:; BB(0x004bc1e0);
    /* 004bc1e0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc1e2: lea ecx, [ebp - 0x43c] */ r_ecx = (u32)(r_ebp+0xfffffbc4u);
    /* 004bc1e8: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4bc1edu); f_0048edf0();
    /* 004bc1ed: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004bc1f0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bc1f2: je 0x4bc20b */ if (fZ) goto L_004bc20b;
L_004bc1f4:; BB(0x004bc1f4);
    /* 004bc1f4: push 0x640 */ { u32 v = 0x640u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc1f9: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc1fe: push 0x6bed40 */ { u32 v = 0x6bed40u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc203: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4bc208u); f_005e9f20();
    /* 004bc208: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004bc20b:; BB(0x004bc20b);
    /* 004bc20b: push 0x6bf13c */ { u32 v = 0x6bf13cu; r_esp -= 4; W32(r_esp, v); }
    /* 004bc210: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bc215u); f_00630f40();
    /* 004bc215: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bc218: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bc219: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bc21e: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004bc224: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004bc22a: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004bc230: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004bc232: mov ecx, eax */ r_ecx = r_eax;
    /* 004bc234: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bc23a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bc23cu); call_ind(t); }
    /* 004bc23c: jmp 0x4bc804 */ goto L_004bc804;
L_004bc241:; BB(0x004bc241);
    /* 004bc241: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc243: lea ecx, [ebp - 0x43c] */ r_ecx = (u32)(r_ebp+0xfffffbc4u);
    /* 004bc249: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4bc24eu); f_0048edf0();
    /* 004bc24e: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004bc251: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bc253: je 0x4bc26c */ if (fZ) goto L_004bc26c;
L_004bc255:; BB(0x004bc255);
    /* 004bc255: push 0x644 */ { u32 v = 0x644u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc25a: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc25f: push 0x6bed40 */ { u32 v = 0x6bed40u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc264: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4bc269u); f_005e9f20();
    /* 004bc269: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004bc26c:; BB(0x004bc26c);
    /* 004bc26c: push 0x6bebf4 */ { u32 v = 0x6bebf4u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc271: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bc276u); f_00630f40();
    /* 004bc276: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bc279: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bc27a: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bc27f: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004bc285: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004bc28b: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004bc291: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004bc293: mov ecx, eax */ r_ecx = r_eax;
    /* 004bc295: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bc29b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bc29du); call_ind(t); }
    /* 004bc29d: jmp 0x4bc804 */ goto L_004bc804;
L_004bc2a2:; BB(0x004bc2a2);
    /* 004bc2a2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc2a4: lea ecx, [ebp - 0x43c] */ r_ecx = (u32)(r_ebp+0xfffffbc4u);
    /* 004bc2aa: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4bc2afu); f_0048edf0();
    /* 004bc2af: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004bc2b2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bc2b4: je 0x4bc2e8 */ if (fZ) goto L_004bc2e8;
L_004bc2b6:; BB(0x004bc2b6);
    /* 004bc2b6: push 0x6becdc */ { u32 v = 0x6becdcu; r_esp -= 4; W32(r_esp, v); }
    /* 004bc2bb: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bc2c0u); f_00630f40();
    /* 004bc2c0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bc2c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bc2c4: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004bc2ca: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004bc2d0: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bc2d6: mov ecx, dword ptr [ecx + 0xdc] */ r_ecx = R32((u32)(r_ecx+0xdcu));
    /* 004bc2dc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004bc2de: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bc2e4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bc2e6u); call_ind(t); }
    /* 004bc2e6: jmp 0x4bc317 */ goto L_004bc317;
L_004bc2e8:; BB(0x004bc2e8);
    /* 004bc2e8: push 0x6bec14 */ { u32 v = 0x6bec14u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc2ed: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bc2f2u); f_00630f40();
    /* 004bc2f2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bc2f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bc2f6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bc2fc: mov edx, dword ptr [ecx + 0xdc] */ r_edx = R32((u32)(r_ecx+0xdcu));
    /* 004bc302: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bc307: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004bc30d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004bc30f: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bc315: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bc317u); call_ind(t); }
L_004bc317:; BB(0x004bc317);
    /* 004bc317: jmp 0x4bc804 */ goto L_004bc804;
L_004bc31c:; BB(0x004bc31c);
    /* 004bc31c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc31e: lea ecx, [ebp - 0x43c] */ r_ecx = (u32)(r_ebp+0xfffffbc4u);
    /* 004bc324: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4bc329u); f_0048edf0();
    /* 004bc329: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004bc32c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bc32e: je 0x4bc347 */ if (fZ) goto L_004bc347;
L_004bc330:; BB(0x004bc330);
    /* 004bc330: push 0x650 */ { u32 v = 0x650u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc335: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc33a: push 0x6bed40 */ { u32 v = 0x6bed40u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc33f: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4bc344u); f_005e9f20();
    /* 004bc344: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004bc347:; BB(0x004bc347);
    /* 004bc347: push 0x6bec60 */ { u32 v = 0x6bec60u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc34c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bc351u); f_00630f40();
    /* 004bc351: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bc354: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bc355: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bc35a: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004bc360: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004bc366: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004bc36c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004bc36e: mov ecx, eax */ r_ecx = r_eax;
    /* 004bc370: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bc376: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bc378u); call_ind(t); }
    /* 004bc378: jmp 0x4bc804 */ goto L_004bc804;
L_004bc37d:; BB(0x004bc37d);
    /* 004bc37d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc37f: lea ecx, [ebp - 0x43c] */ r_ecx = (u32)(r_ebp+0xfffffbc4u);
    /* 004bc385: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4bc38au); f_0048edf0();
    /* 004bc38a: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004bc38d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bc38f: je 0x4bc3a8 */ if (fZ) goto L_004bc3a8;
L_004bc391:; BB(0x004bc391);
    /* 004bc391: push 0x654 */ { u32 v = 0x654u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc396: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc39b: push 0x6bed40 */ { u32 v = 0x6bed40u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc3a0: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4bc3a5u); f_005e9f20();
    /* 004bc3a5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004bc3a8:; BB(0x004bc3a8);
    /* 004bc3a8: push 0x6bf218 */ { u32 v = 0x6bf218u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc3ad: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bc3b2u); f_00630f40();
    /* 004bc3b2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bc3b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bc3b6: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bc3bb: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004bc3c1: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004bc3c7: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004bc3cd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004bc3cf: mov ecx, eax */ r_ecx = r_eax;
    /* 004bc3d1: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bc3d7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bc3d9u); call_ind(t); }
    /* 004bc3d9: jmp 0x4bc804 */ goto L_004bc804;
L_004bc3de:; BB(0x004bc3de);
    /* 004bc3de: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc3e0: lea ecx, [ebp - 0x43c] */ r_ecx = (u32)(r_ebp+0xfffffbc4u);
    /* 004bc3e6: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4bc3ebu); f_0048edf0();
    /* 004bc3eb: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004bc3ee: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bc3f0: je 0x4bc424 */ if (fZ) goto L_004bc424;
L_004bc3f2:; BB(0x004bc3f2);
    /* 004bc3f2: push 0x6becdc */ { u32 v = 0x6becdcu; r_esp -= 4; W32(r_esp, v); }
    /* 004bc3f7: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bc3fcu); f_00630f40();
    /* 004bc3fc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bc3ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bc400: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004bc406: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004bc40c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bc412: mov ecx, dword ptr [ecx + 0xdc] */ r_ecx = R32((u32)(r_ecx+0xdcu));
    /* 004bc418: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004bc41a: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bc420: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bc422u); call_ind(t); }
    /* 004bc422: jmp 0x4bc453 */ goto L_004bc453;
L_004bc424:; BB(0x004bc424);
    /* 004bc424: push 0x6bec14 */ { u32 v = 0x6bec14u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc429: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bc42eu); f_00630f40();
    /* 004bc42e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bc431: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bc432: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bc438: mov edx, dword ptr [ecx + 0xdc] */ r_edx = R32((u32)(r_ecx+0xdcu));
    /* 004bc43e: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bc443: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004bc449: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004bc44b: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bc451: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bc453u); call_ind(t); }
L_004bc453:; BB(0x004bc453);
    /* 004bc453: jmp 0x4bc804 */ goto L_004bc804;
L_004bc458:; BB(0x004bc458);
    /* 004bc458: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc45a: lea ecx, [ebp - 0x43c] */ r_ecx = (u32)(r_ebp+0xfffffbc4u);
    /* 004bc460: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4bc465u); f_0048edf0();
    /* 004bc465: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004bc468: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bc46a: je 0x4bc483 */ if (fZ) goto L_004bc483;
L_004bc46c:; BB(0x004bc46c);
    /* 004bc46c: push 0x661 */ { u32 v = 0x661u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc471: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc476: push 0x6bed40 */ { u32 v = 0x6bed40u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc47b: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4bc480u); f_005e9f20();
    /* 004bc480: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004bc483:; BB(0x004bc483);
    /* 004bc483: push 0x6bf054 */ { u32 v = 0x6bf054u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc488: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bc48du); f_00630f40();
    /* 004bc48d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bc490: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bc491: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bc496: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004bc49c: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004bc4a2: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004bc4a8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004bc4aa: mov ecx, eax */ r_ecx = r_eax;
    /* 004bc4ac: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bc4b2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bc4b4u); call_ind(t); }
    /* 004bc4b4: jmp 0x4bc804 */ goto L_004bc804;
L_004bc4b9:; BB(0x004bc4b9);
    /* 004bc4b9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc4bb: lea ecx, [ebp - 0x43c] */ r_ecx = (u32)(r_ebp+0xfffffbc4u);
    /* 004bc4c1: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4bc4c6u); f_0048edf0();
    /* 004bc4c6: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004bc4c9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bc4cb: je 0x4bc4e4 */ if (fZ) goto L_004bc4e4;
L_004bc4cd:; BB(0x004bc4cd);
    /* 004bc4cd: push 0x666 */ { u32 v = 0x666u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc4d2: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc4d7: push 0x6bed40 */ { u32 v = 0x6bed40u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc4dc: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4bc4e1u); f_005e9f20();
    /* 004bc4e1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004bc4e4:; BB(0x004bc4e4);
    /* 004bc4e4: push 0x6bf174 */ { u32 v = 0x6bf174u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc4e9: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bc4eeu); f_00630f40();
    /* 004bc4ee: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bc4f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bc4f2: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bc4f7: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004bc4fd: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004bc503: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004bc509: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004bc50b: mov ecx, eax */ r_ecx = r_eax;
    /* 004bc50d: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bc513: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bc515u); call_ind(t); }
    /* 004bc515: jmp 0x4bc804 */ goto L_004bc804;
L_004bc51a:; BB(0x004bc51a);
    /* 004bc51a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc51c: lea ecx, [ebp - 0x43c] */ r_ecx = (u32)(r_ebp+0xfffffbc4u);
    /* 004bc522: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4bc527u); f_0048edf0();
    /* 004bc527: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004bc52a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bc52c: je 0x4bc560 */ if (fZ) goto L_004bc560;
L_004bc52e:; BB(0x004bc52e);
    /* 004bc52e: push 0x6bf088 */ { u32 v = 0x6bf088u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc533: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bc538u); f_00630f40();
    /* 004bc538: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bc53b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bc53c: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004bc542: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004bc548: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bc54e: mov ecx, dword ptr [ecx + 0xdc] */ r_ecx = R32((u32)(r_ecx+0xdcu));
    /* 004bc554: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004bc556: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bc55c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bc55eu); call_ind(t); }
    /* 004bc55e: jmp 0x4bc58f */ goto L_004bc58f;
L_004bc560:; BB(0x004bc560);
    /* 004bc560: push 0x6bf218 */ { u32 v = 0x6bf218u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc565: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bc56au); f_00630f40();
    /* 004bc56a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bc56d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bc56e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bc574: mov edx, dword ptr [ecx + 0xdc] */ r_edx = R32((u32)(r_ecx+0xdcu));
    /* 004bc57a: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bc57f: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004bc585: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004bc587: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bc58d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bc58fu); call_ind(t); }
L_004bc58f:; BB(0x004bc58f);
    /* 004bc58f: jmp 0x4bc804 */ goto L_004bc804;
L_004bc594:; BB(0x004bc594);
    /* 004bc594: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc596: lea ecx, [ebp - 0x43c] */ r_ecx = (u32)(r_ebp+0xfffffbc4u);
    /* 004bc59c: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4bc5a1u); f_0048edf0();
    /* 004bc5a1: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004bc5a4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bc5a6: je 0x4bc5da */ if (fZ) goto L_004bc5da;
L_004bc5a8:; BB(0x004bc5a8);
    /* 004bc5a8: push 0x6bf088 */ { u32 v = 0x6bf088u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc5ad: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bc5b2u); f_00630f40();
    /* 004bc5b2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bc5b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bc5b6: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004bc5bc: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004bc5c2: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bc5c8: mov ecx, dword ptr [ecx + 0xdc] */ r_ecx = R32((u32)(r_ecx+0xdcu));
    /* 004bc5ce: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004bc5d0: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bc5d6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bc5d8u); call_ind(t); }
    /* 004bc5d8: jmp 0x4bc609 */ goto L_004bc609;
L_004bc5da:; BB(0x004bc5da);
    /* 004bc5da: push 0x6bec38 */ { u32 v = 0x6bec38u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc5df: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bc5e4u); f_00630f40();
    /* 004bc5e4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bc5e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bc5e8: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bc5ee: mov edx, dword ptr [ecx + 0xdc] */ r_edx = R32((u32)(r_ecx+0xdcu));
    /* 004bc5f4: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bc5f9: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004bc5ff: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004bc601: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bc607: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bc609u); call_ind(t); }
L_004bc609:; BB(0x004bc609);
    /* 004bc609: jmp 0x4bc804 */ goto L_004bc804;
L_004bc60e:; BB(0x004bc60e);
    /* 004bc60e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc610: lea ecx, [ebp - 0x43c] */ r_ecx = (u32)(r_ebp+0xfffffbc4u);
    /* 004bc616: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4bc61bu); f_0048edf0();
    /* 004bc61b: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004bc61e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bc620: je 0x4bc639 */ if (fZ) goto L_004bc639;
L_004bc622:; BB(0x004bc622);
    /* 004bc622: push 0x67b */ { u32 v = 0x67bu; r_esp -= 4; W32(r_esp, v); }
    /* 004bc627: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc62c: push 0x6bed40 */ { u32 v = 0x6bed40u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc631: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4bc636u); f_005e9f20();
    /* 004bc636: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004bc639:; BB(0x004bc639);
    /* 004bc639: push 0x6bf218 */ { u32 v = 0x6bf218u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc63e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bc643u); f_00630f40();
    /* 004bc643: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bc646: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bc647: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bc64c: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004bc652: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004bc658: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004bc65e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004bc660: mov ecx, eax */ r_ecx = r_eax;
    /* 004bc662: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bc668: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bc66au); call_ind(t); }
    /* 004bc66a: jmp 0x4bc804 */ goto L_004bc804;
L_004bc66f:; BB(0x004bc66f);
    /* 004bc66f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc671: lea ecx, [ebp - 0x43c] */ r_ecx = (u32)(r_ebp+0xfffffbc4u);
    /* 004bc677: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4bc67cu); f_0048edf0();
    /* 004bc67c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004bc67f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bc681: je 0x4bc6b5 */ if (fZ) goto L_004bc6b5;
L_004bc683:; BB(0x004bc683);
    /* 004bc683: push 0x6becdc */ { u32 v = 0x6becdcu; r_esp -= 4; W32(r_esp, v); }
    /* 004bc688: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bc68du); f_00630f40();
    /* 004bc68d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bc690: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bc691: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004bc697: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004bc69d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bc6a3: mov ecx, dword ptr [ecx + 0xdc] */ r_ecx = R32((u32)(r_ecx+0xdcu));
    /* 004bc6a9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004bc6ab: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bc6b1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bc6b3u); call_ind(t); }
    /* 004bc6b3: jmp 0x4bc6e4 */ goto L_004bc6e4;
L_004bc6b5:; BB(0x004bc6b5);
    /* 004bc6b5: push 0x6bec14 */ { u32 v = 0x6bec14u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc6ba: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bc6bfu); f_00630f40();
    /* 004bc6bf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bc6c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bc6c3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bc6c9: mov edx, dword ptr [ecx + 0xdc] */ r_edx = R32((u32)(r_ecx+0xdcu));
    /* 004bc6cf: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bc6d4: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004bc6da: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004bc6dc: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bc6e2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bc6e4u); call_ind(t); }
L_004bc6e4:; BB(0x004bc6e4);
    /* 004bc6e4: jmp 0x4bc804 */ goto L_004bc804;
L_004bc6e9:; BB(0x004bc6e9);
    /* 004bc6e9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc6eb: lea ecx, [ebp - 0x43c] */ r_ecx = (u32)(r_ebp+0xfffffbc4u);
    /* 004bc6f1: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4bc6f6u); f_0048edf0();
    /* 004bc6f6: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004bc6f9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bc6fb: je 0x4bc714 */ if (fZ) goto L_004bc714;
L_004bc6fd:; BB(0x004bc6fd);
    /* 004bc6fd: push 0x689 */ { u32 v = 0x689u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc702: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc707: push 0x6bed40 */ { u32 v = 0x6bed40u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc70c: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4bc711u); f_005e9f20();
    /* 004bc711: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004bc714:; BB(0x004bc714);
    /* 004bc714: push 0x6bf054 */ { u32 v = 0x6bf054u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc719: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bc71eu); f_00630f40();
    /* 004bc71e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bc721: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bc722: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bc727: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004bc72d: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004bc733: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004bc739: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004bc73b: mov ecx, eax */ r_ecx = r_eax;
    /* 004bc73d: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bc743: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bc745u); call_ind(t); }
    /* 004bc745: jmp 0x4bc804 */ goto L_004bc804;
L_004bc74a:; BB(0x004bc74a);
    /* 004bc74a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc74c: lea ecx, [ebp - 0x43c] */ r_ecx = (u32)(r_ebp+0xfffffbc4u);
    /* 004bc752: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4bc757u); f_0048edf0();
    /* 004bc757: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004bc75a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bc75c: je 0x4bc775 */ if (fZ) goto L_004bc775;
L_004bc75e:; BB(0x004bc75e);
    /* 004bc75e: push 0x68e */ { u32 v = 0x68eu; r_esp -= 4; W32(r_esp, v); }
    /* 004bc763: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc768: push 0x6bed40 */ { u32 v = 0x6bed40u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc76d: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4bc772u); f_005e9f20();
    /* 004bc772: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004bc775:; BB(0x004bc775);
    /* 004bc775: push 0x6bf174 */ { u32 v = 0x6bf174u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc77a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bc77fu); f_00630f40();
    /* 004bc77f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bc782: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bc783: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bc788: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004bc78e: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004bc794: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004bc79a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004bc79c: mov ecx, eax */ r_ecx = r_eax;
    /* 004bc79e: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bc7a4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bc7a6u); call_ind(t); }
    /* 004bc7a6: jmp 0x4bc804 */ goto L_004bc804;
L_004bc7a8:; BB(0x004bc7a8);
    /* 004bc7a8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc7aa: lea ecx, [ebp - 0x43c] */ r_ecx = (u32)(r_ebp+0xfffffbc4u);
    /* 004bc7b0: call 0x48edf0 */ r_esp -= 4; W32(r_esp, 0x4bc7b5u); f_0048edf0();
    /* 004bc7b5: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004bc7b8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bc7ba: je 0x4bc7d3 */ if (fZ) goto L_004bc7d3;
L_004bc7bc:; BB(0x004bc7bc);
    /* 004bc7bc: push 0x692 */ { u32 v = 0x692u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc7c1: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc7c6: push 0x6bed40 */ { u32 v = 0x6bed40u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc7cb: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4bc7d0u); f_005e9f20();
    /* 004bc7d0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004bc7d3:; BB(0x004bc7d3);
    /* 004bc7d3: push 0x6bee0c */ { u32 v = 0x6bee0cu; r_esp -= 4; W32(r_esp, v); }
    /* 004bc7d8: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bc7ddu); f_00630f40();
    /* 004bc7dd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bc7e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bc7e1: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bc7e6: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004bc7ec: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004bc7f2: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004bc7f8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004bc7fa: mov ecx, eax */ r_ecx = r_eax;
    /* 004bc7fc: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bc802: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bc804u); call_ind(t); }
L_004bc804:; BB(0x004bc804);
    /* 004bc804: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bc80a: call 0x47e280 */ r_esp -= 4; W32(r_esp, 0x4bc80fu); f_0047e280();
    /* 004bc80f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bc812: jne 0x4bcb33 */ if (!fZ) goto L_004bcb33;
L_004bc818:; BB(0x004bc818);
    /* 004bc818: lea ecx, [ebp - 0x43c] */ r_ecx = (u32)(r_ebp+0xfffffbc4u);
    /* 004bc81e: call 0x491870 */ r_esp -= 4; W32(r_esp, 0x4bc823u); f_00491870();
    /* 004bc823: mov word ptr [ebp - 0x480], ax */ W16((u32)(r_ebp+0xfffffb80u), (u16)r_eax);
    /* 004bc82a: movsx ecx, word ptr [ebp - 0x480] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffb80u));
    /* 004bc831: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004bc834: jl 0x4bc947 */ if ((fS!=fO)) goto L_004bc947;
L_004bc83a:; BB(0x004bc83a);
    /* 004bc83a: lea edx, [ebp - 0x4b8] */ r_edx = (u32)(r_ebp+0xfffffb48u);
    /* 004bc840: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bc841: lea ecx, [ebp - 0x43c] */ r_ecx = (u32)(r_ebp+0xfffffbc4u);
    /* 004bc847: call 0x4919a0 */ r_esp -= 4; W32(r_esp, 0x4bc84cu); f_004919a0();
    /* 004bc84c: mov byte ptr [ebp - 4], 0x11 */ W8((u32)(r_ebp+0xfffffffcu), 0x11u);
    /* 004bc850: lea eax, [ebp - 0x661] */ r_eax = (u32)(r_ebp+0xfffff99fu);
    /* 004bc856: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bc857: lea ecx, [ebp - 0x4b8] */ r_ecx = (u32)(r_ebp+0xfffffb48u);
    /* 004bc85d: call 0x4a22f0 */ r_esp -= 4; W32(r_esp, 0x4bc862u); f_004a22f0();
    /* 004bc862: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bc863: call 0x4c4a30 */ r_esp -= 4; W32(r_esp, 0x4bc868u); f_004c4a30();
    /* 004bc868: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bc86b: movsx ecx, al */ r_ecx = (u32)(i32)(i8)(u8)r_eax;
    /* 004bc86e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bc86f: lea edx, [ebp - 0x662] */ r_edx = (u32)(r_ebp+0xfffff99eu);
    /* 004bc875: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bc876: lea ecx, [ebp - 0x4b8] */ r_ecx = (u32)(r_ebp+0xfffffb48u);
    /* 004bc87c: call 0x4a22a0 */ r_esp -= 4; W32(r_esp, 0x4bc881u); f_004a22a0();
    /* 004bc881: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bc882: call 0x4c4a30 */ r_esp -= 4; W32(r_esp, 0x4bc887u); f_004c4a30();
    /* 004bc887: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bc88a: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 004bc88d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bc88e: lea ecx, [ebp - 0x663] */ r_ecx = (u32)(r_ebp+0xfffff99du);
    /* 004bc894: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bc895: lea ecx, [ebp - 0x4b8] */ r_ecx = (u32)(r_ebp+0xfffffb48u);
    /* 004bc89b: call 0x4a2250 */ r_esp -= 4; W32(r_esp, 0x4bc8a0u); f_004a2250();
    /* 004bc8a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bc8a1: call 0x4c4a30 */ r_esp -= 4; W32(r_esp, 0x4bc8a6u); f_004c4a30();
    /* 004bc8a6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bc8a9: movsx edx, al */ r_edx = (u32)(i32)(i8)(u8)r_eax;
    /* 004bc8ac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bc8ad: lea eax, [ebp - 0x664] */ r_eax = (u32)(r_ebp+0xfffff99cu);
    /* 004bc8b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bc8b4: lea ecx, [ebp - 0x4b8] */ r_ecx = (u32)(r_ebp+0xfffffb48u);
    /* 004bc8ba: call 0x4a2200 */ r_esp -= 4; W32(r_esp, 0x4bc8bfu); f_004a2200();
    /* 004bc8bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bc8c0: call 0x4c4a30 */ r_esp -= 4; W32(r_esp, 0x4bc8c5u); f_004c4a30();
    /* 004bc8c5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bc8c8: movsx ecx, al */ r_ecx = (u32)(i32)(i8)(u8)r_eax;
    /* 004bc8cb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bc8cc: lea edx, [ebp - 0x665] */ r_edx = (u32)(r_ebp+0xfffff99bu);
    /* 004bc8d2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bc8d3: lea ecx, [ebp - 0x4b8] */ r_ecx = (u32)(r_ebp+0xfffffb48u);
    /* 004bc8d9: call 0x4a21b0 */ r_esp -= 4; W32(r_esp, 0x4bc8deu); f_004a21b0();
    /* 004bc8de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bc8df: call 0x4c4a30 */ r_esp -= 4; W32(r_esp, 0x4bc8e4u); f_004c4a30();
    /* 004bc8e4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bc8e7: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 004bc8ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bc8eb: push 0x6bebd0 */ { u32 v = 0x6bebd0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc8f0: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bc8f5u); f_00630f40();
    /* 004bc8f5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bc8f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bc8f9: lea ecx, [ebp - 0x4b4] */ r_ecx = (u32)(r_ebp+0xfffffb4cu);
    /* 004bc8ff: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bc900: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4bc906u); call_ind(t); }
    /* 004bc906: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bc909: lea edx, [ebp - 0x4b4] */ r_edx = (u32)(r_ebp+0xfffffb4cu);
    /* 004bc90f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bc910: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bc915: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004bc91b: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004bc921: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 004bc927: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004bc929: mov ecx, eax */ r_ecx = r_eax;
    /* 004bc92b: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bc931: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bc933u); call_ind(t); }
    /* 004bc933: mov byte ptr [ebp - 4], 3 */ W8((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 004bc937: lea ecx, [ebp - 0x4b8] */ r_ecx = (u32)(r_ebp+0xfffffb48u);
    /* 004bc93d: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x4bc942u); f_004a20f0();
    /* 004bc942: jmp 0x4bcb31 */ goto L_004bcb31;
L_004bc947:; BB(0x004bc947);
    /* 004bc947: cmp dword ptr [0x791e74], 0 */ {  u32 a = R32((u32)(0x791e74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bc94e: jne 0x4bc9c4 */ if (!fZ) goto L_004bc9c4;
L_004bc950:; BB(0x004bc950);
    /* 004bc950: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bc956: call 0x47d6b0 */ r_esp -= 4; W32(r_esp, 0x4bc95bu); f_0047d6b0();
    /* 004bc95b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bc95d: jne 0x4bc990 */ if (!fZ) goto L_004bc990;
L_004bc95f:; BB(0x004bc95f);
    /* 004bc95f: push 0x6bc5b0 */ { u32 v = 0x6bc5b0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc964: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bc969u); f_00630f40();
    /* 004bc969: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bc96c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bc96d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bc973: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004bc979: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bc97e: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004bc984: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004bc986: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bc98c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bc98eu); call_ind(t); }
    /* 004bc98e: jmp 0x4bc9bf */ goto L_004bc9bf;
L_004bc990:; BB(0x004bc990);
    /* 004bc990: push 0x6bebb0 */ { u32 v = 0x6bebb0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc995: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bc99au); f_00630f40();
    /* 004bc99a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bc99d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bc99e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bc9a4: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004bc9aa: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bc9af: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004bc9b5: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004bc9b7: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bc9bd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bc9bfu); call_ind(t); }
L_004bc9bf:; BB(0x004bc9bf);
    /* 004bc9bf: jmp 0x4bcb31 */ goto L_004bcb31;
L_004bc9c4:; BB(0x004bc9c4);
    /* 004bc9c4: cmp dword ptr [0x791e74], 3 */ {  u32 a = R32((u32)(0x791e74u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bc9cb: jne 0x4bca81 */ if (!fZ) goto L_004bca81;
L_004bc9d1:; BB(0x004bc9d1);
    /* 004bc9d1: movsx ecx, word ptr [ebp - 0x480] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffb80u));
    /* 004bc9d8: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bc9db: jne 0x4bca0f */ if (!fZ) goto L_004bca0f;
L_004bc9dd:; BB(0x004bc9dd);
    /* 004bc9dd: push 0x6beb90 */ { u32 v = 0x6beb90u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc9e2: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bc9e7u); f_00630f40();
    /* 004bc9e7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bc9ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bc9eb: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004bc9f1: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 004bc9f7: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bc9fd: mov ecx, dword ptr [ecx + 0xe0] */ r_ecx = R32((u32)(r_ecx+0xe0u));
    /* 004bca03: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004bca05: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bca0b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bca0du); call_ind(t); }
    /* 004bca0d: jmp 0x4bca7c */ goto L_004bca7c;
L_004bca0f:; BB(0x004bca0f);
    /* 004bca0f: movsx ecx, word ptr [ebp - 0x480] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffb80u));
    /* 004bca16: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bca19: jne 0x4bca4d */ if (!fZ) goto L_004bca4d;
L_004bca1b:; BB(0x004bca1b);
    /* 004bca1b: push 0x6beb70 */ { u32 v = 0x6beb70u; r_esp -= 4; W32(r_esp, v); }
    /* 004bca20: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bca25u); f_00630f40();
    /* 004bca25: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bca28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bca29: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004bca2f: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 004bca35: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bca3b: mov ecx, dword ptr [ecx + 0xe0] */ r_ecx = R32((u32)(r_ecx+0xe0u));
    /* 004bca41: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004bca43: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bca49: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bca4bu); call_ind(t); }
    /* 004bca4b: jmp 0x4bca7c */ goto L_004bca7c;
L_004bca4d:; BB(0x004bca4d);
    /* 004bca4d: push 0x6beb50 */ { u32 v = 0x6beb50u; r_esp -= 4; W32(r_esp, v); }
    /* 004bca52: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bca57u); f_00630f40();
    /* 004bca57: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bca5a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bca5b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bca61: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004bca67: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bca6c: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004bca72: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004bca74: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bca7a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bca7cu); call_ind(t); }
L_004bca7c:; BB(0x004bca7c);
    /* 004bca7c: jmp 0x4bcb31 */ goto L_004bcb31;
L_004bca81:; BB(0x004bca81);
    /* 004bca81: cmp dword ptr [0x791e74], 4 */ {  u32 a = R32((u32)(0x791e74u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bca88: jne 0x4bcaf9 */ if (!fZ) goto L_004bcaf9;
L_004bca8a:; BB(0x004bca8a);
    /* 004bca8a: movsx ecx, word ptr [ebp - 0x480] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffb80u));
    /* 004bca91: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bca94: jne 0x4bcac8 */ if (!fZ) goto L_004bcac8;
L_004bca96:; BB(0x004bca96);
    /* 004bca96: push 0x6beb90 */ { u32 v = 0x6beb90u; r_esp -= 4; W32(r_esp, v); }
    /* 004bca9b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bcaa0u); f_00630f40();
    /* 004bcaa0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bcaa3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bcaa4: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004bcaaa: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 004bcab0: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bcab6: mov ecx, dword ptr [ecx + 0xe0] */ r_ecx = R32((u32)(r_ecx+0xe0u));
    /* 004bcabc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004bcabe: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bcac4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bcac6u); call_ind(t); }
    /* 004bcac6: jmp 0x4bcaf7 */ goto L_004bcaf7;
L_004bcac8:; BB(0x004bcac8);
    /* 004bcac8: push 0x6beb50 */ { u32 v = 0x6beb50u; r_esp -= 4; W32(r_esp, v); }
    /* 004bcacd: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bcad2u); f_00630f40();
    /* 004bcad2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bcad5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bcad6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bcadc: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004bcae2: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bcae7: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004bcaed: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004bcaef: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bcaf5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bcaf7u); call_ind(t); }
L_004bcaf7:; BB(0x004bcaf7);
    /* 004bcaf7: jmp 0x4bcb31 */ goto L_004bcb31;
L_004bcaf9:; BB(0x004bcaf9);
    /* 004bcaf9: cmp dword ptr [0x791e74], 5 */ {  u32 a = R32((u32)(0x791e74u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bcb00: jne 0x4bcb31 */ if (!fZ) goto L_004bcb31;
L_004bcb02:; BB(0x004bcb02);
    /* 004bcb02: push 0x6beb50 */ { u32 v = 0x6beb50u; r_esp -= 4; W32(r_esp, v); }
    /* 004bcb07: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bcb0cu); f_00630f40();
    /* 004bcb0c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bcb0f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bcb10: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bcb16: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004bcb1c: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bcb21: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004bcb27: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004bcb29: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bcb2f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bcb31u); call_ind(t); }
L_004bcb31:; BB(0x004bcb31);
    /* 004bcb31: jmp 0x4bcb93 */ goto L_004bcb93;
L_004bcb33:; BB(0x004bcb33);
    /* 004bcb33: cmp dword ptr [0x791e74], 0 */ {  u32 a = R32((u32)(0x791e74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bcb3a: jne 0x4bcb6d */ if (!fZ) goto L_004bcb6d;
L_004bcb3c:; BB(0x004bcb3c);
    /* 004bcb3c: push 0x6bebb0 */ { u32 v = 0x6bebb0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bcb41: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bcb46u); f_00630f40();
    /* 004bcb46: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bcb49: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bcb4a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bcb50: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004bcb56: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bcb5b: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004bcb61: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004bcb63: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bcb69: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bcb6bu); call_ind(t); }
    /* 004bcb6b: jmp 0x4bcb93 */ goto L_004bcb93;
L_004bcb6d:; BB(0x004bcb6d);
    /* 004bcb6d: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 004bcb72: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bcb78: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004bcb7e: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bcb83: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004bcb89: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004bcb8b: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bcb91: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bcb93u); call_ind(t); }
L_004bcb93:; BB(0x004bcb93);
    /* 004bcb93: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bcb99: mov edx, dword ptr [ecx + 0xdc] */ r_edx = R32((u32)(r_ecx+0xdcu));
    /* 004bcb9f: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bcba4: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004bcbaa: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004bcbac: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 004bcbb2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bcbb4u); call_ind(t); }
    /* 004bcbb4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bcbb5: lea ecx, [ebp - 0x414] */ r_ecx = (u32)(r_ebp+0xfffffbecu);
    /* 004bcbbb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bcbbc: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x4bcbc1u); f_00686d8e();
    /* 004bcbc1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bcbc4: movsx edx, byte ptr [ebp - 0x414] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffbecu));
    /* 004bcbcb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bcbcd: jne 0x4bcbf1 */ if (!fZ) goto L_004bcbf1;
L_004bcbcf:; BB(0x004bcbcf);
    /* 004bcbcf: push 0x6beb30 */ { u32 v = 0x6beb30u; r_esp -= 4; W32(r_esp, v); }
    /* 004bcbd4: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bcbd9u); f_00630f40();
    /* 004bcbd9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bcbdc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bcbdd: lea eax, [ebp - 0x414] */ r_eax = (u32)(r_ebp+0xfffffbecu);
    /* 004bcbe3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bcbe4: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x4bcbe9u); f_00686d8e();
    /* 004bcbe9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bcbec: jmp 0x4bcc87 */ goto L_004bcc87;
L_004bcbf1:; BB(0x004bcbf1);
    /* 004bcbf1: push 0x6beddc */ { u32 v = 0x6beddcu; r_esp -= 4; W32(r_esp, v); }
    /* 004bcbf6: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bcbfbu); f_00630f40();
    /* 004bcbfb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bcbfe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bcbff: lea ecx, [ebp - 0x414] */ r_ecx = (u32)(r_ebp+0xfffffbecu);
    /* 004bcc05: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bcc06: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x4bcc0bu); f_00686d8e();
    /* 004bcc0b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bcc0e: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004bcc14: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004bcc1a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bcc20: mov ecx, dword ptr [ecx + 0xdc] */ r_ecx = R32((u32)(r_ecx+0xdcu));
    /* 004bcc26: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004bcc28: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 004bcc2e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bcc30u); call_ind(t); }
    /* 004bcc30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bcc31: lea ecx, [ebp - 0x414] */ r_ecx = (u32)(r_ebp+0xfffffbecu);
    /* 004bcc37: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bcc38: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x4bcc3du); f_00686ec6();
    /* 004bcc3d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bcc40: push 0x6bedd8 */ { u32 v = 0x6bedd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004bcc45: lea edx, [ebp - 0x414] */ r_edx = (u32)(r_ebp+0xfffffbecu);
    /* 004bcc4b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bcc4c: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x4bcc51u); f_00686ec6();
    /* 004bcc51: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bcc54: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bcc59: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004bcc5f: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004bcc65: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 004bcc6b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004bcc6d: mov ecx, eax */ r_ecx = r_eax;
    /* 004bcc6f: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 004bcc75: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bcc77u); call_ind(t); }
    /* 004bcc77: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bcc78: lea ecx, [ebp - 0x414] */ r_ecx = (u32)(r_ebp+0xfffffbecu);
    /* 004bcc7e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bcc7f: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x4bcc84u); f_00686ec6();
    /* 004bcc84: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004bcc87:; BB(0x004bcc87);
    /* 004bcc87: lea edx, [ebp - 0x414] */ r_edx = (u32)(r_ebp+0xfffffbecu);
    /* 004bcc8d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bcc8e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bcc90: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bcc92: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 004bcc98: call 0x57be80 */ r_esp -= 4; W32(r_esp, 0x4bcc9du); f_0057be80();
    /* 004bcc9d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004bcca4: lea ecx, [ebp - 0x43c] */ r_ecx = (u32)(r_ebp+0xfffffbc4u);
    /* 004bccaa: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x4bccafu); f_00484470();
    /* 004bccaf: jmp 0x4bd6b5 */ goto L_004bd6b5;
L_004bccb4:; BB(0x004bccb4);
    /* 004bccb4: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bccba: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x4bccbfu); f_0047e190();
    /* 004bccbf: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bccc2: jne 0x4bd18d */ if (!fZ) goto L_004bd18d;
L_004bccc8:; BB(0x004bccc8);
    /* 004bccc8: lea eax, [ebp - 0x4c4] */ r_eax = (u32)(r_ebp+0xfffffb3cu);
    /* 004bccce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bcccf: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bccd5: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4bccdau); f_0047e3b0();
    /* 004bccda: mov ecx, eax */ r_ecx = r_eax;
    /* 004bccdc: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x4bcce1u); f_004c7c40();
    /* 004bcce1: mov dword ptr [ebp - 4], 0x12 */ W32((u32)(r_ebp+0xfffffffcu), 0x12u);
    /* 004bcce8: mov cx, word ptr [0x791e74] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x791e74u))) & 0xffffu);
    /* 004bccef: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bccf0: lea edx, [ebp - 0x670] */ r_edx = (u32)(r_ebp+0xfffff990u);
    /* 004bccf6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bccf7: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bccfc: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 004bccff: call 0x4c7f10 */ r_esp -= 4; W32(r_esp, 0x4bcd04u); f_004c7f10();
    /* 004bcd04: mov dword ptr [ebp - 0x888], eax */ W32((u32)(r_ebp+0xfffff778u), r_eax);
    /* 004bcd0a: mov ecx, dword ptr [ebp - 0x888] */ r_ecx = R32((u32)(r_ebp+0xfffff778u));
    /* 004bcd10: mov dword ptr [ebp - 0x88c], ecx */ W32((u32)(r_ebp+0xfffff774u), r_ecx);
    /* 004bcd16: mov byte ptr [ebp - 4], 0x13 */ W8((u32)(r_ebp+0xfffffffcu), 0x13u);
    /* 004bcd1a: mov edx, dword ptr [ebp - 0x88c] */ r_edx = R32((u32)(r_ebp+0xfffff774u));
    /* 004bcd20: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bcd21: lea ecx, [ebp - 0x4c4] */ r_ecx = (u32)(r_ebp+0xfffffb3cu);
    /* 004bcd27: call 0x4846a0 */ r_esp -= 4; W32(r_esp, 0x4bcd2cu); f_004846a0();
    /* 004bcd2c: mov byte ptr [ebp - 4], 0x12 */ W8((u32)(r_ebp+0xfffffffcu), 0x12u);
    /* 004bcd30: lea ecx, [ebp - 0x670] */ r_ecx = (u32)(r_ebp+0xfffff990u);
    /* 004bcd36: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x4bcd3bu); f_00484470();
    /* 004bcd3b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bcd3d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bcd3f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bcd41: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bcd43: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bcd45: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bcd47: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bcd49: lea eax, [ebp - 0x4bc] */ r_eax = (u32)(r_ebp+0xfffffb44u);
    /* 004bcd4f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bcd50: lea ecx, [ebp - 0x4c4] */ r_ecx = (u32)(r_ebp+0xfffffb3cu);
    /* 004bcd56: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x4bcd5bu); f_00485940();
    /* 004bcd5b: mov byte ptr [ebp - 4], 0x14 */ W8((u32)(r_ebp+0xfffffffcu), 0x14u);
    /* 004bcd5f: lea ecx, [ebp - 0x671] */ r_ecx = (u32)(r_ebp+0xfffff98fu);
    /* 004bcd65: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bcd66: lea ecx, [ebp - 0x4bc] */ r_ecx = (u32)(r_ebp+0xfffffb44u);
    /* 004bcd6c: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x4bcd71u); f_004a2160();
    /* 004bcd71: mov dl, byte ptr [eax] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 004bcd73: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bcd74: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bcd7a: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4bcd7fu); f_0047e3b0();
    /* 004bcd7f: mov ecx, eax */ r_ecx = r_eax;
    /* 004bcd81: call 0x4da4d0 */ r_esp -= 4; W32(r_esp, 0x4bcd86u); f_004da4d0();
    /* 004bcd86: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bcd8b: movzx ecx, byte ptr [eax + 0xc8] */ r_ecx = (u32)R8((u32)(r_eax+0xc8u));
    /* 004bcd92: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bcd94: je 0x4bd167 */ if (fZ) goto L_004bd167;
L_004bcd9a:; BB(0x004bcd9a);
    /* 004bcd9a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bcda0: call 0x47f0c0 */ r_esp -= 4; W32(r_esp, 0x4bcda5u); f_0047f0c0();
    /* 004bcda5: cmp dword ptr [0x791e74], eax */ {  u32 a = R32((u32)(0x791e74u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004bcdab: jl 0x4bd02e */ if ((fS!=fO)) goto L_004bd02e;
L_004bcdb1:; BB(0x004bcdb1);
    /* 004bcdb1: mov edx, dword ptr [0x79076c] */ r_edx = R32((u32)(0x79076cu));
    /* 004bcdb7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bcdb8: lea eax, [ebp - 0x672] */ r_eax = (u32)(r_ebp+0xfffff98eu);
    /* 004bcdbe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bcdbf: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bcdc5: call 0x47ee90 */ r_esp -= 4; W32(r_esp, 0x4bcdcau); f_0047ee90();
    /* 004bcdca: mov ecx, eax */ r_ecx = r_eax;
    /* 004bcdcc: call 0x4640b0 */ r_esp -= 4; W32(r_esp, 0x4bcdd1u); f_004640b0();
    /* 004bcdd1: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004bcdd4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bcdd6: je 0x4bce51 */ if (fZ) goto L_004bce51;
L_004bcdd8:; BB(0x004bcdd8);
    /* 004bcdd8: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bcdde: call 0x47efb0 */ r_esp -= 4; W32(r_esp, 0x4bcde3u); f_0047efb0();
    /* 004bcde3: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004bcde6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bcde8: je 0x4bce1d */ if (fZ) goto L_004bce1d;
L_004bcdea:; BB(0x004bcdea);
    /* 004bcdea: push 0x6beb10 */ { u32 v = 0x6beb10u; r_esp -= 4; W32(r_esp, v); }
    /* 004bcdef: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bcdf4u); f_00630f40();
    /* 004bcdf4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bcdf7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bcdf8: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bcdfd: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004bce03: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004bce09: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004bce0f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004bce11: mov ecx, eax */ r_ecx = r_eax;
    /* 004bce13: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bce19: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bce1bu); call_ind(t); }
    /* 004bce1b: jmp 0x4bce4c */ goto L_004bce4c;
L_004bce1d:; BB(0x004bce1d);
    /* 004bce1d: push 0x6beaf0 */ { u32 v = 0x6beaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bce22: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bce27u); f_00630f40();
    /* 004bce27: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bce2a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bce2b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bce31: mov edx, dword ptr [ecx + 0xdc] */ r_edx = R32((u32)(r_ecx+0xdcu));
    /* 004bce37: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bce3c: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004bce42: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004bce44: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bce4a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bce4cu); call_ind(t); }
L_004bce4c:; BB(0x004bce4c);
    /* 004bce4c: jmp 0x4bd029 */ goto L_004bd029;
L_004bce51:; BB(0x004bce51);
    /* 004bce51: mov ecx, dword ptr [0x790754] */ r_ecx = R32((u32)(0x790754u));
    /* 004bce57: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bce58: lea edx, [ebp - 0x673] */ r_edx = (u32)(r_ebp+0xfffff98du);
    /* 004bce5e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bce5f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bce65: call 0x47ee90 */ r_esp -= 4; W32(r_esp, 0x4bce6au); f_0047ee90();
    /* 004bce6a: mov ecx, eax */ r_ecx = r_eax;
    /* 004bce6c: call 0x4640b0 */ r_esp -= 4; W32(r_esp, 0x4bce71u); f_004640b0();
    /* 004bce71: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004bce74: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bce76: je 0x4bcef0 */ if (fZ) goto L_004bcef0;
L_004bce78:; BB(0x004bce78);
    /* 004bce78: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bce7e: call 0x47efb0 */ r_esp -= 4; W32(r_esp, 0x4bce83u); f_0047efb0();
    /* 004bce83: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004bce86: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bce88: je 0x4bcebc */ if (fZ) goto L_004bcebc;
L_004bce8a:; BB(0x004bce8a);
    /* 004bce8a: push 0x6bead0 */ { u32 v = 0x6bead0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bce8f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bce94u); f_00630f40();
    /* 004bce94: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bce97: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bce98: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004bce9e: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004bcea4: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bceaa: mov ecx, dword ptr [ecx + 0xdc] */ r_ecx = R32((u32)(r_ecx+0xdcu));
    /* 004bceb0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004bceb2: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bceb8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bcebau); call_ind(t); }
    /* 004bceba: jmp 0x4bceeb */ goto L_004bceeb;
L_004bcebc:; BB(0x004bcebc);
    /* 004bcebc: push 0x6beab0 */ { u32 v = 0x6beab0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bcec1: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bcec6u); f_00630f40();
    /* 004bcec6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bcec9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bceca: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bced0: mov edx, dword ptr [ecx + 0xdc] */ r_edx = R32((u32)(r_ecx+0xdcu));
    /* 004bced6: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bcedb: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004bcee1: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004bcee3: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bcee9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bceebu); call_ind(t); }
L_004bceeb:; BB(0x004bceeb);
    /* 004bceeb: jmp 0x4bd029 */ goto L_004bd029;
L_004bcef0:; BB(0x004bcef0);
    /* 004bcef0: mov ecx, dword ptr [0x790764] */ r_ecx = R32((u32)(0x790764u));
    /* 004bcef6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bcef7: lea edx, [ebp - 0x674] */ r_edx = (u32)(r_ebp+0xfffff98cu);
    /* 004bcefd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bcefe: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bcf04: call 0x47ee90 */ r_esp -= 4; W32(r_esp, 0x4bcf09u); f_0047ee90();
    /* 004bcf09: mov ecx, eax */ r_ecx = r_eax;
    /* 004bcf0b: call 0x4640b0 */ r_esp -= 4; W32(r_esp, 0x4bcf10u); f_004640b0();
    /* 004bcf10: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004bcf13: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bcf15: je 0x4bcf8f */ if (fZ) goto L_004bcf8f;
L_004bcf17:; BB(0x004bcf17);
    /* 004bcf17: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bcf1d: call 0x47efb0 */ r_esp -= 4; W32(r_esp, 0x4bcf22u); f_0047efb0();
    /* 004bcf22: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004bcf25: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bcf27: je 0x4bcf5b */ if (fZ) goto L_004bcf5b;
L_004bcf29:; BB(0x004bcf29);
    /* 004bcf29: push 0x6bea8c */ { u32 v = 0x6bea8cu; r_esp -= 4; W32(r_esp, v); }
    /* 004bcf2e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bcf33u); f_00630f40();
    /* 004bcf33: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bcf36: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bcf37: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004bcf3d: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004bcf43: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bcf49: mov ecx, dword ptr [ecx + 0xdc] */ r_ecx = R32((u32)(r_ecx+0xdcu));
    /* 004bcf4f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004bcf51: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bcf57: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bcf59u); call_ind(t); }
    /* 004bcf59: jmp 0x4bcf8a */ goto L_004bcf8a;
L_004bcf5b:; BB(0x004bcf5b);
    /* 004bcf5b: push 0x6bea6c */ { u32 v = 0x6bea6cu; r_esp -= 4; W32(r_esp, v); }
    /* 004bcf60: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bcf65u); f_00630f40();
    /* 004bcf65: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bcf68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bcf69: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bcf6f: mov edx, dword ptr [ecx + 0xdc] */ r_edx = R32((u32)(r_ecx+0xdcu));
    /* 004bcf75: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bcf7a: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004bcf80: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004bcf82: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bcf88: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bcf8au); call_ind(t); }
L_004bcf8a:; BB(0x004bcf8a);
    /* 004bcf8a: jmp 0x4bd029 */ goto L_004bd029;
L_004bcf8f:; BB(0x004bcf8f);
    /* 004bcf8f: mov ecx, dword ptr [0x790770] */ r_ecx = R32((u32)(0x790770u));
    /* 004bcf95: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bcf96: lea edx, [ebp - 0x675] */ r_edx = (u32)(r_ebp+0xfffff98bu);
    /* 004bcf9c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bcf9d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bcfa3: call 0x47ee90 */ r_esp -= 4; W32(r_esp, 0x4bcfa8u); f_0047ee90();
    /* 004bcfa8: mov ecx, eax */ r_ecx = r_eax;
    /* 004bcfaa: call 0x4640b0 */ r_esp -= 4; W32(r_esp, 0x4bcfafu); f_004640b0();
    /* 004bcfaf: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004bcfb2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bcfb4: je 0x4bd029 */ if (fZ) goto L_004bd029;
L_004bcfb6:; BB(0x004bcfb6);
    /* 004bcfb6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bcfbc: call 0x47efb0 */ r_esp -= 4; W32(r_esp, 0x4bcfc1u); f_0047efb0();
    /* 004bcfc1: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004bcfc4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bcfc6: je 0x4bcffa */ if (fZ) goto L_004bcffa;
L_004bcfc8:; BB(0x004bcfc8);
    /* 004bcfc8: push 0x6bea4c */ { u32 v = 0x6bea4cu; r_esp -= 4; W32(r_esp, v); }
    /* 004bcfcd: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bcfd2u); f_00630f40();
    /* 004bcfd2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bcfd5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bcfd6: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004bcfdc: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004bcfe2: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bcfe8: mov ecx, dword ptr [ecx + 0xdc] */ r_ecx = R32((u32)(r_ecx+0xdcu));
    /* 004bcfee: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004bcff0: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bcff6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bcff8u); call_ind(t); }
    /* 004bcff8: jmp 0x4bd029 */ goto L_004bd029;
L_004bcffa:; BB(0x004bcffa);
    /* 004bcffa: push 0x6bea2c */ { u32 v = 0x6bea2cu; r_esp -= 4; W32(r_esp, v); }
    /* 004bcfff: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bd004u); f_00630f40();
    /* 004bd004: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bd007: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bd008: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bd00e: mov edx, dword ptr [ecx + 0xdc] */ r_edx = R32((u32)(r_ecx+0xdcu));
    /* 004bd014: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bd019: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004bd01f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004bd021: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bd027: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bd029u); call_ind(t); }
L_004bd029:; BB(0x004bd029);
    /* 004bd029: jmp 0x4bd136 */ goto L_004bd136;
L_004bd02e:; BB(0x004bd02e);
    /* 004bd02e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bd034: call 0x47f0c0 */ r_esp -= 4; W32(r_esp, 0x4bd039u); f_0047f0c0();
    /* 004bd039: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bd03c: jne 0x4bd072 */ if (!fZ) goto L_004bd072;
L_004bd03e:; BB(0x004bd03e);
    /* 004bd03e: push 0x6bea04 */ { u32 v = 0x6bea04u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd043: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bd048u); f_00630f40();
    /* 004bd048: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bd04b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bd04c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bd052: mov edx, dword ptr [ecx + 0xdc] */ r_edx = R32((u32)(r_ecx+0xdcu));
    /* 004bd058: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bd05d: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004bd063: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004bd065: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bd06b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bd06du); call_ind(t); }
    /* 004bd06d: jmp 0x4bd136 */ goto L_004bd136;
L_004bd072:; BB(0x004bd072);
    /* 004bd072: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bd078: call 0x47f0c0 */ r_esp -= 4; W32(r_esp, 0x4bd07du); f_0047f0c0();
    /* 004bd07d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bd080: jne 0x4bd0b6 */ if (!fZ) goto L_004bd0b6;
L_004bd082:; BB(0x004bd082);
    /* 004bd082: push 0x6be9dc */ { u32 v = 0x6be9dcu; r_esp -= 4; W32(r_esp, v); }
    /* 004bd087: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bd08cu); f_00630f40();
    /* 004bd08c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bd08f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bd090: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bd096: mov edx, dword ptr [ecx + 0xdc] */ r_edx = R32((u32)(r_ecx+0xdcu));
    /* 004bd09c: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bd0a1: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004bd0a7: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004bd0a9: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bd0af: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bd0b1u); call_ind(t); }
    /* 004bd0b1: jmp 0x4bd136 */ goto L_004bd136;
L_004bd0b6:; BB(0x004bd0b6);
    /* 004bd0b6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bd0bc: call 0x47f0c0 */ r_esp -= 4; W32(r_esp, 0x4bd0c1u); f_0047f0c0();
    /* 004bd0c1: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bd0c4: jne 0x4bd0f7 */ if (!fZ) goto L_004bd0f7;
L_004bd0c6:; BB(0x004bd0c6);
    /* 004bd0c6: push 0x6be9b4 */ { u32 v = 0x6be9b4u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd0cb: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bd0d0u); f_00630f40();
    /* 004bd0d0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bd0d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bd0d4: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bd0da: mov edx, dword ptr [ecx + 0xdc] */ r_edx = R32((u32)(r_ecx+0xdcu));
    /* 004bd0e0: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bd0e5: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004bd0eb: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004bd0ed: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bd0f3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bd0f5u); call_ind(t); }
    /* 004bd0f5: jmp 0x4bd136 */ goto L_004bd136;
L_004bd0f7:; BB(0x004bd0f7);
    /* 004bd0f7: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bd0fd: call 0x47f0c0 */ r_esp -= 4; W32(r_esp, 0x4bd102u); f_0047f0c0();
    /* 004bd102: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bd105: jne 0x4bd136 */ if (!fZ) goto L_004bd136;
L_004bd107:; BB(0x004bd107);
    /* 004bd107: push 0x6be98c */ { u32 v = 0x6be98cu; r_esp -= 4; W32(r_esp, v); }
    /* 004bd10c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bd111u); f_00630f40();
    /* 004bd111: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bd114: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bd115: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bd11b: mov edx, dword ptr [ecx + 0xdc] */ r_edx = R32((u32)(r_ecx+0xdcu));
    /* 004bd121: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bd126: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004bd12c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004bd12e: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bd134: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bd136u); call_ind(t); }
L_004bd136:; BB(0x004bd136);
    /* 004bd136: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd13b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bd141: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004bd147: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bd14c: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004bd152: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004bd154: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bd15a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bd15cu); call_ind(t); }
    /* 004bd15c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bd162: call 0x47ec40 */ r_esp -= 4; W32(r_esp, 0x4bd167u); f_0047ec40();
L_004bd167:; BB(0x004bd167);
    /* 004bd167: mov byte ptr [ebp - 4], 0x12 */ W8((u32)(r_ebp+0xfffffffcu), 0x12u);
    /* 004bd16b: lea ecx, [ebp - 0x4bc] */ r_ecx = (u32)(r_ebp+0xfffffb44u);
    /* 004bd171: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x4bd176u); f_004a20f0();
    /* 004bd176: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004bd17d: lea ecx, [ebp - 0x4c4] */ r_ecx = (u32)(r_ebp+0xfffffb3cu);
    /* 004bd183: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x4bd188u); f_00484470();
    /* 004bd188: jmp 0x4bd6b5 */ goto L_004bd6b5;
L_004bd18d:; BB(0x004bd18d);
    /* 004bd18d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bd193: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x4bd198u); f_0047e190();
    /* 004bd198: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bd19b: jne 0x4bd6b5 */ if (!fZ) goto L_004bd6b5;
L_004bd1a1:; BB(0x004bd1a1);
    /* 004bd1a1: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bd1a7: call 0x47e280 */ r_esp -= 4; W32(r_esp, 0x4bd1acu); f_0047e280();
    /* 004bd1ac: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bd1af: je 0x4bd1c8 */ if (fZ) goto L_004bd1c8;
L_004bd1b1:; BB(0x004bd1b1);
    /* 004bd1b1: push 0x70e */ { u32 v = 0x70eu; r_esp -= 4; W32(r_esp, v); }
    /* 004bd1b6: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd1bb: push 0x6bedb0 */ { u32 v = 0x6bedb0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd1c0: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4bd1c5u); f_005e9f20();
    /* 004bd1c5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004bd1c8:; BB(0x004bd1c8);
    /* 004bd1c8: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bd1ce: call 0x47d7f0 */ r_esp -= 4; W32(r_esp, 0x4bd1d3u); f_0047d7f0();
    /* 004bd1d3: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bd1d6: je 0x4bd1ef */ if (fZ) goto L_004bd1ef;
L_004bd1d8:; BB(0x004bd1d8);
    /* 004bd1d8: push 0x70f */ { u32 v = 0x70fu; r_esp -= 4; W32(r_esp, v); }
    /* 004bd1dd: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd1e2: push 0x6be964 */ { u32 v = 0x6be964u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd1e7: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4bd1ecu); f_005e9f20();
    /* 004bd1ec: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004bd1ef:; BB(0x004bd1ef);
    /* 004bd1ef: lea eax, [ebp - 0x4e8] */ r_eax = (u32)(r_ebp+0xfffffb18u);
    /* 004bd1f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bd1f6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bd1fc: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4bd201u); f_0047e3b0();
    /* 004bd201: mov ecx, eax */ r_ecx = r_eax;
    /* 004bd203: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x4bd208u); f_004c7c40();
    /* 004bd208: mov dword ptr [ebp - 4], 0x15 */ W32((u32)(r_ebp+0xfffffffcu), 0x15u);
    /* 004bd20f: lea ecx, [ebp - 0x4e8] */ r_ecx = (u32)(r_ebp+0xfffffb18u);
    /* 004bd215: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bd216: lea ecx, [ebp - 0x4d4] */ r_ecx = (u32)(r_ebp+0xfffffb2cu);
    /* 004bd21c: call 0x484320 */ r_esp -= 4; W32(r_esp, 0x4bd221u); f_00484320();
    /* 004bd221: mov byte ptr [ebp - 4], 0x16 */ W8((u32)(r_ebp+0xfffffffcu), 0x16u);
    /* 004bd225: mov dx, word ptr [0x791e74] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x791e74u))) & 0xffffu);
    /* 004bd22c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bd22d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd22f: lea eax, [ebp - 0x680] */ r_eax = (u32)(r_ebp+0xfffff980u);
    /* 004bd235: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bd236: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bd23c: mov ecx, dword ptr [ecx + 0x24] */ r_ecx = R32((u32)(r_ecx+0x24u));
    /* 004bd23f: call 0x4c7d30 */ r_esp -= 4; W32(r_esp, 0x4bd244u); f_004c7d30();
    /* 004bd244: mov dword ptr [ebp - 0x890], eax */ W32((u32)(r_ebp+0xfffff770u), r_eax);
    /* 004bd24a: mov edx, dword ptr [ebp - 0x890] */ r_edx = R32((u32)(r_ebp+0xfffff770u));
    /* 004bd250: mov dword ptr [ebp - 0x894], edx */ W32((u32)(r_ebp+0xfffff76cu), r_edx);
    /* 004bd256: mov byte ptr [ebp - 4], 0x17 */ W8((u32)(r_ebp+0xfffffffcu), 0x17u);
    /* 004bd25a: mov eax, dword ptr [ebp - 0x894] */ r_eax = R32((u32)(r_ebp+0xfffff76cu));
    /* 004bd260: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bd261: lea ecx, [ebp - 0x4d4] */ r_ecx = (u32)(r_ebp+0xfffffb2cu);
    /* 004bd267: call 0x4846a0 */ r_esp -= 4; W32(r_esp, 0x4bd26cu); f_004846a0();
    /* 004bd26c: mov byte ptr [ebp - 4], 0x16 */ W8((u32)(r_ebp+0xfffffffcu), 0x16u);
    /* 004bd270: lea ecx, [ebp - 0x680] */ r_ecx = (u32)(r_ebp+0xfffff980u);
    /* 004bd276: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x4bd27bu); f_00484470();
    /* 004bd27b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd27d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd27f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd281: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd283: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd285: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd287: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd289: lea ecx, [ebp - 0x4cc] */ r_ecx = (u32)(r_ebp+0xfffffb34u);
    /* 004bd28f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bd290: lea ecx, [ebp - 0x4d4] */ r_ecx = (u32)(r_ebp+0xfffffb2cu);
    /* 004bd296: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x4bd29bu); f_00485940();
    /* 004bd29b: mov byte ptr [ebp - 4], 0x18 */ W8((u32)(r_ebp+0xfffffffcu), 0x18u);
    /* 004bd29f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd2a1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd2a3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd2a5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd2a7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd2a9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd2ab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd2ad: lea edx, [ebp - 0x4d8] */ r_edx = (u32)(r_ebp+0xfffffb28u);
    /* 004bd2b3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bd2b4: lea ecx, [ebp - 0x4d4] */ r_ecx = (u32)(r_ebp+0xfffffb2cu);
    /* 004bd2ba: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x4bd2bfu); f_00485940();
    /* 004bd2bf: mov byte ptr [ebp - 4], 0x19 */ W8((u32)(r_ebp+0xfffffffcu), 0x19u);
    /* 004bd2c3: lea eax, [ebp - 0x4e8] */ r_eax = (u32)(r_ebp+0xfffffb18u);
    /* 004bd2c9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bd2ca: lea ecx, [ebp - 0x4e0] */ r_ecx = (u32)(r_ebp+0xfffffb20u);
    /* 004bd2d0: call 0x484320 */ r_esp -= 4; W32(r_esp, 0x4bd2d5u); f_00484320();
    /* 004bd2d5: mov byte ptr [ebp - 4], 0x1a */ W8((u32)(r_ebp+0xfffffffcu), 0x1au);
    /* 004bd2d9: mov cx, word ptr [0x791e74] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x791e74u))) & 0xffffu);
    /* 004bd2e0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bd2e1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd2e3: lea edx, [ebp - 0x688] */ r_edx = (u32)(r_ebp+0xfffff978u);
    /* 004bd2e9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bd2ea: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bd2ef: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 004bd2f2: call 0x4c7d30 */ r_esp -= 4; W32(r_esp, 0x4bd2f7u); f_004c7d30();
    /* 004bd2f7: mov dword ptr [ebp - 0x898], eax */ W32((u32)(r_ebp+0xfffff768u), r_eax);
    /* 004bd2fd: mov ecx, dword ptr [ebp - 0x898] */ r_ecx = R32((u32)(r_ebp+0xfffff768u));
    /* 004bd303: mov dword ptr [ebp - 0x89c], ecx */ W32((u32)(r_ebp+0xfffff764u), r_ecx);
    /* 004bd309: mov byte ptr [ebp - 4], 0x1b */ W8((u32)(r_ebp+0xfffffffcu), 0x1bu);
    /* 004bd30d: mov edx, dword ptr [ebp - 0x89c] */ r_edx = R32((u32)(r_ebp+0xfffff764u));
    /* 004bd313: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bd314: lea ecx, [ebp - 0x4e0] */ r_ecx = (u32)(r_ebp+0xfffffb20u);
    /* 004bd31a: call 0x4846a0 */ r_esp -= 4; W32(r_esp, 0x4bd31fu); f_004846a0();
    /* 004bd31f: mov byte ptr [ebp - 4], 0x1a */ W8((u32)(r_ebp+0xfffffffcu), 0x1au);
    /* 004bd323: lea ecx, [ebp - 0x688] */ r_ecx = (u32)(r_ebp+0xfffff978u);
    /* 004bd329: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x4bd32eu); f_00484470();
    /* 004bd32e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd330: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd332: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd334: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd336: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd338: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd33a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd33c: lea eax, [ebp - 0x4ec] */ r_eax = (u32)(r_ebp+0xfffffb14u);
    /* 004bd342: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bd343: lea ecx, [ebp - 0x4e0] */ r_ecx = (u32)(r_ebp+0xfffffb20u);
    /* 004bd349: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x4bd34eu); f_00485940();
    /* 004bd34e: mov byte ptr [ebp - 4], 0x1c */ W8((u32)(r_ebp+0xfffffffcu), 0x1cu);
    /* 004bd352: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd354: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd356: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd358: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd35a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd35c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd35e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd360: lea ecx, [ebp - 0x4c8] */ r_ecx = (u32)(r_ebp+0xfffffb38u);
    /* 004bd366: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bd367: lea ecx, [ebp - 0x4e0] */ r_ecx = (u32)(r_ebp+0xfffffb20u);
    /* 004bd36d: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x4bd372u); f_00485940();
    /* 004bd372: mov byte ptr [ebp - 4], 0x1d */ W8((u32)(r_ebp+0xfffffffcu), 0x1du);
    /* 004bd376: cmp dword ptr [0x791e74], 1 */ {  u32 a = R32((u32)(0x791e74u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bd37d: je 0x4bd398 */ if (fZ) goto L_004bd398;
L_004bd37f:; BB(0x004bd37f);
    /* 004bd37f: lea edx, [ebp - 0x4cc] */ r_edx = (u32)(r_ebp+0xfffffb34u);
    /* 004bd385: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bd386: lea ecx, [ebp - 0x4ec] */ r_ecx = (u32)(r_ebp+0xfffffb14u);
    /* 004bd38c: call 0x4a2440 */ r_esp -= 4; W32(r_esp, 0x4bd391u); f_004a2440();
    /* 004bd391: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004bd394: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bd396: je 0x4bd3c1 */ if (fZ) goto L_004bd3c1;
L_004bd398:; BB(0x004bd398);
    /* 004bd398: lea ecx, [ebp - 0x689] */ r_ecx = (u32)(r_ebp+0xfffff977u);
    /* 004bd39e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bd39f: lea ecx, [ebp - 0x4ec] */ r_ecx = (u32)(r_ebp+0xfffffb14u);
    /* 004bd3a5: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x4bd3aau); f_004a2160();
    /* 004bd3aa: mov dl, byte ptr [eax] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 004bd3ac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bd3ad: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bd3b3: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4bd3b8u); f_0047e3b0();
    /* 004bd3b8: mov ecx, eax */ r_ecx = r_eax;
    /* 004bd3ba: call 0x4da4d0 */ r_esp -= 4; W32(r_esp, 0x4bd3bfu); f_004da4d0();
    /* 004bd3bf: jmp 0x4bd3e8 */ goto L_004bd3e8;
L_004bd3c1:; BB(0x004bd3c1);
    /* 004bd3c1: lea eax, [ebp - 0x68a] */ r_eax = (u32)(r_ebp+0xfffff976u);
    /* 004bd3c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bd3c8: lea ecx, [ebp - 0x4cc] */ r_ecx = (u32)(r_ebp+0xfffffb34u);
    /* 004bd3ce: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x4bd3d3u); f_004a2160();
    /* 004bd3d3: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 004bd3d5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bd3d6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bd3dc: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4bd3e1u); f_0047e3b0();
    /* 004bd3e1: mov ecx, eax */ r_ecx = r_eax;
    /* 004bd3e3: call 0x4da4d0 */ r_esp -= 4; W32(r_esp, 0x4bd3e8u); f_004da4d0();
L_004bd3e8:; BB(0x004bd3e8);
    /* 004bd3e8: cmp dword ptr [0x791e74], 1 */ {  u32 a = R32((u32)(0x791e74u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bd3ef: je 0x4bd40a */ if (fZ) goto L_004bd40a;
L_004bd3f1:; BB(0x004bd3f1);
    /* 004bd3f1: lea edx, [ebp - 0x4d8] */ r_edx = (u32)(r_ebp+0xfffffb28u);
    /* 004bd3f7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bd3f8: lea ecx, [ebp - 0x4c8] */ r_ecx = (u32)(r_ebp+0xfffffb38u);
    /* 004bd3fe: call 0x4a2550 */ r_esp -= 4; W32(r_esp, 0x4bd403u); f_004a2550();
    /* 004bd403: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004bd406: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bd408: je 0x4bd425 */ if (fZ) goto L_004bd425;
L_004bd40a:; BB(0x004bd40a);
    /* 004bd40a: mov ecx, dword ptr [ebp - 0x4c8] */ r_ecx = R32((u32)(r_ebp+0xfffffb38u));
    /* 004bd410: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bd411: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bd417: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4bd41cu); f_0047e3b0();
    /* 004bd41c: mov ecx, eax */ r_ecx = r_eax;
    /* 004bd41e: call 0x4db070 */ r_esp -= 4; W32(r_esp, 0x4bd423u); f_004db070();
    /* 004bd423: jmp 0x4bd43e */ goto L_004bd43e;
L_004bd425:; BB(0x004bd425);
    /* 004bd425: mov edx, dword ptr [ebp - 0x4d8] */ r_edx = R32((u32)(r_ebp+0xfffffb28u));
    /* 004bd42b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bd42c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bd432: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4bd437u); f_0047e3b0();
    /* 004bd437: mov ecx, eax */ r_ecx = r_eax;
    /* 004bd439: call 0x4db070 */ r_esp -= 4; W32(r_esp, 0x4bd43eu); f_004db070();
L_004bd43e:; BB(0x004bd43e);
    /* 004bd43e: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bd443: movzx ecx, byte ptr [eax + 0xc8] */ r_ecx = (u32)R8((u32)(r_eax+0xc8u));
    /* 004bd44a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bd44c: je 0x4bd649 */ if (fZ) goto L_004bd649;
L_004bd452:; BB(0x004bd452);
    /* 004bd452: cmp dword ptr [0x791e74], 0 */ {  u32 a = R32((u32)(0x791e74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bd459: jne 0x4bd5f0 */ if (!fZ) goto L_004bd5f0;
L_004bd45f:; BB(0x004bd45f);
    /* 004bd45f: mov dx, word ptr [0x791e9c] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x791e9cu))) & 0xffffu);
    /* 004bd466: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004bd46a: mov word ptr [0x791e9c], dx */ W16((u32)(0x791e9cu), (u16)r_edx);
    /* 004bd471: movsx eax, word ptr [0x791e9c] */ r_eax = (u32)(i32)(i16)R16((u32)(0x791e9cu));
    /* 004bd478: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004bd47b: jle 0x4bd486 */ if ((fZ||fS!=fO)) goto L_004bd486;
L_004bd47d:; BB(0x004bd47d);
    /* 004bd47d: mov word ptr [0x791e9c], 1 */ W16((u32)(0x791e9cu), 0x1u);
L_004bd486:; BB(0x004bd486);
    /* 004bd486: movsx ecx, word ptr [0x791e9c] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x791e9cu));
    /* 004bd48d: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bd490: jne 0x4bd4f6 */ if (!fZ) goto L_004bd4f6;
L_004bd492:; BB(0x004bd492);
    /* 004bd492: push 0x6be944 */ { u32 v = 0x6be944u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd497: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bd49cu); f_00630f40();
    /* 004bd49c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bd49f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bd4a0: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004bd4a6: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004bd4ac: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bd4b2: mov ecx, dword ptr [ecx + 0xdc] */ r_ecx = R32((u32)(r_ecx+0xdcu));
    /* 004bd4b8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004bd4ba: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bd4c0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bd4c2u); call_ind(t); }
    /* 004bd4c2: push 0x6be928 */ { u32 v = 0x6be928u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd4c7: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bd4ccu); f_00630f40();
    /* 004bd4cc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bd4cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bd4d0: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bd4d6: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004bd4dc: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bd4e1: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004bd4e7: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004bd4e9: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bd4ef: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bd4f1u); call_ind(t); }
    /* 004bd4f1: jmp 0x4bd5ee */ goto L_004bd5ee;
L_004bd4f6:; BB(0x004bd4f6);
    /* 004bd4f6: movsx ecx, word ptr [0x791e9c] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x791e9cu));
    /* 004bd4fd: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bd500: jne 0x4bd566 */ if (!fZ) goto L_004bd566;
L_004bd502:; BB(0x004bd502);
    /* 004bd502: push 0x6be944 */ { u32 v = 0x6be944u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd507: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bd50cu); f_00630f40();
    /* 004bd50c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bd50f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bd510: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004bd516: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004bd51c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bd522: mov ecx, dword ptr [ecx + 0xdc] */ r_ecx = R32((u32)(r_ecx+0xdcu));
    /* 004bd528: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004bd52a: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bd530: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bd532u); call_ind(t); }
    /* 004bd532: push 0x6be904 */ { u32 v = 0x6be904u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd537: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bd53cu); f_00630f40();
    /* 004bd53c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bd53f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bd540: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bd546: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004bd54c: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bd551: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004bd557: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004bd559: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bd55f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bd561u); call_ind(t); }
    /* 004bd561: jmp 0x4bd5ee */ goto L_004bd5ee;
L_004bd566:; BB(0x004bd566);
    /* 004bd566: movsx ecx, word ptr [0x791e9c] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x791e9cu));
    /* 004bd56d: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bd570: jne 0x4bd5d3 */ if (!fZ) goto L_004bd5d3;
L_004bd572:; BB(0x004bd572);
    /* 004bd572: push 0x6be904 */ { u32 v = 0x6be904u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd577: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bd57cu); f_00630f40();
    /* 004bd57c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bd57f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bd580: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004bd586: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004bd58c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bd592: mov ecx, dword ptr [ecx + 0xdc] */ r_ecx = R32((u32)(r_ecx+0xdcu));
    /* 004bd598: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004bd59a: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bd5a0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bd5a2u); call_ind(t); }
    /* 004bd5a2: push 0x6be928 */ { u32 v = 0x6be928u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd5a7: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4bd5acu); f_00630f40();
    /* 004bd5ac: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bd5af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bd5b0: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bd5b6: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004bd5bc: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bd5c1: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004bd5c7: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004bd5c9: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bd5cf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bd5d1u); call_ind(t); }
    /* 004bd5d1: jmp 0x4bd5ee */ goto L_004bd5ee;
L_004bd5d3:; BB(0x004bd5d3);
    /* 004bd5d3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 004bd5d5: jne 0x4bd5ee */ if (!fZ) goto L_004bd5ee;
L_004bd5d7:; BB(0x004bd5d7);
    /* 004bd5d7: push 0x742 */ { u32 v = 0x742u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd5dc: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd5e1: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd5e6: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4bd5ebu); f_005e9f20();
    /* 004bd5eb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004bd5ee:; BB(0x004bd5ee);
    /* 004bd5ee: jmp 0x4bd63e */ goto L_004bd63e;
L_004bd5f0:; BB(0x004bd5f0);
    /* 004bd5f0: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd5f5: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bd5fa: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004bd600: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004bd606: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004bd60c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004bd60e: mov ecx, eax */ r_ecx = r_eax;
    /* 004bd610: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bd616: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bd618u); call_ind(t); }
    /* 004bd618: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd61d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bd623: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004bd629: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bd62e: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004bd634: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004bd636: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004bd63c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bd63eu); call_ind(t); }
L_004bd63e:; BB(0x004bd63e);
    /* 004bd63e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bd644: call 0x47ec40 */ r_esp -= 4; W32(r_esp, 0x4bd649u); f_0047ec40();
L_004bd649:; BB(0x004bd649);
    /* 004bd649: mov byte ptr [ebp - 4], 0x1c */ W8((u32)(r_ebp+0xfffffffcu), 0x1cu);
    /* 004bd64d: lea ecx, [ebp - 0x4c8] */ r_ecx = (u32)(r_ebp+0xfffffb38u);
    /* 004bd653: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x4bd658u); f_004a20f0();
    /* 004bd658: mov byte ptr [ebp - 4], 0x1a */ W8((u32)(r_ebp+0xfffffffcu), 0x1au);
    /* 004bd65c: lea ecx, [ebp - 0x4ec] */ r_ecx = (u32)(r_ebp+0xfffffb14u);
    /* 004bd662: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x4bd667u); f_004a20f0();
    /* 004bd667: mov byte ptr [ebp - 4], 0x19 */ W8((u32)(r_ebp+0xfffffffcu), 0x19u);
    /* 004bd66b: lea ecx, [ebp - 0x4e0] */ r_ecx = (u32)(r_ebp+0xfffffb20u);
    /* 004bd671: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x4bd676u); f_00484470();
    /* 004bd676: mov byte ptr [ebp - 4], 0x18 */ W8((u32)(r_ebp+0xfffffffcu), 0x18u);
    /* 004bd67a: lea ecx, [ebp - 0x4d8] */ r_ecx = (u32)(r_ebp+0xfffffb28u);
    /* 004bd680: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x4bd685u); f_004a20f0();
    /* 004bd685: mov byte ptr [ebp - 4], 0x16 */ W8((u32)(r_ebp+0xfffffffcu), 0x16u);
    /* 004bd689: lea ecx, [ebp - 0x4cc] */ r_ecx = (u32)(r_ebp+0xfffffb34u);
    /* 004bd68f: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x4bd694u); f_004a20f0();
    /* 004bd694: mov byte ptr [ebp - 4], 0x15 */ W8((u32)(r_ebp+0xfffffffcu), 0x15u);
    /* 004bd698: lea ecx, [ebp - 0x4d4] */ r_ecx = (u32)(r_ebp+0xfffffb2cu);
    /* 004bd69e: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x4bd6a3u); f_00484470();
    /* 004bd6a3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004bd6aa: lea ecx, [ebp - 0x4e8] */ r_ecx = (u32)(r_ebp+0xfffffb18u);
    /* 004bd6b0: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x4bd6b5u); f_00484470();
L_004bd6b5:; BB(0x004bd6b5);
    /* 004bd6b5: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd6b7: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004bd6bd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004bd6bf: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004bd6c5: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004bd6c8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bd6cau); call_ind(t); }
    /* 004bd6ca: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd6cc: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004bd6d2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004bd6d4: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004bd6da: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004bd6dd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bd6dfu); call_ind(t); }
    /* 004bd6df: jmp 0x4c353d */ goto L_004c353d;
L_004bd6e4:; BB(0x004bd6e4);
    /* 004bd6e4: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 004bd6ea: mov ecx, dword ptr [ecx + 0x9c] */ r_ecx = R32((u32)(r_ecx+0x9cu));
    /* 004bd6f0: call 0x519a20 */ r_esp -= 4; W32(r_esp, 0x4bd6f5u); f_00519a20();
    /* 004bd6f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bd6f7: je 0x4bd80d */ if (fZ) goto L_004bd80d;
L_004bd6fd:; BB(0x004bd6fd);
    /* 004bd6fd: mov edx, dword ptr [0x791eb8] */ r_edx = R32((u32)(0x791eb8u));
    /* 004bd703: mov ecx, dword ptr [edx + 0x9c] */ r_ecx = R32((u32)(r_edx+0x9cu));
    /* 004bd709: call 0x519a20 */ r_esp -= 4; W32(r_esp, 0x4bd70eu); f_00519a20();
    /* 004bd70e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bd711: jne 0x4bd743 */ if (!fZ) goto L_004bd743;
L_004bd713:; BB(0x004bd713);
    /* 004bd713: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bd719: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004bd71c: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x4bd721u); f_004f6640();
    /* 004bd721: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004bd724: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bd726: je 0x4bd734 */ if (fZ) goto L_004bd734;
L_004bd728:; BB(0x004bd728);
    /* 004bd728: mov dword ptr [0x791ea0], 2 */ W32((u32)(0x791ea0u), 0x2u);
    /* 004bd732: jmp 0x4bd73e */ goto L_004bd73e;
L_004bd734:; BB(0x004bd734);
    /* 004bd734: mov dword ptr [0x791ea0], 4 */ W32((u32)(0x791ea0u), 0x4u);
L_004bd73e:; BB(0x004bd73e);
    /* 004bd73e: jmp 0x4bd7d6 */ goto L_004bd7d6;
L_004bd743:; BB(0x004bd743);
    /* 004bd743: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 004bd749: mov ecx, dword ptr [ecx + 0x9c] */ r_ecx = R32((u32)(r_ecx+0x9cu));
    /* 004bd74f: call 0x519a20 */ r_esp -= 4; W32(r_esp, 0x4bd754u); f_00519a20();
    /* 004bd754: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bd757: jne 0x4bd786 */ if (!fZ) goto L_004bd786;
L_004bd759:; BB(0x004bd759);
    /* 004bd759: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bd75f: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004bd762: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x4bd767u); f_004f6640();
    /* 004bd767: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004bd76a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bd76c: je 0x4bd77a */ if (fZ) goto L_004bd77a;
L_004bd76e:; BB(0x004bd76e);
    /* 004bd76e: mov dword ptr [0x791ea0], 1 */ W32((u32)(0x791ea0u), 0x1u);
    /* 004bd778: jmp 0x4bd784 */ goto L_004bd784;
L_004bd77a:; BB(0x004bd77a);
    /* 004bd77a: mov dword ptr [0x791ea0], 3 */ W32((u32)(0x791ea0u), 0x3u);
L_004bd784:; BB(0x004bd784);
    /* 004bd784: jmp 0x4bd7d6 */ goto L_004bd7d6;
L_004bd786:; BB(0x004bd786);
    /* 004bd786: mov eax, dword ptr [0x791eb8] */ r_eax = R32((u32)(0x791eb8u));
    /* 004bd78b: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 004bd791: call 0x519a20 */ r_esp -= 4; W32(r_esp, 0x4bd796u); f_00519a20();
    /* 004bd796: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bd799: jne 0x4bd7a7 */ if (!fZ) goto L_004bd7a7;
L_004bd79b:; BB(0x004bd79b);
    /* 004bd79b: mov dword ptr [0x791ea0], 0 */ W32((u32)(0x791ea0u), 0x0u);
    /* 004bd7a5: jmp 0x4bd7d6 */ goto L_004bd7d6;
L_004bd7a7:; BB(0x004bd7a7);
    /* 004bd7a7: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd7a9: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004bd7af: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004bd7b1: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004bd7b7: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004bd7ba: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bd7bcu); call_ind(t); }
    /* 004bd7bc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd7be: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004bd7c4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004bd7c6: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004bd7cc: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004bd7cf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bd7d1u); call_ind(t); }
    /* 004bd7d1: jmp 0x4c353d */ goto L_004c353d;
L_004bd7d6:; BB(0x004bd7d6);
    /* 004bd7d6: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004bd7d8: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004bd7de: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004bd7e0: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004bd7e6: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004bd7e9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bd7ebu); call_ind(t); }
    /* 004bd7eb: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004bd7f1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bd7f2: mov edx, dword ptr [0x791ea0] */ r_edx = R32((u32)(0x791ea0u));
    /* 004bd7f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bd7f9: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bd7ff: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4bd804u); f_0047e3b0();
    /* 004bd804: mov ecx, eax */ r_ecx = r_eax;
    /* 004bd806: call 0x4cc890 */ r_esp -= 4; W32(r_esp, 0x4bd80bu); f_004cc890();
    /* 004bd80b: jmp 0x4bd837 */ goto L_004bd837;
L_004bd80d:; BB(0x004bd80d);
    /* 004bd80d: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd80f: mov eax, dword ptr [ebp - 0x858] */ r_eax = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004bd815: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004bd817: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004bd81d: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004bd820: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bd822u); call_ind(t); }
    /* 004bd822: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd824: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004bd82a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004bd82c: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004bd832: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004bd835: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bd837u); call_ind(t); }
L_004bd837:; BB(0x004bd837);
    /* 004bd837: jmp 0x4c353d */ goto L_004c353d;
L_004bd83c:; BB(0x004bd83c);
    /* 004bd83c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bd842: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4bd847u); f_0047e3b0();
    /* 004bd847: mov ecx, eax */ r_ecx = r_eax;
    /* 004bd849: call 0x4da890 */ r_esp -= 4; W32(r_esp, 0x4bd84eu); f_004da890();
    /* 004bd84e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bd854: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4bd859u); f_0047e3b0();
    /* 004bd859: mov ecx, eax */ r_ecx = r_eax;
    /* 004bd85b: call 0x4db610 */ r_esp -= 4; W32(r_esp, 0x4bd860u); f_004db610();
    /* 004bd860: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bd866: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4bd86bu); f_0047e3b0();
    /* 004bd86b: mov ecx, eax */ r_ecx = r_eax;
    /* 004bd86d: call 0x4c8eb0 */ r_esp -= 4; W32(r_esp, 0x4bd872u); f_004c8eb0();
    /* 004bd872: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bd878: call 0x47ec50 */ r_esp -= 4; W32(r_esp, 0x4bd87du); f_0047ec50();
    /* 004bd87d: cmp dword ptr [0x791ea0], 1 */ {  u32 a = R32((u32)(0x791ea0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bd884: jne 0x4bd8b8 */ if (!fZ) goto L_004bd8b8;
L_004bd886:; BB(0x004bd886);
    /* 004bd886: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bd88c: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004bd88f: call 0x4f5760 */ r_esp -= 4; W32(r_esp, 0x4bd894u); f_004f5760();
    /* 004bd894: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 004bd897: mov dword ptr [0x791e3c], ecx */ W32((u32)(0x791e3cu), r_ecx);
    /* 004bd89d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd89f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd8a1: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bd8a7: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4bd8acu); f_0047e3b0();
    /* 004bd8ac: mov ecx, eax */ r_ecx = r_eax;
    /* 004bd8ae: call 0x4dc4d0 */ r_esp -= 4; W32(r_esp, 0x4bd8b3u); f_004dc4d0();
    /* 004bd8b3: jmp 0x4bda0b */ goto L_004bda0b;
L_004bd8b8:; BB(0x004bd8b8);
    /* 004bd8b8: cmp dword ptr [0x791ea0], 2 */ {  u32 a = R32((u32)(0x791ea0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bd8bf: jne 0x4bd90a */ if (!fZ) goto L_004bd90a;
L_004bd8c1:; BB(0x004bd8c1);
    /* 004bd8c1: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bd8c7: call 0x47d6b0 */ r_esp -= 4; W32(r_esp, 0x4bd8ccu); f_0047d6b0();
    /* 004bd8cc: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bd8cf: jne 0x4bd8e9 */ if (!fZ) goto L_004bd8e9;
L_004bd8d1:; BB(0x004bd8d1);
    /* 004bd8d1: mov edx, dword ptr [0x791e44] */ r_edx = R32((u32)(0x791e44u));
    /* 004bd8d7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bd8d8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd8da: call 0x4c3950 */ r_esp -= 4; W32(r_esp, 0x4bd8dfu); f_004c3950();
    /* 004bd8df: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bd8e2: mov dword ptr [0x791e3c], eax */ W32((u32)(0x791e3cu), r_eax);
    /* 004bd8e7: jmp 0x4bd8fa */ goto L_004bd8fa;
L_004bd8e9:; BB(0x004bd8e9);
    /* 004bd8e9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd8eb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd8ed: call 0x4c3950 */ r_esp -= 4; W32(r_esp, 0x4bd8f2u); f_004c3950();
    /* 004bd8f2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bd8f5: mov dword ptr [0x791e3c], eax */ W32((u32)(0x791e3cu), r_eax);
L_004bd8fa:; BB(0x004bd8fa);
    /* 004bd8fa: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bd900: call 0x47e500 */ r_esp -= 4; W32(r_esp, 0x4bd905u); f_0047e500();
    /* 004bd905: jmp 0x4bda0b */ goto L_004bda0b;
L_004bd90a:; BB(0x004bd90a);
    /* 004bd90a: cmp dword ptr [0x791ea0], 3 */ {  u32 a = R32((u32)(0x791ea0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bd911: jne 0x4bd932 */ if (!fZ) goto L_004bd932;
L_004bd913:; BB(0x004bd913);
    /* 004bd913: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd915: call 0x4c37f0 */ r_esp -= 4; W32(r_esp, 0x4bd91au); f_004c37f0();
    /* 004bd91a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bd91d: mov dword ptr [0x791e3c], eax */ W32((u32)(0x791e3cu), r_eax);
    /* 004bd922: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bd928: call 0x47e500 */ r_esp -= 4; W32(r_esp, 0x4bd92du); f_0047e500();
    /* 004bd92d: jmp 0x4bda0b */ goto L_004bda0b;
L_004bd932:; BB(0x004bd932);
    /* 004bd932: cmp dword ptr [0x791ea0], 4 */ {  u32 a = R32((u32)(0x791ea0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bd939: jne 0x4bd983 */ if (!fZ) goto L_004bd983;
L_004bd93b:; BB(0x004bd93b);
    /* 004bd93b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bd941: call 0x47d6b0 */ r_esp -= 4; W32(r_esp, 0x4bd946u); f_0047d6b0();
    /* 004bd946: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bd949: jne 0x4bd962 */ if (!fZ) goto L_004bd962;
L_004bd94b:; BB(0x004bd94b);
    /* 004bd94b: mov eax, dword ptr [0x791e44] */ r_eax = R32((u32)(0x791e44u));
    /* 004bd950: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bd951: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd953: call 0x4c3c70 */ r_esp -= 4; W32(r_esp, 0x4bd958u); f_004c3c70();
    /* 004bd958: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bd95b: mov dword ptr [0x791e3c], eax */ W32((u32)(0x791e3cu), r_eax);
    /* 004bd960: jmp 0x4bd973 */ goto L_004bd973;
L_004bd962:; BB(0x004bd962);
    /* 004bd962: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd964: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd966: call 0x4c3c70 */ r_esp -= 4; W32(r_esp, 0x4bd96bu); f_004c3c70();
    /* 004bd96b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bd96e: mov dword ptr [0x791e3c], eax */ W32((u32)(0x791e3cu), r_eax);
L_004bd973:; BB(0x004bd973);
    /* 004bd973: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bd979: call 0x47e500 */ r_esp -= 4; W32(r_esp, 0x4bd97eu); f_0047e500();
    /* 004bd97e: jmp 0x4bda0b */ goto L_004bda0b;
L_004bd983:; BB(0x004bd983);
    /* 004bd983: cmp dword ptr [0x791ea0], 0 */ {  u32 a = R32((u32)(0x791ea0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bd98a: jne 0x4bd9f0 */ if (!fZ) goto L_004bd9f0;
L_004bd98c:; BB(0x004bd98c);
    /* 004bd98c: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd98e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bd994: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4bd999u); f_0047e3b0();
    /* 004bd999: mov ecx, eax */ r_ecx = r_eax;
    /* 004bd99b: call 0x4c7030 */ r_esp -= 4; W32(r_esp, 0x4bd9a0u); f_004c7030();
    /* 004bd9a0: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bd9a6: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4bd9abu); f_0047e3b0();
    /* 004bd9ab: mov ecx, eax */ r_ecx = r_eax;
    /* 004bd9ad: call 0x4c7230 */ r_esp -= 4; W32(r_esp, 0x4bd9b2u); f_004c7230();
    /* 004bd9b2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd9b4: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd9b6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bd9bc: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4bd9c1u); f_0047e3b0();
    /* 004bd9c1: mov ecx, eax */ r_ecx = r_eax;
    /* 004bd9c3: call 0x4dc4d0 */ r_esp -= 4; W32(r_esp, 0x4bd9c8u); f_004dc4d0();
    /* 004bd9c8: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bd9ce: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004bd9d1: call 0x4f62e0 */ r_esp -= 4; W32(r_esp, 0x4bd9d6u); f_004f62e0();
    /* 004bd9d6: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 004bd9d9: mov dword ptr [0x791e3c], ecx */ W32((u32)(0x791e3cu), r_ecx);
    /* 004bd9df: mov edx, dword ptr [0x791e40] */ r_edx = R32((u32)(0x791e40u));
    /* 004bd9e5: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004bd9e8: mov dword ptr [0x791e40], edx */ W32((u32)(0x791e40u), r_edx);
    /* 004bd9ee: jmp 0x4bda0b */ goto L_004bda0b;
L_004bd9f0:; BB(0x004bd9f0);
    /* 004bd9f0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 004bd9f2: jne 0x4bda0b */ if (!fZ) goto L_004bda0b;
L_004bd9f4:; BB(0x004bd9f4);
    /* 004bd9f4: push 0x7bd */ { u32 v = 0x7bdu; r_esp -= 4; W32(r_esp, v); }
    /* 004bd9f9: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd9fe: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 004bda03: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4bda08u); f_005e9f20();
    /* 004bda08: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004bda0b:; BB(0x004bda0b);
    /* 004bda0b: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 004bda0d: mov edx, dword ptr [ebp - 0x858] */ r_edx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004bda13: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004bda15: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004bda1b: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004bda1e: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4bda20u); call_ind(t); }
    /* 004bda20: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 004bda22: mov eax, dword ptr [ebp - 0x858] */ r_eax = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004bda28: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004bda2a: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004bda30: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004bda33: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bda35u); call_ind(t); }
    /* 004bda35: jmp 0x4c353d */ goto L_004c353d;
L_004bda3a:; BB(0x004bda3a);
    /* 004bda3a: cmp dword ptr [0x791ea0], 1 */ {  u32 a = R32((u32)(0x791ea0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bda41: jne 0x4bda4f */ if (!fZ) goto L_004bda4f;
L_004bda43:; BB(0x004bda43);
    /* 004bda43: mov dword ptr [0x791e48], 2 */ W32((u32)(0x791e48u), 0x2u);
    /* 004bda4d: jmp 0x4bdac2 */ goto L_004bdac2;
L_004bda4f:; BB(0x004bda4f);
    /* 004bda4f: cmp dword ptr [0x791ea0], 2 */ {  u32 a = R32((u32)(0x791ea0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bda56: jne 0x4bda66 */ if (!fZ) goto L_004bda66;
L_004bda58:; BB(0x004bda58);
    /* 004bda58: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bda5a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bda5c: call 0x4c3950 */ r_esp -= 4; W32(r_esp, 0x4bda61u); f_004c3950();
    /* 004bda61: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bda64: jmp 0x4bdac2 */ goto L_004bdac2;
L_004bda66:; BB(0x004bda66);
    /* 004bda66: cmp dword ptr [0x791ea0], 3 */ {  u32 a = R32((u32)(0x791ea0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bda6d: jne 0x4bda7b */ if (!fZ) goto L_004bda7b;
L_004bda6f:; BB(0x004bda6f);
    /* 004bda6f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bda71: call 0x4c37f0 */ r_esp -= 4; W32(r_esp, 0x4bda76u); f_004c37f0();
    /* 004bda76: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bda79: jmp 0x4bdac2 */ goto L_004bdac2;
L_004bda7b:; BB(0x004bda7b);
    /* 004bda7b: cmp dword ptr [0x791ea0], 4 */ {  u32 a = R32((u32)(0x791ea0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bda82: jne 0x4bda92 */ if (!fZ) goto L_004bda92;
L_004bda84:; BB(0x004bda84);
    /* 004bda84: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bda86: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bda88: call 0x4c3c70 */ r_esp -= 4; W32(r_esp, 0x4bda8du); f_004c3c70();
    /* 004bda8d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bda90: jmp 0x4bdac2 */ goto L_004bdac2;
L_004bda92:; BB(0x004bda92);
    /* 004bda92: cmp dword ptr [0x791ea0], 0 */ {  u32 a = R32((u32)(0x791ea0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bda99: jne 0x4bdaa7 */ if (!fZ) goto L_004bdaa7;
L_004bda9b:; BB(0x004bda9b);
    /* 004bda9b: mov dword ptr [0x791e48], 1 */ W32((u32)(0x791e48u), 0x1u);
    /* 004bdaa5: jmp 0x4bdac2 */ goto L_004bdac2;
L_004bdaa7:; BB(0x004bdaa7);
    /* 004bdaa7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 004bdaa9: jne 0x4bdac2 */ if (!fZ) goto L_004bdac2;
L_004bdaab:; BB(0x004bdaab);
    /* 004bdaab: push 0x7ce */ { u32 v = 0x7ceu; r_esp -= 4; W32(r_esp, v); }
    /* 004bdab0: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004bdab5: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 004bdaba: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4bdabfu); f_005e9f20();
    /* 004bdabf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004bdac2:; BB(0x004bdac2);
    /* 004bdac2: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004bdac4: mov eax, dword ptr [ebp - 0x858] */ r_eax = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004bdaca: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004bdacc: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004bdad2: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004bdad5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bdad7u); call_ind(t); }
    /* 004bdad7: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bdadd: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4bdae2u); f_0047e3b0();
    /* 004bdae2: mov ecx, eax */ r_ecx = r_eax;
    /* 004bdae4: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x4bdae9u); f_004c6cb0();
    /* 004bdae9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bdaec: jne 0x4bdf89 */ if (!fZ) goto L_004bdf89;
L_004bdaf2:; BB(0x004bdaf2);
    /* 004bdaf2: cmp dword ptr [0x791e48], 0 */ {  u32 a = R32((u32)(0x791e48u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bdaf9: jne 0x4bdb15 */ if (!fZ) goto L_004bdb15;
L_004bdafb:; BB(0x004bdafb);
    /* 004bdafb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bdafd: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004bdb03: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004bdb05: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004bdb0b: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004bdb0e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bdb10u); call_ind(t); }
    /* 004bdb10: jmp 0x4bdf87 */ goto L_004bdf87;
L_004bdb15:; BB(0x004bdb15);
    /* 004bdb15: cmp dword ptr [0x791e48], 1 */ {  u32 a = R32((u32)(0x791e48u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bdb1c: jne 0x4bdbe0 */ if (!fZ) goto L_004bdbe0;
L_004bdb22:; BB(0x004bdb22);
    /* 004bdb22: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bdb28: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004bdb2b: call 0x4f6840 */ r_esp -= 4; W32(r_esp, 0x4bdb30u); f_004f6840();
    /* 004bdb30: mov esi, eax */ r_esi = r_eax;
    /* 004bdb32: mov ecx, dword ptr [0x791e50] */ r_ecx = R32((u32)(0x791e50u));
    /* 004bdb38: shl ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 004bdb3a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bdb3b: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4bdb40u); f_0062fbf0();
    /* 004bdb40: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bdb43: mov edi, eax */ r_edi = r_eax;
    /* 004bdb45: mov edx, dword ptr [0x791e50] */ r_edx = R32((u32)(0x791e50u));
    /* 004bdb4b: shl edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 004bdb4d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bdb4e: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4bdb53u); f_0062fbf0();
    /* 004bdb53: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bdb56: lea edi, [edi + eax + 5] */ r_edi = (u32)(r_edi+r_eax+0x5u);
    /* 004bdb5a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bdb60: call 0x47bde0 */ r_esp -= 4; W32(r_esp, 0x4bdb65u); f_0047bde0();
    /* 004bdb65: imul edi, eax */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_eax; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004bdb68: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004bdb6a: jle 0x4bdb84 */ if ((fZ||fS!=fO)) goto L_004bdb84;
L_004bdb6c:; BB(0x004bdb6c);
    /* 004bdb6c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004bdb6f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bdb70: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bdb76: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4bdb7bu); f_0047e3b0();
    /* 004bdb7b: mov ecx, eax */ r_ecx = r_eax;
    /* 004bdb7d: call 0x4cc9c0 */ r_esp -= 4; W32(r_esp, 0x4bdb82u); f_004cc9c0();
    /* 004bdb82: jmp 0x4bdbdb */ goto L_004bdbdb;
L_004bdb84:; BB(0x004bdb84);
    /* 004bdb84: cmp dword ptr [0x791e74], 5 */ {  u32 a = R32((u32)(0x791e74u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bdb8b: jne 0x4bdbc5 */ if (!fZ) goto L_004bdbc5;
L_004bdb8d:; BB(0x004bdb8d);
    /* 004bdb8d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bdb93: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x4bdb98u); f_0047e190();
    /* 004bdb98: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bdb9b: je 0x4bdbc5 */ if (fZ) goto L_004bdbc5;
L_004bdb9d:; BB(0x004bdb9d);
    /* 004bdb9d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bdba3: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x4bdba8u); f_0047e190();
    /* 004bdba8: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bdbab: je 0x4bdbc5 */ if (fZ) goto L_004bdbc5;
L_004bdbad:; BB(0x004bdbad);
    /* 004bdbad: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004bdbb0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bdbb1: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bdbb7: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4bdbbcu); f_0047e3b0();
    /* 004bdbbc: mov ecx, eax */ r_ecx = r_eax;
    /* 004bdbbe: call 0x4cc9a0 */ r_esp -= 4; W32(r_esp, 0x4bdbc3u); f_004cc9a0();
    /* 004bdbc3: jmp 0x4bdbdb */ goto L_004bdbdb;
L_004bdbc5:; BB(0x004bdbc5);
    /* 004bdbc5: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004bdbc8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bdbc9: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bdbcf: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4bdbd4u); f_0047e3b0();
    /* 004bdbd4: mov ecx, eax */ r_ecx = r_eax;
    /* 004bdbd6: call 0x4cc980 */ r_esp -= 4; W32(r_esp, 0x4bdbdbu); f_004cc980();
L_004bdbdb:; BB(0x004bdbdb);
    /* 004bdbdb: jmp 0x4bdf87 */ goto L_004bdf87;
L_004bdbe0:; BB(0x004bdbe0);
    /* 004bdbe0: cmp dword ptr [0x791e48], 2 */ {  u32 a = R32((u32)(0x791e48u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bdbe7: jne 0x4bdc04 */ if (!fZ) goto L_004bdc04;
L_004bdbe9:; BB(0x004bdbe9);
    /* 004bdbe9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004bdbec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bdbed: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bdbf3: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4bdbf8u); f_0047e3b0();
    /* 004bdbf8: mov ecx, eax */ r_ecx = r_eax;
    /* 004bdbfa: call 0x4cc9e0 */ r_esp -= 4; W32(r_esp, 0x4bdbffu); f_004cc9e0();
    /* 004bdbff: jmp 0x4bdf87 */ goto L_004bdf87;
L_004bdc04:; BB(0x004bdc04);
    /* 004bdc04: cmp dword ptr [0x791e48], 3 */ {  u32 a = R32((u32)(0x791e48u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bdc0b: jne 0x4bde30 */ if (!fZ) goto L_004bde30;
L_004bdc11:; BB(0x004bdc11);
    /* 004bdc11: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bdc17: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x4bdc1cu); f_0047e190();
    /* 004bdc1c: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bdc1f: je 0x4bdce5 */ if (fZ) goto L_004bdce5;
L_004bdc25:; BB(0x004bdc25);
    /* 004bdc25: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bdc2b: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x4bdc30u); f_0047e190();
    /* 004bdc30: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bdc33: je 0x4bdce5 */ if (fZ) goto L_004bdce5;
L_004bdc39:; BB(0x004bdc39);
    /* 004bdc39: cmp dword ptr [0x791e74], 5 */ {  u32 a = R32((u32)(0x791e74u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bdc40: jne 0x4bdc5d */ if (!fZ) goto L_004bdc5d;
L_004bdc42:; BB(0x004bdc42);
    /* 004bdc42: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004bdc45: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bdc46: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bdc4c: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4bdc51u); f_0047e3b0();
    /* 004bdc51: mov ecx, eax */ r_ecx = r_eax;
    /* 004bdc53: call 0x4cd130 */ r_esp -= 4; W32(r_esp, 0x4bdc58u); f_004cd130();
    /* 004bdc58: jmp 0x4bdce0 */ goto L_004bdce0;
L_004bdc5d:; BB(0x004bdc5d);
    /* 004bdc5d: cmp dword ptr [0x791e74], 3 */ {  u32 a = R32((u32)(0x791e74u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004bdc64: jl 0x4bdca4 */ if ((fS!=fO)) goto L_004bdca4;
L_004bdc66:; BB(0x004bdc66);
    /* 004bdc66: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004bdc68: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4bdc6du); f_0062fbf0();
    /* 004bdc6d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bdc70: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bdc72: jne 0x4bdc8c */ if (!fZ) goto L_004bdc8c;
L_004bdc74:; BB(0x004bdc74);
    /* 004bdc74: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004bdc77: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bdc78: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bdc7e: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4bdc83u); f_0047e3b0();
    /* 004bdc83: mov ecx, eax */ r_ecx = r_eax;
    /* 004bdc85: call 0x4ccae0 */ r_esp -= 4; W32(r_esp, 0x4bdc8au); f_004ccae0();
    /* 004bdc8a: jmp 0x4bdca2 */ goto L_004bdca2;
L_004bdc8c:; BB(0x004bdc8c);
    /* 004bdc8c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004bdc8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bdc90: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bdc96: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4bdc9bu); f_0047e3b0();
    /* 004bdc9b: mov ecx, eax */ r_ecx = r_eax;
    /* 004bdc9d: call 0x4cd110 */ r_esp -= 4; W32(r_esp, 0x4bdca2u); f_004cd110();
L_004bdca2:; BB(0x004bdca2);
    /* 004bdca2: jmp 0x4bdce0 */ goto L_004bdce0;
L_004bdca4:; BB(0x004bdca4);
    /* 004bdca4: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004bdca6: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4bdcabu); f_0062fbf0();
    /* 004bdcab: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bdcae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bdcb0: jne 0x4bdcca */ if (!fZ) goto L_004bdcca;
L_004bdcb2:; BB(0x004bdcb2);
    /* 004bdcb2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004bdcb5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bdcb6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bdcbc: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4bdcc1u); f_0047e3b0();
    /* 004bdcc1: mov ecx, eax */ r_ecx = r_eax;
    /* 004bdcc3: call 0x4ccae0 */ r_esp -= 4; W32(r_esp, 0x4bdcc8u); f_004ccae0();
    /* 004bdcc8: jmp 0x4bdce0 */ goto L_004bdce0;
L_004bdcca:; BB(0x004bdcca);
    /* 004bdcca: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004bdccd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bdcce: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bdcd4: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4bdcd9u); f_0047e3b0();
    /* 004bdcd9: mov ecx, eax */ r_ecx = r_eax;
    /* 004bdcdb: call 0x4cd150 */ r_esp -= 4; W32(r_esp, 0x4bdce0u); f_004cd150();
L_004bdce0:; BB(0x004bdce0);
    /* 004bdce0: jmp 0x4bde2b */ goto L_004bde2b;
L_004bdce5:; BB(0x004bdce5);
    /* 004bdce5: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bdceb: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x4bdcf0u); f_0047e190();
    /* 004bdcf0: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bdcf3: jne 0x4bdd7c */ if (!fZ) goto L_004bdd7c;
L_004bdcf9:; BB(0x004bdcf9);
    /* 004bdcf9: cmp dword ptr [0x791e74], 4 */ {  u32 a = R32((u32)(0x791e74u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bdd00: jne 0x4bdd1a */ if (!fZ) goto L_004bdd1a;
L_004bdd02:; BB(0x004bdd02);
    /* 004bdd02: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004bdd05: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bdd06: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bdd0c: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4bdd11u); f_0047e3b0();
    /* 004bdd11: mov ecx, eax */ r_ecx = r_eax;
    /* 004bdd13: call 0x4cd130 */ r_esp -= 4; W32(r_esp, 0x4bdd18u); f_004cd130();
    /* 004bdd18: jmp 0x4bdd77 */ goto L_004bdd77;
L_004bdd1a:; BB(0x004bdd1a);
    /* 004bdd1a: cmp dword ptr [0x791e74], 0 */ {  u32 a = R32((u32)(0x791e74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004bdd21: jle 0x4bdd61 */ if ((fZ||fS!=fO)) goto L_004bdd61;
L_004bdd23:; BB(0x004bdd23);
    /* 004bdd23: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004bdd25: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4bdd2au); f_0062fbf0();
    /* 004bdd2a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bdd2d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bdd2f: jne 0x4bdd49 */ if (!fZ) goto L_004bdd49;
L_004bdd31:; BB(0x004bdd31);
    /* 004bdd31: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004bdd34: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bdd35: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bdd3b: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4bdd40u); f_0047e3b0();
    /* 004bdd40: mov ecx, eax */ r_ecx = r_eax;
    /* 004bdd42: call 0x4ccae0 */ r_esp -= 4; W32(r_esp, 0x4bdd47u); f_004ccae0();
    /* 004bdd47: jmp 0x4bdd5f */ goto L_004bdd5f;
L_004bdd49:; BB(0x004bdd49);
    /* 004bdd49: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004bdd4c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bdd4d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bdd53: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4bdd58u); f_0047e3b0();
    /* 004bdd58: mov ecx, eax */ r_ecx = r_eax;
    /* 004bdd5a: call 0x4cd110 */ r_esp -= 4; W32(r_esp, 0x4bdd5fu); f_004cd110();
L_004bdd5f:; BB(0x004bdd5f);
    /* 004bdd5f: jmp 0x4bdd77 */ goto L_004bdd77;
L_004bdd61:; BB(0x004bdd61);
    /* 004bdd61: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004bdd64: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bdd65: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bdd6b: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4bdd70u); f_0047e3b0();
    /* 004bdd70: mov ecx, eax */ r_ecx = r_eax;
    /* 004bdd72: call 0x4ccae0 */ r_esp -= 4; W32(r_esp, 0x4bdd77u); f_004ccae0();
L_004bdd77:; BB(0x004bdd77);
    /* 004bdd77: jmp 0x4bde2b */ goto L_004bde2b;
L_004bdd7c:; BB(0x004bdd7c);
    /* 004bdd7c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bdd82: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x4bdd87u); f_0047e190();
    /* 004bdd87: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bdd8a: jne 0x4bde10 */ if (!fZ) goto L_004bde10;
L_004bdd90:; BB(0x004bdd90);
    /* 004bdd90: cmp dword ptr [0x791e74], 5 */ {  u32 a = R32((u32)(0x791e74u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bdd97: jne 0x4bddb1 */ if (!fZ) goto L_004bddb1;
L_004bdd99:; BB(0x004bdd99);
    /* 004bdd99: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004bdd9c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bdd9d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bdda3: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4bdda8u); f_0047e3b0();
    /* 004bdda8: mov ecx, eax */ r_ecx = r_eax;
    /* 004bddaa: call 0x4cd130 */ r_esp -= 4; W32(r_esp, 0x4bddafu); f_004cd130();
    /* 004bddaf: jmp 0x4bde0e */ goto L_004bde0e;
L_004bddb1:; BB(0x004bddb1);
    /* 004bddb1: cmp dword ptr [0x791e74], 0 */ {  u32 a = R32((u32)(0x791e74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004bddb8: jle 0x4bddf8 */ if ((fZ||fS!=fO)) goto L_004bddf8;
L_004bddba:; BB(0x004bddba);
    /* 004bddba: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004bddbc: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4bddc1u); f_0062fbf0();
    /* 004bddc1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bddc4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bddc6: jne 0x4bdde0 */ if (!fZ) goto L_004bdde0;
L_004bddc8:; BB(0x004bddc8);
    /* 004bddc8: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004bddcb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bddcc: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bddd2: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4bddd7u); f_0047e3b0();
    /* 004bddd7: mov ecx, eax */ r_ecx = r_eax;
    /* 004bddd9: call 0x4ccae0 */ r_esp -= 4; W32(r_esp, 0x4bdddeu); f_004ccae0();
    /* 004bddde: jmp 0x4bddf6 */ goto L_004bddf6;
L_004bdde0:; BB(0x004bdde0);
    /* 004bdde0: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004bdde3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bdde4: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bddea: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4bddefu); f_0047e3b0();
    /* 004bddef: mov ecx, eax */ r_ecx = r_eax;
    /* 004bddf1: call 0x4cd110 */ r_esp -= 4; W32(r_esp, 0x4bddf6u); f_004cd110();
L_004bddf6:; BB(0x004bddf6);
    /* 004bddf6: jmp 0x4bde0e */ goto L_004bde0e;
L_004bddf8:; BB(0x004bddf8);
    /* 004bddf8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004bddfb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bddfc: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bde02: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4bde07u); f_0047e3b0();
    /* 004bde07: mov ecx, eax */ r_ecx = r_eax;
    /* 004bde09: call 0x4ccae0 */ r_esp -= 4; W32(r_esp, 0x4bde0eu); f_004ccae0();
L_004bde0e:; BB(0x004bde0e);
    /* 004bde0e: jmp 0x4bde2b */ goto L_004bde2b;
L_004bde10:; BB(0x004bde10);
    /* 004bde10: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 004bde12: jne 0x4bde2b */ if (!fZ) goto L_004bde2b;
L_004bde14:; BB(0x004bde14);
    /* 004bde14: push 0x818 */ { u32 v = 0x818u; r_esp -= 4; W32(r_esp, v); }
    /* 004bde19: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004bde1e: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 004bde23: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4bde28u); f_005e9f20();
    /* 004bde28: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004bde2b:; BB(0x004bde2b);
    /* 004bde2b: jmp 0x4bdf87 */ goto L_004bdf87;
L_004bde30:; BB(0x004bde30);
    /* 004bde30: cmp dword ptr [0x791e48], 4 */ {  u32 a = R32((u32)(0x791e48u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bde37: jne 0x4bdec2 */ if (!fZ) goto L_004bdec2;
L_004bde3d:; BB(0x004bde3d);
    /* 004bde3d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bde43: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x4bde48u); f_0047e190();
    /* 004bde48: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bde4b: je 0x4bde86 */ if (fZ) goto L_004bde86;
L_004bde4d:; BB(0x004bde4d);
    /* 004bde4d: cmp dword ptr [0x791e74], 5 */ {  u32 a = R32((u32)(0x791e74u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bde54: jne 0x4bde6e */ if (!fZ) goto L_004bde6e;
L_004bde56:; BB(0x004bde56);
    /* 004bde56: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004bde59: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bde5a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bde60: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4bde65u); f_0047e3b0();
    /* 004bde65: mov ecx, eax */ r_ecx = r_eax;
    /* 004bde67: call 0x4ccab0 */ r_esp -= 4; W32(r_esp, 0x4bde6cu); f_004ccab0();
    /* 004bde6c: jmp 0x4bde84 */ goto L_004bde84;
L_004bde6e:; BB(0x004bde6e);
    /* 004bde6e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004bde71: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bde72: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bde78: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4bde7du); f_0047e3b0();
    /* 004bde7d: mov ecx, eax */ r_ecx = r_eax;
    /* 004bde7f: call 0x4cca60 */ r_esp -= 4; W32(r_esp, 0x4bde84u); f_004cca60();
L_004bde84:; BB(0x004bde84);
    /* 004bde84: jmp 0x4bdebd */ goto L_004bdebd;
L_004bde86:; BB(0x004bde86);
    /* 004bde86: cmp dword ptr [0x791e74], 4 */ {  u32 a = R32((u32)(0x791e74u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bde8d: jne 0x4bdea7 */ if (!fZ) goto L_004bdea7;
L_004bde8f:; BB(0x004bde8f);
    /* 004bde8f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004bde92: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bde93: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bde99: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4bde9eu); f_0047e3b0();
    /* 004bde9e: mov ecx, eax */ r_ecx = r_eax;
    /* 004bdea0: call 0x4ccab0 */ r_esp -= 4; W32(r_esp, 0x4bdea5u); f_004ccab0();
    /* 004bdea5: jmp 0x4bdebd */ goto L_004bdebd;
L_004bdea7:; BB(0x004bdea7);
    /* 004bdea7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004bdeaa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bdeab: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bdeb1: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4bdeb6u); f_0047e3b0();
    /* 004bdeb6: mov ecx, eax */ r_ecx = r_eax;
    /* 004bdeb8: call 0x4cca60 */ r_esp -= 4; W32(r_esp, 0x4bdebdu); f_004cca60();
L_004bdebd:; BB(0x004bdebd);
    /* 004bdebd: jmp 0x4bdf87 */ goto L_004bdf87;
L_004bdec2:; BB(0x004bdec2);
    /* 004bdec2: cmp dword ptr [0x791e48], 5 */ {  u32 a = R32((u32)(0x791e48u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bdec9: jne 0x4bdf51 */ if (!fZ) goto L_004bdf51;
L_004bdecf:; BB(0x004bdecf);
    /* 004bdecf: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bded5: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x4bdedau); f_0047e190();
    /* 004bdeda: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bdedd: je 0x4bdf18 */ if (fZ) goto L_004bdf18;
L_004bdedf:; BB(0x004bdedf);
    /* 004bdedf: cmp dword ptr [0x791e74], 5 */ {  u32 a = R32((u32)(0x791e74u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bdee6: jne 0x4bdf00 */ if (!fZ) goto L_004bdf00;
L_004bdee8:; BB(0x004bdee8);
    /* 004bdee8: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004bdeeb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bdeec: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bdef2: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4bdef7u); f_0047e3b0();
    /* 004bdef7: mov ecx, eax */ r_ecx = r_eax;
    /* 004bdef9: call 0x4cca20 */ r_esp -= 4; W32(r_esp, 0x4bdefeu); f_004cca20();
    /* 004bdefe: jmp 0x4bdf16 */ goto L_004bdf16;
L_004bdf00:; BB(0x004bdf00);
    /* 004bdf00: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004bdf03: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bdf04: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bdf0a: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4bdf0fu); f_0047e3b0();
    /* 004bdf0f: mov ecx, eax */ r_ecx = r_eax;
    /* 004bdf11: call 0x4cca00 */ r_esp -= 4; W32(r_esp, 0x4bdf16u); f_004cca00();
L_004bdf16:; BB(0x004bdf16);
    /* 004bdf16: jmp 0x4bdf4f */ goto L_004bdf4f;
L_004bdf18:; BB(0x004bdf18);
    /* 004bdf18: cmp dword ptr [0x791e74], 4 */ {  u32 a = R32((u32)(0x791e74u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bdf1f: jne 0x4bdf39 */ if (!fZ) goto L_004bdf39;
L_004bdf21:; BB(0x004bdf21);
    /* 004bdf21: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004bdf24: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bdf25: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bdf2b: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4bdf30u); f_0047e3b0();
    /* 004bdf30: mov ecx, eax */ r_ecx = r_eax;
    /* 004bdf32: call 0x4cca20 */ r_esp -= 4; W32(r_esp, 0x4bdf37u); f_004cca20();
    /* 004bdf37: jmp 0x4bdf4f */ goto L_004bdf4f;
L_004bdf39:; BB(0x004bdf39);
    /* 004bdf39: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004bdf3c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bdf3d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bdf43: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4bdf48u); f_0047e3b0();
    /* 004bdf48: mov ecx, eax */ r_ecx = r_eax;
    /* 004bdf4a: call 0x4cca00 */ r_esp -= 4; W32(r_esp, 0x4bdf4fu); f_004cca00();
L_004bdf4f:; BB(0x004bdf4f);
    /* 004bdf4f: jmp 0x4bdf87 */ goto L_004bdf87;
L_004bdf51:; BB(0x004bdf51);
    /* 004bdf51: cmp dword ptr [0x791e48], 6 */ {  u32 a = R32((u32)(0x791e48u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bdf58: jne 0x4bdf72 */ if (!fZ) goto L_004bdf72;
L_004bdf5a:; BB(0x004bdf5a);
    /* 004bdf5a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004bdf5d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bdf5e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bdf64: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4bdf69u); f_0047e3b0();
    /* 004bdf69: mov ecx, eax */ r_ecx = r_eax;
    /* 004bdf6b: call 0x4cca90 */ r_esp -= 4; W32(r_esp, 0x4bdf70u); f_004cca90();
    /* 004bdf70: jmp 0x4bdf87 */ goto L_004bdf87;
L_004bdf72:; BB(0x004bdf72);
    /* 004bdf72: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bdf74: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004bdf7a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004bdf7c: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004bdf82: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004bdf85: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bdf87u); call_ind(t); }
L_004bdf87:; BB(0x004bdf87);
    /* 004bdf87: jmp 0x4bdf9e */ goto L_004bdf9e;
L_004bdf89:; BB(0x004bdf89);
    /* 004bdf89: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bdf8b: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004bdf91: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004bdf93: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004bdf99: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004bdf9c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bdf9eu); call_ind(t); }
L_004bdf9e:; BB(0x004bdf9e);
    /* 004bdf9e: jmp 0x4c353d */ goto L_004c353d;
L_004bdfa3:; BB(0x004bdfa3);
    /* 004bdfa3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bdfa9: mov byte ptr [ecx + 0xe8], 0 */ W8((u32)(r_ecx+0xe8u), 0x0u);
    /* 004bdfb0: cmp dword ptr [0x791e3c], -1 */ {  u32 a = R32((u32)(0x791e3cu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bdfb7: jne 0x4bdfd0 */ if (!fZ) goto L_004bdfd0;
L_004bdfb9:; BB(0x004bdfb9);
    /* 004bdfb9: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 004bdfbb: mov edx, dword ptr [ebp - 0x858] */ r_edx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004bdfc1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004bdfc3: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004bdfc9: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004bdfcc: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4bdfceu); call_ind(t); }
    /* 004bdfce: jmp 0x4be043 */ goto L_004be043;
L_004bdfd0:; BB(0x004bdfd0);
    /* 004bdfd0: cmp dword ptr [0x791e3c], -2 */ {  u32 a = R32((u32)(0x791e3cu)); u32 b = 0xfffffffeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bdfd7: jne 0x4bdff0 */ if (!fZ) goto L_004bdff0;
L_004bdfd9:; BB(0x004bdfd9);
    /* 004bdfd9: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 004bdfdb: mov eax, dword ptr [ebp - 0x858] */ r_eax = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004bdfe1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004bdfe3: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004bdfe9: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004bdfec: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bdfeeu); call_ind(t); }
    /* 004bdfee: jmp 0x4be043 */ goto L_004be043;
L_004bdff0:; BB(0x004bdff0);
    /* 004bdff0: cmp dword ptr [0x791e3c], -3 */ {  u32 a = R32((u32)(0x791e3cu)); u32 b = 0xfffffffdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bdff7: jne 0x4be010 */ if (!fZ) goto L_004be010;
L_004bdff9:; BB(0x004bdff9);
    /* 004bdff9: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 004bdffb: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004be001: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004be003: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004be009: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004be00c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4be00eu); call_ind(t); }
    /* 004be00e: jmp 0x4be043 */ goto L_004be043;
L_004be010:; BB(0x004be010);
    /* 004be010: mov ecx, dword ptr [0x791e3c] */ r_ecx = R32((u32)(0x791e3cu));
    /* 004be016: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004be017: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004be01d: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x4be022u); f_0047e490();
    /* 004be022: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004be023: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004be029: call 0x47e400 */ r_esp -= 4; W32(r_esp, 0x4be02eu); f_0047e400();
    /* 004be02e: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004be030: mov edx, dword ptr [ebp - 0x858] */ r_edx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004be036: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004be038: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004be03e: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004be041: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4be043u); call_ind(t); }
L_004be043:; BB(0x004be043);
    /* 004be043: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004be045: mov eax, dword ptr [ebp - 0x858] */ r_eax = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004be04b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004be04d: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004be053: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004be056: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4be058u); call_ind(t); }
    /* 004be058: jmp 0x4c353d */ goto L_004c353d;
L_004be05d:; BB(0x004be05d);
    /* 004be05d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004be063: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004be066: call 0x4f6420 */ r_esp -= 4; W32(r_esp, 0x4be06bu); f_004f6420();
    /* 004be06b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004be06d: jle 0x4be194 */ if ((fZ||fS!=fO)) goto L_004be194;
L_004be073:; BB(0x004be073);
    /* 004be073: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004be079: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004be07c: call 0x4f6420 */ r_esp -= 4; W32(r_esp, 0x4be081u); f_004f6420();
    /* 004be081: mov esi, eax */ r_esi = r_eax;
    /* 004be083: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004be089: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x4be08eu); f_0047bc20();
    /* 004be08e: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004be091: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004be092: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004be098: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004be09b: call 0x4f64b0 */ r_esp -= 4; W32(r_esp, 0x4be0a0u); f_004f64b0();
    /* 004be0a0: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 004be0a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004be0a4: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004be0aa: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4be0afu); f_0047e3d0();
    /* 004be0af: mov ecx, eax */ r_ecx = r_eax;
    /* 004be0b1: call 0x4c6b80 */ r_esp -= 4; W32(r_esp, 0x4be0b6u); f_004c6b80();
    /* 004be0b6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004be0bc: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004be0bf: call 0x4f64b0 */ r_esp -= 4; W32(r_esp, 0x4be0c4u); f_004f64b0();
    /* 004be0c4: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 004be0c7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004be0c8: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004be0ce: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4be0d3u); f_0047e3d0();
    /* 004be0d3: mov ecx, eax */ r_ecx = r_eax;
    /* 004be0d5: call 0x4da300 */ r_esp -= 4; W32(r_esp, 0x4be0dau); f_004da300();
    /* 004be0da: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004be0e0: call 0x47ecd0 */ r_esp -= 4; W32(r_esp, 0x4be0e5u); f_0047ecd0();
    /* 004be0e5: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004be0eb: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004be0ee: call 0x4f6840 */ r_esp -= 4; W32(r_esp, 0x4be0f3u); f_004f6840();
    /* 004be0f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004be0f4: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004be0fa: call 0x47ec90 */ r_esp -= 4; W32(r_esp, 0x4be0ffu); f_0047ec90();
    /* 004be0ff: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004be105: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004be108: call 0x4f64b0 */ r_esp -= 4; W32(r_esp, 0x4be10du); f_004f64b0();
    /* 004be10d: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 004be110: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004be111: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004be117: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4be11cu); f_0047e3d0();
    /* 004be11c: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 004be11f: mov dword ptr [ebp - 0x4f8], ecx */ W32((u32)(r_ebp+0xfffffb08u), r_ecx);
    /* 004be125: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004be127: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004be12d: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004be130: call 0x4f6420 */ r_esp -= 4; W32(r_esp, 0x4be135u); f_004f6420();
    /* 004be135: mov esi, eax */ r_esi = r_eax;
    /* 004be137: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004be13d: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x4be142u); f_0047bc20();
    /* 004be142: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004be145: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004be146: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x4be14bu); f_0064c8a0();
    /* 004be14b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004be14e: mov dword ptr [ebp - 0x694], eax */ W32((u32)(r_ebp+0xfffff96cu), r_eax);
    /* 004be154: mov dword ptr [ebp - 0x690], edx */ W32((u32)(r_ebp+0xfffff970u), r_edx);
    /* 004be15a: mov edx, dword ptr [ebp - 0x694] */ r_edx = R32((u32)(r_ebp+0xfffff96cu));
    /* 004be160: mov dword ptr [ebp - 0x4f4], edx */ W32((u32)(r_ebp+0xfffffb0cu), r_edx);
    /* 004be166: mov eax, dword ptr [ebp - 0x690] */ r_eax = R32((u32)(r_ebp+0xfffff970u));
    /* 004be16c: mov dword ptr [ebp - 0x4f0], eax */ W32((u32)(r_ebp+0xfffffb10u), r_eax);
    /* 004be172: mov ecx, dword ptr [ebp - 0x4f0] */ r_ecx = R32((u32)(r_ebp+0xfffffb10u));
    /* 004be178: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004be179: mov edx, dword ptr [ebp - 0x4f4] */ r_edx = R32((u32)(r_ebp+0xfffffb0cu));
    /* 004be17f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004be180: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 004be182: mov eax, dword ptr [ebp - 0x4f8] */ r_eax = R32((u32)(r_ebp+0xfffffb08u));
    /* 004be188: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004be189: mov ecx, dword ptr [0x79506c] */ r_ecx = R32((u32)(0x79506cu));
    /* 004be18f: call 0x5e7e40 */ r_esp -= 4; W32(r_esp, 0x4be194u); f_005e7e40();
L_004be194:; BB(0x004be194);
    /* 004be194: mov byte ptr [0x791e38], 1 */ W8((u32)(0x791e38u), 0x1u);
    /* 004be19b: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 004be19d: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004be1a3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004be1a5: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004be1ab: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004be1ae: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4be1b0u); call_ind(t); }
    /* 004be1b0: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004be1b2: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004be1b8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004be1ba: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004be1c0: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004be1c3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4be1c5u); call_ind(t); }
    /* 004be1c5: jmp 0x4c353d */ goto L_004c353d;
L_004be1ca:; BB(0x004be1ca);
    /* 004be1ca: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004be1d0: mov dword ptr [ecx + 0x410], 0 */ W32((u32)(r_ecx+0x410u), 0x0u);
    /* 004be1da: cmp dword ptr [0x791e74], 5 */ {  u32 a = R32((u32)(0x791e74u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004be1e1: jne 0x4be201 */ if (!fZ) goto L_004be201;
L_004be1e3:; BB(0x004be1e3);
    /* 004be1e3: mov byte ptr [0x791e39], 1 */ W8((u32)(0x791e39u), 0x1u);
    /* 004be1ea: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 004be1ec: mov edx, dword ptr [ebp - 0x858] */ r_edx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004be1f2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004be1f4: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004be1fa: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004be1fd: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4be1ffu); call_ind(t); }
    /* 004be1ff: jmp 0x4be216 */ goto L_004be216;
L_004be201:; BB(0x004be201);
    /* 004be201: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 004be203: mov eax, dword ptr [ebp - 0x858] */ r_eax = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004be209: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004be20b: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004be211: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004be214: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4be216u); call_ind(t); }
L_004be216:; BB(0x004be216);
    /* 004be216: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004be218: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004be21e: call 0x5fc490 */ r_esp -= 4; W32(r_esp, 0x4be223u); f_005fc490();
    /* 004be223: jmp 0x4c353d */ goto L_004c353d;
L_004be228:; BB(0x004be228);
    /* 004be228: mov dword ptr [0x791e98], 0 */ W32((u32)(0x791e98u), 0x0u);
    /* 004be232: jmp 0x4be243 */ goto L_004be243;
L_004be234:; BB(0x004be234);
    /* 004be234: mov ecx, dword ptr [0x791e98] */ r_ecx = R32((u32)(0x791e98u));
    /* 004be23a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004be23d: mov dword ptr [0x791e98], ecx */ W32((u32)(0x791e98u), r_ecx);
L_004be243:; BB(0x004be243);
    /* 004be243: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004be249: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4be24eu); f_0047f950();
    /* 004be24e: cmp dword ptr [0x791e98], eax */ {  u32 a = R32((u32)(0x791e98u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004be254: jge 0x4be271 */ if ((fS==fO)) goto L_004be271;
L_004be256:; BB(0x004be256);
    /* 004be256: mov edx, dword ptr [0x791e98] */ r_edx = R32((u32)(0x791e98u));
    /* 004be25c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004be25d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004be263: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4be268u); f_0047e390();
    /* 004be268: mov ecx, eax */ r_ecx = r_eax;
    /* 004be26a: call 0x4dc490 */ r_esp -= 4; W32(r_esp, 0x4be26fu); f_004dc490();
    /* 004be26f: jmp 0x4be234 */ goto L_004be234;
L_004be271:; BB(0x004be271);
    /* 004be271: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004be273: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004be275: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004be277: mov eax, dword ptr [ebp - 0x858] */ r_eax = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004be27d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004be27e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004be280: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004be282: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004be288: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 004be28b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004be28c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004be292: call 0x47b010 */ r_esp -= 4; W32(r_esp, 0x4be297u); f_0047b010();
    /* 004be297: mov eax, dword ptr [0x791e74] */ r_eax = R32((u32)(0x791e74u));
    /* 004be29c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004be29f: mov dword ptr [0x791e74], eax */ W32((u32)(0x791e74u), r_eax);
    /* 004be2a4: cmp dword ptr [0x791e74], 3 */ {  u32 a = R32((u32)(0x791e74u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004be2ab: jne 0x4be43f */ if (!fZ) goto L_004be43f;
L_004be2b1:; BB(0x004be2b1);
    /* 004be2b1: mov word ptr [0x791eac], 0 */ W16((u32)(0x791eacu), 0x0u);
    /* 004be2ba: jmp 0x4be2ce */ goto L_004be2ce;
L_004be2bc:; BB(0x004be2bc);
    /* 004be2bc: mov cx, word ptr [0x791eac] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x791eacu))) & 0xffffu);
    /* 004be2c3: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004be2c7: mov word ptr [0x791eac], cx */ W16((u32)(0x791eacu), (u16)r_ecx);
L_004be2ce:; BB(0x004be2ce);
    /* 004be2ce: movsx esi, word ptr [0x791eac] */ r_esi = (u32)(i32)(i16)R16((u32)(0x791eacu));
    /* 004be2d5: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004be2db: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4be2e0u); f_0047f950();
    /* 004be2e0: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004be2e2: jge 0x4be43f */ if ((fS==fO)) goto L_004be43f;
L_004be2e8:; BB(0x004be2e8);
    /* 004be2e8: mov word ptr [0x791ea8], 0 */ W16((u32)(0x791ea8u), 0x0u);
    /* 004be2f1: jmp 0x4be305 */ goto L_004be305;
L_004be2f3:; BB(0x004be2f3);
    /* 004be2f3: mov dx, word ptr [0x791ea8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x791ea8u))) & 0xffffu);
    /* 004be2fa: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004be2fe: mov word ptr [0x791ea8], dx */ W16((u32)(0x791ea8u), (u16)r_edx);
L_004be305:; BB(0x004be305);
    /* 004be305: movsx esi, word ptr [0x791ea8] */ r_esi = (u32)(i32)(i16)R16((u32)(0x791ea8u));
    /* 004be30c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004be312: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4be317u); f_0047f950();
    /* 004be317: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004be319: jge 0x4be43a */ if ((fS==fO)) goto L_004be43a;
L_004be31f:; BB(0x004be31f);
    /* 004be31f: movsx eax, word ptr [0x791eac] */ r_eax = (u32)(i32)(i16)R16((u32)(0x791eacu));
    /* 004be326: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004be327: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004be32d: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4be332u); f_0047e390();
    /* 004be332: mov ecx, eax */ r_ecx = r_eax;
    /* 004be334: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x4be339u); f_004c6cb0();
    /* 004be339: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004be33b: je 0x4be435 */ if (fZ) goto L_004be435;
L_004be341:; BB(0x004be341);
    /* 004be341: movsx ecx, word ptr [0x791ea8] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x791ea8u));
    /* 004be348: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004be349: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004be34f: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4be354u); f_0047e390();
    /* 004be354: mov ecx, eax */ r_ecx = r_eax;
    /* 004be356: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x4be35bu); f_004c7010();
    /* 004be35b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004be35e: jne 0x4be435 */ if (!fZ) goto L_004be435;
L_004be364:; BB(0x004be364);
    /* 004be364: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004be36a: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x4be36fu); f_0047e190();
    /* 004be36f: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004be372: jne 0x4be3a2 */ if (!fZ) goto L_004be3a2;
L_004be374:; BB(0x004be374);
    /* 004be374: mov dx, word ptr [0x791e50] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x791e50u))) & 0xffffu);
    /* 004be37b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004be37c: mov ax, word ptr [0x791ea8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x791ea8u))) & 0xffffu);
    /* 004be382: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004be383: movsx ecx, word ptr [0x791eac] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x791eacu));
    /* 004be38a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004be38b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004be391: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4be396u); f_0047e390();
    /* 004be396: mov ecx, eax */ r_ecx = r_eax;
    /* 004be398: call 0x4cee10 */ r_esp -= 4; W32(r_esp, 0x4be39du); f_004cee10();
    /* 004be39d: jmp 0x4be435 */ goto L_004be435;
L_004be3a2:; BB(0x004be3a2);
    /* 004be3a2: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004be3a8: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x4be3adu); f_0047e190();
    /* 004be3ad: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004be3b0: jne 0x4be3ec */ if (!fZ) goto L_004be3ec;
L_004be3b2:; BB(0x004be3b2);
    /* 004be3b2: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004be3b8: call 0x47e280 */ r_esp -= 4; W32(r_esp, 0x4be3bdu); f_0047e280();
    /* 004be3bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004be3bf: jne 0x4be3ec */ if (!fZ) goto L_004be3ec;
L_004be3c1:; BB(0x004be3c1);
    /* 004be3c1: mov dx, word ptr [0x791e50] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x791e50u))) & 0xffffu);
    /* 004be3c8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004be3c9: mov ax, word ptr [0x791ea8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x791ea8u))) & 0xffffu);
    /* 004be3cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004be3d0: movsx ecx, word ptr [0x791eac] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x791eacu));
    /* 004be3d7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004be3d8: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004be3de: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4be3e3u); f_0047e390();
    /* 004be3e3: mov ecx, eax */ r_ecx = r_eax;
    /* 004be3e5: call 0x4d1620 */ r_esp -= 4; W32(r_esp, 0x4be3eau); f_004d1620();
    /* 004be3ea: jmp 0x4be435 */ goto L_004be435;
L_004be3ec:; BB(0x004be3ec);
    /* 004be3ec: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004be3f2: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x4be3f7u); f_0047e190();
    /* 004be3f7: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004be3fa: jne 0x4be435 */ if (!fZ) goto L_004be435;
L_004be3fc:; BB(0x004be3fc);
    /* 004be3fc: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004be402: call 0x47e280 */ r_esp -= 4; W32(r_esp, 0x4be407u); f_0047e280();
    /* 004be407: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004be40a: jne 0x4be435 */ if (!fZ) goto L_004be435;
L_004be40c:; BB(0x004be40c);
    /* 004be40c: mov dx, word ptr [0x791e50] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x791e50u))) & 0xffffu);
    /* 004be413: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004be414: mov ax, word ptr [0x791ea8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x791ea8u))) & 0xffffu);
    /* 004be41a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004be41b: movsx ecx, word ptr [0x791eac] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x791eacu));
    /* 004be422: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004be423: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004be429: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4be42eu); f_0047e390();
    /* 004be42e: mov ecx, eax */ r_ecx = r_eax;
    /* 004be430: call 0x4d4250 */ r_esp -= 4; W32(r_esp, 0x4be435u); f_004d4250();
L_004be435:; BB(0x004be435);
    /* 004be435: jmp 0x4be2f3 */ goto L_004be2f3;
L_004be43a:; BB(0x004be43a);
    /* 004be43a: jmp 0x4be2bc */ goto L_004be2bc;
L_004be43f:; BB(0x004be43f);
    /* 004be43f: cmp dword ptr [0x791e74], 3 */ {  u32 a = R32((u32)(0x791e74u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004be446: jge 0x4be45f */ if ((fS==fO)) goto L_004be45f;
L_004be448:; BB(0x004be448);
    /* 004be448: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 004be44a: mov edx, dword ptr [ebp - 0x858] */ r_edx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004be450: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004be452: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004be458: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004be45b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4be45du); call_ind(t); }
    /* 004be45d: jmp 0x4be474 */ goto L_004be474;
L_004be45f:; BB(0x004be45f);
    /* 004be45f: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004be461: mov eax, dword ptr [ebp - 0x858] */ r_eax = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004be467: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004be469: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004be46f: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004be472: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4be474u); call_ind(t); }
L_004be474:; BB(0x004be474);
    /* 004be474: jmp 0x4c353d */ goto L_004c353d;
L_004be479:; BB(0x004be479);
    /* 004be479: mov dword ptr [0x791e98], 0 */ W32((u32)(0x791e98u), 0x0u);
    /* 004be483: jmp 0x4be494 */ goto L_004be494;
L_004be485:; BB(0x004be485);
    /* 004be485: mov ecx, dword ptr [0x791e98] */ r_ecx = R32((u32)(0x791e98u));
    /* 004be48b: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004be48e: mov dword ptr [0x791e98], ecx */ W32((u32)(0x791e98u), r_ecx);
L_004be494:; BB(0x004be494);
    /* 004be494: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004be49a: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4be49fu); f_0047f950();
    /* 004be49f: cmp dword ptr [0x791e98], eax */ {  u32 a = R32((u32)(0x791e98u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004be4a5: jge 0x4be4c2 */ if ((fS==fO)) goto L_004be4c2;
L_004be4a7:; BB(0x004be4a7);
    /* 004be4a7: mov edx, dword ptr [0x791e98] */ r_edx = R32((u32)(0x791e98u));
    /* 004be4ad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004be4ae: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004be4b4: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4be4b9u); f_0047e390();
    /* 004be4b9: mov ecx, eax */ r_ecx = r_eax;
    /* 004be4bb: call 0x4dc490 */ r_esp -= 4; W32(r_esp, 0x4be4c0u); f_004dc490();
    /* 004be4c0: jmp 0x4be485 */ goto L_004be485;
L_004be4c2:; BB(0x004be4c2);
    /* 004be4c2: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004be4c8: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x4be4cdu); f_0047e190();
    /* 004be4cd: sub eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004be4d0: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 004be4d2: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004be4d4: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004be4d7: sub eax, dword ptr [0x791e74] */ {  u32 a = r_eax; u32 b = R32((u32)(0x791e74u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004be4dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004be4de: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004be4e3: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 004be4e6: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 004be4e9: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x4be4eeu); f_0060ca40();
    /* 004be4ee: mov ecx, eax */ r_ecx = r_eax;
    /* 004be4f0: call 0x463d40 */ r_esp -= 4; W32(r_esp, 0x4be4f5u); f_00463d40();
    /* 004be4f5: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004be4fb: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x4be500u); f_0047e190();
    /* 004be500: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004be503: jne 0x4be669 */ if (!fZ) goto L_004be669;
L_004be509:; BB(0x004be509);
    /* 004be509: mov edx, dword ptr [0x791e74] */ r_edx = R32((u32)(0x791e74u));
    /* 004be50f: mov dword ptr [ebp - 0x8a0], edx */ W32((u32)(r_ebp+0xfffff760u), r_edx);
    /* 004be515: cmp dword ptr [ebp - 0x8a0], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffff760u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004be51c: ja 0x4be664 */ if ((!fC&&!fZ)) goto L_004be664;
L_004be522:; BB(0x004be522);
    /* 004be522: mov eax, dword ptr [ebp - 0x8a0] */ r_eax = R32((u32)(r_ebp+0xfffff760u));
    /* 004be528: jmp dword ptr [eax*4 + 0x4c37cc] */ { u32 t = R32((u32)(r_eax*4+0x4c37ccu)); switch (t) { case 0x4be52fu: goto L_004be52f; case 0x4be56fu: goto L_004be56f; case 0x4be5afu: goto L_004be5af; case 0x4be5ecu: goto L_004be5ec; case 0x4be629u: goto L_004be629; case 0x4be6a2u: goto L_004be6a2; case 0x4be6e1u: goto L_004be6e1; case 0x4be71eu: goto L_004be71e; case 0x4be75bu: goto L_004be75b; default: UNSUP(0x004be528, "jump table entry is not a known target"); } }
L_004be52f:; BB(0x004be52f);
    /* 004be52f: mov ecx, 4 */ r_ecx = 0x4u;
    /* 004be534: sub ecx, dword ptr [0x791e74] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x791e74u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004be53a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004be53b: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004be541: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 004be544: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004be547: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x4be54cu); f_0060ca40();
    /* 004be54c: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004be54f: mov dword ptr [ebp - 0x8a4], ecx */ W32((u32)(r_ebp+0xfffff75cu), r_ecx);
    /* 004be555: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 004be557: mov edx, dword ptr [ebp - 0x8a4] */ r_edx = R32((u32)(r_ebp+0xfffff75cu));
    /* 004be55d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004be55f: mov ecx, dword ptr [ebp - 0x8a4] */ r_ecx = R32((u32)(r_ebp+0xfffff75cu));
    /* 004be565: mov edx, dword ptr [eax + 0x6c] */ r_edx = R32((u32)(r_eax+0x6cu));
    /* 004be568: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4be56au); call_ind(t); }
    /* 004be56a: jmp 0x4be664 */ goto L_004be664;
L_004be56f:; BB(0x004be56f);
    /* 004be56f: mov eax, 4 */ r_eax = 0x4u;
    /* 004be574: sub eax, dword ptr [0x791e74] */ {  u32 a = r_eax; u32 b = R32((u32)(0x791e74u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004be57a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004be57b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004be581: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 004be584: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 004be587: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x4be58cu); f_0060ca40();
    /* 004be58c: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 004be58f: mov dword ptr [ebp - 0x8a8], eax */ W32((u32)(r_ebp+0xfffff758u), r_eax);
    /* 004be595: push 0x65 */ { u32 v = 0x65u; r_esp -= 4; W32(r_esp, v); }
    /* 004be597: mov ecx, dword ptr [ebp - 0x8a8] */ r_ecx = R32((u32)(r_ebp+0xfffff758u));
    /* 004be59d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004be59f: mov ecx, dword ptr [ebp - 0x8a8] */ r_ecx = R32((u32)(r_ebp+0xfffff758u));
    /* 004be5a5: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 004be5a8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4be5aau); call_ind(t); }
    /* 004be5aa: jmp 0x4be664 */ goto L_004be664;
L_004be5af:; BB(0x004be5af);
    /* 004be5af: mov ecx, 4 */ r_ecx = 0x4u;
    /* 004be5b4: sub ecx, dword ptr [0x791e74] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x791e74u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004be5ba: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004be5bb: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004be5c1: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 004be5c4: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004be5c7: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x4be5ccu); f_0060ca40();
    /* 004be5cc: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004be5cf: mov dword ptr [ebp - 0x8ac], ecx */ W32((u32)(r_ebp+0xfffff754u), r_ecx);
    /* 004be5d5: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 004be5d7: mov edx, dword ptr [ebp - 0x8ac] */ r_edx = R32((u32)(r_ebp+0xfffff754u));
    /* 004be5dd: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004be5df: mov ecx, dword ptr [ebp - 0x8ac] */ r_ecx = R32((u32)(r_ebp+0xfffff754u));
    /* 004be5e5: mov edx, dword ptr [eax + 0x6c] */ r_edx = R32((u32)(r_eax+0x6cu));
    /* 004be5e8: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4be5eau); call_ind(t); }
    /* 004be5ea: jmp 0x4be664 */ goto L_004be664;
L_004be5ec:; BB(0x004be5ec);
    /* 004be5ec: mov eax, 4 */ r_eax = 0x4u;
    /* 004be5f1: sub eax, dword ptr [0x791e74] */ {  u32 a = r_eax; u32 b = R32((u32)(0x791e74u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004be5f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004be5f8: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004be5fe: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 004be601: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 004be604: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x4be609u); f_0060ca40();
    /* 004be609: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 004be60c: mov dword ptr [ebp - 0x8b0], eax */ W32((u32)(r_ebp+0xfffff750u), r_eax);
    /* 004be612: push 0x67 */ { u32 v = 0x67u; r_esp -= 4; W32(r_esp, v); }
    /* 004be614: mov ecx, dword ptr [ebp - 0x8b0] */ r_ecx = R32((u32)(r_ebp+0xfffff750u));
    /* 004be61a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004be61c: mov ecx, dword ptr [ebp - 0x8b0] */ r_ecx = R32((u32)(r_ebp+0xfffff750u));
    /* 004be622: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 004be625: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4be627u); call_ind(t); }
    /* 004be627: jmp 0x4be664 */ goto L_004be664;
L_004be629:; BB(0x004be629);
    /* 004be629: mov ecx, 4 */ r_ecx = 0x4u;
    /* 004be62e: sub ecx, dword ptr [0x791e74] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x791e74u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004be634: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004be635: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004be63b: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 004be63e: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004be641: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x4be646u); f_0060ca40();
    /* 004be646: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004be649: mov dword ptr [ebp - 0x8b4], ecx */ W32((u32)(r_ebp+0xfffff74cu), r_ecx);
    /* 004be64f: push 0x66 */ { u32 v = 0x66u; r_esp -= 4; W32(r_esp, v); }
    /* 004be651: mov edx, dword ptr [ebp - 0x8b4] */ r_edx = R32((u32)(r_ebp+0xfffff74cu));
    /* 004be657: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004be659: mov ecx, dword ptr [ebp - 0x8b4] */ r_ecx = R32((u32)(r_ebp+0xfffff74cu));
    /* 004be65f: mov edx, dword ptr [eax + 0x6c] */ r_edx = R32((u32)(r_eax+0x6cu));
    /* 004be662: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4be664u); call_ind(t); }
L_004be664:; BB(0x004be664);
    /* 004be664: jmp 0x4be7b3 */ goto L_004be7b3;
L_004be669:; BB(0x004be669);
    /* 004be669: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004be66f: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x4be674u); f_0047e190();
    /* 004be674: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004be677: jne 0x4be798 */ if (!fZ) goto L_004be798;
L_004be67d:; BB(0x004be67d);
    /* 004be67d: mov eax, dword ptr [0x791e74] */ r_eax = R32((u32)(0x791e74u));
    /* 004be682: mov dword ptr [ebp - 0x8b8], eax */ W32((u32)(r_ebp+0xfffff748u), r_eax);
    /* 004be688: cmp dword ptr [ebp - 0x8b8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffff748u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004be68f: ja 0x4be796 */ if ((!fC&&!fZ)) goto L_004be796;
L_004be695:; BB(0x004be695);
    /* 004be695: mov ecx, dword ptr [ebp - 0x8b8] */ r_ecx = R32((u32)(r_ebp+0xfffff748u));
    /* 004be69b: jmp dword ptr [ecx*4 + 0x4c37e0] */ { u32 t = R32((u32)(r_ecx*4+0x4c37e0u)); switch (t) { case 0x4be629u: goto L_004be629; case 0x4be5ecu: goto L_004be5ec; case 0x4be5afu: goto L_004be5af; case 0x4be56fu: goto L_004be56f; case 0x4be52fu: goto L_004be52f; case 0x4be6a2u: goto L_004be6a2; case 0x4be6e1u: goto L_004be6e1; case 0x4be71eu: goto L_004be71e; case 0x4be75bu: goto L_004be75b; default: UNSUP(0x004be69b, "jump table entry is not a known target"); } }
L_004be6a2:; BB(0x004be6a2);
    /* 004be6a2: mov edx, 3 */ r_edx = 0x3u;
    /* 004be6a7: sub edx, dword ptr [0x791e74] */ {  u32 a = r_edx; u32 b = R32((u32)(0x791e74u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004be6ad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004be6ae: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004be6b3: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 004be6b6: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 004be6b9: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x4be6beu); f_0060ca40();
    /* 004be6be: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 004be6c1: mov dword ptr [ebp - 0x8bc], edx */ W32((u32)(r_ebp+0xfffff744u), r_edx);
    /* 004be6c7: push 0x5f */ { u32 v = 0x5fu; r_esp -= 4; W32(r_esp, v); }
    /* 004be6c9: mov eax, dword ptr [ebp - 0x8bc] */ r_eax = R32((u32)(r_ebp+0xfffff744u));
    /* 004be6cf: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004be6d1: mov ecx, dword ptr [ebp - 0x8bc] */ r_ecx = R32((u32)(r_ebp+0xfffff744u));
    /* 004be6d7: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 004be6da: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4be6dcu); call_ind(t); }
    /* 004be6dc: jmp 0x4be796 */ goto L_004be796;
L_004be6e1:; BB(0x004be6e1);
    /* 004be6e1: mov ecx, 3 */ r_ecx = 0x3u;
    /* 004be6e6: sub ecx, dword ptr [0x791e74] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x791e74u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004be6ec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004be6ed: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004be6f3: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 004be6f6: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004be6f9: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x4be6feu); f_0060ca40();
    /* 004be6fe: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004be701: mov dword ptr [ebp - 0x8c0], ecx */ W32((u32)(r_ebp+0xfffff740u), r_ecx);
    /* 004be707: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 004be709: mov edx, dword ptr [ebp - 0x8c0] */ r_edx = R32((u32)(r_ebp+0xfffff740u));
    /* 004be70f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004be711: mov ecx, dword ptr [ebp - 0x8c0] */ r_ecx = R32((u32)(r_ebp+0xfffff740u));
    /* 004be717: mov edx, dword ptr [eax + 0x6c] */ r_edx = R32((u32)(r_eax+0x6cu));
    /* 004be71a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4be71cu); call_ind(t); }
    /* 004be71c: jmp 0x4be796 */ goto L_004be796;
L_004be71e:; BB(0x004be71e);
    /* 004be71e: mov eax, 3 */ r_eax = 0x3u;
    /* 004be723: sub eax, dword ptr [0x791e74] */ {  u32 a = r_eax; u32 b = R32((u32)(0x791e74u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004be729: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004be72a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004be730: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 004be733: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 004be736: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x4be73bu); f_0060ca40();
    /* 004be73b: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 004be73e: mov dword ptr [ebp - 0x8c4], eax */ W32((u32)(r_ebp+0xfffff73cu), r_eax);
    /* 004be744: push 0x61 */ { u32 v = 0x61u; r_esp -= 4; W32(r_esp, v); }
    /* 004be746: mov ecx, dword ptr [ebp - 0x8c4] */ r_ecx = R32((u32)(r_ebp+0xfffff73cu));
    /* 004be74c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004be74e: mov ecx, dword ptr [ebp - 0x8c4] */ r_ecx = R32((u32)(r_ebp+0xfffff73cu));
    /* 004be754: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 004be757: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4be759u); call_ind(t); }
    /* 004be759: jmp 0x4be796 */ goto L_004be796;
L_004be75b:; BB(0x004be75b);
    /* 004be75b: mov ecx, 3 */ r_ecx = 0x3u;
    /* 004be760: sub ecx, dword ptr [0x791e74] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x791e74u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004be766: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004be767: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004be76d: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 004be770: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004be773: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x4be778u); f_0060ca40();
    /* 004be778: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004be77b: mov dword ptr [ebp - 0x8c8], ecx */ W32((u32)(r_ebp+0xfffff738u), r_ecx);
    /* 004be781: push 0x62 */ { u32 v = 0x62u; r_esp -= 4; W32(r_esp, v); }
    /* 004be783: mov edx, dword ptr [ebp - 0x8c8] */ r_edx = R32((u32)(r_ebp+0xfffff738u));
    /* 004be789: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004be78b: mov ecx, dword ptr [ebp - 0x8c8] */ r_ecx = R32((u32)(r_ebp+0xfffff738u));
    /* 004be791: mov edx, dword ptr [eax + 0x6c] */ r_edx = R32((u32)(r_eax+0x6cu));
    /* 004be794: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4be796u); call_ind(t); }
L_004be796:; BB(0x004be796);
    /* 004be796: jmp 0x4be7b3 */ goto L_004be7b3;
L_004be798:; BB(0x004be798);
    /* 004be798: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 004be79a: jne 0x4be7b3 */ if (!fZ) goto L_004be7b3;
L_004be79c:; BB(0x004be79c);
    /* 004be79c: push 0x8d0 */ { u32 v = 0x8d0u; r_esp -= 4; W32(r_esp, v); }
    /* 004be7a1: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004be7a6: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 004be7ab: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4be7b0u); f_005e9f20();
    /* 004be7b0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004be7b3:; BB(0x004be7b3);
    /* 004be7b3: mov edx, dword ptr [0x791e74] */ r_edx = R32((u32)(0x791e74u));
    /* 004be7b9: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004be7bc: mov dword ptr [0x791e74], edx */ W32((u32)(0x791e74u), r_edx);
    /* 004be7c2: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004be7c4: mov eax, dword ptr [ebp - 0x858] */ r_eax = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004be7ca: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004be7cc: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004be7d2: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004be7d5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4be7d7u); call_ind(t); }
    /* 004be7d7: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004be7d9: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004be7df: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004be7e1: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004be7e7: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004be7ea: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4be7ecu); call_ind(t); }
    /* 004be7ec: jmp 0x4c353d */ goto L_004c353d;
L_004be7f1:; BB(0x004be7f1);
    /* 004be7f1: mov dword ptr [0x791e98], 0 */ W32((u32)(0x791e98u), 0x0u);
    /* 004be7fb: jmp 0x4be80c */ goto L_004be80c;
L_004be7fd:; BB(0x004be7fd);
    /* 004be7fd: mov ecx, dword ptr [0x791e98] */ r_ecx = R32((u32)(0x791e98u));
    /* 004be803: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004be806: mov dword ptr [0x791e98], ecx */ W32((u32)(0x791e98u), r_ecx);
L_004be80c:; BB(0x004be80c);
    /* 004be80c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004be812: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4be817u); f_0047f950();
    /* 004be817: cmp dword ptr [0x791e98], eax */ {  u32 a = R32((u32)(0x791e98u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004be81d: jge 0x4be83a */ if ((fS==fO)) goto L_004be83a;
L_004be81f:; BB(0x004be81f);
    /* 004be81f: mov edx, dword ptr [0x791e98] */ r_edx = R32((u32)(0x791e98u));
    /* 004be825: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004be826: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004be82c: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4be831u); f_0047e390();
    /* 004be831: mov ecx, eax */ r_ecx = r_eax;
    /* 004be833: call 0x4dc490 */ r_esp -= 4; W32(r_esp, 0x4be838u); f_004dc490();
    /* 004be838: jmp 0x4be7fd */ goto L_004be7fd;
L_004be83a:; BB(0x004be83a);
    /* 004be83a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004be840: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004be843: call 0x4f6c80 */ r_esp -= 4; W32(r_esp, 0x4be848u); f_004f6c80();
    /* 004be848: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004be84b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004be84d: je 0x4be866 */ if (fZ) goto L_004be866;
L_004be84f:; BB(0x004be84f);
    /* 004be84f: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 004be851: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004be857: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004be859: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004be85f: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004be862: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4be864u); call_ind(t); }
    /* 004be864: jmp 0x4be87b */ goto L_004be87b;
L_004be866:; BB(0x004be866);
    /* 004be866: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 004be868: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004be86e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004be870: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004be876: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004be879: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4be87bu); call_ind(t); }
L_004be87b:; BB(0x004be87b);
    /* 004be87b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004be87d: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004be883: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004be885: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004be88b: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004be88e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4be890u); call_ind(t); }
    /* 004be890: jmp 0x4c353d */ goto L_004c353d;
L_004be895:; BB(0x004be895);
    /* 004be895: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004be89b: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004be89e: call 0x4f6e70 */ r_esp -= 4; W32(r_esp, 0x4be8a3u); f_004f6e70();
    /* 004be8a3: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 004be8a6: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004be8a9: jne 0x4be8da */ if (!fZ) goto L_004be8da;
L_004be8ab:; BB(0x004be8ab);
    /* 004be8ab: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 004be8ad: mov edx, dword ptr [ebp - 0x858] */ r_edx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004be8b3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004be8b5: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004be8bb: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004be8be: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4be8c0u); call_ind(t); }
    /* 004be8c0: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004be8c2: mov eax, dword ptr [ebp - 0x858] */ r_eax = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004be8c8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004be8ca: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004be8d0: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004be8d3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4be8d5u); call_ind(t); }
    /* 004be8d5: jmp 0x4c353d */ goto L_004c353d;
L_004be8da:; BB(0x004be8da);
    /* 004be8da: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004be8e0: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004be8e3: call 0x4f6e70 */ r_esp -= 4; W32(r_esp, 0x4be8e8u); f_004f6e70();
    /* 004be8e8: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 004be8eb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004be8ec: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004be8f2: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4be8f7u); f_0047e3d0();
    /* 004be8f7: mov ecx, eax */ r_ecx = r_eax;
    /* 004be8f9: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x4be8feu); f_004c7010();
    /* 004be8fe: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004be901: jne 0x4be91a */ if (!fZ) goto L_004be91a;
L_004be903:; BB(0x004be903);
    /* 004be903: push 0x8ea */ { u32 v = 0x8eau; r_esp -= 4; W32(r_esp, v); }
    /* 004be908: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004be90d: push 0x6bc378 */ { u32 v = 0x6bc378u; r_esp -= 4; W32(r_esp, v); }
    /* 004be912: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4be917u); f_005e9f20();
    /* 004be917: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004be91a:; BB(0x004be91a);
    /* 004be91a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004be920: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004be923: call 0x4f6e70 */ r_esp -= 4; W32(r_esp, 0x4be928u); f_004f6e70();
    /* 004be928: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 004be92b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004be92c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004be932: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4be937u); f_0047e3d0();
    /* 004be937: mov ecx, eax */ r_ecx = r_eax;
    /* 004be939: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x4be93eu); f_004c7010();
    /* 004be93e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004be940: jne 0x4be959 */ if (!fZ) goto L_004be959;
L_004be942:; BB(0x004be942);
    /* 004be942: push 0x8eb */ { u32 v = 0x8ebu; r_esp -= 4; W32(r_esp, v); }
    /* 004be947: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004be94c: push 0x6bc308 */ { u32 v = 0x6bc308u; r_esp -= 4; W32(r_esp, v); }
    /* 004be951: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4be956u); f_005e9f20();
    /* 004be956: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004be959:; BB(0x004be959);
    /* 004be959: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004be95f: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004be962: call 0x4f6e70 */ r_esp -= 4; W32(r_esp, 0x4be967u); f_004f6e70();
    /* 004be967: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 004be96a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004be96b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004be971: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4be976u); f_0047e3d0();
    /* 004be976: mov ecx, eax */ r_ecx = r_eax;
    /* 004be978: call 0x4c76c0 */ r_esp -= 4; W32(r_esp, 0x4be97du); f_004c76c0();
    /* 004be97d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004be983: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x4be988u); f_0047e190();
    /* 004be988: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004be98b: jne 0x4bebc5 */ if (!fZ) goto L_004bebc5;
L_004be991:; BB(0x004be991);
    /* 004be991: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004be997: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004be99a: call 0x4f6e70 */ r_esp -= 4; W32(r_esp, 0x4be99fu); f_004f6e70();
    /* 004be99f: mov word ptr [ebp - 0x508], ax */ W16((u32)(r_ebp+0xfffffaf8u), (u16)r_eax);
    /* 004be9a6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004be9ac: call 0x47e280 */ r_esp -= 4; W32(r_esp, 0x4be9b1u); f_0047e280();
    /* 004be9b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004be9b3: je 0x4be9cc */ if (fZ) goto L_004be9cc;
L_004be9b5:; BB(0x004be9b5);
    /* 004be9b5: push 0x8f0 */ { u32 v = 0x8f0u; r_esp -= 4; W32(r_esp, v); }
    /* 004be9ba: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004be9bf: push 0x6bf2b4 */ { u32 v = 0x6bf2b4u; r_esp -= 4; W32(r_esp, v); }
    /* 004be9c4: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4be9c9u); f_005e9f20();
    /* 004be9c9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004be9cc:; BB(0x004be9cc);
    /* 004be9cc: lea ecx, [ebp - 0x504] */ r_ecx = (u32)(r_ebp+0xfffffafcu);
    /* 004be9d2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004be9d3: movsx edx, word ptr [ebp - 0x508] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffaf8u));
    /* 004be9da: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004be9db: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004be9e1: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4be9e6u); f_0047e3d0();
    /* 004be9e6: mov ecx, eax */ r_ecx = r_eax;
    /* 004be9e8: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x4be9edu); f_004c7c40();
    /* 004be9ed: mov dword ptr [ebp - 4], 0x1e */ W32((u32)(r_ebp+0xfffffffcu), 0x1eu);
    /* 004be9f4: movsx eax, word ptr [ebp - 0x508] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffaf8u));
    /* 004be9fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004be9fc: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bea02: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x4bea07u); f_0047e490();
    /* 004bea07: movsx ecx, word ptr [eax*2 + 0x791d80] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax*2+0x791d80u));
    /* 004bea0f: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bea12: jne 0x4bea3d */ if (!fZ) goto L_004bea3d;
L_004bea14:; BB(0x004bea14);
    /* 004bea14: lea ecx, [ebp - 0x504] */ r_ecx = (u32)(r_ebp+0xfffffafcu);
    /* 004bea1a: call 0x48dc80 */ r_esp -= 4; W32(r_esp, 0x4bea1fu); f_0048dc80();
    /* 004bea1f: mov si, ax */ r_esi = (r_esi & 0xffff0000u) | (((u16)r_eax) & 0xffffu);
    /* 004bea22: movsx edx, word ptr [ebp - 0x508] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffaf8u));
    /* 004bea29: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bea2a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bea30: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x4bea35u); f_0047e490();
    /* 004bea35: mov word ptr [eax*2 + 0x7919c8], si */ W16((u32)(r_eax*2+0x7919c8u), (u16)r_esi);
L_004bea3d:; BB(0x004bea3d);
    /* 004bea3d: mov word ptr [0x791e94], 0 */ W16((u32)(0x791e94u), 0x0u);
    /* 004bea46: jmp 0x4bea58 */ goto L_004bea58;
L_004bea48:; BB(0x004bea48);
    /* 004bea48: mov ax, word ptr [0x791e94] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x791e94u))) & 0xffffu);
    /* 004bea4e: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004bea52: mov word ptr [0x791e94], ax */ W16((u32)(0x791e94u), (u16)r_eax);
L_004bea58:; BB(0x004bea58);
    /* 004bea58: movsx esi, word ptr [0x791e94] */ r_esi = (u32)(i32)(i16)R16((u32)(0x791e94u));
    /* 004bea5f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bea65: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4bea6au); f_0047f950();
    /* 004bea6a: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004bea6c: jge 0x4beae3 */ if ((fS==fO)) goto L_004beae3;
L_004bea6e:; BB(0x004bea6e);
    /* 004bea6e: movsx ecx, word ptr [0x791e94] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x791e94u));
    /* 004bea75: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bea76: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bea7c: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4bea81u); f_0047e390();
    /* 004bea81: mov ecx, eax */ r_ecx = r_eax;
    /* 004bea83: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x4bea88u); f_004c6cb0();
    /* 004bea88: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bea8a: je 0x4beade */ if (fZ) goto L_004beade;
L_004bea8c:; BB(0x004bea8c);
    /* 004bea8c: mov dx, word ptr [0x791e50] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x791e50u))) & 0xffffu);
    /* 004bea93: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bea94: movsx eax, word ptr [ebp - 0x508] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffaf8u));
    /* 004bea9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bea9c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004beaa2: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x4beaa7u); f_0047e490();
    /* 004beaa7: mov cx, word ptr [eax*2 + 0x7919c8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax*2+0x7919c8u))) & 0xffffu);
    /* 004beaaf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004beab0: movsx edx, word ptr [ebp - 0x508] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffaf8u));
    /* 004beab7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004beab8: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004beabe: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x4beac3u); f_0047e490();
    /* 004beac3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004beac4: movsx eax, word ptr [0x791e94] */ r_eax = (u32)(i32)(i16)R16((u32)(0x791e94u));
    /* 004beacb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004beacc: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bead2: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4bead7u); f_0047e390();
    /* 004bead7: mov ecx, eax */ r_ecx = r_eax;
    /* 004bead9: call 0x4cf3a0 */ r_esp -= 4; W32(r_esp, 0x4beadeu); f_004cf3a0();
L_004beade:; BB(0x004beade);
    /* 004beade: jmp 0x4bea48 */ goto L_004bea48;
L_004beae3:; BB(0x004beae3);
    /* 004beae3: lea ecx, [ebp - 0x69c] */ r_ecx = (u32)(r_ebp+0xfffff964u);
    /* 004beae9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004beaea: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004beaf0: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 004beaf3: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x4beaf8u); f_004c7c40();
    /* 004beaf8: mov dword ptr [ebp - 0x8cc], eax */ W32((u32)(r_ebp+0xfffff734u), r_eax);
    /* 004beafe: mov eax, dword ptr [ebp - 0x8cc] */ r_eax = R32((u32)(r_ebp+0xfffff734u));
    /* 004beb04: mov dword ptr [ebp - 0x8d0], eax */ W32((u32)(r_ebp+0xfffff730u), r_eax);
    /* 004beb0a: mov byte ptr [ebp - 4], 0x1f */ W8((u32)(r_ebp+0xfffffffcu), 0x1fu);
    /* 004beb0e: mov ecx, dword ptr [ebp - 0x8d0] */ r_ecx = R32((u32)(r_ebp+0xfffff730u));
    /* 004beb14: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004beb15: lea ecx, [ebp - 0x504] */ r_ecx = (u32)(r_ebp+0xfffffafcu);
    /* 004beb1b: call 0x4846a0 */ r_esp -= 4; W32(r_esp, 0x4beb20u); f_004846a0();
    /* 004beb20: mov byte ptr [ebp - 4], 0x1e */ W8((u32)(r_ebp+0xfffffffcu), 0x1eu);
    /* 004beb24: lea ecx, [ebp - 0x69c] */ r_ecx = (u32)(r_ebp+0xfffff964u);
    /* 004beb2a: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x4beb2fu); f_00484470();
    /* 004beb2f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004beb31: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004beb33: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004beb35: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004beb37: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004beb39: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004beb3b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004beb3d: lea edx, [ebp - 0x4fc] */ r_edx = (u32)(r_ebp+0xfffffb04u);
    /* 004beb43: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004beb44: lea ecx, [ebp - 0x504] */ r_ecx = (u32)(r_ebp+0xfffffafcu);
    /* 004beb4a: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x4beb4fu); f_00485940();
    /* 004beb4f: mov byte ptr [ebp - 4], 0x20 */ W8((u32)(r_ebp+0xfffffffcu), 0x20u);
    /* 004beb53: lea eax, [ebp - 0x69d] */ r_eax = (u32)(r_ebp+0xfffff963u);
    /* 004beb59: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004beb5a: lea ecx, [ebp - 0x4fc] */ r_ecx = (u32)(r_ebp+0xfffffb04u);
    /* 004beb60: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x4beb65u); f_004a2160();
    /* 004beb65: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 004beb67: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004beb68: movsx edx, word ptr [ebp - 0x508] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffaf8u));
    /* 004beb6f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004beb70: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004beb76: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4beb7bu); f_0047e3d0();
    /* 004beb7b: mov ecx, eax */ r_ecx = r_eax;
    /* 004beb7d: call 0x4da4d0 */ r_esp -= 4; W32(r_esp, 0x4beb82u); f_004da4d0();
    /* 004beb82: mov eax, dword ptr [ebp - 0x4fc] */ r_eax = R32((u32)(r_ebp+0xfffffb04u));
    /* 004beb88: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004beb89: mov cx, word ptr [ebp - 0x508] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffaf8u))) & 0xffffu);
    /* 004beb90: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004beb91: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004beb97: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004beb9a: call 0x4f7050 */ r_esp -= 4; W32(r_esp, 0x4beb9fu); f_004f7050();
    /* 004beb9f: mov byte ptr [ebp - 4], 0x1e */ W8((u32)(r_ebp+0xfffffffcu), 0x1eu);
    /* 004beba3: lea ecx, [ebp - 0x4fc] */ r_ecx = (u32)(r_ebp+0xfffffb04u);
    /* 004beba9: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x4bebaeu); f_004a20f0();
    /* 004bebae: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004bebb5: lea ecx, [ebp - 0x504] */ r_ecx = (u32)(r_ebp+0xfffffafcu);
    /* 004bebbb: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x4bebc0u); f_00484470();
    /* 004bebc0: jmp 0x4bfc41 */ goto L_004bfc41;
L_004bebc5:; BB(0x004bebc5);
    /* 004bebc5: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bebcb: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x4bebd0u); f_0047e190();
    /* 004bebd0: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bebd3: jne 0x4bf24d */ if (!fZ) goto L_004bf24d;
L_004bebd9:; BB(0x004bebd9);
    /* 004bebd9: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bebdf: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004bebe2: call 0x4f6e70 */ r_esp -= 4; W32(r_esp, 0x4bebe7u); f_004f6e70();
    /* 004bebe7: mov word ptr [ebp - 0x50c], ax */ W16((u32)(r_ebp+0xfffffaf4u), (u16)r_eax);
    /* 004bebee: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bebf4: call 0x47e280 */ r_esp -= 4; W32(r_esp, 0x4bebf9u); f_0047e280();
    /* 004bebf9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bebfb: jne 0x4bee41 */ if (!fZ) goto L_004bee41;
L_004bec01:; BB(0x004bec01);
    /* 004bec01: mov word ptr [0x791e94], 0 */ W16((u32)(0x791e94u), 0x0u);
    /* 004bec0a: jmp 0x4bec1e */ goto L_004bec1e;
L_004bec0c:; BB(0x004bec0c);
    /* 004bec0c: mov dx, word ptr [0x791e94] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x791e94u))) & 0xffffu);
    /* 004bec13: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004bec17: mov word ptr [0x791e94], dx */ W16((u32)(0x791e94u), (u16)r_edx);
L_004bec1e:; BB(0x004bec1e);
    /* 004bec1e: movsx esi, word ptr [0x791e94] */ r_esi = (u32)(i32)(i16)R16((u32)(0x791e94u));
    /* 004bec25: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bec2b: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4bec30u); f_0047f950();
    /* 004bec30: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004bec32: jge 0x4bec8a */ if ((fS==fO)) goto L_004bec8a;
L_004bec34:; BB(0x004bec34);
    /* 004bec34: movsx eax, word ptr [0x791e94] */ r_eax = (u32)(i32)(i16)R16((u32)(0x791e94u));
    /* 004bec3b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bec3c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bec42: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4bec47u); f_0047e390();
    /* 004bec47: mov ecx, eax */ r_ecx = r_eax;
    /* 004bec49: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x4bec4eu); f_004c6cb0();
    /* 004bec4e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bec50: je 0x4bec88 */ if (fZ) goto L_004bec88;
L_004bec52:; BB(0x004bec52);
    /* 004bec52: mov cx, word ptr [0x791e50] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x791e50u))) & 0xffffu);
    /* 004bec59: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bec5a: movsx edx, word ptr [ebp - 0x50c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffaf4u));
    /* 004bec61: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bec62: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bec68: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x4bec6du); f_0047e490();
    /* 004bec6d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bec6e: movsx eax, word ptr [0x791e94] */ r_eax = (u32)(i32)(i16)R16((u32)(0x791e94u));
    /* 004bec75: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bec76: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bec7c: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4bec81u); f_0047e390();
    /* 004bec81: mov ecx, eax */ r_ecx = r_eax;
    /* 004bec83: call 0x4d1be0 */ r_esp -= 4; W32(r_esp, 0x4bec88u); f_004d1be0();
L_004bec88:; BB(0x004bec88);
    /* 004bec88: jmp 0x4bec0c */ goto L_004bec0c;
L_004bec8a:; BB(0x004bec8a);
    /* 004bec8a: lea ecx, [ebp - 0x518] */ r_ecx = (u32)(r_ebp+0xfffffae8u);
    /* 004bec90: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bec91: movsx edx, word ptr [ebp - 0x50c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffaf4u));
    /* 004bec98: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bec99: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bec9f: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4beca4u); f_0047e3d0();
    /* 004beca4: mov ecx, eax */ r_ecx = r_eax;
    /* 004beca6: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x4becabu); f_004c7c40();
    /* 004becab: mov dword ptr [ebp - 4], 0x21 */ W32((u32)(r_ebp+0xfffffffcu), 0x21u);
    /* 004becb2: lea eax, [ebp - 0x6a8] */ r_eax = (u32)(r_ebp+0xfffff958u);
    /* 004becb8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004becb9: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004becbf: mov ecx, dword ptr [ecx + 0x24] */ r_ecx = R32((u32)(r_ecx+0x24u));
    /* 004becc2: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x4becc7u); f_004c7c40();
    /* 004becc7: mov dword ptr [ebp - 0x8d4], eax */ W32((u32)(r_ebp+0xfffff72cu), r_eax);
    /* 004beccd: mov edx, dword ptr [ebp - 0x8d4] */ r_edx = R32((u32)(r_ebp+0xfffff72cu));
    /* 004becd3: mov dword ptr [ebp - 0x8d8], edx */ W32((u32)(r_ebp+0xfffff728u), r_edx);
    /* 004becd9: mov byte ptr [ebp - 4], 0x22 */ W8((u32)(r_ebp+0xfffffffcu), 0x22u);
    /* 004becdd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004becdf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bece1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bece3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bece5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bece7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bece9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004beceb: mov eax, dword ptr [ebp - 0x8d8] */ r_eax = R32((u32)(r_ebp+0xfffff728u));
    /* 004becf1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004becf2: lea ecx, [ebp - 0x520] */ r_ecx = (u32)(r_ebp+0xfffffae0u);
    /* 004becf8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004becf9: lea ecx, [ebp - 0x518] */ r_ecx = (u32)(r_ebp+0xfffffae8u);
    /* 004becff: call 0x48c7b0 */ r_esp -= 4; W32(r_esp, 0x4bed04u); f_0048c7b0();
    /* 004bed04: mov byte ptr [ebp - 4], 0x24 */ W8((u32)(r_ebp+0xfffffffcu), 0x24u);
    /* 004bed08: lea ecx, [ebp - 0x6a8] */ r_ecx = (u32)(r_ebp+0xfffff958u);
    /* 004bed0e: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x4bed13u); f_00484470();
    /* 004bed13: lea edx, [ebp - 0x6b0] */ r_edx = (u32)(r_ebp+0xfffff950u);
    /* 004bed19: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bed1a: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bed1f: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 004bed22: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x4bed27u); f_004c7c40();
    /* 004bed27: mov dword ptr [ebp - 0x8dc], eax */ W32((u32)(r_ebp+0xfffff724u), r_eax);
    /* 004bed2d: mov ecx, dword ptr [ebp - 0x8dc] */ r_ecx = R32((u32)(r_ebp+0xfffff724u));
    /* 004bed33: mov dword ptr [ebp - 0x8e0], ecx */ W32((u32)(r_ebp+0xfffff720u), r_ecx);
    /* 004bed39: mov byte ptr [ebp - 4], 0x25 */ W8((u32)(r_ebp+0xfffffffcu), 0x25u);
    /* 004bed3d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bed3f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bed41: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bed43: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bed45: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bed47: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bed49: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bed4b: mov edx, dword ptr [ebp - 0x8e0] */ r_edx = R32((u32)(r_ebp+0xfffff720u));
    /* 004bed51: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bed52: lea eax, [ebp - 0x510] */ r_eax = (u32)(r_ebp+0xfffffaf0u);
    /* 004bed58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bed59: lea ecx, [ebp - 0x518] */ r_ecx = (u32)(r_ebp+0xfffffae8u);
    /* 004bed5f: call 0x48cc10 */ r_esp -= 4; W32(r_esp, 0x4bed64u); f_0048cc10();
    /* 004bed64: mov byte ptr [ebp - 4], 0x27 */ W8((u32)(r_ebp+0xfffffffcu), 0x27u);
    /* 004bed68: lea ecx, [ebp - 0x6b0] */ r_ecx = (u32)(r_ebp+0xfffff950u);
    /* 004bed6e: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x4bed73u); f_00484470();
    /* 004bed73: lea ecx, [ebp - 0x6b1] */ r_ecx = (u32)(r_ebp+0xfffff94fu);
    /* 004bed79: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bed7a: lea ecx, [ebp - 0x510] */ r_ecx = (u32)(r_ebp+0xfffffaf0u);
    /* 004bed80: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x4bed85u); f_004a2160();
    /* 004bed85: mov dl, byte ptr [eax] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 004bed87: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bed88: movsx eax, word ptr [ebp - 0x50c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffaf4u));
    /* 004bed8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bed90: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bed96: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4bed9bu); f_0047e3d0();
    /* 004bed9b: mov ecx, eax */ r_ecx = r_eax;
    /* 004bed9d: call 0x4da4d0 */ r_esp -= 4; W32(r_esp, 0x4beda2u); f_004da4d0();
    /* 004beda2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004beda4: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004beda7: mov ecx, esp */ r_ecx = r_esp;
    /* 004beda9: mov dword ptr [ebp - 0x6b8], esp */ W32((u32)(r_ebp+0xfffff948u), r_esp);
    /* 004bedaf: lea edx, [ebp - 0x520] */ r_edx = (u32)(r_ebp+0xfffffae0u);
    /* 004bedb5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bedb6: call 0x484320 */ r_esp -= 4; W32(r_esp, 0x4bedbbu); f_00484320();
    /* 004bedbb: mov dword ptr [ebp - 0x8e4], eax */ W32((u32)(r_ebp+0xfffff71cu), r_eax);
    /* 004bedc1: mov eax, dword ptr [ebp - 0x8e4] */ r_eax = R32((u32)(r_ebp+0xfffff71cu));
    /* 004bedc7: mov dword ptr [ebp - 0x8e8], eax */ W32((u32)(r_ebp+0xfffff718u), r_eax);
    /* 004bedcd: mov byte ptr [ebp - 4], 0x28 */ W8((u32)(r_ebp+0xfffffffcu), 0x28u);
    /* 004bedd1: movsx ecx, word ptr [ebp - 0x50c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffaf4u));
    /* 004bedd8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bedd9: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004beddf: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4bede4u); f_0047e3d0();
    /* 004bede4: mov byte ptr [ebp - 4], 0x27 */ W8((u32)(r_ebp+0xfffffffcu), 0x27u);
    /* 004bede8: mov ecx, eax */ r_ecx = r_eax;
    /* 004bedea: call 0x4c88a0 */ r_esp -= 4; W32(r_esp, 0x4bedefu); f_004c88a0();
    /* 004bedef: mov edx, dword ptr [ebp - 0x510] */ r_edx = R32((u32)(r_ebp+0xfffffaf0u));
    /* 004bedf5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bedf6: mov ax, word ptr [ebp - 0x50c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffaf4u))) & 0xffffu);
    /* 004bedfd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bedfe: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bee04: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004bee07: call 0x4f7050 */ r_esp -= 4; W32(r_esp, 0x4bee0cu); f_004f7050();
    /* 004bee0c: mov byte ptr [ebp - 4], 0x24 */ W8((u32)(r_ebp+0xfffffffcu), 0x24u);
    /* 004bee10: lea ecx, [ebp - 0x510] */ r_ecx = (u32)(r_ebp+0xfffffaf0u);
    /* 004bee16: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x4bee1bu); f_004a20f0();
    /* 004bee1b: mov byte ptr [ebp - 4], 0x21 */ W8((u32)(r_ebp+0xfffffffcu), 0x21u);
    /* 004bee1f: lea ecx, [ebp - 0x520] */ r_ecx = (u32)(r_ebp+0xfffffae0u);
    /* 004bee25: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x4bee2au); f_00484470();
    /* 004bee2a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004bee31: lea ecx, [ebp - 0x518] */ r_ecx = (u32)(r_ebp+0xfffffae8u);
    /* 004bee37: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x4bee3cu); f_00484470();
    /* 004bee3c: jmp 0x4bf248 */ goto L_004bf248;
L_004bee41:; BB(0x004bee41);
    /* 004bee41: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bee47: call 0x47e280 */ r_esp -= 4; W32(r_esp, 0x4bee4cu); f_0047e280();
    /* 004bee4c: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bee4f: je 0x4bee68 */ if (fZ) goto L_004bee68;
L_004bee51:; BB(0x004bee51);
    /* 004bee51: push 0x925 */ { u32 v = 0x925u; r_esp -= 4; W32(r_esp, v); }
    /* 004bee56: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004bee5b: push 0x6bedb0 */ { u32 v = 0x6bedb0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bee60: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4bee65u); f_005e9f20();
    /* 004bee65: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004bee68:; BB(0x004bee68);
    /* 004bee68: mov word ptr [0x791e94], 0 */ W16((u32)(0x791e94u), 0x0u);
    /* 004bee71: jmp 0x4bee85 */ goto L_004bee85;
L_004bee73:; BB(0x004bee73);
    /* 004bee73: mov dx, word ptr [0x791e94] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x791e94u))) & 0xffffu);
    /* 004bee7a: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004bee7e: mov word ptr [0x791e94], dx */ W16((u32)(0x791e94u), (u16)r_edx);
L_004bee85:; BB(0x004bee85);
    /* 004bee85: movsx esi, word ptr [0x791e94] */ r_esi = (u32)(i32)(i16)R16((u32)(0x791e94u));
    /* 004bee8c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bee92: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4bee97u); f_0047f950();
    /* 004bee97: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004bee99: jge 0x4beef1 */ if ((fS==fO)) goto L_004beef1;
L_004bee9b:; BB(0x004bee9b);
    /* 004bee9b: movsx eax, word ptr [0x791e94] */ r_eax = (u32)(i32)(i16)R16((u32)(0x791e94u));
    /* 004beea2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004beea3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004beea9: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4beeaeu); f_0047e390();
    /* 004beeae: mov ecx, eax */ r_ecx = r_eax;
    /* 004beeb0: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x4beeb5u); f_004c6cb0();
    /* 004beeb5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004beeb7: je 0x4beeef */ if (fZ) goto L_004beeef;
L_004beeb9:; BB(0x004beeb9);
    /* 004beeb9: mov cx, word ptr [0x791e50] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x791e50u))) & 0xffffu);
    /* 004beec0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004beec1: movsx edx, word ptr [ebp - 0x50c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffaf4u));
    /* 004beec8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004beec9: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004beecf: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x4beed4u); f_0047e490();
    /* 004beed4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004beed5: movsx eax, word ptr [0x791e94] */ r_eax = (u32)(i32)(i16)R16((u32)(0x791e94u));
    /* 004beedc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004beedd: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004beee3: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4beee8u); f_0047e390();
    /* 004beee8: mov ecx, eax */ r_ecx = r_eax;
    /* 004beeea: call 0x4d4810 */ r_esp -= 4; W32(r_esp, 0x4beeefu); f_004d4810();
L_004beeef:; BB(0x004beeef);
    /* 004beeef: jmp 0x4bee73 */ goto L_004bee73;
L_004beef1:; BB(0x004beef1);
    /* 004beef1: lea ecx, [ebp - 0x538] */ r_ecx = (u32)(r_ebp+0xfffffac8u);
    /* 004beef7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004beef8: movsx edx, word ptr [ebp - 0x50c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffaf4u));
    /* 004beeff: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bef00: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bef06: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4bef0bu); f_0047e3d0();
    /* 004bef0b: mov ecx, eax */ r_ecx = r_eax;
    /* 004bef0d: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x4bef12u); f_004c7c40();
    /* 004bef12: mov dword ptr [ebp - 4], 0x29 */ W32((u32)(r_ebp+0xfffffffcu), 0x29u);
    /* 004bef19: lea eax, [ebp - 0x548] */ r_eax = (u32)(r_ebp+0xfffffab8u);
    /* 004bef1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bef20: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bef26: mov ecx, dword ptr [ecx + 0x24] */ r_ecx = R32((u32)(r_ecx+0x24u));
    /* 004bef29: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x4bef2eu); f_004c7c40();
    /* 004bef2e: mov byte ptr [ebp - 4], 0x2a */ W8((u32)(r_ebp+0xfffffffcu), 0x2au);
    /* 004bef32: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bef34: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bef36: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bef38: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bef3a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bef3c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bef3e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bef40: lea edx, [ebp - 0x548] */ r_edx = (u32)(r_ebp+0xfffffab8u);
    /* 004bef46: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bef47: lea eax, [ebp - 0x524] */ r_eax = (u32)(r_ebp+0xfffffadcu);
    /* 004bef4d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bef4e: lea ecx, [ebp - 0x538] */ r_ecx = (u32)(r_ebp+0xfffffac8u);
    /* 004bef54: call 0x48cc10 */ r_esp -= 4; W32(r_esp, 0x4bef59u); f_0048cc10();
    /* 004bef59: mov byte ptr [ebp - 4], 0x2b */ W8((u32)(r_ebp+0xfffffffcu), 0x2bu);
    /* 004bef5d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bef5f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bef61: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bef63: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bef65: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bef67: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bef69: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bef6b: lea ecx, [ebp - 0x548] */ r_ecx = (u32)(r_ebp+0xfffffab8u);
    /* 004bef71: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bef72: lea edx, [ebp - 0x528] */ r_edx = (u32)(r_ebp+0xfffffad8u);
    /* 004bef78: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bef79: lea ecx, [ebp - 0x538] */ r_ecx = (u32)(r_ebp+0xfffffac8u);
    /* 004bef7f: call 0x48cc10 */ r_esp -= 4; W32(r_esp, 0x4bef84u); f_0048cc10();
    /* 004bef84: mov byte ptr [ebp - 4], 0x2c */ W8((u32)(r_ebp+0xfffffffcu), 0x2cu);
    /* 004bef88: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bef8a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bef8c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bef8e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bef90: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bef92: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bef94: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bef96: lea eax, [ebp - 0x548] */ r_eax = (u32)(r_ebp+0xfffffab8u);
    /* 004bef9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bef9d: lea ecx, [ebp - 0x540] */ r_ecx = (u32)(r_ebp+0xfffffac0u);
    /* 004befa3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004befa4: lea ecx, [ebp - 0x538] */ r_ecx = (u32)(r_ebp+0xfffffac8u);
    /* 004befaa: call 0x48c7b0 */ r_esp -= 4; W32(r_esp, 0x4befafu); f_0048c7b0();
    /* 004befaf: mov byte ptr [ebp - 4], 0x2d */ W8((u32)(r_ebp+0xfffffffcu), 0x2du);
    /* 004befb3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004befb5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004befb7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004befb9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004befbb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004befbd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004befbf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004befc1: lea edx, [ebp - 0x548] */ r_edx = (u32)(r_ebp+0xfffffab8u);
    /* 004befc7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004befc8: lea eax, [ebp - 0x530] */ r_eax = (u32)(r_ebp+0xfffffad0u);
    /* 004befce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004befcf: lea ecx, [ebp - 0x538] */ r_ecx = (u32)(r_ebp+0xfffffac8u);
    /* 004befd5: call 0x48c7b0 */ r_esp -= 4; W32(r_esp, 0x4befdau); f_0048c7b0();
    /* 004befda: mov byte ptr [ebp - 4], 0x2e */ W8((u32)(r_ebp+0xfffffffcu), 0x2eu);
    /* 004befde: lea ecx, [ebp - 0x6b9] */ r_ecx = (u32)(r_ebp+0xfffff947u);
    /* 004befe4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004befe5: lea ecx, [ebp - 0x524] */ r_ecx = (u32)(r_ebp+0xfffffadcu);
    /* 004befeb: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x4beff0u); f_004a2160();
    /* 004beff0: mov dl, byte ptr [eax] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 004beff2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004beff3: movsx eax, word ptr [ebp - 0x50c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffaf4u));
    /* 004beffa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004beffb: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bf001: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4bf006u); f_0047e3d0();
    /* 004bf006: mov ecx, eax */ r_ecx = r_eax;
    /* 004bf008: call 0x4da4d0 */ r_esp -= 4; W32(r_esp, 0x4bf00du); f_004da4d0();
    /* 004bf00d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf00f: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004bf012: mov ecx, esp */ r_ecx = r_esp;
    /* 004bf014: mov dword ptr [ebp - 0x6c0], esp */ W32((u32)(r_ebp+0xfffff940u), r_esp);
    /* 004bf01a: lea edx, [ebp - 0x540] */ r_edx = (u32)(r_ebp+0xfffffac0u);
    /* 004bf020: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bf021: call 0x484320 */ r_esp -= 4; W32(r_esp, 0x4bf026u); f_00484320();
    /* 004bf026: mov dword ptr [ebp - 0x8ec], eax */ W32((u32)(r_ebp+0xfffff714u), r_eax);
    /* 004bf02c: mov eax, dword ptr [ebp - 0x8ec] */ r_eax = R32((u32)(r_ebp+0xfffff714u));
    /* 004bf032: mov dword ptr [ebp - 0x8f0], eax */ W32((u32)(r_ebp+0xfffff710u), r_eax);
    /* 004bf038: mov byte ptr [ebp - 4], 0x2f */ W8((u32)(r_ebp+0xfffffffcu), 0x2fu);
    /* 004bf03c: movsx ecx, word ptr [ebp - 0x50c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffaf4u));
    /* 004bf043: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bf044: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bf04a: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4bf04fu); f_0047e3d0();
    /* 004bf04f: mov byte ptr [ebp - 4], 0x2e */ W8((u32)(r_ebp+0xfffffffcu), 0x2eu);
    /* 004bf053: mov ecx, eax */ r_ecx = r_eax;
    /* 004bf055: call 0x4c88a0 */ r_esp -= 4; W32(r_esp, 0x4bf05au); f_004c88a0();
    /* 004bf05a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bf060: call 0x47d7f0 */ r_esp -= 4; W32(r_esp, 0x4bf065u); f_0047d7f0();
    /* 004bf065: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bf068: jne 0x4bf157 */ if (!fZ) goto L_004bf157;
L_004bf06e:; BB(0x004bf06e);
    /* 004bf06e: lea ecx, [ebp - 0x6c6] */ r_ecx = (u32)(r_ebp+0xfffff93au);
    /* 004bf074: call 0x4a20d0 */ r_esp -= 4; W32(r_esp, 0x4bf079u); f_004a20d0();
    /* 004bf079: mov dword ptr [ebp - 0x8f4], eax */ W32((u32)(r_ebp+0xfffff70cu), r_eax);
    /* 004bf07f: mov edx, dword ptr [ebp - 0x8f4] */ r_edx = R32((u32)(r_ebp+0xfffff70cu));
    /* 004bf085: mov dword ptr [ebp - 0x8f8], edx */ W32((u32)(r_ebp+0xfffff708u), r_edx);
    /* 004bf08b: mov byte ptr [ebp - 4], 0x30 */ W8((u32)(r_ebp+0xfffffffcu), 0x30u);
    /* 004bf08f: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 004bf094: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 004bf099: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 004bf09e: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 004bf0a3: mov eax, dword ptr [0x7913f4] */ r_eax = R32((u32)(0x7913f4u));
    /* 004bf0a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bf0a9: mov ecx, dword ptr [0x791390] */ r_ecx = R32((u32)(0x791390u));
    /* 004bf0af: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bf0b0: mov ecx, dword ptr [ebp - 0x8f8] */ r_ecx = R32((u32)(r_ebp+0xfffff708u));
    /* 004bf0b6: call 0x4a2100 */ r_esp -= 4; W32(r_esp, 0x4bf0bbu); f_004a2100();
    /* 004bf0bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bf0bc: lea ecx, [ebp - 0x528] */ r_ecx = (u32)(r_ebp+0xfffffad8u);
    /* 004bf0c2: call 0x4a2550 */ r_esp -= 4; W32(r_esp, 0x4bf0c7u); f_004a2550();
    /* 004bf0c7: mov byte ptr [ebp - 0x6c1], al */ W8((u32)(r_ebp+0xfffff93fu), (u8)r_eax);
    /* 004bf0cd: mov byte ptr [ebp - 4], 0x2e */ W8((u32)(r_ebp+0xfffffffcu), 0x2eu);
    /* 004bf0d1: lea ecx, [ebp - 0x6c6] */ r_ecx = (u32)(r_ebp+0xfffff93au);
    /* 004bf0d7: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x4bf0dcu); f_004a20f0();
    /* 004bf0dc: movzx edx, byte ptr [ebp - 0x6c1] */ r_edx = (u32)R8((u32)(r_ebp+0xfffff93fu));
    /* 004bf0e3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bf0e5: je 0x4bf155 */ if (fZ) goto L_004bf155;
L_004bf0e7:; BB(0x004bf0e7);
    /* 004bf0e7: mov eax, dword ptr [ebp - 0x528] */ r_eax = R32((u32)(r_ebp+0xfffffad8u));
    /* 004bf0ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bf0ee: movsx ecx, word ptr [ebp - 0x50c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffaf4u));
    /* 004bf0f5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bf0f6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bf0fc: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4bf101u); f_0047e3d0();
    /* 004bf101: mov ecx, eax */ r_ecx = r_eax;
    /* 004bf103: call 0x4db070 */ r_esp -= 4; W32(r_esp, 0x4bf108u); f_004db070();
    /* 004bf108: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf10a: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004bf10d: mov ecx, esp */ r_ecx = r_esp;
    /* 004bf10f: mov dword ptr [ebp - 0x6cc], esp */ W32((u32)(r_ebp+0xfffff934u), r_esp);
    /* 004bf115: lea edx, [ebp - 0x530] */ r_edx = (u32)(r_ebp+0xfffffad0u);
    /* 004bf11b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bf11c: call 0x484320 */ r_esp -= 4; W32(r_esp, 0x4bf121u); f_00484320();
    /* 004bf121: mov dword ptr [ebp - 0x8fc], eax */ W32((u32)(r_ebp+0xfffff704u), r_eax);
    /* 004bf127: mov eax, dword ptr [ebp - 0x8fc] */ r_eax = R32((u32)(r_ebp+0xfffff704u));
    /* 004bf12d: mov dword ptr [ebp - 0x900], eax */ W32((u32)(r_ebp+0xfffff700u), r_eax);
    /* 004bf133: mov byte ptr [ebp - 4], 0x31 */ W8((u32)(r_ebp+0xfffffffcu), 0x31u);
    /* 004bf137: movsx ecx, word ptr [ebp - 0x50c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffaf4u));
    /* 004bf13e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bf13f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bf145: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4bf14au); f_0047e3d0();
    /* 004bf14a: mov byte ptr [ebp - 4], 0x2e */ W8((u32)(r_ebp+0xfffffffcu), 0x2eu);
    /* 004bf14e: mov ecx, eax */ r_ecx = r_eax;
    /* 004bf150: call 0x4c88a0 */ r_esp -= 4; W32(r_esp, 0x4bf155u); f_004c88a0();
L_004bf155:; BB(0x004bf155);
    /* 004bf155: jmp 0x4bf1c5 */ goto L_004bf1c5;
L_004bf157:; BB(0x004bf157);
    /* 004bf157: mov edx, dword ptr [ebp - 0x528] */ r_edx = R32((u32)(r_ebp+0xfffffad8u));
    /* 004bf15d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bf15e: movsx eax, word ptr [ebp - 0x50c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffaf4u));
    /* 004bf165: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bf166: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bf16c: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4bf171u); f_0047e3d0();
    /* 004bf171: mov ecx, eax */ r_ecx = r_eax;
    /* 004bf173: call 0x4db070 */ r_esp -= 4; W32(r_esp, 0x4bf178u); f_004db070();
    /* 004bf178: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf17a: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004bf17d: mov ecx, esp */ r_ecx = r_esp;
    /* 004bf17f: mov dword ptr [ebp - 0x6d0], esp */ W32((u32)(r_ebp+0xfffff930u), r_esp);
    /* 004bf185: lea edx, [ebp - 0x530] */ r_edx = (u32)(r_ebp+0xfffffad0u);
    /* 004bf18b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bf18c: call 0x484320 */ r_esp -= 4; W32(r_esp, 0x4bf191u); f_00484320();
    /* 004bf191: mov dword ptr [ebp - 0x904], eax */ W32((u32)(r_ebp+0xfffff6fcu), r_eax);
    /* 004bf197: mov eax, dword ptr [ebp - 0x904] */ r_eax = R32((u32)(r_ebp+0xfffff6fcu));
    /* 004bf19d: mov dword ptr [ebp - 0x908], eax */ W32((u32)(r_ebp+0xfffff6f8u), r_eax);
    /* 004bf1a3: mov byte ptr [ebp - 4], 0x32 */ W8((u32)(r_ebp+0xfffffffcu), 0x32u);
    /* 004bf1a7: movsx ecx, word ptr [ebp - 0x50c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffaf4u));
    /* 004bf1ae: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bf1af: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bf1b5: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4bf1bau); f_0047e3d0();
    /* 004bf1ba: mov byte ptr [ebp - 4], 0x2e */ W8((u32)(r_ebp+0xfffffffcu), 0x2eu);
    /* 004bf1be: mov ecx, eax */ r_ecx = r_eax;
    /* 004bf1c0: call 0x4c88a0 */ r_esp -= 4; W32(r_esp, 0x4bf1c5u); f_004c88a0();
L_004bf1c5:; BB(0x004bf1c5);
    /* 004bf1c5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf1c7: mov edx, dword ptr [ebp - 0x528] */ r_edx = R32((u32)(r_ebp+0xfffffad8u));
    /* 004bf1cd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bf1ce: mov eax, dword ptr [ebp - 0x524] */ r_eax = R32((u32)(r_ebp+0xfffffadcu));
    /* 004bf1d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bf1d5: mov cx, word ptr [ebp - 0x50c] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffaf4u))) & 0xffffu);
    /* 004bf1dc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bf1dd: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bf1e3: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004bf1e6: call 0x4f7220 */ r_esp -= 4; W32(r_esp, 0x4bf1ebu); f_004f7220();
    /* 004bf1eb: mov byte ptr [ebp - 4], 0x2d */ W8((u32)(r_ebp+0xfffffffcu), 0x2du);
    /* 004bf1ef: lea ecx, [ebp - 0x530] */ r_ecx = (u32)(r_ebp+0xfffffad0u);
    /* 004bf1f5: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x4bf1fau); f_00484470();
    /* 004bf1fa: mov byte ptr [ebp - 4], 0x2c */ W8((u32)(r_ebp+0xfffffffcu), 0x2cu);
    /* 004bf1fe: lea ecx, [ebp - 0x540] */ r_ecx = (u32)(r_ebp+0xfffffac0u);
    /* 004bf204: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x4bf209u); f_00484470();
    /* 004bf209: mov byte ptr [ebp - 4], 0x2b */ W8((u32)(r_ebp+0xfffffffcu), 0x2bu);
    /* 004bf20d: lea ecx, [ebp - 0x528] */ r_ecx = (u32)(r_ebp+0xfffffad8u);
    /* 004bf213: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x4bf218u); f_004a20f0();
    /* 004bf218: mov byte ptr [ebp - 4], 0x2a */ W8((u32)(r_ebp+0xfffffffcu), 0x2au);
    /* 004bf21c: lea ecx, [ebp - 0x524] */ r_ecx = (u32)(r_ebp+0xfffffadcu);
    /* 004bf222: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x4bf227u); f_004a20f0();
    /* 004bf227: mov byte ptr [ebp - 4], 0x29 */ W8((u32)(r_ebp+0xfffffffcu), 0x29u);
    /* 004bf22b: lea ecx, [ebp - 0x548] */ r_ecx = (u32)(r_ebp+0xfffffab8u);
    /* 004bf231: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x4bf236u); f_00484470();
    /* 004bf236: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004bf23d: lea ecx, [ebp - 0x538] */ r_ecx = (u32)(r_ebp+0xfffffac8u);
    /* 004bf243: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x4bf248u); f_00484470();
L_004bf248:; BB(0x004bf248);
    /* 004bf248: jmp 0x4bfc41 */ goto L_004bfc41;
L_004bf24d:; BB(0x004bf24d);
    /* 004bf24d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bf253: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x4bf258u); f_0047e190();
    /* 004bf258: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bf25b: jne 0x4bf4dd */ if (!fZ) goto L_004bf4dd;
L_004bf261:; BB(0x004bf261);
    /* 004bf261: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bf267: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004bf26a: call 0x4f6e70 */ r_esp -= 4; W32(r_esp, 0x4bf26fu); f_004f6e70();
    /* 004bf26f: mov word ptr [ebp - 0x560], ax */ W16((u32)(r_ebp+0xfffffaa0u), (u16)r_eax);
    /* 004bf276: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bf27c: call 0x47e280 */ r_esp -= 4; W32(r_esp, 0x4bf281u); f_0047e280();
    /* 004bf281: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bf283: je 0x4bf29c */ if (fZ) goto L_004bf29c;
L_004bf285:; BB(0x004bf285);
    /* 004bf285: push 0x94e */ { u32 v = 0x94eu; r_esp -= 4; W32(r_esp, v); }
    /* 004bf28a: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf28f: push 0x6bf2b4 */ { u32 v = 0x6bf2b4u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf294: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4bf299u); f_005e9f20();
    /* 004bf299: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004bf29c:; BB(0x004bf29c);
    /* 004bf29c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bf2a2: call 0x47d770 */ r_esp -= 4; W32(r_esp, 0x4bf2a7u); f_0047d770();
    /* 004bf2a7: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bf2aa: je 0x4bf2c3 */ if (fZ) goto L_004bf2c3;
L_004bf2ac:; BB(0x004bf2ac);
    /* 004bf2ac: push 0x94f */ { u32 v = 0x94fu; r_esp -= 4; W32(r_esp, v); }
    /* 004bf2b1: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf2b6: push 0x6be8d0 */ { u32 v = 0x6be8d0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf2bb: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4bf2c0u); f_005e9f20();
    /* 004bf2c0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004bf2c3:; BB(0x004bf2c3);
    /* 004bf2c3: mov word ptr [0x791e94], 0 */ W16((u32)(0x791e94u), 0x0u);
    /* 004bf2cc: jmp 0x4bf2e0 */ goto L_004bf2e0;
L_004bf2ce:; BB(0x004bf2ce);
    /* 004bf2ce: mov cx, word ptr [0x791e94] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x791e94u))) & 0xffffu);
    /* 004bf2d5: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004bf2d9: mov word ptr [0x791e94], cx */ W16((u32)(0x791e94u), (u16)r_ecx);
L_004bf2e0:; BB(0x004bf2e0);
    /* 004bf2e0: movsx esi, word ptr [0x791e94] */ r_esi = (u32)(i32)(i16)R16((u32)(0x791e94u));
    /* 004bf2e7: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bf2ed: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4bf2f2u); f_0047f950();
    /* 004bf2f2: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004bf2f4: jge 0x4bf34b */ if ((fS==fO)) goto L_004bf34b;
L_004bf2f6:; BB(0x004bf2f6);
    /* 004bf2f6: movsx edx, word ptr [0x791e94] */ r_edx = (u32)(i32)(i16)R16((u32)(0x791e94u));
    /* 004bf2fd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bf2fe: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bf304: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4bf309u); f_0047e390();
    /* 004bf309: mov ecx, eax */ r_ecx = r_eax;
    /* 004bf30b: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x4bf310u); f_004c6cb0();
    /* 004bf310: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bf312: je 0x4bf349 */ if (fZ) goto L_004bf349;
L_004bf314:; BB(0x004bf314);
    /* 004bf314: mov ax, word ptr [0x791e50] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x791e50u))) & 0xffffu);
    /* 004bf31a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bf31b: movsx ecx, word ptr [ebp - 0x560] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffaa0u));
    /* 004bf322: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bf323: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bf329: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x4bf32eu); f_0047e490();
    /* 004bf32e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bf32f: movsx edx, word ptr [0x791e94] */ r_edx = (u32)(i32)(i16)R16((u32)(0x791e94u));
    /* 004bf336: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bf337: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bf33d: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4bf342u); f_0047e390();
    /* 004bf342: mov ecx, eax */ r_ecx = r_eax;
    /* 004bf344: call 0x4eedf0 */ r_esp -= 4; W32(r_esp, 0x4bf349u); f_004eedf0();
L_004bf349:; BB(0x004bf349);
    /* 004bf349: jmp 0x4bf2ce */ goto L_004bf2ce;
L_004bf34b:; BB(0x004bf34b);
    /* 004bf34b: lea eax, [ebp - 0x55c] */ r_eax = (u32)(r_ebp+0xfffffaa4u);
    /* 004bf351: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bf352: movsx ecx, word ptr [ebp - 0x560] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffaa0u));
    /* 004bf359: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bf35a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bf360: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4bf365u); f_0047e3d0();
    /* 004bf365: mov ecx, eax */ r_ecx = r_eax;
    /* 004bf367: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x4bf36cu); f_004c7c40();
    /* 004bf36c: mov dword ptr [ebp - 4], 0x33 */ W32((u32)(r_ebp+0xfffffffcu), 0x33u);
    /* 004bf373: lea edx, [ebp - 0x55c] */ r_edx = (u32)(r_ebp+0xfffffaa4u);
    /* 004bf379: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bf37a: lea ecx, [ebp - 0x554] */ r_ecx = (u32)(r_ebp+0xfffffaacu);
    /* 004bf380: call 0x484320 */ r_esp -= 4; W32(r_esp, 0x4bf385u); f_00484320();
    /* 004bf385: mov byte ptr [ebp - 4], 0x34 */ W8((u32)(r_ebp+0xfffffffcu), 0x34u);
    /* 004bf389: lea eax, [ebp - 0x6d8] */ r_eax = (u32)(r_ebp+0xfffff928u);
    /* 004bf38f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bf390: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bf396: mov ecx, dword ptr [ecx + 0x24] */ r_ecx = R32((u32)(r_ecx+0x24u));
    /* 004bf399: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x4bf39eu); f_004c7c40();
    /* 004bf39e: mov dword ptr [ebp - 0x90c], eax */ W32((u32)(r_ebp+0xfffff6f4u), r_eax);
    /* 004bf3a4: mov edx, dword ptr [ebp - 0x90c] */ r_edx = R32((u32)(r_ebp+0xfffff6f4u));
    /* 004bf3aa: mov dword ptr [ebp - 0x910], edx */ W32((u32)(r_ebp+0xfffff6f0u), r_edx);
    /* 004bf3b0: mov byte ptr [ebp - 4], 0x35 */ W8((u32)(r_ebp+0xfffffffcu), 0x35u);
    /* 004bf3b4: mov eax, dword ptr [ebp - 0x910] */ r_eax = R32((u32)(r_ebp+0xfffff6f0u));
    /* 004bf3ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bf3bb: lea ecx, [ebp - 0x55c] */ r_ecx = (u32)(r_ebp+0xfffffaa4u);
    /* 004bf3c1: call 0x4846a0 */ r_esp -= 4; W32(r_esp, 0x4bf3c6u); f_004846a0();
    /* 004bf3c6: mov byte ptr [ebp - 4], 0x34 */ W8((u32)(r_ebp+0xfffffffcu), 0x34u);
    /* 004bf3ca: lea ecx, [ebp - 0x6d8] */ r_ecx = (u32)(r_ebp+0xfffff928u);
    /* 004bf3d0: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x4bf3d5u); f_00484470();
    /* 004bf3d5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf3d7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf3d9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf3db: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf3dd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf3df: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf3e1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf3e3: lea ecx, [ebp - 0x54c] */ r_ecx = (u32)(r_ebp+0xfffffab4u);
    /* 004bf3e9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bf3ea: lea ecx, [ebp - 0x55c] */ r_ecx = (u32)(r_ebp+0xfffffaa4u);
    /* 004bf3f0: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x4bf3f5u); f_00485940();
    /* 004bf3f5: mov byte ptr [ebp - 4], 0x36 */ W8((u32)(r_ebp+0xfffffffcu), 0x36u);
    /* 004bf3f9: lea edx, [ebp - 0x6d9] */ r_edx = (u32)(r_ebp+0xfffff927u);
    /* 004bf3ff: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bf400: lea ecx, [ebp - 0x54c] */ r_ecx = (u32)(r_ebp+0xfffffab4u);
    /* 004bf406: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x4bf40bu); f_004a2160();
    /* 004bf40b: mov al, byte ptr [eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 004bf40d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bf40e: movsx ecx, word ptr [ebp - 0x560] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffaa0u));
    /* 004bf415: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bf416: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bf41c: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4bf421u); f_0047e3d0();
    /* 004bf421: mov ecx, eax */ r_ecx = r_eax;
    /* 004bf423: call 0x4da4d0 */ r_esp -= 4; W32(r_esp, 0x4bf428u); f_004da4d0();
    /* 004bf428: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bf42e: call 0x47efb0 */ r_esp -= 4; W32(r_esp, 0x4bf433u); f_0047efb0();
    /* 004bf433: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bf434: lea edx, [ebp - 0x6da] */ r_edx = (u32)(r_ebp+0xfffff926u);
    /* 004bf43a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bf43b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bf441: call 0x47ee90 */ r_esp -= 4; W32(r_esp, 0x4bf446u); f_0047ee90();
    /* 004bf446: mov al, byte ptr [eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 004bf448: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bf449: lea ecx, [ebp - 0x6de] */ r_ecx = (u32)(r_ebp+0xfffff922u);
    /* 004bf44f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bf450: lea ecx, [ebp - 0x554] */ r_ecx = (u32)(r_ebp+0xfffffaacu);
    /* 004bf456: call 0x48d3c0 */ r_esp -= 4; W32(r_esp, 0x4bf45bu); f_0048d3c0();
    /* 004bf45b: mov dword ptr [ebp - 0x914], eax */ W32((u32)(r_ebp+0xfffff6ecu), r_eax);
    /* 004bf461: mov edx, dword ptr [ebp - 0x914] */ r_edx = R32((u32)(r_ebp+0xfffff6ecu));
    /* 004bf467: mov dword ptr [ebp - 0x918], edx */ W32((u32)(r_ebp+0xfffff6e8u), r_edx);
    /* 004bf46d: mov byte ptr [ebp - 4], 0x37 */ W8((u32)(r_ebp+0xfffffffcu), 0x37u);
    /* 004bf471: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf473: mov eax, dword ptr [ebp - 0x918] */ r_eax = R32((u32)(r_ebp+0xfffff6e8u));
    /* 004bf479: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 004bf47b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bf47c: mov edx, dword ptr [ebp - 0x54c] */ r_edx = R32((u32)(r_ebp+0xfffffab4u));
    /* 004bf482: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bf483: mov ax, word ptr [ebp - 0x560] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffaa0u))) & 0xffffu);
    /* 004bf48a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bf48b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bf491: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004bf494: call 0x4f7220 */ r_esp -= 4; W32(r_esp, 0x4bf499u); f_004f7220();
    /* 004bf499: mov byte ptr [ebp - 4], 0x36 */ W8((u32)(r_ebp+0xfffffffcu), 0x36u);
    /* 004bf49d: lea ecx, [ebp - 0x6de] */ r_ecx = (u32)(r_ebp+0xfffff922u);
    /* 004bf4a3: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x4bf4a8u); f_004a20f0();
    /* 004bf4a8: mov byte ptr [ebp - 4], 0x34 */ W8((u32)(r_ebp+0xfffffffcu), 0x34u);
    /* 004bf4ac: lea ecx, [ebp - 0x54c] */ r_ecx = (u32)(r_ebp+0xfffffab4u);
    /* 004bf4b2: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x4bf4b7u); f_004a20f0();
    /* 004bf4b7: mov byte ptr [ebp - 4], 0x33 */ W8((u32)(r_ebp+0xfffffffcu), 0x33u);
    /* 004bf4bb: lea ecx, [ebp - 0x554] */ r_ecx = (u32)(r_ebp+0xfffffaacu);
    /* 004bf4c1: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x4bf4c6u); f_00484470();
    /* 004bf4c6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004bf4cd: lea ecx, [ebp - 0x55c] */ r_ecx = (u32)(r_ebp+0xfffffaa4u);
    /* 004bf4d3: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x4bf4d8u); f_00484470();
    /* 004bf4d8: jmp 0x4bfc41 */ goto L_004bfc41;
L_004bf4dd:; BB(0x004bf4dd);
    /* 004bf4dd: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bf4e3: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x4bf4e8u); f_0047e190();
    /* 004bf4e8: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bf4eb: jne 0x4bfc41 */ if (!fZ) goto L_004bfc41;
L_004bf4f1:; BB(0x004bf4f1);
    /* 004bf4f1: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bf4f7: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004bf4fa: call 0x4f6e70 */ r_esp -= 4; W32(r_esp, 0x4bf4ffu); f_004f6e70();
    /* 004bf4ff: mov word ptr [ebp - 0x56c], ax */ W16((u32)(r_ebp+0xfffffa94u), (u16)r_eax);
    /* 004bf506: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bf50c: call 0x47e280 */ r_esp -= 4; W32(r_esp, 0x4bf511u); f_0047e280();
    /* 004bf511: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bf514: je 0x4bf52d */ if (fZ) goto L_004bf52d;
L_004bf516:; BB(0x004bf516);
    /* 004bf516: push 0x968 */ { u32 v = 0x968u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf51b: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf520: push 0x6bedb0 */ { u32 v = 0x6bedb0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf525: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4bf52au); f_005e9f20();
    /* 004bf52a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004bf52d:; BB(0x004bf52d);
    /* 004bf52d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bf533: call 0x47d7f0 */ r_esp -= 4; W32(r_esp, 0x4bf538u); f_0047d7f0();
    /* 004bf538: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bf53b: je 0x4bf554 */ if (fZ) goto L_004bf554;
L_004bf53d:; BB(0x004bf53d);
    /* 004bf53d: push 0x969 */ { u32 v = 0x969u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf542: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf547: push 0x6be964 */ { u32 v = 0x6be964u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf54c: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4bf551u); f_005e9f20();
    /* 004bf551: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004bf554:; BB(0x004bf554);
    /* 004bf554: movsx eax, word ptr [ebp - 0x56c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffa94u));
    /* 004bf55b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bf55c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bf562: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x4bf567u); f_0047e490();
    /* 004bf567: cmp dword ptr [eax*4 + 0x791e54], 0 */ {  u32 a = R32((u32)(r_eax*4+0x791e54u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bf56f: jne 0x4bf588 */ if (!fZ) goto L_004bf588;
L_004bf571:; BB(0x004bf571);
    /* 004bf571: push 0x96a */ { u32 v = 0x96au; r_esp -= 4; W32(r_esp, v); }
    /* 004bf576: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf57b: push 0x6be870 */ { u32 v = 0x6be870u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf580: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4bf585u); f_005e9f20();
    /* 004bf585: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004bf588:; BB(0x004bf588);
    /* 004bf588: mov word ptr [0x791e94], 0 */ W16((u32)(0x791e94u), 0x0u);
    /* 004bf591: jmp 0x4bf5a5 */ goto L_004bf5a5;
L_004bf593:; BB(0x004bf593);
    /* 004bf593: mov dx, word ptr [0x791e94] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x791e94u))) & 0xffffu);
    /* 004bf59a: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004bf59e: mov word ptr [0x791e94], dx */ W16((u32)(0x791e94u), (u16)r_edx);
L_004bf5a5:; BB(0x004bf5a5);
    /* 004bf5a5: movsx esi, word ptr [0x791e94] */ r_esi = (u32)(i32)(i16)R16((u32)(0x791e94u));
    /* 004bf5ac: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bf5b2: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4bf5b7u); f_0047f950();
    /* 004bf5b7: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004bf5b9: jge 0x4bf611 */ if ((fS==fO)) goto L_004bf611;
L_004bf5bb:; BB(0x004bf5bb);
    /* 004bf5bb: movsx eax, word ptr [0x791e94] */ r_eax = (u32)(i32)(i16)R16((u32)(0x791e94u));
    /* 004bf5c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bf5c3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bf5c9: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4bf5ceu); f_0047e390();
    /* 004bf5ce: mov ecx, eax */ r_ecx = r_eax;
    /* 004bf5d0: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x4bf5d5u); f_004c6cb0();
    /* 004bf5d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bf5d7: je 0x4bf60f */ if (fZ) goto L_004bf60f;
L_004bf5d9:; BB(0x004bf5d9);
    /* 004bf5d9: mov cx, word ptr [0x791e50] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x791e50u))) & 0xffffu);
    /* 004bf5e0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bf5e1: movsx edx, word ptr [ebp - 0x56c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffa94u));
    /* 004bf5e8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bf5e9: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bf5ef: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x4bf5f4u); f_0047e490();
    /* 004bf5f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bf5f5: movsx eax, word ptr [0x791e94] */ r_eax = (u32)(i32)(i16)R16((u32)(0x791e94u));
    /* 004bf5fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bf5fd: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bf603: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4bf608u); f_0047e390();
    /* 004bf608: mov ecx, eax */ r_ecx = r_eax;
    /* 004bf60a: call 0x4f12b0 */ r_esp -= 4; W32(r_esp, 0x4bf60fu); f_004f12b0();
L_004bf60f:; BB(0x004bf60f);
    /* 004bf60f: jmp 0x4bf593 */ goto L_004bf593;
L_004bf611:; BB(0x004bf611);
    /* 004bf611: lea ecx, [ebp - 0x568] */ r_ecx = (u32)(r_ebp+0xfffffa98u);
    /* 004bf617: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bf618: movsx edx, word ptr [ebp - 0x56c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffa94u));
    /* 004bf61f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bf620: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bf626: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4bf62bu); f_0047e3d0();
    /* 004bf62b: mov ecx, eax */ r_ecx = r_eax;
    /* 004bf62d: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x4bf632u); f_004c7c40();
    /* 004bf632: mov dword ptr [ebp - 4], 0x38 */ W32((u32)(r_ebp+0xfffffffcu), 0x38u);
    /* 004bf639: movsx eax, word ptr [ebp - 0x56c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffa94u));
    /* 004bf640: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bf641: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bf647: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x4bf64cu); f_0047e490();
    /* 004bf64c: cmp dword ptr [eax*4 + 0x791e54], 1 */ {  u32 a = R32((u32)(r_eax*4+0x791e54u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bf654: jne 0x4bf86e */ if (!fZ) goto L_004bf86e;
L_004bf65a:; BB(0x004bf65a);
    /* 004bf65a: lea ecx, [ebp - 0x568] */ r_ecx = (u32)(r_ebp+0xfffffa98u);
    /* 004bf660: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bf661: lea ecx, [ebp - 0x578] */ r_ecx = (u32)(r_ebp+0xfffffa88u);
    /* 004bf667: call 0x484320 */ r_esp -= 4; W32(r_esp, 0x4bf66cu); f_00484320();
    /* 004bf66c: mov byte ptr [ebp - 4], 0x39 */ W8((u32)(r_ebp+0xfffffffcu), 0x39u);
    /* 004bf670: lea edx, [ebp - 0x568] */ r_edx = (u32)(r_ebp+0xfffffa98u);
    /* 004bf676: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bf677: lea ecx, [ebp - 0x580] */ r_ecx = (u32)(r_ebp+0xfffffa80u);
    /* 004bf67d: call 0x484320 */ r_esp -= 4; W32(r_esp, 0x4bf682u); f_00484320();
    /* 004bf682: mov byte ptr [ebp - 4], 0x3a */ W8((u32)(r_ebp+0xfffffffcu), 0x3au);
    /* 004bf686: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf688: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf68a: lea eax, [ebp - 0x6e8] */ r_eax = (u32)(r_ebp+0xfffff918u);
    /* 004bf690: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bf691: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bf697: mov ecx, dword ptr [ecx + 0x24] */ r_ecx = R32((u32)(r_ecx+0x24u));
    /* 004bf69a: call 0x4c7d30 */ r_esp -= 4; W32(r_esp, 0x4bf69fu); f_004c7d30();
    /* 004bf69f: mov dword ptr [ebp - 0x91c], eax */ W32((u32)(r_ebp+0xfffff6e4u), r_eax);
    /* 004bf6a5: mov edx, dword ptr [ebp - 0x91c] */ r_edx = R32((u32)(r_ebp+0xfffff6e4u));
    /* 004bf6ab: mov dword ptr [ebp - 0x920], edx */ W32((u32)(r_ebp+0xfffff6e0u), r_edx);
    /* 004bf6b1: mov byte ptr [ebp - 4], 0x3b */ W8((u32)(r_ebp+0xfffffffcu), 0x3bu);
    /* 004bf6b5: mov eax, dword ptr [ebp - 0x920] */ r_eax = R32((u32)(r_ebp+0xfffff6e0u));
    /* 004bf6bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bf6bc: lea ecx, [ebp - 0x578] */ r_ecx = (u32)(r_ebp+0xfffffa88u);
    /* 004bf6c2: call 0x4846a0 */ r_esp -= 4; W32(r_esp, 0x4bf6c7u); f_004846a0();
    /* 004bf6c7: mov byte ptr [ebp - 4], 0x3a */ W8((u32)(r_ebp+0xfffffffcu), 0x3au);
    /* 004bf6cb: lea ecx, [ebp - 0x6e8] */ r_ecx = (u32)(r_ebp+0xfffff918u);
    /* 004bf6d1: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x4bf6d6u); f_00484470();
    /* 004bf6d6: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf6d8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf6da: lea ecx, [ebp - 0x6f0] */ r_ecx = (u32)(r_ebp+0xfffff910u);
    /* 004bf6e0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bf6e1: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004bf6e7: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 004bf6ea: call 0x4c7d30 */ r_esp -= 4; W32(r_esp, 0x4bf6efu); f_004c7d30();
    /* 004bf6ef: mov dword ptr [ebp - 0x924], eax */ W32((u32)(r_ebp+0xfffff6dcu), r_eax);
    /* 004bf6f5: mov eax, dword ptr [ebp - 0x924] */ r_eax = R32((u32)(r_ebp+0xfffff6dcu));
    /* 004bf6fb: mov dword ptr [ebp - 0x928], eax */ W32((u32)(r_ebp+0xfffff6d8u), r_eax);
    /* 004bf701: mov byte ptr [ebp - 4], 0x3c */ W8((u32)(r_ebp+0xfffffffcu), 0x3cu);
    /* 004bf705: mov ecx, dword ptr [ebp - 0x928] */ r_ecx = R32((u32)(r_ebp+0xfffff6d8u));
    /* 004bf70b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bf70c: lea ecx, [ebp - 0x580] */ r_ecx = (u32)(r_ebp+0xfffffa80u);
    /* 004bf712: call 0x4846a0 */ r_esp -= 4; W32(r_esp, 0x4bf717u); f_004846a0();
    /* 004bf717: mov byte ptr [ebp - 4], 0x3a */ W8((u32)(r_ebp+0xfffffffcu), 0x3au);
    /* 004bf71b: lea ecx, [ebp - 0x6f0] */ r_ecx = (u32)(r_ebp+0xfffff910u);
    /* 004bf721: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x4bf726u); f_00484470();
    /* 004bf726: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf728: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf72a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf72c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf72e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf730: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf732: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf734: lea edx, [ebp - 0x584] */ r_edx = (u32)(r_ebp+0xfffffa7cu);
    /* 004bf73a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bf73b: lea ecx, [ebp - 0x578] */ r_ecx = (u32)(r_ebp+0xfffffa88u);
    /* 004bf741: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x4bf746u); f_00485940();
    /* 004bf746: mov byte ptr [ebp - 4], 0x3d */ W8((u32)(r_ebp+0xfffffffcu), 0x3du);
    /* 004bf74a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf74c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf74e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf750: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf752: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf754: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf756: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf758: lea eax, [ebp - 0x588] */ r_eax = (u32)(r_ebp+0xfffffa78u);
    /* 004bf75e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bf75f: lea ecx, [ebp - 0x580] */ r_ecx = (u32)(r_ebp+0xfffffa80u);
    /* 004bf765: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x4bf76au); f_00485940();
    /* 004bf76a: mov byte ptr [ebp - 4], 0x3e */ W8((u32)(r_ebp+0xfffffffcu), 0x3eu);
    /* 004bf76e: lea ecx, [ebp - 0x570] */ r_ecx = (u32)(r_ebp+0xfffffa90u);
    /* 004bf774: call 0x4a20d0 */ r_esp -= 4; W32(r_esp, 0x4bf779u); f_004a20d0();
    /* 004bf779: mov byte ptr [ebp - 4], 0x3f */ W8((u32)(r_ebp+0xfffffffcu), 0x3fu);
    /* 004bf77d: lea ecx, [ebp - 0x588] */ r_ecx = (u32)(r_ebp+0xfffffa78u);
    /* 004bf783: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bf784: lea ecx, [ebp - 0x584] */ r_ecx = (u32)(r_ebp+0xfffffa7cu);
    /* 004bf78a: call 0x4a2440 */ r_esp -= 4; W32(r_esp, 0x4bf78fu); f_004a2440();
    /* 004bf78f: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004bf792: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bf794: je 0x4bf7a4 */ if (fZ) goto L_004bf7a4;
L_004bf796:; BB(0x004bf796);
    /* 004bf796: mov eax, dword ptr [ebp - 0x584] */ r_eax = R32((u32)(r_ebp+0xfffffa7cu));
    /* 004bf79c: mov dword ptr [ebp - 0x570], eax */ W32((u32)(r_ebp+0xfffffa90u), r_eax);
    /* 004bf7a2: jmp 0x4bf7b0 */ goto L_004bf7b0;
L_004bf7a4:; BB(0x004bf7a4);
    /* 004bf7a4: mov ecx, dword ptr [ebp - 0x588] */ r_ecx = R32((u32)(r_ebp+0xfffffa78u));
    /* 004bf7aa: mov dword ptr [ebp - 0x570], ecx */ W32((u32)(r_ebp+0xfffffa90u), r_ecx);
L_004bf7b0:; BB(0x004bf7b0);
    /* 004bf7b0: lea edx, [ebp - 0x6f1] */ r_edx = (u32)(r_ebp+0xfffff90fu);
    /* 004bf7b6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bf7b7: lea ecx, [ebp - 0x570] */ r_ecx = (u32)(r_ebp+0xfffffa90u);
    /* 004bf7bd: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x4bf7c2u); f_004a2160();
    /* 004bf7c2: mov al, byte ptr [eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 004bf7c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bf7c5: movsx ecx, word ptr [ebp - 0x56c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffa94u));
    /* 004bf7cc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bf7cd: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bf7d3: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4bf7d8u); f_0047e3d0();
    /* 004bf7d8: mov ecx, eax */ r_ecx = r_eax;
    /* 004bf7da: call 0x4da4d0 */ r_esp -= 4; W32(r_esp, 0x4bf7dfu); f_004da4d0();
    /* 004bf7df: movsx edx, word ptr [ebp - 0x56c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffa94u));
    /* 004bf7e6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bf7e7: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bf7ed: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x4bf7f2u); f_0047e490();
    /* 004bf7f2: mov eax, dword ptr [eax*4 + 0x791e54] */ r_eax = R32((u32)(r_eax*4+0x791e54u));
    /* 004bf7f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bf7fa: mov ecx, dword ptr [ebp - 0x570] */ r_ecx = R32((u32)(r_ebp+0xfffffa90u));
    /* 004bf800: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bf801: mov edx, dword ptr [ebp - 0x570] */ r_edx = R32((u32)(r_ebp+0xfffffa90u));
    /* 004bf807: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bf808: mov ax, word ptr [ebp - 0x56c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffa94u))) & 0xffffu);
    /* 004bf80f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bf810: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bf816: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004bf819: call 0x4f7220 */ r_esp -= 4; W32(r_esp, 0x4bf81eu); f_004f7220();
    /* 004bf81e: mov byte ptr [ebp - 4], 0x3e */ W8((u32)(r_ebp+0xfffffffcu), 0x3eu);
    /* 004bf822: lea ecx, [ebp - 0x570] */ r_ecx = (u32)(r_ebp+0xfffffa90u);
    /* 004bf828: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x4bf82du); f_004a20f0();
    /* 004bf82d: mov byte ptr [ebp - 4], 0x3d */ W8((u32)(r_ebp+0xfffffffcu), 0x3du);
    /* 004bf831: lea ecx, [ebp - 0x588] */ r_ecx = (u32)(r_ebp+0xfffffa78u);
    /* 004bf837: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x4bf83cu); f_004a20f0();
    /* 004bf83c: mov byte ptr [ebp - 4], 0x3a */ W8((u32)(r_ebp+0xfffffffcu), 0x3au);
    /* 004bf840: lea ecx, [ebp - 0x584] */ r_ecx = (u32)(r_ebp+0xfffffa7cu);
    /* 004bf846: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x4bf84bu); f_004a20f0();
    /* 004bf84b: mov byte ptr [ebp - 4], 0x39 */ W8((u32)(r_ebp+0xfffffffcu), 0x39u);
    /* 004bf84f: lea ecx, [ebp - 0x580] */ r_ecx = (u32)(r_ebp+0xfffffa80u);
    /* 004bf855: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x4bf85au); f_00484470();
    /* 004bf85a: mov byte ptr [ebp - 4], 0x38 */ W8((u32)(r_ebp+0xfffffffcu), 0x38u);
    /* 004bf85e: lea ecx, [ebp - 0x578] */ r_ecx = (u32)(r_ebp+0xfffffa88u);
    /* 004bf864: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x4bf869u); f_00484470();
    /* 004bf869: jmp 0x4bfc2f */ goto L_004bfc2f;
L_004bf86e:; BB(0x004bf86e);
    /* 004bf86e: movsx ecx, word ptr [ebp - 0x56c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffa94u));
    /* 004bf875: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bf876: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bf87c: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x4bf881u); f_0047e490();
    /* 004bf881: cmp dword ptr [eax*4 + 0x791e54], 2 */ {  u32 a = R32((u32)(r_eax*4+0x791e54u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bf889: jne 0x4bfa94 */ if (!fZ) goto L_004bfa94;
L_004bf88f:; BB(0x004bf88f);
    /* 004bf88f: lea edx, [ebp - 0x568] */ r_edx = (u32)(r_ebp+0xfffffa98u);
    /* 004bf895: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bf896: lea ecx, [ebp - 0x594] */ r_ecx = (u32)(r_ebp+0xfffffa6cu);
    /* 004bf89c: call 0x484320 */ r_esp -= 4; W32(r_esp, 0x4bf8a1u); f_00484320();
    /* 004bf8a1: mov byte ptr [ebp - 4], 0x40 */ W8((u32)(r_ebp+0xfffffffcu), 0x40u);
    /* 004bf8a5: lea eax, [ebp - 0x568] */ r_eax = (u32)(r_ebp+0xfffffa98u);
    /* 004bf8ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bf8ac: lea ecx, [ebp - 0x59c] */ r_ecx = (u32)(r_ebp+0xfffffa64u);
    /* 004bf8b2: call 0x484320 */ r_esp -= 4; W32(r_esp, 0x4bf8b7u); f_00484320();
    /* 004bf8b7: mov byte ptr [ebp - 4], 0x41 */ W8((u32)(r_ebp+0xfffffffcu), 0x41u);
    /* 004bf8bb: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf8bd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf8bf: lea ecx, [ebp - 0x6fc] */ r_ecx = (u32)(r_ebp+0xfffff904u);
    /* 004bf8c5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bf8c6: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004bf8cc: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 004bf8cf: call 0x4c7d30 */ r_esp -= 4; W32(r_esp, 0x4bf8d4u); f_004c7d30();
    /* 004bf8d4: mov dword ptr [ebp - 0x92c], eax */ W32((u32)(r_ebp+0xfffff6d4u), r_eax);
    /* 004bf8da: mov eax, dword ptr [ebp - 0x92c] */ r_eax = R32((u32)(r_ebp+0xfffff6d4u));
    /* 004bf8e0: mov dword ptr [ebp - 0x930], eax */ W32((u32)(r_ebp+0xfffff6d0u), r_eax);
    /* 004bf8e6: mov byte ptr [ebp - 4], 0x42 */ W8((u32)(r_ebp+0xfffffffcu), 0x42u);
    /* 004bf8ea: mov ecx, dword ptr [ebp - 0x930] */ r_ecx = R32((u32)(r_ebp+0xfffff6d0u));
    /* 004bf8f0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bf8f1: lea ecx, [ebp - 0x594] */ r_ecx = (u32)(r_ebp+0xfffffa6cu);
    /* 004bf8f7: call 0x4846a0 */ r_esp -= 4; W32(r_esp, 0x4bf8fcu); f_004846a0();
    /* 004bf8fc: mov byte ptr [ebp - 4], 0x41 */ W8((u32)(r_ebp+0xfffffffcu), 0x41u);
    /* 004bf900: lea ecx, [ebp - 0x6fc] */ r_ecx = (u32)(r_ebp+0xfffff904u);
    /* 004bf906: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x4bf90bu); f_00484470();
    /* 004bf90b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf90d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf90f: lea edx, [ebp - 0x704] */ r_edx = (u32)(r_ebp+0xfffff8fcu);
    /* 004bf915: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bf916: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004bf91b: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 004bf91e: call 0x4c7d30 */ r_esp -= 4; W32(r_esp, 0x4bf923u); f_004c7d30();
    /* 004bf923: mov dword ptr [ebp - 0x934], eax */ W32((u32)(r_ebp+0xfffff6ccu), r_eax);
    /* 004bf929: mov ecx, dword ptr [ebp - 0x934] */ r_ecx = R32((u32)(r_ebp+0xfffff6ccu));
    /* 004bf92f: mov dword ptr [ebp - 0x938], ecx */ W32((u32)(r_ebp+0xfffff6c8u), r_ecx);
    /* 004bf935: mov byte ptr [ebp - 4], 0x43 */ W8((u32)(r_ebp+0xfffffffcu), 0x43u);
    /* 004bf939: mov edx, dword ptr [ebp - 0x938] */ r_edx = R32((u32)(r_ebp+0xfffff6c8u));
    /* 004bf93f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bf940: lea ecx, [ebp - 0x59c] */ r_ecx = (u32)(r_ebp+0xfffffa64u);
    /* 004bf946: call 0x4846a0 */ r_esp -= 4; W32(r_esp, 0x4bf94bu); f_004846a0();
    /* 004bf94b: mov byte ptr [ebp - 4], 0x41 */ W8((u32)(r_ebp+0xfffffffcu), 0x41u);
    /* 004bf94f: lea ecx, [ebp - 0x704] */ r_ecx = (u32)(r_ebp+0xfffff8fcu);
    /* 004bf955: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x4bf95au); f_00484470();
    /* 004bf95a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf95c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf95e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf960: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf962: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf964: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf966: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf968: lea eax, [ebp - 0x5a0] */ r_eax = (u32)(r_ebp+0xfffffa60u);
    /* 004bf96e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bf96f: lea ecx, [ebp - 0x594] */ r_ecx = (u32)(r_ebp+0xfffffa6cu);
    /* 004bf975: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x4bf97au); f_00485940();
    /* 004bf97a: mov byte ptr [ebp - 4], 0x44 */ W8((u32)(r_ebp+0xfffffffcu), 0x44u);
    /* 004bf97e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf980: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf982: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf984: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf986: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf988: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf98a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf98c: lea ecx, [ebp - 0x5a4] */ r_ecx = (u32)(r_ebp+0xfffffa5cu);
    /* 004bf992: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bf993: lea ecx, [ebp - 0x59c] */ r_ecx = (u32)(r_ebp+0xfffffa64u);
    /* 004bf999: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x4bf99eu); f_00485940();
    /* 004bf99e: mov byte ptr [ebp - 4], 0x45 */ W8((u32)(r_ebp+0xfffffffcu), 0x45u);
    /* 004bf9a2: lea ecx, [ebp - 0x58c] */ r_ecx = (u32)(r_ebp+0xfffffa74u);
    /* 004bf9a8: call 0x4a20d0 */ r_esp -= 4; W32(r_esp, 0x4bf9adu); f_004a20d0();
    /* 004bf9ad: mov byte ptr [ebp - 4], 0x46 */ W8((u32)(r_ebp+0xfffffffcu), 0x46u);
    /* 004bf9b1: lea edx, [ebp - 0x5a4] */ r_edx = (u32)(r_ebp+0xfffffa5cu);
    /* 004bf9b7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bf9b8: lea ecx, [ebp - 0x5a0] */ r_ecx = (u32)(r_ebp+0xfffffa60u);
    /* 004bf9be: call 0x4a2550 */ r_esp -= 4; W32(r_esp, 0x4bf9c3u); f_004a2550();
    /* 004bf9c3: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004bf9c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bf9c8: je 0x4bf9d8 */ if (fZ) goto L_004bf9d8;
L_004bf9ca:; BB(0x004bf9ca);
    /* 004bf9ca: mov ecx, dword ptr [ebp - 0x5a0] */ r_ecx = R32((u32)(r_ebp+0xfffffa60u));
    /* 004bf9d0: mov dword ptr [ebp - 0x58c], ecx */ W32((u32)(r_ebp+0xfffffa74u), r_ecx);
    /* 004bf9d6: jmp 0x4bf9e4 */ goto L_004bf9e4;
L_004bf9d8:; BB(0x004bf9d8);
    /* 004bf9d8: mov edx, dword ptr [ebp - 0x5a4] */ r_edx = R32((u32)(r_ebp+0xfffffa5cu));
    /* 004bf9de: mov dword ptr [ebp - 0x58c], edx */ W32((u32)(r_ebp+0xfffffa74u), r_edx);
L_004bf9e4:; BB(0x004bf9e4);
    /* 004bf9e4: mov eax, dword ptr [ebp - 0x58c] */ r_eax = R32((u32)(r_ebp+0xfffffa74u));
    /* 004bf9ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bf9eb: movsx ecx, word ptr [ebp - 0x56c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffa94u));
    /* 004bf9f2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bf9f3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bf9f9: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4bf9feu); f_0047e3d0();
    /* 004bf9fe: mov ecx, eax */ r_ecx = r_eax;
    /* 004bfa00: call 0x4db070 */ r_esp -= 4; W32(r_esp, 0x4bfa05u); f_004db070();
    /* 004bfa05: movsx edx, word ptr [ebp - 0x56c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffa94u));
    /* 004bfa0c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bfa0d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bfa13: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x4bfa18u); f_0047e490();
    /* 004bfa18: mov eax, dword ptr [eax*4 + 0x791e54] */ r_eax = R32((u32)(r_eax*4+0x791e54u));
    /* 004bfa1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bfa20: mov ecx, dword ptr [ebp - 0x58c] */ r_ecx = R32((u32)(r_ebp+0xfffffa74u));
    /* 004bfa26: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bfa27: mov edx, dword ptr [ebp - 0x58c] */ r_edx = R32((u32)(r_ebp+0xfffffa74u));
    /* 004bfa2d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bfa2e: mov ax, word ptr [ebp - 0x56c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffa94u))) & 0xffffu);
    /* 004bfa35: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bfa36: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bfa3c: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004bfa3f: call 0x4f7220 */ r_esp -= 4; W32(r_esp, 0x4bfa44u); f_004f7220();
    /* 004bfa44: mov byte ptr [ebp - 4], 0x45 */ W8((u32)(r_ebp+0xfffffffcu), 0x45u);
    /* 004bfa48: lea ecx, [ebp - 0x58c] */ r_ecx = (u32)(r_ebp+0xfffffa74u);
    /* 004bfa4e: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x4bfa53u); f_004a20f0();
    /* 004bfa53: mov byte ptr [ebp - 4], 0x44 */ W8((u32)(r_ebp+0xfffffffcu), 0x44u);
    /* 004bfa57: lea ecx, [ebp - 0x5a4] */ r_ecx = (u32)(r_ebp+0xfffffa5cu);
    /* 004bfa5d: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x4bfa62u); f_004a20f0();
    /* 004bfa62: mov byte ptr [ebp - 4], 0x41 */ W8((u32)(r_ebp+0xfffffffcu), 0x41u);
    /* 004bfa66: lea ecx, [ebp - 0x5a0] */ r_ecx = (u32)(r_ebp+0xfffffa60u);
    /* 004bfa6c: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x4bfa71u); f_004a20f0();
    /* 004bfa71: mov byte ptr [ebp - 4], 0x40 */ W8((u32)(r_ebp+0xfffffffcu), 0x40u);
    /* 004bfa75: lea ecx, [ebp - 0x59c] */ r_ecx = (u32)(r_ebp+0xfffffa64u);
    /* 004bfa7b: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x4bfa80u); f_00484470();
    /* 004bfa80: mov byte ptr [ebp - 4], 0x38 */ W8((u32)(r_ebp+0xfffffffcu), 0x38u);
    /* 004bfa84: lea ecx, [ebp - 0x594] */ r_ecx = (u32)(r_ebp+0xfffffa6cu);
    /* 004bfa8a: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x4bfa8fu); f_00484470();
    /* 004bfa8f: jmp 0x4bfc2f */ goto L_004bfc2f;
L_004bfa94:; BB(0x004bfa94);
    /* 004bfa94: movsx ecx, word ptr [ebp - 0x56c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffa94u));
    /* 004bfa9b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bfa9c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bfaa2: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x4bfaa7u); f_0047e490();
    /* 004bfaa7: cmp dword ptr [eax*4 + 0x791e54], 3 */ {  u32 a = R32((u32)(r_eax*4+0x791e54u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bfaaf: jne 0x4bfc14 */ if (!fZ) goto L_004bfc14;
L_004bfab5:; BB(0x004bfab5);
    /* 004bfab5: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004bfab7: movsx edx, word ptr [ebp - 0x56c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffa94u));
    /* 004bfabe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bfabf: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bfac5: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x4bfacau); f_0047e490();
    /* 004bfaca: mov al, byte ptr [eax + 0x791e30] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x791e30u))) & 0xffu);
    /* 004bfad0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bfad1: lea ecx, [ebp - 0x70c] */ r_ecx = (u32)(r_ebp+0xfffff8f4u);
    /* 004bfad7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bfad8: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004bfade: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 004bfae1: call 0x4c7d30 */ r_esp -= 4; W32(r_esp, 0x4bfae6u); f_004c7d30();
    /* 004bfae6: mov dword ptr [ebp - 0x93c], eax */ W32((u32)(r_ebp+0xfffff6c4u), r_eax);
    /* 004bfaec: mov eax, dword ptr [ebp - 0x93c] */ r_eax = R32((u32)(r_ebp+0xfffff6c4u));
    /* 004bfaf2: mov dword ptr [ebp - 0x940], eax */ W32((u32)(r_ebp+0xfffff6c0u), r_eax);
    /* 004bfaf8: mov byte ptr [ebp - 4], 0x47 */ W8((u32)(r_ebp+0xfffffffcu), 0x47u);
    /* 004bfafc: mov ecx, dword ptr [ebp - 0x940] */ r_ecx = R32((u32)(r_ebp+0xfffff6c0u));
    /* 004bfb02: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bfb03: lea ecx, [ebp - 0x568] */ r_ecx = (u32)(r_ebp+0xfffffa98u);
    /* 004bfb09: call 0x4846a0 */ r_esp -= 4; W32(r_esp, 0x4bfb0eu); f_004846a0();
    /* 004bfb0e: mov byte ptr [ebp - 4], 0x38 */ W8((u32)(r_ebp+0xfffffffcu), 0x38u);
    /* 004bfb12: lea ecx, [ebp - 0x70c] */ r_ecx = (u32)(r_ebp+0xfffff8f4u);
    /* 004bfb18: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x4bfb1du); f_00484470();
    /* 004bfb1d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bfb1f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bfb21: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bfb23: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bfb25: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bfb27: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bfb29: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bfb2b: lea edx, [ebp - 0x5a8] */ r_edx = (u32)(r_ebp+0xfffffa58u);
    /* 004bfb31: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bfb32: lea ecx, [ebp - 0x568] */ r_ecx = (u32)(r_ebp+0xfffffa98u);
    /* 004bfb38: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x4bfb3du); f_00485940();
    /* 004bfb3d: mov byte ptr [ebp - 4], 0x48 */ W8((u32)(r_ebp+0xfffffffcu), 0x48u);
    /* 004bfb41: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bfb43: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bfb45: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bfb47: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bfb49: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bfb4b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bfb4d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bfb4f: lea eax, [ebp - 0x5ac] */ r_eax = (u32)(r_ebp+0xfffffa54u);
    /* 004bfb55: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bfb56: lea ecx, [ebp - 0x568] */ r_ecx = (u32)(r_ebp+0xfffffa98u);
    /* 004bfb5c: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x4bfb61u); f_00485940();
    /* 004bfb61: mov byte ptr [ebp - 4], 0x49 */ W8((u32)(r_ebp+0xfffffffcu), 0x49u);
    /* 004bfb65: lea ecx, [ebp - 0x70d] */ r_ecx = (u32)(r_ebp+0xfffff8f3u);
    /* 004bfb6b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bfb6c: lea ecx, [ebp - 0x5a8] */ r_ecx = (u32)(r_ebp+0xfffffa58u);
    /* 004bfb72: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x4bfb77u); f_004a2160();
    /* 004bfb77: mov dl, byte ptr [eax] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 004bfb79: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bfb7a: movsx eax, word ptr [ebp - 0x56c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffa94u));
    /* 004bfb81: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bfb82: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bfb88: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4bfb8du); f_0047e3d0();
    /* 004bfb8d: mov ecx, eax */ r_ecx = r_eax;
    /* 004bfb8f: call 0x4da4d0 */ r_esp -= 4; W32(r_esp, 0x4bfb94u); f_004da4d0();
    /* 004bfb94: mov ecx, dword ptr [ebp - 0x5ac] */ r_ecx = R32((u32)(r_ebp+0xfffffa54u));
    /* 004bfb9a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bfb9b: movsx edx, word ptr [ebp - 0x56c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffa94u));
    /* 004bfba2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bfba3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bfba9: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4bfbaeu); f_0047e3d0();
    /* 004bfbae: mov ecx, eax */ r_ecx = r_eax;
    /* 004bfbb0: call 0x4db070 */ r_esp -= 4; W32(r_esp, 0x4bfbb5u); f_004db070();
    /* 004bfbb5: movsx eax, word ptr [ebp - 0x56c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffa94u));
    /* 004bfbbc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bfbbd: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bfbc3: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x4bfbc8u); f_0047e490();
    /* 004bfbc8: mov ecx, dword ptr [eax*4 + 0x791e54] */ r_ecx = R32((u32)(r_eax*4+0x791e54u));
    /* 004bfbcf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bfbd0: mov edx, dword ptr [ebp - 0x5ac] */ r_edx = R32((u32)(r_ebp+0xfffffa54u));
    /* 004bfbd6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bfbd7: mov eax, dword ptr [ebp - 0x5a8] */ r_eax = R32((u32)(r_ebp+0xfffffa58u));
    /* 004bfbdd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bfbde: mov cx, word ptr [ebp - 0x56c] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffa94u))) & 0xffffu);
    /* 004bfbe5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bfbe6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bfbec: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004bfbef: call 0x4f7220 */ r_esp -= 4; W32(r_esp, 0x4bfbf4u); f_004f7220();
    /* 004bfbf4: mov byte ptr [ebp - 4], 0x48 */ W8((u32)(r_ebp+0xfffffffcu), 0x48u);
    /* 004bfbf8: lea ecx, [ebp - 0x5ac] */ r_ecx = (u32)(r_ebp+0xfffffa54u);
    /* 004bfbfe: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x4bfc03u); f_004a20f0();
    /* 004bfc03: mov byte ptr [ebp - 4], 0x38 */ W8((u32)(r_ebp+0xfffffffcu), 0x38u);
    /* 004bfc07: lea ecx, [ebp - 0x5a8] */ r_ecx = (u32)(r_ebp+0xfffffa58u);
    /* 004bfc0d: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x4bfc12u); f_004a20f0();
    /* 004bfc12: jmp 0x4bfc2f */ goto L_004bfc2f;
L_004bfc14:; BB(0x004bfc14);
    /* 004bfc14: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 004bfc16: jne 0x4bfc2f */ if (!fZ) goto L_004bfc2f;
L_004bfc18:; BB(0x004bfc18);
    /* 004bfc18: push 0x9a4 */ { u32 v = 0x9a4u; r_esp -= 4; W32(r_esp, v); }
    /* 004bfc1d: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004bfc22: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 004bfc27: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4bfc2cu); f_005e9f20();
    /* 004bfc2c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004bfc2f:; BB(0x004bfc2f);
    /* 004bfc2f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004bfc36: lea ecx, [ebp - 0x568] */ r_ecx = (u32)(r_ebp+0xfffffa98u);
    /* 004bfc3c: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x4bfc41u); f_00484470();
L_004bfc41:; BB(0x004bfc41);
    /* 004bfc41: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 004bfc43: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004bfc49: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004bfc4b: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004bfc51: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004bfc54: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bfc56u); call_ind(t); }
    /* 004bfc56: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 004bfc58: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004bfc5e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004bfc60: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004bfc66: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004bfc69: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4bfc6bu); call_ind(t); }
    /* 004bfc6b: jmp 0x4c353d */ goto L_004c353d;
L_004bfc70:; BB(0x004bfc70);
    /* 004bfc70: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bfc76: call 0x47e280 */ r_esp -= 4; W32(r_esp, 0x4bfc7bu); f_0047e280();
    /* 004bfc7b: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bfc7e: je 0x4c00cb */ if (fZ) goto L_004c00cb;
L_004bfc84:; BB(0x004bfc84);
    /* 004bfc84: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bfc8a: call 0x47d770 */ r_esp -= 4; W32(r_esp, 0x4bfc8fu); f_0047d770();
    /* 004bfc8f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bfc91: jne 0x4c00cb */ if (!fZ) goto L_004c00cb;
L_004bfc97:; BB(0x004bfc97);
    /* 004bfc97: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bfc99: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bfc9f: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004bfca2: call 0x4f73d0 */ r_esp -= 4; W32(r_esp, 0x4bfca7u); f_004f73d0();
    /* 004bfca7: mov word ptr [0x791e90], ax */ W16((u32)(0x791e90u), (u16)r_eax);
    /* 004bfcad: movsx ecx, word ptr [0x791e90] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x791e90u));
    /* 004bfcb4: cmp ecx, -4 */ {  u32 a = r_ecx; u32 b = 0xfffffffcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bfcb7: jne 0x4bfe9e */ if (!fZ) goto L_004bfe9e;
L_004bfcbd:; BB(0x004bfcbd);
    /* 004bfcbd: mov byte ptr [ebp - 0x5ad], 1 */ W8((u32)(r_ebp+0xfffffa53u), 0x1u);
L_004bfcc4:; BB(0x004bfcc4);
    /* 004bfcc4: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bfcca: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004bfccd: call 0x4f7ae0 */ r_esp -= 4; W32(r_esp, 0x4bfcd2u); f_004f7ae0();
    /* 004bfcd2: mov word ptr [0x791e90], ax */ W16((u32)(0x791e90u), (u16)r_eax);
    /* 004bfcd8: movsx edx, word ptr [0x791e90] */ r_edx = (u32)(i32)(i16)R16((u32)(0x791e90u));
    /* 004bfcdf: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bfce2: je 0x4bfe99 */ if (fZ) goto L_004bfe99;
L_004bfce8:; BB(0x004bfce8);
    /* 004bfce8: mov ax, word ptr [0x791e90] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x791e90u))) & 0xffffu);
    /* 004bfcee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bfcef: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bfcf5: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004bfcf8: call 0x4f78a0 */ r_esp -= 4; W32(r_esp, 0x4bfcfdu); f_004f78a0();
    /* 004bfcfd: mov esi, eax */ r_esi = r_eax;
    /* 004bfcff: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bfd05: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x4bfd0au); f_0047bc20();
    /* 004bfd0a: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004bfd0d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004bfd0e: movsx ecx, word ptr [0x791e90] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x791e90u));
    /* 004bfd15: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bfd16: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bfd1c: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4bfd21u); f_0047e3d0();
    /* 004bfd21: mov ecx, eax */ r_ecx = r_eax;
    /* 004bfd23: call 0x4c6b80 */ r_esp -= 4; W32(r_esp, 0x4bfd28u); f_004c6b80();
    /* 004bfd28: movsx edx, word ptr [0x791e90] */ r_edx = (u32)(i32)(i16)R16((u32)(0x791e90u));
    /* 004bfd2f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bfd30: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bfd36: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4bfd3bu); f_0047e3d0();
    /* 004bfd3b: mov ecx, eax */ r_ecx = r_eax;
    /* 004bfd3d: call 0x4da300 */ r_esp -= 4; W32(r_esp, 0x4bfd42u); f_004da300();
    /* 004bfd42: movsx eax, word ptr [0x791e90] */ r_eax = (u32)(i32)(i16)R16((u32)(0x791e90u));
    /* 004bfd49: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bfd4a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bfd50: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4bfd55u); f_0047e3d0();
    /* 004bfd55: mov ecx, eax */ r_ecx = r_eax;
    /* 004bfd57: call 0x4da360 */ r_esp -= 4; W32(r_esp, 0x4bfd5cu); f_004da360();
    /* 004bfd5c: movsx ecx, word ptr [0x791e90] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x791e90u));
    /* 004bfd63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bfd64: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bfd6a: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4bfd6fu); f_0047e3d0();
    /* 004bfd6f: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004bfd72: mov dword ptr [ebp - 0x5bc], edx */ W32((u32)(r_ebp+0xfffffa44u), r_edx);
    /* 004bfd78: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bfd7a: mov ax, word ptr [0x791e90] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x791e90u))) & 0xffffu);
    /* 004bfd80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bfd81: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bfd87: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004bfd8a: call 0x4f78a0 */ r_esp -= 4; W32(r_esp, 0x4bfd8fu); f_004f78a0();
    /* 004bfd8f: mov esi, eax */ r_esi = r_eax;
    /* 004bfd91: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bfd97: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x4bfd9cu); f_0047bc20();
    /* 004bfd9c: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004bfd9f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004bfda0: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x4bfda5u); f_0064c8a0();
    /* 004bfda5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bfda8: mov dword ptr [ebp - 0x718], eax */ W32((u32)(r_ebp+0xfffff8e8u), r_eax);
    /* 004bfdae: mov dword ptr [ebp - 0x714], edx */ W32((u32)(r_ebp+0xfffff8ecu), r_edx);
    /* 004bfdb4: mov ecx, dword ptr [ebp - 0x718] */ r_ecx = R32((u32)(r_ebp+0xfffff8e8u));
    /* 004bfdba: mov dword ptr [ebp - 0x5b8], ecx */ W32((u32)(r_ebp+0xfffffa48u), r_ecx);
    /* 004bfdc0: mov edx, dword ptr [ebp - 0x714] */ r_edx = R32((u32)(r_ebp+0xfffff8ecu));
    /* 004bfdc6: mov dword ptr [ebp - 0x5b4], edx */ W32((u32)(r_ebp+0xfffffa4cu), r_edx);
    /* 004bfdcc: mov eax, dword ptr [ebp - 0x5b4] */ r_eax = R32((u32)(r_ebp+0xfffffa4cu));
    /* 004bfdd2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bfdd3: mov ecx, dword ptr [ebp - 0x5b8] */ r_ecx = R32((u32)(r_ebp+0xfffffa48u));
    /* 004bfdd9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bfdda: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 004bfddc: mov edx, dword ptr [ebp - 0x5bc] */ r_edx = R32((u32)(r_ebp+0xfffffa44u));
    /* 004bfde2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bfde3: mov ecx, dword ptr [0x79506c] */ r_ecx = R32((u32)(0x79506cu));
    /* 004bfde9: call 0x5e7e40 */ r_esp -= 4; W32(r_esp, 0x4bfdeeu); f_005e7e40();
    /* 004bfdee: movzx eax, byte ptr [ebp - 0x5ad] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffa53u));
    /* 004bfdf5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bfdf7: je 0x4bfe4f */ if (fZ) goto L_004bfe4f;
L_004bfdf9:; BB(0x004bfdf9);
    /* 004bfdf9: movsx ecx, word ptr [0x791e90] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x791e90u));
    /* 004bfe00: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bfe01: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bfe07: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4bfe0cu); f_0047e3d0();
    /* 004bfe0c: mov ecx, eax */ r_ecx = r_eax;
    /* 004bfe0e: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x4bfe13u); f_004c6cb0();
    /* 004bfe13: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bfe16: jne 0x4bfe43 */ if (!fZ) goto L_004bfe43;
L_004bfe18:; BB(0x004bfe18);
    /* 004bfe18: mov dword ptr [0x791e48], 0xc */ W32((u32)(0x791e48u), 0xcu);
    /* 004bfe22: movsx edx, word ptr [0x791e90] */ r_edx = (u32)(i32)(i16)R16((u32)(0x791e90u));
    /* 004bfe29: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bfe2a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bfe30: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x4bfe35u); f_0047e490();
    /* 004bfe35: mov dword ptr [0x791e4c], eax */ W32((u32)(0x791e4cu), r_eax);
    /* 004bfe3a: mov byte ptr [ebp - 0x5ad], 0 */ W8((u32)(r_ebp+0xfffffa53u), 0x0u);
    /* 004bfe41: jmp 0x4bfe4d */ goto L_004bfe4d;
L_004bfe43:; BB(0x004bfe43);
    /* 004bfe43: mov dword ptr [0x791e48], 0 */ W32((u32)(0x791e48u), 0x0u);
L_004bfe4d:; BB(0x004bfe4d);
    /* 004bfe4d: jmp 0x4bfe94 */ goto L_004bfe94;
L_004bfe4f:; BB(0x004bfe4f);
    /* 004bfe4f: movsx eax, word ptr [0x791e90] */ r_eax = (u32)(i32)(i16)R16((u32)(0x791e90u));
    /* 004bfe56: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bfe57: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bfe5d: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4bfe62u); f_0047e3d0();
    /* 004bfe62: mov ecx, eax */ r_ecx = r_eax;
    /* 004bfe64: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x4bfe69u); f_004c6cb0();
    /* 004bfe69: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bfe6c: jne 0x4bfe94 */ if (!fZ) goto L_004bfe94;
L_004bfe6e:; BB(0x004bfe6e);
    /* 004bfe6e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004bfe70: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4bfe75u); f_0062fbf0();
    /* 004bfe75: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bfe78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bfe7a: jne 0x4bfe94 */ if (!fZ) goto L_004bfe94;
L_004bfe7c:; BB(0x004bfe7c);
    /* 004bfe7c: movsx ecx, word ptr [0x791e90] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x791e90u));
    /* 004bfe83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bfe84: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bfe8a: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x4bfe8fu); f_0047e490();
    /* 004bfe8f: mov dword ptr [0x791e4c], eax */ W32((u32)(0x791e4cu), r_eax);
L_004bfe94:; BB(0x004bfe94);
    /* 004bfe94: jmp 0x4bfcc4 */ goto L_004bfcc4;
L_004bfe99:; BB(0x004bfe99);
    /* 004bfe99: jmp 0x4c00c6 */ goto L_004c00c6;
L_004bfe9e:; BB(0x004bfe9e);
    /* 004bfe9e: movsx edx, word ptr [0x791e90] */ r_edx = (u32)(i32)(i16)R16((u32)(0x791e90u));
    /* 004bfea5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004bfea7: jge 0x4bfec0 */ if ((fS==fO)) goto L_004bfec0;
L_004bfea9:; BB(0x004bfea9);
    /* 004bfea9: push 0x9d6 */ { u32 v = 0x9d6u; r_esp -= 4; W32(r_esp, v); }
    /* 004bfeae: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004bfeb3: push 0x6bc2f8 */ { u32 v = 0x6bc2f8u; r_esp -= 4; W32(r_esp, v); }
    /* 004bfeb8: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4bfebdu); f_005e9f20();
    /* 004bfebd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004bfec0:; BB(0x004bfec0);
    /* 004bfec0: mov cx, word ptr [0x791e90] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x791e90u))) & 0xffffu);
    /* 004bfec7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bfec8: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bfece: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004bfed1: call 0x4f78a0 */ r_esp -= 4; W32(r_esp, 0x4bfed6u); f_004f78a0();
    /* 004bfed6: mov esi, eax */ r_esi = r_eax;
    /* 004bfed8: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bfede: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x4bfee3u); f_0047bc20();
    /* 004bfee3: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004bfee6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004bfee7: movsx edx, word ptr [0x791e90] */ r_edx = (u32)(i32)(i16)R16((u32)(0x791e90u));
    /* 004bfeee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bfeef: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bfef5: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4bfefau); f_0047e3d0();
    /* 004bfefa: mov ecx, eax */ r_ecx = r_eax;
    /* 004bfefc: call 0x4c6b80 */ r_esp -= 4; W32(r_esp, 0x4bff01u); f_004c6b80();
    /* 004bff01: movsx eax, word ptr [0x791e90] */ r_eax = (u32)(i32)(i16)R16((u32)(0x791e90u));
    /* 004bff08: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bff09: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bff0f: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4bff14u); f_0047e3d0();
    /* 004bff14: mov ecx, eax */ r_ecx = r_eax;
    /* 004bff16: call 0x4da300 */ r_esp -= 4; W32(r_esp, 0x4bff1bu); f_004da300();
    /* 004bff1b: movsx ecx, word ptr [0x791e90] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x791e90u));
    /* 004bff22: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bff23: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bff29: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4bff2eu); f_0047e3d0();
    /* 004bff2e: mov ecx, eax */ r_ecx = r_eax;
    /* 004bff30: call 0x4da360 */ r_esp -= 4; W32(r_esp, 0x4bff35u); f_004da360();
    /* 004bff35: movsx edx, word ptr [0x791e90] */ r_edx = (u32)(i32)(i16)R16((u32)(0x791e90u));
    /* 004bff3c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bff3d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bff43: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4bff48u); f_0047e3d0();
    /* 004bff48: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 004bff4b: mov dword ptr [ebp - 0x5c8], eax */ W32((u32)(r_ebp+0xfffffa38u), r_eax);
    /* 004bff51: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bff53: mov cx, word ptr [0x791e90] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x791e90u))) & 0xffffu);
    /* 004bff5a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bff5b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bff61: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004bff64: call 0x4f78a0 */ r_esp -= 4; W32(r_esp, 0x4bff69u); f_004f78a0();
    /* 004bff69: mov esi, eax */ r_esi = r_eax;
    /* 004bff6b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bff71: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x4bff76u); f_0047bc20();
    /* 004bff76: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004bff79: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004bff7a: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x4bff7fu); f_0064c8a0();
    /* 004bff7f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bff82: mov dword ptr [ebp - 0x720], eax */ W32((u32)(r_ebp+0xfffff8e0u), r_eax);
    /* 004bff88: mov dword ptr [ebp - 0x71c], edx */ W32((u32)(r_ebp+0xfffff8e4u), r_edx);
    /* 004bff8e: mov edx, dword ptr [ebp - 0x720] */ r_edx = R32((u32)(r_ebp+0xfffff8e0u));
    /* 004bff94: mov dword ptr [ebp - 0x5c4], edx */ W32((u32)(r_ebp+0xfffffa3cu), r_edx);
    /* 004bff9a: mov eax, dword ptr [ebp - 0x71c] */ r_eax = R32((u32)(r_ebp+0xfffff8e4u));
    /* 004bffa0: mov dword ptr [ebp - 0x5c0], eax */ W32((u32)(r_ebp+0xfffffa40u), r_eax);
    /* 004bffa6: mov ecx, dword ptr [ebp - 0x5c0] */ r_ecx = R32((u32)(r_ebp+0xfffffa40u));
    /* 004bffac: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bffad: mov edx, dword ptr [ebp - 0x5c4] */ r_edx = R32((u32)(r_ebp+0xfffffa3cu));
    /* 004bffb3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bffb4: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 004bffb6: mov eax, dword ptr [ebp - 0x5c8] */ r_eax = R32((u32)(r_ebp+0xfffffa38u));
    /* 004bffbc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bffbd: mov ecx, dword ptr [0x79506c] */ r_ecx = R32((u32)(0x79506cu));
    /* 004bffc3: call 0x5e7e40 */ r_esp -= 4; W32(r_esp, 0x4bffc8u); f_005e7e40();
    /* 004bffc8: movzx ecx, byte ptr [0x791e39] */ r_ecx = (u32)R8((u32)(0x791e39u));
    /* 004bffcf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bffd1: je 0x4c0030 */ if (fZ) goto L_004c0030;
L_004bffd3:; BB(0x004bffd3);
    /* 004bffd3: mov dx, word ptr [0x791e90] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x791e90u))) & 0xffffu);
    /* 004bffda: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bffdb: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004bffe1: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004bffe4: call 0x4f78a0 */ r_esp -= 4; W32(r_esp, 0x4bffe9u); f_004f78a0();
    /* 004bffe9: mov esi, eax */ r_esi = r_eax;
    /* 004bffeb: mov eax, dword ptr [0x791e50] */ r_eax = R32((u32)(0x791e50u));
    /* 004bfff0: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004bfff2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bfff3: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4bfff8u); f_0062fbf0();
    /* 004bfff8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bfffb: mov edi, eax */ r_edi = r_eax;
    /* 004bfffd: mov ecx, dword ptr [0x791e50] */ r_ecx = R32((u32)(0x791e50u));
    /* 004c0003: shl ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 004c0005: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c0006: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4c000bu); f_0062fbf0();
    /* 004c000b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c000e: lea edi, [edi + eax + 5] */ r_edi = (u32)(r_edi+r_eax+0x5u);
    /* 004c0012: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c0018: call 0x47bde0 */ r_esp -= 4; W32(r_esp, 0x4c001du); f_0047bde0();
    /* 004c001d: imul edi, eax */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_eax; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004c0020: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c0022: jle 0x4c0030 */ if ((fZ||fS!=fO)) goto L_004c0030;
L_004c0024:; BB(0x004c0024);
    /* 004c0024: mov dword ptr [0x791e48], 0xa */ W32((u32)(0x791e48u), 0xau);
    /* 004c002e: jmp 0x4c00ae */ goto L_004c00ae;
L_004c0030:; BB(0x004c0030);
    /* 004c0030: movzx edx, byte ptr [0x791e39] */ r_edx = (u32)R8((u32)(0x791e39u));
    /* 004c0037: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c0039: je 0x4c00a4 */ if (fZ) goto L_004c00a4;
L_004c003b:; BB(0x004c003b);
    /* 004c003b: mov ax, word ptr [0x791e90] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x791e90u))) & 0xffffu);
    /* 004c0041: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c0042: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c0048: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c004b: call 0x4f78a0 */ r_esp -= 4; W32(r_esp, 0x4c0050u); f_004f78a0();
    /* 004c0050: mov esi, eax */ r_esi = r_eax;
    /* 004c0052: mov eax, dword ptr [0x791e50] */ r_eax = R32((u32)(0x791e50u));
    /* 004c0057: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004c0058: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004c005b: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c005d: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004c0060: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c0061: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4c0066u); f_0062fbf0();
    /* 004c0066: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c0069: mov edi, eax */ r_edi = r_eax;
    /* 004c006b: mov eax, dword ptr [0x791e50] */ r_eax = R32((u32)(0x791e50u));
    /* 004c0070: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004c0071: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004c0074: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c0076: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004c0079: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c007a: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4c007fu); f_0062fbf0();
    /* 004c007f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c0082: lea edi, [edi + eax + 3] */ r_edi = (u32)(r_edi+r_eax+0x3u);
    /* 004c0086: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c008c: call 0x47bce0 */ r_esp -= 4; W32(r_esp, 0x4c0091u); f_0047bce0();
    /* 004c0091: imul edi, eax */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_eax; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004c0094: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c0096: jge 0x4c00a4 */ if ((fS==fO)) goto L_004c00a4;
L_004c0098:; BB(0x004c0098);
    /* 004c0098: mov dword ptr [0x791e48], 9 */ W32((u32)(0x791e48u), 0x9u);
    /* 004c00a2: jmp 0x4c00ae */ goto L_004c00ae;
L_004c00a4:; BB(0x004c00a4);
    /* 004c00a4: mov dword ptr [0x791e48], 7 */ W32((u32)(0x791e48u), 0x7u);
L_004c00ae:; BB(0x004c00ae);
    /* 004c00ae: movsx ecx, word ptr [0x791e90] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x791e90u));
    /* 004c00b5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c00b6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c00bc: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x4c00c1u); f_0047e490();
    /* 004c00c1: mov dword ptr [0x791e4c], eax */ W32((u32)(0x791e4cu), r_eax);
L_004c00c6:; BB(0x004c00c6);
    /* 004c00c6: jmp 0x4c1023 */ goto L_004c1023;
L_004c00cb:; BB(0x004c00cb);
    /* 004c00cb: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c00d1: call 0x47d7f0 */ r_esp -= 4; W32(r_esp, 0x4c00d6u); f_0047d7f0();
    /* 004c00d6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c00d9: jne 0x4c0153 */ if (!fZ) goto L_004c0153;
L_004c00db:; BB(0x004c00db);
    /* 004c00db: lea ecx, [ebp - 0x724] */ r_ecx = (u32)(r_ebp+0xfffff8dcu);
    /* 004c00e1: call 0x4a20d0 */ r_esp -= 4; W32(r_esp, 0x4c00e6u); f_004a20d0();
    /* 004c00e6: mov dword ptr [ebp - 0x944], eax */ W32((u32)(r_ebp+0xfffff6bcu), r_eax);
    /* 004c00ec: mov edx, dword ptr [ebp - 0x944] */ r_edx = R32((u32)(r_ebp+0xfffff6bcu));
    /* 004c00f2: mov dword ptr [ebp - 0x948], edx */ W32((u32)(r_ebp+0xfffff6b8u), r_edx);
    /* 004c00f8: mov dword ptr [ebp - 4], 0x4a */ W32((u32)(r_ebp+0xfffffffcu), 0x4au);
    /* 004c00ff: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 004c0104: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 004c0109: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 004c010e: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 004c0113: mov eax, dword ptr [0x7913f4] */ r_eax = R32((u32)(0x7913f4u));
    /* 004c0118: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c0119: mov ecx, dword ptr [0x791390] */ r_ecx = R32((u32)(0x791390u));
    /* 004c011f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c0120: mov ecx, dword ptr [ebp - 0x948] */ r_ecx = R32((u32)(r_ebp+0xfffff6b8u));
    /* 004c0126: call 0x4a2100 */ r_esp -= 4; W32(r_esp, 0x4c012bu); f_004a2100();
    /* 004c012b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004c012d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c012e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c0134: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c0137: call 0x4f7bd0 */ r_esp -= 4; W32(r_esp, 0x4c013cu); f_004f7bd0();
    /* 004c013c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004c0143: lea ecx, [ebp - 0x724] */ r_ecx = (u32)(r_ebp+0xfffff8dcu);
    /* 004c0149: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x4c014eu); f_004a20f0();
    /* 004c014e: jmp 0x4c024c */ goto L_004c024c;
L_004c0153:; BB(0x004c0153);
    /* 004c0153: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c0159: call 0x47d770 */ r_esp -= 4; W32(r_esp, 0x4c015eu); f_0047d770();
    /* 004c015e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c0161: jne 0x4c01d9 */ if (!fZ) goto L_004c01d9;
L_004c0163:; BB(0x004c0163);
    /* 004c0163: lea ecx, [ebp - 0x728] */ r_ecx = (u32)(r_ebp+0xfffff8d8u);
    /* 004c0169: call 0x4a20d0 */ r_esp -= 4; W32(r_esp, 0x4c016eu); f_004a20d0();
    /* 004c016e: mov dword ptr [ebp - 0x94c], eax */ W32((u32)(r_ebp+0xfffff6b4u), r_eax);
    /* 004c0174: mov eax, dword ptr [ebp - 0x94c] */ r_eax = R32((u32)(r_ebp+0xfffff6b4u));
    /* 004c017a: mov dword ptr [ebp - 0x950], eax */ W32((u32)(r_ebp+0xfffff6b0u), r_eax);
    /* 004c0180: mov dword ptr [ebp - 4], 0x4b */ W32((u32)(r_ebp+0xfffffffcu), 0x4bu);
    /* 004c0187: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 004c018c: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 004c0191: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 004c0196: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 004c019b: mov ecx, dword ptr [0x7913b4] */ r_ecx = R32((u32)(0x7913b4u));
    /* 004c01a1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c01a2: mov edx, dword ptr [0x7913b0] */ r_edx = R32((u32)(0x7913b0u));
    /* 004c01a8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c01a9: mov ecx, dword ptr [ebp - 0x950] */ r_ecx = R32((u32)(r_ebp+0xfffff6b0u));
    /* 004c01af: call 0x4a2100 */ r_esp -= 4; W32(r_esp, 0x4c01b4u); f_004a2100();
    /* 004c01b4: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004c01b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c01b7: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c01bd: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c01c0: call 0x4f7bd0 */ r_esp -= 4; W32(r_esp, 0x4c01c5u); f_004f7bd0();
    /* 004c01c5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004c01cc: lea ecx, [ebp - 0x728] */ r_ecx = (u32)(r_ebp+0xfffff8d8u);
    /* 004c01d2: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x4c01d7u); f_004a20f0();
    /* 004c01d7: jmp 0x4c024c */ goto L_004c024c;
L_004c01d9:; BB(0x004c01d9);
    /* 004c01d9: lea ecx, [ebp - 0x72c] */ r_ecx = (u32)(r_ebp+0xfffff8d4u);
    /* 004c01df: call 0x4a20d0 */ r_esp -= 4; W32(r_esp, 0x4c01e4u); f_004a20d0();
    /* 004c01e4: mov dword ptr [ebp - 0x954], eax */ W32((u32)(r_ebp+0xfffff6acu), r_eax);
    /* 004c01ea: mov ecx, dword ptr [ebp - 0x954] */ r_ecx = R32((u32)(r_ebp+0xfffff6acu));
    /* 004c01f0: mov dword ptr [ebp - 0x958], ecx */ W32((u32)(r_ebp+0xfffff6a8u), r_ecx);
    /* 004c01f6: mov dword ptr [ebp - 4], 0x4c */ W32((u32)(r_ebp+0xfffffffcu), 0x4cu);
    /* 004c01fd: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 004c0202: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 004c0207: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 004c020c: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 004c0211: mov edx, dword ptr [0x7913c8] */ r_edx = R32((u32)(0x7913c8u));
    /* 004c0217: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c0218: mov eax, dword ptr [0x7913cc] */ r_eax = R32((u32)(0x7913ccu));
    /* 004c021d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c021e: mov ecx, dword ptr [ebp - 0x958] */ r_ecx = R32((u32)(r_ebp+0xfffff6a8u));
    /* 004c0224: call 0x4a2100 */ r_esp -= 4; W32(r_esp, 0x4c0229u); f_004a2100();
    /* 004c0229: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 004c022b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c022c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c0232: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c0235: call 0x4f7bd0 */ r_esp -= 4; W32(r_esp, 0x4c023au); f_004f7bd0();
    /* 004c023a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004c0241: lea ecx, [ebp - 0x72c] */ r_ecx = (u32)(r_ebp+0xfffff8d4u);
    /* 004c0247: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x4c024cu); f_004a20f0();
L_004c024c:; BB(0x004c024c);
    /* 004c024c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c024e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c0254: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c0257: call 0x4f8c30 */ r_esp -= 4; W32(r_esp, 0x4c025cu); f_004f8c30();
    /* 004c025c: mov word ptr [ebp - 0x5cc], ax */ W16((u32)(r_ebp+0xfffffa34u), (u16)r_eax);
    /* 004c0263: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c0265: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c026b: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c026e: call 0x4f8c30 */ r_esp -= 4; W32(r_esp, 0x4c0273u); f_004f8c30();
    /* 004c0273: mov word ptr [ebp - 0x5d0], ax */ W16((u32)(r_ebp+0xfffffa30u), (u16)r_eax);
    /* 004c027a: movsx edx, word ptr [ebp - 0x5cc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffa34u));
    /* 004c0281: cmp edx, -5 */ {  u32 a = r_edx; u32 b = 0xfffffffbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c0284: jne 0x4c02a9 */ if (!fZ) goto L_004c02a9;
L_004c0286:; BB(0x004c0286);
    /* 004c0286: movsx eax, word ptr [ebp - 0x5d0] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffa30u));
    /* 004c028d: cmp eax, -5 */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c0290: jne 0x4c02a9 */ if (!fZ) goto L_004c02a9;
L_004c0292:; BB(0x004c0292);
    /* 004c0292: push 0x9fa */ { u32 v = 0x9fau; r_esp -= 4; W32(r_esp, v); }
    /* 004c0297: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004c029c: push 0x6bc2b0 */ { u32 v = 0x6bc2b0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c02a1: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4c02a6u); f_005e9f20();
    /* 004c02a6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004c02a9:; BB(0x004c02a9);
    /* 004c02a9: movsx edx, word ptr [ebp - 0x5cc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffa34u));
    /* 004c02b0: cmp edx, -4 */ {  u32 a = r_edx; u32 b = 0xfffffffcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c02b3: jne 0x4c04bf */ if (!fZ) goto L_004c04bf;
L_004c02b9:; BB(0x004c02b9);
    /* 004c02b9: mov byte ptr [ebp - 0x5d1], 1 */ W8((u32)(r_ebp+0xfffffa2fu), 0x1u);
L_004c02c0:; BB(0x004c02c0);
    /* 004c02c0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c02c2: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c02c8: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c02cb: call 0x4f8d90 */ r_esp -= 4; W32(r_esp, 0x4c02d0u); f_004f8d90();
    /* 004c02d0: mov word ptr [ebp - 0x5cc], ax */ W16((u32)(r_ebp+0xfffffa34u), (u16)r_eax);
    /* 004c02d7: movsx eax, word ptr [ebp - 0x5cc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffa34u));
    /* 004c02de: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c02e1: je 0x4c04ba */ if (fZ) goto L_004c04ba;
L_004c02e7:; BB(0x004c02e7);
    /* 004c02e7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c02e9: mov cx, word ptr [ebp - 0x5cc] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffa34u))) & 0xffffu);
    /* 004c02f0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c02f1: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c02f7: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c02fa: call 0x4f79b0 */ r_esp -= 4; W32(r_esp, 0x4c02ffu); f_004f79b0();
    /* 004c02ff: mov esi, eax */ r_esi = r_eax;
    /* 004c0301: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c0307: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x4c030cu); f_0047bc20();
    /* 004c030c: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004c030f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004c0310: movsx edx, word ptr [ebp - 0x5cc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffa34u));
    /* 004c0317: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c0318: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c031e: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4c0323u); f_0047e3d0();
    /* 004c0323: mov ecx, eax */ r_ecx = r_eax;
    /* 004c0325: call 0x4c6b80 */ r_esp -= 4; W32(r_esp, 0x4c032au); f_004c6b80();
    /* 004c032a: movsx eax, word ptr [ebp - 0x5cc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffa34u));
    /* 004c0331: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c0332: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c0338: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4c033du); f_0047e3d0();
    /* 004c033d: mov ecx, eax */ r_ecx = r_eax;
    /* 004c033f: call 0x4da300 */ r_esp -= 4; W32(r_esp, 0x4c0344u); f_004da300();
    /* 004c0344: movsx ecx, word ptr [ebp - 0x5cc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffa34u));
    /* 004c034b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c034c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c0352: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4c0357u); f_0047e3d0();
    /* 004c0357: mov ecx, eax */ r_ecx = r_eax;
    /* 004c0359: call 0x4da470 */ r_esp -= 4; W32(r_esp, 0x4c035eu); f_004da470();
    /* 004c035e: movsx edx, word ptr [ebp - 0x5cc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffa34u));
    /* 004c0365: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c0366: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c036c: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4c0371u); f_0047e3d0();
    /* 004c0371: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 004c0374: mov dword ptr [ebp - 0x5e0], eax */ W32((u32)(r_ebp+0xfffffa20u), r_eax);
    /* 004c037a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c037c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c037e: mov cx, word ptr [ebp - 0x5cc] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffa34u))) & 0xffffu);
    /* 004c0385: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c0386: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c038c: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c038f: call 0x4f79b0 */ r_esp -= 4; W32(r_esp, 0x4c0394u); f_004f79b0();
    /* 004c0394: mov esi, eax */ r_esi = r_eax;
    /* 004c0396: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c039c: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x4c03a1u); f_0047bc20();
    /* 004c03a1: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004c03a4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004c03a5: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x4c03aau); f_0064c8a0();
    /* 004c03aa: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c03ad: mov dword ptr [ebp - 0x734], eax */ W32((u32)(r_ebp+0xfffff8ccu), r_eax);
    /* 004c03b3: mov dword ptr [ebp - 0x730], edx */ W32((u32)(r_ebp+0xfffff8d0u), r_edx);
    /* 004c03b9: mov edx, dword ptr [ebp - 0x734] */ r_edx = R32((u32)(r_ebp+0xfffff8ccu));
    /* 004c03bf: mov dword ptr [ebp - 0x5dc], edx */ W32((u32)(r_ebp+0xfffffa24u), r_edx);
    /* 004c03c5: mov eax, dword ptr [ebp - 0x730] */ r_eax = R32((u32)(r_ebp+0xfffff8d0u));
    /* 004c03cb: mov dword ptr [ebp - 0x5d8], eax */ W32((u32)(r_ebp+0xfffffa28u), r_eax);
    /* 004c03d1: mov ecx, dword ptr [ebp - 0x5d8] */ r_ecx = R32((u32)(r_ebp+0xfffffa28u));
    /* 004c03d7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c03d8: mov edx, dword ptr [ebp - 0x5dc] */ r_edx = R32((u32)(r_ebp+0xfffffa24u));
    /* 004c03de: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c03df: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 004c03e1: mov eax, dword ptr [ebp - 0x5e0] */ r_eax = R32((u32)(r_ebp+0xfffffa20u));
    /* 004c03e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c03e8: mov ecx, dword ptr [0x79506c] */ r_ecx = R32((u32)(0x79506cu));
    /* 004c03ee: call 0x5e7e40 */ r_esp -= 4; W32(r_esp, 0x4c03f3u); f_005e7e40();
    /* 004c03f3: movsx ecx, word ptr [ebp - 0x5d0] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffa30u));
    /* 004c03fa: cmp ecx, -5 */ {  u32 a = r_ecx; u32 b = 0xfffffffbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c03fd: jne 0x4c04ab */ if (!fZ) goto L_004c04ab;
L_004c0403:; BB(0x004c0403);
    /* 004c0403: movzx edx, byte ptr [ebp - 0x5d1] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffa2fu));
    /* 004c040a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c040c: je 0x4c0464 */ if (fZ) goto L_004c0464;
L_004c040e:; BB(0x004c040e);
    /* 004c040e: movsx eax, word ptr [ebp - 0x5cc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffa34u));
    /* 004c0415: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c0416: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c041c: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4c0421u); f_0047e3d0();
    /* 004c0421: mov ecx, eax */ r_ecx = r_eax;
    /* 004c0423: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x4c0428u); f_004c6cb0();
    /* 004c0428: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c042b: jne 0x4c0458 */ if (!fZ) goto L_004c0458;
L_004c042d:; BB(0x004c042d);
    /* 004c042d: mov dword ptr [0x791e48], 0xc */ W32((u32)(0x791e48u), 0xcu);
    /* 004c0437: movsx ecx, word ptr [ebp - 0x5cc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffa34u));
    /* 004c043e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c043f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c0445: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x4c044au); f_0047e490();
    /* 004c044a: mov dword ptr [0x791e4c], eax */ W32((u32)(0x791e4cu), r_eax);
    /* 004c044f: mov byte ptr [ebp - 0x5d1], 0 */ W8((u32)(r_ebp+0xfffffa2fu), 0x0u);
    /* 004c0456: jmp 0x4c0462 */ goto L_004c0462;
L_004c0458:; BB(0x004c0458);
    /* 004c0458: mov dword ptr [0x791e48], 0 */ W32((u32)(0x791e48u), 0x0u);
L_004c0462:; BB(0x004c0462);
    /* 004c0462: jmp 0x4c04a9 */ goto L_004c04a9;
L_004c0464:; BB(0x004c0464);
    /* 004c0464: movsx edx, word ptr [ebp - 0x5cc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffa34u));
    /* 004c046b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c046c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c0472: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4c0477u); f_0047e3d0();
    /* 004c0477: mov ecx, eax */ r_ecx = r_eax;
    /* 004c0479: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x4c047eu); f_004c6cb0();
    /* 004c047e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c0481: jne 0x4c04a9 */ if (!fZ) goto L_004c04a9;
L_004c0483:; BB(0x004c0483);
    /* 004c0483: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004c0485: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4c048au); f_0062fbf0();
    /* 004c048a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c048d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c048f: jne 0x4c04a9 */ if (!fZ) goto L_004c04a9;
L_004c0491:; BB(0x004c0491);
    /* 004c0491: movsx eax, word ptr [ebp - 0x5cc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffa34u));
    /* 004c0498: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c0499: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c049f: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x4c04a4u); f_0047e490();
    /* 004c04a4: mov dword ptr [0x791e4c], eax */ W32((u32)(0x791e4cu), r_eax);
L_004c04a9:; BB(0x004c04a9);
    /* 004c04a9: jmp 0x4c04b5 */ goto L_004c04b5;
L_004c04ab:; BB(0x004c04ab);
    /* 004c04ab: mov dword ptr [0x791e48], 0 */ W32((u32)(0x791e48u), 0x0u);
L_004c04b5:; BB(0x004c04b5);
    /* 004c04b5: jmp 0x4c02c0 */ goto L_004c02c0;
L_004c04ba:; BB(0x004c04ba);
    /* 004c04ba: jmp 0x4c092d */ goto L_004c092d;
L_004c04bf:; BB(0x004c04bf);
    /* 004c04bf: movsx ecx, word ptr [ebp - 0x5cc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffa34u));
    /* 004c04c6: cmp ecx, -5 */ {  u32 a = r_ecx; u32 b = 0xfffffffbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c04c9: jne 0x4c04d0 */ if (!fZ) goto L_004c04d0;
L_004c04cb:; BB(0x004c04cb);
    /* 004c04cb: jmp 0x4c092d */ goto L_004c092d;
L_004c04d0:; BB(0x004c04d0);
    /* 004c04d0: movsx edx, word ptr [ebp - 0x5cc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffa34u));
    /* 004c04d7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004c04d9: jge 0x4c04f2 */ if ((fS==fO)) goto L_004c04f2;
L_004c04db:; BB(0x004c04db);
    /* 004c04db: push 0xa2f */ { u32 v = 0xa2fu; r_esp -= 4; W32(r_esp, v); }
    /* 004c04e0: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004c04e5: push 0x6bc29c */ { u32 v = 0x6bc29cu; r_esp -= 4; W32(r_esp, v); }
    /* 004c04ea: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4c04efu); f_005e9f20();
    /* 004c04ef: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004c04f2:; BB(0x004c04f2);
    /* 004c04f2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c04f4: mov cx, word ptr [ebp - 0x5cc] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffa34u))) & 0xffffu);
    /* 004c04fb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c04fc: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c0502: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c0505: call 0x4f79b0 */ r_esp -= 4; W32(r_esp, 0x4c050au); f_004f79b0();
    /* 004c050a: mov esi, eax */ r_esi = r_eax;
    /* 004c050c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c0512: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x4c0517u); f_0047bc20();
    /* 004c0517: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004c051a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004c051b: movsx edx, word ptr [ebp - 0x5cc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffa34u));
    /* 004c0522: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c0523: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c0529: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4c052eu); f_0047e3d0();
    /* 004c052e: mov ecx, eax */ r_ecx = r_eax;
    /* 004c0530: call 0x4c6b80 */ r_esp -= 4; W32(r_esp, 0x4c0535u); f_004c6b80();
    /* 004c0535: movsx eax, word ptr [ebp - 0x5cc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffa34u));
    /* 004c053c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c053d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c0543: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4c0548u); f_0047e3d0();
    /* 004c0548: mov ecx, eax */ r_ecx = r_eax;
    /* 004c054a: call 0x4da300 */ r_esp -= 4; W32(r_esp, 0x4c054fu); f_004da300();
    /* 004c054f: movsx ecx, word ptr [ebp - 0x5cc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffa34u));
    /* 004c0556: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c0557: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c055d: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4c0562u); f_0047e3d0();
    /* 004c0562: mov ecx, eax */ r_ecx = r_eax;
    /* 004c0564: call 0x4da470 */ r_esp -= 4; W32(r_esp, 0x4c0569u); f_004da470();
    /* 004c0569: movsx edx, word ptr [ebp - 0x5cc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffa34u));
    /* 004c0570: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c0571: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c0577: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4c057cu); f_0047e3d0();
    /* 004c057c: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 004c057f: mov dword ptr [ebp - 0x5ec], eax */ W32((u32)(r_ebp+0xfffffa14u), r_eax);
    /* 004c0585: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c0587: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c0589: mov cx, word ptr [ebp - 0x5cc] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffa34u))) & 0xffffu);
    /* 004c0590: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c0591: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c0597: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c059a: call 0x4f79b0 */ r_esp -= 4; W32(r_esp, 0x4c059fu); f_004f79b0();
    /* 004c059f: mov esi, eax */ r_esi = r_eax;
    /* 004c05a1: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c05a7: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x4c05acu); f_0047bc20();
    /* 004c05ac: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004c05af: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004c05b0: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x4c05b5u); f_0064c8a0();
    /* 004c05b5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c05b8: mov dword ptr [ebp - 0x73c], eax */ W32((u32)(r_ebp+0xfffff8c4u), r_eax);
    /* 004c05be: mov dword ptr [ebp - 0x738], edx */ W32((u32)(r_ebp+0xfffff8c8u), r_edx);
    /* 004c05c4: mov edx, dword ptr [ebp - 0x73c] */ r_edx = R32((u32)(r_ebp+0xfffff8c4u));
    /* 004c05ca: mov dword ptr [ebp - 0x5e8], edx */ W32((u32)(r_ebp+0xfffffa18u), r_edx);
    /* 004c05d0: mov eax, dword ptr [ebp - 0x738] */ r_eax = R32((u32)(r_ebp+0xfffff8c8u));
    /* 004c05d6: mov dword ptr [ebp - 0x5e4], eax */ W32((u32)(r_ebp+0xfffffa1cu), r_eax);
    /* 004c05dc: mov ecx, dword ptr [ebp - 0x5e4] */ r_ecx = R32((u32)(r_ebp+0xfffffa1cu));
    /* 004c05e2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c05e3: mov edx, dword ptr [ebp - 0x5e8] */ r_edx = R32((u32)(r_ebp+0xfffffa18u));
    /* 004c05e9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c05ea: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 004c05ec: mov eax, dword ptr [ebp - 0x5ec] */ r_eax = R32((u32)(r_ebp+0xfffffa14u));
    /* 004c05f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c05f3: mov ecx, dword ptr [0x79506c] */ r_ecx = R32((u32)(0x79506cu));
    /* 004c05f9: call 0x5e7e40 */ r_esp -= 4; W32(r_esp, 0x4c05feu); f_005e7e40();
    /* 004c05fe: movsx ecx, word ptr [ebp - 0x5d0] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffa30u));
    /* 004c0605: cmp ecx, -5 */ {  u32 a = r_ecx; u32 b = 0xfffffffbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c0608: jne 0x4c071a */ if (!fZ) goto L_004c071a;
L_004c060e:; BB(0x004c060e);
    /* 004c060e: movzx edx, byte ptr [0x791e39] */ r_edx = (u32)R8((u32)(0x791e39u));
    /* 004c0615: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c0617: je 0x4c067c */ if (fZ) goto L_004c067c;
L_004c0619:; BB(0x004c0619);
    /* 004c0619: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c061b: mov ax, word ptr [ebp - 0x5cc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffa34u))) & 0xffffu);
    /* 004c0622: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c0623: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c0629: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c062c: call 0x4f79b0 */ r_esp -= 4; W32(r_esp, 0x4c0631u); f_004f79b0();
    /* 004c0631: mov esi, eax */ r_esi = r_eax;
    /* 004c0633: mov ecx, dword ptr [0x791e50] */ r_ecx = R32((u32)(0x791e50u));
    /* 004c0639: shl ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 004c063b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c063c: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4c0641u); f_0062fbf0();
    /* 004c0641: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c0644: mov edi, eax */ r_edi = r_eax;
    /* 004c0646: mov edx, dword ptr [0x791e50] */ r_edx = R32((u32)(0x791e50u));
    /* 004c064c: shl edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 004c064e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c064f: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4c0654u); f_0062fbf0();
    /* 004c0654: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c0657: lea edi, [edi + eax + 5] */ r_edi = (u32)(r_edi+r_eax+0x5u);
    /* 004c065b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c0661: call 0x47bde0 */ r_esp -= 4; W32(r_esp, 0x4c0666u); f_0047bde0();
    /* 004c0666: imul edi, eax */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_eax; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004c0669: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c066b: jle 0x4c067c */ if ((fZ||fS!=fO)) goto L_004c067c;
L_004c066d:; BB(0x004c066d);
    /* 004c066d: mov dword ptr [0x791e48], 0xa */ W32((u32)(0x791e48u), 0xau);
    /* 004c0677: jmp 0x4c06fd */ goto L_004c06fd;
L_004c067c:; BB(0x004c067c);
    /* 004c067c: movzx eax, byte ptr [0x791e39] */ r_eax = (u32)R8((u32)(0x791e39u));
    /* 004c0683: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c0685: je 0x4c06f3 */ if (fZ) goto L_004c06f3;
L_004c0687:; BB(0x004c0687);
    /* 004c0687: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c0689: mov cx, word ptr [ebp - 0x5cc] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffa34u))) & 0xffffu);
    /* 004c0690: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c0691: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c0697: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c069a: call 0x4f79b0 */ r_esp -= 4; W32(r_esp, 0x4c069fu); f_004f79b0();
    /* 004c069f: mov esi, eax */ r_esi = r_eax;
    /* 004c06a1: mov eax, dword ptr [0x791e50] */ r_eax = R32((u32)(0x791e50u));
    /* 004c06a6: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004c06a7: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004c06aa: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c06ac: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004c06af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c06b0: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4c06b5u); f_0062fbf0();
    /* 004c06b5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c06b8: mov edi, eax */ r_edi = r_eax;
    /* 004c06ba: mov eax, dword ptr [0x791e50] */ r_eax = R32((u32)(0x791e50u));
    /* 004c06bf: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004c06c0: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004c06c3: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c06c5: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004c06c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c06c9: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4c06ceu); f_0062fbf0();
    /* 004c06ce: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c06d1: lea edi, [edi + eax + 3] */ r_edi = (u32)(r_edi+r_eax+0x3u);
    /* 004c06d5: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c06db: call 0x47bce0 */ r_esp -= 4; W32(r_esp, 0x4c06e0u); f_0047bce0();
    /* 004c06e0: imul edi, eax */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_eax; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004c06e3: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c06e5: jge 0x4c06f3 */ if ((fS==fO)) goto L_004c06f3;
L_004c06e7:; BB(0x004c06e7);
    /* 004c06e7: mov dword ptr [0x791e48], 9 */ W32((u32)(0x791e48u), 0x9u);
    /* 004c06f1: jmp 0x4c06fd */ goto L_004c06fd;
L_004c06f3:; BB(0x004c06f3);
    /* 004c06f3: mov dword ptr [0x791e48], 7 */ W32((u32)(0x791e48u), 0x7u);
L_004c06fd:; BB(0x004c06fd);
    /* 004c06fd: movsx edx, word ptr [ebp - 0x5cc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffa34u));
    /* 004c0704: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c0705: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c070b: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x4c0710u); f_0047e490();
    /* 004c0710: mov dword ptr [0x791e4c], eax */ W32((u32)(0x791e4cu), r_eax);
    /* 004c0715: jmp 0x4c092d */ goto L_004c092d;
L_004c071a:; BB(0x004c071a);
    /* 004c071a: movsx eax, word ptr [ebp - 0x5d0] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffa30u));
    /* 004c0721: cmp eax, -4 */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c0724: je 0x4c0923 */ if (fZ) goto L_004c0923;
L_004c072a:; BB(0x004c072a);
    /* 004c072a: movsx ecx, word ptr [ebp - 0x5d0] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffa30u));
    /* 004c0731: movsx edx, word ptr [ebp - 0x5cc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffa34u));
    /* 004c0738: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c073a: jne 0x4c079e */ if (!fZ) goto L_004c079e;
L_004c073c:; BB(0x004c073c);
    /* 004c073c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c0742: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x4c0747u); f_0047e190();
    /* 004c0747: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c074a: jne 0x4c0777 */ if (!fZ) goto L_004c0777;
L_004c074c:; BB(0x004c074c);
    /* 004c074c: movsx eax, word ptr [ebp - 0x5d0] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffa30u));
    /* 004c0753: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c0754: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c075a: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4c075fu); f_0047e3d0();
    /* 004c075f: mov ecx, eax */ r_ecx = r_eax;
    /* 004c0761: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x4c0766u); f_004c6cb0();
    /* 004c0766: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c0769: jne 0x4c0777 */ if (!fZ) goto L_004c0777;
L_004c076b:; BB(0x004c076b);
    /* 004c076b: mov dword ptr [0x791e48], 0xe */ W32((u32)(0x791e48u), 0xeu);
    /* 004c0775: jmp 0x4c0781 */ goto L_004c0781;
L_004c0777:; BB(0x004c0777);
    /* 004c0777: mov dword ptr [0x791e48], 0xd */ W32((u32)(0x791e48u), 0xdu);
L_004c0781:; BB(0x004c0781);
    /* 004c0781: movsx ecx, word ptr [ebp - 0x5cc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffa34u));
    /* 004c0788: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c0789: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c078f: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x4c0794u); f_0047e490();
    /* 004c0794: mov dword ptr [0x791e4c], eax */ W32((u32)(0x791e4cu), r_eax);
    /* 004c0799: jmp 0x4c0921 */ goto L_004c0921;
L_004c079e:; BB(0x004c079e);
    /* 004c079e: movsx edx, word ptr [ebp - 0x5cc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffa34u));
    /* 004c07a5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c07a6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c07ac: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4c07b1u); f_0047e3d0();
    /* 004c07b1: mov ecx, eax */ r_ecx = r_eax;
    /* 004c07b3: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x4c07b8u); f_004c6cb0();
    /* 004c07b8: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c07bb: jne 0x4c0875 */ if (!fZ) goto L_004c0875;
L_004c07c1:; BB(0x004c07c1);
    /* 004c07c1: movsx eax, word ptr [ebp - 0x5d0] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffa30u));
    /* 004c07c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c07c9: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c07cf: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4c07d4u); f_0047e3d0();
    /* 004c07d4: mov ecx, eax */ r_ecx = r_eax;
    /* 004c07d6: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x4c07dbu); f_004c6cb0();
    /* 004c07db: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c07de: jne 0x4c0875 */ if (!fZ) goto L_004c0875;
L_004c07e4:; BB(0x004c07e4);
    /* 004c07e4: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c07ea: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x4c07efu); f_0047e190();
    /* 004c07ef: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c07f2: jne 0x4c0826 */ if (!fZ) goto L_004c0826;
L_004c07f4:; BB(0x004c07f4);
    /* 004c07f4: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004c07f6: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4c07fbu); f_0062fbf0();
    /* 004c07fb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c07fe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c0800: je 0x4c0826 */ if (fZ) goto L_004c0826;
L_004c0802:; BB(0x004c0802);
    /* 004c0802: mov dword ptr [0x791e48], 0x10 */ W32((u32)(0x791e48u), 0x10u);
    /* 004c080c: movsx ecx, word ptr [ebp - 0x5d0] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffa30u));
    /* 004c0813: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c0814: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c081a: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x4c081fu); f_0047e490();
    /* 004c081f: mov dword ptr [0x791e4c], eax */ W32((u32)(0x791e4cu), r_eax);
    /* 004c0824: jmp 0x4c0870 */ goto L_004c0870;
L_004c0826:; BB(0x004c0826);
    /* 004c0826: mov dword ptr [0x791e48], 0xf */ W32((u32)(0x791e48u), 0xfu);
    /* 004c0830: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004c0832: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4c0837u); f_0062fbf0();
    /* 004c0837: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c083a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c083c: jne 0x4c0858 */ if (!fZ) goto L_004c0858;
L_004c083e:; BB(0x004c083e);
    /* 004c083e: movsx edx, word ptr [ebp - 0x5cc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffa34u));
    /* 004c0845: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c0846: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c084c: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x4c0851u); f_0047e490();
    /* 004c0851: mov dword ptr [0x791e4c], eax */ W32((u32)(0x791e4cu), r_eax);
    /* 004c0856: jmp 0x4c0870 */ goto L_004c0870;
L_004c0858:; BB(0x004c0858);
    /* 004c0858: movsx eax, word ptr [ebp - 0x5d0] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffa30u));
    /* 004c085f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c0860: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c0866: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x4c086bu); f_0047e490();
    /* 004c086b: mov dword ptr [0x791e4c], eax */ W32((u32)(0x791e4cu), r_eax);
L_004c0870:; BB(0x004c0870);
    /* 004c0870: jmp 0x4c0921 */ goto L_004c0921;
L_004c0875:; BB(0x004c0875);
    /* 004c0875: movsx ecx, word ptr [ebp - 0x5cc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffa34u));
    /* 004c087c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c087d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c0883: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4c0888u); f_0047e3d0();
    /* 004c0888: mov ecx, eax */ r_ecx = r_eax;
    /* 004c088a: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x4c088fu); f_004c6cb0();
    /* 004c088f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c0892: jne 0x4c08b8 */ if (!fZ) goto L_004c08b8;
L_004c0894:; BB(0x004c0894);
    /* 004c0894: mov dword ptr [0x791e48], 0xf */ W32((u32)(0x791e48u), 0xfu);
    /* 004c089e: movsx edx, word ptr [ebp - 0x5cc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffa34u));
    /* 004c08a5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c08a6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c08ac: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x4c08b1u); f_0047e490();
    /* 004c08b1: mov dword ptr [0x791e4c], eax */ W32((u32)(0x791e4cu), r_eax);
    /* 004c08b6: jmp 0x4c0921 */ goto L_004c0921;
L_004c08b8:; BB(0x004c08b8);
    /* 004c08b8: movsx eax, word ptr [ebp - 0x5d0] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffa30u));
    /* 004c08bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c08c0: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c08c6: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4c08cbu); f_0047e3d0();
    /* 004c08cb: mov ecx, eax */ r_ecx = r_eax;
    /* 004c08cd: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x4c08d2u); f_004c6cb0();
    /* 004c08d2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c08d5: jne 0x4c0917 */ if (!fZ) goto L_004c0917;
L_004c08d7:; BB(0x004c08d7);
    /* 004c08d7: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c08dd: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x4c08e2u); f_0047e190();
    /* 004c08e2: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c08e5: jne 0x4c08f3 */ if (!fZ) goto L_004c08f3;
L_004c08e7:; BB(0x004c08e7);
    /* 004c08e7: mov dword ptr [0x791e48], 0x10 */ W32((u32)(0x791e48u), 0x10u);
    /* 004c08f1: jmp 0x4c08fd */ goto L_004c08fd;
L_004c08f3:; BB(0x004c08f3);
    /* 004c08f3: mov dword ptr [0x791e48], 0xf */ W32((u32)(0x791e48u), 0xfu);
L_004c08fd:; BB(0x004c08fd);
    /* 004c08fd: movsx ecx, word ptr [ebp - 0x5d0] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffa30u));
    /* 004c0904: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c0905: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c090b: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x4c0910u); f_0047e490();
    /* 004c0910: mov dword ptr [0x791e4c], eax */ W32((u32)(0x791e4cu), r_eax);
    /* 004c0915: jmp 0x4c0921 */ goto L_004c0921;
L_004c0917:; BB(0x004c0917);
    /* 004c0917: mov dword ptr [0x791e48], 0 */ W32((u32)(0x791e48u), 0x0u);
L_004c0921:; BB(0x004c0921);
    /* 004c0921: jmp 0x4c092d */ goto L_004c092d;
L_004c0923:; BB(0x004c0923);
    /* 004c0923: mov dword ptr [0x791e48], 0 */ W32((u32)(0x791e48u), 0x0u);
L_004c092d:; BB(0x004c092d);
    /* 004c092d: movsx edx, word ptr [ebp - 0x5d0] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffa30u));
    /* 004c0934: cmp edx, -4 */ {  u32 a = r_edx; u32 b = 0xfffffffcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c0937: jne 0x4c0c82 */ if (!fZ) goto L_004c0c82;
L_004c093d:; BB(0x004c093d);
    /* 004c093d: mov byte ptr [ebp - 0x5ed], 1 */ W8((u32)(r_ebp+0xfffffa13u), 0x1u);
L_004c0944:; BB(0x004c0944);
    /* 004c0944: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c0946: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c094c: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c094f: call 0x4f8d90 */ r_esp -= 4; W32(r_esp, 0x4c0954u); f_004f8d90();
    /* 004c0954: mov word ptr [ebp - 0x5d0], ax */ W16((u32)(r_ebp+0xfffffa30u), (u16)r_eax);
    /* 004c095b: movsx eax, word ptr [ebp - 0x5d0] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffa30u));
    /* 004c0962: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c0965: je 0x4c0c7d */ if (fZ) goto L_004c0c7d;
L_004c096b:; BB(0x004c096b);
    /* 004c096b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c096d: mov cx, word ptr [ebp - 0x5d0] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffa30u))) & 0xffffu);
    /* 004c0974: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c0975: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c097b: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c097e: call 0x4f79b0 */ r_esp -= 4; W32(r_esp, 0x4c0983u); f_004f79b0();
    /* 004c0983: mov esi, eax */ r_esi = r_eax;
    /* 004c0985: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c098b: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x4c0990u); f_0047bc20();
    /* 004c0990: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004c0993: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004c0994: movsx edx, word ptr [ebp - 0x5d0] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffa30u));
    /* 004c099b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c099c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c09a2: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4c09a7u); f_0047e3d0();
    /* 004c09a7: mov ecx, eax */ r_ecx = r_eax;
    /* 004c09a9: call 0x4c6b80 */ r_esp -= 4; W32(r_esp, 0x4c09aeu); f_004c6b80();
    /* 004c09ae: movsx eax, word ptr [ebp - 0x5d0] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffa30u));
    /* 004c09b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c09b6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c09bc: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4c09c1u); f_0047e3d0();
    /* 004c09c1: mov ecx, eax */ r_ecx = r_eax;
    /* 004c09c3: call 0x4da300 */ r_esp -= 4; W32(r_esp, 0x4c09c8u); f_004da300();
    /* 004c09c8: movsx ecx, word ptr [ebp - 0x5d0] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffa30u));
    /* 004c09cf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c09d0: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c09d6: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4c09dbu); f_0047e3d0();
    /* 004c09db: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004c09de: mov dword ptr [ebp - 0x5fc], edx */ W32((u32)(r_ebp+0xfffffa04u), r_edx);
    /* 004c09e4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c09e6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c09e8: mov ax, word ptr [ebp - 0x5d0] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffa30u))) & 0xffffu);
    /* 004c09ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c09f0: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c09f6: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c09f9: call 0x4f79b0 */ r_esp -= 4; W32(r_esp, 0x4c09feu); f_004f79b0();
    /* 004c09fe: mov esi, eax */ r_esi = r_eax;
    /* 004c0a00: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c0a06: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x4c0a0bu); f_0047bc20();
    /* 004c0a0b: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004c0a0e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004c0a0f: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x4c0a14u); f_0064c8a0();
    /* 004c0a14: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c0a17: mov dword ptr [ebp - 0x744], eax */ W32((u32)(r_ebp+0xfffff8bcu), r_eax);
    /* 004c0a1d: mov dword ptr [ebp - 0x740], edx */ W32((u32)(r_ebp+0xfffff8c0u), r_edx);
    /* 004c0a23: mov ecx, dword ptr [ebp - 0x744] */ r_ecx = R32((u32)(r_ebp+0xfffff8bcu));
    /* 004c0a29: mov dword ptr [ebp - 0x5f8], ecx */ W32((u32)(r_ebp+0xfffffa08u), r_ecx);
    /* 004c0a2f: mov edx, dword ptr [ebp - 0x740] */ r_edx = R32((u32)(r_ebp+0xfffff8c0u));
    /* 004c0a35: mov dword ptr [ebp - 0x5f4], edx */ W32((u32)(r_ebp+0xfffffa0cu), r_edx);
    /* 004c0a3b: mov eax, dword ptr [ebp - 0x5f4] */ r_eax = R32((u32)(r_ebp+0xfffffa0cu));
    /* 004c0a41: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c0a42: mov ecx, dword ptr [ebp - 0x5f8] */ r_ecx = R32((u32)(r_ebp+0xfffffa08u));
    /* 004c0a48: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c0a49: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 004c0a4b: mov edx, dword ptr [ebp - 0x5fc] */ r_edx = R32((u32)(r_ebp+0xfffffa04u));
    /* 004c0a51: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c0a52: mov ecx, dword ptr [0x79506c] */ r_ecx = R32((u32)(0x79506cu));
    /* 004c0a58: call 0x5e7e40 */ r_esp -= 4; W32(r_esp, 0x4c0a5du); f_005e7e40();
    /* 004c0a5d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c0a63: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x4c0a68u); f_0047e190();
    /* 004c0a68: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c0a6b: jne 0x4c0ba6 */ if (!fZ) goto L_004c0ba6;
L_004c0a71:; BB(0x004c0a71);
    /* 004c0a71: mov eax, dword ptr [0x79076c] */ r_eax = R32((u32)(0x79076cu));
    /* 004c0a76: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c0a77: lea ecx, [ebp - 0x745] */ r_ecx = (u32)(r_ebp+0xfffff8bbu);
    /* 004c0a7d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c0a7e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c0a84: call 0x47ee90 */ r_esp -= 4; W32(r_esp, 0x4c0a89u); f_0047ee90();
    /* 004c0a89: mov ecx, eax */ r_ecx = r_eax;
    /* 004c0a8b: call 0x4640b0 */ r_esp -= 4; W32(r_esp, 0x4c0a90u); f_004640b0();
    /* 004c0a90: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004c0a93: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c0a95: je 0x4c0ab8 */ if (fZ) goto L_004c0ab8;
L_004c0a97:; BB(0x004c0a97);
    /* 004c0a97: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004c0a99: movsx eax, word ptr [ebp - 0x5d0] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffa30u));
    /* 004c0aa0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c0aa1: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c0aa7: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4c0aacu); f_0047e3d0();
    /* 004c0aac: mov ecx, eax */ r_ecx = r_eax;
    /* 004c0aae: call 0x4da3c0 */ r_esp -= 4; W32(r_esp, 0x4c0ab3u); f_004da3c0();
    /* 004c0ab3: jmp 0x4c0ba4 */ goto L_004c0ba4;
L_004c0ab8:; BB(0x004c0ab8);
    /* 004c0ab8: mov ecx, dword ptr [0x790754] */ r_ecx = R32((u32)(0x790754u));
    /* 004c0abe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c0abf: lea edx, [ebp - 0x746] */ r_edx = (u32)(r_ebp+0xfffff8bau);
    /* 004c0ac5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c0ac6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c0acc: call 0x47ee90 */ r_esp -= 4; W32(r_esp, 0x4c0ad1u); f_0047ee90();
    /* 004c0ad1: mov ecx, eax */ r_ecx = r_eax;
    /* 004c0ad3: call 0x4640b0 */ r_esp -= 4; W32(r_esp, 0x4c0ad8u); f_004640b0();
    /* 004c0ad8: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004c0adb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c0add: je 0x4c0b00 */ if (fZ) goto L_004c0b00;
L_004c0adf:; BB(0x004c0adf);
    /* 004c0adf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c0ae1: movsx ecx, word ptr [ebp - 0x5d0] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffa30u));
    /* 004c0ae8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c0ae9: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c0aef: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4c0af4u); f_0047e3d0();
    /* 004c0af4: mov ecx, eax */ r_ecx = r_eax;
    /* 004c0af6: call 0x4da3c0 */ r_esp -= 4; W32(r_esp, 0x4c0afbu); f_004da3c0();
    /* 004c0afb: jmp 0x4c0ba4 */ goto L_004c0ba4;
L_004c0b00:; BB(0x004c0b00);
    /* 004c0b00: mov edx, dword ptr [0x790764] */ r_edx = R32((u32)(0x790764u));
    /* 004c0b06: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c0b07: lea eax, [ebp - 0x747] */ r_eax = (u32)(r_ebp+0xfffff8b9u);
    /* 004c0b0d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c0b0e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c0b14: call 0x47ee90 */ r_esp -= 4; W32(r_esp, 0x4c0b19u); f_0047ee90();
    /* 004c0b19: mov ecx, eax */ r_ecx = r_eax;
    /* 004c0b1b: call 0x4640b0 */ r_esp -= 4; W32(r_esp, 0x4c0b20u); f_004640b0();
    /* 004c0b20: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004c0b23: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c0b25: je 0x4c0b45 */ if (fZ) goto L_004c0b45;
L_004c0b27:; BB(0x004c0b27);
    /* 004c0b27: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004c0b29: movsx edx, word ptr [ebp - 0x5d0] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffa30u));
    /* 004c0b30: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c0b31: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c0b37: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4c0b3cu); f_0047e3d0();
    /* 004c0b3c: mov ecx, eax */ r_ecx = r_eax;
    /* 004c0b3e: call 0x4da3c0 */ r_esp -= 4; W32(r_esp, 0x4c0b43u); f_004da3c0();
    /* 004c0b43: jmp 0x4c0ba4 */ goto L_004c0ba4;
L_004c0b45:; BB(0x004c0b45);
    /* 004c0b45: mov eax, dword ptr [0x790770] */ r_eax = R32((u32)(0x790770u));
    /* 004c0b4a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c0b4b: lea ecx, [ebp - 0x748] */ r_ecx = (u32)(r_ebp+0xfffff8b8u);
    /* 004c0b51: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c0b52: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c0b58: call 0x47ee90 */ r_esp -= 4; W32(r_esp, 0x4c0b5du); f_0047ee90();
    /* 004c0b5d: mov ecx, eax */ r_ecx = r_eax;
    /* 004c0b5f: call 0x4640b0 */ r_esp -= 4; W32(r_esp, 0x4c0b64u); f_004640b0();
    /* 004c0b64: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004c0b67: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c0b69: je 0x4c0b89 */ if (fZ) goto L_004c0b89;
L_004c0b6b:; BB(0x004c0b6b);
    /* 004c0b6b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004c0b6d: movsx eax, word ptr [ebp - 0x5d0] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffa30u));
    /* 004c0b74: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c0b75: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c0b7b: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4c0b80u); f_0047e3d0();
    /* 004c0b80: mov ecx, eax */ r_ecx = r_eax;
    /* 004c0b82: call 0x4da3c0 */ r_esp -= 4; W32(r_esp, 0x4c0b87u); f_004da3c0();
    /* 004c0b87: jmp 0x4c0ba4 */ goto L_004c0ba4;
L_004c0b89:; BB(0x004c0b89);
    /* 004c0b89: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 004c0b8b: jne 0x4c0ba4 */ if (!fZ) goto L_004c0ba4;
L_004c0b8d:; BB(0x004c0b8d);
    /* 004c0b8d: push 0xa9f */ { u32 v = 0xa9fu; r_esp -= 4; W32(r_esp, v); }
    /* 004c0b92: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004c0b97: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 004c0b9c: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4c0ba1u); f_005e9f20();
    /* 004c0ba1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004c0ba4:; BB(0x004c0ba4);
    /* 004c0ba4: jmp 0x4c0bc2 */ goto L_004c0bc2;
L_004c0ba6:; BB(0x004c0ba6);
    /* 004c0ba6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c0ba8: movsx eax, word ptr [ebp - 0x5d0] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffa30u));
    /* 004c0baf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c0bb0: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c0bb6: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4c0bbbu); f_0047e3d0();
    /* 004c0bbb: mov ecx, eax */ r_ecx = r_eax;
    /* 004c0bbd: call 0x4da3c0 */ r_esp -= 4; W32(r_esp, 0x4c0bc2u); f_004da3c0();
L_004c0bc2:; BB(0x004c0bc2);
    /* 004c0bc2: movsx ecx, word ptr [ebp - 0x5cc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffa34u));
    /* 004c0bc9: cmp ecx, -5 */ {  u32 a = r_ecx; u32 b = 0xfffffffbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c0bcc: jne 0x4c0c78 */ if (!fZ) goto L_004c0c78;
L_004c0bd2:; BB(0x004c0bd2);
    /* 004c0bd2: movzx edx, byte ptr [ebp - 0x5ed] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffa13u));
    /* 004c0bd9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c0bdb: je 0x4c0c33 */ if (fZ) goto L_004c0c33;
L_004c0bdd:; BB(0x004c0bdd);
    /* 004c0bdd: movsx eax, word ptr [ebp - 0x5d0] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffa30u));
    /* 004c0be4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c0be5: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c0beb: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4c0bf0u); f_0047e3d0();
    /* 004c0bf0: mov ecx, eax */ r_ecx = r_eax;
    /* 004c0bf2: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x4c0bf7u); f_004c6cb0();
    /* 004c0bf7: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c0bfa: jne 0x4c0c27 */ if (!fZ) goto L_004c0c27;
L_004c0bfc:; BB(0x004c0bfc);
    /* 004c0bfc: mov dword ptr [0x791e48], 0xc */ W32((u32)(0x791e48u), 0xcu);
    /* 004c0c06: movsx ecx, word ptr [ebp - 0x5d0] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffa30u));
    /* 004c0c0d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c0c0e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c0c14: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x4c0c19u); f_0047e490();
    /* 004c0c19: mov dword ptr [0x791e4c], eax */ W32((u32)(0x791e4cu), r_eax);
    /* 004c0c1e: mov byte ptr [ebp - 0x5ed], 0 */ W8((u32)(r_ebp+0xfffffa13u), 0x0u);
    /* 004c0c25: jmp 0x4c0c31 */ goto L_004c0c31;
L_004c0c27:; BB(0x004c0c27);
    /* 004c0c27: mov dword ptr [0x791e48], 0 */ W32((u32)(0x791e48u), 0x0u);
L_004c0c31:; BB(0x004c0c31);
    /* 004c0c31: jmp 0x4c0c78 */ goto L_004c0c78;
L_004c0c33:; BB(0x004c0c33);
    /* 004c0c33: movsx edx, word ptr [ebp - 0x5d0] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffa30u));
    /* 004c0c3a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c0c3b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c0c41: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4c0c46u); f_0047e3d0();
    /* 004c0c46: mov ecx, eax */ r_ecx = r_eax;
    /* 004c0c48: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x4c0c4du); f_004c6cb0();
    /* 004c0c4d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c0c50: jne 0x4c0c78 */ if (!fZ) goto L_004c0c78;
L_004c0c52:; BB(0x004c0c52);
    /* 004c0c52: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004c0c54: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4c0c59u); f_0062fbf0();
    /* 004c0c59: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c0c5c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c0c5e: jne 0x4c0c78 */ if (!fZ) goto L_004c0c78;
L_004c0c60:; BB(0x004c0c60);
    /* 004c0c60: movsx eax, word ptr [ebp - 0x5d0] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffa30u));
    /* 004c0c67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c0c68: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c0c6e: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x4c0c73u); f_0047e490();
    /* 004c0c73: mov dword ptr [0x791e4c], eax */ W32((u32)(0x791e4cu), r_eax);
L_004c0c78:; BB(0x004c0c78);
    /* 004c0c78: jmp 0x4c0944 */ goto L_004c0944;
L_004c0c7d:; BB(0x004c0c7d);
    /* 004c0c7d: jmp 0x4c1023 */ goto L_004c1023;
L_004c0c82:; BB(0x004c0c82);
    /* 004c0c82: movsx ecx, word ptr [ebp - 0x5d0] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffa30u));
    /* 004c0c89: cmp ecx, -5 */ {  u32 a = r_ecx; u32 b = 0xfffffffbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c0c8c: jne 0x4c0c93 */ if (!fZ) goto L_004c0c93;
L_004c0c8e:; BB(0x004c0c8e);
    /* 004c0c8e: jmp 0x4c1023 */ goto L_004c1023;
L_004c0c93:; BB(0x004c0c93);
    /* 004c0c93: movsx edx, word ptr [ebp - 0x5d0] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffa30u));
    /* 004c0c9a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004c0c9c: jge 0x4c0cb5 */ if ((fS==fO)) goto L_004c0cb5;
L_004c0c9e:; BB(0x004c0c9e);
    /* 004c0c9e: push 0xaba */ { u32 v = 0xabau; r_esp -= 4; W32(r_esp, v); }
    /* 004c0ca3: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004c0ca8: push 0x6bc288 */ { u32 v = 0x6bc288u; r_esp -= 4; W32(r_esp, v); }
    /* 004c0cad: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4c0cb2u); f_005e9f20();
    /* 004c0cb2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004c0cb5:; BB(0x004c0cb5);
    /* 004c0cb5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c0cb7: mov cx, word ptr [ebp - 0x5d0] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffa30u))) & 0xffffu);
    /* 004c0cbe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c0cbf: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c0cc5: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c0cc8: call 0x4f79b0 */ r_esp -= 4; W32(r_esp, 0x4c0ccdu); f_004f79b0();
    /* 004c0ccd: mov esi, eax */ r_esi = r_eax;
    /* 004c0ccf: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c0cd5: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x4c0cdau); f_0047bc20();
    /* 004c0cda: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004c0cdd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004c0cde: movsx edx, word ptr [ebp - 0x5d0] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffa30u));
    /* 004c0ce5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c0ce6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c0cec: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4c0cf1u); f_0047e3d0();
    /* 004c0cf1: mov ecx, eax */ r_ecx = r_eax;
    /* 004c0cf3: call 0x4c6b80 */ r_esp -= 4; W32(r_esp, 0x4c0cf8u); f_004c6b80();
    /* 004c0cf8: movsx eax, word ptr [ebp - 0x5d0] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffa30u));
    /* 004c0cff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c0d00: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c0d06: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4c0d0bu); f_0047e3d0();
    /* 004c0d0b: mov ecx, eax */ r_ecx = r_eax;
    /* 004c0d0d: call 0x4da300 */ r_esp -= 4; W32(r_esp, 0x4c0d12u); f_004da300();
    /* 004c0d12: movsx ecx, word ptr [ebp - 0x5d0] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffa30u));
    /* 004c0d19: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c0d1a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c0d20: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4c0d25u); f_0047e3d0();
    /* 004c0d25: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004c0d28: mov dword ptr [ebp - 0x608], edx */ W32((u32)(r_ebp+0xfffff9f8u), r_edx);
    /* 004c0d2e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c0d30: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c0d32: mov ax, word ptr [ebp - 0x5d0] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffa30u))) & 0xffffu);
    /* 004c0d39: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c0d3a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c0d40: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c0d43: call 0x4f79b0 */ r_esp -= 4; W32(r_esp, 0x4c0d48u); f_004f79b0();
    /* 004c0d48: mov esi, eax */ r_esi = r_eax;
    /* 004c0d4a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c0d50: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x4c0d55u); f_0047bc20();
    /* 004c0d55: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004c0d58: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004c0d59: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x4c0d5eu); f_0064c8a0();
    /* 004c0d5e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c0d61: mov dword ptr [ebp - 0x750], eax */ W32((u32)(r_ebp+0xfffff8b0u), r_eax);
    /* 004c0d67: mov dword ptr [ebp - 0x74c], edx */ W32((u32)(r_ebp+0xfffff8b4u), r_edx);
    /* 004c0d6d: mov ecx, dword ptr [ebp - 0x750] */ r_ecx = R32((u32)(r_ebp+0xfffff8b0u));
    /* 004c0d73: mov dword ptr [ebp - 0x604], ecx */ W32((u32)(r_ebp+0xfffff9fcu), r_ecx);
    /* 004c0d79: mov edx, dword ptr [ebp - 0x74c] */ r_edx = R32((u32)(r_ebp+0xfffff8b4u));
    /* 004c0d7f: mov dword ptr [ebp - 0x600], edx */ W32((u32)(r_ebp+0xfffffa00u), r_edx);
    /* 004c0d85: mov eax, dword ptr [ebp - 0x600] */ r_eax = R32((u32)(r_ebp+0xfffffa00u));
    /* 004c0d8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c0d8c: mov ecx, dword ptr [ebp - 0x604] */ r_ecx = R32((u32)(r_ebp+0xfffff9fcu));
    /* 004c0d92: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c0d93: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 004c0d95: mov edx, dword ptr [ebp - 0x608] */ r_edx = R32((u32)(r_ebp+0xfffff9f8u));
    /* 004c0d9b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c0d9c: mov ecx, dword ptr [0x79506c] */ r_ecx = R32((u32)(0x79506cu));
    /* 004c0da2: call 0x5e7e40 */ r_esp -= 4; W32(r_esp, 0x4c0da7u); f_005e7e40();
    /* 004c0da7: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c0dad: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x4c0db2u); f_0047e190();
    /* 004c0db2: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c0db5: jne 0x4c0ef0 */ if (!fZ) goto L_004c0ef0;
L_004c0dbb:; BB(0x004c0dbb);
    /* 004c0dbb: mov eax, dword ptr [0x79076c] */ r_eax = R32((u32)(0x79076cu));
    /* 004c0dc0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c0dc1: lea ecx, [ebp - 0x751] */ r_ecx = (u32)(r_ebp+0xfffff8afu);
    /* 004c0dc7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c0dc8: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c0dce: call 0x47ee90 */ r_esp -= 4; W32(r_esp, 0x4c0dd3u); f_0047ee90();
    /* 004c0dd3: mov ecx, eax */ r_ecx = r_eax;
    /* 004c0dd5: call 0x4640b0 */ r_esp -= 4; W32(r_esp, 0x4c0ddau); f_004640b0();
    /* 004c0dda: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004c0ddd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c0ddf: je 0x4c0e02 */ if (fZ) goto L_004c0e02;
L_004c0de1:; BB(0x004c0de1);
    /* 004c0de1: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004c0de3: movsx eax, word ptr [ebp - 0x5d0] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffa30u));
    /* 004c0dea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c0deb: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c0df1: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4c0df6u); f_0047e3d0();
    /* 004c0df6: mov ecx, eax */ r_ecx = r_eax;
    /* 004c0df8: call 0x4da3c0 */ r_esp -= 4; W32(r_esp, 0x4c0dfdu); f_004da3c0();
    /* 004c0dfd: jmp 0x4c0eee */ goto L_004c0eee;
L_004c0e02:; BB(0x004c0e02);
    /* 004c0e02: mov ecx, dword ptr [0x790754] */ r_ecx = R32((u32)(0x790754u));
    /* 004c0e08: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c0e09: lea edx, [ebp - 0x752] */ r_edx = (u32)(r_ebp+0xfffff8aeu);
    /* 004c0e0f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c0e10: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c0e16: call 0x47ee90 */ r_esp -= 4; W32(r_esp, 0x4c0e1bu); f_0047ee90();
    /* 004c0e1b: mov ecx, eax */ r_ecx = r_eax;
    /* 004c0e1d: call 0x4640b0 */ r_esp -= 4; W32(r_esp, 0x4c0e22u); f_004640b0();
    /* 004c0e22: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004c0e25: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c0e27: je 0x4c0e4a */ if (fZ) goto L_004c0e4a;
L_004c0e29:; BB(0x004c0e29);
    /* 004c0e29: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c0e2b: movsx ecx, word ptr [ebp - 0x5d0] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffa30u));
    /* 004c0e32: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c0e33: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c0e39: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4c0e3eu); f_0047e3d0();
    /* 004c0e3e: mov ecx, eax */ r_ecx = r_eax;
    /* 004c0e40: call 0x4da3c0 */ r_esp -= 4; W32(r_esp, 0x4c0e45u); f_004da3c0();
    /* 004c0e45: jmp 0x4c0eee */ goto L_004c0eee;
L_004c0e4a:; BB(0x004c0e4a);
    /* 004c0e4a: mov edx, dword ptr [0x790764] */ r_edx = R32((u32)(0x790764u));
    /* 004c0e50: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c0e51: lea eax, [ebp - 0x753] */ r_eax = (u32)(r_ebp+0xfffff8adu);
    /* 004c0e57: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c0e58: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c0e5e: call 0x47ee90 */ r_esp -= 4; W32(r_esp, 0x4c0e63u); f_0047ee90();
    /* 004c0e63: mov ecx, eax */ r_ecx = r_eax;
    /* 004c0e65: call 0x4640b0 */ r_esp -= 4; W32(r_esp, 0x4c0e6au); f_004640b0();
    /* 004c0e6a: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004c0e6d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c0e6f: je 0x4c0e8f */ if (fZ) goto L_004c0e8f;
L_004c0e71:; BB(0x004c0e71);
    /* 004c0e71: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004c0e73: movsx edx, word ptr [ebp - 0x5d0] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffa30u));
    /* 004c0e7a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c0e7b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c0e81: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4c0e86u); f_0047e3d0();
    /* 004c0e86: mov ecx, eax */ r_ecx = r_eax;
    /* 004c0e88: call 0x4da3c0 */ r_esp -= 4; W32(r_esp, 0x4c0e8du); f_004da3c0();
    /* 004c0e8d: jmp 0x4c0eee */ goto L_004c0eee;
L_004c0e8f:; BB(0x004c0e8f);
    /* 004c0e8f: mov eax, dword ptr [0x790770] */ r_eax = R32((u32)(0x790770u));
    /* 004c0e94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c0e95: lea ecx, [ebp - 0x754] */ r_ecx = (u32)(r_ebp+0xfffff8acu);
    /* 004c0e9b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c0e9c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c0ea2: call 0x47ee90 */ r_esp -= 4; W32(r_esp, 0x4c0ea7u); f_0047ee90();
    /* 004c0ea7: mov ecx, eax */ r_ecx = r_eax;
    /* 004c0ea9: call 0x4640b0 */ r_esp -= 4; W32(r_esp, 0x4c0eaeu); f_004640b0();
    /* 004c0eae: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004c0eb1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c0eb3: je 0x4c0ed3 */ if (fZ) goto L_004c0ed3;
L_004c0eb5:; BB(0x004c0eb5);
    /* 004c0eb5: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004c0eb7: movsx eax, word ptr [ebp - 0x5d0] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffa30u));
    /* 004c0ebe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c0ebf: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c0ec5: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4c0ecau); f_0047e3d0();
    /* 004c0eca: mov ecx, eax */ r_ecx = r_eax;
    /* 004c0ecc: call 0x4da3c0 */ r_esp -= 4; W32(r_esp, 0x4c0ed1u); f_004da3c0();
    /* 004c0ed1: jmp 0x4c0eee */ goto L_004c0eee;
L_004c0ed3:; BB(0x004c0ed3);
    /* 004c0ed3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 004c0ed5: jne 0x4c0eee */ if (!fZ) goto L_004c0eee;
L_004c0ed7:; BB(0x004c0ed7);
    /* 004c0ed7: push 0xad3 */ { u32 v = 0xad3u; r_esp -= 4; W32(r_esp, v); }
    /* 004c0edc: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004c0ee1: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 004c0ee6: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4c0eebu); f_005e9f20();
    /* 004c0eeb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004c0eee:; BB(0x004c0eee);
    /* 004c0eee: jmp 0x4c0f0c */ goto L_004c0f0c;
L_004c0ef0:; BB(0x004c0ef0);
    /* 004c0ef0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c0ef2: movsx eax, word ptr [ebp - 0x5d0] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffa30u));
    /* 004c0ef9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c0efa: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c0f00: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4c0f05u); f_0047e3d0();
    /* 004c0f05: mov ecx, eax */ r_ecx = r_eax;
    /* 004c0f07: call 0x4da3c0 */ r_esp -= 4; W32(r_esp, 0x4c0f0cu); f_004da3c0();
L_004c0f0c:; BB(0x004c0f0c);
    /* 004c0f0c: movsx ecx, word ptr [ebp - 0x5cc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffa34u));
    /* 004c0f13: cmp ecx, -5 */ {  u32 a = r_ecx; u32 b = 0xfffffffbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c0f16: jne 0x4c1023 */ if (!fZ) goto L_004c1023;
L_004c0f1c:; BB(0x004c0f1c);
    /* 004c0f1c: movzx edx, byte ptr [0x791e39] */ r_edx = (u32)R8((u32)(0x791e39u));
    /* 004c0f23: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c0f25: je 0x4c0f8a */ if (fZ) goto L_004c0f8a;
L_004c0f27:; BB(0x004c0f27);
    /* 004c0f27: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c0f29: mov ax, word ptr [ebp - 0x5d0] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffa30u))) & 0xffffu);
    /* 004c0f30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c0f31: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c0f37: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c0f3a: call 0x4f79b0 */ r_esp -= 4; W32(r_esp, 0x4c0f3fu); f_004f79b0();
    /* 004c0f3f: mov esi, eax */ r_esi = r_eax;
    /* 004c0f41: mov ecx, dword ptr [0x791e50] */ r_ecx = R32((u32)(0x791e50u));
    /* 004c0f47: shl ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 004c0f49: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c0f4a: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4c0f4fu); f_0062fbf0();
    /* 004c0f4f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c0f52: mov edi, eax */ r_edi = r_eax;
    /* 004c0f54: mov edx, dword ptr [0x791e50] */ r_edx = R32((u32)(0x791e50u));
    /* 004c0f5a: shl edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 004c0f5c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c0f5d: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4c0f62u); f_0062fbf0();
    /* 004c0f62: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c0f65: lea edi, [edi + eax + 5] */ r_edi = (u32)(r_edi+r_eax+0x5u);
    /* 004c0f69: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c0f6f: call 0x47bde0 */ r_esp -= 4; W32(r_esp, 0x4c0f74u); f_0047bde0();
    /* 004c0f74: imul edi, eax */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_eax; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004c0f77: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c0f79: jle 0x4c0f8a */ if ((fZ||fS!=fO)) goto L_004c0f8a;
L_004c0f7b:; BB(0x004c0f7b);
    /* 004c0f7b: mov dword ptr [0x791e48], 0xa */ W32((u32)(0x791e48u), 0xau);
    /* 004c0f85: jmp 0x4c100b */ goto L_004c100b;
L_004c0f8a:; BB(0x004c0f8a);
    /* 004c0f8a: movzx eax, byte ptr [0x791e39] */ r_eax = (u32)R8((u32)(0x791e39u));
    /* 004c0f91: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c0f93: je 0x4c1001 */ if (fZ) goto L_004c1001;
L_004c0f95:; BB(0x004c0f95);
    /* 004c0f95: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c0f97: mov cx, word ptr [ebp - 0x5d0] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffa30u))) & 0xffffu);
    /* 004c0f9e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c0f9f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c0fa5: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c0fa8: call 0x4f79b0 */ r_esp -= 4; W32(r_esp, 0x4c0fadu); f_004f79b0();
    /* 004c0fad: mov esi, eax */ r_esi = r_eax;
    /* 004c0faf: mov eax, dword ptr [0x791e50] */ r_eax = R32((u32)(0x791e50u));
    /* 004c0fb4: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004c0fb5: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004c0fb8: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c0fba: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004c0fbd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c0fbe: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4c0fc3u); f_0062fbf0();
    /* 004c0fc3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c0fc6: mov edi, eax */ r_edi = r_eax;
    /* 004c0fc8: mov eax, dword ptr [0x791e50] */ r_eax = R32((u32)(0x791e50u));
    /* 004c0fcd: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004c0fce: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004c0fd1: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c0fd3: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004c0fd6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c0fd7: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4c0fdcu); f_0062fbf0();
    /* 004c0fdc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c0fdf: lea edi, [edi + eax + 3] */ r_edi = (u32)(r_edi+r_eax+0x3u);
    /* 004c0fe3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c0fe9: call 0x47bce0 */ r_esp -= 4; W32(r_esp, 0x4c0feeu); f_0047bce0();
    /* 004c0fee: imul edi, eax */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_eax; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004c0ff1: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c0ff3: jge 0x4c1001 */ if ((fS==fO)) goto L_004c1001;
L_004c0ff5:; BB(0x004c0ff5);
    /* 004c0ff5: mov dword ptr [0x791e48], 9 */ W32((u32)(0x791e48u), 0x9u);
    /* 004c0fff: jmp 0x4c100b */ goto L_004c100b;
L_004c1001:; BB(0x004c1001);
    /* 004c1001: mov dword ptr [0x791e48], 7 */ W32((u32)(0x791e48u), 0x7u);
L_004c100b:; BB(0x004c100b);
    /* 004c100b: movsx edx, word ptr [ebp - 0x5d0] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffa30u));
    /* 004c1012: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c1013: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c1019: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x4c101eu); f_0047e490();
    /* 004c101e: mov dword ptr [0x791e4c], eax */ W32((u32)(0x791e4cu), r_eax);
L_004c1023:; BB(0x004c1023);
    /* 004c1023: mov byte ptr [0x791e39], 0 */ W8((u32)(0x791e39u), 0x0u);
    /* 004c102a: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 004c102c: mov eax, dword ptr [ebp - 0x858] */ r_eax = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004c1032: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004c1034: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004c103a: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004c103d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4c103fu); call_ind(t); }
    /* 004c103f: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 004c1041: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004c1047: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004c1049: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004c104f: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004c1052: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4c1054u); call_ind(t); }
    /* 004c1054: jmp 0x4c353d */ goto L_004c353d;
L_004c1059:; BB(0x004c1059);
    /* 004c1059: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c105f: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c1062: call 0x4f6540 */ r_esp -= 4; W32(r_esp, 0x4c1067u); f_004f6540();
    /* 004c1067: mov word ptr [0x791e90], ax */ W16((u32)(0x791e90u), (u16)r_eax);
    /* 004c106d: movsx ecx, word ptr [0x791e90] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x791e90u));
    /* 004c1074: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c1075: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c107b: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4c1080u); f_0047e3d0();
    /* 004c1080: mov ecx, eax */ r_ecx = r_eax;
    /* 004c1082: call 0x4da360 */ r_esp -= 4; W32(r_esp, 0x4c1087u); f_004da360();
    /* 004c1087: mov word ptr [0x791e94], 0 */ W16((u32)(0x791e94u), 0x0u);
    /* 004c1090: jmp 0x4c10a4 */ goto L_004c10a4;
L_004c1092:; BB(0x004c1092);
    /* 004c1092: mov dx, word ptr [0x791e94] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x791e94u))) & 0xffffu);
    /* 004c1099: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004c109d: mov word ptr [0x791e94], dx */ W16((u32)(0x791e94u), (u16)r_edx);
L_004c10a4:; BB(0x004c10a4);
    /* 004c10a4: movsx esi, word ptr [0x791e94] */ r_esi = (u32)(i32)(i16)R16((u32)(0x791e94u));
    /* 004c10ab: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c10b1: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4c10b6u); f_0047f950();
    /* 004c10b6: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c10b8: jge 0x4c1273 */ if ((fS==fO)) goto L_004c1273;
L_004c10be:; BB(0x004c10be);
    /* 004c10be: movsx eax, word ptr [0x791e94] */ r_eax = (u32)(i32)(i16)R16((u32)(0x791e94u));
    /* 004c10c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c10c6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c10cc: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c10d1u); f_0047e390();
    /* 004c10d1: mov ecx, eax */ r_ecx = r_eax;
    /* 004c10d3: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x4c10d8u); f_004c6cb0();
    /* 004c10d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c10da: je 0x4c126e */ if (fZ) goto L_004c126e;
L_004c10e0:; BB(0x004c10e0);
    /* 004c10e0: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c10e6: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x4c10ebu); f_0047e190();
    /* 004c10eb: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c10ee: jne 0x4c112b */ if (!fZ) goto L_004c112b;
L_004c10f0:; BB(0x004c10f0);
    /* 004c10f0: mov cx, word ptr [0x791e50] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x791e50u))) & 0xffffu);
    /* 004c10f7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c10f8: movsx edx, word ptr [0x791e90] */ r_edx = (u32)(i32)(i16)R16((u32)(0x791e90u));
    /* 004c10ff: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c1100: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c1106: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x4c110bu); f_0047e490();
    /* 004c110b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c110c: movsx eax, word ptr [0x791e94] */ r_eax = (u32)(i32)(i16)R16((u32)(0x791e94u));
    /* 004c1113: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c1114: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c111a: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c111fu); f_0047e390();
    /* 004c111f: mov ecx, eax */ r_ecx = r_eax;
    /* 004c1121: call 0x4cf0c0 */ r_esp -= 4; W32(r_esp, 0x4c1126u); f_004cf0c0();
    /* 004c1126: jmp 0x4c126e */ goto L_004c126e;
L_004c112b:; BB(0x004c112b);
    /* 004c112b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c1131: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x4c1136u); f_0047e190();
    /* 004c1136: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c1139: jne 0x4c1185 */ if (!fZ) goto L_004c1185;
L_004c113b:; BB(0x004c113b);
    /* 004c113b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c1141: call 0x47e280 */ r_esp -= 4; W32(r_esp, 0x4c1146u); f_0047e280();
    /* 004c1146: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c1148: jne 0x4c1185 */ if (!fZ) goto L_004c1185;
L_004c114a:; BB(0x004c114a);
    /* 004c114a: mov cx, word ptr [0x791e50] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x791e50u))) & 0xffffu);
    /* 004c1151: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c1152: movsx edx, word ptr [0x791e90] */ r_edx = (u32)(i32)(i16)R16((u32)(0x791e90u));
    /* 004c1159: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c115a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c1160: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x4c1165u); f_0047e490();
    /* 004c1165: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c1166: movsx eax, word ptr [0x791e94] */ r_eax = (u32)(i32)(i16)R16((u32)(0x791e94u));
    /* 004c116d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c116e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c1174: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c1179u); f_0047e390();
    /* 004c1179: mov ecx, eax */ r_ecx = r_eax;
    /* 004c117b: call 0x4d1900 */ r_esp -= 4; W32(r_esp, 0x4c1180u); f_004d1900();
    /* 004c1180: jmp 0x4c126e */ goto L_004c126e;
L_004c1185:; BB(0x004c1185);
    /* 004c1185: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c118b: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x4c1190u); f_0047e190();
    /* 004c1190: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c1193: jne 0x4c11e0 */ if (!fZ) goto L_004c11e0;
L_004c1195:; BB(0x004c1195);
    /* 004c1195: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c119b: call 0x47e280 */ r_esp -= 4; W32(r_esp, 0x4c11a0u); f_0047e280();
    /* 004c11a0: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c11a3: jne 0x4c11e0 */ if (!fZ) goto L_004c11e0;
L_004c11a5:; BB(0x004c11a5);
    /* 004c11a5: mov cx, word ptr [0x791e50] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x791e50u))) & 0xffffu);
    /* 004c11ac: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c11ad: movsx edx, word ptr [0x791e90] */ r_edx = (u32)(i32)(i16)R16((u32)(0x791e90u));
    /* 004c11b4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c11b5: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c11bb: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x4c11c0u); f_0047e490();
    /* 004c11c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c11c1: movsx eax, word ptr [0x791e94] */ r_eax = (u32)(i32)(i16)R16((u32)(0x791e94u));
    /* 004c11c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c11c9: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c11cf: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c11d4u); f_0047e390();
    /* 004c11d4: mov ecx, eax */ r_ecx = r_eax;
    /* 004c11d6: call 0x4d4530 */ r_esp -= 4; W32(r_esp, 0x4c11dbu); f_004d4530();
    /* 004c11db: jmp 0x4c126e */ goto L_004c126e;
L_004c11e0:; BB(0x004c11e0);
    /* 004c11e0: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c11e6: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x4c11ebu); f_0047e190();
    /* 004c11eb: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c11ee: jne 0x4c1228 */ if (!fZ) goto L_004c1228;
L_004c11f0:; BB(0x004c11f0);
    /* 004c11f0: mov cx, word ptr [0x791e50] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x791e50u))) & 0xffffu);
    /* 004c11f7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c11f8: movsx edx, word ptr [0x791e90] */ r_edx = (u32)(i32)(i16)R16((u32)(0x791e90u));
    /* 004c11ff: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c1200: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c1206: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x4c120bu); f_0047e490();
    /* 004c120b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c120c: movsx eax, word ptr [0x791e94] */ r_eax = (u32)(i32)(i16)R16((u32)(0x791e94u));
    /* 004c1213: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c1214: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c121a: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c121fu); f_0047e390();
    /* 004c121f: mov ecx, eax */ r_ecx = r_eax;
    /* 004c1221: call 0x4eeb10 */ r_esp -= 4; W32(r_esp, 0x4c1226u); f_004eeb10();
    /* 004c1226: jmp 0x4c126e */ goto L_004c126e;
L_004c1228:; BB(0x004c1228);
    /* 004c1228: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c122e: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x4c1233u); f_0047e190();
    /* 004c1233: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c1236: jne 0x4c126e */ if (!fZ) goto L_004c126e;
L_004c1238:; BB(0x004c1238);
    /* 004c1238: mov cx, word ptr [0x791e50] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x791e50u))) & 0xffffu);
    /* 004c123f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c1240: movsx edx, word ptr [0x791e90] */ r_edx = (u32)(i32)(i16)R16((u32)(0x791e90u));
    /* 004c1247: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c1248: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c124e: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x4c1253u); f_0047e490();
    /* 004c1253: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c1254: movsx eax, word ptr [0x791e94] */ r_eax = (u32)(i32)(i16)R16((u32)(0x791e94u));
    /* 004c125b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c125c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c1262: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c1267u); f_0047e390();
    /* 004c1267: mov ecx, eax */ r_ecx = r_eax;
    /* 004c1269: call 0x4f0fd0 */ r_esp -= 4; W32(r_esp, 0x4c126eu); f_004f0fd0();
L_004c126e:; BB(0x004c126e);
    /* 004c126e: jmp 0x4c1092 */ goto L_004c1092;
L_004c1273:; BB(0x004c1273);
    /* 004c1273: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c1279: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c127c: call 0x4f6840 */ r_esp -= 4; W32(r_esp, 0x4c1281u); f_004f6840();
    /* 004c1281: mov esi, eax */ r_esi = r_eax;
    /* 004c1283: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c1289: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x4c128eu); f_0047bc20();
    /* 004c128e: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004c1291: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004c1292: movsx ecx, word ptr [0x791e90] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x791e90u));
    /* 004c1299: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c129a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c12a0: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4c12a5u); f_0047e3d0();
    /* 004c12a5: mov ecx, eax */ r_ecx = r_eax;
    /* 004c12a7: call 0x4c6b80 */ r_esp -= 4; W32(r_esp, 0x4c12acu); f_004c6b80();
    /* 004c12ac: movsx edx, word ptr [0x791e90] */ r_edx = (u32)(i32)(i16)R16((u32)(0x791e90u));
    /* 004c12b3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c12b4: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c12ba: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4c12bfu); f_0047e3d0();
    /* 004c12bf: mov ecx, eax */ r_ecx = r_eax;
    /* 004c12c1: call 0x4da300 */ r_esp -= 4; W32(r_esp, 0x4c12c6u); f_004da300();
    /* 004c12c6: movsx eax, word ptr [0x791e90] */ r_eax = (u32)(i32)(i16)R16((u32)(0x791e90u));
    /* 004c12cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c12ce: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c12d4: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4c12d9u); f_0047e3d0();
    /* 004c12d9: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 004c12dc: mov dword ptr [ebp - 0x614], ecx */ W32((u32)(r_ebp+0xfffff9ecu), r_ecx);
    /* 004c12e2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c12e4: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c12ea: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c12ed: call 0x4f6840 */ r_esp -= 4; W32(r_esp, 0x4c12f2u); f_004f6840();
    /* 004c12f2: mov esi, eax */ r_esi = r_eax;
    /* 004c12f4: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c12fa: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x4c12ffu); f_0047bc20();
    /* 004c12ff: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004c1302: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004c1303: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x4c1308u); f_0064c8a0();
    /* 004c1308: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c130b: mov dword ptr [ebp - 0x75c], eax */ W32((u32)(r_ebp+0xfffff8a4u), r_eax);
    /* 004c1311: mov dword ptr [ebp - 0x758], edx */ W32((u32)(r_ebp+0xfffff8a8u), r_edx);
    /* 004c1317: mov edx, dword ptr [ebp - 0x75c] */ r_edx = R32((u32)(r_ebp+0xfffff8a4u));
    /* 004c131d: mov dword ptr [ebp - 0x610], edx */ W32((u32)(r_ebp+0xfffff9f0u), r_edx);
    /* 004c1323: mov eax, dword ptr [ebp - 0x758] */ r_eax = R32((u32)(r_ebp+0xfffff8a8u));
    /* 004c1329: mov dword ptr [ebp - 0x60c], eax */ W32((u32)(r_ebp+0xfffff9f4u), r_eax);
    /* 004c132f: mov ecx, dword ptr [ebp - 0x60c] */ r_ecx = R32((u32)(r_ebp+0xfffff9f4u));
    /* 004c1335: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c1336: mov edx, dword ptr [ebp - 0x610] */ r_edx = R32((u32)(r_ebp+0xfffff9f0u));
    /* 004c133c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c133d: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 004c133f: mov eax, dword ptr [ebp - 0x614] */ r_eax = R32((u32)(r_ebp+0xfffff9ecu));
    /* 004c1345: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c1346: mov ecx, dword ptr [0x79506c] */ r_ecx = R32((u32)(0x79506cu));
    /* 004c134c: call 0x5e7e40 */ r_esp -= 4; W32(r_esp, 0x4c1351u); f_005e7e40();
    /* 004c1351: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c1357: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c135a: call 0x4f6840 */ r_esp -= 4; W32(r_esp, 0x4c135fu); f_004f6840();
    /* 004c135f: mov esi, eax */ r_esi = r_eax;
    /* 004c1361: mov ecx, dword ptr [0x791e50] */ r_ecx = R32((u32)(0x791e50u));
    /* 004c1367: shl ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 004c1369: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c136a: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4c136fu); f_0062fbf0();
    /* 004c136f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c1372: mov edi, eax */ r_edi = r_eax;
    /* 004c1374: mov edx, dword ptr [0x791e50] */ r_edx = R32((u32)(0x791e50u));
    /* 004c137a: shl edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 004c137c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c137d: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4c1382u); f_0062fbf0();
    /* 004c1382: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c1385: lea edi, [edi + eax + 5] */ r_edi = (u32)(r_edi+r_eax+0x5u);
    /* 004c1389: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c138f: call 0x47bde0 */ r_esp -= 4; W32(r_esp, 0x4c1394u); f_0047bde0();
    /* 004c1394: imul edi, eax */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_eax; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004c1397: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c1399: jle 0x4c13a7 */ if ((fZ||fS!=fO)) goto L_004c13a7;
L_004c139b:; BB(0x004c139b);
    /* 004c139b: mov dword ptr [0x791e48], 0xa */ W32((u32)(0x791e48u), 0xau);
    /* 004c13a5: jmp 0x4c1413 */ goto L_004c1413;
L_004c13a7:; BB(0x004c13a7);
    /* 004c13a7: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c13ad: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c13b0: call 0x4f6840 */ r_esp -= 4; W32(r_esp, 0x4c13b5u); f_004f6840();
    /* 004c13b5: mov esi, eax */ r_esi = r_eax;
    /* 004c13b7: mov eax, dword ptr [0x791e50] */ r_eax = R32((u32)(0x791e50u));
    /* 004c13bc: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004c13bd: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004c13c0: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c13c2: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004c13c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c13c6: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4c13cbu); f_0062fbf0();
    /* 004c13cb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c13ce: mov edi, eax */ r_edi = r_eax;
    /* 004c13d0: mov eax, dword ptr [0x791e50] */ r_eax = R32((u32)(0x791e50u));
    /* 004c13d5: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004c13d6: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004c13d9: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c13db: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004c13de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c13df: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4c13e4u); f_0062fbf0();
    /* 004c13e4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c13e7: lea edi, [edi + eax + 3] */ r_edi = (u32)(r_edi+r_eax+0x3u);
    /* 004c13eb: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c13f1: call 0x47bce0 */ r_esp -= 4; W32(r_esp, 0x4c13f6u); f_0047bce0();
    /* 004c13f6: imul edi, eax */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_eax; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004c13f9: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c13fb: jge 0x4c1409 */ if ((fS==fO)) goto L_004c1409;
L_004c13fd:; BB(0x004c13fd);
    /* 004c13fd: mov dword ptr [0x791e48], 9 */ W32((u32)(0x791e48u), 0x9u);
    /* 004c1407: jmp 0x4c1413 */ goto L_004c1413;
L_004c1409:; BB(0x004c1409);
    /* 004c1409: mov dword ptr [0x791e48], 0xb */ W32((u32)(0x791e48u), 0xbu);
L_004c1413:; BB(0x004c1413);
    /* 004c1413: movsx eax, word ptr [0x791e90] */ r_eax = (u32)(i32)(i16)R16((u32)(0x791e90u));
    /* 004c141a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c141b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c1421: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x4c1426u); f_0047e490();
    /* 004c1426: mov dword ptr [0x791e4c], eax */ W32((u32)(0x791e4cu), r_eax);
    /* 004c142b: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 004c142d: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004c1433: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004c1435: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004c143b: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004c143e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4c1440u); call_ind(t); }
    /* 004c1440: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 004c1442: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004c1448: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004c144a: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004c1450: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004c1453: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4c1455u); call_ind(t); }
    /* 004c1455: jmp 0x4c353d */ goto L_004c353d;
L_004c145a:; BB(0x004c145a);
    /* 004c145a: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 004c1460: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x4c1465u); f_005da7b0();
    /* 004c1465: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004c1468: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c146a: je 0x4c15a4 */ if (fZ) goto L_004c15a4;
L_004c1470:; BB(0x004c1470);
    /* 004c1470: mov edx, dword ptr [0x791eb8] */ r_edx = R32((u32)(0x791eb8u));
    /* 004c1476: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004c1478: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 004c147e: mov edx, dword ptr [eax + 0x2d4] */ r_edx = R32((u32)(r_eax+0x2d4u));
    /* 004c1484: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4c1486u); call_ind(t); }
    /* 004c1486: push 0x791e8c */ { u32 v = 0x791e8cu; r_esp -= 4; W32(r_esp, v); }
    /* 004c148b: push 0x791e88 */ { u32 v = 0x791e88u; r_esp -= 4; W32(r_esp, v); }
    /* 004c1490: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c1496: call 0x483c30 */ r_esp -= 4; W32(r_esp, 0x4c149bu); f_00483c30();
    /* 004c149b: mov dword ptr [0x791e78], eax */ W32((u32)(0x791e78u), r_eax);
    /* 004c14a0: cmp dword ptr [0x791e78], 0 */ {  u32 a = R32((u32)(0x791e78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c14a7: jl 0x4c14e3 */ if ((fS!=fO)) goto L_004c14e3;
L_004c14a9:; BB(0x004c14a9);
    /* 004c14a9: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c14af: call 0x47aaa0 */ r_esp -= 4; W32(r_esp, 0x4c14b4u); f_0047aaa0();
    /* 004c14b4: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004c14b6: mov eax, dword ptr [ebp - 0x858] */ r_eax = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004c14bc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004c14be: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004c14c4: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004c14c7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4c14c9u); call_ind(t); }
    /* 004c14c9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c14cb: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004c14d1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004c14d3: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004c14d9: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004c14dc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4c14deu); call_ind(t); }
    /* 004c14de: jmp 0x4c353d */ goto L_004c353d;
L_004c14e3:; BB(0x004c14e3);
    /* 004c14e3: mov ecx, dword ptr [0x791e4c] */ r_ecx = R32((u32)(0x791e4cu));
    /* 004c14e9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c14ea: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c14f0: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c14f5u); f_0047e390();
    /* 004c14f5: mov ecx, eax */ r_ecx = r_eax;
    /* 004c14f7: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x4c14fcu); f_004c6cb0();
    /* 004c14fc: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c14ff: jne 0x4c15a4 */ if (!fZ) goto L_004c15a4;
L_004c1505:; BB(0x004c1505);
    /* 004c1505: cmp dword ptr [0x791e48], 7 */ {  u32 a = R32((u32)(0x791e48u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c150c: je 0x4c1556 */ if (fZ) goto L_004c1556;
L_004c150e:; BB(0x004c150e);
    /* 004c150e: cmp dword ptr [0x791e48], 9 */ {  u32 a = R32((u32)(0x791e48u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c1515: je 0x4c1556 */ if (fZ) goto L_004c1556;
L_004c1517:; BB(0x004c1517);
    /* 004c1517: cmp dword ptr [0x791e48], 0xa */ {  u32 a = R32((u32)(0x791e48u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c151e: je 0x4c1556 */ if (fZ) goto L_004c1556;
L_004c1520:; BB(0x004c1520);
    /* 004c1520: cmp dword ptr [0x791e48], 0xb */ {  u32 a = R32((u32)(0x791e48u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c1527: je 0x4c1556 */ if (fZ) goto L_004c1556;
L_004c1529:; BB(0x004c1529);
    /* 004c1529: cmp dword ptr [0x791e48], 0xc */ {  u32 a = R32((u32)(0x791e48u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c1530: je 0x4c1556 */ if (fZ) goto L_004c1556;
L_004c1532:; BB(0x004c1532);
    /* 004c1532: cmp dword ptr [0x791e48], 0xd */ {  u32 a = R32((u32)(0x791e48u)); u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c1539: je 0x4c1556 */ if (fZ) goto L_004c1556;
L_004c153b:; BB(0x004c153b);
    /* 004c153b: cmp dword ptr [0x791e48], 0xe */ {  u32 a = R32((u32)(0x791e48u)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c1542: je 0x4c1556 */ if (fZ) goto L_004c1556;
L_004c1544:; BB(0x004c1544);
    /* 004c1544: cmp dword ptr [0x791e48], 0xf */ {  u32 a = R32((u32)(0x791e48u)); u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c154b: je 0x4c1556 */ if (fZ) goto L_004c1556;
L_004c154d:; BB(0x004c154d);
    /* 004c154d: cmp dword ptr [0x791e48], 0x10 */ {  u32 a = R32((u32)(0x791e48u)); u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c1554: jne 0x4c15a4 */ if (!fZ) goto L_004c15a4;
L_004c1556:; BB(0x004c1556);
    /* 004c1556: lea edx, [ebp - 0x618] */ r_edx = (u32)(r_ebp+0xfffff9e8u);
    /* 004c155c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c155d: lea eax, [ebp - 0x61c] */ r_eax = (u32)(r_ebp+0xfffff9e4u);
    /* 004c1563: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c1564: mov cx, word ptr [0x791e4c] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x791e4cu))) & 0xffffu);
    /* 004c156b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c156c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c1572: call 0x483a70 */ r_esp -= 4; W32(r_esp, 0x4c1577u); f_00483a70();
    /* 004c1577: movsx edx, word ptr [ebp - 0x61c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffff9e4u));
    /* 004c157e: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c1581: jne 0x4c15a4 */ if (!fZ) goto L_004c15a4;
L_004c1583:; BB(0x004c1583);
    /* 004c1583: cmp dword ptr [ebp - 0x618], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffff9e8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c158a: jge 0x4c15a4 */ if ((fS==fO)) goto L_004c15a4;
L_004c158c:; BB(0x004c158c);
    /* 004c158c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004c158e: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4c1593u); f_0062fbf0();
    /* 004c1593: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c1596: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c1598: jne 0x4c15a4 */ if (!fZ) goto L_004c15a4;
L_004c159a:; BB(0x004c159a);
    /* 004c159a: mov dword ptr [0x791e48], 8 */ W32((u32)(0x791e48u), 0x8u);
L_004c15a4:; BB(0x004c15a4);
    /* 004c15a4: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 004c15a6: mov eax, dword ptr [ebp - 0x858] */ r_eax = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004c15ac: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004c15ae: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004c15b4: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004c15b7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4c15b9u); call_ind(t); }
    /* 004c15b9: cmp dword ptr [0x791e48], 0 */ {  u32 a = R32((u32)(0x791e48u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c15c0: jne 0x4c15dc */ if (!fZ) goto L_004c15dc;
L_004c15c2:; BB(0x004c15c2);
    /* 004c15c2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c15c4: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004c15ca: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004c15cc: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004c15d2: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004c15d5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4c15d7u); call_ind(t); }
    /* 004c15d7: jmp 0x4c331f */ goto L_004c331f;
L_004c15dc:; BB(0x004c15dc);
    /* 004c15dc: cmp dword ptr [0x791e48], 8 */ {  u32 a = R32((u32)(0x791e48u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c15e3: jne 0x4c1607 */ if (!fZ) goto L_004c1607;
L_004c15e5:; BB(0x004c15e5);
    /* 004c15e5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004c15e8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c15e9: mov edx, dword ptr [0x791e4c] */ r_edx = R32((u32)(0x791e4cu));
    /* 004c15ef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c15f0: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c15f6: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c15fbu); f_0047e390();
    /* 004c15fb: mov ecx, eax */ r_ecx = r_eax;
    /* 004c15fd: call 0x4cd3a0 */ r_esp -= 4; W32(r_esp, 0x4c1602u); f_004cd3a0();
    /* 004c1602: jmp 0x4c331f */ goto L_004c331f;
L_004c1607:; BB(0x004c1607);
    /* 004c1607: mov eax, dword ptr [0x791e4c] */ r_eax = R32((u32)(0x791e4cu));
    /* 004c160c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c160d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c1613: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c1618u); f_0047e390();
    /* 004c1618: mov ecx, eax */ r_ecx = r_eax;
    /* 004c161a: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x4c161fu); f_004c6cb0();
    /* 004c161f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c1622: jne 0x4c1bfe */ if (!fZ) goto L_004c1bfe;
L_004c1628:; BB(0x004c1628);
    /* 004c1628: cmp dword ptr [0x791e48], 7 */ {  u32 a = R32((u32)(0x791e48u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c162f: jne 0x4c17bf */ if (!fZ) goto L_004c17bf;
L_004c1635:; BB(0x004c1635);
    /* 004c1635: lea ecx, [ebp - 0x768] */ r_ecx = (u32)(r_ebp+0xfffff898u);
    /* 004c163b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c163c: mov edx, dword ptr [0x791e4c] */ r_edx = R32((u32)(0x791e4cu));
    /* 004c1642: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c1643: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c1649: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c164eu); f_0047e390();
    /* 004c164e: mov ecx, eax */ r_ecx = r_eax;
    /* 004c1650: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x4c1655u); f_004c7c40();
    /* 004c1655: mov dword ptr [ebp - 0x95c], eax */ W32((u32)(r_ebp+0xfffff6a4u), r_eax);
    /* 004c165b: mov eax, dword ptr [ebp - 0x95c] */ r_eax = R32((u32)(r_ebp+0xfffff6a4u));
    /* 004c1661: mov dword ptr [ebp - 0x960], eax */ W32((u32)(r_ebp+0xfffff6a0u), r_eax);
    /* 004c1667: mov dword ptr [ebp - 4], 0x4d */ W32((u32)(r_ebp+0xfffffffcu), 0x4du);
    /* 004c166e: mov ecx, dword ptr [ebp - 0x854] */ r_ecx = R32((u32)(r_ebp+0xfffff7acu));
    /* 004c1674: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 004c1677: mov dword ptr [ebp - 0x854], ecx */ W32((u32)(r_ebp+0xfffff7acu), r_ecx);
    /* 004c167d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c167f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c1681: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c1683: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c1685: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c1687: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c1689: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c168b: lea edx, [ebp - 0x76c] */ r_edx = (u32)(r_ebp+0xfffff894u);
    /* 004c1691: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c1692: mov ecx, dword ptr [ebp - 0x960] */ r_ecx = R32((u32)(r_ebp+0xfffff6a0u));
    /* 004c1698: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x4c169du); f_00485940();
    /* 004c169d: mov dword ptr [ebp - 0x964], eax */ W32((u32)(r_ebp+0xfffff69cu), r_eax);
    /* 004c16a3: mov eax, dword ptr [ebp - 0x964] */ r_eax = R32((u32)(r_ebp+0xfffff69cu));
    /* 004c16a9: mov dword ptr [ebp - 0x968], eax */ W32((u32)(r_ebp+0xfffff698u), r_eax);
    /* 004c16af: mov dword ptr [ebp - 4], 0x4e */ W32((u32)(r_ebp+0xfffffffcu), 0x4eu);
    /* 004c16b6: mov ecx, dword ptr [ebp - 0x854] */ r_ecx = R32((u32)(r_ebp+0xfffff7acu));
    /* 004c16bc: or ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 004c16bf: mov dword ptr [ebp - 0x854], ecx */ W32((u32)(r_ebp+0xfffff7acu), r_ecx);
    /* 004c16c5: mov edx, dword ptr [0x7913d4] */ r_edx = R32((u32)(0x7913d4u));
    /* 004c16cb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c16cc: lea eax, [ebp - 0x76d] */ r_eax = (u32)(r_ebp+0xfffff893u);
    /* 004c16d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c16d3: mov ecx, dword ptr [ebp - 0x968] */ r_ecx = R32((u32)(r_ebp+0xfffff698u));
    /* 004c16d9: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x4c16deu); f_004a2160();
    /* 004c16de: mov ecx, eax */ r_ecx = r_eax;
    /* 004c16e0: call 0x4a1f00 */ r_esp -= 4; W32(r_esp, 0x4c16e5u); f_004a1f00();
    /* 004c16e5: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004c16e8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c16ea: je 0x4c1716 */ if (fZ) goto L_004c1716;
L_004c16ec:; BB(0x004c16ec);
    /* 004c16ec: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004c16ee: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4c16f3u); f_0062fbf0();
    /* 004c16f3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c16f6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c16f8: jne 0x4c1716 */ if (!fZ) goto L_004c1716;
L_004c16fa:; BB(0x004c16fa);
    /* 004c16fa: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c1700: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x4c1705u); f_0047e190();
    /* 004c1705: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c1708: je 0x4c1716 */ if (fZ) goto L_004c1716;
L_004c170a:; BB(0x004c170a);
    /* 004c170a: mov dword ptr [ebp - 0x96c], 1 */ W32((u32)(r_ebp+0xfffff694u), 0x1u);
    /* 004c1714: jmp 0x4c1720 */ goto L_004c1720;
L_004c1716:; BB(0x004c1716);
    /* 004c1716: mov dword ptr [ebp - 0x96c], 0 */ W32((u32)(r_ebp+0xfffff694u), 0x0u);
L_004c1720:; BB(0x004c1720);
    /* 004c1720: mov dl, byte ptr [ebp - 0x96c] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffff694u))) & 0xffu);
    /* 004c1726: mov byte ptr [ebp - 0x75d], dl */ W8((u32)(r_ebp+0xfffff8a3u), (u8)r_edx);
    /* 004c172c: mov dword ptr [ebp - 4], 0x4d */ W32((u32)(r_ebp+0xfffffffcu), 0x4du);
    /* 004c1733: mov eax, dword ptr [ebp - 0x854] */ r_eax = R32((u32)(r_ebp+0xfffff7acu));
    /* 004c1739: and eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 004c173c: je 0x4c1750 */ if (fZ) goto L_004c1750;
L_004c173e:; BB(0x004c173e);
    /* 004c173e: and dword ptr [ebp - 0x854], 0xfffffffd */ { u32 ad = (u32)(r_ebp+0xfffff7acu);  u32 a = R32(ad); u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 004c1745: lea ecx, [ebp - 0x76c] */ r_ecx = (u32)(r_ebp+0xfffff894u);
    /* 004c174b: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x4c1750u); f_004a20f0();
L_004c1750:; BB(0x004c1750);
    /* 004c1750: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004c1757: mov ecx, dword ptr [ebp - 0x854] */ r_ecx = R32((u32)(r_ebp+0xfffff7acu));
    /* 004c175d: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 004c1760: je 0x4c1774 */ if (fZ) goto L_004c1774;
L_004c1762:; BB(0x004c1762);
    /* 004c1762: and dword ptr [ebp - 0x854], 0xfffffffe */ { u32 ad = (u32)(r_ebp+0xfffff7acu);  u32 a = R32(ad); u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 004c1769: lea ecx, [ebp - 0x768] */ r_ecx = (u32)(r_ebp+0xfffff898u);
    /* 004c176f: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x4c1774u); f_00484470();
L_004c1774:; BB(0x004c1774);
    /* 004c1774: movzx edx, byte ptr [ebp - 0x75d] */ r_edx = (u32)R8((u32)(r_ebp+0xfffff8a3u));
    /* 004c177b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c177d: je 0x4c179e */ if (fZ) goto L_004c179e;
L_004c177f:; BB(0x004c177f);
    /* 004c177f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004c1782: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c1783: mov ecx, dword ptr [0x791e4c] */ r_ecx = R32((u32)(0x791e4cu));
    /* 004c1789: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c178a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c1790: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c1795u); f_0047e390();
    /* 004c1795: mov ecx, eax */ r_ecx = r_eax;
    /* 004c1797: call 0x4ccba0 */ r_esp -= 4; W32(r_esp, 0x4c179cu); f_004ccba0();
    /* 004c179c: jmp 0x4c17ba */ goto L_004c17ba;
L_004c179e:; BB(0x004c179e);
    /* 004c179e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004c17a1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c17a2: mov eax, dword ptr [0x791e4c] */ r_eax = R32((u32)(0x791e4cu));
    /* 004c17a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c17a8: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c17ae: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c17b3u); f_0047e390();
    /* 004c17b3: mov ecx, eax */ r_ecx = r_eax;
    /* 004c17b5: call 0x4ccb20 */ r_esp -= 4; W32(r_esp, 0x4c17bau); f_004ccb20();
L_004c17ba:; BB(0x004c17ba);
    /* 004c17ba: jmp 0x4c1bf9 */ goto L_004c1bf9;
L_004c17bf:; BB(0x004c17bf);
    /* 004c17bf: cmp dword ptr [0x791e48], 0xa */ {  u32 a = R32((u32)(0x791e48u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c17c6: jne 0x4c1956 */ if (!fZ) goto L_004c1956;
L_004c17cc:; BB(0x004c17cc);
    /* 004c17cc: lea ecx, [ebp - 0x778] */ r_ecx = (u32)(r_ebp+0xfffff888u);
    /* 004c17d2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c17d3: mov edx, dword ptr [0x791e4c] */ r_edx = R32((u32)(0x791e4cu));
    /* 004c17d9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c17da: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c17e0: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c17e5u); f_0047e390();
    /* 004c17e5: mov ecx, eax */ r_ecx = r_eax;
    /* 004c17e7: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x4c17ecu); f_004c7c40();
    /* 004c17ec: mov dword ptr [ebp - 0x970], eax */ W32((u32)(r_ebp+0xfffff690u), r_eax);
    /* 004c17f2: mov eax, dword ptr [ebp - 0x970] */ r_eax = R32((u32)(r_ebp+0xfffff690u));
    /* 004c17f8: mov dword ptr [ebp - 0x974], eax */ W32((u32)(r_ebp+0xfffff68cu), r_eax);
    /* 004c17fe: mov dword ptr [ebp - 4], 0x4f */ W32((u32)(r_ebp+0xfffffffcu), 0x4fu);
    /* 004c1805: mov ecx, dword ptr [ebp - 0x854] */ r_ecx = R32((u32)(r_ebp+0xfffff7acu));
    /* 004c180b: or ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 004c180e: mov dword ptr [ebp - 0x854], ecx */ W32((u32)(r_ebp+0xfffff7acu), r_ecx);
    /* 004c1814: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c1816: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c1818: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c181a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c181c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c181e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c1820: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c1822: lea edx, [ebp - 0x77c] */ r_edx = (u32)(r_ebp+0xfffff884u);
    /* 004c1828: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c1829: mov ecx, dword ptr [ebp - 0x974] */ r_ecx = R32((u32)(r_ebp+0xfffff68cu));
    /* 004c182f: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x4c1834u); f_00485940();
    /* 004c1834: mov dword ptr [ebp - 0x978], eax */ W32((u32)(r_ebp+0xfffff688u), r_eax);
    /* 004c183a: mov eax, dword ptr [ebp - 0x978] */ r_eax = R32((u32)(r_ebp+0xfffff688u));
    /* 004c1840: mov dword ptr [ebp - 0x97c], eax */ W32((u32)(r_ebp+0xfffff684u), r_eax);
    /* 004c1846: mov dword ptr [ebp - 4], 0x50 */ W32((u32)(r_ebp+0xfffffffcu), 0x50u);
    /* 004c184d: mov ecx, dword ptr [ebp - 0x854] */ r_ecx = R32((u32)(r_ebp+0xfffff7acu));
    /* 004c1853: or ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 004c1856: mov dword ptr [ebp - 0x854], ecx */ W32((u32)(r_ebp+0xfffff7acu), r_ecx);
    /* 004c185c: mov edx, dword ptr [0x7913d4] */ r_edx = R32((u32)(0x7913d4u));
    /* 004c1862: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c1863: lea eax, [ebp - 0x77d] */ r_eax = (u32)(r_ebp+0xfffff883u);
    /* 004c1869: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c186a: mov ecx, dword ptr [ebp - 0x97c] */ r_ecx = R32((u32)(r_ebp+0xfffff684u));
    /* 004c1870: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x4c1875u); f_004a2160();
    /* 004c1875: mov ecx, eax */ r_ecx = r_eax;
    /* 004c1877: call 0x4a1f00 */ r_esp -= 4; W32(r_esp, 0x4c187cu); f_004a1f00();
    /* 004c187c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004c187f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c1881: je 0x4c18ad */ if (fZ) goto L_004c18ad;
L_004c1883:; BB(0x004c1883);
    /* 004c1883: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004c1885: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4c188au); f_0062fbf0();
    /* 004c188a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c188d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c188f: jne 0x4c18ad */ if (!fZ) goto L_004c18ad;
L_004c1891:; BB(0x004c1891);
    /* 004c1891: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c1897: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x4c189cu); f_0047e190();
    /* 004c189c: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c189f: je 0x4c18ad */ if (fZ) goto L_004c18ad;
L_004c18a1:; BB(0x004c18a1);
    /* 004c18a1: mov dword ptr [ebp - 0x980], 1 */ W32((u32)(r_ebp+0xfffff680u), 0x1u);
    /* 004c18ab: jmp 0x4c18b7 */ goto L_004c18b7;
L_004c18ad:; BB(0x004c18ad);
    /* 004c18ad: mov dword ptr [ebp - 0x980], 0 */ W32((u32)(r_ebp+0xfffff680u), 0x0u);
L_004c18b7:; BB(0x004c18b7);
    /* 004c18b7: mov dl, byte ptr [ebp - 0x980] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffff680u))) & 0xffu);
    /* 004c18bd: mov byte ptr [ebp - 0x76e], dl */ W8((u32)(r_ebp+0xfffff892u), (u8)r_edx);
    /* 004c18c3: mov dword ptr [ebp - 4], 0x4f */ W32((u32)(r_ebp+0xfffffffcu), 0x4fu);
    /* 004c18ca: mov eax, dword ptr [ebp - 0x854] */ r_eax = R32((u32)(r_ebp+0xfffff7acu));
    /* 004c18d0: and eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 004c18d3: je 0x4c18e7 */ if (fZ) goto L_004c18e7;
L_004c18d5:; BB(0x004c18d5);
    /* 004c18d5: and dword ptr [ebp - 0x854], 0xfffffff7 */ { u32 ad = (u32)(r_ebp+0xfffff7acu);  u32 a = R32(ad); u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 004c18dc: lea ecx, [ebp - 0x77c] */ r_ecx = (u32)(r_ebp+0xfffff884u);
    /* 004c18e2: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x4c18e7u); f_004a20f0();
L_004c18e7:; BB(0x004c18e7);
    /* 004c18e7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004c18ee: mov ecx, dword ptr [ebp - 0x854] */ r_ecx = R32((u32)(r_ebp+0xfffff7acu));
    /* 004c18f4: and ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 004c18f7: je 0x4c190b */ if (fZ) goto L_004c190b;
L_004c18f9:; BB(0x004c18f9);
    /* 004c18f9: and dword ptr [ebp - 0x854], 0xfffffffb */ { u32 ad = (u32)(r_ebp+0xfffff7acu);  u32 a = R32(ad); u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 004c1900: lea ecx, [ebp - 0x778] */ r_ecx = (u32)(r_ebp+0xfffff888u);
    /* 004c1906: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x4c190bu); f_00484470();
L_004c190b:; BB(0x004c190b);
    /* 004c190b: movzx edx, byte ptr [ebp - 0x76e] */ r_edx = (u32)R8((u32)(r_ebp+0xfffff892u));
    /* 004c1912: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c1914: je 0x4c1935 */ if (fZ) goto L_004c1935;
L_004c1916:; BB(0x004c1916);
    /* 004c1916: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004c1919: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c191a: mov ecx, dword ptr [0x791e4c] */ r_ecx = R32((u32)(0x791e4cu));
    /* 004c1920: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c1921: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c1927: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c192cu); f_0047e390();
    /* 004c192c: mov ecx, eax */ r_ecx = r_eax;
    /* 004c192e: call 0x4ccba0 */ r_esp -= 4; W32(r_esp, 0x4c1933u); f_004ccba0();
    /* 004c1933: jmp 0x4c1951 */ goto L_004c1951;
L_004c1935:; BB(0x004c1935);
    /* 004c1935: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004c1938: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c1939: mov eax, dword ptr [0x791e4c] */ r_eax = R32((u32)(0x791e4cu));
    /* 004c193e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c193f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c1945: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c194au); f_0047e390();
    /* 004c194a: mov ecx, eax */ r_ecx = r_eax;
    /* 004c194c: call 0x4ccc20 */ r_esp -= 4; W32(r_esp, 0x4c1951u); f_004ccc20();
L_004c1951:; BB(0x004c1951);
    /* 004c1951: jmp 0x4c1bf9 */ goto L_004c1bf9;
L_004c1956:; BB(0x004c1956);
    /* 004c1956: cmp dword ptr [0x791e48], 9 */ {  u32 a = R32((u32)(0x791e48u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c195d: jne 0x4c1aed */ if (!fZ) goto L_004c1aed;
L_004c1963:; BB(0x004c1963);
    /* 004c1963: lea ecx, [ebp - 0x788] */ r_ecx = (u32)(r_ebp+0xfffff878u);
    /* 004c1969: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c196a: mov edx, dword ptr [0x791e4c] */ r_edx = R32((u32)(0x791e4cu));
    /* 004c1970: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c1971: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c1977: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c197cu); f_0047e390();
    /* 004c197c: mov ecx, eax */ r_ecx = r_eax;
    /* 004c197e: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x4c1983u); f_004c7c40();
    /* 004c1983: mov dword ptr [ebp - 0x984], eax */ W32((u32)(r_ebp+0xfffff67cu), r_eax);
    /* 004c1989: mov eax, dword ptr [ebp - 0x984] */ r_eax = R32((u32)(r_ebp+0xfffff67cu));
    /* 004c198f: mov dword ptr [ebp - 0x988], eax */ W32((u32)(r_ebp+0xfffff678u), r_eax);
    /* 004c1995: mov dword ptr [ebp - 4], 0x51 */ W32((u32)(r_ebp+0xfffffffcu), 0x51u);
    /* 004c199c: mov ecx, dword ptr [ebp - 0x854] */ r_ecx = R32((u32)(r_ebp+0xfffff7acu));
    /* 004c19a2: or ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 004c19a5: mov dword ptr [ebp - 0x854], ecx */ W32((u32)(r_ebp+0xfffff7acu), r_ecx);
    /* 004c19ab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c19ad: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c19af: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c19b1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c19b3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c19b5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c19b7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c19b9: lea edx, [ebp - 0x78c] */ r_edx = (u32)(r_ebp+0xfffff874u);
    /* 004c19bf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c19c0: mov ecx, dword ptr [ebp - 0x988] */ r_ecx = R32((u32)(r_ebp+0xfffff678u));
    /* 004c19c6: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x4c19cbu); f_00485940();
    /* 004c19cb: mov dword ptr [ebp - 0x98c], eax */ W32((u32)(r_ebp+0xfffff674u), r_eax);
    /* 004c19d1: mov eax, dword ptr [ebp - 0x98c] */ r_eax = R32((u32)(r_ebp+0xfffff674u));
    /* 004c19d7: mov dword ptr [ebp - 0x990], eax */ W32((u32)(r_ebp+0xfffff670u), r_eax);
    /* 004c19dd: mov dword ptr [ebp - 4], 0x52 */ W32((u32)(r_ebp+0xfffffffcu), 0x52u);
    /* 004c19e4: mov ecx, dword ptr [ebp - 0x854] */ r_ecx = R32((u32)(r_ebp+0xfffff7acu));
    /* 004c19ea: or ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 004c19ed: mov dword ptr [ebp - 0x854], ecx */ W32((u32)(r_ebp+0xfffff7acu), r_ecx);
    /* 004c19f3: mov edx, dword ptr [0x7913d4] */ r_edx = R32((u32)(0x7913d4u));
    /* 004c19f9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c19fa: lea eax, [ebp - 0x78d] */ r_eax = (u32)(r_ebp+0xfffff873u);
    /* 004c1a00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c1a01: mov ecx, dword ptr [ebp - 0x990] */ r_ecx = R32((u32)(r_ebp+0xfffff670u));
    /* 004c1a07: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x4c1a0cu); f_004a2160();
    /* 004c1a0c: mov ecx, eax */ r_ecx = r_eax;
    /* 004c1a0e: call 0x4a1f00 */ r_esp -= 4; W32(r_esp, 0x4c1a13u); f_004a1f00();
    /* 004c1a13: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004c1a16: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c1a18: je 0x4c1a44 */ if (fZ) goto L_004c1a44;
L_004c1a1a:; BB(0x004c1a1a);
    /* 004c1a1a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004c1a1c: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4c1a21u); f_0062fbf0();
    /* 004c1a21: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c1a24: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c1a26: jne 0x4c1a44 */ if (!fZ) goto L_004c1a44;
L_004c1a28:; BB(0x004c1a28);
    /* 004c1a28: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c1a2e: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x4c1a33u); f_0047e190();
    /* 004c1a33: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c1a36: je 0x4c1a44 */ if (fZ) goto L_004c1a44;
L_004c1a38:; BB(0x004c1a38);
    /* 004c1a38: mov dword ptr [ebp - 0x994], 1 */ W32((u32)(r_ebp+0xfffff66cu), 0x1u);
    /* 004c1a42: jmp 0x4c1a4e */ goto L_004c1a4e;
L_004c1a44:; BB(0x004c1a44);
    /* 004c1a44: mov dword ptr [ebp - 0x994], 0 */ W32((u32)(r_ebp+0xfffff66cu), 0x0u);
L_004c1a4e:; BB(0x004c1a4e);
    /* 004c1a4e: mov dl, byte ptr [ebp - 0x994] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffff66cu))) & 0xffu);
    /* 004c1a54: mov byte ptr [ebp - 0x77e], dl */ W8((u32)(r_ebp+0xfffff882u), (u8)r_edx);
    /* 004c1a5a: mov dword ptr [ebp - 4], 0x51 */ W32((u32)(r_ebp+0xfffffffcu), 0x51u);
    /* 004c1a61: mov eax, dword ptr [ebp - 0x854] */ r_eax = R32((u32)(r_ebp+0xfffff7acu));
    /* 004c1a67: and eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 004c1a6a: je 0x4c1a7e */ if (fZ) goto L_004c1a7e;
L_004c1a6c:; BB(0x004c1a6c);
    /* 004c1a6c: and dword ptr [ebp - 0x854], 0xffffffdf */ { u32 ad = (u32)(r_ebp+0xfffff7acu);  u32 a = R32(ad); u32 b = 0xffffffdfu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 004c1a73: lea ecx, [ebp - 0x78c] */ r_ecx = (u32)(r_ebp+0xfffff874u);
    /* 004c1a79: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x4c1a7eu); f_004a20f0();
L_004c1a7e:; BB(0x004c1a7e);
    /* 004c1a7e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004c1a85: mov ecx, dword ptr [ebp - 0x854] */ r_ecx = R32((u32)(r_ebp+0xfffff7acu));
    /* 004c1a8b: and ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 004c1a8e: je 0x4c1aa2 */ if (fZ) goto L_004c1aa2;
L_004c1a90:; BB(0x004c1a90);
    /* 004c1a90: and dword ptr [ebp - 0x854], 0xffffffef */ { u32 ad = (u32)(r_ebp+0xfffff7acu);  u32 a = R32(ad); u32 b = 0xffffffefu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 004c1a97: lea ecx, [ebp - 0x788] */ r_ecx = (u32)(r_ebp+0xfffff878u);
    /* 004c1a9d: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x4c1aa2u); f_00484470();
L_004c1aa2:; BB(0x004c1aa2);
    /* 004c1aa2: movzx edx, byte ptr [ebp - 0x77e] */ r_edx = (u32)R8((u32)(r_ebp+0xfffff882u));
    /* 004c1aa9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c1aab: je 0x4c1acc */ if (fZ) goto L_004c1acc;
L_004c1aad:; BB(0x004c1aad);
    /* 004c1aad: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004c1ab0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c1ab1: mov ecx, dword ptr [0x791e4c] */ r_ecx = R32((u32)(0x791e4cu));
    /* 004c1ab7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c1ab8: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c1abe: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c1ac3u); f_0047e390();
    /* 004c1ac3: mov ecx, eax */ r_ecx = r_eax;
    /* 004c1ac5: call 0x4ccba0 */ r_esp -= 4; W32(r_esp, 0x4c1acau); f_004ccba0();
    /* 004c1aca: jmp 0x4c1ae8 */ goto L_004c1ae8;
L_004c1acc:; BB(0x004c1acc);
    /* 004c1acc: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004c1acf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c1ad0: mov eax, dword ptr [0x791e4c] */ r_eax = R32((u32)(0x791e4cu));
    /* 004c1ad5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c1ad6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c1adc: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c1ae1u); f_0047e390();
    /* 004c1ae1: mov ecx, eax */ r_ecx = r_eax;
    /* 004c1ae3: call 0x4ccbe0 */ r_esp -= 4; W32(r_esp, 0x4c1ae8u); f_004ccbe0();
L_004c1ae8:; BB(0x004c1ae8);
    /* 004c1ae8: jmp 0x4c1bf9 */ goto L_004c1bf9;
L_004c1aed:; BB(0x004c1aed);
    /* 004c1aed: cmp dword ptr [0x791e48], 0xb */ {  u32 a = R32((u32)(0x791e48u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c1af4: jne 0x4c1b18 */ if (!fZ) goto L_004c1b18;
L_004c1af6:; BB(0x004c1af6);
    /* 004c1af6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004c1af9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c1afa: mov edx, dword ptr [0x791e4c] */ r_edx = R32((u32)(0x791e4cu));
    /* 004c1b00: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c1b01: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c1b07: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c1b0cu); f_0047e390();
    /* 004c1b0c: mov ecx, eax */ r_ecx = r_eax;
    /* 004c1b0e: call 0x4ccb60 */ r_esp -= 4; W32(r_esp, 0x4c1b13u); f_004ccb60();
    /* 004c1b13: jmp 0x4c1bf9 */ goto L_004c1bf9;
L_004c1b18:; BB(0x004c1b18);
    /* 004c1b18: cmp dword ptr [0x791e48], 0xc */ {  u32 a = R32((u32)(0x791e48u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c1b1f: jne 0x4c1b43 */ if (!fZ) goto L_004c1b43;
L_004c1b21:; BB(0x004c1b21);
    /* 004c1b21: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004c1b24: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c1b25: mov ecx, dword ptr [0x791e4c] */ r_ecx = R32((u32)(0x791e4cu));
    /* 004c1b2b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c1b2c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c1b32: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c1b37u); f_0047e390();
    /* 004c1b37: mov ecx, eax */ r_ecx = r_eax;
    /* 004c1b39: call 0x4ccde0 */ r_esp -= 4; W32(r_esp, 0x4c1b3eu); f_004ccde0();
    /* 004c1b3e: jmp 0x4c1bf9 */ goto L_004c1bf9;
L_004c1b43:; BB(0x004c1b43);
    /* 004c1b43: cmp dword ptr [0x791e48], 0xf */ {  u32 a = R32((u32)(0x791e48u)); u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c1b4a: jne 0x4c1b6d */ if (!fZ) goto L_004c1b6d;
L_004c1b4c:; BB(0x004c1b4c);
    /* 004c1b4c: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004c1b4f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c1b50: mov eax, dword ptr [0x791e4c] */ r_eax = R32((u32)(0x791e4cu));
    /* 004c1b55: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c1b56: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c1b5c: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c1b61u); f_0047e390();
    /* 004c1b61: mov ecx, eax */ r_ecx = r_eax;
    /* 004c1b63: call 0x4ccf80 */ r_esp -= 4; W32(r_esp, 0x4c1b68u); f_004ccf80();
    /* 004c1b68: jmp 0x4c1bf9 */ goto L_004c1bf9;
L_004c1b6d:; BB(0x004c1b6d);
    /* 004c1b6d: cmp dword ptr [0x791e48], 0x10 */ {  u32 a = R32((u32)(0x791e48u)); u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c1b74: jne 0x4c1b95 */ if (!fZ) goto L_004c1b95;
L_004c1b76:; BB(0x004c1b76);
    /* 004c1b76: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004c1b79: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c1b7a: mov edx, dword ptr [0x791e4c] */ r_edx = R32((u32)(0x791e4cu));
    /* 004c1b80: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c1b81: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c1b87: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c1b8cu); f_0047e390();
    /* 004c1b8c: mov ecx, eax */ r_ecx = r_eax;
    /* 004c1b8e: call 0x4cd280 */ r_esp -= 4; W32(r_esp, 0x4c1b93u); f_004cd280();
    /* 004c1b93: jmp 0x4c1bf9 */ goto L_004c1bf9;
L_004c1b95:; BB(0x004c1b95);
    /* 004c1b95: cmp dword ptr [0x791e48], 0xd */ {  u32 a = R32((u32)(0x791e48u)); u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c1b9c: jne 0x4c1bbd */ if (!fZ) goto L_004c1bbd;
L_004c1b9e:; BB(0x004c1b9e);
    /* 004c1b9e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004c1ba1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c1ba2: mov ecx, dword ptr [0x791e4c] */ r_ecx = R32((u32)(0x791e4cu));
    /* 004c1ba8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c1ba9: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c1baf: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c1bb4u); f_0047e390();
    /* 004c1bb4: mov ecx, eax */ r_ecx = r_eax;
    /* 004c1bb6: call 0x4ccfc0 */ r_esp -= 4; W32(r_esp, 0x4c1bbbu); f_004ccfc0();
    /* 004c1bbb: jmp 0x4c1bf9 */ goto L_004c1bf9;
L_004c1bbd:; BB(0x004c1bbd);
    /* 004c1bbd: cmp dword ptr [0x791e48], 0xe */ {  u32 a = R32((u32)(0x791e48u)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c1bc4: jne 0x4c1be4 */ if (!fZ) goto L_004c1be4;
L_004c1bc6:; BB(0x004c1bc6);
    /* 004c1bc6: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004c1bc9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c1bca: mov eax, dword ptr [0x791e4c] */ r_eax = R32((u32)(0x791e4cu));
    /* 004c1bcf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c1bd0: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c1bd6: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c1bdbu); f_0047e390();
    /* 004c1bdb: mov ecx, eax */ r_ecx = r_eax;
    /* 004c1bdd: call 0x4cd2b0 */ r_esp -= 4; W32(r_esp, 0x4c1be2u); f_004cd2b0();
    /* 004c1be2: jmp 0x4c1bf9 */ goto L_004c1bf9;
L_004c1be4:; BB(0x004c1be4);
    /* 004c1be4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c1be6: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004c1bec: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004c1bee: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004c1bf4: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004c1bf7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4c1bf9u); call_ind(t); }
L_004c1bf9:; BB(0x004c1bf9);
    /* 004c1bf9: jmp 0x4c331f */ goto L_004c331f;
L_004c1bfe:; BB(0x004c1bfe);
    /* 004c1bfe: mov ecx, dword ptr [0x791e4c] */ r_ecx = R32((u32)(0x791e4cu));
    /* 004c1c04: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c1c05: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c1c0b: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c1c10u); f_0047e390();
    /* 004c1c10: mov ecx, eax */ r_ecx = r_eax;
    /* 004c1c12: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x4c1c17u); f_004c6cb0();
    /* 004c1c17: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c1c1a: jne 0x4c330a */ if (!fZ) goto L_004c330a;
L_004c1c20:; BB(0x004c1c20);
    /* 004c1c20: mov dword ptr [ebp - 0x63c], 0 */ W32((u32)(r_ebp+0xfffff9c4u), 0x0u);
    /* 004c1c2a: mov dword ptr [ebp - 0x638], 0 */ W32((u32)(r_ebp+0xfffff9c8u), 0x0u);
    /* 004c1c34: mov word ptr [0x791e94], 0 */ W16((u32)(0x791e94u), 0x0u);
    /* 004c1c3d: jmp 0x4c1c51 */ goto L_004c1c51;
L_004c1c3f:; BB(0x004c1c3f);
    /* 004c1c3f: mov dx, word ptr [0x791e94] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x791e94u))) & 0xffffu);
    /* 004c1c46: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004c1c4a: mov word ptr [0x791e94], dx */ W16((u32)(0x791e94u), (u16)r_edx);
L_004c1c51:; BB(0x004c1c51);
    /* 004c1c51: movsx esi, word ptr [0x791e94] */ r_esi = (u32)(i32)(i16)R16((u32)(0x791e94u));
    /* 004c1c58: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c1c5e: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4c1c63u); f_0047f950();
    /* 004c1c63: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c1c65: jge 0x4c1cc8 */ if ((fS==fO)) goto L_004c1cc8;
L_004c1c67:; BB(0x004c1c67);
    /* 004c1c67: movsx eax, word ptr [0x791e94] */ r_eax = (u32)(i32)(i16)R16((u32)(0x791e94u));
    /* 004c1c6e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c1c6f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c1c75: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c1c7au); f_0047e390();
    /* 004c1c7a: mov ecx, eax */ r_ecx = r_eax;
    /* 004c1c7c: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x4c1c81u); f_004c6cb0();
    /* 004c1c81: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c1c84: jne 0x4c1cc3 */ if (!fZ) goto L_004c1cc3;
L_004c1c86:; BB(0x004c1c86);
    /* 004c1c86: mov ecx, dword ptr [ebp - 0x638] */ r_ecx = R32((u32)(r_ebp+0xfffff9c8u));
    /* 004c1c8c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c1c8f: mov dword ptr [ebp - 0x638], ecx */ W32((u32)(r_ebp+0xfffff9c8u), r_ecx);
    /* 004c1c95: movsx edx, word ptr [0x791e94] */ r_edx = (u32)(i32)(i16)R16((u32)(0x791e94u));
    /* 004c1c9c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c1c9d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c1ca3: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c1ca8u); f_0047e390();
    /* 004c1ca8: mov ecx, eax */ r_ecx = r_eax;
    /* 004c1caa: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x4c1cafu); f_004c7010();
    /* 004c1caf: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c1cb2: jne 0x4c1cc3 */ if (!fZ) goto L_004c1cc3;
L_004c1cb4:; BB(0x004c1cb4);
    /* 004c1cb4: mov eax, dword ptr [ebp - 0x63c] */ r_eax = R32((u32)(r_ebp+0xfffff9c4u));
    /* 004c1cba: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c1cbd: mov dword ptr [ebp - 0x63c], eax */ W32((u32)(r_ebp+0xfffff9c4u), r_eax);
L_004c1cc3:; BB(0x004c1cc3);
    /* 004c1cc3: jmp 0x4c1c3f */ goto L_004c1c3f;
L_004c1cc8:; BB(0x004c1cc8);
    /* 004c1cc8: mov ecx, dword ptr [ebp - 0x63c] */ r_ecx = R32((u32)(r_ebp+0xfffff9c4u));
    /* 004c1cce: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c1ccf: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4c1cd4u); f_0062fbf0();
    /* 004c1cd4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c1cd7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c1cda: mov dword ptr [ebp - 0x634], eax */ W32((u32)(r_ebp+0xfffff9ccu), r_eax);
    /* 004c1ce0: mov dword ptr [ebp - 0x624], 0 */ W32((u32)(r_ebp+0xfffff9dcu), 0x0u);
    /* 004c1cea: mov dword ptr [ebp - 0x62c], 0 */ W32((u32)(r_ebp+0xfffff9d4u), 0x0u);
L_004c1cf4:; BB(0x004c1cf4);
    /* 004c1cf4: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c1cfa: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4c1cffu); f_0047f950();
    /* 004c1cff: cmp dword ptr [ebp - 0x624], eax */ {  u32 a = R32((u32)(r_ebp+0xfffff9dcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c1d05: jge 0x4c1dac */ if ((fS==fO)) goto L_004c1dac;
L_004c1d0b:; BB(0x004c1d0b);
    /* 004c1d0b: mov edx, dword ptr [ebp - 0x62c] */ r_edx = R32((u32)(r_ebp+0xfffff9d4u));
    /* 004c1d11: cmp edx, dword ptr [ebp - 0x634] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffff9ccu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c1d17: jge 0x4c1dac */ if ((fS==fO)) goto L_004c1dac;
L_004c1d1d:; BB(0x004c1d1d);
    /* 004c1d1d: mov eax, dword ptr [ebp - 0x624] */ r_eax = R32((u32)(r_ebp+0xfffff9dcu));
    /* 004c1d23: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c1d24: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c1d2a: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c1d2fu); f_0047e390();
    /* 004c1d2f: mov ecx, eax */ r_ecx = r_eax;
    /* 004c1d31: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x4c1d36u); f_004c6cb0();
    /* 004c1d36: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c1d39: jne 0x4c1d98 */ if (!fZ) goto L_004c1d98;
L_004c1d3b:; BB(0x004c1d3b);
    /* 004c1d3b: mov ecx, dword ptr [ebp - 0x624] */ r_ecx = R32((u32)(r_ebp+0xfffff9dcu));
    /* 004c1d41: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c1d42: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c1d48: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c1d4du); f_0047e390();
    /* 004c1d4d: mov ecx, eax */ r_ecx = r_eax;
    /* 004c1d4f: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x4c1d54u); f_004c7010();
    /* 004c1d54: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c1d57: jne 0x4c1d87 */ if (!fZ) goto L_004c1d87;
L_004c1d59:; BB(0x004c1d59);
    /* 004c1d59: mov edx, dword ptr [ebp - 0x62c] */ r_edx = R32((u32)(r_ebp+0xfffff9d4u));
    /* 004c1d5f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004c1d62: mov dword ptr [ebp - 0x62c], edx */ W32((u32)(r_ebp+0xfffff9d4u), r_edx);
    /* 004c1d68: mov eax, dword ptr [ebp - 0x62c] */ r_eax = R32((u32)(r_ebp+0xfffff9d4u));
    /* 004c1d6e: cmp eax, dword ptr [ebp - 0x634] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffff9ccu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c1d74: jge 0x4c1d85 */ if ((fS==fO)) goto L_004c1d85;
L_004c1d76:; BB(0x004c1d76);
    /* 004c1d76: mov ecx, dword ptr [ebp - 0x624] */ r_ecx = R32((u32)(r_ebp+0xfffff9dcu));
    /* 004c1d7c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c1d7f: mov dword ptr [ebp - 0x624], ecx */ W32((u32)(r_ebp+0xfffff9dcu), r_ecx);
L_004c1d85:; BB(0x004c1d85);
    /* 004c1d85: jmp 0x4c1d96 */ goto L_004c1d96;
L_004c1d87:; BB(0x004c1d87);
    /* 004c1d87: mov edx, dword ptr [ebp - 0x624] */ r_edx = R32((u32)(r_ebp+0xfffff9dcu));
    /* 004c1d8d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004c1d90: mov dword ptr [ebp - 0x624], edx */ W32((u32)(r_ebp+0xfffff9dcu), r_edx);
L_004c1d96:; BB(0x004c1d96);
    /* 004c1d96: jmp 0x4c1da7 */ goto L_004c1da7;
L_004c1d98:; BB(0x004c1d98);
    /* 004c1d98: mov eax, dword ptr [ebp - 0x624] */ r_eax = R32((u32)(r_ebp+0xfffff9dcu));
    /* 004c1d9e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c1da1: mov dword ptr [ebp - 0x624], eax */ W32((u32)(r_ebp+0xfffff9dcu), r_eax);
L_004c1da7:; BB(0x004c1da7);
    /* 004c1da7: jmp 0x4c1cf4 */ goto L_004c1cf4;
L_004c1dac:; BB(0x004c1dac);
    /* 004c1dac: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c1db2: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4c1db7u); f_0047f950();
    /* 004c1db7: cmp dword ptr [ebp - 0x624], eax */ {  u32 a = R32((u32)(r_ebp+0xfffff9dcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c1dbd: jge 0x4c1e10 */ if ((fS==fO)) goto L_004c1e10;
L_004c1dbf:; BB(0x004c1dbf);
    /* 004c1dbf: mov ecx, dword ptr [ebp - 0x624] */ r_ecx = R32((u32)(r_ebp+0xfffff9dcu));
    /* 004c1dc5: mov dword ptr [ebp - 0x628], ecx */ W32((u32)(r_ebp+0xfffff9d8u), r_ecx);
    /* 004c1dcb: mov edx, dword ptr [ebp - 0x628] */ r_edx = R32((u32)(r_ebp+0xfffff9d8u));
    /* 004c1dd1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c1dd2: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c1dd8: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c1dddu); f_0047e390();
    /* 004c1ddd: mov dword ptr [ebp - 0x640], eax */ W32((u32)(r_ebp+0xfffff9c0u), r_eax);
    /* 004c1de3: cmp dword ptr [ebp - 0x640], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffff9c0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c1dea: je 0x4c1e0e */ if (fZ) goto L_004c1e0e;
L_004c1dec:; BB(0x004c1dec);
    /* 004c1dec: mov eax, dword ptr [ebp - 0x640] */ r_eax = R32((u32)(r_ebp+0xfffff9c0u));
    /* 004c1df2: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 004c1df5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c1df6: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4c1dfbu); f_005dcb00();
    /* 004c1dfb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c1dfe: cmp dword ptr [eax + 0xc], -1 */ {  u32 a = R32((u32)(r_eax+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c1e02: je 0x4c1e0e */ if (fZ) goto L_004c1e0e;
L_004c1e04:; BB(0x004c1e04);
    /* 004c1e04: mov dword ptr [ebp - 0x628], 0xffffffff */ W32((u32)(r_ebp+0xfffff9d8u), 0xffffffffu);
L_004c1e0e:; BB(0x004c1e0e);
    /* 004c1e0e: jmp 0x4c1e1a */ goto L_004c1e1a;
L_004c1e10:; BB(0x004c1e10);
    /* 004c1e10: mov dword ptr [ebp - 0x628], 0xffffffff */ W32((u32)(r_ebp+0xfffff9d8u), 0xffffffffu);
L_004c1e1a:; BB(0x004c1e1a);
    /* 004c1e1a: mov edx, dword ptr [ebp - 0x638] */ r_edx = R32((u32)(r_ebp+0xfffff9c8u));
    /* 004c1e20: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c1e21: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4c1e26u); f_0062fbf0();
    /* 004c1e26: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c1e29: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c1e2c: mov dword ptr [ebp - 0x620], eax */ W32((u32)(r_ebp+0xfffff9e0u), r_eax);
    /* 004c1e32: mov dword ptr [ebp - 0x624], 0 */ W32((u32)(r_ebp+0xfffff9dcu), 0x0u);
    /* 004c1e3c: mov dword ptr [ebp - 0x62c], 0 */ W32((u32)(r_ebp+0xfffff9d4u), 0x0u);
L_004c1e46:; BB(0x004c1e46);
    /* 004c1e46: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c1e4c: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4c1e51u); f_0047f950();
    /* 004c1e51: cmp dword ptr [ebp - 0x624], eax */ {  u32 a = R32((u32)(r_ebp+0xfffff9dcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c1e57: jge 0x4c1ec4 */ if ((fS==fO)) goto L_004c1ec4;
L_004c1e59:; BB(0x004c1e59);
    /* 004c1e59: mov eax, dword ptr [ebp - 0x62c] */ r_eax = R32((u32)(r_ebp+0xfffff9d4u));
    /* 004c1e5f: cmp eax, dword ptr [ebp - 0x620] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffff9e0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c1e65: jge 0x4c1ec4 */ if ((fS==fO)) goto L_004c1ec4;
L_004c1e67:; BB(0x004c1e67);
    /* 004c1e67: mov ecx, dword ptr [ebp - 0x624] */ r_ecx = R32((u32)(r_ebp+0xfffff9dcu));
    /* 004c1e6d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c1e6e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c1e74: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c1e79u); f_0047e390();
    /* 004c1e79: mov ecx, eax */ r_ecx = r_eax;
    /* 004c1e7b: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x4c1e80u); f_004c6cb0();
    /* 004c1e80: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c1e83: jne 0x4c1eb3 */ if (!fZ) goto L_004c1eb3;
L_004c1e85:; BB(0x004c1e85);
    /* 004c1e85: mov edx, dword ptr [ebp - 0x62c] */ r_edx = R32((u32)(r_ebp+0xfffff9d4u));
    /* 004c1e8b: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004c1e8e: mov dword ptr [ebp - 0x62c], edx */ W32((u32)(r_ebp+0xfffff9d4u), r_edx);
    /* 004c1e94: mov eax, dword ptr [ebp - 0x62c] */ r_eax = R32((u32)(r_ebp+0xfffff9d4u));
    /* 004c1e9a: cmp eax, dword ptr [ebp - 0x620] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffff9e0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c1ea0: jge 0x4c1eb1 */ if ((fS==fO)) goto L_004c1eb1;
L_004c1ea2:; BB(0x004c1ea2);
    /* 004c1ea2: mov ecx, dword ptr [ebp - 0x624] */ r_ecx = R32((u32)(r_ebp+0xfffff9dcu));
    /* 004c1ea8: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c1eab: mov dword ptr [ebp - 0x624], ecx */ W32((u32)(r_ebp+0xfffff9dcu), r_ecx);
L_004c1eb1:; BB(0x004c1eb1);
    /* 004c1eb1: jmp 0x4c1ec2 */ goto L_004c1ec2;
L_004c1eb3:; BB(0x004c1eb3);
    /* 004c1eb3: mov edx, dword ptr [ebp - 0x624] */ r_edx = R32((u32)(r_ebp+0xfffff9dcu));
    /* 004c1eb9: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004c1ebc: mov dword ptr [ebp - 0x624], edx */ W32((u32)(r_ebp+0xfffff9dcu), r_edx);
L_004c1ec2:; BB(0x004c1ec2);
    /* 004c1ec2: jmp 0x4c1e46 */ goto L_004c1e46;
L_004c1ec4:; BB(0x004c1ec4);
    /* 004c1ec4: mov dword ptr [ebp - 0x630], 0 */ W32((u32)(r_ebp+0xfffff9d0u), 0x0u);
    /* 004c1ece: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c1ed4: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4c1ed9u); f_0047f950();
    /* 004c1ed9: cmp dword ptr [ebp - 0x624], eax */ {  u32 a = R32((u32)(r_ebp+0xfffff9dcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c1edf: jge 0x4c1eef */ if ((fS==fO)) goto L_004c1eef;
L_004c1ee1:; BB(0x004c1ee1);
    /* 004c1ee1: mov eax, dword ptr [ebp - 0x624] */ r_eax = R32((u32)(r_ebp+0xfffff9dcu));
    /* 004c1ee7: mov dword ptr [ebp - 0x630], eax */ W32((u32)(r_ebp+0xfffff9d0u), r_eax);
    /* 004c1eed: jmp 0x4c1ef9 */ goto L_004c1ef9;
L_004c1eef:; BB(0x004c1eef);
    /* 004c1eef: mov dword ptr [0x791e48], 0 */ W32((u32)(0x791e48u), 0x0u);
L_004c1ef9:; BB(0x004c1ef9);
    /* 004c1ef9: cmp dword ptr [0x791e48], 7 */ {  u32 a = R32((u32)(0x791e48u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c1f00: jne 0x4c26fe */ if (!fZ) goto L_004c26fe;
L_004c1f06:; BB(0x004c1f06);
    /* 004c1f06: lea ecx, [ebp - 0x798] */ r_ecx = (u32)(r_ebp+0xfffff868u);
    /* 004c1f0c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c1f0d: mov edx, dword ptr [0x791e4c] */ r_edx = R32((u32)(0x791e4cu));
    /* 004c1f13: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c1f14: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c1f1a: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c1f1fu); f_0047e390();
    /* 004c1f1f: mov ecx, eax */ r_ecx = r_eax;
    /* 004c1f21: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x4c1f26u); f_004c7c40();
    /* 004c1f26: mov dword ptr [ebp - 0x998], eax */ W32((u32)(r_ebp+0xfffff668u), r_eax);
    /* 004c1f2c: mov eax, dword ptr [ebp - 0x998] */ r_eax = R32((u32)(r_ebp+0xfffff668u));
    /* 004c1f32: mov dword ptr [ebp - 0x99c], eax */ W32((u32)(r_ebp+0xfffff664u), r_eax);
    /* 004c1f38: mov dword ptr [ebp - 4], 0x53 */ W32((u32)(r_ebp+0xfffffffcu), 0x53u);
    /* 004c1f3f: mov ecx, dword ptr [ebp - 0x854] */ r_ecx = R32((u32)(r_ebp+0xfffff7acu));
    /* 004c1f45: or ecx, 0x40 */ {  u32 a = r_ecx; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 004c1f48: mov dword ptr [ebp - 0x854], ecx */ W32((u32)(r_ebp+0xfffff7acu), r_ecx);
    /* 004c1f4e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c1f50: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c1f52: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c1f54: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c1f56: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c1f58: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c1f5a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c1f5c: lea edx, [ebp - 0x79c] */ r_edx = (u32)(r_ebp+0xfffff864u);
    /* 004c1f62: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c1f63: mov ecx, dword ptr [ebp - 0x99c] */ r_ecx = R32((u32)(r_ebp+0xfffff664u));
    /* 004c1f69: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x4c1f6eu); f_00485940();
    /* 004c1f6e: mov dword ptr [ebp - 0x9a0], eax */ W32((u32)(r_ebp+0xfffff660u), r_eax);
    /* 004c1f74: mov eax, dword ptr [ebp - 0x9a0] */ r_eax = R32((u32)(r_ebp+0xfffff660u));
    /* 004c1f7a: mov dword ptr [ebp - 0x9a4], eax */ W32((u32)(r_ebp+0xfffff65cu), r_eax);
    /* 004c1f80: mov dword ptr [ebp - 4], 0x54 */ W32((u32)(r_ebp+0xfffffffcu), 0x54u);
    /* 004c1f87: mov ecx, dword ptr [ebp - 0x854] */ r_ecx = R32((u32)(r_ebp+0xfffff7acu));
    /* 004c1f8d: or ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 004c1f93: mov dword ptr [ebp - 0x854], ecx */ W32((u32)(r_ebp+0xfffff7acu), r_ecx);
    /* 004c1f99: mov edx, dword ptr [0x7913a0] */ r_edx = R32((u32)(0x7913a0u));
    /* 004c1f9f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c1fa0: lea eax, [ebp - 0x79d] */ r_eax = (u32)(r_ebp+0xfffff863u);
    /* 004c1fa6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c1fa7: mov ecx, dword ptr [ebp - 0x9a4] */ r_ecx = R32((u32)(r_ebp+0xfffff65cu));
    /* 004c1fad: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x4c1fb2u); f_004a2160();
    /* 004c1fb2: mov ecx, eax */ r_ecx = r_eax;
    /* 004c1fb4: call 0x4a1f00 */ r_esp -= 4; W32(r_esp, 0x4c1fb9u); f_004a1f00();
    /* 004c1fb9: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004c1fbc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c1fbe: je 0x4c1fdc */ if (fZ) goto L_004c1fdc;
L_004c1fc0:; BB(0x004c1fc0);
    /* 004c1fc0: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c1fc6: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x4c1fcbu); f_0047e190();
    /* 004c1fcb: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c1fce: je 0x4c1fdc */ if (fZ) goto L_004c1fdc;
L_004c1fd0:; BB(0x004c1fd0);
    /* 004c1fd0: mov dword ptr [ebp - 0x9a8], 1 */ W32((u32)(r_ebp+0xfffff658u), 0x1u);
    /* 004c1fda: jmp 0x4c1fe6 */ goto L_004c1fe6;
L_004c1fdc:; BB(0x004c1fdc);
    /* 004c1fdc: mov dword ptr [ebp - 0x9a8], 0 */ W32((u32)(r_ebp+0xfffff658u), 0x0u);
L_004c1fe6:; BB(0x004c1fe6);
    /* 004c1fe6: mov dl, byte ptr [ebp - 0x9a8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffff658u))) & 0xffu);
    /* 004c1fec: mov byte ptr [ebp - 0x78e], dl */ W8((u32)(r_ebp+0xfffff872u), (u8)r_edx);
    /* 004c1ff2: mov dword ptr [ebp - 4], 0x53 */ W32((u32)(r_ebp+0xfffffffcu), 0x53u);
    /* 004c1ff9: mov eax, dword ptr [ebp - 0x854] */ r_eax = R32((u32)(r_ebp+0xfffff7acu));
    /* 004c1fff: and eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 004c2004: je 0x4c201b */ if (fZ) goto L_004c201b;
L_004c2006:; BB(0x004c2006);
    /* 004c2006: and dword ptr [ebp - 0x854], 0xffffff7f */ { u32 ad = (u32)(r_ebp+0xfffff7acu);  u32 a = R32(ad); u32 b = 0xffffff7fu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 004c2010: lea ecx, [ebp - 0x79c] */ r_ecx = (u32)(r_ebp+0xfffff864u);
    /* 004c2016: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x4c201bu); f_004a20f0();
L_004c201b:; BB(0x004c201b);
    /* 004c201b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004c2022: mov ecx, dword ptr [ebp - 0x854] */ r_ecx = R32((u32)(r_ebp+0xfffff7acu));
    /* 004c2028: and ecx, 0x40 */ {  u32 a = r_ecx; u32 b = 0x40u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 004c202b: je 0x4c203f */ if (fZ) goto L_004c203f;
L_004c202d:; BB(0x004c202d);
    /* 004c202d: and dword ptr [ebp - 0x854], 0xffffffbf */ { u32 ad = (u32)(r_ebp+0xfffff7acu);  u32 a = R32(ad); u32 b = 0xffffffbfu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 004c2034: lea ecx, [ebp - 0x798] */ r_ecx = (u32)(r_ebp+0xfffff868u);
    /* 004c203a: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x4c203fu); f_00484470();
L_004c203f:; BB(0x004c203f);
    /* 004c203f: movzx edx, byte ptr [ebp - 0x78e] */ r_edx = (u32)R8((u32)(r_ebp+0xfffff872u));
    /* 004c2046: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c2048: je 0x4c239e */ if (fZ) goto L_004c239e;
L_004c204e:; BB(0x004c204e);
    /* 004c204e: cmp dword ptr [ebp - 0x628], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffff9d8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c2055: jl 0x4c237c */ if ((fS!=fO)) goto L_004c237c;
L_004c205b:; BB(0x004c205b);
    /* 004c205b: lea eax, [ebp - 0x7a8] */ r_eax = (u32)(r_ebp+0xfffff858u);
    /* 004c2061: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c2062: mov ecx, dword ptr [ebp - 0x628] */ r_ecx = R32((u32)(r_ebp+0xfffff9d8u));
    /* 004c2068: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c2069: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c206f: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c2074u); f_0047e390();
    /* 004c2074: mov ecx, eax */ r_ecx = r_eax;
    /* 004c2076: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x4c207bu); f_004c7c40();
    /* 004c207b: mov dword ptr [ebp - 0x9ac], eax */ W32((u32)(r_ebp+0xfffff654u), r_eax);
    /* 004c2081: mov edx, dword ptr [ebp - 0x9ac] */ r_edx = R32((u32)(r_ebp+0xfffff654u));
    /* 004c2087: mov dword ptr [ebp - 0x9b0], edx */ W32((u32)(r_ebp+0xfffff650u), r_edx);
    /* 004c208d: mov dword ptr [ebp - 4], 0x55 */ W32((u32)(r_ebp+0xfffffffcu), 0x55u);
    /* 004c2094: mov eax, dword ptr [ebp - 0x854] */ r_eax = R32((u32)(r_ebp+0xfffff7acu));
    /* 004c209a: or eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c209f: mov dword ptr [ebp - 0x854], eax */ W32((u32)(r_ebp+0xfffff7acu), r_eax);
    /* 004c20a5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c20a7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c20a9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c20ab: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c20ad: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c20af: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c20b1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c20b3: lea ecx, [ebp - 0x7ac] */ r_ecx = (u32)(r_ebp+0xfffff854u);
    /* 004c20b9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c20ba: mov ecx, dword ptr [ebp - 0x9b0] */ r_ecx = R32((u32)(r_ebp+0xfffff650u));
    /* 004c20c0: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x4c20c5u); f_00485940();
    /* 004c20c5: mov dword ptr [ebp - 0x9b4], eax */ W32((u32)(r_ebp+0xfffff64cu), r_eax);
    /* 004c20cb: mov edx, dword ptr [ebp - 0x9b4] */ r_edx = R32((u32)(r_ebp+0xfffff64cu));
    /* 004c20d1: mov dword ptr [ebp - 0x9b8], edx */ W32((u32)(r_ebp+0xfffff648u), r_edx);
    /* 004c20d7: mov dword ptr [ebp - 4], 0x56 */ W32((u32)(r_ebp+0xfffffffcu), 0x56u);
    /* 004c20de: mov eax, dword ptr [ebp - 0x854] */ r_eax = R32((u32)(r_ebp+0xfffff7acu));
    /* 004c20e4: or eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c20e9: mov dword ptr [ebp - 0x854], eax */ W32((u32)(r_ebp+0xfffff7acu), r_eax);
    /* 004c20ef: mov ecx, dword ptr [0x7913d4] */ r_ecx = R32((u32)(0x7913d4u));
    /* 004c20f5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c20f6: lea edx, [ebp - 0x7ad] */ r_edx = (u32)(r_ebp+0xfffff853u);
    /* 004c20fc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c20fd: mov ecx, dword ptr [ebp - 0x9b8] */ r_ecx = R32((u32)(r_ebp+0xfffff648u));
    /* 004c2103: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x4c2108u); f_004a2160();
    /* 004c2108: mov ecx, eax */ r_ecx = r_eax;
    /* 004c210a: call 0x4a1f00 */ r_esp -= 4; W32(r_esp, 0x4c210fu); f_004a1f00();
    /* 004c210f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004c2112: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c2114: je 0x4c2130 */ if (fZ) goto L_004c2130;
L_004c2116:; BB(0x004c2116);
    /* 004c2116: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004c2118: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4c211du); f_0062fbf0();
    /* 004c211d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c2120: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c2122: jne 0x4c2130 */ if (!fZ) goto L_004c2130;
L_004c2124:; BB(0x004c2124);
    /* 004c2124: mov dword ptr [ebp - 0x9bc], 1 */ W32((u32)(r_ebp+0xfffff644u), 0x1u);
    /* 004c212e: jmp 0x4c213a */ goto L_004c213a;
L_004c2130:; BB(0x004c2130);
    /* 004c2130: mov dword ptr [ebp - 0x9bc], 0 */ W32((u32)(r_ebp+0xfffff644u), 0x0u);
L_004c213a:; BB(0x004c213a);
    /* 004c213a: mov cl, byte ptr [ebp - 0x9bc] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffff644u))) & 0xffu);
    /* 004c2140: mov byte ptr [ebp - 0x79e], cl */ W8((u32)(r_ebp+0xfffff862u), (u8)r_ecx);
    /* 004c2146: mov dword ptr [ebp - 4], 0x55 */ W32((u32)(r_ebp+0xfffffffcu), 0x55u);
    /* 004c214d: mov edx, dword ptr [ebp - 0x854] */ r_edx = R32((u32)(r_ebp+0xfffff7acu));
    /* 004c2153: and edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 004c2159: je 0x4c2170 */ if (fZ) goto L_004c2170;
L_004c215b:; BB(0x004c215b);
    /* 004c215b: and dword ptr [ebp - 0x854], 0xfffffdff */ { u32 ad = (u32)(r_ebp+0xfffff7acu);  u32 a = R32(ad); u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 004c2165: lea ecx, [ebp - 0x7ac] */ r_ecx = (u32)(r_ebp+0xfffff854u);
    /* 004c216b: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x4c2170u); f_004a20f0();
L_004c2170:; BB(0x004c2170);
    /* 004c2170: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004c2177: mov eax, dword ptr [ebp - 0x854] */ r_eax = R32((u32)(r_ebp+0xfffff7acu));
    /* 004c217d: and eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 004c2182: je 0x4c2199 */ if (fZ) goto L_004c2199;
L_004c2184:; BB(0x004c2184);
    /* 004c2184: and dword ptr [ebp - 0x854], 0xfffffeff */ { u32 ad = (u32)(r_ebp+0xfffff7acu);  u32 a = R32(ad); u32 b = 0xfffffeffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 004c218e: lea ecx, [ebp - 0x7a8] */ r_ecx = (u32)(r_ebp+0xfffff858u);
    /* 004c2194: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x4c2199u); f_00484470();
L_004c2199:; BB(0x004c2199);
    /* 004c2199: movzx ecx, byte ptr [ebp - 0x79e] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffff862u));
    /* 004c21a0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c21a2: je 0x4c21c6 */ if (fZ) goto L_004c21c6;
L_004c21a4:; BB(0x004c21a4);
    /* 004c21a4: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004c21a7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c21a8: mov eax, dword ptr [ebp - 0x628] */ r_eax = R32((u32)(r_ebp+0xfffff9d8u));
    /* 004c21ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c21af: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c21b5: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c21bau); f_0047e390();
    /* 004c21ba: mov ecx, eax */ r_ecx = r_eax;
    /* 004c21bc: call 0x4cce00 */ r_esp -= 4; W32(r_esp, 0x4c21c1u); f_004cce00();
    /* 004c21c1: jmp 0x4c237a */ goto L_004c237a;
L_004c21c6:; BB(0x004c21c6);
    /* 004c21c6: lea ecx, [ebp - 0x7b8] */ r_ecx = (u32)(r_ebp+0xfffff848u);
    /* 004c21cc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c21cd: mov edx, dword ptr [ebp - 0x628] */ r_edx = R32((u32)(r_ebp+0xfffff9d8u));
    /* 004c21d3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c21d4: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c21da: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c21dfu); f_0047e390();
    /* 004c21df: mov ecx, eax */ r_ecx = r_eax;
    /* 004c21e1: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x4c21e6u); f_004c7c40();
    /* 004c21e6: mov dword ptr [ebp - 0x9c0], eax */ W32((u32)(r_ebp+0xfffff640u), r_eax);
    /* 004c21ec: mov eax, dword ptr [ebp - 0x9c0] */ r_eax = R32((u32)(r_ebp+0xfffff640u));
    /* 004c21f2: mov dword ptr [ebp - 0x9c4], eax */ W32((u32)(r_ebp+0xfffff63cu), r_eax);
    /* 004c21f8: mov dword ptr [ebp - 4], 0x57 */ W32((u32)(r_ebp+0xfffffffcu), 0x57u);
    /* 004c21ff: mov ecx, dword ptr [ebp - 0x854] */ r_ecx = R32((u32)(r_ebp+0xfffff7acu));
    /* 004c2205: or ecx, 0x400 */ {  u32 a = r_ecx; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 004c220b: mov dword ptr [ebp - 0x854], ecx */ W32((u32)(r_ebp+0xfffff7acu), r_ecx);
    /* 004c2211: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c2213: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c2215: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c2217: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c2219: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c221b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c221d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c221f: lea edx, [ebp - 0x7bc] */ r_edx = (u32)(r_ebp+0xfffff844u);
    /* 004c2225: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c2226: mov ecx, dword ptr [ebp - 0x9c4] */ r_ecx = R32((u32)(r_ebp+0xfffff63cu));
    /* 004c222c: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x4c2231u); f_00485940();
    /* 004c2231: mov dword ptr [ebp - 0x9c8], eax */ W32((u32)(r_ebp+0xfffff638u), r_eax);
    /* 004c2237: mov eax, dword ptr [ebp - 0x9c8] */ r_eax = R32((u32)(r_ebp+0xfffff638u));
    /* 004c223d: mov dword ptr [ebp - 0x9cc], eax */ W32((u32)(r_ebp+0xfffff634u), r_eax);
    /* 004c2243: mov dword ptr [ebp - 4], 0x58 */ W32((u32)(r_ebp+0xfffffffcu), 0x58u);
    /* 004c224a: mov ecx, dword ptr [ebp - 0x854] */ r_ecx = R32((u32)(r_ebp+0xfffff7acu));
    /* 004c2250: or ecx, 0x800 */ {  u32 a = r_ecx; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 004c2256: mov dword ptr [ebp - 0x854], ecx */ W32((u32)(r_ebp+0xfffff7acu), r_ecx);
    /* 004c225c: mov edx, dword ptr [0x791390] */ r_edx = R32((u32)(0x791390u));
    /* 004c2262: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c2263: lea eax, [ebp - 0x7bd] */ r_eax = (u32)(r_ebp+0xfffff843u);
    /* 004c2269: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c226a: mov ecx, dword ptr [ebp - 0x9cc] */ r_ecx = R32((u32)(r_ebp+0xfffff634u));
    /* 004c2270: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x4c2275u); f_004a2160();
    /* 004c2275: mov ecx, eax */ r_ecx = r_eax;
    /* 004c2277: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x4c227cu); f_004a1e10();
    /* 004c227c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004c227f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c2281: je 0x4c229d */ if (fZ) goto L_004c229d;
L_004c2283:; BB(0x004c2283);
    /* 004c2283: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004c2285: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4c228au); f_0062fbf0();
    /* 004c228a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c228d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c228f: jne 0x4c229d */ if (!fZ) goto L_004c229d;
L_004c2291:; BB(0x004c2291);
    /* 004c2291: mov dword ptr [ebp - 0x9d0], 1 */ W32((u32)(r_ebp+0xfffff630u), 0x1u);
    /* 004c229b: jmp 0x4c22a7 */ goto L_004c22a7;
L_004c229d:; BB(0x004c229d);
    /* 004c229d: mov dword ptr [ebp - 0x9d0], 0 */ W32((u32)(r_ebp+0xfffff630u), 0x0u);
L_004c22a7:; BB(0x004c22a7);
    /* 004c22a7: mov dl, byte ptr [ebp - 0x9d0] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffff630u))) & 0xffu);
    /* 004c22ad: mov byte ptr [ebp - 0x7ae], dl */ W8((u32)(r_ebp+0xfffff852u), (u8)r_edx);
    /* 004c22b3: mov dword ptr [ebp - 4], 0x57 */ W32((u32)(r_ebp+0xfffffffcu), 0x57u);
    /* 004c22ba: mov eax, dword ptr [ebp - 0x854] */ r_eax = R32((u32)(r_ebp+0xfffff7acu));
    /* 004c22c0: and eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 004c22c5: je 0x4c22dc */ if (fZ) goto L_004c22dc;
L_004c22c7:; BB(0x004c22c7);
    /* 004c22c7: and dword ptr [ebp - 0x854], 0xfffff7ff */ { u32 ad = (u32)(r_ebp+0xfffff7acu);  u32 a = R32(ad); u32 b = 0xfffff7ffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 004c22d1: lea ecx, [ebp - 0x7bc] */ r_ecx = (u32)(r_ebp+0xfffff844u);
    /* 004c22d7: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x4c22dcu); f_004a20f0();
L_004c22dc:; BB(0x004c22dc);
    /* 004c22dc: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004c22e3: mov ecx, dword ptr [ebp - 0x854] */ r_ecx = R32((u32)(r_ebp+0xfffff7acu));
    /* 004c22e9: and ecx, 0x400 */ {  u32 a = r_ecx; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 004c22ef: je 0x4c2306 */ if (fZ) goto L_004c2306;
L_004c22f1:; BB(0x004c22f1);
    /* 004c22f1: and dword ptr [ebp - 0x854], 0xfffffbff */ { u32 ad = (u32)(r_ebp+0xfffff7acu);  u32 a = R32(ad); u32 b = 0xfffffbffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 004c22fb: lea ecx, [ebp - 0x7b8] */ r_ecx = (u32)(r_ebp+0xfffff848u);
    /* 004c2301: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x4c2306u); f_00484470();
L_004c2306:; BB(0x004c2306);
    /* 004c2306: movzx edx, byte ptr [ebp - 0x7ae] */ r_edx = (u32)R8((u32)(r_ebp+0xfffff852u));
    /* 004c230d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c230f: je 0x4c2330 */ if (fZ) goto L_004c2330;
L_004c2311:; BB(0x004c2311);
    /* 004c2311: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004c2314: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c2315: mov ecx, dword ptr [ebp - 0x628] */ r_ecx = R32((u32)(r_ebp+0xfffff9d8u));
    /* 004c231b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c231c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c2322: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c2327u); f_0047e390();
    /* 004c2327: mov ecx, eax */ r_ecx = r_eax;
    /* 004c2329: call 0x4cce40 */ r_esp -= 4; W32(r_esp, 0x4c232eu); f_004cce40();
    /* 004c232e: jmp 0x4c237a */ goto L_004c237a;
L_004c2330:; BB(0x004c2330);
    /* 004c2330: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004c2332: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4c2337u); f_0062fbf0();
    /* 004c2337: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c233a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c233c: jne 0x4c235d */ if (!fZ) goto L_004c235d;
L_004c233e:; BB(0x004c233e);
    /* 004c233e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004c2341: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c2342: mov eax, dword ptr [ebp - 0x628] */ r_eax = R32((u32)(r_ebp+0xfffff9d8u));
    /* 004c2348: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c2349: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c234f: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c2354u); f_0047e390();
    /* 004c2354: mov ecx, eax */ r_ecx = r_eax;
    /* 004c2356: call 0x4ccda0 */ r_esp -= 4; W32(r_esp, 0x4c235bu); f_004ccda0();
    /* 004c235b: jmp 0x4c237a */ goto L_004c237a;
L_004c235d:; BB(0x004c235d);
    /* 004c235d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004c2360: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c2361: mov edx, dword ptr [ebp - 0x628] */ r_edx = R32((u32)(r_ebp+0xfffff9d8u));
    /* 004c2367: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c2368: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c236e: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c2373u); f_0047e390();
    /* 004c2373: mov ecx, eax */ r_ecx = r_eax;
    /* 004c2375: call 0x4ccce0 */ r_esp -= 4; W32(r_esp, 0x4c237au); f_004ccce0();
L_004c237a:; BB(0x004c237a);
    /* 004c237a: jmp 0x4c2399 */ goto L_004c2399;
L_004c237c:; BB(0x004c237c);
    /* 004c237c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004c237f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c2380: mov ecx, dword ptr [ebp - 0x630] */ r_ecx = R32((u32)(r_ebp+0xfffff9d0u));
    /* 004c2386: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c2387: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c238d: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c2392u); f_0047e390();
    /* 004c2392: mov ecx, eax */ r_ecx = r_eax;
    /* 004c2394: call 0x4ccce0 */ r_esp -= 4; W32(r_esp, 0x4c2399u); f_004ccce0();
L_004c2399:; BB(0x004c2399);
    /* 004c2399: jmp 0x4c26f9 */ goto L_004c26f9;
L_004c239e:; BB(0x004c239e);
    /* 004c239e: cmp dword ptr [ebp - 0x628], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffff9d8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c23a5: jl 0x4c26dc */ if ((fS!=fO)) goto L_004c26dc;
L_004c23ab:; BB(0x004c23ab);
    /* 004c23ab: lea edx, [ebp - 0x7c8] */ r_edx = (u32)(r_ebp+0xfffff838u);
    /* 004c23b1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c23b2: mov eax, dword ptr [ebp - 0x628] */ r_eax = R32((u32)(r_ebp+0xfffff9d8u));
    /* 004c23b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c23b9: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c23bf: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c23c4u); f_0047e390();
    /* 004c23c4: mov ecx, eax */ r_ecx = r_eax;
    /* 004c23c6: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x4c23cbu); f_004c7c40();
    /* 004c23cb: mov dword ptr [ebp - 0x9d4], eax */ W32((u32)(r_ebp+0xfffff62cu), r_eax);
    /* 004c23d1: mov ecx, dword ptr [ebp - 0x9d4] */ r_ecx = R32((u32)(r_ebp+0xfffff62cu));
    /* 004c23d7: mov dword ptr [ebp - 0x9d8], ecx */ W32((u32)(r_ebp+0xfffff628u), r_ecx);
    /* 004c23dd: mov dword ptr [ebp - 4], 0x59 */ W32((u32)(r_ebp+0xfffffffcu), 0x59u);
    /* 004c23e4: mov edx, dword ptr [ebp - 0x854] */ r_edx = R32((u32)(r_ebp+0xfffff7acu));
    /* 004c23ea: or edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004c23f0: mov dword ptr [ebp - 0x854], edx */ W32((u32)(r_ebp+0xfffff7acu), r_edx);
    /* 004c23f6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c23f8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c23fa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c23fc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c23fe: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c2400: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c2402: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c2404: lea eax, [ebp - 0x7cc] */ r_eax = (u32)(r_ebp+0xfffff834u);
    /* 004c240a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c240b: mov ecx, dword ptr [ebp - 0x9d8] */ r_ecx = R32((u32)(r_ebp+0xfffff628u));
    /* 004c2411: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x4c2416u); f_00485940();
    /* 004c2416: mov dword ptr [ebp - 0x9dc], eax */ W32((u32)(r_ebp+0xfffff624u), r_eax);
    /* 004c241c: mov ecx, dword ptr [ebp - 0x9dc] */ r_ecx = R32((u32)(r_ebp+0xfffff624u));
    /* 004c2422: mov dword ptr [ebp - 0x9e0], ecx */ W32((u32)(r_ebp+0xfffff620u), r_ecx);
    /* 004c2428: mov dword ptr [ebp - 4], 0x5a */ W32((u32)(r_ebp+0xfffffffcu), 0x5au);
    /* 004c242f: mov edx, dword ptr [ebp - 0x854] */ r_edx = R32((u32)(r_ebp+0xfffff7acu));
    /* 004c2435: or edx, 0x2000 */ {  u32 a = r_edx; u32 b = 0x2000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004c243b: mov dword ptr [ebp - 0x854], edx */ W32((u32)(r_ebp+0xfffff7acu), r_edx);
    /* 004c2441: mov eax, dword ptr [0x7913d4] */ r_eax = R32((u32)(0x7913d4u));
    /* 004c2446: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c2447: lea ecx, [ebp - 0x7cd] */ r_ecx = (u32)(r_ebp+0xfffff833u);
    /* 004c244d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c244e: mov ecx, dword ptr [ebp - 0x9e0] */ r_ecx = R32((u32)(r_ebp+0xfffff620u));
    /* 004c2454: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x4c2459u); f_004a2160();
    /* 004c2459: mov ecx, eax */ r_ecx = r_eax;
    /* 004c245b: call 0x4a1f00 */ r_esp -= 4; W32(r_esp, 0x4c2460u); f_004a1f00();
    /* 004c2460: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004c2463: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c2465: je 0x4c2491 */ if (fZ) goto L_004c2491;
L_004c2467:; BB(0x004c2467);
    /* 004c2467: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004c2469: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4c246eu); f_0062fbf0();
    /* 004c246e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c2471: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c2473: jne 0x4c2491 */ if (!fZ) goto L_004c2491;
L_004c2475:; BB(0x004c2475);
    /* 004c2475: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c247b: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x4c2480u); f_0047e190();
    /* 004c2480: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c2483: je 0x4c2491 */ if (fZ) goto L_004c2491;
L_004c2485:; BB(0x004c2485);
    /* 004c2485: mov dword ptr [ebp - 0x9e4], 1 */ W32((u32)(r_ebp+0xfffff61cu), 0x1u);
    /* 004c248f: jmp 0x4c249b */ goto L_004c249b;
L_004c2491:; BB(0x004c2491);
    /* 004c2491: mov dword ptr [ebp - 0x9e4], 0 */ W32((u32)(r_ebp+0xfffff61cu), 0x0u);
L_004c249b:; BB(0x004c249b);
    /* 004c249b: mov al, byte ptr [ebp - 0x9e4] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffff61cu))) & 0xffu);
    /* 004c24a1: mov byte ptr [ebp - 0x7be], al */ W8((u32)(r_ebp+0xfffff842u), (u8)r_eax);
    /* 004c24a7: mov dword ptr [ebp - 4], 0x59 */ W32((u32)(r_ebp+0xfffffffcu), 0x59u);
    /* 004c24ae: mov ecx, dword ptr [ebp - 0x854] */ r_ecx = R32((u32)(r_ebp+0xfffff7acu));
    /* 004c24b4: and ecx, 0x2000 */ {  u32 a = r_ecx; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 004c24ba: je 0x4c24d1 */ if (fZ) goto L_004c24d1;
L_004c24bc:; BB(0x004c24bc);
    /* 004c24bc: and dword ptr [ebp - 0x854], 0xffffdfff */ { u32 ad = (u32)(r_ebp+0xfffff7acu);  u32 a = R32(ad); u32 b = 0xffffdfffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 004c24c6: lea ecx, [ebp - 0x7cc] */ r_ecx = (u32)(r_ebp+0xfffff834u);
    /* 004c24cc: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x4c24d1u); f_004a20f0();
L_004c24d1:; BB(0x004c24d1);
    /* 004c24d1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004c24d8: mov edx, dword ptr [ebp - 0x854] */ r_edx = R32((u32)(r_ebp+0xfffff7acu));
    /* 004c24de: and edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 004c24e4: je 0x4c24fb */ if (fZ) goto L_004c24fb;
L_004c24e6:; BB(0x004c24e6);
    /* 004c24e6: and dword ptr [ebp - 0x854], 0xffffefff */ { u32 ad = (u32)(r_ebp+0xfffff7acu);  u32 a = R32(ad); u32 b = 0xffffefffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 004c24f0: lea ecx, [ebp - 0x7c8] */ r_ecx = (u32)(r_ebp+0xfffff838u);
    /* 004c24f6: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x4c24fbu); f_00484470();
L_004c24fb:; BB(0x004c24fb);
    /* 004c24fb: movzx eax, byte ptr [ebp - 0x7be] */ r_eax = (u32)R8((u32)(r_ebp+0xfffff842u));
    /* 004c2502: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c2504: je 0x4c2528 */ if (fZ) goto L_004c2528;
L_004c2506:; BB(0x004c2506);
    /* 004c2506: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004c2509: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c250a: mov edx, dword ptr [ebp - 0x628] */ r_edx = R32((u32)(r_ebp+0xfffff9d8u));
    /* 004c2510: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c2511: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c2517: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c251cu); f_0047e390();
    /* 004c251c: mov ecx, eax */ r_ecx = r_eax;
    /* 004c251e: call 0x4cce00 */ r_esp -= 4; W32(r_esp, 0x4c2523u); f_004cce00();
    /* 004c2523: jmp 0x4c26da */ goto L_004c26da;
L_004c2528:; BB(0x004c2528);
    /* 004c2528: lea eax, [ebp - 0x7d8] */ r_eax = (u32)(r_ebp+0xfffff828u);
    /* 004c252e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c252f: mov ecx, dword ptr [ebp - 0x628] */ r_ecx = R32((u32)(r_ebp+0xfffff9d8u));
    /* 004c2535: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c2536: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c253c: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c2541u); f_0047e390();
    /* 004c2541: mov ecx, eax */ r_ecx = r_eax;
    /* 004c2543: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x4c2548u); f_004c7c40();
    /* 004c2548: mov dword ptr [ebp - 0x9e8], eax */ W32((u32)(r_ebp+0xfffff618u), r_eax);
    /* 004c254e: mov edx, dword ptr [ebp - 0x9e8] */ r_edx = R32((u32)(r_ebp+0xfffff618u));
    /* 004c2554: mov dword ptr [ebp - 0x9ec], edx */ W32((u32)(r_ebp+0xfffff614u), r_edx);
    /* 004c255a: mov dword ptr [ebp - 4], 0x5b */ W32((u32)(r_ebp+0xfffffffcu), 0x5bu);
    /* 004c2561: mov eax, dword ptr [ebp - 0x854] */ r_eax = R32((u32)(r_ebp+0xfffff7acu));
    /* 004c2567: or eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c256c: mov dword ptr [ebp - 0x854], eax */ W32((u32)(r_ebp+0xfffff7acu), r_eax);
    /* 004c2572: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c2574: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c2576: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c2578: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c257a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c257c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c257e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c2580: lea ecx, [ebp - 0x7dc] */ r_ecx = (u32)(r_ebp+0xfffff824u);
    /* 004c2586: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c2587: mov ecx, dword ptr [ebp - 0x9ec] */ r_ecx = R32((u32)(r_ebp+0xfffff614u));
    /* 004c258d: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x4c2592u); f_00485940();
    /* 004c2592: mov dword ptr [ebp - 0x9f0], eax */ W32((u32)(r_ebp+0xfffff610u), r_eax);
    /* 004c2598: mov edx, dword ptr [ebp - 0x9f0] */ r_edx = R32((u32)(r_ebp+0xfffff610u));
    /* 004c259e: mov dword ptr [ebp - 0x9f4], edx */ W32((u32)(r_ebp+0xfffff60cu), r_edx);
    /* 004c25a4: mov dword ptr [ebp - 4], 0x5c */ W32((u32)(r_ebp+0xfffffffcu), 0x5cu);
    /* 004c25ab: mov eax, dword ptr [ebp - 0x854] */ r_eax = R32((u32)(r_ebp+0xfffff7acu));
    /* 004c25b1: or eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c25b6: mov dword ptr [ebp - 0x854], eax */ W32((u32)(r_ebp+0xfffff7acu), r_eax);
    /* 004c25bc: mov ecx, dword ptr [0x791390] */ r_ecx = R32((u32)(0x791390u));
    /* 004c25c2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c25c3: lea edx, [ebp - 0x7dd] */ r_edx = (u32)(r_ebp+0xfffff823u);
    /* 004c25c9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c25ca: mov ecx, dword ptr [ebp - 0x9f4] */ r_ecx = R32((u32)(r_ebp+0xfffff60cu));
    /* 004c25d0: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x4c25d5u); f_004a2160();
    /* 004c25d5: mov ecx, eax */ r_ecx = r_eax;
    /* 004c25d7: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x4c25dcu); f_004a1e10();
    /* 004c25dc: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004c25df: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c25e1: je 0x4c25fd */ if (fZ) goto L_004c25fd;
L_004c25e3:; BB(0x004c25e3);
    /* 004c25e3: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004c25e5: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4c25eau); f_0062fbf0();
    /* 004c25ea: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c25ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c25ef: jne 0x4c25fd */ if (!fZ) goto L_004c25fd;
L_004c25f1:; BB(0x004c25f1);
    /* 004c25f1: mov dword ptr [ebp - 0x9f8], 1 */ W32((u32)(r_ebp+0xfffff608u), 0x1u);
    /* 004c25fb: jmp 0x4c2607 */ goto L_004c2607;
L_004c25fd:; BB(0x004c25fd);
    /* 004c25fd: mov dword ptr [ebp - 0x9f8], 0 */ W32((u32)(r_ebp+0xfffff608u), 0x0u);
L_004c2607:; BB(0x004c2607);
    /* 004c2607: mov cl, byte ptr [ebp - 0x9f8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffff608u))) & 0xffu);
    /* 004c260d: mov byte ptr [ebp - 0x7ce], cl */ W8((u32)(r_ebp+0xfffff832u), (u8)r_ecx);
    /* 004c2613: mov dword ptr [ebp - 4], 0x5b */ W32((u32)(r_ebp+0xfffffffcu), 0x5bu);
    /* 004c261a: mov edx, dword ptr [ebp - 0x854] */ r_edx = R32((u32)(r_ebp+0xfffff7acu));
    /* 004c2620: and edx, 0x8000 */ {  u32 a = r_edx; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 004c2626: je 0x4c263d */ if (fZ) goto L_004c263d;
L_004c2628:; BB(0x004c2628);
    /* 004c2628: and dword ptr [ebp - 0x854], 0xffff7fff */ { u32 ad = (u32)(r_ebp+0xfffff7acu);  u32 a = R32(ad); u32 b = 0xffff7fffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 004c2632: lea ecx, [ebp - 0x7dc] */ r_ecx = (u32)(r_ebp+0xfffff824u);
    /* 004c2638: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x4c263du); f_004a20f0();
L_004c263d:; BB(0x004c263d);
    /* 004c263d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004c2644: mov eax, dword ptr [ebp - 0x854] */ r_eax = R32((u32)(r_ebp+0xfffff7acu));
    /* 004c264a: and eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 004c264f: je 0x4c2666 */ if (fZ) goto L_004c2666;
L_004c2651:; BB(0x004c2651);
    /* 004c2651: and dword ptr [ebp - 0x854], 0xffffbfff */ { u32 ad = (u32)(r_ebp+0xfffff7acu);  u32 a = R32(ad); u32 b = 0xffffbfffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 004c265b: lea ecx, [ebp - 0x7d8] */ r_ecx = (u32)(r_ebp+0xfffff828u);
    /* 004c2661: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x4c2666u); f_00484470();
L_004c2666:; BB(0x004c2666);
    /* 004c2666: movzx ecx, byte ptr [ebp - 0x7ce] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffff832u));
    /* 004c266d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c266f: je 0x4c2690 */ if (fZ) goto L_004c2690;
L_004c2671:; BB(0x004c2671);
    /* 004c2671: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004c2674: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c2675: mov eax, dword ptr [ebp - 0x628] */ r_eax = R32((u32)(r_ebp+0xfffff9d8u));
    /* 004c267b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c267c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c2682: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c2687u); f_0047e390();
    /* 004c2687: mov ecx, eax */ r_ecx = r_eax;
    /* 004c2689: call 0x4cce40 */ r_esp -= 4; W32(r_esp, 0x4c268eu); f_004cce40();
    /* 004c268e: jmp 0x4c26da */ goto L_004c26da;
L_004c2690:; BB(0x004c2690);
    /* 004c2690: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004c2692: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4c2697u); f_0062fbf0();
    /* 004c2697: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c269a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c269c: jne 0x4c26bd */ if (!fZ) goto L_004c26bd;
L_004c269e:; BB(0x004c269e);
    /* 004c269e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004c26a1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c26a2: mov edx, dword ptr [ebp - 0x628] */ r_edx = R32((u32)(r_ebp+0xfffff9d8u));
    /* 004c26a8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c26a9: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c26af: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c26b4u); f_0047e390();
    /* 004c26b4: mov ecx, eax */ r_ecx = r_eax;
    /* 004c26b6: call 0x4ccda0 */ r_esp -= 4; W32(r_esp, 0x4c26bbu); f_004ccda0();
    /* 004c26bb: jmp 0x4c26da */ goto L_004c26da;
L_004c26bd:; BB(0x004c26bd);
    /* 004c26bd: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004c26c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c26c1: mov ecx, dword ptr [ebp - 0x628] */ r_ecx = R32((u32)(r_ebp+0xfffff9d8u));
    /* 004c26c7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c26c8: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c26ce: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c26d3u); f_0047e390();
    /* 004c26d3: mov ecx, eax */ r_ecx = r_eax;
    /* 004c26d5: call 0x4ccc60 */ r_esp -= 4; W32(r_esp, 0x4c26dau); f_004ccc60();
L_004c26da:; BB(0x004c26da);
    /* 004c26da: jmp 0x4c26f9 */ goto L_004c26f9;
L_004c26dc:; BB(0x004c26dc);
    /* 004c26dc: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004c26df: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c26e0: mov eax, dword ptr [ebp - 0x630] */ r_eax = R32((u32)(r_ebp+0xfffff9d0u));
    /* 004c26e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c26e7: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c26ed: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c26f2u); f_0047e390();
    /* 004c26f2: mov ecx, eax */ r_ecx = r_eax;
    /* 004c26f4: call 0x4ccc60 */ r_esp -= 4; W32(r_esp, 0x4c26f9u); f_004ccc60();
L_004c26f9:; BB(0x004c26f9);
    /* 004c26f9: jmp 0x4c3308 */ goto L_004c3308;
L_004c26fe:; BB(0x004c26fe);
    /* 004c26fe: cmp dword ptr [0x791e48], 0xa */ {  u32 a = R32((u32)(0x791e48u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c2705: jne 0x4c2f0c */ if (!fZ) goto L_004c2f0c;
L_004c270b:; BB(0x004c270b);
    /* 004c270b: lea ecx, [ebp - 0x7e8] */ r_ecx = (u32)(r_ebp+0xfffff818u);
    /* 004c2711: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c2712: mov edx, dword ptr [0x791e4c] */ r_edx = R32((u32)(0x791e4cu));
    /* 004c2718: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c2719: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c271f: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c2724u); f_0047e390();
    /* 004c2724: mov ecx, eax */ r_ecx = r_eax;
    /* 004c2726: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x4c272bu); f_004c7c40();
    /* 004c272b: mov dword ptr [ebp - 0x9fc], eax */ W32((u32)(r_ebp+0xfffff604u), r_eax);
    /* 004c2731: mov eax, dword ptr [ebp - 0x9fc] */ r_eax = R32((u32)(r_ebp+0xfffff604u));
    /* 004c2737: mov dword ptr [ebp - 0xa00], eax */ W32((u32)(r_ebp+0xfffff600u), r_eax);
    /* 004c273d: mov dword ptr [ebp - 4], 0x5d */ W32((u32)(r_ebp+0xfffffffcu), 0x5du);
    /* 004c2744: mov ecx, dword ptr [ebp - 0x854] */ r_ecx = R32((u32)(r_ebp+0xfffff7acu));
    /* 004c274a: or ecx, 0x10000 */ {  u32 a = r_ecx; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 004c2750: mov dword ptr [ebp - 0x854], ecx */ W32((u32)(r_ebp+0xfffff7acu), r_ecx);
    /* 004c2756: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c2758: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c275a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c275c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c275e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c2760: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c2762: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c2764: lea edx, [ebp - 0x7ec] */ r_edx = (u32)(r_ebp+0xfffff814u);
    /* 004c276a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c276b: mov ecx, dword ptr [ebp - 0xa00] */ r_ecx = R32((u32)(r_ebp+0xfffff600u));
    /* 004c2771: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x4c2776u); f_00485940();
    /* 004c2776: mov dword ptr [ebp - 0xa04], eax */ W32((u32)(r_ebp+0xfffff5fcu), r_eax);
    /* 004c277c: mov eax, dword ptr [ebp - 0xa04] */ r_eax = R32((u32)(r_ebp+0xfffff5fcu));
    /* 004c2782: mov dword ptr [ebp - 0xa08], eax */ W32((u32)(r_ebp+0xfffff5f8u), r_eax);
    /* 004c2788: mov dword ptr [ebp - 4], 0x5e */ W32((u32)(r_ebp+0xfffffffcu), 0x5eu);
    /* 004c278f: mov ecx, dword ptr [ebp - 0x854] */ r_ecx = R32((u32)(r_ebp+0xfffff7acu));
    /* 004c2795: or ecx, 0x20000 */ {  u32 a = r_ecx; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 004c279b: mov dword ptr [ebp - 0x854], ecx */ W32((u32)(r_ebp+0xfffff7acu), r_ecx);
    /* 004c27a1: mov edx, dword ptr [0x7913a0] */ r_edx = R32((u32)(0x7913a0u));
    /* 004c27a7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c27a8: lea eax, [ebp - 0x7ed] */ r_eax = (u32)(r_ebp+0xfffff813u);
    /* 004c27ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c27af: mov ecx, dword ptr [ebp - 0xa08] */ r_ecx = R32((u32)(r_ebp+0xfffff5f8u));
    /* 004c27b5: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x4c27bau); f_004a2160();
    /* 004c27ba: mov ecx, eax */ r_ecx = r_eax;
    /* 004c27bc: call 0x4a1f00 */ r_esp -= 4; W32(r_esp, 0x4c27c1u); f_004a1f00();
    /* 004c27c1: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004c27c4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c27c6: je 0x4c27e4 */ if (fZ) goto L_004c27e4;
L_004c27c8:; BB(0x004c27c8);
    /* 004c27c8: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c27ce: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x4c27d3u); f_0047e190();
    /* 004c27d3: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c27d6: je 0x4c27e4 */ if (fZ) goto L_004c27e4;
L_004c27d8:; BB(0x004c27d8);
    /* 004c27d8: mov dword ptr [ebp - 0xa0c], 1 */ W32((u32)(r_ebp+0xfffff5f4u), 0x1u);
    /* 004c27e2: jmp 0x4c27ee */ goto L_004c27ee;
L_004c27e4:; BB(0x004c27e4);
    /* 004c27e4: mov dword ptr [ebp - 0xa0c], 0 */ W32((u32)(r_ebp+0xfffff5f4u), 0x0u);
L_004c27ee:; BB(0x004c27ee);
    /* 004c27ee: mov dl, byte ptr [ebp - 0xa0c] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffff5f4u))) & 0xffu);
    /* 004c27f4: mov byte ptr [ebp - 0x7de], dl */ W8((u32)(r_ebp+0xfffff822u), (u8)r_edx);
    /* 004c27fa: mov dword ptr [ebp - 4], 0x5d */ W32((u32)(r_ebp+0xfffffffcu), 0x5du);
    /* 004c2801: mov eax, dword ptr [ebp - 0x854] */ r_eax = R32((u32)(r_ebp+0xfffff7acu));
    /* 004c2807: and eax, 0x20000 */ {  u32 a = r_eax; u32 b = 0x20000u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 004c280c: je 0x4c2823 */ if (fZ) goto L_004c2823;
L_004c280e:; BB(0x004c280e);
    /* 004c280e: and dword ptr [ebp - 0x854], 0xfffdffff */ { u32 ad = (u32)(r_ebp+0xfffff7acu);  u32 a = R32(ad); u32 b = 0xfffdffffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 004c2818: lea ecx, [ebp - 0x7ec] */ r_ecx = (u32)(r_ebp+0xfffff814u);
    /* 004c281e: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x4c2823u); f_004a20f0();
L_004c2823:; BB(0x004c2823);
    /* 004c2823: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004c282a: mov ecx, dword ptr [ebp - 0x854] */ r_ecx = R32((u32)(r_ebp+0xfffff7acu));
    /* 004c2830: and ecx, 0x10000 */ {  u32 a = r_ecx; u32 b = 0x10000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 004c2836: je 0x4c284d */ if (fZ) goto L_004c284d;
L_004c2838:; BB(0x004c2838);
    /* 004c2838: and dword ptr [ebp - 0x854], 0xfffeffff */ { u32 ad = (u32)(r_ebp+0xfffff7acu);  u32 a = R32(ad); u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 004c2842: lea ecx, [ebp - 0x7e8] */ r_ecx = (u32)(r_ebp+0xfffff818u);
    /* 004c2848: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x4c284du); f_00484470();
L_004c284d:; BB(0x004c284d);
    /* 004c284d: movzx edx, byte ptr [ebp - 0x7de] */ r_edx = (u32)R8((u32)(r_ebp+0xfffff822u));
    /* 004c2854: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c2856: je 0x4c2bac */ if (fZ) goto L_004c2bac;
L_004c285c:; BB(0x004c285c);
    /* 004c285c: cmp dword ptr [ebp - 0x628], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffff9d8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c2863: jl 0x4c2b8a */ if ((fS!=fO)) goto L_004c2b8a;
L_004c2869:; BB(0x004c2869);
    /* 004c2869: lea eax, [ebp - 0x7f8] */ r_eax = (u32)(r_ebp+0xfffff808u);
    /* 004c286f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c2870: mov ecx, dword ptr [ebp - 0x628] */ r_ecx = R32((u32)(r_ebp+0xfffff9d8u));
    /* 004c2876: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c2877: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c287d: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c2882u); f_0047e390();
    /* 004c2882: mov ecx, eax */ r_ecx = r_eax;
    /* 004c2884: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x4c2889u); f_004c7c40();
    /* 004c2889: mov dword ptr [ebp - 0xa10], eax */ W32((u32)(r_ebp+0xfffff5f0u), r_eax);
    /* 004c288f: mov edx, dword ptr [ebp - 0xa10] */ r_edx = R32((u32)(r_ebp+0xfffff5f0u));
    /* 004c2895: mov dword ptr [ebp - 0xa14], edx */ W32((u32)(r_ebp+0xfffff5ecu), r_edx);
    /* 004c289b: mov dword ptr [ebp - 4], 0x5f */ W32((u32)(r_ebp+0xfffffffcu), 0x5fu);
    /* 004c28a2: mov eax, dword ptr [ebp - 0x854] */ r_eax = R32((u32)(r_ebp+0xfffff7acu));
    /* 004c28a8: or eax, 0x40000 */ {  u32 a = r_eax; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c28ad: mov dword ptr [ebp - 0x854], eax */ W32((u32)(r_ebp+0xfffff7acu), r_eax);
    /* 004c28b3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c28b5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c28b7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c28b9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c28bb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c28bd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c28bf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c28c1: lea ecx, [ebp - 0x7fc] */ r_ecx = (u32)(r_ebp+0xfffff804u);
    /* 004c28c7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c28c8: mov ecx, dword ptr [ebp - 0xa14] */ r_ecx = R32((u32)(r_ebp+0xfffff5ecu));
    /* 004c28ce: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x4c28d3u); f_00485940();
    /* 004c28d3: mov dword ptr [ebp - 0xa18], eax */ W32((u32)(r_ebp+0xfffff5e8u), r_eax);
    /* 004c28d9: mov edx, dword ptr [ebp - 0xa18] */ r_edx = R32((u32)(r_ebp+0xfffff5e8u));
    /* 004c28df: mov dword ptr [ebp - 0xa1c], edx */ W32((u32)(r_ebp+0xfffff5e4u), r_edx);
    /* 004c28e5: mov dword ptr [ebp - 4], 0x60 */ W32((u32)(r_ebp+0xfffffffcu), 0x60u);
    /* 004c28ec: mov eax, dword ptr [ebp - 0x854] */ r_eax = R32((u32)(r_ebp+0xfffff7acu));
    /* 004c28f2: or eax, 0x80000 */ {  u32 a = r_eax; u32 b = 0x80000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c28f7: mov dword ptr [ebp - 0x854], eax */ W32((u32)(r_ebp+0xfffff7acu), r_eax);
    /* 004c28fd: mov ecx, dword ptr [0x7913d4] */ r_ecx = R32((u32)(0x7913d4u));
    /* 004c2903: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c2904: lea edx, [ebp - 0x7fd] */ r_edx = (u32)(r_ebp+0xfffff803u);
    /* 004c290a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c290b: mov ecx, dword ptr [ebp - 0xa1c] */ r_ecx = R32((u32)(r_ebp+0xfffff5e4u));
    /* 004c2911: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x4c2916u); f_004a2160();
    /* 004c2916: mov ecx, eax */ r_ecx = r_eax;
    /* 004c2918: call 0x4a1f00 */ r_esp -= 4; W32(r_esp, 0x4c291du); f_004a1f00();
    /* 004c291d: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004c2920: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c2922: je 0x4c293e */ if (fZ) goto L_004c293e;
L_004c2924:; BB(0x004c2924);
    /* 004c2924: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004c2926: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4c292bu); f_0062fbf0();
    /* 004c292b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c292e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c2930: jne 0x4c293e */ if (!fZ) goto L_004c293e;
L_004c2932:; BB(0x004c2932);
    /* 004c2932: mov dword ptr [ebp - 0xa20], 1 */ W32((u32)(r_ebp+0xfffff5e0u), 0x1u);
    /* 004c293c: jmp 0x4c2948 */ goto L_004c2948;
L_004c293e:; BB(0x004c293e);
    /* 004c293e: mov dword ptr [ebp - 0xa20], 0 */ W32((u32)(r_ebp+0xfffff5e0u), 0x0u);
L_004c2948:; BB(0x004c2948);
    /* 004c2948: mov cl, byte ptr [ebp - 0xa20] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffff5e0u))) & 0xffu);
    /* 004c294e: mov byte ptr [ebp - 0x7ee], cl */ W8((u32)(r_ebp+0xfffff812u), (u8)r_ecx);
    /* 004c2954: mov dword ptr [ebp - 4], 0x5f */ W32((u32)(r_ebp+0xfffffffcu), 0x5fu);
    /* 004c295b: mov edx, dword ptr [ebp - 0x854] */ r_edx = R32((u32)(r_ebp+0xfffff7acu));
    /* 004c2961: and edx, 0x80000 */ {  u32 a = r_edx; u32 b = 0x80000u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 004c2967: je 0x4c297e */ if (fZ) goto L_004c297e;
L_004c2969:; BB(0x004c2969);
    /* 004c2969: and dword ptr [ebp - 0x854], 0xfff7ffff */ { u32 ad = (u32)(r_ebp+0xfffff7acu);  u32 a = R32(ad); u32 b = 0xfff7ffffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 004c2973: lea ecx, [ebp - 0x7fc] */ r_ecx = (u32)(r_ebp+0xfffff804u);
    /* 004c2979: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x4c297eu); f_004a20f0();
L_004c297e:; BB(0x004c297e);
    /* 004c297e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004c2985: mov eax, dword ptr [ebp - 0x854] */ r_eax = R32((u32)(r_ebp+0xfffff7acu));
    /* 004c298b: and eax, 0x40000 */ {  u32 a = r_eax; u32 b = 0x40000u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 004c2990: je 0x4c29a7 */ if (fZ) goto L_004c29a7;
L_004c2992:; BB(0x004c2992);
    /* 004c2992: and dword ptr [ebp - 0x854], 0xfffbffff */ { u32 ad = (u32)(r_ebp+0xfffff7acu);  u32 a = R32(ad); u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 004c299c: lea ecx, [ebp - 0x7f8] */ r_ecx = (u32)(r_ebp+0xfffff808u);
    /* 004c29a2: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x4c29a7u); f_00484470();
L_004c29a7:; BB(0x004c29a7);
    /* 004c29a7: movzx ecx, byte ptr [ebp - 0x7ee] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffff812u));
    /* 004c29ae: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c29b0: je 0x4c29d4 */ if (fZ) goto L_004c29d4;
L_004c29b2:; BB(0x004c29b2);
    /* 004c29b2: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004c29b5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c29b6: mov eax, dword ptr [ebp - 0x628] */ r_eax = R32((u32)(r_ebp+0xfffff9d8u));
    /* 004c29bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c29bd: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c29c3: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c29c8u); f_0047e390();
    /* 004c29c8: mov ecx, eax */ r_ecx = r_eax;
    /* 004c29ca: call 0x4cce00 */ r_esp -= 4; W32(r_esp, 0x4c29cfu); f_004cce00();
    /* 004c29cf: jmp 0x4c2b88 */ goto L_004c2b88;
L_004c29d4:; BB(0x004c29d4);
    /* 004c29d4: lea ecx, [ebp - 0x808] */ r_ecx = (u32)(r_ebp+0xfffff7f8u);
    /* 004c29da: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c29db: mov edx, dword ptr [ebp - 0x628] */ r_edx = R32((u32)(r_ebp+0xfffff9d8u));
    /* 004c29e1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c29e2: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c29e8: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c29edu); f_0047e390();
    /* 004c29ed: mov ecx, eax */ r_ecx = r_eax;
    /* 004c29ef: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x4c29f4u); f_004c7c40();
    /* 004c29f4: mov dword ptr [ebp - 0xa24], eax */ W32((u32)(r_ebp+0xfffff5dcu), r_eax);
    /* 004c29fa: mov eax, dword ptr [ebp - 0xa24] */ r_eax = R32((u32)(r_ebp+0xfffff5dcu));
    /* 004c2a00: mov dword ptr [ebp - 0xa28], eax */ W32((u32)(r_ebp+0xfffff5d8u), r_eax);
    /* 004c2a06: mov dword ptr [ebp - 4], 0x61 */ W32((u32)(r_ebp+0xfffffffcu), 0x61u);
    /* 004c2a0d: mov ecx, dword ptr [ebp - 0x854] */ r_ecx = R32((u32)(r_ebp+0xfffff7acu));
    /* 004c2a13: or ecx, 0x100000 */ {  u32 a = r_ecx; u32 b = 0x100000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 004c2a19: mov dword ptr [ebp - 0x854], ecx */ W32((u32)(r_ebp+0xfffff7acu), r_ecx);
    /* 004c2a1f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c2a21: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c2a23: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c2a25: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c2a27: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c2a29: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c2a2b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c2a2d: lea edx, [ebp - 0x80c] */ r_edx = (u32)(r_ebp+0xfffff7f4u);
    /* 004c2a33: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c2a34: mov ecx, dword ptr [ebp - 0xa28] */ r_ecx = R32((u32)(r_ebp+0xfffff5d8u));
    /* 004c2a3a: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x4c2a3fu); f_00485940();
    /* 004c2a3f: mov dword ptr [ebp - 0xa2c], eax */ W32((u32)(r_ebp+0xfffff5d4u), r_eax);
    /* 004c2a45: mov eax, dword ptr [ebp - 0xa2c] */ r_eax = R32((u32)(r_ebp+0xfffff5d4u));
    /* 004c2a4b: mov dword ptr [ebp - 0xa30], eax */ W32((u32)(r_ebp+0xfffff5d0u), r_eax);
    /* 004c2a51: mov dword ptr [ebp - 4], 0x62 */ W32((u32)(r_ebp+0xfffffffcu), 0x62u);
    /* 004c2a58: mov ecx, dword ptr [ebp - 0x854] */ r_ecx = R32((u32)(r_ebp+0xfffff7acu));
    /* 004c2a5e: or ecx, 0x200000 */ {  u32 a = r_ecx; u32 b = 0x200000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 004c2a64: mov dword ptr [ebp - 0x854], ecx */ W32((u32)(r_ebp+0xfffff7acu), r_ecx);
    /* 004c2a6a: mov edx, dword ptr [0x791390] */ r_edx = R32((u32)(0x791390u));
    /* 004c2a70: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c2a71: lea eax, [ebp - 0x80d] */ r_eax = (u32)(r_ebp+0xfffff7f3u);
    /* 004c2a77: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c2a78: mov ecx, dword ptr [ebp - 0xa30] */ r_ecx = R32((u32)(r_ebp+0xfffff5d0u));
    /* 004c2a7e: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x4c2a83u); f_004a2160();
    /* 004c2a83: mov ecx, eax */ r_ecx = r_eax;
    /* 004c2a85: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x4c2a8au); f_004a1e10();
    /* 004c2a8a: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004c2a8d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c2a8f: je 0x4c2aab */ if (fZ) goto L_004c2aab;
L_004c2a91:; BB(0x004c2a91);
    /* 004c2a91: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004c2a93: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4c2a98u); f_0062fbf0();
    /* 004c2a98: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c2a9b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c2a9d: jne 0x4c2aab */ if (!fZ) goto L_004c2aab;
L_004c2a9f:; BB(0x004c2a9f);
    /* 004c2a9f: mov dword ptr [ebp - 0xa34], 1 */ W32((u32)(r_ebp+0xfffff5ccu), 0x1u);
    /* 004c2aa9: jmp 0x4c2ab5 */ goto L_004c2ab5;
L_004c2aab:; BB(0x004c2aab);
    /* 004c2aab: mov dword ptr [ebp - 0xa34], 0 */ W32((u32)(r_ebp+0xfffff5ccu), 0x0u);
L_004c2ab5:; BB(0x004c2ab5);
    /* 004c2ab5: mov dl, byte ptr [ebp - 0xa34] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffff5ccu))) & 0xffu);
    /* 004c2abb: mov byte ptr [ebp - 0x7fe], dl */ W8((u32)(r_ebp+0xfffff802u), (u8)r_edx);
    /* 004c2ac1: mov dword ptr [ebp - 4], 0x61 */ W32((u32)(r_ebp+0xfffffffcu), 0x61u);
    /* 004c2ac8: mov eax, dword ptr [ebp - 0x854] */ r_eax = R32((u32)(r_ebp+0xfffff7acu));
    /* 004c2ace: and eax, 0x200000 */ {  u32 a = r_eax; u32 b = 0x200000u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 004c2ad3: je 0x4c2aea */ if (fZ) goto L_004c2aea;
L_004c2ad5:; BB(0x004c2ad5);
    /* 004c2ad5: and dword ptr [ebp - 0x854], 0xffdfffff */ { u32 ad = (u32)(r_ebp+0xfffff7acu);  u32 a = R32(ad); u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 004c2adf: lea ecx, [ebp - 0x80c] */ r_ecx = (u32)(r_ebp+0xfffff7f4u);
    /* 004c2ae5: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x4c2aeau); f_004a20f0();
L_004c2aea:; BB(0x004c2aea);
    /* 004c2aea: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004c2af1: mov ecx, dword ptr [ebp - 0x854] */ r_ecx = R32((u32)(r_ebp+0xfffff7acu));
    /* 004c2af7: and ecx, 0x100000 */ {  u32 a = r_ecx; u32 b = 0x100000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 004c2afd: je 0x4c2b14 */ if (fZ) goto L_004c2b14;
L_004c2aff:; BB(0x004c2aff);
    /* 004c2aff: and dword ptr [ebp - 0x854], 0xffefffff */ { u32 ad = (u32)(r_ebp+0xfffff7acu);  u32 a = R32(ad); u32 b = 0xffefffffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 004c2b09: lea ecx, [ebp - 0x808] */ r_ecx = (u32)(r_ebp+0xfffff7f8u);
    /* 004c2b0f: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x4c2b14u); f_00484470();
L_004c2b14:; BB(0x004c2b14);
    /* 004c2b14: movzx edx, byte ptr [ebp - 0x7fe] */ r_edx = (u32)R8((u32)(r_ebp+0xfffff802u));
    /* 004c2b1b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c2b1d: je 0x4c2b3e */ if (fZ) goto L_004c2b3e;
L_004c2b1f:; BB(0x004c2b1f);
    /* 004c2b1f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004c2b22: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c2b23: mov ecx, dword ptr [ebp - 0x628] */ r_ecx = R32((u32)(r_ebp+0xfffff9d8u));
    /* 004c2b29: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c2b2a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c2b30: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c2b35u); f_0047e390();
    /* 004c2b35: mov ecx, eax */ r_ecx = r_eax;
    /* 004c2b37: call 0x4cce40 */ r_esp -= 4; W32(r_esp, 0x4c2b3cu); f_004cce40();
    /* 004c2b3c: jmp 0x4c2b88 */ goto L_004c2b88;
L_004c2b3e:; BB(0x004c2b3e);
    /* 004c2b3e: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004c2b40: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4c2b45u); f_0062fbf0();
    /* 004c2b45: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c2b48: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c2b4a: jne 0x4c2b6b */ if (!fZ) goto L_004c2b6b;
L_004c2b4c:; BB(0x004c2b4c);
    /* 004c2b4c: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004c2b4f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c2b50: mov eax, dword ptr [ebp - 0x628] */ r_eax = R32((u32)(r_ebp+0xfffff9d8u));
    /* 004c2b56: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c2b57: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c2b5d: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c2b62u); f_0047e390();
    /* 004c2b62: mov ecx, eax */ r_ecx = r_eax;
    /* 004c2b64: call 0x4ccda0 */ r_esp -= 4; W32(r_esp, 0x4c2b69u); f_004ccda0();
    /* 004c2b69: jmp 0x4c2b88 */ goto L_004c2b88;
L_004c2b6b:; BB(0x004c2b6b);
    /* 004c2b6b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004c2b6e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c2b6f: mov edx, dword ptr [ebp - 0x628] */ r_edx = R32((u32)(r_ebp+0xfffff9d8u));
    /* 004c2b75: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c2b76: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c2b7c: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c2b81u); f_0047e390();
    /* 004c2b81: mov ecx, eax */ r_ecx = r_eax;
    /* 004c2b83: call 0x4ccce0 */ r_esp -= 4; W32(r_esp, 0x4c2b88u); f_004ccce0();
L_004c2b88:; BB(0x004c2b88);
    /* 004c2b88: jmp 0x4c2ba7 */ goto L_004c2ba7;
L_004c2b8a:; BB(0x004c2b8a);
    /* 004c2b8a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004c2b8d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c2b8e: mov ecx, dword ptr [ebp - 0x630] */ r_ecx = R32((u32)(r_ebp+0xfffff9d0u));
    /* 004c2b94: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c2b95: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c2b9b: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c2ba0u); f_0047e390();
    /* 004c2ba0: mov ecx, eax */ r_ecx = r_eax;
    /* 004c2ba2: call 0x4ccce0 */ r_esp -= 4; W32(r_esp, 0x4c2ba7u); f_004ccce0();
L_004c2ba7:; BB(0x004c2ba7);
    /* 004c2ba7: jmp 0x4c2f07 */ goto L_004c2f07;
L_004c2bac:; BB(0x004c2bac);
    /* 004c2bac: cmp dword ptr [ebp - 0x628], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffff9d8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c2bb3: jl 0x4c2eea */ if ((fS!=fO)) goto L_004c2eea;
L_004c2bb9:; BB(0x004c2bb9);
    /* 004c2bb9: lea edx, [ebp - 0x818] */ r_edx = (u32)(r_ebp+0xfffff7e8u);
    /* 004c2bbf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c2bc0: mov eax, dword ptr [ebp - 0x628] */ r_eax = R32((u32)(r_ebp+0xfffff9d8u));
    /* 004c2bc6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c2bc7: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c2bcd: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c2bd2u); f_0047e390();
    /* 004c2bd2: mov ecx, eax */ r_ecx = r_eax;
    /* 004c2bd4: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x4c2bd9u); f_004c7c40();
    /* 004c2bd9: mov dword ptr [ebp - 0xa38], eax */ W32((u32)(r_ebp+0xfffff5c8u), r_eax);
    /* 004c2bdf: mov ecx, dword ptr [ebp - 0xa38] */ r_ecx = R32((u32)(r_ebp+0xfffff5c8u));
    /* 004c2be5: mov dword ptr [ebp - 0xa3c], ecx */ W32((u32)(r_ebp+0xfffff5c4u), r_ecx);
    /* 004c2beb: mov dword ptr [ebp - 4], 0x63 */ W32((u32)(r_ebp+0xfffffffcu), 0x63u);
    /* 004c2bf2: mov edx, dword ptr [ebp - 0x854] */ r_edx = R32((u32)(r_ebp+0xfffff7acu));
    /* 004c2bf8: or edx, 0x400000 */ {  u32 a = r_edx; u32 b = 0x400000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004c2bfe: mov dword ptr [ebp - 0x854], edx */ W32((u32)(r_ebp+0xfffff7acu), r_edx);
    /* 004c2c04: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c2c06: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c2c08: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c2c0a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c2c0c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c2c0e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c2c10: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c2c12: lea eax, [ebp - 0x81c] */ r_eax = (u32)(r_ebp+0xfffff7e4u);
    /* 004c2c18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c2c19: mov ecx, dword ptr [ebp - 0xa3c] */ r_ecx = R32((u32)(r_ebp+0xfffff5c4u));
    /* 004c2c1f: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x4c2c24u); f_00485940();
    /* 004c2c24: mov dword ptr [ebp - 0xa40], eax */ W32((u32)(r_ebp+0xfffff5c0u), r_eax);
    /* 004c2c2a: mov ecx, dword ptr [ebp - 0xa40] */ r_ecx = R32((u32)(r_ebp+0xfffff5c0u));
    /* 004c2c30: mov dword ptr [ebp - 0xa44], ecx */ W32((u32)(r_ebp+0xfffff5bcu), r_ecx);
    /* 004c2c36: mov dword ptr [ebp - 4], 0x64 */ W32((u32)(r_ebp+0xfffffffcu), 0x64u);
    /* 004c2c3d: mov edx, dword ptr [ebp - 0x854] */ r_edx = R32((u32)(r_ebp+0xfffff7acu));
    /* 004c2c43: or edx, 0x800000 */ {  u32 a = r_edx; u32 b = 0x800000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004c2c49: mov dword ptr [ebp - 0x854], edx */ W32((u32)(r_ebp+0xfffff7acu), r_edx);
    /* 004c2c4f: mov eax, dword ptr [0x7913d4] */ r_eax = R32((u32)(0x7913d4u));
    /* 004c2c54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c2c55: lea ecx, [ebp - 0x81d] */ r_ecx = (u32)(r_ebp+0xfffff7e3u);
    /* 004c2c5b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c2c5c: mov ecx, dword ptr [ebp - 0xa44] */ r_ecx = R32((u32)(r_ebp+0xfffff5bcu));
    /* 004c2c62: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x4c2c67u); f_004a2160();
    /* 004c2c67: mov ecx, eax */ r_ecx = r_eax;
    /* 004c2c69: call 0x4a1f00 */ r_esp -= 4; W32(r_esp, 0x4c2c6eu); f_004a1f00();
    /* 004c2c6e: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004c2c71: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c2c73: je 0x4c2c9f */ if (fZ) goto L_004c2c9f;
L_004c2c75:; BB(0x004c2c75);
    /* 004c2c75: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004c2c77: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4c2c7cu); f_0062fbf0();
    /* 004c2c7c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c2c7f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c2c81: jne 0x4c2c9f */ if (!fZ) goto L_004c2c9f;
L_004c2c83:; BB(0x004c2c83);
    /* 004c2c83: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c2c89: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x4c2c8eu); f_0047e190();
    /* 004c2c8e: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c2c91: je 0x4c2c9f */ if (fZ) goto L_004c2c9f;
L_004c2c93:; BB(0x004c2c93);
    /* 004c2c93: mov dword ptr [ebp - 0xa48], 1 */ W32((u32)(r_ebp+0xfffff5b8u), 0x1u);
    /* 004c2c9d: jmp 0x4c2ca9 */ goto L_004c2ca9;
L_004c2c9f:; BB(0x004c2c9f);
    /* 004c2c9f: mov dword ptr [ebp - 0xa48], 0 */ W32((u32)(r_ebp+0xfffff5b8u), 0x0u);
L_004c2ca9:; BB(0x004c2ca9);
    /* 004c2ca9: mov al, byte ptr [ebp - 0xa48] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffff5b8u))) & 0xffu);
    /* 004c2caf: mov byte ptr [ebp - 0x80e], al */ W8((u32)(r_ebp+0xfffff7f2u), (u8)r_eax);
    /* 004c2cb5: mov dword ptr [ebp - 4], 0x63 */ W32((u32)(r_ebp+0xfffffffcu), 0x63u);
    /* 004c2cbc: mov ecx, dword ptr [ebp - 0x854] */ r_ecx = R32((u32)(r_ebp+0xfffff7acu));
    /* 004c2cc2: and ecx, 0x800000 */ {  u32 a = r_ecx; u32 b = 0x800000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 004c2cc8: je 0x4c2cdf */ if (fZ) goto L_004c2cdf;
L_004c2cca:; BB(0x004c2cca);
    /* 004c2cca: and dword ptr [ebp - 0x854], 0xff7fffff */ { u32 ad = (u32)(r_ebp+0xfffff7acu);  u32 a = R32(ad); u32 b = 0xff7fffffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 004c2cd4: lea ecx, [ebp - 0x81c] */ r_ecx = (u32)(r_ebp+0xfffff7e4u);
    /* 004c2cda: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x4c2cdfu); f_004a20f0();
L_004c2cdf:; BB(0x004c2cdf);
    /* 004c2cdf: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004c2ce6: mov edx, dword ptr [ebp - 0x854] */ r_edx = R32((u32)(r_ebp+0xfffff7acu));
    /* 004c2cec: and edx, 0x400000 */ {  u32 a = r_edx; u32 b = 0x400000u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 004c2cf2: je 0x4c2d09 */ if (fZ) goto L_004c2d09;
L_004c2cf4:; BB(0x004c2cf4);
    /* 004c2cf4: and dword ptr [ebp - 0x854], 0xffbfffff */ { u32 ad = (u32)(r_ebp+0xfffff7acu);  u32 a = R32(ad); u32 b = 0xffbfffffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 004c2cfe: lea ecx, [ebp - 0x818] */ r_ecx = (u32)(r_ebp+0xfffff7e8u);
    /* 004c2d04: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x4c2d09u); f_00484470();
L_004c2d09:; BB(0x004c2d09);
    /* 004c2d09: movzx eax, byte ptr [ebp - 0x80e] */ r_eax = (u32)R8((u32)(r_ebp+0xfffff7f2u));
    /* 004c2d10: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c2d12: je 0x4c2d36 */ if (fZ) goto L_004c2d36;
L_004c2d14:; BB(0x004c2d14);
    /* 004c2d14: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004c2d17: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c2d18: mov edx, dword ptr [ebp - 0x628] */ r_edx = R32((u32)(r_ebp+0xfffff9d8u));
    /* 004c2d1e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c2d1f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c2d25: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c2d2au); f_0047e390();
    /* 004c2d2a: mov ecx, eax */ r_ecx = r_eax;
    /* 004c2d2c: call 0x4cce00 */ r_esp -= 4; W32(r_esp, 0x4c2d31u); f_004cce00();
    /* 004c2d31: jmp 0x4c2ee8 */ goto L_004c2ee8;
L_004c2d36:; BB(0x004c2d36);
    /* 004c2d36: lea eax, [ebp - 0x828] */ r_eax = (u32)(r_ebp+0xfffff7d8u);
    /* 004c2d3c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c2d3d: mov ecx, dword ptr [ebp - 0x628] */ r_ecx = R32((u32)(r_ebp+0xfffff9d8u));
    /* 004c2d43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c2d44: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c2d4a: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c2d4fu); f_0047e390();
    /* 004c2d4f: mov ecx, eax */ r_ecx = r_eax;
    /* 004c2d51: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x4c2d56u); f_004c7c40();
    /* 004c2d56: mov dword ptr [ebp - 0xa4c], eax */ W32((u32)(r_ebp+0xfffff5b4u), r_eax);
    /* 004c2d5c: mov edx, dword ptr [ebp - 0xa4c] */ r_edx = R32((u32)(r_ebp+0xfffff5b4u));
    /* 004c2d62: mov dword ptr [ebp - 0xa50], edx */ W32((u32)(r_ebp+0xfffff5b0u), r_edx);
    /* 004c2d68: mov dword ptr [ebp - 4], 0x65 */ W32((u32)(r_ebp+0xfffffffcu), 0x65u);
    /* 004c2d6f: mov eax, dword ptr [ebp - 0x854] */ r_eax = R32((u32)(r_ebp+0xfffff7acu));
    /* 004c2d75: or eax, 0x1000000 */ {  u32 a = r_eax; u32 b = 0x1000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c2d7a: mov dword ptr [ebp - 0x854], eax */ W32((u32)(r_ebp+0xfffff7acu), r_eax);
    /* 004c2d80: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c2d82: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c2d84: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c2d86: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c2d88: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c2d8a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c2d8c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c2d8e: lea ecx, [ebp - 0x82c] */ r_ecx = (u32)(r_ebp+0xfffff7d4u);
    /* 004c2d94: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c2d95: mov ecx, dword ptr [ebp - 0xa50] */ r_ecx = R32((u32)(r_ebp+0xfffff5b0u));
    /* 004c2d9b: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x4c2da0u); f_00485940();
    /* 004c2da0: mov dword ptr [ebp - 0xa54], eax */ W32((u32)(r_ebp+0xfffff5acu), r_eax);
    /* 004c2da6: mov edx, dword ptr [ebp - 0xa54] */ r_edx = R32((u32)(r_ebp+0xfffff5acu));
    /* 004c2dac: mov dword ptr [ebp - 0xa58], edx */ W32((u32)(r_ebp+0xfffff5a8u), r_edx);
    /* 004c2db2: mov dword ptr [ebp - 4], 0x66 */ W32((u32)(r_ebp+0xfffffffcu), 0x66u);
    /* 004c2db9: mov eax, dword ptr [ebp - 0x854] */ r_eax = R32((u32)(r_ebp+0xfffff7acu));
    /* 004c2dbf: or eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c2dc4: mov dword ptr [ebp - 0x854], eax */ W32((u32)(r_ebp+0xfffff7acu), r_eax);
    /* 004c2dca: mov ecx, dword ptr [0x791390] */ r_ecx = R32((u32)(0x791390u));
    /* 004c2dd0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c2dd1: lea edx, [ebp - 0x82d] */ r_edx = (u32)(r_ebp+0xfffff7d3u);
    /* 004c2dd7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c2dd8: mov ecx, dword ptr [ebp - 0xa58] */ r_ecx = R32((u32)(r_ebp+0xfffff5a8u));
    /* 004c2dde: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x4c2de3u); f_004a2160();
    /* 004c2de3: mov ecx, eax */ r_ecx = r_eax;
    /* 004c2de5: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x4c2deau); f_004a1e10();
    /* 004c2dea: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004c2ded: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c2def: je 0x4c2e0b */ if (fZ) goto L_004c2e0b;
L_004c2df1:; BB(0x004c2df1);
    /* 004c2df1: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004c2df3: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4c2df8u); f_0062fbf0();
    /* 004c2df8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c2dfb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c2dfd: jne 0x4c2e0b */ if (!fZ) goto L_004c2e0b;
L_004c2dff:; BB(0x004c2dff);
    /* 004c2dff: mov dword ptr [ebp - 0xa5c], 1 */ W32((u32)(r_ebp+0xfffff5a4u), 0x1u);
    /* 004c2e09: jmp 0x4c2e15 */ goto L_004c2e15;
L_004c2e0b:; BB(0x004c2e0b);
    /* 004c2e0b: mov dword ptr [ebp - 0xa5c], 0 */ W32((u32)(r_ebp+0xfffff5a4u), 0x0u);
L_004c2e15:; BB(0x004c2e15);
    /* 004c2e15: mov cl, byte ptr [ebp - 0xa5c] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffff5a4u))) & 0xffu);
    /* 004c2e1b: mov byte ptr [ebp - 0x81e], cl */ W8((u32)(r_ebp+0xfffff7e2u), (u8)r_ecx);
    /* 004c2e21: mov dword ptr [ebp - 4], 0x65 */ W32((u32)(r_ebp+0xfffffffcu), 0x65u);
    /* 004c2e28: mov edx, dword ptr [ebp - 0x854] */ r_edx = R32((u32)(r_ebp+0xfffff7acu));
    /* 004c2e2e: and edx, 0x2000000 */ {  u32 a = r_edx; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 004c2e34: je 0x4c2e4b */ if (fZ) goto L_004c2e4b;
L_004c2e36:; BB(0x004c2e36);
    /* 004c2e36: and dword ptr [ebp - 0x854], 0xfdffffff */ { u32 ad = (u32)(r_ebp+0xfffff7acu);  u32 a = R32(ad); u32 b = 0xfdffffffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 004c2e40: lea ecx, [ebp - 0x82c] */ r_ecx = (u32)(r_ebp+0xfffff7d4u);
    /* 004c2e46: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x4c2e4bu); f_004a20f0();
L_004c2e4b:; BB(0x004c2e4b);
    /* 004c2e4b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004c2e52: mov eax, dword ptr [ebp - 0x854] */ r_eax = R32((u32)(r_ebp+0xfffff7acu));
    /* 004c2e58: and eax, 0x1000000 */ {  u32 a = r_eax; u32 b = 0x1000000u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 004c2e5d: je 0x4c2e74 */ if (fZ) goto L_004c2e74;
L_004c2e5f:; BB(0x004c2e5f);
    /* 004c2e5f: and dword ptr [ebp - 0x854], 0xfeffffff */ { u32 ad = (u32)(r_ebp+0xfffff7acu);  u32 a = R32(ad); u32 b = 0xfeffffffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 004c2e69: lea ecx, [ebp - 0x828] */ r_ecx = (u32)(r_ebp+0xfffff7d8u);
    /* 004c2e6f: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x4c2e74u); f_00484470();
L_004c2e74:; BB(0x004c2e74);
    /* 004c2e74: movzx ecx, byte ptr [ebp - 0x81e] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffff7e2u));
    /* 004c2e7b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c2e7d: je 0x4c2e9e */ if (fZ) goto L_004c2e9e;
L_004c2e7f:; BB(0x004c2e7f);
    /* 004c2e7f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004c2e82: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c2e83: mov eax, dword ptr [ebp - 0x628] */ r_eax = R32((u32)(r_ebp+0xfffff9d8u));
    /* 004c2e89: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c2e8a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c2e90: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c2e95u); f_0047e390();
    /* 004c2e95: mov ecx, eax */ r_ecx = r_eax;
    /* 004c2e97: call 0x4cce40 */ r_esp -= 4; W32(r_esp, 0x4c2e9cu); f_004cce40();
    /* 004c2e9c: jmp 0x4c2ee8 */ goto L_004c2ee8;
L_004c2e9e:; BB(0x004c2e9e);
    /* 004c2e9e: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004c2ea0: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4c2ea5u); f_0062fbf0();
    /* 004c2ea5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c2ea8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c2eaa: jne 0x4c2ecb */ if (!fZ) goto L_004c2ecb;
L_004c2eac:; BB(0x004c2eac);
    /* 004c2eac: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004c2eaf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c2eb0: mov edx, dword ptr [ebp - 0x628] */ r_edx = R32((u32)(r_ebp+0xfffff9d8u));
    /* 004c2eb6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c2eb7: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c2ebd: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c2ec2u); f_0047e390();
    /* 004c2ec2: mov ecx, eax */ r_ecx = r_eax;
    /* 004c2ec4: call 0x4ccda0 */ r_esp -= 4; W32(r_esp, 0x4c2ec9u); f_004ccda0();
    /* 004c2ec9: jmp 0x4c2ee8 */ goto L_004c2ee8;
L_004c2ecb:; BB(0x004c2ecb);
    /* 004c2ecb: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004c2ece: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c2ecf: mov ecx, dword ptr [ebp - 0x628] */ r_ecx = R32((u32)(r_ebp+0xfffff9d8u));
    /* 004c2ed5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c2ed6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c2edc: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c2ee1u); f_0047e390();
    /* 004c2ee1: mov ecx, eax */ r_ecx = r_eax;
    /* 004c2ee3: call 0x4ccd60 */ r_esp -= 4; W32(r_esp, 0x4c2ee8u); f_004ccd60();
L_004c2ee8:; BB(0x004c2ee8);
    /* 004c2ee8: jmp 0x4c2f07 */ goto L_004c2f07;
L_004c2eea:; BB(0x004c2eea);
    /* 004c2eea: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004c2eed: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c2eee: mov eax, dword ptr [ebp - 0x630] */ r_eax = R32((u32)(r_ebp+0xfffff9d0u));
    /* 004c2ef4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c2ef5: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c2efb: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c2f00u); f_0047e390();
    /* 004c2f00: mov ecx, eax */ r_ecx = r_eax;
    /* 004c2f02: call 0x4ccd60 */ r_esp -= 4; W32(r_esp, 0x4c2f07u); f_004ccd60();
L_004c2f07:; BB(0x004c2f07);
    /* 004c2f07: jmp 0x4c3308 */ goto L_004c3308;
L_004c2f0c:; BB(0x004c2f0c);
    /* 004c2f0c: cmp dword ptr [0x791e48], 9 */ {  u32 a = R32((u32)(0x791e48u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c2f13: jne 0x4c327b */ if (!fZ) goto L_004c327b;
L_004c2f19:; BB(0x004c2f19);
    /* 004c2f19: cmp dword ptr [ebp - 0x628], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffff9d8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c2f20: jl 0x4c3259 */ if ((fS!=fO)) goto L_004c3259;
L_004c2f26:; BB(0x004c2f26);
    /* 004c2f26: lea ecx, [ebp - 0x838] */ r_ecx = (u32)(r_ebp+0xfffff7c8u);
    /* 004c2f2c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c2f2d: mov edx, dword ptr [ebp - 0x628] */ r_edx = R32((u32)(r_ebp+0xfffff9d8u));
    /* 004c2f33: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c2f34: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c2f3a: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c2f3fu); f_0047e390();
    /* 004c2f3f: mov ecx, eax */ r_ecx = r_eax;
    /* 004c2f41: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x4c2f46u); f_004c7c40();
    /* 004c2f46: mov dword ptr [ebp - 0xa60], eax */ W32((u32)(r_ebp+0xfffff5a0u), r_eax);
    /* 004c2f4c: mov eax, dword ptr [ebp - 0xa60] */ r_eax = R32((u32)(r_ebp+0xfffff5a0u));
    /* 004c2f52: mov dword ptr [ebp - 0xa64], eax */ W32((u32)(r_ebp+0xfffff59cu), r_eax);
    /* 004c2f58: mov dword ptr [ebp - 4], 0x67 */ W32((u32)(r_ebp+0xfffffffcu), 0x67u);
    /* 004c2f5f: mov ecx, dword ptr [ebp - 0x854] */ r_ecx = R32((u32)(r_ebp+0xfffff7acu));
    /* 004c2f65: or ecx, 0x4000000 */ {  u32 a = r_ecx; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 004c2f6b: mov dword ptr [ebp - 0x854], ecx */ W32((u32)(r_ebp+0xfffff7acu), r_ecx);
    /* 004c2f71: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c2f73: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c2f75: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c2f77: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c2f79: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c2f7b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c2f7d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c2f7f: lea edx, [ebp - 0x83c] */ r_edx = (u32)(r_ebp+0xfffff7c4u);
    /* 004c2f85: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c2f86: mov ecx, dword ptr [ebp - 0xa64] */ r_ecx = R32((u32)(r_ebp+0xfffff59cu));
    /* 004c2f8c: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x4c2f91u); f_00485940();
    /* 004c2f91: mov dword ptr [ebp - 0xa68], eax */ W32((u32)(r_ebp+0xfffff598u), r_eax);
    /* 004c2f97: mov eax, dword ptr [ebp - 0xa68] */ r_eax = R32((u32)(r_ebp+0xfffff598u));
    /* 004c2f9d: mov dword ptr [ebp - 0xa6c], eax */ W32((u32)(r_ebp+0xfffff594u), r_eax);
    /* 004c2fa3: mov dword ptr [ebp - 4], 0x68 */ W32((u32)(r_ebp+0xfffffffcu), 0x68u);
    /* 004c2faa: mov ecx, dword ptr [ebp - 0x854] */ r_ecx = R32((u32)(r_ebp+0xfffff7acu));
    /* 004c2fb0: or ecx, 0x8000000 */ {  u32 a = r_ecx; u32 b = 0x8000000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 004c2fb6: mov dword ptr [ebp - 0x854], ecx */ W32((u32)(r_ebp+0xfffff7acu), r_ecx);
    /* 004c2fbc: mov edx, dword ptr [0x7913d4] */ r_edx = R32((u32)(0x7913d4u));
    /* 004c2fc2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c2fc3: lea eax, [ebp - 0x83d] */ r_eax = (u32)(r_ebp+0xfffff7c3u);
    /* 004c2fc9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c2fca: mov ecx, dword ptr [ebp - 0xa6c] */ r_ecx = R32((u32)(r_ebp+0xfffff594u));
    /* 004c2fd0: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x4c2fd5u); f_004a2160();
    /* 004c2fd5: mov ecx, eax */ r_ecx = r_eax;
    /* 004c2fd7: call 0x4a1f00 */ r_esp -= 4; W32(r_esp, 0x4c2fdcu); f_004a1f00();
    /* 004c2fdc: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004c2fdf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c2fe1: je 0x4c300d */ if (fZ) goto L_004c300d;
L_004c2fe3:; BB(0x004c2fe3);
    /* 004c2fe3: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004c2fe5: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4c2feau); f_0062fbf0();
    /* 004c2fea: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c2fed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c2fef: jne 0x4c300d */ if (!fZ) goto L_004c300d;
L_004c2ff1:; BB(0x004c2ff1);
    /* 004c2ff1: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c2ff7: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x4c2ffcu); f_0047e190();
    /* 004c2ffc: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c2fff: je 0x4c300d */ if (fZ) goto L_004c300d;
L_004c3001:; BB(0x004c3001);
    /* 004c3001: mov dword ptr [ebp - 0xa70], 1 */ W32((u32)(r_ebp+0xfffff590u), 0x1u);
    /* 004c300b: jmp 0x4c3017 */ goto L_004c3017;
L_004c300d:; BB(0x004c300d);
    /* 004c300d: mov dword ptr [ebp - 0xa70], 0 */ W32((u32)(r_ebp+0xfffff590u), 0x0u);
L_004c3017:; BB(0x004c3017);
    /* 004c3017: mov dl, byte ptr [ebp - 0xa70] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffff590u))) & 0xffu);
    /* 004c301d: mov byte ptr [ebp - 0x82e], dl */ W8((u32)(r_ebp+0xfffff7d2u), (u8)r_edx);
    /* 004c3023: mov dword ptr [ebp - 4], 0x67 */ W32((u32)(r_ebp+0xfffffffcu), 0x67u);
    /* 004c302a: mov eax, dword ptr [ebp - 0x854] */ r_eax = R32((u32)(r_ebp+0xfffff7acu));
    /* 004c3030: and eax, 0x8000000 */ {  u32 a = r_eax; u32 b = 0x8000000u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 004c3035: je 0x4c304c */ if (fZ) goto L_004c304c;
L_004c3037:; BB(0x004c3037);
    /* 004c3037: and dword ptr [ebp - 0x854], 0xf7ffffff */ { u32 ad = (u32)(r_ebp+0xfffff7acu);  u32 a = R32(ad); u32 b = 0xf7ffffffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 004c3041: lea ecx, [ebp - 0x83c] */ r_ecx = (u32)(r_ebp+0xfffff7c4u);
    /* 004c3047: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x4c304cu); f_004a20f0();
L_004c304c:; BB(0x004c304c);
    /* 004c304c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004c3053: mov ecx, dword ptr [ebp - 0x854] */ r_ecx = R32((u32)(r_ebp+0xfffff7acu));
    /* 004c3059: and ecx, 0x4000000 */ {  u32 a = r_ecx; u32 b = 0x4000000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 004c305f: je 0x4c3076 */ if (fZ) goto L_004c3076;
L_004c3061:; BB(0x004c3061);
    /* 004c3061: and dword ptr [ebp - 0x854], 0xfbffffff */ { u32 ad = (u32)(r_ebp+0xfffff7acu);  u32 a = R32(ad); u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 004c306b: lea ecx, [ebp - 0x838] */ r_ecx = (u32)(r_ebp+0xfffff7c8u);
    /* 004c3071: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x4c3076u); f_00484470();
L_004c3076:; BB(0x004c3076);
    /* 004c3076: movzx edx, byte ptr [ebp - 0x82e] */ r_edx = (u32)R8((u32)(r_ebp+0xfffff7d2u));
    /* 004c307d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c307f: je 0x4c30a3 */ if (fZ) goto L_004c30a3;
L_004c3081:; BB(0x004c3081);
    /* 004c3081: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004c3084: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c3085: mov ecx, dword ptr [ebp - 0x628] */ r_ecx = R32((u32)(r_ebp+0xfffff9d8u));
    /* 004c308b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c308c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c3092: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c3097u); f_0047e390();
    /* 004c3097: mov ecx, eax */ r_ecx = r_eax;
    /* 004c3099: call 0x4cce00 */ r_esp -= 4; W32(r_esp, 0x4c309eu); f_004cce00();
    /* 004c309e: jmp 0x4c3257 */ goto L_004c3257;
L_004c30a3:; BB(0x004c30a3);
    /* 004c30a3: lea edx, [ebp - 0x848] */ r_edx = (u32)(r_ebp+0xfffff7b8u);
    /* 004c30a9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c30aa: mov eax, dword ptr [ebp - 0x628] */ r_eax = R32((u32)(r_ebp+0xfffff9d8u));
    /* 004c30b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c30b1: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c30b7: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c30bcu); f_0047e390();
    /* 004c30bc: mov ecx, eax */ r_ecx = r_eax;
    /* 004c30be: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x4c30c3u); f_004c7c40();
    /* 004c30c3: mov dword ptr [ebp - 0xa74], eax */ W32((u32)(r_ebp+0xfffff58cu), r_eax);
    /* 004c30c9: mov ecx, dword ptr [ebp - 0xa74] */ r_ecx = R32((u32)(r_ebp+0xfffff58cu));
    /* 004c30cf: mov dword ptr [ebp - 0xa78], ecx */ W32((u32)(r_ebp+0xfffff588u), r_ecx);
    /* 004c30d5: mov dword ptr [ebp - 4], 0x69 */ W32((u32)(r_ebp+0xfffffffcu), 0x69u);
    /* 004c30dc: mov edx, dword ptr [ebp - 0x854] */ r_edx = R32((u32)(r_ebp+0xfffff7acu));
    /* 004c30e2: or edx, 0x10000000 */ {  u32 a = r_edx; u32 b = 0x10000000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004c30e8: mov dword ptr [ebp - 0x854], edx */ W32((u32)(r_ebp+0xfffff7acu), r_edx);
    /* 004c30ee: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c30f0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c30f2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c30f4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c30f6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c30f8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c30fa: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c30fc: lea eax, [ebp - 0x84c] */ r_eax = (u32)(r_ebp+0xfffff7b4u);
    /* 004c3102: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c3103: mov ecx, dword ptr [ebp - 0xa78] */ r_ecx = R32((u32)(r_ebp+0xfffff588u));
    /* 004c3109: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x4c310eu); f_00485940();
    /* 004c310e: mov dword ptr [ebp - 0xa7c], eax */ W32((u32)(r_ebp+0xfffff584u), r_eax);
    /* 004c3114: mov ecx, dword ptr [ebp - 0xa7c] */ r_ecx = R32((u32)(r_ebp+0xfffff584u));
    /* 004c311a: mov dword ptr [ebp - 0xa80], ecx */ W32((u32)(r_ebp+0xfffff580u), r_ecx);
    /* 004c3120: mov dword ptr [ebp - 4], 0x6a */ W32((u32)(r_ebp+0xfffffffcu), 0x6au);
    /* 004c3127: mov edx, dword ptr [ebp - 0x854] */ r_edx = R32((u32)(r_ebp+0xfffff7acu));
    /* 004c312d: or edx, 0x20000000 */ {  u32 a = r_edx; u32 b = 0x20000000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004c3133: mov dword ptr [ebp - 0x854], edx */ W32((u32)(r_ebp+0xfffff7acu), r_edx);
    /* 004c3139: mov eax, dword ptr [0x791390] */ r_eax = R32((u32)(0x791390u));
    /* 004c313e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c313f: lea ecx, [ebp - 0x84d] */ r_ecx = (u32)(r_ebp+0xfffff7b3u);
    /* 004c3145: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c3146: mov ecx, dword ptr [ebp - 0xa80] */ r_ecx = R32((u32)(r_ebp+0xfffff580u));
    /* 004c314c: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x4c3151u); f_004a2160();
    /* 004c3151: mov ecx, eax */ r_ecx = r_eax;
    /* 004c3153: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x4c3158u); f_004a1e10();
    /* 004c3158: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004c315b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c315d: je 0x4c3179 */ if (fZ) goto L_004c3179;
L_004c315f:; BB(0x004c315f);
    /* 004c315f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004c3161: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4c3166u); f_0062fbf0();
    /* 004c3166: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c3169: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c316b: jne 0x4c3179 */ if (!fZ) goto L_004c3179;
L_004c316d:; BB(0x004c316d);
    /* 004c316d: mov dword ptr [ebp - 0xa84], 1 */ W32((u32)(r_ebp+0xfffff57cu), 0x1u);
    /* 004c3177: jmp 0x4c3183 */ goto L_004c3183;
L_004c3179:; BB(0x004c3179);
    /* 004c3179: mov dword ptr [ebp - 0xa84], 0 */ W32((u32)(r_ebp+0xfffff57cu), 0x0u);
L_004c3183:; BB(0x004c3183);
    /* 004c3183: mov al, byte ptr [ebp - 0xa84] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffff57cu))) & 0xffu);
    /* 004c3189: mov byte ptr [ebp - 0x83e], al */ W8((u32)(r_ebp+0xfffff7c2u), (u8)r_eax);
    /* 004c318f: mov dword ptr [ebp - 4], 0x69 */ W32((u32)(r_ebp+0xfffffffcu), 0x69u);
    /* 004c3196: mov ecx, dword ptr [ebp - 0x854] */ r_ecx = R32((u32)(r_ebp+0xfffff7acu));
    /* 004c319c: and ecx, 0x20000000 */ {  u32 a = r_ecx; u32 b = 0x20000000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 004c31a2: je 0x4c31b9 */ if (fZ) goto L_004c31b9;
L_004c31a4:; BB(0x004c31a4);
    /* 004c31a4: and dword ptr [ebp - 0x854], 0xdfffffff */ { u32 ad = (u32)(r_ebp+0xfffff7acu);  u32 a = R32(ad); u32 b = 0xdfffffffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 004c31ae: lea ecx, [ebp - 0x84c] */ r_ecx = (u32)(r_ebp+0xfffff7b4u);
    /* 004c31b4: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x4c31b9u); f_004a20f0();
L_004c31b9:; BB(0x004c31b9);
    /* 004c31b9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004c31c0: mov edx, dword ptr [ebp - 0x854] */ r_edx = R32((u32)(r_ebp+0xfffff7acu));
    /* 004c31c6: and edx, 0x10000000 */ {  u32 a = r_edx; u32 b = 0x10000000u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 004c31cc: je 0x4c31e3 */ if (fZ) goto L_004c31e3;
L_004c31ce:; BB(0x004c31ce);
    /* 004c31ce: and dword ptr [ebp - 0x854], 0xefffffff */ { u32 ad = (u32)(r_ebp+0xfffff7acu);  u32 a = R32(ad); u32 b = 0xefffffffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 004c31d8: lea ecx, [ebp - 0x848] */ r_ecx = (u32)(r_ebp+0xfffff7b8u);
    /* 004c31de: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x4c31e3u); f_00484470();
L_004c31e3:; BB(0x004c31e3);
    /* 004c31e3: movzx eax, byte ptr [ebp - 0x83e] */ r_eax = (u32)R8((u32)(r_ebp+0xfffff7c2u));
    /* 004c31ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c31ec: je 0x4c320d */ if (fZ) goto L_004c320d;
L_004c31ee:; BB(0x004c31ee);
    /* 004c31ee: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004c31f1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c31f2: mov edx, dword ptr [ebp - 0x628] */ r_edx = R32((u32)(r_ebp+0xfffff9d8u));
    /* 004c31f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c31f9: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c31ff: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c3204u); f_0047e390();
    /* 004c3204: mov ecx, eax */ r_ecx = r_eax;
    /* 004c3206: call 0x4cce40 */ r_esp -= 4; W32(r_esp, 0x4c320bu); f_004cce40();
    /* 004c320b: jmp 0x4c3257 */ goto L_004c3257;
L_004c320d:; BB(0x004c320d);
    /* 004c320d: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004c320f: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4c3214u); f_0062fbf0();
    /* 004c3214: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c3217: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c3219: jne 0x4c323a */ if (!fZ) goto L_004c323a;
L_004c321b:; BB(0x004c321b);
    /* 004c321b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004c321e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c321f: mov ecx, dword ptr [ebp - 0x628] */ r_ecx = R32((u32)(r_ebp+0xfffff9d8u));
    /* 004c3225: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c3226: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c322c: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c3231u); f_0047e390();
    /* 004c3231: mov ecx, eax */ r_ecx = r_eax;
    /* 004c3233: call 0x4ccda0 */ r_esp -= 4; W32(r_esp, 0x4c3238u); f_004ccda0();
    /* 004c3238: jmp 0x4c3257 */ goto L_004c3257;
L_004c323a:; BB(0x004c323a);
    /* 004c323a: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004c323d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c323e: mov eax, dword ptr [ebp - 0x628] */ r_eax = R32((u32)(r_ebp+0xfffff9d8u));
    /* 004c3244: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c3245: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c324b: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c3250u); f_0047e390();
    /* 004c3250: mov ecx, eax */ r_ecx = r_eax;
    /* 004c3252: call 0x4ccd20 */ r_esp -= 4; W32(r_esp, 0x4c3257u); f_004ccd20();
L_004c3257:; BB(0x004c3257);
    /* 004c3257: jmp 0x4c3276 */ goto L_004c3276;
L_004c3259:; BB(0x004c3259);
    /* 004c3259: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004c325c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c325d: mov edx, dword ptr [ebp - 0x630] */ r_edx = R32((u32)(r_ebp+0xfffff9d0u));
    /* 004c3263: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c3264: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c326a: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c326fu); f_0047e390();
    /* 004c326f: mov ecx, eax */ r_ecx = r_eax;
    /* 004c3271: call 0x4ccd20 */ r_esp -= 4; W32(r_esp, 0x4c3276u); f_004ccd20();
L_004c3276:; BB(0x004c3276);
    /* 004c3276: jmp 0x4c3308 */ goto L_004c3308;
L_004c327b:; BB(0x004c327b);
    /* 004c327b: cmp dword ptr [0x791e48], 0xb */ {  u32 a = R32((u32)(0x791e48u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c3282: jne 0x4c32a3 */ if (!fZ) goto L_004c32a3;
L_004c3284:; BB(0x004c3284);
    /* 004c3284: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004c3287: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c3288: mov ecx, dword ptr [ebp - 0x630] */ r_ecx = R32((u32)(r_ebp+0xfffff9d0u));
    /* 004c328e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c328f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c3295: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c329au); f_0047e390();
    /* 004c329a: mov ecx, eax */ r_ecx = r_eax;
    /* 004c329c: call 0x4ccca0 */ r_esp -= 4; W32(r_esp, 0x4c32a1u); f_004ccca0();
    /* 004c32a1: jmp 0x4c3308 */ goto L_004c3308;
L_004c32a3:; BB(0x004c32a3);
    /* 004c32a3: cmp dword ptr [0x791e48], 0xd */ {  u32 a = R32((u32)(0x791e48u)); u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c32aa: jne 0x4c32f3 */ if (!fZ) goto L_004c32f3;
L_004c32ac:; BB(0x004c32ac);
    /* 004c32ac: cmp dword ptr [ebp - 0x628], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffff9d8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c32b3: jl 0x4c32d4 */ if ((fS!=fO)) goto L_004c32d4;
L_004c32b5:; BB(0x004c32b5);
    /* 004c32b5: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004c32b8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c32b9: mov eax, dword ptr [ebp - 0x628] */ r_eax = R32((u32)(r_ebp+0xfffff9d8u));
    /* 004c32bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c32c0: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c32c6: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c32cbu); f_0047e390();
    /* 004c32cb: mov ecx, eax */ r_ecx = r_eax;
    /* 004c32cd: call 0x4ccfe0 */ r_esp -= 4; W32(r_esp, 0x4c32d2u); f_004ccfe0();
    /* 004c32d2: jmp 0x4c32f1 */ goto L_004c32f1;
L_004c32d4:; BB(0x004c32d4);
    /* 004c32d4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004c32d7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c32d8: mov edx, dword ptr [ebp - 0x630] */ r_edx = R32((u32)(r_ebp+0xfffff9d0u));
    /* 004c32de: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c32df: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c32e5: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c32eau); f_0047e390();
    /* 004c32ea: mov ecx, eax */ r_ecx = r_eax;
    /* 004c32ec: call 0x4ccfe0 */ r_esp -= 4; W32(r_esp, 0x4c32f1u); f_004ccfe0();
L_004c32f1:; BB(0x004c32f1);
    /* 004c32f1: jmp 0x4c3308 */ goto L_004c3308;
L_004c32f3:; BB(0x004c32f3);
    /* 004c32f3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c32f5: mov eax, dword ptr [ebp - 0x858] */ r_eax = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004c32fb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004c32fd: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004c3303: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004c3306: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4c3308u); call_ind(t); }
L_004c3308:; BB(0x004c3308);
    /* 004c3308: jmp 0x4c331f */ goto L_004c331f;
L_004c330a:; BB(0x004c330a);
    /* 004c330a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c330c: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004c3312: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004c3314: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004c331a: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004c331d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4c331fu); call_ind(t); }
L_004c331f:; BB(0x004c331f);
    /* 004c331f: jmp 0x4c353d */ goto L_004c353d;
L_004c3324:; BB(0x004c3324);
    /* 004c3324: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 004c3326: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004c332c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004c332e: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004c3334: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004c3337: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4c3339u); call_ind(t); }
    /* 004c3339: mov ecx, dword ptr [0x791e78] */ r_ecx = R32((u32)(0x791e78u));
    /* 004c333f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c3340: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c3346: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c334bu); f_0047e390();
    /* 004c334b: mov ecx, eax */ r_ecx = r_eax;
    /* 004c334d: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x4c3352u); f_004c6cb0();
    /* 004c3352: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c3355: jne 0x4c33ed */ if (!fZ) goto L_004c33ed;
L_004c335b:; BB(0x004c335b);
    /* 004c335b: mov edx, dword ptr [0x791e78] */ r_edx = R32((u32)(0x791e78u));
    /* 004c3361: mov dword ptr [ebp - 0x644], edx */ W32((u32)(r_ebp+0xfffff9bcu), r_edx);
L_004c3367:; BB(0x004c3367);
    /* 004c3367: mov eax, dword ptr [ebp - 0x644] */ r_eax = R32((u32)(r_ebp+0xfffff9bcu));
    /* 004c336d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c336e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c3374: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c3379u); f_0047e390();
    /* 004c3379: mov ecx, eax */ r_ecx = r_eax;
    /* 004c337b: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x4c3380u); f_004c6cb0();
    /* 004c3380: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c3383: je 0x4c33a1 */ if (fZ) goto L_004c33a1;
L_004c3385:; BB(0x004c3385);
    /* 004c3385: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c338b: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4c3390u); f_0047f950();
    /* 004c3390: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c3391: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4c3396u); f_0062fbf0();
    /* 004c3396: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c3399: mov dword ptr [ebp - 0x644], eax */ W32((u32)(r_ebp+0xfffff9bcu), r_eax);
    /* 004c339f: jmp 0x4c3367 */ goto L_004c3367;
L_004c33a1:; BB(0x004c33a1);
    /* 004c33a1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c33a3: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4c33a8u); f_0062fbf0();
    /* 004c33a8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c33ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c33ad: jne 0x4c33ce */ if (!fZ) goto L_004c33ce;
L_004c33af:; BB(0x004c33af);
    /* 004c33af: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004c33b2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c33b3: mov edx, dword ptr [ebp - 0x644] */ r_edx = R32((u32)(r_ebp+0xfffff9bcu));
    /* 004c33b9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c33ba: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c33c0: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c33c5u); f_0047e390();
    /* 004c33c5: mov ecx, eax */ r_ecx = r_eax;
    /* 004c33c7: call 0x4cd1b0 */ r_esp -= 4; W32(r_esp, 0x4c33ccu); f_004cd1b0();
    /* 004c33cc: jmp 0x4c33eb */ goto L_004c33eb;
L_004c33ce:; BB(0x004c33ce);
    /* 004c33ce: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004c33d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c33d2: mov ecx, dword ptr [ebp - 0x644] */ r_ecx = R32((u32)(r_ebp+0xfffff9bcu));
    /* 004c33d8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c33d9: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c33df: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c33e4u); f_0047e390();
    /* 004c33e4: mov ecx, eax */ r_ecx = r_eax;
    /* 004c33e6: call 0x4cd190 */ r_esp -= 4; W32(r_esp, 0x4c33ebu); f_004cd190();
L_004c33eb:; BB(0x004c33eb);
    /* 004c33eb: jmp 0x4c3437 */ goto L_004c3437;
L_004c33ed:; BB(0x004c33ed);
    /* 004c33ed: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004c33ef: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4c33f4u); f_0062fbf0();
    /* 004c33f4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c33f7: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c33fa: jne 0x4c341a */ if (!fZ) goto L_004c341a;
L_004c33fc:; BB(0x004c33fc);
    /* 004c33fc: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004c33ff: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c3400: mov eax, dword ptr [0x791e78] */ r_eax = R32((u32)(0x791e78u));
    /* 004c3405: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c3406: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c340c: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c3411u); f_0047e390();
    /* 004c3411: mov ecx, eax */ r_ecx = r_eax;
    /* 004c3413: call 0x4cd1d0 */ r_esp -= 4; W32(r_esp, 0x4c3418u); f_004cd1d0();
    /* 004c3418: jmp 0x4c3437 */ goto L_004c3437;
L_004c341a:; BB(0x004c341a);
    /* 004c341a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004c341d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c341e: mov edx, dword ptr [0x791e78] */ r_edx = R32((u32)(0x791e78u));
    /* 004c3424: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c3425: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c342b: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c3430u); f_0047e390();
    /* 004c3430: mov ecx, eax */ r_ecx = r_eax;
    /* 004c3432: call 0x4cd170 */ r_esp -= 4; W32(r_esp, 0x4c3437u); f_004cd170();
L_004c3437:; BB(0x004c3437);
    /* 004c3437: jmp 0x4c353d */ goto L_004c353d;
L_004c343c:; BB(0x004c343c);
    /* 004c343c: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 004c343e: mov eax, dword ptr [ebp - 0x858] */ r_eax = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004c3444: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004c3446: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004c344c: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004c344f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4c3451u); call_ind(t); }
    /* 004c3451: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004c3453: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 004c3459: call 0x637810 */ r_esp -= 4; W32(r_esp, 0x4c345eu); f_00637810();
    /* 004c345e: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c3461: jge 0x4c3492 */ if ((fS==fO)) goto L_004c3492;
L_004c3463:; BB(0x004c3463);
    /* 004c3463: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004c3465: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 004c346b: call 0x637810 */ r_esp -= 4; W32(r_esp, 0x4c3470u); f_00637810();
    /* 004c3470: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004c3472: jl 0x4c3492 */ if ((fS!=fO)) goto L_004c3492;
L_004c3474:; BB(0x004c3474);
    /* 004c3474: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004c3476: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 004c347c: call 0x637810 */ r_esp -= 4; W32(r_esp, 0x4c3481u); f_00637810();
    /* 004c3481: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c3484: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c3485: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004c348b: call 0x5fc490 */ r_esp -= 4; W32(r_esp, 0x4c3490u); f_005fc490();
    /* 004c3490: jmp 0x4c349f */ goto L_004c349f;
L_004c3492:; BB(0x004c3492);
    /* 004c3492: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004c3494: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004c349a: call 0x5fc490 */ r_esp -= 4; W32(r_esp, 0x4c349fu); f_005fc490();
L_004c349f:; BB(0x004c349f);
    /* 004c349f: jmp 0x4c353d */ goto L_004c353d;
L_004c34a4:; BB(0x004c34a4);
    /* 004c34a4: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 004c34a6: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004c34ac: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004c34ae: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004c34b4: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004c34b7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4c34b9u); call_ind(t); }
    /* 004c34b9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c34bb: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004c34c1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004c34c3: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004c34c9: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004c34cc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4c34ceu); call_ind(t); }
    /* 004c34ce: jmp 0x4c353d */ goto L_004c353d;
L_004c34d0:; BB(0x004c34d0);
    /* 004c34d0: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 004c34d2: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004c34d8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004c34da: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004c34e0: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004c34e3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4c34e5u); call_ind(t); }
    /* 004c34e5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c34e7: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004c34ed: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004c34ef: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004c34f5: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004c34f8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4c34fau); call_ind(t); }
    /* 004c34fa: jmp 0x4c353d */ goto L_004c353d;
L_004c34fc:; BB(0x004c34fc);
    /* 004c34fc: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c3502: call 0x47aaa0 */ r_esp -= 4; W32(r_esp, 0x4c3507u); f_0047aaa0();
    /* 004c3507: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c350d: call 0x47aa30 */ r_esp -= 4; W32(r_esp, 0x4c3512u); f_0047aa30();
    /* 004c3512: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c3514: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004c351a: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 004c351d: mov eax, dword ptr [ebp - 0x858] */ r_eax = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004c3523: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 004c3526: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004c3528: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004c352b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4c352du); call_ind(t); }
    /* 004c352d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c352f: mov ecx, dword ptr [ebp - 0x858] */ r_ecx = R32((u32)(r_ebp+0xfffff7a8u));
    /* 004c3535: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 004c3538: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x4c353du); f_005fc420();
L_004c353d:; BB(0x004c353d);
    /* 004c353d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c3540: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004c3547: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004c3548: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c3549: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c354a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c354d: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004c354f: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x4c3554u); f_00686d72();
    /* 004c3554: mov esp, ebp */ r_esp = r_ebp;
    /* 004c3556: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c3557: ret 4 */ FN_RET(0x004b7df0); r_esp += 8; return;
}

