#include "protos.h"

void f_00662360(void) /* NavButton::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00662360);
    /* 00662360: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00662361: mov ebp, esp */ r_ebp = r_esp;
    /* 00662363: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00662365: push 0x6aca49 */ { u32 v = 0x6aca49u; r_esp -= 4; W32(r_esp, v); }
    /* 0066236a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00662370: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00662371: sub esp, 0x3b8 */ {  u32 a = r_esp; u32 b = 0x3b8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00662377: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0066237c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066237e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066237f: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00662382: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00662388: mov dword ptr [ebp - 0x3b8], ecx */ W32((u32)(r_ebp+0xfffffc48u), r_ecx);
    /* 0066238e: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00662391: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00662392: mov ecx, dword ptr [ebp - 0x3b8] */ r_ecx = R32((u32)(r_ebp+0xfffffc48u));
    /* 00662398: call 0x661500 */ r_esp -= 4; W32(r_esp, 0x66239du); f_00661500();
    /* 0066239d: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 006623a0: lea ecx, [ebp - 0x1d8] */ r_ecx = (u32)(r_ebp+0xfffffe28u);
    /* 006623a6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006623a7: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 006623aa: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006623ac: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 006623af: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006623b1: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6623b3u); call_ind(t); }
    /* 006623b3: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 006623ba: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006623be: je 0x6623e8 */ if (fZ) goto L_006623e8;
L_006623c0:; BB(0x006623c0);
    /* 006623c0: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006623c3: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 006623c5: mov dword ptr [ebp - 0x1d0], ecx */ W32((u32)(r_ebp+0xfffffe30u), r_ecx);
    /* 006623cb: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 006623ce: mov dword ptr [ebp - 0x1cc], edx */ W32((u32)(r_ebp+0xfffffe34u), r_edx);
    /* 006623d4: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 006623d7: mov dword ptr [ebp - 0x1c8], ecx */ W32((u32)(r_ebp+0xfffffe38u), r_ecx);
    /* 006623dd: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 006623e0: mov dword ptr [ebp - 0x1c4], edx */ W32((u32)(r_ebp+0xfffffe3cu), r_edx);
    /* 006623e6: jmp 0x662406 */ goto L_00662406;
L_006623e8:; BB(0x006623e8);
    /* 006623e8: lea eax, [ebp - 0x1d0] */ r_eax = (u32)(r_ebp+0xfffffe30u);
    /* 006623ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006623ef: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006623f2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006623f3: mov edx, dword ptr [ebp - 0x3b8] */ r_edx = R32((u32)(r_ebp+0xfffffc48u));
    /* 006623f9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006623fb: mov ecx, dword ptr [ebp - 0x3b8] */ r_ecx = R32((u32)(r_ebp+0xfffffc48u));
    /* 00662401: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 00662404: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x662406u); call_ind(t); }
L_00662406:; BB(0x00662406);
    /* 00662406: cmp dword ptr [ebp - 0x1c8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffe38u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066240d: jl 0x66245c */ if ((fS!=fO)) goto L_0066245c;
L_0066240f:; BB(0x0066240f);
    /* 0066240f: lea eax, [ebp - 0x1bc] */ r_eax = (u32)(r_ebp+0xfffffe44u);
    /* 00662415: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00662416: mov ecx, dword ptr [ebp - 0x1c8] */ r_ecx = R32((u32)(r_ebp+0xfffffe38u));
    /* 0066241c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066241d: mov edx, dword ptr [ebp - 0x3b8] */ r_edx = R32((u32)(r_ebp+0xfffffc48u));
    /* 00662423: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00662425: mov ecx, dword ptr [ebp - 0x3b8] */ r_ecx = R32((u32)(r_ebp+0xfffffc48u));
    /* 0066242b: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0066242e: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x662430u); call_ind(t); }
    /* 00662430: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00662433: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00662435: jne 0x66245c */ if (!fZ) goto L_0066245c;
L_00662437:; BB(0x00662437);
    /* 00662437: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00662439: jne 0x662452 */ if (!fZ) goto L_00662452;
L_0066243b:; BB(0x0066243b);
    /* 0066243b: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 00662440: push 0x6df848 */ { u32 v = 0x6df848u; r_esp -= 4; W32(r_esp, v); }
    /* 00662445: push 0x6df7f8 */ { u32 v = 0x6df7f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0066244a: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x66244fu); f_005e9f20();
    /* 0066244f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00662452:; BB(0x00662452);
    /* 00662452: mov dword ptr [ebp - 0x1c8], 0xffffffff */ W32((u32)(r_ebp+0xfffffe38u), 0xffffffffu);
L_0066245c:; BB(0x0066245c);
    /* 0066245c: mov byte ptr [ebp - 0x1bd], 0 */ W8((u32)(r_ebp+0xfffffe43u), 0x0u);
    /* 00662463: cmp dword ptr [ebp - 0x1c8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffe38u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066246a: jl 0x6624f8 */ if ((fS!=fO)) goto L_006624f8;
L_00662470:; BB(0x00662470);
    /* 00662470: lea eax, [ebp - 0x374] */ r_eax = (u32)(r_ebp+0xfffffc8cu);
    /* 00662476: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00662477: mov ecx, dword ptr [ebp - 0x1c8] */ r_ecx = R32((u32)(r_ebp+0xfffffe38u));
    /* 0066247d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066247e: mov edx, dword ptr [ebp - 0x3b8] */ r_edx = R32((u32)(r_ebp+0xfffffc48u));
    /* 00662484: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00662486: mov ecx, dword ptr [ebp - 0x3b8] */ r_ecx = R32((u32)(r_ebp+0xfffffc48u));
    /* 0066248c: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0066248f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x662491u); call_ind(t); }
    /* 00662491: mov dword ptr [ebp - 0x378], 0 */ W32((u32)(r_ebp+0xfffffc88u), 0x0u);
    /* 0066249b: jmp 0x6624ac */ goto L_006624ac;
L_0066249d:; BB(0x0066249d);
    /* 0066249d: mov eax, dword ptr [ebp - 0x378] */ r_eax = R32((u32)(r_ebp+0xfffffc88u));
    /* 006624a3: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006624a6: mov dword ptr [ebp - 0x378], eax */ W32((u32)(r_ebp+0xfffffc88u), r_eax);
L_006624ac:; BB(0x006624ac);
    /* 006624ac: mov ecx, dword ptr [ebp - 0x378] */ r_ecx = R32((u32)(r_ebp+0xfffffc88u));
    /* 006624b2: cmp dword ptr [ebp + ecx*4 - 0x370], -1 */ {  u32 a = R32((u32)(r_ebp+r_ecx*4+0xfffffc90u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006624ba: je 0x6624f8 */ if (fZ) goto L_006624f8;
L_006624bc:; BB(0x006624bc);
    /* 006624bc: lea edx, [ebp - 0x388] */ r_edx = (u32)(r_ebp+0xfffffc78u);
    /* 006624c2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006624c3: mov eax, dword ptr [ebp - 0x378] */ r_eax = R32((u32)(r_ebp+0xfffffc88u));
    /* 006624c9: mov ecx, dword ptr [ebp + eax*4 - 0x370] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xfffffc90u));
    /* 006624d0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006624d1: mov edx, dword ptr [ebp - 0x3b8] */ r_edx = R32((u32)(r_ebp+0xfffffc48u));
    /* 006624d7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006624d9: mov ecx, dword ptr [ebp - 0x3b8] */ r_ecx = R32((u32)(r_ebp+0xfffffc48u));
    /* 006624df: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 006624e2: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6624e4u); call_ind(t); }
    /* 006624e4: cmp dword ptr [ebp - 0x380], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffc80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006624eb: jl 0x6624f6 */ if ((fS!=fO)) goto L_006624f6;
L_006624ed:; BB(0x006624ed);
    /* 006624ed: mov byte ptr [ebp - 0x1bd], 1 */ W8((u32)(r_ebp+0xfffffe43u), 0x1u);
    /* 006624f4: jmp 0x6624f8 */ goto L_006624f8;
L_006624f6:; BB(0x006624f6);
    /* 006624f6: jmp 0x66249d */ goto L_0066249d;
L_006624f8:; BB(0x006624f8);
    /* 006624f8: mov dword ptr [ebp - 0x18], 0x30d5f5 */ W32((u32)(r_ebp+0xffffffe8u), 0x30d5f5u);
    /* 006624ff: mov eax, dword ptr [ebp - 0x3b8] */ r_eax = R32((u32)(r_ebp+0xfffffc48u));
    /* 00662505: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 0066250b: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0066250e: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00662515: mov dword ptr [ebp - 0x38c], 0 */ W32((u32)(r_ebp+0xfffffc74u), 0x0u);
    /* 0066251f: jmp 0x662530 */ goto L_00662530;
L_00662521:; BB(0x00662521);
    /* 00662521: mov edx, dword ptr [ebp - 0x38c] */ r_edx = R32((u32)(r_ebp+0xfffffc74u));
    /* 00662527: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0066252a: mov dword ptr [ebp - 0x38c], edx */ W32((u32)(r_ebp+0xfffffc74u), r_edx);
L_00662530:; BB(0x00662530);
    /* 00662530: mov eax, dword ptr [ebp - 0x38c] */ r_eax = R32((u32)(r_ebp+0xfffffc74u));
    /* 00662536: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00662539: cmp dword ptr [eax + 0x75dfd0], 0 */ {  u32 a = R32((u32)(r_eax+0x75dfd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00662540: je 0x662579 */ if (fZ) goto L_00662579;
L_00662542:; BB(0x00662542);
    /* 00662542: mov ecx, dword ptr [ebp - 0x38c] */ r_ecx = R32((u32)(r_ebp+0xfffffc74u));
    /* 00662548: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0066254b: mov edx, dword ptr [ecx + 0x75dfd0] */ r_edx = R32((u32)(r_ecx+0x75dfd0u));
    /* 00662551: cmp edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00662554: jne 0x662577 */ if (!fZ) goto L_00662577;
L_00662556:; BB(0x00662556);
    /* 00662556: mov eax, dword ptr [ebp - 0x38c] */ r_eax = R32((u32)(r_ebp+0xfffffc74u));
    /* 0066255c: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0066255f: add eax, 0x75dfd4 */ {  u32 a = r_eax; u32 b = 0x75dfd4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00662564: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00662566: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00662569: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0066256c: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0066256f: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 00662572: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00662575: jmp 0x662579 */ goto L_00662579;
L_00662577:; BB(0x00662577);
    /* 00662577: jmp 0x662521 */ goto L_00662521;
L_00662579:; BB(0x00662579);
    /* 00662579: movzx ecx, byte ptr [ebp - 0x1bd] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffe43u));
    /* 00662580: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00662582: jne 0x6627af */ if (!fZ) goto L_006627af;
L_00662588:; BB(0x00662588);
    /* 00662588: cmp dword ptr [ebp - 0x1c8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffe38u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066258f: jl 0x6626a1 */ if ((fS!=fO)) goto L_006626a1;
L_00662595:; BB(0x00662595);
    /* 00662595: push 0x208 */ { u32 v = 0x208u; r_esp -= 4; W32(r_esp, v); }
    /* 0066259a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x66259fu); f_00686d82();
    /* 0066259f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006625a2: mov dword ptr [ebp - 0x39c], eax */ W32((u32)(r_ebp+0xfffffc64u), r_eax);
    /* 006625a8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006625af: cmp dword ptr [ebp - 0x39c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffc64u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006625b6: je 0x6625d8 */ if (fZ) goto L_006625d8;
L_006625b8:; BB(0x006625b8);
    /* 006625b8: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006625ba: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006625bc: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006625be: mov edx, dword ptr [ebp - 0x1c8] */ r_edx = R32((u32)(r_ebp+0xfffffe38u));
    /* 006625c4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006625c5: mov ecx, dword ptr [ebp - 0x39c] */ r_ecx = R32((u32)(r_ebp+0xfffffc64u));
    /* 006625cb: call 0x6612a0 */ r_esp -= 4; W32(r_esp, 0x6625d0u); f_006612a0();
    /* 006625d0: mov dword ptr [ebp - 0x3bc], eax */ W32((u32)(r_ebp+0xfffffc44u), r_eax);
    /* 006625d6: jmp 0x6625e2 */ goto L_006625e2;
L_006625d8:; BB(0x006625d8);
    /* 006625d8: mov dword ptr [ebp - 0x3bc], 0 */ W32((u32)(r_ebp+0xfffffc44u), 0x0u);
L_006625e2:; BB(0x006625e2);
    /* 006625e2: mov eax, dword ptr [ebp - 0x3bc] */ r_eax = R32((u32)(r_ebp+0xfffffc44u));
    /* 006625e8: mov dword ptr [ebp - 0x398], eax */ W32((u32)(r_ebp+0xfffffc68u), r_eax);
    /* 006625ee: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006625f5: mov ecx, dword ptr [ebp - 0x398] */ r_ecx = R32((u32)(r_ebp+0xfffffc68u));
    /* 006625fb: mov dword ptr [ebp - 0x390], ecx */ W32((u32)(r_ebp+0xfffffc70u), r_ecx);
    /* 00662601: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00662603: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00662605: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00662607: push 0x4d */ { u32 v = 0x4du; r_esp -= 4; W32(r_esp, v); }
    /* 00662609: mov edx, dword ptr [ebp - 0x1cc] */ r_edx = R32((u32)(r_ebp+0xfffffe34u));
    /* 0066260f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00662610: mov eax, dword ptr [0x15e55e8] */ r_eax = R32((u32)(0x15e55e8u));
    /* 00662615: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00662617: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 0066261d: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 00662620: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x662622u); call_ind(t); }
    /* 00662622: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00662623: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00662625: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00662628: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00662629: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0066262c: lea eax, [edx*4 + 3] */ r_eax = (u32)(r_edx*4+0x3u);
    /* 00662633: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00662634: mov ecx, dword ptr [ebp - 0x1d4] */ r_ecx = R32((u32)(r_ebp+0xfffffe2cu));
    /* 0066263a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066263b: mov edx, dword ptr [ebp - 0x1d8] */ r_edx = R32((u32)(r_ebp+0xfffffe28u));
    /* 00662641: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00662642: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00662645: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00662646: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00662649: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0066264b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066264c: mov edx, dword ptr [ebp - 0x390] */ r_edx = R32((u32)(r_ebp+0xfffffc70u));
    /* 00662652: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00662653: mov eax, dword ptr [ebp - 0x3b8] */ r_eax = R32((u32)(r_ebp+0xfffffc48u));
    /* 00662659: mov ecx, dword ptr [eax + 0x80] */ r_ecx = R32((u32)(r_eax+0x80u));
    /* 0066265f: call 0x5faee0 */ r_esp -= 4; W32(r_esp, 0x662664u); f_005faee0();
    /* 00662664: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00662667: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00662669: mov ecx, dword ptr [ebp - 0x3b8] */ r_ecx = R32((u32)(r_ebp+0xfffffc48u));
    /* 0066266f: mov edx, dword ptr [ecx + 0x90] */ r_edx = R32((u32)(r_ecx+0x90u));
    /* 00662675: lea eax, [edx + edx + 0x30d5f5] */ r_eax = (u32)(r_edx+r_edx+0x30d5f5u);
    /* 0066267c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066267d: mov ecx, dword ptr [ebp - 0x3b8] */ r_ecx = R32((u32)(r_ebp+0xfffffc48u));
    /* 00662683: mov edx, dword ptr [ecx + 0x90] */ r_edx = R32((u32)(r_ecx+0x90u));
    /* 00662689: lea eax, [edx + edx + 0x30d5f4] */ r_eax = (u32)(r_edx+r_edx+0x30d5f4u);
    /* 00662690: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00662691: mov ecx, dword ptr [ebp - 0x390] */ r_ecx = R32((u32)(r_ebp+0xfffffc70u));
    /* 00662697: call 0x661300 */ r_esp -= 4; W32(r_esp, 0x66269cu); f_00661300();
    /* 0066269c: jmp 0x6627aa */ goto L_006627aa;
L_006626a1:; BB(0x006626a1);
    /* 006626a1: push 0x1e8 */ { u32 v = 0x1e8u; r_esp -= 4; W32(r_esp, v); }
    /* 006626a6: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x6626abu); f_00686d82();
    /* 006626ab: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006626ae: mov dword ptr [ebp - 0x3a4], eax */ W32((u32)(r_ebp+0xfffffc5cu), r_eax);
    /* 006626b4: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006626bb: cmp dword ptr [ebp - 0x3a4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffc5cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006626c2: je 0x6626ef */ if (fZ) goto L_006626ef;
L_006626c4:; BB(0x006626c4);
    /* 006626c4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006626c6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006626c8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006626ca: mov ecx, dword ptr [ebp - 0x3a4] */ r_ecx = R32((u32)(r_ebp+0xfffffc5cu));
    /* 006626d0: call 0x603120 */ r_esp -= 4; W32(r_esp, 0x6626d5u); f_00603120();
    /* 006626d5: mov ecx, dword ptr [ebp - 0x3a4] */ r_ecx = R32((u32)(r_ebp+0xfffffc5cu));
    /* 006626db: mov dword ptr [ecx], 0x6df704 */ W32((u32)(r_ecx), 0x6df704u);
    /* 006626e1: mov edx, dword ptr [ebp - 0x3a4] */ r_edx = R32((u32)(r_ebp+0xfffffc5cu));
    /* 006626e7: mov dword ptr [ebp - 0x3c0], edx */ W32((u32)(r_ebp+0xfffffc40u), r_edx);
    /* 006626ed: jmp 0x6626f9 */ goto L_006626f9;
L_006626ef:; BB(0x006626ef);
    /* 006626ef: mov dword ptr [ebp - 0x3c0], 0 */ W32((u32)(r_ebp+0xfffffc40u), 0x0u);
L_006626f9:; BB(0x006626f9);
    /* 006626f9: mov eax, dword ptr [ebp - 0x3c0] */ r_eax = R32((u32)(r_ebp+0xfffffc40u));
    /* 006626ff: mov dword ptr [ebp - 0x3a0], eax */ W32((u32)(r_ebp+0xfffffc60u), r_eax);
    /* 00662705: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0066270c: mov ecx, dword ptr [ebp - 0x3a0] */ r_ecx = R32((u32)(r_ebp+0xfffffc60u));
    /* 00662712: mov dword ptr [ebp - 0x394], ecx */ W32((u32)(r_ebp+0xfffffc6cu), r_ecx);
    /* 00662718: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066271a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066271c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066271e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00662720: push 0x4d */ { u32 v = 0x4du; r_esp -= 4; W32(r_esp, v); }
    /* 00662722: mov edx, dword ptr [ebp - 0x1cc] */ r_edx = R32((u32)(r_ebp+0xfffffe34u));
    /* 00662728: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00662729: mov eax, dword ptr [0x15e55e8] */ r_eax = R32((u32)(0x15e55e8u));
    /* 0066272e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00662730: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 00662736: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 00662739: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66273bu); call_ind(t); }
    /* 0066273b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066273c: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0066273f: lea edx, [ecx*4 + 3] */ r_edx = (u32)(r_ecx*4+0x3u);
    /* 00662746: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00662747: mov eax, dword ptr [ebp - 0x1d4] */ r_eax = R32((u32)(r_ebp+0xfffffe2cu));
    /* 0066274d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066274e: mov ecx, dword ptr [ebp - 0x1d8] */ r_ecx = R32((u32)(r_ebp+0xfffffe28u));
    /* 00662754: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00662755: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00662758: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00662759: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0066275c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066275d: mov ecx, dword ptr [ebp - 0x394] */ r_ecx = R32((u32)(r_ebp+0xfffffc6cu));
    /* 00662763: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00662764: mov edx, dword ptr [ebp - 0x3b8] */ r_edx = R32((u32)(r_ebp+0xfffffc48u));
    /* 0066276a: mov ecx, dword ptr [edx + 0x80] */ r_ecx = R32((u32)(r_edx+0x80u));
    /* 00662770: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x662775u); f_005f9de0();
    /* 00662775: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00662778: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066277a: mov eax, dword ptr [ebp - 0x3b8] */ r_eax = R32((u32)(r_ebp+0xfffffc48u));
    /* 00662780: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 00662786: lea edx, [ecx + ecx + 0x30d5f5] */ r_edx = (u32)(r_ecx+r_ecx+0x30d5f5u);
    /* 0066278d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066278e: mov eax, dword ptr [ebp - 0x3b8] */ r_eax = R32((u32)(r_ebp+0xfffffc48u));
    /* 00662794: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 0066279a: lea edx, [ecx + ecx + 0x30d5f4] */ r_edx = (u32)(r_ecx+r_ecx+0x30d5f4u);
    /* 006627a1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006627a2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006627a5: call 0x603190 */ r_esp -= 4; W32(r_esp, 0x6627aau); f_00603190();
L_006627aa:; BB(0x006627aa);
    /* 006627aa: jmp 0x66289b */ goto L_0066289b;
L_006627af:; BB(0x006627af);
    /* 006627af: push 0x1e8 */ { u32 v = 0x1e8u; r_esp -= 4; W32(r_esp, v); }
    /* 006627b4: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x6627b9u); f_00686d82();
    /* 006627b9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006627bc: mov dword ptr [ebp - 0x3ac], eax */ W32((u32)(r_ebp+0xfffffc54u), r_eax);
    /* 006627c2: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 006627c9: cmp dword ptr [ebp - 0x3ac], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffc54u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006627d0: je 0x6627eb */ if (fZ) goto L_006627eb;
L_006627d2:; BB(0x006627d2);
    /* 006627d2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006627d4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006627d6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006627d8: mov ecx, dword ptr [ebp - 0x3ac] */ r_ecx = R32((u32)(r_ebp+0xfffffc54u));
    /* 006627de: call 0x603120 */ r_esp -= 4; W32(r_esp, 0x6627e3u); f_00603120();
    /* 006627e3: mov dword ptr [ebp - 0x3c4], eax */ W32((u32)(r_ebp+0xfffffc3cu), r_eax);
    /* 006627e9: jmp 0x6627f5 */ goto L_006627f5;
L_006627eb:; BB(0x006627eb);
    /* 006627eb: mov dword ptr [ebp - 0x3c4], 0 */ W32((u32)(r_ebp+0xfffffc3cu), 0x0u);
L_006627f5:; BB(0x006627f5);
    /* 006627f5: mov eax, dword ptr [ebp - 0x3c4] */ r_eax = R32((u32)(r_ebp+0xfffffc3cu));
    /* 006627fb: mov dword ptr [ebp - 0x3a8], eax */ W32((u32)(r_ebp+0xfffffc58u), r_eax);
    /* 00662801: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00662808: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066280a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066280c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066280e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00662810: push 0x4d */ { u32 v = 0x4du; r_esp -= 4; W32(r_esp, v); }
    /* 00662812: mov ecx, dword ptr [ebp - 0x1cc] */ r_ecx = R32((u32)(r_ebp+0xfffffe34u));
    /* 00662818: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00662819: mov edx, dword ptr [0x15e55e8] */ r_edx = R32((u32)(0x15e55e8u));
    /* 0066281f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00662821: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 00662827: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 0066282a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x66282cu); call_ind(t); }
    /* 0066282c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066282d: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00662830: lea ecx, [eax*4 + 3] */ r_ecx = (u32)(r_eax*4+0x3u);
    /* 00662837: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00662838: mov edx, dword ptr [ebp - 0x1d4] */ r_edx = R32((u32)(r_ebp+0xfffffe2cu));
    /* 0066283e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066283f: mov eax, dword ptr [ebp - 0x1d8] */ r_eax = R32((u32)(r_ebp+0xfffffe28u));
    /* 00662845: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00662846: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00662849: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066284a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0066284d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066284e: mov eax, dword ptr [ebp - 0x3a8] */ r_eax = R32((u32)(r_ebp+0xfffffc58u));
    /* 00662854: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00662855: mov ecx, dword ptr [ebp - 0x3b8] */ r_ecx = R32((u32)(r_ebp+0xfffffc48u));
    /* 0066285b: mov ecx, dword ptr [ecx + 0x80] */ r_ecx = R32((u32)(r_ecx+0x80u));
    /* 00662861: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x662866u); f_005f9de0();
    /* 00662866: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00662869: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066286b: mov edx, dword ptr [ebp - 0x3b8] */ r_edx = R32((u32)(r_ebp+0xfffffc48u));
    /* 00662871: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 00662877: lea ecx, [eax + eax + 0x30d5f5] */ r_ecx = (u32)(r_eax+r_eax+0x30d5f5u);
    /* 0066287e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066287f: mov edx, dword ptr [ebp - 0x3b8] */ r_edx = R32((u32)(r_ebp+0xfffffc48u));
    /* 00662885: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 0066288b: lea ecx, [eax + eax + 0x30d5f4] */ r_ecx = (u32)(r_eax+r_eax+0x30d5f4u);
    /* 00662892: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00662893: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00662896: call 0x603190 */ r_esp -= 4; W32(r_esp, 0x66289bu); f_00603190();
L_0066289b:; BB(0x0066289b);
    /* 0066289b: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066289e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066289f: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 006628a2: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x6628a7u); f_005ff5a0();
    /* 006628a7: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 006628a9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006628ac: call 0x602e00 */ r_esp -= 4; W32(r_esp, 0x6628b1u); f_00602e00();
    /* 006628b1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006628b3: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 006628b5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006628b8: call 0x602e30 */ r_esp -= 4; W32(r_esp, 0x6628bdu); f_00602e30();
    /* 006628bd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006628c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006628c1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006628c4: call 0x5eb000 */ r_esp -= 4; W32(r_esp, 0x6628c9u); f_005eb000();
    /* 006628c9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006628cc: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006628ce: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006628d1: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 006628d4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6628d6u); call_ind(t); }
    /* 006628d6: add eax, dword ptr [ebp - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006628d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006628da: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006628dd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006628df: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006628e2: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 006628e5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6628e7u); call_ind(t); }
    /* 006628e7: mov ecx, dword ptr [ebp - 0x3b8] */ r_ecx = R32((u32)(r_ebp+0xfffffc48u));
    /* 006628ed: mov edx, dword ptr [ecx + 0x90] */ r_edx = R32((u32)(r_ecx+0x90u));
    /* 006628f3: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006628f6: mov eax, dword ptr [ebp - 0x3b8] */ r_eax = R32((u32)(r_ebp+0xfffffc48u));
    /* 006628fc: mov dword ptr [eax + 0x90], edx */ W32((u32)(r_eax+0x90u), r_edx);
    /* 00662902: mov ecx, dword ptr [ebp - 0x3b8] */ r_ecx = R32((u32)(r_ebp+0xfffffc48u));
    /* 00662908: mov edx, dword ptr [ebp - 0x3b8] */ r_edx = R32((u32)(r_ebp+0xfffffc48u));
    /* 0066290e: mov eax, dword ptr [ecx + 0x90] */ r_eax = R32((u32)(r_ecx+0x90u));
    /* 00662914: cmp eax, dword ptr [edx + 0x94] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x94u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066291a: jl 0x66292c */ if ((fS!=fO)) goto L_0066292c;
L_0066291c:; BB(0x0066291c);
    /* 0066291c: mov ecx, dword ptr [ebp - 0x3b8] */ r_ecx = R32((u32)(r_ebp+0xfffffc48u));
    /* 00662922: mov dword ptr [ecx + 0x90], 0 */ W32((u32)(r_ecx+0x90u), 0x0u);
L_0066292c:; BB(0x0066292c);
    /* 0066292c: lea edx, [ebp - 0x3b4] */ r_edx = (u32)(r_ebp+0xfffffc4cu);
    /* 00662932: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00662933: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00662936: call 0x6630e0 */ r_esp -= 4; W32(r_esp, 0x66293bu); f_006630e0();
    /* 0066293b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066293e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00662941: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00662948: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00662949: mov esp, ebp */ r_esp = r_ebp;
    /* 0066294b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066294c: ret 0x14 */ FN_RET(0x00662360); r_esp += 24; return;
}

void f_00663470(void) /* NavButton::vfunc48 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00663470);
    /* 00663470: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00663471: mov ebp, esp */ r_ebp = r_esp;
    /* 00663473: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00663474: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00663477: push 0x186be */ { u32 v = 0x186beu; r_esp -= 4; W32(r_esp, v); }
    /* 0066347c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066347f: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x663484u); f_005f5400();
    /* 00663484: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00663485: mov eax, dword ptr [0x15e55e4] */ r_eax = R32((u32)(0x15e55e4u));
    /* 0066348a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066348c: mov ecx, dword ptr [0x15e55e4] */ r_ecx = R32((u32)(0x15e55e4u));
    /* 00663492: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00663495: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x663497u); call_ind(t); }
    /* 00663497: mov esp, ebp */ r_esp = r_ebp;
    /* 00663499: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066349a: ret  */ FN_RET(0x00663470); r_esp += 4; return;
}

