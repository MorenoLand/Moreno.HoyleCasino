#include "protos.h"

void f_00651340(void) /* tutorial::func_00651340 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00651340);
    /* 00651340: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00651341: mov ebp, esp */ r_ebp = r_esp;
    /* 00651343: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00651345: push 0x6ac37d */ { u32 v = 0x6ac37du; r_esp -= 4; W32(r_esp, v); }
    /* 0065134a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00651350: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00651351: sub esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00651354: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00651359: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065135b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065135c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0065135f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00651365: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 00651368: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0065136b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0065136e: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00651370: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00651373: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00651375: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00651378: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 0065137a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0065137c: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 0065137f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x651381u); call_ind(t); }
    /* 00651381: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00651384: mov dword ptr [ecx + 8], 0 */ W32((u32)(r_ecx+0x8u), 0x0u);
    /* 0065138b: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0065138e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00651390: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00651393: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 00651395: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00651397: mov eax, dword ptr [edx + 0x21c] */ r_eax = R32((u32)(r_edx+0x21cu));
    /* 0065139d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65139fu); call_ind(t); }
    /* 0065139f: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006513a2: mov dword ptr [ecx + 0x80], eax */ W32((u32)(r_ecx+0x80u), r_eax);
    /* 006513a8: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006513ab: mov byte ptr [edx + 0x10], 0 */ W8((u32)(r_edx+0x10u), 0x0u);
    /* 006513af: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 006513b2: mov byte ptr [eax + 0x11], 0 */ W8((u32)(r_eax+0x11u), 0x0u);
    /* 006513b6: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006513b9: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 006513bb: call 0x5f1b50 */ r_esp -= 4; W32(r_esp, 0x6513c0u); f_005f1b50();
    /* 006513c0: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006513c3: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 006513c6: push 0x231b1c */ { u32 v = 0x231b1cu; r_esp -= 4; W32(r_esp, v); }
    /* 006513cb: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 006513ce: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 006513d0: call 0x5f1ad0 */ r_esp -= 4; W32(r_esp, 0x6513d5u); f_005f1ad0();
    /* 006513d5: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 006513da: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x6513dfu); f_00686d82();
    /* 006513df: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006513e2: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 006513e5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006513ec: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006513f0: je 0x6513ff */ if (fZ) goto L_006513ff;
L_006513f2:; BB(0x006513f2);
    /* 006513f2: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006513f5: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x6513fau); f_005eaaf0();
    /* 006513fa: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 006513fd: jmp 0x651406 */ goto L_00651406;
L_006513ff:; BB(0x006513ff);
    /* 006513ff: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_00651406:; BB(0x00651406);
    /* 00651406: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00651409: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0065140c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00651413: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00651416: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651419: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 0065141c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065141e: push 0x27d8 */ { u32 v = 0x27d8u; r_esp -= 4; W32(r_esp, v); }
    /* 00651423: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00651425: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00651427: push 0x231b1d */ { u32 v = 0x231b1du; r_esp -= 4; W32(r_esp, v); }
    /* 0065142c: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0065142f: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 00651432: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x651437u); f_005eae80();
    /* 00651437: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0065143a: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0065143d: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00651440: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 00651443: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00651445: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00651448: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65144au); call_ind(t); }
    /* 0065144a: push 0x5c */ { u32 v = 0x5cu; r_esp -= 4; W32(r_esp, v); }
    /* 0065144c: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x651451u); f_00686d82();
    /* 00651451: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00651454: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00651457: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0065145e: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00651462: je 0x651471 */ if (fZ) goto L_00651471;
L_00651464:; BB(0x00651464);
    /* 00651464: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00651467: call 0x5f6130 */ r_esp -= 4; W32(r_esp, 0x65146cu); f_005f6130();
    /* 0065146c: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 0065146f: jmp 0x651478 */ goto L_00651478;
L_00651471:; BB(0x00651471);
    /* 00651471: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
L_00651478:; BB(0x00651478);
    /* 00651478: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0065147b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0065147e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00651485: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00651488: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065148b: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 0065148e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00651490: push 0x27e2 */ { u32 v = 0x27e2u; r_esp -= 4; W32(r_esp, v); }
    /* 00651495: push 0x240 */ { u32 v = 0x240u; r_esp -= 4; W32(r_esp, v); }
    /* 0065149a: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0065149c: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0065149e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006514a0: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006514a3: mov ecx, dword ptr [ecx + 0x1c] */ r_ecx = R32((u32)(r_ecx+0x1cu));
    /* 006514a6: call 0x5f61d0 */ r_esp -= 4; W32(r_esp, 0x6514abu); f_005f61d0();
    /* 006514ab: push 0xa8 */ { u32 v = 0xa8u; r_esp -= 4; W32(r_esp, v); }
    /* 006514b0: push 0xae */ { u32 v = 0xaeu; r_esp -= 4; W32(r_esp, v); }
    /* 006514b5: push 0x74 */ { u32 v = 0x74u; r_esp -= 4; W32(r_esp, v); }
    /* 006514b7: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006514ba: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 006514bd: call 0x5f6580 */ r_esp -= 4; W32(r_esp, 0x6514c2u); f_005f6580();
    /* 006514c2: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 006514c5: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 006514c8: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006514cb: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 006514ce: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006514d0: mov ecx, eax */ r_ecx = r_eax;
    /* 006514d2: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 006514d5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6514d7u); call_ind(t); }
    /* 006514d7: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 006514de: jmp 0x6514e9 */ goto L_006514e9;
L_006514e0:; BB(0x006514e0);
    /* 006514e0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006514e3: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006514e6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_006514e9:; BB(0x006514e9);
    /* 006514e9: cmp dword ptr [ebp - 0x14], 6 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006514ed: jge 0x6514ff */ if ((fS==fO)) goto L_006514ff;
L_006514ef:; BB(0x006514ef);
    /* 006514ef: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006514f2: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 006514f5: mov dword ptr [eax + edx*4 + 0x20], 0 */ W32((u32)(r_eax+r_edx*4+0x20u), 0x0u);
    /* 006514fd: jmp 0x6514e0 */ goto L_006514e0;
L_006514ff:; BB(0x006514ff);
    /* 006514ff: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00651502: call 0x652d20 */ r_esp -= 4; W32(r_esp, 0x651507u); f_00652d20();
    /* 00651507: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0065150a: mov eax, 0x2a8 */ r_eax = 0x2a8u;
    /* 0065150f: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00651510: idiv dword ptr [ebp - 0x10] */ { i32 d = (i32)R32((u32)(r_ebp+0xfffffff0u)); if (!d) UNSUP(0x00651510, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00651510, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00651513: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00651516: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00651519: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00651520: jmp 0x65152b */ goto L_0065152b;
L_00651522:; BB(0x00651522);
    /* 00651522: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00651525: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00651528: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
L_0065152b:; BB(0x0065152b);
    /* 0065152b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0065152e: cmp eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00651531: jge 0x6516ab */ if ((fS==fO)) goto L_006516ab;
L_00651537:; BB(0x00651537);
    /* 00651537: cmp dword ptr [ebp - 0x14], 6 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065153b: jl 0x65155a */ if ((fS!=fO)) goto L_0065155a;
L_0065153d:; BB(0x0065153d);
    /* 0065153d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0065153f: jne 0x651555 */ if (!fZ) goto L_00651555;
L_00651541:; BB(0x00651541);
    /* 00651541: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 00651543: push 0x6dd238 */ { u32 v = 0x6dd238u; r_esp -= 4; W32(r_esp, v); }
    /* 00651548: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0065154d: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x651552u); f_005e9f20();
    /* 00651552: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00651555:; BB(0x00651555);
    /* 00651555: jmp 0x6516ab */ goto L_006516ab;
L_0065155a:; BB(0x0065155a);
    /* 0065155a: push 0x1f8 */ { u32 v = 0x1f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0065155f: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x651564u); f_00686d82();
    /* 00651564: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00651567: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0065156a: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00651571: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00651575: je 0x65158c */ if (fZ) goto L_0065158c;
L_00651577:; BB(0x00651577);
    /* 00651577: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0065157a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065157b: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0065157e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065157f: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00651582: call 0x652e20 */ r_esp -= 4; W32(r_esp, 0x651587u); f_00652e20();
    /* 00651587: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 0065158a: jmp 0x651593 */ goto L_00651593;
L_0065158c:; BB(0x0065158c);
    /* 0065158c: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
L_00651593:; BB(0x00651593);
    /* 00651593: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00651596: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 00651599: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006515a0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006515a3: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006515a6: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006515a9: mov dword ptr [ecx + eax*4 + 0x20], edx */ W32((u32)(r_ecx+r_eax*4+0x20u), r_edx);
    /* 006515ad: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006515b0: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006515b3: mov edx, dword ptr [ecx + eax*4 + 0x20] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 006515b7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006515ba: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006515bd: mov ecx, dword ptr [ecx + eax*4 + 0x20] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 006515c1: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 006515c3: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 006515c6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6515c8u); call_ind(t); }
    /* 006515c8: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 006515ca: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006515cd: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 006515d0: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006515d3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006515d4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006515d7: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006515da: mov edx, dword ptr [ecx + eax*4 + 0x20] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 006515de: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006515e1: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006515e4: mov ecx, dword ptr [ecx + eax*4 + 0x20] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 006515e8: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 006515ea: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 006515ed: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6515efu); call_ind(t); }
    /* 006515ef: push 0x27ec */ { u32 v = 0x27ecu; r_esp -= 4; W32(r_esp, v); }
    /* 006515f4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006515f7: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006515fa: mov eax, dword ptr [edx + ecx*4 + 0x20] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 006515fe: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00651601: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00651604: mov ecx, dword ptr [edx + ecx*4 + 0x20] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 00651608: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0065160a: mov edx, dword ptr [eax + 0x6c] */ r_edx = R32((u32)(r_eax+0x6cu));
    /* 0065160d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x65160fu); call_ind(t); }
    /* 0065160f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00651611: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00651613: push 0x5e */ { u32 v = 0x5eu; r_esp -= 4; W32(r_esp, v); }
    /* 00651615: push 0x5e */ { u32 v = 0x5eu; r_esp -= 4; W32(r_esp, v); }
    /* 00651617: push 0x5e */ { u32 v = 0x5eu; r_esp -= 4; W32(r_esp, v); }
    /* 00651619: push 0x5e */ { u32 v = 0x5eu; r_esp -= 4; W32(r_esp, v); }
    /* 0065161b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0065161e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065161f: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00651622: call 0x652c70 */ r_esp -= 4; W32(r_esp, 0x651627u); f_00652c70();
    /* 00651627: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00651628: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0065162b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065162d: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 00651630: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00651632: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00651634: mov eax, dword ptr [edx + 0x230] */ r_eax = R32((u32)(r_edx+0x230u));
    /* 0065163a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65163cu); call_ind(t); }
    /* 0065163c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065163d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00651640: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00651643: mov eax, dword ptr [edx + ecx*4 + 0x20] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 00651647: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065164a: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0065164d: mov ecx, dword ptr [edx + ecx*4 + 0x20] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 00651651: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00651653: mov edx, dword ptr [eax + 0xdc] */ r_edx = R32((u32)(r_eax+0xdcu));
    /* 00651659: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x65165bu); call_ind(t); }
    /* 0065165b: push 0x23f */ { u32 v = 0x23fu; r_esp -= 4; W32(r_esp, v); }
    /* 00651660: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 00651663: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00651666: imul ecx, dword ptr [eax + 4] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_eax+0x4u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0065166a: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065166d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065166e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00651671: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 00651674: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 00651678: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065167b: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0065167e: mov edx, dword ptr [eax + edx*4 + 0x20] */ r_edx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 00651682: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00651684: mov ecx, edx */ r_ecx = r_edx;
    /* 00651686: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 00651689: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x65168bu); call_ind(t); }
    /* 0065168b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0065168e: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00651691: mov edx, dword ptr [ecx + eax*4 + 0x20] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 00651695: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00651698: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0065169b: mov ecx, dword ptr [ecx + eax*4 + 0x20] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 0065169f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 006516a1: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 006516a4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6516a6u); call_ind(t); }
    /* 006516a6: jmp 0x651522 */ goto L_00651522;
L_006516ab:; BB(0x006516ab);
    /* 006516ab: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 006516b2: jmp 0x6516bd */ goto L_006516bd;
L_006516b4:; BB(0x006516b4);
    /* 006516b4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006516b7: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006516ba: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_006516bd:; BB(0x006516bd);
    /* 006516bd: cmp dword ptr [ebp - 0x14], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006516c1: jge 0x651801 */ if ((fS==fO)) goto L_00651801;
L_006516c7:; BB(0x006516c7);
    /* 006516c7: push 0x1f8 */ { u32 v = 0x1f8u; r_esp -= 4; W32(r_esp, v); }
    /* 006516cc: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x6516d1u); f_00686d82();
    /* 006516d1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006516d4: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 006516d7: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 006516de: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006516e2: je 0x6516fc */ if (fZ) goto L_006516fc;
L_006516e4:; BB(0x006516e4);
    /* 006516e4: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006516e7: add edx, 0x64 */ {  u32 a = r_edx; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006516ea: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006516eb: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 006516ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006516ef: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 006516f2: call 0x652e20 */ r_esp -= 4; W32(r_esp, 0x6516f7u); f_00652e20();
    /* 006516f7: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 006516fa: jmp 0x651703 */ goto L_00651703;
L_006516fc:; BB(0x006516fc);
    /* 006516fc: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
L_00651703:; BB(0x00651703);
    /* 00651703: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00651706: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00651709: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00651710: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00651713: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 00651716: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00651719: mov dword ptr [eax + edx*4 + 0x38], ecx */ W32((u32)(r_eax+r_edx*4+0x38u), r_ecx);
    /* 0065171d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065171f: push 0x283d */ { u32 v = 0x283du; r_esp -= 4; W32(r_esp, v); }
    /* 00651724: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00651726: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00651728: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065172b: add edx, 0x231b26 */ {  u32 a = r_edx; u32 b = 0x231b26u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00651731: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00651732: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00651735: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00651738: mov ecx, dword ptr [ecx + eax*4 + 0x38] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x38u));
    /* 0065173c: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x651741u); f_005eae80();
    /* 00651741: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00651744: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 00651747: mov ecx, dword ptr [eax + edx*4 + 0x38] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x38u));
    /* 0065174b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065174e: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 00651751: mov edx, dword ptr [eax + edx*4 + 0x38] */ r_edx = R32((u32)(r_eax+r_edx*4+0x38u));
    /* 00651755: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00651757: mov ecx, edx */ r_ecx = r_edx;
    /* 00651759: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 0065175c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x65175eu); call_ind(t); }
    /* 0065175e: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 00651763: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x651768u); f_00686d82();
    /* 00651768: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065176b: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0065176e: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 00651775: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00651779: je 0x651788 */ if (fZ) goto L_00651788;
L_0065177b:; BB(0x0065177b);
    /* 0065177b: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065177e: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x651783u); f_005f5bf0();
    /* 00651783: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 00651786: jmp 0x65178f */ goto L_0065178f;
L_00651788:; BB(0x00651788);
    /* 00651788: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
L_0065178f:; BB(0x0065178f);
    /* 0065178f: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 00651792: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00651795: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0065179c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065179f: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006517a2: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 006517a5: mov dword ptr [edx + ecx*4 + 0x48], eax */ W32((u32)(r_edx+r_ecx*4+0x48u), r_eax);
    /* 006517a9: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006517ab: push 0x2846 */ { u32 v = 0x2846u; r_esp -= 4; W32(r_esp, v); }
    /* 006517b0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006517b2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006517b4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006517b7: add ecx, 0x231b30 */ {  u32 a = r_ecx; u32 b = 0x231b30u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006517bd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006517be: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006517c1: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 006517c4: mov ecx, dword ptr [eax + edx*4 + 0x48] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x48u));
    /* 006517c8: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x6517cdu); f_005eae80();
    /* 006517cd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006517d0: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006517d3: mov eax, dword ptr [edx + ecx*4 + 0x48] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x48u));
    /* 006517d7: mov dword ptr [eax + 0x178], 0x1e */ W32((u32)(r_eax+0x178u), 0x1eu);
    /* 006517e1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006517e4: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006517e7: mov eax, dword ptr [edx + ecx*4 + 0x48] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x48u));
    /* 006517eb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006517ee: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006517f1: mov ecx, dword ptr [edx + ecx*4 + 0x48] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x48u));
    /* 006517f5: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 006517f7: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 006517fa: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6517fcu); call_ind(t); }
    /* 006517fc: jmp 0x6516b4 */ goto L_006516b4;
L_00651801:; BB(0x00651801);
    /* 00651801: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00651803: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 00651806: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 00651809: call 0x6026f0 */ r_esp -= 4; W32(r_esp, 0x65180eu); f_006026f0();
    /* 0065180e: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00651810: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00651813: mov ecx, dword ptr [ecx + 0x38] */ r_ecx = R32((u32)(r_ecx+0x38u));
    /* 00651816: call 0x602740 */ r_esp -= 4; W32(r_esp, 0x65181bu); f_00602740();
    /* 0065181b: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0065181d: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00651820: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 00651823: call 0x6026f0 */ r_esp -= 4; W32(r_esp, 0x651828u); f_006026f0();
    /* 00651828: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 0065182a: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0065182d: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 00651830: call 0x602740 */ r_esp -= 4; W32(r_esp, 0x651835u); f_00602740();
    /* 00651835: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 00651837: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0065183a: mov ecx, dword ptr [ecx + 0x44] */ r_ecx = R32((u32)(r_ecx+0x44u));
    /* 0065183d: call 0x6026f0 */ r_esp -= 4; W32(r_esp, 0x651842u); f_006026f0();
    /* 00651842: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00651849: jmp 0x651854 */ goto L_00651854;
L_0065184b:; BB(0x0065184b);
    /* 0065184b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065184e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00651851: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
L_00651854:; BB(0x00651854);
    /* 00651854: cmp dword ptr [ebp - 0x14], 0xa */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00651858: jge 0x651927 */ if ((fS==fO)) goto L_00651927;
L_0065185e:; BB(0x0065185e);
    /* 0065185e: push 0x1b4 */ { u32 v = 0x1b4u; r_esp -= 4; W32(r_esp, v); }
    /* 00651863: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x651868u); f_00686d82();
    /* 00651868: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065186b: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0065186e: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 00651875: cmp dword ptr [ebp - 0x44], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00651879: je 0x651897 */ if (fZ) goto L_00651897;
L_0065187b:; BB(0x0065187b);
    /* 0065187b: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0065187d: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0065187f: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00651884: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00651887: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00651888: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065188a: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0065188d: call 0x5f7670 */ r_esp -= 4; W32(r_esp, 0x651892u); f_005f7670();
    /* 00651892: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 00651895: jmp 0x65189e */ goto L_0065189e;
L_00651897:; BB(0x00651897);
    /* 00651897: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
L_0065189e:; BB(0x0065189e);
    /* 0065189e: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 006518a1: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 006518a4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006518ab: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006518ae: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006518b1: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 006518b4: mov dword ptr [ecx + eax*4 + 0x58], edx */ W32((u32)(r_ecx+r_eax*4+0x58u), r_edx);
    /* 006518b8: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 006518bd: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x6518c2u); f_00686d82();
    /* 006518c2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006518c5: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 006518c8: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 006518cf: cmp dword ptr [ebp - 0x4c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006518d3: je 0x6518e2 */ if (fZ) goto L_006518e2;
L_006518d5:; BB(0x006518d5);
    /* 006518d5: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 006518d8: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x6518ddu); f_005f5bf0();
    /* 006518dd: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 006518e0: jmp 0x6518e9 */ goto L_006518e9;
L_006518e2:; BB(0x006518e2);
    /* 006518e2: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
L_006518e9:; BB(0x006518e9);
    /* 006518e9: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 006518ec: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 006518ef: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006518f6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006518f8: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 006518fd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006518ff: push 0x2774 */ { u32 v = 0x2774u; r_esp -= 4; W32(r_esp, v); }
    /* 00651904: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00651906: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00651908: push 0x33e154 */ { u32 v = 0x33e154u; r_esp -= 4; W32(r_esp, v); }
    /* 0065190d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065190f: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00651912: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00651913: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00651916: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 00651919: mov ecx, dword ptr [eax + edx*4 + 0x58] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x58u));
    /* 0065191d: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x651922u); f_005f9ce0();
    /* 00651922: jmp 0x65184b */ goto L_0065184b;
L_00651927:; BB(0x00651927);
    /* 00651927: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0065192a: call 0x652860 */ r_esp -= 4; W32(r_esp, 0x65192fu); f_00652860();
    /* 0065192f: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 00651932: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00651935: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065193c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065193d: mov esp, ebp */ r_esp = r_ebp;
    /* 0065193f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00651940: ret 4 */ FN_RET(0x00651340); r_esp += 8; return;
}

void f_00651af0(void) /* tutorial::func_00651af0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00651af0);
    /* 00651af0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00651af1: mov ebp, esp */ r_ebp = r_esp;
    /* 00651af3: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00651af6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00651af7: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00651afa: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651afd: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00651b00: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00651b03: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651b06: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 00651b0c: mov ecx, dword ptr [eax + ecx + 4] */ r_ecx = R32((u32)(r_eax+r_ecx+0x4u));
    /* 00651b10: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00651b11: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651b14: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00651b17: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00651b1a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651b1d: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 00651b23: mov eax, dword ptr [edx + eax] */ r_eax = R32((u32)(r_edx+r_eax));
    /* 00651b26: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00651b27: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651b2a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00651b2c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651b2f: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00651b31: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00651b33: mov eax, dword ptr [edx + 0x220] */ r_eax = R32((u32)(r_edx+0x220u));
    /* 00651b39: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x651b3bu); call_ind(t); }
    /* 00651b3b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00651b3d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651b40: call 0x652900 */ r_esp -= 4; W32(r_esp, 0x651b45u); f_00652900();
    /* 00651b45: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00651b4c: jmp 0x651b57 */ goto L_00651b57;
L_00651b4e:; BB(0x00651b4e);
    /* 00651b4e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00651b51: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00651b54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00651b57:; BB(0x00651b57);
    /* 00651b57: cmp dword ptr [ebp - 4], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00651b5b: jge 0x651b87 */ if ((fS==fO)) goto L_00651b87;
L_00651b5d:; BB(0x00651b5d);
    /* 00651b5d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00651b60: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651b63: cmp dword ptr [eax + edx*4 + 0x20], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00651b68: je 0x651b85 */ if (fZ) goto L_00651b85;
L_00651b6a:; BB(0x00651b6a);
    /* 00651b6a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00651b6d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651b70: mov eax, dword ptr [edx + ecx*4 + 0x20] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 00651b74: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00651b77: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651b7a: mov ecx, dword ptr [edx + ecx*4 + 0x20] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 00651b7e: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00651b80: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 00651b83: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x651b85u); call_ind(t); }
L_00651b85:; BB(0x00651b85);
    /* 00651b85: jmp 0x651b4e */ goto L_00651b4e;
L_00651b87:; BB(0x00651b87);
    /* 00651b87: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651b8a: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00651b8d: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00651b90: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651b93: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 00651b99: cmp dword ptr [ecx + eax], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00651b9d: je 0x651bba */ if (fZ) goto L_00651bba;
L_00651b9f:; BB(0x00651b9f);
    /* 00651b9f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651ba2: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00651ba5: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00651ba8: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00651bab: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651bae: mov ecx, dword ptr [eax + 0x80] */ r_ecx = R32((u32)(r_eax+0x80u));
    /* 00651bb4: cmp dword ptr [edx + ecx], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00651bb8: jne 0x651be3 */ if (!fZ) goto L_00651be3;
L_00651bba:; BB(0x00651bba);
    /* 00651bba: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 00651bbc: push 0x2a8 */ { u32 v = 0x2a8u; r_esp -= 4; W32(r_esp, v); }
    /* 00651bc1: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651bc4: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00651bc7: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651bca: mov ecx, dword ptr [ecx + 0x1c] */ r_ecx = R32((u32)(r_ecx+0x1cu));
    /* 00651bcd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00651bcf: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 00651bd2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x651bd4u); call_ind(t); }
    /* 00651bd4: push 0x67 */ { u32 v = 0x67u; r_esp -= 4; W32(r_esp, v); }
    /* 00651bd6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651bd9: call 0x652900 */ r_esp -= 4; W32(r_esp, 0x651bdeu); f_00652900();
    /* 00651bde: jmp 0x6520c7 */ goto L_006520c7;
L_00651be3:; BB(0x00651be3);
    /* 00651be3: call dword ptr [0x6b20bc] */ { u32 t = R32((u32)(0x6b20bcu)); r_esp -= 4; W32(r_esp, 0x651be9u); call_ind(t); }
    /* 00651be9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651bec: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00651bef: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00651bf2: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651bf5: mov ecx, dword ptr [ecx + 0x80] */ r_ecx = R32((u32)(r_ecx+0x80u));
    /* 00651bfb: mov dword ptr [ecx + edx + 0x10], eax */ W32((u32)(r_ecx+r_edx+0x10u), r_eax);
    /* 00651bff: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 00651c02: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00651c03: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00651c06: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00651c07: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651c0a: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00651c0d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00651c0e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651c11: call 0x652b60 */ r_esp -= 4; W32(r_esp, 0x651c16u); f_00652b60();
    /* 00651c16: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651c19: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00651c1c: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00651c1f: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651c22: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 00651c28: mov ecx, dword ptr [eax + ecx] */ r_ecx = R32((u32)(r_eax+r_ecx));
    /* 00651c2b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00651c2c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651c2f: call 0x652da0 */ r_esp -= 4; W32(r_esp, 0x651c34u); f_00652da0();
    /* 00651c34: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00651c37: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651c3a: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00651c3d: imul ecx, dword ptr [ebp - 0xc] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xfffffff4u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00651c41: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651c44: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00651c47: imul eax, dword ptr [ebp - 8] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xfffffff8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00651c4b: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00651c4c: idiv dword ptr [ebp - 0x14] */ { i32 d = (i32)R32((u32)(r_ebp+0xffffffecu)); if (!d) UNSUP(0x00651c4c, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00651c4c, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00651c4f: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00651c51: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00651c54: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651c57: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 00651c5a: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x651c5fu); f_005f5590();
    /* 00651c5f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00651c60: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00651c63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00651c64: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651c67: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00651c6a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651c6d: mov ecx, dword ptr [ecx + 0x1c] */ r_ecx = R32((u32)(r_ecx+0x1cu));
    /* 00651c70: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00651c72: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 00651c75: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x651c77u); call_ind(t); }
    /* 00651c77: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651c7a: movzx edx, byte ptr [ecx + 0x10] */ r_edx = (u32)R8((u32)(r_ecx+0x10u));
    /* 00651c7e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00651c80: je 0x651c87 */ if (fZ) goto L_00651c87;
L_00651c82:; BB(0x00651c82);
    /* 00651c82: jmp 0x6520c7 */ goto L_006520c7;
L_00651c87:; BB(0x00651c87);
    /* 00651c87: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651c8a: call 0x6520f0 */ r_esp -= 4; W32(r_esp, 0x651c8fu); f_006520f0();
    /* 00651c8f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651c92: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00651c95: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00651c98: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651c9b: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 00651ca1: mov ecx, dword ptr [eax + ecx + 8] */ r_ecx = R32((u32)(r_eax+r_ecx+0x8u));
    /* 00651ca5: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00651ca8: cmp dword ptr [ebp - 0x1c], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00651cac: ja 0x6520ac */ if ((!fC&&!fZ)) goto L_006520ac;
L_00651cb2:; BB(0x00651cb2);
    /* 00651cb2: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00651cb5: jmp dword ptr [edx*4 + 0x6520cc] */ { u32 t = R32((u32)(r_edx*4+0x6520ccu)); switch (t) { case 0x651cbcu: goto L_00651cbc; case 0x651cc1u: goto L_00651cc1; case 0x651d8au: goto L_00651d8a; case 0x651e16u: goto L_00651e16; case 0x651f59u: goto L_00651f59; case 0x651f7du: goto L_00651f7d; default: UNSUP(0x00651cb5, "jump table entry is not a known target"); } }
L_00651cbc:; BB(0x00651cbc);
    /* 00651cbc: jmp 0x6520c7 */ goto L_006520c7;
L_00651cc1:; BB(0x00651cc1);
    /* 00651cc1: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651cc4: cmp dword ptr [eax + 0x14], 0 */ {  u32 a = R32((u32)(r_eax+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00651cc8: jle 0x651d23 */ if ((fZ||fS!=fO)) goto L_00651d23;
L_00651cca:; BB(0x00651cca);
    /* 00651cca: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651ccd: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 00651cd0: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00651cd3: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651cd6: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 00651cd9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651cdc: cmp dword ptr [ecx + 0x14], 0 */ {  u32 a = R32((u32)(r_ecx+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00651ce0: jne 0x651d21 */ if (!fZ) goto L_00651d21;
L_00651ce2:; BB(0x00651ce2);
    /* 00651ce2: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651ce5: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00651ce8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00651ceb: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651cee: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 00651cf1: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651cf4: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00651cf7: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00651cfa: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651cfd: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 00651d03: cmp dword ptr [edx + eax + 8], 1 */ {  u32 a = R32((u32)(r_edx+r_eax+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00651d08: jne 0x651d21 */ if (!fZ) goto L_00651d21;
L_00651d0a:; BB(0x00651d0a);
    /* 00651d0a: push 0x9d */ { u32 v = 0x9du; r_esp -= 4; W32(r_esp, v); }
    /* 00651d0f: push 0x6dd238 */ { u32 v = 0x6dd238u; r_esp -= 4; W32(r_esp, v); }
    /* 00651d14: push 0x6dd254 */ { u32 v = 0x6dd254u; r_esp -= 4; W32(r_esp, v); }
    /* 00651d19: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x651d1eu); f_005e9f20();
    /* 00651d1e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00651d21:; BB(0x00651d21);
    /* 00651d21: jmp 0x651d67 */ goto L_00651d67;
L_00651d23:; BB(0x00651d23);
    /* 00651d23: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651d26: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00651d29: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00651d2c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651d2f: mov ecx, dword ptr [eax + 0x80] */ r_ecx = R32((u32)(r_eax+0x80u));
    /* 00651d35: cmp dword ptr [ecx + edx + 0xc], 1 */ {  u32 a = R32((u32)(r_ecx+r_edx+0xcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00651d3a: jge 0x651d45 */ if ((fS==fO)) goto L_00651d45;
L_00651d3c:; BB(0x00651d3c);
    /* 00651d3c: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
    /* 00651d43: jmp 0x651d5e */ goto L_00651d5e;
L_00651d45:; BB(0x00651d45);
    /* 00651d45: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651d48: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00651d4b: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00651d4e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651d51: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 00651d57: mov eax, dword ptr [edx + eax + 0xc] */ r_eax = R32((u32)(r_edx+r_eax+0xcu));
    /* 00651d5b: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_00651d5e:; BB(0x00651d5e);
    /* 00651d5e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651d61: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00651d64: mov dword ptr [ecx + 0x14], edx */ W32((u32)(r_ecx+0x14u), r_edx);
L_00651d67:; BB(0x00651d67);
    /* 00651d67: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00651d69: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00651d6b: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 00651d70: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00651d73: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 00651d79: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00651d7c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00651d7e: mov ecx, eax */ r_ecx = r_eax;
    /* 00651d80: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00651d83: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x651d85u); call_ind(t); }
    /* 00651d85: jmp 0x6520c7 */ goto L_006520c7;
L_00651d8a:; BB(0x00651d8a);
    /* 00651d8a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651d8d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00651d8f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651d92: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00651d94: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00651d96: mov eax, dword ptr [edx + 0x218] */ r_eax = R32((u32)(r_edx+0x218u));
    /* 00651d9c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x651d9eu); call_ind(t); }
    /* 00651d9e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00651da0: je 0x651df6 */ if (fZ) goto L_00651df6;
L_00651da2:; BB(0x00651da2);
    /* 00651da2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00651da4: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 00651da6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651da9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00651dab: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00651dae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00651daf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00651db1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651db4: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00651db7: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00651dba: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651dbd: mov ecx, dword ptr [eax + 0x80] */ r_ecx = R32((u32)(r_eax+0x80u));
    /* 00651dc3: mov edx, dword ptr [ecx + edx + 0xc] */ r_edx = R32((u32)(r_ecx+r_edx+0xcu));
    /* 00651dc7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00651dc8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651dcb: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00651dcd: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651dd0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00651dd2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00651dd4: mov ecx, eax */ r_ecx = r_eax;
    /* 00651dd6: mov eax, dword ptr [edx + 0x218] */ r_eax = R32((u32)(r_edx+0x218u));
    /* 00651ddc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x651ddeu); call_ind(t); }
    /* 00651dde: mov ecx, eax */ r_ecx = r_eax;
    /* 00651de0: call 0x646fa0 */ r_esp -= 4; W32(r_esp, 0x651de5u); f_00646fa0();
    /* 00651de5: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651de8: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00651deb: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00651dee: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651df1: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 00651df4: jmp 0x651e11 */ goto L_00651e11;
L_00651df6:; BB(0x00651df6);
    /* 00651df6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00651df8: jne 0x651e11 */ if (!fZ) goto L_00651e11;
L_00651dfa:; BB(0x00651dfa);
    /* 00651dfa: push 0xad */ { u32 v = 0xadu; r_esp -= 4; W32(r_esp, v); }
    /* 00651dff: push 0x6dd238 */ { u32 v = 0x6dd238u; r_esp -= 4; W32(r_esp, v); }
    /* 00651e04: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00651e09: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x651e0eu); f_005e9f20();
    /* 00651e0e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00651e11:; BB(0x00651e11);
    /* 00651e11: jmp 0x6520c7 */ goto L_006520c7;
L_00651e16:; BB(0x00651e16);
    /* 00651e16: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651e19: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00651e1c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00651e1f: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00651e22: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651e25: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 00651e2b: cmp dword ptr [ecx + eax], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00651e2f: jne 0x651e51 */ if (!fZ) goto L_00651e51;
L_00651e31:; BB(0x00651e31);
    /* 00651e31: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00651e33: jne 0x651e4c */ if (!fZ) goto L_00651e4c;
L_00651e35:; BB(0x00651e35);
    /* 00651e35: push 0xb1 */ { u32 v = 0xb1u; r_esp -= 4; W32(r_esp, v); }
    /* 00651e3a: push 0x6dd238 */ { u32 v = 0x6dd238u; r_esp -= 4; W32(r_esp, v); }
    /* 00651e3f: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00651e44: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x651e49u); f_005e9f20();
    /* 00651e49: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00651e4c:; BB(0x00651e4c);
    /* 00651e4c: jmp 0x6520c7 */ goto L_006520c7;
L_00651e51:; BB(0x00651e51);
    /* 00651e51: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651e54: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00651e57: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00651e5a: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00651e5d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651e60: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 00651e66: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651e69: mov edx, dword ptr [edx + 8] */ r_edx = R32((u32)(r_edx+0x8u));
    /* 00651e6c: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00651e6f: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651e72: mov esi, dword ptr [esi + 0x80] */ r_esi = R32((u32)(r_esi+0x80u));
    /* 00651e78: mov eax, dword ptr [ecx + eax] */ r_eax = R32((u32)(r_ecx+r_eax));
    /* 00651e7b: cmp eax, dword ptr [edx + esi] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+r_esi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00651e7e: je 0x651ea0 */ if (fZ) goto L_00651ea0;
L_00651e80:; BB(0x00651e80);
    /* 00651e80: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00651e82: jne 0x651e9b */ if (!fZ) goto L_00651e9b;
L_00651e84:; BB(0x00651e84);
    /* 00651e84: push 0xb3 */ { u32 v = 0xb3u; r_esp -= 4; W32(r_esp, v); }
    /* 00651e89: push 0x6dd238 */ { u32 v = 0x6dd238u; r_esp -= 4; W32(r_esp, v); }
    /* 00651e8e: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00651e93: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x651e98u); f_005e9f20();
    /* 00651e98: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00651e9b:; BB(0x00651e9b);
    /* 00651e9b: jmp 0x6520c7 */ goto L_006520c7;
L_00651ea0:; BB(0x00651ea0);
    /* 00651ea0: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651ea3: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00651ea6: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00651ea9: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00651eac: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651eaf: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 00651eb5: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651eb8: mov edx, dword ptr [edx + 8] */ r_edx = R32((u32)(r_edx+0x8u));
    /* 00651ebb: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00651ebe: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651ec1: mov esi, dword ptr [esi + 0x80] */ r_esi = R32((u32)(r_esi+0x80u));
    /* 00651ec7: mov eax, dword ptr [eax + ecx + 4] */ r_eax = R32((u32)(r_eax+r_ecx+0x4u));
    /* 00651ecb: cmp eax, dword ptr [esi + edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00651ecf: jne 0x651ef1 */ if (!fZ) goto L_00651ef1;
L_00651ed1:; BB(0x00651ed1);
    /* 00651ed1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00651ed3: jne 0x651eec */ if (!fZ) goto L_00651eec;
L_00651ed5:; BB(0x00651ed5);
    /* 00651ed5: push 0xb5 */ { u32 v = 0xb5u; r_esp -= 4; W32(r_esp, v); }
    /* 00651eda: push 0x6dd238 */ { u32 v = 0x6dd238u; r_esp -= 4; W32(r_esp, v); }
    /* 00651edf: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00651ee4: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x651ee9u); f_005e9f20();
    /* 00651ee9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00651eec:; BB(0x00651eec);
    /* 00651eec: jmp 0x6520c7 */ goto L_006520c7;
L_00651ef1:; BB(0x00651ef1);
    /* 00651ef1: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651ef4: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00651ef7: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00651efa: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00651efd: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651f00: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 00651f06: mov ecx, dword ptr [eax + ecx + 4] */ r_ecx = R32((u32)(r_eax+r_ecx+0x4u));
    /* 00651f0a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00651f0b: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651f0e: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00651f11: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00651f14: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651f17: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 00651f1d: mov eax, dword ptr [edx + eax] */ r_eax = R32((u32)(r_edx+r_eax));
    /* 00651f20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00651f21: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651f24: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00651f26: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651f29: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00651f2b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00651f2d: mov eax, dword ptr [edx + 0x228] */ r_eax = R32((u32)(r_edx+0x228u));
    /* 00651f33: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x651f35u); call_ind(t); }
    /* 00651f35: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651f38: movzx edx, byte ptr [ecx + 0x11] */ r_edx = (u32)R8((u32)(r_ecx+0x11u));
    /* 00651f3c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00651f3e: je 0x651f4a */ if (fZ) goto L_00651f4a;
L_00651f40:; BB(0x00651f40);
    /* 00651f40: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651f43: call 0x6526e0 */ r_esp -= 4; W32(r_esp, 0x651f48u); f_006526e0();
    /* 00651f48: jmp 0x651f54 */ goto L_00651f54;
L_00651f4a:; BB(0x00651f4a);
    /* 00651f4a: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00651f4c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651f4f: call 0x652900 */ r_esp -= 4; W32(r_esp, 0x651f54u); f_00652900();
L_00651f54:; BB(0x00651f54);
    /* 00651f54: jmp 0x6520c7 */ goto L_006520c7;
L_00651f59:; BB(0x00651f59);
    /* 00651f59: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651f5c: movzx ecx, byte ptr [eax + 0x11] */ r_ecx = (u32)R8((u32)(r_eax+0x11u));
    /* 00651f60: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00651f62: je 0x651f6e */ if (fZ) goto L_00651f6e;
L_00651f64:; BB(0x00651f64);
    /* 00651f64: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651f67: call 0x6526e0 */ r_esp -= 4; W32(r_esp, 0x651f6cu); f_006526e0();
    /* 00651f6c: jmp 0x651f78 */ goto L_00651f78;
L_00651f6e:; BB(0x00651f6e);
    /* 00651f6e: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00651f70: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651f73: call 0x652900 */ r_esp -= 4; W32(r_esp, 0x651f78u); f_00652900();
L_00651f78:; BB(0x00651f78);
    /* 00651f78: jmp 0x6520c7 */ goto L_006520c7;
L_00651f7d:; BB(0x00651f7d);
    /* 00651f7d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651f80: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00651f83: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00651f86: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00651f89: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651f8c: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 00651f92: cmp dword ptr [eax + edx], 0 */ {  u32 a = R32((u32)(r_eax+r_edx)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00651f96: jne 0x651fb8 */ if (!fZ) goto L_00651fb8;
L_00651f98:; BB(0x00651f98);
    /* 00651f98: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00651f9a: jne 0x651fb3 */ if (!fZ) goto L_00651fb3;
L_00651f9c:; BB(0x00651f9c);
    /* 00651f9c: push 0xc4 */ { u32 v = 0xc4u; r_esp -= 4; W32(r_esp, v); }
    /* 00651fa1: push 0x6dd238 */ { u32 v = 0x6dd238u; r_esp -= 4; W32(r_esp, v); }
    /* 00651fa6: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00651fab: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x651fb0u); f_005e9f20();
    /* 00651fb0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00651fb3:; BB(0x00651fb3);
    /* 00651fb3: jmp 0x6520c7 */ goto L_006520c7;
L_00651fb8:; BB(0x00651fb8);
    /* 00651fb8: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651fbb: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00651fbe: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00651fc1: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00651fc4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651fc7: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 00651fcd: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651fd0: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00651fd3: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00651fd6: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651fd9: mov esi, dword ptr [esi + 0x80] */ r_esi = R32((u32)(r_esi+0x80u));
    /* 00651fdf: mov edx, dword ptr [eax + edx] */ r_edx = R32((u32)(r_eax+r_edx));
    /* 00651fe2: cmp edx, dword ptr [ecx + esi] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+r_esi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00651fe5: je 0x652007 */ if (fZ) goto L_00652007;
L_00651fe7:; BB(0x00651fe7);
    /* 00651fe7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00651fe9: jne 0x652002 */ if (!fZ) goto L_00652002;
L_00651feb:; BB(0x00651feb);
    /* 00651feb: push 0xc6 */ { u32 v = 0xc6u; r_esp -= 4; W32(r_esp, v); }
    /* 00651ff0: push 0x6dd238 */ { u32 v = 0x6dd238u; r_esp -= 4; W32(r_esp, v); }
    /* 00651ff5: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00651ffa: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x651fffu); f_005e9f20();
    /* 00651fff: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00652002:; BB(0x00652002);
    /* 00652002: jmp 0x6520c7 */ goto L_006520c7;
L_00652007:; BB(0x00652007);
    /* 00652007: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065200a: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0065200d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00652010: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00652013: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00652016: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 0065201c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065201f: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00652022: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00652025: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00652028: mov esi, dword ptr [esi + 0x80] */ r_esi = R32((u32)(r_esi+0x80u));
    /* 0065202e: mov edx, dword ptr [edx + eax + 4] */ r_edx = R32((u32)(r_edx+r_eax+0x4u));
    /* 00652032: cmp edx, dword ptr [esi + ecx + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00652036: jne 0x652055 */ if (!fZ) goto L_00652055;
L_00652038:; BB(0x00652038);
    /* 00652038: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0065203a: jne 0x652053 */ if (!fZ) goto L_00652053;
L_0065203c:; BB(0x0065203c);
    /* 0065203c: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 00652041: push 0x6dd238 */ { u32 v = 0x6dd238u; r_esp -= 4; W32(r_esp, v); }
    /* 00652046: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0065204b: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x652050u); f_005e9f20();
    /* 00652050: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00652053:; BB(0x00652053);
    /* 00652053: jmp 0x6520c7 */ goto L_006520c7;
L_00652055:; BB(0x00652055);
    /* 00652055: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00652058: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0065205b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065205e: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00652061: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00652064: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 0065206a: mov eax, dword ptr [edx + eax + 4] */ r_eax = R32((u32)(r_edx+r_eax+0x4u));
    /* 0065206e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065206f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00652072: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00652075: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00652078: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065207b: mov ecx, dword ptr [eax + 0x80] */ r_ecx = R32((u32)(r_eax+0x80u));
    /* 00652081: mov edx, dword ptr [ecx + edx] */ r_edx = R32((u32)(r_ecx+r_edx));
    /* 00652084: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00652085: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00652088: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0065208a: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065208d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0065208f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00652091: mov ecx, eax */ r_ecx = r_eax;
    /* 00652093: mov eax, dword ptr [edx + 0x224] */ r_eax = R32((u32)(r_edx+0x224u));
    /* 00652099: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65209bu); call_ind(t); }
    /* 0065209b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065209e: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 006520a1: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006520a4: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006520a7: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 006520aa: jmp 0x6520c7 */ goto L_006520c7;
L_006520ac:; BB(0x006520ac);
    /* 006520ac: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 006520ae: jne 0x6520c7 */ if (!fZ) goto L_006520c7;
L_006520b0:; BB(0x006520b0);
    /* 006520b0: push 0xcd */ { u32 v = 0xcdu; r_esp -= 4; W32(r_esp, v); }
    /* 006520b5: push 0x6dd238 */ { u32 v = 0x6dd238u; r_esp -= 4; W32(r_esp, v); }
    /* 006520ba: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 006520bf: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x6520c4u); f_005e9f20();
    /* 006520c4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006520c7:; BB(0x006520c7);
    /* 006520c7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006520c8: mov esp, ebp */ r_esp = r_ebp;
    /* 006520ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006520cb: ret  */ FN_RET(0x00651af0); r_esp += 4; return;
}

void f_00652ad0(void) /* tutorial::func_00652ad0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00652ad0);
    /* 00652ad0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00652ad1: mov ebp, esp */ r_ebp = r_esp;
    /* 00652ad3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00652ad6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00652ad9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00652ae0: jmp 0x652aeb */ goto L_00652aeb;
L_00652ae2:; BB(0x00652ae2);
    /* 00652ae2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00652ae5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00652ae8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00652aeb:; BB(0x00652aeb);
    /* 00652aeb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00652aee: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00652af1: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00652af4: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 00652afa: cmp dword ptr [ecx + eax], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00652afe: je 0x652b2e */ if (fZ) goto L_00652b2e;
L_00652b00:; BB(0x00652b00);
    /* 00652b00: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00652b03: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00652b06: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00652b09: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 00652b0f: mov ecx, dword ptr [eax + ecx + 4] */ r_ecx = R32((u32)(r_eax+r_ecx+0x4u));
    /* 00652b13: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00652b16: jne 0x652b2c */ if (!fZ) goto L_00652b2c;
L_00652b18:; BB(0x00652b18);
    /* 00652b18: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00652b1b: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00652b1e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00652b21: mov ecx, dword ptr [eax + 0x80] */ r_ecx = R32((u32)(r_eax+0x80u));
    /* 00652b27: mov eax, dword ptr [edx + ecx] */ r_eax = R32((u32)(r_edx+r_ecx));
    /* 00652b2a: jmp 0x652b4b */ goto L_00652b4b;
L_00652b2c:; BB(0x00652b2c);
    /* 00652b2c: jmp 0x652ae2 */ goto L_00652ae2;
L_00652b2e:; BB(0x00652b2e);
    /* 00652b2e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00652b30: jne 0x652b49 */ if (!fZ) goto L_00652b49;
L_00652b32:; BB(0x00652b32);
    /* 00652b32: push 0x1e6 */ { u32 v = 0x1e6u; r_esp -= 4; W32(r_esp, v); }
    /* 00652b37: push 0x6dd238 */ { u32 v = 0x6dd238u; r_esp -= 4; W32(r_esp, v); }
    /* 00652b3c: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00652b41: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x652b46u); f_005e9f20();
    /* 00652b46: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00652b49:; BB(0x00652b49);
    /* 00652b49: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00652b4b:; BB(0x00652b4b);
    /* 00652b4b: mov esp, ebp */ r_esp = r_ebp;
    /* 00652b4d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00652b4e: ret 4 */ FN_RET(0x00652ad0); r_esp += 8; return;
}

void f_00652b60(void) /* tutorial::func_00652b60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00652b60);
    /* 00652b60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00652b61: mov ebp, esp */ r_ebp = r_esp;
    /* 00652b63: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00652b66: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00652b67: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00652b6a: mov dword ptr [ebp - 0x10], 0xffffffff */ W32((u32)(r_ebp+0xfffffff0u), 0xffffffffu);
    /* 00652b71: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00652b78: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00652b7f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00652b82: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 00652b88: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00652b8b: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 00652b91: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00652b98: jmp 0x652ba3 */ goto L_00652ba3;
L_00652b9a:; BB(0x00652b9a);
    /* 00652b9a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00652b9d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00652ba0: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_00652ba3:; BB(0x00652ba3);
    /* 00652ba3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00652ba6: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00652ba9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00652bac: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 00652bb2: cmp dword ptr [eax + edx], 0 */ {  u32 a = R32((u32)(r_eax+r_edx)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00652bb6: je 0x652c4e */ if (fZ) goto L_00652c4e;
L_00652bbc:; BB(0x00652bbc);
    /* 00652bbc: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00652bbf: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00652bc2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00652bc5: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 00652bcb: mov eax, dword ptr [eax + edx] */ r_eax = R32((u32)(r_eax+r_edx));
    /* 00652bce: cmp eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00652bd1: je 0x652bf8 */ if (fZ) goto L_00652bf8;
L_00652bd3:; BB(0x00652bd3);
    /* 00652bd3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00652bd6: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00652bd9: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00652bdc: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00652bdf: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00652be2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00652be5: mov ecx, dword ptr [eax + 0x80] */ r_ecx = R32((u32)(r_eax+0x80u));
    /* 00652beb: mov edx, dword ptr [edx + ecx] */ r_edx = R32((u32)(r_edx+r_ecx));
    /* 00652bee: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00652bf1: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_00652bf8:; BB(0x00652bf8);
    /* 00652bf8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00652bfb: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00652bfe: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00652c01: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 00652c07: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00652c0a: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00652c0d: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00652c10: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 00652c13: mov esi, dword ptr [esi + 0x80] */ r_esi = R32((u32)(r_esi+0x80u));
    /* 00652c19: mov edx, dword ptr [eax + edx] */ r_edx = R32((u32)(r_eax+r_edx));
    /* 00652c1c: cmp edx, dword ptr [ecx + esi] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+r_esi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00652c1f: je 0x652c26 */ if (fZ) goto L_00652c26;
L_00652c21:; BB(0x00652c21);
    /* 00652c21: jmp 0x652b9a */ goto L_00652b9a;
L_00652c26:; BB(0x00652c26);
    /* 00652c26: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00652c29: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00652c2c: jne 0x652c40 */ if (!fZ) goto L_00652c40;
L_00652c2e:; BB(0x00652c2e);
    /* 00652c2e: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00652c31: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00652c34: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 00652c36: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00652c39: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00652c3c: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00652c3e: jmp 0x652c69 */ goto L_00652c69;
L_00652c40:; BB(0x00652c40);
    /* 00652c40: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00652c43: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00652c46: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00652c49: jmp 0x652b9a */ goto L_00652b9a;
L_00652c4e:; BB(0x00652c4e);
    /* 00652c4e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00652c50: jne 0x652c69 */ if (!fZ) goto L_00652c69;
L_00652c52:; BB(0x00652c52);
    /* 00652c52: push 0x206 */ { u32 v = 0x206u; r_esp -= 4; W32(r_esp, v); }
    /* 00652c57: push 0x6dd238 */ { u32 v = 0x6dd238u; r_esp -= 4; W32(r_esp, v); }
    /* 00652c5c: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00652c61: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x652c66u); f_005e9f20();
    /* 00652c66: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00652c69:; BB(0x00652c69);
    /* 00652c69: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00652c6a: mov esp, ebp */ r_esp = r_ebp;
    /* 00652c6c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00652c6d: ret 0xc */ FN_RET(0x00652b60); r_esp += 16; return;
}

void f_00652c70(void) /* tutorial::func_00652c70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00652c70);
    /* 00652c70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00652c71: mov ebp, esp */ r_ebp = r_esp;
    /* 00652c73: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00652c76: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00652c79: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00652c80: mov dword ptr [ebp - 0xc], 0xffffffff */ W32((u32)(r_ebp+0xfffffff4u), 0xffffffffu);
    /* 00652c87: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00652c8e: jmp 0x652c99 */ goto L_00652c99;
L_00652c90:; BB(0x00652c90);
    /* 00652c90: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00652c93: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00652c96: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_00652c99:; BB(0x00652c99);
    /* 00652c99: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00652c9c: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00652c9f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00652ca2: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 00652ca8: cmp dword ptr [ecx + eax], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00652cac: je 0x652cf5 */ if (fZ) goto L_00652cf5;
L_00652cae:; BB(0x00652cae);
    /* 00652cae: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00652cb1: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00652cb4: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00652cb7: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 00652cbd: mov ecx, dword ptr [ecx + eax] */ r_ecx = R32((u32)(r_ecx+r_eax));
    /* 00652cc0: cmp ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00652cc3: je 0x652ce3 */ if (fZ) goto L_00652ce3;
L_00652cc5:; BB(0x00652cc5);
    /* 00652cc5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00652cc8: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00652ccb: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00652cce: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00652cd1: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00652cd4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00652cd7: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 00652cdd: mov eax, dword ptr [eax + edx] */ r_eax = R32((u32)(r_eax+r_edx));
    /* 00652ce0: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_00652ce3:; BB(0x00652ce3);
    /* 00652ce3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00652ce6: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00652ce9: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00652cec: jne 0x652cf3 */ if (!fZ) goto L_00652cf3;
L_00652cee:; BB(0x00652cee);
    /* 00652cee: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00652cf1: jmp 0x652d12 */ goto L_00652d12;
L_00652cf3:; BB(0x00652cf3);
    /* 00652cf3: jmp 0x652c90 */ goto L_00652c90;
L_00652cf5:; BB(0x00652cf5);
    /* 00652cf5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00652cf7: jne 0x652d10 */ if (!fZ) goto L_00652d10;
L_00652cf9:; BB(0x00652cf9);
    /* 00652cf9: push 0x218 */ { u32 v = 0x218u; r_esp -= 4; W32(r_esp, v); }
    /* 00652cfe: push 0x6dd238 */ { u32 v = 0x6dd238u; r_esp -= 4; W32(r_esp, v); }
    /* 00652d03: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00652d08: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x652d0du); f_005e9f20();
    /* 00652d0d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00652d10:; BB(0x00652d10);
    /* 00652d10: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00652d12:; BB(0x00652d12);
    /* 00652d12: mov esp, ebp */ r_esp = r_ebp;
    /* 00652d14: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00652d15: ret 4 */ FN_RET(0x00652c70); r_esp += 8; return;
}

