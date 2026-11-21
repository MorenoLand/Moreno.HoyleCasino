#include "protos.h"

void f_0057cb70(void) /* casinotutorial::func_0057cb70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0057cb70);
    /* 0057cb70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057cb71: mov ebp, esp */ r_ebp = r_esp;
    /* 0057cb73: sub esp, 0x11c */ {  u32 a = r_esp; u32 b = 0x11cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057cb79: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0057cb7e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057cb80: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0057cb83: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0057cb84: mov dword ptr [ebp - 0x11c], ecx */ W32((u32)(r_ebp+0xfffffee4u), r_ecx);
    /* 0057cb8a: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057cb8e: jne 0x57cbbe */ if (!fZ) goto L_0057cbbe;
L_0057cb90:; BB(0x0057cb90);
    /* 0057cb90: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0057cb96: call 0x5f88f0 */ r_esp -= 4; W32(r_esp, 0x57cb9bu); f_005f88f0();
    /* 0057cb9b: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0057cb9e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057cba0: je 0x57cbb9 */ if (fZ) goto L_0057cbb9;
L_0057cba2:; BB(0x0057cba2);
    /* 0057cba2: call 0x5ea2e0 */ r_esp -= 4; W32(r_esp, 0x57cba7u); f_005ea2e0();
    /* 0057cba7: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0057cbaa: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057cbac: je 0x57cbb9 */ if (fZ) goto L_0057cbb9;
L_0057cbae:; BB(0x0057cbae);
    /* 0057cbae: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0057cbb4: call 0x5f85d0 */ r_esp -= 4; W32(r_esp, 0x57cbb9u); f_005f85d0();
L_0057cbb9:; BB(0x0057cbb9);
    /* 0057cbb9: jmp 0x57d38d */ goto L_0057d38d;
L_0057cbbe:; BB(0x0057cbbe);
    /* 0057cbbe: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0057cbc4: call 0x5f88f0 */ r_esp -= 4; W32(r_esp, 0x57cbc9u); f_005f88f0();
    /* 0057cbc9: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0057cbcc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057cbce: je 0x57cbe7 */ if (fZ) goto L_0057cbe7;
L_0057cbd0:; BB(0x0057cbd0);
    /* 0057cbd0: call 0x5ea2e0 */ r_esp -= 4; W32(r_esp, 0x57cbd5u); f_005ea2e0();
    /* 0057cbd5: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0057cbd8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057cbda: je 0x57cbe7 */ if (fZ) goto L_0057cbe7;
L_0057cbdc:; BB(0x0057cbdc);
    /* 0057cbdc: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0057cbe2: call 0x5f85d0 */ r_esp -= 4; W32(r_esp, 0x57cbe7u); f_005f85d0();
L_0057cbe7:; BB(0x0057cbe7);
    /* 0057cbe7: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0057cbee: jmp 0x57cbf9 */ goto L_0057cbf9;
L_0057cbf0:; BB(0x0057cbf0);
    /* 0057cbf0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057cbf3: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0057cbf6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0057cbf9:; BB(0x0057cbf9);
    /* 0057cbf9: mov edx, dword ptr [0x793578] */ r_edx = R32((u32)(0x793578u));
    /* 0057cbff: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057cc02: cmp eax, dword ptr [edx + 0x19d4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x19d4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057cc08: jge 0x57cc2c */ if ((fS==fO)) goto L_0057cc2c;
L_0057cc0a:; BB(0x0057cc0a);
    /* 0057cc0a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057cc0d: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057cc10: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0057cc13: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057cc14: mov eax, dword ptr [0x793578] */ r_eax = R32((u32)(0x793578u));
    /* 0057cc19: mov ecx, dword ptr [eax + 0x19d8] */ r_ecx = R32((u32)(r_eax+0x19d8u));
    /* 0057cc1f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057cc22: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 0057cc25: call 0x57c410 */ r_esp -= 4; W32(r_esp, 0x57cc2au); f_0057c410();
    /* 0057cc2a: jmp 0x57cbf0 */ goto L_0057cbf0;
L_0057cc2c:; BB(0x0057cc2c);
    /* 0057cc2c: mov eax, dword ptr [ebp - 0x11c] */ r_eax = R32((u32)(r_ebp+0xfffffee4u));
    /* 0057cc32: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0057cc35: mov dword ptr [eax + 0x1b4], ecx */ W32((u32)(r_eax+0x1b4u), r_ecx);
    /* 0057cc3b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0057cc3e: imul edx, edx, 0x224 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x224u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057cc44: mov eax, dword ptr [0x793578] */ r_eax = R32((u32)(0x793578u));
    /* 0057cc49: mov ecx, dword ptr [eax + 0x19d0] */ r_ecx = R32((u32)(r_eax+0x19d0u));
    /* 0057cc4f: mov edx, dword ptr [ecx + edx + 0x200] */ r_edx = R32((u32)(r_ecx+r_edx+0x200u));
    /* 0057cc56: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0057cc59: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0057cc5c: imul eax, eax, 0x224 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x224u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057cc62: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 0057cc68: mov edx, dword ptr [ecx + 0x19d0] */ r_edx = R32((u32)(r_ecx+0x19d0u));
    /* 0057cc6e: mov eax, dword ptr [edx + eax + 0x204] */ r_eax = R32((u32)(r_edx+r_eax+0x204u));
    /* 0057cc75: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0057cc78: cmp dword ptr [ebp - 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057cc7c: jne 0x57cc94 */ if (!fZ) goto L_0057cc94;
L_0057cc7e:; BB(0x0057cc7e);
    /* 0057cc7e: push 0x280 */ { u32 v = 0x280u; r_esp -= 4; W32(r_esp, v); }
    /* 0057cc83: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057cc86: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057cc87: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0057cc8d: call 0x5f8510 */ r_esp -= 4; W32(r_esp, 0x57cc92u); f_005f8510();
    /* 0057cc92: jmp 0x57cca7 */ goto L_0057cca7;
L_0057cc94:; BB(0x0057cc94);
    /* 0057cc94: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057cc97: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057cc98: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057cc9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057cc9c: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0057cca2: call 0x5f8510 */ r_esp -= 4; W32(r_esp, 0x57cca7u); f_005f8510();
L_0057cca7:; BB(0x0057cca7);
    /* 0057cca7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057ccaa: sub ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0057ccad: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057ccae: mov edx, dword ptr [ebp - 0x11c] */ r_edx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0057ccb4: mov ecx, dword ptr [edx + 0x1d0] */ r_ecx = R32((u32)(r_edx+0x1d0u));
    /* 0057ccba: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x57ccbfu); f_005ecc60();
    /* 0057ccbf: cmp dword ptr [ebp - 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057ccc3: jne 0x57ccdd */ if (!fZ) goto L_0057ccdd;
L_0057ccc5:; BB(0x0057ccc5);
    /* 0057ccc5: push 0x280 */ { u32 v = 0x280u; r_esp -= 4; W32(r_esp, v); }
    /* 0057ccca: mov eax, dword ptr [ebp - 0x11c] */ r_eax = R32((u32)(r_ebp+0xfffffee4u));
    /* 0057ccd0: mov ecx, dword ptr [eax + 0x1d0] */ r_ecx = R32((u32)(r_eax+0x1d0u));
    /* 0057ccd6: call 0x5eccb0 */ r_esp -= 4; W32(r_esp, 0x57ccdbu); f_005eccb0();
    /* 0057ccdb: jmp 0x57ccf5 */ goto L_0057ccf5;
L_0057ccdd:; BB(0x0057ccdd);
    /* 0057ccdd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057cce0: sub ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0057cce3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057cce4: mov edx, dword ptr [ebp - 0x11c] */ r_edx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0057ccea: mov ecx, dword ptr [edx + 0x1d0] */ r_ecx = R32((u32)(r_edx+0x1d0u));
    /* 0057ccf0: call 0x5eccb0 */ r_esp -= 4; W32(r_esp, 0x57ccf5u); f_005eccb0();
L_0057ccf5:; BB(0x0057ccf5);
    /* 0057ccf5: push 0x1fe */ { u32 v = 0x1feu; r_esp -= 4; W32(r_esp, v); }
    /* 0057ccfa: mov eax, dword ptr [ebp - 0x11c] */ r_eax = R32((u32)(r_ebp+0xfffffee4u));
    /* 0057cd00: mov ecx, dword ptr [eax + 0x1d0] */ r_ecx = R32((u32)(r_eax+0x1d0u));
    /* 0057cd06: mov edx, dword ptr [ebp - 0x11c] */ r_edx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0057cd0c: mov eax, dword ptr [edx + 0x1d0] */ r_eax = R32((u32)(r_edx+0x1d0u));
    /* 0057cd12: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057cd14: mov ecx, eax */ r_ecx = r_eax;
    /* 0057cd16: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0057cd19: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57cd1bu); call_ind(t); }
    /* 0057cd1b: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0057cd1d: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0057cd1f: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0057cd25: mov edx, dword ptr [ecx + 0x1d0] */ r_edx = R32((u32)(r_ecx+0x1d0u));
    /* 0057cd2b: mov eax, dword ptr [ebp - 0x11c] */ r_eax = R32((u32)(r_ebp+0xfffffee4u));
    /* 0057cd31: mov ecx, dword ptr [eax + 0x1d0] */ r_ecx = R32((u32)(r_eax+0x1d0u));
    /* 0057cd37: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057cd39: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0057cd3c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57cd3eu); call_ind(t); }
    /* 0057cd3e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0057cd41: imul ecx, ecx, 0x224 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x224u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057cd47: mov edx, dword ptr [0x793578] */ r_edx = R32((u32)(0x793578u));
    /* 0057cd4d: mov eax, dword ptr [edx + 0x19d0] */ r_eax = R32((u32)(r_edx+0x19d0u));
    /* 0057cd53: movzx ecx, byte ptr [eax + ecx + 0x219] */ r_ecx = (u32)R8((u32)(r_eax+r_ecx+0x219u));
    /* 0057cd5b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057cd5d: je 0x57cda4 */ if (fZ) goto L_0057cda4;
L_0057cd5f:; BB(0x0057cd5f);
    /* 0057cd5f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0057cd62: imul edx, edx, 0x224 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x224u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057cd68: mov eax, dword ptr [0x793578] */ r_eax = R32((u32)(0x793578u));
    /* 0057cd6d: mov ecx, dword ptr [eax + 0x19d0] */ r_ecx = R32((u32)(r_eax+0x19d0u));
    /* 0057cd73: mov edx, dword ptr [ecx + edx + 0x220] */ r_edx = R32((u32)(r_ecx+r_edx+0x220u));
    /* 0057cd7a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057cd7b: mov eax, dword ptr [ebp - 0x11c] */ r_eax = R32((u32)(r_ebp+0xfffffee4u));
    /* 0057cd81: mov ecx, dword ptr [eax + 0x1d0] */ r_ecx = R32((u32)(r_eax+0x1d0u));
    /* 0057cd87: mov edx, dword ptr [ebp - 0x11c] */ r_edx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0057cd8d: mov eax, dword ptr [edx + 0x1d0] */ r_eax = R32((u32)(r_edx+0x1d0u));
    /* 0057cd93: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057cd95: mov ecx, eax */ r_ecx = r_eax;
    /* 0057cd97: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0057cd9d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57cd9fu); call_ind(t); }
    /* 0057cd9f: jmp 0x57cf75 */ goto L_0057cf75;
L_0057cda4:; BB(0x0057cda4);
    /* 0057cda4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0057cda7: imul ecx, ecx, 0x224 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x224u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057cdad: mov edx, dword ptr [0x793578] */ r_edx = R32((u32)(0x793578u));
    /* 0057cdb3: mov eax, dword ptr [edx + 0x19d0] */ r_eax = R32((u32)(r_edx+0x19d0u));
    /* 0057cdb9: lea ecx, [eax + ecx + 0x100] */ r_ecx = (u32)(r_eax+r_ecx+0x100u);
    /* 0057cdc0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057cdc1: push 0x6cbf00 */ { u32 v = 0x6cbf00u; r_esp -= 4; W32(r_esp, v); }
    /* 0057cdc6: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x57cdcbu); f_00686ec0();
    /* 0057cdcb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057cdce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057cdd0: jne 0x57ce07 */ if (!fZ) goto L_0057ce07;
L_0057cdd2:; BB(0x0057cdd2);
    /* 0057cdd2: push 0x6cbed8 */ { u32 v = 0x6cbed8u; r_esp -= 4; W32(r_esp, v); }
    /* 0057cdd7: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x57cddcu); f_00630f40();
    /* 0057cddc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057cddf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057cde0: mov edx, dword ptr [ebp - 0x11c] */ r_edx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0057cde6: mov eax, dword ptr [edx + 0x1d0] */ r_eax = R32((u32)(r_edx+0x1d0u));
    /* 0057cdec: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0057cdf2: mov ecx, dword ptr [ecx + 0x1d0] */ r_ecx = R32((u32)(r_ecx+0x1d0u));
    /* 0057cdf8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0057cdfa: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0057ce00: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57ce02u); call_ind(t); }
    /* 0057ce02: jmp 0x57cf75 */ goto L_0057cf75;
L_0057ce07:; BB(0x0057ce07);
    /* 0057ce07: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0057ce0a: imul ecx, ecx, 0x224 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x224u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057ce10: mov edx, dword ptr [0x793578] */ r_edx = R32((u32)(0x793578u));
    /* 0057ce16: mov eax, dword ptr [edx + 0x19d0] */ r_eax = R32((u32)(r_edx+0x19d0u));
    /* 0057ce1c: lea ecx, [eax + ecx + 0x100] */ r_ecx = (u32)(r_eax+r_ecx+0x100u);
    /* 0057ce23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057ce24: push 0x6cbebc */ { u32 v = 0x6cbebcu; r_esp -= 4; W32(r_esp, v); }
    /* 0057ce29: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x57ce2eu); f_00686ec0();
    /* 0057ce2e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057ce31: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057ce33: jne 0x57ce6a */ if (!fZ) goto L_0057ce6a;
L_0057ce35:; BB(0x0057ce35);
    /* 0057ce35: push 0x6cbe9c */ { u32 v = 0x6cbe9cu; r_esp -= 4; W32(r_esp, v); }
    /* 0057ce3a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x57ce3fu); f_00630f40();
    /* 0057ce3f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057ce42: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057ce43: mov edx, dword ptr [ebp - 0x11c] */ r_edx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0057ce49: mov eax, dword ptr [edx + 0x1d0] */ r_eax = R32((u32)(r_edx+0x1d0u));
    /* 0057ce4f: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0057ce55: mov ecx, dword ptr [ecx + 0x1d0] */ r_ecx = R32((u32)(r_ecx+0x1d0u));
    /* 0057ce5b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0057ce5d: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0057ce63: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57ce65u); call_ind(t); }
    /* 0057ce65: jmp 0x57cf75 */ goto L_0057cf75;
L_0057ce6a:; BB(0x0057ce6a);
    /* 0057ce6a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0057ce6d: imul ecx, ecx, 0x224 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x224u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057ce73: mov edx, dword ptr [0x793578] */ r_edx = R32((u32)(0x793578u));
    /* 0057ce79: mov eax, dword ptr [edx + 0x19d0] */ r_eax = R32((u32)(r_edx+0x19d0u));
    /* 0057ce7f: lea ecx, [eax + ecx + 0x100] */ r_ecx = (u32)(r_eax+r_ecx+0x100u);
    /* 0057ce86: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057ce87: push 0x6cbe74 */ { u32 v = 0x6cbe74u; r_esp -= 4; W32(r_esp, v); }
    /* 0057ce8c: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x57ce91u); f_00686ec0();
    /* 0057ce91: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057ce94: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057ce96: jne 0x57cecd */ if (!fZ) goto L_0057cecd;
L_0057ce98:; BB(0x0057ce98);
    /* 0057ce98: push 0x6cbe48 */ { u32 v = 0x6cbe48u; r_esp -= 4; W32(r_esp, v); }
    /* 0057ce9d: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x57cea2u); f_00630f40();
    /* 0057cea2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057cea5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057cea6: mov edx, dword ptr [ebp - 0x11c] */ r_edx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0057ceac: mov eax, dword ptr [edx + 0x1d0] */ r_eax = R32((u32)(r_edx+0x1d0u));
    /* 0057ceb2: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0057ceb8: mov ecx, dword ptr [ecx + 0x1d0] */ r_ecx = R32((u32)(r_ecx+0x1d0u));
    /* 0057cebe: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0057cec0: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0057cec6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57cec8u); call_ind(t); }
    /* 0057cec8: jmp 0x57cf75 */ goto L_0057cf75;
L_0057cecd:; BB(0x0057cecd);
    /* 0057cecd: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0057ced0: imul ecx, ecx, 0x224 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x224u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057ced6: mov edx, dword ptr [0x793578] */ r_edx = R32((u32)(0x793578u));
    /* 0057cedc: mov eax, dword ptr [edx + 0x19d0] */ r_eax = R32((u32)(r_edx+0x19d0u));
    /* 0057cee2: lea ecx, [eax + ecx + 0x100] */ r_ecx = (u32)(r_eax+r_ecx+0x100u);
    /* 0057cee9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057ceea: push 0x6cbe24 */ { u32 v = 0x6cbe24u; r_esp -= 4; W32(r_esp, v); }
    /* 0057ceef: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x57cef4u); f_00686ec0();
    /* 0057cef4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057cef7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057cef9: jne 0x57cf2d */ if (!fZ) goto L_0057cf2d;
L_0057cefb:; BB(0x0057cefb);
    /* 0057cefb: push 0x6cbdfc */ { u32 v = 0x6cbdfcu; r_esp -= 4; W32(r_esp, v); }
    /* 0057cf00: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x57cf05u); f_00630f40();
    /* 0057cf05: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057cf08: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057cf09: mov edx, dword ptr [ebp - 0x11c] */ r_edx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0057cf0f: mov eax, dword ptr [edx + 0x1d0] */ r_eax = R32((u32)(r_edx+0x1d0u));
    /* 0057cf15: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0057cf1b: mov ecx, dword ptr [ecx + 0x1d0] */ r_ecx = R32((u32)(r_ecx+0x1d0u));
    /* 0057cf21: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0057cf23: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0057cf29: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57cf2bu); call_ind(t); }
    /* 0057cf2b: jmp 0x57cf75 */ goto L_0057cf75;
L_0057cf2d:; BB(0x0057cf2d);
    /* 0057cf2d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0057cf30: imul ecx, ecx, 0x224 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x224u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057cf36: mov edx, dword ptr [0x793578] */ r_edx = R32((u32)(0x793578u));
    /* 0057cf3c: mov eax, dword ptr [edx + 0x19d0] */ r_eax = R32((u32)(r_edx+0x19d0u));
    /* 0057cf42: lea ecx, [eax + ecx + 0x100] */ r_ecx = (u32)(r_eax+r_ecx+0x100u);
    /* 0057cf49: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057cf4a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x57cf4fu); f_00630f40();
    /* 0057cf4f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057cf52: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057cf53: mov edx, dword ptr [ebp - 0x11c] */ r_edx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0057cf59: mov eax, dword ptr [edx + 0x1d0] */ r_eax = R32((u32)(r_edx+0x1d0u));
    /* 0057cf5f: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0057cf65: mov ecx, dword ptr [ecx + 0x1d0] */ r_ecx = R32((u32)(r_ecx+0x1d0u));
    /* 0057cf6b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0057cf6d: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0057cf73: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57cf75u); call_ind(t); }
L_0057cf75:; BB(0x0057cf75);
    /* 0057cf75: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0057cf7b: mov edx, dword ptr [ecx + 0x1d0] */ r_edx = R32((u32)(r_ecx+0x1d0u));
    /* 0057cf81: mov eax, dword ptr [ebp - 0x11c] */ r_eax = R32((u32)(r_ebp+0xfffffee4u));
    /* 0057cf87: mov ecx, dword ptr [eax + 0x1d0] */ r_ecx = R32((u32)(r_eax+0x1d0u));
    /* 0057cf8d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057cf8f: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0057cf92: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57cf94u); call_ind(t); }
    /* 0057cf94: cmp dword ptr [ebp - 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057cf98: jne 0x57cfbe */ if (!fZ) goto L_0057cfbe;
L_0057cf9a:; BB(0x0057cf9a);
    /* 0057cf9a: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0057cfa0: mov ecx, dword ptr [ecx + 0x1d0] */ r_ecx = R32((u32)(r_ecx+0x1d0u));
    /* 0057cfa6: call 0x5ef440 */ r_esp -= 4; W32(r_esp, 0x57cfabu); f_005ef440();
    /* 0057cfab: add eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0057cfae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057cfaf: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057cfb2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057cfb3: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0057cfb9: call 0x5f8510 */ r_esp -= 4; W32(r_esp, 0x57cfbeu); f_005f8510();
L_0057cfbe:; BB(0x0057cfbe);
    /* 0057cfbe: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0057cfc1: imul eax, eax, 0x224 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x224u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057cfc7: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 0057cfcd: mov edx, dword ptr [ecx + 0x19d0] */ r_edx = R32((u32)(r_ecx+0x19d0u));
    /* 0057cfd3: cmp dword ptr [edx + eax + 0x208], 0 */ {  u32 a = R32((u32)(r_edx+r_eax+0x208u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057cfdb: je 0x57d1cf */ if (fZ) goto L_0057d1cf;
L_0057cfe1:; BB(0x0057cfe1);
    /* 0057cfe1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0057cfe4: imul eax, eax, 0x224 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x224u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057cfea: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 0057cff0: mov edx, dword ptr [ecx + 0x19d0] */ r_edx = R32((u32)(r_ecx+0x19d0u));
    /* 0057cff6: mov eax, dword ptr [edx + eax + 0x208] */ r_eax = R32((u32)(r_edx+r_eax+0x208u));
    /* 0057cffd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057cffe: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0057d004: mov ecx, dword ptr [ecx + 0x1d4] */ r_ecx = R32((u32)(r_ecx+0x1d4u));
    /* 0057d00a: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x57d00fu); f_005eaf00();
    /* 0057d00f: push 0x1ff */ { u32 v = 0x1ffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057d014: mov edx, dword ptr [ebp - 0x11c] */ r_edx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0057d01a: mov eax, dword ptr [edx + 0x1d4] */ r_eax = R32((u32)(r_edx+0x1d4u));
    /* 0057d020: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0057d026: mov ecx, dword ptr [ecx + 0x1d4] */ r_ecx = R32((u32)(r_ecx+0x1d4u));
    /* 0057d02c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0057d02e: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0057d031: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57d033u); call_ind(t); }
    /* 0057d033: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0057d039: mov ecx, dword ptr [ecx + 0x1d0] */ r_ecx = R32((u32)(r_ecx+0x1d0u));
    /* 0057d03f: call 0x5ef440 */ r_esp -= 4; W32(r_esp, 0x57d044u); f_005ef440();
    /* 0057d044: add eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0057d047: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057d048: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0057d04a: mov edx, dword ptr [ebp - 0x11c] */ r_edx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0057d050: mov eax, dword ptr [edx + 0x1d4] */ r_eax = R32((u32)(r_edx+0x1d4u));
    /* 0057d056: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0057d05c: mov ecx, dword ptr [ecx + 0x1d4] */ r_ecx = R32((u32)(r_ecx+0x1d4u));
    /* 0057d062: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0057d064: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0057d067: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57d069u); call_ind(t); }
    /* 0057d069: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0057d06f: mov edx, dword ptr [ecx + 0x1d4] */ r_edx = R32((u32)(r_ecx+0x1d4u));
    /* 0057d075: mov eax, dword ptr [ebp - 0x11c] */ r_eax = R32((u32)(r_ebp+0xfffffee4u));
    /* 0057d07b: mov ecx, dword ptr [eax + 0x1d4] */ r_ecx = R32((u32)(r_eax+0x1d4u));
    /* 0057d081: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057d083: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0057d086: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57d088u); call_ind(t); }
    /* 0057d088: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0057d08b: imul ecx, ecx, 0x224 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x224u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057d091: mov edx, dword ptr [0x793578] */ r_edx = R32((u32)(0x793578u));
    /* 0057d097: mov eax, dword ptr [edx + 0x19d0] */ r_eax = R32((u32)(r_edx+0x19d0u));
    /* 0057d09d: cmp dword ptr [eax + ecx + 0x20c], 0 */ {  u32 a = R32((u32)(r_eax+r_ecx+0x20cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057d0a5: je 0x57d18f */ if (fZ) goto L_0057d18f;
L_0057d0ab:; BB(0x0057d0ab);
    /* 0057d0ab: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0057d0ae: imul ecx, ecx, 0x224 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x224u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057d0b4: mov edx, dword ptr [0x793578] */ r_edx = R32((u32)(0x793578u));
    /* 0057d0ba: mov eax, dword ptr [edx + 0x19d0] */ r_eax = R32((u32)(r_edx+0x19d0u));
    /* 0057d0c0: mov ecx, dword ptr [eax + ecx + 0x20c] */ r_ecx = R32((u32)(r_eax+r_ecx+0x20cu));
    /* 0057d0c7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057d0c8: mov edx, dword ptr [ebp - 0x11c] */ r_edx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0057d0ce: mov ecx, dword ptr [edx + 0x1d8] */ r_ecx = R32((u32)(r_edx+0x1d8u));
    /* 0057d0d4: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x57d0d9u); f_005eaf00();
    /* 0057d0d9: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 0057d0de: mov eax, dword ptr [ebp - 0x11c] */ r_eax = R32((u32)(r_ebp+0xfffffee4u));
    /* 0057d0e4: mov ecx, dword ptr [eax + 0x1d8] */ r_ecx = R32((u32)(r_eax+0x1d8u));
    /* 0057d0ea: mov edx, dword ptr [ebp - 0x11c] */ r_edx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0057d0f0: mov eax, dword ptr [edx + 0x1d8] */ r_eax = R32((u32)(r_edx+0x1d8u));
    /* 0057d0f6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057d0f8: mov ecx, eax */ r_ecx = r_eax;
    /* 0057d0fa: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0057d0fd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57d0ffu); call_ind(t); }
    /* 0057d0ff: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0057d105: mov ecx, dword ptr [ecx + 0x1d0] */ r_ecx = R32((u32)(r_ecx+0x1d0u));
    /* 0057d10b: call 0x5ef440 */ r_esp -= 4; W32(r_esp, 0x57d110u); f_005ef440();
    /* 0057d110: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0057d113: imul edx, edx, 0x224 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x224u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057d119: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 0057d11f: mov ecx, dword ptr [ecx + 0x19d0] */ r_ecx = R32((u32)(r_ecx+0x19d0u));
    /* 0057d125: mov edx, dword ptr [ecx + edx + 0x214] */ r_edx = R32((u32)(r_ecx+r_edx+0x214u));
    /* 0057d12c: lea eax, [eax + edx + 0x14] */ r_eax = (u32)(r_eax+r_edx+0x14u);
    /* 0057d130: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057d131: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0057d134: imul ecx, ecx, 0x224 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x224u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057d13a: mov edx, dword ptr [0x793578] */ r_edx = R32((u32)(0x793578u));
    /* 0057d140: mov eax, dword ptr [edx + 0x19d0] */ r_eax = R32((u32)(r_edx+0x19d0u));
    /* 0057d146: mov ecx, dword ptr [eax + ecx + 0x210] */ r_ecx = R32((u32)(r_eax+r_ecx+0x210u));
    /* 0057d14d: add ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0057d150: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057d151: mov edx, dword ptr [ebp - 0x11c] */ r_edx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0057d157: mov eax, dword ptr [edx + 0x1d8] */ r_eax = R32((u32)(r_edx+0x1d8u));
    /* 0057d15d: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0057d163: mov ecx, dword ptr [ecx + 0x1d8] */ r_ecx = R32((u32)(r_ecx+0x1d8u));
    /* 0057d169: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0057d16b: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0057d16e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57d170u); call_ind(t); }
    /* 0057d170: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0057d176: mov edx, dword ptr [ecx + 0x1d8] */ r_edx = R32((u32)(r_ecx+0x1d8u));
    /* 0057d17c: mov eax, dword ptr [ebp - 0x11c] */ r_eax = R32((u32)(r_ebp+0xfffffee4u));
    /* 0057d182: mov ecx, dword ptr [eax + 0x1d8] */ r_ecx = R32((u32)(r_eax+0x1d8u));
    /* 0057d188: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057d18a: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0057d18d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57d18fu); call_ind(t); }
L_0057d18f:; BB(0x0057d18f);
    /* 0057d18f: cmp dword ptr [ebp - 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057d193: jne 0x57d1cd */ if (!fZ) goto L_0057d1cd;
L_0057d195:; BB(0x0057d195);
    /* 0057d195: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0057d19b: mov ecx, dword ptr [ecx + 0x1d0] */ r_ecx = R32((u32)(r_ecx+0x1d0u));
    /* 0057d1a1: call 0x5ef440 */ r_esp -= 4; W32(r_esp, 0x57d1a6u); f_005ef440();
    /* 0057d1a6: mov esi, eax */ r_esi = r_eax;
    /* 0057d1a8: mov edx, dword ptr [ebp - 0x11c] */ r_edx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0057d1ae: mov ecx, dword ptr [edx + 0x1d4] */ r_ecx = R32((u32)(r_edx+0x1d4u));
    /* 0057d1b4: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x57d1b9u); f_005f5590();
    /* 0057d1b9: lea eax, [esi + eax + 0x1e] */ r_eax = (u32)(r_esi+r_eax+0x1eu);
    /* 0057d1bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057d1be: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057d1c1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057d1c2: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0057d1c8: call 0x5f8510 */ r_esp -= 4; W32(r_esp, 0x57d1cdu); f_005f8510();
L_0057d1cd:; BB(0x0057d1cd);
    /* 0057d1cd: jmp 0x57d20d */ goto L_0057d20d;
L_0057d1cf:; BB(0x0057d1cf);
    /* 0057d1cf: mov edx, dword ptr [ebp - 0x11c] */ r_edx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0057d1d5: mov eax, dword ptr [edx + 0x1d4] */ r_eax = R32((u32)(r_edx+0x1d4u));
    /* 0057d1db: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0057d1e1: mov ecx, dword ptr [ecx + 0x1d4] */ r_ecx = R32((u32)(r_ecx+0x1d4u));
    /* 0057d1e7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0057d1e9: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0057d1ec: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57d1eeu); call_ind(t); }
    /* 0057d1ee: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0057d1f4: mov edx, dword ptr [ecx + 0x1d8] */ r_edx = R32((u32)(r_ecx+0x1d8u));
    /* 0057d1fa: mov eax, dword ptr [ebp - 0x11c] */ r_eax = R32((u32)(r_ebp+0xfffffee4u));
    /* 0057d200: mov ecx, dword ptr [eax + 0x1d8] */ r_ecx = R32((u32)(r_eax+0x1d8u));
    /* 0057d206: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057d208: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0057d20b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57d20du); call_ind(t); }
L_0057d20d:; BB(0x0057d20d);
    /* 0057d20d: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0057d214: jmp 0x57d21f */ goto L_0057d21f;
L_0057d216:; BB(0x0057d216);
    /* 0057d216: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057d219: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0057d21c: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0057d21f:; BB(0x0057d21f);
    /* 0057d21f: cmp dword ptr [ebp - 8], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057d223: jge 0x57d312 */ if ((fS==fO)) goto L_0057d312;
L_0057d229:; BB(0x0057d229);
    /* 0057d229: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057d22c: add edx, 0x1f5 */ {  u32 a = r_edx; u32 b = 0x1f5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0057d232: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057d233: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057d236: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0057d23c: mov edx, dword ptr [ecx + eax*4 + 0x1b8] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x1b8u));
    /* 0057d243: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057d246: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0057d24c: mov ecx, dword ptr [ecx + eax*4 + 0x1b8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x1b8u));
    /* 0057d253: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057d255: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0057d258: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57d25au); call_ind(t); }
    /* 0057d25a: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0057d260: call 0x5f8570 */ r_esp -= 4; W32(r_esp, 0x57d265u); f_005f8570();
    /* 0057d265: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057d268: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0057d26b: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0057d26d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057d26e: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0057d274: call 0x5f8550 */ r_esp -= 4; W32(r_esp, 0x57d279u); f_005f8550();
    /* 0057d279: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057d27c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0057d27f: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0057d281: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057d282: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057d285: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0057d28b: mov edx, dword ptr [ecx + eax*4 + 0x1b8] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x1b8u));
    /* 0057d292: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057d295: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0057d29b: mov ecx, dword ptr [ecx + eax*4 + 0x1b8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x1b8u));
    /* 0057d2a2: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057d2a4: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 0057d2a7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57d2a9u); call_ind(t); }
    /* 0057d2a9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057d2ac: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0057d2af: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0057d2b0: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0057d2b2: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0057d2b4: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0057d2b7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057d2ba: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057d2bb: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057d2be: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057d2bf: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057d2c2: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0057d2c8: mov edx, dword ptr [ecx + eax*4 + 0x1b8] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x1b8u));
    /* 0057d2cf: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057d2d2: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0057d2d8: mov ecx, dword ptr [ecx + eax*4 + 0x1b8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x1b8u));
    /* 0057d2df: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057d2e1: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0057d2e4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57d2e6u); call_ind(t); }
    /* 0057d2e6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057d2e9: mov edx, dword ptr [ebp - 0x11c] */ r_edx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0057d2ef: mov eax, dword ptr [edx + ecx*4 + 0x1b8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x1b8u));
    /* 0057d2f6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057d2f9: mov edx, dword ptr [ebp - 0x11c] */ r_edx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0057d2ff: mov ecx, dword ptr [edx + ecx*4 + 0x1b8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x1b8u));
    /* 0057d306: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0057d308: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 0057d30b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x57d30du); call_ind(t); }
    /* 0057d30d: jmp 0x57d216 */ goto L_0057d216;
L_0057d312:; BB(0x0057d312);
    /* 0057d312: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0057d318: call 0x5f8550 */ r_esp -= 4; W32(r_esp, 0x57d31du); f_005f8550();
    /* 0057d31d: cmp eax, 0x280 */ {  u32 a = r_eax; u32 b = 0x280u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057d322: jg 0x57d336 */ if ((!fZ&&fS==fO)) goto L_0057d336;
L_0057d324:; BB(0x0057d324);
    /* 0057d324: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0057d32a: call 0x5f8570 */ r_esp -= 4; W32(r_esp, 0x57d32fu); f_005f8570();
    /* 0057d32f: cmp eax, 0x1e0 */ {  u32 a = r_eax; u32 b = 0x1e0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057d334: jle 0x57d351 */ if ((fZ||fS!=fO)) goto L_0057d351;
L_0057d336:; BB(0x0057d336);
    /* 0057d336: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0057d338: jne 0x57d351 */ if (!fZ) goto L_0057d351;
L_0057d33a:; BB(0x0057d33a);
    /* 0057d33a: push 0x2d6 */ { u32 v = 0x2d6u; r_esp -= 4; W32(r_esp, v); }
    /* 0057d33f: push 0x6cbddc */ { u32 v = 0x6cbddcu; r_esp -= 4; W32(r_esp, v); }
    /* 0057d344: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0057d349: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x57d34eu); f_005e9f20();
    /* 0057d34e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0057d351:; BB(0x0057d351);
    /* 0057d351: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0057d357: call 0x5f8570 */ r_esp -= 4; W32(r_esp, 0x57d35cu); f_005f8570();
    /* 0057d35c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057d35d: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0057d363: call 0x5f8550 */ r_esp -= 4; W32(r_esp, 0x57d368u); f_005f8550();
    /* 0057d368: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057d369: push 0x6cbdc0 */ { u32 v = 0x6cbdc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057d36e: lea edx, [ebp - 0x118] */ r_edx = (u32)(r_ebp+0xfffffee8u);
    /* 0057d374: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057d375: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x57d37bu); call_ind(t); }
    /* 0057d37b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057d37e: lea eax, [ebp - 0x118] */ r_eax = (u32)(r_ebp+0xfffffee8u);
    /* 0057d384: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057d385: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x57d38au); f_0062fde0();
    /* 0057d38a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0057d38d:; BB(0x0057d38d);
    /* 0057d38d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0057d38e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057d391: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0057d393: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x57d398u); f_00686d72();
    /* 0057d398: mov esp, ebp */ r_esp = r_ebp;
    /* 0057d39a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057d39b: ret 4 */ FN_RET(0x0057cb70); r_esp += 8; return;
}

