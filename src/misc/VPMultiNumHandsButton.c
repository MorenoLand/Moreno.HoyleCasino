#include "protos.h"

void f_00563100(void) /* VPMultiNumHandsButton::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00563100);
    /* 00563100: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00563101: mov ebp, esp */ r_ebp = r_esp;
    /* 00563103: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00563104: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00563107: mov eax, dword ptr [0x79343c] */ r_eax = R32((u32)(0x79343cu));
    /* 0056310c: movzx ecx, byte ptr [eax + 0x3c] */ r_ecx = (u32)R8((u32)(r_eax+0x3cu));
    /* 00563110: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00563112: je 0x56318c */ if (fZ) goto L_0056318c;
L_00563114:; BB(0x00563114);
    /* 00563114: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00563117: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00563118: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056311b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0056311d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00563120: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 00563126: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x563128u); call_ind(t); }
    /* 00563128: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0056312b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056312d: je 0x563158 */ if (fZ) goto L_00563158;
L_0056312f:; BB(0x0056312f);
    /* 0056312f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00563132: mov byte ptr [edx + 4], 1 */ W8((u32)(r_edx+0x4u), 0x1u);
    /* 00563136: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00563139: movzx ecx, byte ptr [eax + 0x1e0] */ r_ecx = (u32)R8((u32)(r_eax+0x1e0u));
    /* 00563140: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00563142: jne 0x563156 */ if (!fZ) goto L_00563156;
L_00563144:; BB(0x00563144);
    /* 00563144: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00563146: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00563149: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0056314b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056314e: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 00563154: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x563156u); call_ind(t); }
L_00563156:; BB(0x00563156);
    /* 00563156: jmp 0x56318c */ goto L_0056318c;
L_00563158:; BB(0x00563158);
    /* 00563158: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056315b: movzx ecx, byte ptr [eax + 0x1e0] */ r_ecx = (u32)R8((u32)(r_eax+0x1e0u));
    /* 00563162: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00563164: je 0x56317a */ if (fZ) goto L_0056317a;
L_00563166:; BB(0x00563166);
    /* 00563166: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00563168: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056316b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0056316d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00563170: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 00563176: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x563178u); call_ind(t); }
    /* 00563178: jmp 0x56318c */ goto L_0056318c;
L_0056317a:; BB(0x0056317a);
    /* 0056317a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056317c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056317f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00563181: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00563184: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0056318a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56318cu); call_ind(t); }
L_0056318c:; BB(0x0056318c);
    /* 0056318c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0056318f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00563190: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00563193: call 0x5f4fc0 */ r_esp -= 4; W32(r_esp, 0x563198u); f_005f4fc0();
    /* 00563198: mov esp, ebp */ r_esp = r_ebp;
    /* 0056319a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056319b: ret 4 */ FN_RET(0x00563100); r_esp += 8; return;
}

void f_005631a0(void) /* VPMultiNumHandsButton::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005631a0);
    /* 005631a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005631a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005631a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005631a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005631a7: mov eax, dword ptr [0x79343c] */ r_eax = R32((u32)(0x79343cu));
    /* 005631ac: movzx ecx, byte ptr [eax + 0x3c] */ r_ecx = (u32)R8((u32)(r_eax+0x3cu));
    /* 005631b0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005631b2: je 0x5631d4 */ if (fZ) goto L_005631d4;
L_005631b4:; BB(0x005631b4);
    /* 005631b4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005631b7: movzx eax, byte ptr [edx + 0x1e0] */ r_eax = (u32)R8((u32)(r_edx+0x1e0u));
    /* 005631be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005631c0: jne 0x5631d4 */ if (!fZ) goto L_005631d4;
L_005631c2:; BB(0x005631c2);
    /* 005631c2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005631c4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005631c7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005631c9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005631cc: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005631d2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5631d4u); call_ind(t); }
L_005631d4:; BB(0x005631d4);
    /* 005631d4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005631d7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005631d8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005631db: call 0x601ca0 */ r_esp -= 4; W32(r_esp, 0x5631e0u); f_00601ca0();
    /* 005631e0: mov esp, ebp */ r_esp = r_ebp;
    /* 005631e2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005631e3: ret 4 */ FN_RET(0x005631a0); r_esp += 8; return;
}

void f_005631f0(void) /* VPMultiNumHandsButton::vfunc4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005631f0);
    /* 005631f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005631f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005631f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005631f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005631f7: mov eax, dword ptr [0x79343c] */ r_eax = R32((u32)(0x79343cu));
    /* 005631fc: movzx ecx, byte ptr [eax + 0x3c] */ r_ecx = (u32)R8((u32)(r_eax+0x3cu));
    /* 00563200: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00563202: je 0x563222 */ if (fZ) goto L_00563222;
L_00563204:; BB(0x00563204);
    /* 00563204: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00563207: movzx eax, byte ptr [edx + 0x1e0] */ r_eax = (u32)R8((u32)(r_edx+0x1e0u));
    /* 0056320e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00563210: jne 0x563222 */ if (!fZ) goto L_00563222;
L_00563212:; BB(0x00563212);
    /* 00563212: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00563215: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00563217: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056321a: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 00563220: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x563222u); call_ind(t); }
L_00563222:; BB(0x00563222);
    /* 00563222: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00563225: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00563226: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00563229: call 0x601e90 */ r_esp -= 4; W32(r_esp, 0x56322eu); f_00601e90();
    /* 0056322e: mov esp, ebp */ r_esp = r_ebp;
    /* 00563230: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00563231: ret 4 */ FN_RET(0x005631f0); r_esp += 8; return;
}

void f_00563240(void) /* VPMultiNumHandsButton::vfunc48 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00563240);
    /* 00563240: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00563241: mov ebp, esp */ r_ebp = r_esp;
    /* 00563243: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00563246: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00563249: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00563250: mov eax, dword ptr [0x79343c] */ r_eax = R32((u32)(0x79343cu));
    /* 00563255: movzx ecx, byte ptr [eax + 0x3c] */ r_ecx = (u32)R8((u32)(r_eax+0x3cu));
    /* 00563259: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056325b: je 0x56326f */ if (fZ) goto L_0056326f;
L_0056325d:; BB(0x0056325d);
    /* 0056325d: mov edx, dword ptr [0x79343c] */ r_edx = R32((u32)(0x79343cu));
    /* 00563263: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00563266: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00563269: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056326d: je 0x563274 */ if (fZ) goto L_00563274;
L_0056326f:; BB(0x0056326f);
    /* 0056326f: jmp 0x563350 */ goto L_00563350;
L_00563274:; BB(0x00563274);
    /* 00563274: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00563277: mov edx, dword ptr [ecx + 0x1dc] */ r_edx = R32((u32)(r_ecx+0x1dcu));
    /* 0056327d: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00563280: cmp dword ptr [ebp - 0x14], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00563284: ja 0x5632bb */ if ((!fC&&!fZ)) goto L_005632bb;
L_00563286:; BB(0x00563286);
    /* 00563286: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00563289: jmp dword ptr [eax*4 + 0x563354] */ { u32 t = R32((u32)(r_eax*4+0x563354u)); switch (t) { case 0x563290u: goto L_00563290; case 0x563299u: goto L_00563299; case 0x5632a2u: goto L_005632a2; case 0x5632abu: goto L_005632ab; case 0x5632b4u: goto L_005632b4; default: UNSUP(0x00563289, "jump table entry is not a known target"); } }
L_00563290:; BB(0x00563290);
    /* 00563290: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 00563297: jmp 0x5632bb */ goto L_005632bb;
L_00563299:; BB(0x00563299);
    /* 00563299: mov dword ptr [ebp - 8], 5 */ W32((u32)(r_ebp+0xfffffff8u), 0x5u);
    /* 005632a0: jmp 0x5632bb */ goto L_005632bb;
L_005632a2:; BB(0x005632a2);
    /* 005632a2: mov dword ptr [ebp - 8], 0xa */ W32((u32)(r_ebp+0xfffffff8u), 0xau);
    /* 005632a9: jmp 0x5632bb */ goto L_005632bb;
L_005632ab:; BB(0x005632ab);
    /* 005632ab: mov dword ptr [ebp - 8], 0x19 */ W32((u32)(r_ebp+0xfffffff8u), 0x19u);
    /* 005632b2: jmp 0x5632bb */ goto L_005632bb;
L_005632b4:; BB(0x005632b4);
    /* 005632b4: mov dword ptr [ebp - 8], 0x32 */ W32((u32)(r_ebp+0xfffffff8u), 0x32u);
L_005632bb:; BB(0x005632bb);
    /* 005632bb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005632bd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005632c0: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005632c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005632c4: mov edx, dword ptr [0x79343c] */ r_edx = R32((u32)(0x79343cu));
    /* 005632ca: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 005632cd: call 0x56a7a0 */ r_esp -= 4; W32(r_esp, 0x5632d2u); f_0056a7a0();
    /* 005632d2: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005632d4: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005632d7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005632d9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005632dc: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005632e2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5632e4u); call_ind(t); }
    /* 005632e4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005632e7: mov byte ptr [ecx + 0x1e0], 1 */ W8((u32)(r_ecx+0x1e0u), 0x1u);
    /* 005632ee: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005632f5: jmp 0x563300 */ goto L_00563300;
L_005632f7:; BB(0x005632f7);
    /* 005632f7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005632fa: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005632fd: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00563300:; BB(0x00563300);
    /* 00563300: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00563304: jge 0x563350 */ if ((fS==fO)) goto L_00563350;
L_00563306:; BB(0x00563306);
    /* 00563306: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00563309: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056330c: cmp ecx, dword ptr [eax + 0x1dc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x1dcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00563312: je 0x56334e */ if (fZ) goto L_0056334e;
L_00563314:; BB(0x00563314);
    /* 00563314: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00563316: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00563319: mov eax, dword ptr [0x793440] */ r_eax = R32((u32)(0x793440u));
    /* 0056331e: mov ecx, dword ptr [eax + edx*4 + 0x60] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x60u));
    /* 00563322: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00563325: mov eax, dword ptr [0x793440] */ r_eax = R32((u32)(0x793440u));
    /* 0056332a: mov edx, dword ptr [eax + edx*4 + 0x60] */ r_edx = R32((u32)(r_eax+r_edx*4+0x60u));
    /* 0056332e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00563330: mov ecx, edx */ r_ecx = r_edx;
    /* 00563332: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 00563338: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x56333au); call_ind(t); }
    /* 0056333a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056333d: mov ecx, dword ptr [0x793440] */ r_ecx = R32((u32)(0x793440u));
    /* 00563343: mov edx, dword ptr [ecx + eax*4 + 0x60] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x60u));
    /* 00563347: mov byte ptr [edx + 0x1e0], 0 */ W8((u32)(r_edx+0x1e0u), 0x0u);
L_0056334e:; BB(0x0056334e);
    /* 0056334e: jmp 0x5632f7 */ goto L_005632f7;
L_00563350:; BB(0x00563350);
    /* 00563350: mov esp, ebp */ r_esp = r_ebp;
    /* 00563352: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00563353: ret  */ FN_RET(0x00563240); r_esp += 4; return;
}

