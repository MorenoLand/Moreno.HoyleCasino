#include "protos.h"

void f_005bbbd0(void) /* bad_alloc@std::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bbbd0);
    /* 005bbbd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bbbd1: mov ebp, esp */ r_ebp = r_esp;
    /* 005bbbd3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bbbd6: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005bbbda: ja 0x5bbbe5 */ if ((!fC&&!fZ)) goto L_005bbbe5;
L_005bbbdc:; BB(0x005bbbdc);
    /* 005bbbdc: mov dword ptr [ebp + 8], 0 */ W32((u32)(r_ebp+0x8u), 0x0u);
    /* 005bbbe3: jmp 0x5bbc1b */ goto L_005bbc1b;
L_005bbbe5:; BB(0x005bbbe5);
    /* 005bbbe5: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005bbbe8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005bbbea: div dword ptr [ebp + 8] */ { u32 d = R32((u32)(r_ebp+0x8u)); if (!d) UNSUP(0x005bbbea, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x005bbbea, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005bbbed: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005bbbf0: jae 0x5bbc1b */ if (!fC) goto L_005bbc1b;
L_005bbbf2:; BB(0x005bbbf2);
    /* 005bbbf2: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005bbbf9: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 005bbbfc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bbbfd: lea ecx, [ebp - 0xc] */ r_ecx = (u32)(r_ebp+0xfffffff4u);
    /* 005bbc00: call dword ptr [0x6b2284] */ { u32 t = R32((u32)(0x6b2284u)); r_esp -= 4; W32(r_esp, 0x5bbc06u); call_ind(t); }
    /* 005bbc06: mov dword ptr [ebp - 0xc], 0x6d1c0c */ W32((u32)(r_ebp+0xfffffff4u), 0x6d1c0cu);
    /* 005bbc0d: push 0x6fc670 */ { u32 v = 0x6fc670u; r_esp -= 4; W32(r_esp, v); }
    /* 005bbc12: lea ecx, [ebp - 0xc] */ r_ecx = (u32)(r_ebp+0xfffffff4u);
    /* 005bbc15: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bbc16: call 0x686fc0 */ r_esp -= 4; W32(r_esp, 0x5bbc1bu); f_00686fc0();
L_005bbc1b:; BB(0x005bbc1b);
    /* 005bbc1b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005bbc1e: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005bbc21: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bbc22: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5bbc27u); f_00686d82();
    /* 005bbc27: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bbc2a: mov esp, ebp */ r_esp = r_ebp;
    /* 005bbc2c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bbc2d: ret  */ FN_RET(0x005bbbd0); r_esp += 4; return;
}

void f_005bbc50(void) /* bad_alloc@std::vfunc0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bbc50);
    /* 005bbc50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bbc51: mov ebp, esp */ r_ebp = r_esp;
    /* 005bbc53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bbc54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005bbc57: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bbc5a: mov dword ptr [eax], 0x6d1c0c */ W32((u32)(r_eax), 0x6d1c0cu);
    /* 005bbc60: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bbc63: call dword ptr [0x6b2278] */ { u32 t = R32((u32)(0x6b2278u)); r_esp -= 4; W32(r_esp, 0x5bbc69u); call_ind(t); }
    /* 005bbc69: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005bbc6c: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 005bbc6f: je 0x5bbc7d */ if (fZ) goto L_005bbc7d;
L_005bbc71:; BB(0x005bbc71);
    /* 005bbc71: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bbc74: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bbc75: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5bbc7au); f_00686cae();
    /* 005bbc7a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005bbc7d:; BB(0x005bbc7d);
    /* 005bbc7d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bbc80: mov esp, ebp */ r_esp = r_ebp;
    /* 005bbc82: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bbc83: ret 4 */ FN_RET(0x005bbc50); r_esp += 8; return;
}

void f_005c6310(void) /* bad_alloc@std::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c6310);
    /* 005c6310: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c6311: mov ebp, esp */ r_ebp = r_esp;
    /* 005c6313: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c6316: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005c631a: ja 0x5c6325 */ if ((!fC&&!fZ)) goto L_005c6325;
L_005c631c:; BB(0x005c631c);
    /* 005c631c: mov dword ptr [ebp + 8], 0 */ W32((u32)(r_ebp+0x8u), 0x0u);
    /* 005c6323: jmp 0x5c635b */ goto L_005c635b;
L_005c6325:; BB(0x005c6325);
    /* 005c6325: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005c6328: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c632a: div dword ptr [ebp + 8] */ { u32 d = R32((u32)(r_ebp+0x8u)); if (!d) UNSUP(0x005c632a, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x005c632a, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005c632d: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c6330: jae 0x5c635b */ if (!fC) goto L_005c635b;
L_005c6332:; BB(0x005c6332);
    /* 005c6332: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005c6339: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 005c633c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c633d: lea ecx, [ebp - 0xc] */ r_ecx = (u32)(r_ebp+0xfffffff4u);
    /* 005c6340: call dword ptr [0x6b2284] */ { u32 t = R32((u32)(0x6b2284u)); r_esp -= 4; W32(r_esp, 0x5c6346u); call_ind(t); }
    /* 005c6346: mov dword ptr [ebp - 0xc], 0x6d1c0c */ W32((u32)(r_ebp+0xfffffff4u), 0x6d1c0cu);
    /* 005c634d: push 0x6fc670 */ { u32 v = 0x6fc670u; r_esp -= 4; W32(r_esp, v); }
    /* 005c6352: lea ecx, [ebp - 0xc] */ r_ecx = (u32)(r_ebp+0xfffffff4u);
    /* 005c6355: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c6356: call 0x686fc0 */ r_esp -= 4; W32(r_esp, 0x5c635bu); f_00686fc0();
L_005c635b:; BB(0x005c635b);
    /* 005c635b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005c635e: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005c6361: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c6362: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5c6367u); f_00686d82();
    /* 005c6367: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c636a: mov esp, ebp */ r_esp = r_ebp;
    /* 005c636c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c636d: ret  */ FN_RET(0x005c6310); r_esp += 4; return;
}

void f_005c6370(void) /* bad_alloc@std::ctor_1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c6370);
    /* 005c6370: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c6371: mov ebp, esp */ r_ebp = r_esp;
    /* 005c6373: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c6376: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005c637a: ja 0x5c6385 */ if ((!fC&&!fZ)) goto L_005c6385;
L_005c637c:; BB(0x005c637c);
    /* 005c637c: mov dword ptr [ebp + 8], 0 */ W32((u32)(r_ebp+0x8u), 0x0u);
    /* 005c6383: jmp 0x5c63bb */ goto L_005c63bb;
L_005c6385:; BB(0x005c6385);
    /* 005c6385: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005c6388: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c638a: div dword ptr [ebp + 8] */ { u32 d = R32((u32)(r_ebp+0x8u)); if (!d) UNSUP(0x005c638a, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x005c638a, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005c638d: cmp eax, 0x34 */ {  u32 a = r_eax; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c6390: jae 0x5c63bb */ if (!fC) goto L_005c63bb;
L_005c6392:; BB(0x005c6392);
    /* 005c6392: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005c6399: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 005c639c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c639d: lea ecx, [ebp - 0xc] */ r_ecx = (u32)(r_ebp+0xfffffff4u);
    /* 005c63a0: call dword ptr [0x6b2284] */ { u32 t = R32((u32)(0x6b2284u)); r_esp -= 4; W32(r_esp, 0x5c63a6u); call_ind(t); }
    /* 005c63a6: mov dword ptr [ebp - 0xc], 0x6d1c0c */ W32((u32)(r_ebp+0xfffffff4u), 0x6d1c0cu);
    /* 005c63ad: push 0x6fc670 */ { u32 v = 0x6fc670u; r_esp -= 4; W32(r_esp, v); }
    /* 005c63b2: lea ecx, [ebp - 0xc] */ r_ecx = (u32)(r_ebp+0xfffffff4u);
    /* 005c63b5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c63b6: call 0x686fc0 */ r_esp -= 4; W32(r_esp, 0x5c63bbu); f_00686fc0();
L_005c63bb:; BB(0x005c63bb);
    /* 005c63bb: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005c63be: imul edx, edx, 0x34 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x34u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c63c1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c63c2: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5c63c7u); f_00686d82();
    /* 005c63c7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c63ca: mov esp, ebp */ r_esp = r_ebp;
    /* 005c63cc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c63cd: ret  */ FN_RET(0x005c6370); r_esp += 4; return;
}

void f_0068f9d0(void) /* bad_alloc@std::ctor_2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068f9d0);
    /* 0068f9d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068f9d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0068f9d3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068f9d6: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0068f9da: ja 0x68f9e5 */ if ((!fC&&!fZ)) goto L_0068f9e5;
L_0068f9dc:; BB(0x0068f9dc);
    /* 0068f9dc: mov dword ptr [ebp + 8], 0 */ W32((u32)(r_ebp+0x8u), 0x0u);
    /* 0068f9e3: jmp 0x68fa1b */ goto L_0068fa1b;
L_0068f9e5:; BB(0x0068f9e5);
    /* 0068f9e5: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0068f9e8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0068f9ea: div dword ptr [ebp + 8] */ { u32 d = R32((u32)(r_ebp+0x8u)); if (!d) UNSUP(0x0068f9ea, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x0068f9ea, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0068f9ed: cmp eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0068f9f0: jae 0x68fa1b */ if (!fC) goto L_0068fa1b;
L_0068f9f2:; BB(0x0068f9f2);
    /* 0068f9f2: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0068f9f9: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 0068f9fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068f9fd: lea ecx, [ebp - 0xc] */ r_ecx = (u32)(r_ebp+0xfffffff4u);
    /* 0068fa00: call dword ptr [0x6b2284] */ { u32 t = R32((u32)(0x6b2284u)); r_esp -= 4; W32(r_esp, 0x68fa06u); call_ind(t); }
    /* 0068fa06: mov dword ptr [ebp - 0xc], 0x6d1c0c */ W32((u32)(r_ebp+0xfffffff4u), 0x6d1c0cu);
    /* 0068fa0d: push 0x6fc670 */ { u32 v = 0x6fc670u; r_esp -= 4; W32(r_esp, v); }
    /* 0068fa12: lea ecx, [ebp - 0xc] */ r_ecx = (u32)(r_ebp+0xfffffff4u);
    /* 0068fa15: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068fa16: call 0x686fc0 */ r_esp -= 4; W32(r_esp, 0x68fa1bu); f_00686fc0();
L_0068fa1b:; BB(0x0068fa1b);
    /* 0068fa1b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0068fa1e: imul edx, edx, 0x38 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x38u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0068fa21: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068fa22: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x68fa27u); f_00686d82();
    /* 0068fa27: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068fa2a: mov esp, ebp */ r_esp = r_ebp;
    /* 0068fa2c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068fa2d: ret  */ FN_RET(0x0068f9d0); r_esp += 4; return;
}

void f_0068fa30(void) /* bad_alloc@std::ctor_3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068fa30);
    /* 0068fa30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068fa31: mov ebp, esp */ r_ebp = r_esp;
    /* 0068fa33: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068fa36: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0068fa3a: ja 0x68fa45 */ if ((!fC&&!fZ)) goto L_0068fa45;
L_0068fa3c:; BB(0x0068fa3c);
    /* 0068fa3c: mov dword ptr [ebp + 8], 0 */ W32((u32)(r_ebp+0x8u), 0x0u);
    /* 0068fa43: jmp 0x68fa7b */ goto L_0068fa7b;
L_0068fa45:; BB(0x0068fa45);
    /* 0068fa45: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0068fa48: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0068fa4a: div dword ptr [ebp + 8] */ { u32 d = R32((u32)(r_ebp+0x8u)); if (!d) UNSUP(0x0068fa4a, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x0068fa4a, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0068fa4d: cmp eax, 0x48 */ {  u32 a = r_eax; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0068fa50: jae 0x68fa7b */ if (!fC) goto L_0068fa7b;
L_0068fa52:; BB(0x0068fa52);
    /* 0068fa52: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0068fa59: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 0068fa5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068fa5d: lea ecx, [ebp - 0xc] */ r_ecx = (u32)(r_ebp+0xfffffff4u);
    /* 0068fa60: call dword ptr [0x6b2284] */ { u32 t = R32((u32)(0x6b2284u)); r_esp -= 4; W32(r_esp, 0x68fa66u); call_ind(t); }
    /* 0068fa66: mov dword ptr [ebp - 0xc], 0x6d1c0c */ W32((u32)(r_ebp+0xfffffff4u), 0x6d1c0cu);
    /* 0068fa6d: push 0x6fc670 */ { u32 v = 0x6fc670u; r_esp -= 4; W32(r_esp, v); }
    /* 0068fa72: lea ecx, [ebp - 0xc] */ r_ecx = (u32)(r_ebp+0xfffffff4u);
    /* 0068fa75: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068fa76: call 0x686fc0 */ r_esp -= 4; W32(r_esp, 0x68fa7bu); f_00686fc0();
L_0068fa7b:; BB(0x0068fa7b);
    /* 0068fa7b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0068fa7e: imul edx, edx, 0x48 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x48u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0068fa81: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068fa82: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x68fa87u); f_00686d82();
    /* 0068fa87: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068fa8a: mov esp, ebp */ r_esp = r_ebp;
    /* 0068fa8c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068fa8d: ret  */ FN_RET(0x0068fa30); r_esp += 4; return;
}

