#include "protos.h"

void f_0059a150(void) /* sub_59A150 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0059a150);
    /* 0059a150: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059a151: mov ebp, esp */ r_ebp = r_esp;
    /* 0059a153: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059a156: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 0059a159: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0059a15c: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0059a15f: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0059a162: mov edx, dword ptr [ecx + eax + 0x48] */ r_edx = R32((u32)(r_ecx+r_eax+0x48u));
    /* 0059a166: mov eax, dword ptr [ecx + eax + 0x4c] */ r_eax = R32((u32)(r_ecx+r_eax+0x4cu));
    /* 0059a16a: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0059a16d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0059a170: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059a172: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059a174: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x59a179u); f_0064c8a0();
    /* 0059a179: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059a17c: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0059a17f: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0059a182: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059a185: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0059a188: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0059a18b: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0059a18e: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0059a195: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0059a198: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x59a19du); f_005f5400();
    /* 0059a19d: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 0059a1a3: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0059a1a6: mov dword ptr [ecx + eax*4 + 0x98], edx */ W32((u32)(r_ecx+r_eax*4+0x98u), r_edx);
    /* 0059a1ad: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0059a1b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059a1b1: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x59a1b6u); f_005dcb00();
    /* 0059a1b6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059a1b9: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0059a1bc: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0059a1bf: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x59a1c4u); f_005d52e0();
    /* 0059a1c4: mov cl, byte ptr [eax + 0x2a] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x2au))) & 0xffu);
    /* 0059a1c7: mov byte ptr [ebp - 0x49], cl */ W8((u32)(r_ebp+0xffffffb7u), (u8)r_ecx);
    /* 0059a1ca: movsx edx, byte ptr [ebp - 0x49] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffb7u));
    /* 0059a1ce: mov eax, dword ptr [0x7935a8] */ r_eax = R32((u32)(0x7935a8u));
    /* 0059a1d3: mov dword ptr [eax + 0x128], edx */ W32((u32)(r_eax+0x128u), r_edx);
    /* 0059a1d9: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 0059a1df: mov edx, dword ptr [0x7935a8] */ r_edx = R32((u32)(0x7935a8u));
    /* 0059a1e5: mov eax, dword ptr [ecx + 0x124] */ r_eax = R32((u32)(r_ecx+0x124u));
    /* 0059a1eb: cmp eax, dword ptr [edx + 0x128] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x128u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059a1f1: je 0x59a202 */ if (fZ) goto L_0059a202;
L_0059a1f3:; BB(0x0059a1f3);
    /* 0059a1f3: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 0059a1f9: cmp dword ptr [ecx + 0x128], 0 */ {  u32 a = R32((u32)(r_ecx+0x128u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059a200: je 0x59a21c */ if (fZ) goto L_0059a21c;
L_0059a202:; BB(0x0059a202);
    /* 0059a202: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0059a205: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059a206: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x59a20bu); f_005dcb00();
    /* 0059a20b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059a20e: mov ecx, eax */ r_ecx = r_eax;
    /* 0059a210: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x59a215u); f_005d5a50();
    /* 0059a215: cmp eax, 0x3b9aca00 */ {  u32 a = r_eax; u32 b = 0x3b9aca00u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059a21a: jl 0x59a221 */ if ((fS!=fO)) goto L_0059a221;
L_0059a21c:; BB(0x0059a21c);
    /* 0059a21c: jmp 0x59a60b */ goto L_0059a60b;
L_0059a221:; BB(0x0059a221);
    /* 0059a221: movzx eax, byte ptr [ebp + 0x14] */ r_eax = (u32)R8((u32)(r_ebp+0x14u));
    /* 0059a225: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059a227: je 0x59a2de */ if (fZ) goto L_0059a2de;
L_0059a22d:; BB(0x0059a22d);
    /* 0059a22d: cmp dword ptr [ebp + 0x10], 8 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059a231: jne 0x59a23c */ if (!fZ) goto L_0059a23c;
L_0059a233:; BB(0x0059a233);
    /* 0059a233: mov dword ptr [ebp - 0x14], 0x19 */ W32((u32)(r_ebp+0xffffffecu), 0x19u);
    /* 0059a23a: jmp 0x59a258 */ goto L_0059a258;
L_0059a23c:; BB(0x0059a23c);
    /* 0059a23c: cmp dword ptr [ebp + 0x10], 9 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059a240: jne 0x59a24b */ if (!fZ) goto L_0059a24b;
L_0059a242:; BB(0x0059a242);
    /* 0059a242: mov dword ptr [ebp - 0x14], 0x14 */ W32((u32)(r_ebp+0xffffffecu), 0x14u);
    /* 0059a249: jmp 0x59a258 */ goto L_0059a258;
L_0059a24b:; BB(0x0059a24b);
    /* 0059a24b: cmp dword ptr [ebp + 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059a24f: jne 0x59a258 */ if (!fZ) goto L_0059a258;
L_0059a251:; BB(0x0059a251);
    /* 0059a251: mov dword ptr [ebp - 0x14], 2 */ W32((u32)(r_ebp+0xffffffecu), 0x2u);
L_0059a258:; BB(0x0059a258);
    /* 0059a258: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0059a25b: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0059a25e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059a261: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0059a264: fild dword ptr [ebp - 0x14] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffecu)));
    /* 0059a267: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059a26a: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0059a26d: lea ecx, [ebp - 0x1c] */ r_ecx = (u32)(r_ebp+0xffffffe4u);
    /* 0059a270: call 0x64c560 */ r_esp -= 4; W32(r_esp, 0x59a275u); f_0064c560();
    /* 0059a275: cmp dword ptr [ebp - 0x1c], 0x3b9aca00 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x3b9aca00u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059a27c: jle 0x59a285 */ if ((fZ||fS!=fO)) goto L_0059a285;
L_0059a27e:; BB(0x0059a27e);
    /* 0059a27e: mov dword ptr [ebp - 0x1c], 0x3b9aca00 */ W32((u32)(r_ebp+0xffffffe4u), 0x3b9aca00u);
L_0059a285:; BB(0x0059a285);
    /* 0059a285: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0059a288: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059a289: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0059a28c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059a28d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0059a290: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059a291: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x59a296u); f_005dcb00();
    /* 0059a296: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059a299: mov ecx, eax */ r_ecx = r_eax;
    /* 0059a29b: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x59a2a0u); f_005d5cf0();
    /* 0059a2a0: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0059a2a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059a2a4: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0059a2a7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059a2a8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0059a2ab: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059a2ac: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x59a2b1u); f_005dcb00();
    /* 0059a2b1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059a2b4: mov ecx, eax */ r_ecx = r_eax;
    /* 0059a2b6: call 0x5d5fb0 */ r_esp -= 4; W32(r_esp, 0x59a2bbu); f_005d5fb0();
    /* 0059a2bb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059a2bd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0059a2c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059a2c1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0059a2c4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059a2c5: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0059a2c8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059a2c9: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0059a2cc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0059a2ce: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0059a2d1: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 0059a2d7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59a2d9u); call_ind(t); }
    /* 0059a2d9: jmp 0x59a60b */ goto L_0059a60b;
L_0059a2de:; BB(0x0059a2de);
    /* 0059a2de: movzx ecx, byte ptr [ebp + 0x18] */ r_ecx = (u32)R8((u32)(r_ebp+0x18u));
    /* 0059a2e2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059a2e4: je 0x59a40f */ if (fZ) goto L_0059a40f;
L_0059a2ea:; BB(0x0059a2ea);
    /* 0059a2ea: cmp dword ptr [ebp + 0x10], 8 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059a2ee: jne 0x59a2f9 */ if (!fZ) goto L_0059a2f9;
L_0059a2f0:; BB(0x0059a2f0);
    /* 0059a2f0: mov dword ptr [ebp - 0x14], 0x32 */ W32((u32)(r_ebp+0xffffffecu), 0x32u);
    /* 0059a2f7: jmp 0x59a34b */ goto L_0059a34b;
L_0059a2f9:; BB(0x0059a2f9);
    /* 0059a2f9: cmp dword ptr [ebp + 0x10], 9 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059a2fd: jne 0x59a308 */ if (!fZ) goto L_0059a308;
L_0059a2ff:; BB(0x0059a2ff);
    /* 0059a2ff: mov dword ptr [ebp - 0x14], 0x28 */ W32((u32)(r_ebp+0xffffffecu), 0x28u);
    /* 0059a306: jmp 0x59a34b */ goto L_0059a34b;
L_0059a308:; BB(0x0059a308);
    /* 0059a308: cmp dword ptr [ebp + 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059a30c: jne 0x59a317 */ if (!fZ) goto L_0059a317;
L_0059a30e:; BB(0x0059a30e);
    /* 0059a30e: mov dword ptr [ebp - 0x14], 9 */ W32((u32)(r_ebp+0xffffffecu), 0x9u);
    /* 0059a315: jmp 0x59a34b */ goto L_0059a34b;
L_0059a317:; BB(0x0059a317);
    /* 0059a317: cmp dword ptr [ebp + 0x10], 6 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059a31b: jne 0x59a326 */ if (!fZ) goto L_0059a326;
L_0059a31d:; BB(0x0059a31d);
    /* 0059a31d: mov dword ptr [ebp - 0x14], 6 */ W32((u32)(r_ebp+0xffffffecu), 0x6u);
    /* 0059a324: jmp 0x59a34b */ goto L_0059a34b;
L_0059a326:; BB(0x0059a326);
    /* 0059a326: cmp dword ptr [ebp + 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059a32a: jne 0x59a335 */ if (!fZ) goto L_0059a335;
L_0059a32c:; BB(0x0059a32c);
    /* 0059a32c: mov dword ptr [ebp - 0x14], 4 */ W32((u32)(r_ebp+0xffffffecu), 0x4u);
    /* 0059a333: jmp 0x59a34b */ goto L_0059a34b;
L_0059a335:; BB(0x0059a335);
    /* 0059a335: cmp dword ptr [ebp + 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059a339: jne 0x59a344 */ if (!fZ) goto L_0059a344;
L_0059a33b:; BB(0x0059a33b);
    /* 0059a33b: mov dword ptr [ebp - 0x14], 2 */ W32((u32)(r_ebp+0xffffffecu), 0x2u);
    /* 0059a342: jmp 0x59a34b */ goto L_0059a34b;
L_0059a344:; BB(0x0059a344);
    /* 0059a344: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
L_0059a34b:; BB(0x0059a34b);
    /* 0059a34b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0059a34e: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0059a351: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059a354: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0059a357: fild dword ptr [ebp - 0x14] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffecu)));
    /* 0059a35a: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059a35d: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0059a360: lea ecx, [ebp - 0x1c] */ r_ecx = (u32)(r_ebp+0xffffffe4u);
    /* 0059a363: call 0x64c560 */ r_esp -= 4; W32(r_esp, 0x59a368u); f_0064c560();
    /* 0059a368: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059a36b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059a36c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0059a36f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059a370: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 0059a373: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059a374: lea ecx, [ebp - 0x1c] */ r_ecx = (u32)(r_ebp+0xffffffe4u);
    /* 0059a377: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x59a37cu); f_0064c5c0();
    /* 0059a37c: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0059a37e: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0059a381: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0059a384: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0059a387: cmp dword ptr [ebp - 0x1c], 0x3b9aca00 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x3b9aca00u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059a38e: jle 0x59a397 */ if ((fZ||fS!=fO)) goto L_0059a397;
L_0059a390:; BB(0x0059a390);
    /* 0059a390: mov dword ptr [ebp - 0x1c], 0x3b9aca00 */ W32((u32)(r_ebp+0xffffffe4u), 0x3b9aca00u);
L_0059a397:; BB(0x0059a397);
    /* 0059a397: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0059a39a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059a39b: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0059a39e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059a39f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0059a3a2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059a3a3: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x59a3a8u); f_005dcb00();
    /* 0059a3a8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059a3ab: mov ecx, eax */ r_ecx = r_eax;
    /* 0059a3ad: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x59a3b2u); f_005d5cf0();
    /* 0059a3b2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0059a3b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059a3b6: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0059a3b9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059a3ba: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0059a3bd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059a3be: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x59a3c3u); f_005dcb00();
    /* 0059a3c3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059a3c6: mov ecx, eax */ r_ecx = r_eax;
    /* 0059a3c8: call 0x5d5fb0 */ r_esp -= 4; W32(r_esp, 0x59a3cdu); f_005d5fb0();
    /* 0059a3cd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059a3d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059a3d1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0059a3d4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059a3d5: lea edx, [ebp - 0x34] */ r_edx = (u32)(r_ebp+0xffffffccu);
    /* 0059a3d8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059a3d9: lea ecx, [ebp - 0x1c] */ r_ecx = (u32)(r_ebp+0xffffffe4u);
    /* 0059a3dc: call 0x64c630 */ r_esp -= 4; W32(r_esp, 0x59a3e1u); f_0064c630();
    /* 0059a3e1: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0059a3e3: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0059a3e6: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0059a3e9: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0059a3ec: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059a3ee: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0059a3f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059a3f2: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0059a3f5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059a3f6: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0059a3f9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059a3fa: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0059a3fd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0059a3ff: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0059a402: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 0059a408: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59a40au); call_ind(t); }
    /* 0059a40a: jmp 0x59a60b */ goto L_0059a60b;
L_0059a40f:; BB(0x0059a40f);
    /* 0059a40f: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059a413: jne 0x59a4ea */ if (!fZ) goto L_0059a4ea;
L_0059a419:; BB(0x0059a419);
    /* 0059a419: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0059a41c: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x59a421u); f_005f5400();
    /* 0059a421: mov ecx, dword ptr [0x79359c] */ r_ecx = R32((u32)(0x79359cu));
    /* 0059a427: mov edx, dword ptr [ecx + eax*4 + 0x18] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x18u));
    /* 0059a42b: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 0059a42e: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0059a431: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0059a433: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0059a436: mov eax, dword ptr [edx + 0xc4] */ r_eax = R32((u32)(r_edx+0xc4u));
    /* 0059a43c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59a43eu); call_ind(t); }
    /* 0059a43e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0059a441: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059a442: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x59a447u); f_005dcb00();
    /* 0059a447: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059a44a: cmp dword ptr [eax + 0x4a8], 0 */ {  u32 a = R32((u32)(r_eax+0x4a8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059a451: jle 0x59a469 */ if ((fZ||fS!=fO)) goto L_0059a469;
L_0059a453:; BB(0x0059a453);
    /* 0059a453: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0059a456: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059a457: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x59a45cu); f_005dcb00();
    /* 0059a45c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059a45f: mov dword ptr [eax + 0x4a8], 0 */ W32((u32)(r_eax+0x4a8u), 0x0u);
L_0059a469:; BB(0x0059a469);
    /* 0059a469: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0059a46c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059a46d: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x59a472u); f_005dcb00();
    /* 0059a472: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059a475: add eax, 0x4a8 */ {  u32 a = r_eax; u32 b = 0x4a8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059a47a: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 0059a47d: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0059a480: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0059a482: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0059a485: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0059a488: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0059a48a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0059a48d: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0059a48f: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0059a492: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059a495: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0059a497: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0059a49a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0059a49d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059a49e: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0059a4a1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059a4a2: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0059a4a5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059a4a6: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x59a4abu); f_005dcb00();
    /* 0059a4ab: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059a4ae: mov ecx, eax */ r_ecx = r_eax;
    /* 0059a4b0: call 0x5d5fb0 */ r_esp -= 4; W32(r_esp, 0x59a4b5u); f_005d5fb0();
    /* 0059a4b5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059a4b7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059a4b9: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x59a4beu); f_0064c8a0();
    /* 0059a4be: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059a4c1: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0059a4c4: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 0059a4c7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059a4c9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0059a4cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059a4cd: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0059a4d0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059a4d1: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0059a4d4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059a4d5: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0059a4d8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0059a4da: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0059a4dd: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 0059a4e3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59a4e5u); call_ind(t); }
    /* 0059a4e5: jmp 0x59a60b */ goto L_0059a60b;
L_0059a4ea:; BB(0x0059a4ea);
    /* 0059a4ea: cmp dword ptr [ebp + 0xc], 1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059a4ee: jne 0x59a55e */ if (!fZ) goto L_0059a55e;
L_0059a4f0:; BB(0x0059a4f0);
    /* 0059a4f0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0059a4f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059a4f4: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x59a4f9u); f_005dcb00();
    /* 0059a4f9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059a4fc: cmp dword ptr [eax + 0x4a8], 0 */ {  u32 a = R32((u32)(r_eax+0x4a8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059a503: jge 0x59a53f */ if ((fS==fO)) goto L_0059a53f;
L_0059a505:; BB(0x0059a505);
    /* 0059a505: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0059a508: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059a509: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x59a50eu); f_005dcb00();
    /* 0059a50e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059a511: cmp dword ptr [eax + 0x4a8], -4 */ {  u32 a = R32((u32)(r_eax+0x4a8u)); u32 b = 0xfffffffcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059a518: jge 0x59a529 */ if ((fS==fO)) goto L_0059a529;
L_0059a51a:; BB(0x0059a51a);
    /* 0059a51a: mov eax, dword ptr [0x7935a8] */ r_eax = R32((u32)(0x7935a8u));
    /* 0059a51f: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059a522: mov byte ptr [eax + 0x117], 1 */ W8((u32)(r_eax+0x117u), 0x1u);
L_0059a529:; BB(0x0059a529);
    /* 0059a529: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0059a52c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059a52d: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x59a532u); f_005dcb00();
    /* 0059a532: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059a535: mov dword ptr [eax + 0x4a8], 0 */ W32((u32)(r_eax+0x4a8u), 0x0u);
L_0059a53f:; BB(0x0059a53f);
    /* 0059a53f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0059a542: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059a543: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x59a548u); f_005dcb00();
    /* 0059a548: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059a54b: mov ecx, eax */ r_ecx = r_eax;
    /* 0059a54d: call 0x5d7540 */ r_esp -= 4; W32(r_esp, 0x59a552u); f_005d7540();
    /* 0059a552: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0059a555: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0059a558: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059a55b: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
L_0059a55e:; BB(0x0059a55e);
    /* 0059a55e: cmp dword ptr [ebp - 0x1c], 0x3b9aca00 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x3b9aca00u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059a565: jle 0x59a56e */ if ((fZ||fS!=fO)) goto L_0059a56e;
L_0059a567:; BB(0x0059a567);
    /* 0059a567: mov dword ptr [ebp - 0x1c], 0x3b9aca00 */ W32((u32)(r_ebp+0xffffffe4u), 0x3b9aca00u);
L_0059a56e:; BB(0x0059a56e);
    /* 0059a56e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0059a571: shl edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0059a574: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0059a577: mov ecx, dword ptr [eax + edx + 0x4c] */ r_ecx = R32((u32)(r_eax+r_edx+0x4cu));
    /* 0059a57b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059a57c: mov edx, dword ptr [eax + edx + 0x48] */ r_edx = R32((u32)(r_eax+r_edx+0x48u));
    /* 0059a580: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059a581: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 0059a584: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059a585: lea ecx, [ebp - 0x1c] */ r_ecx = (u32)(r_ebp+0xffffffe4u);
    /* 0059a588: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x59a58du); f_0064c5c0();
    /* 0059a58d: cmp dword ptr [ebp - 0x10], 0x3b9aca00 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3b9aca00u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059a594: jl 0x59a5b7 */ if ((fS!=fO)) goto L_0059a5b7;
L_0059a596:; BB(0x0059a596);
    /* 0059a596: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059a598: push 0x3b9aca00 */ { u32 v = 0x3b9aca00u; r_esp -= 4; W32(r_esp, v); }
    /* 0059a59d: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x59a5a2u); f_0064c8a0();
    /* 0059a5a2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059a5a5: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0059a5a8: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 0059a5ab: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0059a5ae: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0059a5b1: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0059a5b4: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_0059a5b7:; BB(0x0059a5b7);
    /* 0059a5b7: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059a5ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059a5bb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0059a5be: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059a5bf: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0059a5c2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059a5c3: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x59a5c8u); f_005dcb00();
    /* 0059a5c8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059a5cb: mov ecx, eax */ r_ecx = r_eax;
    /* 0059a5cd: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x59a5d2u); f_005d5cf0();
    /* 0059a5d2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0059a5d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059a5d6: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0059a5d9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059a5da: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0059a5dd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059a5de: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x59a5e3u); f_005dcb00();
    /* 0059a5e3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059a5e6: mov ecx, eax */ r_ecx = r_eax;
    /* 0059a5e8: call 0x5d5fb0 */ r_esp -= 4; W32(r_esp, 0x59a5edu); f_005d5fb0();
    /* 0059a5ed: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059a5ef: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0059a5f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059a5f3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059a5f6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059a5f7: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0059a5fa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059a5fb: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0059a5fe: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0059a600: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0059a603: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 0059a609: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59a60bu); call_ind(t); }
L_0059a60b:; BB(0x0059a60b);
    /* 0059a60b: mov esp, ebp */ r_esp = r_ebp;
    /* 0059a60d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059a60e: ret 0x14 */ FN_RET(0x0059a150); r_esp += 24; return;
}

void f_0059a6c0(void) /* sub_59A6C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0059a6c0);
    /* 0059a6c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059a6c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0059a6c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059a6c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0059a6c7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0059a6ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059a6cb: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x59a6d0u); f_005dcb00();
    /* 0059a6d0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059a6d3: mov ecx, eax */ r_ecx = r_eax;
    /* 0059a6d5: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x59a6dau); f_005d5a50();
    /* 0059a6da: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0059a6dc: cmp eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059a6df: setge cl */ r_ecx = (r_ecx & 0xffffff00u) | ((((fS==fO)) ? 1 : 0) & 0xffu);
    /* 0059a6e2: mov al, cl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_ecx) & 0xffu);
    /* 0059a6e4: mov esp, ebp */ r_esp = r_ebp;
    /* 0059a6e6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059a6e7: ret 8 */ FN_RET(0x0059a6c0); r_esp += 12; return;
}

void f_0059a6f0(void) /* sub_59A6F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0059a6f0);
    /* 0059a6f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059a6f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0059a6f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059a6f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0059a6f7: mov ecx, dword ptr [0x7935cc] */ r_ecx = R32((u32)(0x7935ccu));
    /* 0059a6fd: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x59a702u); f_005da7b0();
    /* 0059a702: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0059a705: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059a707: je 0x59a723 */ if (fZ) goto L_0059a723;
L_0059a709:; BB(0x0059a709);
    /* 0059a709: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0059a70c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059a70d: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0059a710: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059a711: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0059a714: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059a715: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0059a718: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059a719: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059a71c: call 0x59afe0 */ r_esp -= 4; W32(r_esp, 0x59a721u); f_0059afe0();
    /* 0059a721: jmp 0x59a73b */ goto L_0059a73b;
L_0059a723:; BB(0x0059a723);
    /* 0059a723: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0059a726: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059a727: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0059a72a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059a72b: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0059a72e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059a72f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0059a732: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059a733: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059a736: call 0x59a910 */ r_esp -= 4; W32(r_esp, 0x59a73bu); f_0059a910();
L_0059a73b:; BB(0x0059a73b);
    /* 0059a73b: mov esp, ebp */ r_esp = r_ebp;
    /* 0059a73d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059a73e: ret 0x10 */ FN_RET(0x0059a6f0); r_esp += 20; return;
}

void f_0059a910(void) /* sub_59A910 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0059a910);
    /* 0059a910: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059a911: mov ebp, esp */ r_ebp = r_esp;
    /* 0059a913: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059a914: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0059a917: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0059a91a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059a91b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0059a91e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059a91f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059a922: call 0x59a750 */ r_esp -= 4; W32(r_esp, 0x59a927u); f_0059a750();
    /* 0059a927: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0059a92a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059a92b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0059a92e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059a92f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0059a932: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059a933: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059a936: call 0x59a960 */ r_esp -= 4; W32(r_esp, 0x59a93bu); f_0059a960();
    /* 0059a93b: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0059a93e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059a93f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0059a942: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059a943: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059a946: call 0x59aa60 */ r_esp -= 4; W32(r_esp, 0x59a94bu); f_0059aa60();
    /* 0059a94b: mov esp, ebp */ r_esp = r_ebp;
    /* 0059a94d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059a94e: ret 0x10 */ FN_RET(0x0059a910); r_esp += 20; return;
}

void f_0059afe0(void) /* sub_59AFE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0059afe0);
    /* 0059afe0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059afe1: mov ebp, esp */ r_ebp = r_esp;
    /* 0059afe3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059afe4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0059afe7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0059afea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059afeb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0059afee: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059afef: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059aff2: call 0x59ac50 */ r_esp -= 4; W32(r_esp, 0x59aff7u); f_0059ac50();
    /* 0059aff7: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0059affa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059affb: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0059affe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059afff: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0059b002: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059b003: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059b006: call 0x59b030 */ r_esp -= 4; W32(r_esp, 0x59b00bu); f_0059b030();
    /* 0059b00b: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0059b00e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059b00f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0059b012: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059b013: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059b016: call 0x59b060 */ r_esp -= 4; W32(r_esp, 0x59b01bu); f_0059b060();
    /* 0059b01b: mov esp, ebp */ r_esp = r_ebp;
    /* 0059b01d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059b01e: ret 0x10 */ FN_RET(0x0059afe0); r_esp += 20; return;
}

