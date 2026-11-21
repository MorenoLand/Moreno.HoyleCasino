#include "protos.h"

void f_005930e0(void) /* FourCardPokerDealToScript::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005930e0);
    /* 005930e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005930e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005930e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005930e5: push 0x6a71eb */ { u32 v = 0x6a71ebu; r_esp -= 4; W32(r_esp, v); }
    /* 005930ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005930f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005930f1: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005930f4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005930f9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005930fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005930fc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005930ff: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00593105: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 00593108: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0059310b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059310c: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0059310f: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x593114u); f_005fc0d0();
    /* 00593114: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0059311b: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0059311e: mov dword ptr [ecx], 0x6ce388 */ W32((u32)(r_ecx), 0x6ce388u);
    /* 00593124: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00593127: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0059312a: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0059312d: mov dword ptr [ebp - 0x34], 0x310eb0 */ W32((u32)(r_ebp+0xffffffccu), 0x310eb0u);
    /* 00593134: mov dword ptr [ebp - 0x30], 0x310eae */ W32((u32)(r_ebp+0xffffffd0u), 0x310eaeu);
    /* 0059313b: mov dword ptr [ebp - 0x2c], 0x310eb2 */ W32((u32)(r_ebp+0xffffffd4u), 0x310eb2u);
    /* 00593142: mov dword ptr [ebp - 0x28], 0x310eac */ W32((u32)(r_ebp+0xffffffd8u), 0x310eacu);
    /* 00593149: mov dword ptr [ebp - 0x24], 0x310eb4 */ W32((u32)(r_ebp+0xffffffdcu), 0x310eb4u);
    /* 00593150: mov dword ptr [ebp - 0x20], 0x310eaf */ W32((u32)(r_ebp+0xffffffe0u), 0x310eafu);
    /* 00593157: mov dword ptr [ebp - 0x1c], 0x310ead */ W32((u32)(r_ebp+0xffffffe4u), 0x310eadu);
    /* 0059315e: mov dword ptr [ebp - 0x18], 0x310eb1 */ W32((u32)(r_ebp+0xffffffe8u), 0x310eb1u);
    /* 00593165: mov dword ptr [ebp - 0x14], 0x310eab */ W32((u32)(r_ebp+0xffffffecu), 0x310eabu);
    /* 0059316c: mov dword ptr [ebp - 0x10], 0x310eb3 */ W32((u32)(r_ebp+0xfffffff0u), 0x310eb3u);
    /* 00593173: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00593176: mov edx, dword ptr [ebp + ecx*4 - 0x34] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffccu));
    /* 0059317a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059317b: mov eax, dword ptr [0x79359c] */ r_eax = R32((u32)(0x79359cu));
    /* 00593180: mov ecx, dword ptr [eax + 0x98] */ r_ecx = R32((u32)(r_eax+0x98u));
    /* 00593186: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x59318bu); f_005eaf00();
    /* 0059318b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0059318e: mov edx, dword ptr [ebp + ecx*4 - 0x20] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffe0u));
    /* 00593192: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00593193: mov eax, dword ptr [0x79359c] */ r_eax = R32((u32)(0x79359cu));
    /* 00593198: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 0059319e: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x5931a3u); f_005eaf00();
    /* 005931a3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005931a5: mov ecx, dword ptr [0x79359c] */ r_ecx = R32((u32)(0x79359cu));
    /* 005931ab: mov edx, dword ptr [ecx + 0x98] */ r_edx = R32((u32)(r_ecx+0x98u));
    /* 005931b1: mov eax, dword ptr [0x79359c] */ r_eax = R32((u32)(0x79359cu));
    /* 005931b6: mov ecx, dword ptr [eax + 0x98] */ r_ecx = R32((u32)(r_eax+0x98u));
    /* 005931bc: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005931be: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005931c4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5931c6u); call_ind(t); }
    /* 005931c6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005931c8: mov ecx, dword ptr [0x79359c] */ r_ecx = R32((u32)(0x79359cu));
    /* 005931ce: mov edx, dword ptr [ecx + 0x94] */ r_edx = R32((u32)(r_ecx+0x94u));
    /* 005931d4: mov eax, dword ptr [0x79359c] */ r_eax = R32((u32)(0x79359cu));
    /* 005931d9: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 005931df: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005931e1: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005931e7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5931e9u); call_ind(t); }
    /* 005931e9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005931f0: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005931f3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005931f6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005931fd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005931fe: mov esp, ebp */ r_esp = r_ebp;
    /* 00593200: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00593201: ret 8 */ FN_RET(0x005930e0); r_esp += 12; return;
}

void f_00593210(void) /* FourCardPokerDealToScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00593210);
    /* 00593210: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00593211: mov ebp, esp */ r_ebp = r_esp;
    /* 00593213: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00593216: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0059321b: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059321d: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00593220: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00593223: mov word ptr [ebp - 0x1c], 0x24 */ W16((u32)(r_ebp+0xffffffe4u), 0x24u);
    /* 00593229: mov word ptr [ebp - 0x1a], 0x15 */ W16((u32)(r_ebp+0xffffffe6u), 0x15u);
    /* 0059322f: mov word ptr [ebp - 0x18], 0x1c */ W16((u32)(r_ebp+0xffffffe8u), 0x1cu);
    /* 00593235: mov word ptr [ebp - 0x16], 0x15 */ W16((u32)(r_ebp+0xffffffeau), 0x15u);
    /* 0059323b: mov word ptr [ebp - 0x14], 0x13 */ W16((u32)(r_ebp+0xffffffecu), 0x13u);
    /* 00593241: mov word ptr [ebp - 4], 3 */ W16((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00593247: mov eax, dword ptr [0x79359c] */ r_eax = R32((u32)(0x79359cu));
    /* 0059324c: mov ecx, dword ptr [eax + 0x98] */ r_ecx = R32((u32)(r_eax+0x98u));
    /* 00593252: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00593255: mov edx, dword ptr [0x79359c] */ r_edx = R32((u32)(0x79359cu));
    /* 0059325b: mov eax, dword ptr [edx + 0x94] */ r_eax = R32((u32)(r_edx+0x94u));
    /* 00593261: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00593264: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00593267: call 0x5fc360 */ r_esp -= 4; W32(r_esp, 0x59326cu); f_005fc360();
    /* 0059326c: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0059326f: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00593273: je 0x59328e */ if (fZ) goto L_0059328e;
L_00593275:; BB(0x00593275);
    /* 00593275: cmp dword ptr [ebp - 0x28], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00593279: je 0x593317 */ if (fZ) goto L_00593317;
L_0059327f:; BB(0x0059327f);
    /* 0059327f: cmp dword ptr [ebp - 0x28], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00593283: je 0x5934eb */ if (fZ) goto L_005934eb;
L_00593289:; BB(0x00593289);
    /* 00593289: jmp 0x593516 */ goto L_00593516;
L_0059328e:; BB(0x0059328e);
    /* 0059328e: mov word ptr [0x793594], 0 */ W16((u32)(0x793594u), 0x0u);
    /* 00593297: mov word ptr [0x793590], 0 */ W16((u32)(0x793590u), 0x0u);
    /* 005932a0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005932a3: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x5932a8u); f_005eb240();
    /* 005932a8: mov word ptr [0x79358c], ax */ W16((u32)(0x79358cu), (u16)r_eax);
    /* 005932ae: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005932b1: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x5932b6u); f_005eb240();
    /* 005932b6: mov word ptr [0x793588], ax */ W16((u32)(0x793588u), (u16)r_eax);
    /* 005932bc: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 005932be: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005932c1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005932c3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005932c6: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 005932c9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5932cbu); call_ind(t); }
    /* 005932cb: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 005932cd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005932d0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005932d2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005932d5: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 005932d8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5932dau); call_ind(t); }
    /* 005932da: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005932dc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005932df: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005932e1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005932e4: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005932ea: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5932ecu); call_ind(t); }
    /* 005932ec: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005932ee: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005932f1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005932f3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005932f6: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005932fc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5932feu); call_ind(t); }
    /* 005932fe: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00593302: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00593303: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00593305: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00593308: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0059330a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059330d: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00593310: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x593312u); call_ind(t); }
    /* 00593312: jmp 0x593516 */ goto L_00593516;
L_00593317:; BB(0x00593317);
    /* 00593317: mov ax, word ptr [0x793594] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x793594u))) & 0xffffu);
    /* 0059331d: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00593321: mov word ptr [0x793594], ax */ W16((u32)(0x793594u), (u16)r_eax);
    /* 00593327: movsx ecx, word ptr [0x793594] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x793594u));
    /* 0059332e: movsx edx, word ptr [0x79358c] */ r_edx = (u32)(i32)(i16)R16((u32)(0x79358cu));
    /* 00593335: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00593337: jg 0x593351 */ if ((!fZ&&fS==fO)) goto L_00593351;
L_00593339:; BB(0x00593339);
    /* 00593339: movsx eax, word ptr [0x793594] */ r_eax = (u32)(i32)(i16)R16((u32)(0x793594u));
    /* 00593340: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00593341: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00593344: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00593346: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00593349: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0059334f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x593351u); call_ind(t); }
L_00593351:; BB(0x00593351);
    /* 00593351: movsx ecx, word ptr [0x793594] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x793594u));
    /* 00593358: movsx edx, word ptr [0x793588] */ r_edx = (u32)(i32)(i16)R16((u32)(0x793588u));
    /* 0059335f: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00593361: jg 0x59337b */ if ((!fZ&&fS==fO)) goto L_0059337b;
L_00593363:; BB(0x00593363);
    /* 00593363: movsx eax, word ptr [0x793594] */ r_eax = (u32)(i32)(i16)R16((u32)(0x793594u));
    /* 0059336a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059336b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0059336e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00593370: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00593373: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00593379: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59337bu); call_ind(t); }
L_0059337b:; BB(0x0059337b);
    /* 0059337b: movsx ecx, word ptr [0x793594] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x793594u));
    /* 00593382: cmp ecx, 9 */ {  u32 a = r_ecx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00593385: jne 0x5933ce */ if (!fZ) goto L_005933ce;
L_00593387:; BB(0x00593387);
    /* 00593387: mov edx, dword ptr [0x79359c] */ r_edx = R32((u32)(0x79359cu));
    /* 0059338d: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 00593393: mov ecx, dword ptr [0x79359c] */ r_ecx = R32((u32)(0x79359cu));
    /* 00593399: mov ecx, dword ptr [ecx + 0x9c] */ r_ecx = R32((u32)(r_ecx+0x9cu));
    /* 0059339f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005933a1: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005933a4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5933a6u); call_ind(t); }
    /* 005933a6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005933a8: mov ecx, dword ptr [0x79359c] */ r_ecx = R32((u32)(0x79359cu));
    /* 005933ae: mov edx, dword ptr [ecx + 0x9c] */ r_edx = R32((u32)(r_ecx+0x9cu));
    /* 005933b4: mov eax, dword ptr [0x79359c] */ r_eax = R32((u32)(0x79359cu));
    /* 005933b9: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 005933bf: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005933c1: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005933c7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5933c9u); call_ind(t); }
    /* 005933c9: jmp 0x593493 */ goto L_00593493;
L_005933ce:; BB(0x005933ce);
    /* 005933ce: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005933d1: cmp dword ptr [ecx + 0x20], 0 */ {  u32 a = R32((u32)(r_ecx+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005933d5: je 0x5933e0 */ if (fZ) goto L_005933e0;
L_005933d7:; BB(0x005933d7);
    /* 005933d7: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005933da: cmp dword ptr [edx + 0x20], 2 */ {  u32 a = R32((u32)(r_edx+0x20u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005933de: jne 0x59340f */ if (!fZ) goto L_0059340f;
L_005933e0:; BB(0x005933e0);
    /* 005933e0: movsx eax, word ptr [0x793594] */ r_eax = (u32)(i32)(i16)R16((u32)(0x793594u));
    /* 005933e7: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005933ea: jne 0x59340f */ if (!fZ) goto L_0059340f;
L_005933ec:; BB(0x005933ec);
    /* 005933ec: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 005933ee: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005933f1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005933f3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005933f6: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 005933f9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5933fbu); call_ind(t); }
    /* 005933fb: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 005933fd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00593400: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00593402: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00593405: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00593408: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59340au); call_ind(t); }
    /* 0059340a: jmp 0x593493 */ goto L_00593493;
L_0059340f:; BB(0x0059340f);
    /* 0059340f: movsx ecx, word ptr [0x793594] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x793594u));
    /* 00593416: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00593419: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 0059341c: movsx edx, word ptr [ebp + eax*2 - 0x1c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+r_eax*2+0xffffffe4u));
    /* 00593421: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00593423: jle 0x593493 */ if ((fZ||fS!=fO)) goto L_00593493;
L_00593425:; BB(0x00593425);
    /* 00593425: movsx eax, word ptr [0x793590] */ r_eax = (u32)(i32)(i16)R16((u32)(0x793590u));
    /* 0059342c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059342e: jne 0x593493 */ if (!fZ) goto L_00593493;
L_00593430:; BB(0x00593430);
    /* 00593430: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00593433: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00593435: cmp dword ptr [ecx + 0x20], 4 */ {  u32 a = R32((u32)(r_ecx+0x20u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00593439: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0059343c: add edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0059343f: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
L_00593442:; BB(0x00593442);
    /* 00593442: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00593445: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fS = ((r >> 31) & 1); }
    /* 00593448: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0059344b: js 0x593482 */ if (fS) goto L_00593482;
L_0059344d:; BB(0x0059344d);
    /* 0059344d: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 00593453: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00593456: call 0x6436c0 */ r_esp -= 4; W32(r_esp, 0x59345bu); f_006436c0();
    /* 0059345b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059345c: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059345f: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00593462: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00593463: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 00593469: call 0x597c00 */ r_esp -= 4; W32(r_esp, 0x59346eu); f_00597c00();
    /* 0059346e: mov cx, word ptr [0x793590] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x793590u))) & 0xffffu);
    /* 00593475: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00593479: mov word ptr [0x793590], cx */ W16((u32)(0x793590u), (u16)r_ecx);
    /* 00593480: jmp 0x593442 */ goto L_00593442;
L_00593482:; BB(0x00593482);
    /* 00593482: mov ecx, dword ptr [0x79359c] */ r_ecx = R32((u32)(0x79359cu));
    /* 00593488: call 0x591a70 */ r_esp -= 4; W32(r_esp, 0x59348du); f_00591a70();
    /* 0059348d: mov word ptr [ebp - 4], 2 */ W16((u32)(r_ebp+0xfffffffcu), 0x2u);
L_00593493:; BB(0x00593493);
    /* 00593493: movsx edx, word ptr [0x793594] */ r_edx = (u32)(i32)(i16)R16((u32)(0x793594u));
    /* 0059349a: movsx eax, word ptr [0x79358c] */ r_eax = (u32)(i32)(i16)R16((u32)(0x79358cu));
    /* 005934a1: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005934a3: jl 0x5934b7 */ if ((fS!=fO)) goto L_005934b7;
L_005934a5:; BB(0x005934a5);
    /* 005934a5: movsx ecx, word ptr [0x793594] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x793594u));
    /* 005934ac: movsx edx, word ptr [0x793588] */ r_edx = (u32)(i32)(i16)R16((u32)(0x793588u));
    /* 005934b3: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005934b5: jge 0x5934c8 */ if ((fS==fO)) goto L_005934c8;
L_005934b7:; BB(0x005934b7);
    /* 005934b7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005934b9: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005934bc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005934be: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005934c1: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005934c4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5934c6u); call_ind(t); }
    /* 005934c6: jmp 0x5934d7 */ goto L_005934d7;
L_005934c8:; BB(0x005934c8);
    /* 005934c8: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005934ca: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005934cd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005934cf: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005934d2: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005934d5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5934d7u); call_ind(t); }
L_005934d7:; BB(0x005934d7);
    /* 005934d7: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005934db: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005934dc: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005934df: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005934e1: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005934e4: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 005934e7: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5934e9u); call_ind(t); }
    /* 005934e9: jmp 0x593516 */ goto L_00593516;
L_005934eb:; BB(0x005934eb);
    /* 005934eb: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005934ee: cmp dword ptr [eax + 0x10], 0 */ {  u32 a = R32((u32)(r_eax+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005934f2: je 0x593516 */ if (fZ) goto L_00593516;
L_005934f4:; BB(0x005934f4);
    /* 005934f4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005934f6: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005934f9: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005934fc: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005934ff: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 00593502: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00593504: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00593507: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x593509u); call_ind(t); }
    /* 00593509: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059350b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059350e: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 00593511: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x593516u); f_005fc420();
L_00593516:; BB(0x00593516);
    /* 00593516: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00593519: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0059351b: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x593520u); f_00686d72();
    /* 00593520: mov esp, ebp */ r_esp = r_ebp;
    /* 00593522: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00593523: ret  */ FN_RET(0x00593210); r_esp += 4; return;
}

