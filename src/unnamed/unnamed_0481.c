#include "protos.h"

void f_004810c0(void) /* sub_4810C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004810c0);
    /* 004810c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004810c1: mov ebp, esp */ r_ebp = r_esp;
    /* 004810c3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004810c6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004810c9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004810d0: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 004810d7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004810d9: cmp dword ptr [ebp + 8], 2 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004810dd: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 004810e0: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004810e3: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 004810e6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004810e8: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4810edu); f_005dcb00();
    /* 004810ed: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004810f0: mov ecx, eax */ r_ecx = r_eax;
    /* 004810f2: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x4810f7u); f_005d5a50();
    /* 004810f7: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004810fa: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00481100: movzx edx, byte ptr [ecx + 0x4f04] */ r_edx = (u32)R8((u32)(r_ecx+0x4f04u));
    /* 00481107: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00481109: jne 0x48110f */ if (!fZ) goto L_0048110f;
L_0048110b:; BB(0x0048110b);
    /* 0048110b: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0048110d: jmp 0x481141 */ goto L_00481141;
L_0048110f:; BB(0x0048110f);
    /* 0048110f: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00481113: jg 0x481119 */ if ((!fZ&&fS==fO)) goto L_00481119;
L_00481115:; BB(0x00481115);
    /* 00481115: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00481117: jmp 0x481141 */ goto L_00481141;
L_00481119:; BB(0x00481119);
    /* 00481119: cmp dword ptr [ebp + 8], 1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048111d: jne 0x481123 */ if (!fZ) goto L_00481123;
L_0048111f:; BB(0x0048111f);
    /* 0048111f: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00481121: jmp 0x481141 */ goto L_00481141;
L_00481123:; BB(0x00481123);
    /* 00481123: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00481125: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00481128: call 0x481550 */ r_esp -= 4; W32(r_esp, 0x48112du); f_00481550();
    /* 0048112d: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00481130: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00481133: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00481136: cmp dword ptr [ebp - 0x10], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00481139: jg 0x48113f */ if ((!fZ&&fS==fO)) goto L_0048113f;
L_0048113b:; BB(0x0048113b);
    /* 0048113b: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0048113d: jmp 0x481141 */ goto L_00481141;
L_0048113f:; BB(0x0048113f);
    /* 0048113f: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00481141:; BB(0x00481141);
    /* 00481141: mov esp, ebp */ r_esp = r_ebp;
    /* 00481143: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00481144: ret 4 */ FN_RET(0x004810c0); r_esp += 8; return;
}

void f_00481150(void) /* sub_481150 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00481150);
    /* 00481150: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00481151: mov ebp, esp */ r_ebp = r_esp;
    /* 00481153: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00481156: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00481159: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048115c: mov byte ptr [eax + 0x409], 0 */ W8((u32)(r_eax+0x409u), 0x0u);
    /* 00481163: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00481166: mov byte ptr [ecx + 0x40a], 0 */ W8((u32)(r_ecx+0x40au), 0x0u);
    /* 0048116d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00481170: mov byte ptr [edx + 0x40b], 0 */ W8((u32)(r_edx+0x40bu), 0x0u);
    /* 00481177: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 0048117d: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x481182u); f_005da7b0();
    /* 00481182: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00481185: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00481187: je 0x4811ab */ if (fZ) goto L_004811ab;
L_00481189:; BB(0x00481189);
    /* 00481189: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048118c: cmp dword ptr [ecx + 0x100], 0xe */ {  u32 a = R32((u32)(r_ecx+0x100u)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00481193: je 0x4811a1 */ if (fZ) goto L_004811a1;
L_00481195:; BB(0x00481195);
    /* 00481195: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00481198: cmp dword ptr [edx + 0x100], 0x2a */ {  u32 a = R32((u32)(r_edx+0x100u)); u32 b = 0x2au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048119f: jne 0x4811ab */ if (!fZ) goto L_004811ab;
L_004811a1:; BB(0x004811a1);
    /* 004811a1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004811a4: mov byte ptr [eax + 0x104], 1 */ W8((u32)(r_eax+0x104u), 0x1u);
L_004811ab:; BB(0x004811ab);
    /* 004811ab: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 004811b1: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x4811b6u); f_005da7b0();
    /* 004811b6: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004811b9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004811bb: je 0x481231 */ if (fZ) goto L_00481231;
L_004811bd:; BB(0x004811bd);
    /* 004811bd: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004811c0: movzx eax, byte ptr [edx + 0x104] */ r_eax = (u32)R8((u32)(r_edx+0x104u));
    /* 004811c7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004811c9: je 0x481231 */ if (fZ) goto L_00481231;
L_004811cb:; BB(0x004811cb);
    /* 004811cb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004811ce: mov edx, dword ptr [ecx + 0xfc] */ r_edx = R32((u32)(r_ecx+0xfcu));
    /* 004811d4: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 004811d7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004811da: cmp dword ptr [eax + 0x100], 0xe */ {  u32 a = R32((u32)(r_eax+0x100u)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004811e1: jne 0x48120b */ if (!fZ) goto L_0048120b;
L_004811e3:; BB(0x004811e3);
    /* 004811e3: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004811e5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004811e8: call 0x481a00 */ r_esp -= 4; W32(r_esp, 0x4811edu); f_00481a00();
    /* 004811ed: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004811f0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004811f2: jne 0x481209 */ if (!fZ) goto L_00481209;
L_004811f4:; BB(0x004811f4);
    /* 004811f4: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004811fa: mov byte ptr [edx + 0x408], 1 */ W8((u32)(r_edx+0x408u), 0x1u);
    /* 00481201: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00481204: call 0x480390 */ r_esp -= 4; W32(r_esp, 0x481209u); f_00480390();
L_00481209:; BB(0x00481209);
    /* 00481209: jmp 0x481231 */ goto L_00481231;
L_0048120b:; BB(0x0048120b);
    /* 0048120b: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0048120d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00481210: call 0x481a00 */ r_esp -= 4; W32(r_esp, 0x481215u); f_00481a00();
    /* 00481215: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00481218: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048121a: jne 0x481231 */ if (!fZ) goto L_00481231;
L_0048121c:; BB(0x0048121c);
    /* 0048121c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00481222: mov byte ptr [ecx + 0x408], 1 */ W8((u32)(r_ecx+0x408u), 0x1u);
    /* 00481229: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048122c: call 0x480390 */ r_esp -= 4; W32(r_esp, 0x481231u); f_00480390();
L_00481231:; BB(0x00481231);
    /* 00481231: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00481234: mov byte ptr [edx + 0x104], 0 */ W8((u32)(r_edx+0x104u), 0x0u);
    /* 0048123b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048123d: mov eax, dword ptr [0x791eb8] */ r_eax = R32((u32)(0x791eb8u));
    /* 00481242: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00481245: mov edx, dword ptr [0x791eb8] */ r_edx = R32((u32)(0x791eb8u));
    /* 0048124b: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0048124e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00481250: mov ecx, eax */ r_ecx = r_eax;
    /* 00481252: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00481255: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x481257u); call_ind(t); }
    /* 00481257: mov esp, ebp */ r_esp = r_ebp;
    /* 00481259: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048125a: ret  */ FN_RET(0x00481150); r_esp += 4; return;
}

void f_00481260(void) /* sub_481260 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00481260);
    /* 00481260: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00481261: mov ebp, esp */ r_ebp = r_esp;
    /* 00481263: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00481266: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00481269: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00481270: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00481273: call 0x4805e0 */ r_esp -= 4; W32(r_esp, 0x481278u); f_004805e0();
    /* 00481278: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0048127b: cmp dword ptr [ebp - 8], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048127f: jne 0x481285 */ if (!fZ) goto L_00481285;
L_00481281:; BB(0x00481281);
    /* 00481281: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00481283: jmp 0x481297 */ goto L_00481297;
L_00481285:; BB(0x00481285);
    /* 00481285: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00481288: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00481289: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048128c: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x481291u); f_0047e390();
    /* 00481291: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00481294: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
L_00481297:; BB(0x00481297);
    /* 00481297: mov esp, ebp */ r_esp = r_ebp;
    /* 00481299: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048129a: ret  */ FN_RET(0x00481260); r_esp += 4; return;
}

void f_00481500(void) /* sub_481500 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00481500);
    /* 00481500: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00481501: mov ebp, esp */ r_ebp = r_esp;
    /* 00481503: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00481504: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00481507: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048150a: call 0x47ffe0 */ r_esp -= 4; W32(r_esp, 0x48150fu); f_0047ffe0();
    /* 0048150f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00481512: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00481515: mov edx, dword ptr [ecx + 0x3fc] */ r_edx = R32((u32)(r_ecx+0x3fcu));
    /* 0048151b: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0048151d: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00481520: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00481523: mov edx, dword ptr [ecx + 0x3f8] */ r_edx = R32((u32)(r_ecx+0x3f8u));
    /* 00481529: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0048152b: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0048152e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00481531: mov edx, dword ptr [ecx + 0x3f4] */ r_edx = R32((u32)(r_ecx+0x3f4u));
    /* 00481537: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 00481539: cmp dword ptr [ebp + 8], 3 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048153d: jne 0x481548 */ if (!fZ) goto L_00481548;
L_0048153f:; BB(0x0048153f);
    /* 0048153f: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00481542: mov dword ptr [eax], 0xffffffff */ W32((u32)(r_eax), 0xffffffffu);
L_00481548:; BB(0x00481548);
    /* 00481548: mov esp, ebp */ r_esp = r_ebp;
    /* 0048154a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048154b: ret 0x10 */ FN_RET(0x00481500); r_esp += 20; return;
}

void f_00481550(void) /* sub_481550 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00481550);
    /* 00481550: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00481551: mov ebp, esp */ r_ebp = r_esp;
    /* 00481553: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00481556: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00481559: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00481560: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00481563: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00481564: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x481569u); f_005dcb00();
    /* 00481569: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048156c: mov ecx, eax */ r_ecx = r_eax;
    /* 0048156e: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x481573u); f_005d5a50();
    /* 00481573: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00481576: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0048157d: jmp 0x481588 */ goto L_00481588;
L_0048157f:; BB(0x0048157f);
    /* 0048157f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00481582: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00481585: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_00481588:; BB(0x00481588);
    /* 00481588: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048158b: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x481590u); f_0047f950();
    /* 00481590: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00481593: jge 0x4815c2 */ if ((fS==fO)) goto L_004815c2;
L_00481595:; BB(0x00481595);
    /* 00481595: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00481598: cmp edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048159b: jne 0x48159f */ if (!fZ) goto L_0048159f;
L_0048159d:; BB(0x0048159d);
    /* 0048159d: jmp 0x48157f */ goto L_0048157f;
L_0048159f:; BB(0x0048159f);
    /* 0048159f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004815a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004815a3: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4815a8u); f_005dcb00();
    /* 004815a8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004815ab: mov ecx, eax */ r_ecx = r_eax;
    /* 004815ad: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x4815b2u); f_005d5a50();
    /* 004815b2: cmp eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004815b5: jle 0x4815c0 */ if ((fZ||fS!=fO)) goto L_004815c0;
L_004815b7:; BB(0x004815b7);
    /* 004815b7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004815ba: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004815bd: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_004815c0:; BB(0x004815c0);
    /* 004815c0: jmp 0x48157f */ goto L_0048157f;
L_004815c2:; BB(0x004815c2);
    /* 004815c2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004815c5: mov esp, ebp */ r_esp = r_ebp;
    /* 004815c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004815c8: ret 4 */ FN_RET(0x00481550); r_esp += 8; return;
}

void f_004815d0(void) /* sub_4815D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004815d0);
    /* 004815d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004815d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004815d3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004815d6: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 004815d9: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 004815e0: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004815e7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004815ee: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004815f1: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004815f4: call 0x4f6840 */ r_esp -= 4; W32(r_esp, 0x4815f9u); f_004f6840();
    /* 004815f9: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 004815fc: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004815ff: call 0x47cd90 */ r_esp -= 4; W32(r_esp, 0x481604u); f_0047cd90();
    /* 00481604: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00481607: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048160b: je 0x481621 */ if (fZ) goto L_00481621;
L_0048160d:; BB(0x0048160d);
    /* 0048160d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00481610: call 0x4c6a70 */ r_esp -= 4; W32(r_esp, 0x481615u); f_004c6a70();
    /* 00481615: add eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00481618: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00481619: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048161c: call 0x4c6aa0 */ r_esp -= 4; W32(r_esp, 0x481621u); f_004c6aa0();
L_00481621:; BB(0x00481621);
    /* 00481621: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00481624: call 0x480740 */ r_esp -= 4; W32(r_esp, 0x481629u); f_00480740();
    /* 00481629: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0048162c: lea eax, [ebp - 0x14] */ r_eax = (u32)(r_ebp+0xffffffecu);
    /* 0048162f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00481630: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00481633: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00481634: mov edx, dword ptr [0x791eb8] */ r_edx = R32((u32)(0x791eb8u));
    /* 0048163a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0048163c: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 00481642: mov edx, dword ptr [eax + 0x27c] */ r_edx = R32((u32)(r_eax+0x27cu));
    /* 00481648: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x48164au); call_ind(t); }
    /* 0048164a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0048164d: mov byte ptr [eax + 0x409], 0 */ W8((u32)(r_eax+0x409u), 0x0u);
    /* 00481654: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00481657: mov byte ptr [ecx + 0x40a], 0 */ W8((u32)(r_ecx+0x40au), 0x0u);
    /* 0048165e: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00481661: mov byte ptr [edx + 0x40b], 0 */ W8((u32)(r_edx+0x40bu), 0x0u);
    /* 00481668: mov eax, dword ptr [0x791eb8] */ r_eax = R32((u32)(0x791eb8u));
    /* 0048166d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048166f: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 00481675: mov eax, dword ptr [edx + 0x2d4] */ r_eax = R32((u32)(r_edx+0x2d4u));
    /* 0048167b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x48167du); call_ind(t); }
    /* 0048167d: mov esp, ebp */ r_esp = r_ebp;
    /* 0048167f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00481680: ret  */ FN_RET(0x004815d0); r_esp += 4; return;
}

void f_00481690(void) /* sub_481690 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00481690);
    /* 00481690: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00481691: mov ebp, esp */ r_ebp = r_esp;
    /* 00481693: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00481696: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00481699: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 004816a0: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004816a6: call 0x480f80 */ r_esp -= 4; W32(r_esp, 0x4816abu); f_00480f80();
    /* 004816ab: mov byte ptr [ebp - 9], al */ W8((u32)(r_ebp+0xfffffff7u), (u8)r_eax);
    /* 004816ae: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004816b1: mov ecx, dword ptr [eax + 0x100] */ r_ecx = R32((u32)(r_eax+0x100u));
    /* 004816b7: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004816ba: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004816bd: mov dword ptr [edx + 0x100], ecx */ W32((u32)(r_edx+0x100u), r_ecx);
    /* 004816c3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004816c6: cmp dword ptr [eax + 0x100], 0xe */ {  u32 a = R32((u32)(r_eax+0x100u)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004816cd: jne 0x4816fb */ if (!fZ) goto L_004816fb;
L_004816cf:; BB(0x004816cf);
    /* 004816cf: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004816d2: mov dword ptr [ecx + 0xfc], 2 */ W32((u32)(r_ecx+0xfcu), 0x2u);
    /* 004816dc: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004816df: mov eax, dword ptr [edx + 0xfc] */ r_eax = R32((u32)(r_edx+0xfcu));
    /* 004816e5: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004816e8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004816eb: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004816ee: mov dword ptr [edx + ecx*4 + 0x104], 1 */ W32((u32)(r_edx+r_ecx*4+0x104u), 0x1u);
    /* 004816f9: jmp 0x48175c */ goto L_0048175c;
L_004816fb:; BB(0x004816fb);
    /* 004816fb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004816fe: cmp dword ptr [eax + 0x100], 0x2a */ {  u32 a = R32((u32)(r_eax+0x100u)); u32 b = 0x2au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00481705: jne 0x481733 */ if (!fZ) goto L_00481733;
L_00481707:; BB(0x00481707);
    /* 00481707: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048170a: mov dword ptr [ecx + 0xfc], 3 */ W32((u32)(r_ecx+0xfcu), 0x3u);
    /* 00481714: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00481717: mov eax, dword ptr [edx + 0xfc] */ r_eax = R32((u32)(r_edx+0xfcu));
    /* 0048171d: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00481720: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00481723: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00481726: mov dword ptr [edx + ecx*4 + 0x104], 1 */ W32((u32)(r_edx+r_ecx*4+0x104u), 0x1u);
    /* 00481731: jmp 0x48175c */ goto L_0048175c;
L_00481733:; BB(0x00481733);
    /* 00481733: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00481736: mov ecx, dword ptr [eax + 0xfc] */ r_ecx = R32((u32)(r_eax+0xfcu));
    /* 0048173c: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0048173f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00481742: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00481745: mov ecx, dword ptr [eax + edx*4 + 0x104] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x104u));
    /* 0048174c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048174f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00481752: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00481755: mov dword ptr [eax + edx*4 + 0x104], ecx */ W32((u32)(r_eax+r_edx*4+0x104u), r_ecx);
L_0048175c:; BB(0x0048175c);
    /* 0048175c: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00481763: jmp 0x48176e */ goto L_0048176e;
L_00481765:; BB(0x00481765);
    /* 00481765: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00481768: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048176b: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0048176e:; BB(0x0048176e);
    /* 0048176e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00481771: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x481776u); f_0047f950();
    /* 00481776: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00481779: jge 0x4817a4 */ if ((fS==fO)) goto L_004817a4;
L_0048177b:; BB(0x0048177b);
    /* 0048177b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048177e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048177f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00481782: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x481787u); f_0047e390();
    /* 00481787: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0048178a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048178d: call 0x4c6a70 */ r_esp -= 4; W32(r_esp, 0x481792u); f_004c6a70();
    /* 00481792: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00481794: jg 0x4817a2 */ if ((!fZ&&fS==fO)) goto L_004817a2;
L_00481796:; BB(0x00481796);
    /* 00481796: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00481799: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048179a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048179d: call 0x480580 */ r_esp -= 4; W32(r_esp, 0x4817a2u); f_00480580();
L_004817a2:; BB(0x004817a2);
    /* 004817a2: jmp 0x481765 */ goto L_00481765;
L_004817a4:; BB(0x004817a4);
    /* 004817a4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004817a7: call 0x480120 */ r_esp -= 4; W32(r_esp, 0x4817acu); f_00480120();
    /* 004817ac: mov esp, ebp */ r_esp = r_ebp;
    /* 004817ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004817af: ret  */ FN_RET(0x00481690); r_esp += 4; return;
}

void f_004817b0(void) /* sub_4817B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004817b0);
    /* 004817b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004817b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004817b3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004817b6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004817b7: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004817ba: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 004817c1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004817c4: call 0x480c80 */ r_esp -= 4; W32(r_esp, 0x4817c9u); f_00480c80();
    /* 004817c9: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004817cc: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 004817cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004817d0: lea ecx, [ebp - 0xc] */ r_ecx = (u32)(r_ebp+0xfffffff4u);
    /* 004817d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004817d4: lea edx, [ebp - 4] */ r_edx = (u32)(r_ebp+0xfffffffcu);
    /* 004817d7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004817d8: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004817db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004817dc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004817df: call 0x481500 */ r_esp -= 4; W32(r_esp, 0x4817e4u); f_00481500();
    /* 004817e4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004817e7: cmp ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004817ea: je 0x4817fc */ if (fZ) goto L_004817fc;
L_004817ec:; BB(0x004817ec);
    /* 004817ec: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004817ef: cmp edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004817f2: je 0x4817fc */ if (fZ) goto L_004817fc;
L_004817f4:; BB(0x004817f4);
    /* 004817f4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004817f7: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004817fa: jne 0x481800 */ if (!fZ) goto L_00481800;
L_004817fc:; BB(0x004817fc);
    /* 004817fc: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004817fe: jmp 0x48185e */ goto L_0048185e;
L_00481800:; BB(0x00481800);
    /* 00481800: cmp dword ptr [ebp - 8], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00481804: jne 0x48180a */ if (!fZ) goto L_0048180a;
L_00481806:; BB(0x00481806);
    /* 00481806: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00481808: jmp 0x48185e */ goto L_0048185e;
L_0048180a:; BB(0x0048180a);
    /* 0048180a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0048180d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048180e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00481811: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x481816u); f_0047e390();
    /* 00481816: mov ecx, eax */ r_ecx = r_eax;
    /* 00481818: call 0x4c61b0 */ r_esp -= 4; W32(r_esp, 0x48181du); f_004c61b0();
    /* 0048181d: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00481820: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00481822: je 0x48185c */ if (fZ) goto L_0048185c;
L_00481824:; BB(0x00481824);
    /* 00481824: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00481827: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048182a: je 0x48185c */ if (fZ) goto L_0048185c;
L_0048182c:; BB(0x0048182c);
    /* 0048182c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0048182f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00481830: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x481835u); f_005dcb00();
    /* 00481835: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00481838: mov ecx, eax */ r_ecx = r_eax;
    /* 0048183a: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x48183fu); f_005d5a50();
    /* 0048183f: mov esi, eax */ r_esi = r_eax;
    /* 00481841: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00481844: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00481845: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x48184au); f_005dcb00();
    /* 0048184a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048184d: mov ecx, eax */ r_ecx = r_eax;
    /* 0048184f: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x481854u); f_005d5a50();
    /* 00481854: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00481856: jne 0x48185c */ if (!fZ) goto L_0048185c;
L_00481858:; BB(0x00481858);
    /* 00481858: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0048185a: jmp 0x48185e */ goto L_0048185e;
L_0048185c:; BB(0x0048185c);
    /* 0048185c: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0048185e:; BB(0x0048185e);
    /* 0048185e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0048185f: mov esp, ebp */ r_esp = r_ebp;
    /* 00481861: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00481862: ret 4 */ FN_RET(0x004817b0); r_esp += 8; return;
}

void f_00481870(void) /* sub_481870 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00481870);
    /* 00481870: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00481871: mov ebp, esp */ r_ebp = r_esp;
    /* 00481873: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00481876: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00481879: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
    /* 00481880: mov dword ptr [ebp - 0x1c], 2 */ W32((u32)(r_ebp+0xffffffe4u), 0x2u);
    /* 00481887: mov dword ptr [ebp - 0x18], 4 */ W32((u32)(r_ebp+0xffffffe8u), 0x4u);
    /* 0048188e: mov dword ptr [ebp - 0x14], 5 */ W32((u32)(r_ebp+0xffffffecu), 0x5u);
    /* 00481895: mov dword ptr [ebp - 0x10], 6 */ W32((u32)(r_ebp+0xfffffff0u), 0x6u);
    /* 0048189c: mov dword ptr [ebp - 0xc], 7 */ W32((u32)(r_ebp+0xfffffff4u), 0x7u);
    /* 004818a3: mov dword ptr [ebp - 8], 9 */ W32((u32)(r_ebp+0xfffffff8u), 0x9u);
    /* 004818aa: mov dword ptr [ebp - 4], 0xa */ W32((u32)(r_ebp+0xfffffffcu), 0xau);
    /* 004818b1: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004818b5: jl 0x4818bd */ if ((fS!=fO)) goto L_004818bd;
L_004818b7:; BB(0x004818b7);
    /* 004818b7: cmp dword ptr [ebp + 8], 7 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004818bb: jle 0x4818c4 */ if ((fZ||fS!=fO)) goto L_004818c4;
L_004818bd:; BB(0x004818bd);
    /* 004818bd: mov dword ptr [ebp + 8], 0 */ W32((u32)(r_ebp+0x8u), 0x0u);
L_004818c4:; BB(0x004818c4);
    /* 004818c4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004818c7: mov eax, dword ptr [ebp + eax*4 - 0x20] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xffffffe0u));
    /* 004818cb: mov esp, ebp */ r_esp = r_ebp;
    /* 004818cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004818ce: ret 4 */ FN_RET(0x00481870); r_esp += 8; return;
}

void f_004818e0(void) /* sub_4818E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004818e0);
    /* 004818e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004818e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004818e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004818e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004818e7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004818e9: push 0x6bcecc */ { u32 v = 0x6bceccu; r_esp -= 4; W32(r_esp, v); }
    /* 004818ee: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 004818f3: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 004818f6: call 0x607960 */ r_esp -= 4; W32(r_esp, 0x4818fbu); f_00607960();
    /* 004818fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004818fd: je 0x481912 */ if (fZ) goto L_00481912;
L_004818ff:; BB(0x004818ff);
    /* 004818ff: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00481902: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00481903: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00481906: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00481907: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048190a: call 0x483300 */ r_esp -= 4; W32(r_esp, 0x48190fu); f_00483300();
    /* 0048190f: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_00481912:; BB(0x00481912);
    /* 00481912: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00481915: mov esp, ebp */ r_esp = r_ebp;
    /* 00481917: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00481918: ret 0xc */ FN_RET(0x004818e0); r_esp += 16; return;
}

void f_00481920(void) /* sub_481920 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00481920);
    /* 00481920: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00481921: mov ebp, esp */ r_ebp = r_esp;
    /* 00481923: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00481926: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00481929: mov dword ptr [ebp - 8], 0xffffffff */ W32((u32)(r_ebp+0xfffffff8u), 0xffffffffu);
    /* 00481930: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00481937: jmp 0x481942 */ goto L_00481942;
L_00481939:; BB(0x00481939);
    /* 00481939: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048193c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048193f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00481942:; BB(0x00481942);
    /* 00481942: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00481948: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x48194du); f_0047f950();
    /* 0048194d: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00481950: jge 0x4819f0 */ if ((fS==fO)) goto L_004819f0;
L_00481956:; BB(0x00481956);
    /* 00481956: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00481959: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048195a: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x48195fu); f_005dcb00();
    /* 0048195f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00481962: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00481965: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00481968: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x48196du); f_0063aac0();
    /* 0048196d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048196f: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00481972: cmp dword ptr [ebp - 0xc], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00481976: je 0x481994 */ if (fZ) goto L_00481994;
L_00481978:; BB(0x00481978);
    /* 00481978: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048197b: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x481980u); f_0063aac0();
    /* 00481980: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00481982: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00481985: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00481989: je 0x481994 */ if (fZ) goto L_00481994;
L_0048198b:; BB(0x0048198b);
    /* 0048198b: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00481992: jmp 0x48199b */ goto L_0048199b;
L_00481994:; BB(0x00481994);
    /* 00481994: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
L_0048199b:; BB(0x0048199b);
    /* 0048199b: movzx ecx, byte ptr [ebp - 0x28] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffd8u));
    /* 0048199f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004819a1: je 0x4819eb */ if (fZ) goto L_004819eb;
L_004819a3:; BB(0x004819a3);
    /* 004819a3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004819a6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004819a7: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4819acu); f_005dcb00();
    /* 004819ac: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004819af: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004819b2: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004819b5: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4819bau); f_0063aac0();
    /* 004819ba: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004819bc: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004819bf: cmp dword ptr [ebp - 0x1c], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004819c3: jne 0x4819eb */ if (!fZ) goto L_004819eb;
L_004819c5:; BB(0x004819c5);
    /* 004819c5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004819c8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004819c9: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4819ceu); f_005dcb00();
    /* 004819ce: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004819d1: mov ecx, eax */ r_ecx = r_eax;
    /* 004819d3: call 0x4842b0 */ r_esp -= 4; W32(r_esp, 0x4819d8u); f_004842b0();
    /* 004819d8: sub eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fS = ((r >> 31) & 1); }
    /* 004819db: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004819de: js 0x4819eb */ if (fS) goto L_004819eb;
L_004819e0:; BB(0x004819e0);
    /* 004819e0: cmp dword ptr [ebp - 8], 0x17 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x17u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004819e4: jge 0x4819eb */ if ((fS==fO)) goto L_004819eb;
L_004819e6:; BB(0x004819e6);
    /* 004819e6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004819e9: jmp 0x4819f3 */ goto L_004819f3;
L_004819eb:; BB(0x004819eb);
    /* 004819eb: jmp 0x481939 */ goto L_00481939;
L_004819f0:; BB(0x004819f0);
    /* 004819f0: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_004819f3:; BB(0x004819f3);
    /* 004819f3: mov esp, ebp */ r_esp = r_ebp;
    /* 004819f5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004819f6: ret  */ FN_RET(0x00481920); r_esp += 4; return;
}

