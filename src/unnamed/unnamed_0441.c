#include "protos.h"

void f_004412f0(void) /* sub_4412F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004412f0);
    /* 004412f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004412f1: mov ebp, esp */ r_ebp = r_esp;
    /* 004412f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004412f5: push 0x69e9eb */ { u32 v = 0x69e9ebu; r_esp -= 4; W32(r_esp, v); }
    /* 004412fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00441300: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00441301: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00441304: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00441309: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0044130b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044130c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0044130f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00441315: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 00441318: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0044131f: jmp 0x44132a */ goto L_0044132a;
L_00441321:; BB(0x00441321);
    /* 00441321: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00441324: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00441327: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_0044132a:; BB(0x0044132a);
    /* 0044132a: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044132e: jge 0x441508 */ if ((fS==fO)) goto L_00441508;
L_00441334:; BB(0x00441334);
    /* 00441334: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00441337: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0044133a: cmp dword ptr [edx + ecx*4 + 4], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044133f: jne 0x4413ce */ if (!fZ) goto L_004413ce;
L_00441345:; BB(0x00441345);
    /* 00441345: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 0044134a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x44134fu); f_00686d82();
    /* 0044134f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00441352: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00441355: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044135c: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441360: je 0x44136f */ if (fZ) goto L_0044136f;
L_00441362:; BB(0x00441362);
    /* 00441362: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00441365: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x44136au); f_005f5bf0();
    /* 0044136a: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0044136d: jmp 0x441376 */ goto L_00441376;
L_0044136f:; BB(0x0044136f);
    /* 0044136f: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_00441376:; BB(0x00441376);
    /* 00441376: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00441379: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0044137c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00441383: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00441386: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00441389: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0044138c: mov dword ptr [edx + ecx*4 + 4], eax */ W32((u32)(r_edx+r_ecx*4+0x4u), r_eax);
    /* 00441390: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00441392: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00441395: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00441396: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00441399: call 0x43fab0 */ r_esp -= 4; W32(r_esp, 0x44139eu); f_0043fab0();
    /* 0044139e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004413a1: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004413a4: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 004413a8: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004413ab: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004413ae: mov edx, dword ptr [eax + edx*4 + 4] */ r_edx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 004413b2: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004413b4: mov ecx, edx */ r_ecx = r_edx;
    /* 004413b6: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 004413b9: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4413bbu); call_ind(t); }
    /* 004413bb: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004413be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004413bf: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004413c2: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 004413c5: mov ecx, dword ptr [edx + ecx*4 + 4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 004413c9: call 0x5f53e0 */ r_esp -= 4; W32(r_esp, 0x4413ceu); f_005f53e0();
L_004413ce:; BB(0x004413ce);
    /* 004413ce: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004413d1: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004413d4: mov edx, dword ptr [ecx + eax*4 + 4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 004413d8: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004413db: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004413de: mov ecx, dword ptr [ecx + eax*4 + 4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 004413e2: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004413e4: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 004413e7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4413e9u); call_ind(t); }
    /* 004413e9: mov ecx, 0xa */ r_ecx = 0xau;
    /* 004413ee: sub ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004413f1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004413f2: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004413f5: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004413f8: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 004413fc: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004413ff: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00441402: mov edx, dword ptr [eax + edx*4 + 4] */ r_edx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 00441406: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00441408: mov ecx, edx */ r_ecx = r_edx;
    /* 0044140a: mov edx, dword ptr [eax + 0x6c] */ r_edx = R32((u32)(r_eax+0x6cu));
    /* 0044140d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x44140fu); call_ind(t); }
    /* 0044140f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00441411: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00441414: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00441417: mov edx, dword ptr [ecx + eax*4 + 4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 0044141b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044141e: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00441421: mov ecx, dword ptr [ecx + eax*4 + 4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 00441425: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00441427: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0044142d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x44142fu); call_ind(t); }
    /* 0044142f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00441432: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00441435: cmp dword ptr [edx + ecx*4 + 0xb4], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0xb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044143d: jne 0x4414b1 */ if (!fZ) goto L_004414b1;
L_0044143f:; BB(0x0044143f);
    /* 0044143f: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 00441444: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x441449u); f_00686d82();
    /* 00441449: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044144c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0044144f: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00441456: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044145a: je 0x441469 */ if (fZ) goto L_00441469;
L_0044145c:; BB(0x0044145c);
    /* 0044145c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044145f: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x441464u); f_005eaaf0();
    /* 00441464: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00441467: jmp 0x441470 */ goto L_00441470;
L_00441469:; BB(0x00441469);
    /* 00441469: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_00441470:; BB(0x00441470);
    /* 00441470: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00441473: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00441476: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0044147d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00441480: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00441483: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00441486: mov dword ptr [edx + ecx*4 + 0xb4], eax */ W32((u32)(r_edx+r_ecx*4+0xb4u), r_eax);
    /* 0044148d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044148f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00441492: add ecx, 0x1a */ {  u32 a = r_ecx; u32 b = 0x1au; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00441495: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00441496: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00441498: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044149a: push 0x1d4f9 */ { u32 v = 0x1d4f9u; r_esp -= 4; W32(r_esp, v); }
    /* 0044149f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004414a2: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004414a5: mov ecx, dword ptr [eax + edx*4 + 0xb4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xb4u));
    /* 004414ac: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x4414b1u); f_005eae80();
L_004414b1:; BB(0x004414b1);
    /* 004414b1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004414b4: shl ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 004414b6: mov edx, 8 */ r_edx = 0x8u;
    /* 004414bb: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004414bd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004414be: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004414c1: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004414c4: mov edx, dword ptr [ecx + eax*4 + 0xb4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0xb4u));
    /* 004414cb: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004414ce: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004414d1: mov ecx, dword ptr [ecx + eax*4 + 0xb4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xb4u));
    /* 004414d8: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004414da: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 004414e0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4414e2u); call_ind(t); }
    /* 004414e2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004414e5: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 004414e8: mov eax, dword ptr [edx + ecx*4 + 0xb4] */ r_eax = R32((u32)(r_edx+r_ecx*4+0xb4u));
    /* 004414ef: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004414f2: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 004414f5: mov ecx, dword ptr [edx + ecx*4 + 0xb4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xb4u));
    /* 004414fc: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004414fe: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 00441501: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x441503u); call_ind(t); }
    /* 00441503: jmp 0x441321 */ goto L_00441321;
L_00441508:; BB(0x00441508);
    /* 00441508: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0044150b: cmp dword ptr [eax + 0xa8], 0 */ {  u32 a = R32((u32)(r_eax+0xa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441512: jne 0x441579 */ if (!fZ) goto L_00441579;
L_00441514:; BB(0x00441514);
    /* 00441514: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 00441519: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x44151eu); f_00686d82();
    /* 0044151e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00441521: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00441524: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0044152b: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044152f: je 0x44153e */ if (fZ) goto L_0044153e;
L_00441531:; BB(0x00441531);
    /* 00441531: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00441534: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x441539u); f_005eaaf0();
    /* 00441539: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0044153c: jmp 0x441545 */ goto L_00441545;
L_0044153e:; BB(0x0044153e);
    /* 0044153e: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_00441545:; BB(0x00441545);
    /* 00441545: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00441548: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0044154b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00441552: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00441555: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00441558: mov dword ptr [edx + 0xa8], eax */ W32((u32)(r_edx+0xa8u), r_eax);
    /* 0044155e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00441560: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 00441562: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00441564: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00441566: push 0x1d4e9 */ { u32 v = 0x1d4e9u; r_esp -= 4; W32(r_esp, v); }
    /* 0044156b: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0044156e: mov ecx, dword ptr [ecx + 0xa8] */ r_ecx = R32((u32)(r_ecx+0xa8u));
    /* 00441574: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x441579u); f_005eae80();
L_00441579:; BB(0x00441579);
    /* 00441579: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0044157c: cmp dword ptr [edx + 0xac], 0 */ {  u32 a = R32((u32)(r_edx+0xacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441583: jne 0x4415ea */ if (!fZ) goto L_004415ea;
L_00441585:; BB(0x00441585);
    /* 00441585: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0044158a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x44158fu); f_00686d82();
    /* 0044158f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00441592: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00441595: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0044159c: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004415a0: je 0x4415af */ if (fZ) goto L_004415af;
L_004415a2:; BB(0x004415a2);
    /* 004415a2: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004415a5: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x4415aau); f_005eaaf0();
    /* 004415aa: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 004415ad: jmp 0x4415b6 */ goto L_004415b6;
L_004415af:; BB(0x004415af);
    /* 004415af: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_004415b6:; BB(0x004415b6);
    /* 004415b6: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 004415b9: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 004415bc: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004415c3: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004415c6: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004415c9: mov dword ptr [ecx + 0xac], edx */ W32((u32)(r_ecx+0xacu), r_edx);
    /* 004415cf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004415d1: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 004415d3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004415d5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004415d7: push 0x1d4ef */ { u32 v = 0x1d4efu; r_esp -= 4; W32(r_esp, v); }
    /* 004415dc: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004415df: mov ecx, dword ptr [eax + 0xac] */ r_ecx = R32((u32)(r_eax+0xacu));
    /* 004415e5: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x4415eau); f_005eae80();
L_004415ea:; BB(0x004415ea);
    /* 004415ea: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004415ed: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004415f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004415f5: mov esp, ebp */ r_esp = r_ebp;
    /* 004415f7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004415f8: ret  */ FN_RET(0x004412f0); r_esp += 4; return;
}

void f_00441600(void) /* sub_441600 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00441600);
    /* 00441600: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00441601: mov ebp, esp */ r_ebp = r_esp;
    /* 00441603: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00441604: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00441607: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044160a: cmp dword ptr [eax + 0xac], 0 */ {  u32 a = R32((u32)(r_eax+0xacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441611: je 0x44162c */ if (fZ) goto L_0044162c;
L_00441613:; BB(0x00441613);
    /* 00441613: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00441616: mov edx, dword ptr [ecx + 0xac] */ r_edx = R32((u32)(r_ecx+0xacu));
    /* 0044161c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044161f: mov ecx, dword ptr [eax + 0xac] */ r_ecx = R32((u32)(r_eax+0xacu));
    /* 00441625: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00441627: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0044162a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x44162cu); call_ind(t); }
L_0044162c:; BB(0x0044162c);
    /* 0044162c: mov ecx, dword ptr [0x7906f0] */ r_ecx = R32((u32)(0x7906f0u));
    /* 00441632: call 0x445ec0 */ r_esp -= 4; W32(r_esp, 0x441637u); f_00445ec0();
    /* 00441637: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044163a: call 0x441650 */ r_esp -= 4; W32(r_esp, 0x44163fu); f_00441650();
    /* 0044163f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00441642: call 0x441a90 */ r_esp -= 4; W32(r_esp, 0x441647u); f_00441a90();
    /* 00441647: mov esp, ebp */ r_esp = r_ebp;
    /* 00441649: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044164a: ret  */ FN_RET(0x00441600); r_esp += 4; return;
}

void f_00441650(void) /* sub_441650 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00441650);
    /* 00441650: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00441651: mov ebp, esp */ r_ebp = r_esp;
    /* 00441653: sub esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00441656: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 00441659: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00441660: jmp 0x44166b */ goto L_0044166b;
L_00441662:; BB(0x00441662);
    /* 00441662: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00441665: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00441668: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0044166b:; BB(0x0044166b);
    /* 0044166b: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044166f: jge 0x44169d */ if ((fS==fO)) goto L_0044169d;
L_00441671:; BB(0x00441671);
    /* 00441671: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00441674: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00441675: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0044167b: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 0044167e: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x441683u); f_005fb300();
    /* 00441683: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441685: je 0x44169b */ if (fZ) goto L_0044169b;
L_00441687:; BB(0x00441687);
    /* 00441687: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044168a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044168b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044168d: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00441693: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 00441696: call 0x5fbcb0 */ r_esp -= 4; W32(r_esp, 0x44169bu); f_005fbcb0();
L_0044169b:; BB(0x0044169b);
    /* 0044169b: jmp 0x441662 */ goto L_00441662;
L_0044169d:; BB(0x0044169d);
    /* 0044169d: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004416a0: cmp dword ptr [edx + 0x98], 0 */ {  u32 a = R32((u32)(r_edx+0x98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004416a7: je 0x441703 */ if (fZ) goto L_00441703;
L_004416a9:; BB(0x004416a9);
    /* 004416a9: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 004416ac: mov ecx, dword ptr [eax + 0x98] */ r_ecx = R32((u32)(r_eax+0x98u));
    /* 004416b2: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004416b5: mov eax, dword ptr [edx + 0x98] */ r_eax = R32((u32)(r_edx+0x98u));
    /* 004416bb: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004416bd: mov ecx, eax */ r_ecx = r_eax;
    /* 004416bf: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 004416c2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4416c4u); call_ind(t); }
    /* 004416c4: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004416c7: mov edx, dword ptr [ecx + 0x98] */ r_edx = R32((u32)(r_ecx+0x98u));
    /* 004416cd: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 004416d0: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004416d3: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004416d6: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004416da: je 0x4416ef */ if (fZ) goto L_004416ef;
L_004416dc:; BB(0x004416dc);
    /* 004416dc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004416de: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004416e1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004416e3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004416e6: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004416e8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4416eau); call_ind(t); }
    /* 004416ea: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 004416ed: jmp 0x4416f6 */ goto L_004416f6;
L_004416ef:; BB(0x004416ef);
    /* 004416ef: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_004416f6:; BB(0x004416f6);
    /* 004416f6: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004416f9: mov dword ptr [ecx + 0x98], 0 */ W32((u32)(r_ecx+0x98u), 0x0u);
L_00441703:; BB(0x00441703);
    /* 00441703: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00441706: cmp dword ptr [edx + 0x9c], 0 */ {  u32 a = R32((u32)(r_edx+0x9cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044170d: je 0x441769 */ if (fZ) goto L_00441769;
L_0044170f:; BB(0x0044170f);
    /* 0044170f: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00441712: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 00441718: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0044171b: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 00441721: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00441723: mov ecx, eax */ r_ecx = r_eax;
    /* 00441725: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00441728: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x44172au); call_ind(t); }
    /* 0044172a: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0044172d: mov edx, dword ptr [ecx + 0x9c] */ r_edx = R32((u32)(r_ecx+0x9cu));
    /* 00441733: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00441736: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00441739: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0044173c: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441740: je 0x441755 */ if (fZ) goto L_00441755;
L_00441742:; BB(0x00441742);
    /* 00441742: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00441744: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00441747: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00441749: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044174c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0044174e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x441750u); call_ind(t); }
    /* 00441750: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00441753: jmp 0x44175c */ goto L_0044175c;
L_00441755:; BB(0x00441755);
    /* 00441755: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_0044175c:; BB(0x0044175c);
    /* 0044175c: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0044175f: mov dword ptr [ecx + 0x9c], 0 */ W32((u32)(r_ecx+0x9cu), 0x0u);
L_00441769:; BB(0x00441769);
    /* 00441769: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0044176c: cmp dword ptr [edx + 0xa0], 0 */ {  u32 a = R32((u32)(r_edx+0xa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441773: je 0x4417cf */ if (fZ) goto L_004417cf;
L_00441775:; BB(0x00441775);
    /* 00441775: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00441778: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 0044177e: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00441781: mov eax, dword ptr [edx + 0xa0] */ r_eax = R32((u32)(r_edx+0xa0u));
    /* 00441787: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00441789: mov ecx, eax */ r_ecx = r_eax;
    /* 0044178b: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0044178e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x441790u); call_ind(t); }
    /* 00441790: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00441793: mov edx, dword ptr [ecx + 0xa0] */ r_edx = R32((u32)(r_ecx+0xa0u));
    /* 00441799: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0044179c: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044179f: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004417a2: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004417a6: je 0x4417bb */ if (fZ) goto L_004417bb;
L_004417a8:; BB(0x004417a8);
    /* 004417a8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004417aa: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004417ad: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004417af: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004417b2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004417b4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4417b6u); call_ind(t); }
    /* 004417b6: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 004417b9: jmp 0x4417c2 */ goto L_004417c2;
L_004417bb:; BB(0x004417bb);
    /* 004417bb: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_004417c2:; BB(0x004417c2);
    /* 004417c2: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004417c5: mov dword ptr [ecx + 0xa0], 0 */ W32((u32)(r_ecx+0xa0u), 0x0u);
L_004417cf:; BB(0x004417cf);
    /* 004417cf: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004417d2: cmp dword ptr [edx + 0xa4], 0 */ {  u32 a = R32((u32)(r_edx+0xa4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004417d9: je 0x441835 */ if (fZ) goto L_00441835;
L_004417db:; BB(0x004417db);
    /* 004417db: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 004417de: mov ecx, dword ptr [eax + 0xa4] */ r_ecx = R32((u32)(r_eax+0xa4u));
    /* 004417e4: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004417e7: mov eax, dword ptr [edx + 0xa4] */ r_eax = R32((u32)(r_edx+0xa4u));
    /* 004417ed: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004417ef: mov ecx, eax */ r_ecx = r_eax;
    /* 004417f1: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 004417f4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4417f6u); call_ind(t); }
    /* 004417f6: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004417f9: mov edx, dword ptr [ecx + 0xa4] */ r_edx = R32((u32)(r_ecx+0xa4u));
    /* 004417ff: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 00441802: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00441805: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00441808: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044180c: je 0x441821 */ if (fZ) goto L_00441821;
L_0044180e:; BB(0x0044180e);
    /* 0044180e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00441810: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00441813: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00441815: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00441818: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0044181a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x44181cu); call_ind(t); }
    /* 0044181c: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 0044181f: jmp 0x441828 */ goto L_00441828;
L_00441821:; BB(0x00441821);
    /* 00441821: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
L_00441828:; BB(0x00441828);
    /* 00441828: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0044182b: mov dword ptr [ecx + 0xa4], 0 */ W32((u32)(r_ecx+0xa4u), 0x0u);
L_00441835:; BB(0x00441835);
    /* 00441835: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044183c: jmp 0x441847 */ goto L_00441847;
L_0044183e:; BB(0x0044183e);
    /* 0044183e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00441841: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00441844: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00441847:; BB(0x00441847);
    /* 00441847: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044184b: jge 0x441892 */ if ((fS==fO)) goto L_00441892;
L_0044184d:; BB(0x0044184d);
    /* 0044184d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00441850: add eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00441853: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00441854: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0044185a: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 0044185d: call 0x5fb810 */ r_esp -= 4; W32(r_esp, 0x441862u); f_005fb810();
    /* 00441862: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441864: je 0x44187c */ if (fZ) goto L_0044187c;
L_00441866:; BB(0x00441866);
    /* 00441866: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00441869: add edx, 0x14 */ {  u32 a = r_edx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0044186c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044186d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044186f: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00441874: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00441877: call 0x5fbe00 */ r_esp -= 4; W32(r_esp, 0x44187cu); f_005fbe00();
L_0044187c:; BB(0x0044187c);
    /* 0044187c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044187f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00441880: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00441882: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00441888: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 0044188b: call 0x5fbd10 */ r_esp -= 4; W32(r_esp, 0x441890u); f_005fbd10();
    /* 00441890: jmp 0x44183e */ goto L_0044183e;
L_00441892:; BB(0x00441892);
    /* 00441892: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00441899: jmp 0x4418a4 */ goto L_004418a4;
L_0044189b:; BB(0x0044189b);
    /* 0044189b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044189e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004418a1: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_004418a4:; BB(0x004418a4);
    /* 004418a4: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004418a8: jge 0x4419ff */ if ((fS==fO)) goto L_004419ff;
L_004418ae:; BB(0x004418ae);
    /* 004418ae: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004418b1: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004418b4: cmp dword ptr [edx + ecx*4 + 0x70], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x70u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004418b9: je 0x441917 */ if (fZ) goto L_00441917;
L_004418bb:; BB(0x004418bb);
    /* 004418bb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004418be: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004418c1: mov edx, dword ptr [ecx + eax*4 + 0x70] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x70u));
    /* 004418c5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004418c8: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004418cb: mov ecx, dword ptr [ecx + eax*4 + 0x70] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x70u));
    /* 004418cf: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004418d1: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 004418d4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4418d6u); call_ind(t); }
    /* 004418d6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004418d9: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004418dc: mov eax, dword ptr [edx + ecx*4 + 0x70] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x70u));
    /* 004418e0: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 004418e3: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004418e6: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 004418e9: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004418ed: je 0x441902 */ if (fZ) goto L_00441902;
L_004418ef:; BB(0x004418ef);
    /* 004418ef: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004418f1: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004418f4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004418f6: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004418f9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004418fb: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4418fdu); call_ind(t); }
    /* 004418fd: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 00441900: jmp 0x441909 */ goto L_00441909;
L_00441902:; BB(0x00441902);
    /* 00441902: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
L_00441909:; BB(0x00441909);
    /* 00441909: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044190c: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0044190f: mov dword ptr [ecx + eax*4 + 0x70], 0 */ W32((u32)(r_ecx+r_eax*4+0x70u), 0x0u);
L_00441917:; BB(0x00441917);
    /* 00441917: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044191a: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0044191d: cmp dword ptr [eax + edx*4 + 0x84], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x84u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441925: je 0x44198f */ if (fZ) goto L_0044198f;
L_00441927:; BB(0x00441927);
    /* 00441927: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044192a: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0044192d: mov eax, dword ptr [edx + ecx*4 + 0x84] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x84u));
    /* 00441934: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00441937: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0044193a: mov ecx, dword ptr [edx + ecx*4 + 0x84] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x84u));
    /* 00441941: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00441943: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 00441946: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x441948u); call_ind(t); }
    /* 00441948: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044194b: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0044194e: mov edx, dword ptr [ecx + eax*4 + 0x84] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x84u));
    /* 00441955: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 00441958: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0044195b: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0044195e: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441962: je 0x441977 */ if (fZ) goto L_00441977;
L_00441964:; BB(0x00441964);
    /* 00441964: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00441966: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00441969: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0044196b: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0044196e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00441970: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x441972u); call_ind(t); }
    /* 00441972: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 00441975: jmp 0x44197e */ goto L_0044197e;
L_00441977:; BB(0x00441977);
    /* 00441977: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
L_0044197e:; BB(0x0044197e);
    /* 0044197e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00441981: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00441984: mov dword ptr [edx + ecx*4 + 0x84], 0 */ W32((u32)(r_edx+r_ecx*4+0x84u), 0x0u);
L_0044198f:; BB(0x0044198f);
    /* 0044198f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00441992: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00441995: cmp dword ptr [ecx + eax*4 + 0x20], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044199a: je 0x4419fa */ if (fZ) goto L_004419fa;
L_0044199c:; BB(0x0044199c);
    /* 0044199c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044199f: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 004419a2: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 004419a6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004419a9: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 004419ac: mov edx, dword ptr [eax + edx*4 + 0x20] */ r_edx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 004419b0: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004419b2: mov ecx, edx */ r_ecx = r_edx;
    /* 004419b4: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 004419b7: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4419b9u); call_ind(t); }
    /* 004419b9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004419bc: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004419bf: mov edx, dword ptr [ecx + eax*4 + 0x20] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 004419c3: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 004419c6: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 004419c9: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 004419cc: cmp dword ptr [ebp - 0x38], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004419d0: je 0x4419e5 */ if (fZ) goto L_004419e5;
L_004419d2:; BB(0x004419d2);
    /* 004419d2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004419d4: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004419d7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004419d9: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004419dc: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004419de: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4419e0u); call_ind(t); }
    /* 004419e0: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 004419e3: jmp 0x4419ec */ goto L_004419ec;
L_004419e5:; BB(0x004419e5);
    /* 004419e5: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
L_004419ec:; BB(0x004419ec);
    /* 004419ec: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004419ef: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004419f2: mov dword ptr [edx + ecx*4 + 0x20], 0 */ W32((u32)(r_edx+r_ecx*4+0x20u), 0x0u);
L_004419fa:; BB(0x004419fa);
    /* 004419fa: jmp 0x44189b */ goto L_0044189b;
L_004419ff:; BB(0x004419ff);
    /* 004419ff: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00441a06: jmp 0x441a11 */ goto L_00441a11;
L_00441a08:; BB(0x00441a08);
    /* 00441a08: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00441a0b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00441a0e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00441a11:; BB(0x00441a11);
    /* 00441a11: cmp dword ptr [ebp - 4], 0xf */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00441a15: jge 0x441a82 */ if ((fS==fO)) goto L_00441a82;
L_00441a17:; BB(0x00441a17);
    /* 00441a17: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00441a1a: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00441a1d: cmp dword ptr [edx + ecx*4 + 0x34], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441a22: je 0x441a80 */ if (fZ) goto L_00441a80;
L_00441a24:; BB(0x00441a24);
    /* 00441a24: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00441a27: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00441a2a: mov edx, dword ptr [ecx + eax*4 + 0x34] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x34u));
    /* 00441a2e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00441a31: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00441a34: mov ecx, dword ptr [ecx + eax*4 + 0x34] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x34u));
    /* 00441a38: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00441a3a: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00441a3d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x441a3fu); call_ind(t); }
    /* 00441a3f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00441a42: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00441a45: mov eax, dword ptr [edx + ecx*4 + 0x34] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x34u));
    /* 00441a49: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00441a4c: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00441a4f: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 00441a52: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441a56: je 0x441a6b */ if (fZ) goto L_00441a6b;
L_00441a58:; BB(0x00441a58);
    /* 00441a58: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00441a5a: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00441a5d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00441a5f: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00441a62: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00441a64: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x441a66u); call_ind(t); }
    /* 00441a66: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 00441a69: jmp 0x441a72 */ goto L_00441a72;
L_00441a6b:; BB(0x00441a6b);
    /* 00441a6b: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
L_00441a72:; BB(0x00441a72);
    /* 00441a72: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00441a75: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00441a78: mov dword ptr [ecx + eax*4 + 0x34], 0 */ W32((u32)(r_ecx+r_eax*4+0x34u), 0x0u);
L_00441a80:; BB(0x00441a80);
    /* 00441a80: jmp 0x441a08 */ goto L_00441a08;
L_00441a82:; BB(0x00441a82);
    /* 00441a82: mov esp, ebp */ r_esp = r_ebp;
    /* 00441a84: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00441a85: ret  */ FN_RET(0x00441650); r_esp += 4; return;
}

void f_00441a90(void) /* sub_441A90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00441a90);
    /* 00441a90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00441a91: mov ebp, esp */ r_ebp = r_esp;
    /* 00441a93: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00441a95: push 0x69ea11 */ { u32 v = 0x69ea11u; r_esp -= 4; W32(r_esp, v); }
    /* 00441a9a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00441aa0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00441aa1: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00441aa4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00441aa9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00441aab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00441aac: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00441aaf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00441ab5: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 00441ab8: mov dword ptr [ebp - 0x18], 0x1d4c1 */ W32((u32)(r_ebp+0xffffffe8u), 0x1d4c1u);
    /* 00441abf: mov dword ptr [ebp - 0x14], 0x1d4c2 */ W32((u32)(r_ebp+0xffffffecu), 0x1d4c2u);
    /* 00441ac6: mov dword ptr [ebp - 0x10], 0x1d4c3 */ W32((u32)(r_ebp+0xfffffff0u), 0x1d4c3u);
    /* 00441acd: mov dword ptr [ebp - 0x28], 0x1d4e9 */ W32((u32)(r_ebp+0xffffffd8u), 0x1d4e9u);
    /* 00441ad4: mov dword ptr [ebp - 0x24], 0x1d4dc */ W32((u32)(r_ebp+0xffffffdcu), 0x1d4dcu);
    /* 00441adb: mov dword ptr [ebp - 0x20], 0x1d4dd */ W32((u32)(r_ebp+0xffffffe0u), 0x1d4ddu);
    /* 00441ae2: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00441ae5: mov ecx, dword ptr [eax + 0xb0] */ r_ecx = R32((u32)(r_eax+0xb0u));
    /* 00441aeb: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00441aee: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00441af1: mov dword ptr [edx + 0xb0], ecx */ W32((u32)(r_edx+0xb0u), r_ecx);
    /* 00441af7: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00441afa: mov ecx, dword ptr [eax + 0xb0] */ r_ecx = R32((u32)(r_eax+0xb0u));
    /* 00441b00: mov edx, dword ptr [ebp + ecx*4 - 0x18] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffe8u));
    /* 00441b04: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00441b05: mov ecx, dword ptr [0x7906ec] */ r_ecx = R32((u32)(0x7906ecu));
    /* 00441b0b: call 0x5f1ad0 */ r_esp -= 4; W32(r_esp, 0x441b10u); f_005f1ad0();
    /* 00441b10: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00441b13: cmp dword ptr [eax + 0xa8], 0 */ {  u32 a = R32((u32)(r_eax+0xa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441b1a: je 0x441b51 */ if (fZ) goto L_00441b51;
L_00441b1c:; BB(0x00441b1c);
    /* 00441b1c: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00441b1f: mov edx, dword ptr [ecx + 0xb0] */ r_edx = R32((u32)(r_ecx+0xb0u));
    /* 00441b25: mov eax, dword ptr [ebp + edx*4 - 0x28] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffd8u));
    /* 00441b29: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00441b2a: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00441b2d: mov ecx, dword ptr [ecx + 0xa8] */ r_ecx = R32((u32)(r_ecx+0xa8u));
    /* 00441b33: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x441b38u); f_005eaf00();
    /* 00441b38: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00441b3b: mov eax, dword ptr [edx + 0xa8] */ r_eax = R32((u32)(r_edx+0xa8u));
    /* 00441b41: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00441b44: mov ecx, dword ptr [ecx + 0xa8] */ r_ecx = R32((u32)(r_ecx+0xa8u));
    /* 00441b4a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00441b4c: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00441b4f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x441b51u); call_ind(t); }
L_00441b51:; BB(0x00441b51);
    /* 00441b51: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 00441b58: jmp 0x441b63 */ goto L_00441b63;
L_00441b5a:; BB(0x00441b5a);
    /* 00441b5a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00441b5d: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00441b60: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
L_00441b63:; BB(0x00441b63);
    /* 00441b63: cmp dword ptr [ebp - 0x1c], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00441b67: jge 0x441b89 */ if ((fS==fO)) goto L_00441b89;
L_00441b69:; BB(0x00441b69);
    /* 00441b69: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00441b6c: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00441b6f: cmp dword ptr [eax + edx*4 + 4], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441b74: je 0x441b87 */ if (fZ) goto L_00441b87;
L_00441b76:; BB(0x00441b76);
    /* 00441b76: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00441b78: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00441b7b: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00441b7e: mov ecx, dword ptr [edx + ecx*4 + 4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 00441b82: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x441b87u); f_005f5d50();
L_00441b87:; BB(0x00441b87);
    /* 00441b87: jmp 0x441b5a */ goto L_00441b5a;
L_00441b89:; BB(0x00441b89);
    /* 00441b89: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 00441b90: jmp 0x441b9b */ goto L_00441b9b;
L_00441b92:; BB(0x00441b92);
    /* 00441b92: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00441b95: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00441b98: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
L_00441b9b:; BB(0x00441b9b);
    /* 00441b9b: cmp dword ptr [ebp - 0x1c], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00441b9f: jge 0x441c53 */ if ((fS==fO)) goto L_00441c53;
L_00441ba5:; BB(0x00441ba5);
    /* 00441ba5: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00441ba8: mov edx, dword ptr [ecx + 0xb0] */ r_edx = R32((u32)(r_ecx+0xb0u));
    /* 00441bae: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00441baf: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00441bb2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00441bb3: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00441bb6: call 0x43fab0 */ r_esp -= 4; W32(r_esp, 0x441bbbu); f_0043fab0();
    /* 00441bbb: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00441bbe: mov edx, dword ptr [ecx + 0xb0] */ r_edx = R32((u32)(r_ecx+0xb0u));
    /* 00441bc4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00441bc5: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00441bc8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00441bc9: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00441bcc: call 0x43fb70 */ r_esp -= 4; W32(r_esp, 0x441bd1u); f_0043fb70();
    /* 00441bd1: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00441bd4: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00441bd7: mov eax, dword ptr [edx + ecx*4 + 4] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 00441bdb: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00441bde: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00441be1: mov ecx, dword ptr [edx + ecx*4 + 4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 00441be5: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00441be7: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 00441bea: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x441becu); call_ind(t); }
    /* 00441bec: mov eax, dword ptr [0x7906ec] */ r_eax = R32((u32)(0x7906ecu));
    /* 00441bf1: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00441bf4: call 0x5fc360 */ r_esp -= 4; W32(r_esp, 0x441bf9u); f_005fc360();
    /* 00441bf9: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441bfc: jne 0x441c4e */ if (!fZ) goto L_00441c4e;
L_00441bfe:; BB(0x00441bfe);
    /* 00441bfe: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00441c00: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x441c05u); f_00686d82();
    /* 00441c05: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00441c08: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00441c0b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00441c12: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441c16: je 0x441c27 */ if (fZ) goto L_00441c27;
L_00441c18:; BB(0x00441c18);
    /* 00441c18: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00441c1a: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00441c1d: call 0x443a90 */ r_esp -= 4; W32(r_esp, 0x441c22u); f_00443a90();
    /* 00441c22: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00441c25: jmp 0x441c2e */ goto L_00441c2e;
L_00441c27:; BB(0x00441c27);
    /* 00441c27: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_00441c2e:; BB(0x00441c2e);
    /* 00441c2e: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00441c31: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00441c34: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00441c3b: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00441c3e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00441c3f: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00441c42: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00441c45: mov ecx, dword ptr [ecx + eax*4 + 4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 00441c49: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x441c4eu); f_005f5d50();
L_00441c4e:; BB(0x00441c4e);
    /* 00441c4e: jmp 0x441b92 */ goto L_00441b92;
L_00441c53:; BB(0x00441c53);
    /* 00441c53: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00441c56: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00441c5d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00441c5e: mov esp, ebp */ r_esp = r_ebp;
    /* 00441c60: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00441c61: ret  */ FN_RET(0x00441a90); r_esp += 4; return;
}

void f_00441c70(void) /* sub_441C70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00441c70);
    /* 00441c70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00441c71: mov ebp, esp */ r_ebp = r_esp;
    /* 00441c73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00441c74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00441c77: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00441c79: push 0x18aa6 */ { u32 v = 0x18aa6u; r_esp -= 4; W32(r_esp, v); }
    /* 00441c7e: push 0x20564157 */ { u32 v = 0x20564157u; r_esp -= 4; W32(r_esp, v); }
    /* 00441c83: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 00441c88: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 00441c8b: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x441c90u); f_006044b0();
    /* 00441c90: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00441c92: push 0x18aa7 */ { u32 v = 0x18aa7u; r_esp -= 4; W32(r_esp, v); }
    /* 00441c97: push 0x20564157 */ { u32 v = 0x20564157u; r_esp -= 4; W32(r_esp, v); }
    /* 00441c9c: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 00441ca2: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 00441ca5: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x441caau); f_006044b0();
    /* 00441caa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00441cac: push 0x18aa9 */ { u32 v = 0x18aa9u; r_esp -= 4; W32(r_esp, v); }
    /* 00441cb1: push 0x20564157 */ { u32 v = 0x20564157u; r_esp -= 4; W32(r_esp, v); }
    /* 00441cb6: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 00441cbc: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 00441cbf: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x441cc4u); f_006044b0();
    /* 00441cc4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00441cc6: push 0x18aa8 */ { u32 v = 0x18aa8u; r_esp -= 4; W32(r_esp, v); }
    /* 00441ccb: push 0x20564157 */ { u32 v = 0x20564157u; r_esp -= 4; W32(r_esp, v); }
    /* 00441cd0: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 00441cd5: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 00441cd8: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x441cddu); f_006044b0();
    /* 00441cdd: mov ecx, dword ptr [0x7906f0] */ r_ecx = R32((u32)(0x7906f0u));
    /* 00441ce3: mov byte ptr [ecx + 0x25d], 0 */ W8((u32)(r_ecx+0x25du), 0x0u);
    /* 00441cea: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00441ced: mov byte ptr [edx + 0x1c], 0 */ W8((u32)(r_edx+0x1cu), 0x0u);
    /* 00441cf1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00441cf4: call 0x441600 */ r_esp -= 4; W32(r_esp, 0x441cf9u); f_00441600();
    /* 00441cf9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00441cfc: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 00441cff: call 0x43d2a0 */ r_esp -= 4; W32(r_esp, 0x441d04u); f_0043d2a0();
    /* 00441d04: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00441d06: mov ecx, dword ptr [0x7906ec] */ r_ecx = R32((u32)(0x7906ecu));
    /* 00441d0c: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00441d0f: mov eax, dword ptr [0x7906ec] */ r_eax = R32((u32)(0x7906ecu));
    /* 00441d14: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00441d17: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00441d19: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00441d1c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x441d1eu); call_ind(t); }
    /* 00441d1e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00441d21: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 00441d24: call 0x43d390 */ r_esp -= 4; W32(r_esp, 0x441d29u); f_0043d390();
    /* 00441d29: mov ecx, dword ptr [0x7906f0] */ r_ecx = R32((u32)(0x7906f0u));
    /* 00441d2f: call 0x444ac0 */ r_esp -= 4; W32(r_esp, 0x441d34u); f_00444ac0();
    /* 00441d34: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00441d37: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441d39: jne 0x441d77 */ if (!fZ) goto L_00441d77;
L_00441d3b:; BB(0x00441d3b);
    /* 00441d3b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00441d3d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00441d3e: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 00441d44: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00441d47: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00441d48: fld1  */ FPUSH(1.0);
    /* 00441d4a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00441d4d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00441d4f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00441d51: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00441d53: mov eax, dword ptr [0x7906ec] */ r_eax = R32((u32)(0x7906ecu));
    /* 00441d58: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00441d5b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00441d5c: push 0x18aa6 */ { u32 v = 0x18aa6u; r_esp -= 4; W32(r_esp, v); }
    /* 00441d61: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00441d67: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00441d69: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00441d6f: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 00441d75: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x441d77u); call_ind(t); }
L_00441d77:; BB(0x00441d77);
    /* 00441d77: mov esp, ebp */ r_esp = r_ebp;
    /* 00441d79: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00441d7a: ret  */ FN_RET(0x00441c70); r_esp += 4; return;
}

void f_00441d80(void) /* sub_441D80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00441d80);
    /* 00441d80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00441d81: mov ebp, esp */ r_ebp = r_esp;
    /* 00441d83: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00441d85: push 0x69ea37 */ { u32 v = 0x69ea37u; r_esp -= 4; W32(r_esp, v); }
    /* 00441d8a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00441d90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00441d91: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00441d94: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00441d99: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00441d9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00441d9c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00441d9f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00441da5: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 00441da8: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 00441daf: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00441db6: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00441dbd: jmp 0x441dc8 */ goto L_00441dc8;
L_00441dbf:; BB(0x00441dbf);
    /* 00441dbf: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00441dc2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00441dc5: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_00441dc8:; BB(0x00441dc8);
    /* 00441dc8: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00441dcc: jge 0x441e33 */ if ((fS==fO)) goto L_00441e33;
L_00441dce:; BB(0x00441dce);
    /* 00441dce: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00441dd1: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 00441dd4: mov eax, dword ptr [edx + ecx*4 + 4] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 00441dd8: cmp dword ptr [eax + 0x180], 0 */ {  u32 a = R32((u32)(r_eax+0x180u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441ddf: jne 0x441e31 */ if (!fZ) goto L_00441e31;
L_00441de1:; BB(0x00441de1);
    /* 00441de1: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00441de3: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x441de8u); f_00686d82();
    /* 00441de8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00441deb: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00441dee: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00441df5: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441df9: je 0x441e0a */ if (fZ) goto L_00441e0a;
L_00441dfb:; BB(0x00441dfb);
    /* 00441dfb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00441dfd: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00441e00: call 0x443a90 */ r_esp -= 4; W32(r_esp, 0x441e05u); f_00443a90();
    /* 00441e05: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 00441e08: jmp 0x441e11 */ goto L_00441e11;
L_00441e0a:; BB(0x00441e0a);
    /* 00441e0a: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
L_00441e11:; BB(0x00441e11);
    /* 00441e11: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00441e14: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00441e17: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00441e1e: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00441e21: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00441e22: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00441e25: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00441e28: mov ecx, dword ptr [ecx + eax*4 + 4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 00441e2c: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x441e31u); f_005f5d50();
L_00441e31:; BB(0x00441e31);
    /* 00441e31: jmp 0x441dbf */ goto L_00441dbf;
L_00441e33:; BB(0x00441e33);
    /* 00441e33: mov edx, dword ptr [0x7906e8] */ r_edx = R32((u32)(0x7906e8u));
    /* 00441e39: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00441e3c: mov dword ptr [0x7906e8], edx */ W32((u32)(0x7906e8u), r_edx);
    /* 00441e42: cmp dword ptr [0x7906e8], 0xa */ {  u32 a = R32((u32)(0x7906e8u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441e49: jne 0x441e5d */ if (!fZ) goto L_00441e5d;
L_00441e4b:; BB(0x00441e4b);
    /* 00441e4b: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00441e4e: call 0x442180 */ r_esp -= 4; W32(r_esp, 0x441e53u); f_00442180();
    /* 00441e53: mov dword ptr [0x7906e8], 0 */ W32((u32)(0x7906e8u), 0x0u);
L_00441e5d:; BB(0x00441e5d);
    /* 00441e5d: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 00441e60: mov ecx, dword ptr [eax + 0xb0] */ r_ecx = R32((u32)(r_eax+0xb0u));
    /* 00441e66: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 00441e69: cmp dword ptr [ebp - 0x5c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441e6d: je 0x441e7d */ if (fZ) goto L_00441e7d;
L_00441e6f:; BB(0x00441e6f);
    /* 00441e6f: cmp dword ptr [ebp - 0x5c], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffa4u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441e73: je 0x441e86 */ if (fZ) goto L_00441e86;
L_00441e75:; BB(0x00441e75);
    /* 00441e75: cmp dword ptr [ebp - 0x5c], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffa4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441e79: je 0x441e8f */ if (fZ) goto L_00441e8f;
L_00441e7b:; BB(0x00441e7b);
    /* 00441e7b: jmp 0x441e96 */ goto L_00441e96;
L_00441e7d:; BB(0x00441e7d);
    /* 00441e7d: mov dword ptr [ebp - 0x18], 0x50 */ W32((u32)(r_ebp+0xffffffe8u), 0x50u);
    /* 00441e84: jmp 0x441e96 */ goto L_00441e96;
L_00441e86:; BB(0x00441e86);
    /* 00441e86: mov dword ptr [ebp - 0x18], 0x4b */ W32((u32)(r_ebp+0xffffffe8u), 0x4bu);
    /* 00441e8d: jmp 0x441e96 */ goto L_00441e96;
L_00441e8f:; BB(0x00441e8f);
    /* 00441e8f: mov dword ptr [ebp - 0x18], 0x2d */ W32((u32)(r_ebp+0xffffffe8u), 0x2du);
L_00441e96:; BB(0x00441e96);
    /* 00441e96: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 00441e99: cmp dword ptr [edx + 0xb0], 2 */ {  u32 a = R32((u32)(r_edx+0xb0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441ea0: jne 0x442126 */ if (!fZ) goto L_00442126;
L_00441ea6:; BB(0x00441ea6);
    /* 00441ea6: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00441ead: jmp 0x441eb8 */ goto L_00441eb8;
L_00441eaf:; BB(0x00441eaf);
    /* 00441eaf: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00441eb2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00441eb5: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_00441eb8:; BB(0x00441eb8);
    /* 00441eb8: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00441ebc: jge 0x442103 */ if ((fS==fO)) goto L_00442103;
L_00441ec2:; BB(0x00441ec2);
    /* 00441ec2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00441ec5: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 00441ec8: cmp dword ptr [edx + ecx*4 + 4], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441ecd: je 0x4420d4 */ if (fZ) goto L_004420d4;
L_00441ed3:; BB(0x00441ed3);
    /* 00441ed3: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00441ed6: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00441ed9: mov ecx, dword ptr [ecx + eax*4 + 4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 00441edd: call 0x5eb220 */ r_esp -= 4; W32(r_esp, 0x441ee2u); f_005eb220();
    /* 00441ee2: cmp eax, 0x27 */ {  u32 a = r_eax; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441ee5: jne 0x4420d4 */ if (!fZ) goto L_004420d4;
L_00441eeb:; BB(0x00441eeb);
    /* 00441eeb: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00441eee: imul edx, edx, 0x78 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x78u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00441ef1: mov eax, dword ptr [0x7906f0] */ r_eax = R32((u32)(0x7906f0u));
    /* 00441ef6: mov ecx, dword ptr [eax + edx + 0x6c] */ r_ecx = R32((u32)(r_eax+r_edx+0x6cu));
    /* 00441efa: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00441efd: cmp dword ptr [ebp - 0x28], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441f01: jne 0x4420d4 */ if (!fZ) goto L_004420d4;
L_00441f07:; BB(0x00441f07);
    /* 00441f07: mov edx, dword ptr [0x7906f0] */ r_edx = R32((u32)(0x7906f0u));
    /* 00441f0d: movzx eax, byte ptr [edx + 0x264] */ r_eax = (u32)R8((u32)(r_edx+0x264u));
    /* 00441f14: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441f16: jne 0x441fca */ if (!fZ) goto L_00441fca;
L_00441f1c:; BB(0x00441f1c);
    /* 00441f1c: mov ecx, dword ptr [0x7906f0] */ r_ecx = R32((u32)(0x7906f0u));
    /* 00441f22: cmp dword ptr [ecx + 0x260], -1 */ {  u32 a = R32((u32)(r_ecx+0x260u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441f29: jne 0x441fca */ if (!fZ) goto L_00441fca;
L_00441f2f:; BB(0x00441f2f);
    /* 00441f2f: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 00441f36: jmp 0x441f41 */ goto L_00441f41;
L_00441f38:; BB(0x00441f38);
    /* 00441f38: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00441f3b: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00441f3e: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
L_00441f41:; BB(0x00441f41);
    /* 00441f41: cmp dword ptr [ebp - 0x1c], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00441f45: jge 0x441f73 */ if ((fS==fO)) goto L_00441f73;
L_00441f47:; BB(0x00441f47);
    /* 00441f47: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00441f4a: cmp eax, dword ptr [ebp - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441f4d: je 0x441f71 */ if (fZ) goto L_00441f71;
L_00441f4f:; BB(0x00441f4f);
    /* 00441f4f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00441f52: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 00441f55: mov ecx, dword ptr [edx + ecx*4 + 4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 00441f59: call 0x5eb220 */ r_esp -= 4; W32(r_esp, 0x441f5eu); f_005eb220();
    /* 00441f5e: cmp eax, 0x27 */ {  u32 a = r_eax; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441f61: jne 0x441f71 */ if (!fZ) goto L_00441f71;
L_00441f63:; BB(0x00441f63);
    /* 00441f63: mov eax, dword ptr [0x7906f0] */ r_eax = R32((u32)(0x7906f0u));
    /* 00441f68: mov byte ptr [eax + 0x264], 1 */ W8((u32)(r_eax+0x264u), 0x1u);
    /* 00441f6f: jmp 0x441f73 */ goto L_00441f73;
L_00441f71:; BB(0x00441f71);
    /* 00441f71: jmp 0x441f38 */ goto L_00441f38;
L_00441f73:; BB(0x00441f73);
    /* 00441f73: mov ecx, dword ptr [0x7906f0] */ r_ecx = R32((u32)(0x7906f0u));
    /* 00441f79: movzx edx, byte ptr [ecx + 0x264] */ r_edx = (u32)R8((u32)(r_ecx+0x264u));
    /* 00441f80: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441f82: je 0x441fca */ if (fZ) goto L_00441fca;
L_00441f84:; BB(0x00441f84);
    /* 00441f84: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 00441f8b: jmp 0x441f96 */ goto L_00441f96;
L_00441f8d:; BB(0x00441f8d);
    /* 00441f8d: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00441f90: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00441f93: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
L_00441f96:; BB(0x00441f96);
    /* 00441f96: cmp dword ptr [ebp - 0x1c], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00441f9a: jge 0x441fca */ if ((fS==fO)) goto L_00441fca;
L_00441f9c:; BB(0x00441f9c);
    /* 00441f9c: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00441f9f: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00441fa2: mov edx, dword ptr [0x7906f0] */ r_edx = R32((u32)(0x7906f0u));
    /* 00441fa8: mov eax, dword ptr [edx + ecx + 0x48] */ r_eax = R32((u32)(r_edx+r_ecx+0x48u));
    /* 00441fac: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00441faf: mov ecx, dword ptr [0x7906f0] */ r_ecx = R32((u32)(0x7906f0u));
    /* 00441fb5: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00441fb8: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00441fbb: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00441fbe: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00441fc1: mov dword ptr [eax + edx*4 + 0x268], ecx */ W32((u32)(r_eax+r_edx*4+0x268u), r_ecx);
    /* 00441fc8: jmp 0x441f8d */ goto L_00441f8d;
L_00441fca:; BB(0x00441fca);
    /* 00441fca: mov edx, dword ptr [0x7906f0] */ r_edx = R32((u32)(0x7906f0u));
    /* 00441fd0: cmp dword ptr [edx + 0x260], -1 */ {  u32 a = R32((u32)(r_edx+0x260u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441fd7: jne 0x442093 */ if (!fZ) goto L_00442093;
L_00441fdd:; BB(0x00441fdd);
    /* 00441fdd: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 00441fe4: jmp 0x441fef */ goto L_00441fef;
L_00441fe6:; BB(0x00441fe6);
    /* 00441fe6: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00441fe9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00441fec: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
L_00441fef:; BB(0x00441fef);
    /* 00441fef: cmp dword ptr [ebp - 0x1c], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00441ff3: jge 0x442093 */ if ((fS==fO)) goto L_00442093;
L_00441ff9:; BB(0x00441ff9);
    /* 00441ff9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00441ffc: cmp ecx, dword ptr [ebp - 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441fff: je 0x442075 */ if (fZ) goto L_00442075;
L_00442001:; BB(0x00442001);
    /* 00442001: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00442004: imul edx, edx, 0x78 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x78u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00442007: mov eax, dword ptr [0x7906f0] */ r_eax = R32((u32)(0x7906f0u));
    /* 0044200c: mov ecx, dword ptr [eax + edx + 0x48] */ r_ecx = R32((u32)(r_eax+r_edx+0x48u));
    /* 00442010: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 00442013: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00442016: imul edx, edx, 0x78 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x78u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00442019: mov eax, dword ptr [0x7906f0] */ r_eax = R32((u32)(0x7906f0u));
    /* 0044201e: mov ecx, dword ptr [eax + edx + 0x48] */ r_ecx = R32((u32)(r_eax+r_edx+0x48u));
    /* 00442022: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 00442025: mov edx, dword ptr [0x7906f0] */ r_edx = R32((u32)(0x7906f0u));
    /* 0044202b: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 0044202e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00442031: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00442034: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00442037: sub ecx, dword ptr [ebp - 0x38] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffc8u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0044203a: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0044203d: mov dword ptr [edx + eax + 0x70], ecx */ W32((u32)(r_edx+r_eax+0x70u), r_ecx);
    /* 00442041: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00442044: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00442047: mov ecx, dword ptr [0x7906f0] */ r_ecx = R32((u32)(0x7906f0u));
    /* 0044204d: mov edx, dword ptr [ecx + eax + 0x70] */ r_edx = R32((u32)(r_ecx+r_eax+0x70u));
    /* 00442051: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 00442054: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00442058: jge 0x442073 */ if ((fS==fO)) goto L_00442073;
L_0044205a:; BB(0x0044205a);
    /* 0044205a: mov eax, dword ptr [0x7906f0] */ r_eax = R32((u32)(0x7906f0u));
    /* 0044205f: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00442062: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00442065: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00442068: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0044206b: mov dword ptr [edx + ecx + 0x70], 0 */ W32((u32)(r_edx+r_ecx+0x70u), 0x0u);
L_00442073:; BB(0x00442073);
    /* 00442073: jmp 0x44208e */ goto L_0044208e;
L_00442075:; BB(0x00442075);
    /* 00442075: mov eax, dword ptr [0x7906f0] */ r_eax = R32((u32)(0x7906f0u));
    /* 0044207a: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0044207d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00442080: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00442083: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00442086: mov dword ptr [edx + ecx + 0x70], 0 */ W32((u32)(r_edx+r_ecx+0x70u), 0x0u);
L_0044208e:; BB(0x0044208e);
    /* 0044208e: jmp 0x441fe6 */ goto L_00441fe6;
L_00442093:; BB(0x00442093);
    /* 00442093: mov eax, dword ptr [0x7906f0] */ r_eax = R32((u32)(0x7906f0u));
    /* 00442098: mov ecx, dword ptr [eax + 0x260] */ r_ecx = R32((u32)(r_eax+0x260u));
    /* 0044209e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004420a1: mov edx, dword ptr [0x7906f0] */ r_edx = R32((u32)(0x7906f0u));
    /* 004420a7: mov dword ptr [edx + 0x260], ecx */ W32((u32)(r_edx+0x260u), r_ecx);
    /* 004420ad: mov eax, dword ptr [0x7906f0] */ r_eax = R32((u32)(0x7906f0u));
    /* 004420b2: mov ecx, dword ptr [eax + 0x260] */ r_ecx = R32((u32)(r_eax+0x260u));
    /* 004420b8: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 004420bb: mov edx, dword ptr [0x7906f0] */ r_edx = R32((u32)(0x7906f0u));
    /* 004420c1: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 004420c4: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004420c7: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004420ca: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 004420cd: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004420d0: mov dword ptr [ecx + eax + 0x6c], edx */ W32((u32)(r_ecx+r_eax+0x6cu), r_edx);
L_004420d4:; BB(0x004420d4);
    /* 004420d4: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004420d7: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 004420da: cmp dword ptr [ecx + eax*4 + 4], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004420df: je 0x4420fe */ if (fZ) goto L_004420fe;
L_004420e1:; BB(0x004420e1);
    /* 004420e1: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004420e4: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 004420e7: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 004420eb: call 0x5eb220 */ r_esp -= 4; W32(r_esp, 0x4420f0u); f_005eb220();
    /* 004420f0: cmp eax, 0x2d */ {  u32 a = r_eax; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004420f3: jne 0x4420fe */ if (!fZ) goto L_004420fe;
L_004420f5:; BB(0x004420f5);
    /* 004420f5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004420f8: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004420fb: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_004420fe:; BB(0x004420fe);
    /* 004420fe: jmp 0x441eaf */ goto L_00441eaf;
L_00442103:; BB(0x00442103);
    /* 00442103: cmp dword ptr [ebp - 0x14], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442107: jne 0x442124 */ if (!fZ) goto L_00442124;
L_00442109:; BB(0x00442109);
    /* 00442109: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0044210b: mov edx, dword ptr [0x7906ec] */ r_edx = R32((u32)(0x7906ecu));
    /* 00442111: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00442114: mov ecx, dword ptr [0x7906ec] */ r_ecx = R32((u32)(0x7906ecu));
    /* 0044211a: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0044211d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0044211f: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00442122: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x442124u); call_ind(t); }
L_00442124:; BB(0x00442124);
    /* 00442124: jmp 0x44216b */ goto L_0044216b;
L_00442126:; BB(0x00442126);
    /* 00442126: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0044212d: jmp 0x442138 */ goto L_00442138;
L_0044212f:; BB(0x0044212f);
    /* 0044212f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00442132: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00442135: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_00442138:; BB(0x00442138);
    /* 00442138: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044213c: jge 0x44216b */ if ((fS==fO)) goto L_0044216b;
L_0044213e:; BB(0x0044213e);
    /* 0044213e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00442141: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 00442144: cmp dword ptr [eax + edx*4 + 4], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442149: je 0x442169 */ if (fZ) goto L_00442169;
L_0044214b:; BB(0x0044214b);
    /* 0044214b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044214e: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 00442151: mov ecx, dword ptr [edx + ecx*4 + 4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 00442155: call 0x5eb220 */ r_esp -= 4; W32(r_esp, 0x44215au); f_005eb220();
    /* 0044215a: cmp eax, dword ptr [ebp - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044215d: jne 0x442169 */ if (!fZ) goto L_00442169;
L_0044215f:; BB(0x0044215f);
    /* 0044215f: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00442162: call 0x441a90 */ r_esp -= 4; W32(r_esp, 0x442167u); f_00441a90();
    /* 00442167: jmp 0x44216b */ goto L_0044216b;
L_00442169:; BB(0x00442169);
    /* 00442169: jmp 0x44212f */ goto L_0044212f;
L_0044216b:; BB(0x0044216b);
    /* 0044216b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044216e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00442175: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00442176: mov esp, ebp */ r_esp = r_ebp;
    /* 00442178: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00442179: ret  */ FN_RET(0x00441d80); r_esp += 4; return;
}

