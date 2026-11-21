#include "protos.h"

void f_00521660(void) /* sub_521660 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00521660);
    /* 00521660: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00521661: mov ebp, esp */ r_ebp = r_esp;
    /* 00521663: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00521666: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00521667: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0052166a: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 00521670: call 0x528000 */ r_esp -= 4; W32(r_esp, 0x521675u); f_00528000();
    /* 00521675: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00521678: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 0052167f: mov eax, dword ptr [0x793370] */ r_eax = R32((u32)(0x793370u));
    /* 00521684: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00521686: mov ecx, dword ptr [0x793370] */ r_ecx = R32((u32)(0x793370u));
    /* 0052168c: mov eax, dword ptr [edx + 0x2b0] */ r_eax = R32((u32)(r_edx+0x2b0u));
    /* 00521692: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x521694u); call_ind(t); }
    /* 00521694: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00521697: mov ecx, dword ptr [0x793370] */ r_ecx = R32((u32)(0x793370u));
    /* 0052169d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0052169f: mov ecx, dword ptr [0x793370] */ r_ecx = R32((u32)(0x793370u));
    /* 005216a5: mov eax, dword ptr [edx + 0x2b4] */ r_eax = R32((u32)(r_edx+0x2b4u));
    /* 005216ab: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5216adu); call_ind(t); }
    /* 005216ad: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005216b0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005216b3: mov edx, dword ptr [ecx + 0x4a8] */ r_edx = R32((u32)(r_ecx+0x4a8u));
    /* 005216b9: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005216bc: lea eax, [ebp - 0x24] */ r_eax = (u32)(r_ebp+0xffffffdcu);
    /* 005216bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005216c0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005216c3: call 0x5d5a90 */ r_esp -= 4; W32(r_esp, 0x5216c8u); f_005d5a90();
    /* 005216c8: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005216ca: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005216cd: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005216d0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005216d2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005216d5: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 005216d8: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5216dau); call_ind(t); }
    /* 005216da: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005216dd: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005216e0: cmp eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005216e3: jge 0x5216ed */ if ((fS==fO)) goto L_005216ed;
L_005216e5:; BB(0x005216e5);
    /* 005216e5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005216e8: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 005216eb: jmp 0x5216f3 */ goto L_005216f3;
L_005216ed:; BB(0x005216ed);
    /* 005216ed: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005216f0: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
L_005216f3:; BB(0x005216f3);
    /* 005216f3: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005216f6: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005216f9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005216fc: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005216ff: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00521702: cmp edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00521705: jle 0x52170e */ if ((fZ||fS!=fO)) goto L_0052170e;
L_00521707:; BB(0x00521707);
    /* 00521707: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00521709: jmp 0x5218d5 */ goto L_005218d5;
L_0052170e:; BB(0x0052170e);
    /* 0052170e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00521711: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00521712: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00521715: call 0x521900 */ r_esp -= 4; W32(r_esp, 0x52171au); f_00521900();
    /* 0052171a: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0052171d: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00521720: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00521723: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 00521726: cmp dword ptr [ebp - 0x34], 0xe */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0052172a: ja 0x5217f7 */ if ((!fC&&!fZ)) goto L_005217f7;
L_00521730:; BB(0x00521730);
    /* 00521730: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00521733: movzx eax, byte ptr [edx + 0x5218f0] */ r_eax = (u32)R8((u32)(r_edx+0x5218f0u));
    /* 0052173a: jmp dword ptr [eax*4 + 0x5218dc] */ { u32 t = R32((u32)(r_eax*4+0x5218dcu)); switch (t) { case 0x52177eu: goto L_0052177e; case 0x521741u: goto L_00521741; case 0x5217a1u: goto L_005217a1; case 0x5217cdu: goto L_005217cd; case 0x5217f7u: goto L_005217f7; default: UNSUP(0x0052173a, "jump table entry is not a known target"); } }
L_00521741:; BB(0x00521741);
    /* 00521741: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00521743: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x521748u); f_0062fbf0();
    /* 00521748: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052174b: mov esi, eax */ r_esi = r_eax;
    /* 0052174d: imul esi, dword ptr [ebp - 0x14] */ { i64 t = (i64)(i32)r_esi * (i64)(i32)R32((u32)(r_ebp+0xffffffecu)); r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00521751: add esi, dword ptr [ebp - 0x14] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00521754: imul esi, dword ptr [ebp - 4] */ { i64 t = (i64)(i32)r_esi * (i64)(i32)R32((u32)(r_ebp+0xfffffffcu)); r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00521758: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0052175a: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x52175fu); f_0062fbf0();
    /* 0052175f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00521762: mov ecx, eax */ r_ecx = r_eax;
    /* 00521764: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00521767: mov eax, esi */ r_eax = r_esi;
    /* 00521769: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0052176a: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0052176a, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0052176a, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0052176c: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052176f: imul edx, dword ptr [ebp - 0x14] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0xffffffecu)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00521773: imul edx, dword ptr [ebp - 4] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0xfffffffcu)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00521777: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00521779: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0052177c: jmp 0x5217f7 */ goto L_005217f7;
L_0052177e:; BB(0x0052177e);
    /* 0052177e: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 00521781: imul esi, dword ptr [ebp - 4] */ { i64 t = (i64)(i32)r_esi * (i64)(i32)R32((u32)(r_ebp+0xfffffffcu)); r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00521785: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00521787: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x52178cu); f_0062fbf0();
    /* 0052178c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052178f: mov ecx, eax */ r_ecx = r_eax;
    /* 00521791: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00521794: mov eax, esi */ r_eax = r_esi;
    /* 00521796: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00521797: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00521797, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00521797, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00521799: add eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052179c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0052179f: jmp 0x5217f7 */ goto L_005217f7;
L_005217a1:; BB(0x005217a1);
    /* 005217a1: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 005217a4: imul esi, dword ptr [ebp - 4] */ { i64 t = (i64)(i32)r_esi * (i64)(i32)R32((u32)(r_ebp+0xfffffffcu)); r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005217a8: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005217aa: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5217afu); f_0062fbf0();
    /* 005217af: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005217b2: mov ecx, eax */ r_ecx = r_eax;
    /* 005217b4: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005217b7: mov eax, esi */ r_eax = r_esi;
    /* 005217b9: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005217ba: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005217ba, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005217ba, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005217bc: add eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005217bf: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005217c2: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005217c5: imul edx, edx, 3 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x3u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005217c8: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005217cb: jmp 0x5217f7 */ goto L_005217f7;
L_005217cd:; BB(0x005217cd);
    /* 005217cd: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 005217d0: imul esi, dword ptr [ebp - 4] */ { i64 t = (i64)(i32)r_esi * (i64)(i32)R32((u32)(r_ebp+0xfffffffcu)); r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005217d4: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005217d6: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5217dbu); f_0062fbf0();
    /* 005217db: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005217de: mov ecx, eax */ r_ecx = r_eax;
    /* 005217e0: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005217e3: mov eax, esi */ r_eax = r_esi;
    /* 005217e5: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005217e6: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005217e6, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005217e6, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005217e8: add eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005217eb: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005217ee: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005217f1: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005217f4: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
L_005217f7:; BB(0x005217f7);
    /* 005217f7: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 005217fd: call 0x5283e0 */ r_esp -= 4; W32(r_esp, 0x521802u); f_005283e0();
    /* 00521802: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00521805: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00521807: je 0x52181d */ if (fZ) goto L_0052181d;
L_00521809:; BB(0x00521809);
    /* 00521809: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0052180b: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x521810u); f_0062fbf0();
    /* 00521810: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00521813: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00521816: imul eax, dword ptr [ebp - 0x18] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xffffffe8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0052181a: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_0052181d:; BB(0x0052181d);
    /* 0052181d: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 00521823: call 0x528420 */ r_esp -= 4; W32(r_esp, 0x521828u); f_00528420();
    /* 00521828: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0052182b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052182d: je 0x5218a0 */ if (fZ) goto L_005218a0;
L_0052182f:; BB(0x0052182f);
    /* 0052182f: mov edx, dword ptr [0x793374] */ r_edx = R32((u32)(0x793374u));
    /* 00521835: mov eax, dword ptr [edx + 0xd38] */ r_eax = R32((u32)(r_edx+0xd38u));
    /* 0052183b: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0052183e: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00521841: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00521842: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 00521848: call 0x528470 */ r_esp -= 4; W32(r_esp, 0x52184du); f_00528470();
    /* 0052184d: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00521850: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00521852: je 0x5218a0 */ if (fZ) goto L_005218a0;
L_00521854:; BB(0x00521854);
    /* 00521854: fild dword ptr [ebp - 0x18] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffe8u)));
    /* 00521857: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0052185a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0052185c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0052185f: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00521862: fstp qword ptr [ebp - 0x3c] */ W_F64((u32)(r_ebp+0xffffffc4u), ST(0)); FPOP();
    /* 00521865: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x521867u); call_ind(t); }
    /* 00521867: fmul qword ptr [ebp - 0x3c] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffffc4u));
    /* 0052186a: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x52186fu); f_00686cc0();
    /* 0052186f: cmp dword ptr [ebp - 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00521872: jge 0x52187c */ if ((fS==fO)) goto L_0052187c;
L_00521874:; BB(0x00521874);
    /* 00521874: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00521877: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 0052187a: jmp 0x52189a */ goto L_0052189a;
L_0052187c:; BB(0x0052187c);
    /* 0052187c: fild dword ptr [ebp - 0x18] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffe8u)));
    /* 0052187f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00521882: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00521884: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00521887: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 0052188a: fstp qword ptr [ebp - 0x48] */ W_F64((u32)(r_ebp+0xffffffb8u), ST(0)); FPOP();
    /* 0052188d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x52188fu); call_ind(t); }
    /* 0052188f: fmul qword ptr [ebp - 0x48] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffffb8u));
    /* 00521892: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x521897u); f_00686cc0();
    /* 00521897: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
L_0052189a:; BB(0x0052189a);
    /* 0052189a: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0052189d: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_005218a0:; BB(0x005218a0);
    /* 005218a0: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005218a3: cmp ecx, dword ptr [ebp - 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005218a6: jge 0x5218b0 */ if ((fS==fO)) goto L_005218b0;
L_005218a8:; BB(0x005218a8);
    /* 005218a8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005218ab: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 005218ae: jmp 0x5218cc */ goto L_005218cc;
L_005218b0:; BB(0x005218b0);
    /* 005218b0: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005218b3: cmp eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005218b6: jge 0x5218c0 */ if ((fS==fO)) goto L_005218c0;
L_005218b8:; BB(0x005218b8);
    /* 005218b8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005218bb: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 005218be: jmp 0x5218c6 */ goto L_005218c6;
L_005218c0:; BB(0x005218c0);
    /* 005218c0: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005218c3: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
L_005218c6:; BB(0x005218c6);
    /* 005218c6: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 005218c9: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
L_005218cc:; BB(0x005218cc);
    /* 005218cc: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005218cf: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005218d2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
L_005218d5:; BB(0x005218d5);
    /* 005218d5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005218d6: mov esp, ebp */ r_esp = r_ebp;
    /* 005218d8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005218d9: ret 4 */ FN_RET(0x00521660); r_esp += 8; return;
}

void f_00521a10(void) /* sub_521A10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00521a10);
    /* 00521a10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00521a11: mov ebp, esp */ r_ebp = r_esp;
    /* 00521a13: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00521a16: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00521a19: push 0xa1 */ { u32 v = 0xa1u; r_esp -= 4; W32(r_esp, v); }
    /* 00521a1e: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x521a23u); f_0062fbf0();
    /* 00521a23: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00521a26: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00521a29: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00521a2c: mov esp, ebp */ r_esp = r_ebp;
    /* 00521a2e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00521a2f: ret  */ FN_RET(0x00521a10); r_esp += 4; return;
}

void f_00521a30(void) /* sub_521A30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00521a30);
    /* 00521a30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00521a31: mov ebp, esp */ r_ebp = r_esp;
    /* 00521a33: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00521a36: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00521a39: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00521a3b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00521a3d: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x521a42u); f_0064c8a0();
    /* 00521a42: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00521a45: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00521a48: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00521a4b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00521a4e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00521a51: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00521a54: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00521a57: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 00521a5d: call 0x528000 */ r_esp -= 4; W32(r_esp, 0x521a62u); f_00528000();
    /* 00521a62: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00521a65: mov edx, dword ptr [0x793370] */ r_edx = R32((u32)(0x793370u));
    /* 00521a6b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00521a6d: mov ecx, dword ptr [0x793370] */ r_ecx = R32((u32)(0x793370u));
    /* 00521a73: mov edx, dword ptr [eax + 0x2b0] */ r_edx = R32((u32)(r_eax+0x2b0u));
    /* 00521a79: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x521a7bu); call_ind(t); }
    /* 00521a7b: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00521a7e: mov eax, dword ptr [0x793370] */ r_eax = R32((u32)(0x793370u));
    /* 00521a83: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00521a85: mov ecx, dword ptr [0x793370] */ r_ecx = R32((u32)(0x793370u));
    /* 00521a8b: mov eax, dword ptr [edx + 0x2b4] */ r_eax = R32((u32)(r_edx+0x2b4u));
    /* 00521a91: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x521a93u); call_ind(t); }
    /* 00521a93: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00521a96: lea ecx, [ebp - 0x28] */ r_ecx = (u32)(r_ebp+0xffffffd8u);
    /* 00521a99: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00521a9a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00521a9d: call 0x5d5a90 */ r_esp -= 4; W32(r_esp, 0x521aa2u); f_005d5a90();
    /* 00521aa2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00521aa4: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00521aa7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00521aaa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00521aab: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00521aae: call 0x521660 */ r_esp -= 4; W32(r_esp, 0x521ab3u); f_00521660();
    /* 00521ab3: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00521ab6: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00521aba: je 0x521ada */ if (fZ) goto L_00521ada;
L_00521abc:; BB(0x00521abc);
    /* 00521abc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00521abf: cmp ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00521ac2: jle 0x521ada */ if ((fZ||fS!=fO)) goto L_00521ada;
L_00521ac4:; BB(0x00521ac4);
    /* 00521ac4: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00521ac7: cmp edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00521aca: jge 0x521ada */ if ((fS==fO)) goto L_00521ada;
L_00521acc:; BB(0x00521acc);
    /* 00521acc: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00521acf: cmp eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00521ad2: jle 0x521ada */ if ((fZ||fS!=fO)) goto L_00521ada;
L_00521ad4:; BB(0x00521ad4);
    /* 00521ad4: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00521ad7: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
L_00521ada:; BB(0x00521ada);
    /* 00521ada: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00521add: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x521ae2u); f_0063aac0();
    /* 00521ae2: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00521ae5: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00521ae8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00521aeb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00521aec: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00521aef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00521af0: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00521af3: call 0x521900 */ r_esp -= 4; W32(r_esp, 0x521af8u); f_00521900();
    /* 00521af8: mov ecx, dword ptr [eax*4 + 0x721c78] */ r_ecx = R32((u32)(r_eax*4+0x721c78u));
    /* 00521aff: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00521b00: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00521b03: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00521b04: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00521b07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00521b08: push 0x6c2e00 */ { u32 v = 0x6c2e00u; r_esp -= 4; W32(r_esp, v); }
    /* 00521b0d: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x521b12u); f_0062fde0();
    /* 00521b12: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00521b15: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00521b17: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00521b19: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 00521b1c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00521b1d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00521b20: mov eax, dword ptr [0x793374] */ r_eax = R32((u32)(0x793374u));
    /* 00521b25: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 00521b29: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00521b2c: mov eax, dword ptr [0x793374] */ r_eax = R32((u32)(0x793374u));
    /* 00521b31: mov edx, dword ptr [eax + edx*4 + 4] */ r_edx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 00521b35: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00521b37: mov ecx, edx */ r_ecx = r_edx;
    /* 00521b39: mov edx, dword ptr [eax + 0xc4] */ r_edx = R32((u32)(r_eax+0xc4u));
    /* 00521b3f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x521b41u); call_ind(t); }
    /* 00521b41: mov esp, ebp */ r_esp = r_ebp;
    /* 00521b43: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00521b44: ret 8 */ FN_RET(0x00521a30); r_esp += 12; return;
}

