#include "protos.h"

void f_0066c680(void) /* sub_66C680 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0066c680);
    /* 0066c680: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066c681: mov ebp, esp */ r_ebp = r_esp;
    /* 0066c683: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066c685: push 0x6aceb7 */ { u32 v = 0x6aceb7u; r_esp -= 4; W32(r_esp, v); }
    /* 0066c68a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0066c690: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066c691: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066c694: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0066c699: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066c69b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066c69c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0066c69f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0066c6a5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0066c6a8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066c6ab: cmp dword ptr [eax + 0x74], 0 */ {  u32 a = R32((u32)(r_eax+0x74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066c6af: jne 0x66c6f8 */ if (!fZ) goto L_0066c6f8;
L_0066c6b1:; BB(0x0066c6b1);
    /* 0066c6b1: push 0x180 */ { u32 v = 0x180u; r_esp -= 4; W32(r_esp, v); }
    /* 0066c6b6: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x66c6bbu); f_00686d82();
    /* 0066c6bb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066c6be: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0066c6c1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0066c6c8: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066c6cc: je 0x66c6db */ if (fZ) goto L_0066c6db;
L_0066c6ce:; BB(0x0066c6ce);
    /* 0066c6ce: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0066c6d1: call 0x66cec0 */ r_esp -= 4; W32(r_esp, 0x66c6d6u); f_0066cec0();
    /* 0066c6d6: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0066c6d9: jmp 0x66c6e2 */ goto L_0066c6e2;
L_0066c6db:; BB(0x0066c6db);
    /* 0066c6db: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0066c6e2:; BB(0x0066c6e2);
    /* 0066c6e2: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0066c6e5: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0066c6e8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0066c6ef: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066c6f2: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0066c6f5: mov dword ptr [edx + 0x74], eax */ W32((u32)(r_edx+0x74u), r_eax);
L_0066c6f8:; BB(0x0066c6f8);
    /* 0066c6f8: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066c6fa: push 0x190 */ { u32 v = 0x190u; r_esp -= 4; W32(r_esp, v); }
    /* 0066c6ff: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066c701: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066c703: push 0x10cccd */ { u32 v = 0x10cccdu; r_esp -= 4; W32(r_esp, v); }
    /* 0066c708: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066c70b: mov ecx, dword ptr [ecx + 0x74] */ r_ecx = R32((u32)(r_ecx+0x74u));
    /* 0066c70e: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x66c713u); f_005eae80();
    /* 0066c713: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066c716: mov ecx, dword ptr [edx + 0x74] */ r_ecx = R32((u32)(r_edx+0x74u));
    /* 0066c719: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x66c71eu); f_005eb240();
    /* 0066c71e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066c71f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066c722: mov ecx, dword ptr [eax + 0x74] */ r_ecx = R32((u32)(r_eax+0x74u));
    /* 0066c725: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066c728: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0066c72b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066c72d: mov ecx, eax */ r_ecx = r_eax;
    /* 0066c72f: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0066c735: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66c737u); call_ind(t); }
    /* 0066c737: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066c73a: mov edx, dword ptr [ecx + 0x74] */ r_edx = R32((u32)(r_ecx+0x74u));
    /* 0066c73d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066c740: mov ecx, dword ptr [eax + 0x74] */ r_ecx = R32((u32)(r_eax+0x74u));
    /* 0066c743: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0066c745: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0066c748: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66c74au); call_ind(t); }
    /* 0066c74a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066c74d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0066c754: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066c755: mov esp, ebp */ r_esp = r_ebp;
    /* 0066c757: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066c758: ret  */ FN_RET(0x0066c680); r_esp += 4; return;
}

void f_0066c950(void) /* sub_66C950 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0066c950);
    /* 0066c950: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066c951: mov ebp, esp */ r_ebp = r_esp;
    /* 0066c953: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066c956: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0066c959: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0066c95e: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0066c961: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 0066c967: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0066c96a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066c96c: mov ecx, eax */ r_ecx = r_eax;
    /* 0066c96e: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0066c971: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66c973u); call_ind(t); }
    /* 0066c973: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0066c976: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066c979: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066c97c: sub edx, dword ptr [ecx + 0x80] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x80u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0066c982: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0066c985: cmp dword ptr [ebp - 8], 0x3fc */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3fcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066c98c: jg 0x66c9f9 */ if ((!fZ&&fS==fO)) goto L_0066c9f9;
L_0066c98e:; BB(0x0066c98e);
    /* 0066c98e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066c991: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 0066c994: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0066c997: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066c99a: mov dword ptr [edx + 0x7c], ecx */ W32((u32)(r_edx+0x7cu), r_ecx);
    /* 0066c99d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066c9a0: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 0066c9a3: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x66c9a8u); f_005eb240();
    /* 0066c9a8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066c9ab: cmp dword ptr [ecx + 0x7c], eax */ {  u32 a = R32((u32)(r_ecx+0x7cu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066c9ae: jle 0x66c9ba */ if ((fZ||fS!=fO)) goto L_0066c9ba;
L_0066c9b0:; BB(0x0066c9b0);
    /* 0066c9b0: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066c9b3: mov dword ptr [edx + 0x7c], 0 */ W32((u32)(r_edx+0x7cu), 0x0u);
L_0066c9ba:; BB(0x0066c9ba);
    /* 0066c9ba: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066c9bf: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066c9c2: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 0066c9c5: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x66c9cau); f_005eb5d0();
    /* 0066c9ca: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066c9cc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066c9cf: mov ecx, dword ptr [ecx + 0x70] */ r_ecx = R32((u32)(r_ecx+0x70u));
    /* 0066c9d2: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x66c9d7u); f_005eb5d0();
    /* 0066c9d7: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066c9da: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 0066c9dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066c9de: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066c9e1: mov edx, dword ptr [ecx + 0x70] */ r_edx = R32((u32)(r_ecx+0x70u));
    /* 0066c9e4: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066c9e7: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 0066c9ea: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0066c9ec: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0066c9f2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66c9f4u); call_ind(t); }
    /* 0066c9f4: jmp 0x66cb03 */ goto L_0066cb03;
L_0066c9f9:; BB(0x0066c9f9);
    /* 0066c9f9: cmp dword ptr [ebp - 8], 0x7f8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x7f8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066ca00: jg 0x66ca41 */ if ((!fZ&&fS==fO)) goto L_0066ca41;
L_0066ca02:; BB(0x0066ca02);
    /* 0066ca02: mov eax, 0x7f8 */ r_eax = 0x7f8u;
    /* 0066ca07: sub eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0066ca0a: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0066ca0b: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0066ca0e: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066ca10: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0066ca13: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066ca14: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066ca17: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 0066ca1a: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x66ca1fu); f_005eb5d0();
    /* 0066ca1f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0066ca22: sub eax, 0x3fc */ {  u32 a = r_eax; u32 b = 0x3fcu; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0066ca27: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0066ca28: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0066ca2b: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066ca2d: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0066ca30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066ca31: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066ca34: mov ecx, dword ptr [edx + 0x70] */ r_ecx = R32((u32)(r_edx+0x70u));
    /* 0066ca37: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x66ca3cu); f_005eb5d0();
    /* 0066ca3c: jmp 0x66cb03 */ goto L_0066cb03;
L_0066ca41:; BB(0x0066ca41);
    /* 0066ca41: cmp dword ptr [ebp - 8], 0xbf4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xbf4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066ca48: jg 0x66cab2 */ if ((!fZ&&fS==fO)) goto L_0066cab2;
L_0066ca4a:; BB(0x0066ca4a);
    /* 0066ca4a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066ca4d: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 0066ca50: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0066ca53: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066ca56: mov dword ptr [edx + 0x78], ecx */ W32((u32)(r_edx+0x78u), r_ecx);
    /* 0066ca59: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066ca5c: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 0066ca5f: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x66ca64u); f_005eb240();
    /* 0066ca64: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066ca67: cmp dword ptr [ecx + 0x78], eax */ {  u32 a = R32((u32)(r_ecx+0x78u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066ca6a: jle 0x66ca76 */ if ((fZ||fS!=fO)) goto L_0066ca76;
L_0066ca6c:; BB(0x0066ca6c);
    /* 0066ca6c: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066ca6f: mov dword ptr [edx + 0x78], 0 */ W32((u32)(r_edx+0x78u), 0x0u);
L_0066ca76:; BB(0x0066ca76);
    /* 0066ca76: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066ca78: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066ca7b: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 0066ca7e: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x66ca83u); f_005eb5d0();
    /* 0066ca83: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066ca88: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066ca8b: mov ecx, dword ptr [ecx + 0x70] */ r_ecx = R32((u32)(r_ecx+0x70u));
    /* 0066ca8e: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x66ca93u); f_005eb5d0();
    /* 0066ca93: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066ca96: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 0066ca99: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066ca9a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066ca9d: mov edx, dword ptr [ecx + 0x6c] */ r_edx = R32((u32)(r_ecx+0x6cu));
    /* 0066caa0: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066caa3: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 0066caa6: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0066caa8: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0066caae: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66cab0u); call_ind(t); }
    /* 0066cab0: jmp 0x66cb03 */ goto L_0066cb03;
L_0066cab2:; BB(0x0066cab2);
    /* 0066cab2: cmp dword ptr [ebp - 8], 0xff0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xff0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066cab9: jg 0x66caf7 */ if ((!fZ&&fS==fO)) goto L_0066caf7;
L_0066cabb:; BB(0x0066cabb);
    /* 0066cabb: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0066cabe: sub eax, 0xbf4 */ {  u32 a = r_eax; u32 b = 0xbf4u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0066cac3: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0066cac4: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0066cac7: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066cac9: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0066cacc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066cacd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066cad0: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 0066cad3: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x66cad8u); f_005eb5d0();
    /* 0066cad8: mov eax, 0xff0 */ r_eax = 0xff0u;
    /* 0066cadd: sub eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0066cae0: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0066cae1: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0066cae4: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066cae6: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0066cae9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066caea: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066caed: mov ecx, dword ptr [edx + 0x70] */ r_ecx = R32((u32)(r_edx+0x70u));
    /* 0066caf0: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x66caf5u); f_005eb5d0();
    /* 0066caf5: jmp 0x66cb03 */ goto L_0066cb03;
L_0066caf7:; BB(0x0066caf7);
    /* 0066caf7: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066cafa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066cafd: mov dword ptr [eax + 0x80], ecx */ W32((u32)(r_eax+0x80u), r_ecx);
L_0066cb03:; BB(0x0066cb03);
    /* 0066cb03: mov esp, ebp */ r_esp = r_ebp;
    /* 0066cb05: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066cb06: ret  */ FN_RET(0x0066c950); r_esp += 4; return;
}

