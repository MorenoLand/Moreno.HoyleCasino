#include "protos.h"

void f_00467fe0(void) /* PokerDialog::func_00467fe0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00467fe0);
    /* 00467fe0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00467fe1: mov ebp, esp */ r_ebp = r_esp;
    /* 00467fe3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00467fe5: push 0x69f69c */ { u32 v = 0x69f69cu; r_esp -= 4; W32(r_esp, v); }
    /* 00467fea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00467ff0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00467ff1: sub esp, 0x334 */ {  u32 a = r_esp; u32 b = 0x334u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00467ff7: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00467ffc: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00467ffe: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00468001: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00468002: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00468003: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00468006: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0046800c: mov dword ptr [ebp - 0x2ec], ecx */ W32((u32)(r_ebp+0xfffffd14u), r_ecx);
    /* 00468012: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00468018: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046801b: call 0x4f67d0 */ r_esp -= 4; W32(r_esp, 0x468020u); f_004f67d0();
    /* 00468020: mov esi, eax */ r_esi = r_eax;
    /* 00468022: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00468028: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x46802du); f_0047bc20();
    /* 0046802d: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00468030: mov dword ptr [ebp - 0x1fc], esi */ W32((u32)(r_ebp+0xfffffe04u), r_esi);
    /* 00468036: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046803c: call 0x47bd60 */ r_esp -= 4; W32(r_esp, 0x468041u); f_0047bd60();
    /* 00468041: mov esi, eax */ r_esi = r_eax;
    /* 00468043: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00468049: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x46804eu); f_0047bc20();
    /* 0046804e: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00468051: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00468054: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046805a: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x46805fu); f_0047e3b0();
    /* 0046805f: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00468062: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00468065: call 0x4c6a70 */ r_esp -= 4; W32(r_esp, 0x46806au); f_004c6a70();
    /* 0046806a: mov dword ptr [ebp - 0x1f8], eax */ W32((u32)(r_ebp+0xfffffe08u), r_eax);
    /* 00468070: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00468072: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00468074: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 00468076: push 0x6bb5b0 */ { u32 v = 0x6bb5b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046807b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x468080u); f_00630f40();
    /* 00468080: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00468083: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00468084: mov ecx, dword ptr [ebp - 0x2ec] */ r_ecx = R32((u32)(r_ebp+0xfffffd14u));
    /* 0046808a: call 0x5f73e0 */ r_esp -= 4; W32(r_esp, 0x46808fu); f_005f73e0();
    /* 0046808f: mov eax, dword ptr [ebp - 0x1f8] */ r_eax = R32((u32)(r_ebp+0xfffffe08u));
    /* 00468095: cmp eax, dword ptr [ebp - 0x1fc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffe04u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046809b: jge 0x4680a9 */ if ((fS==fO)) goto L_004680a9;
L_0046809d:; BB(0x0046809d);
    /* 0046809d: mov ecx, dword ptr [ebp - 0x1f8] */ r_ecx = R32((u32)(r_ebp+0xfffffe08u));
    /* 004680a3: mov dword ptr [ebp - 0x1fc], ecx */ W32((u32)(r_ebp+0xfffffe04u), r_ecx);
L_004680a9:; BB(0x004680a9);
    /* 004680a9: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004680af: mov eax, dword ptr [edx + 0xe4] */ r_eax = R32((u32)(r_edx+0xe4u));
    /* 004680b5: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004680bb: mov ecx, dword ptr [ecx + 0xe4] */ r_ecx = R32((u32)(r_ecx+0xe4u));
    /* 004680c1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004680c3: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 004680c9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4680cbu); call_ind(t); }
    /* 004680cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004680cc: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004680ce: mov ecx, dword ptr [ebp - 0x2ec] */ r_ecx = R32((u32)(r_ebp+0xfffffd14u));
    /* 004680d4: call 0x5fb5a0 */ r_esp -= 4; W32(r_esp, 0x4680d9u); f_005fb5a0();
    /* 004680d9: push 0x71b110 */ { u32 v = 0x71b110u; r_esp -= 4; W32(r_esp, v); }
    /* 004680de: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 004680e0: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 004680e6: call 0x57ab80 */ r_esp -= 4; W32(r_esp, 0x4680ebu); f_0057ab80();
    /* 004680eb: cmp dword ptr [ebp - 0x1fc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffe04u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004680f2: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 004680f5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004680f6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004680f8: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004680fe: call 0x47aab0 */ r_esp -= 4; W32(r_esp, 0x468103u); f_0047aab0();
    /* 00468103: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00468105: mov ecx, dword ptr [ebp - 0x2ec] */ r_ecx = R32((u32)(r_ebp+0xfffffd14u));
    /* 0046810b: call 0x519a40 */ r_esp -= 4; W32(r_esp, 0x468110u); f_00519a40();
    /* 00468110: push 0x6bb06c */ { u32 v = 0x6bb06cu; r_esp -= 4; W32(r_esp, v); }
    /* 00468115: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x46811au); f_00630f40();
    /* 0046811a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046811d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046811e: mov edx, dword ptr [ebp - 0x2ec] */ r_edx = R32((u32)(r_ebp+0xfffffd14u));
    /* 00468124: mov eax, dword ptr [edx + 0x1e0] */ r_eax = R32((u32)(r_edx+0x1e0u));
    /* 0046812a: mov ecx, dword ptr [ebp - 0x2ec] */ r_ecx = R32((u32)(r_ebp+0xfffffd14u));
    /* 00468130: mov ecx, dword ptr [ecx + 0x1e0] */ r_ecx = R32((u32)(r_ecx+0x1e0u));
    /* 00468136: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00468138: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 0046813e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x468140u); call_ind(t); }
    /* 00468140: mov ecx, dword ptr [ebp - 0x2ec] */ r_ecx = R32((u32)(r_ebp+0xfffffd14u));
    /* 00468146: call 0x467f50 */ r_esp -= 4; W32(r_esp, 0x46814bu); f_00467f50();
    /* 0046814b: mov ecx, dword ptr [ebp - 0x2ec] */ r_ecx = R32((u32)(r_ebp+0xfffffd14u));
    /* 00468151: mov edx, dword ptr [ecx + 0x1e8] */ r_edx = R32((u32)(r_ecx+0x1e8u));
    /* 00468157: mov eax, dword ptr [ebp - 0x2ec] */ r_eax = R32((u32)(r_ebp+0xfffffd14u));
    /* 0046815d: mov ecx, dword ptr [eax + 0x1e8] */ r_ecx = R32((u32)(r_eax+0x1e8u));
    /* 00468163: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00468165: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 0046816b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46816du); call_ind(t); }
    /* 0046816d: mov ecx, dword ptr [ebp - 0x2ec] */ r_ecx = R32((u32)(r_ebp+0xfffffd14u));
    /* 00468173: mov edx, dword ptr [ecx + 0x1f8] */ r_edx = R32((u32)(r_ecx+0x1f8u));
    /* 00468179: mov eax, dword ptr [ebp - 0x2ec] */ r_eax = R32((u32)(r_ebp+0xfffffd14u));
    /* 0046817f: mov ecx, dword ptr [eax + 0x1f8] */ r_ecx = R32((u32)(r_eax+0x1f8u));
    /* 00468185: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00468187: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0046818a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46818cu); call_ind(t); }
    /* 0046818c: cmp dword ptr [ebp - 0x1fc], 0xf423f */ {  u32 a = R32((u32)(r_ebp+0xfffffe04u)); u32 b = 0xf423fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00468196: jle 0x4681e9 */ if ((fZ||fS!=fO)) goto L_004681e9;
L_00468198:; BB(0x00468198);
    /* 00468198: mov eax, dword ptr [ebp - 0x1fc] */ r_eax = R32((u32)(r_ebp+0xfffffe04u));
    /* 0046819e: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0046819f: mov ecx, 0x3e8 */ r_ecx = 0x3e8u;
    /* 004681a4: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004681a4, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004681a4, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004681a6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004681a7: mov eax, dword ptr [ebp - 0x1fc] */ r_eax = R32((u32)(r_ebp+0xfffffe04u));
    /* 004681ad: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004681ae: mov ecx, 0xf4240 */ r_ecx = 0xf4240u;
    /* 004681b3: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004681b3, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004681b3, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004681b5: mov eax, edx */ r_eax = r_edx;
    /* 004681b7: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004681b8: mov ecx, 0x3e8 */ r_ecx = 0x3e8u;
    /* 004681bd: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004681bd, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004681bd, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004681bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004681c0: mov eax, dword ptr [ebp - 0x1fc] */ r_eax = R32((u32)(r_ebp+0xfffffe04u));
    /* 004681c6: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004681c7: mov ecx, 0xf4240 */ r_ecx = 0xf4240u;
    /* 004681cc: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004681cc, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004681cc, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004681ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004681cf: push 0x6bb5a0 */ { u32 v = 0x6bb5a0u; r_esp -= 4; W32(r_esp, v); }
    /* 004681d4: lea edx, [ebp - 0x1f4] */ r_edx = (u32)(r_ebp+0xfffffe0cu);
    /* 004681da: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004681db: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4681e1u); call_ind(t); }
    /* 004681e1: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004681e4: jmp 0x46829b */ goto L_0046829b;
L_004681e9:; BB(0x004681e9);
    /* 004681e9: cmp dword ptr [ebp - 0x1fc], 0x3e7 */ {  u32 a = R32((u32)(r_ebp+0xfffffe04u)); u32 b = 0x3e7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004681f3: jle 0x46822a */ if ((fZ||fS!=fO)) goto L_0046822a;
L_004681f5:; BB(0x004681f5);
    /* 004681f5: mov eax, dword ptr [ebp - 0x1fc] */ r_eax = R32((u32)(r_ebp+0xfffffe04u));
    /* 004681fb: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004681fc: mov ecx, 0x3e8 */ r_ecx = 0x3e8u;
    /* 00468201: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00468201, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00468201, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00468203: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00468204: mov eax, dword ptr [ebp - 0x1fc] */ r_eax = R32((u32)(r_ebp+0xfffffe04u));
    /* 0046820a: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0046820b: mov ecx, 0x3e8 */ r_ecx = 0x3e8u;
    /* 00468210: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00468210, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00468210, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00468212: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00468213: push 0x6bb594 */ { u32 v = 0x6bb594u; r_esp -= 4; W32(r_esp, v); }
    /* 00468218: lea edx, [ebp - 0x1f4] */ r_edx = (u32)(r_ebp+0xfffffe0cu);
    /* 0046821e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046821f: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x468225u); call_ind(t); }
    /* 00468225: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00468228: jmp 0x46829b */ goto L_0046829b;
L_0046822a:; BB(0x0046822a);
    /* 0046822a: cmp dword ptr [ebp - 0x1fc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffe04u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00468231: jle 0x468251 */ if ((fZ||fS!=fO)) goto L_00468251;
L_00468233:; BB(0x00468233);
    /* 00468233: mov eax, dword ptr [ebp - 0x1fc] */ r_eax = R32((u32)(r_ebp+0xfffffe04u));
    /* 00468239: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046823a: push 0x6bb590 */ { u32 v = 0x6bb590u; r_esp -= 4; W32(r_esp, v); }
    /* 0046823f: lea ecx, [ebp - 0x1f4] */ r_ecx = (u32)(r_ebp+0xfffffe0cu);
    /* 00468245: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00468246: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x46824cu); call_ind(t); }
    /* 0046824c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046824f: jmp 0x46829b */ goto L_0046829b;
L_00468251:; BB(0x00468251);
    /* 00468251: push 0x6bb580 */ { u32 v = 0x6bb580u; r_esp -= 4; W32(r_esp, v); }
    /* 00468256: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x46825bu); f_00630f40();
    /* 0046825b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046825e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046825f: mov edx, dword ptr [ebp - 0x2ec] */ r_edx = R32((u32)(r_ebp+0xfffffd14u));
    /* 00468265: mov eax, dword ptr [edx + 0x1e0] */ r_eax = R32((u32)(r_edx+0x1e0u));
    /* 0046826b: mov ecx, dword ptr [ebp - 0x2ec] */ r_ecx = R32((u32)(r_ebp+0xfffffd14u));
    /* 00468271: mov ecx, dword ptr [ecx + 0x1e0] */ r_ecx = R32((u32)(r_ecx+0x1e0u));
    /* 00468277: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00468279: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 0046827f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x468281u); call_ind(t); }
    /* 00468281: movzx ecx, byte ptr [ebp + 0xc] */ r_ecx = (u32)R8((u32)(r_ebp+0xcu));
    /* 00468285: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00468287: jne 0x468294 */ if (!fZ) goto L_00468294;
L_00468289:; BB(0x00468289);
    /* 00468289: mov ecx, dword ptr [ebp - 0x2ec] */ r_ecx = R32((u32)(r_ebp+0xfffffd14u));
    /* 0046828f: call 0x467ec0 */ r_esp -= 4; W32(r_esp, 0x468294u); f_00467ec0();
L_00468294:; BB(0x00468294);
    /* 00468294: mov byte ptr [ebp - 0x1f4], 0 */ W8((u32)(r_ebp+0xfffffe0cu), 0x0u);
L_0046829b:; BB(0x0046829b);
    /* 0046829b: lea edx, [ebp - 0x1f4] */ r_edx = (u32)(r_ebp+0xfffffe0cu);
    /* 004682a1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004682a2: mov eax, dword ptr [ebp - 0x2ec] */ r_eax = R32((u32)(r_ebp+0xfffffd14u));
    /* 004682a8: mov ecx, dword ptr [eax + 0x1fc] */ r_ecx = R32((u32)(r_eax+0x1fcu));
    /* 004682ae: mov edx, dword ptr [ebp - 0x2ec] */ r_edx = R32((u32)(r_ebp+0xfffffd14u));
    /* 004682b4: mov eax, dword ptr [edx + 0x1fc] */ r_eax = R32((u32)(r_edx+0x1fcu));
    /* 004682ba: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004682bc: mov ecx, eax */ r_ecx = r_eax;
    /* 004682be: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004682c4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4682c6u); call_ind(t); }
    /* 004682c6: cmp dword ptr [ebp - 0x1f8], 0xf423f */ {  u32 a = R32((u32)(r_ebp+0xfffffe08u)); u32 b = 0xf423fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004682d0: jle 0x468320 */ if ((fZ||fS!=fO)) goto L_00468320;
L_004682d2:; BB(0x004682d2);
    /* 004682d2: mov eax, dword ptr [ebp - 0x1f8] */ r_eax = R32((u32)(r_ebp+0xfffffe08u));
    /* 004682d8: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004682d9: mov ecx, 0x3e8 */ r_ecx = 0x3e8u;
    /* 004682de: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004682de, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004682de, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004682e0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004682e1: mov eax, dword ptr [ebp - 0x1f8] */ r_eax = R32((u32)(r_ebp+0xfffffe08u));
    /* 004682e7: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004682e8: mov ecx, 0xf4240 */ r_ecx = 0xf4240u;
    /* 004682ed: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004682ed, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004682ed, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004682ef: mov eax, edx */ r_eax = r_edx;
    /* 004682f1: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004682f2: mov ecx, 0x3e8 */ r_ecx = 0x3e8u;
    /* 004682f7: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004682f7, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004682f7, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004682f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004682fa: mov eax, dword ptr [ebp - 0x1f8] */ r_eax = R32((u32)(r_ebp+0xfffffe08u));
    /* 00468300: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00468301: mov ecx, 0xf4240 */ r_ecx = 0xf4240u;
    /* 00468306: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00468306, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00468306, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00468308: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00468309: push 0x6bb5a0 */ { u32 v = 0x6bb5a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046830e: lea edx, [ebp - 0xf4] */ r_edx = (u32)(r_ebp+0xffffff0cu);
    /* 00468314: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00468315: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x46831bu); call_ind(t); }
    /* 0046831b: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046831e: jmp 0x46838f */ goto L_0046838f;
L_00468320:; BB(0x00468320);
    /* 00468320: cmp dword ptr [ebp - 0x1f8], 0x3e7 */ {  u32 a = R32((u32)(r_ebp+0xfffffe08u)); u32 b = 0x3e7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046832a: jle 0x468361 */ if ((fZ||fS!=fO)) goto L_00468361;
L_0046832c:; BB(0x0046832c);
    /* 0046832c: mov eax, dword ptr [ebp - 0x1f8] */ r_eax = R32((u32)(r_ebp+0xfffffe08u));
    /* 00468332: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00468333: mov ecx, 0x3e8 */ r_ecx = 0x3e8u;
    /* 00468338: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00468338, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00468338, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0046833a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046833b: mov eax, dword ptr [ebp - 0x1f8] */ r_eax = R32((u32)(r_ebp+0xfffffe08u));
    /* 00468341: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00468342: mov ecx, 0x3e8 */ r_ecx = 0x3e8u;
    /* 00468347: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00468347, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00468347, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00468349: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046834a: push 0x6bb594 */ { u32 v = 0x6bb594u; r_esp -= 4; W32(r_esp, v); }
    /* 0046834f: lea edx, [ebp - 0xf4] */ r_edx = (u32)(r_ebp+0xffffff0cu);
    /* 00468355: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00468356: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x46835cu); call_ind(t); }
    /* 0046835c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046835f: jmp 0x46838f */ goto L_0046838f;
L_00468361:; BB(0x00468361);
    /* 00468361: cmp dword ptr [ebp - 0x1f8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffe08u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00468368: jle 0x468388 */ if ((fZ||fS!=fO)) goto L_00468388;
L_0046836a:; BB(0x0046836a);
    /* 0046836a: mov eax, dword ptr [ebp - 0x1f8] */ r_eax = R32((u32)(r_ebp+0xfffffe08u));
    /* 00468370: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00468371: push 0x6bb590 */ { u32 v = 0x6bb590u; r_esp -= 4; W32(r_esp, v); }
    /* 00468376: lea ecx, [ebp - 0xf4] */ r_ecx = (u32)(r_ebp+0xffffff0cu);
    /* 0046837c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046837d: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x468383u); call_ind(t); }
    /* 00468383: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00468386: jmp 0x46838f */ goto L_0046838f;
L_00468388:; BB(0x00468388);
    /* 00468388: mov byte ptr [ebp - 0xf4], 0 */ W8((u32)(r_ebp+0xffffff0cu), 0x0u);
L_0046838f:; BB(0x0046838f);
    /* 0046838f: lea edx, [ebp - 0xf4] */ r_edx = (u32)(r_ebp+0xffffff0cu);
    /* 00468395: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00468396: mov eax, dword ptr [ebp - 0x2ec] */ r_eax = R32((u32)(r_ebp+0xfffffd14u));
    /* 0046839c: mov ecx, dword ptr [eax + 0x200] */ r_ecx = R32((u32)(r_eax+0x200u));
    /* 004683a2: mov edx, dword ptr [ebp - 0x2ec] */ r_edx = R32((u32)(r_ebp+0xfffffd14u));
    /* 004683a8: mov eax, dword ptr [edx + 0x200] */ r_eax = R32((u32)(r_edx+0x200u));
    /* 004683ae: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004683b0: mov ecx, eax */ r_ecx = r_eax;
    /* 004683b2: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004683b8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4683bau); call_ind(t); }
    /* 004683ba: cmp dword ptr [ebp - 0x1fc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffe04u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004683c1: jne 0x4683e2 */ if (!fZ) goto L_004683e2;
L_004683c3:; BB(0x004683c3);
    /* 004683c3: movzx ecx, byte ptr [ebp + 0xc] */ r_ecx = (u32)R8((u32)(r_ebp+0xcu));
    /* 004683c7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004683c9: jne 0x4683e2 */ if (!fZ) goto L_004683e2;
L_004683cb:; BB(0x004683cb);
    /* 004683cb: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 004683d0: lea edx, [ebp - 0x264] */ r_edx = (u32)(r_ebp+0xfffffd9cu);
    /* 004683d6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004683d7: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4683ddu); call_ind(t); }
    /* 004683dd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004683e0: jmp 0x4683f7 */ goto L_004683f7;
L_004683e2:; BB(0x004683e2);
    /* 004683e2: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 004683e7: lea eax, [ebp - 0x264] */ r_eax = (u32)(r_ebp+0xfffffd9cu);
    /* 004683ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004683ee: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4683f4u); call_ind(t); }
    /* 004683f4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004683f7:; BB(0x004683f7);
    /* 004683f7: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004683fd: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00468400: cmp edx, dword ptr [ecx + 0x410] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x410u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00468406: jge 0x468416 */ if ((fS==fO)) goto L_00468416;
L_00468408:; BB(0x00468408);
    /* 00468408: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 0046840d: mov ecx, dword ptr [eax + 0x410] */ r_ecx = R32((u32)(r_eax+0x410u));
    /* 00468413: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
L_00468416:; BB(0x00468416);
    /* 00468416: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046841a: jle 0x4684f8 */ if ((fZ||fS!=fO)) goto L_004684f8;
L_00468420:; BB(0x00468420);
    /* 00468420: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00468426: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00468429: call 0x4f66e0 */ r_esp -= 4; W32(r_esp, 0x46842eu); f_004f66e0();
    /* 0046842e: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00468431: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00468433: jne 0x468442 */ if (!fZ) goto L_00468442;
L_00468435:; BB(0x00468435);
    /* 00468435: cmp dword ptr [ebp - 0x1fc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffe04u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046843c: jne 0x4684f8 */ if (!fZ) goto L_004684f8;
L_00468442:; BB(0x00468442);
    /* 00468442: cmp dword ptr [ebp + 8], 0xf423f */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xf423fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00468449: jle 0x468497 */ if ((fZ||fS!=fO)) goto L_00468497;
L_0046844b:; BB(0x0046844b);
    /* 0046844b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0046844e: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0046844f: mov ecx, 0x3e8 */ r_ecx = 0x3e8u;
    /* 00468454: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00468454, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00468454, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00468456: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00468457: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0046845a: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0046845b: mov ecx, 0xf4240 */ r_ecx = 0xf4240u;
    /* 00468460: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00468460, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00468460, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00468462: mov eax, edx */ r_eax = r_edx;
    /* 00468464: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00468465: mov ecx, 0x3e8 */ r_ecx = 0x3e8u;
    /* 0046846a: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0046846a, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0046846a, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0046846c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046846d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00468470: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00468471: mov ecx, 0xf4240 */ r_ecx = 0xf4240u;
    /* 00468476: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00468476, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00468476, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00468478: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00468479: lea edx, [ebp - 0x264] */ r_edx = (u32)(r_ebp+0xfffffd9cu);
    /* 0046847f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00468480: push 0x6bb570 */ { u32 v = 0x6bb570u; r_esp -= 4; W32(r_esp, v); }
    /* 00468485: lea eax, [ebp - 0x8c] */ r_eax = (u32)(r_ebp+0xffffff74u);
    /* 0046848b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046848c: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x468492u); call_ind(t); }
    /* 00468492: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00468495: jmp 0x4684f6 */ goto L_004684f6;
L_00468497:; BB(0x00468497);
    /* 00468497: cmp dword ptr [ebp + 8], 0x3e7 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3e7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046849e: jle 0x4684d6 */ if ((fZ||fS!=fO)) goto L_004684d6;
L_004684a0:; BB(0x004684a0);
    /* 004684a0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004684a3: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004684a4: mov ecx, 0x3e8 */ r_ecx = 0x3e8u;
    /* 004684a9: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004684a9, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004684a9, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004684ab: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004684ac: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004684af: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004684b0: mov ecx, 0x3e8 */ r_ecx = 0x3e8u;
    /* 004684b5: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004684b5, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004684b5, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004684b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004684b8: lea edx, [ebp - 0x264] */ r_edx = (u32)(r_ebp+0xfffffd9cu);
    /* 004684be: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004684bf: push 0x6bb564 */ { u32 v = 0x6bb564u; r_esp -= 4; W32(r_esp, v); }
    /* 004684c4: lea eax, [ebp - 0x8c] */ r_eax = (u32)(r_ebp+0xffffff74u);
    /* 004684ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004684cb: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4684d1u); call_ind(t); }
    /* 004684d1: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004684d4: jmp 0x4684f6 */ goto L_004684f6;
L_004684d6:; BB(0x004684d6);
    /* 004684d6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004684d9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004684da: lea edx, [ebp - 0x264] */ r_edx = (u32)(r_ebp+0xfffffd9cu);
    /* 004684e0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004684e1: push 0x6bb55c */ { u32 v = 0x6bb55cu; r_esp -= 4; W32(r_esp, v); }
    /* 004684e6: lea eax, [ebp - 0x8c] */ r_eax = (u32)(r_ebp+0xffffff74u);
    /* 004684ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004684ed: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4684f3u); call_ind(t); }
    /* 004684f3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004684f6:; BB(0x004684f6);
    /* 004684f6: jmp 0x46850f */ goto L_0046850f;
L_004684f8:; BB(0x004684f8);
    /* 004684f8: lea ecx, [ebp - 0x264] */ r_ecx = (u32)(r_ebp+0xfffffd9cu);
    /* 004684fe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004684ff: lea edx, [ebp - 0x8c] */ r_edx = (u32)(r_ebp+0xffffff74u);
    /* 00468505: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00468506: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x46850cu); call_ind(t); }
    /* 0046850c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0046850f:; BB(0x0046850f);
    /* 0046850f: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00468513: jne 0x4685e0 */ if (!fZ) goto L_004685e0;
L_00468519:; BB(0x00468519);
    /* 00468519: mov eax, dword ptr [ebp - 0x1f8] */ r_eax = R32((u32)(r_ebp+0xfffffe08u));
    /* 0046851f: sub eax, dword ptr [ebp - 0x1fc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffe04u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00468525: cmp eax, dword ptr [ebp - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00468528: jge 0x4685e0 */ if ((fS==fO)) goto L_004685e0;
L_0046852e:; BB(0x0046852e);
    /* 0046852e: lea ecx, [ebp - 0x8c] */ r_ecx = (u32)(r_ebp+0xffffff74u);
    /* 00468534: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00468535: mov edx, dword ptr [ebp - 0x2ec] */ r_edx = R32((u32)(r_ebp+0xfffffd14u));
    /* 0046853b: mov eax, dword ptr [edx + 0x204] */ r_eax = R32((u32)(r_edx+0x204u));
    /* 00468541: mov ecx, dword ptr [ebp - 0x2ec] */ r_ecx = R32((u32)(r_ebp+0xfffffd14u));
    /* 00468547: mov ecx, dword ptr [ecx + 0x204] */ r_ecx = R32((u32)(r_ecx+0x204u));
    /* 0046854d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0046854f: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00468555: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x468557u); call_ind(t); }
    /* 00468557: mov ecx, dword ptr [ebp - 0x2ec] */ r_ecx = R32((u32)(r_ebp+0xfffffd14u));
    /* 0046855d: mov edx, dword ptr [ecx + 0x1e4] */ r_edx = R32((u32)(r_ecx+0x1e4u));
    /* 00468563: mov eax, dword ptr [ebp - 0x2ec] */ r_eax = R32((u32)(r_ebp+0xfffffd14u));
    /* 00468569: mov ecx, dword ptr [eax + 0x1e4] */ r_ecx = R32((u32)(r_eax+0x1e4u));
    /* 0046856f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00468571: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 00468577: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x468579u); call_ind(t); }
    /* 00468579: mov ecx, dword ptr [ebp - 0x2ec] */ r_ecx = R32((u32)(r_ebp+0xfffffd14u));
    /* 0046857f: cmp dword ptr [ecx + 0x1ec], 0 */ {  u32 a = R32((u32)(r_ecx+0x1ecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00468586: je 0x4685aa */ if (fZ) goto L_004685aa;
L_00468588:; BB(0x00468588);
    /* 00468588: mov edx, dword ptr [ebp - 0x2ec] */ r_edx = R32((u32)(r_ebp+0xfffffd14u));
    /* 0046858e: mov eax, dword ptr [edx + 0x1ec] */ r_eax = R32((u32)(r_edx+0x1ecu));
    /* 00468594: mov ecx, dword ptr [ebp - 0x2ec] */ r_ecx = R32((u32)(r_ebp+0xfffffd14u));
    /* 0046859a: mov ecx, dword ptr [ecx + 0x1ec] */ r_ecx = R32((u32)(r_ecx+0x1ecu));
    /* 004685a0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004685a2: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 004685a8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4685aau); call_ind(t); }
L_004685aa:; BB(0x004685aa);
    /* 004685aa: mov ecx, dword ptr [ebp - 0x2ec] */ r_ecx = R32((u32)(r_ebp+0xfffffd14u));
    /* 004685b0: cmp dword ptr [ecx + 0x1f0], 0 */ {  u32 a = R32((u32)(r_ecx+0x1f0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004685b7: je 0x4685db */ if (fZ) goto L_004685db;
L_004685b9:; BB(0x004685b9);
    /* 004685b9: mov edx, dword ptr [ebp - 0x2ec] */ r_edx = R32((u32)(r_ebp+0xfffffd14u));
    /* 004685bf: mov eax, dword ptr [edx + 0x1f0] */ r_eax = R32((u32)(r_edx+0x1f0u));
    /* 004685c5: mov ecx, dword ptr [ebp - 0x2ec] */ r_ecx = R32((u32)(r_ebp+0xfffffd14u));
    /* 004685cb: mov ecx, dword ptr [ecx + 0x1f0] */ r_ecx = R32((u32)(r_ecx+0x1f0u));
    /* 004685d1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004685d3: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 004685d9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4685dbu); call_ind(t); }
L_004685db:; BB(0x004685db);
    /* 004685db: jmp 0x4688ed */ goto L_004688ed;
L_004685e0:; BB(0x004685e0);
    /* 004685e0: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004685e6: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004685e9: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x4685eeu); f_004f6640();
    /* 004685ee: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004685f1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004685f3: je 0x468769 */ if (fZ) goto L_00468769;
L_004685f9:; BB(0x004685f9);
    /* 004685f9: movzx edx, byte ptr [ebp + 0x10] */ r_edx = (u32)R8((u32)(r_ebp+0x10u));
    /* 004685fd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004685ff: je 0x4686b7 */ if (fZ) goto L_004686b7;
L_00468605:; BB(0x00468605);
    /* 00468605: lea eax, [ebp - 0x8c] */ r_eax = (u32)(r_ebp+0xffffff74u);
    /* 0046860b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046860c: mov ecx, dword ptr [ebp - 0x2ec] */ r_ecx = R32((u32)(r_ebp+0xfffffd14u));
    /* 00468612: mov edx, dword ptr [ecx + 0x204] */ r_edx = R32((u32)(r_ecx+0x204u));
    /* 00468618: mov eax, dword ptr [ebp - 0x2ec] */ r_eax = R32((u32)(r_ebp+0xfffffd14u));
    /* 0046861e: mov ecx, dword ptr [eax + 0x204] */ r_ecx = R32((u32)(r_eax+0x204u));
    /* 00468624: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00468626: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0046862c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46862eu); call_ind(t); }
    /* 0046862e: mov ecx, dword ptr [ebp - 0x2ec] */ r_ecx = R32((u32)(r_ebp+0xfffffd14u));
    /* 00468634: mov edx, dword ptr [ecx + 0x1e4] */ r_edx = R32((u32)(r_ecx+0x1e4u));
    /* 0046863a: mov eax, dword ptr [ebp - 0x2ec] */ r_eax = R32((u32)(r_ebp+0xfffffd14u));
    /* 00468640: mov ecx, dword ptr [eax + 0x1e4] */ r_ecx = R32((u32)(r_eax+0x1e4u));
    /* 00468646: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00468648: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 0046864e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x468650u); call_ind(t); }
    /* 00468650: mov ecx, dword ptr [ebp - 0x2ec] */ r_ecx = R32((u32)(r_ebp+0xfffffd14u));
    /* 00468656: cmp dword ptr [ecx + 0x1ec], 0 */ {  u32 a = R32((u32)(r_ecx+0x1ecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046865d: je 0x468681 */ if (fZ) goto L_00468681;
L_0046865f:; BB(0x0046865f);
    /* 0046865f: mov edx, dword ptr [ebp - 0x2ec] */ r_edx = R32((u32)(r_ebp+0xfffffd14u));
    /* 00468665: mov eax, dword ptr [edx + 0x1ec] */ r_eax = R32((u32)(r_edx+0x1ecu));
    /* 0046866b: mov ecx, dword ptr [ebp - 0x2ec] */ r_ecx = R32((u32)(r_ebp+0xfffffd14u));
    /* 00468671: mov ecx, dword ptr [ecx + 0x1ec] */ r_ecx = R32((u32)(r_ecx+0x1ecu));
    /* 00468677: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00468679: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 0046867f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x468681u); call_ind(t); }
L_00468681:; BB(0x00468681);
    /* 00468681: mov ecx, dword ptr [ebp - 0x2ec] */ r_ecx = R32((u32)(r_ebp+0xfffffd14u));
    /* 00468687: cmp dword ptr [ecx + 0x1f0], 0 */ {  u32 a = R32((u32)(r_ecx+0x1f0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046868e: je 0x4686b2 */ if (fZ) goto L_004686b2;
L_00468690:; BB(0x00468690);
    /* 00468690: mov edx, dword ptr [ebp - 0x2ec] */ r_edx = R32((u32)(r_ebp+0xfffffd14u));
    /* 00468696: mov eax, dword ptr [edx + 0x1f0] */ r_eax = R32((u32)(r_edx+0x1f0u));
    /* 0046869c: mov ecx, dword ptr [ebp - 0x2ec] */ r_ecx = R32((u32)(r_ebp+0xfffffd14u));
    /* 004686a2: mov ecx, dword ptr [ecx + 0x1f0] */ r_ecx = R32((u32)(r_ecx+0x1f0u));
    /* 004686a8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004686aa: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 004686b0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4686b2u); call_ind(t); }
L_004686b2:; BB(0x004686b2);
    /* 004686b2: jmp 0x468764 */ goto L_00468764;
L_004686b7:; BB(0x004686b7);
    /* 004686b7: lea ecx, [ebp - 0x8c] */ r_ecx = (u32)(r_ebp+0xffffff74u);
    /* 004686bd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004686be: mov edx, dword ptr [ebp - 0x2ec] */ r_edx = R32((u32)(r_ebp+0xfffffd14u));
    /* 004686c4: mov eax, dword ptr [edx + 0x204] */ r_eax = R32((u32)(r_edx+0x204u));
    /* 004686ca: mov ecx, dword ptr [ebp - 0x2ec] */ r_ecx = R32((u32)(r_ebp+0xfffffd14u));
    /* 004686d0: mov ecx, dword ptr [ecx + 0x204] */ r_ecx = R32((u32)(r_ecx+0x204u));
    /* 004686d6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004686d8: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004686de: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4686e0u); call_ind(t); }
    /* 004686e0: mov ecx, dword ptr [ebp - 0x2ec] */ r_ecx = R32((u32)(r_ebp+0xfffffd14u));
    /* 004686e6: mov edx, dword ptr [ecx + 0x1e4] */ r_edx = R32((u32)(r_ecx+0x1e4u));
    /* 004686ec: mov eax, dword ptr [ebp - 0x2ec] */ r_eax = R32((u32)(r_ebp+0xfffffd14u));
    /* 004686f2: mov ecx, dword ptr [eax + 0x1e4] */ r_ecx = R32((u32)(r_eax+0x1e4u));
    /* 004686f8: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004686fa: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 00468700: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x468702u); call_ind(t); }
    /* 00468702: mov ecx, dword ptr [ebp - 0x2ec] */ r_ecx = R32((u32)(r_ebp+0xfffffd14u));
    /* 00468708: cmp dword ptr [ecx + 0x1ec], 0 */ {  u32 a = R32((u32)(r_ecx+0x1ecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046870f: je 0x468733 */ if (fZ) goto L_00468733;
L_00468711:; BB(0x00468711);
    /* 00468711: mov edx, dword ptr [ebp - 0x2ec] */ r_edx = R32((u32)(r_ebp+0xfffffd14u));
    /* 00468717: mov eax, dword ptr [edx + 0x1ec] */ r_eax = R32((u32)(r_edx+0x1ecu));
    /* 0046871d: mov ecx, dword ptr [ebp - 0x2ec] */ r_ecx = R32((u32)(r_ebp+0xfffffd14u));
    /* 00468723: mov ecx, dword ptr [ecx + 0x1ec] */ r_ecx = R32((u32)(r_ecx+0x1ecu));
    /* 00468729: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0046872b: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 00468731: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x468733u); call_ind(t); }
L_00468733:; BB(0x00468733);
    /* 00468733: mov ecx, dword ptr [ebp - 0x2ec] */ r_ecx = R32((u32)(r_ebp+0xfffffd14u));
    /* 00468739: cmp dword ptr [ecx + 0x1f0], 0 */ {  u32 a = R32((u32)(r_ecx+0x1f0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00468740: je 0x468764 */ if (fZ) goto L_00468764;
L_00468742:; BB(0x00468742);
    /* 00468742: mov edx, dword ptr [ebp - 0x2ec] */ r_edx = R32((u32)(r_ebp+0xfffffd14u));
    /* 00468748: mov eax, dword ptr [edx + 0x1f0] */ r_eax = R32((u32)(r_edx+0x1f0u));
    /* 0046874e: mov ecx, dword ptr [ebp - 0x2ec] */ r_ecx = R32((u32)(r_ebp+0xfffffd14u));
    /* 00468754: mov ecx, dword ptr [ecx + 0x1f0] */ r_ecx = R32((u32)(r_ecx+0x1f0u));
    /* 0046875a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0046875c: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 00468762: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x468764u); call_ind(t); }
L_00468764:; BB(0x00468764);
    /* 00468764: jmp 0x4688ed */ goto L_004688ed;
L_00468769:; BB(0x00468769);
    /* 00468769: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046876d: je 0x468840 */ if (fZ) goto L_00468840;
L_00468773:; BB(0x00468773);
    /* 00468773: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00468779: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046877c: call 0x4f66e0 */ r_esp -= 4; W32(r_esp, 0x468781u); f_004f66e0();
    /* 00468781: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00468784: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00468786: je 0x468840 */ if (fZ) goto L_00468840;
L_0046878c:; BB(0x0046878c);
    /* 0046878c: lea edx, [ebp - 0x8c] */ r_edx = (u32)(r_ebp+0xffffff74u);
    /* 00468792: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00468793: mov eax, dword ptr [ebp - 0x2ec] */ r_eax = R32((u32)(r_ebp+0xfffffd14u));
    /* 00468799: mov ecx, dword ptr [eax + 0x204] */ r_ecx = R32((u32)(r_eax+0x204u));
    /* 0046879f: mov edx, dword ptr [ebp - 0x2ec] */ r_edx = R32((u32)(r_ebp+0xfffffd14u));
    /* 004687a5: mov eax, dword ptr [edx + 0x204] */ r_eax = R32((u32)(r_edx+0x204u));
    /* 004687ab: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004687ad: mov ecx, eax */ r_ecx = r_eax;
    /* 004687af: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004687b5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4687b7u); call_ind(t); }
    /* 004687b7: mov ecx, dword ptr [ebp - 0x2ec] */ r_ecx = R32((u32)(r_ebp+0xfffffd14u));
    /* 004687bd: mov edx, dword ptr [ecx + 0x1e4] */ r_edx = R32((u32)(r_ecx+0x1e4u));
    /* 004687c3: mov eax, dword ptr [ebp - 0x2ec] */ r_eax = R32((u32)(r_ebp+0xfffffd14u));
    /* 004687c9: mov ecx, dword ptr [eax + 0x1e4] */ r_ecx = R32((u32)(r_eax+0x1e4u));
    /* 004687cf: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004687d1: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 004687d7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4687d9u); call_ind(t); }
    /* 004687d9: mov ecx, dword ptr [ebp - 0x2ec] */ r_ecx = R32((u32)(r_ebp+0xfffffd14u));
    /* 004687df: cmp dword ptr [ecx + 0x1ec], 0 */ {  u32 a = R32((u32)(r_ecx+0x1ecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004687e6: je 0x46880a */ if (fZ) goto L_0046880a;
L_004687e8:; BB(0x004687e8);
    /* 004687e8: mov edx, dword ptr [ebp - 0x2ec] */ r_edx = R32((u32)(r_ebp+0xfffffd14u));
    /* 004687ee: mov eax, dword ptr [edx + 0x1ec] */ r_eax = R32((u32)(r_edx+0x1ecu));
    /* 004687f4: mov ecx, dword ptr [ebp - 0x2ec] */ r_ecx = R32((u32)(r_ebp+0xfffffd14u));
    /* 004687fa: mov ecx, dword ptr [ecx + 0x1ec] */ r_ecx = R32((u32)(r_ecx+0x1ecu));
    /* 00468800: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00468802: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 00468808: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46880au); call_ind(t); }
L_0046880a:; BB(0x0046880a);
    /* 0046880a: mov ecx, dword ptr [ebp - 0x2ec] */ r_ecx = R32((u32)(r_ebp+0xfffffd14u));
    /* 00468810: cmp dword ptr [ecx + 0x1f0], 0 */ {  u32 a = R32((u32)(r_ecx+0x1f0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00468817: je 0x46883b */ if (fZ) goto L_0046883b;
L_00468819:; BB(0x00468819);
    /* 00468819: mov edx, dword ptr [ebp - 0x2ec] */ r_edx = R32((u32)(r_ebp+0xfffffd14u));
    /* 0046881f: mov eax, dword ptr [edx + 0x1f0] */ r_eax = R32((u32)(r_edx+0x1f0u));
    /* 00468825: mov ecx, dword ptr [ebp - 0x2ec] */ r_ecx = R32((u32)(r_ebp+0xfffffd14u));
    /* 0046882b: mov ecx, dword ptr [ecx + 0x1f0] */ r_ecx = R32((u32)(r_ecx+0x1f0u));
    /* 00468831: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00468833: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 00468839: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46883bu); call_ind(t); }
L_0046883b:; BB(0x0046883b);
    /* 0046883b: jmp 0x4688ed */ goto L_004688ed;
L_00468840:; BB(0x00468840);
    /* 00468840: lea ecx, [ebp - 0x8c] */ r_ecx = (u32)(r_ebp+0xffffff74u);
    /* 00468846: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00468847: mov edx, dword ptr [ebp - 0x2ec] */ r_edx = R32((u32)(r_ebp+0xfffffd14u));
    /* 0046884d: mov eax, dword ptr [edx + 0x204] */ r_eax = R32((u32)(r_edx+0x204u));
    /* 00468853: mov ecx, dword ptr [ebp - 0x2ec] */ r_ecx = R32((u32)(r_ebp+0xfffffd14u));
    /* 00468859: mov ecx, dword ptr [ecx + 0x204] */ r_ecx = R32((u32)(r_ecx+0x204u));
    /* 0046885f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00468861: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00468867: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x468869u); call_ind(t); }
    /* 00468869: mov ecx, dword ptr [ebp - 0x2ec] */ r_ecx = R32((u32)(r_ebp+0xfffffd14u));
    /* 0046886f: mov edx, dword ptr [ecx + 0x1e4] */ r_edx = R32((u32)(r_ecx+0x1e4u));
    /* 00468875: mov eax, dword ptr [ebp - 0x2ec] */ r_eax = R32((u32)(r_ebp+0xfffffd14u));
    /* 0046887b: mov ecx, dword ptr [eax + 0x1e4] */ r_ecx = R32((u32)(r_eax+0x1e4u));
    /* 00468881: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00468883: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 00468889: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46888bu); call_ind(t); }
    /* 0046888b: mov ecx, dword ptr [ebp - 0x2ec] */ r_ecx = R32((u32)(r_ebp+0xfffffd14u));
    /* 00468891: cmp dword ptr [ecx + 0x1ec], 0 */ {  u32 a = R32((u32)(r_ecx+0x1ecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00468898: je 0x4688bc */ if (fZ) goto L_004688bc;
L_0046889a:; BB(0x0046889a);
    /* 0046889a: mov edx, dword ptr [ebp - 0x2ec] */ r_edx = R32((u32)(r_ebp+0xfffffd14u));
    /* 004688a0: mov eax, dword ptr [edx + 0x1ec] */ r_eax = R32((u32)(r_edx+0x1ecu));
    /* 004688a6: mov ecx, dword ptr [ebp - 0x2ec] */ r_ecx = R32((u32)(r_ebp+0xfffffd14u));
    /* 004688ac: mov ecx, dword ptr [ecx + 0x1ec] */ r_ecx = R32((u32)(r_ecx+0x1ecu));
    /* 004688b2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004688b4: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 004688ba: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4688bcu); call_ind(t); }
L_004688bc:; BB(0x004688bc);
    /* 004688bc: mov ecx, dword ptr [ebp - 0x2ec] */ r_ecx = R32((u32)(r_ebp+0xfffffd14u));
    /* 004688c2: cmp dword ptr [ecx + 0x1f0], 0 */ {  u32 a = R32((u32)(r_ecx+0x1f0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004688c9: je 0x4688ed */ if (fZ) goto L_004688ed;
L_004688cb:; BB(0x004688cb);
    /* 004688cb: mov edx, dword ptr [ebp - 0x2ec] */ r_edx = R32((u32)(r_ebp+0xfffffd14u));
    /* 004688d1: mov eax, dword ptr [edx + 0x1f0] */ r_eax = R32((u32)(r_edx+0x1f0u));
    /* 004688d7: mov ecx, dword ptr [ebp - 0x2ec] */ r_ecx = R32((u32)(r_ebp+0xfffffd14u));
    /* 004688dd: mov ecx, dword ptr [ecx + 0x1f0] */ r_ecx = R32((u32)(r_ecx+0x1f0u));
    /* 004688e3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004688e5: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 004688eb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4688edu); call_ind(t); }
L_004688ed:; BB(0x004688ed);
    /* 004688ed: mov ecx, dword ptr [ebp - 0x2ec] */ r_ecx = R32((u32)(r_ebp+0xfffffd14u));
    /* 004688f3: mov ecx, dword ptr [ecx + 0x1e4] */ r_ecx = R32((u32)(r_ecx+0x1e4u));
    /* 004688f9: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x4688feu); f_006026d0();
    /* 004688fe: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00468901: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00468903: je 0x468935 */ if (fZ) goto L_00468935;
L_00468905:; BB(0x00468905);
    /* 00468905: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00468907: push 0x30e79f */ { u32 v = 0x30e79fu; r_esp -= 4; W32(r_esp, v); }
    /* 0046890c: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 00468912: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x468917u); f_005f2a60();
    /* 00468917: mov dword ptr [ebp - 0x2f0], eax */ W32((u32)(r_ebp+0xfffffd10u), r_eax);
    /* 0046891d: mov eax, dword ptr [ebp - 0x2f0] */ r_eax = R32((u32)(r_ebp+0xfffffd10u));
    /* 00468923: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00468925: mov ecx, dword ptr [ebp - 0x2f0] */ r_ecx = R32((u32)(r_ebp+0xfffffd10u));
    /* 0046892b: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 00468931: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x468933u); call_ind(t); }
    /* 00468933: jmp 0x468963 */ goto L_00468963;
L_00468935:; BB(0x00468935);
    /* 00468935: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00468937: push 0x30e79f */ { u32 v = 0x30e79fu; r_esp -= 4; W32(r_esp, v); }
    /* 0046893c: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 00468942: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x468947u); f_005f2a60();
    /* 00468947: mov dword ptr [ebp - 0x2f4], eax */ W32((u32)(r_ebp+0xfffffd0cu), r_eax);
    /* 0046894d: mov ecx, dword ptr [ebp - 0x2f4] */ r_ecx = R32((u32)(r_ebp+0xfffffd0cu));
    /* 00468953: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00468955: mov ecx, dword ptr [ebp - 0x2f4] */ r_ecx = R32((u32)(r_ebp+0xfffffd0cu));
    /* 0046895b: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 00468961: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x468963u); call_ind(t); }
L_00468963:; BB(0x00468963);
    /* 00468963: movsx ecx, word ptr [ebp + 0x14] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x14u));
    /* 00468967: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046896a: jne 0x46898a */ if (!fZ) goto L_0046898a;
L_0046896c:; BB(0x0046896c);
    /* 0046896c: mov edx, dword ptr [ebp - 0x2ec] */ r_edx = R32((u32)(r_ebp+0xfffffd14u));
    /* 00468972: mov ecx, dword ptr [edx + 0x1e4] */ r_ecx = R32((u32)(r_edx+0x1e4u));
    /* 00468978: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x46897du); f_006026d0();
    /* 0046897d: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00468980: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00468982: jne 0x46898a */ if (!fZ) goto L_0046898a;
L_00468984:; BB(0x00468984);
    /* 00468984: mov word ptr [ebp + 0x14], 1 */ W16((u32)(r_ebp+0x14u), 0x1u);
L_0046898a:; BB(0x0046898a);
    /* 0046898a: mov ecx, dword ptr [ebp - 0x2ec] */ r_ecx = R32((u32)(r_ebp+0xfffffd14u));
    /* 00468990: call 0x5f85d0 */ r_esp -= 4; W32(r_esp, 0x468995u); f_005f85d0();
    /* 00468995: lea ecx, [ebp - 0x1f4] */ r_ecx = (u32)(r_ebp+0xfffffe0cu);
    /* 0046899b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046899c: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004689a2: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 004689a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004689a9: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 004689af: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004689b1: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 004689b7: mov eax, dword ptr [edx + 0x3b4] */ r_eax = R32((u32)(r_edx+0x3b4u));
    /* 004689bd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4689bfu); call_ind(t); }
    /* 004689bf: lea ecx, [ebp - 0x1f4] */ r_ecx = (u32)(r_ebp+0xfffffe0cu);
    /* 004689c5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004689c6: push 0x6bb538 */ { u32 v = 0x6bb538u; r_esp -= 4; W32(r_esp, v); }
    /* 004689cb: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4689d0u); f_00630f40();
    /* 004689d0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004689d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004689d4: push 0x7907b8 */ { u32 v = 0x7907b8u; r_esp -= 4; W32(r_esp, v); }
    /* 004689d9: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4689dfu); call_ind(t); }
    /* 004689df: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004689e2: push 0x7907b8 */ { u32 v = 0x7907b8u; r_esp -= 4; W32(r_esp, v); }
    /* 004689e7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004689e9: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004689eb: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 004689f1: call 0x57be80 */ r_esp -= 4; W32(r_esp, 0x4689f6u); f_0057be80();
    /* 004689f6: push 0x6bb580 */ { u32 v = 0x6bb580u; r_esp -= 4; W32(r_esp, v); }
    /* 004689fb: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x468a00u); f_00630f40();
    /* 00468a00: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00468a03: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00468a04: mov edx, dword ptr [ebp - 0x2ec] */ r_edx = R32((u32)(r_ebp+0xfffffd14u));
    /* 00468a0a: mov ecx, dword ptr [edx + 0x1e0] */ r_ecx = R32((u32)(r_edx+0x1e0u));
    /* 00468a10: call 0x602b70 */ r_esp -= 4; W32(r_esp, 0x468a15u); f_00602b70();
    /* 00468a15: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00468a16: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x468a1bu); f_00686ec0();
    /* 00468a1b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00468a1e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00468a20: jne 0x468a3f */ if (!fZ) goto L_00468a3f;
L_00468a22:; BB(0x00468a22);
    /* 00468a22: push 0x6bb51c */ { u32 v = 0x6bb51cu; r_esp -= 4; W32(r_esp, v); }
    /* 00468a27: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x468a2cu); f_00630f40();
    /* 00468a2c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00468a2f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00468a30: push 0x7907b8 */ { u32 v = 0x7907b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00468a35: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x468a3au); f_00686d8e();
    /* 00468a3a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00468a3d: jmp 0x468a5a */ goto L_00468a5a;
L_00468a3f:; BB(0x00468a3f);
    /* 00468a3f: push 0x6bb500 */ { u32 v = 0x6bb500u; r_esp -= 4; W32(r_esp, v); }
    /* 00468a44: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x468a49u); f_00630f40();
    /* 00468a49: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00468a4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00468a4d: push 0x7907b8 */ { u32 v = 0x7907b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00468a52: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x468a57u); f_00686d8e();
    /* 00468a57: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00468a5a:; BB(0x00468a5a);
    /* 00468a5a: push 0x6bb080 */ { u32 v = 0x6bb080u; r_esp -= 4; W32(r_esp, v); }
    /* 00468a5f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x468a64u); f_00630f40();
    /* 00468a64: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00468a67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00468a68: mov eax, dword ptr [ebp - 0x2ec] */ r_eax = R32((u32)(r_ebp+0xfffffd14u));
    /* 00468a6e: mov ecx, dword ptr [eax + 0x1e4] */ r_ecx = R32((u32)(r_eax+0x1e4u));
    /* 00468a74: call 0x602b70 */ r_esp -= 4; W32(r_esp, 0x468a79u); f_00602b70();
    /* 00468a79: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00468a7a: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x468a7fu); f_00686ec0();
    /* 00468a7f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00468a82: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00468a84: jne 0x468aa3 */ if (!fZ) goto L_00468aa3;
L_00468a86:; BB(0x00468a86);
    /* 00468a86: push 0x6bb4dc */ { u32 v = 0x6bb4dcu; r_esp -= 4; W32(r_esp, v); }
    /* 00468a8b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x468a90u); f_00630f40();
    /* 00468a90: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00468a93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00468a94: push 0x7907b8 */ { u32 v = 0x7907b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00468a99: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x468a9eu); f_00686ec6();
    /* 00468a9e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00468aa1: jmp 0x468af3 */ goto L_00468af3;
L_00468aa3:; BB(0x00468aa3);
    /* 00468aa3: mov ecx, dword ptr [ebp - 0x2ec] */ r_ecx = R32((u32)(r_ebp+0xfffffd14u));
    /* 00468aa9: mov ecx, dword ptr [ecx + 0x1e4] */ r_ecx = R32((u32)(r_ecx+0x1e4u));
    /* 00468aaf: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x468ab4u); f_006026d0();
    /* 00468ab4: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00468ab7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00468ab9: je 0x468ad8 */ if (fZ) goto L_00468ad8;
L_00468abb:; BB(0x00468abb);
    /* 00468abb: push 0x6bb4b8 */ { u32 v = 0x6bb4b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00468ac0: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x468ac5u); f_00630f40();
    /* 00468ac5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00468ac8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00468ac9: push 0x7907b8 */ { u32 v = 0x7907b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00468ace: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x468ad3u); f_00686ec6();
    /* 00468ad3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00468ad6: jmp 0x468af3 */ goto L_00468af3;
L_00468ad8:; BB(0x00468ad8);
    /* 00468ad8: push 0x6bb49c */ { u32 v = 0x6bb49cu; r_esp -= 4; W32(r_esp, v); }
    /* 00468add: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x468ae2u); f_00630f40();
    /* 00468ae2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00468ae5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00468ae6: push 0x7907b8 */ { u32 v = 0x7907b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00468aeb: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x468af0u); f_00686ec6();
    /* 00468af0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00468af3:; BB(0x00468af3);
    /* 00468af3: push 0x6bb06c */ { u32 v = 0x6bb06cu; r_esp -= 4; W32(r_esp, v); }
    /* 00468af8: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x468afdu); f_00630f40();
    /* 00468afd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00468b00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00468b01: mov eax, dword ptr [ebp - 0x2ec] */ r_eax = R32((u32)(r_ebp+0xfffffd14u));
    /* 00468b07: mov ecx, dword ptr [eax + 0x1e0] */ r_ecx = R32((u32)(r_eax+0x1e0u));
    /* 00468b0d: call 0x602b70 */ r_esp -= 4; W32(r_esp, 0x468b12u); f_00602b70();
    /* 00468b12: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00468b13: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x468b18u); f_00686ec0();
    /* 00468b18: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00468b1b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00468b1d: jne 0x468b3a */ if (!fZ) goto L_00468b3a;
L_00468b1f:; BB(0x00468b1f);
    /* 00468b1f: push 0x6bb478 */ { u32 v = 0x6bb478u; r_esp -= 4; W32(r_esp, v); }
    /* 00468b24: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x468b29u); f_00630f40();
    /* 00468b29: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00468b2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00468b2d: push 0x7907b8 */ { u32 v = 0x7907b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00468b32: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x468b37u); f_00686ec6();
    /* 00468b37: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00468b3a:; BB(0x00468b3a);
    /* 00468b3a: push 0x7907b8 */ { u32 v = 0x7907b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00468b3f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00468b41: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00468b43: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 00468b49: call 0x57be80 */ r_esp -= 4; W32(r_esp, 0x468b4eu); f_0057be80();
    /* 00468b4e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00468b54: call 0x47e1d0 */ r_esp -= 4; W32(r_esp, 0x468b59u); f_0047e1d0();
    /* 00468b59: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00468b5b: jne 0x469490 */ if (!fZ) goto L_00469490;
L_00468b61:; BB(0x00468b61);
    /* 00468b61: movzx ecx, byte ptr [0x7912e9] */ r_ecx = (u32)R8((u32)(0x7912e9u));
    /* 00468b68: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00468b6a: jne 0x468f6b */ if (!fZ) goto L_00468f6b;
L_00468b70:; BB(0x00468b70);
    /* 00468b70: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00468b76: call 0x47e280 */ r_esp -= 4; W32(r_esp, 0x468b7bu); f_0047e280();
    /* 00468b7b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00468b7d: jne 0x468f4b */ if (!fZ) goto L_00468f4b;
L_00468b83:; BB(0x00468b83);
    /* 00468b83: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00468b89: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x468b8eu); f_0047e3b0();
    /* 00468b8e: mov dword ptr [ebp - 0x274], eax */ W32((u32)(r_ebp+0xfffffd8cu), r_eax);
    /* 00468b94: lea edx, [ebp - 0x270] */ r_edx = (u32)(r_ebp+0xfffffd90u);
    /* 00468b9a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00468b9b: mov ecx, dword ptr [ebp - 0x274] */ r_ecx = R32((u32)(r_ebp+0xfffffd8cu));
    /* 00468ba1: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x468ba6u); f_004c7c40();
    /* 00468ba6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00468bad: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00468baf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00468bb1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00468bb3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00468bb5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00468bb7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00468bb9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00468bbb: lea eax, [ebp - 0x268] */ r_eax = (u32)(r_ebp+0xfffffd98u);
    /* 00468bc1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00468bc2: lea ecx, [ebp - 0x270] */ r_ecx = (u32)(r_ebp+0xfffffd90u);
    /* 00468bc8: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x468bcdu); f_00485940();
    /* 00468bcd: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00468bd1: mov ecx, dword ptr [0x791398] */ r_ecx = R32((u32)(0x791398u));
    /* 00468bd7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00468bd8: lea edx, [ebp - 0x292] */ r_edx = (u32)(r_ebp+0xfffffd6eu);
    /* 00468bde: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00468bdf: lea ecx, [ebp - 0x268] */ r_ecx = (u32)(r_ebp+0xfffffd98u);
    /* 00468be5: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x468beau); f_004a2160();
    /* 00468bea: mov ecx, eax */ r_ecx = r_eax;
    /* 00468bec: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x468bf1u); f_004a1e10();
    /* 00468bf1: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00468bf4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00468bf6: jne 0x468cc7 */ if (!fZ) goto L_00468cc7;
L_00468bfc:; BB(0x00468bfc);
    /* 00468bfc: mov ecx, dword ptr [0x7913d4] */ r_ecx = R32((u32)(0x7913d4u));
    /* 00468c02: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00468c03: lea edx, [ebp - 0x293] */ r_edx = (u32)(r_ebp+0xfffffd6du);
    /* 00468c09: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00468c0a: lea ecx, [ebp - 0x268] */ r_ecx = (u32)(r_ebp+0xfffffd98u);
    /* 00468c10: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x468c15u); f_004a2160();
    /* 00468c15: mov ecx, eax */ r_ecx = r_eax;
    /* 00468c17: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x468c1cu); f_004a1e10();
    /* 00468c1c: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00468c1f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00468c21: jne 0x468cc7 */ if (!fZ) goto L_00468cc7;
L_00468c27:; BB(0x00468c27);
    /* 00468c27: mov ecx, dword ptr [0x7913a0] */ r_ecx = R32((u32)(0x7913a0u));
    /* 00468c2d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00468c2e: lea edx, [ebp - 0x294] */ r_edx = (u32)(r_ebp+0xfffffd6cu);
    /* 00468c34: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00468c35: lea ecx, [ebp - 0x268] */ r_ecx = (u32)(r_ebp+0xfffffd98u);
    /* 00468c3b: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x468c40u); f_004a2160();
    /* 00468c40: mov ecx, eax */ r_ecx = r_eax;
    /* 00468c42: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x468c47u); f_004a1e10();
    /* 00468c47: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00468c4a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00468c4c: jne 0x468cc7 */ if (!fZ) goto L_00468cc7;
L_00468c4e:; BB(0x00468c4e);
    /* 00468c4e: mov ecx, dword ptr [0x79140c] */ r_ecx = R32((u32)(0x79140cu));
    /* 00468c54: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00468c55: lea edx, [ebp - 0x295] */ r_edx = (u32)(r_ebp+0xfffffd6bu);
    /* 00468c5b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00468c5c: lea ecx, [ebp - 0x268] */ r_ecx = (u32)(r_ebp+0xfffffd98u);
    /* 00468c62: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x468c67u); f_004a2160();
    /* 00468c67: mov ecx, eax */ r_ecx = r_eax;
    /* 00468c69: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x468c6eu); f_004a1e10();
    /* 00468c6e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00468c71: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00468c73: jne 0x468cc7 */ if (!fZ) goto L_00468cc7;
L_00468c75:; BB(0x00468c75);
    /* 00468c75: mov ecx, dword ptr [0x791394] */ r_ecx = R32((u32)(0x791394u));
    /* 00468c7b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00468c7c: lea edx, [ebp - 0x296] */ r_edx = (u32)(r_ebp+0xfffffd6au);
    /* 00468c82: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00468c83: lea ecx, [ebp - 0x268] */ r_ecx = (u32)(r_ebp+0xfffffd98u);
    /* 00468c89: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x468c8eu); f_004a2160();
    /* 00468c8e: mov ecx, eax */ r_ecx = r_eax;
    /* 00468c90: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x468c95u); f_004a1e10();
    /* 00468c95: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00468c98: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00468c9a: jne 0x468cc7 */ if (!fZ) goto L_00468cc7;
L_00468c9c:; BB(0x00468c9c);
    /* 00468c9c: mov ecx, dword ptr [0x791418] */ r_ecx = R32((u32)(0x791418u));
    /* 00468ca2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00468ca3: lea edx, [ebp - 0x297] */ r_edx = (u32)(r_ebp+0xfffffd69u);
    /* 00468ca9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00468caa: lea ecx, [ebp - 0x268] */ r_ecx = (u32)(r_ebp+0xfffffd98u);
    /* 00468cb0: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x468cb5u); f_004a2160();
    /* 00468cb5: mov ecx, eax */ r_ecx = r_eax;
    /* 00468cb7: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x468cbcu); f_004a1e10();
    /* 00468cbc: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00468cbf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00468cc1: je 0x468e85 */ if (fZ) goto L_00468e85;
L_00468cc7:; BB(0x00468cc7);
    /* 00468cc7: mov ecx, dword ptr [0x791398] */ r_ecx = R32((u32)(0x791398u));
    /* 00468ccd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00468cce: lea edx, [ebp - 0x298] */ r_edx = (u32)(r_ebp+0xfffffd68u);
    /* 00468cd4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00468cd5: lea ecx, [ebp - 0x268] */ r_ecx = (u32)(r_ebp+0xfffffd98u);
    /* 00468cdb: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x468ce0u); f_004a2160();
    /* 00468ce0: mov ecx, eax */ r_ecx = r_eax;
    /* 00468ce2: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x468ce7u); f_004a1e10();
    /* 00468ce7: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00468cea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00468cec: je 0x468d0b */ if (fZ) goto L_00468d0b;
L_00468cee:; BB(0x00468cee);
    /* 00468cee: push 0x6bb458 */ { u32 v = 0x6bb458u; r_esp -= 4; W32(r_esp, v); }
    /* 00468cf3: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x468cf8u); f_00630f40();
    /* 00468cf8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00468cfb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00468cfc: lea ecx, [ebp - 0x1f4] */ r_ecx = (u32)(r_ebp+0xfffffe0cu);
    /* 00468d02: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00468d03: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x468d08u); f_00686d8e();
    /* 00468d08: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00468d0b:; BB(0x00468d0b);
    /* 00468d0b: mov edx, dword ptr [0x7913d4] */ r_edx = R32((u32)(0x7913d4u));
    /* 00468d11: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00468d12: lea eax, [ebp - 0x299] */ r_eax = (u32)(r_ebp+0xfffffd67u);
    /* 00468d18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00468d19: lea ecx, [ebp - 0x268] */ r_ecx = (u32)(r_ebp+0xfffffd98u);
    /* 00468d1f: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x468d24u); f_004a2160();
    /* 00468d24: mov ecx, eax */ r_ecx = r_eax;
    /* 00468d26: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x468d2bu); f_004a1e10();
    /* 00468d2b: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00468d2e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00468d30: je 0x468d4f */ if (fZ) goto L_00468d4f;
L_00468d32:; BB(0x00468d32);
    /* 00468d32: push 0x6bb43c */ { u32 v = 0x6bb43cu; r_esp -= 4; W32(r_esp, v); }
    /* 00468d37: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x468d3cu); f_00630f40();
    /* 00468d3c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00468d3f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00468d40: lea edx, [ebp - 0x1f4] */ r_edx = (u32)(r_ebp+0xfffffe0cu);
    /* 00468d46: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00468d47: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x468d4cu); f_00686d8e();
    /* 00468d4c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00468d4f:; BB(0x00468d4f);
    /* 00468d4f: mov eax, dword ptr [0x7913a0] */ r_eax = R32((u32)(0x7913a0u));
    /* 00468d54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00468d55: lea ecx, [ebp - 0x29a] */ r_ecx = (u32)(r_ebp+0xfffffd66u);
    /* 00468d5b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00468d5c: lea ecx, [ebp - 0x268] */ r_ecx = (u32)(r_ebp+0xfffffd98u);
    /* 00468d62: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x468d67u); f_004a2160();
    /* 00468d67: mov ecx, eax */ r_ecx = r_eax;
    /* 00468d69: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x468d6eu); f_004a1e10();
    /* 00468d6e: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00468d71: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00468d73: je 0x468d92 */ if (fZ) goto L_00468d92;
L_00468d75:; BB(0x00468d75);
    /* 00468d75: push 0x6bb424 */ { u32 v = 0x6bb424u; r_esp -= 4; W32(r_esp, v); }
    /* 00468d7a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x468d7fu); f_00630f40();
    /* 00468d7f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00468d82: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00468d83: lea eax, [ebp - 0x1f4] */ r_eax = (u32)(r_ebp+0xfffffe0cu);
    /* 00468d89: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00468d8a: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x468d8fu); f_00686d8e();
    /* 00468d8f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00468d92:; BB(0x00468d92);
    /* 00468d92: mov ecx, dword ptr [0x79140c] */ r_ecx = R32((u32)(0x79140cu));
    /* 00468d98: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00468d99: lea edx, [ebp - 0x29b] */ r_edx = (u32)(r_ebp+0xfffffd65u);
    /* 00468d9f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00468da0: lea ecx, [ebp - 0x268] */ r_ecx = (u32)(r_ebp+0xfffffd98u);
    /* 00468da6: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x468dabu); f_004a2160();
    /* 00468dab: mov ecx, eax */ r_ecx = r_eax;
    /* 00468dad: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x468db2u); f_004a1e10();
    /* 00468db2: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00468db5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00468db7: je 0x468dd6 */ if (fZ) goto L_00468dd6;
L_00468db9:; BB(0x00468db9);
    /* 00468db9: push 0x6bb408 */ { u32 v = 0x6bb408u; r_esp -= 4; W32(r_esp, v); }
    /* 00468dbe: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x468dc3u); f_00630f40();
    /* 00468dc3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00468dc6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00468dc7: lea ecx, [ebp - 0x1f4] */ r_ecx = (u32)(r_ebp+0xfffffe0cu);
    /* 00468dcd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00468dce: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x468dd3u); f_00686d8e();
    /* 00468dd3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00468dd6:; BB(0x00468dd6);
    /* 00468dd6: mov edx, dword ptr [0x791394] */ r_edx = R32((u32)(0x791394u));
    /* 00468ddc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00468ddd: lea eax, [ebp - 0x29c] */ r_eax = (u32)(r_ebp+0xfffffd64u);
    /* 00468de3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00468de4: lea ecx, [ebp - 0x268] */ r_ecx = (u32)(r_ebp+0xfffffd98u);
    /* 00468dea: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x468defu); f_004a2160();
    /* 00468def: mov ecx, eax */ r_ecx = r_eax;
    /* 00468df1: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x468df6u); f_004a1e10();
    /* 00468df6: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00468df9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00468dfb: je 0x468e1a */ if (fZ) goto L_00468e1a;
L_00468dfd:; BB(0x00468dfd);
    /* 00468dfd: push 0x6ba7c8 */ { u32 v = 0x6ba7c8u; r_esp -= 4; W32(r_esp, v); }
    /* 00468e02: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x468e07u); f_00630f40();
    /* 00468e07: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00468e0a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00468e0b: lea edx, [ebp - 0x1f4] */ r_edx = (u32)(r_ebp+0xfffffe0cu);
    /* 00468e11: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00468e12: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x468e17u); f_00686d8e();
    /* 00468e17: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00468e1a:; BB(0x00468e1a);
    /* 00468e1a: mov eax, dword ptr [0x791418] */ r_eax = R32((u32)(0x791418u));
    /* 00468e1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00468e20: lea ecx, [ebp - 0x29d] */ r_ecx = (u32)(r_ebp+0xfffffd63u);
    /* 00468e26: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00468e27: lea ecx, [ebp - 0x268] */ r_ecx = (u32)(r_ebp+0xfffffd98u);
    /* 00468e2d: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x468e32u); f_004a2160();
    /* 00468e32: mov ecx, eax */ r_ecx = r_eax;
    /* 00468e34: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x468e39u); f_004a1e10();
    /* 00468e39: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00468e3c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00468e3e: je 0x468e5d */ if (fZ) goto L_00468e5d;
L_00468e40:; BB(0x00468e40);
    /* 00468e40: push 0x6ba774 */ { u32 v = 0x6ba774u; r_esp -= 4; W32(r_esp, v); }
    /* 00468e45: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x468e4au); f_00630f40();
    /* 00468e4a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00468e4d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00468e4e: lea eax, [ebp - 0x1f4] */ r_eax = (u32)(r_ebp+0xfffffe0cu);
    /* 00468e54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00468e55: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x468e5au); f_00686d8e();
    /* 00468e5a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00468e5d:; BB(0x00468e5d);
    /* 00468e5d: lea ecx, [ebp - 0x1f4] */ r_ecx = (u32)(r_ebp+0xfffffe0cu);
    /* 00468e63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00468e64: push 0x6bb3ec */ { u32 v = 0x6bb3ecu; r_esp -= 4; W32(r_esp, v); }
    /* 00468e69: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x468e6eu); f_00630f40();
    /* 00468e6e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00468e71: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00468e72: push 0x7907b8 */ { u32 v = 0x7907b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00468e77: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x468e7du); call_ind(t); }
    /* 00468e7d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00468e80: jmp 0x468f28 */ goto L_00468f28;
L_00468e85:; BB(0x00468e85);
    /* 00468e85: mov edx, dword ptr [0x791380] */ r_edx = R32((u32)(0x791380u));
    /* 00468e8b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00468e8c: lea eax, [ebp - 0x29e] */ r_eax = (u32)(r_ebp+0xfffffd62u);
    /* 00468e92: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00468e93: lea ecx, [ebp - 0x268] */ r_ecx = (u32)(r_ebp+0xfffffd98u);
    /* 00468e99: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x468e9eu); f_004a2160();
    /* 00468e9e: mov ecx, eax */ r_ecx = r_eax;
    /* 00468ea0: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x468ea5u); f_004a1e10();
    /* 00468ea5: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00468ea8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00468eaa: je 0x468ec9 */ if (fZ) goto L_00468ec9;
L_00468eac:; BB(0x00468eac);
    /* 00468eac: push 0x6bb3cc */ { u32 v = 0x6bb3ccu; r_esp -= 4; W32(r_esp, v); }
    /* 00468eb1: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x468eb6u); f_00630f40();
    /* 00468eb6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00468eb9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00468eba: push 0x7907b8 */ { u32 v = 0x7907b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00468ebf: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x468ec4u); f_00686d8e();
    /* 00468ec4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00468ec7: jmp 0x468f28 */ goto L_00468f28;
L_00468ec9:; BB(0x00468ec9);
    /* 00468ec9: mov edx, dword ptr [0x7913b0] */ r_edx = R32((u32)(0x7913b0u));
    /* 00468ecf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00468ed0: lea eax, [ebp - 0x29f] */ r_eax = (u32)(r_ebp+0xfffffd61u);
    /* 00468ed6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00468ed7: lea ecx, [ebp - 0x268] */ r_ecx = (u32)(r_ebp+0xfffffd98u);
    /* 00468edd: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x468ee2u); f_004a2160();
    /* 00468ee2: mov ecx, eax */ r_ecx = r_eax;
    /* 00468ee4: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x468ee9u); f_004a1e10();
    /* 00468ee9: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00468eec: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00468eee: je 0x468f0d */ if (fZ) goto L_00468f0d;
L_00468ef0:; BB(0x00468ef0);
    /* 00468ef0: push 0x6bb3ac */ { u32 v = 0x6bb3acu; r_esp -= 4; W32(r_esp, v); }
    /* 00468ef5: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x468efau); f_00630f40();
    /* 00468efa: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00468efd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00468efe: push 0x7907b8 */ { u32 v = 0x7907b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00468f03: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x468f08u); f_00686d8e();
    /* 00468f08: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00468f0b: jmp 0x468f28 */ goto L_00468f28;
L_00468f0d:; BB(0x00468f0d);
    /* 00468f0d: push 0x6bb38c */ { u32 v = 0x6bb38cu; r_esp -= 4; W32(r_esp, v); }
    /* 00468f12: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x468f17u); f_00630f40();
    /* 00468f17: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00468f1a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00468f1b: push 0x7907b8 */ { u32 v = 0x7907b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00468f20: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x468f25u); f_00686d8e();
    /* 00468f25: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00468f28:; BB(0x00468f28);
    /* 00468f28: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00468f2c: lea ecx, [ebp - 0x268] */ r_ecx = (u32)(r_ebp+0xfffffd98u);
    /* 00468f32: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x468f37u); f_004a20f0();
    /* 00468f37: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00468f3e: lea ecx, [ebp - 0x270] */ r_ecx = (u32)(r_ebp+0xfffffd90u);
    /* 00468f44: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x468f49u); f_00484470();
    /* 00468f49: jmp 0x468f66 */ goto L_00468f66;
L_00468f4b:; BB(0x00468f4b);
    /* 00468f4b: push 0x6bb370 */ { u32 v = 0x6bb370u; r_esp -= 4; W32(r_esp, v); }
    /* 00468f50: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x468f55u); f_00630f40();
    /* 00468f55: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00468f58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00468f59: push 0x7907b8 */ { u32 v = 0x7907b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00468f5e: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x468f63u); f_00686d8e();
    /* 00468f63: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00468f66:; BB(0x00468f66);
    /* 00468f66: jmp 0x46947c */ goto L_0046947c;
L_00468f6b:; BB(0x00468f6b);
    /* 00468f6b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00468f71: call 0x47e280 */ r_esp -= 4; W32(r_esp, 0x468f76u); f_0047e280();
    /* 00468f76: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00468f78: jne 0x469215 */ if (!fZ) goto L_00469215;
L_00468f7e:; BB(0x00468f7e);
    /* 00468f7e: push 0x6bb350 */ { u32 v = 0x6bb350u; r_esp -= 4; W32(r_esp, v); }
    /* 00468f83: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x468f88u); f_00630f40();
    /* 00468f88: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00468f8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00468f8c: push 0x7907b8 */ { u32 v = 0x7907b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00468f91: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x468f96u); f_00686d8e();
    /* 00468f96: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00468f99: mov word ptr [ebp - 0x14], 0 */ W16((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00468f9f: jmp 0x468fad */ goto L_00468fad;
L_00468fa1:; BB(0x00468fa1);
    /* 00468fa1: mov dx, word ptr [ebp - 0x14] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffecu))) & 0xffffu);
    /* 00468fa5: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00468fa9: mov word ptr [ebp - 0x14], dx */ W16((u32)(r_ebp+0xffffffecu), (u16)r_edx);
L_00468fad:; BB(0x00468fad);
    /* 00468fad: movsx esi, word ptr [ebp - 0x14] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 00468fb1: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00468fb7: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x468fbcu); f_0047f950();
    /* 00468fbc: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00468fbe: jge 0x469210 */ if ((fS==fO)) goto L_00469210;
L_00468fc4:; BB(0x00468fc4);
    /* 00468fc4: movsx eax, word ptr [ebp - 0x14] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 00468fc8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00468fc9: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00468fcf: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x468fd4u); f_0047e390();
    /* 00468fd4: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00468fd7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00468fda: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x468fdfu); f_004c6cb0();
    /* 00468fdf: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00468fe2: je 0x46920b */ if (fZ) goto L_0046920b;
L_00468fe8:; BB(0x00468fe8);
    /* 00468fe8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00468feb: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x468ff0u); f_004c7010();
    /* 00468ff0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00468ff3: je 0x469006 */ if (fZ) goto L_00469006;
L_00468ff5:; BB(0x00468ff5);
    /* 00468ff5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00468ff8: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x468ffdu); f_004c7010();
    /* 00468ffd: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00469000: jne 0x46920b */ if (!fZ) goto L_0046920b;
L_00469006:; BB(0x00469006);
    /* 00469006: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00469009: movzx edx, byte ptr [ecx + 0x1c] */ r_edx = (u32)R8((u32)(r_ecx+0x1cu));
    /* 0046900d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046900f: je 0x469026 */ if (fZ) goto L_00469026;
L_00469011:; BB(0x00469011);
    /* 00469011: push 0x6bb338 */ { u32 v = 0x6bb338u; r_esp -= 4; W32(r_esp, v); }
    /* 00469016: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x46901bu); f_00630f40();
    /* 0046901b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046901e: mov dword ptr [ebp - 0x2f8], eax */ W32((u32)(r_ebp+0xfffffd08u), r_eax);
    /* 00469024: jmp 0x469039 */ goto L_00469039;
L_00469026:; BB(0x00469026);
    /* 00469026: push 0x6bb324 */ { u32 v = 0x6bb324u; r_esp -= 4; W32(r_esp, v); }
    /* 0046902b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x469030u); f_00630f40();
    /* 00469030: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00469033: mov dword ptr [ebp - 0x2f8], eax */ W32((u32)(r_ebp+0xfffffd08u), r_eax);
L_00469039:; BB(0x00469039);
    /* 00469039: mov eax, dword ptr [ebp - 0x2f8] */ r_eax = R32((u32)(r_ebp+0xfffffd08u));
    /* 0046903f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00469040: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00469043: call 0x4c6150 */ r_esp -= 4; W32(r_esp, 0x469048u); f_004c6150();
    /* 00469048: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00469049: push 0x6bb304 */ { u32 v = 0x6bb304u; r_esp -= 4; W32(r_esp, v); }
    /* 0046904e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x469053u); f_00630f40();
    /* 00469053: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00469056: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00469057: lea ecx, [ebp - 0x1f4] */ r_ecx = (u32)(r_ebp+0xfffffe0cu);
    /* 0046905d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046905e: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x469064u); call_ind(t); }
    /* 00469064: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00469067: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0046906a: cmp dword ptr [edx + 0x18], 0 */ {  u32 a = R32((u32)(r_edx+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046906e: jne 0x46908f */ if (!fZ) goto L_0046908f;
L_00469070:; BB(0x00469070);
    /* 00469070: push 0x6bb2f0 */ { u32 v = 0x6bb2f0u; r_esp -= 4; W32(r_esp, v); }
    /* 00469075: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x46907au); f_00630f40();
    /* 0046907a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046907d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046907e: lea eax, [ebp - 0x1f4] */ r_eax = (u32)(r_ebp+0xfffffe0cu);
    /* 00469084: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00469085: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x46908au); f_00686ec6();
    /* 0046908a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046908d: jmp 0x4690c4 */ goto L_004690c4;
L_0046908f:; BB(0x0046908f);
    /* 0046908f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00469092: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 00469095: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00469096: push 0x6bb2d4 */ { u32 v = 0x6bb2d4u; r_esp -= 4; W32(r_esp, v); }
    /* 0046909b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4690a0u); f_00630f40();
    /* 004690a0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004690a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004690a4: lea eax, [ebp - 0x1f4] */ r_eax = (u32)(r_ebp+0xfffffe0cu);
    /* 004690aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004690ab: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x4690b0u); f_00686ecc();
    /* 004690b0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004690b3: lea ecx, [ebp + eax - 0x1f4] */ r_ecx = (u32)(r_ebp+r_eax+0xfffffe0cu);
    /* 004690ba: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004690bb: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4690c1u); call_ind(t); }
    /* 004690c1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004690c4:; BB(0x004690c4);
    /* 004690c4: lea edx, [ebp - 0x1f4] */ r_edx = (u32)(r_ebp+0xfffffe0cu);
    /* 004690ca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004690cb: push 0x7907b8 */ { u32 v = 0x7907b8u; r_esp -= 4; W32(r_esp, v); }
    /* 004690d0: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x4690d5u); f_00686ec6();
    /* 004690d5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004690d8: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004690db: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 004690de: mov dword ptr [ebp - 0x2fc], ecx */ W32((u32)(r_ebp+0xfffffd04u), r_ecx);
    /* 004690e4: cmp dword ptr [ebp - 0x2fc], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffd04u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004690eb: ja 0x4691f0 */ if ((!fC&&!fZ)) goto L_004691f0;
L_004690f1:; BB(0x004690f1);
    /* 004690f1: mov edx, dword ptr [ebp - 0x2fc] */ r_edx = R32((u32)(r_ebp+0xfffffd04u));
    /* 004690f7: jmp dword ptr [edx*4 + 0x469cd8] */ { u32 t = R32((u32)(r_edx*4+0x469cd8u)); switch (t) { case 0x4690feu: goto L_004690fe; case 0x46911eu: goto L_0046911e; case 0x469166u: goto L_00469166; case 0x4691abu: goto L_004691ab; case 0x469395u: goto L_00469395; case 0x4693ddu: goto L_004693dd; case 0x469422u: goto L_00469422; case 0x46943fu: goto L_0046943f; default: UNSUP(0x004690f7, "jump table entry is not a known target"); } }
L_004690fe:; BB(0x004690fe);
    /* 004690fe: push 0x6bb2bc */ { u32 v = 0x6bb2bcu; r_esp -= 4; W32(r_esp, v); }
    /* 00469103: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x469108u); f_00630f40();
    /* 00469108: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046910b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046910c: push 0x7907b8 */ { u32 v = 0x7907b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00469111: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x469116u); f_00686ec6();
    /* 00469116: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00469119: jmp 0x46920b */ goto L_0046920b;
L_0046911e:; BB(0x0046911e);
    /* 0046911e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00469121: movzx ecx, byte ptr [eax + 0x1c] */ r_ecx = (u32)R8((u32)(r_eax+0x1cu));
    /* 00469125: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00469127: je 0x469146 */ if (fZ) goto L_00469146;
L_00469129:; BB(0x00469129);
    /* 00469129: push 0x6bb2a4 */ { u32 v = 0x6bb2a4u; r_esp -= 4; W32(r_esp, v); }
    /* 0046912e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x469133u); f_00630f40();
    /* 00469133: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00469136: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00469137: push 0x7907b8 */ { u32 v = 0x7907b8u; r_esp -= 4; W32(r_esp, v); }
    /* 0046913c: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x469141u); f_00686ec6();
    /* 00469141: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00469144: jmp 0x469161 */ goto L_00469161;
L_00469146:; BB(0x00469146);
    /* 00469146: push 0x6bb28c */ { u32 v = 0x6bb28cu; r_esp -= 4; W32(r_esp, v); }
    /* 0046914b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x469150u); f_00630f40();
    /* 00469150: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00469153: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00469154: push 0x7907b8 */ { u32 v = 0x7907b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00469159: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x46915eu); f_00686ec6();
    /* 0046915e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00469161:; BB(0x00469161);
    /* 00469161: jmp 0x46920b */ goto L_0046920b;
L_00469166:; BB(0x00469166);
    /* 00469166: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00469169: movzx eax, byte ptr [edx + 0x1c] */ r_eax = (u32)R8((u32)(r_edx+0x1cu));
    /* 0046916d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046916f: je 0x46918e */ if (fZ) goto L_0046918e;
L_00469171:; BB(0x00469171);
    /* 00469171: push 0x6bb274 */ { u32 v = 0x6bb274u; r_esp -= 4; W32(r_esp, v); }
    /* 00469176: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x46917bu); f_00630f40();
    /* 0046917b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046917e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046917f: push 0x7907b8 */ { u32 v = 0x7907b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00469184: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x469189u); f_00686ec6();
    /* 00469189: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046918c: jmp 0x4691a9 */ goto L_004691a9;
L_0046918e:; BB(0x0046918e);
    /* 0046918e: push 0x6bb25c */ { u32 v = 0x6bb25cu; r_esp -= 4; W32(r_esp, v); }
    /* 00469193: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x469198u); f_00630f40();
    /* 00469198: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046919b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046919c: push 0x7907b8 */ { u32 v = 0x7907b8u; r_esp -= 4; W32(r_esp, v); }
    /* 004691a1: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x4691a6u); f_00686ec6();
    /* 004691a6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004691a9:; BB(0x004691a9);
    /* 004691a9: jmp 0x46920b */ goto L_0046920b;
L_004691ab:; BB(0x004691ab);
    /* 004691ab: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004691ae: movzx edx, byte ptr [ecx + 0x1c] */ r_edx = (u32)R8((u32)(r_ecx+0x1cu));
    /* 004691b2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004691b4: je 0x4691d3 */ if (fZ) goto L_004691d3;
L_004691b6:; BB(0x004691b6);
    /* 004691b6: push 0x6bb244 */ { u32 v = 0x6bb244u; r_esp -= 4; W32(r_esp, v); }
    /* 004691bb: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4691c0u); f_00630f40();
    /* 004691c0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004691c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004691c4: push 0x7907b8 */ { u32 v = 0x7907b8u; r_esp -= 4; W32(r_esp, v); }
    /* 004691c9: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x4691ceu); f_00686ec6();
    /* 004691ce: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004691d1: jmp 0x4691ee */ goto L_004691ee;
L_004691d3:; BB(0x004691d3);
    /* 004691d3: push 0x6bb22c */ { u32 v = 0x6bb22cu; r_esp -= 4; W32(r_esp, v); }
    /* 004691d8: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4691ddu); f_00630f40();
    /* 004691dd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004691e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004691e1: push 0x7907b8 */ { u32 v = 0x7907b8u; r_esp -= 4; W32(r_esp, v); }
    /* 004691e6: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x4691ebu); f_00686ec6();
    /* 004691eb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004691ee:; BB(0x004691ee);
    /* 004691ee: jmp 0x46920b */ goto L_0046920b;
L_004691f0:; BB(0x004691f0);
    /* 004691f0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 004691f2: jne 0x46920b */ if (!fZ) goto L_0046920b;
L_004691f4:; BB(0x004691f4);
    /* 004691f4: push 0x354 */ { u32 v = 0x354u; r_esp -= 4; W32(r_esp, v); }
    /* 004691f9: push 0x6bb210 */ { u32 v = 0x6bb210u; r_esp -= 4; W32(r_esp, v); }
    /* 004691fe: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00469203: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x469208u); f_005e9f20();
    /* 00469208: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0046920b:; BB(0x0046920b);
    /* 0046920b: jmp 0x468fa1 */ goto L_00468fa1;
L_00469210:; BB(0x00469210);
    /* 00469210: jmp 0x46947c */ goto L_0046947c;
L_00469215:; BB(0x00469215);
    /* 00469215: push 0x6bb350 */ { u32 v = 0x6bb350u; r_esp -= 4; W32(r_esp, v); }
    /* 0046921a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x46921fu); f_00630f40();
    /* 0046921f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00469222: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00469223: push 0x7907b8 */ { u32 v = 0x7907b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00469228: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x46922du); f_00686d8e();
    /* 0046922d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00469230: mov word ptr [ebp - 0x14], 0 */ W16((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00469236: jmp 0x469244 */ goto L_00469244;
L_00469238:; BB(0x00469238);
    /* 00469238: mov dx, word ptr [ebp - 0x14] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffecu))) & 0xffffu);
    /* 0046923c: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00469240: mov word ptr [ebp - 0x14], dx */ W16((u32)(r_ebp+0xffffffecu), (u16)r_edx);
L_00469244:; BB(0x00469244);
    /* 00469244: movsx esi, word ptr [ebp - 0x14] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 00469248: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046924e: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x469253u); f_0047f950();
    /* 00469253: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00469255: jge 0x46947c */ if ((fS==fO)) goto L_0046947c;
L_0046925b:; BB(0x0046925b);
    /* 0046925b: movsx eax, word ptr [ebp - 0x14] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 0046925f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00469260: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00469266: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x46926bu); f_0047e390();
    /* 0046926b: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0046926e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00469271: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x469276u); f_004c6cb0();
    /* 00469276: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00469279: je 0x469477 */ if (fZ) goto L_00469477;
L_0046927f:; BB(0x0046927f);
    /* 0046927f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00469282: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x469287u); f_004c7010();
    /* 00469287: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046928a: je 0x46929d */ if (fZ) goto L_0046929d;
L_0046928c:; BB(0x0046928c);
    /* 0046928c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0046928f: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x469294u); f_004c7010();
    /* 00469294: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00469297: jne 0x469477 */ if (!fZ) goto L_00469477;
L_0046929d:; BB(0x0046929d);
    /* 0046929d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004692a0: movzx edx, byte ptr [ecx + 0x1c] */ r_edx = (u32)R8((u32)(r_ecx+0x1cu));
    /* 004692a4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004692a6: je 0x4692bd */ if (fZ) goto L_004692bd;
L_004692a8:; BB(0x004692a8);
    /* 004692a8: push 0x6bb338 */ { u32 v = 0x6bb338u; r_esp -= 4; W32(r_esp, v); }
    /* 004692ad: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4692b2u); f_00630f40();
    /* 004692b2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004692b5: mov dword ptr [ebp - 0x300], eax */ W32((u32)(r_ebp+0xfffffd00u), r_eax);
    /* 004692bb: jmp 0x4692d0 */ goto L_004692d0;
L_004692bd:; BB(0x004692bd);
    /* 004692bd: push 0x6bb324 */ { u32 v = 0x6bb324u; r_esp -= 4; W32(r_esp, v); }
    /* 004692c2: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4692c7u); f_00630f40();
    /* 004692c7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004692ca: mov dword ptr [ebp - 0x300], eax */ W32((u32)(r_ebp+0xfffffd00u), r_eax);
L_004692d0:; BB(0x004692d0);
    /* 004692d0: mov eax, dword ptr [ebp - 0x300] */ r_eax = R32((u32)(r_ebp+0xfffffd00u));
    /* 004692d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004692d7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004692da: call 0x4c6150 */ r_esp -= 4; W32(r_esp, 0x4692dfu); f_004c6150();
    /* 004692df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004692e0: push 0x6bb304 */ { u32 v = 0x6bb304u; r_esp -= 4; W32(r_esp, v); }
    /* 004692e5: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4692eau); f_00630f40();
    /* 004692ea: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004692ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004692ee: lea ecx, [ebp - 0x1f4] */ r_ecx = (u32)(r_ebp+0xfffffe0cu);
    /* 004692f4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004692f5: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4692fbu); call_ind(t); }
    /* 004692fb: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004692fe: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00469301: cmp dword ptr [edx + 0x18], 0 */ {  u32 a = R32((u32)(r_edx+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00469305: jne 0x469326 */ if (!fZ) goto L_00469326;
L_00469307:; BB(0x00469307);
    /* 00469307: push 0x6bb1f4 */ { u32 v = 0x6bb1f4u; r_esp -= 4; W32(r_esp, v); }
    /* 0046930c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x469311u); f_00630f40();
    /* 00469311: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00469314: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00469315: lea eax, [ebp - 0x1f4] */ r_eax = (u32)(r_ebp+0xfffffe0cu);
    /* 0046931b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046931c: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x469321u); f_00686ec6();
    /* 00469321: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00469324: jmp 0x46935b */ goto L_0046935b;
L_00469326:; BB(0x00469326);
    /* 00469326: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00469329: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 0046932c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046932d: push 0x6bb2d4 */ { u32 v = 0x6bb2d4u; r_esp -= 4; W32(r_esp, v); }
    /* 00469332: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x469337u); f_00630f40();
    /* 00469337: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046933a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046933b: lea eax, [ebp - 0x1f4] */ r_eax = (u32)(r_ebp+0xfffffe0cu);
    /* 00469341: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00469342: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x469347u); f_00686ecc();
    /* 00469347: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046934a: lea ecx, [ebp + eax - 0x1f4] */ r_ecx = (u32)(r_ebp+r_eax+0xfffffe0cu);
    /* 00469351: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00469352: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x469358u); call_ind(t); }
    /* 00469358: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0046935b:; BB(0x0046935b);
    /* 0046935b: lea edx, [ebp - 0x1f4] */ r_edx = (u32)(r_ebp+0xfffffe0cu);
    /* 00469361: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00469362: push 0x7907b8 */ { u32 v = 0x7907b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00469367: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x46936cu); f_00686ec6();
    /* 0046936c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046936f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00469372: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 00469375: mov dword ptr [ebp - 0x304], ecx */ W32((u32)(r_ebp+0xfffffcfcu), r_ecx);
    /* 0046937b: cmp dword ptr [ebp - 0x304], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffcfcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00469382: ja 0x46945c */ if ((!fC&&!fZ)) goto L_0046945c;
L_00469388:; BB(0x00469388);
    /* 00469388: mov edx, dword ptr [ebp - 0x304] */ r_edx = R32((u32)(r_ebp+0xfffffcfcu));
    /* 0046938e: jmp dword ptr [edx*4 + 0x469ce8] */ { u32 t = R32((u32)(r_edx*4+0x469ce8u)); switch (t) { case 0x4691abu: goto L_004691ab; case 0x469166u: goto L_00469166; case 0x46911eu: goto L_0046911e; case 0x4690feu: goto L_004690fe; case 0x469395u: goto L_00469395; case 0x4693ddu: goto L_004693dd; case 0x469422u: goto L_00469422; case 0x46943fu: goto L_0046943f; default: UNSUP(0x0046938e, "jump table entry is not a known target"); } }
L_00469395:; BB(0x00469395);
    /* 00469395: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00469398: movzx ecx, byte ptr [eax + 0x1c] */ r_ecx = (u32)R8((u32)(r_eax+0x1cu));
    /* 0046939c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046939e: je 0x4693bd */ if (fZ) goto L_004693bd;
L_004693a0:; BB(0x004693a0);
    /* 004693a0: push 0x6bb1dc */ { u32 v = 0x6bb1dcu; r_esp -= 4; W32(r_esp, v); }
    /* 004693a5: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4693aau); f_00630f40();
    /* 004693aa: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004693ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004693ae: push 0x7907b8 */ { u32 v = 0x7907b8u; r_esp -= 4; W32(r_esp, v); }
    /* 004693b3: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x4693b8u); f_00686ec6();
    /* 004693b8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004693bb: jmp 0x4693d8 */ goto L_004693d8;
L_004693bd:; BB(0x004693bd);
    /* 004693bd: push 0x6bb1c4 */ { u32 v = 0x6bb1c4u; r_esp -= 4; W32(r_esp, v); }
    /* 004693c2: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4693c7u); f_00630f40();
    /* 004693c7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004693ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004693cb: push 0x7907b8 */ { u32 v = 0x7907b8u; r_esp -= 4; W32(r_esp, v); }
    /* 004693d0: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x4693d5u); f_00686ec6();
    /* 004693d5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004693d8:; BB(0x004693d8);
    /* 004693d8: jmp 0x469477 */ goto L_00469477;
L_004693dd:; BB(0x004693dd);
    /* 004693dd: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004693e0: movzx eax, byte ptr [edx + 0x1c] */ r_eax = (u32)R8((u32)(r_edx+0x1cu));
    /* 004693e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004693e6: je 0x469405 */ if (fZ) goto L_00469405;
L_004693e8:; BB(0x004693e8);
    /* 004693e8: push 0x6bb1ac */ { u32 v = 0x6bb1acu; r_esp -= 4; W32(r_esp, v); }
    /* 004693ed: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4693f2u); f_00630f40();
    /* 004693f2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004693f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004693f6: push 0x7907b8 */ { u32 v = 0x7907b8u; r_esp -= 4; W32(r_esp, v); }
    /* 004693fb: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x469400u); f_00686ec6();
    /* 00469400: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00469403: jmp 0x469420 */ goto L_00469420;
L_00469405:; BB(0x00469405);
    /* 00469405: push 0x6bb194 */ { u32 v = 0x6bb194u; r_esp -= 4; W32(r_esp, v); }
    /* 0046940a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x46940fu); f_00630f40();
    /* 0046940f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00469412: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00469413: push 0x7907b8 */ { u32 v = 0x7907b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00469418: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x46941du); f_00686ec6();
    /* 0046941d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00469420:; BB(0x00469420);
    /* 00469420: jmp 0x469477 */ goto L_00469477;
L_00469422:; BB(0x00469422);
    /* 00469422: push 0x6bb17c */ { u32 v = 0x6bb17cu; r_esp -= 4; W32(r_esp, v); }
    /* 00469427: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x46942cu); f_00630f40();
    /* 0046942c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046942f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00469430: push 0x7907b8 */ { u32 v = 0x7907b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00469435: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x46943au); f_00686ec6();
    /* 0046943a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046943d: jmp 0x469477 */ goto L_00469477;
L_0046943f:; BB(0x0046943f);
    /* 0046943f: push 0x6bb164 */ { u32 v = 0x6bb164u; r_esp -= 4; W32(r_esp, v); }
    /* 00469444: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x469449u); f_00630f40();
    /* 00469449: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046944c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046944d: push 0x7907b8 */ { u32 v = 0x7907b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00469452: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x469457u); f_00686ec6();
    /* 00469457: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046945a: jmp 0x469477 */ goto L_00469477;
L_0046945c:; BB(0x0046945c);
    /* 0046945c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0046945e: jne 0x469477 */ if (!fZ) goto L_00469477;
L_00469460:; BB(0x00469460);
    /* 00469460: push 0x37b */ { u32 v = 0x37bu; r_esp -= 4; W32(r_esp, v); }
    /* 00469465: push 0x6bb210 */ { u32 v = 0x6bb210u; r_esp -= 4; W32(r_esp, v); }
    /* 0046946a: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0046946f: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x469474u); f_005e9f20();
    /* 00469474: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00469477:; BB(0x00469477);
    /* 00469477: jmp 0x469238 */ goto L_00469238;
L_0046947c:; BB(0x0046947c);
    /* 0046947c: push 0x7907b8 */ { u32 v = 0x7907b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00469481: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00469483: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00469485: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 0046948b: call 0x57be80 */ r_esp -= 4; W32(r_esp, 0x469490u); f_0057be80();
L_00469490:; BB(0x00469490);
    /* 00469490: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00469496: call 0x47e1d0 */ r_esp -= 4; W32(r_esp, 0x46949bu); f_0047e1d0();
    /* 0046949b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046949e: jne 0x469c4f */ if (!fZ) goto L_00469c4f;
L_004694a4:; BB(0x004694a4);
    /* 004694a4: mov word ptr [ebp - 0x290], 0 */ W16((u32)(r_ebp+0xfffffd70u), 0x0u);
    /* 004694ad: mov word ptr [ebp - 0x28c], 0 */ W16((u32)(r_ebp+0xfffffd74u), 0x0u);
    /* 004694b6: lea ecx, [ebp - 0x284] */ r_ecx = (u32)(r_ebp+0xfffffd7cu);
    /* 004694bc: call 0x4a20d0 */ r_esp -= 4; W32(r_esp, 0x4694c1u); f_004a20d0();
    /* 004694c1: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 004694c8: lea ecx, [ebp - 0x278] */ r_ecx = (u32)(r_ebp+0xfffffd88u);
    /* 004694ce: call 0x4a20d0 */ r_esp -= 4; W32(r_esp, 0x4694d3u); f_004a20d0();
    /* 004694d3: mov byte ptr [ebp - 4], 3 */ W8((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 004694d7: lea eax, [ebp - 0x280] */ r_eax = (u32)(r_ebp+0xfffffd80u);
    /* 004694dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004694de: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004694e4: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4694e9u); f_0047e3b0();
    /* 004694e9: mov ecx, eax */ r_ecx = r_eax;
    /* 004694eb: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x4694f0u); f_004c7c40();
    /* 004694f0: mov byte ptr [ebp - 4], 4 */ W8((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 004694f4: mov byte ptr [ebp - 0x285], 0 */ W8((u32)(r_ebp+0xfffffd7bu), 0x0u);
    /* 004694fb: mov word ptr [ebp - 0x14], 0 */ W16((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00469501: jmp 0x46950f */ goto L_0046950f;
L_00469503:; BB(0x00469503);
    /* 00469503: mov cx, word ptr [ebp - 0x14] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffecu))) & 0xffffu);
    /* 00469507: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0046950b: mov word ptr [ebp - 0x14], cx */ W16((u32)(r_ebp+0xffffffecu), (u16)r_ecx);
L_0046950f:; BB(0x0046950f);
    /* 0046950f: movsx esi, word ptr [ebp - 0x14] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 00469513: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00469519: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x46951eu); f_0047f950();
    /* 0046951e: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00469520: jge 0x46962a */ if ((fS==fO)) goto L_0046962a;
L_00469526:; BB(0x00469526);
    /* 00469526: movsx edx, word ptr [ebp - 0x14] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 0046952a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046952b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00469531: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x469536u); f_0047e390();
    /* 00469536: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00469539: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0046953c: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x469541u); f_004c7010();
    /* 00469541: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00469544: je 0x469557 */ if (fZ) goto L_00469557;
L_00469546:; BB(0x00469546);
    /* 00469546: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00469549: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x46954eu); f_004c7010();
    /* 0046954e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00469551: jne 0x469625 */ if (!fZ) goto L_00469625;
L_00469557:; BB(0x00469557);
    /* 00469557: lea eax, [ebp - 0x2a8] */ r_eax = (u32)(r_ebp+0xfffffd58u);
    /* 0046955d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046955e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00469561: call 0x4c8300 */ r_esp -= 4; W32(r_esp, 0x469566u); f_004c8300();
    /* 00469566: mov dword ptr [ebp - 0x308], eax */ W32((u32)(r_ebp+0xfffffcf8u), r_eax);
    /* 0046956c: mov ecx, dword ptr [ebp - 0x308] */ r_ecx = R32((u32)(r_ebp+0xfffffcf8u));
    /* 00469572: mov dword ptr [ebp - 0x30c], ecx */ W32((u32)(r_ebp+0xfffffcf4u), r_ecx);
    /* 00469578: mov byte ptr [ebp - 4], 5 */ W8((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 0046957c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046957e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00469580: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00469582: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00469584: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00469586: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00469588: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046958a: lea edx, [ebp - 0x2ac] */ r_edx = (u32)(r_ebp+0xfffffd54u);
    /* 00469590: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00469591: mov ecx, dword ptr [ebp - 0x30c] */ r_ecx = R32((u32)(r_ebp+0xfffffcf4u));
    /* 00469597: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x46959cu); f_00485940();
    /* 0046959c: mov dword ptr [ebp - 0x310], eax */ W32((u32)(r_ebp+0xfffffcf0u), r_eax);
    /* 004695a2: mov eax, dword ptr [ebp - 0x310] */ r_eax = R32((u32)(r_ebp+0xfffffcf0u));
    /* 004695a8: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 004695aa: mov dword ptr [ebp - 0x278], ecx */ W32((u32)(r_ebp+0xfffffd88u), r_ecx);
    /* 004695b0: lea ecx, [ebp - 0x2ac] */ r_ecx = (u32)(r_ebp+0xfffffd54u);
    /* 004695b6: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x4695bbu); f_004a20f0();
    /* 004695bb: mov byte ptr [ebp - 4], 4 */ W8((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 004695bf: lea ecx, [ebp - 0x2a8] */ r_ecx = (u32)(r_ebp+0xfffffd58u);
    /* 004695c5: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x4695cau); f_00484470();
    /* 004695ca: movzx edx, byte ptr [ebp - 0x285] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffd7bu));
    /* 004695d1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004695d3: jne 0x4695f5 */ if (!fZ) goto L_004695f5;
L_004695d5:; BB(0x004695d5);
    /* 004695d5: mov eax, dword ptr [ebp - 0x278] */ r_eax = R32((u32)(r_ebp+0xfffffd88u));
    /* 004695db: mov dword ptr [ebp - 0x284], eax */ W32((u32)(r_ebp+0xfffffd7cu), r_eax);
    /* 004695e1: mov cx, word ptr [ebp - 0x14] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffecu))) & 0xffffu);
    /* 004695e5: mov word ptr [ebp - 0x290], cx */ W16((u32)(r_ebp+0xfffffd70u), (u16)r_ecx);
    /* 004695ec: mov byte ptr [ebp - 0x285], 1 */ W8((u32)(r_ebp+0xfffffd7bu), 0x1u);
    /* 004695f3: jmp 0x469625 */ goto L_00469625;
L_004695f5:; BB(0x004695f5);
    /* 004695f5: lea edx, [ebp - 0x284] */ r_edx = (u32)(r_ebp+0xfffffd7cu);
    /* 004695fb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004695fc: lea ecx, [ebp - 0x278] */ r_ecx = (u32)(r_ebp+0xfffffd88u);
    /* 00469602: call 0x4a2440 */ r_esp -= 4; W32(r_esp, 0x469607u); f_004a2440();
    /* 00469607: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0046960a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046960c: je 0x469625 */ if (fZ) goto L_00469625;
L_0046960e:; BB(0x0046960e);
    /* 0046960e: mov ecx, dword ptr [ebp - 0x278] */ r_ecx = R32((u32)(r_ebp+0xfffffd88u));
    /* 00469614: mov dword ptr [ebp - 0x284], ecx */ W32((u32)(r_ebp+0xfffffd7cu), r_ecx);
    /* 0046961a: mov dx, word ptr [ebp - 0x14] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffecu))) & 0xffffu);
    /* 0046961e: mov word ptr [ebp - 0x290], dx */ W16((u32)(r_ebp+0xfffffd70u), (u16)r_edx);
L_00469625:; BB(0x00469625);
    /* 00469625: jmp 0x469503 */ goto L_00469503;
L_0046962a:; BB(0x0046962a);
    /* 0046962a: movsx eax, word ptr [ebp - 0x290] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffd70u));
    /* 00469631: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00469632: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00469638: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x46963du); f_0047e390();
    /* 0046963d: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00469640: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00469643: mov ecx, dword ptr [ecx + 0x24] */ r_ecx = R32((u32)(r_ecx+0x24u));
    /* 00469646: call 0x5f54a0 */ r_esp -= 4; W32(r_esp, 0x46964bu); f_005f54a0();
    /* 0046964b: mov byte ptr [ebp - 0x291], al */ W8((u32)(r_ebp+0xfffffd6fu), (u8)r_eax);
    /* 00469651: lea edx, [ebp - 0x2ad] */ r_edx = (u32)(r_ebp+0xfffffd53u);
    /* 00469657: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00469658: lea ecx, [ebp - 0x284] */ r_ecx = (u32)(r_ebp+0xfffffd7cu);
    /* 0046965e: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x469663u); f_004a2160();
    /* 00469663: mov al, byte ptr [eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 00469665: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00469666: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00469669: call 0x4da4d0 */ r_esp -= 4; W32(r_esp, 0x46966eu); f_004da4d0();
    /* 0046966e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00469671: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 00469674: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00469677: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0046967a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0046967c: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00469682: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x469684u); call_ind(t); }
    /* 00469684: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00469685: lea ecx, [ebp - 0x1f4] */ r_ecx = (u32)(r_ebp+0xfffffe0cu);
    /* 0046968b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046968c: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x469691u); f_00686d8e();
    /* 00469691: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00469694: movzx edx, byte ptr [ebp - 0x291] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffd6fu));
    /* 0046969b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046969d: jne 0x4696a7 */ if (!fZ) goto L_004696a7;
L_0046969f:; BB(0x0046969f);
    /* 0046969f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004696a2: call 0x4da890 */ r_esp -= 4; W32(r_esp, 0x4696a7u); f_004da890();
L_004696a7:; BB(0x004696a7);
    /* 004696a7: lea eax, [ebp - 0x1f4] */ r_eax = (u32)(r_ebp+0xfffffe0cu);
    /* 004696ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004696ae: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004696b1: call 0x4c6150 */ r_esp -= 4; W32(r_esp, 0x4696b6u); f_004c6150();
    /* 004696b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004696b7: push 0x6bb144 */ { u32 v = 0x6bb144u; r_esp -= 4; W32(r_esp, v); }
    /* 004696bc: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4696c1u); f_00630f40();
    /* 004696c1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004696c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004696c5: push 0x7907b8 */ { u32 v = 0x7907b8u; r_esp -= 4; W32(r_esp, v); }
    /* 004696ca: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4696d0u); call_ind(t); }
    /* 004696d0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004696d3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004696d9: call 0x47e280 */ r_esp -= 4; W32(r_esp, 0x4696deu); f_0047e280();
    /* 004696de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004696e0: je 0x46995c */ if (fZ) goto L_0046995c;
L_004696e6:; BB(0x004696e6);
    /* 004696e6: mov byte ptr [ebp - 0x285], 0 */ W8((u32)(r_ebp+0xfffffd7bu), 0x0u);
    /* 004696ed: mov word ptr [ebp - 0x14], 0 */ W16((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 004696f3: jmp 0x469701 */ goto L_00469701;
L_004696f5:; BB(0x004696f5);
    /* 004696f5: mov cx, word ptr [ebp - 0x14] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffecu))) & 0xffffu);
    /* 004696f9: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004696fd: mov word ptr [ebp - 0x14], cx */ W16((u32)(r_ebp+0xffffffecu), (u16)r_ecx);
L_00469701:; BB(0x00469701);
    /* 00469701: movsx esi, word ptr [ebp - 0x14] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 00469705: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046970b: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x469710u); f_0047f950();
    /* 00469710: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00469712: jge 0x469862 */ if ((fS==fO)) goto L_00469862;
L_00469718:; BB(0x00469718);
    /* 00469718: movsx edx, word ptr [ebp - 0x14] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 0046971c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046971d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00469723: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x469728u); f_0047e390();
    /* 00469728: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0046972b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0046972e: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x469733u); f_004c7010();
    /* 00469733: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00469736: je 0x469749 */ if (fZ) goto L_00469749;
L_00469738:; BB(0x00469738);
    /* 00469738: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0046973b: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x469740u); f_004c7010();
    /* 00469740: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00469743: jne 0x46985d */ if (!fZ) goto L_0046985d;
L_00469749:; BB(0x00469749);
    /* 00469749: lea eax, [ebp - 0x2b8] */ r_eax = (u32)(r_ebp+0xfffffd48u);
    /* 0046974f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00469750: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00469753: call 0x4c8300 */ r_esp -= 4; W32(r_esp, 0x469758u); f_004c8300();
    /* 00469758: mov dword ptr [ebp - 0x314], eax */ W32((u32)(r_ebp+0xfffffcecu), r_eax);
    /* 0046975e: mov ecx, dword ptr [ebp - 0x314] */ r_ecx = R32((u32)(r_ebp+0xfffffcecu));
    /* 00469764: mov dword ptr [ebp - 0x318], ecx */ W32((u32)(r_ebp+0xfffffce8u), r_ecx);
    /* 0046976a: mov byte ptr [ebp - 4], 6 */ W8((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 0046976e: mov ecx, dword ptr [ebp - 0x318] */ r_ecx = R32((u32)(r_ebp+0xfffffce8u));
    /* 00469774: call 0x484810 */ r_esp -= 4; W32(r_esp, 0x469779u); f_00484810();
    /* 00469779: mov word ptr [ebp - 0x28c], ax */ W16((u32)(r_ebp+0xfffffd74u), (u16)r_eax);
    /* 00469780: mov byte ptr [ebp - 4], 4 */ W8((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 00469784: lea ecx, [ebp - 0x2b8] */ r_ecx = (u32)(r_ebp+0xfffffd48u);
    /* 0046978a: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x46978fu); f_00484470();
    /* 0046978f: lea edx, [ebp - 0x2c0] */ r_edx = (u32)(r_ebp+0xfffffd40u);
    /* 00469795: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00469796: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00469799: call 0x4c8300 */ r_esp -= 4; W32(r_esp, 0x46979eu); f_004c8300();
    /* 0046979e: mov dword ptr [ebp - 0x31c], eax */ W32((u32)(r_ebp+0xfffffce4u), r_eax);
    /* 004697a4: mov eax, dword ptr [ebp - 0x31c] */ r_eax = R32((u32)(r_ebp+0xfffffce4u));
    /* 004697aa: mov dword ptr [ebp - 0x320], eax */ W32((u32)(r_ebp+0xfffffce0u), r_eax);
    /* 004697b0: mov byte ptr [ebp - 4], 7 */ W8((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 004697b4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004697b6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004697b8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004697ba: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004697bc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004697be: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004697c0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004697c2: lea ecx, [ebp - 0x2c4] */ r_ecx = (u32)(r_ebp+0xfffffd3cu);
    /* 004697c8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004697c9: mov ecx, dword ptr [ebp - 0x320] */ r_ecx = R32((u32)(r_ebp+0xfffffce0u));
    /* 004697cf: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x4697d4u); f_00485940();
    /* 004697d4: mov dword ptr [ebp - 0x324], eax */ W32((u32)(r_ebp+0xfffffcdcu), r_eax);
    /* 004697da: mov edx, dword ptr [ebp - 0x324] */ r_edx = R32((u32)(r_ebp+0xfffffcdcu));
    /* 004697e0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004697e2: mov dword ptr [ebp - 0x278], eax */ W32((u32)(r_ebp+0xfffffd88u), r_eax);
    /* 004697e8: lea ecx, [ebp - 0x2c4] */ r_ecx = (u32)(r_ebp+0xfffffd3cu);
    /* 004697ee: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x4697f3u); f_004a20f0();
    /* 004697f3: mov byte ptr [ebp - 4], 4 */ W8((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 004697f7: lea ecx, [ebp - 0x2c0] */ r_ecx = (u32)(r_ebp+0xfffffd40u);
    /* 004697fd: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x469802u); f_00484470();
    /* 00469802: movzx ecx, byte ptr [ebp - 0x285] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffd7bu));
    /* 00469809: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046980b: jne 0x46982d */ if (!fZ) goto L_0046982d;
L_0046980d:; BB(0x0046980d);
    /* 0046980d: mov edx, dword ptr [ebp - 0x278] */ r_edx = R32((u32)(r_ebp+0xfffffd88u));
    /* 00469813: mov dword ptr [ebp - 0x284], edx */ W32((u32)(r_ebp+0xfffffd7cu), r_edx);
    /* 00469819: mov ax, word ptr [ebp - 0x14] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffecu))) & 0xffffu);
    /* 0046981d: mov word ptr [ebp - 0x290], ax */ W16((u32)(r_ebp+0xfffffd70u), (u16)r_eax);
    /* 00469824: mov byte ptr [ebp - 0x285], 1 */ W8((u32)(r_ebp+0xfffffd7bu), 0x1u);
    /* 0046982b: jmp 0x46985d */ goto L_0046985d;
L_0046982d:; BB(0x0046982d);
    /* 0046982d: lea ecx, [ebp - 0x284] */ r_ecx = (u32)(r_ebp+0xfffffd7cu);
    /* 00469833: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00469834: lea ecx, [ebp - 0x278] */ r_ecx = (u32)(r_ebp+0xfffffd88u);
    /* 0046983a: call 0x4a2550 */ r_esp -= 4; W32(r_esp, 0x46983fu); f_004a2550();
    /* 0046983f: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00469842: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00469844: je 0x46985d */ if (fZ) goto L_0046985d;
L_00469846:; BB(0x00469846);
    /* 00469846: mov eax, dword ptr [ebp - 0x278] */ r_eax = R32((u32)(r_ebp+0xfffffd88u));
    /* 0046984c: mov dword ptr [ebp - 0x284], eax */ W32((u32)(r_ebp+0xfffffd7cu), r_eax);
    /* 00469852: mov cx, word ptr [ebp - 0x14] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffecu))) & 0xffffu);
    /* 00469856: mov word ptr [ebp - 0x290], cx */ W16((u32)(r_ebp+0xfffffd70u), (u16)r_ecx);
L_0046985d:; BB(0x0046985d);
    /* 0046985d: jmp 0x4696f5 */ goto L_004696f5;
L_00469862:; BB(0x00469862);
    /* 00469862: movsx edx, word ptr [ebp - 0x290] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffd70u));
    /* 00469869: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046986a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00469870: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x469875u); f_0047e390();
    /* 00469875: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00469878: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0046987b: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0046987e: call 0x5f54a0 */ r_esp -= 4; W32(r_esp, 0x469883u); f_005f54a0();
    /* 00469883: mov byte ptr [ebp - 0x291], al */ W8((u32)(r_ebp+0xfffffd6fu), (u8)r_eax);
    /* 00469889: mov ecx, dword ptr [ebp - 0x284] */ r_ecx = R32((u32)(r_ebp+0xfffffd7cu));
    /* 0046988f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00469890: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00469893: call 0x4db070 */ r_esp -= 4; W32(r_esp, 0x469898u); f_004db070();
    /* 00469898: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0046989b: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 0046989e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004698a1: mov ecx, dword ptr [ecx + 0x2c] */ r_ecx = R32((u32)(r_ecx+0x2cu));
    /* 004698a4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004698a6: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 004698ac: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4698aeu); call_ind(t); }
    /* 004698ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004698af: lea ecx, [ebp - 0x1f4] */ r_ecx = (u32)(r_ebp+0xfffffe0cu);
    /* 004698b5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004698b6: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x4698bbu); f_00686d8e();
    /* 004698bb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004698be: movzx edx, byte ptr [ebp - 0x291] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffd6fu));
    /* 004698c5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004698c7: jne 0x4698d1 */ if (!fZ) goto L_004698d1;
L_004698c9:; BB(0x004698c9);
    /* 004698c9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004698cc: call 0x4db610 */ r_esp -= 4; W32(r_esp, 0x4698d1u); f_004db610();
L_004698d1:; BB(0x004698d1);
    /* 004698d1: movsx eax, word ptr [ebp - 0x28c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffd74u));
    /* 004698d8: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004698db: jl 0x46995c */ if ((fS!=fO)) goto L_0046995c;
L_004698dd:; BB(0x004698dd);
    /* 004698dd: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 004698e2: mov ecx, dword ptr [0x7913a4] */ r_ecx = R32((u32)(0x7913a4u));
    /* 004698e8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004698e9: mov edx, dword ptr [0x791404] */ r_edx = R32((u32)(0x791404u));
    /* 004698ef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004698f0: mov eax, dword ptr [0x7913f8] */ r_eax = R32((u32)(0x7913f8u));
    /* 004698f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004698f6: mov ecx, dword ptr [0x791410] */ r_ecx = R32((u32)(0x791410u));
    /* 004698fc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004698fd: mov edx, dword ptr [0x791390] */ r_edx = R32((u32)(0x791390u));
    /* 00469903: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00469904: lea ecx, [ebp - 0x278] */ r_ecx = (u32)(r_ebp+0xfffffd88u);
    /* 0046990a: call 0x4a2100 */ r_esp -= 4; W32(r_esp, 0x46990fu); f_004a2100();
    /* 0046990f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00469910: lea ecx, [ebp - 0x284] */ r_ecx = (u32)(r_ebp+0xfffffd7cu);
    /* 00469916: call 0x4a2570 */ r_esp -= 4; W32(r_esp, 0x46991bu); f_004a2570();
    /* 0046991b: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0046991e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00469920: je 0x46995c */ if (fZ) goto L_0046995c;
L_00469922:; BB(0x00469922);
    /* 00469922: lea ecx, [ebp - 0x1f4] */ r_ecx = (u32)(r_ebp+0xfffffe0cu);
    /* 00469928: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00469929: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0046992c: call 0x4c6150 */ r_esp -= 4; W32(r_esp, 0x469931u); f_004c6150();
    /* 00469931: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00469932: push 0x6bb128 */ { u32 v = 0x6bb128u; r_esp -= 4; W32(r_esp, v); }
    /* 00469937: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x46993cu); f_00630f40();
    /* 0046993c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046993f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00469940: push 0x7907b8 */ { u32 v = 0x7907b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00469945: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x46994au); f_00686ecc();
    /* 0046994a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046994d: add eax, 0x7907b8 */ {  u32 a = r_eax; u32 b = 0x7907b8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00469952: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00469953: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x469959u); call_ind(t); }
    /* 00469959: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0046995c:; BB(0x0046995c);
    /* 0046995c: lea ecx, [ebp - 0x280] */ r_ecx = (u32)(r_ebp+0xfffffd80u);
    /* 00469962: call 0x484810 */ r_esp -= 4; W32(r_esp, 0x469967u); f_00484810();
    /* 00469967: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0046996a: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046996d: jl 0x469c0b */ if ((fS!=fO)) goto L_00469c0b;
L_00469973:; BB(0x00469973);
    /* 00469973: mov word ptr [ebp - 0x14], 0 */ W16((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00469979: jmp 0x469987 */ goto L_00469987;
L_0046997b:; BB(0x0046997b);
    /* 0046997b: mov ax, word ptr [ebp - 0x14] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffecu))) & 0xffffu);
    /* 0046997f: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00469983: mov word ptr [ebp - 0x14], ax */ W16((u32)(r_ebp+0xffffffecu), (u16)r_eax);
L_00469987:; BB(0x00469987);
    /* 00469987: movsx esi, word ptr [ebp - 0x14] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 0046998b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00469991: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x469996u); f_0047f950();
    /* 00469996: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00469998: jge 0x469c0b */ if ((fS==fO)) goto L_00469c0b;
L_0046999e:; BB(0x0046999e);
    /* 0046999e: movsx ecx, word ptr [ebp - 0x14] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 004699a2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004699a3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004699a9: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4699aeu); f_0047e390();
    /* 004699ae: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004699b1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004699b4: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x4699b9u); f_004c7010();
    /* 004699b9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004699bc: je 0x4699cf */ if (fZ) goto L_004699cf;
L_004699be:; BB(0x004699be);
    /* 004699be: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004699c1: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x4699c6u); f_004c7010();
    /* 004699c6: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004699c9: jne 0x469c06 */ if (!fZ) goto L_00469c06;
L_004699cf:; BB(0x004699cf);
    /* 004699cf: mov byte ptr [ebp - 0x1f4], 0 */ W8((u32)(r_ebp+0xfffffe0cu), 0x0u);
    /* 004699d6: lea edx, [ebp - 0x2cc] */ r_edx = (u32)(r_ebp+0xfffffd34u);
    /* 004699dc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004699dd: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004699e0: call 0x4c8300 */ r_esp -= 4; W32(r_esp, 0x4699e5u); f_004c8300();
    /* 004699e5: mov dword ptr [ebp - 0x328], eax */ W32((u32)(r_ebp+0xfffffcd8u), r_eax);
    /* 004699eb: mov eax, dword ptr [ebp - 0x328] */ r_eax = R32((u32)(r_ebp+0xfffffcd8u));
    /* 004699f1: mov dword ptr [ebp - 0x32c], eax */ W32((u32)(r_ebp+0xfffffcd4u), r_eax);
    /* 004699f7: mov byte ptr [ebp - 4], 8 */ W8((u32)(r_ebp+0xfffffffcu), 0x8u);
    /* 004699fb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004699fd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004699ff: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00469a01: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00469a03: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00469a05: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00469a07: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00469a09: lea ecx, [ebp - 0x2d0] */ r_ecx = (u32)(r_ebp+0xfffffd30u);
    /* 00469a0f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00469a10: mov ecx, dword ptr [ebp - 0x32c] */ r_ecx = R32((u32)(r_ebp+0xfffffcd4u));
    /* 00469a16: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x469a1bu); f_00485940();
    /* 00469a1b: mov dword ptr [ebp - 0x330], eax */ W32((u32)(r_ebp+0xfffffcd0u), r_eax);
    /* 00469a21: mov edx, dword ptr [ebp - 0x330] */ r_edx = R32((u32)(r_ebp+0xfffffcd0u));
    /* 00469a27: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00469a29: mov dword ptr [ebp - 0x278], eax */ W32((u32)(r_ebp+0xfffffd88u), r_eax);
    /* 00469a2f: lea ecx, [ebp - 0x2d0] */ r_ecx = (u32)(r_ebp+0xfffffd30u);
    /* 00469a35: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x469a3au); f_004a20f0();
    /* 00469a3a: mov byte ptr [ebp - 4], 4 */ W8((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 00469a3e: lea ecx, [ebp - 0x2cc] */ r_ecx = (u32)(r_ebp+0xfffffd34u);
    /* 00469a44: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x469a49u); f_00484470();
    /* 00469a49: mov ecx, dword ptr [0x791418] */ r_ecx = R32((u32)(0x791418u));
    /* 00469a4f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00469a50: lea edx, [ebp - 0x2d1] */ r_edx = (u32)(r_ebp+0xfffffd2fu);
    /* 00469a56: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00469a57: lea ecx, [ebp - 0x278] */ r_ecx = (u32)(r_ebp+0xfffffd88u);
    /* 00469a5d: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x469a62u); f_004a2160();
    /* 00469a62: mov ecx, eax */ r_ecx = r_eax;
    /* 00469a64: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x469a69u); f_004a1e10();
    /* 00469a69: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00469a6c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00469a6e: je 0x469a8d */ if (fZ) goto L_00469a8d;
L_00469a70:; BB(0x00469a70);
    /* 00469a70: push 0x6bb100 */ { u32 v = 0x6bb100u; r_esp -= 4; W32(r_esp, v); }
    /* 00469a75: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x469a7au); f_00630f40();
    /* 00469a7a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00469a7d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00469a7e: lea ecx, [ebp - 0x1f4] */ r_ecx = (u32)(r_ebp+0xfffffe0cu);
    /* 00469a84: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00469a85: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x469a8au); f_00686d8e();
    /* 00469a8a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00469a8d:; BB(0x00469a8d);
    /* 00469a8d: mov edx, dword ptr [0x791380] */ r_edx = R32((u32)(0x791380u));
    /* 00469a93: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00469a94: lea eax, [ebp - 0x2d2] */ r_eax = (u32)(r_ebp+0xfffffd2eu);
    /* 00469a9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00469a9b: lea ecx, [ebp - 0x278] */ r_ecx = (u32)(r_ebp+0xfffffd88u);
    /* 00469aa1: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x469aa6u); f_004a2160();
    /* 00469aa6: mov ecx, eax */ r_ecx = r_eax;
    /* 00469aa8: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x469aadu); f_004a1e10();
    /* 00469aad: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00469ab0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00469ab2: je 0x469ad1 */ if (fZ) goto L_00469ad1;
L_00469ab4:; BB(0x00469ab4);
    /* 00469ab4: push 0x6bb0e4 */ { u32 v = 0x6bb0e4u; r_esp -= 4; W32(r_esp, v); }
    /* 00469ab9: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x469abeu); f_00630f40();
    /* 00469abe: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00469ac1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00469ac2: lea edx, [ebp - 0x1f4] */ r_edx = (u32)(r_ebp+0xfffffe0cu);
    /* 00469ac8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00469ac9: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x469aceu); f_00686d8e();
    /* 00469ace: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00469ad1:; BB(0x00469ad1);
    /* 00469ad1: lea eax, [ebp - 0x2dc] */ r_eax = (u32)(r_ebp+0xfffffd24u);
    /* 00469ad7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00469ad8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00469adb: call 0x4c8300 */ r_esp -= 4; W32(r_esp, 0x469ae0u); f_004c8300();
    /* 00469ae0: mov dword ptr [ebp - 0x334], eax */ W32((u32)(r_ebp+0xfffffcccu), r_eax);
    /* 00469ae6: mov ecx, dword ptr [ebp - 0x334] */ r_ecx = R32((u32)(r_ebp+0xfffffcccu));
    /* 00469aec: mov dword ptr [ebp - 0x338], ecx */ W32((u32)(r_ebp+0xfffffcc8u), r_ecx);
    /* 00469af2: mov byte ptr [ebp - 4], 9 */ W8((u32)(r_ebp+0xfffffffcu), 0x9u);
    /* 00469af6: mov ecx, dword ptr [ebp - 0x338] */ r_ecx = R32((u32)(r_ebp+0xfffffcc8u));
    /* 00469afc: call 0x484bf0 */ r_esp -= 4; W32(r_esp, 0x469b01u); f_00484bf0();
    /* 00469b01: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00469b04: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00469b06: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00469b09: setge al */ r_eax = (r_eax & 0xffffff00u) | ((((fS==fO)) ? 1 : 0) & 0xffu);
    /* 00469b0c: mov byte ptr [ebp - 0x2d3], al */ W8((u32)(r_ebp+0xfffffd2du), (u8)r_eax);
    /* 00469b12: mov byte ptr [ebp - 4], 4 */ W8((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 00469b16: lea ecx, [ebp - 0x2dc] */ r_ecx = (u32)(r_ebp+0xfffffd24u);
    /* 00469b1c: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x469b21u); f_00484470();
    /* 00469b21: movzx ecx, byte ptr [ebp - 0x2d3] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffd2du));
    /* 00469b28: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00469b2a: je 0x469b49 */ if (fZ) goto L_00469b49;
L_00469b2c:; BB(0x00469b2c);
    /* 00469b2c: push 0x6bb0cc */ { u32 v = 0x6bb0ccu; r_esp -= 4; W32(r_esp, v); }
    /* 00469b31: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x469b36u); f_00630f40();
    /* 00469b36: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00469b39: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00469b3a: lea edx, [ebp - 0x1f4] */ r_edx = (u32)(r_ebp+0xfffffe0cu);
    /* 00469b40: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00469b41: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x469b46u); f_00686d8e();
    /* 00469b46: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00469b49:; BB(0x00469b49);
    /* 00469b49: lea eax, [ebp - 0x2e8] */ r_eax = (u32)(r_ebp+0xfffffd18u);
    /* 00469b4f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00469b50: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00469b53: call 0x4c8300 */ r_esp -= 4; W32(r_esp, 0x469b58u); f_004c8300();
    /* 00469b58: mov dword ptr [ebp - 0x33c], eax */ W32((u32)(r_ebp+0xfffffcc4u), r_eax);
    /* 00469b5e: mov ecx, dword ptr [ebp - 0x33c] */ r_ecx = R32((u32)(r_ebp+0xfffffcc4u));
    /* 00469b64: mov dword ptr [ebp - 0x340], ecx */ W32((u32)(r_ebp+0xfffffcc0u), r_ecx);
    /* 00469b6a: mov byte ptr [ebp - 4], 0xa */ W8((u32)(r_ebp+0xfffffffcu), 0xau);
    /* 00469b6e: mov ecx, dword ptr [ebp - 0x340] */ r_ecx = R32((u32)(r_ebp+0xfffffcc0u));
    /* 00469b74: call 0x484db0 */ r_esp -= 4; W32(r_esp, 0x469b79u); f_00484db0();
    /* 00469b79: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00469b7c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00469b7e: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00469b81: setle al */ r_eax = (r_eax & 0xffffff00u) | ((((fZ||fS!=fO)) ? 1 : 0) & 0xffu);
    /* 00469b84: mov byte ptr [ebp - 0x2dd], al */ W8((u32)(r_ebp+0xfffffd23u), (u8)r_eax);
    /* 00469b8a: mov byte ptr [ebp - 4], 4 */ W8((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 00469b8e: lea ecx, [ebp - 0x2e8] */ r_ecx = (u32)(r_ebp+0xfffffd18u);
    /* 00469b94: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x469b99u); f_00484470();
    /* 00469b99: movzx ecx, byte ptr [ebp - 0x2dd] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffd23u));
    /* 00469ba0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00469ba2: je 0x469bc1 */ if (fZ) goto L_00469bc1;
L_00469ba4:; BB(0x00469ba4);
    /* 00469ba4: push 0x6bb0b0 */ { u32 v = 0x6bb0b0u; r_esp -= 4; W32(r_esp, v); }
    /* 00469ba9: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x469baeu); f_00630f40();
    /* 00469bae: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00469bb1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00469bb2: lea edx, [ebp - 0x1f4] */ r_edx = (u32)(r_ebp+0xfffffe0cu);
    /* 00469bb8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00469bb9: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x469bbeu); f_00686d8e();
    /* 00469bbe: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00469bc1:; BB(0x00469bc1);
    /* 00469bc1: movsx eax, byte ptr [ebp - 0x1f4] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffe0cu));
    /* 00469bc8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00469bca: je 0x469c06 */ if (fZ) goto L_00469c06;
L_00469bcc:; BB(0x00469bcc);
    /* 00469bcc: lea ecx, [ebp - 0x1f4] */ r_ecx = (u32)(r_ebp+0xfffffe0cu);
    /* 00469bd2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00469bd3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00469bd6: call 0x4c6150 */ r_esp -= 4; W32(r_esp, 0x469bdbu); f_004c6150();
    /* 00469bdb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00469bdc: push 0x6bb094 */ { u32 v = 0x6bb094u; r_esp -= 4; W32(r_esp, v); }
    /* 00469be1: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x469be6u); f_00630f40();
    /* 00469be6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00469be9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00469bea: push 0x7907b8 */ { u32 v = 0x7907b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00469bef: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x469bf4u); f_00686ecc();
    /* 00469bf4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00469bf7: add eax, 0x7907b8 */ {  u32 a = r_eax; u32 b = 0x7907b8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00469bfc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00469bfd: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x469c03u); call_ind(t); }
    /* 00469c03: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00469c06:; BB(0x00469c06);
    /* 00469c06: jmp 0x46997b */ goto L_0046997b;
L_00469c0b:; BB(0x00469c0b);
    /* 00469c0b: push 0x7907b8 */ { u32 v = 0x7907b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00469c10: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00469c12: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00469c14: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 00469c1a: call 0x57be80 */ r_esp -= 4; W32(r_esp, 0x469c1fu); f_0057be80();
    /* 00469c1f: mov byte ptr [ebp - 4], 3 */ W8((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00469c23: lea ecx, [ebp - 0x280] */ r_ecx = (u32)(r_ebp+0xfffffd80u);
    /* 00469c29: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x469c2eu); f_00484470();
    /* 00469c2e: mov byte ptr [ebp - 4], 2 */ W8((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00469c32: lea ecx, [ebp - 0x278] */ r_ecx = (u32)(r_ebp+0xfffffd88u);
    /* 00469c38: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x469c3du); f_004a20f0();
    /* 00469c3d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00469c44: lea ecx, [ebp - 0x284] */ r_ecx = (u32)(r_ebp+0xfffffd7cu);
    /* 00469c4a: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x469c4fu); f_004a20f0();
L_00469c4f:; BB(0x00469c4f);
    /* 00469c4f: mov edx, dword ptr [ebp - 0x2ec] */ r_edx = R32((u32)(r_ebp+0xfffffd14u));
    /* 00469c55: mov ax, word ptr [ebp + 0x14] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0x14u))) & 0xffffu);
    /* 00469c59: mov word ptr [edx + 0x1f4], ax */ W16((u32)(r_edx+0x1f4u), (u16)r_eax);
    /* 00469c60: mov ecx, dword ptr [ebp - 0x2ec] */ r_ecx = R32((u32)(r_ebp+0xfffffd14u));
    /* 00469c66: cmp dword ptr [ecx + 0x1ec], 0 */ {  u32 a = R32((u32)(r_ecx+0x1ecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00469c6d: je 0x469c8e */ if (fZ) goto L_00469c8e;
L_00469c6f:; BB(0x00469c6f);
    /* 00469c6f: mov edx, dword ptr [ebp - 0x2ec] */ r_edx = R32((u32)(r_ebp+0xfffffd14u));
    /* 00469c75: mov eax, dword ptr [edx + 0x1ec] */ r_eax = R32((u32)(r_edx+0x1ecu));
    /* 00469c7b: mov ecx, dword ptr [ebp - 0x2ec] */ r_ecx = R32((u32)(r_ebp+0xfffffd14u));
    /* 00469c81: mov ecx, dword ptr [ecx + 0x1ec] */ r_ecx = R32((u32)(r_ecx+0x1ecu));
    /* 00469c87: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00469c89: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00469c8c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x469c8eu); call_ind(t); }
L_00469c8e:; BB(0x00469c8e);
    /* 00469c8e: mov ecx, dword ptr [ebp - 0x2ec] */ r_ecx = R32((u32)(r_ebp+0xfffffd14u));
    /* 00469c94: cmp dword ptr [ecx + 0x1f0], 0 */ {  u32 a = R32((u32)(r_ecx+0x1f0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00469c9b: je 0x469cbc */ if (fZ) goto L_00469cbc;
L_00469c9d:; BB(0x00469c9d);
    /* 00469c9d: mov edx, dword ptr [ebp - 0x2ec] */ r_edx = R32((u32)(r_ebp+0xfffffd14u));
    /* 00469ca3: mov eax, dword ptr [edx + 0x1f0] */ r_eax = R32((u32)(r_edx+0x1f0u));
    /* 00469ca9: mov ecx, dword ptr [ebp - 0x2ec] */ r_ecx = R32((u32)(r_ebp+0xfffffd14u));
    /* 00469caf: mov ecx, dword ptr [ecx + 0x1f0] */ r_ecx = R32((u32)(r_ecx+0x1f0u));
    /* 00469cb5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00469cb7: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00469cba: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x469cbcu); call_ind(t); }
L_00469cbc:; BB(0x00469cbc);
    /* 00469cbc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00469cbf: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00469cc6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00469cc7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00469cc8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00469ccb: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00469ccd: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x469cd2u); f_00686d72();
    /* 00469cd2: mov esp, ebp */ r_esp = r_ebp;
    /* 00469cd4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00469cd5: ret 0x10 */ FN_RET(0x00467fe0); r_esp += 20; return;
}

void f_0046b950(void) /* PokerDialog::func_0046b950 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046b950);
    /* 0046b950: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046b951: mov ebp, esp */ r_ebp = r_esp;
    /* 0046b953: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0046b955: push 0x69f7c6 */ { u32 v = 0x69f7c6u; r_esp -= 4; W32(r_esp, v); }
    /* 0046b95a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0046b960: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046b961: sub esp, 0x4a0 */ {  u32 a = r_esp; u32 b = 0x4a0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0046b967: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0046b96c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0046b96e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0046b971: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0046b972: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046b973: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0046b976: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0046b97c: mov dword ptr [ebp - 0x4ac], ecx */ W32((u32)(r_ebp+0xfffffb54u), r_ecx);
    /* 0046b982: cmp dword ptr [ebp + 8], 1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046b986: jge 0x46b99f */ if ((fS==fO)) goto L_0046b99f;
L_0046b988:; BB(0x0046b988);
    /* 0046b988: push 0x533 */ { u32 v = 0x533u; r_esp -= 4; W32(r_esp, v); }
    /* 0046b98d: push 0x6bb210 */ { u32 v = 0x6bb210u; r_esp -= 4; W32(r_esp, v); }
    /* 0046b992: push 0x6bbc9c */ { u32 v = 0x6bbc9cu; r_esp -= 4; W32(r_esp, v); }
    /* 0046b997: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x46b99cu); f_005e9f20();
    /* 0046b99c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0046b99f:; BB(0x0046b99f);
    /* 0046b99f: cmp dword ptr [ebp + 8], 5 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046b9a3: jle 0x46b9bc */ if ((fZ||fS!=fO)) goto L_0046b9bc;
L_0046b9a5:; BB(0x0046b9a5);
    /* 0046b9a5: push 0x534 */ { u32 v = 0x534u; r_esp -= 4; W32(r_esp, v); }
    /* 0046b9aa: push 0x6bb210 */ { u32 v = 0x6bb210u; r_esp -= 4; W32(r_esp, v); }
    /* 0046b9af: push 0x6bbc84 */ { u32 v = 0x6bbc84u; r_esp -= 4; W32(r_esp, v); }
    /* 0046b9b4: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x46b9b9u); f_005e9f20();
    /* 0046b9b9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0046b9bc:; BB(0x0046b9bc);
    /* 0046b9bc: push 0x71c920 */ { u32 v = 0x71c920u; r_esp -= 4; W32(r_esp, v); }
    /* 0046b9c1: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0046b9c3: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 0046b9c9: call 0x57ab80 */ r_esp -= 4; W32(r_esp, 0x46b9ceu); f_0057ab80();
    /* 0046b9ce: mov edx, dword ptr [ebp - 0x4ac] */ r_edx = R32((u32)(r_ebp+0xfffffb54u));
    /* 0046b9d4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0046b9d7: mov dword ptr [edx + 0x21c], eax */ W32((u32)(r_edx+0x21cu), r_eax);
    /* 0046b9dd: mov ecx, dword ptr [ebp - 0x4ac] */ r_ecx = R32((u32)(r_ebp+0xfffffb54u));
    /* 0046b9e3: mov dword ptr [ecx + 0x220], 0 */ W32((u32)(r_ecx+0x220u), 0x0u);
    /* 0046b9ed: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046b9f3: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x46b9f8u); f_0047e3b0();
    /* 0046b9f8: mov dword ptr [ebp - 0x42c], eax */ W32((u32)(r_ebp+0xfffffbd4u), r_eax);
    /* 0046b9fe: push 0x186a1 */ { u32 v = 0x186a1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046ba03: mov edx, dword ptr [ebp - 0x4ac] */ r_edx = R32((u32)(r_ebp+0xfffffb54u));
    /* 0046ba09: mov eax, dword ptr [edx + 0x1e0] */ r_eax = R32((u32)(r_edx+0x1e0u));
    /* 0046ba0f: mov ecx, dword ptr [ebp - 0x4ac] */ r_ecx = R32((u32)(r_ebp+0xfffffb54u));
    /* 0046ba15: mov ecx, dword ptr [ecx + 0x1e0] */ r_ecx = R32((u32)(r_ecx+0x1e0u));
    /* 0046ba1b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0046ba1d: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 0046ba23: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46ba25u); call_ind(t); }
    /* 0046ba25: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0046ba27: mov ecx, dword ptr [ebp - 0x42c] */ r_ecx = R32((u32)(r_ebp+0xfffffbd4u));
    /* 0046ba2d: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0046ba30: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x46ba35u); f_0060ca40();
    /* 0046ba35: mov ecx, eax */ r_ecx = r_eax;
    /* 0046ba37: call 0x463e50 */ r_esp -= 4; W32(r_esp, 0x46ba3cu); f_00463e50();
    /* 0046ba3c: mov dword ptr [ebp - 0x420], eax */ W32((u32)(r_ebp+0xfffffbe0u), r_eax);
    /* 0046ba42: mov edx, dword ptr [ebp - 0x420] */ r_edx = R32((u32)(r_ebp+0xfffffbe0u));
    /* 0046ba48: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046ba49: mov eax, dword ptr [ebp - 0x4ac] */ r_eax = R32((u32)(r_ebp+0xfffffb54u));
    /* 0046ba4f: mov ecx, dword ptr [eax + 0x1e0] */ r_ecx = R32((u32)(r_eax+0x1e0u));
    /* 0046ba55: mov edx, dword ptr [ebp - 0x4ac] */ r_edx = R32((u32)(r_ebp+0xfffffb54u));
    /* 0046ba5b: mov eax, dword ptr [edx + 0x1e0] */ r_eax = R32((u32)(r_edx+0x1e0u));
    /* 0046ba61: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0046ba63: mov ecx, eax */ r_ecx = r_eax;
    /* 0046ba65: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0046ba6b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46ba6du); call_ind(t); }
    /* 0046ba6d: mov ecx, dword ptr [ebp - 0x420] */ r_ecx = R32((u32)(r_ebp+0xfffffbe0u));
    /* 0046ba73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046ba74: mov edx, dword ptr [ebp - 0x420] */ r_edx = R32((u32)(r_ebp+0xfffffbe0u));
    /* 0046ba7a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046ba7b: mov eax, dword ptr [ebp - 0x420] */ r_eax = R32((u32)(r_ebp+0xfffffbe0u));
    /* 0046ba81: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046ba82: mov ecx, dword ptr [ebp - 0x420] */ r_ecx = R32((u32)(r_ebp+0xfffffbe0u));
    /* 0046ba88: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046ba89: mov edx, dword ptr [ebp - 0x4ac] */ r_edx = R32((u32)(r_ebp+0xfffffb54u));
    /* 0046ba8f: mov ecx, dword ptr [edx + 0x1e0] */ r_ecx = R32((u32)(r_edx+0x1e0u));
    /* 0046ba95: call 0x6023d0 */ r_esp -= 4; W32(r_esp, 0x46ba9au); f_006023d0();
    /* 0046ba9a: mov eax, dword ptr [ebp - 0x4ac] */ r_eax = R32((u32)(r_ebp+0xfffffb54u));
    /* 0046baa0: mov ecx, dword ptr [eax + 0x1e0] */ r_ecx = R32((u32)(r_eax+0x1e0u));
    /* 0046baa6: mov byte ptr [ecx + 0x1dc], 0 */ W8((u32)(r_ecx+0x1dcu), 0x0u);
    /* 0046baad: push 0x6bbaf0 */ { u32 v = 0x6bbaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046bab2: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x46bab7u); f_00630f40();
    /* 0046bab7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046baba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046babb: mov edx, dword ptr [ebp - 0x4ac] */ r_edx = R32((u32)(r_ebp+0xfffffb54u));
    /* 0046bac1: mov eax, dword ptr [edx + 0x1f4] */ r_eax = R32((u32)(r_edx+0x1f4u));
    /* 0046bac7: mov ecx, dword ptr [ebp - 0x4ac] */ r_ecx = R32((u32)(r_ebp+0xfffffb54u));
    /* 0046bacd: mov ecx, dword ptr [ecx + 0x1f4] */ r_ecx = R32((u32)(r_ecx+0x1f4u));
    /* 0046bad3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0046bad5: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0046badb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46baddu); call_ind(t); }
    /* 0046badd: mov ecx, dword ptr [ebp - 0x4ac] */ r_ecx = R32((u32)(r_ebp+0xfffffb54u));
    /* 0046bae3: mov edx, dword ptr [ecx + 0x208] */ r_edx = R32((u32)(r_ecx+0x208u));
    /* 0046bae9: mov eax, dword ptr [ebp - 0x4ac] */ r_eax = R32((u32)(r_ebp+0xfffffb54u));
    /* 0046baef: mov ecx, dword ptr [eax + 0x208] */ r_ecx = R32((u32)(r_eax+0x208u));
    /* 0046baf5: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0046baf7: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0046bafa: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46bafcu); call_ind(t); }
    /* 0046bafc: push 0x186a1 */ { u32 v = 0x186a1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046bb01: mov ecx, dword ptr [ebp - 0x4ac] */ r_ecx = R32((u32)(r_ebp+0xfffffb54u));
    /* 0046bb07: mov edx, dword ptr [ecx + 0x1e4] */ r_edx = R32((u32)(r_ecx+0x1e4u));
    /* 0046bb0d: mov eax, dword ptr [ebp - 0x4ac] */ r_eax = R32((u32)(r_ebp+0xfffffb54u));
    /* 0046bb13: mov ecx, dword ptr [eax + 0x1e4] */ r_ecx = R32((u32)(r_eax+0x1e4u));
    /* 0046bb19: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0046bb1b: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 0046bb21: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46bb23u); call_ind(t); }
    /* 0046bb23: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0046bb25: mov ecx, dword ptr [ebp - 0x42c] */ r_ecx = R32((u32)(r_ebp+0xfffffbd4u));
    /* 0046bb2b: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0046bb2e: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x46bb33u); f_0060ca40();
    /* 0046bb33: mov ecx, eax */ r_ecx = r_eax;
    /* 0046bb35: call 0x463e50 */ r_esp -= 4; W32(r_esp, 0x46bb3au); f_00463e50();
    /* 0046bb3a: mov dword ptr [ebp - 0x420], eax */ W32((u32)(r_ebp+0xfffffbe0u), r_eax);
    /* 0046bb40: mov edx, dword ptr [ebp - 0x420] */ r_edx = R32((u32)(r_ebp+0xfffffbe0u));
    /* 0046bb46: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046bb47: mov eax, dword ptr [ebp - 0x4ac] */ r_eax = R32((u32)(r_ebp+0xfffffb54u));
    /* 0046bb4d: mov ecx, dword ptr [eax + 0x1e4] */ r_ecx = R32((u32)(r_eax+0x1e4u));
    /* 0046bb53: mov edx, dword ptr [ebp - 0x4ac] */ r_edx = R32((u32)(r_ebp+0xfffffb54u));
    /* 0046bb59: mov eax, dword ptr [edx + 0x1e4] */ r_eax = R32((u32)(r_edx+0x1e4u));
    /* 0046bb5f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0046bb61: mov ecx, eax */ r_ecx = r_eax;
    /* 0046bb63: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0046bb69: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46bb6bu); call_ind(t); }
    /* 0046bb6b: mov ecx, dword ptr [ebp - 0x420] */ r_ecx = R32((u32)(r_ebp+0xfffffbe0u));
    /* 0046bb71: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046bb72: mov edx, dword ptr [ebp - 0x420] */ r_edx = R32((u32)(r_ebp+0xfffffbe0u));
    /* 0046bb78: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046bb79: mov eax, dword ptr [ebp - 0x420] */ r_eax = R32((u32)(r_ebp+0xfffffbe0u));
    /* 0046bb7f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046bb80: mov ecx, dword ptr [ebp - 0x420] */ r_ecx = R32((u32)(r_ebp+0xfffffbe0u));
    /* 0046bb86: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046bb87: mov edx, dword ptr [ebp - 0x4ac] */ r_edx = R32((u32)(r_ebp+0xfffffb54u));
    /* 0046bb8d: mov ecx, dword ptr [edx + 0x1e4] */ r_ecx = R32((u32)(r_edx+0x1e4u));
    /* 0046bb93: call 0x6023d0 */ r_esp -= 4; W32(r_esp, 0x46bb98u); f_006023d0();
    /* 0046bb98: mov eax, dword ptr [ebp - 0x4ac] */ r_eax = R32((u32)(r_ebp+0xfffffb54u));
    /* 0046bb9e: mov ecx, dword ptr [eax + 0x1e4] */ r_ecx = R32((u32)(r_eax+0x1e4u));
    /* 0046bba4: mov byte ptr [ecx + 0x1dc], 0 */ W8((u32)(r_ecx+0x1dcu), 0x0u);
    /* 0046bbab: push 0x6bbaf0 */ { u32 v = 0x6bbaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046bbb0: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x46bbb5u); f_00630f40();
    /* 0046bbb5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046bbb8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046bbb9: mov edx, dword ptr [ebp - 0x4ac] */ r_edx = R32((u32)(r_ebp+0xfffffb54u));
    /* 0046bbbf: mov eax, dword ptr [edx + 0x1f8] */ r_eax = R32((u32)(r_edx+0x1f8u));
    /* 0046bbc5: mov ecx, dword ptr [ebp - 0x4ac] */ r_ecx = R32((u32)(r_ebp+0xfffffb54u));
    /* 0046bbcb: mov ecx, dword ptr [ecx + 0x1f8] */ r_ecx = R32((u32)(r_ecx+0x1f8u));
    /* 0046bbd1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0046bbd3: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0046bbd9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46bbdbu); call_ind(t); }
    /* 0046bbdb: mov ecx, dword ptr [ebp - 0x4ac] */ r_ecx = R32((u32)(r_ebp+0xfffffb54u));
    /* 0046bbe1: mov edx, dword ptr [ecx + 0x20c] */ r_edx = R32((u32)(r_ecx+0x20cu));
    /* 0046bbe7: mov eax, dword ptr [ebp - 0x4ac] */ r_eax = R32((u32)(r_ebp+0xfffffb54u));
    /* 0046bbed: mov ecx, dword ptr [eax + 0x20c] */ r_ecx = R32((u32)(r_eax+0x20cu));
    /* 0046bbf3: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0046bbf5: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0046bbf8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46bbfau); call_ind(t); }
    /* 0046bbfa: push 0x186a1 */ { u32 v = 0x186a1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046bbff: mov ecx, dword ptr [ebp - 0x4ac] */ r_ecx = R32((u32)(r_ebp+0xfffffb54u));
    /* 0046bc05: mov edx, dword ptr [ecx + 0x1e8] */ r_edx = R32((u32)(r_ecx+0x1e8u));
    /* 0046bc0b: mov eax, dword ptr [ebp - 0x4ac] */ r_eax = R32((u32)(r_ebp+0xfffffb54u));
    /* 0046bc11: mov ecx, dword ptr [eax + 0x1e8] */ r_ecx = R32((u32)(r_eax+0x1e8u));
    /* 0046bc17: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0046bc19: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 0046bc1f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46bc21u); call_ind(t); }
    /* 0046bc21: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0046bc23: mov ecx, dword ptr [ebp - 0x42c] */ r_ecx = R32((u32)(r_ebp+0xfffffbd4u));
    /* 0046bc29: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0046bc2c: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x46bc31u); f_0060ca40();
    /* 0046bc31: mov ecx, eax */ r_ecx = r_eax;
    /* 0046bc33: call 0x463e50 */ r_esp -= 4; W32(r_esp, 0x46bc38u); f_00463e50();
    /* 0046bc38: mov dword ptr [ebp - 0x420], eax */ W32((u32)(r_ebp+0xfffffbe0u), r_eax);
    /* 0046bc3e: mov edx, dword ptr [ebp - 0x420] */ r_edx = R32((u32)(r_ebp+0xfffffbe0u));
    /* 0046bc44: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046bc45: mov eax, dword ptr [ebp - 0x4ac] */ r_eax = R32((u32)(r_ebp+0xfffffb54u));
    /* 0046bc4b: mov ecx, dword ptr [eax + 0x1e8] */ r_ecx = R32((u32)(r_eax+0x1e8u));
    /* 0046bc51: mov edx, dword ptr [ebp - 0x4ac] */ r_edx = R32((u32)(r_ebp+0xfffffb54u));
    /* 0046bc57: mov eax, dword ptr [edx + 0x1e8] */ r_eax = R32((u32)(r_edx+0x1e8u));
    /* 0046bc5d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0046bc5f: mov ecx, eax */ r_ecx = r_eax;
    /* 0046bc61: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0046bc67: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46bc69u); call_ind(t); }
    /* 0046bc69: mov ecx, dword ptr [ebp - 0x420] */ r_ecx = R32((u32)(r_ebp+0xfffffbe0u));
    /* 0046bc6f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046bc70: mov edx, dword ptr [ebp - 0x420] */ r_edx = R32((u32)(r_ebp+0xfffffbe0u));
    /* 0046bc76: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046bc77: mov eax, dword ptr [ebp - 0x420] */ r_eax = R32((u32)(r_ebp+0xfffffbe0u));
    /* 0046bc7d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046bc7e: mov ecx, dword ptr [ebp - 0x420] */ r_ecx = R32((u32)(r_ebp+0xfffffbe0u));
    /* 0046bc84: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046bc85: mov edx, dword ptr [ebp - 0x4ac] */ r_edx = R32((u32)(r_ebp+0xfffffb54u));
    /* 0046bc8b: mov ecx, dword ptr [edx + 0x1e8] */ r_ecx = R32((u32)(r_edx+0x1e8u));
    /* 0046bc91: call 0x6023d0 */ r_esp -= 4; W32(r_esp, 0x46bc96u); f_006023d0();
    /* 0046bc96: mov eax, dword ptr [ebp - 0x4ac] */ r_eax = R32((u32)(r_ebp+0xfffffb54u));
    /* 0046bc9c: mov ecx, dword ptr [eax + 0x1e8] */ r_ecx = R32((u32)(r_eax+0x1e8u));
    /* 0046bca2: mov byte ptr [ecx + 0x1dc], 0 */ W8((u32)(r_ecx+0x1dcu), 0x0u);
    /* 0046bca9: push 0x6bbaf0 */ { u32 v = 0x6bbaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046bcae: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x46bcb3u); f_00630f40();
    /* 0046bcb3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046bcb6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046bcb7: mov edx, dword ptr [ebp - 0x4ac] */ r_edx = R32((u32)(r_ebp+0xfffffb54u));
    /* 0046bcbd: mov eax, dword ptr [edx + 0x1fc] */ r_eax = R32((u32)(r_edx+0x1fcu));
    /* 0046bcc3: mov ecx, dword ptr [ebp - 0x4ac] */ r_ecx = R32((u32)(r_ebp+0xfffffb54u));
    /* 0046bcc9: mov ecx, dword ptr [ecx + 0x1fc] */ r_ecx = R32((u32)(r_ecx+0x1fcu));
    /* 0046bccf: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0046bcd1: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0046bcd7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46bcd9u); call_ind(t); }
    /* 0046bcd9: mov ecx, dword ptr [ebp - 0x4ac] */ r_ecx = R32((u32)(r_ebp+0xfffffb54u));
    /* 0046bcdf: mov edx, dword ptr [ecx + 0x210] */ r_edx = R32((u32)(r_ecx+0x210u));
    /* 0046bce5: mov eax, dword ptr [ebp - 0x4ac] */ r_eax = R32((u32)(r_ebp+0xfffffb54u));
    /* 0046bceb: mov ecx, dword ptr [eax + 0x210] */ r_ecx = R32((u32)(r_eax+0x210u));
    /* 0046bcf1: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0046bcf3: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0046bcf6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46bcf8u); call_ind(t); }
    /* 0046bcf8: push 0x186a1 */ { u32 v = 0x186a1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046bcfd: mov ecx, dword ptr [ebp - 0x4ac] */ r_ecx = R32((u32)(r_ebp+0xfffffb54u));
    /* 0046bd03: mov edx, dword ptr [ecx + 0x1ec] */ r_edx = R32((u32)(r_ecx+0x1ecu));
    /* 0046bd09: mov eax, dword ptr [ebp - 0x4ac] */ r_eax = R32((u32)(r_ebp+0xfffffb54u));
    /* 0046bd0f: mov ecx, dword ptr [eax + 0x1ec] */ r_ecx = R32((u32)(r_eax+0x1ecu));
    /* 0046bd15: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0046bd17: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 0046bd1d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46bd1fu); call_ind(t); }
    /* 0046bd1f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046bd21: mov ecx, dword ptr [ebp - 0x42c] */ r_ecx = R32((u32)(r_ebp+0xfffffbd4u));
    /* 0046bd27: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0046bd2a: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x46bd2fu); f_0060ca40();
    /* 0046bd2f: mov ecx, eax */ r_ecx = r_eax;
    /* 0046bd31: call 0x463e50 */ r_esp -= 4; W32(r_esp, 0x46bd36u); f_00463e50();
    /* 0046bd36: mov dword ptr [ebp - 0x420], eax */ W32((u32)(r_ebp+0xfffffbe0u), r_eax);
    /* 0046bd3c: mov edx, dword ptr [ebp - 0x420] */ r_edx = R32((u32)(r_ebp+0xfffffbe0u));
    /* 0046bd42: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046bd43: mov eax, dword ptr [ebp - 0x4ac] */ r_eax = R32((u32)(r_ebp+0xfffffb54u));
    /* 0046bd49: mov ecx, dword ptr [eax + 0x1ec] */ r_ecx = R32((u32)(r_eax+0x1ecu));
    /* 0046bd4f: mov edx, dword ptr [ebp - 0x4ac] */ r_edx = R32((u32)(r_ebp+0xfffffb54u));
    /* 0046bd55: mov eax, dword ptr [edx + 0x1ec] */ r_eax = R32((u32)(r_edx+0x1ecu));
    /* 0046bd5b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0046bd5d: mov ecx, eax */ r_ecx = r_eax;
    /* 0046bd5f: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0046bd65: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46bd67u); call_ind(t); }
    /* 0046bd67: mov ecx, dword ptr [ebp - 0x420] */ r_ecx = R32((u32)(r_ebp+0xfffffbe0u));
    /* 0046bd6d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046bd6e: mov edx, dword ptr [ebp - 0x420] */ r_edx = R32((u32)(r_ebp+0xfffffbe0u));
    /* 0046bd74: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046bd75: mov eax, dword ptr [ebp - 0x420] */ r_eax = R32((u32)(r_ebp+0xfffffbe0u));
    /* 0046bd7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046bd7c: mov ecx, dword ptr [ebp - 0x420] */ r_ecx = R32((u32)(r_ebp+0xfffffbe0u));
    /* 0046bd82: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046bd83: mov edx, dword ptr [ebp - 0x4ac] */ r_edx = R32((u32)(r_ebp+0xfffffb54u));
    /* 0046bd89: mov ecx, dword ptr [edx + 0x1ec] */ r_ecx = R32((u32)(r_edx+0x1ecu));
    /* 0046bd8f: call 0x6023d0 */ r_esp -= 4; W32(r_esp, 0x46bd94u); f_006023d0();
    /* 0046bd94: mov eax, dword ptr [ebp - 0x4ac] */ r_eax = R32((u32)(r_ebp+0xfffffb54u));
    /* 0046bd9a: mov ecx, dword ptr [eax + 0x1ec] */ r_ecx = R32((u32)(r_eax+0x1ecu));
    /* 0046bda0: mov byte ptr [ecx + 0x1dc], 0 */ W8((u32)(r_ecx+0x1dcu), 0x0u);
    /* 0046bda7: push 0x6bbaf0 */ { u32 v = 0x6bbaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046bdac: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x46bdb1u); f_00630f40();
    /* 0046bdb1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046bdb4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046bdb5: mov edx, dword ptr [ebp - 0x4ac] */ r_edx = R32((u32)(r_ebp+0xfffffb54u));
    /* 0046bdbb: mov eax, dword ptr [edx + 0x200] */ r_eax = R32((u32)(r_edx+0x200u));
    /* 0046bdc1: mov ecx, dword ptr [ebp - 0x4ac] */ r_ecx = R32((u32)(r_ebp+0xfffffb54u));
    /* 0046bdc7: mov ecx, dword ptr [ecx + 0x200] */ r_ecx = R32((u32)(r_ecx+0x200u));
    /* 0046bdcd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0046bdcf: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0046bdd5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46bdd7u); call_ind(t); }
    /* 0046bdd7: mov ecx, dword ptr [ebp - 0x4ac] */ r_ecx = R32((u32)(r_ebp+0xfffffb54u));
    /* 0046bddd: mov edx, dword ptr [ecx + 0x214] */ r_edx = R32((u32)(r_ecx+0x214u));
    /* 0046bde3: mov eax, dword ptr [ebp - 0x4ac] */ r_eax = R32((u32)(r_ebp+0xfffffb54u));
    /* 0046bde9: mov ecx, dword ptr [eax + 0x214] */ r_ecx = R32((u32)(r_eax+0x214u));
    /* 0046bdef: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0046bdf1: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0046bdf4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46bdf6u); call_ind(t); }
    /* 0046bdf6: push 0x186a1 */ { u32 v = 0x186a1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046bdfb: mov ecx, dword ptr [ebp - 0x4ac] */ r_ecx = R32((u32)(r_ebp+0xfffffb54u));
    /* 0046be01: mov edx, dword ptr [ecx + 0x1f0] */ r_edx = R32((u32)(r_ecx+0x1f0u));
    /* 0046be07: mov eax, dword ptr [ebp - 0x4ac] */ r_eax = R32((u32)(r_ebp+0xfffffb54u));
    /* 0046be0d: mov ecx, dword ptr [eax + 0x1f0] */ r_ecx = R32((u32)(r_eax+0x1f0u));
    /* 0046be13: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0046be15: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 0046be1b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46be1du); call_ind(t); }
    /* 0046be1d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046be1f: mov ecx, dword ptr [ebp - 0x42c] */ r_ecx = R32((u32)(r_ebp+0xfffffbd4u));
    /* 0046be25: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0046be28: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x46be2du); f_0060ca40();
    /* 0046be2d: mov ecx, eax */ r_ecx = r_eax;
    /* 0046be2f: call 0x463e50 */ r_esp -= 4; W32(r_esp, 0x46be34u); f_00463e50();
    /* 0046be34: mov dword ptr [ebp - 0x420], eax */ W32((u32)(r_ebp+0xfffffbe0u), r_eax);
    /* 0046be3a: mov edx, dword ptr [ebp - 0x420] */ r_edx = R32((u32)(r_ebp+0xfffffbe0u));
    /* 0046be40: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046be41: mov eax, dword ptr [ebp - 0x4ac] */ r_eax = R32((u32)(r_ebp+0xfffffb54u));
    /* 0046be47: mov ecx, dword ptr [eax + 0x1f0] */ r_ecx = R32((u32)(r_eax+0x1f0u));
    /* 0046be4d: mov edx, dword ptr [ebp - 0x4ac] */ r_edx = R32((u32)(r_ebp+0xfffffb54u));
    /* 0046be53: mov eax, dword ptr [edx + 0x1f0] */ r_eax = R32((u32)(r_edx+0x1f0u));
    /* 0046be59: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0046be5b: mov ecx, eax */ r_ecx = r_eax;
    /* 0046be5d: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0046be63: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46be65u); call_ind(t); }
    /* 0046be65: mov ecx, dword ptr [ebp - 0x420] */ r_ecx = R32((u32)(r_ebp+0xfffffbe0u));
    /* 0046be6b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046be6c: mov edx, dword ptr [ebp - 0x420] */ r_edx = R32((u32)(r_ebp+0xfffffbe0u));
    /* 0046be72: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046be73: mov eax, dword ptr [ebp - 0x420] */ r_eax = R32((u32)(r_ebp+0xfffffbe0u));
    /* 0046be79: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046be7a: mov ecx, dword ptr [ebp - 0x420] */ r_ecx = R32((u32)(r_ebp+0xfffffbe0u));
    /* 0046be80: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046be81: mov edx, dword ptr [ebp - 0x4ac] */ r_edx = R32((u32)(r_ebp+0xfffffb54u));
    /* 0046be87: mov ecx, dword ptr [edx + 0x1f0] */ r_ecx = R32((u32)(r_edx+0x1f0u));
    /* 0046be8d: call 0x6023d0 */ r_esp -= 4; W32(r_esp, 0x46be92u); f_006023d0();
    /* 0046be92: mov eax, dword ptr [ebp - 0x4ac] */ r_eax = R32((u32)(r_ebp+0xfffffb54u));
    /* 0046be98: mov ecx, dword ptr [eax + 0x1f0] */ r_ecx = R32((u32)(r_eax+0x1f0u));
    /* 0046be9e: mov byte ptr [ecx + 0x1dc], 0 */ W8((u32)(r_ecx+0x1dcu), 0x0u);
    /* 0046bea5: push 0x6bbaf0 */ { u32 v = 0x6bbaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046beaa: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x46beafu); f_00630f40();
    /* 0046beaf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046beb2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046beb3: mov edx, dword ptr [ebp - 0x4ac] */ r_edx = R32((u32)(r_ebp+0xfffffb54u));
    /* 0046beb9: mov eax, dword ptr [edx + 0x204] */ r_eax = R32((u32)(r_edx+0x204u));
    /* 0046bebf: mov ecx, dword ptr [ebp - 0x4ac] */ r_ecx = R32((u32)(r_ebp+0xfffffb54u));
    /* 0046bec5: mov ecx, dword ptr [ecx + 0x204] */ r_ecx = R32((u32)(r_ecx+0x204u));
    /* 0046becb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0046becd: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0046bed3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46bed5u); call_ind(t); }
    /* 0046bed5: mov ecx, dword ptr [ebp - 0x4ac] */ r_ecx = R32((u32)(r_ebp+0xfffffb54u));
    /* 0046bedb: mov edx, dword ptr [ecx + 0x218] */ r_edx = R32((u32)(r_ecx+0x218u));
    /* 0046bee1: mov eax, dword ptr [ebp - 0x4ac] */ r_eax = R32((u32)(r_ebp+0xfffffb54u));
    /* 0046bee7: mov ecx, dword ptr [eax + 0x218] */ r_ecx = R32((u32)(r_eax+0x218u));
    /* 0046beed: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0046beef: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0046bef2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46bef4u); call_ind(t); }
    /* 0046bef4: mov ecx, dword ptr [ebp - 0x4ac] */ r_ecx = R32((u32)(r_ebp+0xfffffb54u));
    /* 0046befa: call 0x5f85d0 */ r_esp -= 4; W32(r_esp, 0x46beffu); f_005f85d0();
    /* 0046beff: lea ecx, [ebp - 0x49c] */ r_ecx = (u32)(r_ebp+0xfffffb64u);
    /* 0046bf05: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046bf06: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 0046bf0c: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 0046bf12: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046bf13: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0046bf19: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0046bf1b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0046bf21: mov eax, dword ptr [edx + 0x3b4] */ r_eax = R32((u32)(r_edx+0x3b4u));
    /* 0046bf27: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46bf29u); call_ind(t); }
    /* 0046bf29: lea ecx, [ebp - 0x49c] */ r_ecx = (u32)(r_ebp+0xfffffb64u);
    /* 0046bf2f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046bf30: push 0x6bbc64 */ { u32 v = 0x6bbc64u; r_esp -= 4; W32(r_esp, v); }
    /* 0046bf35: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x46bf3au); f_00630f40();
    /* 0046bf3a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046bf3d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046bf3e: lea edx, [ebp - 0x41c] */ r_edx = (u32)(r_ebp+0xfffffbe4u);
    /* 0046bf44: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046bf45: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x46bf4bu); call_ind(t); }
    /* 0046bf4b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046bf4e: lea eax, [ebp - 0x41c] */ r_eax = (u32)(r_ebp+0xfffffbe4u);
    /* 0046bf54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046bf55: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046bf57: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0046bf59: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 0046bf5f: call 0x57be80 */ r_esp -= 4; W32(r_esp, 0x46bf64u); f_0057be80();
    /* 0046bf64: push 0x6bbc44 */ { u32 v = 0x6bbc44u; r_esp -= 4; W32(r_esp, v); }
    /* 0046bf69: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x46bf6eu); f_00630f40();
    /* 0046bf6e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046bf71: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046bf72: lea ecx, [ebp - 0x41c] */ r_ecx = (u32)(r_ebp+0xfffffbe4u);
    /* 0046bf78: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046bf79: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x46bf7eu); f_00686d8e();
    /* 0046bf7e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046bf81: lea edx, [ebp - 0x41c] */ r_edx = (u32)(r_ebp+0xfffffbe4u);
    /* 0046bf87: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046bf88: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046bf8a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046bf8c: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 0046bf92: call 0x57be80 */ r_esp -= 4; W32(r_esp, 0x46bf97u); f_0057be80();
    /* 0046bf97: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046bf9d: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x46bfa2u); f_0047e3b0();
    /* 0046bfa2: mov dword ptr [ebp - 0x430], eax */ W32((u32)(r_ebp+0xfffffbd0u), r_eax);
    /* 0046bfa8: lea eax, [ebp - 0x428] */ r_eax = (u32)(r_ebp+0xfffffbd8u);
    /* 0046bfae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046bfaf: mov ecx, dword ptr [ebp - 0x430] */ r_ecx = R32((u32)(r_ebp+0xfffffbd0u));
    /* 0046bfb5: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x46bfbau); f_004c7c40();
    /* 0046bfba: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0046bfc1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046bfc3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046bfc5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046bfc7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046bfc9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046bfcb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046bfcd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046bfcf: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 0046bfd2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046bfd3: lea ecx, [ebp - 0x428] */ r_ecx = (u32)(r_ebp+0xfffffbd8u);
    /* 0046bfd9: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x46bfdeu); f_00485940();
    /* 0046bfde: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0046bfe2: mov edx, dword ptr [0x791398] */ r_edx = R32((u32)(0x791398u));
    /* 0046bfe8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046bfe9: lea eax, [ebp - 0x49d] */ r_eax = (u32)(r_ebp+0xfffffb63u);
    /* 0046bfef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046bff0: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 0046bff3: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x46bff8u); f_004a2160();
    /* 0046bff8: mov ecx, eax */ r_ecx = r_eax;
    /* 0046bffa: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x46bfffu); f_004a1e10();
    /* 0046bfff: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0046c002: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046c004: jne 0x46c076 */ if (!fZ) goto L_0046c076;
L_0046c006:; BB(0x0046c006);
    /* 0046c006: mov edx, dword ptr [0x7913d4] */ r_edx = R32((u32)(0x7913d4u));
    /* 0046c00c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046c00d: lea eax, [ebp - 0x49e] */ r_eax = (u32)(r_ebp+0xfffffb62u);
    /* 0046c013: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046c014: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 0046c017: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x46c01cu); f_004a2160();
    /* 0046c01c: mov ecx, eax */ r_ecx = r_eax;
    /* 0046c01e: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x46c023u); f_004a1e10();
    /* 0046c023: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0046c026: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046c028: jne 0x46c076 */ if (!fZ) goto L_0046c076;
L_0046c02a:; BB(0x0046c02a);
    /* 0046c02a: mov edx, dword ptr [0x7913a0] */ r_edx = R32((u32)(0x7913a0u));
    /* 0046c030: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046c031: lea eax, [ebp - 0x49f] */ r_eax = (u32)(r_ebp+0xfffffb61u);
    /* 0046c037: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046c038: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 0046c03b: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x46c040u); f_004a2160();
    /* 0046c040: mov ecx, eax */ r_ecx = r_eax;
    /* 0046c042: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x46c047u); f_004a1e10();
    /* 0046c047: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0046c04a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046c04c: jne 0x46c076 */ if (!fZ) goto L_0046c076;
L_0046c04e:; BB(0x0046c04e);
    /* 0046c04e: mov edx, dword ptr [0x79140c] */ r_edx = R32((u32)(0x79140cu));
    /* 0046c054: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046c055: lea eax, [ebp - 0x4a0] */ r_eax = (u32)(r_ebp+0xfffffb60u);
    /* 0046c05b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046c05c: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 0046c05f: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x46c064u); f_004a2160();
    /* 0046c064: mov ecx, eax */ r_ecx = r_eax;
    /* 0046c066: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x46c06bu); f_004a1e10();
    /* 0046c06b: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0046c06e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046c070: je 0x46c1a3 */ if (fZ) goto L_0046c1a3;
L_0046c076:; BB(0x0046c076);
    /* 0046c076: mov edx, dword ptr [0x791398] */ r_edx = R32((u32)(0x791398u));
    /* 0046c07c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046c07d: lea eax, [ebp - 0x4a1] */ r_eax = (u32)(r_ebp+0xfffffb5fu);
    /* 0046c083: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046c084: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 0046c087: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x46c08cu); f_004a2160();
    /* 0046c08c: mov ecx, eax */ r_ecx = r_eax;
    /* 0046c08e: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x46c093u); f_004a1e10();
    /* 0046c093: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0046c096: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046c098: je 0x46c0b7 */ if (fZ) goto L_0046c0b7;
L_0046c09a:; BB(0x0046c09a);
    /* 0046c09a: push 0x6bbc24 */ { u32 v = 0x6bbc24u; r_esp -= 4; W32(r_esp, v); }
    /* 0046c09f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x46c0a4u); f_00630f40();
    /* 0046c0a4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046c0a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046c0a8: lea edx, [ebp - 0x49c] */ r_edx = (u32)(r_ebp+0xfffffb64u);
    /* 0046c0ae: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046c0af: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x46c0b4u); f_00686d8e();
    /* 0046c0b4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0046c0b7:; BB(0x0046c0b7);
    /* 0046c0b7: mov eax, dword ptr [0x7913d4] */ r_eax = R32((u32)(0x7913d4u));
    /* 0046c0bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046c0bd: lea ecx, [ebp - 0x4a2] */ r_ecx = (u32)(r_ebp+0xfffffb5eu);
    /* 0046c0c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046c0c4: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 0046c0c7: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x46c0ccu); f_004a2160();
    /* 0046c0cc: mov ecx, eax */ r_ecx = r_eax;
    /* 0046c0ce: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x46c0d3u); f_004a1e10();
    /* 0046c0d3: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0046c0d6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046c0d8: je 0x46c0f7 */ if (fZ) goto L_0046c0f7;
L_0046c0da:; BB(0x0046c0da);
    /* 0046c0da: push 0x6bbc08 */ { u32 v = 0x6bbc08u; r_esp -= 4; W32(r_esp, v); }
    /* 0046c0df: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x46c0e4u); f_00630f40();
    /* 0046c0e4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046c0e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046c0e8: lea eax, [ebp - 0x49c] */ r_eax = (u32)(r_ebp+0xfffffb64u);
    /* 0046c0ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046c0ef: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x46c0f4u); f_00686d8e();
    /* 0046c0f4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0046c0f7:; BB(0x0046c0f7);
    /* 0046c0f7: mov ecx, dword ptr [0x7913a0] */ r_ecx = R32((u32)(0x7913a0u));
    /* 0046c0fd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046c0fe: lea edx, [ebp - 0x4a3] */ r_edx = (u32)(r_ebp+0xfffffb5du);
    /* 0046c104: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046c105: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 0046c108: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x46c10du); f_004a2160();
    /* 0046c10d: mov ecx, eax */ r_ecx = r_eax;
    /* 0046c10f: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x46c114u); f_004a1e10();
    /* 0046c114: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0046c117: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046c119: je 0x46c138 */ if (fZ) goto L_0046c138;
L_0046c11b:; BB(0x0046c11b);
    /* 0046c11b: push 0x6bbbf0 */ { u32 v = 0x6bbbf0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046c120: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x46c125u); f_00630f40();
    /* 0046c125: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046c128: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046c129: lea ecx, [ebp - 0x49c] */ r_ecx = (u32)(r_ebp+0xfffffb64u);
    /* 0046c12f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046c130: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x46c135u); f_00686d8e();
    /* 0046c135: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0046c138:; BB(0x0046c138);
    /* 0046c138: mov edx, dword ptr [0x79140c] */ r_edx = R32((u32)(0x79140cu));
    /* 0046c13e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046c13f: lea eax, [ebp - 0x4a4] */ r_eax = (u32)(r_ebp+0xfffffb5cu);
    /* 0046c145: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046c146: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 0046c149: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x46c14eu); f_004a2160();
    /* 0046c14e: mov ecx, eax */ r_ecx = r_eax;
    /* 0046c150: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x46c155u); f_004a1e10();
    /* 0046c155: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0046c158: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046c15a: je 0x46c179 */ if (fZ) goto L_0046c179;
L_0046c15c:; BB(0x0046c15c);
    /* 0046c15c: push 0x6bbbd8 */ { u32 v = 0x6bbbd8u; r_esp -= 4; W32(r_esp, v); }
    /* 0046c161: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x46c166u); f_00630f40();
    /* 0046c166: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046c169: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046c16a: lea edx, [ebp - 0x49c] */ r_edx = (u32)(r_ebp+0xfffffb64u);
    /* 0046c170: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046c171: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x46c176u); f_00686d8e();
    /* 0046c176: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0046c179:; BB(0x0046c179);
    /* 0046c179: lea eax, [ebp - 0x49c] */ r_eax = (u32)(r_ebp+0xfffffb64u);
    /* 0046c17f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046c180: push 0x6bbbb8 */ { u32 v = 0x6bbbb8u; r_esp -= 4; W32(r_esp, v); }
    /* 0046c185: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x46c18au); f_00630f40();
    /* 0046c18a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046c18d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046c18e: lea ecx, [ebp - 0x41c] */ r_ecx = (u32)(r_ebp+0xfffffbe4u);
    /* 0046c194: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046c195: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x46c19bu); call_ind(t); }
    /* 0046c19b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046c19e: jmp 0x46c2d1 */ goto L_0046c2d1;
L_0046c1a3:; BB(0x0046c1a3);
    /* 0046c1a3: mov edx, dword ptr [0x791394] */ r_edx = R32((u32)(0x791394u));
    /* 0046c1a9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046c1aa: lea eax, [ebp - 0x4a5] */ r_eax = (u32)(r_ebp+0xfffffb5bu);
    /* 0046c1b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046c1b1: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 0046c1b4: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x46c1b9u); f_004a2160();
    /* 0046c1b9: mov ecx, eax */ r_ecx = r_eax;
    /* 0046c1bb: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x46c1c0u); f_004a1e10();
    /* 0046c1c0: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0046c1c3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046c1c5: je 0x46c1e9 */ if (fZ) goto L_0046c1e9;
L_0046c1c7:; BB(0x0046c1c7);
    /* 0046c1c7: push 0x6bbb9c */ { u32 v = 0x6bbb9cu; r_esp -= 4; W32(r_esp, v); }
    /* 0046c1cc: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x46c1d1u); f_00630f40();
    /* 0046c1d1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046c1d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046c1d5: lea edx, [ebp - 0x41c] */ r_edx = (u32)(r_ebp+0xfffffbe4u);
    /* 0046c1db: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046c1dc: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x46c1e1u); f_00686d8e();
    /* 0046c1e1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046c1e4: jmp 0x46c2d1 */ goto L_0046c2d1;
L_0046c1e9:; BB(0x0046c1e9);
    /* 0046c1e9: mov eax, dword ptr [0x791418] */ r_eax = R32((u32)(0x791418u));
    /* 0046c1ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046c1ef: lea ecx, [ebp - 0x4a6] */ r_ecx = (u32)(r_ebp+0xfffffb5au);
    /* 0046c1f5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046c1f6: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 0046c1f9: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x46c1feu); f_004a2160();
    /* 0046c1fe: mov ecx, eax */ r_ecx = r_eax;
    /* 0046c200: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x46c205u); f_004a1e10();
    /* 0046c205: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0046c208: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046c20a: je 0x46c22e */ if (fZ) goto L_0046c22e;
L_0046c20c:; BB(0x0046c20c);
    /* 0046c20c: push 0x6bbb80 */ { u32 v = 0x6bbb80u; r_esp -= 4; W32(r_esp, v); }
    /* 0046c211: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x46c216u); f_00630f40();
    /* 0046c216: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046c219: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046c21a: lea eax, [ebp - 0x41c] */ r_eax = (u32)(r_ebp+0xfffffbe4u);
    /* 0046c220: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046c221: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x46c226u); f_00686d8e();
    /* 0046c226: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046c229: jmp 0x46c2d1 */ goto L_0046c2d1;
L_0046c22e:; BB(0x0046c22e);
    /* 0046c22e: mov ecx, dword ptr [0x791380] */ r_ecx = R32((u32)(0x791380u));
    /* 0046c234: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046c235: lea edx, [ebp - 0x4a7] */ r_edx = (u32)(r_ebp+0xfffffb59u);
    /* 0046c23b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046c23c: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 0046c23f: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x46c244u); f_004a2160();
    /* 0046c244: mov ecx, eax */ r_ecx = r_eax;
    /* 0046c246: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x46c24bu); f_004a1e10();
    /* 0046c24b: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0046c24e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046c250: je 0x46c271 */ if (fZ) goto L_0046c271;
L_0046c252:; BB(0x0046c252);
    /* 0046c252: push 0x6bbb68 */ { u32 v = 0x6bbb68u; r_esp -= 4; W32(r_esp, v); }
    /* 0046c257: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x46c25cu); f_00630f40();
    /* 0046c25c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046c25f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046c260: lea ecx, [ebp - 0x41c] */ r_ecx = (u32)(r_ebp+0xfffffbe4u);
    /* 0046c266: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046c267: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x46c26cu); f_00686d8e();
    /* 0046c26c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046c26f: jmp 0x46c2d1 */ goto L_0046c2d1;
L_0046c271:; BB(0x0046c271);
    /* 0046c271: mov edx, dword ptr [0x7913b0] */ r_edx = R32((u32)(0x7913b0u));
    /* 0046c277: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046c278: lea eax, [ebp - 0x4a8] */ r_eax = (u32)(r_ebp+0xfffffb58u);
    /* 0046c27e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046c27f: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 0046c282: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x46c287u); f_004a2160();
    /* 0046c287: mov ecx, eax */ r_ecx = r_eax;
    /* 0046c289: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x46c28eu); f_004a1e10();
    /* 0046c28e: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0046c291: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046c293: je 0x46c2b4 */ if (fZ) goto L_0046c2b4;
L_0046c295:; BB(0x0046c295);
    /* 0046c295: push 0x6bbb50 */ { u32 v = 0x6bbb50u; r_esp -= 4; W32(r_esp, v); }
    /* 0046c29a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x46c29fu); f_00630f40();
    /* 0046c29f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046c2a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046c2a3: lea edx, [ebp - 0x41c] */ r_edx = (u32)(r_ebp+0xfffffbe4u);
    /* 0046c2a9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046c2aa: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x46c2afu); f_00686d8e();
    /* 0046c2af: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046c2b2: jmp 0x46c2d1 */ goto L_0046c2d1;
L_0046c2b4:; BB(0x0046c2b4);
    /* 0046c2b4: push 0x6bbb38 */ { u32 v = 0x6bbb38u; r_esp -= 4; W32(r_esp, v); }
    /* 0046c2b9: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x46c2beu); f_00630f40();
    /* 0046c2be: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046c2c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046c2c2: lea eax, [ebp - 0x41c] */ r_eax = (u32)(r_ebp+0xfffffbe4u);
    /* 0046c2c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046c2c9: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x46c2ceu); f_00686d8e();
    /* 0046c2ce: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0046c2d1:; BB(0x0046c2d1);
    /* 0046c2d1: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046c2d7: call 0x47e280 */ r_esp -= 4; W32(r_esp, 0x46c2dcu); f_0047e280();
    /* 0046c2dc: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046c2df: jne 0x46c2fe */ if (!fZ) goto L_0046c2fe;
L_0046c2e1:; BB(0x0046c2e1);
    /* 0046c2e1: push 0x6bbb24 */ { u32 v = 0x6bbb24u; r_esp -= 4; W32(r_esp, v); }
    /* 0046c2e6: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x46c2ebu); f_00630f40();
    /* 0046c2eb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046c2ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046c2ef: lea ecx, [ebp - 0x41c] */ r_ecx = (u32)(r_ebp+0xfffffbe4u);
    /* 0046c2f5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046c2f6: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x46c2fbu); f_00686d8e();
    /* 0046c2fb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0046c2fe:; BB(0x0046c2fe);
    /* 0046c2fe: lea edx, [ebp - 0x41c] */ r_edx = (u32)(r_ebp+0xfffffbe4u);
    /* 0046c304: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046c305: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046c307: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046c309: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 0046c30f: call 0x57be80 */ r_esp -= 4; W32(r_esp, 0x46c314u); f_0057be80();
    /* 0046c314: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046c318: jne 0x46c331 */ if (!fZ) goto L_0046c331;
L_0046c31a:; BB(0x0046c31a);
    /* 0046c31a: push 0x591 */ { u32 v = 0x591u; r_esp -= 4; W32(r_esp, v); }
    /* 0046c31f: push 0x6bb210 */ { u32 v = 0x6bb210u; r_esp -= 4; W32(r_esp, v); }
    /* 0046c324: push 0x6bbb18 */ { u32 v = 0x6bbb18u; r_esp -= 4; W32(r_esp, v); }
    /* 0046c329: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x46c32eu); f_005e9f20();
    /* 0046c32e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0046c331:; BB(0x0046c331);
    /* 0046c331: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046c335: je 0x46c373 */ if (fZ) goto L_0046c373;
L_0046c337:; BB(0x0046c337);
    /* 0046c337: mov word ptr [ebp - 0x10], 0 */ W16((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0046c33d: jmp 0x46c34b */ goto L_0046c34b;
L_0046c33f:; BB(0x0046c33f);
    /* 0046c33f: mov cx, word ptr [ebp - 0x10] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 0046c343: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0046c347: mov word ptr [ebp - 0x10], cx */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_ecx);
L_0046c34b:; BB(0x0046c34b);
    /* 0046c34b: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0046c34f: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046c352: jge 0x46c371 */ if ((fS==fO)) goto L_0046c371;
L_0046c354:; BB(0x0046c354);
    /* 0046c354: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0046c358: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0046c35c: mov edx, dword ptr [ebp - 0x4ac] */ r_edx = R32((u32)(r_ebp+0xfffffb54u));
    /* 0046c362: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 0046c365: mov al, byte ptr [esi + eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi+r_eax))) & 0xffu);
    /* 0046c368: mov byte ptr [edx + ecx + 0x224], al */ W8((u32)(r_edx+r_ecx+0x224u), (u8)r_eax);
    /* 0046c36f: jmp 0x46c33f */ goto L_0046c33f;
L_0046c371:; BB(0x0046c371);
    /* 0046c371: jmp 0x46c3a4 */ goto L_0046c3a4;
L_0046c373:; BB(0x0046c373);
    /* 0046c373: mov word ptr [ebp - 0x10], 0 */ W16((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0046c379: jmp 0x46c387 */ goto L_0046c387;
L_0046c37b:; BB(0x0046c37b);
    /* 0046c37b: mov cx, word ptr [ebp - 0x10] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 0046c37f: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0046c383: mov word ptr [ebp - 0x10], cx */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_ecx);
L_0046c387:; BB(0x0046c387);
    /* 0046c387: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0046c38b: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046c38e: jge 0x46c3a4 */ if ((fS==fO)) goto L_0046c3a4;
L_0046c390:; BB(0x0046c390);
    /* 0046c390: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0046c394: mov ecx, dword ptr [ebp - 0x4ac] */ r_ecx = R32((u32)(r_ebp+0xfffffb54u));
    /* 0046c39a: mov byte ptr [ecx + eax + 0x224], 0 */ W8((u32)(r_ecx+r_eax+0x224u), 0x0u);
    /* 0046c3a2: jmp 0x46c37b */ goto L_0046c37b;
L_0046c3a4:; BB(0x0046c3a4);
    /* 0046c3a4: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0046c3a8: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 0046c3ab: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x46c3b0u); f_004a20f0();
    /* 0046c3b0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0046c3b7: lea ecx, [ebp - 0x428] */ r_ecx = (u32)(r_ebp+0xfffffbd8u);
    /* 0046c3bd: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x46c3c2u); f_00484470();
    /* 0046c3c2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046c3c5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0046c3cc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0046c3cd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0046c3ce: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046c3d1: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0046c3d3: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x46c3d8u); f_00686d72();
    /* 0046c3d8: mov esp, ebp */ r_esp = r_ebp;
    /* 0046c3da: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046c3db: ret 8 */ FN_RET(0x0046b950); r_esp += 12; return;
}

