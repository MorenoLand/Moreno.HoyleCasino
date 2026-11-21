#include "protos.h"

void f_0057e3d0(void) /* sub_57E3D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0057e3d0);
    /* 0057e3d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057e3d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0057e3d3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057e3d6: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0057e3db: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057e3dd: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0057e3e0: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0057e3e3: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057e3e6: mov dword ptr [eax + 0x1e8], 0 */ W32((u32)(r_eax+0x1e8u), 0x0u);
    /* 0057e3f0: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057e3f3: mov dword ptr [ecx + 0x1ec], 0 */ W32((u32)(r_ecx+0x1ecu), 0x0u);
    /* 0057e3fd: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057e400: mov dword ptr [edx + 0x1f0], 0 */ W32((u32)(r_edx+0x1f0u), 0x0u);
    /* 0057e40a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057e40d: mov ecx, dword ptr [eax + 0x1ec] */ r_ecx = R32((u32)(r_eax+0x1ecu));
    /* 0057e413: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057e414: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057e417: mov eax, dword ptr [edx + 0x1e8] */ r_eax = R32((u32)(r_edx+0x1e8u));
    /* 0057e41d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057e41e: push 0x6cbfec */ { u32 v = 0x6cbfecu; r_esp -= 4; W32(r_esp, v); }
    /* 0057e423: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 0057e426: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057e427: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x57e42du); call_ind(t); }
    /* 0057e42d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057e430: lea edx, [ebp - 0x14] */ r_edx = (u32)(r_ebp+0xffffffecu);
    /* 0057e433: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057e434: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057e437: mov ecx, dword ptr [eax + 0x1e4] */ r_ecx = R32((u32)(r_eax+0x1e4u));
    /* 0057e43d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057e440: mov eax, dword ptr [edx + 0x1e4] */ r_eax = R32((u32)(r_edx+0x1e4u));
    /* 0057e446: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057e448: mov ecx, eax */ r_ecx = r_eax;
    /* 0057e44a: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0057e450: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57e452u); call_ind(t); }
    /* 0057e452: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057e455: mov edx, dword ptr [ecx + 0x1e4] */ r_edx = R32((u32)(r_ecx+0x1e4u));
    /* 0057e45b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057e45e: mov ecx, dword ptr [eax + 0x1e4] */ r_ecx = R32((u32)(r_eax+0x1e4u));
    /* 0057e464: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057e466: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0057e469: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57e46bu); call_ind(t); }
    /* 0057e46b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057e46e: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 0057e474: mov eax, dword ptr [edx + 0x98] */ r_eax = R32((u32)(r_edx+0x98u));
    /* 0057e47a: mov dword ptr [ecx + 0x1f4], eax */ W32((u32)(r_ecx+0x1f4u), r_eax);
    /* 0057e480: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057e483: mov edx, dword ptr [ecx + 0x1f4] */ r_edx = R32((u32)(r_ecx+0x1f4u));
    /* 0057e489: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057e48a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057e48d: mov ecx, dword ptr [eax + 0x200] */ r_ecx = R32((u32)(r_eax+0x200u));
    /* 0057e493: call 0x57f6d0 */ r_esp -= 4; W32(r_esp, 0x57e498u); f_0057f6d0();
    /* 0057e498: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057e49b: mov ecx, dword ptr [ecx + 0x200] */ r_ecx = R32((u32)(r_ecx+0x200u));
    /* 0057e4a1: call 0x57f5f0 */ r_esp -= 4; W32(r_esp, 0x57e4a6u); f_0057f5f0();
    /* 0057e4a6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057e4a9: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0057e4ab: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x57e4b0u); f_00686d72();
    /* 0057e4b0: mov esp, ebp */ r_esp = r_ebp;
    /* 0057e4b2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057e4b3: ret  */ FN_RET(0x0057e3d0); r_esp += 4; return;
}

void f_0057e4c0(void) /* sub_57E4C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0057e4c0);
    /* 0057e4c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057e4c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0057e4c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057e4c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0057e4c7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057e4ca: mov ecx, dword ptr [eax + 0x1e4] */ r_ecx = R32((u32)(r_eax+0x1e4u));
    /* 0057e4d0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057e4d3: mov eax, dword ptr [edx + 0x1e4] */ r_eax = R32((u32)(r_edx+0x1e4u));
    /* 0057e4d9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057e4db: mov ecx, eax */ r_ecx = r_eax;
    /* 0057e4dd: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0057e4e0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57e4e2u); call_ind(t); }
    /* 0057e4e2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057e4e5: mov dword ptr [ecx + 0x1e8], 0 */ W32((u32)(r_ecx+0x1e8u), 0x0u);
    /* 0057e4ef: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057e4f2: mov dword ptr [edx + 0x1ec], 0 */ W32((u32)(r_edx+0x1ecu), 0x0u);
    /* 0057e4fc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057e4ff: mov dword ptr [eax + 0x1f0], 0 */ W32((u32)(r_eax+0x1f0u), 0x0u);
    /* 0057e509: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057e50c: mov edx, dword ptr [ecx + 0x1f8] */ r_edx = R32((u32)(r_ecx+0x1f8u));
    /* 0057e512: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057e515: mov ecx, dword ptr [eax + 0x1f8] */ r_ecx = R32((u32)(r_eax+0x1f8u));
    /* 0057e51b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057e51d: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0057e520: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57e522u); call_ind(t); }
    /* 0057e522: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057e525: mov edx, dword ptr [ecx + 0x1fc] */ r_edx = R32((u32)(r_ecx+0x1fcu));
    /* 0057e52b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057e52e: mov ecx, dword ptr [eax + 0x1fc] */ r_ecx = R32((u32)(r_eax+0x1fcu));
    /* 0057e534: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057e536: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0057e539: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57e53bu); call_ind(t); }
    /* 0057e53b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057e53e: mov ecx, dword ptr [ecx + 0x200] */ r_ecx = R32((u32)(r_ecx+0x200u));
    /* 0057e544: call 0x57f5f0 */ r_esp -= 4; W32(r_esp, 0x57e549u); f_0057f5f0();
    /* 0057e549: mov esp, ebp */ r_esp = r_ebp;
    /* 0057e54b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057e54c: ret  */ FN_RET(0x0057e4c0); r_esp += 4; return;
}

void f_0057e550(void) /* sub_57E550 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0057e550);
    /* 0057e550: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057e551: mov ebp, esp */ r_ebp = r_esp;
    /* 0057e553: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057e556: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0057e55b: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057e55d: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0057e560: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0057e563: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0057e569: call 0x5f3e50 */ r_esp -= 4; W32(r_esp, 0x57e56eu); f_005f3e50();
    /* 0057e56e: mov ecx, dword ptr [0x75d7ac] */ r_ecx = R32((u32)(0x75d7acu));
    /* 0057e574: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0057e576: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0057e579: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057e57c: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0057e57d: mov ecx, 0xe10 */ r_ecx = 0xe10u;
    /* 0057e582: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0057e582, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0057e582, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0057e584: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0057e587: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057e58a: imul edx, edx, 0xe10 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xe10u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057e590: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057e593: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0057e595: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0057e596: mov ecx, 0x3c */ r_ecx = 0x3cu;
    /* 0057e59b: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0057e59b, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0057e59b, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0057e59d: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0057e5a0: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057e5a3: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 0057e5a8: mov ecx, dword ptr [edx + 0x1f4] */ r_ecx = R32((u32)(r_edx+0x1f4u));
    /* 0057e5ae: cmp ecx, dword ptr [eax + 0x98] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x98u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057e5b4: je 0x57e5f0 */ if (fZ) goto L_0057e5f0;
L_0057e5b6:; BB(0x0057e5b6);
    /* 0057e5b6: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057e5b9: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 0057e5be: mov ecx, dword ptr [eax + 0x98] */ r_ecx = R32((u32)(r_eax+0x98u));
    /* 0057e5c4: mov dword ptr [edx + 0x1f4], ecx */ W32((u32)(r_edx+0x1f4u), r_ecx);
    /* 0057e5ca: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057e5cd: mov eax, dword ptr [edx + 0x1f4] */ r_eax = R32((u32)(r_edx+0x1f4u));
    /* 0057e5d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057e5d4: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057e5d7: mov ecx, dword ptr [ecx + 0x200] */ r_ecx = R32((u32)(r_ecx+0x200u));
    /* 0057e5dd: call 0x57f6d0 */ r_esp -= 4; W32(r_esp, 0x57e5e2u); f_0057f6d0();
    /* 0057e5e2: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057e5e5: mov ecx, dword ptr [edx + 0x200] */ r_ecx = R32((u32)(r_edx+0x200u));
    /* 0057e5eb: call 0x57f5f0 */ r_esp -= 4; W32(r_esp, 0x57e5f0u); f_0057f5f0();
L_0057e5f0:; BB(0x0057e5f0);
    /* 0057e5f0: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057e5f3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057e5f6: cmp ecx, dword ptr [eax + 0x1e8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x1e8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057e5fc: jne 0x57e610 */ if (!fZ) goto L_0057e610;
L_0057e5fe:; BB(0x0057e5fe);
    /* 0057e5fe: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057e601: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057e604: cmp eax, dword ptr [edx + 0x1ec] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x1ecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057e60a: je 0x57e751 */ if (fZ) goto L_0057e751;
L_0057e610:; BB(0x0057e610);
    /* 0057e610: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057e613: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057e616: mov dword ptr [ecx + 0x1e8], edx */ W32((u32)(r_ecx+0x1e8u), r_edx);
    /* 0057e61c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057e61f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057e622: mov dword ptr [eax + 0x1ec], ecx */ W32((u32)(r_eax+0x1ecu), r_ecx);
    /* 0057e628: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057e62b: mov eax, dword ptr [edx + 0x1ec] */ r_eax = R32((u32)(r_edx+0x1ecu));
    /* 0057e631: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057e632: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057e635: mov edx, dword ptr [ecx + 0x1e8] */ r_edx = R32((u32)(r_ecx+0x1e8u));
    /* 0057e63b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057e63c: push 0x6cbfec */ { u32 v = 0x6cbfecu; r_esp -= 4; W32(r_esp, v); }
    /* 0057e641: lea eax, [ebp - 0x20] */ r_eax = (u32)(r_ebp+0xffffffe0u);
    /* 0057e644: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057e645: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x57e64bu); call_ind(t); }
    /* 0057e64b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057e64e: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 0057e651: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057e652: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057e655: mov eax, dword ptr [edx + 0x1e4] */ r_eax = R32((u32)(r_edx+0x1e4u));
    /* 0057e65b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057e65e: mov ecx, dword ptr [ecx + 0x1e4] */ r_ecx = R32((u32)(r_ecx+0x1e4u));
    /* 0057e664: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0057e666: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0057e66c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57e66eu); call_ind(t); }
    /* 0057e66e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057e671: mov eax, dword ptr [ecx + 0x1ec] */ r_eax = R32((u32)(r_ecx+0x1ecu));
    /* 0057e677: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0057e678: mov ecx, 3 */ r_ecx = 0x3u;
    /* 0057e67d: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0057e67d, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0057e67d, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0057e67f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057e681: jne 0x57e751 */ if (!fZ) goto L_0057e751;
L_0057e687:; BB(0x0057e687);
    /* 0057e687: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057e68a: mov eax, dword ptr [edx + 0x1f0] */ r_eax = R32((u32)(r_edx+0x1f0u));
    /* 0057e690: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0057e693: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057e696: mov dword ptr [ecx + 0x1f0], eax */ W32((u32)(r_ecx+0x1f0u), r_eax);
    /* 0057e69c: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057e69f: cmp dword ptr [edx + 0x1f0], 2 */ {  u32 a = R32((u32)(r_edx+0x1f0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057e6a6: jle 0x57e6b5 */ if ((fZ||fS!=fO)) goto L_0057e6b5;
L_0057e6a8:; BB(0x0057e6a8);
    /* 0057e6a8: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057e6ab: mov dword ptr [eax + 0x1f0], 0 */ W32((u32)(r_eax+0x1f0u), 0x0u);
L_0057e6b5:; BB(0x0057e6b5);
    /* 0057e6b5: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057e6b8: mov ecx, dword ptr [ecx + 0x200] */ r_ecx = R32((u32)(r_ecx+0x200u));
    /* 0057e6be: call 0x57f660 */ r_esp -= 4; W32(r_esp, 0x57e6c3u); f_0057f660();
    /* 0057e6c3: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057e6c6: mov eax, dword ptr [edx + 0x1fc] */ r_eax = R32((u32)(r_edx+0x1fcu));
    /* 0057e6cc: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057e6cf: mov ecx, dword ptr [ecx + 0x1fc] */ r_ecx = R32((u32)(r_ecx+0x1fcu));
    /* 0057e6d5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0057e6d7: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0057e6da: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57e6dcu); call_ind(t); }
    /* 0057e6dc: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057e6df: mov edx, dword ptr [ecx + 0x1f8] */ r_edx = R32((u32)(r_ecx+0x1f8u));
    /* 0057e6e5: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057e6e8: mov ecx, dword ptr [eax + 0x1f8] */ r_ecx = R32((u32)(r_eax+0x1f8u));
    /* 0057e6ee: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057e6f0: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0057e6f3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57e6f5u); call_ind(t); }
    /* 0057e6f5: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057e6f8: cmp dword ptr [ecx + 0x1f0], 1 */ {  u32 a = R32((u32)(r_ecx+0x1f0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057e6ff: jne 0x57e71c */ if (!fZ) goto L_0057e71c;
L_0057e701:; BB(0x0057e701);
    /* 0057e701: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057e704: mov eax, dword ptr [edx + 0x1f8] */ r_eax = R32((u32)(r_edx+0x1f8u));
    /* 0057e70a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057e70d: mov ecx, dword ptr [ecx + 0x1f8] */ r_ecx = R32((u32)(r_ecx+0x1f8u));
    /* 0057e713: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0057e715: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0057e718: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57e71au); call_ind(t); }
    /* 0057e71a: jmp 0x57e751 */ goto L_0057e751;
L_0057e71c:; BB(0x0057e71c);
    /* 0057e71c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057e71f: cmp dword ptr [ecx + 0x1f0], 2 */ {  u32 a = R32((u32)(r_ecx+0x1f0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057e726: jne 0x57e743 */ if (!fZ) goto L_0057e743;
L_0057e728:; BB(0x0057e728);
    /* 0057e728: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057e72b: mov eax, dword ptr [edx + 0x1fc] */ r_eax = R32((u32)(r_edx+0x1fcu));
    /* 0057e731: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057e734: mov ecx, dword ptr [ecx + 0x1fc] */ r_ecx = R32((u32)(r_ecx+0x1fcu));
    /* 0057e73a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0057e73c: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0057e73f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57e741u); call_ind(t); }
    /* 0057e741: jmp 0x57e751 */ goto L_0057e751;
L_0057e743:; BB(0x0057e743);
    /* 0057e743: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057e746: mov ecx, dword ptr [ecx + 0x200] */ r_ecx = R32((u32)(r_ecx+0x200u));
    /* 0057e74c: call 0x57f5f0 */ r_esp -= 4; W32(r_esp, 0x57e751u); f_0057f5f0();
L_0057e751:; BB(0x0057e751);
    /* 0057e751: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057e754: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0057e756: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x57e75bu); f_00686d72();
    /* 0057e75b: mov esp, ebp */ r_esp = r_ebp;
    /* 0057e75d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057e75e: ret  */ FN_RET(0x0057e550); r_esp += 4; return;
}

void f_0057e760(void) /* sub_57E760 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0057e760);
    /* 0057e760: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057e761: mov ebp, esp */ r_ebp = r_esp;
    /* 0057e763: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057e765: push 0x6a68fb */ { u32 v = 0x6a68fbu; r_esp -= 4; W32(r_esp, v); }
    /* 0057e76a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0057e770: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057e771: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057e774: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0057e779: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057e77b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057e77c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0057e77f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0057e785: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0057e788: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057e78b: call 0x57e4c0 */ r_esp -= 4; W32(r_esp, 0x57e790u); f_0057e4c0();
    /* 0057e790: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057e793: cmp dword ptr [eax + 0x17c], 0 */ {  u32 a = R32((u32)(r_eax+0x17cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057e79a: jne 0x57e7e7 */ if (!fZ) goto L_0057e7e7;
L_0057e79c:; BB(0x0057e79c);
    /* 0057e79c: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0057e79e: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x57e7a3u); f_00686d82();
    /* 0057e7a3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057e7a6: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0057e7a9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0057e7b0: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057e7b4: je 0x57e7c7 */ if (fZ) goto L_0057e7c7;
L_0057e7b6:; BB(0x0057e7b6);
    /* 0057e7b6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057e7b9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057e7ba: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057e7bd: call 0x57ea10 */ r_esp -= 4; W32(r_esp, 0x57e7c2u); f_0057ea10();
    /* 0057e7c2: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0057e7c5: jmp 0x57e7ce */ goto L_0057e7ce;
L_0057e7c7:; BB(0x0057e7c7);
    /* 0057e7c7: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0057e7ce:; BB(0x0057e7ce);
    /* 0057e7ce: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0057e7d1: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0057e7d4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0057e7db: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057e7de: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057e7e1: mov dword ptr [eax + 0x17c], ecx */ W32((u32)(r_eax+0x17cu), r_ecx);
L_0057e7e7:; BB(0x0057e7e7);
    /* 0057e7e7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057e7e9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057e7eb: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057e7ee: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 0057e7f4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057e7f7: mov ecx, dword ptr [ecx + 0x17c] */ r_ecx = R32((u32)(r_ecx+0x17cu));
    /* 0057e7fd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0057e7ff: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0057e802: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57e804u); call_ind(t); }
    /* 0057e804: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057e807: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0057e80e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0057e80f: mov esp, ebp */ r_esp = r_ebp;
    /* 0057e811: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057e812: ret  */ FN_RET(0x0057e760); r_esp += 4; return;
}

void f_0057e820(void) /* sub_57E820 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0057e820);
    /* 0057e820: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057e821: mov ebp, esp */ r_ebp = r_esp;
    /* 0057e823: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057e826: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0057e829: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0057e830: jmp 0x57e83b */ goto L_0057e83b;
L_0057e832:; BB(0x0057e832);
    /* 0057e832: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057e835: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0057e838: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0057e83b:; BB(0x0057e83b);
    /* 0057e83b: cmp dword ptr [ebp - 4], 0x14 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057e83f: jge 0x57e864 */ if ((fS==fO)) goto L_0057e864;
L_0057e841:; BB(0x0057e841);
    /* 0057e841: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057e844: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057e847: mov eax, dword ptr [edx + ecx*4 + 0x194] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x194u));
    /* 0057e84e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057e851: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057e854: mov ecx, dword ptr [edx + ecx*4 + 0x194] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x194u));
    /* 0057e85b: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0057e85d: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 0057e860: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x57e862u); call_ind(t); }
    /* 0057e862: jmp 0x57e832 */ goto L_0057e832;
L_0057e864:; BB(0x0057e864);
    /* 0057e864: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0057e86a: call 0x5e1070 */ r_esp -= 4; W32(r_esp, 0x57e86fu); f_005e1070();
    /* 0057e86f: mov ecx, dword ptr [0x79357c] */ r_ecx = R32((u32)(0x79357cu));
    /* 0057e875: call 0x583830 */ r_esp -= 4; W32(r_esp, 0x57e87au); f_00583830();
    /* 0057e87a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057e87d: call 0x57e3d0 */ r_esp -= 4; W32(r_esp, 0x57e882u); f_0057e3d0();
    /* 0057e882: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057e885: call 0x57e9b0 */ r_esp -= 4; W32(r_esp, 0x57e88au); f_0057e9b0();
    /* 0057e88a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057e88d: mov ecx, dword ptr [eax + 0x208] */ r_ecx = R32((u32)(r_eax+0x208u));
    /* 0057e893: call 0x582540 */ r_esp -= 4; W32(r_esp, 0x57e898u); f_00582540();
    /* 0057e898: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057e89d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057e8a0: mov ecx, dword ptr [ecx + 0x208] */ r_ecx = R32((u32)(r_ecx+0x208u));
    /* 0057e8a6: call 0x582510 */ r_esp -= 4; W32(r_esp, 0x57e8abu); f_00582510();
    /* 0057e8ab: mov esp, ebp */ r_esp = r_ebp;
    /* 0057e8ad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057e8ae: ret  */ FN_RET(0x0057e820); r_esp += 4; return;
}

void f_0057e8b0(void) /* sub_57E8B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0057e8b0);
    /* 0057e8b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057e8b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0057e8b3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057e8b6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0057e8b9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057e8bb: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057e8be: mov ecx, dword ptr [eax + 0x188] */ r_ecx = R32((u32)(r_eax+0x188u));
    /* 0057e8c4: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x57e8c9u); f_005f5d50();
    /* 0057e8c9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057e8cb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057e8ce: mov ecx, dword ptr [ecx + 0x190] */ r_ecx = R32((u32)(r_ecx+0x190u));
    /* 0057e8d4: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x57e8d9u); f_005f5d50();
    /* 0057e8d9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0057e8e0: jmp 0x57e8eb */ goto L_0057e8eb;
L_0057e8e2:; BB(0x0057e8e2);
    /* 0057e8e2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057e8e5: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0057e8e8: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0057e8eb:; BB(0x0057e8eb);
    /* 0057e8eb: cmp dword ptr [ebp - 4], 0x14 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057e8ef: jge 0x57e914 */ if ((fS==fO)) goto L_0057e914;
L_0057e8f1:; BB(0x0057e8f1);
    /* 0057e8f1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057e8f4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057e8f7: mov edx, dword ptr [ecx + eax*4 + 0x194] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x194u));
    /* 0057e8fe: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057e901: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057e904: mov ecx, dword ptr [ecx + eax*4 + 0x194] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x194u));
    /* 0057e90b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057e90d: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0057e910: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57e912u); call_ind(t); }
    /* 0057e912: jmp 0x57e8e2 */ goto L_0057e8e2;
L_0057e914:; BB(0x0057e914);
    /* 0057e914: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057e917: mov edx, dword ptr [ecx + 0x184] */ r_edx = R32((u32)(r_ecx+0x184u));
    /* 0057e91d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057e920: mov ecx, dword ptr [eax + 0x184] */ r_ecx = R32((u32)(r_eax+0x184u));
    /* 0057e926: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057e928: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0057e92b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57e92du); call_ind(t); }
    /* 0057e92d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057e930: mov edx, dword ptr [ecx + 0x188] */ r_edx = R32((u32)(r_ecx+0x188u));
    /* 0057e936: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057e939: mov ecx, dword ptr [eax + 0x188] */ r_ecx = R32((u32)(r_eax+0x188u));
    /* 0057e93f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057e941: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0057e944: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57e946u); call_ind(t); }
    /* 0057e946: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057e949: mov edx, dword ptr [ecx + 0x18c] */ r_edx = R32((u32)(r_ecx+0x18cu));
    /* 0057e94f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057e952: mov ecx, dword ptr [eax + 0x18c] */ r_ecx = R32((u32)(r_eax+0x18cu));
    /* 0057e958: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057e95a: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0057e95d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57e95fu); call_ind(t); }
    /* 0057e95f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057e962: mov edx, dword ptr [ecx + 0x190] */ r_edx = R32((u32)(r_ecx+0x190u));
    /* 0057e968: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057e96b: mov ecx, dword ptr [eax + 0x190] */ r_ecx = R32((u32)(r_eax+0x190u));
    /* 0057e971: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057e973: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0057e976: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57e978u); call_ind(t); }
    /* 0057e978: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057e97a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057e97d: call 0x5f5df0 */ r_esp -= 4; W32(r_esp, 0x57e982u); f_005f5df0();
    /* 0057e982: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057e985: mov ecx, dword ptr [ecx + 0x208] */ r_ecx = R32((u32)(r_ecx+0x208u));
    /* 0057e98b: call 0x582540 */ r_esp -= 4; W32(r_esp, 0x57e990u); f_00582540();
    /* 0057e990: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057e995: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057e998: mov ecx, dword ptr [edx + 0x208] */ r_ecx = R32((u32)(r_edx+0x208u));
    /* 0057e99e: call 0x582510 */ r_esp -= 4; W32(r_esp, 0x57e9a3u); f_00582510();
    /* 0057e9a3: mov esp, ebp */ r_esp = r_ebp;
    /* 0057e9a5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057e9a6: ret  */ FN_RET(0x0057e8b0); r_esp += 4; return;
}

void f_0057e9b0(void) /* sub_57E9B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0057e9b0);
    /* 0057e9b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057e9b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0057e9b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057e9b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0057e9b7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057e9ba: mov ecx, dword ptr [eax + 0x208] */ r_ecx = R32((u32)(r_eax+0x208u));
    /* 0057e9c0: call 0x581670 */ r_esp -= 4; W32(r_esp, 0x57e9c5u); f_00581670();
    /* 0057e9c5: mov esp, ebp */ r_esp = r_ebp;
    /* 0057e9c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057e9c8: ret  */ FN_RET(0x0057e9b0); r_esp += 4; return;
}

void f_0057e9d0(void) /* sub_57E9D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0057e9d0);
    /* 0057e9d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057e9d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0057e9d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057e9d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0057e9d7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0057e9da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057e9db: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057e9de: mov ecx, dword ptr [ecx + 0x208] */ r_ecx = R32((u32)(r_ecx+0x208u));
    /* 0057e9e4: call 0x5825a0 */ r_esp -= 4; W32(r_esp, 0x57e9e9u); f_005825a0();
    /* 0057e9e9: mov esp, ebp */ r_esp = r_ebp;
    /* 0057e9eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057e9ec: ret 4 */ FN_RET(0x0057e9d0); r_esp += 8; return;
}

void f_0057e9f0(void) /* sub_57E9F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0057e9f0);
    /* 0057e9f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057e9f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0057e9f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057e9f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0057e9f7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0057e9fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057e9fb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057e9fe: mov ecx, dword ptr [ecx + 0x208] */ r_ecx = R32((u32)(r_ecx+0x208u));
    /* 0057ea04: call 0x582510 */ r_esp -= 4; W32(r_esp, 0x57ea09u); f_00582510();
    /* 0057ea09: mov esp, ebp */ r_esp = r_ebp;
    /* 0057ea0b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057ea0c: ret 4 */ FN_RET(0x0057e9f0); r_esp += 8; return;
}

