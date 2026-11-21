#include "protos.h"

void f_0045b0a0(void) /* sub_45B0A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045b0a0);
    /* 0045b0a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045b0a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0045b0a3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045b0a6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0045b0a9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045b0ab: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045b0ae: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x45b0b3u); f_005fb350();
    /* 0045b0b3: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0045b0b6: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 0045b0ba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b0bc: je 0x45b0d0 */ if (fZ) goto L_0045b0d0;
L_0045b0be:; BB(0x0045b0be);
    /* 0045b0be: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045b0c1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0045b0c3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045b0c6: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 0045b0cc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45b0ceu); call_ind(t); }
    /* 0045b0ce: jmp 0x45b0e0 */ goto L_0045b0e0;
L_0045b0d0:; BB(0x0045b0d0);
    /* 0045b0d0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045b0d3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0045b0d5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045b0d8: mov eax, dword ptr [edx + 0xf8] */ r_eax = R32((u32)(r_edx+0xf8u));
    /* 0045b0de: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45b0e0u); call_ind(t); }
L_0045b0e0:; BB(0x0045b0e0);
    /* 0045b0e0: mov esp, ebp */ r_esp = r_ebp;
    /* 0045b0e2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045b0e3: ret 4 */ FN_RET(0x0045b0a0); r_esp += 8; return;
}

void f_0045b0f0(void) /* sub_45B0F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045b0f0);
    /* 0045b0f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045b0f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0045b0f3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045b0f6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0045b0f9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045b0fb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045b0fe: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x45b103u); f_005fb350();
    /* 0045b103: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0045b106: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045b109: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x45b10eu); f_00600230();
    /* 0045b10e: mov esp, ebp */ r_esp = r_ebp;
    /* 0045b110: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045b111: ret  */ FN_RET(0x0045b0f0); r_esp += 4; return;
}

void f_0045b260(void) /* sub_45B260 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045b260);
    /* 0045b260: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045b261: mov ebp, esp */ r_ebp = r_esp;
    /* 0045b263: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045b264: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045b267: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045b26a: mov byte ptr [eax + 4], 0 */ W8((u32)(r_eax+0x4u), 0x0u);
    /* 0045b26e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045b271: mov byte ptr [ecx + 6], 0 */ W8((u32)(r_ecx+0x6u), 0x0u);
    /* 0045b275: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045b278: mov byte ptr [edx + 5], 0 */ W8((u32)(r_edx+0x5u), 0x0u);
    /* 0045b27c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045b27f: mov byte ptr [eax + 7], 0 */ W8((u32)(r_eax+0x7u), 0x0u);
    /* 0045b283: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045b286: mov byte ptr [ecx + 8], 0 */ W8((u32)(r_ecx+0x8u), 0x0u);
    /* 0045b28a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045b28d: mov byte ptr [edx + 9], 0 */ W8((u32)(r_edx+0x9u), 0x0u);
    /* 0045b291: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045b294: mov byte ptr [eax + 0xa], 0 */ W8((u32)(r_eax+0xau), 0x0u);
    /* 0045b298: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b29c: jne 0x45b2ca */ if (!fZ) goto L_0045b2ca;
L_0045b29e:; BB(0x0045b29e);
    /* 0045b29e: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045b2a4: call 0x45ffe0 */ r_esp -= 4; W32(r_esp, 0x45b2a9u); f_0045ffe0();
    /* 0045b2a9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045b2ac: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045b2ad: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045b2af: mov edx, dword ptr [0x790734] */ r_edx = R32((u32)(0x790734u));
    /* 0045b2b5: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0045b2b8: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 0045b2be: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0045b2c1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045b2c3: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0045b2c6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45b2c8u); call_ind(t); }
    /* 0045b2c8: jmp 0x45b2ec */ goto L_0045b2ec;
L_0045b2ca:; BB(0x0045b2ca);
    /* 0045b2ca: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045b2cd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045b2ce: push 0x1f4 */ { u32 v = 0x1f4u; r_esp -= 4; W32(r_esp, v); }
    /* 0045b2d3: mov edx, dword ptr [0x790734] */ r_edx = R32((u32)(0x790734u));
    /* 0045b2d9: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0045b2dc: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 0045b2e2: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0045b2e5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045b2e7: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0045b2ea: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45b2ecu); call_ind(t); }
L_0045b2ec:; BB(0x0045b2ec);
    /* 0045b2ec: mov esp, ebp */ r_esp = r_ebp;
    /* 0045b2ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045b2ef: ret 4 */ FN_RET(0x0045b260); r_esp += 8; return;
}

void f_0045b300(void) /* sub_45B300 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045b300);
    /* 0045b300: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045b301: mov ebp, esp */ r_ebp = r_esp;
    /* 0045b303: sub esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045b306: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 0045b309: mov byte ptr [ebp - 5], 0 */ W8((u32)(r_ebp+0xfffffffbu), 0x0u);
    /* 0045b30d: mov ecx, dword ptr [0x790740] */ r_ecx = R32((u32)(0x790740u));
    /* 0045b313: call 0x4587e0 */ r_esp -= 4; W32(r_esp, 0x45b318u); f_004587e0();
    /* 0045b318: mov eax, dword ptr [0x790738] */ r_eax = R32((u32)(0x790738u));
    /* 0045b31d: mov ecx, dword ptr [eax + 0x124] */ r_ecx = R32((u32)(r_eax+0x124u));
    /* 0045b323: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0045b326: cmp dword ptr [ebp - 0x14], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b32a: je 0x45b38b */ if (fZ) goto L_0045b38b;
L_0045b32c:; BB(0x0045b32c);
    /* 0045b32c: mov edx, dword ptr [0x790738] */ r_edx = R32((u32)(0x790738u));
    /* 0045b332: mov eax, dword ptr [edx + 0x124] */ r_eax = R32((u32)(r_edx+0x124u));
    /* 0045b338: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0045b33b: cmp dword ptr [ebp - 0x18], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b33f: jne 0x45b345 */ if (!fZ) goto L_0045b345;
L_0045b341:; BB(0x0045b341);
    /* 0045b341: mov byte ptr [ebp - 5], 1 */ W8((u32)(r_ebp+0xfffffffbu), 0x1u);
L_0045b345:; BB(0x0045b345);
    /* 0045b345: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0045b348: call 0x45c680 */ r_esp -= 4; W32(r_esp, 0x45b34du); f_0045c680();
    /* 0045b34d: movzx ecx, byte ptr [ebp - 5] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffffbu));
    /* 0045b351: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b353: je 0x45b386 */ if (fZ) goto L_0045b386;
L_0045b355:; BB(0x0045b355);
    /* 0045b355: mov edx, dword ptr [0x790738] */ r_edx = R32((u32)(0x790738u));
    /* 0045b35b: mov eax, dword ptr [edx + 0x104] */ r_eax = R32((u32)(r_edx+0x104u));
    /* 0045b361: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0045b364: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045b36a: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0045b36d: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045b370: mov dword ptr [edx + 0x124], 2 */ W32((u32)(r_edx+0x124u), 0x2u);
    /* 0045b37a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045b37d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0045b380: mov dword ptr [eax + 0x128], ecx */ W32((u32)(r_eax+0x128u), r_ecx);
L_0045b386:; BB(0x0045b386);
    /* 0045b386: jmp 0x45b796 */ goto L_0045b796;
L_0045b38b:; BB(0x0045b38b);
    /* 0045b38b: mov edx, dword ptr [0x790738] */ r_edx = R32((u32)(0x790738u));
    /* 0045b391: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 0045b397: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0045b39a: cmp dword ptr [ebp - 0x24], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b39e: jne 0x45b3a8 */ if (!fZ) goto L_0045b3a8;
L_0045b3a0:; BB(0x0045b3a0);
    /* 0045b3a0: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0045b3a3: call 0x45b7a0 */ r_esp -= 4; W32(r_esp, 0x45b3a8u); f_0045b7a0();
L_0045b3a8:; BB(0x0045b3a8);
    /* 0045b3a8: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0045b3ab: movzx edx, byte ptr [ecx + 6] */ r_edx = (u32)R8((u32)(r_ecx+0x6u));
    /* 0045b3af: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b3b1: jne 0x45b3c0 */ if (!fZ) goto L_0045b3c0;
L_0045b3b3:; BB(0x0045b3b3);
    /* 0045b3b3: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0045b3b6: call 0x45b960 */ r_esp -= 4; W32(r_esp, 0x45b3bbu); f_0045b960();
    /* 0045b3bb: jmp 0x45b796 */ goto L_0045b796;
L_0045b3c0:; BB(0x0045b3c0);
    /* 0045b3c0: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045b3c6: call 0x460840 */ r_esp -= 4; W32(r_esp, 0x45b3cbu); f_00460840();
    /* 0045b3cb: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0045b3ce: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0045b3d3: mov cl, byte ptr [eax + 0x25] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x25u))) & 0xffu);
    /* 0045b3d6: mov byte ptr [ebp - 0x25], cl */ W8((u32)(r_ebp+0xffffffdbu), (u8)r_ecx);
    /* 0045b3d9: movzx edx, byte ptr [ebp - 0x25] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffdbu));
    /* 0045b3dd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b3df: je 0x45b45b */ if (fZ) goto L_0045b45b;
L_0045b3e1:; BB(0x0045b3e1);
    /* 0045b3e1: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b3e5: je 0x45b45b */ if (fZ) goto L_0045b45b;
L_0045b3e7:; BB(0x0045b3e7);
    /* 0045b3e7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045b3ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045b3eb: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x45b3f0u); f_005dcb00();
    /* 0045b3f0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045b3f3: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0045b3f6: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0045b3f9: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x45b3feu); f_0063aac0();
    /* 0045b3fe: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0045b400: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0045b403: cmp dword ptr [ebp - 0x2c], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b407: je 0x45b425 */ if (fZ) goto L_0045b425;
L_0045b409:; BB(0x0045b409);
    /* 0045b409: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0045b40c: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x45b411u); f_0063aac0();
    /* 0045b411: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045b413: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 0045b416: cmp dword ptr [ebp - 0x30], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b41a: je 0x45b425 */ if (fZ) goto L_0045b425;
L_0045b41c:; BB(0x0045b41c);
    /* 0045b41c: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
    /* 0045b423: jmp 0x45b42c */ goto L_0045b42c;
L_0045b425:; BB(0x0045b425);
    /* 0045b425: mov dword ptr [ebp - 0x60], 1 */ W32((u32)(r_ebp+0xffffffa0u), 0x1u);
L_0045b42c:; BB(0x0045b42c);
    /* 0045b42c: movzx eax, byte ptr [ebp - 0x60] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffa0u));
    /* 0045b430: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b432: je 0x45b45b */ if (fZ) goto L_0045b45b;
L_0045b434:; BB(0x0045b434);
    /* 0045b434: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045b437: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045b438: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x45b43du); f_005dcb00();
    /* 0045b43d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045b440: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0045b443: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0045b446: mov byte ptr [edx + 0x4a1], 1 */ W8((u32)(r_edx+0x4a1u), 0x1u);
    /* 0045b44d: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045b453: call 0x460840 */ r_esp -= 4; W32(r_esp, 0x45b458u); f_00460840();
    /* 0045b458: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0045b45b:; BB(0x0045b45b);
    /* 0045b45b: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b45f: je 0x45b4e5 */ if (fZ) goto L_0045b4e5;
L_0045b465:; BB(0x0045b465);
    /* 0045b465: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b469: jne 0x45b47c */ if (!fZ) goto L_0045b47c;
L_0045b46b:; BB(0x0045b46b);
    /* 0045b46b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045b46d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045b46f: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045b475: call 0x460420 */ r_esp -= 4; W32(r_esp, 0x45b47au); f_00460420();
    /* 0045b47a: jmp 0x45b4d4 */ goto L_0045b4d4;
L_0045b47c:; BB(0x0045b47c);
    /* 0045b47c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045b47f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045b480: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x45b485u); f_005dcb00();
    /* 0045b485: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045b488: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0045b48b: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0045b48e: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x45b493u); f_0063aac0();
    /* 0045b493: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0045b495: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 0045b498: cmp dword ptr [ebp - 0x3c], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b49c: je 0x45b4ba */ if (fZ) goto L_0045b4ba;
L_0045b49e:; BB(0x0045b49e);
    /* 0045b49e: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0045b4a1: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x45b4a6u); f_0063aac0();
    /* 0045b4a6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045b4a8: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 0045b4ab: cmp dword ptr [ebp - 0x40], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b4af: je 0x45b4ba */ if (fZ) goto L_0045b4ba;
L_0045b4b1:; BB(0x0045b4b1);
    /* 0045b4b1: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 0045b4b8: jmp 0x45b4c1 */ goto L_0045b4c1;
L_0045b4ba:; BB(0x0045b4ba);
    /* 0045b4ba: mov dword ptr [ebp - 0x64], 1 */ W32((u32)(r_ebp+0xffffff9cu), 0x1u);
L_0045b4c1:; BB(0x0045b4c1);
    /* 0045b4c1: mov al, byte ptr [ebp - 0x64] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff9cu))) & 0xffu);
    /* 0045b4c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045b4c5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045b4c8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045b4c9: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045b4cf: call 0x460420 */ r_esp -= 4; W32(r_esp, 0x45b4d4u); f_00460420();
L_0045b4d4:; BB(0x0045b4d4);
    /* 0045b4d4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045b4d7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045b4d8: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0045b4db: call 0x45b9c0 */ r_esp -= 4; W32(r_esp, 0x45b4e0u); f_0045b9c0();
    /* 0045b4e0: jmp 0x45b796 */ goto L_0045b796;
L_0045b4e5:; BB(0x0045b4e5);
    /* 0045b4e5: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 0045b4e8: movzx ecx, byte ptr [eax + 0xa] */ r_ecx = (u32)R8((u32)(r_eax+0xau));
    /* 0045b4ec: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b4ee: jne 0x45b502 */ if (!fZ) goto L_0045b502;
L_0045b4f0:; BB(0x0045b4f0);
    /* 0045b4f0: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045b4f6: call 0x460d50 */ r_esp -= 4; W32(r_esp, 0x45b4fbu); f_00460d50();
    /* 0045b4fb: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0045b4fe: mov byte ptr [edx + 0xa], 1 */ W8((u32)(r_edx+0xau), 0x1u);
L_0045b502:; BB(0x0045b502);
    /* 0045b502: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045b508: call 0x460ea0 */ r_esp -= 4; W32(r_esp, 0x45b50du); f_00460ea0();
    /* 0045b50d: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0045b510: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b512: je 0x45b53b */ if (fZ) goto L_0045b53b;
L_0045b514:; BB(0x0045b514);
    /* 0045b514: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0045b51a: call 0x5f2870 */ r_esp -= 4; W32(r_esp, 0x45b51fu); f_005f2870();
    /* 0045b51f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045b521: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045b523: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045b529: call 0x460420 */ r_esp -= 4; W32(r_esp, 0x45b52eu); f_00460420();
    /* 0045b52e: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0045b531: call 0x45bdf0 */ r_esp -= 4; W32(r_esp, 0x45b536u); f_0045bdf0();
    /* 0045b536: jmp 0x45b796 */ goto L_0045b796;
L_0045b53b:; BB(0x0045b53b);
    /* 0045b53b: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045b541: call 0x461050 */ r_esp -= 4; W32(r_esp, 0x45b546u); f_00461050();
    /* 0045b546: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0045b549: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b54d: je 0x45b593 */ if (fZ) goto L_0045b593;
L_0045b54f:; BB(0x0045b54f);
    /* 0045b54f: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045b555: mov byte ptr [ecx + 0x116], 0 */ W8((u32)(r_ecx+0x116u), 0x0u);
    /* 0045b55c: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b560: jne 0x45b56b */ if (!fZ) goto L_0045b56b;
L_0045b562:; BB(0x0045b562);
    /* 0045b562: mov dword ptr [ebp - 0x68], 0xffffffff */ W32((u32)(r_ebp+0xffffff98u), 0xffffffffu);
    /* 0045b569: jmp 0x45b571 */ goto L_0045b571;
L_0045b56b:; BB(0x0045b56b);
    /* 0045b56b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045b56e: mov dword ptr [ebp - 0x68], edx */ W32((u32)(r_ebp+0xffffff98u), r_edx);
L_0045b571:; BB(0x0045b571);
    /* 0045b571: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045b573: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0045b576: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045b577: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045b57d: call 0x460420 */ r_esp -= 4; W32(r_esp, 0x45b582u); f_00460420();
    /* 0045b582: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045b585: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045b586: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0045b589: call 0x45be80 */ r_esp -= 4; W32(r_esp, 0x45b58eu); f_0045be80();
    /* 0045b58e: jmp 0x45b796 */ goto L_0045b796;
L_0045b593:; BB(0x0045b593);
    /* 0045b593: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045b599: call 0x461450 */ r_esp -= 4; W32(r_esp, 0x45b59eu); f_00461450();
    /* 0045b59e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0045b5a1: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b5a5: je 0x45b679 */ if (fZ) goto L_0045b679;
L_0045b5ab:; BB(0x0045b5ab);
    /* 0045b5ab: mov edx, dword ptr [0x790738] */ r_edx = R32((u32)(0x790738u));
    /* 0045b5b1: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 0045b5b7: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0045b5ba: cmp dword ptr [ebp - 0x48], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b5be: je 0x45b60e */ if (fZ) goto L_0045b60e;
L_0045b5c0:; BB(0x0045b5c0);
    /* 0045b5c0: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0045b5c3: movzx edx, byte ptr [ecx + 8] */ r_edx = (u32)R8((u32)(r_ecx+0x8u));
    /* 0045b5c7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b5c9: jne 0x45b60e */ if (!fZ) goto L_0045b60e;
L_0045b5cb:; BB(0x0045b5cb);
    /* 0045b5cb: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 0045b5ce: mov byte ptr [eax + 8], 1 */ W8((u32)(r_eax+0x8u), 0x1u);
    /* 0045b5d2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045b5d4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045b5d6: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x45b5dbu); f_0064c8a0();
    /* 0045b5db: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045b5de: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0045b5e1: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0045b5e4: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045b5ea: mov edx, dword ptr [ecx + 0x10c] */ r_edx = R32((u32)(r_ecx+0x10cu));
    /* 0045b5f0: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 0045b5f3: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045b5f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045b5f7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045b5fa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045b5fb: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0045b5fe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045b5ff: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x45b604u); f_005dcb00();
    /* 0045b604: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045b607: mov ecx, eax */ r_ecx = r_eax;
    /* 0045b609: call 0x5d6050 */ r_esp -= 4; W32(r_esp, 0x45b60eu); f_005d6050();
L_0045b60e:; BB(0x0045b60e);
    /* 0045b60e: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b612: jne 0x45b61d */ if (!fZ) goto L_0045b61d;
L_0045b614:; BB(0x0045b614);
    /* 0045b614: mov dword ptr [ebp - 0x6c], 0xffffffff */ W32((u32)(r_ebp+0xffffff94u), 0xffffffffu);
    /* 0045b61b: jmp 0x45b623 */ goto L_0045b623;
L_0045b61d:; BB(0x0045b61d);
    /* 0045b61d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045b620: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
L_0045b623:; BB(0x0045b623);
    /* 0045b623: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045b625: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0045b628: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045b629: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045b62f: call 0x460420 */ r_esp -= 4; W32(r_esp, 0x45b634u); f_00460420();
    /* 0045b634: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045b637: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045b638: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0045b63b: call 0x45c210 */ r_esp -= 4; W32(r_esp, 0x45b640u); f_0045c210();
    /* 0045b640: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 0045b646: call 0x45e8e0 */ r_esp -= 4; W32(r_esp, 0x45b64bu); f_0045e8e0();
    /* 0045b64b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b64e: jne 0x45b674 */ if (!fZ) goto L_0045b674;
L_0045b650:; BB(0x0045b650);
    /* 0045b650: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045b653: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045b654: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045b65a: call 0x4619f0 */ r_esp -= 4; W32(r_esp, 0x45b65fu); f_004619f0();
    /* 0045b65f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0045b662: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b664: je 0x45b674 */ if (fZ) goto L_0045b674;
L_0045b666:; BB(0x0045b666);
    /* 0045b666: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045b668: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045b66b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045b66c: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0045b66f: call 0x45c610 */ r_esp -= 4; W32(r_esp, 0x45b674u); f_0045c610();
L_0045b674:; BB(0x0045b674);
    /* 0045b674: jmp 0x45b796 */ goto L_0045b796;
L_0045b679:; BB(0x0045b679);
    /* 0045b679: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 0045b67f: call 0x45e8e0 */ r_esp -= 4; W32(r_esp, 0x45b684u); f_0045e8e0();
    /* 0045b684: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b687: jne 0x45b6de */ if (!fZ) goto L_0045b6de;
L_0045b689:; BB(0x0045b689);
    /* 0045b689: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045b68f: call 0x4618e0 */ r_esp -= 4; W32(r_esp, 0x45b694u); f_004618e0();
    /* 0045b694: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0045b697: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b69b: je 0x45b6de */ if (fZ) goto L_0045b6de;
L_0045b69d:; BB(0x0045b69d);
    /* 0045b69d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045b69f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045b6a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045b6a3: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045b6a9: call 0x460420 */ r_esp -= 4; W32(r_esp, 0x45b6aeu); f_00460420();
    /* 0045b6ae: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045b6b0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045b6b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045b6b4: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0045b6b7: call 0x45c610 */ r_esp -= 4; W32(r_esp, 0x45b6bcu); f_0045c610();
    /* 0045b6bc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045b6be: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045b6c0: mov edx, dword ptr [0x790734] */ r_edx = R32((u32)(0x790734u));
    /* 0045b6c6: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0045b6c9: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 0045b6cf: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0045b6d2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045b6d4: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0045b6d7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45b6d9u); call_ind(t); }
    /* 0045b6d9: jmp 0x45b796 */ goto L_0045b796;
L_0045b6de:; BB(0x0045b6de);
    /* 0045b6de: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0045b6e1: movzx edx, byte ptr [ecx + 7] */ r_edx = (u32)R8((u32)(r_ecx+0x7u));
    /* 0045b6e5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b6e7: jne 0x45b744 */ if (!fZ) goto L_0045b744;
L_0045b6e9:; BB(0x0045b6e9);
    /* 0045b6e9: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 0045b6ef: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x45b6f4u); f_005da7b0();
    /* 0045b6f4: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0045b6f7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b6f9: je 0x45b744 */ if (fZ) goto L_0045b744;
L_0045b6fb:; BB(0x0045b6fb);
    /* 0045b6fb: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0045b6fe: mov byte ptr [ecx + 7], 1 */ W8((u32)(r_ecx+0x7u), 0x1u);
    /* 0045b702: mov edx, dword ptr [0x790738] */ r_edx = R32((u32)(0x790738u));
    /* 0045b708: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 0045b70b: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0045b70e: mov dword ptr [eax + 0x124], 1 */ W32((u32)(r_eax+0x124u), 0x1u);
    /* 0045b718: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0045b71b: mov dword ptr [ecx + 0x128], 0xffffffff */ W32((u32)(r_ecx+0x128u), 0xffffffffu);
    /* 0045b725: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045b727: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045b729: mov edx, dword ptr [0x790734] */ r_edx = R32((u32)(0x790734u));
    /* 0045b72f: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0045b732: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 0045b738: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0045b73b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045b73d: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0045b740: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45b742u); call_ind(t); }
    /* 0045b742: jmp 0x45b796 */ goto L_0045b796;
L_0045b744:; BB(0x0045b744);
    /* 0045b744: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045b746: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045b748: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045b74e: call 0x460420 */ r_esp -= 4; W32(r_esp, 0x45b753u); f_00460420();
    /* 0045b753: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045b759: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 0045b75c: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 0045b75f: mov dword ptr [edx + 0x10c], 0xffffffff */ W32((u32)(r_edx+0x10cu), 0xffffffffu);
    /* 0045b769: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0045b76e: mov cl, byte ptr [eax + 0x25] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x25u))) & 0xffu);
    /* 0045b771: mov byte ptr [ebp - 0x55], cl */ W8((u32)(r_ebp+0xffffffabu), (u8)r_ecx);
    /* 0045b774: movzx edx, byte ptr [ebp - 0x55] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffabu));
    /* 0045b778: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b77a: je 0x45b78b */ if (fZ) goto L_0045b78b;
L_0045b77c:; BB(0x0045b77c);
    /* 0045b77c: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 0045b781: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0045b784: call 0x45b260 */ r_esp -= 4; W32(r_esp, 0x45b789u); f_0045b260();
    /* 0045b789: jmp 0x45b796 */ goto L_0045b796;
L_0045b78b:; BB(0x0045b78b);
    /* 0045b78b: mov ecx, dword ptr [0x790740] */ r_ecx = R32((u32)(0x790740u));
    /* 0045b791: call 0x4597e0 */ r_esp -= 4; W32(r_esp, 0x45b796u); f_004597e0();
L_0045b796:; BB(0x0045b796);
    /* 0045b796: mov esp, ebp */ r_esp = r_ebp;
    /* 0045b798: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045b799: ret  */ FN_RET(0x0045b300); r_esp += 4; return;
}

void f_0045b7a0(void) /* sub_45B7A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045b7a0);
    /* 0045b7a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045b7a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0045b7a3: sub esp, 0x130 */ {  u32 a = r_esp; u32 b = 0x130u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045b7a9: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0045b7ae: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0045b7b0: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0045b7b3: mov dword ptr [ebp - 0x130], ecx */ W32((u32)(r_ebp+0xfffffed0u), r_ecx);
    /* 0045b7b9: mov dword ptr [ebp - 0x11c], 2 */ W32((u32)(r_ebp+0xfffffee4u), 0x2u);
    /* 0045b7c3: mov dword ptr [ebp - 0x118], 1 */ W32((u32)(r_ebp+0xfffffee8u), 0x1u);
    /* 0045b7cd: mov dword ptr [ebp - 0x114], 3 */ W32((u32)(r_ebp+0xfffffeecu), 0x3u);
    /* 0045b7d7: mov dword ptr [ebp - 0x110], 0 */ W32((u32)(r_ebp+0xfffffef0u), 0x0u);
    /* 0045b7e1: mov dword ptr [ebp - 0x10c], 4 */ W32((u32)(r_ebp+0xfffffef4u), 0x4u);
    /* 0045b7eb: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045b7f1: call 0x460ee0 */ r_esp -= 4; W32(r_esp, 0x45b7f6u); f_00460ee0();
    /* 0045b7f6: mov eax, dword ptr [0x790738] */ r_eax = R32((u32)(0x790738u));
    /* 0045b7fb: mov dword ptr [ebp - 0x120], eax */ W32((u32)(r_ebp+0xfffffee0u), r_eax);
    /* 0045b801: mov ecx, dword ptr [ebp - 0x120] */ r_ecx = R32((u32)(r_ebp+0xfffffee0u));
    /* 0045b807: mov dword ptr [ecx + 0x10c], 4 */ W32((u32)(r_ecx+0x10cu), 0x4u);
    /* 0045b811: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045b817: call 0x4607e0 */ r_esp -= 4; W32(r_esp, 0x45b81cu); f_004607e0();
    /* 0045b81c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0045b81f: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b823: je 0x45b8d7 */ if (fZ) goto L_0045b8d7;
L_0045b829:; BB(0x0045b829);
    /* 0045b829: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b82d: je 0x45b8d7 */ if (fZ) goto L_0045b8d7;
L_0045b833:; BB(0x0045b833);
    /* 0045b833: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045b836: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045b837: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045b83d: call 0x460640 */ r_esp -= 4; W32(r_esp, 0x45b842u); f_00460640();
    /* 0045b842: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0045b845: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b847: je 0x45b8d7 */ if (fZ) goto L_0045b8d7;
L_0045b84d:; BB(0x0045b84d);
    /* 0045b84d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045b850: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045b851: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x45b856u); f_005dcb00();
    /* 0045b856: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045b859: mov dword ptr [ebp - 0x124], eax */ W32((u32)(r_ebp+0xfffffedcu), r_eax);
    /* 0045b85f: mov ecx, dword ptr [ebp - 0x124] */ r_ecx = R32((u32)(r_ebp+0xfffffedcu));
    /* 0045b865: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x45b86au); f_0063aac0();
    /* 0045b86a: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045b86d: mov dword ptr [ebp - 0x128], eax */ W32((u32)(r_ebp+0xfffffed8u), r_eax);
    /* 0045b873: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 0045b879: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045b87a: push 0x6b9ab0 */ { u32 v = 0x6b9ab0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045b87f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x45b884u); f_00630f40();
    /* 0045b884: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045b887: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045b888: lea eax, [ebp - 0x108] */ r_eax = (u32)(r_ebp+0xfffffef8u);
    /* 0045b88e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045b88f: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x45b895u); call_ind(t); }
    /* 0045b895: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045b898: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0045b89a: push 0x6b9a94 */ { u32 v = 0x6b9a94u; r_esp -= 4; W32(r_esp, v); }
    /* 0045b89f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x45b8a4u); f_00630f40();
    /* 0045b8a4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045b8a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045b8a8: lea ecx, [ebp - 0x108] */ r_ecx = (u32)(r_ebp+0xfffffef8u);
    /* 0045b8ae: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045b8af: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x45b8b4u); f_0062ff10();
    /* 0045b8b4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045b8b7: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b8ba: jne 0x45b8d7 */ if (!fZ) goto L_0045b8d7;
L_0045b8bc:; BB(0x0045b8bc);
    /* 0045b8bc: mov edx, dword ptr [0x790738] */ r_edx = R32((u32)(0x790738u));
    /* 0045b8c2: mov dword ptr [ebp - 0x12c], edx */ W32((u32)(r_ebp+0xfffffed4u), r_edx);
    /* 0045b8c8: mov eax, dword ptr [ebp - 0x12c] */ r_eax = R32((u32)(r_ebp+0xfffffed4u));
    /* 0045b8ce: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045b8d1: mov dword ptr [eax + 0x10c], ecx */ W32((u32)(r_eax+0x10cu), r_ecx);
L_0045b8d7:; BB(0x0045b8d7);
    /* 0045b8d7: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045b8dd: call 0x45f990 */ r_esp -= 4; W32(r_esp, 0x45b8e2u); f_0045f990();
    /* 0045b8e2: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0045b8e5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b8e7: je 0x45b931 */ if (fZ) goto L_0045b931;
L_0045b8e9:; BB(0x0045b8e9);
    /* 0045b8e9: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045b8ef: call 0x460700 */ r_esp -= 4; W32(r_esp, 0x45b8f4u); f_00460700();
    /* 0045b8f4: mov eax, dword ptr [ebp + eax*4 - 0x11c] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xfffffee4u));
    /* 0045b8fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045b8fc: mov ecx, dword ptr [0x790740] */ r_ecx = R32((u32)(0x790740u));
    /* 0045b902: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 0045b905: mov eax, dword ptr [0x790740] */ r_eax = R32((u32)(0x790740u));
    /* 0045b90a: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0045b90d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0045b90f: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0045b915: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45b917u); call_ind(t); }
    /* 0045b917: mov ecx, dword ptr [0x790740] */ r_ecx = R32((u32)(0x790740u));
    /* 0045b91d: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 0045b920: mov eax, dword ptr [0x790740] */ r_eax = R32((u32)(0x790740u));
    /* 0045b925: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0045b928: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0045b92a: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0045b92d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45b92fu); call_ind(t); }
    /* 0045b92f: jmp 0x45b949 */ goto L_0045b949;
L_0045b931:; BB(0x0045b931);
    /* 0045b931: mov ecx, dword ptr [0x790740] */ r_ecx = R32((u32)(0x790740u));
    /* 0045b937: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 0045b93a: mov eax, dword ptr [0x790740] */ r_eax = R32((u32)(0x790740u));
    /* 0045b93f: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0045b942: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0045b944: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0045b947: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45b949u); call_ind(t); }
L_0045b949:; BB(0x0045b949);
    /* 0045b949: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045b94c: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0045b94e: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x45b953u); f_00686d72();
    /* 0045b953: mov esp, ebp */ r_esp = r_ebp;
    /* 0045b955: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045b956: ret  */ FN_RET(0x0045b7a0); r_esp += 4; return;
}

void f_0045b960(void) /* sub_45B960 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045b960);
    /* 0045b960: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045b961: mov ebp, esp */ r_ebp = r_esp;
    /* 0045b963: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045b966: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0045b969: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045b96c: mov byte ptr [eax + 6], 1 */ W8((u32)(r_eax+0x6u), 0x1u);
    /* 0045b970: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045b976: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045b979: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045b97c: mov dword ptr [edx + 0x124], 3 */ W32((u32)(r_edx+0x124u), 0x3u);
    /* 0045b986: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045b989: mov dword ptr [eax + 0x128], 4 */ W32((u32)(r_eax+0x128u), 0x4u);
    /* 0045b993: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045b995: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045b997: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 0045b99d: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0045b9a0: mov eax, dword ptr [0x790734] */ r_eax = R32((u32)(0x790734u));
    /* 0045b9a5: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0045b9a8: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0045b9aa: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0045b9ad: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45b9afu); call_ind(t); }
    /* 0045b9af: mov esp, ebp */ r_esp = r_ebp;
    /* 0045b9b1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045b9b2: ret  */ FN_RET(0x0045b960); r_esp += 4; return;
}

void f_0045b9c0(void) /* sub_45B9C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045b9c0);
    /* 0045b9c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045b9c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0045b9c3: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045b9c6: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 0045b9c9: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b9cd: jne 0x45bad5 */ if (!fZ) goto L_0045bad5;
L_0045b9d3:; BB(0x0045b9d3);
    /* 0045b9d3: mov eax, dword ptr [0x790738] */ r_eax = R32((u32)(0x790738u));
    /* 0045b9d8: mov ecx, dword ptr [eax + 0x10c] */ r_ecx = R32((u32)(r_eax+0x10cu));
    /* 0045b9de: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 0045b9e1: cmp dword ptr [ebp - 0x38], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b9e5: je 0x45ba53 */ if (fZ) goto L_0045ba53;
L_0045b9e7:; BB(0x0045b9e7);
    /* 0045b9e7: mov edx, dword ptr [0x790738] */ r_edx = R32((u32)(0x790738u));
    /* 0045b9ed: mov eax, dword ptr [edx + 0x12c] */ r_eax = R32((u32)(r_edx+0x12cu));
    /* 0045b9f3: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0045b9f6: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b9fa: je 0x45ba1e */ if (fZ) goto L_0045ba1e;
L_0045b9fc:; BB(0x0045b9fc);
    /* 0045b9fc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045b9fe: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045ba01: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045ba02: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x45ba07u); f_0064c8a0();
    /* 0045ba07: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045ba0a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0045ba0d: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0045ba10: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045ba13: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0045ba16: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045ba19: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0045ba1c: jmp 0x45ba51 */ goto L_0045ba51;
L_0045ba1e:; BB(0x0045ba1e);
    /* 0045ba1e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045ba20: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 0045ba26: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0045ba28: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 0045ba2e: mov eax, dword ptr [edx + 0x2b0] */ r_eax = R32((u32)(r_edx+0x2b0u));
    /* 0045ba34: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45ba36u); call_ind(t); }
    /* 0045ba36: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045ba37: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x45ba3cu); f_0064c8a0();
    /* 0045ba3c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045ba3f: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0045ba42: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0045ba45: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0045ba48: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0045ba4b: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045ba4e: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0045ba51:; BB(0x0045ba51);
    /* 0045ba51: jmp 0x45ba85 */ goto L_0045ba85;
L_0045ba53:; BB(0x0045ba53);
    /* 0045ba53: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045ba55: mov eax, dword ptr [0x790734] */ r_eax = R32((u32)(0x790734u));
    /* 0045ba5a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045ba5c: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 0045ba62: mov eax, dword ptr [edx + 0x2b0] */ r_eax = R32((u32)(r_edx+0x2b0u));
    /* 0045ba68: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45ba6au); call_ind(t); }
    /* 0045ba6a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045ba6b: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x45ba70u); f_0064c8a0();
    /* 0045ba70: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045ba73: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0045ba76: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0045ba79: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045ba7c: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0045ba7f: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045ba82: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0045ba85:; BB(0x0045ba85);
    /* 0045ba85: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045ba87: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045ba8a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045ba8b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045ba8e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045ba8f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045ba92: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045ba93: mov eax, dword ptr [0x790738] */ r_eax = R32((u32)(0x790738u));
    /* 0045ba98: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0045ba9b: mov edx, dword ptr [0x790738] */ r_edx = R32((u32)(0x790738u));
    /* 0045baa1: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0045baa4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0045baa6: mov ecx, eax */ r_ecx = r_eax;
    /* 0045baa8: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 0045baae: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45bab0u); call_ind(t); }
    /* 0045bab0: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045bab6: mov byte ptr [ecx + 0x114], 1 */ W8((u32)(r_ecx+0x114u), 0x1u);
    /* 0045babd: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 0045bac3: call 0x57ae30 */ r_esp -= 4; W32(r_esp, 0x45bac8u); f_0057ae30();
    /* 0045bac8: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0045bacb: call 0x45b300 */ r_esp -= 4; W32(r_esp, 0x45bad0u); f_0045b300();
    /* 0045bad0: jmp 0x45bddf */ goto L_0045bddf;
L_0045bad5:; BB(0x0045bad5);
    /* 0045bad5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045bad8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045bad9: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x45badeu); f_005dcb00();
    /* 0045bade: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045bae1: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0045bae4: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0045bae7: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x45baecu); f_0063aac0();
    /* 0045baec: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0045baee: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0045baf1: cmp dword ptr [ebp - 0x3c], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045baf5: je 0x45bb13 */ if (fZ) goto L_0045bb13;
L_0045baf7:; BB(0x0045baf7);
    /* 0045baf7: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0045bafa: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x45baffu); f_0063aac0();
    /* 0045baff: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0045bb01: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 0045bb04: cmp dword ptr [ebp - 0x40], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045bb08: je 0x45bb13 */ if (fZ) goto L_0045bb13;
L_0045bb0a:; BB(0x0045bb0a);
    /* 0045bb0a: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 0045bb11: jmp 0x45bb1a */ goto L_0045bb1a;
L_0045bb13:; BB(0x0045bb13);
    /* 0045bb13: mov dword ptr [ebp - 0x58], 1 */ W32((u32)(r_ebp+0xffffffa8u), 0x1u);
L_0045bb1a:; BB(0x0045bb1a);
    /* 0045bb1a: movzx edx, byte ptr [ebp - 0x58] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffa8u));
    /* 0045bb1e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045bb20: je 0x45bbfd */ if (fZ) goto L_0045bbfd;
L_0045bb26:; BB(0x0045bb26);
    /* 0045bb26: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045bb28: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0045bb2e: call 0x5df700 */ r_esp -= 4; W32(r_esp, 0x45bb33u); f_005df700();
    /* 0045bb33: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0045bb36: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045bb38: je 0x45bb4e */ if (fZ) goto L_0045bb4e;
L_0045bb3a:; BB(0x0045bb3a);
    /* 0045bb3a: push 0x7174e8 */ { u32 v = 0x7174e8u; r_esp -= 4; W32(r_esp, v); }
    /* 0045bb3f: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0045bb41: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 0045bb47: call 0x57ab80 */ r_esp -= 4; W32(r_esp, 0x45bb4cu); f_0057ab80();
    /* 0045bb4c: jmp 0x45bb59 */ goto L_0045bb59;
L_0045bb4e:; BB(0x0045bb4e);
    /* 0045bb4e: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 0045bb54: call 0x57ae30 */ r_esp -= 4; W32(r_esp, 0x45bb59u); f_0057ae30();
L_0045bb59:; BB(0x0045bb59);
    /* 0045bb59: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045bb5c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045bb5d: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x45bb62u); f_005dcb00();
    /* 0045bb62: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045bb65: mov ecx, eax */ r_ecx = r_eax;
    /* 0045bb67: call 0x5d5840 */ r_esp -= 4; W32(r_esp, 0x45bb6cu); f_005d5840();
    /* 0045bb6c: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0045bb6f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045bb71: jne 0x45bbdd */ if (!fZ) goto L_0045bbdd;
L_0045bb73:; BB(0x0045bb73);
    /* 0045bb73: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 0045bb79: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x45bb7eu); f_005da7b0();
    /* 0045bb7e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0045bb81: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045bb83: je 0x45bbad */ if (fZ) goto L_0045bbad;
L_0045bb85:; BB(0x0045bb85);
    /* 0045bb85: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045bb88: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045bb89: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x45bb8eu); f_005dcb00();
    /* 0045bb8e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045bb91: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0045bb94: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0045bb97: mov byte ptr [edx + 0x4a1], 1 */ W8((u32)(r_edx+0x4a1u), 0x1u);
    /* 0045bb9e: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0045bba1: call 0x45b300 */ r_esp -= 4; W32(r_esp, 0x45bba6u); f_0045b300();
    /* 0045bba6: jmp 0x45bddf */ goto L_0045bddf;
L_0045bbad:; BB(0x0045bbad);
    /* 0045bbad: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045bbb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045bbb1: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045bbb7: call 0x460960 */ r_esp -= 4; W32(r_esp, 0x45bbbcu); f_00460960();
    /* 0045bbbc: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0045bbbf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045bbc1: je 0x45bbdb */ if (fZ) goto L_0045bbdb;
L_0045bbc3:; BB(0x0045bbc3);
    /* 0045bbc3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045bbc6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045bbc7: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x45bbccu); f_005dcb00();
    /* 0045bbcc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045bbcf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045bbd0: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 0045bbd6: call 0x5dbb70 */ r_esp -= 4; W32(r_esp, 0x45bbdbu); f_005dbb70();
L_0045bbdb:; BB(0x0045bbdb);
    /* 0045bbdb: jmp 0x45bbf8 */ goto L_0045bbf8;
L_0045bbdd:; BB(0x0045bbdd);
    /* 0045bbdd: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 0045bbe3: call 0x45e8e0 */ r_esp -= 4; W32(r_esp, 0x45bbe8u); f_0045e8e0();
    /* 0045bbe8: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045bbeb: jne 0x45bbf8 */ if (!fZ) goto L_0045bbf8;
L_0045bbed:; BB(0x0045bbed);
    /* 0045bbed: mov ecx, dword ptr [0x790740] */ r_ecx = R32((u32)(0x790740u));
    /* 0045bbf3: call 0x4597c0 */ r_esp -= 4; W32(r_esp, 0x45bbf8u); f_004597c0();
L_0045bbf8:; BB(0x0045bbf8);
    /* 0045bbf8: jmp 0x45bddf */ goto L_0045bddf;
L_0045bbfd:; BB(0x0045bbfd);
    /* 0045bbfd: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0045bc00: movzx ecx, byte ptr [eax + 4] */ r_ecx = (u32)R8((u32)(r_eax+0x4u));
    /* 0045bc04: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045bc06: jne 0x45bc2d */ if (!fZ) goto L_0045bc2d;
L_0045bc08:; BB(0x0045bc08);
    /* 0045bc08: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 0045bc0b: mov byte ptr [edx + 4], 1 */ W8((u32)(r_edx+0x4u), 0x1u);
    /* 0045bc0f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0045bc11: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0045bc17: call 0x637810 */ r_esp -= 4; W32(r_esp, 0x45bc1cu); f_00637810();
    /* 0045bc1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045bc1d: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 0045bc23: call 0x5da360 */ r_esp -= 4; W32(r_esp, 0x45bc28u); f_005da360();
    /* 0045bc28: jmp 0x45bddf */ goto L_0045bddf;
L_0045bc2d:; BB(0x0045bc2d);
    /* 0045bc2d: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0045bc30: mov byte ptr [eax + 4], 0 */ W8((u32)(r_eax+0x4u), 0x0u);
    /* 0045bc34: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 0045bc3a: call 0x57ae30 */ r_esp -= 4; W32(r_esp, 0x45bc3fu); f_0057ae30();
    /* 0045bc3f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045bc42: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045bc43: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x45bc48u); f_005dcb00();
    /* 0045bc48: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045bc4b: mov ecx, eax */ r_ecx = r_eax;
    /* 0045bc4d: call 0x5d5840 */ r_esp -= 4; W32(r_esp, 0x45bc52u); f_005d5840();
    /* 0045bc52: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0045bc55: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045bc57: je 0x45bd87 */ if (fZ) goto L_0045bd87;
L_0045bc5d:; BB(0x0045bc5d);
    /* 0045bc5d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045bc5f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045bc62: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045bc63: mov ecx, dword ptr [0x790744] */ r_ecx = R32((u32)(0x790744u));
    /* 0045bc69: call 0x44e7f0 */ r_esp -= 4; W32(r_esp, 0x45bc6eu); f_0044e7f0();
    /* 0045bc6e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045bc6f: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x45bc74u); f_0064c8a0();
    /* 0045bc74: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045bc77: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0045bc7a: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 0045bc7d: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0045bc80: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0045bc83: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0045bc86: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0045bc89: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045bc8b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045bc8d: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 0045bc90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045bc91: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045bc97: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0045bc9a: mov eax, dword ptr [0x790738] */ r_eax = R32((u32)(0x790738u));
    /* 0045bc9f: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0045bca2: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0045bca4: mov eax, dword ptr [edx + 0xc4] */ r_eax = R32((u32)(r_edx+0xc4u));
    /* 0045bcaa: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45bcacu); call_ind(t); }
    /* 0045bcac: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045bcaf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045bcb0: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x45bcb5u); f_005dcb00();
    /* 0045bcb5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045bcb8: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0045bcbb: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0045bcbe: mov byte ptr [edx + 0x4a0], 1 */ W8((u32)(r_edx+0x4a0u), 0x1u);
    /* 0045bcc5: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 0045bccb: call 0x45e8e0 */ r_esp -= 4; W32(r_esp, 0x45bcd0u); f_0045e8e0();
    /* 0045bcd0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045bcd3: jne 0x45bd85 */ if (!fZ) goto L_0045bd85;
L_0045bcd9:; BB(0x0045bcd9);
    /* 0045bcd9: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0045bcdb: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x45bce0u); f_0062fbf0();
    /* 0045bce0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045bce3: cmp eax, 0x28 */ {  u32 a = r_eax; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045bce6: jle 0x45bd85 */ if ((fZ||fS!=fO)) goto L_0045bd85;
L_0045bcec:; BB(0x0045bcec);
    /* 0045bcec: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045bcee: mov eax, dword ptr [0x790734] */ r_eax = R32((u32)(0x790734u));
    /* 0045bcf3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045bcf5: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 0045bcfb: mov eax, dword ptr [edx + 0x2b0] */ r_eax = R32((u32)(r_edx+0x2b0u));
    /* 0045bd01: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45bd03u); call_ind(t); }
    /* 0045bd03: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045bd04: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x45bd09u); f_0064c8a0();
    /* 0045bd09: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045bd0c: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0045bd0f: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 0045bd12: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0045bd15: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0045bd18: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0045bd1b: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0045bd1e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045bd21: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045bd22: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x45bd27u); f_005dcb00();
    /* 0045bd27: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045bd2a: mov ecx, eax */ r_ecx = r_eax;
    /* 0045bd2c: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x45bd31u); f_005d5a50();
    /* 0045bd31: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045bd34: shl ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0045bd36: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045bd38: jl 0x45bd85 */ if ((fS!=fO)) goto L_0045bd85;
L_0045bd3a:; BB(0x0045bd3a);
    /* 0045bd3a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045bd3c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045bd3e: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 0045bd41: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045bd42: mov eax, dword ptr [0x790738] */ r_eax = R32((u32)(0x790738u));
    /* 0045bd47: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0045bd4a: mov edx, dword ptr [0x790738] */ r_edx = R32((u32)(0x790738u));
    /* 0045bd50: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0045bd53: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0045bd55: mov ecx, eax */ r_ecx = r_eax;
    /* 0045bd57: mov eax, dword ptr [edx + 0xc4] */ r_eax = R32((u32)(r_edx+0xc4u));
    /* 0045bd5d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45bd5fu); call_ind(t); }
    /* 0045bd5f: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045bd65: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045bd68: mov byte ptr [ecx + 0xf4], 1 */ W8((u32)(r_ecx+0xf4u), 0x1u);
    /* 0045bd6f: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045bd73: jl 0x45bd85 */ if ((fS!=fO)) goto L_0045bd85;
L_0045bd75:; BB(0x0045bd75);
    /* 0045bd75: mov edx, dword ptr [0x790738] */ r_edx = R32((u32)(0x790738u));
    /* 0045bd7b: add edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045bd7e: mov byte ptr [edx + 0xf9], 1 */ W8((u32)(r_edx+0xf9u), 0x1u);
L_0045bd85:; BB(0x0045bd85);
    /* 0045bd85: jmp 0x45bdc3 */ goto L_0045bdc3;
L_0045bd87:; BB(0x0045bd87);
    /* 0045bd87: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 0045bd8d: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x45bd92u); f_005da7b0();
    /* 0045bd92: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0045bd95: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045bd97: je 0x45bdb4 */ if (fZ) goto L_0045bdb4;
L_0045bd99:; BB(0x0045bd99);
    /* 0045bd99: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045bd9c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045bd9d: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x45bda2u); f_005dcb00();
    /* 0045bda2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045bda5: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0045bda8: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0045bdab: mov byte ptr [edx + 0x4a1], 1 */ W8((u32)(r_edx+0x4a1u), 0x1u);
    /* 0045bdb2: jmp 0x45bdc3 */ goto L_0045bdc3;
L_0045bdb4:; BB(0x0045bdb4);
    /* 0045bdb4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045bdb7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045bdb8: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 0045bdbe: call 0x5d9570 */ r_esp -= 4; W32(r_esp, 0x45bdc3u); f_005d9570();
L_0045bdc3:; BB(0x0045bdc3);
    /* 0045bdc3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045bdc5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045bdc7: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0045bdcd: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0045bdd0: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 0045bdd5: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0045bdd8: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0045bdda: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0045bddd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45bddfu); call_ind(t); }
L_0045bddf:; BB(0x0045bddf);
    /* 0045bddf: mov esp, ebp */ r_esp = r_ebp;
    /* 0045bde1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045bde2: ret 4 */ FN_RET(0x0045b9c0); r_esp += 8; return;
}

void f_0045bdf0(void) /* sub_45BDF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045bdf0);
    /* 0045bdf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045bdf1: mov ebp, esp */ r_ebp = r_esp;
    /* 0045bdf3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045bdf5: push 0x69f21b */ { u32 v = 0x69f21bu; r_esp -= 4; W32(r_esp, v); }
    /* 0045bdfa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0045be00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045be01: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045be04: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0045be09: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0045be0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045be0c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0045be0f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0045be15: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0045be18: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0045be1a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x45be1fu); f_00686d82();
    /* 0045be1f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045be22: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0045be25: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045be2c: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045be30: je 0x45be3f */ if (fZ) goto L_0045be3f;
L_0045be32:; BB(0x0045be32);
    /* 0045be32: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045be35: call 0x45a5e0 */ r_esp -= 4; W32(r_esp, 0x45be3au); f_0045a5e0();
    /* 0045be3a: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0045be3d: jmp 0x45be46 */ goto L_0045be46;
L_0045be3f:; BB(0x0045be3f);
    /* 0045be3f: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0045be46:; BB(0x0045be46);
    /* 0045be46: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0045be49: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0045be4c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0045be53: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045be56: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045be57: mov edx, dword ptr [0x790734] */ r_edx = R32((u32)(0x790734u));
    /* 0045be5d: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0045be60: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x45be65u); f_005fc420();
    /* 0045be65: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045be68: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0045be6f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045be70: mov esp, ebp */ r_esp = r_ebp;
    /* 0045be72: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045be73: ret  */ FN_RET(0x0045bdf0); r_esp += 4; return;
}

