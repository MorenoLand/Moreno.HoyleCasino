#include "protos.h"

void f_00420110(void) /* sub_420110 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00420110);
    /* 00420110: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00420111: mov ebp, esp */ r_ebp = r_esp;
    /* 00420113: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00420116: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00420119: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042011c: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0042011f: mov edx, dword ptr [0x790358] */ r_edx = R32((u32)(0x790358u));
    /* 00420125: mov eax, dword ptr [edx + ecx*4 + 0xb0] */ r_eax = R32((u32)(r_edx+r_ecx*4+0xb0u));
    /* 0042012c: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0042012f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00420132: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00420135: mov eax, dword ptr [0x790358] */ r_eax = R32((u32)(0x790358u));
    /* 0042013a: mov ecx, dword ptr [eax + edx*4 + 0xc0] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xc0u));
    /* 00420141: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00420144: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0042014b: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00420152: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00420155: cmp dword ptr [edx + 4], 4 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00420159: je 0x4201bd */ if (fZ) goto L_004201bd;
L_0042015b:; BB(0x0042015b);
    /* 0042015b: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042015e: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00420161: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00420162: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00420168: call 0x639110 */ r_esp -= 4; W32(r_esp, 0x42016du); f_00639110();
    /* 0042016d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042016f: je 0x4201a9 */ if (fZ) goto L_004201a9;
L_00420171:; BB(0x00420171);
    /* 00420171: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00420173: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00420176: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00420179: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042017a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00420180: call 0x639110 */ r_esp -= 4; W32(r_esp, 0x420185u); f_00639110();
    /* 00420185: mov ecx, eax */ r_ecx = r_eax;
    /* 00420187: call 0x646380 */ r_esp -= 4; W32(r_esp, 0x42018cu); f_00646380();
    /* 0042018c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042018e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00420190: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00420193: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00420196: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00420197: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0042019d: call 0x639110 */ r_esp -= 4; W32(r_esp, 0x4201a2u); f_00639110();
    /* 004201a2: mov ecx, eax */ r_ecx = r_eax;
    /* 004201a4: call 0x6464d0 */ r_esp -= 4; W32(r_esp, 0x4201a9u); f_006464d0();
L_004201a9:; BB(0x004201a9);
    /* 004201a9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004201ab: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004201ae: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 004201b1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004201b2: mov ecx, dword ptr [0x790354] */ r_ecx = R32((u32)(0x790354u));
    /* 004201b8: call 0x5d9180 */ r_esp -= 4; W32(r_esp, 0x4201bdu); f_005d9180();
L_004201bd:; BB(0x004201bd);
    /* 004201bd: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004201c4: jmp 0x4201cf */ goto L_004201cf;
L_004201c6:; BB(0x004201c6);
    /* 004201c6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004201c9: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004201cc: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_004201cf:; BB(0x004201cf);
    /* 004201cf: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004201d3: jge 0x4201f2 */ if ((fS==fO)) goto L_004201f2;
L_004201d5:; BB(0x004201d5);
    /* 004201d5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004201d8: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004201db: mov edx, dword ptr [ecx + eax*4 + 8] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 004201df: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004201e2: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004201e5: mov ecx, dword ptr [ecx + eax*4 + 8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 004201e9: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004201eb: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 004201ee: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4201f0u); call_ind(t); }
    /* 004201f0: jmp 0x4201c6 */ goto L_004201c6;
L_004201f2:; BB(0x004201f2);
    /* 004201f2: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004201f5: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 004201f8: mov eax, dword ptr [0x790358] */ r_eax = R32((u32)(0x790358u));
    /* 004201fd: mov cl, byte ptr [eax + edx + 0xa9] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+r_edx+0xa9u))) & 0xffu);
    /* 00420204: mov byte ptr [ebp - 0x15], cl */ W8((u32)(r_ebp+0xffffffebu), (u8)r_ecx);
    /* 00420207: movzx edx, byte ptr [ebp - 0x15] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffebu));
    /* 0042020b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042020d: je 0x420244 */ if (fZ) goto L_00420244;
L_0042020f:; BB(0x0042020f);
    /* 0042020f: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00420212: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00420215: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00420216: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 0042021c: call 0x426370 */ r_esp -= 4; W32(r_esp, 0x420221u); f_00426370();
    /* 00420221: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00420224: jne 0x420244 */ if (!fZ) goto L_00420244;
L_00420226:; BB(0x00420226);
    /* 00420226: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00420228: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042022b: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042022e: imul eax, eax, 0xa */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xau; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00420231: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 00420237: lea edx, [ecx + eax + 0x6c] */ r_edx = (u32)(r_ecx+r_eax+0x6cu);
    /* 0042023b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042023c: call 0x641e20 */ r_esp -= 4; W32(r_esp, 0x420241u); f_00641e20();
    /* 00420241: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00420244:; BB(0x00420244);
    /* 00420244: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00420247: cmp dword ptr [eax + 4], 4 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042024b: je 0x420262 */ if (fZ) goto L_00420262;
L_0042024d:; BB(0x0042024d);
    /* 0042024d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00420250: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00420253: mov eax, dword ptr [0x790358] */ r_eax = R32((u32)(0x790358u));
    /* 00420258: cmp dword ptr [eax + edx*4 + 0xb0], 4 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0xb0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00420260: je 0x4202b1 */ if (fZ) goto L_004202b1;
L_00420262:; BB(0x00420262);
    /* 00420262: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00420269: jmp 0x420274 */ goto L_00420274;
L_0042026b:; BB(0x0042026b);
    /* 0042026b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042026e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00420271: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00420274:; BB(0x00420274);
    /* 00420274: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00420278: jge 0x4202b1 */ if ((fS==fO)) goto L_004202b1;
L_0042027a:; BB(0x0042027a);
    /* 0042027a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042027d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042027e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00420281: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00420284: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00420285: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 0042028b: call 0x4262e0 */ r_esp -= 4; W32(r_esp, 0x420290u); f_004262e0();
    /* 00420290: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 00420293: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00420295: jne 0x420299 */ if (!fZ) goto L_00420299;
L_00420297:; BB(0x00420297);
    /* 00420297: jmp 0x42026b */ goto L_0042026b;
L_00420299:; BB(0x00420299);
    /* 00420299: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042029c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042029d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004202a0: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 004202a3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004202a4: mov ecx, dword ptr [0x790360] */ r_ecx = R32((u32)(0x790360u));
    /* 004202aa: call 0x41f720 */ r_esp -= 4; W32(r_esp, 0x4202afu); f_0041f720();
    /* 004202af: jmp 0x42026b */ goto L_0042026b;
L_004202b1:; BB(0x004202b1);
    /* 004202b1: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004202b4: cmp dword ptr [eax + 4], 4 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004202b8: je 0x4204cd */ if (fZ) goto L_004204cd;
L_004202be:; BB(0x004202be);
    /* 004202be: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004202c1: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 004202c4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004202c5: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 004202cb: call 0x4272e0 */ r_esp -= 4; W32(r_esp, 0x4202d0u); f_004272e0();
    /* 004202d0: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004202d3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004202d5: jne 0x420306 */ if (!fZ) goto L_00420306;
L_004202d7:; BB(0x004202d7);
    /* 004202d7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004202d9: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004202dc: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 004202df: mov eax, dword ptr [0x790360] */ r_eax = R32((u32)(0x790360u));
    /* 004202e4: mov ecx, dword ptr [eax + edx*4 + 0x44] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x44u));
    /* 004202e8: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004202eb: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004202ee: mov edx, dword ptr [0x790360] */ r_edx = R32((u32)(0x790360u));
    /* 004202f4: mov eax, dword ptr [edx + eax*4 + 0x44] */ r_eax = R32((u32)(r_edx+r_eax*4+0x44u));
    /* 004202f8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004202fa: mov ecx, eax */ r_ecx = r_eax;
    /* 004202fc: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00420302: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x420304u); call_ind(t); }
    /* 00420304: jmp 0x420333 */ goto L_00420333;
L_00420306:; BB(0x00420306);
    /* 00420306: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00420308: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042030b: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0042030e: mov eax, dword ptr [0x790360] */ r_eax = R32((u32)(0x790360u));
    /* 00420313: mov ecx, dword ptr [eax + edx*4 + 0x44] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x44u));
    /* 00420317: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042031a: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042031d: mov edx, dword ptr [0x790360] */ r_edx = R32((u32)(0x790360u));
    /* 00420323: mov eax, dword ptr [edx + eax*4 + 0x44] */ r_eax = R32((u32)(r_edx+r_eax*4+0x44u));
    /* 00420327: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00420329: mov ecx, eax */ r_ecx = r_eax;
    /* 0042032b: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00420331: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x420333u); call_ind(t); }
L_00420333:; BB(0x00420333);
    /* 00420333: cmp dword ptr [ebp - 0x10], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00420337: je 0x42034f */ if (fZ) goto L_0042034f;
L_00420339:; BB(0x00420339);
    /* 00420339: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042033d: je 0x42034f */ if (fZ) goto L_0042034f;
L_0042033f:; BB(0x0042033f);
    /* 0042033f: cmp dword ptr [ebp - 0x10], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00420343: je 0x42034f */ if (fZ) goto L_0042034f;
L_00420345:; BB(0x00420345);
    /* 00420345: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00420349: jne 0x4203ed */ if (!fZ) goto L_004203ed;
L_0042034f:; BB(0x0042034f);
    /* 0042034f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00420351: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00420354: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00420357: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00420358: mov ecx, dword ptr [0x790360] */ r_ecx = R32((u32)(0x790360u));
    /* 0042035e: call 0x41f920 */ r_esp -= 4; W32(r_esp, 0x420363u); f_0041f920();
    /* 00420363: add eax, 0x2d */ {  u32 a = r_eax; u32 b = 0x2du; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00420366: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00420367: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00420369: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042036c: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0042036f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00420370: mov ecx, dword ptr [0x790360] */ r_ecx = R32((u32)(0x790360u));
    /* 00420376: call 0x41f8e0 */ r_esp -= 4; W32(r_esp, 0x42037bu); f_0041f8e0();
    /* 0042037b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042037c: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042037f: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00420382: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00420385: mov ecx, dword ptr [ecx + 0x1c] */ r_ecx = R32((u32)(r_ecx+0x1cu));
    /* 00420388: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042038a: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0042038d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42038fu); call_ind(t); }
    /* 0042038f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00420392: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00420395: cmp dword ptr [ebp - 0x20], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00420399: ja 0x4203be */ if ((!fC&&!fZ)) goto L_004203be;
L_0042039b:; BB(0x0042039b);
    /* 0042039b: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042039e: jmp dword ptr [edx*4 + 0x4204d4] */ { u32 t = R32((u32)(r_edx*4+0x4204d4u)); switch (t) { case 0x4203aeu: goto L_004203ae; case 0x4203a5u: goto L_004203a5; case 0x4203b7u: goto L_004203b7; case 0x42047bu: goto L_0042047b; case 0x420472u: goto L_00420472; case 0x420484u: goto L_00420484; default: UNSUP(0x0042039e, "jump table entry is not a known target"); } }
L_004203a5:; BB(0x004203a5);
    /* 004203a5: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 004203ac: jmp 0x4203be */ goto L_004203be;
L_004203ae:; BB(0x004203ae);
    /* 004203ae: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
    /* 004203b5: jmp 0x4203be */ goto L_004203be;
L_004203b7:; BB(0x004203b7);
    /* 004203b7: mov dword ptr [ebp - 0x14], 3 */ W32((u32)(r_ebp+0xffffffecu), 0x3u);
L_004203be:; BB(0x004203be);
    /* 004203be: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004203c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004203c2: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004203c5: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 004203c8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004203cb: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 004203ce: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004203d0: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 004203d6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4203d8u); call_ind(t); }
    /* 004203d8: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004203db: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 004203de: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004203e1: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 004203e4: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004203e6: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 004203e9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4203ebu); call_ind(t); }
    /* 004203eb: jmp 0x420400 */ goto L_00420400;
L_004203ed:; BB(0x004203ed);
    /* 004203ed: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004203f0: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 004203f3: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004203f6: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 004203f9: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004203fb: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 004203fe: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x420400u); call_ind(t); }
L_00420400:; BB(0x00420400);
    /* 00420400: cmp dword ptr [ebp - 0xc], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00420404: je 0x42041c */ if (fZ) goto L_0042041c;
L_00420406:; BB(0x00420406);
    /* 00420406: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042040a: je 0x42041c */ if (fZ) goto L_0042041c;
L_0042040c:; BB(0x0042040c);
    /* 0042040c: cmp dword ptr [ebp - 0xc], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00420410: je 0x42041c */ if (fZ) goto L_0042041c;
L_00420412:; BB(0x00420412);
    /* 00420412: cmp dword ptr [ebp - 0xc], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00420416: jne 0x4204ba */ if (!fZ) goto L_004204ba;
L_0042041c:; BB(0x0042041c);
    /* 0042041c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042041e: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00420421: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00420424: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00420425: mov ecx, dword ptr [0x790360] */ r_ecx = R32((u32)(0x790360u));
    /* 0042042b: call 0x41f920 */ r_esp -= 4; W32(r_esp, 0x420430u); f_0041f920();
    /* 00420430: add eax, 0x55 */ {  u32 a = r_eax; u32 b = 0x55u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00420433: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00420434: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00420436: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00420439: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0042043c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042043d: mov ecx, dword ptr [0x790360] */ r_ecx = R32((u32)(0x790360u));
    /* 00420443: call 0x41f8e0 */ r_esp -= 4; W32(r_esp, 0x420448u); f_0041f8e0();
    /* 00420448: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00420449: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042044c: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 0042044f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00420452: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 00420455: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00420457: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0042045a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42045cu); call_ind(t); }
    /* 0042045c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042045f: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00420462: cmp dword ptr [ebp - 0x24], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00420466: ja 0x42048b */ if ((!fC&&!fZ)) goto L_0042048b;
L_00420468:; BB(0x00420468);
    /* 00420468: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0042046b: jmp dword ptr [edx*4 + 0x4204e4] */ { u32 t = R32((u32)(r_edx*4+0x4204e4u)); switch (t) { case 0x4203b7u: goto L_004203b7; case 0x4203a5u: goto L_004203a5; case 0x4203aeu: goto L_004203ae; case 0x42047bu: goto L_0042047b; case 0x420472u: goto L_00420472; case 0x420484u: goto L_00420484; default: UNSUP(0x0042046b, "jump table entry is not a known target"); } }
L_00420472:; BB(0x00420472);
    /* 00420472: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00420479: jmp 0x42048b */ goto L_0042048b;
L_0042047b:; BB(0x0042047b);
    /* 0042047b: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 00420482: jmp 0x42048b */ goto L_0042048b;
L_00420484:; BB(0x00420484);
    /* 00420484: mov dword ptr [ebp - 8], 3 */ W32((u32)(r_ebp+0xfffffff8u), 0x3u);
L_0042048b:; BB(0x0042048b);
    /* 0042048b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042048e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042048f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00420492: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00420495: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00420498: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0042049b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0042049d: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 004204a3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4204a5u); call_ind(t); }
    /* 004204a5: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004204a8: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 004204ab: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004204ae: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 004204b1: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004204b3: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 004204b6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4204b8u); call_ind(t); }
    /* 004204b8: jmp 0x4204cd */ goto L_004204cd;
L_004204ba:; BB(0x004204ba);
    /* 004204ba: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004204bd: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 004204c0: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004204c3: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 004204c6: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004204c8: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 004204cb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4204cdu); call_ind(t); }
L_004204cd:; BB(0x004204cd);
    /* 004204cd: mov esp, ebp */ r_esp = r_ebp;
    /* 004204cf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004204d0: ret  */ FN_RET(0x00420110); r_esp += 4; return;
}

void f_00420500(void) /* sub_420500 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00420500);
    /* 00420500: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00420501: mov ebp, esp */ r_ebp = r_esp;
    /* 00420503: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00420505: push 0x69e073 */ { u32 v = 0x69e073u; r_esp -= 4; W32(r_esp, v); }
    /* 0042050a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00420510: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00420511: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00420514: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00420519: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042051b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042051c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0042051f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00420525: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00420528: mov eax, dword ptr [0x790360] */ r_eax = R32((u32)(0x790360u));
    /* 0042052d: cmp dword ptr [eax + 0x7c], 0 */ {  u32 a = R32((u32)(r_eax+0x7cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00420531: je 0x4205d1 */ if (fZ) goto L_004205d1;
L_00420537:; BB(0x00420537);
    /* 00420537: push 0x13a3 */ { u32 v = 0x13a3u; r_esp -= 4; W32(r_esp, v); }
    /* 0042053c: mov ecx, dword ptr [0x790360] */ r_ecx = R32((u32)(0x790360u));
    /* 00420542: mov ecx, dword ptr [ecx + 0x7c] */ r_ecx = R32((u32)(r_ecx+0x7cu));
    /* 00420545: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x42054au); f_005eaf00();
    /* 0042054a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042054c: mov edx, dword ptr [0x790360] */ r_edx = R32((u32)(0x790360u));
    /* 00420552: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 00420555: mov ecx, dword ptr [0x790360] */ r_ecx = R32((u32)(0x790360u));
    /* 0042055b: mov ecx, dword ptr [ecx + 0x7c] */ r_ecx = R32((u32)(r_ecx+0x7cu));
    /* 0042055e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00420560: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00420566: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x420568u); call_ind(t); }
    /* 00420568: mov ecx, dword ptr [0x790360] */ r_ecx = R32((u32)(0x790360u));
    /* 0042056e: mov edx, dword ptr [ecx + 0x7c] */ r_edx = R32((u32)(r_ecx+0x7cu));
    /* 00420571: mov eax, dword ptr [0x790360] */ r_eax = R32((u32)(0x790360u));
    /* 00420576: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 00420579: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0042057b: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0042057e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x420580u); call_ind(t); }
    /* 00420580: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00420582: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x420587u); f_00686d82();
    /* 00420587: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042058a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0042058d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00420594: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00420598: je 0x4205ab */ if (fZ) goto L_004205ab;
L_0042059a:; BB(0x0042059a);
    /* 0042059a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042059d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042059e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004205a1: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x4205a6u); f_006010a0();
    /* 004205a6: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004205a9: jmp 0x4205b2 */ goto L_004205b2;
L_004205ab:; BB(0x004205ab);
    /* 004205ab: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004205b2:; BB(0x004205b2);
    /* 004205b2: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004205b5: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 004205b8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004205bf: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004205c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004205c3: mov ecx, dword ptr [0x790360] */ r_ecx = R32((u32)(0x790360u));
    /* 004205c9: mov ecx, dword ptr [ecx + 0x7c] */ r_ecx = R32((u32)(r_ecx+0x7cu));
    /* 004205cc: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x4205d1u); f_005f5d50();
L_004205d1:; BB(0x004205d1);
    /* 004205d1: mov edx, dword ptr [0x790360] */ r_edx = R32((u32)(0x790360u));
    /* 004205d7: cmp dword ptr [edx + 0x78], 0 */ {  u32 a = R32((u32)(r_edx+0x78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004205db: je 0x420676 */ if (fZ) goto L_00420676;
L_004205e1:; BB(0x004205e1);
    /* 004205e1: push 0x13a2 */ { u32 v = 0x13a2u; r_esp -= 4; W32(r_esp, v); }
    /* 004205e6: mov eax, dword ptr [0x790360] */ r_eax = R32((u32)(0x790360u));
    /* 004205eb: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 004205ee: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x4205f3u); f_005eaf00();
    /* 004205f3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004205f5: mov ecx, dword ptr [0x790360] */ r_ecx = R32((u32)(0x790360u));
    /* 004205fb: mov edx, dword ptr [ecx + 0x78] */ r_edx = R32((u32)(r_ecx+0x78u));
    /* 004205fe: mov eax, dword ptr [0x790360] */ r_eax = R32((u32)(0x790360u));
    /* 00420603: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 00420606: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00420608: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0042060e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x420610u); call_ind(t); }
    /* 00420610: mov ecx, dword ptr [0x790360] */ r_ecx = R32((u32)(0x790360u));
    /* 00420616: mov edx, dword ptr [ecx + 0x78] */ r_edx = R32((u32)(r_ecx+0x78u));
    /* 00420619: mov eax, dword ptr [0x790360] */ r_eax = R32((u32)(0x790360u));
    /* 0042061e: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 00420621: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00420623: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00420626: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x420628u); call_ind(t); }
    /* 00420628: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0042062a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x42062fu); f_00686d82();
    /* 0042062f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00420632: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00420635: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0042063c: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00420640: je 0x420651 */ if (fZ) goto L_00420651;
L_00420642:; BB(0x00420642);
    /* 00420642: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00420644: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00420647: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x42064cu); f_006010a0();
    /* 0042064c: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0042064f: jmp 0x420658 */ goto L_00420658;
L_00420651:; BB(0x00420651);
    /* 00420651: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00420658:; BB(0x00420658);
    /* 00420658: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0042065b: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0042065e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00420665: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00420668: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00420669: mov eax, dword ptr [0x790360] */ r_eax = R32((u32)(0x790360u));
    /* 0042066e: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 00420671: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x420676u); f_005f5d50();
L_00420676:; BB(0x00420676);
    /* 00420676: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00420679: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00420680: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00420681: mov esp, ebp */ r_esp = r_ebp;
    /* 00420683: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00420684: ret 4 */ FN_RET(0x00420500); r_esp += 8; return;
}

void f_00420690(void) /* sub_420690 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00420690);
    /* 00420690: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00420691: mov ebp, esp */ r_ebp = r_esp;
    /* 00420693: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00420695: push 0x69e0a4 */ { u32 v = 0x69e0a4u; r_esp -= 4; W32(r_esp, v); }
    /* 0042069a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004206a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004206a1: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004206a4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 004206a9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004206ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004206ac: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 004206af: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 004206b5: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004206b8: mov eax, dword ptr [0x790360] */ r_eax = R32((u32)(0x790360u));
    /* 004206bd: cmp dword ptr [eax + 0x7c], 0 */ {  u32 a = R32((u32)(r_eax+0x7cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004206c1: je 0x420749 */ if (fZ) goto L_00420749;
L_004206c7:; BB(0x004206c7);
    /* 004206c7: push 0x13a5 */ { u32 v = 0x13a5u; r_esp -= 4; W32(r_esp, v); }
    /* 004206cc: mov ecx, dword ptr [0x790360] */ r_ecx = R32((u32)(0x790360u));
    /* 004206d2: mov ecx, dword ptr [ecx + 0x7c] */ r_ecx = R32((u32)(r_ecx+0x7cu));
    /* 004206d5: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x4206dau); f_005eaf00();
    /* 004206da: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004206dc: mov edx, dword ptr [0x790360] */ r_edx = R32((u32)(0x790360u));
    /* 004206e2: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 004206e5: mov ecx, dword ptr [0x790360] */ r_ecx = R32((u32)(0x790360u));
    /* 004206eb: mov ecx, dword ptr [ecx + 0x7c] */ r_ecx = R32((u32)(r_ecx+0x7cu));
    /* 004206ee: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004206f0: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 004206f6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4206f8u); call_ind(t); }
    /* 004206f8: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 004206fa: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4206ffu); f_00686d82();
    /* 004206ff: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00420702: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00420705: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0042070c: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00420710: je 0x420723 */ if (fZ) goto L_00420723;
L_00420712:; BB(0x00420712);
    /* 00420712: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00420715: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00420716: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00420719: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x42071eu); f_006010a0();
    /* 0042071e: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00420721: jmp 0x42072a */ goto L_0042072a;
L_00420723:; BB(0x00420723);
    /* 00420723: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0042072a:; BB(0x0042072a);
    /* 0042072a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0042072d: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00420730: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00420737: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042073a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042073b: mov ecx, dword ptr [0x790360] */ r_ecx = R32((u32)(0x790360u));
    /* 00420741: mov ecx, dword ptr [ecx + 0x7c] */ r_ecx = R32((u32)(r_ecx+0x7cu));
    /* 00420744: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x420749u); f_005f5d50();
L_00420749:; BB(0x00420749);
    /* 00420749: mov edx, dword ptr [0x790360] */ r_edx = R32((u32)(0x790360u));
    /* 0042074f: cmp dword ptr [edx + 0x78], 0 */ {  u32 a = R32((u32)(r_edx+0x78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00420753: je 0x4207d2 */ if (fZ) goto L_004207d2;
L_00420755:; BB(0x00420755);
    /* 00420755: push 0x13a4 */ { u32 v = 0x13a4u; r_esp -= 4; W32(r_esp, v); }
    /* 0042075a: mov eax, dword ptr [0x790360] */ r_eax = R32((u32)(0x790360u));
    /* 0042075f: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 00420762: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x420767u); f_005eaf00();
    /* 00420767: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00420769: mov ecx, dword ptr [0x790360] */ r_ecx = R32((u32)(0x790360u));
    /* 0042076f: mov edx, dword ptr [ecx + 0x78] */ r_edx = R32((u32)(r_ecx+0x78u));
    /* 00420772: mov eax, dword ptr [0x790360] */ r_eax = R32((u32)(0x790360u));
    /* 00420777: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 0042077a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0042077c: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00420782: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x420784u); call_ind(t); }
    /* 00420784: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00420786: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x42078bu); f_00686d82();
    /* 0042078b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042078e: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00420791: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00420798: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042079c: je 0x4207ad */ if (fZ) goto L_004207ad;
L_0042079e:; BB(0x0042079e);
    /* 0042079e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004207a0: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004207a3: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x4207a8u); f_006010a0();
    /* 004207a8: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004207ab: jmp 0x4207b4 */ goto L_004207b4;
L_004207ad:; BB(0x004207ad);
    /* 004207ad: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_004207b4:; BB(0x004207b4);
    /* 004207b4: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004207b7: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 004207ba: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004207c1: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004207c4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004207c5: mov eax, dword ptr [0x790360] */ r_eax = R32((u32)(0x790360u));
    /* 004207ca: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 004207cd: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x4207d2u); f_005f5d50();
L_004207d2:; BB(0x004207d2);
    /* 004207d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004207d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004207dc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004207dd: mov esp, ebp */ r_esp = r_ebp;
    /* 004207df: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004207e0: ret 4 */ FN_RET(0x00420690); r_esp += 8; return;
}

void f_004207f0(void) /* sub_4207F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004207f0);
    /* 004207f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004207f1: mov ebp, esp */ r_ebp = r_esp;
    /* 004207f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004207f5: push 0x69e0d5 */ { u32 v = 0x69e0d5u; r_esp -= 4; W32(r_esp, v); }
    /* 004207fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00420800: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00420801: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00420804: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00420809: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042080b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042080c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0042080f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00420815: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00420818: mov eax, dword ptr [0x790360] */ r_eax = R32((u32)(0x790360u));
    /* 0042081d: cmp dword ptr [eax + 0x7c], 0 */ {  u32 a = R32((u32)(r_eax+0x7cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00420821: je 0x4208a9 */ if (fZ) goto L_004208a9;
L_00420827:; BB(0x00420827);
    /* 00420827: push 0x13ad */ { u32 v = 0x13adu; r_esp -= 4; W32(r_esp, v); }
    /* 0042082c: mov ecx, dword ptr [0x790360] */ r_ecx = R32((u32)(0x790360u));
    /* 00420832: mov ecx, dword ptr [ecx + 0x7c] */ r_ecx = R32((u32)(r_ecx+0x7cu));
    /* 00420835: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x42083au); f_005eaf00();
    /* 0042083a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042083c: mov edx, dword ptr [0x790360] */ r_edx = R32((u32)(0x790360u));
    /* 00420842: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 00420845: mov ecx, dword ptr [0x790360] */ r_ecx = R32((u32)(0x790360u));
    /* 0042084b: mov ecx, dword ptr [ecx + 0x7c] */ r_ecx = R32((u32)(r_ecx+0x7cu));
    /* 0042084e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00420850: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00420856: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x420858u); call_ind(t); }
    /* 00420858: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0042085a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x42085fu); f_00686d82();
    /* 0042085f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00420862: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00420865: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0042086c: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00420870: je 0x420883 */ if (fZ) goto L_00420883;
L_00420872:; BB(0x00420872);
    /* 00420872: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00420875: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00420876: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00420879: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x42087eu); f_006010a0();
    /* 0042087e: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00420881: jmp 0x42088a */ goto L_0042088a;
L_00420883:; BB(0x00420883);
    /* 00420883: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0042088a:; BB(0x0042088a);
    /* 0042088a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0042088d: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00420890: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00420897: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042089a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042089b: mov ecx, dword ptr [0x790360] */ r_ecx = R32((u32)(0x790360u));
    /* 004208a1: mov ecx, dword ptr [ecx + 0x7c] */ r_ecx = R32((u32)(r_ecx+0x7cu));
    /* 004208a4: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x4208a9u); f_005f5d50();
L_004208a9:; BB(0x004208a9);
    /* 004208a9: mov edx, dword ptr [0x790360] */ r_edx = R32((u32)(0x790360u));
    /* 004208af: cmp dword ptr [edx + 0x78], 0 */ {  u32 a = R32((u32)(r_edx+0x78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004208b3: je 0x420932 */ if (fZ) goto L_00420932;
L_004208b5:; BB(0x004208b5);
    /* 004208b5: push 0x13ac */ { u32 v = 0x13acu; r_esp -= 4; W32(r_esp, v); }
    /* 004208ba: mov eax, dword ptr [0x790360] */ r_eax = R32((u32)(0x790360u));
    /* 004208bf: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 004208c2: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x4208c7u); f_005eaf00();
    /* 004208c7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004208c9: mov ecx, dword ptr [0x790360] */ r_ecx = R32((u32)(0x790360u));
    /* 004208cf: mov edx, dword ptr [ecx + 0x78] */ r_edx = R32((u32)(r_ecx+0x78u));
    /* 004208d2: mov eax, dword ptr [0x790360] */ r_eax = R32((u32)(0x790360u));
    /* 004208d7: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 004208da: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004208dc: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 004208e2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4208e4u); call_ind(t); }
    /* 004208e4: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 004208e6: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4208ebu); f_00686d82();
    /* 004208eb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004208ee: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004208f1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004208f8: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004208fc: je 0x42090d */ if (fZ) goto L_0042090d;
L_004208fe:; BB(0x004208fe);
    /* 004208fe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00420900: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00420903: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x420908u); f_006010a0();
    /* 00420908: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0042090b: jmp 0x420914 */ goto L_00420914;
L_0042090d:; BB(0x0042090d);
    /* 0042090d: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00420914:; BB(0x00420914);
    /* 00420914: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00420917: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0042091a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00420921: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00420924: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00420925: mov eax, dword ptr [0x790360] */ r_eax = R32((u32)(0x790360u));
    /* 0042092a: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 0042092d: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x420932u); f_005f5d50();
L_00420932:; BB(0x00420932);
    /* 00420932: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00420935: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0042093c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0042093d: mov esp, ebp */ r_esp = r_ebp;
    /* 0042093f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00420940: ret 4 */ FN_RET(0x004207f0); r_esp += 8; return;
}

void f_004209a0(void) /* sub_4209A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004209a0);
    /* 004209a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004209a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004209a3: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004209a6: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 004209a9: mov dword ptr [ebp - 0x20], 0x166 */ W32((u32)(r_ebp+0xffffffe0u), 0x166u);
    /* 004209b0: mov dword ptr [ebp - 0x1c], 0x170 */ W32((u32)(r_ebp+0xffffffe4u), 0x170u);
    /* 004209b7: mov dword ptr [ebp - 0x18], 0xe3 */ W32((u32)(r_ebp+0xffffffe8u), 0xe3u);
    /* 004209be: mov dword ptr [ebp - 0x14], 0xd7 */ W32((u32)(r_ebp+0xffffffecu), 0xd7u);
    /* 004209c5: mov dword ptr [ebp - 0x10], 0x1d9 */ W32((u32)(r_ebp+0xfffffff0u), 0x1d9u);
    /* 004209cc: mov dword ptr [ebp - 0xc], 0x1fa */ W32((u32)(r_ebp+0xfffffff4u), 0x1fau);
    /* 004209d3: mov dword ptr [ebp - 8], 0x62 */ W32((u32)(r_ebp+0xfffffff8u), 0x62u);
    /* 004209da: mov dword ptr [ebp - 4], 0x43 */ W32((u32)(r_ebp+0xfffffffcu), 0x43u);
    /* 004209e1: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004209e4: mov ecx, dword ptr [eax + 0xae0] */ r_ecx = R32((u32)(r_eax+0xae0u));
    /* 004209ea: mov eax, dword ptr [ebp + ecx*4 - 0x20] */ r_eax = R32((u32)(r_ebp+r_ecx*4+0xffffffe0u));
    /* 004209ee: mov esp, ebp */ r_esp = r_ebp;
    /* 004209f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004209f1: ret 8 */ FN_RET(0x004209a0); r_esp += 12; return;
}

void f_00420a00(void) /* sub_420A00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00420a00);
    /* 00420a00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00420a01: mov ebp, esp */ r_ebp = r_esp;
    /* 00420a03: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00420a06: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00420a09: mov dword ptr [ebp - 0x20], 0x127 */ W32((u32)(r_ebp+0xffffffe0u), 0x127u);
    /* 00420a10: mov dword ptr [ebp - 0x1c], 0x152 */ W32((u32)(r_ebp+0xffffffe4u), 0x152u);
    /* 00420a17: mov dword ptr [ebp - 0x18], 0x127 */ W32((u32)(r_ebp+0xffffffe8u), 0x127u);
    /* 00420a1e: mov dword ptr [ebp - 0x14], 0x151 */ W32((u32)(r_ebp+0xffffffecu), 0x151u);
    /* 00420a25: mov dword ptr [ebp - 0x10], 0xf2 */ W32((u32)(r_ebp+0xfffffff0u), 0xf2u);
    /* 00420a2c: mov dword ptr [ebp - 0xc], 0x112 */ W32((u32)(r_ebp+0xfffffff4u), 0x112u);
    /* 00420a33: mov dword ptr [ebp - 8], 0xf2 */ W32((u32)(r_ebp+0xfffffff8u), 0xf2u);
    /* 00420a3a: mov dword ptr [ebp - 4], 0x113 */ W32((u32)(r_ebp+0xfffffffcu), 0x113u);
    /* 00420a41: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00420a44: mov ecx, dword ptr [eax + 0xae0] */ r_ecx = R32((u32)(r_eax+0xae0u));
    /* 00420a4a: mov eax, dword ptr [ebp + ecx*4 - 0x20] */ r_eax = R32((u32)(r_ebp+r_ecx*4+0xffffffe0u));
    /* 00420a4e: mov esp, ebp */ r_esp = r_ebp;
    /* 00420a50: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00420a51: ret 8 */ FN_RET(0x00420a00); r_esp += 12; return;
}

void f_00420d90(void) /* sub_420D90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00420d90);
    /* 00420d90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00420d91: mov ebp, esp */ r_ebp = r_esp;
    /* 00420d93: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00420d95: push 0x69e14a */ { u32 v = 0x69e14au; r_esp -= 4; W32(r_esp, v); }
    /* 00420d9a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00420da0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00420da1: sub esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00420da7: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00420dac: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00420dae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00420daf: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00420db2: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00420db8: mov dword ptr [ebp - 0x78], ecx */ W32((u32)(r_ebp+0xffffff88u), r_ecx);
    /* 00420dbb: mov dword ptr [ebp - 0x3c], 0x92 */ W32((u32)(r_ebp+0xffffffc4u), 0x92u);
    /* 00420dc2: mov dword ptr [ebp - 0x38], 0x88 */ W32((u32)(r_ebp+0xffffffc8u), 0x88u);
    /* 00420dc9: mov dword ptr [ebp - 0x34], 0x7d */ W32((u32)(r_ebp+0xffffffccu), 0x7du);
    /* 00420dd0: mov dword ptr [ebp - 0x30], 0x71 */ W32((u32)(r_ebp+0xffffffd0u), 0x71u);
    /* 00420dd7: mov dword ptr [ebp - 0x2c], 0x66 */ W32((u32)(r_ebp+0xffffffd4u), 0x66u);
    /* 00420dde: mov dword ptr [ebp - 0x28], 0x5b */ W32((u32)(r_ebp+0xffffffd8u), 0x5bu);
    /* 00420de5: mov dword ptr [ebp - 0x24], 0x4f */ W32((u32)(r_ebp+0xffffffdcu), 0x4fu);
    /* 00420dec: mov dword ptr [ebp - 0x20], 0x44 */ W32((u32)(r_ebp+0xffffffe0u), 0x44u);
    /* 00420df3: mov dword ptr [ebp - 0x1c], 0x39 */ W32((u32)(r_ebp+0xffffffe4u), 0x39u);
    /* 00420dfa: mov dword ptr [ebp - 0x18], 0x2d */ W32((u32)(r_ebp+0xffffffe8u), 0x2du);
    /* 00420e01: mov dword ptr [ebp - 0x14], 0x22 */ W32((u32)(r_ebp+0xffffffecu), 0x22u);
    /* 00420e08: mov dword ptr [ebp - 0x10], 0x17 */ W32((u32)(r_ebp+0xfffffff0u), 0x17u);
    /* 00420e0f: mov dword ptr [ebp - 0x4c], 0x76 */ W32((u32)(r_ebp+0xffffffb4u), 0x76u);
    /* 00420e16: mov dword ptr [ebp - 0x48], 0x54 */ W32((u32)(r_ebp+0xffffffb8u), 0x54u);
    /* 00420e1d: mov dword ptr [ebp - 0x44], 0x30 */ W32((u32)(r_ebp+0xffffffbcu), 0x30u);
    /* 00420e24: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 00420e29: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x420e2eu); f_00686d82();
    /* 00420e2e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00420e31: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00420e34: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00420e3b: cmp dword ptr [ebp - 0x54], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00420e3f: je 0x420e4e */ if (fZ) goto L_00420e4e;
L_00420e41:; BB(0x00420e41);
    /* 00420e41: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00420e44: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x420e49u); f_005eaaf0();
    /* 00420e49: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 00420e4c: jmp 0x420e55 */ goto L_00420e55;
L_00420e4e:; BB(0x00420e4e);
    /* 00420e4e: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
L_00420e55:; BB(0x00420e55);
    /* 00420e55: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 00420e58: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00420e5b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00420e62: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 00420e65: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00420e68: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 00420e6b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00420e6d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00420e6f: push 0x29 */ { u32 v = 0x29u; r_esp -= 4; W32(r_esp, v); }
    /* 00420e71: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00420e74: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00420e75: push 0x3106dc */ { u32 v = 0x3106dcu; r_esp -= 4; W32(r_esp, v); }
    /* 00420e7a: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 00420e7d: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00420e80: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x420e85u); f_005eae80();
    /* 00420e85: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 00420e8c: jmp 0x420e97 */ goto L_00420e97;
L_00420e8e:; BB(0x00420e8e);
    /* 00420e8e: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00420e91: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00420e94: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
L_00420e97:; BB(0x00420e97);
    /* 00420e97: cmp dword ptr [ebp - 0x40], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00420e9b: jge 0x420f0c */ if ((fS==fO)) goto L_00420f0c;
L_00420e9d:; BB(0x00420e9d);
    /* 00420e9d: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 00420ea2: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x420ea7u); f_00686d82();
    /* 00420ea7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00420eaa: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 00420ead: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00420eb4: cmp dword ptr [ebp - 0x5c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00420eb8: je 0x420ec7 */ if (fZ) goto L_00420ec7;
L_00420eba:; BB(0x00420eba);
    /* 00420eba: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00420ebd: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x420ec2u); f_005eaaf0();
    /* 00420ec2: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 00420ec5: jmp 0x420ece */ goto L_00420ece;
L_00420ec7:; BB(0x00420ec7);
    /* 00420ec7: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
L_00420ece:; BB(0x00420ece);
    /* 00420ece: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 00420ed1: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 00420ed4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00420edb: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00420ede: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 00420ee1: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00420ee4: mov dword ptr [edx + ecx*4 + 8], eax */ W32((u32)(r_edx+r_ecx*4+0x8u), r_eax);
    /* 00420ee8: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00420eea: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00420eec: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 00420eee: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00420ef1: mov edx, dword ptr [ebp + ecx*4 - 0x4c] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffb4u));
    /* 00420ef5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00420ef6: push 0x3106dd */ { u32 v = 0x3106ddu; r_esp -= 4; W32(r_esp, v); }
    /* 00420efb: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00420efe: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 00420f01: mov ecx, dword ptr [ecx + eax*4 + 8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 00420f05: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x420f0au); f_005eae80();
    /* 00420f0a: jmp 0x420e8e */ goto L_00420e8e;
L_00420f0c:; BB(0x00420f0c);
    /* 00420f0c: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 00420f13: jmp 0x420f1e */ goto L_00420f1e;
L_00420f15:; BB(0x00420f15);
    /* 00420f15: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00420f18: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00420f1b: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
L_00420f1e:; BB(0x00420f1e);
    /* 00420f1e: cmp dword ptr [ebp - 0x40], 0xc */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00420f22: jge 0x420f9f */ if ((fS==fO)) goto L_00420f9f;
L_00420f24:; BB(0x00420f24);
    /* 00420f24: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 00420f29: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x420f2eu); f_00686d82();
    /* 00420f2e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00420f31: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 00420f34: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00420f3b: cmp dword ptr [ebp - 0x64], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff9cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00420f3f: je 0x420f51 */ if (fZ) goto L_00420f51;
L_00420f41:; BB(0x00420f41);
    /* 00420f41: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 00420f44: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x420f49u); f_005eaaf0();
    /* 00420f49: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 00420f4f: jmp 0x420f5b */ goto L_00420f5b;
L_00420f51:; BB(0x00420f51);
    /* 00420f51: mov dword ptr [ebp - 0x84], 0 */ W32((u32)(r_ebp+0xffffff7cu), 0x0u);
L_00420f5b:; BB(0x00420f5b);
    /* 00420f5b: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 00420f61: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 00420f64: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00420f6b: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00420f6e: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 00420f71: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 00420f74: mov dword ptr [edx + ecx*4 + 0x14], eax */ W32((u32)(r_edx+r_ecx*4+0x14u), r_eax);
    /* 00420f78: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00420f7a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00420f7c: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 00420f7e: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00420f81: mov edx, dword ptr [ebp + ecx*4 - 0x3c] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffc4u));
    /* 00420f85: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00420f86: push 0x3106de */ { u32 v = 0x3106deu; r_esp -= 4; W32(r_esp, v); }
    /* 00420f8b: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00420f8e: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 00420f91: mov ecx, dword ptr [ecx + eax*4 + 0x14] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x14u));
    /* 00420f95: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x420f9au); f_005eae80();
    /* 00420f9a: jmp 0x420f15 */ goto L_00420f15;
L_00420f9f:; BB(0x00420f9f);
    /* 00420f9f: push 0x188 */ { u32 v = 0x188u; r_esp -= 4; W32(r_esp, v); }
    /* 00420fa4: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x420fa9u); f_00686d82();
    /* 00420fa9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00420fac: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 00420faf: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00420fb6: cmp dword ptr [ebp - 0x6c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff94u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00420fba: je 0x420fcc */ if (fZ) goto L_00420fcc;
L_00420fbc:; BB(0x00420fbc);
    /* 00420fbc: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00420fbf: call 0x4212a0 */ r_esp -= 4; W32(r_esp, 0x420fc4u); f_004212a0();
    /* 00420fc4: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 00420fca: jmp 0x420fd6 */ goto L_00420fd6;
L_00420fcc:; BB(0x00420fcc);
    /* 00420fcc: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
L_00420fd6:; BB(0x00420fd6);
    /* 00420fd6: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 00420fdc: mov dword ptr [ebp - 0x68], edx */ W32((u32)(r_ebp+0xffffff98u), r_edx);
    /* 00420fdf: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00420fe6: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 00420fe9: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00420fec: mov dword ptr [eax + 0x44], ecx */ W32((u32)(r_eax+0x44u), r_ecx);
    /* 00420fef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00420ff1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00420ff3: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 00420ff5: push 0x9b */ { u32 v = 0x9bu; r_esp -= 4; W32(r_esp, v); }
    /* 00420ffa: push 0x3106e1 */ { u32 v = 0x3106e1u; r_esp -= 4; W32(r_esp, v); }
    /* 00420fff: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 00421002: mov ecx, dword ptr [edx + 0x44] */ r_ecx = R32((u32)(r_edx+0x44u));
    /* 00421005: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x42100au); f_005eae80();
    /* 0042100a: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0042100c: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x421011u); f_00686d82();
    /* 00421011: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00421014: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 00421017: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 0042101e: cmp dword ptr [ebp - 0x74], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00421022: je 0x421036 */ if (fZ) goto L_00421036;
L_00421024:; BB(0x00421024);
    /* 00421024: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00421026: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00421029: call 0x600a70 */ r_esp -= 4; W32(r_esp, 0x42102eu); f_00600a70();
    /* 0042102e: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 00421034: jmp 0x421040 */ goto L_00421040;
L_00421036:; BB(0x00421036);
    /* 00421036: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
L_00421040:; BB(0x00421040);
    /* 00421040: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 00421046: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 00421049: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00421050: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 00421053: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00421054: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 00421057: mov ecx, dword ptr [edx + 0x44] */ r_ecx = R32((u32)(r_edx+0x44u));
    /* 0042105a: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x42105fu); f_005f5d50();
    /* 0042105f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00421062: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00421069: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0042106a: mov esp, ebp */ r_esp = r_ebp;
    /* 0042106c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042106d: ret  */ FN_RET(0x00420d90); r_esp += 4; return;
}

