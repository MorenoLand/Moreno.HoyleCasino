#include "protos.h"

void f_0056ba40(void) /* RoadKillSlot::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056ba40);
    /* 0056ba40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056ba41: mov ebp, esp */ r_ebp = r_esp;
    /* 0056ba43: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056ba46: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0056ba49: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056ba4c: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x56ba51u); f_005e9e20();
    /* 0056ba51: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056ba54: mov dword ptr [eax], 0x6ca2b0 */ W32((u32)(r_eax), 0x6ca2b0u);
    /* 0056ba5a: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056ba60: jmp 0x56ba6e */ goto L_0056ba6e;
L_0056ba62:; BB(0x0056ba62);
    /* 0056ba62: mov cx, word ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0056ba66: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0056ba6a: mov word ptr [ebp - 4], cx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_ecx);
L_0056ba6e:; BB(0x0056ba6e);
    /* 0056ba6e: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0056ba72: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056ba75: jge 0x56ba88 */ if ((fS==fO)) goto L_0056ba88;
L_0056ba77:; BB(0x0056ba77);
    /* 0056ba77: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0056ba7b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056ba7e: mov dword ptr [ecx + eax*4 + 8], 0 */ W32((u32)(r_ecx+r_eax*4+0x8u), 0x0u);
    /* 0056ba86: jmp 0x56ba62 */ goto L_0056ba62;
L_0056ba88:; BB(0x0056ba88);
    /* 0056ba88: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056ba8e: jmp 0x56ba9c */ goto L_0056ba9c;
L_0056ba90:; BB(0x0056ba90);
    /* 0056ba90: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0056ba94: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0056ba98: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
L_0056ba9c:; BB(0x0056ba9c);
    /* 0056ba9c: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0056baa0: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056baa3: jge 0x56bac5 */ if ((fS==fO)) goto L_0056bac5;
L_0056baa5:; BB(0x0056baa5);
    /* 0056baa5: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0056baa9: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056baac: mov dword ptr [edx + ecx*4 + 0x34], 0 */ W32((u32)(r_edx+r_ecx*4+0x34u), 0x0u);
    /* 0056bab4: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0056bab8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056babb: mov dword ptr [ecx + eax*4 + 0x44], 0 */ W32((u32)(r_ecx+r_eax*4+0x44u), 0x0u);
    /* 0056bac3: jmp 0x56ba90 */ goto L_0056ba90;
L_0056bac5:; BB(0x0056bac5);
    /* 0056bac5: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056bacb: jmp 0x56bad9 */ goto L_0056bad9;
L_0056bacd:; BB(0x0056bacd);
    /* 0056bacd: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0056bad1: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0056bad5: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
L_0056bad9:; BB(0x0056bad9);
    /* 0056bad9: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0056badd: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056bae0: jge 0x56bb02 */ if ((fS==fO)) goto L_0056bb02;
L_0056bae2:; BB(0x0056bae2);
    /* 0056bae2: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0056bae6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056bae9: mov dword ptr [edx + ecx*4 + 0x54], 0 */ W32((u32)(r_edx+r_ecx*4+0x54u), 0x0u);
    /* 0056baf1: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0056baf5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056baf8: mov dword ptr [ecx + eax*4 + 0x5c], 0 */ W32((u32)(r_ecx+r_eax*4+0x5cu), 0x0u);
    /* 0056bb00: jmp 0x56bacd */ goto L_0056bacd;
L_0056bb02:; BB(0x0056bb02);
    /* 0056bb02: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056bb05: mov dword ptr [edx + 0x20], 0 */ W32((u32)(r_edx+0x20u), 0x0u);
    /* 0056bb0c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056bb0f: mov dword ptr [eax + 0x28], 0 */ W32((u32)(r_eax+0x28u), 0x0u);
    /* 0056bb16: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056bb19: mov dword ptr [ecx + 0x24], 0 */ W32((u32)(r_ecx+0x24u), 0x0u);
    /* 0056bb20: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056bb23: mov dword ptr [edx + 0x2c], 0 */ W32((u32)(r_edx+0x2cu), 0x0u);
    /* 0056bb2a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056bb2d: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
    /* 0056bb34: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056bb37: mov dword ptr [ecx + 0x1c], 0 */ W32((u32)(r_ecx+0x1cu), 0x0u);
    /* 0056bb3e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056bb41: mov dword ptr [edx + 0x64], 0 */ W32((u32)(r_edx+0x64u), 0x0u);
    /* 0056bb48: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056bb4b: mov dword ptr [eax + 0x68], 0 */ W32((u32)(r_eax+0x68u), 0x0u);
    /* 0056bb52: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056bb55: mov dword ptr [ecx + 0x6c], 0 */ W32((u32)(r_ecx+0x6cu), 0x0u);
    /* 0056bb5c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056bb5f: mov dword ptr [edx + 0x70], 0 */ W32((u32)(r_edx+0x70u), 0x0u);
    /* 0056bb66: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056bb69: mov dword ptr [eax + 0x74], 0 */ W32((u32)(r_eax+0x74u), 0x0u);
    /* 0056bb70: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056bb73: mov dword ptr [ecx + 0x78], 0 */ W32((u32)(r_ecx+0x78u), 0x0u);
    /* 0056bb7a: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056bb80: jmp 0x56bb8e */ goto L_0056bb8e;
L_0056bb82:; BB(0x0056bb82);
    /* 0056bb82: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0056bb86: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0056bb8a: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
L_0056bb8e:; BB(0x0056bb8e);
    /* 0056bb8e: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0056bb92: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056bb95: jge 0x56bba8 */ if ((fS==fO)) goto L_0056bba8;
L_0056bb97:; BB(0x0056bb97);
    /* 0056bb97: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0056bb9b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056bb9e: mov dword ptr [edx + ecx*4 + 0x7c], 0 */ W32((u32)(r_edx+r_ecx*4+0x7cu), 0x0u);
    /* 0056bba6: jmp 0x56bb82 */ goto L_0056bb82;
L_0056bba8:; BB(0x0056bba8);
    /* 0056bba8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056bbab: mov dword ptr [eax + 4], 0 */ W32((u32)(r_eax+0x4u), 0x0u);
    /* 0056bbb2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056bbb5: mov esp, ebp */ r_esp = r_ebp;
    /* 0056bbb7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056bbb8: ret  */ FN_RET(0x0056ba40); r_esp += 4; return;
}

void f_0056bbc0(void) /* RoadKillSlot::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056bbc0);
    /* 0056bbc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056bbc1: mov ebp, esp */ r_ebp = r_esp;
    /* 0056bbc3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0056bbc5: push 0x6a5d0b */ { u32 v = 0x6a5d0bu; r_esp -= 4; W32(r_esp, v); }
    /* 0056bbca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0056bbd0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056bbd1: sub esp, 0xec */ {  u32 a = r_esp; u32 b = 0xecu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056bbd7: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0056bbdc: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0056bbde: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056bbdf: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0056bbe2: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0056bbe8: mov dword ptr [ebp - 0xac], ecx */ W32((u32)(r_ebp+0xffffff54u), r_ecx);
    /* 0056bbee: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 0056bbf4: mov dword ptr [eax], 0x6ca2b0 */ W32((u32)(r_eax), 0x6ca2b0u);
    /* 0056bbfa: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056bc01: mov word ptr [ebp - 0x10], 0 */ W16((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0056bc07: jmp 0x56bc15 */ goto L_0056bc15;
L_0056bc09:; BB(0x0056bc09);
    /* 0056bc09: mov cx, word ptr [ebp - 0x10] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 0056bc0d: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0056bc11: mov word ptr [ebp - 0x10], cx */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_ecx);
L_0056bc15:; BB(0x0056bc15);
    /* 0056bc15: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056bc19: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056bc1c: jge 0x56bc80 */ if ((fS==fO)) goto L_0056bc80;
L_0056bc1e:; BB(0x0056bc1e);
    /* 0056bc1e: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056bc22: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 0056bc28: cmp dword ptr [ecx + eax*4 + 8], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056bc2d: je 0x56bc7e */ if (fZ) goto L_0056bc7e;
L_0056bc2f:; BB(0x0056bc2f);
    /* 0056bc2f: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056bc33: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 0056bc39: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 0056bc3d: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0056bc40: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056bc43: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0056bc46: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056bc4a: je 0x56bc62 */ if (fZ) goto L_0056bc62;
L_0056bc4c:; BB(0x0056bc4c);
    /* 0056bc4c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056bc4e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0056bc51: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0056bc53: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056bc56: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0056bc58: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56bc5au); call_ind(t); }
    /* 0056bc5a: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 0056bc60: jmp 0x56bc6c */ goto L_0056bc6c;
L_0056bc62:; BB(0x0056bc62);
    /* 0056bc62: mov dword ptr [ebp - 0xb0], 0 */ W32((u32)(r_ebp+0xffffff50u), 0x0u);
L_0056bc6c:; BB(0x0056bc6c);
    /* 0056bc6c: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056bc70: mov edx, dword ptr [ebp - 0xac] */ r_edx = R32((u32)(r_ebp+0xffffff54u));
    /* 0056bc76: mov dword ptr [edx + ecx*4 + 8], 0 */ W32((u32)(r_edx+r_ecx*4+0x8u), 0x0u);
L_0056bc7e:; BB(0x0056bc7e);
    /* 0056bc7e: jmp 0x56bc09 */ goto L_0056bc09;
L_0056bc80:; BB(0x0056bc80);
    /* 0056bc80: mov word ptr [ebp - 0x10], 0 */ W16((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0056bc86: jmp 0x56bc94 */ goto L_0056bc94;
L_0056bc88:; BB(0x0056bc88);
    /* 0056bc88: mov ax, word ptr [ebp - 0x10] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 0056bc8c: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0056bc90: mov word ptr [ebp - 0x10], ax */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_eax);
L_0056bc94:; BB(0x0056bc94);
    /* 0056bc94: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056bc98: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056bc9b: jge 0x56bd66 */ if ((fS==fO)) goto L_0056bd66;
L_0056bca1:; BB(0x0056bca1);
    /* 0056bca1: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056bca5: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 0056bcab: cmp dword ptr [eax + edx*4 + 0x34], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056bcb0: je 0x56bd01 */ if (fZ) goto L_0056bd01;
L_0056bcb2:; BB(0x0056bcb2);
    /* 0056bcb2: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056bcb6: mov edx, dword ptr [ebp - 0xac] */ r_edx = R32((u32)(r_ebp+0xffffff54u));
    /* 0056bcbc: mov eax, dword ptr [edx + ecx*4 + 0x34] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x34u));
    /* 0056bcc0: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0056bcc3: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0056bcc6: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0056bcc9: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056bccd: je 0x56bce5 */ if (fZ) goto L_0056bce5;
L_0056bccf:; BB(0x0056bccf);
    /* 0056bccf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056bcd1: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0056bcd4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0056bcd6: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0056bcd9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0056bcdb: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x56bcddu); call_ind(t); }
    /* 0056bcdd: mov dword ptr [ebp - 0xb4], eax */ W32((u32)(r_ebp+0xffffff4cu), r_eax);
    /* 0056bce3: jmp 0x56bcef */ goto L_0056bcef;
L_0056bce5:; BB(0x0056bce5);
    /* 0056bce5: mov dword ptr [ebp - 0xb4], 0 */ W32((u32)(r_ebp+0xffffff4cu), 0x0u);
L_0056bcef:; BB(0x0056bcef);
    /* 0056bcef: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056bcf3: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 0056bcf9: mov dword ptr [ecx + eax*4 + 0x34], 0 */ W32((u32)(r_ecx+r_eax*4+0x34u), 0x0u);
L_0056bd01:; BB(0x0056bd01);
    /* 0056bd01: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056bd05: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 0056bd0b: cmp dword ptr [eax + edx*4 + 0x44], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x44u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056bd10: je 0x56bd61 */ if (fZ) goto L_0056bd61;
L_0056bd12:; BB(0x0056bd12);
    /* 0056bd12: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056bd16: mov edx, dword ptr [ebp - 0xac] */ r_edx = R32((u32)(r_ebp+0xffffff54u));
    /* 0056bd1c: mov eax, dword ptr [edx + ecx*4 + 0x44] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x44u));
    /* 0056bd20: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0056bd23: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0056bd26: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0056bd29: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056bd2d: je 0x56bd45 */ if (fZ) goto L_0056bd45;
L_0056bd2f:; BB(0x0056bd2f);
    /* 0056bd2f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056bd31: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0056bd34: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0056bd36: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0056bd39: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0056bd3b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x56bd3du); call_ind(t); }
    /* 0056bd3d: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 0056bd43: jmp 0x56bd4f */ goto L_0056bd4f;
L_0056bd45:; BB(0x0056bd45);
    /* 0056bd45: mov dword ptr [ebp - 0xb8], 0 */ W32((u32)(r_ebp+0xffffff48u), 0x0u);
L_0056bd4f:; BB(0x0056bd4f);
    /* 0056bd4f: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056bd53: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 0056bd59: mov dword ptr [ecx + eax*4 + 0x44], 0 */ W32((u32)(r_ecx+r_eax*4+0x44u), 0x0u);
L_0056bd61:; BB(0x0056bd61);
    /* 0056bd61: jmp 0x56bc88 */ goto L_0056bc88;
L_0056bd66:; BB(0x0056bd66);
    /* 0056bd66: mov word ptr [ebp - 0x10], 0 */ W16((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0056bd6c: jmp 0x56bd7a */ goto L_0056bd7a;
L_0056bd6e:; BB(0x0056bd6e);
    /* 0056bd6e: mov dx, word ptr [ebp - 0x10] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 0056bd72: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0056bd76: mov word ptr [ebp - 0x10], dx */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_edx);
L_0056bd7a:; BB(0x0056bd7a);
    /* 0056bd7a: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056bd7e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056bd81: jge 0x56be4c */ if ((fS==fO)) goto L_0056be4c;
L_0056bd87:; BB(0x0056bd87);
    /* 0056bd87: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056bd8b: mov edx, dword ptr [ebp - 0xac] */ r_edx = R32((u32)(r_ebp+0xffffff54u));
    /* 0056bd91: cmp dword ptr [edx + ecx*4 + 0x54], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x54u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056bd96: je 0x56bde7 */ if (fZ) goto L_0056bde7;
L_0056bd98:; BB(0x0056bd98);
    /* 0056bd98: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056bd9c: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 0056bda2: mov edx, dword ptr [ecx + eax*4 + 0x54] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x54u));
    /* 0056bda6: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 0056bda9: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0056bdac: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0056bdaf: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056bdb3: je 0x56bdcb */ if (fZ) goto L_0056bdcb;
L_0056bdb5:; BB(0x0056bdb5);
    /* 0056bdb5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056bdb7: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0056bdba: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0056bdbc: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0056bdbf: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0056bdc1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56bdc3u); call_ind(t); }
    /* 0056bdc3: mov dword ptr [ebp - 0xbc], eax */ W32((u32)(r_ebp+0xffffff44u), r_eax);
    /* 0056bdc9: jmp 0x56bdd5 */ goto L_0056bdd5;
L_0056bdcb:; BB(0x0056bdcb);
    /* 0056bdcb: mov dword ptr [ebp - 0xbc], 0 */ W32((u32)(r_ebp+0xffffff44u), 0x0u);
L_0056bdd5:; BB(0x0056bdd5);
    /* 0056bdd5: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056bdd9: mov edx, dword ptr [ebp - 0xac] */ r_edx = R32((u32)(r_ebp+0xffffff54u));
    /* 0056bddf: mov dword ptr [edx + ecx*4 + 0x54], 0 */ W32((u32)(r_edx+r_ecx*4+0x54u), 0x0u);
L_0056bde7:; BB(0x0056bde7);
    /* 0056bde7: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056bdeb: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 0056bdf1: cmp dword ptr [ecx + eax*4 + 0x5c], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x5cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056bdf6: je 0x56be47 */ if (fZ) goto L_0056be47;
L_0056bdf8:; BB(0x0056bdf8);
    /* 0056bdf8: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056bdfc: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 0056be02: mov ecx, dword ptr [eax + edx*4 + 0x5c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x5cu));
    /* 0056be06: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 0056be09: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0056be0c: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 0056be0f: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056be13: je 0x56be2b */ if (fZ) goto L_0056be2b;
L_0056be15:; BB(0x0056be15);
    /* 0056be15: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056be17: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0056be1a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0056be1c: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0056be1f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0056be21: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56be23u); call_ind(t); }
    /* 0056be23: mov dword ptr [ebp - 0xc0], eax */ W32((u32)(r_ebp+0xffffff40u), r_eax);
    /* 0056be29: jmp 0x56be35 */ goto L_0056be35;
L_0056be2b:; BB(0x0056be2b);
    /* 0056be2b: mov dword ptr [ebp - 0xc0], 0 */ W32((u32)(r_ebp+0xffffff40u), 0x0u);
L_0056be35:; BB(0x0056be35);
    /* 0056be35: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056be39: mov edx, dword ptr [ebp - 0xac] */ r_edx = R32((u32)(r_ebp+0xffffff54u));
    /* 0056be3f: mov dword ptr [edx + ecx*4 + 0x5c], 0 */ W32((u32)(r_edx+r_ecx*4+0x5cu), 0x0u);
L_0056be47:; BB(0x0056be47);
    /* 0056be47: jmp 0x56bd6e */ goto L_0056bd6e;
L_0056be4c:; BB(0x0056be4c);
    /* 0056be4c: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 0056be52: cmp dword ptr [eax + 0x20], 0 */ {  u32 a = R32((u32)(r_eax+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056be56: je 0x56be9d */ if (fZ) goto L_0056be9d;
L_0056be58:; BB(0x0056be58);
    /* 0056be58: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 0056be5e: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0056be61: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 0056be64: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0056be67: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0056be6a: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056be6e: je 0x56be86 */ if (fZ) goto L_0056be86;
L_0056be70:; BB(0x0056be70);
    /* 0056be70: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056be72: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0056be75: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0056be77: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0056be7a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0056be7c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56be7eu); call_ind(t); }
    /* 0056be7e: mov dword ptr [ebp - 0xc4], eax */ W32((u32)(r_ebp+0xffffff3cu), r_eax);
    /* 0056be84: jmp 0x56be90 */ goto L_0056be90;
L_0056be86:; BB(0x0056be86);
    /* 0056be86: mov dword ptr [ebp - 0xc4], 0 */ W32((u32)(r_ebp+0xffffff3cu), 0x0u);
L_0056be90:; BB(0x0056be90);
    /* 0056be90: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 0056be96: mov dword ptr [ecx + 0x20], 0 */ W32((u32)(r_ecx+0x20u), 0x0u);
L_0056be9d:; BB(0x0056be9d);
    /* 0056be9d: mov edx, dword ptr [ebp - 0xac] */ r_edx = R32((u32)(r_ebp+0xffffff54u));
    /* 0056bea3: cmp dword ptr [edx + 0x28], 0 */ {  u32 a = R32((u32)(r_edx+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056bea7: je 0x56beee */ if (fZ) goto L_0056beee;
L_0056bea9:; BB(0x0056bea9);
    /* 0056bea9: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 0056beaf: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0056beb2: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 0056beb5: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0056beb8: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 0056bebb: cmp dword ptr [ebp - 0x44], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056bebf: je 0x56bed7 */ if (fZ) goto L_0056bed7;
L_0056bec1:; BB(0x0056bec1);
    /* 0056bec1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056bec3: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0056bec6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0056bec8: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0056becb: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0056becd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56becfu); call_ind(t); }
    /* 0056becf: mov dword ptr [ebp - 0xc8], eax */ W32((u32)(r_ebp+0xffffff38u), r_eax);
    /* 0056bed5: jmp 0x56bee1 */ goto L_0056bee1;
L_0056bed7:; BB(0x0056bed7);
    /* 0056bed7: mov dword ptr [ebp - 0xc8], 0 */ W32((u32)(r_ebp+0xffffff38u), 0x0u);
L_0056bee1:; BB(0x0056bee1);
    /* 0056bee1: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 0056bee7: mov dword ptr [ecx + 0x28], 0 */ W32((u32)(r_ecx+0x28u), 0x0u);
L_0056beee:; BB(0x0056beee);
    /* 0056beee: mov edx, dword ptr [ebp - 0xac] */ r_edx = R32((u32)(r_ebp+0xffffff54u));
    /* 0056bef4: cmp dword ptr [edx + 0x24], 0 */ {  u32 a = R32((u32)(r_edx+0x24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056bef8: je 0x56bf3f */ if (fZ) goto L_0056bf3f;
L_0056befa:; BB(0x0056befa);
    /* 0056befa: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 0056bf00: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0056bf03: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 0056bf06: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0056bf09: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 0056bf0c: cmp dword ptr [ebp - 0x4c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056bf10: je 0x56bf28 */ if (fZ) goto L_0056bf28;
L_0056bf12:; BB(0x0056bf12);
    /* 0056bf12: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056bf14: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0056bf17: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0056bf19: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0056bf1c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0056bf1e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56bf20u); call_ind(t); }
    /* 0056bf20: mov dword ptr [ebp - 0xcc], eax */ W32((u32)(r_ebp+0xffffff34u), r_eax);
    /* 0056bf26: jmp 0x56bf32 */ goto L_0056bf32;
L_0056bf28:; BB(0x0056bf28);
    /* 0056bf28: mov dword ptr [ebp - 0xcc], 0 */ W32((u32)(r_ebp+0xffffff34u), 0x0u);
L_0056bf32:; BB(0x0056bf32);
    /* 0056bf32: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 0056bf38: mov dword ptr [ecx + 0x24], 0 */ W32((u32)(r_ecx+0x24u), 0x0u);
L_0056bf3f:; BB(0x0056bf3f);
    /* 0056bf3f: mov edx, dword ptr [ebp - 0xac] */ r_edx = R32((u32)(r_ebp+0xffffff54u));
    /* 0056bf45: cmp dword ptr [edx + 0x2c], 0 */ {  u32 a = R32((u32)(r_edx+0x2cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056bf49: je 0x56bf90 */ if (fZ) goto L_0056bf90;
L_0056bf4b:; BB(0x0056bf4b);
    /* 0056bf4b: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 0056bf51: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0056bf54: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 0056bf57: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0056bf5a: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 0056bf5d: cmp dword ptr [ebp - 0x54], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056bf61: je 0x56bf79 */ if (fZ) goto L_0056bf79;
L_0056bf63:; BB(0x0056bf63);
    /* 0056bf63: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056bf65: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0056bf68: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0056bf6a: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0056bf6d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0056bf6f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56bf71u); call_ind(t); }
    /* 0056bf71: mov dword ptr [ebp - 0xd0], eax */ W32((u32)(r_ebp+0xffffff30u), r_eax);
    /* 0056bf77: jmp 0x56bf83 */ goto L_0056bf83;
L_0056bf79:; BB(0x0056bf79);
    /* 0056bf79: mov dword ptr [ebp - 0xd0], 0 */ W32((u32)(r_ebp+0xffffff30u), 0x0u);
L_0056bf83:; BB(0x0056bf83);
    /* 0056bf83: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 0056bf89: mov dword ptr [ecx + 0x2c], 0 */ W32((u32)(r_ecx+0x2cu), 0x0u);
L_0056bf90:; BB(0x0056bf90);
    /* 0056bf90: mov edx, dword ptr [ebp - 0xac] */ r_edx = R32((u32)(r_ebp+0xffffff54u));
    /* 0056bf96: cmp dword ptr [edx + 0x30], 0 */ {  u32 a = R32((u32)(r_edx+0x30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056bf9a: je 0x56bfe1 */ if (fZ) goto L_0056bfe1;
L_0056bf9c:; BB(0x0056bf9c);
    /* 0056bf9c: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 0056bfa2: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0056bfa5: mov dword ptr [ebp - 0x60], ecx */ W32((u32)(r_ebp+0xffffffa0u), r_ecx);
    /* 0056bfa8: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0056bfab: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 0056bfae: cmp dword ptr [ebp - 0x5c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056bfb2: je 0x56bfca */ if (fZ) goto L_0056bfca;
L_0056bfb4:; BB(0x0056bfb4);
    /* 0056bfb4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056bfb6: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 0056bfb9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0056bfbb: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0056bfbe: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0056bfc0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56bfc2u); call_ind(t); }
    /* 0056bfc2: mov dword ptr [ebp - 0xd4], eax */ W32((u32)(r_ebp+0xffffff2cu), r_eax);
    /* 0056bfc8: jmp 0x56bfd4 */ goto L_0056bfd4;
L_0056bfca:; BB(0x0056bfca);
    /* 0056bfca: mov dword ptr [ebp - 0xd4], 0 */ W32((u32)(r_ebp+0xffffff2cu), 0x0u);
L_0056bfd4:; BB(0x0056bfd4);
    /* 0056bfd4: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 0056bfda: mov dword ptr [ecx + 0x30], 0 */ W32((u32)(r_ecx+0x30u), 0x0u);
L_0056bfe1:; BB(0x0056bfe1);
    /* 0056bfe1: mov edx, dword ptr [ebp - 0xac] */ r_edx = R32((u32)(r_ebp+0xffffff54u));
    /* 0056bfe7: cmp dword ptr [edx + 0x1c], 0 */ {  u32 a = R32((u32)(r_edx+0x1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056bfeb: je 0x56c032 */ if (fZ) goto L_0056c032;
L_0056bfed:; BB(0x0056bfed);
    /* 0056bfed: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 0056bff3: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0056bff6: mov dword ptr [ebp - 0x68], ecx */ W32((u32)(r_ebp+0xffffff98u), r_ecx);
    /* 0056bff9: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 0056bffc: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 0056bfff: cmp dword ptr [ebp - 0x64], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff9cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056c003: je 0x56c01b */ if (fZ) goto L_0056c01b;
L_0056c005:; BB(0x0056c005);
    /* 0056c005: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056c007: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 0056c00a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0056c00c: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0056c00f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0056c011: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56c013u); call_ind(t); }
    /* 0056c013: mov dword ptr [ebp - 0xd8], eax */ W32((u32)(r_ebp+0xffffff28u), r_eax);
    /* 0056c019: jmp 0x56c025 */ goto L_0056c025;
L_0056c01b:; BB(0x0056c01b);
    /* 0056c01b: mov dword ptr [ebp - 0xd8], 0 */ W32((u32)(r_ebp+0xffffff28u), 0x0u);
L_0056c025:; BB(0x0056c025);
    /* 0056c025: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 0056c02b: mov dword ptr [ecx + 0x1c], 0 */ W32((u32)(r_ecx+0x1cu), 0x0u);
L_0056c032:; BB(0x0056c032);
    /* 0056c032: mov edx, dword ptr [ebp - 0xac] */ r_edx = R32((u32)(r_ebp+0xffffff54u));
    /* 0056c038: cmp dword ptr [edx + 0x64], 0 */ {  u32 a = R32((u32)(r_edx+0x64u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056c03c: je 0x56c083 */ if (fZ) goto L_0056c083;
L_0056c03e:; BB(0x0056c03e);
    /* 0056c03e: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 0056c044: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 0056c047: mov dword ptr [ebp - 0x70], ecx */ W32((u32)(r_ebp+0xffffff90u), r_ecx);
    /* 0056c04a: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 0056c04d: mov dword ptr [ebp - 0x6c], edx */ W32((u32)(r_ebp+0xffffff94u), r_edx);
    /* 0056c050: cmp dword ptr [ebp - 0x6c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff94u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056c054: je 0x56c06c */ if (fZ) goto L_0056c06c;
L_0056c056:; BB(0x0056c056);
    /* 0056c056: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056c058: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 0056c05b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0056c05d: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0056c060: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0056c062: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56c064u); call_ind(t); }
    /* 0056c064: mov dword ptr [ebp - 0xdc], eax */ W32((u32)(r_ebp+0xffffff24u), r_eax);
    /* 0056c06a: jmp 0x56c076 */ goto L_0056c076;
L_0056c06c:; BB(0x0056c06c);
    /* 0056c06c: mov dword ptr [ebp - 0xdc], 0 */ W32((u32)(r_ebp+0xffffff24u), 0x0u);
L_0056c076:; BB(0x0056c076);
    /* 0056c076: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 0056c07c: mov dword ptr [ecx + 0x64], 0 */ W32((u32)(r_ecx+0x64u), 0x0u);
L_0056c083:; BB(0x0056c083);
    /* 0056c083: mov edx, dword ptr [ebp - 0xac] */ r_edx = R32((u32)(r_ebp+0xffffff54u));
    /* 0056c089: cmp dword ptr [edx + 0x68], 0 */ {  u32 a = R32((u32)(r_edx+0x68u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056c08d: je 0x56c0d4 */ if (fZ) goto L_0056c0d4;
L_0056c08f:; BB(0x0056c08f);
    /* 0056c08f: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 0056c095: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 0056c098: mov dword ptr [ebp - 0x78], ecx */ W32((u32)(r_ebp+0xffffff88u), r_ecx);
    /* 0056c09b: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 0056c09e: mov dword ptr [ebp - 0x74], edx */ W32((u32)(r_ebp+0xffffff8cu), r_edx);
    /* 0056c0a1: cmp dword ptr [ebp - 0x74], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056c0a5: je 0x56c0bd */ if (fZ) goto L_0056c0bd;
L_0056c0a7:; BB(0x0056c0a7);
    /* 0056c0a7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056c0a9: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0056c0ac: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0056c0ae: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0056c0b1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0056c0b3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56c0b5u); call_ind(t); }
    /* 0056c0b5: mov dword ptr [ebp - 0xe0], eax */ W32((u32)(r_ebp+0xffffff20u), r_eax);
    /* 0056c0bb: jmp 0x56c0c7 */ goto L_0056c0c7;
L_0056c0bd:; BB(0x0056c0bd);
    /* 0056c0bd: mov dword ptr [ebp - 0xe0], 0 */ W32((u32)(r_ebp+0xffffff20u), 0x0u);
L_0056c0c7:; BB(0x0056c0c7);
    /* 0056c0c7: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 0056c0cd: mov dword ptr [ecx + 0x68], 0 */ W32((u32)(r_ecx+0x68u), 0x0u);
L_0056c0d4:; BB(0x0056c0d4);
    /* 0056c0d4: mov edx, dword ptr [ebp - 0xac] */ r_edx = R32((u32)(r_ebp+0xffffff54u));
    /* 0056c0da: cmp dword ptr [edx + 0x6c], 0 */ {  u32 a = R32((u32)(r_edx+0x6cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056c0de: je 0x56c125 */ if (fZ) goto L_0056c125;
L_0056c0e0:; BB(0x0056c0e0);
    /* 0056c0e0: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 0056c0e6: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 0056c0e9: mov dword ptr [ebp - 0x80], ecx */ W32((u32)(r_ebp+0xffffff80u), r_ecx);
    /* 0056c0ec: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 0056c0ef: mov dword ptr [ebp - 0x7c], edx */ W32((u32)(r_ebp+0xffffff84u), r_edx);
    /* 0056c0f2: cmp dword ptr [ebp - 0x7c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff84u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056c0f6: je 0x56c10e */ if (fZ) goto L_0056c10e;
L_0056c0f8:; BB(0x0056c0f8);
    /* 0056c0f8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056c0fa: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 0056c0fd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0056c0ff: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 0056c102: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0056c104: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56c106u); call_ind(t); }
    /* 0056c106: mov dword ptr [ebp - 0xe4], eax */ W32((u32)(r_ebp+0xffffff1cu), r_eax);
    /* 0056c10c: jmp 0x56c118 */ goto L_0056c118;
L_0056c10e:; BB(0x0056c10e);
    /* 0056c10e: mov dword ptr [ebp - 0xe4], 0 */ W32((u32)(r_ebp+0xffffff1cu), 0x0u);
L_0056c118:; BB(0x0056c118);
    /* 0056c118: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 0056c11e: mov dword ptr [ecx + 0x6c], 0 */ W32((u32)(r_ecx+0x6cu), 0x0u);
L_0056c125:; BB(0x0056c125);
    /* 0056c125: mov edx, dword ptr [ebp - 0xac] */ r_edx = R32((u32)(r_ebp+0xffffff54u));
    /* 0056c12b: cmp dword ptr [edx + 0x70], 0 */ {  u32 a = R32((u32)(r_edx+0x70u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056c12f: je 0x56c188 */ if (fZ) goto L_0056c188;
L_0056c131:; BB(0x0056c131);
    /* 0056c131: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 0056c137: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 0056c13a: mov dword ptr [ebp - 0x88], ecx */ W32((u32)(r_ebp+0xffffff78u), r_ecx);
    /* 0056c140: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0056c146: mov dword ptr [ebp - 0x84], edx */ W32((u32)(r_ebp+0xffffff7cu), r_edx);
    /* 0056c14c: cmp dword ptr [ebp - 0x84], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff7cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056c153: je 0x56c171 */ if (fZ) goto L_0056c171;
L_0056c155:; BB(0x0056c155);
    /* 0056c155: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056c157: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 0056c15d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0056c15f: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0056c165: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0056c167: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56c169u); call_ind(t); }
    /* 0056c169: mov dword ptr [ebp - 0xe8], eax */ W32((u32)(r_ebp+0xffffff18u), r_eax);
    /* 0056c16f: jmp 0x56c17b */ goto L_0056c17b;
L_0056c171:; BB(0x0056c171);
    /* 0056c171: mov dword ptr [ebp - 0xe8], 0 */ W32((u32)(r_ebp+0xffffff18u), 0x0u);
L_0056c17b:; BB(0x0056c17b);
    /* 0056c17b: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 0056c181: mov dword ptr [ecx + 0x70], 0 */ W32((u32)(r_ecx+0x70u), 0x0u);
L_0056c188:; BB(0x0056c188);
    /* 0056c188: mov edx, dword ptr [ebp - 0xac] */ r_edx = R32((u32)(r_ebp+0xffffff54u));
    /* 0056c18e: cmp dword ptr [edx + 0x74], 0 */ {  u32 a = R32((u32)(r_edx+0x74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056c192: je 0x56c1eb */ if (fZ) goto L_0056c1eb;
L_0056c194:; BB(0x0056c194);
    /* 0056c194: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 0056c19a: mov ecx, dword ptr [eax + 0x74] */ r_ecx = R32((u32)(r_eax+0x74u));
    /* 0056c19d: mov dword ptr [ebp - 0x90], ecx */ W32((u32)(r_ebp+0xffffff70u), r_ecx);
    /* 0056c1a3: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 0056c1a9: mov dword ptr [ebp - 0x8c], edx */ W32((u32)(r_ebp+0xffffff74u), r_edx);
    /* 0056c1af: cmp dword ptr [ebp - 0x8c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056c1b6: je 0x56c1d4 */ if (fZ) goto L_0056c1d4;
L_0056c1b8:; BB(0x0056c1b8);
    /* 0056c1b8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056c1ba: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 0056c1c0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0056c1c2: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 0056c1c8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0056c1ca: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56c1ccu); call_ind(t); }
    /* 0056c1cc: mov dword ptr [ebp - 0xec], eax */ W32((u32)(r_ebp+0xffffff14u), r_eax);
    /* 0056c1d2: jmp 0x56c1de */ goto L_0056c1de;
L_0056c1d4:; BB(0x0056c1d4);
    /* 0056c1d4: mov dword ptr [ebp - 0xec], 0 */ W32((u32)(r_ebp+0xffffff14u), 0x0u);
L_0056c1de:; BB(0x0056c1de);
    /* 0056c1de: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 0056c1e4: mov dword ptr [ecx + 0x74], 0 */ W32((u32)(r_ecx+0x74u), 0x0u);
L_0056c1eb:; BB(0x0056c1eb);
    /* 0056c1eb: mov edx, dword ptr [ebp - 0xac] */ r_edx = R32((u32)(r_ebp+0xffffff54u));
    /* 0056c1f1: cmp dword ptr [edx + 0x78], 0 */ {  u32 a = R32((u32)(r_edx+0x78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056c1f5: je 0x56c24e */ if (fZ) goto L_0056c24e;
L_0056c1f7:; BB(0x0056c1f7);
    /* 0056c1f7: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 0056c1fd: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 0056c200: mov dword ptr [ebp - 0x98], ecx */ W32((u32)(r_ebp+0xffffff68u), r_ecx);
    /* 0056c206: mov edx, dword ptr [ebp - 0x98] */ r_edx = R32((u32)(r_ebp+0xffffff68u));
    /* 0056c20c: mov dword ptr [ebp - 0x94], edx */ W32((u32)(r_ebp+0xffffff6cu), r_edx);
    /* 0056c212: cmp dword ptr [ebp - 0x94], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff6cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056c219: je 0x56c237 */ if (fZ) goto L_0056c237;
L_0056c21b:; BB(0x0056c21b);
    /* 0056c21b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056c21d: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 0056c223: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0056c225: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 0056c22b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0056c22d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56c22fu); call_ind(t); }
    /* 0056c22f: mov dword ptr [ebp - 0xf0], eax */ W32((u32)(r_ebp+0xffffff10u), r_eax);
    /* 0056c235: jmp 0x56c241 */ goto L_0056c241;
L_0056c237:; BB(0x0056c237);
    /* 0056c237: mov dword ptr [ebp - 0xf0], 0 */ W32((u32)(r_ebp+0xffffff10u), 0x0u);
L_0056c241:; BB(0x0056c241);
    /* 0056c241: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 0056c247: mov dword ptr [ecx + 0x78], 0 */ W32((u32)(r_ecx+0x78u), 0x0u);
L_0056c24e:; BB(0x0056c24e);
    /* 0056c24e: mov word ptr [ebp - 0x10], 0 */ W16((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0056c254: jmp 0x56c262 */ goto L_0056c262;
L_0056c256:; BB(0x0056c256);
    /* 0056c256: mov dx, word ptr [ebp - 0x10] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 0056c25a: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0056c25e: mov word ptr [ebp - 0x10], dx */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_edx);
L_0056c262:; BB(0x0056c262);
    /* 0056c262: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056c266: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056c269: jge 0x56c2e2 */ if ((fS==fO)) goto L_0056c2e2;
L_0056c26b:; BB(0x0056c26b);
    /* 0056c26b: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056c26f: mov edx, dword ptr [ebp - 0xac] */ r_edx = R32((u32)(r_ebp+0xffffff54u));
    /* 0056c275: cmp dword ptr [edx + ecx*4 + 0x7c], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x7cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056c27a: je 0x56c2dd */ if (fZ) goto L_0056c2dd;
L_0056c27c:; BB(0x0056c27c);
    /* 0056c27c: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056c280: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 0056c286: mov edx, dword ptr [ecx + eax*4 + 0x7c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x7cu));
    /* 0056c28a: mov dword ptr [ebp - 0xa0], edx */ W32((u32)(r_ebp+0xffffff60u), r_edx);
    /* 0056c290: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 0056c296: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
    /* 0056c29c: cmp dword ptr [ebp - 0x9c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff64u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056c2a3: je 0x56c2c1 */ if (fZ) goto L_0056c2c1;
L_0056c2a5:; BB(0x0056c2a5);
    /* 0056c2a5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056c2a7: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 0056c2ad: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0056c2af: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 0056c2b5: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0056c2b7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56c2b9u); call_ind(t); }
    /* 0056c2b9: mov dword ptr [ebp - 0xf4], eax */ W32((u32)(r_ebp+0xffffff0cu), r_eax);
    /* 0056c2bf: jmp 0x56c2cb */ goto L_0056c2cb;
L_0056c2c1:; BB(0x0056c2c1);
    /* 0056c2c1: mov dword ptr [ebp - 0xf4], 0 */ W32((u32)(r_ebp+0xffffff0cu), 0x0u);
L_0056c2cb:; BB(0x0056c2cb);
    /* 0056c2cb: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056c2cf: mov edx, dword ptr [ebp - 0xac] */ r_edx = R32((u32)(r_ebp+0xffffff54u));
    /* 0056c2d5: mov dword ptr [edx + ecx*4 + 0x7c], 0 */ W32((u32)(r_edx+r_ecx*4+0x7cu), 0x0u);
L_0056c2dd:; BB(0x0056c2dd);
    /* 0056c2dd: jmp 0x56c256 */ goto L_0056c256;
L_0056c2e2:; BB(0x0056c2e2);
    /* 0056c2e2: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 0056c2e8: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056c2ec: je 0x56c345 */ if (fZ) goto L_0056c345;
L_0056c2ee:; BB(0x0056c2ee);
    /* 0056c2ee: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 0056c2f4: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0056c2f7: mov dword ptr [ebp - 0xa8], edx */ W32((u32)(r_ebp+0xffffff58u), r_edx);
    /* 0056c2fd: mov eax, dword ptr [ebp - 0xa8] */ r_eax = R32((u32)(r_ebp+0xffffff58u));
    /* 0056c303: mov dword ptr [ebp - 0xa4], eax */ W32((u32)(r_ebp+0xffffff5cu), r_eax);
    /* 0056c309: cmp dword ptr [ebp - 0xa4], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff5cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056c310: je 0x56c32e */ if (fZ) goto L_0056c32e;
L_0056c312:; BB(0x0056c312);
    /* 0056c312: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056c314: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0056c31a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0056c31c: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0056c322: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0056c324: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56c326u); call_ind(t); }
    /* 0056c326: mov dword ptr [ebp - 0xf8], eax */ W32((u32)(r_ebp+0xffffff08u), r_eax);
    /* 0056c32c: jmp 0x56c338 */ goto L_0056c338;
L_0056c32e:; BB(0x0056c32e);
    /* 0056c32e: mov dword ptr [ebp - 0xf8], 0 */ W32((u32)(r_ebp+0xffffff08u), 0x0u);
L_0056c338:; BB(0x0056c338);
    /* 0056c338: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 0056c33e: mov dword ptr [ecx + 4], 0 */ W32((u32)(r_ecx+0x4u), 0x0u);
L_0056c345:; BB(0x0056c345);
    /* 0056c345: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056c34c: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 0056c352: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x56c357u); f_005e9e40();
    /* 0056c357: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056c35a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0056c361: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0056c362: mov esp, ebp */ r_esp = r_ebp;
    /* 0056c364: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056c365: ret  */ FN_RET(0x0056bbc0); r_esp += 4; return;
}

void f_0056d9d0(void) /* roadkillslot::func_0056d9d0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056d9d0);
    /* 0056d9d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056d9d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0056d9d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056d9d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0056d9d7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056d9da: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0056d9e0: mov edx, dword ptr [ecx + 0x4f10] */ r_edx = R32((u32)(r_ecx+0x4f10u));
    /* 0056d9e6: mov dword ptr [eax + 0x9c], edx */ W32((u32)(r_eax+0x9cu), r_edx);
    /* 0056d9ec: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056d9ef: cmp dword ptr [eax + 0x9c], 0 */ {  u32 a = R32((u32)(r_eax+0x9cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056d9f6: jl 0x56da04 */ if ((fS!=fO)) goto L_0056da04;
L_0056d9f8:; BB(0x0056d9f8);
    /* 0056d9f8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056d9fb: cmp dword ptr [ecx + 0x9c], 0xb */ {  u32 a = R32((u32)(r_ecx+0x9cu)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056da02: jle 0x56da2c */ if ((fZ||fS!=fO)) goto L_0056da2c;
L_0056da04:; BB(0x0056da04);
    /* 0056da04: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0056da06: jne 0x56da1f */ if (!fZ) goto L_0056da1f;
L_0056da08:; BB(0x0056da08);
    /* 0056da08: push 0x151 */ { u32 v = 0x151u; r_esp -= 4; W32(r_esp, v); }
    /* 0056da0d: push 0x6ca2b4 */ { u32 v = 0x6ca2b4u; r_esp -= 4; W32(r_esp, v); }
    /* 0056da12: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0056da17: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x56da1cu); f_005e9f20();
    /* 0056da1c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0056da1f:; BB(0x0056da1f);
    /* 0056da1f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056da22: mov dword ptr [ecx + 0x9c], 3 */ W32((u32)(r_ecx+0x9cu), 0x3u);
L_0056da2c:; BB(0x0056da2c);
    /* 0056da2c: mov esp, ebp */ r_esp = r_ebp;
    /* 0056da2e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056da2f: ret  */ FN_RET(0x0056d9d0); r_esp += 4; return;
}

void f_0056da30(void) /* roadkillslot::func_0056da30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056da30);
    /* 0056da30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056da31: mov ebp, esp */ r_ebp = r_esp;
    /* 0056da33: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056da36: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0056da39: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056da3b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056da3d: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x56da42u); f_0064c8a0();
    /* 0056da42: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056da45: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0056da48: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0056da4b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056da4e: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0056da51: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056da54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0056da57: cmp dword ptr [ebp + 0xc], 0x3b9ac9ff */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x3b9ac9ffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056da5e: jle 0x56da77 */ if ((fZ||fS!=fO)) goto L_0056da77;
L_0056da60:; BB(0x0056da60);
    /* 0056da60: push 0x15a */ { u32 v = 0x15au; r_esp -= 4; W32(r_esp, v); }
    /* 0056da65: push 0x6ca2b4 */ { u32 v = 0x6ca2b4u; r_esp -= 4; W32(r_esp, v); }
    /* 0056da6a: push 0x6ca2d0 */ { u32 v = 0x6ca2d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056da6f: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x56da74u); f_005e9f20();
    /* 0056da74: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0056da77:; BB(0x0056da77);
    /* 0056da77: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0056da7a: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 0056da80: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0056da83: cmp dword ptr [ebp - 0x18], 0xb */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0056da87: ja 0x56dc0c */ if ((!fC&&!fZ)) goto L_0056dc0c;
L_0056da8d:; BB(0x0056da8d);
    /* 0056da8d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056da90: jmp dword ptr [edx*4 + 0x56dc24] */ { u32 t = R32((u32)(r_edx*4+0x56dc24u)); switch (t) { case 0x56da97u: goto L_0056da97; case 0x56dabbu: goto L_0056dabb; case 0x56dadfu: goto L_0056dadf; case 0x56db09u: goto L_0056db09; case 0x56db14u: goto L_0056db14; case 0x56db34u: goto L_0056db34; case 0x56db54u: goto L_0056db54; case 0x56db74u: goto L_0056db74; case 0x56db91u: goto L_0056db91; case 0x56dbaeu: goto L_0056dbae; case 0x56dbceu: goto L_0056dbce; case 0x56dbeeu: goto L_0056dbee; default: UNSUP(0x0056da90, "jump table entry is not a known target"); } }
L_0056da97:; BB(0x0056da97);
    /* 0056da97: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0056da9a: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0056da9b: mov ecx, 0x14 */ r_ecx = 0x14u;
    /* 0056daa0: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0056daa0, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0056daa0, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0056daa2: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0056daa5: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0056daa8: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0056daa9: mov ecx, 0x14 */ r_ecx = 0x14u;
    /* 0056daae: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0056daae, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0056daae, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0056dab0: imul edx, edx, 5 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x5u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0056dab3: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0056dab6: jmp 0x56dc0c */ goto L_0056dc0c;
L_0056dabb:; BB(0x0056dabb);
    /* 0056dabb: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0056dabe: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0056dabf: mov ecx, 0xa */ r_ecx = 0xau;
    /* 0056dac4: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0056dac4, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0056dac4, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0056dac6: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0056dac9: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0056dacc: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0056dacd: mov ecx, 0xa */ r_ecx = 0xau;
    /* 0056dad2: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0056dad2, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0056dad2, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0056dad4: imul edx, edx, 0xa */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xau; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0056dad7: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0056dada: jmp 0x56dc0c */ goto L_0056dc0c;
L_0056dadf:; BB(0x0056dadf);
    /* 0056dadf: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0056dae2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0056dae3: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0056dae6: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056dae8: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0056daeb: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0056daee: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0056daf1: and edx, 0x80000003 */ {  u32 a = r_edx; u32 b = 0x80000003u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fS = ((r >> 31) & 1); }
    /* 0056daf7: jns 0x56dafe */ if (!fS) goto L_0056dafe;
L_0056daf9:; BB(0x0056daf9);
    /* 0056daf9: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0056dafa: or edx, 0xfffffffc */ {  u32 a = r_edx; u32 b = 0xfffffffcu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0056dafd: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_0056dafe:; BB(0x0056dafe);
    /* 0056dafe: imul edx, edx, 0x19 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x19u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0056db01: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0056db04: jmp 0x56dc0c */ goto L_0056dc0c;
L_0056db09:; BB(0x0056db09);
    /* 0056db09: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0056db0c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0056db0f: jmp 0x56dc0c */ goto L_0056dc0c;
L_0056db14:; BB(0x0056db14);
    /* 0056db14: cmp dword ptr [ebp + 0xc], 0xbebc200 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xbebc200u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056db1b: jl 0x56db26 */ if ((fS!=fO)) goto L_0056db26;
L_0056db1d:; BB(0x0056db1d);
    /* 0056db1d: mov dword ptr [ebp - 8], 0x3b9aca00 */ W32((u32)(r_ebp+0xfffffff8u), 0x3b9aca00u);
    /* 0056db24: jmp 0x56db2f */ goto L_0056db2f;
L_0056db26:; BB(0x0056db26);
    /* 0056db26: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0056db29: imul ecx, ecx, 5 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x5u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0056db2c: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0056db2f:; BB(0x0056db2f);
    /* 0056db2f: jmp 0x56dc0c */ goto L_0056dc0c;
L_0056db34:; BB(0x0056db34);
    /* 0056db34: cmp dword ptr [ebp + 0xc], 0x5f5e100 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x5f5e100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056db3b: jl 0x56db46 */ if ((fS!=fO)) goto L_0056db46;
L_0056db3d:; BB(0x0056db3d);
    /* 0056db3d: mov dword ptr [ebp - 8], 0x3b9aca00 */ W32((u32)(r_ebp+0xfffffff8u), 0x3b9aca00u);
    /* 0056db44: jmp 0x56db4f */ goto L_0056db4f;
L_0056db46:; BB(0x0056db46);
    /* 0056db46: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0056db49: imul edx, edx, 0xa */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xau; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0056db4c: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0056db4f:; BB(0x0056db4f);
    /* 0056db4f: jmp 0x56dc0c */ goto L_0056dc0c;
L_0056db54:; BB(0x0056db54);
    /* 0056db54: cmp dword ptr [ebp + 0xc], 0x2625a00 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x2625a00u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056db5b: jl 0x56db66 */ if ((fS!=fO)) goto L_0056db66;
L_0056db5d:; BB(0x0056db5d);
    /* 0056db5d: mov dword ptr [ebp - 8], 0x3b9aca00 */ W32((u32)(r_ebp+0xfffffff8u), 0x3b9aca00u);
    /* 0056db64: jmp 0x56db6f */ goto L_0056db6f;
L_0056db66:; BB(0x0056db66);
    /* 0056db66: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0056db69: imul eax, eax, 0x19 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x19u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0056db6c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0056db6f:; BB(0x0056db6f);
    /* 0056db6f: jmp 0x56dc0c */ goto L_0056dc0c;
L_0056db74:; BB(0x0056db74);
    /* 0056db74: cmp dword ptr [ebp + 0xc], 0x1312d00 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x1312d00u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056db7b: jl 0x56db86 */ if ((fS!=fO)) goto L_0056db86;
L_0056db7d:; BB(0x0056db7d);
    /* 0056db7d: mov dword ptr [ebp - 8], 0x3b9aca00 */ W32((u32)(r_ebp+0xfffffff8u), 0x3b9aca00u);
    /* 0056db84: jmp 0x56db8f */ goto L_0056db8f;
L_0056db86:; BB(0x0056db86);
    /* 0056db86: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0056db89: imul ecx, ecx, 0x32 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x32u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0056db8c: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0056db8f:; BB(0x0056db8f);
    /* 0056db8f: jmp 0x56dc0c */ goto L_0056dc0c;
L_0056db91:; BB(0x0056db91);
    /* 0056db91: cmp dword ptr [ebp + 0xc], 0x989680 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x989680u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056db98: jl 0x56dba3 */ if ((fS!=fO)) goto L_0056dba3;
L_0056db9a:; BB(0x0056db9a);
    /* 0056db9a: mov dword ptr [ebp - 8], 0x3b9aca00 */ W32((u32)(r_ebp+0xfffffff8u), 0x3b9aca00u);
    /* 0056dba1: jmp 0x56dbac */ goto L_0056dbac;
L_0056dba3:; BB(0x0056dba3);
    /* 0056dba3: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0056dba6: imul edx, edx, 0x64 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x64u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0056dba9: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0056dbac:; BB(0x0056dbac);
    /* 0056dbac: jmp 0x56dc0c */ goto L_0056dc0c;
L_0056dbae:; BB(0x0056dbae);
    /* 0056dbae: cmp dword ptr [ebp + 0xc], 0x989680 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x989680u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056dbb5: jl 0x56dbc0 */ if ((fS!=fO)) goto L_0056dbc0;
L_0056dbb7:; BB(0x0056dbb7);
    /* 0056dbb7: mov dword ptr [ebp - 8], 0x3b9aca00 */ W32((u32)(r_ebp+0xfffffff8u), 0x3b9aca00u);
    /* 0056dbbe: jmp 0x56dbcc */ goto L_0056dbcc;
L_0056dbc0:; BB(0x0056dbc0);
    /* 0056dbc0: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0056dbc3: imul eax, eax, 0xfa */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xfau; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0056dbc9: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0056dbcc:; BB(0x0056dbcc);
    /* 0056dbcc: jmp 0x56dc0c */ goto L_0056dc0c;
L_0056dbce:; BB(0x0056dbce);
    /* 0056dbce: cmp dword ptr [ebp + 0xc], 0x1312d00 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x1312d00u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056dbd5: jl 0x56dbe0 */ if ((fS!=fO)) goto L_0056dbe0;
L_0056dbd7:; BB(0x0056dbd7);
    /* 0056dbd7: mov dword ptr [ebp - 8], 0x3b9aca00 */ W32((u32)(r_ebp+0xfffffff8u), 0x3b9aca00u);
    /* 0056dbde: jmp 0x56dbec */ goto L_0056dbec;
L_0056dbe0:; BB(0x0056dbe0);
    /* 0056dbe0: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0056dbe3: imul ecx, ecx, 0x1f4 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x1f4u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0056dbe9: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0056dbec:; BB(0x0056dbec);
    /* 0056dbec: jmp 0x56dc0c */ goto L_0056dc0c;
L_0056dbee:; BB(0x0056dbee);
    /* 0056dbee: cmp dword ptr [ebp + 0xc], 0xf4240 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xf4240u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056dbf5: jl 0x56dc00 */ if ((fS!=fO)) goto L_0056dc00;
L_0056dbf7:; BB(0x0056dbf7);
    /* 0056dbf7: mov dword ptr [ebp - 8], 0x3b9aca00 */ W32((u32)(r_ebp+0xfffffff8u), 0x3b9aca00u);
    /* 0056dbfe: jmp 0x56dc0c */ goto L_0056dc0c;
L_0056dc00:; BB(0x0056dc00);
    /* 0056dc00: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0056dc03: imul edx, edx, 0x3e8 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x3e8u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0056dc09: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0056dc0c:; BB(0x0056dc0c);
    /* 0056dc0c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0056dc0f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056dc12: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0056dc14: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056dc17: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0056dc1a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0056dc1d: mov esp, ebp */ r_esp = r_ebp;
    /* 0056dc1f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056dc20: ret 8 */ FN_RET(0x0056da30); r_esp += 12; return;
}

void f_0056dc60(void) /* roadkillslot::func_0056dc60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056dc60);
    /* 0056dc60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056dc61: mov ebp, esp */ r_ebp = r_esp;
    /* 0056dc63: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056dc66: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0056dc69: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056dc70: cmp dword ptr [ebp + 8], 0x3b9aca00 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3b9aca00u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056dc77: jle 0x56dc90 */ if ((fZ||fS!=fO)) goto L_0056dc90;
L_0056dc79:; BB(0x0056dc79);
    /* 0056dc79: push 0x1a7 */ { u32 v = 0x1a7u; r_esp -= 4; W32(r_esp, v); }
    /* 0056dc7e: push 0x6ca2b4 */ { u32 v = 0x6ca2b4u; r_esp -= 4; W32(r_esp, v); }
    /* 0056dc83: push 0x6ca2f4 */ { u32 v = 0x6ca2f4u; r_esp -= 4; W32(r_esp, v); }
    /* 0056dc88: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x56dc8du); f_005e9f20();
    /* 0056dc8d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0056dc90:; BB(0x0056dc90);
    /* 0056dc90: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056dc93: mov edx, dword ptr [ecx + 0x9c] */ r_edx = R32((u32)(r_ecx+0x9cu));
    /* 0056dc99: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0056dc9c: cmp dword ptr [ebp - 0xc], 0xb */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0056dca0: ja 0x56dddb */ if ((!fC&&!fZ)) goto L_0056dddb;
L_0056dca6:; BB(0x0056dca6);
    /* 0056dca6: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056dca9: jmp dword ptr [eax*4 + 0x56dde4] */ { u32 t = R32((u32)(r_eax*4+0x56dde4u)); switch (t) { case 0x56dcb0u: goto L_0056dcb0; case 0x56dce1u: goto L_0056dce1; case 0x56dd12u: goto L_0056dd12; case 0x56dd43u: goto L_0056dd43; case 0x56dd5du: goto L_0056dd5d; case 0x56dd6du: goto L_0056dd6d; case 0x56dd7du: goto L_0056dd7d; case 0x56dd8du: goto L_0056dd8d; case 0x56dd9du: goto L_0056dd9d; case 0x56ddadu: goto L_0056ddad; case 0x56ddbdu: goto L_0056ddbd; case 0x56ddcdu: goto L_0056ddcd; default: UNSUP(0x0056dca9, "jump table entry is not a known target"); } }
L_0056dcb0:; BB(0x0056dcb0);
    /* 0056dcb0: cmp dword ptr [ebp + 8], 0x2faf07f */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x2faf07fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056dcb7: jle 0x56dcc2 */ if ((fZ||fS!=fO)) goto L_0056dcc2;
L_0056dcb9:; BB(0x0056dcb9);
    /* 0056dcb9: mov dword ptr [ebp - 4], 0x3b9ac9ff */ W32((u32)(r_ebp+0xfffffffcu), 0x3b9ac9ffu);
    /* 0056dcc0: jmp 0x56dcdc */ goto L_0056dcdc;
L_0056dcc2:; BB(0x0056dcc2);
    /* 0056dcc2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0056dcc5: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0056dcc8: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0056dccb: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0056dcce: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0056dccf: mov ecx, 5 */ r_ecx = 0x5u;
    /* 0056dcd4: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0056dcd4, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0056dcd4, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0056dcd6: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056dcd9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0056dcdc:; BB(0x0056dcdc);
    /* 0056dcdc: jmp 0x56dddb */ goto L_0056dddb;
L_0056dce1:; BB(0x0056dce1);
    /* 0056dce1: cmp dword ptr [ebp + 8], 0x5f5e0ff */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x5f5e0ffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056dce8: jle 0x56dcf3 */ if ((fZ||fS!=fO)) goto L_0056dcf3;
L_0056dcea:; BB(0x0056dcea);
    /* 0056dcea: mov dword ptr [ebp - 4], 0x3b9ac9ff */ W32((u32)(r_ebp+0xfffffffcu), 0x3b9ac9ffu);
    /* 0056dcf1: jmp 0x56dd0d */ goto L_0056dd0d;
L_0056dcf3:; BB(0x0056dcf3);
    /* 0056dcf3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0056dcf6: imul edx, edx, 0xa */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xau; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0056dcf9: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0056dcfc: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0056dcff: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0056dd00: mov ecx, 0xa */ r_ecx = 0xau;
    /* 0056dd05: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0056dd05, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0056dd05, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0056dd07: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056dd0a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0056dd0d:; BB(0x0056dd0d);
    /* 0056dd0d: jmp 0x56dddb */ goto L_0056dddb;
L_0056dd12:; BB(0x0056dd12);
    /* 0056dd12: cmp dword ptr [ebp + 8], 0xee6b27f */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xee6b27fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056dd19: jle 0x56dd24 */ if ((fZ||fS!=fO)) goto L_0056dd24;
L_0056dd1b:; BB(0x0056dd1b);
    /* 0056dd1b: mov dword ptr [ebp - 4], 0x3b9ac9ff */ W32((u32)(r_ebp+0xfffffffcu), 0x3b9ac9ffu);
    /* 0056dd22: jmp 0x56dd3e */ goto L_0056dd3e;
L_0056dd24:; BB(0x0056dd24);
    /* 0056dd24: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0056dd27: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0056dd2a: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0056dd2d: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0056dd30: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0056dd31: mov ecx, 0x19 */ r_ecx = 0x19u;
    /* 0056dd36: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0056dd36, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0056dd36, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0056dd38: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056dd3b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0056dd3e:; BB(0x0056dd3e);
    /* 0056dd3e: jmp 0x56dddb */ goto L_0056dddb;
L_0056dd43:; BB(0x0056dd43);
    /* 0056dd43: cmp dword ptr [ebp + 8], 0x3b9ac9ff */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3b9ac9ffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056dd4a: jle 0x56dd55 */ if ((fZ||fS!=fO)) goto L_0056dd55;
L_0056dd4c:; BB(0x0056dd4c);
    /* 0056dd4c: mov dword ptr [ebp - 4], 0x3b9ac9ff */ W32((u32)(r_ebp+0xfffffffcu), 0x3b9ac9ffu);
    /* 0056dd53: jmp 0x56dd5b */ goto L_0056dd5b;
L_0056dd55:; BB(0x0056dd55);
    /* 0056dd55: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0056dd58: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0056dd5b:; BB(0x0056dd5b);
    /* 0056dd5b: jmp 0x56dddb */ goto L_0056dddb;
L_0056dd5d:; BB(0x0056dd5d);
    /* 0056dd5d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0056dd60: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0056dd61: mov ecx, 5 */ r_ecx = 0x5u;
    /* 0056dd66: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0056dd66, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0056dd66, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0056dd68: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0056dd6b: jmp 0x56dddb */ goto L_0056dddb;
L_0056dd6d:; BB(0x0056dd6d);
    /* 0056dd6d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0056dd70: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0056dd71: mov ecx, 0xa */ r_ecx = 0xau;
    /* 0056dd76: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0056dd76, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0056dd76, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0056dd78: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0056dd7b: jmp 0x56dddb */ goto L_0056dddb;
L_0056dd7d:; BB(0x0056dd7d);
    /* 0056dd7d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0056dd80: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0056dd81: mov ecx, 0x19 */ r_ecx = 0x19u;
    /* 0056dd86: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0056dd86, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0056dd86, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0056dd88: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0056dd8b: jmp 0x56dddb */ goto L_0056dddb;
L_0056dd8d:; BB(0x0056dd8d);
    /* 0056dd8d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0056dd90: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0056dd91: mov ecx, 0x32 */ r_ecx = 0x32u;
    /* 0056dd96: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0056dd96, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0056dd96, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0056dd98: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0056dd9b: jmp 0x56dddb */ goto L_0056dddb;
L_0056dd9d:; BB(0x0056dd9d);
    /* 0056dd9d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0056dda0: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0056dda1: mov ecx, 0x64 */ r_ecx = 0x64u;
    /* 0056dda6: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0056dda6, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0056dda6, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0056dda8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0056ddab: jmp 0x56dddb */ goto L_0056dddb;
L_0056ddad:; BB(0x0056ddad);
    /* 0056ddad: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0056ddb0: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0056ddb1: mov ecx, 0xfa */ r_ecx = 0xfau;
    /* 0056ddb6: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0056ddb6, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0056ddb6, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0056ddb8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0056ddbb: jmp 0x56dddb */ goto L_0056dddb;
L_0056ddbd:; BB(0x0056ddbd);
    /* 0056ddbd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0056ddc0: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0056ddc1: mov ecx, 0x1f4 */ r_ecx = 0x1f4u;
    /* 0056ddc6: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0056ddc6, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0056ddc6, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0056ddc8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0056ddcb: jmp 0x56dddb */ goto L_0056dddb;
L_0056ddcd:; BB(0x0056ddcd);
    /* 0056ddcd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0056ddd0: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0056ddd1: mov ecx, 0x3e8 */ r_ecx = 0x3e8u;
    /* 0056ddd6: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0056ddd6, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0056ddd6, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0056ddd8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0056dddb:; BB(0x0056dddb);
    /* 0056dddb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056ddde: mov esp, ebp */ r_esp = r_ebp;
    /* 0056dde0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056dde1: ret 8 */ FN_RET(0x0056dc60); r_esp += 12; return;
}

void f_0056dff0(void) /* roadkillslot::func_0056dff0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056dff0);
    /* 0056dff0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056dff1: mov ebp, esp */ r_ebp = r_esp;
    /* 0056dff3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056dff4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0056dff7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056dffa: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 0056e000: sub ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0056e003: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056e006: mov dword ptr [edx + 0xa0], ecx */ W32((u32)(r_edx+0xa0u), r_ecx);
    /* 0056e00c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056e00f: cmp dword ptr [eax + 0xa0], 0 */ {  u32 a = R32((u32)(r_eax+0xa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0056e016: jae 0x56e040 */ if (!fC) goto L_0056e040;
L_0056e018:; BB(0x0056e018);
    /* 0056e018: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0056e01a: jne 0x56e033 */ if (!fZ) goto L_0056e033;
L_0056e01c:; BB(0x0056e01c);
    /* 0056e01c: push 0x214 */ { u32 v = 0x214u; r_esp -= 4; W32(r_esp, v); }
    /* 0056e021: push 0x6ca2b4 */ { u32 v = 0x6ca2b4u; r_esp -= 4; W32(r_esp, v); }
    /* 0056e026: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0056e02b: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x56e030u); f_005e9f20();
    /* 0056e030: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0056e033:; BB(0x0056e033);
    /* 0056e033: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056e036: mov dword ptr [eax + 0xa0], 0 */ W32((u32)(r_eax+0xa0u), 0x0u);
L_0056e040:; BB(0x0056e040);
    /* 0056e040: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056e043: cmp dword ptr [ecx + 0xa0], 0 */ {  u32 a = R32((u32)(r_ecx+0xa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056e04a: jne 0x56e07e */ if (!fZ) goto L_0056e07e;
L_0056e04c:; BB(0x0056e04c);
    /* 0056e04c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056e04f: cmp dword ptr [edx + 0xa4], 0 */ {  u32 a = R32((u32)(r_edx+0xa4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056e056: jne 0x56e07e */ if (!fZ) goto L_0056e07e;
L_0056e058:; BB(0x0056e058);
    /* 0056e058: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056e05b: call 0x56e340 */ r_esp -= 4; W32(r_esp, 0x56e060u); f_0056e340();
    /* 0056e060: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056e063: movzx ecx, byte ptr [eax + 0x99] */ r_ecx = (u32)R8((u32)(r_eax+0x99u));
    /* 0056e06a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056e06c: jne 0x56e07e */ if (!fZ) goto L_0056e07e;
L_0056e06e:; BB(0x0056e06e);
    /* 0056e06e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056e071: call 0x56f870 */ r_esp -= 4; W32(r_esp, 0x56e076u); f_0056f870();
    /* 0056e076: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056e079: call 0x56e3e0 */ r_esp -= 4; W32(r_esp, 0x56e07eu); f_0056e3e0();
L_0056e07e:; BB(0x0056e07e);
    /* 0056e07e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056e081: mov eax, dword ptr [edx + 0xa0] */ r_eax = R32((u32)(r_edx+0xa0u));
    /* 0056e087: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056e088: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056e08b: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 0056e08e: call 0x5709b0 */ r_esp -= 4; W32(r_esp, 0x56e093u); f_005709b0();
    /* 0056e093: mov esp, ebp */ r_esp = r_ebp;
    /* 0056e095: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056e096: ret 4 */ FN_RET(0x0056dff0); r_esp += 8; return;
}

void f_0056e0a0(void) /* roadkillslot::func_0056e0a0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056e0a0);
    /* 0056e0a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056e0a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0056e0a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e0a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0056e0a7: cmp dword ptr [ebp + 8], 2 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056e0ab: jle 0x56e0cf */ if ((fZ||fS!=fO)) goto L_0056e0cf;
L_0056e0ad:; BB(0x0056e0ad);
    /* 0056e0ad: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0056e0af: jne 0x56e0c8 */ if (!fZ) goto L_0056e0c8;
L_0056e0b1:; BB(0x0056e0b1);
    /* 0056e0b1: push 0x228 */ { u32 v = 0x228u; r_esp -= 4; W32(r_esp, v); }
    /* 0056e0b6: push 0x6ca2b4 */ { u32 v = 0x6ca2b4u; r_esp -= 4; W32(r_esp, v); }
    /* 0056e0bb: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0056e0c0: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x56e0c5u); f_005e9f20();
    /* 0056e0c5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0056e0c8:; BB(0x0056e0c8);
    /* 0056e0c8: mov dword ptr [ebp + 8], 2 */ W32((u32)(r_ebp+0x8u), 0x2u);
L_0056e0cf:; BB(0x0056e0cf);
    /* 0056e0cf: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056e0d3: je 0x56e0dd */ if (fZ) goto L_0056e0dd;
L_0056e0d5:; BB(0x0056e0d5);
    /* 0056e0d5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056e0d8: call 0x56e480 */ r_esp -= 4; W32(r_esp, 0x56e0ddu); f_0056e480();
L_0056e0dd:; BB(0x0056e0dd);
    /* 0056e0dd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056e0e0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0056e0e3: mov dword ptr [edx + 0xa4], eax */ W32((u32)(r_edx+0xa4u), r_eax);
    /* 0056e0e9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056e0ec: mov edx, dword ptr [ecx + 0xa4] */ r_edx = R32((u32)(r_ecx+0xa4u));
    /* 0056e0f2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e0f3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056e0f6: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0056e0f9: call 0x5709b0 */ r_esp -= 4; W32(r_esp, 0x56e0feu); f_005709b0();
    /* 0056e0fe: mov esp, ebp */ r_esp = r_ebp;
    /* 0056e100: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056e101: ret 4 */ FN_RET(0x0056e0a0); r_esp += 8; return;
}

void f_0056e110(void) /* roadkillslot::func_0056e110 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056e110);
    /* 0056e110: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056e111: mov ebp, esp */ r_ebp = r_esp;
    /* 0056e113: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e114: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0056e117: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056e11a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0056e11d: mov dword ptr [eax + 0xa8], ecx */ W32((u32)(r_eax+0xa8u), r_ecx);
    /* 0056e123: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056e126: cmp dword ptr [edx + 0xa8], 0x3b9ac9ff */ {  u32 a = R32((u32)(r_edx+0xa8u)); u32 b = 0x3b9ac9ffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056e130: jle 0x56e15a */ if ((fZ||fS!=fO)) goto L_0056e15a;
L_0056e132:; BB(0x0056e132);
    /* 0056e132: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0056e134: jne 0x56e14d */ if (!fZ) goto L_0056e14d;
L_0056e136:; BB(0x0056e136);
    /* 0056e136: push 0x23b */ { u32 v = 0x23bu; r_esp -= 4; W32(r_esp, v); }
    /* 0056e13b: push 0x6ca2b4 */ { u32 v = 0x6ca2b4u; r_esp -= 4; W32(r_esp, v); }
    /* 0056e140: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0056e145: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x56e14au); f_005e9f20();
    /* 0056e14a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0056e14d:; BB(0x0056e14d);
    /* 0056e14d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056e150: mov dword ptr [edx + 0xa8], 0x3b9ac9ff */ W32((u32)(r_edx+0xa8u), 0x3b9ac9ffu);
L_0056e15a:; BB(0x0056e15a);
    /* 0056e15a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056e15d: mov ecx, dword ptr [eax + 0xa8] */ r_ecx = R32((u32)(r_eax+0xa8u));
    /* 0056e163: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e164: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056e167: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 0056e16a: call 0x5709b0 */ r_esp -= 4; W32(r_esp, 0x56e16fu); f_005709b0();
    /* 0056e16f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056e172: cmp dword ptr [eax + 0xa8], 0 */ {  u32 a = R32((u32)(r_eax+0xa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056e179: jle 0x56e18d */ if ((fZ||fS!=fO)) goto L_0056e18d;
L_0056e17b:; BB(0x0056e17b);
    /* 0056e17b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056e17e: mov edx, dword ptr [ecx + 0xa8] */ r_edx = R32((u32)(r_ecx+0xa8u));
    /* 0056e184: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e185: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056e188: call 0x56df70 */ r_esp -= 4; W32(r_esp, 0x56e18du); f_0056df70();
L_0056e18d:; BB(0x0056e18d);
    /* 0056e18d: mov esp, ebp */ r_esp = r_ebp;
    /* 0056e18f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056e190: ret 4 */ FN_RET(0x0056e110); r_esp += 8; return;
}

void f_0056e1a0(void) /* roadkillslot::func_0056e1a0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056e1a0);
    /* 0056e1a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056e1a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0056e1a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e1a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0056e1a7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056e1aa: mov ecx, dword ptr [eax + 0xa8] */ r_ecx = R32((u32)(r_eax+0xa8u));
    /* 0056e1b0: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0056e1b3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056e1b6: mov dword ptr [edx + 0xa8], ecx */ W32((u32)(r_edx+0xa8u), r_ecx);
    /* 0056e1bc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056e1bf: cmp dword ptr [eax + 0xa8], 0x3b9ac9ff */ {  u32 a = R32((u32)(r_eax+0xa8u)); u32 b = 0x3b9ac9ffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056e1c9: jle 0x56e1f3 */ if ((fZ||fS!=fO)) goto L_0056e1f3;
L_0056e1cb:; BB(0x0056e1cb);
    /* 0056e1cb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0056e1cd: jne 0x56e1e6 */ if (!fZ) goto L_0056e1e6;
L_0056e1cf:; BB(0x0056e1cf);
    /* 0056e1cf: push 0x24a */ { u32 v = 0x24au; r_esp -= 4; W32(r_esp, v); }
    /* 0056e1d4: push 0x6ca2b4 */ { u32 v = 0x6ca2b4u; r_esp -= 4; W32(r_esp, v); }
    /* 0056e1d9: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0056e1de: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x56e1e3u); f_005e9f20();
    /* 0056e1e3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0056e1e6:; BB(0x0056e1e6);
    /* 0056e1e6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056e1e9: mov dword ptr [eax + 0xa8], 0x3b9ac9ff */ W32((u32)(r_eax+0xa8u), 0x3b9ac9ffu);
L_0056e1f3:; BB(0x0056e1f3);
    /* 0056e1f3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056e1f6: mov edx, dword ptr [ecx + 0xa8] */ r_edx = R32((u32)(r_ecx+0xa8u));
    /* 0056e1fc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e1fd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056e200: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0056e203: call 0x5709b0 */ r_esp -= 4; W32(r_esp, 0x56e208u); f_005709b0();
    /* 0056e208: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056e20c: jle 0x56e21a */ if ((fZ||fS!=fO)) goto L_0056e21a;
L_0056e20e:; BB(0x0056e20e);
    /* 0056e20e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0056e211: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e212: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056e215: call 0x56df70 */ r_esp -= 4; W32(r_esp, 0x56e21au); f_0056df70();
L_0056e21a:; BB(0x0056e21a);
    /* 0056e21a: mov esp, ebp */ r_esp = r_ebp;
    /* 0056e21c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056e21d: ret 4 */ FN_RET(0x0056e1a0); r_esp += 8; return;
}

void f_0056e800(void) /* roadkillslot::func_0056e800 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056e800);
    /* 0056e800: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056e801: mov ebp, esp */ r_ebp = r_esp;
    /* 0056e803: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056e806: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0056e809: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0056e80c: mov ecx, dword ptr [eax + 0xa4] */ r_ecx = R32((u32)(r_eax+0xa4u));
    /* 0056e812: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0056e815: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056e818: jle 0x56e831 */ if ((fZ||fS!=fO)) goto L_0056e831;
L_0056e81a:; BB(0x0056e81a);
    /* 0056e81a: push 0x2df */ { u32 v = 0x2dfu; r_esp -= 4; W32(r_esp, v); }
    /* 0056e81f: push 0x6ca2b4 */ { u32 v = 0x6ca2b4u; r_esp -= 4; W32(r_esp, v); }
    /* 0056e824: push 0x6ca32c */ { u32 v = 0x6ca32cu; r_esp -= 4; W32(r_esp, v); }
    /* 0056e829: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x56e82eu); f_005e9f20();
    /* 0056e82e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0056e831:; BB(0x0056e831);
    /* 0056e831: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0056e834: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056e835: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 0056e838: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e839: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0056e83c: call 0x56da30 */ r_esp -= 4; W32(r_esp, 0x56e841u); f_0056da30();
    /* 0056e841: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0056e843: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0056e846: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0056e849: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0056e84c: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 0056e84f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e850: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056e852: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x56e857u); f_005dcb00();
    /* 0056e857: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056e85a: mov ecx, eax */ r_ecx = r_eax;
    /* 0056e85c: call 0x5d5ac0 */ r_esp -= 4; W32(r_esp, 0x56e861u); f_005d5ac0();
    /* 0056e861: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056e864: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e865: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056e868: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056e869: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 0056e86c: call 0x64c6a0 */ r_esp -= 4; W32(r_esp, 0x56e871u); f_0064c6a0();
    /* 0056e871: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0056e874: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056e876: je 0x56e8a6 */ if (fZ) goto L_0056e8a6;
L_0056e878:; BB(0x0056e878);
    /* 0056e878: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056e87b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e87c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056e87f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056e880: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0056e883: call 0x56dc60 */ r_esp -= 4; W32(r_esp, 0x56e888u); f_0056dc60();
    /* 0056e888: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 0056e88b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0056e88e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e88f: lea edx, [ebp - 0x20] */ r_edx = (u32)(r_ebp+0xffffffe0u);
    /* 0056e892: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e893: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0056e896: call 0x56da30 */ r_esp -= 4; W32(r_esp, 0x56e89bu); f_0056da30();
    /* 0056e89b: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0056e89d: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0056e8a0: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0056e8a3: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_0056e8a6:; BB(0x0056e8a6);
    /* 0056e8a6: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0056e8a9: mov ecx, dword ptr [eax + 0xa4] */ r_ecx = R32((u32)(r_eax+0xa4u));
    /* 0056e8af: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0056e8b2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e8b3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0056e8b6: call 0x56e0a0 */ r_esp -= 4; W32(r_esp, 0x56e8bbu); f_0056e0a0();
    /* 0056e8bb: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0056e8be: cmp dword ptr [edx + 0xa4], 0 */ {  u32 a = R32((u32)(r_edx+0xa4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056e8c5: je 0x56e8df */ if (fZ) goto L_0056e8df;
L_0056e8c7:; BB(0x0056e8c7);
    /* 0056e8c7: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0056e8ca: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0056e8cd: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0056e8d0: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 0056e8d3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0056e8d5: mov ecx, eax */ r_ecx = r_eax;
    /* 0056e8d7: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 0056e8dd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56e8dfu); call_ind(t); }
L_0056e8df:; BB(0x0056e8df);
    /* 0056e8df: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056e8e2: imul ecx, ecx, -1 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xffffffffu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0056e8e5: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0056e8e8: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056e8eb: imul edx, edx, -1 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xffffffffu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0056e8ee: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0056e8f1: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056e8f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056e8f5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056e8f8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e8f9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056e8fb: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x56e900u); f_005dcb00();
    /* 0056e900: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056e903: mov ecx, eax */ r_ecx = r_eax;
    /* 0056e905: call 0x5d5fb0 */ r_esp -= 4; W32(r_esp, 0x56e90au); f_005d5fb0();
    /* 0056e90a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056e90d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e90e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056e911: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056e912: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056e914: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x56e919u); f_005dcb00();
    /* 0056e919: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056e91c: mov ecx, eax */ r_ecx = r_eax;
    /* 0056e91e: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x56e923u); f_005d5cf0();
    /* 0056e923: mov esp, ebp */ r_esp = r_ebp;
    /* 0056e925: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056e926: ret 4 */ FN_RET(0x0056e800); r_esp += 8; return;
}

void f_0056e9f0(void) /* roadkillslot::func_0056e9f0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056e9f0);
    /* 0056e9f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056e9f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0056e9f3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056e9f6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0056e9f9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0056e9fc: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0056e9ff: cmp dword ptr [ebp - 8], 0xb */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0056ea03: ja 0x56ea6b */ if ((!fC&&!fZ)) goto L_0056ea6b;
L_0056ea05:; BB(0x0056ea05);
    /* 0056ea05: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056ea08: jmp dword ptr [ecx*4 + 0x56ea90] */ { u32 t = R32((u32)(r_ecx*4+0x56ea90u)); switch (t) { case 0x56ea0fu: goto L_0056ea0f; case 0x56ea2cu: goto L_0056ea2c; case 0x56ea33u: goto L_0056ea33; case 0x56ea3au: goto L_0056ea3a; case 0x56ea41u: goto L_0056ea41; case 0x56ea48u: goto L_0056ea48; case 0x56ea4fu: goto L_0056ea4f; case 0x56ea56u: goto L_0056ea56; case 0x56ea5du: goto L_0056ea5d; case 0x56ea64u: goto L_0056ea64; default: UNSUP(0x0056ea08, "jump table entry is not a known target"); } }
L_0056ea0f:; BB(0x0056ea0f);
    /* 0056ea0f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0056ea11: jne 0x56ea2a */ if (!fZ) goto L_0056ea2a;
L_0056ea13:; BB(0x0056ea13);
    /* 0056ea13: push 0x308 */ { u32 v = 0x308u; r_esp -= 4; W32(r_esp, v); }
    /* 0056ea18: push 0x6ca2b4 */ { u32 v = 0x6ca2b4u; r_esp -= 4; W32(r_esp, v); }
    /* 0056ea1d: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0056ea22: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x56ea27u); f_005e9f20();
    /* 0056ea27: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0056ea2a:; BB(0x0056ea2a);
    /* 0056ea2a: jmp 0x56ea86 */ goto L_0056ea86;
L_0056ea2c:; BB(0x0056ea2c);
    /* 0056ea2c: mov eax, 1 */ r_eax = 0x1u;
    /* 0056ea31: jmp 0x56ea88 */ goto L_0056ea88;
L_0056ea33:; BB(0x0056ea33);
    /* 0056ea33: mov eax, 5 */ r_eax = 0x5u;
    /* 0056ea38: jmp 0x56ea88 */ goto L_0056ea88;
L_0056ea3a:; BB(0x0056ea3a);
    /* 0056ea3a: mov eax, 0xa */ r_eax = 0xau;
    /* 0056ea3f: jmp 0x56ea88 */ goto L_0056ea88;
L_0056ea41:; BB(0x0056ea41);
    /* 0056ea41: mov eax, 0x19 */ r_eax = 0x19u;
    /* 0056ea46: jmp 0x56ea88 */ goto L_0056ea88;
L_0056ea48:; BB(0x0056ea48);
    /* 0056ea48: mov eax, 0x32 */ r_eax = 0x32u;
    /* 0056ea4d: jmp 0x56ea88 */ goto L_0056ea88;
L_0056ea4f:; BB(0x0056ea4f);
    /* 0056ea4f: mov eax, 0x64 */ r_eax = 0x64u;
    /* 0056ea54: jmp 0x56ea88 */ goto L_0056ea88;
L_0056ea56:; BB(0x0056ea56);
    /* 0056ea56: mov eax, 0xfa */ r_eax = 0xfau;
    /* 0056ea5b: jmp 0x56ea88 */ goto L_0056ea88;
L_0056ea5d:; BB(0x0056ea5d);
    /* 0056ea5d: mov eax, 0x1f4 */ r_eax = 0x1f4u;
    /* 0056ea62: jmp 0x56ea88 */ goto L_0056ea88;
L_0056ea64:; BB(0x0056ea64);
    /* 0056ea64: mov eax, 0x3e8 */ r_eax = 0x3e8u;
    /* 0056ea69: jmp 0x56ea88 */ goto L_0056ea88;
L_0056ea6b:; BB(0x0056ea6b);
    /* 0056ea6b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0056ea6d: jne 0x56ea86 */ if (!fZ) goto L_0056ea86;
L_0056ea6f:; BB(0x0056ea6f);
    /* 0056ea6f: push 0x312 */ { u32 v = 0x312u; r_esp -= 4; W32(r_esp, v); }
    /* 0056ea74: push 0x6ca2b4 */ { u32 v = 0x6ca2b4u; r_esp -= 4; W32(r_esp, v); }
    /* 0056ea79: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0056ea7e: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x56ea83u); f_005e9f20();
    /* 0056ea83: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0056ea86:; BB(0x0056ea86);
    /* 0056ea86: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0056ea88:; BB(0x0056ea88);
    /* 0056ea88: mov esp, ebp */ r_esp = r_ebp;
    /* 0056ea8a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056ea8b: ret 4 */ FN_RET(0x0056e9f0); r_esp += 8; return;
}

void f_0056eac0(void) /* roadkillslot::func_0056eac0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056eac0);
    /* 0056eac0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056eac1: mov ebp, esp */ r_ebp = r_esp;
    /* 0056eac3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056eac6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0056eac9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0056eacc: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0056eacf: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056ead3: je 0x56eae3 */ if (fZ) goto L_0056eae3;
L_0056ead5:; BB(0x0056ead5);
    /* 0056ead5: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056ead9: je 0x56eaea */ if (fZ) goto L_0056eaea;
L_0056eadb:; BB(0x0056eadb);
    /* 0056eadb: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056eadf: je 0x56eaf1 */ if (fZ) goto L_0056eaf1;
L_0056eae1:; BB(0x0056eae1);
    /* 0056eae1: jmp 0x56eaf8 */ goto L_0056eaf8;
L_0056eae3:; BB(0x0056eae3);
    /* 0056eae3: mov eax, 5 */ r_eax = 0x5u;
    /* 0056eae8: jmp 0x56eb15 */ goto L_0056eb15;
L_0056eaea:; BB(0x0056eaea);
    /* 0056eaea: mov eax, 0xa */ r_eax = 0xau;
    /* 0056eaef: jmp 0x56eb15 */ goto L_0056eb15;
L_0056eaf1:; BB(0x0056eaf1);
    /* 0056eaf1: mov eax, 0x19 */ r_eax = 0x19u;
    /* 0056eaf6: jmp 0x56eb15 */ goto L_0056eb15;
L_0056eaf8:; BB(0x0056eaf8);
    /* 0056eaf8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0056eafa: jne 0x56eb13 */ if (!fZ) goto L_0056eb13;
L_0056eafc:; BB(0x0056eafc);
    /* 0056eafc: push 0x31e */ { u32 v = 0x31eu; r_esp -= 4; W32(r_esp, v); }
    /* 0056eb01: push 0x6ca2b4 */ { u32 v = 0x6ca2b4u; r_esp -= 4; W32(r_esp, v); }
    /* 0056eb06: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0056eb0b: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x56eb10u); f_005e9f20();
    /* 0056eb10: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0056eb13:; BB(0x0056eb13);
    /* 0056eb13: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0056eb15:; BB(0x0056eb15);
    /* 0056eb15: mov esp, ebp */ r_esp = r_ebp;
    /* 0056eb17: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056eb18: ret 4 */ FN_RET(0x0056eac0); r_esp += 8; return;
}

void f_005709b0(void) /* roadkillslot::func_005709b0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005709b0);
    /* 005709b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005709b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005709b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005709b5: push 0x6a5fcc */ { u32 v = 0x6a5fccu; r_esp -= 4; W32(r_esp, v); }
    /* 005709ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005709c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005709c1: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005709c4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005709c9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005709cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005709cc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005709cf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005709d5: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005709d8: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
    /* 005709df: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 005709e6: jmp 0x5709f1 */ goto L_005709f1;
L_005709e8:; BB(0x005709e8);
    /* 005709e8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005709eb: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005709ee: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_005709f1:; BB(0x005709f1);
    /* 005709f1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005709f4: movsx edx, word ptr [ecx + 0x184] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x184u));
    /* 005709fb: cmp dword ptr [ebp - 0x14], edx */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005709fe: jge 0x570a0b */ if ((fS==fO)) goto L_00570a0b;
L_00570a00:; BB(0x00570a00);
    /* 00570a00: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00570a03: imul eax, eax, 0xa */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xau; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00570a06: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00570a09: jmp 0x5709e8 */ goto L_005709e8;
L_00570a0b:; BB(0x00570a0b);
    /* 00570a0b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00570a0e: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00570a11: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00570a14: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00570a18: jge 0x570a3c */ if ((fS==fO)) goto L_00570a3c;
L_00570a1a:; BB(0x00570a1a);
    /* 00570a1a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00570a1c: jne 0x570a35 */ if (!fZ) goto L_00570a35;
L_00570a1e:; BB(0x00570a1e);
    /* 00570a1e: push 0x5b0 */ { u32 v = 0x5b0u; r_esp -= 4; W32(r_esp, v); }
    /* 00570a23: push 0x6ca2b4 */ { u32 v = 0x6ca2b4u; r_esp -= 4; W32(r_esp, v); }
    /* 00570a28: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00570a2d: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x570a32u); f_005e9f20();
    /* 00570a32: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00570a35:; BB(0x00570a35);
    /* 00570a35: mov dword ptr [ebp + 8], 0 */ W32((u32)(r_ebp+0x8u), 0x0u);
L_00570a3c:; BB(0x00570a3c);
    /* 00570a3c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00570a3f: cmp ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00570a42: jle 0x570a65 */ if ((fZ||fS!=fO)) goto L_00570a65;
L_00570a44:; BB(0x00570a44);
    /* 00570a44: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00570a46: jne 0x570a5f */ if (!fZ) goto L_00570a5f;
L_00570a48:; BB(0x00570a48);
    /* 00570a48: push 0x5b4 */ { u32 v = 0x5b4u; r_esp -= 4; W32(r_esp, v); }
    /* 00570a4d: push 0x6ca2b4 */ { u32 v = 0x6ca2b4u; r_esp -= 4; W32(r_esp, v); }
    /* 00570a52: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00570a57: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x570a5cu); f_005e9f20();
    /* 00570a5c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00570a5f:; BB(0x00570a5f);
    /* 00570a5f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00570a62: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
L_00570a65:; BB(0x00570a65);
    /* 00570a65: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 00570a67: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x570a6cu); f_00686d82();
    /* 00570a6c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00570a6f: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00570a72: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00570a79: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00570a7d: je 0x570a94 */ if (fZ) goto L_00570a94;
L_00570a7f:; BB(0x00570a7f);
    /* 00570a7f: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00570a82: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00570a83: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00570a86: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00570a87: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00570a8a: call 0x570ad0 */ r_esp -= 4; W32(r_esp, 0x570a8fu); f_00570ad0();
    /* 00570a8f: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00570a92: jmp 0x570a9b */ goto L_00570a9b;
L_00570a94:; BB(0x00570a94);
    /* 00570a94: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00570a9b:; BB(0x00570a9b);
    /* 00570a9b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00570a9e: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00570aa1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00570aa8: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00570aab: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00570aac: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00570aaf: call 0x5f5df0 */ r_esp -= 4; W32(r_esp, 0x570ab4u); f_005f5df0();
    /* 00570ab4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00570ab7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00570abe: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00570abf: mov esp, ebp */ r_esp = r_ebp;
    /* 00570ac1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00570ac2: ret 4 */ FN_RET(0x005709b0); r_esp += 8; return;
}

