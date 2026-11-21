#include "protos.h"

void f_005c6160(void) /* sub_5C6160 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c6160);
    /* 005c6160: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c6161: mov ebp, esp */ r_ebp = r_esp;
    /* 005c6163: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c6164: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c6167: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c616a: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c616d: jne 0x5c6175 */ if (!fZ) goto L_005c6175;
L_005c616f:; BB(0x005c616f);
    /* 005c616f: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5c6175u); call_ind(t); }
L_005c6175:; BB(0x005c6175);
    /* 005c6175: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005c6178: imul ecx, ecx, 0x34 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x34u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c617b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c617e: add ecx, dword ptr [edx + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c6181: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c6184: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c6186: cmp ecx, dword ptr [edx + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005c6189: ja 0x5c61a1 */ if ((!fC&&!fZ)) goto L_005c61a1;
L_005c618b:; BB(0x005c618b);
    /* 005c618b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c618e: imul eax, eax, 0x34 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x34u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c6191: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c6194: add eax, dword ptr [ecx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c6197: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c619a: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 005c619c: cmp eax, dword ptr [ecx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c619f: jae 0x5c61a7 */ if (!fC) goto L_005c61a7;
L_005c61a1:; BB(0x005c61a1);
    /* 005c61a1: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5c61a7u); call_ind(t); }
L_005c61a7:; BB(0x005c61a7);
    /* 005c61a7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005c61aa: imul edx, edx, 0x34 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x34u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c61ad: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c61b0: add edx, dword ptr [eax + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c61b3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c61b6: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 005c61b9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c61bc: mov esp, ebp */ r_esp = r_ebp;
    /* 005c61be: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c61bf: ret 4 */ FN_RET(0x005c6160); r_esp += 8; return;
}

void f_005c61d0(void) /* sub_5C61D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c61d0);
    /* 005c61d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c61d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c61d3: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c61d6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c61d8: mov byte ptr [ebp - 1], al */ W8((u32)(r_ebp+0xffffffffu), (u8)r_eax);
    /* 005c61db: mov cl, byte ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffcu))) & 0xffu);
    /* 005c61de: mov byte ptr [ebp - 2], cl */ W8((u32)(r_ebp+0xfffffffeu), (u8)r_ecx);
    /* 005c61e1: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005c61e4: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005c61e7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c61ea: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005c61ed: mov cl, byte ptr [ebp - 1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
    /* 005c61f0: mov byte ptr [ebp - 0x36], cl */ W8((u32)(r_ebp+0xffffffcau), (u8)r_ecx);
    /* 005c61f3: mov dl, byte ptr [ebp - 3] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffdu))) & 0xffu);
    /* 005c61f6: mov byte ptr [ebp - 0x35], dl */ W8((u32)(r_ebp+0xffffffcbu), (u8)r_edx);
    /* 005c61f9: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005c61fc: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005c61ff: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c6202: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 005c6205: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c6207: mov byte ptr [ebp - 0x15], dl */ W8((u32)(r_ebp+0xffffffebu), (u8)r_edx);
    /* 005c620a: mov al, byte ptr [ebp - 0x17] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffe9u))) & 0xffu);
    /* 005c620d: mov byte ptr [ebp - 0x16], al */ W8((u32)(r_ebp+0xffffffeau), (u8)r_eax);
    /* 005c6210: mov cl, byte ptr [ebp - 0x15] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffebu))) & 0xffu);
    /* 005c6213: mov byte ptr [ebp - 0x29], cl */ W8((u32)(r_ebp+0xffffffd7u), (u8)r_ecx);
    /* 005c6216: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005c6219: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 005c621c: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005c621f: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005c6222: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c6225: sub ecx, dword ptr [ebp - 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005c6228: sar ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005c622b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005c622e: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c6231: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005c6234: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005c6237: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c6239: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005c623c: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c6240: jle 0x5c6261 */ if ((fZ||fS!=fO)) goto L_005c6261;
L_005c6242:; BB(0x005c6242);
    /* 005c6242: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c6245: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005c6248: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c6249: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c624c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c624d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c6250: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005c6253: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c6254: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c6257: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c6258: call dword ptr [0x6b2280] */ { u32 t = R32((u32)(0x6b2280u)); r_esp -= 4; W32(r_esp, 0x5c625eu); call_ind(t); }
    /* 005c625e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005c6261:; BB(0x005c6261);
    /* 005c6261: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c6264: mov esp, ebp */ r_esp = r_ebp;
    /* 005c6266: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c6267: ret  */ FN_RET(0x005c61d0); r_esp += 4; return;
}

void f_005c6270(void) /* sub_5C6270 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c6270);
    /* 005c6270: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c6271: mov ebp, esp */ r_ebp = r_esp;
    /* 005c6273: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c6276: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c6278: mov byte ptr [ebp - 1], al */ W8((u32)(r_ebp+0xffffffffu), (u8)r_eax);
    /* 005c627b: mov cl, byte ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffcu))) & 0xffu);
    /* 005c627e: mov byte ptr [ebp - 2], cl */ W8((u32)(r_ebp+0xfffffffeu), (u8)r_ecx);
    /* 005c6281: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005c6284: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005c6287: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c628a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005c628d: mov cl, byte ptr [ebp - 1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
    /* 005c6290: mov byte ptr [ebp - 0x2e], cl */ W8((u32)(r_ebp+0xffffffd2u), (u8)r_ecx);
    /* 005c6293: mov dl, byte ptr [ebp - 3] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffdu))) & 0xffu);
    /* 005c6296: mov byte ptr [ebp - 0x2d], dl */ W8((u32)(r_ebp+0xffffffd3u), (u8)r_edx);
    /* 005c6299: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005c629c: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005c629f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c62a2: sub eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c62a5: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005c62a6: mov ecx, 0x34 */ r_ecx = 0x34u;
    /* 005c62ab: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005c62ab, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005c62ab, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005c62ad: imul eax, eax, 0x34 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x34u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c62b0: add eax, dword ptr [ebp - 0x2c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffd4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c62b3: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005c62b6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c62b8: mov byte ptr [ebp - 0x19], dl */ W8((u32)(r_ebp+0xffffffe7u), (u8)r_edx);
    /* 005c62bb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c62bd: mov byte ptr [ebp - 0x1a], al */ W8((u32)(r_ebp+0xffffffe6u), (u8)r_eax);
    /* 005c62c0: mov cl, byte ptr [ebp - 0x19] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffe7u))) & 0xffu);
    /* 005c62c3: mov byte ptr [ebp - 0x26], cl */ W8((u32)(r_ebp+0xffffffdau), (u8)r_ecx);
    /* 005c62c6: mov dl, byte ptr [ebp - 0x1a] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffe6u))) & 0xffu);
    /* 005c62c9: mov byte ptr [ebp - 0x25], dl */ W8((u32)(r_ebp+0xffffffdbu), (u8)r_edx);
    /* 005c62cc: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005c62cf: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005c62d2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c62d5: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005c62d8: jmp 0x5c62ec */ goto L_005c62ec;
L_005c62da:; BB(0x005c62da);
    /* 005c62da: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c62dd: add edx, 0x34 */ {  u32 a = r_edx; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c62e0: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 005c62e3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c62e6: add eax, 0x34 */ {  u32 a = r_eax; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c62e9: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_005c62ec:; BB(0x005c62ec);
    /* 005c62ec: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c62ef: cmp ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c62f2: je 0x5c6302 */ if (fZ) goto L_005c6302;
L_005c62f4:; BB(0x005c62f4);
    /* 005c62f4: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c62f7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c62f8: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c62fb: call 0x5c3a20 */ r_esp -= 4; W32(r_esp, 0x5c6300u); f_005c3a20();
    /* 005c6300: jmp 0x5c62da */ goto L_005c62da;
L_005c6302:; BB(0x005c6302);
    /* 005c6302: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c6305: mov esp, ebp */ r_esp = r_ebp;
    /* 005c6307: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c6308: ret  */ FN_RET(0x005c6270); r_esp += 4; return;
}

void f_005c63d0(void) /* sub_5C63D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c63d0);
    /* 005c63d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c63d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c63d3: sub esp, 0x168 */ {  u32 a = r_esp; u32 b = 0x168u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c63d9: mov dword ptr [ebp - 0x148], ecx */ W32((u32)(r_ebp+0xfffffeb8u), r_ecx);
    /* 005c63df: mov eax, dword ptr [ebp - 0x148] */ r_eax = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005c63e5: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c63e8: je 0x5c6764 */ if (fZ) goto L_005c6764;
L_005c63ee:; BB(0x005c63ee);
    /* 005c63ee: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005c63f1: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c63f5: jne 0x5c6403 */ if (!fZ) goto L_005c6403;
L_005c63f7:; BB(0x005c63f7);
    /* 005c63f7: mov dword ptr [ebp - 0x14c], 0 */ W32((u32)(r_ebp+0xfffffeb4u), 0x0u);
    /* 005c6401: jmp 0x5c6418 */ goto L_005c6418;
L_005c6403:; BB(0x005c6403);
    /* 005c6403: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005c6406: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c6409: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005c640c: sub ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005c640f: sar ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005c6412: mov dword ptr [ebp - 0x14c], ecx */ W32((u32)(r_ebp+0xfffffeb4u), r_ecx);
L_005c6418:; BB(0x005c6418);
    /* 005c6418: cmp dword ptr [ebp - 0x14c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffeb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c641f: jne 0x5c6431 */ if (!fZ) goto L_005c6431;
L_005c6421:; BB(0x005c6421);
    /* 005c6421: mov ecx, dword ptr [ebp - 0x148] */ r_ecx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005c6427: call 0x5bc3e0 */ r_esp -= 4; W32(r_esp, 0x5c642cu); f_005bc3e0();
    /* 005c642c: jmp 0x5c6764 */ goto L_005c6764;
L_005c6431:; BB(0x005c6431);
    /* 005c6431: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005c6434: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6438: jne 0x5c6446 */ if (!fZ) goto L_005c6446;
L_005c643a:; BB(0x005c643a);
    /* 005c643a: mov dword ptr [ebp - 0x150], 0 */ W32((u32)(r_ebp+0xfffffeb0u), 0x0u);
    /* 005c6444: jmp 0x5c645b */ goto L_005c645b;
L_005c6446:; BB(0x005c6446);
    /* 005c6446: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c6449: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005c644c: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005c644f: sub edx, dword ptr [ecx + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005c6452: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005c6455: mov dword ptr [ebp - 0x150], edx */ W32((u32)(r_ebp+0xfffffeb0u), r_edx);
L_005c645b:; BB(0x005c645b);
    /* 005c645b: mov eax, dword ptr [ebp - 0x148] */ r_eax = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005c6461: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6465: jne 0x5c6473 */ if (!fZ) goto L_005c6473;
L_005c6467:; BB(0x005c6467);
    /* 005c6467: mov dword ptr [ebp - 0x154], 0 */ W32((u32)(r_ebp+0xfffffeacu), 0x0u);
    /* 005c6471: jmp 0x5c648e */ goto L_005c648e;
L_005c6473:; BB(0x005c6473);
    /* 005c6473: mov ecx, dword ptr [ebp - 0x148] */ r_ecx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005c6479: mov edx, dword ptr [ebp - 0x148] */ r_edx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005c647f: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 005c6482: sub eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c6485: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005c6488: mov dword ptr [ebp - 0x154], eax */ W32((u32)(r_ebp+0xfffffeacu), r_eax);
L_005c648e:; BB(0x005c648e);
    /* 005c648e: mov ecx, dword ptr [ebp - 0x150] */ r_ecx = R32((u32)(r_ebp+0xfffffeb0u));
    /* 005c6494: cmp ecx, dword ptr [ebp - 0x154] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffeacu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005c649a: ja 0x5c652b */ if ((!fC&&!fZ)) goto L_005c652b;
L_005c64a0:; BB(0x005c64a0);
    /* 005c64a0: mov edx, dword ptr [ebp - 0x148] */ r_edx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005c64a6: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005c64a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c64aa: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005c64ad: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005c64b0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c64b1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c64b4: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005c64b7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c64b8: call 0x5c0980 */ r_esp -= 4; W32(r_esp, 0x5c64bdu); f_005c0980();
    /* 005c64bd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c64c0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005c64c3: mov edx, dword ptr [ebp - 0x148] */ r_edx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005c64c9: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005c64cc: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 005c64cf: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005c64d2: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 005c64d5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c64d8: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 005c64db: mov al, byte ptr [ebp - 0x4c] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffb4u))) & 0xffu);
    /* 005c64de: mov byte ptr [ebp - 0x4b], al */ W8((u32)(r_ebp+0xffffffb5u), (u8)r_eax);
    /* 005c64e1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005c64e4: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c64e8: jne 0x5c64f6 */ if (!fZ) goto L_005c64f6;
L_005c64ea:; BB(0x005c64ea);
    /* 005c64ea: mov dword ptr [ebp - 0x158], 0 */ W32((u32)(r_ebp+0xfffffea8u), 0x0u);
    /* 005c64f4: jmp 0x5c650b */ goto L_005c650b;
L_005c64f6:; BB(0x005c64f6);
    /* 005c64f6: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005c64f9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c64fc: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005c64ff: sub ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005c6502: sar ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005c6505: mov dword ptr [ebp - 0x158], ecx */ W32((u32)(r_ebp+0xfffffea8u), r_ecx);
L_005c650b:; BB(0x005c650b);
    /* 005c650b: mov edx, dword ptr [ebp - 0x148] */ r_edx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005c6511: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005c6514: mov ecx, dword ptr [ebp - 0x158] */ r_ecx = R32((u32)(r_ebp+0xfffffea8u));
    /* 005c651a: lea edx, [eax + ecx*4] */ r_edx = (u32)(r_eax+r_ecx*4);
    /* 005c651d: mov eax, dword ptr [ebp - 0x148] */ r_eax = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005c6523: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 005c6526: jmp 0x5c6764 */ goto L_005c6764;
L_005c652b:; BB(0x005c652b);
    /* 005c652b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005c652e: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6532: jne 0x5c6540 */ if (!fZ) goto L_005c6540;
L_005c6534:; BB(0x005c6534);
    /* 005c6534: mov dword ptr [ebp - 0x15c], 0 */ W32((u32)(r_ebp+0xfffffea4u), 0x0u);
    /* 005c653e: jmp 0x5c6555 */ goto L_005c6555;
L_005c6540:; BB(0x005c6540);
    /* 005c6540: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005c6543: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c6546: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005c6549: sub ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005c654c: sar ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005c654f: mov dword ptr [ebp - 0x15c], ecx */ W32((u32)(r_ebp+0xfffffea4u), r_ecx);
L_005c6555:; BB(0x005c6555);
    /* 005c6555: mov edx, dword ptr [ebp - 0x148] */ r_edx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005c655b: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c655f: jne 0x5c656d */ if (!fZ) goto L_005c656d;
L_005c6561:; BB(0x005c6561);
    /* 005c6561: mov dword ptr [ebp - 0x160], 0 */ W32((u32)(r_ebp+0xfffffea0u), 0x0u);
    /* 005c656b: jmp 0x5c6588 */ goto L_005c6588;
L_005c656d:; BB(0x005c656d);
    /* 005c656d: mov eax, dword ptr [ebp - 0x148] */ r_eax = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005c6573: mov ecx, dword ptr [ebp - 0x148] */ r_ecx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005c6579: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 005c657c: sub edx, dword ptr [ecx + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005c657f: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005c6582: mov dword ptr [ebp - 0x160], edx */ W32((u32)(r_ebp+0xfffffea0u), r_edx);
L_005c6588:; BB(0x005c6588);
    /* 005c6588: mov eax, dword ptr [ebp - 0x15c] */ r_eax = R32((u32)(r_ebp+0xfffffea4u));
    /* 005c658e: cmp eax, dword ptr [ebp - 0x160] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffea0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005c6594: ja 0x5c6646 */ if ((!fC&&!fZ)) goto L_005c6646;
L_005c659a:; BB(0x005c659a);
    /* 005c659a: mov ecx, dword ptr [ebp - 0x148] */ r_ecx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005c65a0: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c65a4: jne 0x5c65b2 */ if (!fZ) goto L_005c65b2;
L_005c65a6:; BB(0x005c65a6);
    /* 005c65a6: mov dword ptr [ebp - 0x164], 0 */ W32((u32)(r_ebp+0xfffffe9cu), 0x0u);
    /* 005c65b0: jmp 0x5c65cd */ goto L_005c65cd;
L_005c65b2:; BB(0x005c65b2);
    /* 005c65b2: mov edx, dword ptr [ebp - 0x148] */ r_edx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005c65b8: mov eax, dword ptr [ebp - 0x148] */ r_eax = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005c65be: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005c65c1: sub ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005c65c4: sar ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005c65c7: mov dword ptr [ebp - 0x164], ecx */ W32((u32)(r_ebp+0xfffffe9cu), r_ecx);
L_005c65cd:; BB(0x005c65cd);
    /* 005c65cd: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005c65d0: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005c65d3: mov ecx, dword ptr [ebp - 0x164] */ r_ecx = R32((u32)(r_ebp+0xfffffe9cu));
    /* 005c65d9: lea edx, [eax + ecx*4] */ r_edx = (u32)(r_eax+r_ecx*4);
    /* 005c65dc: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005c65df: mov eax, dword ptr [ebp - 0x148] */ r_eax = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005c65e5: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005c65e8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c65e9: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c65ec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c65ed: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c65f0: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005c65f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c65f4: call 0x5c0980 */ r_esp -= 4; W32(r_esp, 0x5c65f9u); f_005c0980();
    /* 005c65f9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c65fc: mov edx, dword ptr [ebp - 0x148] */ r_edx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005c6602: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005c6605: mov dword ptr [ebp - 0xa4], eax */ W32((u32)(r_ebp+0xffffff5cu), r_eax);
    /* 005c660b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005c660e: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005c6611: mov dword ptr [ebp - 0xa0], edx */ W32((u32)(r_ebp+0xffffff60u), r_edx);
    /* 005c6617: mov eax, dword ptr [ebp - 0x148] */ r_eax = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005c661d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c661e: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 005c6624: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c6625: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 005c662b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c662c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c662f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c6630: call 0x5bf010 */ r_esp -= 4; W32(r_esp, 0x5c6635u); f_005bf010();
    /* 005c6635: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c6638: mov ecx, dword ptr [ebp - 0x148] */ r_ecx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005c663e: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 005c6641: jmp 0x5c6764 */ goto L_005c6764;
L_005c6646:; BB(0x005c6646);
    /* 005c6646: mov edx, dword ptr [ebp - 0x148] */ r_edx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005c664c: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6650: je 0x5c66cd */ if (fZ) goto L_005c66cd;
L_005c6652:; BB(0x005c6652);
    /* 005c6652: mov eax, dword ptr [ebp - 0x148] */ r_eax = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005c6658: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005c665b: mov dword ptr [ebp - 0xb8], ecx */ W32((u32)(r_ebp+0xffffff48u), r_ecx);
    /* 005c6661: mov edx, dword ptr [ebp - 0x148] */ r_edx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005c6667: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005c666a: mov dword ptr [ebp - 0xb4], eax */ W32((u32)(r_ebp+0xffffff4cu), r_eax);
    /* 005c6670: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c6676: mov dword ptr [ebp - 0xb0], ecx */ W32((u32)(r_ebp+0xffffff50u), r_ecx);
    /* 005c667c: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 005c6682: mov dword ptr [ebp - 0xac], edx */ W32((u32)(r_ebp+0xffffff54u), r_edx);
    /* 005c6688: mov al, byte ptr [ebp - 0xa6] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff5au))) & 0xffu);
    /* 005c668e: mov byte ptr [ebp - 0xa5], al */ W8((u32)(r_ebp+0xffffff5bu), (u8)r_eax);
    /* 005c6694: mov ecx, dword ptr [ebp - 0x148] */ r_ecx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005c669a: mov edx, dword ptr [ebp - 0x148] */ r_edx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005c66a0: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 005c66a3: sub eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c66a6: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005c66a9: mov dword ptr [ebp - 0xc0], eax */ W32((u32)(r_ebp+0xffffff40u), r_eax);
    /* 005c66af: mov ecx, dword ptr [ebp - 0x148] */ r_ecx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005c66b5: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005c66b8: mov dword ptr [ebp - 0xbc], edx */ W32((u32)(r_ebp+0xffffff44u), r_edx);
    /* 005c66be: mov eax, dword ptr [ebp - 0xbc] */ r_eax = R32((u32)(r_ebp+0xffffff44u));
    /* 005c66c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c66c5: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5c66cau); f_00686cae();
    /* 005c66ca: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005c66cd:; BB(0x005c66cd);
    /* 005c66cd: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005c66d0: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c66d4: jne 0x5c66e2 */ if (!fZ) goto L_005c66e2;
L_005c66d6:; BB(0x005c66d6);
    /* 005c66d6: mov dword ptr [ebp - 0x168], 0 */ W32((u32)(r_ebp+0xfffffe98u), 0x0u);
    /* 005c66e0: jmp 0x5c66f7 */ goto L_005c66f7;
L_005c66e2:; BB(0x005c66e2);
    /* 005c66e2: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005c66e5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c66e8: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005c66eb: sub ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005c66ee: sar ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005c66f1: mov dword ptr [ebp - 0x168], ecx */ W32((u32)(r_ebp+0xfffffe98u), r_ecx);
L_005c66f7:; BB(0x005c66f7);
    /* 005c66f7: mov edx, dword ptr [ebp - 0x168] */ r_edx = R32((u32)(r_ebp+0xfffffe98u));
    /* 005c66fd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c66fe: mov ecx, dword ptr [ebp - 0x148] */ r_ecx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005c6704: call 0x5bef20 */ r_esp -= 4; W32(r_esp, 0x5c6709u); f_005bef20();
    /* 005c6709: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005c670c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c670e: je 0x5c6764 */ if (fZ) goto L_005c6764;
L_005c6710:; BB(0x005c6710);
    /* 005c6710: mov ecx, dword ptr [ebp - 0x148] */ r_ecx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005c6716: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005c6719: mov dword ptr [ebp - 0x144], edx */ W32((u32)(r_ebp+0xfffffebcu), r_edx);
    /* 005c671f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c6722: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005c6725: mov dword ptr [ebp - 0x140], ecx */ W32((u32)(r_ebp+0xfffffec0u), r_ecx);
    /* 005c672b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005c672e: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005c6731: mov dword ptr [ebp - 0x13c], eax */ W32((u32)(r_ebp+0xfffffec4u), r_eax);
    /* 005c6737: mov ecx, dword ptr [ebp - 0x148] */ r_ecx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005c673d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c673e: mov edx, dword ptr [ebp - 0x144] */ r_edx = R32((u32)(r_ebp+0xfffffebcu));
    /* 005c6744: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c6745: mov eax, dword ptr [ebp - 0x140] */ r_eax = R32((u32)(r_ebp+0xfffffec0u));
    /* 005c674b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c674c: mov ecx, dword ptr [ebp - 0x13c] */ r_ecx = R32((u32)(r_ebp+0xfffffec4u));
    /* 005c6752: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c6753: call 0x5bf010 */ r_esp -= 4; W32(r_esp, 0x5c6758u); f_005bf010();
    /* 005c6758: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c675b: mov edx, dword ptr [ebp - 0x148] */ r_edx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005c6761: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
L_005c6764:; BB(0x005c6764);
    /* 005c6764: mov eax, dword ptr [ebp - 0x148] */ r_eax = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005c676a: mov esp, ebp */ r_esp = r_ebp;
    /* 005c676c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c676d: ret 4 */ FN_RET(0x005c63d0); r_esp += 8; return;
}

void f_005c6770(void) /* sub_5C6770 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c6770);
    /* 005c6770: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c6771: mov ebp, esp */ r_ebp = r_esp;
    /* 005c6773: sub esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c6776: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 005c6779: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 005c677c: mov dword ptr [eax + 4], 0 */ W32((u32)(r_eax+0x4u), 0x0u);
    /* 005c6783: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005c6786: mov dword ptr [ecx + 8], 0 */ W32((u32)(r_ecx+0x8u), 0x0u);
    /* 005c678d: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005c6790: mov dword ptr [edx + 0xc], 0 */ W32((u32)(r_edx+0xcu), 0x0u);
    /* 005c6797: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c679b: jne 0x5c67a3 */ if (!fZ) goto L_005c67a3;
L_005c679d:; BB(0x005c679d);
    /* 005c679d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005c679f: jmp 0x5c6802 */ goto L_005c6802;
L_005c67a3:; BB(0x005c67a3);
    /* 005c67a3: mov dword ptr [ebp - 4], 0x3fffffff */ W32((u32)(r_ebp+0xfffffffcu), 0x3fffffffu);
    /* 005c67aa: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005c67ae: jbe 0x5c67b8 */ if ((fC||fZ)) goto L_005c67b8;
L_005c67b0:; BB(0x005c67b0);
    /* 005c67b0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c67b3: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 005c67b6: jmp 0x5c67bf */ goto L_005c67bf;
L_005c67b8:; BB(0x005c67b8);
    /* 005c67b8: mov dword ptr [ebp - 0x60], 1 */ W32((u32)(r_ebp+0xffffffa0u), 0x1u);
L_005c67bf:; BB(0x005c67bf);
    /* 005c67bf: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005c67c2: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c67c5: jae 0x5c67ce */ if (!fC) goto L_005c67ce;
L_005c67c7:; BB(0x005c67c7);
    /* 005c67c7: call 0x5c6950 */ r_esp -= 4; W32(r_esp, 0x5c67ccu); f_005c6950();
    /* 005c67cc: jmp 0x5c6800 */ goto L_005c6800;
L_005c67ce:; BB(0x005c67ce);
    /* 005c67ce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c67d0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005c67d3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c67d4: call 0x5c6310 */ r_esp -= 4; W32(r_esp, 0x5c67d9u); f_005c6310();
    /* 005c67d9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c67dc: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005c67df: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 005c67e2: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005c67e5: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 005c67e8: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005c67eb: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 005c67ee: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005c67f1: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005c67f4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005c67f7: lea edx, [eax + ecx*4] */ r_edx = (u32)(r_eax+r_ecx*4);
    /* 005c67fa: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 005c67fd: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
L_005c6800:; BB(0x005c6800);
    /* 005c6800: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_005c6802:; BB(0x005c6802);
    /* 005c6802: mov esp, ebp */ r_esp = r_ebp;
    /* 005c6804: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c6805: ret 4 */ FN_RET(0x005c6770); r_esp += 8; return;
}

void f_005c6810(void) /* sub_5C6810 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c6810);
    /* 005c6810: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c6811: mov ebp, esp */ r_ebp = r_esp;
    /* 005c6813: sub esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c6816: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 005c6819: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 005c681c: mov dword ptr [eax + 4], 0 */ W32((u32)(r_eax+0x4u), 0x0u);
    /* 005c6823: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005c6826: mov dword ptr [ecx + 8], 0 */ W32((u32)(r_ecx+0x8u), 0x0u);
    /* 005c682d: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005c6830: mov dword ptr [edx + 0xc], 0 */ W32((u32)(r_edx+0xcu), 0x0u);
    /* 005c6837: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c683b: jne 0x5c6843 */ if (!fZ) goto L_005c6843;
L_005c683d:; BB(0x005c683d);
    /* 005c683d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005c683f: jmp 0x5c68a2 */ goto L_005c68a2;
L_005c6843:; BB(0x005c6843);
    /* 005c6843: mov dword ptr [ebp - 4], 0x3fffffff */ W32((u32)(r_ebp+0xfffffffcu), 0x3fffffffu);
    /* 005c684a: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005c684e: jbe 0x5c6858 */ if ((fC||fZ)) goto L_005c6858;
L_005c6850:; BB(0x005c6850);
    /* 005c6850: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c6853: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 005c6856: jmp 0x5c685f */ goto L_005c685f;
L_005c6858:; BB(0x005c6858);
    /* 005c6858: mov dword ptr [ebp - 0x60], 1 */ W32((u32)(r_ebp+0xffffffa0u), 0x1u);
L_005c685f:; BB(0x005c685f);
    /* 005c685f: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005c6862: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c6865: jae 0x5c686e */ if (!fC) goto L_005c686e;
L_005c6867:; BB(0x005c6867);
    /* 005c6867: call 0x5c6020 */ r_esp -= 4; W32(r_esp, 0x5c686cu); f_005c6020();
    /* 005c686c: jmp 0x5c68a0 */ goto L_005c68a0;
L_005c686e:; BB(0x005c686e);
    /* 005c686e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c6870: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005c6873: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c6874: call 0x5c6310 */ r_esp -= 4; W32(r_esp, 0x5c6879u); f_005c6310();
    /* 005c6879: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c687c: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005c687f: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 005c6882: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005c6885: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 005c6888: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005c688b: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 005c688e: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005c6891: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005c6894: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005c6897: lea edx, [eax + ecx*4] */ r_edx = (u32)(r_eax+r_ecx*4);
    /* 005c689a: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 005c689d: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
L_005c68a0:; BB(0x005c68a0);
    /* 005c68a0: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_005c68a2:; BB(0x005c68a2);
    /* 005c68a2: mov esp, ebp */ r_esp = r_ebp;
    /* 005c68a4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c68a5: ret 4 */ FN_RET(0x005c6810); r_esp += 8; return;
}

void f_005c68b0(void) /* sub_5C68B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c68b0);
    /* 005c68b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c68b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c68b3: sub esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c68b6: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 005c68b9: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 005c68bc: mov dword ptr [eax + 4], 0 */ W32((u32)(r_eax+0x4u), 0x0u);
    /* 005c68c3: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005c68c6: mov dword ptr [ecx + 8], 0 */ W32((u32)(r_ecx+0x8u), 0x0u);
    /* 005c68cd: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005c68d0: mov dword ptr [edx + 0xc], 0 */ W32((u32)(r_edx+0xcu), 0x0u);
    /* 005c68d7: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c68db: jne 0x5c68e3 */ if (!fZ) goto L_005c68e3;
L_005c68dd:; BB(0x005c68dd);
    /* 005c68dd: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005c68df: jmp 0x5c6942 */ goto L_005c6942;
L_005c68e3:; BB(0x005c68e3);
    /* 005c68e3: mov dword ptr [ebp - 4], 0x4ec4ec4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4ec4ec4u);
    /* 005c68ea: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005c68ee: jbe 0x5c68f8 */ if ((fC||fZ)) goto L_005c68f8;
L_005c68f0:; BB(0x005c68f0);
    /* 005c68f0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c68f3: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 005c68f6: jmp 0x5c68ff */ goto L_005c68ff;
L_005c68f8:; BB(0x005c68f8);
    /* 005c68f8: mov dword ptr [ebp - 0x60], 1 */ W32((u32)(r_ebp+0xffffffa0u), 0x1u);
L_005c68ff:; BB(0x005c68ff);
    /* 005c68ff: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005c6902: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c6905: jae 0x5c690e */ if (!fC) goto L_005c690e;
L_005c6907:; BB(0x005c6907);
    /* 005c6907: call 0x5c60c0 */ r_esp -= 4; W32(r_esp, 0x5c690cu); f_005c60c0();
    /* 005c690c: jmp 0x5c6940 */ goto L_005c6940;
L_005c690e:; BB(0x005c690e);
    /* 005c690e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c6910: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005c6913: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c6914: call 0x5c6370 */ r_esp -= 4; W32(r_esp, 0x5c6919u); f_005c6370();
    /* 005c6919: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c691c: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005c691f: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 005c6922: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005c6925: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 005c6928: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005c692b: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 005c692e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005c6931: imul edx, edx, 0x34 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x34u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c6934: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 005c6937: add edx, dword ptr [eax + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c693a: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005c693d: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
L_005c6940:; BB(0x005c6940);
    /* 005c6940: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_005c6942:; BB(0x005c6942);
    /* 005c6942: mov esp, ebp */ r_esp = r_ebp;
    /* 005c6944: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c6945: ret 4 */ FN_RET(0x005c68b0); r_esp += 8; return;
}

void f_005c69f0(void) /* sub_5C69F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c69f0);
    /* 005c69f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c69f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c69f3: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c69f6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c69f8: mov byte ptr [ebp - 1], al */ W8((u32)(r_ebp+0xffffffffu), (u8)r_eax);
    /* 005c69fb: mov cl, byte ptr [ebp - 3] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffdu))) & 0xffu);
    /* 005c69fe: mov byte ptr [ebp - 2], cl */ W8((u32)(r_ebp+0xfffffffeu), (u8)r_ecx);
    /* 005c6a01: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005c6a04: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005c6a07: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c6a0a: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005c6a0d: mov cl, byte ptr [ebp - 1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
    /* 005c6a10: mov byte ptr [ebp - 0x31], cl */ W8((u32)(r_ebp+0xffffffcfu), (u8)r_ecx);
    /* 005c6a13: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005c6a16: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 005c6a19: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005c6a1c: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005c6a1f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c6a22: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005c6a25: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c6a28: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 005c6a2b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c6a2d: mov byte ptr [ebp - 0x11], al */ W8((u32)(r_ebp+0xffffffefu), (u8)r_eax);
    /* 005c6a30: mov cl, byte ptr [ebp - 0x13] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffedu))) & 0xffu);
    /* 005c6a33: mov byte ptr [ebp - 0x12], cl */ W8((u32)(r_ebp+0xffffffeeu), (u8)r_ecx);
    /* 005c6a36: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005c6a39: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005c6a3c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c6a3f: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005c6a42: mov cl, byte ptr [ebp - 0x11] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffefu))) & 0xffu);
    /* 005c6a45: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c6a46: mov dl, byte ptr [ebp - 0x12] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffeeu))) & 0xffu);
    /* 005c6a49: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c6a4a: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005c6a4d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c6a4e: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005c6a51: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c6a52: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c6a55: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c6a56: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c6a59: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c6a5a: call 0x5c6c50 */ r_esp -= 4; W32(r_esp, 0x5c6a5fu); f_005c6c50();
    /* 005c6a5f: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c6a62: mov esp, ebp */ r_esp = r_ebp;
    /* 005c6a64: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c6a65: ret  */ FN_RET(0x005c69f0); r_esp += 4; return;
}

void f_005c6a70(void) /* sub_5C6A70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c6a70);
    /* 005c6a70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c6a71: mov ebp, esp */ r_ebp = r_esp;
    /* 005c6a73: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c6a76: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c6a78: mov byte ptr [ebp - 1], al */ W8((u32)(r_ebp+0xffffffffu), (u8)r_eax);
    /* 005c6a7b: mov cl, byte ptr [ebp - 3] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffdu))) & 0xffu);
    /* 005c6a7e: mov byte ptr [ebp - 2], cl */ W8((u32)(r_ebp+0xfffffffeu), (u8)r_ecx);
    /* 005c6a81: mov dl, byte ptr [ebp - 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
    /* 005c6a84: mov byte ptr [ebp - 0x21], dl */ W8((u32)(r_ebp+0xffffffdfu), (u8)r_edx);
    /* 005c6a87: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005c6a8a: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005c6a8d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005c6a90: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005c6a93: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005c6a96: sub eax, dword ptr [ebp - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c6a99: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005c6a9a: mov ecx, 0x34 */ r_ecx = 0x34u;
    /* 005c6a9f: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005c6a9f, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005c6a9f, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005c6aa1: imul eax, eax, 0x34 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x34u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c6aa4: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c6aa7: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005c6aa9: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005c6aac: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c6aae: mov byte ptr [ebp - 9], al */ W8((u32)(r_ebp+0xfffffff7u), (u8)r_eax);
    /* 005c6ab1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005c6ab3: mov byte ptr [ebp - 0xa], cl */ W8((u32)(r_ebp+0xfffffff6u), (u8)r_ecx);
    /* 005c6ab6: mov dl, byte ptr [ebp - 9] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff7u))) & 0xffu);
    /* 005c6ab9: mov byte ptr [ebp - 0x16], dl */ W8((u32)(r_ebp+0xffffffeau), (u8)r_edx);
    /* 005c6abc: mov al, byte ptr [ebp - 0xa] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff6u))) & 0xffu);
    /* 005c6abf: mov byte ptr [ebp - 0x15], al */ W8((u32)(r_ebp+0xffffffebu), (u8)r_eax);
    /* 005c6ac2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c6ac5: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005c6ac8: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005c6acb: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_005c6ace:; BB(0x005c6ace);
    /* 005c6ace: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c6ad1: cmp eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6ad4: je 0x5c6af6 */ if (fZ) goto L_005c6af6;
L_005c6ad6:; BB(0x005c6ad6);
    /* 005c6ad6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c6ad9: sub ecx, 0x34 */ {  u32 a = r_ecx; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005c6adc: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005c6adf: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c6ae2: sub edx, 0x34 */ {  u32 a = r_edx; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005c6ae5: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005c6ae8: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c6aeb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c6aec: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c6aef: call 0x5c3a20 */ r_esp -= 4; W32(r_esp, 0x5c6af4u); f_005c3a20();
    /* 005c6af4: jmp 0x5c6ace */ goto L_005c6ace;
L_005c6af6:; BB(0x005c6af6);
    /* 005c6af6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c6af9: mov esp, ebp */ r_esp = r_ebp;
    /* 005c6afb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c6afc: ret  */ FN_RET(0x005c6a70); r_esp += 4; return;
}

void f_005c6b00(void) /* sub_5C6B00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c6b00);
    /* 005c6b00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c6b01: mov ebp, esp */ r_ebp = r_esp;
    /* 005c6b03: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c6b05: push 0x6a87e1 */ { u32 v = 0x6a87e1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c6b0a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005c6b10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c6b11: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c6b12: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c6b15: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c6b16: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c6b17: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c6b18: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005c6b1d: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c6b1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c6b20: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005c6b23: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005c6b29: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005c6b2c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c6b2f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005c6b32: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c6b39: jmp 0x5c6b4d */ goto L_005c6b4d;
L_005c6b3b:; BB(0x005c6b3b);
    /* 005c6b3b: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005c6b3e: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005c6b41: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 005c6b44: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005c6b47: add edx, 0x34 */ {  u32 a = r_edx; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c6b4a: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
L_005c6b4d:; BB(0x005c6b4d);
    /* 005c6b4d: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005c6b51: jbe 0x5c6b93 */ if ((fC||fZ)) goto L_005c6b93;
L_005c6b53:; BB(0x005c6b53);
    /* 005c6b53: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c6b56: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005c6b59: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c6b5c: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005c6b5f: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005c6b63: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6b67: je 0x5c6b80 */ if (fZ) goto L_005c6b80;
L_005c6b69:; BB(0x005c6b69);
    /* 005c6b69: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005c6b6c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c6b6d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c6b70: call 0x5c38f0 */ r_esp -= 4; W32(r_esp, 0x5c6b75u); f_005c38f0();
    /* 005c6b75: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005c6b78: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c6b7b: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005c6b7e: jmp 0x5c6b87 */ goto L_005c6b87;
L_005c6b80:; BB(0x005c6b80);
    /* 005c6b80: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005c6b87:; BB(0x005c6b87);
    /* 005c6b87: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005c6b8a: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005c6b8d: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c6b91: jmp 0x5c6b3b */ goto L_005c6b3b;
L_005c6b93:; BB(0x005c6b93);
    /* 005c6b93: jmp 0x5c6bdb */ goto L_005c6bdb;
L_005c6bdb:; BB(0x005c6bdb);
    /* 005c6bdb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005c6be2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c6be5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005c6bec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c6bed: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c6bee: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c6bef: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c6bf0: mov esp, ebp */ r_esp = r_ebp;
    /* 005c6bf2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c6bf3: ret  */ FN_RET(0x005c6b00); r_esp += 4; return;
}

void f_005c6c00(void) /* sub_5C6C00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c6c00);
    /* 005c6c00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c6c01: mov ebp, esp */ r_ebp = r_esp;
    /* 005c6c03: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c6c06: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c6c08: mov byte ptr [ebp - 1], al */ W8((u32)(r_ebp+0xffffffffu), (u8)r_eax);
    /* 005c6c0b: mov cl, byte ptr [ebp - 3] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffdu))) & 0xffu);
    /* 005c6c0e: mov byte ptr [ebp - 2], cl */ W8((u32)(r_ebp+0xfffffffeu), (u8)r_ecx);
    /* 005c6c11: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005c6c14: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005c6c17: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c6c1a: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005c6c1d: mov cl, byte ptr [ebp - 1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
    /* 005c6c20: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c6c21: mov dl, byte ptr [ebp - 2] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffeu))) & 0xffu);
    /* 005c6c24: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c6c25: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005c6c28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c6c29: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005c6c2c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c6c2d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c6c30: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c6c31: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c6c34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c6c35: call 0x5c6c50 */ r_esp -= 4; W32(r_esp, 0x5c6c3au); f_005c6c50();
    /* 005c6c3a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c6c3d: mov esp, ebp */ r_esp = r_ebp;
    /* 005c6c3f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c6c40: ret  */ FN_RET(0x005c6c00); r_esp += 4; return;
}

void f_005c6c50(void) /* sub_5C6C50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c6c50);
    /* 005c6c50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c6c51: mov ebp, esp */ r_ebp = r_esp;
    /* 005c6c53: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c6c55: push 0x6a8811 */ { u32 v = 0x6a8811u; r_esp -= 4; W32(r_esp, v); }
    /* 005c6c5a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005c6c60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c6c61: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c6c62: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c6c65: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c6c66: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c6c67: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c6c68: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005c6c6d: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c6c6f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c6c70: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005c6c73: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005c6c79: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005c6c7c: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005c6c7f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005c6c82: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c6c89: jmp 0x5c6c9d */ goto L_005c6c9d;
L_005c6c8b:; BB(0x005c6c8b);
    /* 005c6c8b: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005c6c8e: add ecx, 0x34 */ {  u32 a = r_ecx; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c6c91: mov dword ptr [ebp + 0x10], ecx */ W32((u32)(r_ebp+0x10u), r_ecx);
    /* 005c6c94: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005c6c97: add edx, 0x34 */ {  u32 a = r_edx; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c6c9a: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
L_005c6c9d:; BB(0x005c6c9d);
    /* 005c6c9d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c6ca0: cmp eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6ca3: je 0x5c6ce5 */ if (fZ) goto L_005c6ce5;
L_005c6ca5:; BB(0x005c6ca5);
    /* 005c6ca5: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005c6ca8: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005c6cab: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c6cae: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 005c6cb1: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005c6cb5: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6cb9: je 0x5c6cd2 */ if (fZ) goto L_005c6cd2;
L_005c6cbb:; BB(0x005c6cbb);
    /* 005c6cbb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c6cbe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c6cbf: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c6cc2: call 0x5c38f0 */ r_esp -= 4; W32(r_esp, 0x5c6cc7u); f_005c38f0();
    /* 005c6cc7: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005c6cca: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c6ccd: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005c6cd0: jmp 0x5c6cd9 */ goto L_005c6cd9;
L_005c6cd2:; BB(0x005c6cd2);
    /* 005c6cd2: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005c6cd9:; BB(0x005c6cd9);
    /* 005c6cd9: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005c6cdc: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005c6cdf: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c6ce3: jmp 0x5c6c8b */ goto L_005c6c8b;
L_005c6ce5:; BB(0x005c6ce5);
    /* 005c6ce5: jmp 0x5c6d2d */ goto L_005c6d2d;
L_005c6d2d:; BB(0x005c6d2d);
    /* 005c6d2d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005c6d34: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005c6d37: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c6d3a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005c6d41: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c6d42: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c6d43: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c6d44: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c6d45: mov esp, ebp */ r_esp = r_ebp;
    /* 005c6d47: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c6d48: ret  */ FN_RET(0x005c6c50); r_esp += 4; return;
}

void f_005c6d50(void) /* sub_5C6D50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c6d50);
    /* 005c6d50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c6d51: mov ebp, esp */ r_ebp = r_esp;
    /* 005c6d53: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c6d55: push 0x6a883b */ { u32 v = 0x6a883bu; r_esp -= 4; W32(r_esp, v); }
    /* 005c6d5a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005c6d60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c6d61: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c6d64: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005c6d69: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c6d6b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c6d6c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005c6d6f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005c6d75: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005c6d7c: jmp 0x5c6d87 */ goto L_005c6d87;
L_005c6d7e:; BB(0x005c6d7e);
    /* 005c6d7e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c6d81: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c6d84: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_005c6d87:; BB(0x005c6d87);
    /* 005c6d87: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c6d8a: imul ecx, ecx, 0xfc */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xfcu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c6d90: cmp dword ptr [ecx + 0x75a1a0], 0 */ {  u32 a = R32((u32)(r_ecx+0x75a1a0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6d97: je 0x5c6e0c */ if (fZ) goto L_005c6e0c;
L_005c6d99:; BB(0x005c6d99);
    /* 005c6d99: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c6d9c: imul edx, edx, 0xfc */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xfcu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c6da2: mov eax, dword ptr [edx + 0x75a1a0] */ r_eax = R32((u32)(r_edx+0x75a1a0u));
    /* 005c6da8: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6dab: jne 0x5c6e07 */ if (!fZ) goto L_005c6e07;
L_005c6dad:; BB(0x005c6dad);
    /* 005c6dad: push 0x74 */ { u32 v = 0x74u; r_esp -= 4; W32(r_esp, v); }
    /* 005c6daf: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5c6db4u); f_00686d82();
    /* 005c6db4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c6db7: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005c6dba: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c6dc1: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6dc5: je 0x5c6dd4 */ if (fZ) goto L_005c6dd4;
L_005c6dc7:; BB(0x005c6dc7);
    /* 005c6dc7: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c6dca: call 0x5c6e20 */ r_esp -= 4; W32(r_esp, 0x5c6dcfu); f_005c6e20();
    /* 005c6dcf: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005c6dd2: jmp 0x5c6ddb */ goto L_005c6ddb;
L_005c6dd4:; BB(0x005c6dd4);
    /* 005c6dd4: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_005c6ddb:; BB(0x005c6ddb);
    /* 005c6ddb: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c6dde: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005c6de1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005c6de8: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c6deb: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005c6dee: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c6df1: imul eax, eax, 0xfc */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xfcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c6df7: add eax, 0x75a1a0 */ {  u32 a = r_eax; u32 b = 0x75a1a0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c6dfc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c6dff: mov dword ptr [ecx + 0x50], eax */ W32((u32)(r_ecx+0x50u), r_eax);
    /* 005c6e02: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005c6e05: jmp 0x5c6e0e */ goto L_005c6e0e;
L_005c6e07:; BB(0x005c6e07);
    /* 005c6e07: jmp 0x5c6d7e */ goto L_005c6d7e;
L_005c6e0c:; BB(0x005c6e0c);
    /* 005c6e0c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005c6e0e:; BB(0x005c6e0e);
    /* 005c6e0e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c6e11: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005c6e18: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c6e19: mov esp, ebp */ r_esp = r_ebp;
    /* 005c6e1b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c6e1c: ret  */ FN_RET(0x005c6d50); r_esp += 4; return;
}

