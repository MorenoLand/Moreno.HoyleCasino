#include "protos.h"

void f_0040ff90(void) /* BlackjackDealScript::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040ff90);
    /* 0040ff90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040ff91: mov ebp, esp */ r_ebp = r_esp;
    /* 0040ff93: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040ff95: push 0x69dbb3 */ { u32 v = 0x69dbb3u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ff9a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0040ffa0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040ffa1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040ffa2: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0040ffa7: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040ffa9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040ffaa: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0040ffad: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0040ffb3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0040ffb6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ffb8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040ffbb: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x40ffc0u); f_005fc0d0();
    /* 0040ffc0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040ffc7: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040ffca: mov dword ptr [eax], 0x6b3aa8 */ W32((u32)(r_eax), 0x6b3aa8u);
    /* 0040ffd0: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ffd2: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0040ffd8: call 0x637810 */ r_esp -= 4; W32(r_esp, 0x40ffddu); f_00637810();
    /* 0040ffdd: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0040ffdf: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040ffe2: setl cl */ r_ecx = (r_ecx & 0xffffff00u) | ((((fS!=fO)) ? 1 : 0) & 0xffu);
    /* 0040ffe5: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040ffe8: mov byte ptr [edx + 0x24], cl */ W8((u32)(r_edx+0x24u), (u8)r_ecx);
    /* 0040ffeb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0040fff2: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040fff5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040fff8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0040ffff: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00410000: mov esp, ebp */ r_esp = r_ebp;
    /* 00410002: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00410003: ret  */ FN_RET(0x0040ff90); r_esp += 4; return;
}

void f_004100c0(void) /* BlackjackDealScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004100c0);
    /* 004100c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004100c1: mov ebp, esp */ r_ebp = r_esp;
    /* 004100c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004100c5: push 0x69dbef */ { u32 v = 0x69dbefu; r_esp -= 4; W32(r_esp, v); }
    /* 004100ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004100d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004100d1: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004100d4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 004100d9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004100db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004100dc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 004100df: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 004100e5: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 004100e8: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004100eb: call 0x5fc360 */ r_esp -= 4; W32(r_esp, 0x4100f0u); f_005fc360();
    /* 004100f0: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 004100f3: cmp dword ptr [ebp - 0x2c], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004100f7: ja 0x4103ba */ if ((!fC&&!fZ)) goto L_004103ba;
L_004100fd:; BB(0x004100fd);
    /* 004100fd: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00410100: jmp dword ptr [eax*4 + 0x4103cc] */ { u32 t = R32((u32)(r_eax*4+0x4103ccu)); switch (t) { case 0x410107u: goto L_00410107; case 0x410199u: goto L_00410199; case 0x410252u: goto L_00410252; case 0x41030eu: goto L_0041030e; case 0x410350u: goto L_00410350; default: UNSUP(0x00410100, "jump table entry is not a known target"); } }
L_00410107:; BB(0x00410107);
    /* 00410107: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0041010d: call 0x41a390 */ r_esp -= 4; W32(r_esp, 0x410112u); f_0041a390();
    /* 00410112: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410115: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 00410118: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041011a: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0041011d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0041011f: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410122: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00410125: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x410127u); call_ind(t); }
    /* 00410127: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0041012a: call 0x410030 */ r_esp -= 4; W32(r_esp, 0x41012fu); f_00410030();
    /* 0041012f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00410132: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00410134: je 0x410185 */ if (fZ) goto L_00410185;
L_00410136:; BB(0x00410136);
    /* 00410136: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00410138: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x41013du); f_00686d82();
    /* 0041013d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00410140: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00410143: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0041014a: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041014e: je 0x410163 */ if (fZ) goto L_00410163;
L_00410150:; BB(0x00410150);
    /* 00410150: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410153: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00410154: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00410156: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00410159: call 0x4103e0 */ r_esp -= 4; W32(r_esp, 0x41015eu); f_004103e0();
    /* 0041015e: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00410161: jmp 0x41016a */ goto L_0041016a;
L_00410163:; BB(0x00410163);
    /* 00410163: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_0041016a:; BB(0x0041016a);
    /* 0041016a: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0041016d: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00410170: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00410177: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041017a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041017b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0041017e: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x410183u); f_005fc420();
    /* 00410183: jmp 0x410194 */ goto L_00410194;
L_00410185:; BB(0x00410185);
    /* 00410185: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00410187: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0041018a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0041018c: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0041018f: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00410192: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x410194u); call_ind(t); }
L_00410194:; BB(0x00410194);
    /* 00410194: jmp 0x4103ba */ goto L_004103ba;
L_00410199:; BB(0x00410199);
    /* 00410199: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0041019b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0041019e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004101a0: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004101a3: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004101a6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4101a8u); call_ind(t); }
    /* 004101a8: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004101ab: call 0x410030 */ r_esp -= 4; W32(r_esp, 0x4101b0u); f_00410030();
    /* 004101b0: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004101b3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004101b5: je 0x41020d */ if (fZ) goto L_0041020d;
L_004101b7:; BB(0x004101b7);
    /* 004101b7: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 004101b9: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4101beu); f_00686d82();
    /* 004101be: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004101c1: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004101c4: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004101cb: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004101cf: je 0x4101eb */ if (fZ) goto L_004101eb;
L_004101d1:; BB(0x004101d1);
    /* 004101d1: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004101d4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004101d5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004101d7: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004101da: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 004101dd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004101de: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004101e1: call 0x4106f0 */ r_esp -= 4; W32(r_esp, 0x4101e6u); f_004106f0();
    /* 004101e6: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 004101e9: jmp 0x4101f2 */ goto L_004101f2;
L_004101eb:; BB(0x004101eb);
    /* 004101eb: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_004101f2:; BB(0x004101f2);
    /* 004101f2: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 004101f5: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 004101f8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004101ff: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00410202: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00410203: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410206: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x41020bu); f_005fc420();
    /* 0041020b: jmp 0x41024d */ goto L_0041024d;
L_0041020d:; BB(0x0041020d);
    /* 0041020d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0041020f: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00410215: mov ecx, dword ptr [ecx + 0x464] */ r_ecx = R32((u32)(r_ecx+0x464u));
    /* 0041021b: call 0x6436c0 */ r_esp -= 4; W32(r_esp, 0x410220u); f_006436c0();
    /* 00410220: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00410221: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410224: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00410227: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00410228: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0041022e: call 0x419670 */ r_esp -= 4; W32(r_esp, 0x410233u); f_00419670();
    /* 00410233: mov ecx, dword ptr [0x79032c] */ r_ecx = R32((u32)(0x79032cu));
    /* 00410239: call 0x40cc00 */ r_esp -= 4; W32(r_esp, 0x41023eu); f_0040cc00();
    /* 0041023e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00410240: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410243: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00410245: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410248: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0041024b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x41024du); call_ind(t); }
L_0041024d:; BB(0x0041024d);
    /* 0041024d: jmp 0x4103ba */ goto L_004103ba;
L_00410252:; BB(0x00410252);
    /* 00410252: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00410254: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00410256: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0041025c: call 0x419530 */ r_esp -= 4; W32(r_esp, 0x410261u); f_00419530();
    /* 00410261: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00410264: jne 0x41027c */ if (!fZ) goto L_0041027c;
L_00410266:; BB(0x00410266);
    /* 00410266: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00410268: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0041026a: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0041026d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0041026f: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410272: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00410275: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x410277u); call_ind(t); }
    /* 00410277: jmp 0x410309 */ goto L_00410309;
L_0041027c:; BB(0x0041027c);
    /* 0041027c: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00410282: call 0x41a390 */ r_esp -= 4; W32(r_esp, 0x410287u); f_0041a390();
    /* 00410287: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0041028a: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 0041028d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041028f: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410292: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00410294: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410297: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0041029a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x41029cu); call_ind(t); }
    /* 0041029c: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0041029f: call 0x410030 */ r_esp -= 4; W32(r_esp, 0x4102a4u); f_00410030();
    /* 004102a4: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004102a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004102a9: je 0x4102fa */ if (fZ) goto L_004102fa;
L_004102ab:; BB(0x004102ab);
    /* 004102ab: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 004102ad: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4102b2u); f_00686d82();
    /* 004102b2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004102b5: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004102b8: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 004102bf: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004102c3: je 0x4102d8 */ if (fZ) goto L_004102d8;
L_004102c5:; BB(0x004102c5);
    /* 004102c5: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004102c8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004102c9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004102cb: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004102ce: call 0x4103e0 */ r_esp -= 4; W32(r_esp, 0x4102d3u); f_004103e0();
    /* 004102d3: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 004102d6: jmp 0x4102df */ goto L_004102df;
L_004102d8:; BB(0x004102d8);
    /* 004102d8: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_004102df:; BB(0x004102df);
    /* 004102df: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004102e2: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 004102e5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004102ec: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004102ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004102f0: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004102f3: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x4102f8u); f_005fc420();
    /* 004102f8: jmp 0x410309 */ goto L_00410309;
L_004102fa:; BB(0x004102fa);
    /* 004102fa: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004102fc: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004102ff: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00410301: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410304: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00410307: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x410309u); call_ind(t); }
L_00410309:; BB(0x00410309);
    /* 00410309: jmp 0x4103ba */ goto L_004103ba;
L_0041030e:; BB(0x0041030e);
    /* 0041030e: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00410310: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410313: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00410315: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410318: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0041031b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x41031du); call_ind(t); }
    /* 0041031d: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410320: call 0x410030 */ r_esp -= 4; W32(r_esp, 0x410325u); f_00410030();
    /* 00410325: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00410328: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041032a: je 0x41033f */ if (fZ) goto L_0041033f;
L_0041032c:; BB(0x0041032c);
    /* 0041032c: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0041032f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00410330: mov eax, dword ptr [0x79032c] */ r_eax = R32((u32)(0x79032cu));
    /* 00410335: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 00410338: call 0x40eb40 */ r_esp -= 4; W32(r_esp, 0x41033du); f_0040eb40();
    /* 0041033d: jmp 0x41034e */ goto L_0041034e;
L_0041033f:; BB(0x0041033f);
    /* 0041033f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00410341: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410344: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00410346: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410349: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0041034c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x41034eu); call_ind(t); }
L_0041034e:; BB(0x0041034e);
    /* 0041034e: jmp 0x4103ba */ goto L_004103ba;
L_00410350:; BB(0x00410350);
    /* 00410350: mov ecx, dword ptr [0x79032c] */ r_ecx = R32((u32)(0x79032cu));
    /* 00410356: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 00410359: mov eax, dword ptr [0x79032c] */ r_eax = R32((u32)(0x79032cu));
    /* 0041035e: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 00410361: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00410363: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00410366: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x410368u); call_ind(t); }
    /* 00410368: mov ecx, dword ptr [0x79032c] */ r_ecx = R32((u32)(0x79032cu));
    /* 0041036e: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 00410371: mov eax, dword ptr [0x79032c] */ r_eax = R32((u32)(0x79032cu));
    /* 00410376: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 00410379: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0041037b: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0041037e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x410380u); call_ind(t); }
    /* 00410380: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00410386: mov byte ptr [ecx + 0x4d8], 0 */ W8((u32)(r_ecx+0x4d8u), 0x0u);
    /* 0041038d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041038f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00410391: mov edx, dword ptr [0x790320] */ r_edx = R32((u32)(0x790320u));
    /* 00410397: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0041039a: mov ecx, dword ptr [0x790320] */ r_ecx = R32((u32)(0x790320u));
    /* 004103a0: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 004103a3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004103a5: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004103a8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4103aau); call_ind(t); }
    /* 004103aa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004103ac: mov ecx, dword ptr [0x790320] */ r_ecx = R32((u32)(0x790320u));
    /* 004103b2: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 004103b5: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x4103bau); f_005fc420();
L_004103ba:; BB(0x004103ba);
    /* 004103ba: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004103bd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004103c4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004103c5: mov esp, ebp */ r_esp = r_ebp;
    /* 004103c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004103c8: ret  */ FN_RET(0x004100c0); r_esp += 4; return;
}

