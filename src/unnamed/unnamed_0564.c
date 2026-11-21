#include "protos.h"

void f_005640f0(void) /* sub_5640F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005640f0);
    /* 005640f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005640f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005640f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005640f5: push 0x6a5b01 */ { u32 v = 0x6a5b01u; r_esp -= 4; W32(r_esp, v); }
    /* 005640fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00564100: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00564101: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00564104: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00564109: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0056410b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056410c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0056410f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00564115: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 00564118: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 0056411f: jmp 0x56412a */ goto L_0056412a;
L_00564121:; BB(0x00564121);
    /* 00564121: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00564124: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00564127: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_0056412a:; BB(0x0056412a);
    /* 0056412a: cmp dword ptr [ebp - 0x18], 0x31 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x31u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056412e: jge 0x5643c9 */ if ((fS==fO)) goto L_005643c9;
L_00564134:; BB(0x00564134);
    /* 00564134: push 0x17c */ { u32 v = 0x17cu; r_esp -= 4; W32(r_esp, v); }
    /* 00564139: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x56413eu); f_00686d82();
    /* 0056413e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00564141: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00564144: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056414b: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056414f: je 0x56415e */ if (fZ) goto L_0056415e;
L_00564151:; BB(0x00564151);
    /* 00564151: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00564154: call 0x563b40 */ r_esp -= 4; W32(r_esp, 0x564159u); f_00563b40();
    /* 00564159: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0056415c: jmp 0x564165 */ goto L_00564165;
L_0056415e:; BB(0x0056415e);
    /* 0056415e: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_00564165:; BB(0x00564165);
    /* 00564165: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00564168: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0056416b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00564172: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00564175: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00564178: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0056417b: mov dword ptr [eax + edx*4 + 4], ecx */ W32((u32)(r_eax+r_edx*4+0x4u), r_ecx);
    /* 0056417f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00564181: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00564183: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00564185: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00564187: push 0x31222a */ { u32 v = 0x31222au; r_esp -= 4; W32(r_esp, v); }
    /* 0056418c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056418f: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00564192: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 00564196: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x56419bu); f_005eae80();
    /* 0056419b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056419e: shl ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005641a0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005641a1: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005641a4: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005641a7: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 005641ab: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005641ae: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005641b1: mov edx, dword ptr [eax + edx*4 + 4] */ r_edx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 005641b5: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005641b7: mov ecx, edx */ r_ecx = r_edx;
    /* 005641b9: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 005641bf: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5641c1u); call_ind(t); }
    /* 005641c1: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005641c4: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005641c7: mov edx, dword ptr [ecx + eax*4 + 4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 005641cb: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005641ce: mov dword ptr [edx + 0x178], eax */ W32((u32)(r_edx+0x178u), r_eax);
    /* 005641d4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005641d7: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005641da: mov eax, dword ptr [edx + ecx*4 + 4] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 005641de: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005641e1: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005641e4: mov ecx, dword ptr [edx + ecx*4 + 4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 005641e8: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005641ea: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 005641ed: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5641efu); call_ind(t); }
    /* 005641ef: sub eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005641f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005641f3: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005641f6: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005641f9: mov edx, dword ptr [ecx + eax*4 + 4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 005641fd: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00564200: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00564203: mov ecx, dword ptr [ecx + eax*4 + 4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 00564207: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00564209: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 0056420c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56420eu); call_ind(t); }
    /* 0056420e: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 00564215: jmp 0x564220 */ goto L_00564220;
L_00564217:; BB(0x00564217);
    /* 00564217: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0056421a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0056421d: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
L_00564220:; BB(0x00564220);
    /* 00564220: cmp dword ptr [ebp - 0x1c], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00564224: jge 0x564304 */ if ((fS==fO)) goto L_00564304;
L_0056422a:; BB(0x0056422a);
    /* 0056422a: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 0056422d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056422e: lea eax, [ebp - 0x14] */ r_eax = (u32)(r_ebp+0xffffffecu);
    /* 00564231: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00564232: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00564235: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00564236: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00564239: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056423a: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0056423d: call 0x564450 */ r_esp -= 4; W32(r_esp, 0x564242u); f_00564450();
    /* 00564242: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 00564247: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x56424cu); f_00686d82();
    /* 0056424c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056424f: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00564252: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00564259: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056425d: je 0x56426c */ if (fZ) goto L_0056426c;
L_0056425f:; BB(0x0056425f);
    /* 0056425f: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00564262: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x564267u); f_005eaaf0();
    /* 00564267: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0056426a: jmp 0x564273 */ goto L_00564273;
L_0056426c:; BB(0x0056426c);
    /* 0056426c: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_00564273:; BB(0x00564273);
    /* 00564273: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00564276: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00564279: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00564280: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00564283: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00564286: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00564289: lea eax, [edx + ecx + 0xc8] */ r_eax = (u32)(r_edx+r_ecx+0xc8u);
    /* 00564290: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00564293: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00564296: mov dword ptr [eax + ecx*4], edx */ W32((u32)(r_eax+r_ecx*4), r_edx);
    /* 00564299: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0056429b: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0056429d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005642a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005642a1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005642a4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005642a5: push 0x312236 */ { u32 v = 0x312236u; r_esp -= 4; W32(r_esp, v); }
    /* 005642aa: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005642ad: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005642b0: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005642b3: lea ecx, [eax + edx + 0xc8] */ r_ecx = (u32)(r_eax+r_edx+0xc8u);
    /* 005642ba: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005642bd: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 005642c0: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x5642c5u); f_005eae80();
    /* 005642c5: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 005642c7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005642ca: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005642cd: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005642d0: lea edx, [ecx + eax + 0xc8] */ r_edx = (u32)(r_ecx+r_eax+0xc8u);
    /* 005642d7: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005642da: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 005642dd: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005642e0: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005642e3: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005642e6: lea edx, [eax + edx + 0xc8] */ r_edx = (u32)(r_eax+r_edx+0xc8u);
    /* 005642ed: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005642f0: mov edx, dword ptr [edx + eax*4] */ r_edx = R32((u32)(r_edx+r_eax*4));
    /* 005642f3: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005642f5: mov ecx, edx */ r_ecx = r_edx;
    /* 005642f7: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 005642fd: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5642ffu); call_ind(t); }
    /* 005642ff: jmp 0x564217 */ goto L_00564217;
L_00564304:; BB(0x00564304);
    /* 00564304: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00564306: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x56430bu); f_00686d82();
    /* 0056430b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056430e: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00564311: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00564318: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056431c: je 0x56432b */ if (fZ) goto L_0056432b;
L_0056431e:; BB(0x0056431e);
    /* 0056431e: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00564321: call 0x5655d0 */ r_esp -= 4; W32(r_esp, 0x564326u); f_005655d0();
    /* 00564326: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00564329: jmp 0x564332 */ goto L_00564332;
L_0056432b:; BB(0x0056432b);
    /* 0056432b: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_00564332:; BB(0x00564332);
    /* 00564332: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00564335: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00564338: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056433f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00564342: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00564345: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00564348: mov dword ptr [edx + ecx*4 + 0x49c], eax */ W32((u32)(r_edx+r_ecx*4+0x49cu), r_eax);
    /* 0056434f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00564352: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00564355: mov ecx, dword ptr [edx + ecx*4 + 0x49c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x49cu));
    /* 0056435c: call 0x5656f0 */ r_esp -= 4; W32(r_esp, 0x564361u); f_005656f0();
    /* 00564361: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00564364: add eax, 0x64 */ {  u32 a = r_eax; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00564367: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00564368: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056436b: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0056436e: mov ecx, dword ptr [edx + ecx*4 + 0x49c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x49cu));
    /* 00564375: call 0x565a50 */ r_esp -= 4; W32(r_esp, 0x56437au); f_00565a50();
    /* 0056437a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056437c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056437f: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00564382: mov ecx, dword ptr [ecx + eax*4 + 0x49c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x49cu));
    /* 00564389: call 0x5664c0 */ r_esp -= 4; W32(r_esp, 0x56438eu); f_005664c0();
    /* 0056438e: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 00564390: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00564393: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00564396: mov ecx, dword ptr [eax + edx*4 + 0x49c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x49cu));
    /* 0056439d: call 0x5658c0 */ r_esp -= 4; W32(r_esp, 0x5643a2u); f_005658c0();
    /* 005643a2: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005643a5: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005643a8: mov dword ptr [edx + ecx*4 + 0x6bc], 0xffffffff */ W32((u32)(r_edx+r_ecx*4+0x6bcu), 0xffffffffu);
    /* 005643b3: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005643b6: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005643b9: mov dword ptr [ecx + eax*4 + 0x780], 0 */ W32((u32)(r_ecx+r_eax*4+0x780u), 0x0u);
    /* 005643c4: jmp 0x564121 */ goto L_00564121;
L_005643c9:; BB(0x005643c9);
    /* 005643c9: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 005643cb: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5643d0u); f_00686d82();
    /* 005643d0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005643d3: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005643d6: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 005643dd: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005643e1: je 0x5643f0 */ if (fZ) goto L_005643f0;
L_005643e3:; BB(0x005643e3);
    /* 005643e3: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005643e6: call 0x563580 */ r_esp -= 4; W32(r_esp, 0x5643ebu); f_00563580();
    /* 005643eb: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 005643ee: jmp 0x5643f7 */ goto L_005643f7;
L_005643f0:; BB(0x005643f0);
    /* 005643f0: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_005643f7:; BB(0x005643f7);
    /* 005643f7: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005643fa: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 005643fd: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00564404: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00564407: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0056440a: mov dword ptr [eax + 0x560], ecx */ W32((u32)(r_eax+0x560u), r_ecx);
    /* 00564410: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00564413: mov ecx, dword ptr [edx + 0x560] */ r_ecx = R32((u32)(r_edx+0x560u));
    /* 00564419: call 0x563710 */ r_esp -= 4; W32(r_esp, 0x56441eu); f_00563710();
    /* 0056441e: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00564421: mov ecx, dword ptr [eax + 0x560] */ r_ecx = R32((u32)(r_eax+0x560u));
    /* 00564427: call 0x563ad0 */ r_esp -= 4; W32(r_esp, 0x56442cu); f_00563ad0();
    /* 0056442c: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0056442f: mov byte ptr [ecx + 0x90c], 1 */ W8((u32)(r_ecx+0x90cu), 0x1u);
    /* 00564436: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00564439: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00564440: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00564441: mov esp, ebp */ r_esp = r_ebp;
    /* 00564443: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00564444: ret  */ FN_RET(0x005640f0); r_esp += 4; return;
}

void f_00564450(void) /* sub_564450 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00564450);
    /* 00564450: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00564451: mov ebp, esp */ r_ebp = r_esp;
    /* 00564453: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00564454: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00564457: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0056445a: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0056445d: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00564460: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00564463: mov eax, dword ptr [eax + edx*8 + 0x744098] */ r_eax = R32((u32)(r_eax+r_edx*8+0x744098u));
    /* 0056446a: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0056446c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0056446f: imul ecx, ecx, 0x28 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x28u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00564472: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00564475: mov eax, dword ptr [ecx + edx*8 + 0x74409c] */ r_eax = R32((u32)(r_ecx+r_edx*8+0x74409cu));
    /* 0056447c: sub eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0056447f: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00564482: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 00564484: mov esp, ebp */ r_esp = r_ebp;
    /* 00564486: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00564487: ret 0x10 */ FN_RET(0x00564450); r_esp += 20; return;
}

void f_00564490(void) /* sub_564490 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00564490);
    /* 00564490: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00564491: mov ebp, esp */ r_ebp = r_esp;
    /* 00564493: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00564496: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00564499: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005644a0: jmp 0x5644ab */ goto L_005644ab;
L_005644a2:; BB(0x005644a2);
    /* 005644a2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005644a5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005644a8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005644ab:; BB(0x005644ab);
    /* 005644ab: cmp dword ptr [ebp - 4], 0x31 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x31u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005644af: jge 0x5645b5 */ if ((fS==fO)) goto L_005645b5;
L_005644b5:; BB(0x005644b5);
    /* 005644b5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005644b8: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005644bb: movzx edx, byte ptr [ecx + 0x564] */ r_edx = (u32)R8((u32)(r_ecx+0x564u));
    /* 005644c2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005644c4: je 0x564568 */ if (fZ) goto L_00564568;
L_005644ca:; BB(0x005644ca);
    /* 005644ca: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005644cd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005644d0: mov edx, dword ptr [ecx + eax*4 + 4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 005644d4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005644d7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005644da: mov ecx, dword ptr [ecx + eax*4 + 4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 005644de: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005644e0: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005644e3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5644e5u); call_ind(t); }
    /* 005644e5: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005644ea: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005644ed: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005644f0: mov ecx, dword ptr [edx + ecx*4 + 4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 005644f4: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x5644f9u); f_005eb5d0();
    /* 005644f9: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00564500: jmp 0x56450b */ goto L_0056450b;
L_00564502:; BB(0x00564502);
    /* 00564502: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00564505: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00564508: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0056450b:; BB(0x0056450b);
    /* 0056450b: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056450f: jge 0x564566 */ if ((fS==fO)) goto L_00564566;
L_00564511:; BB(0x00564511);
    /* 00564511: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00564514: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00564517: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056451a: lea eax, [edx + ecx + 0xc8] */ r_eax = (u32)(r_edx+r_ecx+0xc8u);
    /* 00564521: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00564524: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 00564527: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056452a: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0056452d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00564530: lea eax, [ecx + eax + 0xc8] */ r_eax = (u32)(r_ecx+r_eax+0xc8u);
    /* 00564537: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056453a: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 0056453d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0056453f: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00564542: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x564544u); call_ind(t); }
    /* 00564544: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00564549: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056454c: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0056454f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00564552: lea eax, [edx + ecx + 0xc8] */ r_eax = (u32)(r_edx+r_ecx+0xc8u);
    /* 00564559: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056455c: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 0056455f: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x564564u); f_005eb5d0();
    /* 00564564: jmp 0x564502 */ goto L_00564502;
L_00564566:; BB(0x00564566);
    /* 00564566: jmp 0x5645b0 */ goto L_005645b0;
L_00564568:; BB(0x00564568);
    /* 00564568: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 0056456a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056456d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00564570: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 00564574: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x564579u); f_005eb5d0();
    /* 00564579: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00564580: jmp 0x56458b */ goto L_0056458b;
L_00564582:; BB(0x00564582);
    /* 00564582: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00564585: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00564588: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0056458b:; BB(0x0056458b);
    /* 0056458b: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056458f: jge 0x5645b0 */ if ((fS==fO)) goto L_005645b0;
L_00564591:; BB(0x00564591);
    /* 00564591: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00564593: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00564596: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00564599: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056459c: lea ecx, [eax + edx + 0xc8] */ r_ecx = (u32)(r_eax+r_edx+0xc8u);
    /* 005645a3: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005645a6: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 005645a9: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x5645aeu); f_005eb5d0();
    /* 005645ae: jmp 0x564582 */ goto L_00564582;
L_005645b0:; BB(0x005645b0);
    /* 005645b0: jmp 0x5644a2 */ goto L_005644a2;
L_005645b5:; BB(0x005645b5);
    /* 005645b5: mov esp, ebp */ r_esp = r_ebp;
    /* 005645b7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005645b8: ret  */ FN_RET(0x00564490); r_esp += 4; return;
}

void f_005645c0(void) /* sub_5645C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005645c0);
    /* 005645c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005645c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005645c3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005645c6: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005645c9: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 005645cd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005645cf: jne 0x5646a0 */ if (!fZ) goto L_005646a0;
L_005645d5:; BB(0x005645d5);
    /* 005645d5: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005645dc: jmp 0x5645e7 */ goto L_005645e7;
L_005645de:; BB(0x005645de);
    /* 005645de: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005645e1: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005645e4: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_005645e7:; BB(0x005645e7);
    /* 005645e7: cmp dword ptr [ebp - 8], 0x31 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x31u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005645eb: jge 0x56469b */ if ((fS==fO)) goto L_0056469b;
L_005645f1:; BB(0x005645f1);
    /* 005645f1: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005645f4: add edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005645f7: movzx eax, byte ptr [edx + 0x564] */ r_eax = (u32)R8((u32)(r_edx+0x564u));
    /* 005645fe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00564600: jne 0x564604 */ if (!fZ) goto L_00564604;
L_00564602:; BB(0x00564602);
    /* 00564602: jmp 0x5645de */ goto L_005645de;
L_00564604:; BB(0x00564604);
    /* 00564604: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0056460b: jmp 0x564616 */ goto L_00564616;
L_0056460d:; BB(0x0056460d);
    /* 0056460d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00564610: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00564613: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_00564616:; BB(0x00564616);
    /* 00564616: cmp dword ptr [ebp - 0x14], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056461a: jge 0x564696 */ if ((fS==fO)) goto L_00564696;
L_0056461c:; BB(0x0056461c);
    /* 0056461c: mov edx, dword ptr [0x79343c] */ r_edx = R32((u32)(0x79343cu));
    /* 00564622: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 00564625: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00564628: mov dx, word ptr [eax + ecx*2 + 0x3ac] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_eax+r_ecx*2+0x3acu))) & 0xffffu);
    /* 00564630: mov word ptr [ebp - 0xc], dx */ W16((u32)(r_ebp+0xfffffff4u), (u16)r_edx);
    /* 00564634: movzx eax, word ptr [ebp - 0xc] */ r_eax = (u32)R16((u32)(r_ebp+0xfffffff4u));
    /* 00564638: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056463a: je 0x56464e */ if (fZ) goto L_0056464e;
L_0056463c:; BB(0x0056463c);
    /* 0056463c: mov cx, word ptr [ebp - 0xc] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 00564640: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00564641: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00564644: call 0x564d10 */ r_esp -= 4; W32(r_esp, 0x564649u); f_00564d10();
    /* 00564649: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0056464c: jmp 0x564655 */ goto L_00564655;
L_0056464e:; BB(0x0056464e);
    /* 0056464e: mov dword ptr [ebp - 4], 0x35 */ W32((u32)(r_ebp+0xfffffffcu), 0x35u);
L_00564655:; BB(0x00564655);
    /* 00564655: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00564658: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00564659: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056465c: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0056465f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00564662: lea edx, [ecx + eax + 0xc8] */ r_edx = (u32)(r_ecx+r_eax+0xc8u);
    /* 00564669: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0056466c: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0056466f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00564672: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00564675: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00564678: lea edx, [eax + edx + 0xc8] */ r_edx = (u32)(r_eax+r_edx+0xc8u);
    /* 0056467f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00564682: mov edx, dword ptr [edx + eax*4] */ r_edx = R32((u32)(r_edx+r_eax*4));
    /* 00564685: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00564687: mov ecx, edx */ r_ecx = r_edx;
    /* 00564689: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 0056468f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x564691u); call_ind(t); }
    /* 00564691: jmp 0x56460d */ goto L_0056460d;
L_00564696:; BB(0x00564696);
    /* 00564696: jmp 0x5645de */ goto L_005645de;
L_0056469b:; BB(0x0056469b);
    /* 0056469b: jmp 0x56475b */ goto L_0056475b;
L_005646a0:; BB(0x005646a0);
    /* 005646a0: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005646a7: jmp 0x5646b2 */ goto L_005646b2;
L_005646a9:; BB(0x005646a9);
    /* 005646a9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005646ac: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005646af: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005646b2:; BB(0x005646b2);
    /* 005646b2: cmp dword ptr [ebp - 8], 0x31 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x31u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005646b6: jge 0x56475b */ if ((fS==fO)) goto L_0056475b;
L_005646bc:; BB(0x005646bc);
    /* 005646bc: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005646bf: add ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005646c2: movzx edx, byte ptr [ecx + 0x564] */ r_edx = (u32)R8((u32)(r_ecx+0x564u));
    /* 005646c9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005646cb: jne 0x5646cf */ if (!fZ) goto L_005646cf;
L_005646cd:; BB(0x005646cd);
    /* 005646cd: jmp 0x5646a9 */ goto L_005646a9;
L_005646cf:; BB(0x005646cf);
    /* 005646cf: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 005646d6: jmp 0x5646e1 */ goto L_005646e1;
L_005646d8:; BB(0x005646d8);
    /* 005646d8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005646db: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005646de: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_005646e1:; BB(0x005646e1);
    /* 005646e1: cmp dword ptr [ebp - 0x14], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005646e5: jge 0x564756 */ if ((fS==fO)) goto L_00564756;
L_005646e7:; BB(0x005646e7);
    /* 005646e7: mov ecx, dword ptr [0x79343c] */ r_ecx = R32((u32)(0x79343cu));
    /* 005646ed: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 005646f0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005646f3: imul eax, eax, 0xa */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xau; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005646f6: lea ecx, [edx + eax + 0xf6] */ r_ecx = (u32)(r_edx+r_eax+0xf6u);
    /* 005646fd: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00564700: mov ax, word ptr [ecx + edx*2] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ecx+r_edx*2))) & 0xffffu);
    /* 00564704: mov word ptr [ebp - 0x10], ax */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_eax);
    /* 00564708: mov cx, word ptr [ebp - 0x10] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 0056470c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056470d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00564710: call 0x564d10 */ r_esp -= 4; W32(r_esp, 0x564715u); f_00564d10();
    /* 00564715: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00564718: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056471b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056471c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056471f: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00564722: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00564725: lea edx, [ecx + eax + 0xc8] */ r_edx = (u32)(r_ecx+r_eax+0xc8u);
    /* 0056472c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0056472f: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 00564732: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00564735: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00564738: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056473b: lea edx, [eax + edx + 0xc8] */ r_edx = (u32)(r_eax+r_edx+0xc8u);
    /* 00564742: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00564745: mov edx, dword ptr [edx + eax*4] */ r_edx = R32((u32)(r_edx+r_eax*4));
    /* 00564748: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0056474a: mov ecx, edx */ r_ecx = r_edx;
    /* 0056474c: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 00564752: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x564754u); call_ind(t); }
    /* 00564754: jmp 0x5646d8 */ goto L_005646d8;
L_00564756:; BB(0x00564756);
    /* 00564756: jmp 0x5646a9 */ goto L_005646a9;
L_0056475b:; BB(0x0056475b);
    /* 0056475b: mov esp, ebp */ r_esp = r_ebp;
    /* 0056475d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056475e: ret 4 */ FN_RET(0x005645c0); r_esp += 8; return;
}

void f_00564770(void) /* sub_564770 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00564770);
    /* 00564770: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00564771: mov ebp, esp */ r_ebp = r_esp;
    /* 00564773: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00564776: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00564779: movzx eax, byte ptr [ebp + 0x10] */ r_eax = (u32)R8((u32)(r_ebp+0x10u));
    /* 0056477d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056477f: je 0x5647f0 */ if (fZ) goto L_005647f0;
L_00564781:; BB(0x00564781);
    /* 00564781: mov ecx, dword ptr [0x79343c] */ r_ecx = R32((u32)(0x79343cu));
    /* 00564787: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 0056478a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0056478d: imul eax, eax, 0xa */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xau; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00564790: lea ecx, [edx + eax + 0xf6] */ r_ecx = (u32)(r_edx+r_eax+0xf6u);
    /* 00564797: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0056479a: mov ax, word ptr [ecx + edx*2] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ecx+r_edx*2))) & 0xffffu);
    /* 0056479e: mov word ptr [ebp - 0xc], ax */ W16((u32)(r_ebp+0xfffffff4u), (u16)r_eax);
    /* 005647a2: mov cx, word ptr [ebp - 0xc] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 005647a6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005647a7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005647aa: call 0x564d10 */ r_esp -= 4; W32(r_esp, 0x5647afu); f_00564d10();
    /* 005647af: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005647b2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005647b5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005647b6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005647b9: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005647bc: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005647bf: lea edx, [ecx + eax + 0xc8] */ r_edx = (u32)(r_ecx+r_eax+0xc8u);
    /* 005647c6: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005647c9: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 005647cc: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005647cf: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005647d2: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005647d5: lea edx, [eax + edx + 0xc8] */ r_edx = (u32)(r_eax+r_edx+0xc8u);
    /* 005647dc: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005647df: mov edx, dword ptr [edx + eax*4] */ r_edx = R32((u32)(r_edx+r_eax*4));
    /* 005647e2: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005647e4: mov ecx, edx */ r_ecx = r_edx;
    /* 005647e6: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 005647ec: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5647eeu); call_ind(t); }
    /* 005647ee: jmp 0x564862 */ goto L_00564862;
L_005647f0:; BB(0x005647f0);
    /* 005647f0: mov eax, dword ptr [0x79343c] */ r_eax = R32((u32)(0x79343cu));
    /* 005647f5: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 005647f8: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005647fb: mov ax, word ptr [ecx + edx*2 + 0x3ac] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ecx+r_edx*2+0x3acu))) & 0xffffu);
    /* 00564803: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
    /* 00564807: movzx ecx, word ptr [ebp - 8] */ r_ecx = (u32)R16((u32)(r_ebp+0xfffffff8u));
    /* 0056480b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056480d: je 0x564821 */ if (fZ) goto L_00564821;
L_0056480f:; BB(0x0056480f);
    /* 0056480f: mov dx, word ptr [ebp - 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 00564813: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00564814: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00564817: call 0x564d10 */ r_esp -= 4; W32(r_esp, 0x56481cu); f_00564d10();
    /* 0056481c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0056481f: jmp 0x564828 */ goto L_00564828;
L_00564821:; BB(0x00564821);
    /* 00564821: mov dword ptr [ebp - 4], 0x35 */ W32((u32)(r_ebp+0xfffffffcu), 0x35u);
L_00564828:; BB(0x00564828);
    /* 00564828: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056482b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056482c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0056482f: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00564832: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00564835: lea eax, [edx + ecx + 0xc8] */ r_eax = (u32)(r_edx+r_ecx+0xc8u);
    /* 0056483c: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0056483f: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 00564842: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00564845: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00564848: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056484b: lea eax, [ecx + eax + 0xc8] */ r_eax = (u32)(r_ecx+r_eax+0xc8u);
    /* 00564852: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00564855: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 00564858: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0056485a: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00564860: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x564862u); call_ind(t); }
L_00564862:; BB(0x00564862);
    /* 00564862: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00564865: imul ecx, ecx, 5 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x5u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00564868: add ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0056486b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056486e: mov byte ptr [edx + ecx + 0x595], 1 */ W8((u32)(r_edx+r_ecx+0x595u), 0x1u);
    /* 00564876: mov esp, ebp */ r_esp = r_ebp;
    /* 00564878: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00564879: ret 0xc */ FN_RET(0x00564770); r_esp += 16; return;
}

void f_00564880(void) /* sub_564880 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00564880);
    /* 00564880: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00564881: mov ebp, esp */ r_ebp = r_esp;
    /* 00564883: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00564886: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00564889: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056488b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0056488e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056488f: mov ecx, dword ptr [0x79343c] */ r_ecx = R32((u32)(0x79343cu));
    /* 00564895: mov ecx, dword ptr [ecx + 0x34] */ r_ecx = R32((u32)(r_ecx+0x34u));
    /* 00564898: call 0x56b950 */ r_esp -= 4; W32(r_esp, 0x56489du); f_0056b950();
    /* 0056489d: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005648a0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005648a2: jne 0x5648a9 */ if (!fZ) goto L_005648a9;
L_005648a4:; BB(0x005648a4);
    /* 005648a4: jmp 0x5649d3 */ goto L_005649d3;
L_005648a9:; BB(0x005648a9);
    /* 005648a9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005648ac: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005648af: mov edx, dword ptr [ecx + eax*4 + 0x6bc] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x6bcu));
    /* 005648b6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005648b7: mov ecx, dword ptr [0x793440] */ r_ecx = R32((u32)(0x793440u));
    /* 005648bd: call 0x5604b0 */ r_esp -= 4; W32(r_esp, 0x5648c2u); f_005604b0();
    /* 005648c2: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005648c5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005648c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005648c9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005648cc: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005648cf: mov ecx, dword ptr [edx + ecx*4 + 4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 005648d3: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x5648d8u); f_005eaf00();
    /* 005648d8: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005648db: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005648de: mov byte ptr [eax + 0x68a], 1 */ W8((u32)(r_eax+0x68au), 0x1u);
    /* 005648e5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005648e8: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005648eb: cmp dword ptr [edx + ecx*4 + 0x6bc], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x6bcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005648f3: jl 0x5649af */ if ((fS!=fO)) goto L_005649af;
L_005648f9:; BB(0x005648f9);
    /* 005648f9: mov eax, dword ptr [0x79343c] */ r_eax = R32((u32)(0x79343cu));
    /* 005648fe: movzx ecx, byte ptr [eax + 0x2e] */ r_ecx = (u32)R8((u32)(r_eax+0x2eu));
    /* 00564902: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00564904: jne 0x56491f */ if (!fZ) goto L_0056491f;
L_00564906:; BB(0x00564906);
    /* 00564906: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00564909: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056490c: mov ecx, dword ptr [eax + edx*4 + 0x6bc] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x6bcu));
    /* 00564913: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00564914: mov ecx, dword ptr [0x793440] */ r_ecx = R32((u32)(0x793440u));
    /* 0056491a: call 0x562a00 */ r_esp -= 4; W32(r_esp, 0x56491fu); f_00562a00();
L_0056491f:; BB(0x0056491f);
    /* 0056491f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00564922: lea eax, [edx + edx + 1] */ r_eax = (u32)(r_edx+r_edx+0x1u);
    /* 00564926: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00564927: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0056492a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056492d: mov eax, dword ptr [edx + ecx*4 + 4] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 00564931: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00564934: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00564937: mov ecx, dword ptr [edx + ecx*4 + 4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 0056493b: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0056493d: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 00564943: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x564945u); call_ind(t); }
    /* 00564945: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00564948: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056494b: lea edx, [ecx + eax*4 + 0x6bc] */ r_edx = (u32)(r_ecx+r_eax*4+0x6bcu);
    /* 00564952: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00564953: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00564956: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00564957: mov ecx, dword ptr [0x79343c] */ r_ecx = R32((u32)(0x79343cu));
    /* 0056495d: mov ecx, dword ptr [ecx + 0x34] */ r_ecx = R32((u32)(r_ecx+0x34u));
    /* 00564960: call 0x56b710 */ r_esp -= 4; W32(r_esp, 0x564965u); f_0056b710();
    /* 00564965: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00564968: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056496b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056496c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0056496f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00564972: mov edx, dword ptr [ecx + eax*4 + 0x6bc] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x6bcu));
    /* 00564979: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056497a: mov ecx, dword ptr [0x793440] */ r_ecx = R32((u32)(0x793440u));
    /* 00564980: call 0x560360 */ r_esp -= 4; W32(r_esp, 0x564985u); f_00560360();
    /* 00564985: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00564988: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00564989: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0056498c: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056498f: mov ecx, dword ptr [edx + ecx*4 + 0x49c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x49cu));
    /* 00564996: call 0x5664c0 */ r_esp -= 4; W32(r_esp, 0x56499bu); f_005664c0();
    /* 0056499b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0056499e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005649a1: mov ecx, dword ptr [ecx + eax*4 + 0x49c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x49cu));
    /* 005649a8: call 0x566210 */ r_esp -= 4; W32(r_esp, 0x5649adu); f_00566210();
    /* 005649ad: jmp 0x5649d3 */ goto L_005649d3;
L_005649af:; BB(0x005649af);
    /* 005649af: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005649b2: shl edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005649b4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005649b5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005649b8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005649bb: mov edx, dword ptr [ecx + eax*4 + 4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 005649bf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005649c2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005649c5: mov ecx, dword ptr [ecx + eax*4 + 4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 005649c9: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005649cb: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005649d1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5649d3u); call_ind(t); }
L_005649d3:; BB(0x005649d3);
    /* 005649d3: mov esp, ebp */ r_esp = r_ebp;
    /* 005649d5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005649d6: ret 4 */ FN_RET(0x00564880); r_esp += 8; return;
}

void f_005649e0(void) /* sub_5649E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005649e0);
    /* 005649e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005649e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005649e3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005649e6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005649e9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005649f0: jmp 0x5649fb */ goto L_005649fb;
L_005649f2:; BB(0x005649f2);
    /* 005649f2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005649f5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005649f8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005649fb:; BB(0x005649fb);
    /* 005649fb: cmp dword ptr [ebp - 4], 0x31 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x31u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005649ff: jge 0x564a6f */ if ((fS==fO)) goto L_00564a6f;
L_00564a01:; BB(0x00564a01);
    /* 00564a01: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00564a04: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00564a07: mov ecx, dword ptr [edx + ecx*4 + 0x49c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x49cu));
    /* 00564a0e: call 0x566310 */ r_esp -= 4; W32(r_esp, 0x564a13u); f_00566310();
    /* 00564a13: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00564a16: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00564a19: movzx ecx, byte ptr [eax + 0x564] */ r_ecx = (u32)R8((u32)(r_eax+0x564u));
    /* 00564a20: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00564a22: jne 0x564a26 */ if (!fZ) goto L_00564a26;
L_00564a24:; BB(0x00564a24);
    /* 00564a24: jmp 0x5649f2 */ goto L_005649f2;
L_00564a26:; BB(0x00564a26);
    /* 00564a26: push 0x31222a */ { u32 v = 0x31222au; r_esp -= 4; W32(r_esp, v); }
    /* 00564a2b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00564a2e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00564a31: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 00564a35: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x564a3au); f_005eaf00();
    /* 00564a3a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00564a3d: shl ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00564a3f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00564a40: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00564a43: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00564a46: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 00564a4a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00564a4d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00564a50: mov edx, dword ptr [eax + edx*4 + 4] */ r_edx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 00564a54: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00564a56: mov ecx, edx */ r_ecx = r_edx;
    /* 00564a58: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 00564a5e: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x564a60u); call_ind(t); }
    /* 00564a60: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00564a63: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00564a66: mov byte ptr [eax + 0x68a], 0 */ W8((u32)(r_eax+0x68au), 0x0u);
    /* 00564a6d: jmp 0x5649f2 */ goto L_005649f2;
L_00564a6f:; BB(0x00564a6f);
    /* 00564a6f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00564a76: jmp 0x564a81 */ goto L_00564a81;
L_00564a78:; BB(0x00564a78);
    /* 00564a78: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00564a7b: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00564a7e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00564a81:; BB(0x00564a81);
    /* 00564a81: cmp dword ptr [ebp - 4], 0x31 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x31u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00564a85: jge 0x564af8 */ if ((fS==fO)) goto L_00564af8;
L_00564a87:; BB(0x00564a87);
    /* 00564a87: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00564a8a: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00564a8d: movzx eax, byte ptr [edx + 0x564] */ r_eax = (u32)R8((u32)(r_edx+0x564u));
    /* 00564a94: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00564a96: jne 0x564a9a */ if (!fZ) goto L_00564a9a;
L_00564a98:; BB(0x00564a98);
    /* 00564a98: jmp 0x564a78 */ goto L_00564a78;
L_00564a9a:; BB(0x00564a9a);
    /* 00564a9a: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00564aa1: jmp 0x564aac */ goto L_00564aac;
L_00564aa3:; BB(0x00564aa3);
    /* 00564aa3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00564aa6: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00564aa9: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_00564aac:; BB(0x00564aac);
    /* 00564aac: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00564ab0: jge 0x564af6 */ if ((fS==fO)) goto L_00564af6;
L_00564ab2:; BB(0x00564ab2);
    /* 00564ab2: mov edx, dword ptr [0x79343c] */ r_edx = R32((u32)(0x79343cu));
    /* 00564ab8: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 00564abb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00564abe: movzx edx, word ptr [eax + ecx*2 + 0x3ac] */ r_edx = (u32)R16((u32)(r_eax+r_ecx*2+0x3acu));
    /* 00564ac6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00564ac8: je 0x564ae0 */ if (fZ) goto L_00564ae0;
L_00564aca:; BB(0x00564aca);
    /* 00564aca: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00564acd: imul eax, eax, 5 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x5u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00564ad0: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00564ad3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00564ad6: mov byte ptr [ecx + eax + 0x595], 1 */ W8((u32)(r_ecx+r_eax+0x595u), 0x1u);
    /* 00564ade: jmp 0x564af4 */ goto L_00564af4;
L_00564ae0:; BB(0x00564ae0);
    /* 00564ae0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00564ae3: imul edx, edx, 5 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x5u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00564ae6: add edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00564ae9: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00564aec: mov byte ptr [eax + edx + 0x595], 0 */ W8((u32)(r_eax+r_edx+0x595u), 0x0u);
L_00564af4:; BB(0x00564af4);
    /* 00564af4: jmp 0x564aa3 */ goto L_00564aa3;
L_00564af6:; BB(0x00564af6);
    /* 00564af6: jmp 0x564a78 */ goto L_00564a78;
L_00564af8:; BB(0x00564af8);
    /* 00564af8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00564afb: mov byte ptr [ecx + 0x90c], 1 */ W8((u32)(r_ecx+0x90cu), 0x1u);
    /* 00564b02: mov esp, ebp */ r_esp = r_ebp;
    /* 00564b04: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00564b05: ret  */ FN_RET(0x005649e0); r_esp += 4; return;
}

void f_00564b10(void) /* sub_564B10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00564b10);
    /* 00564b10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00564b11: mov ebp, esp */ r_ebp = r_esp;
    /* 00564b13: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00564b16: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00564b19: mov eax, dword ptr [0x79343c] */ r_eax = R32((u32)(0x79343cu));
    /* 00564b1e: cmp dword ptr [eax + 0x14], 1 */ {  u32 a = R32((u32)(r_eax+0x14u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00564b22: jl 0x564b85 */ if ((fS!=fO)) goto L_00564b85;
L_00564b24:; BB(0x00564b24);
    /* 00564b24: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00564b2b: jmp 0x564b36 */ goto L_00564b36;
L_00564b2d:; BB(0x00564b2d);
    /* 00564b2d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00564b30: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00564b33: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00564b36:; BB(0x00564b36);
    /* 00564b36: cmp dword ptr [ebp - 4], 0x31 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x31u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00564b3a: jge 0x564b83 */ if ((fS==fO)) goto L_00564b83;
L_00564b3c:; BB(0x00564b3c);
    /* 00564b3c: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00564b3f: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00564b42: movzx eax, byte ptr [edx + 0x564] */ r_eax = (u32)R8((u32)(r_edx+0x564u));
    /* 00564b49: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00564b4b: jne 0x564b4f */ if (!fZ) goto L_00564b4f;
L_00564b4d:; BB(0x00564b4d);
    /* 00564b4d: jmp 0x564b2d */ goto L_00564b2d;
L_00564b4f:; BB(0x00564b4f);
    /* 00564b4f: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 00564b52: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00564b53: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00564b56: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00564b57: mov eax, dword ptr [0x79343c] */ r_eax = R32((u32)(0x79343cu));
    /* 00564b5c: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 00564b5f: call 0x56b710 */ r_esp -= 4; W32(r_esp, 0x564b64u); f_0056b710();
    /* 00564b64: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00564b67: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00564b6a: mov dword ptr [edx + ecx*4 + 0x780], eax */ W32((u32)(r_edx+r_ecx*4+0x780u), r_eax);
    /* 00564b71: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00564b74: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00564b77: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00564b7a: mov dword ptr [ecx + eax*4 + 0x6bc], edx */ W32((u32)(r_ecx+r_eax*4+0x6bcu), r_edx);
    /* 00564b81: jmp 0x564b2d */ goto L_00564b2d;
L_00564b83:; BB(0x00564b83);
    /* 00564b83: jmp 0x564bc1 */ goto L_00564bc1;
L_00564b85:; BB(0x00564b85);
    /* 00564b85: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00564b8c: jmp 0x564b97 */ goto L_00564b97;
L_00564b8e:; BB(0x00564b8e);
    /* 00564b8e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00564b91: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00564b94: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00564b97:; BB(0x00564b97);
    /* 00564b97: cmp dword ptr [ebp - 4], 0x31 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x31u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00564b9b: jge 0x564bc1 */ if ((fS==fO)) goto L_00564bc1;
L_00564b9d:; BB(0x00564b9d);
    /* 00564b9d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00564ba0: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00564ba3: mov dword ptr [edx + ecx*4 + 0x6bc], 0xffffffff */ W32((u32)(r_edx+r_ecx*4+0x6bcu), 0xffffffffu);
    /* 00564bae: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00564bb1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00564bb4: mov dword ptr [ecx + eax*4 + 0x780], 0 */ W32((u32)(r_ecx+r_eax*4+0x780u), 0x0u);
    /* 00564bbf: jmp 0x564b8e */ goto L_00564b8e;
L_00564bc1:; BB(0x00564bc1);
    /* 00564bc1: mov esp, ebp */ r_esp = r_ebp;
    /* 00564bc3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00564bc4: ret  */ FN_RET(0x00564b10); r_esp += 4; return;
}

void f_00564bd0(void) /* sub_564BD0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00564bd0);
    /* 00564bd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00564bd1: mov ebp, esp */ r_ebp = r_esp;
    /* 00564bd3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00564bd6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00564bd9: mov byte ptr [ebp - 5], 0 */ W8((u32)(r_ebp+0xfffffffbu), 0x0u);
    /* 00564bdd: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00564be4: jmp 0x564bef */ goto L_00564bef;
L_00564be6:; BB(0x00564be6);
    /* 00564be6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00564be9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00564bec: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00564bef:; BB(0x00564bef);
    /* 00564bef: cmp dword ptr [ebp - 4], 0x31 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x31u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00564bf3: jge 0x564cf0 */ if ((fS==fO)) goto L_00564cf0;
L_00564bf9:; BB(0x00564bf9);
    /* 00564bf9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00564bfc: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00564bff: movzx edx, byte ptr [ecx + 0x564] */ r_edx = (u32)R8((u32)(r_ecx+0x564u));
    /* 00564c06: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00564c08: jne 0x564c0c */ if (!fZ) goto L_00564c0c;
L_00564c0a:; BB(0x00564c0a);
    /* 00564c0a: jmp 0x564be6 */ goto L_00564be6;
L_00564c0c:; BB(0x00564c0c);
    /* 00564c0c: mov byte ptr [ebp - 5], 0 */ W8((u32)(r_ebp+0xfffffffbu), 0x0u);
    /* 00564c10: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00564c17: jmp 0x564c22 */ goto L_00564c22;
L_00564c19:; BB(0x00564c19);
    /* 00564c19: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00564c1c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00564c1f: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_00564c22:; BB(0x00564c22);
    /* 00564c22: cmp dword ptr [ebp - 0xc], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00564c26: jge 0x564ceb */ if ((fS==fO)) goto L_00564ceb;
L_00564c2c:; BB(0x00564c2c);
    /* 00564c2c: cmp dword ptr [ebp - 0xc], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00564c30: jne 0x564c89 */ if (!fZ) goto L_00564c89;
L_00564c32:; BB(0x00564c32);
    /* 00564c32: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00564c35: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00564c38: movzx edx, byte ptr [ecx + 0x68a] */ r_edx = (u32)R8((u32)(r_ecx+0x68au));
    /* 00564c3f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00564c41: jne 0x564c89 */ if (!fZ) goto L_00564c89;
L_00564c43:; BB(0x00564c43);
    /* 00564c43: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00564c46: imul eax, eax, 5 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x5u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00564c49: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00564c4c: movzx edx, byte ptr [ecx + eax + 0x599] */ r_edx = (u32)R8((u32)(r_ecx+r_eax+0x599u));
    /* 00564c54: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00564c56: je 0x564c85 */ if (fZ) goto L_00564c85;
L_00564c58:; BB(0x00564c58);
    /* 00564c58: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00564c5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00564c5c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00564c5f: call 0x564880 */ r_esp -= 4; W32(r_esp, 0x564c64u); f_00564880();
    /* 00564c64: mov ecx, dword ptr [0x79343c] */ r_ecx = R32((u32)(0x79343cu));
    /* 00564c6a: movzx edx, byte ptr [ecx + 0x19] */ r_edx = (u32)R8((u32)(r_ecx+0x19u));
    /* 00564c6e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00564c70: jne 0x564c83 */ if (!fZ) goto L_00564c83;
L_00564c72:; BB(0x00564c72);
    /* 00564c72: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00564c74: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00564c77: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00564c79: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00564c7c: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00564c7f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x564c81u); call_ind(t); }
    /* 00564c81: jmp 0x564d01 */ goto L_00564d01;
L_00564c83:; BB(0x00564c83);
    /* 00564c83: jmp 0x564c89 */ goto L_00564c89;
L_00564c85:; BB(0x00564c85);
    /* 00564c85: mov byte ptr [ebp - 5], 1 */ W8((u32)(r_ebp+0xfffffffbu), 0x1u);
L_00564c89:; BB(0x00564c89);
    /* 00564c89: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00564c8c: imul ecx, ecx, 5 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x5u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00564c8f: add ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00564c92: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00564c95: movzx eax, byte ptr [edx + ecx + 0x595] */ r_eax = (u32)R8((u32)(r_edx+r_ecx+0x595u));
    /* 00564c9d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00564c9f: jne 0x564ce6 */ if (!fZ) goto L_00564ce6;
L_00564ca1:; BB(0x00564ca1);
    /* 00564ca1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00564ca3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00564ca6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00564ca7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00564caa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00564cab: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00564cae: call 0x564770 */ r_esp -= 4; W32(r_esp, 0x564cb3u); f_00564770();
    /* 00564cb3: movzx eax, byte ptr [ebp - 5] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffffbu));
    /* 00564cb7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00564cb9: je 0x564cc7 */ if (fZ) goto L_00564cc7;
L_00564cbb:; BB(0x00564cbb);
    /* 00564cbb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00564cbe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00564cbf: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00564cc2: call 0x564880 */ r_esp -= 4; W32(r_esp, 0x564cc7u); f_00564880();
L_00564cc7:; BB(0x00564cc7);
    /* 00564cc7: mov edx, dword ptr [0x79343c] */ r_edx = R32((u32)(0x79343cu));
    /* 00564ccd: movzx eax, byte ptr [edx + 0x19] */ r_eax = (u32)R8((u32)(r_edx+0x19u));
    /* 00564cd1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00564cd3: jne 0x564ce6 */ if (!fZ) goto L_00564ce6;
L_00564cd5:; BB(0x00564cd5);
    /* 00564cd5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00564cd7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00564cda: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00564cdc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00564cdf: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00564ce2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x564ce4u); call_ind(t); }
    /* 00564ce4: jmp 0x564d01 */ goto L_00564d01;
L_00564ce6:; BB(0x00564ce6);
    /* 00564ce6: jmp 0x564c19 */ goto L_00564c19;
L_00564ceb:; BB(0x00564ceb);
    /* 00564ceb: jmp 0x564be6 */ goto L_00564be6;
L_00564cf0:; BB(0x00564cf0);
    /* 00564cf0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00564cf2: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00564cf4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00564cf7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00564cf9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00564cfc: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00564cff: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x564d01u); call_ind(t); }
L_00564d01:; BB(0x00564d01);
    /* 00564d01: mov esp, ebp */ r_esp = r_ebp;
    /* 00564d03: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00564d04: ret 4 */ FN_RET(0x00564bd0); r_esp += 8; return;
}

