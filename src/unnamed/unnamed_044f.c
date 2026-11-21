#include "protos.h"

void f_0044f240(void) /* sub_44F240 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044f240);
    /* 0044f240: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044f241: mov ebp, esp */ r_ebp = r_esp;
    /* 0044f243: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044f246: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0044f247: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0044f24a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044f251: jmp 0x44f25c */ goto L_0044f25c;
L_0044f253:; BB(0x0044f253);
    /* 0044f253: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f256: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044f259: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0044f25c:; BB(0x0044f25c);
    /* 0044f25c: cmp dword ptr [ebp - 4], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044f260: jge 0x44f374 */ if ((fS==fO)) goto L_0044f374;
L_0044f266:; BB(0x0044f266);
    /* 0044f266: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f269: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044f26c: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0044f271: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044f272: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044f275: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x44f27au); f_0044f680();
    /* 0044f27a: imul eax, eax, 0x2c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x2cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044f27d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044f280: lea edx, [ecx + eax + 0x18] */ r_edx = (u32)(r_ecx+r_eax+0x18u);
    /* 0044f284: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0044f287: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0044f28a: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0044f28c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0044f28f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044f292: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 0044f294: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f297: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044f29a: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0044f29f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044f2a0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044f2a3: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x44f2a8u); f_0044f680();
    /* 0044f2a8: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044f2ab: jne 0x44f335 */ if (!fZ) goto L_0044f335;
L_0044f2b1:; BB(0x0044f2b1);
    /* 0044f2b1: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044f2b4: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 0044f2b7: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0044f2ba: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044f2bd: mov dword ptr [edx + 0x44], ecx */ W32((u32)(r_edx+0x44u), r_ecx);
    /* 0044f2c0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f2c3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044f2c6: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0044f2cb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044f2cc: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044f2cf: call 0x44f6c0 */ r_esp -= 4; W32(r_esp, 0x44f2d4u); f_0044f6c0();
    /* 0044f2d4: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044f2d7: jne 0x44f2f2 */ if (!fZ) goto L_0044f2f2;
L_0044f2d9:; BB(0x0044f2d9);
    /* 0044f2d9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044f2dc: mov dword ptr [eax + 0x58], 1 */ W32((u32)(r_eax+0x58u), 0x1u);
    /* 0044f2e3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044f2e6: mov dword ptr [ecx + 0x294], 1 */ W32((u32)(r_ecx+0x294u), 0x1u);
    /* 0044f2f0: jmp 0x44f333 */ goto L_0044f333;
L_0044f2f2:; BB(0x0044f2f2);
    /* 0044f2f2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f2f5: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044f2f8: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 0044f2fd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044f2fe: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044f301: call 0x44f6c0 */ r_esp -= 4; W32(r_esp, 0x44f306u); f_0044f6c0();
    /* 0044f306: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044f309: mov dword ptr [edx + eax*4 + 0x48], 1 */ W32((u32)(r_edx+r_eax*4+0x48u), 0x1u);
    /* 0044f311: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f314: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044f317: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0044f31c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044f31d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044f320: call 0x44f6c0 */ r_esp -= 4; W32(r_esp, 0x44f325u); f_0044f6c0();
    /* 0044f325: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044f328: mov dword ptr [ecx + eax*4 + 0x284], 1 */ W32((u32)(r_ecx+r_eax*4+0x284u), 0x1u);
L_0044f333:; BB(0x0044f333);
    /* 0044f333: jmp 0x44f36f */ goto L_0044f36f;
L_0044f335:; BB(0x0044f335);
    /* 0044f335: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f338: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044f33b: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 0044f340: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044f341: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044f344: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x44f349u); f_0044f680();
    /* 0044f349: imul eax, eax, 0x2c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x2cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044f34c: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044f34f: lea esi, [edx + eax + 0x18] */ r_esi = (u32)(r_edx+r_eax+0x18u);
    /* 0044f353: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f356: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044f359: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0044f35e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044f35f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044f362: call 0x44f6c0 */ r_esp -= 4; W32(r_esp, 0x44f367u); f_0044f6c0();
    /* 0044f367: mov dword ptr [esi + eax*4 + 4], 1 */ W32((u32)(r_esi+r_eax*4+0x4u), 0x1u);
L_0044f36f:; BB(0x0044f36f);
    /* 0044f36f: jmp 0x44f253 */ goto L_0044f253;
L_0044f374:; BB(0x0044f374);
    /* 0044f374: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0044f37b: jmp 0x44f386 */ goto L_0044f386;
L_0044f37d:; BB(0x0044f37d);
    /* 0044f37d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f380: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044f383: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0044f386:; BB(0x0044f386);
    /* 0044f386: cmp dword ptr [ebp - 4], 0xf */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044f38a: jge 0x44f44c */ if ((fS==fO)) goto L_0044f44c;
L_0044f390:; BB(0x0044f390);
    /* 0044f390: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f393: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044f394: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044f397: call 0x44f700 */ r_esp -= 4; W32(r_esp, 0x44f39cu); f_0044f700();
    /* 0044f39c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044f39e: je 0x44f447 */ if (fZ) goto L_0044f447;
L_0044f3a4:; BB(0x0044f3a4);
    /* 0044f3a4: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0044f3ab: jmp 0x44f3b6 */ goto L_0044f3b6;
L_0044f3ad:; BB(0x0044f3ad);
    /* 0044f3ad: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044f3b0: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0044f3b3: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_0044f3b6:; BB(0x0044f3b6);
    /* 0044f3b6: cmp dword ptr [ebp - 0xc], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044f3ba: jge 0x44f447 */ if ((fS==fO)) goto L_0044f447;
L_0044f3c0:; BB(0x0044f3c0);
    /* 0044f3c0: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044f3c3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044f3c6: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0044f3cb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044f3cc: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044f3cf: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x44f3d4u); f_0044f680();
    /* 0044f3d4: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044f3d7: je 0x44f3f8 */ if (fZ) goto L_0044f3f8;
L_0044f3d9:; BB(0x0044f3d9);
    /* 0044f3d9: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044f3dc: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044f3df: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0044f3e4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044f3e5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044f3e8: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x44f3edu); f_0044f680();
    /* 0044f3ed: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044f3f0: jne 0x44f442 */ if (!fZ) goto L_0044f442;
L_0044f3f2:; BB(0x0044f3f2);
    /* 0044f3f2: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044f3f6: jne 0x44f442 */ if (!fZ) goto L_0044f442;
L_0044f3f8:; BB(0x0044f3f8);
    /* 0044f3f8: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0044f3ff: jmp 0x44f40a */ goto L_0044f40a;
L_0044f401:; BB(0x0044f401);
    /* 0044f401: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044f404: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044f407: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0044f40a:; BB(0x0044f40a);
    /* 0044f40a: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044f40e: jge 0x44f442 */ if ((fS==fO)) goto L_0044f442;
L_0044f410:; BB(0x0044f410);
    /* 0044f410: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f413: imul ecx, ecx, 0x2c */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x2cu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044f416: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044f419: lea eax, [edx + ecx + 0x18] */ r_eax = (u32)(r_edx+r_ecx+0x18u);
    /* 0044f41d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044f420: cmp dword ptr [eax + ecx*4 + 0x18], -1 */ {  u32 a = R32((u32)(r_eax+r_ecx*4+0x18u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044f425: jne 0x44f440 */ if (!fZ) goto L_0044f440;
L_0044f427:; BB(0x0044f427);
    /* 0044f427: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f42a: imul edx, edx, 0x2c */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x2cu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044f42d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044f430: lea ecx, [eax + edx + 0x18] */ r_ecx = (u32)(r_eax+r_edx+0x18u);
    /* 0044f434: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044f437: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044f43a: mov dword ptr [ecx + edx*4 + 0x18], eax */ W32((u32)(r_ecx+r_edx*4+0x18u), r_eax);
    /* 0044f43e: jmp 0x44f442 */ goto L_0044f442;
L_0044f440:; BB(0x0044f440);
    /* 0044f440: jmp 0x44f401 */ goto L_0044f401;
L_0044f442:; BB(0x0044f442);
    /* 0044f442: jmp 0x44f3ad */ goto L_0044f3ad;
L_0044f447:; BB(0x0044f447);
    /* 0044f447: jmp 0x44f37d */ goto L_0044f37d;
L_0044f44c:; BB(0x0044f44c);
    /* 0044f44c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0044f44d: mov esp, ebp */ r_esp = r_ebp;
    /* 0044f44f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044f450: ret  */ FN_RET(0x0044f240); r_esp += 4; return;
}

void f_0044f460(void) /* sub_44F460 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044f460);
    /* 0044f460: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044f461: mov ebp, esp */ r_ebp = r_esp;
    /* 0044f463: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044f466: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044f469: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0044f46b: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0044f46d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f470: call 0x44f750 */ r_esp -= 4; W32(r_esp, 0x44f475u); f_0044f750();
    /* 0044f475: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f478: mov byte ptr [ecx + 0x2be], al */ W8((u32)(r_ecx+0x2beu), (u8)r_eax);
    /* 0044f47e: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0044f480: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f483: call 0x44f700 */ r_esp -= 4; W32(r_esp, 0x44f488u); f_0044f700();
    /* 0044f488: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044f48a: je 0x44f4b2 */ if (fZ) goto L_0044f4b2;
L_0044f48c:; BB(0x0044f48c);
    /* 0044f48c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f48f: movzx eax, byte ptr [edx + 0x2be] */ r_eax = (u32)R8((u32)(r_edx+0x2beu));
    /* 0044f496: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044f498: je 0x44f4a9 */ if (fZ) goto L_0044f4a9;
L_0044f49a:; BB(0x0044f49a);
    /* 0044f49a: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0044f49c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f49f: call 0x44f700 */ r_esp -= 4; W32(r_esp, 0x44f4a4u); f_0044f700();
    /* 0044f4a4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044f4a7: jle 0x44f4b2 */ if ((fZ||fS!=fO)) goto L_0044f4b2;
L_0044f4a9:; BB(0x0044f4a9);
    /* 0044f4a9: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 0044f4b0: jmp 0x44f4b9 */ goto L_0044f4b9;
L_0044f4b2:; BB(0x0044f4b2);
    /* 0044f4b2: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_0044f4b9:; BB(0x0044f4b9);
    /* 0044f4b9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f4bc: mov dl, byte ptr [ebp - 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0044f4bf: mov byte ptr [ecx + 0x2bf], dl */ W8((u32)(r_ecx+0x2bfu), (u8)r_edx);
    /* 0044f4c5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f4c8: call 0x44f910 */ r_esp -= 4; W32(r_esp, 0x44f4cdu); f_0044f910();
    /* 0044f4cd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f4d0: mov byte ptr [ecx + 0x2c0], al */ W8((u32)(r_ecx+0x2c0u), (u8)r_eax);
    /* 0044f4d6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f4d9: call 0x44fa20 */ r_esp -= 4; W32(r_esp, 0x44f4deu); f_0044fa20();
    /* 0044f4de: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f4e1: mov byte ptr [edx + 0x2c1], al */ W8((u32)(r_edx+0x2c1u), (u8)r_eax);
    /* 0044f4e7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f4ea: movzx ecx, byte ptr [eax + 0x2c0] */ r_ecx = (u32)R8((u32)(r_eax+0x2c0u));
    /* 0044f4f1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044f4f3: jne 0x44f50c */ if (!fZ) goto L_0044f50c;
L_0044f4f5:; BB(0x0044f4f5);
    /* 0044f4f5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f4f8: movzx eax, byte ptr [edx + 0x2c1] */ r_eax = (u32)R8((u32)(r_edx+0x2c1u));
    /* 0044f4ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044f501: jne 0x44f50c */ if (!fZ) goto L_0044f50c;
L_0044f503:; BB(0x0044f503);
    /* 0044f503: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0044f50a: jmp 0x44f513 */ goto L_0044f513;
L_0044f50c:; BB(0x0044f50c);
    /* 0044f50c: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
L_0044f513:; BB(0x0044f513);
    /* 0044f513: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f516: mov dl, byte ptr [ebp - 0xc] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff4u))) & 0xffu);
    /* 0044f519: mov byte ptr [ecx + 0x2c2], dl */ W8((u32)(r_ecx+0x2c2u), (u8)r_edx);
    /* 0044f51f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f522: call 0x44fb20 */ r_esp -= 4; W32(r_esp, 0x44f527u); f_0044fb20();
    /* 0044f527: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f52a: mov byte ptr [ecx + 0x2c3], al */ W8((u32)(r_ecx+0x2c3u), (u8)r_eax);
    /* 0044f530: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f533: call 0x44fe60 */ r_esp -= 4; W32(r_esp, 0x44f538u); f_0044fe60();
    /* 0044f538: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f53b: mov byte ptr [edx + 0x2c4], al */ W8((u32)(r_edx+0x2c4u), (u8)r_eax);
    /* 0044f541: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f544: movzx ecx, byte ptr [eax + 0x2c3] */ r_ecx = (u32)R8((u32)(r_eax+0x2c3u));
    /* 0044f54b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044f54d: jne 0x44f566 */ if (!fZ) goto L_0044f566;
L_0044f54f:; BB(0x0044f54f);
    /* 0044f54f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f552: movzx eax, byte ptr [edx + 0x2c4] */ r_eax = (u32)R8((u32)(r_edx+0x2c4u));
    /* 0044f559: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044f55b: jne 0x44f566 */ if (!fZ) goto L_0044f566;
L_0044f55d:; BB(0x0044f55d);
    /* 0044f55d: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0044f564: jmp 0x44f56d */ goto L_0044f56d;
L_0044f566:; BB(0x0044f566);
    /* 0044f566: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
L_0044f56d:; BB(0x0044f56d);
    /* 0044f56d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f570: mov dl, byte ptr [ebp - 0x10] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff0u))) & 0xffu);
    /* 0044f573: mov byte ptr [ecx + 0x2c5], dl */ W8((u32)(r_ecx+0x2c5u), (u8)r_edx);
    /* 0044f579: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f57c: call 0x4502f0 */ r_esp -= 4; W32(r_esp, 0x44f581u); f_004502f0();
    /* 0044f581: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f584: mov byte ptr [ecx + 0x2c6], al */ W8((u32)(r_ecx+0x2c6u), (u8)r_eax);
    /* 0044f58a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f58d: call 0x450680 */ r_esp -= 4; W32(r_esp, 0x44f592u); f_00450680();
    /* 0044f592: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f595: mov byte ptr [edx + 0x2c7], al */ W8((u32)(r_edx+0x2c7u), (u8)r_eax);
    /* 0044f59b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f59e: movzx ecx, byte ptr [eax + 0x2c6] */ r_ecx = (u32)R8((u32)(r_eax+0x2c6u));
    /* 0044f5a5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044f5a7: jne 0x44f5c0 */ if (!fZ) goto L_0044f5c0;
L_0044f5a9:; BB(0x0044f5a9);
    /* 0044f5a9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f5ac: movzx eax, byte ptr [edx + 0x2c7] */ r_eax = (u32)R8((u32)(r_edx+0x2c7u));
    /* 0044f5b3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044f5b5: jne 0x44f5c0 */ if (!fZ) goto L_0044f5c0;
L_0044f5b7:; BB(0x0044f5b7);
    /* 0044f5b7: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0044f5be: jmp 0x44f5c7 */ goto L_0044f5c7;
L_0044f5c0:; BB(0x0044f5c0);
    /* 0044f5c0: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
L_0044f5c7:; BB(0x0044f5c7);
    /* 0044f5c7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f5ca: mov dl, byte ptr [ebp - 0x14] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffecu))) & 0xffu);
    /* 0044f5cd: mov byte ptr [ecx + 0x2c8], dl */ W8((u32)(r_ecx+0x2c8u), (u8)r_edx);
    /* 0044f5d3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044f5d5: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0044f5d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f5da: call 0x450b60 */ r_esp -= 4; W32(r_esp, 0x44f5dfu); f_00450b60();
    /* 0044f5df: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044f5e1: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0044f5e4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f5e7: mov byte ptr [ecx + 0x2c9], al */ W8((u32)(r_ecx+0x2c9u), (u8)r_eax);
    /* 0044f5ed: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044f5ef: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0044f5f1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f5f4: call 0x450b60 */ r_esp -= 4; W32(r_esp, 0x44f5f9u); f_00450b60();
    /* 0044f5f9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044f5fb: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0044f5fe: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f601: mov byte ptr [eax + 0x2ca], dl */ W8((u32)(r_eax+0x2cau), (u8)r_edx);
    /* 0044f607: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0044f609: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0044f60b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f60e: call 0x450b60 */ r_esp -= 4; W32(r_esp, 0x44f613u); f_00450b60();
    /* 0044f613: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044f615: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0044f618: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f61b: mov byte ptr [edx + 0x2cb], cl */ W8((u32)(r_edx+0x2cbu), (u8)r_ecx);
    /* 0044f621: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0044f623: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0044f625: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f628: call 0x450b60 */ r_esp -= 4; W32(r_esp, 0x44f62du); f_00450b60();
    /* 0044f62d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044f62f: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0044f632: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f635: mov byte ptr [ecx + 0x2cc], al */ W8((u32)(r_ecx+0x2ccu), (u8)r_eax);
    /* 0044f63b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0044f63d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0044f63f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f642: call 0x450b60 */ r_esp -= 4; W32(r_esp, 0x44f647u); f_00450b60();
    /* 0044f647: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044f649: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0044f64c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f64f: mov byte ptr [eax + 0x2cd], dl */ W8((u32)(r_eax+0x2cdu), (u8)r_edx);
    /* 0044f655: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044f657: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0044f659: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f65c: call 0x450b60 */ r_esp -= 4; W32(r_esp, 0x44f661u); f_00450b60();
    /* 0044f661: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044f663: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0044f666: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f669: mov byte ptr [edx + 0x2ce], cl */ W8((u32)(r_edx+0x2ceu), (u8)r_ecx);
    /* 0044f66f: mov esp, ebp */ r_esp = r_ebp;
    /* 0044f671: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044f672: ret  */ FN_RET(0x0044f460); r_esp += 4; return;
}

void f_0044f680(void) /* sub_44F680 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044f680);
    /* 0044f680: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044f681: mov ebp, esp */ r_ebp = r_esp;
    /* 0044f683: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044f684: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044f687: mov ax, word ptr [ebp + 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 0044f68b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044f68c: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x44f691u); f_00641280();
    /* 0044f691: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044f694: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044f697: jne 0x44f6a0 */ if (!fZ) goto L_0044f6a0;
L_0044f699:; BB(0x0044f699);
    /* 0044f699: mov eax, 0xe */ r_eax = 0xeu;
    /* 0044f69e: jmp 0x44f6ad */ goto L_0044f6ad;
L_0044f6a0:; BB(0x0044f6a0);
    /* 0044f6a0: mov cx, word ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 0044f6a4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044f6a5: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x44f6aau); f_00641280();
    /* 0044f6aa: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0044f6ad:; BB(0x0044f6ad);
    /* 0044f6ad: mov esp, ebp */ r_esp = r_ebp;
    /* 0044f6af: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044f6b0: ret 4 */ FN_RET(0x0044f680); r_esp += 8; return;
}

void f_0044f6c0(void) /* sub_44F6C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044f6c0);
    /* 0044f6c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044f6c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0044f6c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044f6c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044f6c7: mov ax, word ptr [ebp + 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 0044f6cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044f6cc: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x44f6d1u); f_00641290();
    /* 0044f6d1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044f6d4: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044f6d7: jne 0x44f6de */ if (!fZ) goto L_0044f6de;
L_0044f6d9:; BB(0x0044f6d9);
    /* 0044f6d9: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0044f6dc: jmp 0x44f6ee */ goto L_0044f6ee;
L_0044f6de:; BB(0x0044f6de);
    /* 0044f6de: mov cx, word ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 0044f6e2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044f6e3: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x44f6e8u); f_00641290();
    /* 0044f6e8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044f6eb: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
L_0044f6ee:; BB(0x0044f6ee);
    /* 0044f6ee: mov esp, ebp */ r_esp = r_ebp;
    /* 0044f6f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044f6f1: ret 4 */ FN_RET(0x0044f6c0); r_esp += 8; return;
}

void f_0044f910(void) /* sub_44F910 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044f910);
    /* 0044f910: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044f911: mov ebp, esp */ r_ebp = r_esp;
    /* 0044f913: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044f914: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044f917: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f91a: movsx ecx, word ptr [eax + 0x2b6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x2b6u));
    /* 0044f921: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044f924: jge 0x44f957 */ if ((fS==fO)) goto L_0044f957;
L_0044f926:; BB(0x0044f926);
    /* 0044f926: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f929: movsx eax, word ptr [edx + 0x2b8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x2b8u));
    /* 0044f930: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044f933: jge 0x44f957 */ if ((fS==fO)) goto L_0044f957;
L_0044f935:; BB(0x0044f935);
    /* 0044f935: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f938: movsx edx, word ptr [ecx + 0x2bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x2bcu));
    /* 0044f93f: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044f942: jge 0x44f957 */ if ((fS==fO)) goto L_0044f957;
L_0044f944:; BB(0x0044f944);
    /* 0044f944: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f947: movsx ecx, word ptr [eax + 0x2ba] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x2bau));
    /* 0044f94e: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044f951: jl 0x44fa17 */ if ((fS!=fO)) goto L_0044fa17;
L_0044f957:; BB(0x0044f957);
    /* 0044f957: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f95a: movsx eax, word ptr [edx + 0x2b6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x2b6u));
    /* 0044f961: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044f964: jl 0x44f986 */ if ((fS!=fO)) goto L_0044f986;
L_0044f966:; BB(0x0044f966);
    /* 0044f966: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f969: mov dword ptr [ecx + 0x2d0], 3 */ W32((u32)(r_ecx+0x2d0u), 0x3u);
    /* 0044f973: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f976: movsx eax, word ptr [edx + 0x2b6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x2b6u));
    /* 0044f97d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f980: mov dword ptr [ecx + 0x2d4], eax */ W32((u32)(r_ecx+0x2d4u), r_eax);
L_0044f986:; BB(0x0044f986);
    /* 0044f986: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f989: movsx eax, word ptr [edx + 0x2b8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x2b8u));
    /* 0044f990: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044f993: jl 0x44f9b5 */ if ((fS!=fO)) goto L_0044f9b5;
L_0044f995:; BB(0x0044f995);
    /* 0044f995: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f998: mov dword ptr [ecx + 0x2d0], 0 */ W32((u32)(r_ecx+0x2d0u), 0x0u);
    /* 0044f9a2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f9a5: movsx eax, word ptr [edx + 0x2b8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x2b8u));
    /* 0044f9ac: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f9af: mov dword ptr [ecx + 0x2d4], eax */ W32((u32)(r_ecx+0x2d4u), r_eax);
L_0044f9b5:; BB(0x0044f9b5);
    /* 0044f9b5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f9b8: movsx eax, word ptr [edx + 0x2bc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x2bcu));
    /* 0044f9bf: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044f9c2: jl 0x44f9e4 */ if ((fS!=fO)) goto L_0044f9e4;
L_0044f9c4:; BB(0x0044f9c4);
    /* 0044f9c4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f9c7: mov dword ptr [ecx + 0x2d0], 1 */ W32((u32)(r_ecx+0x2d0u), 0x1u);
    /* 0044f9d1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f9d4: movsx eax, word ptr [edx + 0x2bc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x2bcu));
    /* 0044f9db: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f9de: mov dword ptr [ecx + 0x2d4], eax */ W32((u32)(r_ecx+0x2d4u), r_eax);
L_0044f9e4:; BB(0x0044f9e4);
    /* 0044f9e4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f9e7: movsx eax, word ptr [edx + 0x2ba] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x2bau));
    /* 0044f9ee: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044f9f1: jl 0x44fa13 */ if ((fS!=fO)) goto L_0044fa13;
L_0044f9f3:; BB(0x0044f9f3);
    /* 0044f9f3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f9f6: mov dword ptr [ecx + 0x2d0], 2 */ W32((u32)(r_ecx+0x2d0u), 0x2u);
    /* 0044fa00: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044fa03: movsx eax, word ptr [edx + 0x2ba] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x2bau));
    /* 0044fa0a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044fa0d: mov dword ptr [ecx + 0x2d4], eax */ W32((u32)(r_ecx+0x2d4u), r_eax);
L_0044fa13:; BB(0x0044fa13);
    /* 0044fa13: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0044fa15: jmp 0x44fa19 */ goto L_0044fa19;
L_0044fa17:; BB(0x0044fa17);
    /* 0044fa17: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0044fa19:; BB(0x0044fa19);
    /* 0044fa19: mov esp, ebp */ r_esp = r_ebp;
    /* 0044fa1b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044fa1c: ret  */ FN_RET(0x0044f910); r_esp += 4; return;
}

void f_0044fa20(void) /* sub_44FA20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044fa20);
    /* 0044fa20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044fa21: mov ebp, esp */ r_ebp = r_esp;
    /* 0044fa23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044fa24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044fa27: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044fa2a: movzx ecx, byte ptr [eax + 0x2be] */ r_ecx = (u32)R8((u32)(r_eax+0x2beu));
    /* 0044fa31: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044fa33: je 0x44fa43 */ if (fZ) goto L_0044fa43;
L_0044fa35:; BB(0x0044fa35);
    /* 0044fa35: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044fa38: movzx eax, byte ptr [edx + 0x2c0] */ r_eax = (u32)R8((u32)(r_edx+0x2c0u));
    /* 0044fa3f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044fa41: je 0x44fa4a */ if (fZ) goto L_0044fa4a;
L_0044fa43:; BB(0x0044fa43);
    /* 0044fa43: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0044fa45: jmp 0x44fb0d */ goto L_0044fb0d;
L_0044fa4a:; BB(0x0044fa4a);
    /* 0044fa4a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044fa4d: movsx edx, word ptr [ecx + 0x2b6] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x2b6u));
    /* 0044fa54: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044fa57: je 0x44fa8a */ if (fZ) goto L_0044fa8a;
L_0044fa59:; BB(0x0044fa59);
    /* 0044fa59: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044fa5c: movsx ecx, word ptr [eax + 0x2b8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x2b8u));
    /* 0044fa63: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044fa66: je 0x44fa8a */ if (fZ) goto L_0044fa8a;
L_0044fa68:; BB(0x0044fa68);
    /* 0044fa68: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044fa6b: movsx eax, word ptr [edx + 0x2bc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x2bcu));
    /* 0044fa72: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044fa75: je 0x44fa8a */ if (fZ) goto L_0044fa8a;
L_0044fa77:; BB(0x0044fa77);
    /* 0044fa77: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044fa7a: movsx edx, word ptr [ecx + 0x2ba] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x2bau));
    /* 0044fa81: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044fa84: jne 0x44fb0b */ if (!fZ) goto L_0044fb0b;
L_0044fa8a:; BB(0x0044fa8a);
    /* 0044fa8a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044fa8d: movsx ecx, word ptr [eax + 0x2b6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x2b6u));
    /* 0044fa94: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044fa97: jne 0x44faa6 */ if (!fZ) goto L_0044faa6;
L_0044fa99:; BB(0x0044fa99);
    /* 0044fa99: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044fa9c: mov dword ptr [edx + 0x2d0], 3 */ W32((u32)(r_edx+0x2d0u), 0x3u);
L_0044faa6:; BB(0x0044faa6);
    /* 0044faa6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044faa9: movsx ecx, word ptr [eax + 0x2b8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x2b8u));
    /* 0044fab0: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044fab3: jne 0x44fac2 */ if (!fZ) goto L_0044fac2;
L_0044fab5:; BB(0x0044fab5);
    /* 0044fab5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044fab8: mov dword ptr [edx + 0x2d0], 0 */ W32((u32)(r_edx+0x2d0u), 0x0u);
L_0044fac2:; BB(0x0044fac2);
    /* 0044fac2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044fac5: movsx ecx, word ptr [eax + 0x2bc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x2bcu));
    /* 0044facc: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044facf: jne 0x44fade */ if (!fZ) goto L_0044fade;
L_0044fad1:; BB(0x0044fad1);
    /* 0044fad1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044fad4: mov dword ptr [edx + 0x2d0], 1 */ W32((u32)(r_edx+0x2d0u), 0x1u);
L_0044fade:; BB(0x0044fade);
    /* 0044fade: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044fae1: movsx ecx, word ptr [eax + 0x2ba] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x2bau));
    /* 0044fae8: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044faeb: jne 0x44fafa */ if (!fZ) goto L_0044fafa;
L_0044faed:; BB(0x0044faed);
    /* 0044faed: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044faf0: mov dword ptr [edx + 0x2d0], 2 */ W32((u32)(r_edx+0x2d0u), 0x2u);
L_0044fafa:; BB(0x0044fafa);
    /* 0044fafa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044fafd: mov dword ptr [eax + 0x2d4], 4 */ W32((u32)(r_eax+0x2d4u), 0x4u);
    /* 0044fb07: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0044fb09: jmp 0x44fb0d */ goto L_0044fb0d;
L_0044fb0b:; BB(0x0044fb0b);
    /* 0044fb0b: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0044fb0d:; BB(0x0044fb0d);
    /* 0044fb0d: mov esp, ebp */ r_esp = r_ebp;
    /* 0044fb0f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044fb10: ret  */ FN_RET(0x0044fa20); r_esp += 4; return;
}

void f_0044fb20(void) /* sub_44FB20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044fb20);
    /* 0044fb20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044fb21: mov ebp, esp */ r_ebp = r_esp;
    /* 0044fb23: sub esp, 0x2b0 */ {  u32 a = r_esp; u32 b = 0x2b0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044fb29: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0044fb2a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0044fb2b: mov dword ptr [ebp - 0x2b0], ecx */ W32((u32)(r_ebp+0xfffffd50u), r_ecx);
    /* 0044fb31: mov dword ptr [ebp - 0x2a4], 0 */ W32((u32)(r_ebp+0xfffffd5cu), 0x0u);
    /* 0044fb3b: mov dword ptr [ebp - 0x2a8], 0 */ W32((u32)(r_ebp+0xfffffd58u), 0x0u);
    /* 0044fb45: mov dword ptr [ebp - 0x2ac], 0 */ W32((u32)(r_ebp+0xfffffd54u), 0x0u);
    /* 0044fb4f: mov dword ptr [ebp - 0x2a0], 0 */ W32((u32)(r_ebp+0xfffffd60u), 0x0u);
    /* 0044fb59: mov dword ptr [ebp - 0x29c], 0 */ W32((u32)(r_ebp+0xfffffd64u), 0x0u);
    /* 0044fb63: jmp 0x44fb74 */ goto L_0044fb74;
L_0044fb65:; BB(0x0044fb65);
    /* 0044fb65: mov eax, dword ptr [ebp - 0x29c] */ r_eax = R32((u32)(r_ebp+0xfffffd64u));
    /* 0044fb6b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044fb6e: mov dword ptr [ebp - 0x29c], eax */ W32((u32)(r_ebp+0xfffffd64u), r_eax);
L_0044fb74:; BB(0x0044fb74);
    /* 0044fb74: cmp dword ptr [ebp - 0x29c], 0xf */ {  u32 a = R32((u32)(r_ebp+0xfffffd64u)); u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044fb7b: jge 0x44fba9 */ if ((fS==fO)) goto L_0044fba9;
L_0044fb7d:; BB(0x0044fb7d);
    /* 0044fb7d: mov ecx, dword ptr [ebp - 0x29c] */ r_ecx = R32((u32)(r_ebp+0xfffffd64u));
    /* 0044fb83: imul ecx, ecx, 0x2c */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x2cu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044fb86: mov edx, dword ptr [ebp - 0x2b0] */ r_edx = R32((u32)(r_ebp+0xfffffd50u));
    /* 0044fb8c: lea esi, [edx + ecx + 0x18] */ r_esi = (u32)(r_edx+r_ecx+0x18u);
    /* 0044fb90: mov eax, dword ptr [ebp - 0x29c] */ r_eax = R32((u32)(r_ebp+0xfffffd64u));
    /* 0044fb96: imul eax, eax, 0x2c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x2cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044fb99: lea edi, [ebp + eax - 0x298] */ r_edi = (u32)(r_ebp+r_eax+0xfffffd68u);
    /* 0044fba0: mov ecx, 0xb */ r_ecx = 0xbu;
    /* 0044fba5: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0044fba7: jmp 0x44fb65 */ goto L_0044fb65;
L_0044fba9:; BB(0x0044fba9);
    /* 0044fba9: mov ecx, dword ptr [ebp - 0x2b0] */ r_ecx = R32((u32)(r_ebp+0xfffffd50u));
    /* 0044fbaf: movzx edx, byte ptr [ecx + 0x2be] */ r_edx = (u32)R8((u32)(r_ecx+0x2beu));
    /* 0044fbb6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044fbb8: je 0x44fbd2 */ if (fZ) goto L_0044fbd2;
L_0044fbba:; BB(0x0044fbba);
    /* 0044fbba: mov eax, dword ptr [ebp - 0x26c] */ r_eax = R32((u32)(r_ebp+0xfffffd94u));
    /* 0044fbc0: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0044fbc3: mov dword ptr [ebp - 0x26c], eax */ W32((u32)(r_ebp+0xfffffd94u), r_eax);
    /* 0044fbc9: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0044fbcc: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0044fbcf: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
L_0044fbd2:; BB(0x0044fbd2);
    /* 0044fbd2: mov dword ptr [ebp - 0x29c], 1 */ W32((u32)(r_ebp+0xfffffd64u), 0x1u);
    /* 0044fbdc: jmp 0x44fbed */ goto L_0044fbed;
L_0044fbde:; BB(0x0044fbde);
    /* 0044fbde: mov edx, dword ptr [ebp - 0x29c] */ r_edx = R32((u32)(r_ebp+0xfffffd64u));
    /* 0044fbe4: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0044fbe7: mov dword ptr [ebp - 0x29c], edx */ W32((u32)(r_ebp+0xfffffd64u), r_edx);
L_0044fbed:; BB(0x0044fbed);
    /* 0044fbed: cmp dword ptr [ebp - 0x29c], 0xf */ {  u32 a = R32((u32)(r_ebp+0xfffffd64u)); u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044fbf4: jge 0x44fc69 */ if ((fS==fO)) goto L_0044fc69;
L_0044fbf6:; BB(0x0044fbf6);
    /* 0044fbf6: mov eax, dword ptr [ebp - 0x29c] */ r_eax = R32((u32)(r_ebp+0xfffffd64u));
    /* 0044fbfc: imul eax, eax, 0x2c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x2cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044fbff: cmp dword ptr [ebp + eax - 0x298], 0 */ {  u32 a = R32((u32)(r_ebp+r_eax+0xfffffd68u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044fc07: je 0x44fc50 */ if (fZ) goto L_0044fc50;
L_0044fc09:; BB(0x0044fc09);
    /* 0044fc09: cmp dword ptr [ebp - 0x2ac], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffd54u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044fc10: jne 0x44fc1e */ if (!fZ) goto L_0044fc1e;
L_0044fc12:; BB(0x0044fc12);
    /* 0044fc12: mov ecx, dword ptr [ebp - 0x29c] */ r_ecx = R32((u32)(r_ebp+0xfffffd64u));
    /* 0044fc18: mov dword ptr [ebp - 0x2a4], ecx */ W32((u32)(r_ebp+0xfffffd5cu), r_ecx);
L_0044fc1e:; BB(0x0044fc1e);
    /* 0044fc1e: mov edx, dword ptr [ebp - 0x2ac] */ r_edx = R32((u32)(r_ebp+0xfffffd54u));
    /* 0044fc24: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0044fc27: mov dword ptr [ebp - 0x2ac], edx */ W32((u32)(r_ebp+0xfffffd54u), r_edx);
    /* 0044fc2d: cmp dword ptr [ebp - 0x2ac], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffd54u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044fc34: jl 0x44fc4e */ if ((fS!=fO)) goto L_0044fc4e;
L_0044fc36:; BB(0x0044fc36);
    /* 0044fc36: mov eax, dword ptr [ebp - 0x2ac] */ r_eax = R32((u32)(r_ebp+0xfffffd54u));
    /* 0044fc3c: mov dword ptr [ebp - 0x2a0], eax */ W32((u32)(r_ebp+0xfffffd60u), r_eax);
    /* 0044fc42: mov ecx, dword ptr [ebp - 0x2a4] */ r_ecx = R32((u32)(r_ebp+0xfffffd5cu));
    /* 0044fc48: mov dword ptr [ebp - 0x2a8], ecx */ W32((u32)(r_ebp+0xfffffd58u), r_ecx);
L_0044fc4e:; BB(0x0044fc4e);
    /* 0044fc4e: jmp 0x44fc64 */ goto L_0044fc64;
L_0044fc50:; BB(0x0044fc50);
    /* 0044fc50: mov dword ptr [ebp - 0x2ac], 0 */ W32((u32)(r_ebp+0xfffffd54u), 0x0u);
    /* 0044fc5a: mov dword ptr [ebp - 0x2a4], 0 */ W32((u32)(r_ebp+0xfffffd5cu), 0x0u);
L_0044fc64:; BB(0x0044fc64);
    /* 0044fc64: jmp 0x44fbde */ goto L_0044fbde;
L_0044fc69:; BB(0x0044fc69);
    /* 0044fc69: cmp dword ptr [ebp - 0x2a0], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffd60u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044fc70: jl 0x44fe4d */ if ((fS!=fO)) goto L_0044fe4d;
L_0044fc76:; BB(0x0044fc76);
    /* 0044fc76: mov edx, dword ptr [ebp - 0x2b0] */ r_edx = R32((u32)(r_ebp+0xfffffd50u));
    /* 0044fc7c: mov eax, dword ptr [ebp - 0x2a0] */ r_eax = R32((u32)(r_ebp+0xfffffd60u));
    /* 0044fc82: mov dword ptr [edx + 0x2f4], eax */ W32((u32)(r_edx+0x2f4u), r_eax);
    /* 0044fc88: mov ecx, dword ptr [ebp - 0x2b0] */ r_ecx = R32((u32)(r_ebp+0xfffffd50u));
    /* 0044fc8e: mov edx, dword ptr [ebp - 0x2a8] */ r_edx = R32((u32)(r_ebp+0xfffffd58u));
    /* 0044fc94: mov dword ptr [ecx + 0x2f8], edx */ W32((u32)(r_ecx+0x2f8u), r_edx);
    /* 0044fc9a: mov eax, dword ptr [ebp - 0x2b0] */ r_eax = R32((u32)(r_ebp+0xfffffd50u));
    /* 0044fca0: movzx ecx, byte ptr [eax + 0x2be] */ r_ecx = (u32)R8((u32)(r_eax+0x2beu));
    /* 0044fca7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044fca9: je 0x44fdf3 */ if (fZ) goto L_0044fdf3;
L_0044fcaf:; BB(0x0044fcaf);
    /* 0044fcaf: cmp dword ptr [ebp - 0x2a8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffd58u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044fcb6: jle 0x44fd24 */ if ((fZ||fS!=fO)) goto L_0044fd24;
L_0044fcb8:; BB(0x0044fcb8);
    /* 0044fcb8: mov edx, dword ptr [ebp - 0x2a8] */ r_edx = R32((u32)(r_ebp+0xfffffd58u));
    /* 0044fcbe: sub edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0044fcc1: imul edx, edx, 0x2c */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x2cu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044fcc4: cmp dword ptr [ebp + edx - 0x298], 0 */ {  u32 a = R32((u32)(r_ebp+r_edx+0xfffffd68u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044fccc: jle 0x44fd24 */ if ((fZ||fS!=fO)) goto L_0044fd24;
L_0044fcce:; BB(0x0044fcce);
    /* 0044fcce: mov eax, dword ptr [ebp - 0x2b0] */ r_eax = R32((u32)(r_ebp+0xfffffd50u));
    /* 0044fcd4: mov ecx, dword ptr [eax + 0x2f8] */ r_ecx = R32((u32)(r_eax+0x2f8u));
    /* 0044fcda: sub ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0044fcdd: mov edx, dword ptr [ebp - 0x2b0] */ r_edx = R32((u32)(r_ebp+0xfffffd50u));
    /* 0044fce3: mov dword ptr [edx + 0x2f8], ecx */ W32((u32)(r_edx+0x2f8u), r_ecx);
    /* 0044fce9: mov eax, dword ptr [ebp - 0x2b0] */ r_eax = R32((u32)(r_ebp+0xfffffd50u));
    /* 0044fcef: mov ecx, dword ptr [eax + 0x2f8] */ r_ecx = R32((u32)(r_eax+0x2f8u));
    /* 0044fcf5: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0044fcf8: mov edx, dword ptr [ebp - 0x2b0] */ r_edx = R32((u32)(r_ebp+0xfffffd50u));
    /* 0044fcfe: mov dword ptr [edx + 0x2fc], ecx */ W32((u32)(r_edx+0x2fcu), r_ecx);
    /* 0044fd04: mov eax, dword ptr [ebp - 0x2b0] */ r_eax = R32((u32)(r_ebp+0xfffffd50u));
    /* 0044fd0a: mov ecx, dword ptr [eax + 0x2f4] */ r_ecx = R32((u32)(r_eax+0x2f4u));
    /* 0044fd10: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0044fd13: mov edx, dword ptr [ebp - 0x2b0] */ r_edx = R32((u32)(r_ebp+0xfffffd50u));
    /* 0044fd19: mov dword ptr [edx + 0x2f4], ecx */ W32((u32)(r_edx+0x2f4u), r_ecx);
    /* 0044fd1f: jmp 0x44fdd8 */ goto L_0044fdd8;
L_0044fd24:; BB(0x0044fd24);
    /* 0044fd24: mov eax, dword ptr [ebp - 0x2b0] */ r_eax = R32((u32)(r_ebp+0xfffffd50u));
    /* 0044fd2a: mov ecx, dword ptr [eax + 0x2f4] */ r_ecx = R32((u32)(r_eax+0x2f4u));
    /* 0044fd30: mov edx, dword ptr [ebp - 0x2a8] */ r_edx = R32((u32)(r_ebp+0xfffffd58u));
    /* 0044fd36: lea eax, [edx + ecx - 1] */ r_eax = (u32)(r_edx+r_ecx+0xffffffffu);
    /* 0044fd3a: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044fd3d: jne 0x44fd74 */ if (!fZ) goto L_0044fd74;
L_0044fd3f:; BB(0x0044fd3f);
    /* 0044fd3f: mov ecx, dword ptr [ebp - 0x2b0] */ r_ecx = R32((u32)(r_ebp+0xfffffd50u));
    /* 0044fd45: mov edx, dword ptr [ecx + 0x2f8] */ r_edx = R32((u32)(r_ecx+0x2f8u));
    /* 0044fd4b: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0044fd4e: mov eax, dword ptr [ebp - 0x2b0] */ r_eax = R32((u32)(r_ebp+0xfffffd50u));
    /* 0044fd54: mov dword ptr [eax + 0x2f8], edx */ W32((u32)(r_eax+0x2f8u), r_edx);
    /* 0044fd5a: mov ecx, dword ptr [ebp - 0x2b0] */ r_ecx = R32((u32)(r_ebp+0xfffffd50u));
    /* 0044fd60: mov edx, dword ptr [ebp - 0x2b0] */ r_edx = R32((u32)(r_ebp+0xfffffd50u));
    /* 0044fd66: mov eax, dword ptr [edx + 0x2f8] */ r_eax = R32((u32)(r_edx+0x2f8u));
    /* 0044fd6c: mov dword ptr [ecx + 0x2fc], eax */ W32((u32)(r_ecx+0x2fcu), r_eax);
    /* 0044fd72: jmp 0x44fdd8 */ goto L_0044fdd8;
L_0044fd74:; BB(0x0044fd74);
    /* 0044fd74: mov ecx, dword ptr [ebp - 0x2b0] */ r_ecx = R32((u32)(r_ebp+0xfffffd50u));
    /* 0044fd7a: mov edx, dword ptr [ebp - 0x2a8] */ r_edx = R32((u32)(r_ebp+0xfffffd58u));
    /* 0044fd80: add edx, dword ptr [ecx + 0x2f4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x2f4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0044fd86: mov eax, dword ptr [ebp - 0x2b0] */ r_eax = R32((u32)(r_ebp+0xfffffd50u));
    /* 0044fd8c: mov dword ptr [eax + 0x2fc], edx */ W32((u32)(r_eax+0x2fcu), r_edx);
    /* 0044fd92: mov ecx, dword ptr [ebp - 0x2b0] */ r_ecx = R32((u32)(r_ebp+0xfffffd50u));
    /* 0044fd98: cmp dword ptr [ecx + 0x2fc], 0xe */ {  u32 a = R32((u32)(r_ecx+0x2fcu)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044fd9f: jge 0x44fdd8 */ if ((fS==fO)) goto L_0044fdd8;
L_0044fda1:; BB(0x0044fda1);
    /* 0044fda1: mov edx, dword ptr [ebp - 0x2b0] */ r_edx = R32((u32)(r_ebp+0xfffffd50u));
    /* 0044fda7: mov eax, dword ptr [edx + 0x2fc] */ r_eax = R32((u32)(r_edx+0x2fcu));
    /* 0044fdad: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044fdb0: imul eax, eax, 0x2c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x2cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044fdb3: cmp dword ptr [ebp + eax - 0x298], 0 */ {  u32 a = R32((u32)(r_ebp+r_eax+0xfffffd68u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044fdbb: jle 0x44fdd8 */ if ((fZ||fS!=fO)) goto L_0044fdd8;
L_0044fdbd:; BB(0x0044fdbd);
    /* 0044fdbd: mov ecx, dword ptr [ebp - 0x2b0] */ r_ecx = R32((u32)(r_ebp+0xfffffd50u));
    /* 0044fdc3: mov edx, dword ptr [ecx + 0x2f4] */ r_edx = R32((u32)(r_ecx+0x2f4u));
    /* 0044fdc9: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0044fdcc: mov eax, dword ptr [ebp - 0x2b0] */ r_eax = R32((u32)(r_ebp+0xfffffd50u));
    /* 0044fdd2: mov dword ptr [eax + 0x2f4], edx */ W32((u32)(r_eax+0x2f4u), r_edx);
L_0044fdd8:; BB(0x0044fdd8);
    /* 0044fdd8: mov ecx, dword ptr [ebp - 0x2b0] */ r_ecx = R32((u32)(r_ebp+0xfffffd50u));
    /* 0044fdde: mov edx, dword ptr [ecx + 0x2f4] */ r_edx = R32((u32)(r_ecx+0x2f4u));
    /* 0044fde4: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0044fde7: mov eax, dword ptr [ebp - 0x2b0] */ r_eax = R32((u32)(r_ebp+0xfffffd50u));
    /* 0044fded: mov dword ptr [eax + 0x2f4], edx */ W32((u32)(r_eax+0x2f4u), r_edx);
L_0044fdf3:; BB(0x0044fdf3);
    /* 0044fdf3: mov dword ptr [ebp - 0x29c], 0 */ W32((u32)(r_ebp+0xfffffd64u), 0x0u);
    /* 0044fdfd: jmp 0x44fe0e */ goto L_0044fe0e;
L_0044fdff:; BB(0x0044fdff);
    /* 0044fdff: mov ecx, dword ptr [ebp - 0x29c] */ r_ecx = R32((u32)(r_ebp+0xfffffd64u));
    /* 0044fe05: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0044fe08: mov dword ptr [ebp - 0x29c], ecx */ W32((u32)(r_ebp+0xfffffd64u), r_ecx);
L_0044fe0e:; BB(0x0044fe0e);
    /* 0044fe0e: mov edx, dword ptr [ebp - 0x2b0] */ r_edx = R32((u32)(r_ebp+0xfffffd50u));
    /* 0044fe14: mov eax, dword ptr [ebp - 0x29c] */ r_eax = R32((u32)(r_ebp+0xfffffd64u));
    /* 0044fe1a: cmp eax, dword ptr [edx + 0x2f4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x2f4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044fe20: jge 0x44fe49 */ if ((fS==fO)) goto L_0044fe49;
L_0044fe22:; BB(0x0044fe22);
    /* 0044fe22: mov ecx, dword ptr [ebp - 0x2b0] */ r_ecx = R32((u32)(r_ebp+0xfffffd50u));
    /* 0044fe28: mov edx, dword ptr [ecx + 0x2f8] */ r_edx = R32((u32)(r_ecx+0x2f8u));
    /* 0044fe2e: add edx, dword ptr [ebp - 0x29c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffd64u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0044fe34: mov eax, dword ptr [ebp - 0x29c] */ r_eax = R32((u32)(r_ebp+0xfffffd64u));
    /* 0044fe3a: mov ecx, dword ptr [ebp - 0x2b0] */ r_ecx = R32((u32)(r_ebp+0xfffffd50u));
    /* 0044fe40: mov dword ptr [ecx + eax*4 + 0x2d8], edx */ W32((u32)(r_ecx+r_eax*4+0x2d8u), r_edx);
    /* 0044fe47: jmp 0x44fdff */ goto L_0044fdff;
L_0044fe49:; BB(0x0044fe49);
    /* 0044fe49: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0044fe4b: jmp 0x44fe4f */ goto L_0044fe4f;
L_0044fe4d:; BB(0x0044fe4d);
    /* 0044fe4d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0044fe4f:; BB(0x0044fe4f);
    /* 0044fe4f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0044fe50: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0044fe51: mov esp, ebp */ r_esp = r_ebp;
    /* 0044fe53: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044fe54: ret  */ FN_RET(0x0044fb20); r_esp += 4; return;
}

void f_0044fe60(void) /* sub_44FE60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044fe60);
    /* 0044fe60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044fe61: mov ebp, esp */ r_ebp = r_esp;
    /* 0044fe63: sub esp, 0x2cc */ {  u32 a = r_esp; u32 b = 0x2ccu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044fe69: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0044fe6a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0044fe6b: mov dword ptr [ebp - 0x2cc], ecx */ W32((u32)(r_ebp+0xfffffd34u), r_ecx);
    /* 0044fe71: mov eax, dword ptr [ebp - 0x2cc] */ r_eax = R32((u32)(r_ebp+0xfffffd34u));
    /* 0044fe77: movzx ecx, byte ptr [eax + 0x2be] */ r_ecx = (u32)R8((u32)(r_eax+0x2beu));
    /* 0044fe7e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044fe80: je 0x44fe93 */ if (fZ) goto L_0044fe93;
L_0044fe82:; BB(0x0044fe82);
    /* 0044fe82: mov edx, dword ptr [ebp - 0x2cc] */ r_edx = R32((u32)(r_ebp+0xfffffd34u));
    /* 0044fe88: movzx eax, byte ptr [edx + 0x2c3] */ r_eax = (u32)R8((u32)(r_edx+0x2c3u));
    /* 0044fe8f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044fe91: je 0x44fe9a */ if (fZ) goto L_0044fe9a;
L_0044fe93:; BB(0x0044fe93);
    /* 0044fe93: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0044fe95: jmp 0x4502df */ goto L_004502df;
L_0044fe9a:; BB(0x0044fe9a);
    /* 0044fe9a: mov dword ptr [ebp - 0x2ac], 0 */ W32((u32)(r_ebp+0xfffffd54u), 0x0u);
    /* 0044fea4: mov dword ptr [ebp - 0x2c4], 0 */ W32((u32)(r_ebp+0xfffffd3cu), 0x0u);
    /* 0044feae: mov dword ptr [ebp - 0x2c0], 0 */ W32((u32)(r_ebp+0xfffffd40u), 0x0u);
    /* 0044feb8: mov dword ptr [ebp - 0x2c8], 0 */ W32((u32)(r_ebp+0xfffffd38u), 0x0u);
    /* 0044fec2: mov dword ptr [ebp - 0x2a8], 0 */ W32((u32)(r_ebp+0xfffffd58u), 0x0u);
    /* 0044fecc: mov dword ptr [ebp - 0x29c], 0 */ W32((u32)(r_ebp+0xfffffd64u), 0x0u);
    /* 0044fed6: mov byte ptr [ebp - 0x2ad], 0 */ W8((u32)(r_ebp+0xfffffd53u), 0x0u);
    /* 0044fedd: mov dword ptr [ebp - 0x2bc], 0 */ W32((u32)(r_ebp+0xfffffd44u), 0x0u);
    /* 0044fee7: mov dword ptr [ebp - 0x2b8], 0 */ W32((u32)(r_ebp+0xfffffd48u), 0x0u);
    /* 0044fef1: mov dword ptr [ebp - 0x2b4], 0 */ W32((u32)(r_ebp+0xfffffd4cu), 0x0u);
    /* 0044fefb: mov dword ptr [ebp - 0x2a0], 0 */ W32((u32)(r_ebp+0xfffffd60u), 0x0u);
    /* 0044ff05: mov dword ptr [ebp - 0x2a4], 0 */ W32((u32)(r_ebp+0xfffffd5cu), 0x0u);
    /* 0044ff0f: jmp 0x44ff20 */ goto L_0044ff20;
L_0044ff11:; BB(0x0044ff11);
    /* 0044ff11: mov ecx, dword ptr [ebp - 0x2a4] */ r_ecx = R32((u32)(r_ebp+0xfffffd5cu));
    /* 0044ff17: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0044ff1a: mov dword ptr [ebp - 0x2a4], ecx */ W32((u32)(r_ebp+0xfffffd5cu), r_ecx);
L_0044ff20:; BB(0x0044ff20);
    /* 0044ff20: cmp dword ptr [ebp - 0x2a4], 0xf */ {  u32 a = R32((u32)(r_ebp+0xfffffd5cu)); u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044ff27: jge 0x44ff55 */ if ((fS==fO)) goto L_0044ff55;
L_0044ff29:; BB(0x0044ff29);
    /* 0044ff29: mov edx, dword ptr [ebp - 0x2a4] */ r_edx = R32((u32)(r_ebp+0xfffffd5cu));
    /* 0044ff2f: imul edx, edx, 0x2c */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x2cu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044ff32: mov eax, dword ptr [ebp - 0x2cc] */ r_eax = R32((u32)(r_ebp+0xfffffd34u));
    /* 0044ff38: lea esi, [eax + edx + 0x18] */ r_esi = (u32)(r_eax+r_edx+0x18u);
    /* 0044ff3c: mov ecx, dword ptr [ebp - 0x2a4] */ r_ecx = R32((u32)(r_ebp+0xfffffd5cu));
    /* 0044ff42: imul ecx, ecx, 0x2c */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x2cu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044ff45: lea edi, [ebp + ecx - 0x298] */ r_edi = (u32)(r_ebp+r_ecx+0xfffffd68u);
    /* 0044ff4c: mov ecx, 0xb */ r_ecx = 0xbu;
    /* 0044ff51: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0044ff53: jmp 0x44ff11 */ goto L_0044ff11;
L_0044ff55:; BB(0x0044ff55);
    /* 0044ff55: mov edx, dword ptr [ebp - 0x2cc] */ r_edx = R32((u32)(r_ebp+0xfffffd34u));
    /* 0044ff5b: movzx eax, byte ptr [edx + 0x2be] */ r_eax = (u32)R8((u32)(r_edx+0x2beu));
    /* 0044ff62: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044ff64: je 0x44ff7e */ if (fZ) goto L_0044ff7e;
L_0044ff66:; BB(0x0044ff66);
    /* 0044ff66: mov ecx, dword ptr [ebp - 0x26c] */ r_ecx = R32((u32)(r_ebp+0xfffffd94u));
    /* 0044ff6c: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0044ff6f: mov dword ptr [ebp - 0x26c], ecx */ W32((u32)(r_ebp+0xfffffd94u), r_ecx);
    /* 0044ff75: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0044ff78: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0044ff7b: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
L_0044ff7e:; BB(0x0044ff7e);
    /* 0044ff7e: mov dword ptr [ebp - 0x2a4], 1 */ W32((u32)(r_ebp+0xfffffd5cu), 0x1u);
    /* 0044ff88: jmp 0x44ff99 */ goto L_0044ff99;
L_0044ff8a:; BB(0x0044ff8a);
    /* 0044ff8a: mov eax, dword ptr [ebp - 0x2a4] */ r_eax = R32((u32)(r_ebp+0xfffffd5cu));
    /* 0044ff90: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044ff93: mov dword ptr [ebp - 0x2a4], eax */ W32((u32)(r_ebp+0xfffffd5cu), r_eax);
L_0044ff99:; BB(0x0044ff99);
    /* 0044ff99: cmp dword ptr [ebp - 0x2a4], 0xf */ {  u32 a = R32((u32)(r_ebp+0xfffffd5cu)); u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044ffa0: jge 0x4500f5 */ if ((fS==fO)) goto L_004500f5;
L_0044ffa6:; BB(0x0044ffa6);
    /* 0044ffa6: mov ecx, dword ptr [ebp - 0x2a4] */ r_ecx = R32((u32)(r_ebp+0xfffffd5cu));
    /* 0044ffac: imul ecx, ecx, 0x2c */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x2cu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044ffaf: cmp dword ptr [ebp + ecx - 0x298], 0 */ {  u32 a = R32((u32)(r_ebp+r_ecx+0xfffffd68u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044ffb7: je 0x45000f */ if (fZ) goto L_0045000f;
L_0044ffb9:; BB(0x0044ffb9);
    /* 0044ffb9: cmp dword ptr [ebp - 0x2c4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffd3cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044ffc0: jne 0x44ffce */ if (!fZ) goto L_0044ffce;
L_0044ffc2:; BB(0x0044ffc2);
    /* 0044ffc2: mov edx, dword ptr [ebp - 0x2a4] */ r_edx = R32((u32)(r_ebp+0xfffffd5cu));
    /* 0044ffc8: mov dword ptr [ebp - 0x2a8], edx */ W32((u32)(r_ebp+0xfffffd58u), r_edx);
L_0044ffce:; BB(0x0044ffce);
    /* 0044ffce: mov eax, dword ptr [ebp - 0x2c4] */ r_eax = R32((u32)(r_ebp+0xfffffd3cu));
    /* 0044ffd4: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044ffd7: mov dword ptr [ebp - 0x2c4], eax */ W32((u32)(r_ebp+0xfffffd3cu), r_eax);
    /* 0044ffdd: cmp dword ptr [ebp - 0x2c4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffd3cu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044ffe4: jl 0x45000a */ if ((fS!=fO)) goto L_0045000a;
L_0044ffe6:; BB(0x0044ffe6);
    /* 0044ffe6: mov ecx, dword ptr [ebp - 0x2c4] */ r_ecx = R32((u32)(r_ebp+0xfffffd3cu));
    /* 0044ffec: mov dword ptr [ebp - 0x2ac], ecx */ W32((u32)(r_ebp+0xfffffd54u), r_ecx);
    /* 0044fff2: mov edx, dword ptr [ebp - 0x2a8] */ r_edx = R32((u32)(r_ebp+0xfffffd58u));
    /* 0044fff8: mov dword ptr [ebp - 0x2bc], edx */ W32((u32)(r_ebp+0xfffffd44u), r_edx);
    /* 0044fffe: mov eax, dword ptr [ebp - 0x29c] */ r_eax = R32((u32)(r_ebp+0xfffffd64u));
    /* 00450004: mov dword ptr [ebp - 0x2b4], eax */ W32((u32)(r_ebp+0xfffffd4cu), r_eax);
L_0045000a:; BB(0x0045000a);
    /* 0045000a: jmp 0x4500f0 */ goto L_004500f0;
L_0045000f:; BB(0x0045000f);
    /* 0045000f: movzx ecx, byte ptr [ebp - 0x2ad] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffd53u));
    /* 00450016: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00450018: je 0x45008c */ if (fZ) goto L_0045008c;
L_0045001a:; BB(0x0045001a);
    /* 0045001a: cmp dword ptr [ebp - 0x2c4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffd3cu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00450021: jl 0x450050 */ if ((fS!=fO)) goto L_00450050;
L_00450023:; BB(0x00450023);
    /* 00450023: cmp dword ptr [ebp - 0x2c0], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffd40u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045002a: jne 0x450050 */ if (!fZ) goto L_00450050;
L_0045002c:; BB(0x0045002c);
    /* 0045002c: mov edx, dword ptr [ebp - 0x2ac] */ r_edx = R32((u32)(r_ebp+0xfffffd54u));
    /* 00450032: mov dword ptr [ebp - 0x2c0], edx */ W32((u32)(r_ebp+0xfffffd40u), r_edx);
    /* 00450038: mov eax, dword ptr [ebp - 0x2a8] */ r_eax = R32((u32)(r_ebp+0xfffffd58u));
    /* 0045003e: mov dword ptr [ebp - 0x2b8], eax */ W32((u32)(r_ebp+0xfffffd48u), r_eax);
    /* 00450044: mov ecx, dword ptr [ebp - 0x29c] */ r_ecx = R32((u32)(r_ebp+0xfffffd64u));
    /* 0045004a: mov dword ptr [ebp - 0x2a0], ecx */ W32((u32)(r_ebp+0xfffffd60u), r_ecx);
L_00450050:; BB(0x00450050);
    /* 00450050: cmp dword ptr [ebp - 0x2a8], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffd58u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00450057: jge 0x450065 */ if ((fS==fO)) goto L_00450065;
L_00450059:; BB(0x00450059);
    /* 00450059: mov edx, dword ptr [ebp - 0x29c] */ r_edx = R32((u32)(r_ebp+0xfffffd64u));
    /* 0045005f: mov dword ptr [ebp - 0x2a4], edx */ W32((u32)(r_ebp+0xfffffd5cu), r_edx);
L_00450065:; BB(0x00450065);
    /* 00450065: mov dword ptr [ebp - 0x2c4], 0 */ W32((u32)(r_ebp+0xfffffd3cu), 0x0u);
    /* 0045006f: mov dword ptr [ebp - 0x2a8], 0 */ W32((u32)(r_ebp+0xfffffd58u), 0x0u);
    /* 00450079: mov dword ptr [ebp - 0x29c], 0 */ W32((u32)(r_ebp+0xfffffd64u), 0x0u);
    /* 00450083: mov byte ptr [ebp - 0x2ad], 0 */ W8((u32)(r_ebp+0xfffffd53u), 0x0u);
    /* 0045008a: jmp 0x4500f0 */ goto L_004500f0;
L_0045008c:; BB(0x0045008c);
    /* 0045008c: mov byte ptr [ebp - 0x2ad], 1 */ W8((u32)(r_ebp+0xfffffd53u), 0x1u);
    /* 00450093: mov eax, dword ptr [ebp - 0x2a4] */ r_eax = R32((u32)(r_ebp+0xfffffd5cu));
    /* 00450099: mov dword ptr [ebp - 0x29c], eax */ W32((u32)(r_ebp+0xfffffd64u), r_eax);
    /* 0045009f: cmp dword ptr [ebp - 0x2c4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffd3cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004500a6: jne 0x4500b4 */ if (!fZ) goto L_004500b4;
L_004500a8:; BB(0x004500a8);
    /* 004500a8: mov ecx, dword ptr [ebp - 0x29c] */ r_ecx = R32((u32)(r_ebp+0xfffffd64u));
    /* 004500ae: mov dword ptr [ebp - 0x2a8], ecx */ W32((u32)(r_ebp+0xfffffd58u), r_ecx);
L_004500b4:; BB(0x004500b4);
    /* 004500b4: mov edx, dword ptr [ebp - 0x2c4] */ r_edx = R32((u32)(r_ebp+0xfffffd3cu));
    /* 004500ba: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004500bd: mov dword ptr [ebp - 0x2c4], edx */ W32((u32)(r_ebp+0xfffffd3cu), r_edx);
    /* 004500c3: cmp dword ptr [ebp - 0x2c4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffd3cu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004500ca: jl 0x4500f0 */ if ((fS!=fO)) goto L_004500f0;
L_004500cc:; BB(0x004500cc);
    /* 004500cc: mov eax, dword ptr [ebp - 0x2c4] */ r_eax = R32((u32)(r_ebp+0xfffffd3cu));
    /* 004500d2: mov dword ptr [ebp - 0x2ac], eax */ W32((u32)(r_ebp+0xfffffd54u), r_eax);
    /* 004500d8: mov ecx, dword ptr [ebp - 0x2a8] */ r_ecx = R32((u32)(r_ebp+0xfffffd58u));
    /* 004500de: mov dword ptr [ebp - 0x2bc], ecx */ W32((u32)(r_ebp+0xfffffd44u), r_ecx);
    /* 004500e4: mov edx, dword ptr [ebp - 0x29c] */ r_edx = R32((u32)(r_ebp+0xfffffd64u));
    /* 004500ea: mov dword ptr [ebp - 0x2b4], edx */ W32((u32)(r_ebp+0xfffffd4cu), r_edx);
L_004500f0:; BB(0x004500f0);
    /* 004500f0: jmp 0x44ff8a */ goto L_0044ff8a;
L_004500f5:; BB(0x004500f5);
    /* 004500f5: cmp dword ptr [ebp - 0x2ac], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffd54u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004500fc: jl 0x4502dd */ if ((fS!=fO)) goto L_004502dd;
L_00450102:; BB(0x00450102);
    /* 00450102: mov eax, dword ptr [ebp - 0x2cc] */ r_eax = R32((u32)(r_ebp+0xfffffd34u));
    /* 00450108: mov ecx, dword ptr [ebp - 0x2ac] */ r_ecx = R32((u32)(r_ebp+0xfffffd54u));
    /* 0045010e: mov dword ptr [eax + 0x2f4], ecx */ W32((u32)(r_eax+0x2f4u), r_ecx);
    /* 00450114: mov edx, dword ptr [ebp - 0x2cc] */ r_edx = R32((u32)(r_ebp+0xfffffd34u));
    /* 0045011a: mov eax, dword ptr [ebp - 0x2bc] */ r_eax = R32((u32)(r_ebp+0xfffffd44u));
    /* 00450120: mov dword ptr [edx + 0x2f8], eax */ W32((u32)(r_edx+0x2f8u), r_eax);
    /* 00450126: mov ecx, dword ptr [ebp - 0x2cc] */ r_ecx = R32((u32)(r_ebp+0xfffffd34u));
    /* 0045012c: mov edx, dword ptr [ebp - 0x2b4] */ r_edx = R32((u32)(r_ebp+0xfffffd4cu));
    /* 00450132: mov dword ptr [ecx + 0x2fc], edx */ W32((u32)(r_ecx+0x2fcu), r_edx);
    /* 00450138: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045013e: call 0x45f940 */ r_esp -= 4; W32(r_esp, 0x450143u); f_0045f940();
    /* 00450143: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00450146: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00450148: je 0x450188 */ if (fZ) goto L_00450188;
L_0045014a:; BB(0x0045014a);
    /* 0045014a: mov ecx, dword ptr [ebp - 0x2cc] */ r_ecx = R32((u32)(r_ebp+0xfffffd34u));
    /* 00450150: cmp dword ptr [ecx + 0x2f8], 1 */ {  u32 a = R32((u32)(r_ecx+0x2f8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00450157: jne 0x450188 */ if (!fZ) goto L_00450188;
L_00450159:; BB(0x00450159);
    /* 00450159: mov edx, dword ptr [ebp - 0x2cc] */ r_edx = R32((u32)(r_ebp+0xfffffd34u));
    /* 0045015f: cmp dword ptr [edx + 0x2fc], 1 */ {  u32 a = R32((u32)(r_edx+0x2fcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00450166: jne 0x450188 */ if (!fZ) goto L_00450188;
L_00450168:; BB(0x00450168);
    /* 00450168: mov eax, dword ptr [ebp - 0x2cc] */ r_eax = R32((u32)(r_ebp+0xfffffd34u));
    /* 0045016e: mov dword ptr [eax + 0x2f8], 2 */ W32((u32)(r_eax+0x2f8u), 0x2u);
    /* 00450178: mov ecx, dword ptr [ebp - 0x2cc] */ r_ecx = R32((u32)(r_ebp+0xfffffd34u));
    /* 0045017e: mov dword ptr [ecx + 0x2fc], 0xe */ W32((u32)(r_ecx+0x2fcu), 0xeu);
L_00450188:; BB(0x00450188);
    /* 00450188: mov dword ptr [ebp - 0x2a4], 0 */ W32((u32)(r_ebp+0xfffffd5cu), 0x0u);
    /* 00450192: jmp 0x4501a3 */ goto L_004501a3;
L_00450194:; BB(0x00450194);
    /* 00450194: mov edx, dword ptr [ebp - 0x2a4] */ r_edx = R32((u32)(r_ebp+0xfffffd5cu));
    /* 0045019a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045019d: mov dword ptr [ebp - 0x2a4], edx */ W32((u32)(r_ebp+0xfffffd5cu), r_edx);
L_004501a3:; BB(0x004501a3);
    /* 004501a3: mov eax, dword ptr [ebp - 0x2cc] */ r_eax = R32((u32)(r_ebp+0xfffffd34u));
    /* 004501a9: mov ecx, dword ptr [ebp - 0x2a4] */ r_ecx = R32((u32)(r_ebp+0xfffffd5cu));
    /* 004501af: cmp ecx, dword ptr [eax + 0x2f4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x2f4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004501b5: jge 0x4501de */ if ((fS==fO)) goto L_004501de;
L_004501b7:; BB(0x004501b7);
    /* 004501b7: mov edx, dword ptr [ebp - 0x2cc] */ r_edx = R32((u32)(r_ebp+0xfffffd34u));
    /* 004501bd: mov eax, dword ptr [edx + 0x2f8] */ r_eax = R32((u32)(r_edx+0x2f8u));
    /* 004501c3: add eax, dword ptr [ebp - 0x2a4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffd5cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004501c9: mov ecx, dword ptr [ebp - 0x2a4] */ r_ecx = R32((u32)(r_ebp+0xfffffd5cu));
    /* 004501cf: mov edx, dword ptr [ebp - 0x2cc] */ r_edx = R32((u32)(r_ebp+0xfffffd34u));
    /* 004501d5: mov dword ptr [edx + ecx*4 + 0x2d8], eax */ W32((u32)(r_edx+r_ecx*4+0x2d8u), r_eax);
    /* 004501dc: jmp 0x450194 */ goto L_00450194;
L_004501de:; BB(0x004501de);
    /* 004501de: cmp dword ptr [ebp - 0x2c0], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffd40u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004501e5: jl 0x4502d9 */ if ((fS!=fO)) goto L_004502d9;
L_004501eb:; BB(0x004501eb);
    /* 004501eb: mov eax, dword ptr [ebp - 0x2bc] */ r_eax = R32((u32)(r_ebp+0xfffffd44u));
    /* 004501f1: cmp eax, dword ptr [ebp - 0x2b8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffd48u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004501f7: je 0x4502d9 */ if (fZ) goto L_004502d9;
L_004501fd:; BB(0x004501fd);
    /* 004501fd: mov ecx, dword ptr [ebp - 0x2cc] */ r_ecx = R32((u32)(r_ebp+0xfffffd34u));
    /* 00450203: mov edx, dword ptr [ebp - 0x2c0] */ r_edx = R32((u32)(r_ebp+0xfffffd40u));
    /* 00450209: mov dword ptr [ecx + 0x31c], edx */ W32((u32)(r_ecx+0x31cu), r_edx);
    /* 0045020f: mov eax, dword ptr [ebp - 0x2cc] */ r_eax = R32((u32)(r_ebp+0xfffffd34u));
    /* 00450215: mov ecx, dword ptr [ebp - 0x2b8] */ r_ecx = R32((u32)(r_ebp+0xfffffd48u));
    /* 0045021b: mov dword ptr [eax + 0x320], ecx */ W32((u32)(r_eax+0x320u), r_ecx);
    /* 00450221: mov edx, dword ptr [ebp - 0x2cc] */ r_edx = R32((u32)(r_ebp+0xfffffd34u));
    /* 00450227: mov eax, dword ptr [ebp - 0x2a0] */ r_eax = R32((u32)(r_ebp+0xfffffd60u));
    /* 0045022d: mov dword ptr [edx + 0x324], eax */ W32((u32)(r_edx+0x324u), r_eax);
    /* 00450233: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 00450239: call 0x45f940 */ r_esp -= 4; W32(r_esp, 0x45023eu); f_0045f940();
    /* 0045023e: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00450241: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00450243: je 0x450283 */ if (fZ) goto L_00450283;
L_00450245:; BB(0x00450245);
    /* 00450245: mov edx, dword ptr [ebp - 0x2cc] */ r_edx = R32((u32)(r_ebp+0xfffffd34u));
    /* 0045024b: cmp dword ptr [edx + 0x320], 1 */ {  u32 a = R32((u32)(r_edx+0x320u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00450252: jne 0x450283 */ if (!fZ) goto L_00450283;
L_00450254:; BB(0x00450254);
    /* 00450254: mov eax, dword ptr [ebp - 0x2cc] */ r_eax = R32((u32)(r_ebp+0xfffffd34u));
    /* 0045025a: cmp dword ptr [eax + 0x324], 1 */ {  u32 a = R32((u32)(r_eax+0x324u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00450261: jne 0x450283 */ if (!fZ) goto L_00450283;
L_00450263:; BB(0x00450263);
    /* 00450263: mov ecx, dword ptr [ebp - 0x2cc] */ r_ecx = R32((u32)(r_ebp+0xfffffd34u));
    /* 00450269: mov dword ptr [ecx + 0x320], 2 */ W32((u32)(r_ecx+0x320u), 0x2u);
    /* 00450273: mov edx, dword ptr [ebp - 0x2cc] */ r_edx = R32((u32)(r_ebp+0xfffffd34u));
    /* 00450279: mov dword ptr [edx + 0x324], 0xe */ W32((u32)(r_edx+0x324u), 0xeu);
L_00450283:; BB(0x00450283);
    /* 00450283: mov dword ptr [ebp - 0x2a4], 0 */ W32((u32)(r_ebp+0xfffffd5cu), 0x0u);
    /* 0045028d: jmp 0x45029e */ goto L_0045029e;
L_0045028f:; BB(0x0045028f);
    /* 0045028f: mov eax, dword ptr [ebp - 0x2a4] */ r_eax = R32((u32)(r_ebp+0xfffffd5cu));
    /* 00450295: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00450298: mov dword ptr [ebp - 0x2a4], eax */ W32((u32)(r_ebp+0xfffffd5cu), r_eax);
L_0045029e:; BB(0x0045029e);
    /* 0045029e: mov ecx, dword ptr [ebp - 0x2cc] */ r_ecx = R32((u32)(r_ebp+0xfffffd34u));
    /* 004502a4: mov edx, dword ptr [ebp - 0x2a4] */ r_edx = R32((u32)(r_ebp+0xfffffd5cu));
    /* 004502aa: cmp edx, dword ptr [ecx + 0x31c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x31cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004502b0: jge 0x4502d9 */ if ((fS==fO)) goto L_004502d9;
L_004502b2:; BB(0x004502b2);
    /* 004502b2: mov eax, dword ptr [ebp - 0x2cc] */ r_eax = R32((u32)(r_ebp+0xfffffd34u));
    /* 004502b8: mov ecx, dword ptr [eax + 0x320] */ r_ecx = R32((u32)(r_eax+0x320u));
    /* 004502be: add ecx, dword ptr [ebp - 0x2a4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffd5cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004502c4: mov edx, dword ptr [ebp - 0x2a4] */ r_edx = R32((u32)(r_ebp+0xfffffd5cu));
    /* 004502ca: mov eax, dword ptr [ebp - 0x2cc] */ r_eax = R32((u32)(r_ebp+0xfffffd34u));
    /* 004502d0: mov dword ptr [eax + edx*4 + 0x300], ecx */ W32((u32)(r_eax+r_edx*4+0x300u), r_ecx);
    /* 004502d7: jmp 0x45028f */ goto L_0045028f;
L_004502d9:; BB(0x004502d9);
    /* 004502d9: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004502db: jmp 0x4502df */ goto L_004502df;
L_004502dd:; BB(0x004502dd);
    /* 004502dd: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_004502df:; BB(0x004502df);
    /* 004502df: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004502e0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004502e1: mov esp, ebp */ r_esp = r_ebp;
    /* 004502e3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004502e4: ret  */ FN_RET(0x0044fe60); r_esp += 4; return;
}

