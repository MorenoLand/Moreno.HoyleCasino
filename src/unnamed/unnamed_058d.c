#include "protos.h"

void f_0058d840(void) /* sub_58D840 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0058d840);
    /* 0058d840: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058d841: mov ebp, esp */ r_ebp = r_esp;
    /* 0058d843: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0058d845: push 0x6a6fa2 */ { u32 v = 0x6a6fa2u; r_esp -= 4; W32(r_esp, v); }
    /* 0058d84a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0058d850: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058d851: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058d854: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0058d859: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0058d85b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058d85c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0058d85f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0058d865: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0058d868: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0058d86b: cmp dword ptr [eax + 0x88], 0 */ {  u32 a = R32((u32)(r_eax+0x88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058d872: jne 0x58d9a3 */ if (!fZ) goto L_0058d9a3;
L_0058d878:; BB(0x0058d878);
    /* 0058d878: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0058d87d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x58d882u); f_00686d82();
    /* 0058d882: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058d885: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0058d888: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0058d88f: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058d893: je 0x58d8a2 */ if (fZ) goto L_0058d8a2;
L_0058d895:; BB(0x0058d895);
    /* 0058d895: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0058d898: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x58d89du); f_005ec5a0();
    /* 0058d89d: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0058d8a0: jmp 0x58d8a9 */ goto L_0058d8a9;
L_0058d8a2:; BB(0x0058d8a2);
    /* 0058d8a2: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0058d8a9:; BB(0x0058d8a9);
    /* 0058d8a9: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0058d8ac: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0058d8af: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0058d8b6: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0058d8b9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058d8bc: mov dword ptr [edx + 0x88], eax */ W32((u32)(r_edx+0x88u), r_eax);
    /* 0058d8c2: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0058d8c5: mov edx, dword ptr [ecx + 0x88] */ r_edx = R32((u32)(r_ecx+0x88u));
    /* 0058d8cb: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0058d8ce: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0058d8d1: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 0058d8d4: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0058d8d9: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0058d8dc: mov eax, dword ptr [edx + 0x88] */ r_eax = R32((u32)(r_edx+0x88u));
    /* 0058d8e2: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0058d8e5: mov ecx, dword ptr [ecx + 0x88] */ r_ecx = R32((u32)(r_ecx+0x88u));
    /* 0058d8eb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0058d8ed: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0058d8f3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58d8f5u); call_ind(t); }
    /* 0058d8f5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058d8f6: mov ecx, esp */ r_ecx = r_esp;
    /* 0058d8f8: mov dx, word ptr [0x75ee1c] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 0058d8ff: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 0058d902: mov al, byte ptr [0x75ee1e] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 0058d907: mov byte ptr [ecx + 2], al */ W8((u32)(r_ecx+0x2u), (u8)r_eax);
    /* 0058d90a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0058d90c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0058d90f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0058d911: cmp dword ptr [ecx + 0x84], 0 */ {  u32 a = R32((u32)(r_ecx+0x84u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058d918: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0058d91b: lea edx, [edx + edx + 0x2b] */ r_edx = (u32)(r_edx+r_edx+0x2bu);
    /* 0058d91f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058d920: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0058d923: mov ecx, dword ptr [eax + 0x88] */ r_ecx = R32((u32)(r_eax+0x88u));
    /* 0058d929: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x58d92eu); f_005ecd00();
    /* 0058d92e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0058d931: mov edx, dword ptr [ecx + 0x88] */ r_edx = R32((u32)(r_ecx+0x88u));
    /* 0058d937: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0058d93a: mov ecx, dword ptr [eax + 0x88] */ r_ecx = R32((u32)(r_eax+0x88u));
    /* 0058d940: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0058d942: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0058d945: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58d947u); call_ind(t); }
    /* 0058d947: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0058d94a: mov edx, dword ptr [ecx + 0x84] */ r_edx = R32((u32)(r_ecx+0x84u));
    /* 0058d950: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 0058d952: sbb edx, edx */ { u32 c = fC; u32 a = r_edx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 0058d954: and edx, 0 */ {  u32 a = r_edx; u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0058d957: add edx, 0x2d */ {  u32 a = r_edx; u32 b = 0x2du; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0058d95a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058d95b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0058d95e: mov ecx, dword ptr [eax + 0x84] */ r_ecx = R32((u32)(r_eax+0x84u));
    /* 0058d964: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 0058d966: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 0058d968: and ecx, 0x70 */ {  u32 a = r_ecx; u32 b = 0x70u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0058d96b: add ecx, 0x3a */ {  u32 a = r_ecx; u32 b = 0x3au; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0058d96e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058d96f: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0058d972: mov eax, dword ptr [edx + 0x88] */ r_eax = R32((u32)(r_edx+0x88u));
    /* 0058d978: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0058d97b: mov ecx, dword ptr [ecx + 0x88] */ r_ecx = R32((u32)(r_ecx+0x88u));
    /* 0058d981: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0058d983: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0058d986: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58d988u); call_ind(t); }
    /* 0058d988: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0058d98a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0058d98d: mov edx, dword ptr [ecx + 0x88] */ r_edx = R32((u32)(r_ecx+0x88u));
    /* 0058d993: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0058d996: mov ecx, dword ptr [eax + 0x88] */ r_ecx = R32((u32)(r_eax+0x88u));
    /* 0058d99c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0058d99e: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0058d9a1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58d9a3u); call_ind(t); }
L_0058d9a3:; BB(0x0058d9a3);
    /* 0058d9a3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0058d9a6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058d9a7: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0058d9aa: mov ecx, dword ptr [edx + 0x88] */ r_ecx = R32((u32)(r_edx+0x88u));
    /* 0058d9b0: call 0x5ee710 */ r_esp -= 4; W32(r_esp, 0x58d9b5u); f_005ee710();
    /* 0058d9b5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058d9b8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0058d9bf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0058d9c0: mov esp, ebp */ r_esp = r_ebp;
    /* 0058d9c2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058d9c3: ret 4 */ FN_RET(0x0058d840); r_esp += 8; return;
}

void f_0058d9d0(void) /* sub_58D9D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0058d9d0);
    /* 0058d9d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058d9d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0058d9d3: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058d9d6: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 0058d9d9: mov dword ptr [ebp - 0x38], 0x14 */ W32((u32)(r_ebp+0xffffffc8u), 0x14u);
    /* 0058d9e0: mov dword ptr [ebp - 0x34], 0xa */ W32((u32)(r_ebp+0xffffffccu), 0xau);
    /* 0058d9e7: mov dword ptr [ebp - 0x30], 5 */ W32((u32)(r_ebp+0xffffffd0u), 0x5u);
    /* 0058d9ee: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0058d9f5: mov dword ptr [ebp - 0x20], 0x46 */ W32((u32)(r_ebp+0xffffffe0u), 0x46u);
    /* 0058d9fc: mov dword ptr [ebp - 0x1c], 0x1c */ W32((u32)(r_ebp+0xffffffe4u), 0x1cu);
    /* 0058da03: mov dword ptr [ebp - 0x18], 0xe */ W32((u32)(r_ebp+0xffffffe8u), 0xeu);
    /* 0058da0a: mov dword ptr [ebp - 0x14], 7 */ W32((u32)(r_ebp+0xffffffecu), 0x7u);
    /* 0058da11: mov dword ptr [ebp - 0x10], 0x14 */ W32((u32)(r_ebp+0xfffffff0u), 0x14u);
    /* 0058da18: mov dword ptr [ebp - 0xc], 0xa */ W32((u32)(r_ebp+0xfffffff4u), 0xau);
    /* 0058da1f: mov dword ptr [ebp - 8], 5 */ W32((u32)(r_ebp+0xfffffff8u), 0x5u);
    /* 0058da26: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0058da2d: mov dword ptr [ebp - 0x28], 0xa */ W32((u32)(r_ebp+0xffffffd8u), 0xau);
    /* 0058da34: mov dword ptr [ebp - 0x24], 5 */ W32((u32)(r_ebp+0xffffffdcu), 0x5u);
    /* 0058da3b: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0058da3e: cmp dword ptr [eax + 0x84], 0 */ {  u32 a = R32((u32)(r_eax+0x84u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058da45: jne 0x58da77 */ if (!fZ) goto L_0058da77;
L_0058da47:; BB(0x0058da47);
    /* 0058da47: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0058da4a: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0058da4d: mov edx, dword ptr [0x793584] */ r_edx = R32((u32)(0x793584u));
    /* 0058da53: lea eax, [edx + ecx + 0x3ba4] */ r_eax = (u32)(r_edx+r_ecx+0x3ba4u);
    /* 0058da5a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058da5b: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0058da5e: call 0x58d840 */ r_esp -= 4; W32(r_esp, 0x58da63u); f_0058d840();
    /* 0058da63: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0058da66: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058da67: mov ecx, dword ptr [0x793584] */ r_ecx = R32((u32)(0x793584u));
    /* 0058da6d: call 0x58a4e0 */ r_esp -= 4; W32(r_esp, 0x58da72u); f_0058a4e0();
    /* 0058da72: jmp 0x58db25 */ goto L_0058db25;
L_0058da77:; BB(0x0058da77);
    /* 0058da77: mov edx, dword ptr [0x793584] */ r_edx = R32((u32)(0x793584u));
    /* 0058da7d: mov ecx, dword ptr [edx + 0x310] */ r_ecx = R32((u32)(r_edx+0x310u));
    /* 0058da83: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x58da88u); f_00600230();
    /* 0058da88: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0058da8b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058da8d: je 0x58daa9 */ if (fZ) goto L_0058daa9;
L_0058da8f:; BB(0x0058da8f);
    /* 0058da8f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0058da92: mov edx, dword ptr [ebp + ecx*4 - 0x20] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffe0u));
    /* 0058da96: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058da97: mov eax, dword ptr [0x793584] */ r_eax = R32((u32)(0x793584u));
    /* 0058da9c: mov ecx, dword ptr [eax + 0x3b68] */ r_ecx = R32((u32)(r_eax+0x3b68u));
    /* 0058daa2: call 0x585ad0 */ r_esp -= 4; W32(r_esp, 0x58daa7u); f_00585ad0();
    /* 0058daa7: jmp 0x58db25 */ goto L_0058db25;
L_0058daa9:; BB(0x0058daa9);
    /* 0058daa9: mov ecx, dword ptr [0x793584] */ r_ecx = R32((u32)(0x793584u));
    /* 0058daaf: call 0x58a470 */ r_esp -= 4; W32(r_esp, 0x58dab4u); f_0058a470();
    /* 0058dab4: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058dab7: jne 0x58dad3 */ if (!fZ) goto L_0058dad3;
L_0058dab9:; BB(0x0058dab9);
    /* 0058dab9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0058dabc: mov edx, dword ptr [ebp + ecx*4 - 0x28] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffd8u));
    /* 0058dac0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058dac1: mov eax, dword ptr [0x793584] */ r_eax = R32((u32)(0x793584u));
    /* 0058dac6: mov ecx, dword ptr [eax + 0x3b68] */ r_ecx = R32((u32)(r_eax+0x3b68u));
    /* 0058dacc: call 0x585ad0 */ r_esp -= 4; W32(r_esp, 0x58dad1u); f_00585ad0();
    /* 0058dad1: jmp 0x58db25 */ goto L_0058db25;
L_0058dad3:; BB(0x0058dad3);
    /* 0058dad3: mov ecx, dword ptr [0x793584] */ r_ecx = R32((u32)(0x793584u));
    /* 0058dad9: call 0x58a470 */ r_esp -= 4; W32(r_esp, 0x58dadeu); f_0058a470();
    /* 0058dade: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058dae1: jle 0x58db0d */ if ((fZ||fS!=fO)) goto L_0058db0d;
L_0058dae3:; BB(0x0058dae3);
    /* 0058dae3: mov ecx, dword ptr [0x793584] */ r_ecx = R32((u32)(0x793584u));
    /* 0058dae9: call 0x58a470 */ r_esp -= 4; W32(r_esp, 0x58daeeu); f_0058a470();
    /* 0058daee: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058daf1: jge 0x58db0d */ if ((fS==fO)) goto L_0058db0d;
L_0058daf3:; BB(0x0058daf3);
    /* 0058daf3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0058daf6: mov edx, dword ptr [ebp + ecx*4 - 0x10] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xfffffff0u));
    /* 0058dafa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058dafb: mov eax, dword ptr [0x793584] */ r_eax = R32((u32)(0x793584u));
    /* 0058db00: mov ecx, dword ptr [eax + 0x3b68] */ r_ecx = R32((u32)(r_eax+0x3b68u));
    /* 0058db06: call 0x585ad0 */ r_esp -= 4; W32(r_esp, 0x58db0bu); f_00585ad0();
    /* 0058db0b: jmp 0x58db25 */ goto L_0058db25;
L_0058db0d:; BB(0x0058db0d);
    /* 0058db0d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0058db10: mov edx, dword ptr [ebp + ecx*4 - 0x38] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffc8u));
    /* 0058db14: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058db15: mov eax, dword ptr [0x793584] */ r_eax = R32((u32)(0x793584u));
    /* 0058db1a: mov ecx, dword ptr [eax + 0x3b68] */ r_ecx = R32((u32)(r_eax+0x3b68u));
    /* 0058db20: call 0x585ad0 */ r_esp -= 4; W32(r_esp, 0x58db25u); f_00585ad0();
L_0058db25:; BB(0x0058db25);
    /* 0058db25: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0058db28: call 0x58dce0 */ r_esp -= 4; W32(r_esp, 0x58db2du); f_0058dce0();
    /* 0058db2d: mov esp, ebp */ r_esp = r_ebp;
    /* 0058db2f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058db30: ret 4 */ FN_RET(0x0058d9d0); r_esp += 8; return;
}

void f_0058dce0(void) /* sub_58DCE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0058dce0);
    /* 0058dce0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058dce1: mov ebp, esp */ r_ebp = r_esp;
    /* 0058dce3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058dce6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0058dce9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058dcec: mov byte ptr [eax + 0x49], 0 */ W8((u32)(r_eax+0x49u), 0x0u);
    /* 0058dcf0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058dcf3: mov byte ptr [ecx + 0x48], 0 */ W8((u32)(r_ecx+0x48u), 0x0u);
    /* 0058dcf7: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058dcfa: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0058dcfc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058dcff: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 0058dd05: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x58dd07u); call_ind(t); }
    /* 0058dd07: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0058dd0a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058dd0d: cmp dword ptr [eax + 0x84], 0 */ {  u32 a = R32((u32)(r_eax+0x84u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058dd14: jne 0x58dde0 */ if (!fZ) goto L_0058dde0;
L_0058dd1a:; BB(0x0058dd1a);
    /* 0058dd1a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058dd1d: mov edx, dword ptr [ecx + 0x74] */ r_edx = R32((u32)(r_ecx+0x74u));
    /* 0058dd20: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0058dd23: cmp edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058dd26: jge 0x58dd55 */ if ((fS==fO)) goto L_0058dd55;
L_0058dd28:; BB(0x0058dd28);
    /* 0058dd28: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058dd2b: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 0058dd2e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058dd31: mov eax, dword ptr [edx + 0x60] */ r_eax = R32((u32)(r_edx+0x60u));
    /* 0058dd34: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0058dd36: mov ecx, eax */ r_ecx = r_eax;
    /* 0058dd38: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0058dd3b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58dd3du); call_ind(t); }
    /* 0058dd3d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058dd40: mov edx, dword ptr [ecx + 0x60] */ r_edx = R32((u32)(r_ecx+0x60u));
    /* 0058dd43: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058dd46: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 0058dd49: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0058dd4b: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 0058dd51: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58dd53u); call_ind(t); }
    /* 0058dd53: jmp 0x58dd7e */ goto L_0058dd7e;
L_0058dd55:; BB(0x0058dd55);
    /* 0058dd55: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058dd58: mov edx, dword ptr [ecx + 0x60] */ r_edx = R32((u32)(r_ecx+0x60u));
    /* 0058dd5b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058dd5e: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 0058dd61: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0058dd63: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0058dd66: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58dd68u); call_ind(t); }
    /* 0058dd68: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058dd6b: mov edx, dword ptr [ecx + 0x60] */ r_edx = R32((u32)(r_ecx+0x60u));
    /* 0058dd6e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058dd71: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 0058dd74: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0058dd76: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 0058dd7c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58dd7eu); call_ind(t); }
L_0058dd7e:; BB(0x0058dd7e);
    /* 0058dd7e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058dd81: cmp dword ptr [ecx + 0x74], 0 */ {  u32 a = R32((u32)(r_ecx+0x74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058dd85: jle 0x58ddb2 */ if ((fZ||fS!=fO)) goto L_0058ddb2;
L_0058dd87:; BB(0x0058dd87);
    /* 0058dd87: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058dd8a: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 0058dd8d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058dd90: mov ecx, dword ptr [ecx + 0x5c] */ r_ecx = R32((u32)(r_ecx+0x5cu));
    /* 0058dd93: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0058dd95: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0058dd98: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58dd9au); call_ind(t); }
    /* 0058dd9a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058dd9d: mov edx, dword ptr [ecx + 0x5c] */ r_edx = R32((u32)(r_ecx+0x5cu));
    /* 0058dda0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058dda3: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 0058dda6: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0058dda8: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 0058ddae: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58ddb0u); call_ind(t); }
    /* 0058ddb0: jmp 0x58dddb */ goto L_0058dddb;
L_0058ddb2:; BB(0x0058ddb2);
    /* 0058ddb2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058ddb5: mov edx, dword ptr [ecx + 0x5c] */ r_edx = R32((u32)(r_ecx+0x5cu));
    /* 0058ddb8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058ddbb: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 0058ddbe: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0058ddc0: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0058ddc3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58ddc5u); call_ind(t); }
    /* 0058ddc5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058ddc8: mov edx, dword ptr [ecx + 0x5c] */ r_edx = R32((u32)(r_ecx+0x5cu));
    /* 0058ddcb: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058ddce: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 0058ddd1: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0058ddd3: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 0058ddd9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58dddbu); call_ind(t); }
L_0058dddb:; BB(0x0058dddb);
    /* 0058dddb: jmp 0x58deeb */ goto L_0058deeb;
L_0058dde0:; BB(0x0058dde0);
    /* 0058dde0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058dde3: cmp dword ptr [ecx + 0x84], 1 */ {  u32 a = R32((u32)(r_ecx+0x84u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058ddea: jne 0x58deeb */ if (!fZ) goto L_0058deeb;
L_0058ddf0:; BB(0x0058ddf0);
    /* 0058ddf0: mov edx, dword ptr [0x793584] */ r_edx = R32((u32)(0x793584u));
    /* 0058ddf6: mov eax, dword ptr [edx + 0x3b68] */ r_eax = R32((u32)(r_edx+0x3b68u));
    /* 0058ddfc: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058de00: je 0x58dee3 */ if (fZ) goto L_0058dee3;
L_0058de06:; BB(0x0058de06);
    /* 0058de06: mov ecx, dword ptr [0x793584] */ r_ecx = R32((u32)(0x793584u));
    /* 0058de0c: mov ecx, dword ptr [ecx + 0x3b68] */ r_ecx = R32((u32)(r_ecx+0x3b68u));
    /* 0058de12: call 0x585eb0 */ r_esp -= 4; W32(r_esp, 0x58de17u); f_00585eb0();
    /* 0058de17: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0058de1a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058de1c: je 0x58dee3 */ if (fZ) goto L_0058dee3;
L_0058de22:; BB(0x0058de22);
    /* 0058de22: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058de25: mov ecx, dword ptr [eax + 0x74] */ r_ecx = R32((u32)(r_eax+0x74u));
    /* 0058de28: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0058de2b: cmp ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058de2e: jge 0x58de5b */ if ((fS==fO)) goto L_0058de5b;
L_0058de30:; BB(0x0058de30);
    /* 0058de30: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058de33: mov eax, dword ptr [edx + 0x60] */ r_eax = R32((u32)(r_edx+0x60u));
    /* 0058de36: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058de39: mov ecx, dword ptr [ecx + 0x60] */ r_ecx = R32((u32)(r_ecx+0x60u));
    /* 0058de3c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0058de3e: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0058de41: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58de43u); call_ind(t); }
    /* 0058de43: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058de46: mov edx, dword ptr [ecx + 0x60] */ r_edx = R32((u32)(r_ecx+0x60u));
    /* 0058de49: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058de4c: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 0058de4f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0058de51: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 0058de57: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58de59u); call_ind(t); }
    /* 0058de59: jmp 0x58de84 */ goto L_0058de84;
L_0058de5b:; BB(0x0058de5b);
    /* 0058de5b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058de5e: mov edx, dword ptr [ecx + 0x60] */ r_edx = R32((u32)(r_ecx+0x60u));
    /* 0058de61: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058de64: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 0058de67: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0058de69: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0058de6c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58de6eu); call_ind(t); }
    /* 0058de6e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058de71: mov edx, dword ptr [ecx + 0x60] */ r_edx = R32((u32)(r_ecx+0x60u));
    /* 0058de74: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058de77: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 0058de7a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0058de7c: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 0058de82: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58de84u); call_ind(t); }
L_0058de84:; BB(0x0058de84);
    /* 0058de84: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058de87: cmp dword ptr [ecx + 0x74], 0 */ {  u32 a = R32((u32)(r_ecx+0x74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058de8b: jle 0x58deb8 */ if ((fZ||fS!=fO)) goto L_0058deb8;
L_0058de8d:; BB(0x0058de8d);
    /* 0058de8d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058de90: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 0058de93: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058de96: mov ecx, dword ptr [ecx + 0x5c] */ r_ecx = R32((u32)(r_ecx+0x5cu));
    /* 0058de99: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0058de9b: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0058de9e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58dea0u); call_ind(t); }
    /* 0058dea0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058dea3: mov edx, dword ptr [ecx + 0x5c] */ r_edx = R32((u32)(r_ecx+0x5cu));
    /* 0058dea6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058dea9: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 0058deac: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0058deae: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 0058deb4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58deb6u); call_ind(t); }
    /* 0058deb6: jmp 0x58dee1 */ goto L_0058dee1;
L_0058deb8:; BB(0x0058deb8);
    /* 0058deb8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058debb: mov edx, dword ptr [ecx + 0x5c] */ r_edx = R32((u32)(r_ecx+0x5cu));
    /* 0058debe: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058dec1: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 0058dec4: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0058dec6: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0058dec9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58decbu); call_ind(t); }
    /* 0058decb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058dece: mov edx, dword ptr [ecx + 0x5c] */ r_edx = R32((u32)(r_ecx+0x5cu));
    /* 0058ded1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058ded4: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 0058ded7: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0058ded9: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 0058dedf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58dee1u); call_ind(t); }
L_0058dee1:; BB(0x0058dee1);
    /* 0058dee1: jmp 0x58deeb */ goto L_0058deeb;
L_0058dee3:; BB(0x0058dee3);
    /* 0058dee3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058dee6: call 0x58def0 */ r_esp -= 4; W32(r_esp, 0x58deebu); f_0058def0();
L_0058deeb:; BB(0x0058deeb);
    /* 0058deeb: mov esp, ebp */ r_esp = r_ebp;
    /* 0058deed: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058deee: ret  */ FN_RET(0x0058dce0); r_esp += 4; return;
}

void f_0058def0(void) /* sub_58DEF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0058def0);
    /* 0058def0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058def1: mov ebp, esp */ r_ebp = r_esp;
    /* 0058def3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058def4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0058def7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058defa: mov byte ptr [eax + 0x49], 0 */ W8((u32)(r_eax+0x49u), 0x0u);
    /* 0058defe: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058df01: mov byte ptr [ecx + 0x48], 0 */ W8((u32)(r_ecx+0x48u), 0x0u);
    /* 0058df05: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058df08: mov eax, dword ptr [edx + 0x60] */ r_eax = R32((u32)(r_edx+0x60u));
    /* 0058df0b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058df0e: mov ecx, dword ptr [ecx + 0x60] */ r_ecx = R32((u32)(r_ecx+0x60u));
    /* 0058df11: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0058df13: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0058df16: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58df18u); call_ind(t); }
    /* 0058df18: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058df1b: mov edx, dword ptr [ecx + 0x60] */ r_edx = R32((u32)(r_ecx+0x60u));
    /* 0058df1e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058df21: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 0058df24: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0058df26: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 0058df2c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58df2eu); call_ind(t); }
    /* 0058df2e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058df31: mov edx, dword ptr [ecx + 0x5c] */ r_edx = R32((u32)(r_ecx+0x5cu));
    /* 0058df34: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058df37: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 0058df3a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0058df3c: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0058df3f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58df41u); call_ind(t); }
    /* 0058df41: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058df44: mov edx, dword ptr [ecx + 0x5c] */ r_edx = R32((u32)(r_ecx+0x5cu));
    /* 0058df47: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058df4a: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 0058df4d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0058df4f: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 0058df55: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58df57u); call_ind(t); }
    /* 0058df57: mov esp, ebp */ r_esp = r_ebp;
    /* 0058df59: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058df5a: ret  */ FN_RET(0x0058def0); r_esp += 4; return;
}

void f_0058dfb0(void) /* sub_58DFB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0058dfb0);
    /* 0058dfb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058dfb1: mov ebp, esp */ r_ebp = r_esp;
    /* 0058dfb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058dfb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0058dfb7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058dfba: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0058dfbd: mov dword ptr [eax + 0x74], ecx */ W32((u32)(r_eax+0x74u), r_ecx);
    /* 0058dfc0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058dfc3: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0058dfc6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058dfc7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058dfca: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0058dfcc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058dfcf: mov eax, dword ptr [edx + 0xbc] */ r_eax = R32((u32)(r_edx+0xbcu));
    /* 0058dfd5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58dfd7u); call_ind(t); }
    /* 0058dfd7: mov esp, ebp */ r_esp = r_ebp;
    /* 0058dfd9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058dfda: ret 4 */ FN_RET(0x0058dfb0); r_esp += 8; return;
}

