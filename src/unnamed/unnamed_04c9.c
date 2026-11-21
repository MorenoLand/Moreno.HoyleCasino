#include "protos.h"

void f_004c9160(void) /* sub_4C9160 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004c9160);
    /* 004c9160: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c9161: mov ebp, esp */ r_ebp = r_esp;
    /* 004c9163: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c9166: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004c9167: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004c9168: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 004c916b: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 004c9171: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x4c9176u); f_005da7b0();
    /* 004c9176: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004c9179: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c917b: jne 0x4c918b */ if (!fZ) goto L_004c918b;
L_004c917d:; BB(0x004c917d);
    /* 004c917d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004c9180: mov word ptr [ecx + 0x64], 0 */ W16((u32)(r_ecx+0x64u), 0x0u);
    /* 004c9186: jmp 0x4c92f8 */ goto L_004c92f8;
L_004c918b:; BB(0x004c918b);
    /* 004c918b: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 004c918e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c918f: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 004c9192: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c9193: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004c9196: call 0x4c70d0 */ r_esp -= 4; W32(r_esp, 0x4c919bu); f_004c70d0();
    /* 004c919b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c919c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c91a2: call 0x483a70 */ r_esp -= 4; W32(r_esp, 0x4c91a7u); f_00483a70();
    /* 004c91a7: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c91ad: call 0x47bd20 */ r_esp -= 4; W32(r_esp, 0x4c91b2u); f_0047bd20();
    /* 004c91b2: mov ecx, eax */ r_ecx = r_eax;
    /* 004c91b4: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004c91b7: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004c91b8: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004c91b8, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004c91b8, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004c91ba: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004c91bd: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 004c91c3: call 0x5da8a0 */ r_esp -= 4; W32(r_esp, 0x4c91c8u); f_005da8a0();
    /* 004c91c8: mov edx, dword ptr [0x791eb8] */ r_edx = R32((u32)(0x791eb8u));
    /* 004c91ce: sub eax, dword ptr [edx + 0x98] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x98u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004c91d4: mov word ptr [ebp - 0xc], ax */ W16((u32)(r_ebp+0xfffffff4u), (u16)r_eax);
    /* 004c91d8: movsx eax, word ptr [ebp - 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 004c91dc: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c91df: jge 0x4c91e7 */ if ((fS==fO)) goto L_004c91e7;
L_004c91e1:; BB(0x004c91e1);
    /* 004c91e1: mov word ptr [ebp - 0xc], 1 */ W16((u32)(r_ebp+0xfffffff4u), 0x1u);
L_004c91e7:; BB(0x004c91e7);
    /* 004c91e7: movsx ecx, word ptr [ebp - 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004c91eb: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c91ee: jne 0x4c9243 */ if (!fZ) goto L_004c9243;
L_004c91f0:; BB(0x004c91f0);
    /* 004c91f0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c91f3: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004c91f5: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 004c91f8: movsx eax, word ptr [ebp - 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 004c91fc: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004c91fd: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004c91ff: mov ecx, eax */ r_ecx = r_eax;
    /* 004c9201: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 004c9203: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c9206: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004c9209: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004c920a: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004c920a, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004c920a, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004c920c: mov esi, eax */ r_esi = r_eax;
    /* 004c920e: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004c9210: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4c9215u); f_0062fbf0();
    /* 004c9215: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c9218: mov edi, eax */ r_edi = r_eax;
    /* 004c921a: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004c921c: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4c9221u); f_0062fbf0();
    /* 004c9221: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c9224: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004c9226: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c9228: jle 0x4c9235 */ if ((fZ||fS!=fO)) goto L_004c9235;
L_004c922a:; BB(0x004c922a);
    /* 004c922a: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004c922d: mov word ptr [edx + 0x64], 1 */ W16((u32)(r_edx+0x64u), 0x1u);
    /* 004c9233: jmp 0x4c923e */ goto L_004c923e;
L_004c9235:; BB(0x004c9235);
    /* 004c9235: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004c9238: mov word ptr [eax + 0x64], 0 */ W16((u32)(r_eax+0x64u), 0x0u);
L_004c923e:; BB(0x004c923e);
    /* 004c923e: jmp 0x4c92f8 */ goto L_004c92f8;
L_004c9243:; BB(0x004c9243);
    /* 004c9243: movsx eax, word ptr [ebp - 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 004c9247: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004c9248: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004c924a: mov ecx, eax */ r_ecx = r_eax;
    /* 004c924c: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 004c924e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c9251: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c9254: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004c9255: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004c9255, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004c9255, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004c9257: mov esi, eax */ r_esi = r_eax;
    /* 004c9259: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 004c925b: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4c9260u); f_0062fbf0();
    /* 004c9260: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c9263: mov edi, eax */ r_edi = r_eax;
    /* 004c9265: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004c9267: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4c926cu); f_0062fbf0();
    /* 004c926c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c926f: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004c9271: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c9273: jle 0x4c9299 */ if ((fZ||fS!=fO)) goto L_004c9299;
L_004c9275:; BB(0x004c9275);
    /* 004c9275: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004c9277: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4c927cu); f_0062fbf0();
    /* 004c927c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c927f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c9281: je 0x4c928e */ if (fZ) goto L_004c928e;
L_004c9283:; BB(0x004c9283);
    /* 004c9283: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004c9286: mov word ptr [edx + 0x64], 3 */ W16((u32)(r_edx+0x64u), 0x3u);
    /* 004c928c: jmp 0x4c9297 */ goto L_004c9297;
L_004c928e:; BB(0x004c928e);
    /* 004c928e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004c9291: mov word ptr [eax + 0x64], 2 */ W16((u32)(r_eax+0x64u), 0x2u);
L_004c9297:; BB(0x004c9297);
    /* 004c9297: jmp 0x4c92f8 */ goto L_004c92f8;
L_004c9299:; BB(0x004c9299);
    /* 004c9299: movsx eax, word ptr [ebp - 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 004c929d: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004c929e: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004c92a0: mov ecx, eax */ r_ecx = r_eax;
    /* 004c92a2: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 004c92a4: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c92a7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c92aa: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004c92ab: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004c92ab, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004c92ab, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004c92ad: mov esi, eax */ r_esi = r_eax;
    /* 004c92af: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004c92b1: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4c92b6u); f_0062fbf0();
    /* 004c92b6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c92b9: mov edi, eax */ r_edi = r_eax;
    /* 004c92bb: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004c92bd: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4c92c2u); f_0062fbf0();
    /* 004c92c2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c92c5: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004c92c7: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c92c9: jle 0x4c92ef */ if ((fZ||fS!=fO)) goto L_004c92ef;
L_004c92cb:; BB(0x004c92cb);
    /* 004c92cb: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004c92cd: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4c92d2u); f_0062fbf0();
    /* 004c92d2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c92d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c92d7: je 0x4c92e4 */ if (fZ) goto L_004c92e4;
L_004c92d9:; BB(0x004c92d9);
    /* 004c92d9: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004c92dc: mov word ptr [edx + 0x64], 2 */ W16((u32)(r_edx+0x64u), 0x2u);
    /* 004c92e2: jmp 0x4c92ed */ goto L_004c92ed;
L_004c92e4:; BB(0x004c92e4);
    /* 004c92e4: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004c92e7: mov word ptr [eax + 0x64], 0 */ W16((u32)(r_eax+0x64u), 0x0u);
L_004c92ed:; BB(0x004c92ed);
    /* 004c92ed: jmp 0x4c92f8 */ goto L_004c92f8;
L_004c92ef:; BB(0x004c92ef);
    /* 004c92ef: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004c92f2: mov word ptr [ecx + 0x64], 0 */ W16((u32)(r_ecx+0x64u), 0x0u);
L_004c92f8:; BB(0x004c92f8);
    /* 004c92f8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c92f9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c92fa: mov esp, ebp */ r_esp = r_ebp;
    /* 004c92fc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c92fd: ret  */ FN_RET(0x004c9160); r_esp += 4; return;
}

