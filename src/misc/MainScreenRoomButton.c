#include "protos.h"

void f_0066cb40(void) /* MainScreenRoomButton::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0066cb40);
    /* 0066cb40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066cb41: mov ebp, esp */ r_ebp = r_esp;
    /* 0066cb43: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066cb46: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0066cb47: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0066cb4a: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0066cb50: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0066cb56: jmp 0x66cb64 */ goto L_0066cb64;
L_0066cb58:; BB(0x0066cb58);
    /* 0066cb58: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 0066cb5c: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0066cb60: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
L_0066cb64:; BB(0x0066cb64);
    /* 0066cb64: movsx esi, word ptr [ebp - 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0066cb68: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066cb6e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066cb70: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066cb76: mov eax, dword ptr [edx + 0x25c] */ r_eax = R32((u32)(r_edx+0x25cu));
    /* 0066cb7c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66cb7eu); call_ind(t); }
    /* 0066cb7e: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066cb80: jge 0x66cbcd */ if ((fS==fO)) goto L_0066cbcd;
L_0066cb82:; BB(0x0066cb82);
    /* 0066cb82: cmp dword ptr [0x16306c0], 0 */ {  u32 a = R32((u32)(0x16306c0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066cb89: je 0x66cbcb */ if (fZ) goto L_0066cbcb;
L_0066cb8b:; BB(0x0066cb8b);
    /* 0066cb8b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0066cb8e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066cb8f: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0066cb93: mov eax, dword ptr [0x16306c0] */ r_eax = R32((u32)(0x16306c0u));
    /* 0066cb98: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 0066cb9b: mov edx, dword ptr [ecx + edx*4] */ r_edx = R32((u32)(r_ecx+r_edx*4));
    /* 0066cb9e: movsx eax, word ptr [ebp - 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0066cba2: mov ecx, dword ptr [0x16306c0] */ r_ecx = R32((u32)(0x16306c0u));
    /* 0066cba8: mov ecx, dword ptr [ecx + 0x5c] */ r_ecx = R32((u32)(r_ecx+0x5cu));
    /* 0066cbab: mov ecx, dword ptr [ecx + eax*4] */ r_ecx = R32((u32)(r_ecx+r_eax*4));
    /* 0066cbae: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0066cbb0: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 0066cbb6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66cbb8u); call_ind(t); }
    /* 0066cbb8: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0066cbbb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066cbbd: je 0x66cbcb */ if (fZ) goto L_0066cbcb;
L_0066cbbf:; BB(0x0066cbbf);
    /* 0066cbbf: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0066cbc3: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0066cbc7: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
L_0066cbcb:; BB(0x0066cbcb);
    /* 0066cbcb: jmp 0x66cb58 */ goto L_0066cb58;
L_0066cbcd:; BB(0x0066cbcd);
    /* 0066cbcd: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0066cbd1: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066cbd4: jle 0x66cbe8 */ if ((fZ||fS!=fO)) goto L_0066cbe8;
L_0066cbd6:; BB(0x0066cbd6);
    /* 0066cbd6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066cbd8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066cbdb: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066cbdd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066cbe0: mov eax, dword ptr [edx + 0xd8] */ r_eax = R32((u32)(r_edx+0xd8u));
    /* 0066cbe6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66cbe8u); call_ind(t); }
L_0066cbe8:; BB(0x0066cbe8);
    /* 0066cbe8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0066cbeb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066cbec: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066cbef: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0066cbf1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066cbf4: mov edx, dword ptr [eax + 0x84] */ r_edx = R32((u32)(r_eax+0x84u));
    /* 0066cbfa: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x66cbfcu); call_ind(t); }
    /* 0066cbfc: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0066cbff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066cc01: je 0x66cc44 */ if (fZ) goto L_0066cc44;
L_0066cc03:; BB(0x0066cc03);
    /* 0066cc03: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066cc06: cmp dword ptr [ecx + 0xc], 0x7d1 */ {  u32 a = R32((u32)(r_ecx+0xcu)); u32 b = 0x7d1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066cc0d: jne 0x66cc2a */ if (!fZ) goto L_0066cc2a;
L_0066cc0f:; BB(0x0066cc0f);
    /* 0066cc0f: mov edx, dword ptr [0x16306c0] */ r_edx = R32((u32)(0x16306c0u));
    /* 0066cc15: mov eax, dword ptr [edx + 0x68] */ r_eax = R32((u32)(r_edx+0x68u));
    /* 0066cc18: mov ecx, dword ptr [0x16306c0] */ r_ecx = R32((u32)(0x16306c0u));
    /* 0066cc1e: mov ecx, dword ptr [ecx + 0x68] */ r_ecx = R32((u32)(r_ecx+0x68u));
    /* 0066cc21: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066cc23: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0066cc26: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66cc28u); call_ind(t); }
    /* 0066cc28: jmp 0x66cc42 */ goto L_0066cc42;
L_0066cc2a:; BB(0x0066cc2a);
    /* 0066cc2a: mov ecx, dword ptr [0x16306c0] */ r_ecx = R32((u32)(0x16306c0u));
    /* 0066cc30: mov edx, dword ptr [ecx + 0x68] */ r_edx = R32((u32)(r_ecx+0x68u));
    /* 0066cc33: mov eax, dword ptr [0x16306c0] */ r_eax = R32((u32)(0x16306c0u));
    /* 0066cc38: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 0066cc3b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0066cc3d: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0066cc40: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66cc42u); call_ind(t); }
L_0066cc42:; BB(0x0066cc42);
    /* 0066cc42: jmp 0x66cc9c */ goto L_0066cc9c;
L_0066cc44:; BB(0x0066cc44);
    /* 0066cc44: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066cc4a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066cc4c: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066cc52: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 0066cc58: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66cc5au); call_ind(t); }
    /* 0066cc5a: mov ecx, dword ptr [0x16306c0] */ r_ecx = R32((u32)(0x16306c0u));
    /* 0066cc60: mov edx, dword ptr [ecx + 0x5c] */ r_edx = R32((u32)(r_ecx+0x5cu));
    /* 0066cc63: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 0066cc66: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0066cc69: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0066cc6c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066cc6d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0066cc70: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0066cc72: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0066cc75: mov edx, dword ptr [eax + 0x84] */ r_edx = R32((u32)(r_eax+0x84u));
    /* 0066cc7b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x66cc7du); call_ind(t); }
    /* 0066cc7d: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0066cc80: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066cc82: jne 0x66cc9c */ if (!fZ) goto L_0066cc9c;
L_0066cc84:; BB(0x0066cc84);
    /* 0066cc84: mov ecx, dword ptr [0x16306c0] */ r_ecx = R32((u32)(0x16306c0u));
    /* 0066cc8a: mov edx, dword ptr [ecx + 0x68] */ r_edx = R32((u32)(r_ecx+0x68u));
    /* 0066cc8d: mov eax, dword ptr [0x16306c0] */ r_eax = R32((u32)(0x16306c0u));
    /* 0066cc92: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 0066cc95: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0066cc97: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0066cc9a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66cc9cu); call_ind(t); }
L_0066cc9c:; BB(0x0066cc9c);
    /* 0066cc9c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0066cc9f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066cca0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066cca3: call 0x5f4d00 */ r_esp -= 4; W32(r_esp, 0x66cca8u); f_005f4d00();
    /* 0066cca8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0066cca9: mov esp, ebp */ r_esp = r_ebp;
    /* 0066ccab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066ccac: ret 4 */ FN_RET(0x0066cb40); r_esp += 8; return;
}

void f_0066ccb0(void) /* MainScreenRoomButton::vfunc54 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0066ccb0);
    /* 0066ccb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066ccb1: mov ebp, esp */ r_ebp = r_esp;
    /* 0066ccb3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066ccb6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0066ccb9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0066ccbc: cmp dword ptr [eax + 0x194], 0 */ {  u32 a = R32((u32)(r_eax+0x194u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066ccc3: jne 0x66cd92 */ if (!fZ) goto L_0066cd92;
L_0066ccc9:; BB(0x0066ccc9);
    /* 0066ccc9: cmp dword ptr [ebp + 8], 3 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066cccd: jne 0x66cd92 */ if (!fZ) goto L_0066cd92;
L_0066ccd3:; BB(0x0066ccd3);
    /* 0066ccd3: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066ccd9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066ccdb: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066cce1: mov eax, dword ptr [edx + 0x280] */ r_eax = R32((u32)(r_edx+0x280u));
    /* 0066cce7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66cce9u); call_ind(t); }
    /* 0066cce9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066cceb: je 0x66cd92 */ if (fZ) goto L_0066cd92;
L_0066ccf1:; BB(0x0066ccf1);
    /* 0066ccf1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0066ccf8: jmp 0x66cd03 */ goto L_0066cd03;
L_0066ccfa:; BB(0x0066ccfa);
    /* 0066ccfa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066ccfd: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0066cd00: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0066cd03:; BB(0x0066cd03);
    /* 0066cd03: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0066cd09: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0066cd0b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066cd11: mov edx, dword ptr [eax + 0x25c] */ r_edx = R32((u32)(r_eax+0x25cu));
    /* 0066cd17: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x66cd19u); call_ind(t); }
    /* 0066cd19: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066cd1c: jge 0x66cd72 */ if ((fS==fO)) goto L_0066cd72;
L_0066cd1e:; BB(0x0066cd1e);
    /* 0066cd1e: mov eax, dword ptr [0x16306c0] */ r_eax = R32((u32)(0x16306c0u));
    /* 0066cd23: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 0066cd26: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066cd29: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 0066cd2c: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066cd2f: jne 0x66cd70 */ if (!fZ) goto L_0066cd70;
L_0066cd31:; BB(0x0066cd31);
    /* 0066cd31: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066cd33: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066cd39: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 0066cd3c: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x66cd41u); f_005fb2b0();
    /* 0066cd41: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0066cd44: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066cd47: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066cd48: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0066cd4d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066cd4f: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066cd55: mov eax, dword ptr [edx + 0x284] */ r_eax = R32((u32)(r_edx+0x284u));
    /* 0066cd5b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66cd5du); call_ind(t); }
    /* 0066cd5d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066cd5e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066cd61: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066cd63: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066cd66: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0066cd6c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66cd6eu); call_ind(t); }
    /* 0066cd6e: jmp 0x66cd72 */ goto L_0066cd72;
L_0066cd70:; BB(0x0066cd70);
    /* 0066cd70: jmp 0x66ccfa */ goto L_0066ccfa;
L_0066cd72:; BB(0x0066cd72);
    /* 0066cd72: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066cd74: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066cd7a: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 0066cd7d: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x66cd82u); f_005fb2b0();
    /* 0066cd82: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0066cd85: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0066cd88: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0066cd8a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0066cd8d: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 0066cd90: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x66cd92u); call_ind(t); }
L_0066cd92:; BB(0x0066cd92);
    /* 0066cd92: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0066cd95: cmp dword ptr [eax + 0x194], 3 */ {  u32 a = R32((u32)(r_eax+0x194u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066cd9c: jne 0x66cdde */ if (!fZ) goto L_0066cdde;
L_0066cd9e:; BB(0x0066cd9e);
    /* 0066cd9e: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066cda2: jne 0x66cdde */ if (!fZ) goto L_0066cdde;
L_0066cda4:; BB(0x0066cda4);
    /* 0066cda4: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066cdaa: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066cdac: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066cdb2: mov eax, dword ptr [edx + 0x280] */ r_eax = R32((u32)(r_edx+0x280u));
    /* 0066cdb8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66cdbau); call_ind(t); }
    /* 0066cdba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066cdbc: je 0x66cdde */ if (fZ) goto L_0066cdde;
L_0066cdbe:; BB(0x0066cdbe);
    /* 0066cdbe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066cdc0: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066cdc6: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 0066cdc9: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x66cdceu); f_005fb2b0();
    /* 0066cdce: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0066cdd1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0066cdd4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0066cdd6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0066cdd9: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 0066cddc: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x66cddeu); call_ind(t); }
L_0066cdde:; BB(0x0066cdde);
    /* 0066cdde: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0066cde1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066cde2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0066cde5: call 0x6031d0 */ r_esp -= 4; W32(r_esp, 0x66cdeau); f_006031d0();
    /* 0066cdea: mov esp, ebp */ r_esp = r_ebp;
    /* 0066cdec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066cded: ret 4 */ FN_RET(0x0066ccb0); r_esp += 8; return;
}

