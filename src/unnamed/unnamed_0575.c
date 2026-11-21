#include "protos.h"

void f_005750b0(void) /* sub_5750B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005750b0);
    /* 005750b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005750b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005750b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005750b5: push 0x6a62c6 */ { u32 v = 0x6a62c6u; r_esp -= 4; W32(r_esp, v); }
    /* 005750ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005750c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005750c1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005750c4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005750c9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005750cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005750cc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005750cf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005750d5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005750d8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005750db: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005750de: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005750e1: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 005750e4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005750e6: mov ecx, eax */ r_ecx = r_eax;
    /* 005750e8: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005750eb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5750edu); call_ind(t); }
    /* 005750ed: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005750f0: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005750f3: mov dword ptr [edx + 0x178], 6 */ W32((u32)(r_edx+0x178u), 0x6u);
    /* 005750fd: push 0x1601e */ { u32 v = 0x1601eu; r_esp -= 4; W32(r_esp, v); }
    /* 00575102: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00575105: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 00575108: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x57510du); f_005eaf00();
    /* 0057510d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057510f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00575112: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 00575115: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00575118: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0057511b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057511d: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00575123: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x575125u); call_ind(t); }
    /* 00575125: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00575127: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x57512cu); f_00686d82();
    /* 0057512c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057512f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00575132: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00575139: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057513d: je 0x575150 */ if (fZ) goto L_00575150;
L_0057513f:; BB(0x0057513f);
    /* 0057513f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00575142: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00575143: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00575146: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x57514bu); f_006010a0();
    /* 0057514b: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0057514e: jmp 0x575157 */ goto L_00575157;
L_00575150:; BB(0x00575150);
    /* 00575150: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00575157:; BB(0x00575157);
    /* 00575157: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0057515a: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0057515d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00575164: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00575167: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00575168: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057516b: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 0057516e: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x575173u); f_005f5d50();
    /* 00575173: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00575176: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0057517d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0057517e: mov esp, ebp */ r_esp = r_ebp;
    /* 00575180: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00575181: ret 4 */ FN_RET(0x005750b0); r_esp += 8; return;
}

void f_00575190(void) /* sub_575190 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00575190);
    /* 00575190: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00575191: mov ebp, esp */ r_ebp = r_esp;
    /* 00575193: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00575195: push 0x6a62ec */ { u32 v = 0x6a62ecu; r_esp -= 4; W32(r_esp, v); }
    /* 0057519a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005751a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005751a1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005751a4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005751a9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005751ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005751ac: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005751af: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005751b5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005751b8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005751bb: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005751be: mov dword ptr [ecx + 0x178], 6 */ W32((u32)(r_ecx+0x178u), 0x6u);
    /* 005751c8: push 0x1601f */ { u32 v = 0x1601fu; r_esp -= 4; W32(r_esp, v); }
    /* 005751cd: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005751d0: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 005751d3: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x5751d8u); f_005eaf00();
    /* 005751d8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005751da: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005751dd: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005751e0: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005751e3: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005751e6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005751e8: mov ecx, eax */ r_ecx = r_eax;
    /* 005751ea: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005751f0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5751f2u); call_ind(t); }
    /* 005751f2: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005751f4: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5751f9u); f_00686d82();
    /* 005751f9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005751fc: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005751ff: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00575206: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057520a: je 0x57521d */ if (fZ) goto L_0057521d;
L_0057520c:; BB(0x0057520c);
    /* 0057520c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0057520f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00575210: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00575213: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x575218u); f_006010a0();
    /* 00575218: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0057521b: jmp 0x575224 */ goto L_00575224;
L_0057521d:; BB(0x0057521d);
    /* 0057521d: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00575224:; BB(0x00575224);
    /* 00575224: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00575227: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0057522a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00575231: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00575234: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00575235: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00575238: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 0057523b: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x575240u); f_005f5d50();
    /* 00575240: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00575243: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0057524a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0057524b: mov esp, ebp */ r_esp = r_ebp;
    /* 0057524d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057524e: ret 4 */ FN_RET(0x00575190); r_esp += 8; return;
}

void f_00575860(void) /* sub_575860 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00575860);
    /* 00575860: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00575861: mov ebp, esp */ r_ebp = r_esp;
    /* 00575863: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00575865: push 0x6a6369 */ { u32 v = 0x6a6369u; r_esp -= 4; W32(r_esp, v); }
    /* 0057586a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00575870: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00575871: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00575874: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00575879: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057587b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057587c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0057587f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00575885: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00575888: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0057588b: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0057588e: call 0x5f54c0 */ r_esp -= 4; W32(r_esp, 0x575893u); f_005f54c0();
    /* 00575893: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00575896: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00575898: jne 0x575a2e */ if (!fZ) goto L_00575a2e;
L_0057589e:; BB(0x0057589e);
    /* 0057589e: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005758a1: mov dword ptr [edx + 0x7c], 0xffffffff */ W32((u32)(r_edx+0x7cu), 0xffffffffu);
    /* 005758a8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005758ab: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 005758ae: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005758b1: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 005758b4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005758b6: mov ecx, eax */ r_ecx = r_eax;
    /* 005758b8: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005758bb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5758bdu); call_ind(t); }
    /* 005758bd: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005758c3: call 0x637630 */ r_esp -= 4; W32(r_esp, 0x5758c8u); f_00637630();
    /* 005758c8: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005758cb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005758cd: je 0x5759a9 */ if (fZ) goto L_005759a9;
L_005758d3:; BB(0x005758d3);
    /* 005758d3: push 0x16026 */ { u32 v = 0x16026u; r_esp -= 4; W32(r_esp, v); }
    /* 005758d8: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005758db: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 005758de: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x5758e3u); f_005eaf00();
    /* 005758e3: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005758e6: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 005758e9: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005758ec: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005758ef: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005758f1: mov ecx, eax */ r_ecx = r_eax;
    /* 005758f3: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005758f6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5758f8u); call_ind(t); }
    /* 005758f8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005758fa: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005758fd: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 00575900: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00575903: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 00575906: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00575908: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0057590e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x575910u); call_ind(t); }
    /* 00575910: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00575913: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 00575916: mov dword ptr [edx + 0x178], 2 */ W32((u32)(r_edx+0x178u), 0x2u);
    /* 00575920: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00575922: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x575927u); f_00686d82();
    /* 00575927: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057592a: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0057592d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00575934: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00575938: je 0x57594b */ if (fZ) goto L_0057594b;
L_0057593a:; BB(0x0057593a);
    /* 0057593a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057593c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057593e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00575941: call 0x577b80 */ r_esp -= 4; W32(r_esp, 0x575946u); f_00577b80();
    /* 00575946: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00575949: jmp 0x575952 */ goto L_00575952;
L_0057594b:; BB(0x0057594b);
    /* 0057594b: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_00575952:; BB(0x00575952);
    /* 00575952: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00575955: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00575958: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0057595f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00575962: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00575963: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00575966: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 00575969: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x57596eu); f_005f5d50();
    /* 0057596e: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00575970: mov eax, dword ptr [0x793458] */ r_eax = R32((u32)(0x793458u));
    /* 00575975: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00575978: mov edx, dword ptr [0x793458] */ r_edx = R32((u32)(0x793458u));
    /* 0057597e: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00575981: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00575983: mov ecx, eax */ r_ecx = r_eax;
    /* 00575985: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00575988: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57598au); call_ind(t); }
    /* 0057598a: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0057598c: mov ecx, dword ptr [0x793458] */ r_ecx = R32((u32)(0x793458u));
    /* 00575992: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00575995: mov eax, dword ptr [0x793458] */ r_eax = R32((u32)(0x793458u));
    /* 0057599a: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0057599d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057599f: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005759a2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5759a4u); call_ind(t); }
    /* 005759a4: jmp 0x575a29 */ goto L_00575a29;
L_005759a9:; BB(0x005759a9);
    /* 005759a9: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005759ac: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 005759af: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005759b2: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 005759b5: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005759b7: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005759ba: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5759bcu); call_ind(t); }
    /* 005759bc: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005759bf: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 005759c2: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005759c5: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 005759c8: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005759ca: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005759cd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5759cfu); call_ind(t); }
    /* 005759cf: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005759d2: cmp dword ptr [ecx + 0x70], 0 */ {  u32 a = R32((u32)(r_ecx+0x70u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005759d6: je 0x5759f5 */ if (fZ) goto L_005759f5;
L_005759d8:; BB(0x005759d8);
    /* 005759d8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005759da: mov edx, dword ptr [0x793458] */ r_edx = R32((u32)(0x793458u));
    /* 005759e0: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005759e3: mov ecx, dword ptr [0x793458] */ r_ecx = R32((u32)(0x793458u));
    /* 005759e9: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 005759ec: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005759ee: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005759f1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5759f3u); call_ind(t); }
    /* 005759f3: jmp 0x575a0f */ goto L_00575a0f;
L_005759f5:; BB(0x005759f5);
    /* 005759f5: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005759f7: mov ecx, dword ptr [0x793458] */ r_ecx = R32((u32)(0x793458u));
    /* 005759fd: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00575a00: mov eax, dword ptr [0x793458] */ r_eax = R32((u32)(0x793458u));
    /* 00575a05: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00575a08: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00575a0a: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00575a0d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x575a0fu); call_ind(t); }
L_00575a0f:; BB(0x00575a0f);
    /* 00575a0f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00575a11: mov ecx, dword ptr [0x793458] */ r_ecx = R32((u32)(0x793458u));
    /* 00575a17: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00575a1a: mov eax, dword ptr [0x793458] */ r_eax = R32((u32)(0x793458u));
    /* 00575a1f: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00575a22: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00575a24: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00575a27: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x575a29u); call_ind(t); }
L_00575a29:; BB(0x00575a29);
    /* 00575a29: jmp 0x575b0c */ goto L_00575b0c;
L_00575a2e:; BB(0x00575a2e);
    /* 00575a2e: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00575a31: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 00575a34: call 0x5eb220 */ r_esp -= 4; W32(r_esp, 0x575a39u); f_005eb220();
    /* 00575a39: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00575a3c: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00575a3f: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 00575a42: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x575a47u); f_005eb240();
    /* 00575a47: cmp dword ptr [ebp - 0x10], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00575a4a: jge 0x575a9f */ if ((fS==fO)) goto L_00575a9f;
L_00575a4c:; BB(0x00575a4c);
    /* 00575a4c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00575a4f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00575a52: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00575a53: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00575a56: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 00575a59: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00575a5c: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 00575a5f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00575a61: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00575a67: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x575a69u); call_ind(t); }
    /* 00575a69: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00575a6b: mov ecx, dword ptr [0x793458] */ r_ecx = R32((u32)(0x793458u));
    /* 00575a71: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00575a74: mov eax, dword ptr [0x793458] */ r_eax = R32((u32)(0x793458u));
    /* 00575a79: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00575a7c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00575a7e: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00575a81: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x575a83u); call_ind(t); }
    /* 00575a83: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00575a85: mov ecx, dword ptr [0x793458] */ r_ecx = R32((u32)(0x793458u));
    /* 00575a8b: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00575a8e: mov eax, dword ptr [0x793458] */ r_eax = R32((u32)(0x793458u));
    /* 00575a93: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00575a96: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00575a98: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00575a9b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x575a9du); call_ind(t); }
    /* 00575a9d: jmp 0x575b0c */ goto L_00575b0c;
L_00575a9f:; BB(0x00575a9f);
    /* 00575a9f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00575aa2: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 00575aa5: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00575aa8: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 00575aab: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00575aad: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00575ab0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x575ab2u); call_ind(t); }
    /* 00575ab2: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00575ab5: cmp dword ptr [ecx + 0x70], 0 */ {  u32 a = R32((u32)(r_ecx+0x70u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00575ab9: je 0x575ad8 */ if (fZ) goto L_00575ad8;
L_00575abb:; BB(0x00575abb);
    /* 00575abb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00575abd: mov edx, dword ptr [0x793458] */ r_edx = R32((u32)(0x793458u));
    /* 00575ac3: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00575ac6: mov ecx, dword ptr [0x793458] */ r_ecx = R32((u32)(0x793458u));
    /* 00575acc: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00575acf: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00575ad1: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00575ad4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x575ad6u); call_ind(t); }
    /* 00575ad6: jmp 0x575af2 */ goto L_00575af2;
L_00575ad8:; BB(0x00575ad8);
    /* 00575ad8: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00575ada: mov ecx, dword ptr [0x793458] */ r_ecx = R32((u32)(0x793458u));
    /* 00575ae0: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00575ae3: mov eax, dword ptr [0x793458] */ r_eax = R32((u32)(0x793458u));
    /* 00575ae8: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00575aeb: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00575aed: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00575af0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x575af2u); call_ind(t); }
L_00575af2:; BB(0x00575af2);
    /* 00575af2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00575af4: mov ecx, dword ptr [0x793458] */ r_ecx = R32((u32)(0x793458u));
    /* 00575afa: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00575afd: mov eax, dword ptr [0x793458] */ r_eax = R32((u32)(0x793458u));
    /* 00575b02: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00575b05: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00575b07: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00575b0a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x575b0cu); call_ind(t); }
L_00575b0c:; BB(0x00575b0c);
    /* 00575b0c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00575b0f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00575b16: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00575b17: mov esp, ebp */ r_esp = r_ebp;
    /* 00575b19: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00575b1a: ret  */ FN_RET(0x00575860); r_esp += 4; return;
}

void f_00575b20(void) /* sub_575B20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00575b20);
    /* 00575b20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00575b21: mov ebp, esp */ r_ebp = r_esp;
    /* 00575b23: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00575b26: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00575b29: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00575b2f: jmp 0x575b3d */ goto L_00575b3d;
L_00575b31:; BB(0x00575b31);
    /* 00575b31: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 00575b35: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00575b39: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_00575b3d:; BB(0x00575b3d);
    /* 00575b3d: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00575b41: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00575b44: jge 0x575b6a */ if ((fS==fO)) goto L_00575b6a;
L_00575b46:; BB(0x00575b46);
    /* 00575b46: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00575b4a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00575b4d: mov ecx, dword ptr [eax + edx*4 + 0x44] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x44u));
    /* 00575b51: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00575b55: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00575b58: mov edx, dword ptr [eax + edx*4 + 0x44] */ r_edx = R32((u32)(r_eax+r_edx*4+0x44u));
    /* 00575b5c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00575b5e: mov ecx, edx */ r_ecx = r_edx;
    /* 00575b60: mov edx, dword ptr [eax + 0xcc] */ r_edx = R32((u32)(r_eax+0xccu));
    /* 00575b66: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x575b68u); call_ind(t); }
    /* 00575b68: jmp 0x575b31 */ goto L_00575b31;
L_00575b6a:; BB(0x00575b6a);
    /* 00575b6a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00575b6d: cmp dword ptr [eax + 0x74], 0 */ {  u32 a = R32((u32)(r_eax+0x74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00575b71: jne 0x575b89 */ if (!fZ) goto L_00575b89;
L_00575b73:; BB(0x00575b73);
    /* 00575b73: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00575b76: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 00575b79: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00575b7c: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 00575b7f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00575b81: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 00575b87: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x575b89u); call_ind(t); }
L_00575b89:; BB(0x00575b89);
    /* 00575b89: lea ecx, [ebp - 0xc] */ r_ecx = (u32)(r_ebp+0xfffffff4u);
    /* 00575b8c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00575b8d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00575b8f: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x575b94u); f_005dcb00();
    /* 00575b94: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00575b97: mov ecx, eax */ r_ecx = r_eax;
    /* 00575b99: call 0x5d5a90 */ r_esp -= 4; W32(r_esp, 0x575b9eu); f_005d5a90();
    /* 00575b9e: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00575ba1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00575ba2: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00575ba4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00575ba5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00575ba8: call 0x574ed0 */ r_esp -= 4; W32(r_esp, 0x575badu); f_00574ed0();
    /* 00575bad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00575baf: jne 0x575c07 */ if (!fZ) goto L_00575c07;
L_00575bb1:; BB(0x00575bb1);
    /* 00575bb1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00575bb4: cmp dword ptr [ecx + 0x70], 0 */ {  u32 a = R32((u32)(r_ecx+0x70u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00575bb8: jne 0x575c07 */ if (!fZ) goto L_00575c07;
L_00575bba:; BB(0x00575bba);
    /* 00575bba: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00575bbd: cmp dword ptr [edx + 0x74], 0 */ {  u32 a = R32((u32)(r_edx+0x74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00575bc1: jne 0x575c07 */ if (!fZ) goto L_00575c07;
L_00575bc3:; BB(0x00575bc3);
    /* 00575bc3: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00575bc6: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 00575bc9: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00575bcc: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00575bcf: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00575bd1: mov ecx, eax */ r_ecx = r_eax;
    /* 00575bd3: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 00575bd9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x575bdbu); call_ind(t); }
    /* 00575bdb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00575bde: mov edx, dword ptr [ecx + 0x48] */ r_edx = R32((u32)(r_ecx+0x48u));
    /* 00575be1: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00575be4: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 00575be7: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00575be9: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 00575bef: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x575bf1u); call_ind(t); }
    /* 00575bf1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00575bf4: mov edx, dword ptr [ecx + 0x4c] */ r_edx = R32((u32)(r_ecx+0x4cu));
    /* 00575bf7: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00575bfa: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 00575bfd: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00575bff: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 00575c05: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x575c07u); call_ind(t); }
L_00575c07:; BB(0x00575c07);
    /* 00575c07: mov esp, ebp */ r_esp = r_ebp;
    /* 00575c09: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00575c0a: ret  */ FN_RET(0x00575b20); r_esp += 4; return;
}

void f_00575c10(void) /* sub_575C10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00575c10);
    /* 00575c10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00575c11: mov ebp, esp */ r_ebp = r_esp;
    /* 00575c13: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00575c16: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00575c19: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00575c1f: jmp 0x575c2d */ goto L_00575c2d;
L_00575c21:; BB(0x00575c21);
    /* 00575c21: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 00575c25: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00575c29: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_00575c2d:; BB(0x00575c2d);
    /* 00575c2d: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00575c31: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00575c34: jge 0x575c5a */ if ((fS==fO)) goto L_00575c5a;
L_00575c36:; BB(0x00575c36);
    /* 00575c36: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00575c3a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00575c3d: mov ecx, dword ptr [eax + edx*4 + 0x44] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x44u));
    /* 00575c41: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00575c45: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00575c48: mov edx, dword ptr [eax + edx*4 + 0x44] */ r_edx = R32((u32)(r_eax+r_edx*4+0x44u));
    /* 00575c4c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00575c4e: mov ecx, edx */ r_ecx = r_edx;
    /* 00575c50: mov edx, dword ptr [eax + 0xd0] */ r_edx = R32((u32)(r_eax+0xd0u));
    /* 00575c56: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x575c58u); call_ind(t); }
    /* 00575c58: jmp 0x575c21 */ goto L_00575c21;
L_00575c5a:; BB(0x00575c5a);
    /* 00575c5a: mov esp, ebp */ r_esp = r_ebp;
    /* 00575c5c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00575c5d: ret  */ FN_RET(0x00575c10); r_esp += 4; return;
}

void f_00575c60(void) /* sub_575C60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00575c60);
    /* 00575c60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00575c61: mov ebp, esp */ r_ebp = r_esp;
    /* 00575c63: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00575c65: push 0x6a638f */ { u32 v = 0x6a638fu; r_esp -= 4; W32(r_esp, v); }
    /* 00575c6a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00575c70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00575c71: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00575c74: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00575c79: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00575c7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00575c7c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00575c7f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00575c85: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00575c88: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00575c8e: call 0x637630 */ r_esp -= 4; W32(r_esp, 0x575c93u); f_00637630();
    /* 00575c93: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00575c96: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00575c98: je 0x575cfd */ if (fZ) goto L_00575cfd;
L_00575c9a:; BB(0x00575c9a);
    /* 00575c9a: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00575c9e: jle 0x575cfd */ if ((fZ||fS!=fO)) goto L_00575cfd;
L_00575ca0:; BB(0x00575ca0);
    /* 00575ca0: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00575ca3: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 00575ca6: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00575ca9: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 00575cac: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00575cae: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00575cb1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x575cb3u); call_ind(t); }
    /* 00575cb3: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00575cb5: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x575cbau); f_00686d82();
    /* 00575cba: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00575cbd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00575cc0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00575cc7: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00575ccb: je 0x575cda */ if (fZ) goto L_00575cda;
L_00575ccd:; BB(0x00575ccd);
    /* 00575ccd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00575cd0: call 0x578180 */ r_esp -= 4; W32(r_esp, 0x575cd5u); f_00578180();
    /* 00575cd5: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00575cd8: jmp 0x575ce1 */ goto L_00575ce1;
L_00575cda:; BB(0x00575cda);
    /* 00575cda: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00575ce1:; BB(0x00575ce1);
    /* 00575ce1: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00575ce4: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00575ce7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00575cee: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00575cf1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00575cf2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00575cf5: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 00575cf8: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x575cfdu); f_005f5d50();
L_00575cfd:; BB(0x00575cfd);
    /* 00575cfd: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00575d00: mov edx, dword ptr [ecx + 0x70] */ r_edx = R32((u32)(r_ecx+0x70u));
    /* 00575d03: add edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00575d06: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00575d09: mov dword ptr [eax + 0x70], edx */ W32((u32)(r_eax+0x70u), r_edx);
    /* 00575d0c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00575d0f: cmp dword ptr [ecx + 0x70], 0x3b9ac9ff */ {  u32 a = R32((u32)(r_ecx+0x70u)); u32 b = 0x3b9ac9ffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00575d16: jbe 0x575d46 */ if ((fC||fZ)) goto L_00575d46;
L_00575d18:; BB(0x00575d18);
    /* 00575d18: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00575d1a: push 0x6c54e0 */ { u32 v = 0x6c54e0u; r_esp -= 4; W32(r_esp, v); }
    /* 00575d1f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x575d24u); f_00630f40();
    /* 00575d24: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00575d27: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00575d28: push 0x6cadec */ { u32 v = 0x6cadecu; r_esp -= 4; W32(r_esp, v); }
    /* 00575d2d: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x575d32u); f_00630f40();
    /* 00575d32: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00575d35: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00575d36: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x575d3bu); f_0062ff10();
    /* 00575d3b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00575d3e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00575d41: call 0x576600 */ r_esp -= 4; W32(r_esp, 0x575d46u); f_00576600();
L_00575d46:; BB(0x00575d46);
    /* 00575d46: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00575d49: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00575d4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00575d4d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00575d50: mov ecx, dword ptr [ecx + 0x5c] */ r_ecx = R32((u32)(r_ecx+0x5cu));
    /* 00575d53: call 0x5777d0 */ r_esp -= 4; W32(r_esp, 0x575d58u); f_005777d0();
    /* 00575d58: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00575d5b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00575d62: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00575d63: mov esp, ebp */ r_esp = r_ebp;
    /* 00575d65: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00575d66: ret 4 */ FN_RET(0x00575c60); r_esp += 8; return;
}

void f_00575f00(void) /* sub_575F00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00575f00);
    /* 00575f00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00575f01: mov ebp, esp */ r_ebp = r_esp;
    /* 00575f03: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00575f05: push 0x6a63b5 */ { u32 v = 0x6a63b5u; r_esp -= 4; W32(r_esp, v); }
    /* 00575f0a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00575f10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00575f11: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00575f14: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00575f19: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00575f1b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00575f1c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00575f1f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00575f25: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00575f28: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00575f2c: je 0x57601b */ if (fZ) goto L_0057601b;
L_00575f32:; BB(0x00575f32);
    /* 00575f32: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00575f35: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 00575f38: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00575f3b: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 00575f3e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00575f40: mov ecx, eax */ r_ecx = r_eax;
    /* 00575f42: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00575f45: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x575f47u); call_ind(t); }
    /* 00575f47: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00575f4a: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 00575f4d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00575f50: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 00575f53: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00575f55: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00575f58: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x575f5au); call_ind(t); }
    /* 00575f5a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00575f5c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00575f5f: mov ecx, dword ptr [ecx + 0x28] */ r_ecx = R32((u32)(r_ecx+0x28u));
    /* 00575f62: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x575f67u); f_005f5d50();
    /* 00575f67: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00575f6a: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 00575f6d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00575f70: mov ecx, dword ptr [ecx + 0x28] */ r_ecx = R32((u32)(r_ecx+0x28u));
    /* 00575f73: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00575f75: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00575f78: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x575f7au); call_ind(t); }
    /* 00575f7a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00575f7d: mov edx, dword ptr [ecx + 0x74] */ r_edx = R32((u32)(r_ecx+0x74u));
    /* 00575f80: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00575f83: cmp dword ptr [ebp + 8], edx */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00575f86: jg 0x575fa7 */ if ((!fZ&&fS==fO)) goto L_00575fa7;
L_00575f88:; BB(0x00575f88);
    /* 00575f88: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00575f8b: add eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00575f8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00575f8f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00575f92: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 00575f95: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00575f98: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 00575f9b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00575f9d: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00575fa3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x575fa5u); call_ind(t); }
    /* 00575fa5: jmp 0x57601b */ goto L_0057601b;
L_00575fa7:; BB(0x00575fa7);
    /* 00575fa7: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00575faa: cmp dword ptr [ecx + 0x74], 0 */ {  u32 a = R32((u32)(r_ecx+0x74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00575fae: jne 0x575fc8 */ if (!fZ) goto L_00575fc8;
L_00575fb0:; BB(0x00575fb0);
    /* 00575fb0: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 00575fb2: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00575fb5: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 00575fb8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00575fbb: mov ecx, dword ptr [ecx + 0x28] */ r_ecx = R32((u32)(r_ecx+0x28u));
    /* 00575fbe: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00575fc0: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00575fc6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x575fc8u); call_ind(t); }
L_00575fc8:; BB(0x00575fc8);
    /* 00575fc8: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00575fca: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x575fcfu); f_00686d82();
    /* 00575fcf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00575fd2: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00575fd5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00575fdc: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00575fe0: je 0x575ff8 */ if (fZ) goto L_00575ff8;
L_00575fe2:; BB(0x00575fe2);
    /* 00575fe2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00575fe4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00575fe7: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00575fea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00575feb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00575fee: call 0x600f30 */ r_esp -= 4; W32(r_esp, 0x575ff3u); f_00600f30();
    /* 00575ff3: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00575ff6: jmp 0x575fff */ goto L_00575fff;
L_00575ff8:; BB(0x00575ff8);
    /* 00575ff8: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00575fff:; BB(0x00575fff);
    /* 00575fff: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00576002: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00576005: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0057600c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057600f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00576010: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00576013: mov ecx, dword ptr [ecx + 0x28] */ r_ecx = R32((u32)(r_ecx+0x28u));
    /* 00576016: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x57601bu); f_005f5d50();
L_0057601b:; BB(0x0057601b);
    /* 0057601b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057601e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00576025: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00576026: mov esp, ebp */ r_esp = r_ebp;
    /* 00576028: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00576029: ret 4 */ FN_RET(0x00575f00); r_esp += 8; return;
}

