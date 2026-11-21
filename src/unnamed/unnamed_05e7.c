#include "protos.h"

void f_005e7230(void) /* sub_5E7230 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e7230);
    /* 005e7230: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e7231: mov ebp, esp */ r_ebp = r_esp;
    /* 005e7233: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e7236: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005e7239: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e7240: jmp 0x5e724b */ goto L_005e724b;
L_005e7242:; BB(0x005e7242);
    /* 005e7242: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7245: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e7248: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005e724b:; BB(0x005e724b);
    /* 005e724b: cmp dword ptr [ebp - 4], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e724f: jge 0x5e7389 */ if ((fS==fO)) goto L_005e7389;
L_005e7255:; BB(0x005e7255);
    /* 005e7255: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7258: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7259: mov ecx, dword ptr [0x79506c] */ r_ecx = R32((u32)(0x79506cu));
    /* 005e725f: call 0x5e75f0 */ r_esp -= 4; W32(r_esp, 0x5e7264u); f_005e75f0();
    /* 005e7264: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005e7267: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e726a: movsx eax, byte ptr [edx + 0xac] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0xacu));
    /* 005e7271: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7273: je 0x5e7384 */ if (fZ) goto L_005e7384;
L_005e7279:; BB(0x005e7279);
    /* 005e7279: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e727c: cmp dword ptr [ecx + 0x44], 0 */ {  u32 a = R32((u32)(r_ecx+0x44u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e7280: jl 0x5e7350 */ if ((fS!=fO)) goto L_005e7350;
L_005e7286:; BB(0x005e7286);
    /* 005e7286: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7289: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e728c: cmp dword ptr [eax + edx*4 + 0x1e8], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x1e8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7294: je 0x5e734e */ if (fZ) goto L_005e734e;
L_005e729a:; BB(0x005e729a);
    /* 005e729a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e729d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e72a0: cmp dword ptr [edx + ecx*4 + 0x1e8], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x1e8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005e72a8: jb 0x5e734e */ if (fC) goto L_005e734e;
L_005e72ae:; BB(0x005e72ae);
    /* 005e72ae: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005e72b0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e72b3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e72b6: mov edx, dword ptr [ecx + eax*4 + 0x1e8] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x1e8u));
    /* 005e72bd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e72c0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e72c3: mov ecx, dword ptr [ecx + eax*4 + 0x1e8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x1e8u));
    /* 005e72ca: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005e72cc: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005e72d2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e72d4u); call_ind(t); }
    /* 005e72d4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e72d7: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e72da: mov eax, dword ptr [edx + ecx*4 + 0x1e8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x1e8u));
    /* 005e72e1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e72e4: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e72e7: mov ecx, dword ptr [edx + ecx*4 + 0x1e8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x1e8u));
    /* 005e72ee: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005e72f0: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 005e72f3: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5e72f5u); call_ind(t); }
    /* 005e72f5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e72f8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e72fb: cmp dword ptr [ecx + eax*4 + 0x210], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x210u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7303: je 0x5e734e */ if (fZ) goto L_005e734e;
L_005e7305:; BB(0x005e7305);
    /* 005e7305: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e7307: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e730a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e730d: mov ecx, dword ptr [eax + edx*4 + 0x210] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x210u));
    /* 005e7314: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7317: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e731a: mov edx, dword ptr [eax + edx*4 + 0x210] */ r_edx = R32((u32)(r_eax+r_edx*4+0x210u));
    /* 005e7321: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005e7323: mov ecx, edx */ r_ecx = r_edx;
    /* 005e7325: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 005e732b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5e732du); call_ind(t); }
    /* 005e732d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7330: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e7333: mov edx, dword ptr [ecx + eax*4 + 0x210] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x210u));
    /* 005e733a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e733d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e7340: mov ecx, dword ptr [ecx + eax*4 + 0x210] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x210u));
    /* 005e7347: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005e7349: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005e734c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e734eu); call_ind(t); }
L_005e734e:; BB(0x005e734e);
    /* 005e734e: jmp 0x5e7384 */ goto L_005e7384;
L_005e7350:; BB(0x005e7350);
    /* 005e7350: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e7352: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e7355: add ecx, 0x60 */ {  u32 a = r_ecx; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e7358: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7359: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e735c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e735f: mov ecx, dword ptr [eax + edx*4 + 0x1c0] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1c0u));
    /* 005e7366: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e7369: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e736a: call 0x686fde */ r_esp -= 4; W32(r_esp, 0x5e736fu); f_00686fde();
    /* 005e736f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e7372: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7375: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e7378: mov ecx, dword ptr [eax + edx*4 + 0x1c0] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1c0u));
    /* 005e737f: call 0x664630 */ r_esp -= 4; W32(r_esp, 0x5e7384u); f_00664630();
L_005e7384:; BB(0x005e7384);
    /* 005e7384: jmp 0x5e7242 */ goto L_005e7242;
L_005e7389:; BB(0x005e7389);
    /* 005e7389: mov esp, ebp */ r_esp = r_ebp;
    /* 005e738b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e738c: ret  */ FN_RET(0x005e7230); r_esp += 4; return;
}

void f_005e7470(void) /* sub_5E7470 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e7470);
    /* 005e7470: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e7471: mov ebp, esp */ r_ebp = r_esp;
    /* 005e7473: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7474: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e7477: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e747a: call 0x5e79e0 */ r_esp -= 4; W32(r_esp, 0x5e747fu); f_005e79e0();
    /* 005e747f: mov esp, ebp */ r_esp = r_ebp;
    /* 005e7481: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e7482: ret  */ FN_RET(0x005e7470); r_esp += 4; return;
}

void f_005e7490(void) /* sub_5E7490 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e7490);
    /* 005e7490: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e7491: mov ebp, esp */ r_ebp = r_esp;
    /* 005e7493: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7494: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e7497: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e749a: call 0x5e78f0 */ r_esp -= 4; W32(r_esp, 0x5e749fu); f_005e78f0();
    /* 005e749f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005e74a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e74a4: jne 0x5e74ae */ if (!fZ) goto L_005e74ae;
L_005e74a6:; BB(0x005e74a6);
    /* 005e74a6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e74a9: call 0x5e78a0 */ r_esp -= 4; W32(r_esp, 0x5e74aeu); f_005e78a0();
L_005e74ae:; BB(0x005e74ae);
    /* 005e74ae: mov esp, ebp */ r_esp = r_ebp;
    /* 005e74b0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e74b1: ret  */ FN_RET(0x005e7490); r_esp += 4; return;
}

void f_005e74c0(void) /* sub_5E74C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e74c0);
    /* 005e74c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e74c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005e74c3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e74c6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005e74c9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e74d0: jmp 0x5e74db */ goto L_005e74db;
L_005e74d2:; BB(0x005e74d2);
    /* 005e74d2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e74d5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e74d8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005e74db:; BB(0x005e74db);
    /* 005e74db: cmp dword ptr [ebp - 4], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e74df: jge 0x5e74ed */ if ((fS==fO)) goto L_005e74ed;
L_005e74e1:; BB(0x005e74e1);
    /* 005e74e1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e74e4: mov byte ptr [ecx + 0x794930], 1 */ W8((u32)(r_ecx+0x794930u), 0x1u);
    /* 005e74eb: jmp 0x5e74d2 */ goto L_005e74d2;
L_005e74ed:; BB(0x005e74ed);
    /* 005e74ed: mov esp, ebp */ r_esp = r_ebp;
    /* 005e74ef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e74f0: ret  */ FN_RET(0x005e74c0); r_esp += 4; return;
}

void f_005e7500(void) /* sub_5E7500 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e7500);
    /* 005e7500: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e7501: mov ebp, esp */ r_ebp = r_esp;
    /* 005e7503: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e7505: push 0x6a99e5 */ { u32 v = 0x6a99e5u; r_esp -= 4; W32(r_esp, v); }
    /* 005e750a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005e7510: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e7511: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e7514: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005e7519: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e751b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e751c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005e751f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005e7525: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005e7528: movzx eax, byte ptr [0x795f95] */ r_eax = (u32)R8((u32)(0x795f95u));
    /* 005e752f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7531: je 0x5e7535 */ if (fZ) goto L_005e7535;
L_005e7533:; BB(0x005e7533);
    /* 005e7533: jmp 0x5e75ac */ goto L_005e75ac;
L_005e7535:; BB(0x005e7535);
    /* 005e7535: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e7538: cmp dword ptr [ecx], 0 */ {  u32 a = R32((u32)(r_ecx)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e753b: jne 0x5e75a2 */ if (!fZ) goto L_005e75a2;
L_005e753d:; BB(0x005e753d);
    /* 005e753d: push 0x23c */ { u32 v = 0x23cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e7542: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5e7547u); f_00686d82();
    /* 005e7547: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e754a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005e754d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e7554: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7558: je 0x5e7567 */ if (fZ) goto L_005e7567;
L_005e755a:; BB(0x005e755a);
    /* 005e755a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e755d: call 0x5e6890 */ r_esp -= 4; W32(r_esp, 0x5e7562u); f_005e6890();
    /* 005e7562: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005e7565: jmp 0x5e756e */ goto L_005e756e;
L_005e7567:; BB(0x005e7567);
    /* 005e7567: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005e756e:; BB(0x005e756e);
    /* 005e756e: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e7571: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005e7574: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005e757b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e757e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e7581: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 005e7583: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e7586: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e7588: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e758b: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 005e758d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e758f: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 005e7592: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e7594u); call_ind(t); }
    /* 005e7594: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e7596: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e7598: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e759b: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 005e759d: call 0x5f7340 */ r_esp -= 4; W32(r_esp, 0x5e75a2u); f_005f7340();
L_005e75a2:; BB(0x005e75a2);
    /* 005e75a2: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e75a5: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 005e75a7: call 0x5e7210 */ r_esp -= 4; W32(r_esp, 0x5e75acu); f_005e7210();
L_005e75ac:; BB(0x005e75ac);
    /* 005e75ac: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e75af: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e75b6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e75b7: mov esp, ebp */ r_esp = r_ebp;
    /* 005e75b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e75ba: ret  */ FN_RET(0x005e7500); r_esp += 4; return;
}

void f_005e75c0(void) /* sub_5E75C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e75c0);
    /* 005e75c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e75c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005e75c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e75c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e75c7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e75ca: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e75cd: je 0x5e75e2 */ if (fZ) goto L_005e75e2;
L_005e75cf:; BB(0x005e75cf);
    /* 005e75cf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e75d2: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 005e75d4: call 0x5f8990 */ r_esp -= 4; W32(r_esp, 0x5e75d9u); f_005f8990();
    /* 005e75d9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e75dc: mov dword ptr [edx], 0 */ W32((u32)(r_edx), 0x0u);
L_005e75e2:; BB(0x005e75e2);
    /* 005e75e2: mov esp, ebp */ r_esp = r_ebp;
    /* 005e75e4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e75e5: ret  */ FN_RET(0x005e75c0); r_esp += 4; return;
}

void f_005e75f0(void) /* sub_5E75F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e75f0);
    /* 005e75f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e75f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005e75f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e75f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e75f7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e75fa: imul eax, eax, 0xb8 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xb8u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e7600: add eax, 0x79493c */ {  u32 a = r_eax; u32 b = 0x79493cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e7605: mov esp, ebp */ r_esp = r_ebp;
    /* 005e7607: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e7608: ret 4 */ FN_RET(0x005e75f0); r_esp += 8; return;
}

void f_005e7610(void) /* sub_5E7610 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e7610);
    /* 005e7610: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e7611: mov ebp, esp */ r_ebp = r_esp;
    /* 005e7613: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7614: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e7617: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e761a: imul eax, eax, 0x30 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x30u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e761d: mov eax, dword ptr [eax + 0x75e998] */ r_eax = R32((u32)(r_eax+0x75e998u));
    /* 005e7623: mov esp, ebp */ r_esp = r_ebp;
    /* 005e7625: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e7626: ret 4 */ FN_RET(0x005e7610); r_esp += 8; return;
}

void f_005e7630(void) /* sub_5E7630 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e7630);
    /* 005e7630: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e7631: mov ebp, esp */ r_ebp = r_esp;
    /* 005e7633: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7634: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e7637: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e763a: imul eax, eax, 0x30 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x30u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e763d: mov eax, dword ptr [eax + 0x75e99c] */ r_eax = R32((u32)(r_eax+0x75e99cu));
    /* 005e7643: mov esp, ebp */ r_esp = r_ebp;
    /* 005e7645: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e7646: ret 4 */ FN_RET(0x005e7630); r_esp += 8; return;
}

void f_005e7650(void) /* sub_5E7650 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e7650);
    /* 005e7650: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e7651: mov ebp, esp */ r_ebp = r_esp;
    /* 005e7653: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e7656: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005e7659: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005e7660: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e7663: imul eax, eax, 0xb8 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xb8u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e7669: mov ecx, dword ptr [eax + 0x794994] */ r_ecx = R32((u32)(r_eax+0x794994u));
    /* 005e766f: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005e7672: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e7675: imul edx, edx, 0xb8 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xb8u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e767b: mov eax, dword ptr [edx + 0x794998] */ r_eax = R32((u32)(r_edx+0x794998u));
    /* 005e7681: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005e7684: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e7688: jge 0x5e76a0 */ if ((fS==fO)) goto L_005e76a0;
L_005e768a:; BB(0x005e768a);
    /* 005e768a: push 0x6d5c60 */ { u32 v = 0x6d5c60u; r_esp -= 4; W32(r_esp, v); }
    /* 005e768f: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005e7692: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7693: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5e7698u); f_00686d8e();
    /* 005e7698: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e769b: jmp 0x5e7816 */ goto L_005e7816;
L_005e76a0:; BB(0x005e76a0);
    /* 005e76a0: cmp dword ptr [ebp - 8], 0xe */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e76a4: je 0x5e76f6 */ if (fZ) goto L_005e76f6;
L_005e76a6:; BB(0x005e76a6);
    /* 005e76a6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e76a9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e76aa: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005e76af: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e76b1: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005e76b7: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 005e76bd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e76bfu); call_ind(t); }
    /* 005e76bf: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005e76c2: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e76c6: je 0x5e76da */ if (fZ) goto L_005e76da;
L_005e76c8:; BB(0x005e76c8);
    /* 005e76c8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e76cb: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e76cd: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e76d0: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005e76d3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e76d5u); call_ind(t); }
    /* 005e76d5: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005e76d8: jmp 0x5e76e1 */ goto L_005e76e1;
L_005e76da:; BB(0x005e76da);
    /* 005e76da: mov dword ptr [ebp - 0x18], 0x6d5c60 */ W32((u32)(r_ebp+0xffffffe8u), 0x6d5c60u);
L_005e76e1:; BB(0x005e76e1);
    /* 005e76e1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e76e4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e76e5: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005e76e8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e76e9: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5e76eeu); f_00686d8e();
    /* 005e76ee: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e76f1: jmp 0x5e7816 */ goto L_005e7816;
L_005e76f6:; BB(0x005e76f6);
    /* 005e76f6: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e76fa: je 0x5e7712 */ if (fZ) goto L_005e7712;
L_005e76fc:; BB(0x005e76fc);
    /* 005e76fc: push 0x6d5c58 */ { u32 v = 0x6d5c58u; r_esp -= 4; W32(r_esp, v); }
    /* 005e7701: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005e7704: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e7705: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5e770au); f_00686d8e();
    /* 005e770a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e770d: jmp 0x5e7816 */ goto L_005e7816;
L_005e7712:; BB(0x005e7712);
    /* 005e7712: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7715: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005e7718: cmp dword ptr [ebp - 0x1c], 0x1d */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x1du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005e771c: ja 0x5e77f9 */ if ((!fC&&!fZ)) goto L_005e77f9;
L_005e7722:; BB(0x005e7722);
    /* 005e7722: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e7725: jmp dword ptr [edx*4 + 0x5e781c] */ { u32 t = R32((u32)(r_edx*4+0x5e781cu)); switch (t) { case 0x5e772cu: goto L_005e772c; case 0x5e7738u: goto L_005e7738; case 0x5e7744u: goto L_005e7744; case 0x5e7750u: goto L_005e7750; case 0x5e775cu: goto L_005e775c; case 0x5e7768u: goto L_005e7768; case 0x5e7774u: goto L_005e7774; case 0x5e777du: goto L_005e777d; case 0x5e7786u: goto L_005e7786; case 0x5e778fu: goto L_005e778f; case 0x5e7798u: goto L_005e7798; case 0x5e77a1u: goto L_005e77a1; case 0x5e77aau: goto L_005e77aa; case 0x5e77b3u: goto L_005e77b3; case 0x5e77bcu: goto L_005e77bc; case 0x5e77c5u: goto L_005e77c5; case 0x5e77ceu: goto L_005e77ce; case 0x5e77d7u: goto L_005e77d7; case 0x5e77e0u: goto L_005e77e0; case 0x5e77e9u: goto L_005e77e9; case 0x5e77f2u: goto L_005e77f2; default: UNSUP(0x005e7725, "jump table entry is not a known target"); } }
L_005e772c:; BB(0x005e772c);
    /* 005e772c: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 005e7733: jmp 0x5e77f9 */ goto L_005e77f9;
L_005e7738:; BB(0x005e7738);
    /* 005e7738: mov dword ptr [ebp - 0xc], 2 */ W32((u32)(r_ebp+0xfffffff4u), 0x2u);
    /* 005e773f: jmp 0x5e77f9 */ goto L_005e77f9;
L_005e7744:; BB(0x005e7744);
    /* 005e7744: mov dword ptr [ebp - 0xc], 3 */ W32((u32)(r_ebp+0xfffffff4u), 0x3u);
    /* 005e774b: jmp 0x5e77f9 */ goto L_005e77f9;
L_005e7750:; BB(0x005e7750);
    /* 005e7750: mov dword ptr [ebp - 0xc], 4 */ W32((u32)(r_ebp+0xfffffff4u), 0x4u);
    /* 005e7757: jmp 0x5e77f9 */ goto L_005e77f9;
L_005e775c:; BB(0x005e775c);
    /* 005e775c: mov dword ptr [ebp - 0xc], 5 */ W32((u32)(r_ebp+0xfffffff4u), 0x5u);
    /* 005e7763: jmp 0x5e77f9 */ goto L_005e77f9;
L_005e7768:; BB(0x005e7768);
    /* 005e7768: mov dword ptr [ebp - 0xc], 6 */ W32((u32)(r_ebp+0xfffffff4u), 0x6u);
    /* 005e776f: jmp 0x5e77f9 */ goto L_005e77f9;
L_005e7774:; BB(0x005e7774);
    /* 005e7774: mov dword ptr [ebp - 0xc], 7 */ W32((u32)(r_ebp+0xfffffff4u), 0x7u);
    /* 005e777b: jmp 0x5e77f9 */ goto L_005e77f9;
L_005e777d:; BB(0x005e777d);
    /* 005e777d: mov dword ptr [ebp - 0xc], 8 */ W32((u32)(r_ebp+0xfffffff4u), 0x8u);
    /* 005e7784: jmp 0x5e77f9 */ goto L_005e77f9;
L_005e7786:; BB(0x005e7786);
    /* 005e7786: mov dword ptr [ebp - 0xc], 9 */ W32((u32)(r_ebp+0xfffffff4u), 0x9u);
    /* 005e778d: jmp 0x5e77f9 */ goto L_005e77f9;
L_005e778f:; BB(0x005e778f);
    /* 005e778f: mov dword ptr [ebp - 0xc], 0xa */ W32((u32)(r_ebp+0xfffffff4u), 0xau);
    /* 005e7796: jmp 0x5e77f9 */ goto L_005e77f9;
L_005e7798:; BB(0x005e7798);
    /* 005e7798: mov dword ptr [ebp - 0xc], 0xb */ W32((u32)(r_ebp+0xfffffff4u), 0xbu);
    /* 005e779f: jmp 0x5e77f9 */ goto L_005e77f9;
L_005e77a1:; BB(0x005e77a1);
    /* 005e77a1: mov dword ptr [ebp - 0xc], 0xc */ W32((u32)(r_ebp+0xfffffff4u), 0xcu);
    /* 005e77a8: jmp 0x5e77f9 */ goto L_005e77f9;
L_005e77aa:; BB(0x005e77aa);
    /* 005e77aa: mov dword ptr [ebp - 0xc], 0xd */ W32((u32)(r_ebp+0xfffffff4u), 0xdu);
    /* 005e77b1: jmp 0x5e77f9 */ goto L_005e77f9;
L_005e77b3:; BB(0x005e77b3);
    /* 005e77b3: mov dword ptr [ebp - 0xc], 0xe */ W32((u32)(r_ebp+0xfffffff4u), 0xeu);
    /* 005e77ba: jmp 0x5e77f9 */ goto L_005e77f9;
L_005e77bc:; BB(0x005e77bc);
    /* 005e77bc: mov dword ptr [ebp - 0xc], 0xf */ W32((u32)(r_ebp+0xfffffff4u), 0xfu);
    /* 005e77c3: jmp 0x5e77f9 */ goto L_005e77f9;
L_005e77c5:; BB(0x005e77c5);
    /* 005e77c5: mov dword ptr [ebp - 0xc], 0x10 */ W32((u32)(r_ebp+0xfffffff4u), 0x10u);
    /* 005e77cc: jmp 0x5e77f9 */ goto L_005e77f9;
L_005e77ce:; BB(0x005e77ce);
    /* 005e77ce: mov dword ptr [ebp - 0xc], 0x11 */ W32((u32)(r_ebp+0xfffffff4u), 0x11u);
    /* 005e77d5: jmp 0x5e77f9 */ goto L_005e77f9;
L_005e77d7:; BB(0x005e77d7);
    /* 005e77d7: mov dword ptr [ebp - 0xc], 0x12 */ W32((u32)(r_ebp+0xfffffff4u), 0x12u);
    /* 005e77de: jmp 0x5e77f9 */ goto L_005e77f9;
L_005e77e0:; BB(0x005e77e0);
    /* 005e77e0: mov dword ptr [ebp - 0xc], 0x13 */ W32((u32)(r_ebp+0xfffffff4u), 0x13u);
    /* 005e77e7: jmp 0x5e77f9 */ goto L_005e77f9;
L_005e77e9:; BB(0x005e77e9);
    /* 005e77e9: mov dword ptr [ebp - 0xc], 0x14 */ W32((u32)(r_ebp+0xfffffff4u), 0x14u);
    /* 005e77f0: jmp 0x5e77f9 */ goto L_005e77f9;
L_005e77f2:; BB(0x005e77f2);
    /* 005e77f2: mov dword ptr [ebp - 0xc], 0x15 */ W32((u32)(r_ebp+0xfffffff4u), 0x15u);
L_005e77f9:; BB(0x005e77f9);
    /* 005e77f9: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e77fc: mov ecx, dword ptr [eax*4 + 0x75ec18] */ r_ecx = R32((u32)(r_eax*4+0x75ec18u));
    /* 005e7803: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7804: push 0x6d5c4c */ { u32 v = 0x6d5c4cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e7809: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005e780c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e780d: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5e7813u); call_ind(t); }
    /* 005e7813: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005e7816:; BB(0x005e7816);
    /* 005e7816: mov esp, ebp */ r_esp = r_ebp;
    /* 005e7818: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e7819: ret 8 */ FN_RET(0x005e7650); r_esp += 12; return;
}

void f_005e78a0(void) /* sub_5E78A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e78a0);
    /* 005e78a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e78a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005e78a3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e78a6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005e78a9: push 0x73c */ { u32 v = 0x73cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e78ae: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e78b0: push 0x794930 */ { u32 v = 0x794930u; r_esp -= 4; W32(r_esp, v); }
    /* 005e78b5: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x5e78bau); f_00686fa2();
    /* 005e78ba: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e78bd: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e78c4: jmp 0x5e78cf */ goto L_005e78cf;
L_005e78c6:; BB(0x005e78c6);
    /* 005e78c6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e78c9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e78cc: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005e78cf:; BB(0x005e78cf);
    /* 005e78cf: cmp dword ptr [ebp - 4], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e78d3: jge 0x5e78e3 */ if ((fS==fO)) goto L_005e78e3;
L_005e78d5:; BB(0x005e78d5);
    /* 005e78d5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e78d8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e78d9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e78dc: call 0x5e7c20 */ r_esp -= 4; W32(r_esp, 0x5e78e1u); f_005e7c20();
    /* 005e78e1: jmp 0x5e78c6 */ goto L_005e78c6;
L_005e78e3:; BB(0x005e78e3);
    /* 005e78e3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e78e6: call 0x5e79e0 */ r_esp -= 4; W32(r_esp, 0x5e78ebu); f_005e79e0();
    /* 005e78eb: mov esp, ebp */ r_esp = r_ebp;
    /* 005e78ed: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e78ee: ret  */ FN_RET(0x005e78a0); r_esp += 4; return;
}

void f_005e78f0(void) /* sub_5E78F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e78f0);
    /* 005e78f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e78f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005e78f3: sub esp, 0x514 */ {  u32 a = r_esp; u32 b = 0x514u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e78f9: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005e78fe: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e7900: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005e7903: mov dword ptr [ebp - 0x514], ecx */ W32((u32)(r_ebp+0xfffffaecu), r_ecx);
    /* 005e7909: mov dword ptr [ebp - 0x40c], 0 */ W32((u32)(r_ebp+0xfffffbf4u), 0x0u);
    /* 005e7913: mov byte ptr [ebp - 0x408], 0 */ W8((u32)(r_ebp+0xfffffbf8u), 0x0u);
    /* 005e791a: push 0x3ff */ { u32 v = 0x3ffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e791f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e7921: lea eax, [ebp - 0x407] */ r_eax = (u32)(r_ebp+0xfffffbf9u);
    /* 005e7927: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e7928: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x5e792du); f_00686fa2();
    /* 005e792d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e7930: push 0x6d5d88 */ { u32 v = 0x6d5d88u; r_esp -= 4; W32(r_esp, v); }
    /* 005e7935: lea ecx, [ebp - 0x408] */ r_ecx = (u32)(r_ebp+0xfffffbf8u);
    /* 005e793b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e793c: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5e7941u); f_00686d8e();
    /* 005e7941: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e7944: lea edx, [ebp - 0x408] */ r_edx = (u32)(r_ebp+0xfffffbf8u);
    /* 005e794a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e794b: call 0x5ea5b0 */ r_esp -= 4; W32(r_esp, 0x5e7950u); f_005ea5b0();
    /* 005e7950: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e7953: push 0x6c2d28 */ { u32 v = 0x6c2d28u; r_esp -= 4; W32(r_esp, v); }
    /* 005e7958: lea eax, [ebp - 0x408] */ r_eax = (u32)(r_ebp+0xfffffbf8u);
    /* 005e795e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e795f: call 0x5ea9c0 */ r_esp -= 4; W32(r_esp, 0x5e7964u); f_005ea9c0();
    /* 005e7964: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e7967: mov dword ptr [ebp - 0x410], eax */ W32((u32)(r_ebp+0xfffffbf0u), r_eax);
    /* 005e796d: cmp dword ptr [ebp - 0x410], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffbf0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7974: jne 0x5e797a */ if (!fZ) goto L_005e797a;
L_005e7976:; BB(0x005e7976);
    /* 005e7976: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005e7978: jmp 0x5e79c6 */ goto L_005e79c6;
L_005e797a:; BB(0x005e797a);
    /* 005e797a: mov ecx, dword ptr [ebp - 0x410] */ r_ecx = R32((u32)(r_ebp+0xfffffbf0u));
    /* 005e7980: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7981: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e7983: push 0x73c */ { u32 v = 0x73cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e7988: push 0x794930 */ { u32 v = 0x794930u; r_esp -= 4; W32(r_esp, v); }
    /* 005e798d: call dword ptr [0x6b225c] */ { u32 t = R32((u32)(0x6b225cu)); r_esp -= 4; W32(r_esp, 0x5e7993u); call_ind(t); }
    /* 005e7993: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e7996: mov dword ptr [ebp - 0x40c], eax */ W32((u32)(r_ebp+0xfffffbf4u), r_eax);
    /* 005e799c: mov edx, dword ptr [ebp - 0x410] */ r_edx = R32((u32)(r_ebp+0xfffffbf0u));
    /* 005e79a2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e79a3: call dword ptr [0x6b2258] */ { u32 t = R32((u32)(0x6b2258u)); r_esp -= 4; W32(r_esp, 0x5e79a9u); call_ind(t); }
    /* 005e79a9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e79ac: cmp dword ptr [ebp - 0x40c], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffbf4u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e79b3: je 0x5e79b9 */ if (fZ) goto L_005e79b9;
L_005e79b5:; BB(0x005e79b5);
    /* 005e79b5: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005e79b7: jmp 0x5e79c6 */ goto L_005e79c6;
L_005e79b9:; BB(0x005e79b9);
    /* 005e79b9: mov ecx, dword ptr [ebp - 0x514] */ r_ecx = R32((u32)(r_ebp+0xfffffaecu));
    /* 005e79bf: call 0x5e7ac0 */ r_esp -= 4; W32(r_esp, 0x5e79c4u); f_005e7ac0();
    /* 005e79c4: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_005e79c6:; BB(0x005e79c6);
    /* 005e79c6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e79c9: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005e79cb: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x5e79d0u); f_00686d72();
    /* 005e79d0: mov esp, ebp */ r_esp = r_ebp;
    /* 005e79d2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e79d3: ret  */ FN_RET(0x005e78f0); r_esp += 4; return;
}

void f_005e7ac0(void) /* sub_5E7AC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e7ac0);
    /* 005e7ac0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e7ac1: mov ebp, esp */ r_ebp = r_esp;
    /* 005e7ac3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e7ac6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005e7ac9: mov byte ptr [ebp - 1], 0 */ W8((u32)(r_ebp+0xffffffffu), 0x0u);
    /* 005e7acd: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005e7ad4: jmp 0x5e7adf */ goto L_005e7adf;
L_005e7ad6:; BB(0x005e7ad6);
    /* 005e7ad6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e7ad9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e7adc: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005e7adf:; BB(0x005e7adf);
    /* 005e7adf: cmp dword ptr [ebp - 8], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e7ae3: jge 0x5e7c13 */ if ((fS==fO)) goto L_005e7c13;
L_005e7ae9:; BB(0x005e7ae9);
    /* 005e7ae9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e7aec: imul ecx, ecx, 0xb8 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xb8u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e7af2: movsx edx, byte ptr [ecx + 0x7949e8] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x7949e8u));
    /* 005e7af9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7afb: jne 0x5e7b37 */ if (!fZ) goto L_005e7b37;
L_005e7afd:; BB(0x005e7afd);
    /* 005e7afd: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e7b00: imul eax, eax, 0xb8 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xb8u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e7b06: cmp dword ptr [eax + 0x7949f0], -1 */ {  u32 a = R32((u32)(r_eax+0x7949f0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7b0d: jne 0x5e7b37 */ if (!fZ) goto L_005e7b37;
L_005e7b0f:; BB(0x005e7b0f);
    /* 005e7b0f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e7b12: imul ecx, ecx, 0xb8 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xb8u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e7b18: cmp dword ptr [ecx + 0x794980], -1 */ {  u32 a = R32((u32)(r_ecx+0x794980u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7b1f: jne 0x5e7b37 */ if (!fZ) goto L_005e7b37;
L_005e7b21:; BB(0x005e7b21);
    /* 005e7b21: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e7b24: imul edx, edx, 0xb8 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xb8u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e7b2a: cmp dword ptr [edx + 0x7949ec], -1 */ {  u32 a = R32((u32)(r_edx+0x7949ecu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7b31: je 0x5e7bd4 */ if (fZ) goto L_005e7bd4;
L_005e7b37:; BB(0x005e7b37);
    /* 005e7b37: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e7b3a: imul eax, eax, 0xb8 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xb8u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e7b40: movsx ecx, byte ptr [eax + 0x7949e8] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x7949e8u));
    /* 005e7b47: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7b49: jne 0x5e7b81 */ if (!fZ) goto L_005e7b81;
L_005e7b4b:; BB(0x005e7b4b);
    /* 005e7b4b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e7b4e: imul edx, edx, 0xb8 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xb8u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e7b54: cmp dword ptr [edx + 0x7949f0], 0 */ {  u32 a = R32((u32)(r_edx+0x7949f0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7b5b: jne 0x5e7b81 */ if (!fZ) goto L_005e7b81;
L_005e7b5d:; BB(0x005e7b5d);
    /* 005e7b5d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e7b60: imul eax, eax, 0xb8 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xb8u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e7b66: cmp dword ptr [eax + 0x794980], 0 */ {  u32 a = R32((u32)(r_eax+0x794980u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7b6d: jne 0x5e7b81 */ if (!fZ) goto L_005e7b81;
L_005e7b6f:; BB(0x005e7b6f);
    /* 005e7b6f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e7b72: imul ecx, ecx, 0xb8 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xb8u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e7b78: cmp dword ptr [ecx + 0x7949ec], 0 */ {  u32 a = R32((u32)(r_ecx+0x7949ecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7b7f: je 0x5e7bd4 */ if (fZ) goto L_005e7bd4;
L_005e7b81:; BB(0x005e7b81);
    /* 005e7b81: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e7b84: imul edx, edx, 0xb8 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xb8u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e7b8a: movsx eax, byte ptr [edx + 0x7949e8] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x7949e8u));
    /* 005e7b91: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7b93: jne 0x5e7bcb */ if (!fZ) goto L_005e7bcb;
L_005e7b95:; BB(0x005e7b95);
    /* 005e7b95: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e7b98: imul ecx, ecx, 0xb8 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xb8u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e7b9e: cmp dword ptr [ecx + 0x7949f0], 0 */ {  u32 a = R32((u32)(r_ecx+0x7949f0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e7ba5: jg 0x5e7bcb */ if ((!fZ&&fS==fO)) goto L_005e7bcb;
L_005e7ba7:; BB(0x005e7ba7);
    /* 005e7ba7: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e7baa: imul edx, edx, 0xb8 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xb8u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e7bb0: cmp dword ptr [edx + 0x794980], -1 */ {  u32 a = R32((u32)(r_edx+0x794980u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7bb7: jne 0x5e7bcb */ if (!fZ) goto L_005e7bcb;
L_005e7bb9:; BB(0x005e7bb9);
    /* 005e7bb9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e7bbc: imul eax, eax, 0xb8 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xb8u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e7bc2: cmp dword ptr [eax + 0x7949ec], -1 */ {  u32 a = R32((u32)(r_eax+0x7949ecu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7bc9: je 0x5e7bd4 */ if (fZ) goto L_005e7bd4;
L_005e7bcb:; BB(0x005e7bcb);
    /* 005e7bcb: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005e7bd2: jmp 0x5e7bdb */ goto L_005e7bdb;
L_005e7bd4:; BB(0x005e7bd4);
    /* 005e7bd4: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
L_005e7bdb:; BB(0x005e7bdb);
    /* 005e7bdb: mov cl, byte ptr [ebp - 0x10] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff0u))) & 0xffu);
    /* 005e7bde: mov byte ptr [ebp - 1], cl */ W8((u32)(r_ebp+0xffffffffu), (u8)r_ecx);
    /* 005e7be1: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e7be4: imul edx, edx, 0xb8 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xb8u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e7bea: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e7bed: add eax, 0x3e8 */ {  u32 a = r_eax; u32 b = 0x3e8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e7bf2: cmp dword ptr [edx + 0x79493c], eax */ {  u32 a = R32((u32)(r_edx+0x79493cu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7bf8: jne 0x5e7c02 */ if (!fZ) goto L_005e7c02;
L_005e7bfa:; BB(0x005e7bfa);
    /* 005e7bfa: movzx ecx, byte ptr [ebp - 1] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 005e7bfe: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7c00: je 0x5e7c0e */ if (fZ) goto L_005e7c0e;
L_005e7c02:; BB(0x005e7c02);
    /* 005e7c02: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e7c05: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7c06: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e7c09: call 0x5e7c20 */ r_esp -= 4; W32(r_esp, 0x5e7c0eu); f_005e7c20();
L_005e7c0e:; BB(0x005e7c0e);
    /* 005e7c0e: jmp 0x5e7ad6 */ goto L_005e7ad6;
L_005e7c13:; BB(0x005e7c13);
    /* 005e7c13: mov esp, ebp */ r_esp = r_ebp;
    /* 005e7c15: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e7c16: ret  */ FN_RET(0x005e7ac0); r_esp += 4; return;
}

void f_005e7c20(void) /* sub_5E7C20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e7c20);
    /* 005e7c20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e7c21: mov ebp, esp */ r_ebp = r_esp;
    /* 005e7c23: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e7c26: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005e7c29: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e7c2c: mov byte ptr [eax + 0x794930], 1 */ W8((u32)(r_eax+0x794930u), 0x1u);
    /* 005e7c33: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e7c36: add ecx, 0x3e8 */ {  u32 a = r_ecx; u32 b = 0x3e8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e7c3c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e7c3f: imul edx, edx, 0xb8 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xb8u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e7c45: mov dword ptr [edx + 0x79493c], ecx */ W32((u32)(r_edx+0x79493cu), r_ecx);
    /* 005e7c4b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e7c4d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e7c4f: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5e7c54u); f_0064c8a0();
    /* 005e7c54: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e7c57: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005e7c5a: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005e7c5d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e7c60: imul eax, eax, 0xb8 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xb8u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e7c66: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e7c69: mov dword ptr [eax + 0x794984], ecx */ W32((u32)(r_eax+0x794984u), r_ecx);
    /* 005e7c6f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7c72: mov dword ptr [eax + 0x794988], edx */ W32((u32)(r_eax+0x794988u), r_edx);
    /* 005e7c78: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e7c7b: imul eax, eax, 0xb8 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xb8u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e7c81: mov dword ptr [eax + 0x79498c], 0 */ W32((u32)(r_eax+0x79498cu), 0x0u);
    /* 005e7c8b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e7c8e: imul ecx, ecx, 0xb8 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xb8u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e7c94: mov dword ptr [ecx + 0x794980], 0 */ W32((u32)(r_ecx+0x794980u), 0x0u);
    /* 005e7c9e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e7ca1: imul edx, edx, 0x30 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x30u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e7ca4: mov eax, dword ptr [edx + 0x75e9b4] */ r_eax = R32((u32)(r_edx+0x75e9b4u));
    /* 005e7caa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e7cab: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e7cae: imul ecx, ecx, 0xb8 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xb8u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e7cb4: add ecx, 0x794940 */ {  u32 a = r_ecx; u32 b = 0x794940u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e7cba: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7cbb: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5e7cc0u); f_00686d8e();
    /* 005e7cc0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e7cc3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e7cc6: imul edx, edx, 0x30 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x30u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e7cc9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e7ccc: imul eax, eax, 0xb8 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xb8u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e7cd2: mov cl, byte ptr [edx + 0x75e9bc] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edx+0x75e9bcu))) & 0xffu);
    /* 005e7cd8: mov byte ptr [eax + 0x7949e8], cl */ W8((u32)(r_eax+0x7949e8u), (u8)r_ecx);
    /* 005e7cde: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e7ce1: imul edx, edx, 0x30 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x30u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e7ce4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e7ce7: imul eax, eax, 0xb8 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xb8u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e7ced: mov ecx, dword ptr [edx + 0x75e9b8] */ r_ecx = R32((u32)(r_edx+0x75e9b8u));
    /* 005e7cf3: mov dword ptr [eax + 0x794980], ecx */ W32((u32)(r_eax+0x794980u), r_ecx);
    /* 005e7cf9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e7cfb: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e7cfe: imul edx, edx, 0x30 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x30u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e7d01: mov eax, dword ptr [edx + 0x75e9a0] */ r_eax = R32((u32)(r_edx+0x75e9a0u));
    /* 005e7d07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e7d08: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5e7d0du); f_0064c8a0();
    /* 005e7d0d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e7d10: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005e7d13: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005e7d16: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e7d19: imul ecx, ecx, 0xb8 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xb8u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e7d1f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e7d22: mov dword ptr [ecx + 0x794984], edx */ W32((u32)(r_ecx+0x794984u), r_edx);
    /* 005e7d28: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e7d2b: mov dword ptr [ecx + 0x794988], eax */ W32((u32)(r_ecx+0x794988u), r_eax);
    /* 005e7d31: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e7d34: imul ecx, ecx, 0x30 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x30u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e7d37: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e7d3a: imul edx, edx, 0xb8 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xb8u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e7d40: mov eax, dword ptr [ecx + 0x75e9a4] */ r_eax = R32((u32)(r_ecx+0x75e9a4u));
    /* 005e7d46: mov dword ptr [edx + 0x79498c], eax */ W32((u32)(r_edx+0x79498cu), r_eax);
    /* 005e7d4c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e7d4f: imul ecx, ecx, 0x30 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x30u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e7d52: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e7d55: imul edx, edx, 0xb8 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xb8u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e7d5b: mov al, byte ptr [ecx + 0x75e9a8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+0x75e9a8u))) & 0xffu);
    /* 005e7d61: mov byte ptr [edx + 0x794990], al */ W8((u32)(r_edx+0x794990u), (u8)r_eax);
    /* 005e7d67: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e7d6a: imul ecx, ecx, 0x30 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x30u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e7d6d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e7d70: imul edx, edx, 0xb8 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xb8u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e7d76: mov eax, dword ptr [ecx + 0x75e9ac] */ r_eax = R32((u32)(r_ecx+0x75e9acu));
    /* 005e7d7c: mov dword ptr [edx + 0x794994], eax */ W32((u32)(r_edx+0x794994u), r_eax);
    /* 005e7d82: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e7d85: imul ecx, ecx, 0x30 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x30u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e7d88: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e7d8b: imul edx, edx, 0xb8 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xb8u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e7d91: mov eax, dword ptr [ecx + 0x75e9b0] */ r_eax = R32((u32)(r_ecx+0x75e9b0u));
    /* 005e7d97: mov dword ptr [edx + 0x794998], eax */ W32((u32)(r_edx+0x794998u), r_eax);
    /* 005e7d9d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e7da0: imul ecx, ecx, 0x30 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x30u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e7da3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e7da6: imul edx, edx, 0xb8 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xb8u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e7dac: mov eax, dword ptr [ecx + 0x75e9c0] */ r_eax = R32((u32)(r_ecx+0x75e9c0u));
    /* 005e7db2: mov dword ptr [edx + 0x7949ec], eax */ W32((u32)(r_edx+0x7949ecu), r_eax);
    /* 005e7db8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e7dbb: imul ecx, ecx, 0x30 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x30u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e7dbe: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e7dc1: imul edx, edx, 0xb8 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xb8u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e7dc7: mov eax, dword ptr [ecx + 0x75e9c4] */ r_eax = R32((u32)(r_ecx+0x75e9c4u));
    /* 005e7dcd: mov dword ptr [edx + 0x7949f0], eax */ W32((u32)(r_edx+0x7949f0u), r_eax);
    /* 005e7dd3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e7dd6: imul ecx, ecx, 0xb8 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xb8u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e7ddc: add ecx, 0x794974 */ {  u32 a = r_ecx; u32 b = 0x794974u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e7de2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7de3: call dword ptr [0x6b22a4] */ { u32 t = R32((u32)(0x6b22a4u)); r_esp -= 4; W32(r_esp, 0x5e7de9u); call_ind(t); }
    /* 005e7de9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e7dec: mov esp, ebp */ r_esp = r_ebp;
    /* 005e7dee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e7def: ret 4 */ FN_RET(0x005e7c20); r_esp += 8; return;
}

void f_005e7e00(void) /* sub_5E7E00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e7e00);
    /* 005e7e00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e7e01: mov ebp, esp */ r_ebp = r_esp;
    /* 005e7e03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7e04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e7e07: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005e7e0a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e7e0b: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005e7e0e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7e0f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7e12: call 0x5e7f90 */ r_esp -= 4; W32(r_esp, 0x5e7e17u); f_005e7f90();
    /* 005e7e17: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005e7e1a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7e1c: jne 0x5e7e20 */ if (!fZ) goto L_005e7e20;
L_005e7e1e:; BB(0x005e7e1e);
    /* 005e7e1e: jmp 0x5e7e34 */ goto L_005e7e34;
L_005e7e20:; BB(0x005e7e20);
    /* 005e7e20: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005e7e23: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e7e24: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005e7e27: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7e28: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e7e2b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7e2c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7e2f: call 0x5e8020 */ r_esp -= 4; W32(r_esp, 0x5e7e34u); f_005e8020();
L_005e7e34:; BB(0x005e7e34);
    /* 005e7e34: mov esp, ebp */ r_esp = r_ebp;
    /* 005e7e36: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e7e37: ret 0xc */ FN_RET(0x005e7e00); r_esp += 16; return;
}

void f_005e7e40(void) /* sub_5E7E40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e7e40);
    /* 005e7e40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e7e41: mov ebp, esp */ r_ebp = r_esp;
    /* 005e7e43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7e44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e7e47: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005e7e4a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e7e4b: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005e7e4e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7e4f: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005e7e52: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7e53: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7e56: call 0x5e7fc0 */ r_esp -= 4; W32(r_esp, 0x5e7e5bu); f_005e7fc0();
    /* 005e7e5b: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005e7e5e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7e60: jne 0x5e7e64 */ if (!fZ) goto L_005e7e64;
L_005e7e62:; BB(0x005e7e62);
    /* 005e7e62: jmp 0x5e7e7c */ goto L_005e7e7c;
L_005e7e64:; BB(0x005e7e64);
    /* 005e7e64: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 005e7e67: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7e68: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005e7e6b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7e6c: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005e7e6f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e7e70: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e7e73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7e74: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7e77: call 0x5e8120 */ r_esp -= 4; W32(r_esp, 0x5e7e7cu); f_005e8120();
L_005e7e7c:; BB(0x005e7e7c);
    /* 005e7e7c: mov esp, ebp */ r_esp = r_ebp;
    /* 005e7e7e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e7e7f: ret 0x10 */ FN_RET(0x005e7e40); r_esp += 20; return;
}

void f_005e7f90(void) /* sub_5E7F90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e7f90);
    /* 005e7f90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e7f91: mov ebp, esp */ r_ebp = r_esp;
    /* 005e7f93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7f94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e7f97: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e7f9a: imul eax, eax, 0xb8 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xb8u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e7fa0: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005e7fa3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005e7fa5: cmp ecx, dword ptr [eax + 0x79498c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x79498cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e7fab: setg dl */ r_edx = (r_edx & 0xffffff00u) | ((((!fZ&&fS==fO)) ? 1 : 0) & 0xffu);
    /* 005e7fae: mov al, dl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_edx) & 0xffu);
    /* 005e7fb0: mov esp, ebp */ r_esp = r_ebp;
    /* 005e7fb2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e7fb3: ret 8 */ FN_RET(0x005e7f90); r_esp += 12; return;
}

void f_005e7fc0(void) /* sub_5E7FC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e7fc0);
    /* 005e7fc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e7fc1: mov ebp, esp */ r_ebp = r_esp;
    /* 005e7fc3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7fc4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e7fc7: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7fcb: jne 0x5e7fee */ if (!fZ) goto L_005e7fee;
L_005e7fcd:; BB(0x005e7fcd);
    /* 005e7fcd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e7fd0: imul eax, eax, 0xb8 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xb8u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e7fd6: mov ecx, dword ptr [eax + 0x794988] */ r_ecx = R32((u32)(r_eax+0x794988u));
    /* 005e7fdc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7fdd: mov edx, dword ptr [eax + 0x794984] */ r_edx = R32((u32)(r_eax+0x794984u));
    /* 005e7fe3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7fe4: lea ecx, [ebp + 0xc] */ r_ecx = (u32)(r_ebp+0xcu);
    /* 005e7fe7: call 0x64c7a0 */ r_esp -= 4; W32(r_esp, 0x5e7fecu); f_0064c7a0();
    /* 005e7fec: jmp 0x5e800d */ goto L_005e800d;
L_005e7fee:; BB(0x005e7fee);
    /* 005e7fee: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e7ff1: imul eax, eax, 0xb8 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xb8u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e7ff7: mov ecx, dword ptr [eax + 0x794988] */ r_ecx = R32((u32)(r_eax+0x794988u));
    /* 005e7ffd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7ffe: mov edx, dword ptr [eax + 0x794984] */ r_edx = R32((u32)(r_eax+0x794984u));
    /* 005e8004: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e8005: lea ecx, [ebp + 0xc] */ r_ecx = (u32)(r_ebp+0xcu);
    /* 005e8008: call 0x64c6e0 */ r_esp -= 4; W32(r_esp, 0x5e800du); f_0064c6e0();
L_005e800d:; BB(0x005e800d);
    /* 005e800d: mov esp, ebp */ r_esp = r_ebp;
    /* 005e800f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e8010: ret 0xc */ FN_RET(0x005e7fc0); r_esp += 16; return;
}

