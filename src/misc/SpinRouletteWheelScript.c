#include "protos.h"

void f_00522910(void) /* SpinRouletteWheelScript::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00522910);
    /* 00522910: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00522911: mov ebp, esp */ r_ebp = r_esp;
    /* 00522913: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00522915: push 0x6a3f84 */ { u32 v = 0x6a3f84u; r_esp -= 4; W32(r_esp, v); }
    /* 0052291a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00522920: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00522921: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00522924: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00522929: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052292b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052292c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0052292f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00522935: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00522938: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0052293a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x52293fu); f_00686d82();
    /* 0052293f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00522942: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00522945: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0052294c: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00522950: je 0x52296d */ if (fZ) goto L_0052296d;
L_00522952:; BB(0x00522952);
    /* 00522952: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00522954: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00522957: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x52295cu); f_005fc0d0();
    /* 0052295c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0052295f: mov dword ptr [eax], 0x6c2fc4 */ W32((u32)(r_eax), 0x6c2fc4u);
    /* 00522965: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00522968: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0052296b: jmp 0x522974 */ goto L_00522974;
L_0052296d:; BB(0x0052296d);
    /* 0052296d: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00522974:; BB(0x00522974);
    /* 00522974: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00522977: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0052297a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00522981: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00522984: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00522985: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0052298b: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0052298e: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x522993u); f_005fc420();
    /* 00522993: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00522996: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0052299d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0052299e: mov esp, ebp */ r_esp = r_ebp;
    /* 005229a0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005229a1: ret  */ FN_RET(0x00522910); r_esp += 4; return;
}

void f_00523eb0(void) /* SpinRouletteWheelScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00523eb0);
    /* 00523eb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00523eb1: mov ebp, esp */ r_ebp = r_esp;
    /* 00523eb3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00523eb6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00523eb9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00523ebc: call 0x5fc360 */ r_esp -= 4; W32(r_esp, 0x523ec1u); f_005fc360();
    /* 00523ec1: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00523ec4: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00523ec8: je 0x523ee3 */ if (fZ) goto L_00523ee3;
L_00523eca:; BB(0x00523eca);
    /* 00523eca: cmp dword ptr [ebp - 0x14], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00523ece: je 0x5240e0 */ if (fZ) goto L_005240e0;
L_00523ed4:; BB(0x00523ed4);
    /* 00523ed4: cmp dword ptr [ebp - 0x14], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00523ed8: je 0x52416c */ if (fZ) goto L_0052416c;
L_00523ede:; BB(0x00523ede);
    /* 00523ede: jmp 0x524212 */ goto L_00524212;
L_00523ee3:; BB(0x00523ee3);
    /* 00523ee3: mov dword ptr [0x79336c], 0 */ W32((u32)(0x79336cu), 0x0u);
    /* 00523eed: push 0x71 */ { u32 v = 0x71u; r_esp -= 4; W32(r_esp, v); }
    /* 00523eef: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00523ef1: call 0x62fc30 */ r_esp -= 4; W32(r_esp, 0x523ef6u); f_0062fc30();
    /* 00523ef6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00523ef9: mov ecx, dword ptr [0x79337c] */ r_ecx = R32((u32)(0x79337cu));
    /* 00523eff: mov dword ptr [ecx + 0x314], eax */ W32((u32)(r_ecx+0x314u), r_eax);
L_00523f05:; BB(0x00523f05);
    /* 00523f05: mov edx, dword ptr [0x79337c] */ r_edx = R32((u32)(0x79337cu));
    /* 00523f0b: mov eax, dword ptr [edx + 0x314] */ r_eax = R32((u32)(r_edx+0x314u));
    /* 00523f11: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00523f12: mov ecx, 3 */ r_ecx = 0x3u;
    /* 00523f17: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00523f17, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00523f17, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00523f19: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00523f1c: je 0x523f38 */ if (fZ) goto L_00523f38;
L_00523f1e:; BB(0x00523f1e);
    /* 00523f1e: push 0x71 */ { u32 v = 0x71u; r_esp -= 4; W32(r_esp, v); }
    /* 00523f20: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00523f22: call 0x62fc30 */ r_esp -= 4; W32(r_esp, 0x523f27u); f_0062fc30();
    /* 00523f27: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00523f2a: mov edx, dword ptr [0x79337c] */ r_edx = R32((u32)(0x79337cu));
    /* 00523f30: mov dword ptr [edx + 0x314], eax */ W32((u32)(r_edx+0x314u), r_eax);
    /* 00523f36: jmp 0x523f05 */ goto L_00523f05;
L_00523f38:; BB(0x00523f38);
    /* 00523f38: mov eax, dword ptr [0x79337c] */ r_eax = R32((u32)(0x79337cu));
    /* 00523f3d: mov eax, dword ptr [eax + 0x314] */ r_eax = R32((u32)(r_eax+0x314u));
    /* 00523f43: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00523f44: mov ecx, 0x72 */ r_ecx = 0x72u;
    /* 00523f49: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00523f49, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00523f49, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00523f4b: mov eax, dword ptr [0x79337c] */ r_eax = R32((u32)(0x79337cu));
    /* 00523f50: mov dword ptr [eax + 0x314], edx */ W32((u32)(r_eax+0x314u), r_edx);
    /* 00523f56: mov ecx, dword ptr [0x79337c] */ r_ecx = R32((u32)(0x79337cu));
    /* 00523f5c: mov edx, dword ptr [ecx + 0x314] */ r_edx = R32((u32)(r_ecx+0x314u));
    /* 00523f62: mov dword ptr [0x793368], edx */ W32((u32)(0x793368u), r_edx);
    /* 00523f68: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00523f6e: call 0x637630 */ r_esp -= 4; W32(r_esp, 0x523f73u); f_00637630();
    /* 00523f73: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00523f76: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00523f78: je 0x523f85 */ if (fZ) goto L_00523f85;
L_00523f7a:; BB(0x00523f7a);
    /* 00523f7a: movzx ecx, byte ptr [0x795f94] */ r_ecx = (u32)R8((u32)(0x795f94u));
    /* 00523f81: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00523f83: je 0x523fcf */ if (fZ) goto L_00523fcf;
L_00523f85:; BB(0x00523f85);
    /* 00523f85: cmp dword ptr [0x79336c], 0x71 */ {  u32 a = R32((u32)(0x79336cu)); u32 b = 0x71u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00523f8c: jge 0x523fbf */ if ((fS==fO)) goto L_00523fbf;
L_00523f8e:; BB(0x00523f8e);
    /* 00523f8e: mov edx, dword ptr [0x79336c] */ r_edx = R32((u32)(0x79336cu));
    /* 00523f94: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00523f97: mov dword ptr [0x79336c], edx */ W32((u32)(0x79336cu), r_edx);
    /* 00523f9d: mov eax, dword ptr [0x793368] */ r_eax = R32((u32)(0x793368u));
    /* 00523fa2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00523fa5: mov dword ptr [0x793368], eax */ W32((u32)(0x793368u), r_eax);
    /* 00523faa: cmp dword ptr [0x793368], 0x71 */ {  u32 a = R32((u32)(0x793368u)); u32 b = 0x71u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00523fb1: jle 0x523fbd */ if ((fZ||fS!=fO)) goto L_00523fbd;
L_00523fb3:; BB(0x00523fb3);
    /* 00523fb3: mov dword ptr [0x793368], 0 */ W32((u32)(0x793368u), 0x0u);
L_00523fbd:; BB(0x00523fbd);
    /* 00523fbd: jmp 0x523f85 */ goto L_00523f85;
L_00523fbf:; BB(0x00523fbf);
    /* 00523fbf: mov ecx, dword ptr [0x79337c] */ r_ecx = R32((u32)(0x79337cu));
    /* 00523fc5: call 0x5229b0 */ r_esp -= 4; W32(r_esp, 0x523fcau); f_005229b0();
    /* 00523fca: jmp 0x524212 */ goto L_00524212;
L_00523fcf:; BB(0x00523fcf);
    /* 00523fcf: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00523fd1: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x523fd6u); f_0062fbf0();
    /* 00523fd6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00523fd9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00523fdc: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00523fe0: jne 0x523fe9 */ if (!fZ) goto L_00523fe9;
L_00523fe2:; BB(0x00523fe2);
    /* 00523fe2: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
L_00523fe9:; BB(0x00523fe9);
    /* 00523fe9: mov ecx, dword ptr [0x79337c] */ r_ecx = R32((u32)(0x79337cu));
    /* 00523fef: call 0x5228d0 */ r_esp -= 4; W32(r_esp, 0x523ff4u); f_005228d0();
    /* 00523ff4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00523ffb: jmp 0x524006 */ goto L_00524006;
L_00523ffd:; BB(0x00523ffd);
    /* 00523ffd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00524000: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00524003: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00524006:; BB(0x00524006);
    /* 00524006: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052400a: jge 0x524050 */ if ((fS==fO)) goto L_00524050;
L_0052400c:; BB(0x0052400c);
    /* 0052400c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052400f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00524010: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x524015u); f_005dcb00();
    /* 00524015: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00524018: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0052401b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052401e: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x524023u); f_0063aac0();
    /* 00524023: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00524025: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00524028: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0052402a: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052402e: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00524031: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 00524034: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00524036: jne 0x52404e */ if (!fZ) goto L_0052404e;
L_00524038:; BB(0x00524038);
    /* 00524038: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052403a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052403d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052403e: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x524043u); f_005dcb00();
    /* 00524043: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00524046: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00524049: call 0x646c20 */ r_esp -= 4; W32(r_esp, 0x52404eu); f_00646c20();
L_0052404e:; BB(0x0052404e);
    /* 0052404e: jmp 0x523ffd */ goto L_00523ffd;
L_00524050:; BB(0x00524050);
    /* 00524050: push 0x1adba */ { u32 v = 0x1adbau; r_esp -= 4; W32(r_esp, v); }
    /* 00524055: mov ecx, dword ptr [0x79337c] */ r_ecx = R32((u32)(0x79337cu));
    /* 0052405b: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0052405e: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x524063u); f_005eaf00();
    /* 00524063: mov edx, dword ptr [0x79337c] */ r_edx = R32((u32)(0x79337cu));
    /* 00524069: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0052406c: mov ecx, dword ptr [0x79337c] */ r_ecx = R32((u32)(0x79337cu));
    /* 00524072: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00524075: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00524077: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0052407a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52407cu); call_ind(t); }
    /* 0052407c: push 0x1adb1 */ { u32 v = 0x1adb1u; r_esp -= 4; W32(r_esp, v); }
    /* 00524081: mov ecx, dword ptr [0x79337c] */ r_ecx = R32((u32)(0x79337cu));
    /* 00524087: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 0052408a: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x52408fu); f_005eaf00();
    /* 0052408f: push 0x1adbf */ { u32 v = 0x1adbfu; r_esp -= 4; W32(r_esp, v); }
    /* 00524094: mov edx, dword ptr [0x79337c] */ r_edx = R32((u32)(0x79337cu));
    /* 0052409a: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 0052409d: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x5240a2u); f_005eaf00();
    /* 005240a2: mov eax, dword ptr [0x79337c] */ r_eax = R32((u32)(0x79337cu));
    /* 005240a7: add eax, 0x318 */ {  u32 a = r_eax; u32 b = 0x318u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005240ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005240ad: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005240ae: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 005240b4: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005240b7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005240b8: fld1  */ FPUSH(1.0);
    /* 005240ba: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005240bd: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005240bf: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005240c1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005240c3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005240c5: push 0x18a8f */ { u32 v = 0x18a8fu; r_esp -= 4; W32(r_esp, v); }
    /* 005240ca: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005240d0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005240d2: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005240d8: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 005240de: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5240e0u); call_ind(t); }
L_005240e0:; BB(0x005240e0);
    /* 005240e0: mov ecx, dword ptr [0x79336c] */ r_ecx = R32((u32)(0x79336cu));
    /* 005240e6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005240e7: mov edx, dword ptr [0x79337c] */ r_edx = R32((u32)(0x79337cu));
    /* 005240ed: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 005240f0: mov ecx, dword ptr [0x79337c] */ r_ecx = R32((u32)(0x79337cu));
    /* 005240f6: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005240f9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005240fb: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00524101: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x524103u); call_ind(t); }
    /* 00524103: mov ecx, dword ptr [0x79337c] */ r_ecx = R32((u32)(0x79337cu));
    /* 00524109: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 0052410c: mov eax, dword ptr [0x79337c] */ r_eax = R32((u32)(0x79337cu));
    /* 00524111: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00524114: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00524116: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00524119: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52411bu); call_ind(t); }
    /* 0052411b: mov ecx, dword ptr [0x793368] */ r_ecx = R32((u32)(0x793368u));
    /* 00524121: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00524122: mov edx, dword ptr [0x79337c] */ r_edx = R32((u32)(0x79337cu));
    /* 00524128: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0052412b: mov ecx, dword ptr [0x79337c] */ r_ecx = R32((u32)(0x79337cu));
    /* 00524131: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 00524134: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00524136: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0052413c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52413eu); call_ind(t); }
    /* 0052413e: mov ecx, dword ptr [0x79337c] */ r_ecx = R32((u32)(0x79337cu));
    /* 00524144: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 00524147: mov eax, dword ptr [0x79337c] */ r_eax = R32((u32)(0x79337cu));
    /* 0052414c: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0052414f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00524151: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00524154: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x524156u); call_ind(t); }
    /* 00524156: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00524158: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0052415a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052415d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0052415f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00524162: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00524165: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x524167u); call_ind(t); }
    /* 00524167: jmp 0x524212 */ goto L_00524212;
L_0052416c:; BB(0x0052416c);
    /* 0052416c: mov ecx, dword ptr [0x79336c] */ r_ecx = R32((u32)(0x79336cu));
    /* 00524172: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00524175: mov dword ptr [0x79336c], ecx */ W32((u32)(0x79336cu), r_ecx);
    /* 0052417b: cmp dword ptr [0x79336c], 0x2d */ {  u32 a = R32((u32)(0x79336cu)); u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00524182: jne 0x5241cb */ if (!fZ) goto L_005241cb;
L_00524184:; BB(0x00524184);
    /* 00524184: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00524186: push 0x18a8f */ { u32 v = 0x18a8fu; r_esp -= 4; W32(r_esp, v); }
    /* 0052418b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00524191: call 0x5f44e0 */ r_esp -= 4; W32(r_esp, 0x524196u); f_005f44e0();
    /* 00524196: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00524198: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00524199: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0052419f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005241a2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005241a3: fld1  */ FPUSH(1.0);
    /* 005241a5: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005241a8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005241aa: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005241ac: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005241ae: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005241b0: push 0x18a8e */ { u32 v = 0x18a8eu; r_esp -= 4; W32(r_esp, v); }
    /* 005241b5: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005241bb: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005241bd: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005241c3: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 005241c9: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5241cbu); call_ind(t); }
L_005241cb:; BB(0x005241cb);
    /* 005241cb: mov eax, dword ptr [0x793368] */ r_eax = R32((u32)(0x793368u));
    /* 005241d0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005241d3: mov dword ptr [0x793368], eax */ W32((u32)(0x793368u), r_eax);
    /* 005241d8: cmp dword ptr [0x793368], 0x71 */ {  u32 a = R32((u32)(0x793368u)); u32 b = 0x71u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005241df: jle 0x5241eb */ if ((fZ||fS!=fO)) goto L_005241eb;
L_005241e1:; BB(0x005241e1);
    /* 005241e1: mov dword ptr [0x793368], 0 */ W32((u32)(0x793368u), 0x0u);
L_005241eb:; BB(0x005241eb);
    /* 005241eb: cmp dword ptr [0x79336c], 0x71 */ {  u32 a = R32((u32)(0x79336cu)); u32 b = 0x71u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005241f2: jl 0x524201 */ if ((fS!=fO)) goto L_00524201;
L_005241f4:; BB(0x005241f4);
    /* 005241f4: mov ecx, dword ptr [0x79337c] */ r_ecx = R32((u32)(0x79337cu));
    /* 005241fa: call 0x5229b0 */ r_esp -= 4; W32(r_esp, 0x5241ffu); f_005229b0();
    /* 005241ff: jmp 0x524212 */ goto L_00524212;
L_00524201:; BB(0x00524201);
    /* 00524201: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00524203: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00524205: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00524208: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0052420a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052420d: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00524210: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x524212u); call_ind(t); }
L_00524212:; BB(0x00524212);
    /* 00524212: mov esp, ebp */ r_esp = r_ebp;
    /* 00524214: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00524215: ret  */ FN_RET(0x00523eb0); r_esp += 4; return;
}

