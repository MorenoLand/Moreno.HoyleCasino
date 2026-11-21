#include "protos.h"

void f_00413360(void) /* blackjackgame::func_00413360 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00413360);
    /* 00413360: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00413361: mov ebp, esp */ r_ebp = r_esp;
    /* 00413363: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00413365: push 0x69dd52 */ { u32 v = 0x69dd52u; r_esp -= 4; W32(r_esp, v); }
    /* 0041336a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00413370: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00413371: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00413374: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00413379: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041337b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041337c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0041337f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00413385: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00413388: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041338c: jne 0x413397 */ if (!fZ) goto L_00413397;
L_0041338e:; BB(0x0041338e);
    /* 0041338e: mov dword ptr [ebp - 0x10], 0xffffffff */ W32((u32)(r_ebp+0xfffffff0u), 0xffffffffu);
    /* 00413395: jmp 0x4133c6 */ goto L_004133c6;
L_00413397:; BB(0x00413397);
    /* 00413397: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041339b: jne 0x4133a6 */ if (!fZ) goto L_004133a6;
L_0041339d:; BB(0x0041339d);
    /* 0041339d: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 004133a4: jmp 0x4133c0 */ goto L_004133c0;
L_004133a6:; BB(0x004133a6);
    /* 004133a6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004133a9: imul eax, eax, 0x118 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x118u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004133af: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 004133b5: movsx edx, byte ptr [ecx + eax + 0x119] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+r_eax+0x119u));
    /* 004133bd: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
L_004133c0:; BB(0x004133c0);
    /* 004133c0: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004133c3: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_004133c6:; BB(0x004133c6);
    /* 004133c6: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004133ca: jne 0x4133db */ if (!fZ) goto L_004133db;
L_004133cc:; BB(0x004133cc);
    /* 004133cc: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 004133d2: mov edx, dword ptr [ecx + 0x4d4] */ r_edx = R32((u32)(r_ecx+0x4d4u));
    /* 004133d8: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
L_004133db:; BB(0x004133db);
    /* 004133db: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004133de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004133df: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4133e4u); f_005dcb00();
    /* 004133e4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004133e7: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 004133ea: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004133ed: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4133f2u); f_0063aac0();
    /* 004133f2: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 004133f4: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 004133f7: cmp dword ptr [ebp - 0x24], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004133fb: je 0x413419 */ if (fZ) goto L_00413419;
L_004133fd:; BB(0x004133fd);
    /* 004133fd: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00413400: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x413405u); f_0063aac0();
    /* 00413405: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00413407: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 0041340a: cmp dword ptr [ebp - 0x28], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041340e: je 0x413419 */ if (fZ) goto L_00413419;
L_00413410:; BB(0x00413410);
    /* 00413410: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 00413417: jmp 0x413420 */ goto L_00413420;
L_00413419:; BB(0x00413419);
    /* 00413419: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
L_00413420:; BB(0x00413420);
    /* 00413420: movzx eax, byte ptr [ebp - 0x38] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffc8u));
    /* 00413424: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413426: je 0x413487 */ if (fZ) goto L_00413487;
L_00413428:; BB(0x00413428);
    /* 00413428: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0041342a: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00413430: call 0x5df7b0 */ r_esp -= 4; W32(r_esp, 0x413435u); f_005df7b0();
    /* 00413435: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00413438: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041343a: je 0x413487 */ if (fZ) goto L_00413487;
L_0041343c:; BB(0x0041343c);
    /* 0041343c: movzx edx, byte ptr [ebp + 0x10] */ r_edx = (u32)R8((u32)(r_ebp+0x10u));
    /* 00413440: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413442: je 0x413487 */ if (fZ) goto L_00413487;
L_00413444:; BB(0x00413444);
    /* 00413444: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00413447: movzx ecx, byte ptr [eax + 0x19] */ r_ecx = (u32)R8((u32)(r_eax+0x19u));
    /* 0041344b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041344d: jne 0x413487 */ if (!fZ) goto L_00413487;
L_0041344f:; BB(0x0041344f);
    /* 0041344f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00413452: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00413453: mov ecx, dword ptr [0x790330] */ r_ecx = R32((u32)(0x790330u));
    /* 00413459: call 0x40b260 */ r_esp -= 4; W32(r_esp, 0x41345eu); f_0040b260();
    /* 0041345e: cmp dword ptr [ebp + 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413461: je 0x413487 */ if (fZ) goto L_00413487;
L_00413463:; BB(0x00413463);
    /* 00413463: mov ecx, dword ptr [0x79032c] */ r_ecx = R32((u32)(0x79032cu));
    /* 00413469: call 0x40d930 */ r_esp -= 4; W32(r_esp, 0x41346eu); f_0040d930();
    /* 0041346e: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00413471: mov byte ptr [eax + 0x19], 1 */ W8((u32)(r_eax+0x19u), 0x1u);
    /* 00413475: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 0041347b: call 0x57c140 */ r_esp -= 4; W32(r_esp, 0x413480u); f_0057c140();
    /* 00413480: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00413482: jmp 0x41366a */ goto L_0041366a;
L_00413487:; BB(0x00413487);
    /* 00413487: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0041348a: mov byte ptr [ecx + 0x19], 0 */ W8((u32)(r_ecx+0x19u), 0x0u);
    /* 0041348e: mov edx, dword ptr [0x790324] */ r_edx = R32((u32)(0x790324u));
    /* 00413494: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00413497: mov dword ptr [edx + 0x4d4], eax */ W32((u32)(r_edx+0x4d4u), r_eax);
    /* 0041349d: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004134a0: mov byte ptr [ecx + 0xd], 1 */ W8((u32)(r_ecx+0xdu), 0x1u);
    /* 004134a4: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 004134a7: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 004134aa: cmp dword ptr [ebp - 0x3c], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004134ae: ja 0x41364d */ if ((!fC&&!fZ)) goto L_0041364d;
L_004134b4:; BB(0x004134b4);
    /* 004134b4: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 004134b7: jmp dword ptr [eax*4 + 0x41367c] */ { u32 t = R32((u32)(r_eax*4+0x41367cu)); switch (t) { case 0x4134beu: goto L_004134be; case 0x4134cfu: goto L_004134cf; case 0x41359du: goto L_0041359d; case 0x413546u: goto L_00413546; case 0x413630u: goto L_00413630; default: UNSUP(0x004134b7, "jump table entry is not a known target"); } }
L_004134be:; BB(0x004134be);
    /* 004134be: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004134c1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004134c2: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004134c5: call 0x413690 */ r_esp -= 4; W32(r_esp, 0x4134cau); f_00413690();
    /* 004134ca: jmp 0x413668 */ goto L_00413668;
L_004134cf:; BB(0x004134cf);
    /* 004134cf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004134d1: mov edx, dword ptr [0x790320] */ r_edx = R32((u32)(0x790320u));
    /* 004134d7: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004134da: mov ecx, dword ptr [0x790320] */ r_ecx = R32((u32)(0x790320u));
    /* 004134e0: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 004134e3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004134e5: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004134e8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4134eau); call_ind(t); }
    /* 004134ea: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 004134ec: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4134f1u); f_00686d82();
    /* 004134f1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004134f4: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004134f7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004134fe: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413502: je 0x41351b */ if (fZ) goto L_0041351b;
L_00413504:; BB(0x00413504);
    /* 00413504: mov ecx, dword ptr [0x790320] */ r_ecx = R32((u32)(0x790320u));
    /* 0041350a: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0041350d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041350e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00413511: call 0x410d40 */ r_esp -= 4; W32(r_esp, 0x413516u); f_00410d40();
    /* 00413516: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00413519: jmp 0x413522 */ goto L_00413522;
L_0041351b:; BB(0x0041351b);
    /* 0041351b: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_00413522:; BB(0x00413522);
    /* 00413522: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00413525: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00413528: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0041352f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00413532: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00413533: mov edx, dword ptr [0x790320] */ r_edx = R32((u32)(0x790320u));
    /* 00413539: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0041353c: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x413541u); f_005fc420();
    /* 00413541: jmp 0x413668 */ goto L_00413668;
L_00413546:; BB(0x00413546);
    /* 00413546: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00413549: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041354a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041354d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041354e: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00413554: call 0x41b170 */ r_esp -= 4; W32(r_esp, 0x413559u); f_0041b170();
    /* 00413559: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041355c: mov eax, dword ptr [0x79032c] */ r_eax = R32((u32)(0x79032cu));
    /* 00413561: mov ecx, dword ptr [eax + edx*4 + 0x18] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x18u));
    /* 00413565: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00413568: mov eax, dword ptr [0x79032c] */ r_eax = R32((u32)(0x79032cu));
    /* 0041356d: mov edx, dword ptr [eax + edx*4 + 0x18] */ r_edx = R32((u32)(r_eax+r_edx*4+0x18u));
    /* 00413571: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00413573: mov ecx, edx */ r_ecx = r_edx;
    /* 00413575: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 00413578: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x41357au); call_ind(t); }
    /* 0041357a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041357c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041357e: mov eax, dword ptr [0x790320] */ r_eax = R32((u32)(0x790320u));
    /* 00413583: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00413586: mov edx, dword ptr [0x790320] */ r_edx = R32((u32)(0x790320u));
    /* 0041358c: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0041358f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00413591: mov ecx, eax */ r_ecx = r_eax;
    /* 00413593: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00413596: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x413598u); call_ind(t); }
    /* 00413598: jmp 0x413668 */ goto L_00413668;
L_0041359d:; BB(0x0041359d);
    /* 0041359d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004135a0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004135a1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004135a4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004135a5: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 004135ab: call 0x41b0a0 */ r_esp -= 4; W32(r_esp, 0x4135b0u); f_0041b0a0();
    /* 004135b0: mov ecx, dword ptr [0x79032c] */ r_ecx = R32((u32)(0x79032cu));
    /* 004135b6: call 0x40cc00 */ r_esp -= 4; W32(r_esp, 0x4135bbu); f_0040cc00();
    /* 004135bb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004135bd: mov eax, dword ptr [0x790320] */ r_eax = R32((u32)(0x790320u));
    /* 004135c2: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 004135c5: mov edx, dword ptr [0x790320] */ r_edx = R32((u32)(0x790320u));
    /* 004135cb: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004135ce: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004135d0: mov ecx, eax */ r_ecx = r_eax;
    /* 004135d2: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004135d5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4135d7u); call_ind(t); }
    /* 004135d7: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 004135d9: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4135deu); f_00686d82();
    /* 004135de: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004135e1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004135e4: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004135eb: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004135ef: je 0x413608 */ if (fZ) goto L_00413608;
L_004135f1:; BB(0x004135f1);
    /* 004135f1: mov ecx, dword ptr [0x790320] */ r_ecx = R32((u32)(0x790320u));
    /* 004135f7: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 004135fa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004135fb: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004135fe: call 0x410d40 */ r_esp -= 4; W32(r_esp, 0x413603u); f_00410d40();
    /* 00413603: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00413606: jmp 0x41360f */ goto L_0041360f;
L_00413608:; BB(0x00413608);
    /* 00413608: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_0041360f:; BB(0x0041360f);
    /* 0041360f: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00413612: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00413615: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0041361c: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041361f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00413620: mov edx, dword ptr [0x790320] */ r_edx = R32((u32)(0x790320u));
    /* 00413626: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00413629: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x41362eu); f_005fc420();
    /* 0041362e: jmp 0x413668 */ goto L_00413668;
L_00413630:; BB(0x00413630);
    /* 00413630: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00413633: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00413634: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0041363a: call 0x41b340 */ r_esp -= 4; W32(r_esp, 0x41363fu); f_0041b340();
    /* 0041363f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00413642: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00413643: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00413646: call 0x413690 */ r_esp -= 4; W32(r_esp, 0x41364bu); f_00413690();
    /* 0041364b: jmp 0x413668 */ goto L_00413668;
L_0041364d:; BB(0x0041364d);
    /* 0041364d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0041364f: jne 0x413668 */ if (!fZ) goto L_00413668;
L_00413651:; BB(0x00413651);
    /* 00413651: push 0x25c */ { u32 v = 0x25cu; r_esp -= 4; W32(r_esp, v); }
    /* 00413656: push 0x6b3e1c */ { u32 v = 0x6b3e1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0041365b: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00413660: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x413665u); f_005e9f20();
    /* 00413665: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00413668:; BB(0x00413668);
    /* 00413668: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0041366a:; BB(0x0041366a);
    /* 0041366a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041366d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00413674: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00413675: mov esp, ebp */ r_esp = r_ebp;
    /* 00413677: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00413678: ret 0xc */ FN_RET(0x00413360); r_esp += 16; return;
}

