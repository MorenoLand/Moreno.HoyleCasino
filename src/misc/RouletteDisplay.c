#include "protos.h"

void f_00521b80(void) /* RouletteDisplay::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00521b80);
    /* 00521b80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00521b81: mov ebp, esp */ r_ebp = r_esp;
    /* 00521b83: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00521b85: push 0x6a3ed3 */ { u32 v = 0x6a3ed3u; r_esp -= 4; W32(r_esp, v); }
    /* 00521b8a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00521b90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00521b91: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00521b94: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00521b99: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00521b9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00521b9c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00521b9f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00521ba5: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00521ba8: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00521bab: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x521bb0u); f_005e9e20();
    /* 00521bb0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00521bb7: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00521bba: mov dword ptr [eax], 0x6c2e20 */ W32((u32)(r_eax), 0x6c2e20u);
    /* 00521bc0: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00521bc3: mov dword ptr [ecx + 0x314], 2 */ W32((u32)(r_ecx+0x314u), 0x2u);
    /* 00521bcd: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00521bd0: mov dword ptr [edx + 8], 0 */ W32((u32)(r_edx+0x8u), 0x0u);
    /* 00521bd7: push 0x190 */ { u32 v = 0x190u; r_esp -= 4; W32(r_esp, v); }
    /* 00521bdc: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x521be1u); f_00686d82();
    /* 00521be1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00521be4: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00521be7: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00521beb: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00521bef: je 0x521bfe */ if (fZ) goto L_00521bfe;
L_00521bf1:; BB(0x00521bf1);
    /* 00521bf1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00521bf4: call 0x5f5f50 */ r_esp -= 4; W32(r_esp, 0x521bf9u); f_005f5f50();
    /* 00521bf9: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00521bfc: jmp 0x521c05 */ goto L_00521c05;
L_00521bfe:; BB(0x00521bfe);
    /* 00521bfe: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_00521c05:; BB(0x00521c05);
    /* 00521c05: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00521c08: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00521c0b: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00521c0f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00521c12: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00521c15: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 00521c18: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00521c1b: mov dword ptr [eax + 4], 0 */ W32((u32)(r_eax+0x4u), 0x0u);
    /* 00521c22: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00521c25: mov dword ptr [ecx + 0x10], 0 */ W32((u32)(r_ecx+0x10u), 0x0u);
    /* 00521c2c: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00521c2f: mov dword ptr [edx + 0x14], 0 */ W32((u32)(r_edx+0x14u), 0x0u);
    /* 00521c36: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00521c39: mov dword ptr [eax + 0x318], 0 */ W32((u32)(r_eax+0x318u), 0x0u);
    /* 00521c43: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00521c4a: jmp 0x521c55 */ goto L_00521c55;
L_00521c4c:; BB(0x00521c4c);
    /* 00521c4c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00521c4f: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00521c52: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_00521c55:; BB(0x00521c55);
    /* 00521c55: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00521c59: jge 0x521c6e */ if ((fS==fO)) goto L_00521c6e;
L_00521c5b:; BB(0x00521c5b);
    /* 00521c5b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00521c5e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00521c61: mov dword ptr [eax + edx*4 + 0x304], 0 */ W32((u32)(r_eax+r_edx*4+0x304u), 0x0u);
    /* 00521c6c: jmp 0x521c4c */ goto L_00521c4c;
L_00521c6e:; BB(0x00521c6e);
    /* 00521c6e: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00521c75: jmp 0x521c80 */ goto L_00521c80;
L_00521c77:; BB(0x00521c77);
    /* 00521c77: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00521c7a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00521c7d: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_00521c80:; BB(0x00521c80);
    /* 00521c80: cmp dword ptr [ebp - 0x10], 0x1a */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x1au; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00521c84: jge 0x521c96 */ if ((fS==fO)) goto L_00521c96;
L_00521c86:; BB(0x00521c86);
    /* 00521c86: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00521c89: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00521c8c: mov dword ptr [eax + edx*4 + 0x18], 0 */ W32((u32)(r_eax+r_edx*4+0x18u), 0x0u);
    /* 00521c94: jmp 0x521c77 */ goto L_00521c77;
L_00521c96:; BB(0x00521c96);
    /* 00521c96: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00521c9d: jmp 0x521ca8 */ goto L_00521ca8;
L_00521c9f:; BB(0x00521c9f);
    /* 00521c9f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00521ca2: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00521ca5: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_00521ca8:; BB(0x00521ca8);
    /* 00521ca8: cmp dword ptr [ebp - 0x10], 0xa1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xa1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00521caf: jge 0x521cc4 */ if ((fS==fO)) goto L_00521cc4;
L_00521cb1:; BB(0x00521cb1);
    /* 00521cb1: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00521cb4: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00521cb7: mov dword ptr [eax + edx*4 + 0x80], 0 */ W32((u32)(r_eax+r_edx*4+0x80u), 0x0u);
    /* 00521cc2: jmp 0x521c9f */ goto L_00521c9f;
L_00521cc4:; BB(0x00521cc4);
    /* 00521cc4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00521ccb: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00521cce: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00521cd1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00521cd8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00521cd9: mov esp, ebp */ r_esp = r_ebp;
    /* 00521cdb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00521cdc: ret  */ FN_RET(0x00521b80); r_esp += 4; return;
}

void f_00521ce0(void) /* RouletteDisplay::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00521ce0);
    /* 00521ce0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00521ce1: mov ebp, esp */ r_ebp = r_esp;
    /* 00521ce3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00521ce5: push 0x6a3ef6 */ { u32 v = 0x6a3ef6u; r_esp -= 4; W32(r_esp, v); }
    /* 00521cea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00521cf0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00521cf1: sub esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00521cf4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00521cf9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00521cfb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00521cfc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00521cff: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00521d05: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 00521d08: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 00521d0b: mov dword ptr [eax], 0x6c2e20 */ W32((u32)(r_eax), 0x6c2e20u);
    /* 00521d11: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00521d18: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00521d1b: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00521d1e: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00521d21: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00521d24: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00521d27: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00521d2b: je 0x521d40 */ if (fZ) goto L_00521d40;
L_00521d2d:; BB(0x00521d2d);
    /* 00521d2d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00521d2f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00521d32: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00521d34: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00521d37: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00521d39: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x521d3bu); call_ind(t); }
    /* 00521d3b: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 00521d3e: jmp 0x521d47 */ goto L_00521d47;
L_00521d40:; BB(0x00521d40);
    /* 00521d40: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
L_00521d47:; BB(0x00521d47);
    /* 00521d47: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00521d4a: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 00521d4d: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00521d50: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00521d53: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00521d56: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00521d5a: je 0x521d6f */ if (fZ) goto L_00521d6f;
L_00521d5c:; BB(0x00521d5c);
    /* 00521d5c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00521d5e: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00521d61: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00521d63: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00521d66: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00521d68: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x521d6au); call_ind(t); }
    /* 00521d6a: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 00521d6d: jmp 0x521d76 */ goto L_00521d76;
L_00521d6f:; BB(0x00521d6f);
    /* 00521d6f: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
L_00521d76:; BB(0x00521d76);
    /* 00521d76: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00521d79: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00521d7c: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 00521d7f: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00521d82: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00521d85: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00521d89: je 0x521d9e */ if (fZ) goto L_00521d9e;
L_00521d8b:; BB(0x00521d8b);
    /* 00521d8b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00521d8d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00521d90: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00521d92: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00521d95: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00521d97: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x521d99u); call_ind(t); }
    /* 00521d99: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 00521d9c: jmp 0x521da5 */ goto L_00521da5;
L_00521d9e:; BB(0x00521d9e);
    /* 00521d9e: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
L_00521da5:; BB(0x00521da5);
    /* 00521da5: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00521da8: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 00521dab: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 00521dae: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00521db1: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00521db4: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00521db8: je 0x521dcd */ if (fZ) goto L_00521dcd;
L_00521dba:; BB(0x00521dba);
    /* 00521dba: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00521dbc: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00521dbf: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00521dc1: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00521dc4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00521dc6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x521dc8u); call_ind(t); }
    /* 00521dc8: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 00521dcb: jmp 0x521dd4 */ goto L_00521dd4;
L_00521dcd:; BB(0x00521dcd);
    /* 00521dcd: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
L_00521dd4:; BB(0x00521dd4);
    /* 00521dd4: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00521dd7: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 00521dda: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 00521ddd: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00521de0: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00521de3: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00521de7: je 0x521dfc */ if (fZ) goto L_00521dfc;
L_00521de9:; BB(0x00521de9);
    /* 00521de9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00521deb: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00521dee: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00521df0: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00521df3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00521df5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x521df7u); call_ind(t); }
    /* 00521df7: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 00521dfa: jmp 0x521e03 */ goto L_00521e03;
L_00521dfc:; BB(0x00521dfc);
    /* 00521dfc: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
L_00521e03:; BB(0x00521e03);
    /* 00521e03: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00521e0a: jmp 0x521e15 */ goto L_00521e15;
L_00521e0c:; BB(0x00521e0c);
    /* 00521e0c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00521e0f: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00521e12: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_00521e15:; BB(0x00521e15);
    /* 00521e15: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00521e19: jge 0x521e53 */ if ((fS==fO)) goto L_00521e53;
L_00521e1b:; BB(0x00521e1b);
    /* 00521e1b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00521e1e: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 00521e21: mov ecx, dword ptr [eax + edx*4 + 0x304] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x304u));
    /* 00521e28: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 00521e2b: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00521e2e: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 00521e31: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00521e35: je 0x521e4a */ if (fZ) goto L_00521e4a;
L_00521e37:; BB(0x00521e37);
    /* 00521e37: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00521e39: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00521e3c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00521e3e: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00521e41: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00521e43: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x521e45u); call_ind(t); }
    /* 00521e45: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 00521e48: jmp 0x521e51 */ goto L_00521e51;
L_00521e4a:; BB(0x00521e4a);
    /* 00521e4a: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
L_00521e51:; BB(0x00521e51);
    /* 00521e51: jmp 0x521e0c */ goto L_00521e0c;
L_00521e53:; BB(0x00521e53);
    /* 00521e53: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00521e5a: jmp 0x521e65 */ goto L_00521e65;
L_00521e5c:; BB(0x00521e5c);
    /* 00521e5c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00521e5f: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00521e62: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_00521e65:; BB(0x00521e65);
    /* 00521e65: cmp dword ptr [ebp - 0x10], 0x1a */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x1au; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00521e69: jge 0x521ea0 */ if ((fS==fO)) goto L_00521ea0;
L_00521e6b:; BB(0x00521e6b);
    /* 00521e6b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00521e6e: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 00521e71: mov ecx, dword ptr [eax + edx*4 + 0x18] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x18u));
    /* 00521e75: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 00521e78: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00521e7b: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 00521e7e: cmp dword ptr [ebp - 0x44], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00521e82: je 0x521e97 */ if (fZ) goto L_00521e97;
L_00521e84:; BB(0x00521e84);
    /* 00521e84: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00521e86: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00521e89: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00521e8b: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00521e8e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00521e90: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x521e92u); call_ind(t); }
    /* 00521e92: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 00521e95: jmp 0x521e9e */ goto L_00521e9e;
L_00521e97:; BB(0x00521e97);
    /* 00521e97: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
L_00521e9e:; BB(0x00521e9e);
    /* 00521e9e: jmp 0x521e5c */ goto L_00521e5c;
L_00521ea0:; BB(0x00521ea0);
    /* 00521ea0: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00521ea7: jmp 0x521eb2 */ goto L_00521eb2;
L_00521ea9:; BB(0x00521ea9);
    /* 00521ea9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00521eac: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00521eaf: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_00521eb2:; BB(0x00521eb2);
    /* 00521eb2: cmp dword ptr [ebp - 0x10], 0xa1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xa1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00521eb9: jge 0x521ef3 */ if ((fS==fO)) goto L_00521ef3;
L_00521ebb:; BB(0x00521ebb);
    /* 00521ebb: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00521ebe: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 00521ec1: mov ecx, dword ptr [eax + edx*4 + 0x80] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x80u));
    /* 00521ec8: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 00521ecb: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00521ece: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 00521ed1: cmp dword ptr [ebp - 0x4c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00521ed5: je 0x521eea */ if (fZ) goto L_00521eea;
L_00521ed7:; BB(0x00521ed7);
    /* 00521ed7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00521ed9: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00521edc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00521ede: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00521ee1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00521ee3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x521ee5u); call_ind(t); }
    /* 00521ee5: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 00521ee8: jmp 0x521ef1 */ goto L_00521ef1;
L_00521eea:; BB(0x00521eea);
    /* 00521eea: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
L_00521ef1:; BB(0x00521ef1);
    /* 00521ef1: jmp 0x521ea9 */ goto L_00521ea9;
L_00521ef3:; BB(0x00521ef3);
    /* 00521ef3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00521efa: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00521efd: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x521f02u); f_005e9e40();
    /* 00521f02: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00521f05: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00521f0c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00521f0d: mov esp, ebp */ r_esp = r_ebp;
    /* 00521f0f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00521f10: ret  */ FN_RET(0x00521ce0); r_esp += 4; return;
}

