#include "protos.h"

void f_005e2860(void) /* sub_5E2860 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e2860);
    /* 005e2860: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e2861: mov ebp, esp */ r_ebp = r_esp;
    /* 005e2863: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e2866: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005e2869: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e286c: call 0x5e10d0 */ r_esp -= 4; W32(r_esp, 0x5e2871u); f_005e10d0();
    /* 005e2871: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005e2874: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e287b: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 005e2882: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005e2889: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005e2890: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e2893: movsx ecx, byte ptr [eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 005e2896: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e2899: jg 0x5e294d */ if ((!fZ&&fS==fO)) goto L_005e294d;
L_005e289f:; BB(0x005e289f);
    /* 005e289f: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005e28a6: jmp 0x5e28b1 */ goto L_005e28b1;
L_005e28a8:; BB(0x005e28a8);
    /* 005e28a8: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e28ab: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e28ae: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_005e28b1:; BB(0x005e28b1);
    /* 005e28b1: cmp dword ptr [ebp - 0xc], 0x14 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e28b5: jge 0x5e28d4 */ if ((fS==fO)) goto L_005e28d4;
L_005e28b7:; BB(0x005e28b7);
    /* 005e28b7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e28ba: add eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e28bd: movsx ecx, byte ptr [eax + 5] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x5u));
    /* 005e28c1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e28c3: je 0x5e28d0 */ if (fZ) goto L_005e28d0;
L_005e28c5:; BB(0x005e28c5);
    /* 005e28c5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e28c8: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e28cb: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005e28ce: jmp 0x5e28d2 */ goto L_005e28d2;
L_005e28d0:; BB(0x005e28d0);
    /* 005e28d0: jmp 0x5e28d4 */ goto L_005e28d4;
L_005e28d2:; BB(0x005e28d2);
    /* 005e28d2: jmp 0x5e28a8 */ goto L_005e28a8;
L_005e28d4:; BB(0x005e28d4);
    /* 005e28d4: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005e28db: jmp 0x5e28e6 */ goto L_005e28e6;
L_005e28dd:; BB(0x005e28dd);
    /* 005e28dd: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e28e0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e28e3: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_005e28e6:; BB(0x005e28e6);
    /* 005e28e6: cmp dword ptr [ebp - 0xc], 0x14 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e28ea: jge 0x5e2935 */ if ((fS==fO)) goto L_005e2935;
L_005e28ec:; BB(0x005e28ec);
    /* 005e28ec: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 005e28f3: jmp 0x5e28fe */ goto L_005e28fe;
L_005e28f5:; BB(0x005e28f5);
    /* 005e28f5: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e28f8: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e28fb: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
L_005e28fe:; BB(0x005e28fe);
    /* 005e28fe: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e2901: cmp edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e2904: jge 0x5e2933 */ if ((fS==fO)) goto L_005e2933;
L_005e2906:; BB(0x005e2906);
    /* 005e2906: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e2909: add eax, dword ptr [ebp - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e290c: movsx ecx, byte ptr [eax + 5] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x5u));
    /* 005e2910: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e2913: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e2916: add edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e2919: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e291c: movsx edx, byte ptr [eax + edx + 0x9c] */ r_edx = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0x9cu));
    /* 005e2924: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e2926: jne 0x5e2931 */ if (!fZ) goto L_005e2931;
L_005e2928:; BB(0x005e2928);
    /* 005e2928: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e292b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e292e: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_005e2931:; BB(0x005e2931);
    /* 005e2931: jmp 0x5e28f5 */ goto L_005e28f5;
L_005e2933:; BB(0x005e2933);
    /* 005e2933: jmp 0x5e28dd */ goto L_005e28dd;
L_005e2935:; BB(0x005e2935);
    /* 005e2935: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e2938: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e2939: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 005e293b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e293d: mov ecx, dword ptr [0x79506c] */ r_ecx = R32((u32)(0x79506cu));
    /* 005e2943: call 0x5e7e00 */ r_esp -= 4; W32(r_esp, 0x5e2948u); f_005e7e00();
    /* 005e2948: jmp 0x5e2b60 */ goto L_005e2b60;
L_005e294d:; BB(0x005e294d);
    /* 005e294d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e2950: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 005e2952: mov byte ptr [ebp - 0x24], al */ W8((u32)(r_ebp+0xffffffdcu), (u8)r_eax);
    /* 005e2955: cmp byte ptr [ebp - 0x24], 4 */ {  u32 a = R8((u32)(r_ebp+0xffffffdcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 005e2959: je 0x5e2974 */ if (fZ) goto L_005e2974;
L_005e295b:; BB(0x005e295b);
    /* 005e295b: cmp byte ptr [ebp - 0x24], 5 */ {  u32 a = R8((u32)(r_ebp+0xffffffdcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 005e295f: je 0x5e2a5b */ if (fZ) goto L_005e2a5b;
L_005e2965:; BB(0x005e2965);
    /* 005e2965: cmp byte ptr [ebp - 0x24], 6 */ {  u32 a = R8((u32)(r_ebp+0xffffffdcu)); u32 b = 0x6u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 005e2969: je 0x5e2acc */ if (fZ) goto L_005e2acc;
L_005e296f:; BB(0x005e296f);
    /* 005e296f: jmp 0x5e2b60 */ goto L_005e2b60;
L_005e2974:; BB(0x005e2974);
    /* 005e2974: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005e297b: jmp 0x5e2986 */ goto L_005e2986;
L_005e297d:; BB(0x005e297d);
    /* 005e297d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e2980: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e2983: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_005e2986:; BB(0x005e2986);
    /* 005e2986: cmp dword ptr [ebp - 0xc], 0x14 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e298a: jge 0x5e2a43 */ if ((fS==fO)) goto L_005e2a43;
L_005e2990:; BB(0x005e2990);
    /* 005e2990: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e2993: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e2996: add edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e2999: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e299c: movsx ecx, byte ptr [eax + edx + 0x9c] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0x9cu));
    /* 005e29a4: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e29a7: jle 0x5e29c2 */ if ((fZ||fS!=fO)) goto L_005e29c2;
L_005e29a9:; BB(0x005e29a9);
    /* 005e29a9: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e29ac: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e29af: add edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e29b2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e29b5: movsx ecx, byte ptr [eax + edx + 0x9c] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0x9cu));
    /* 005e29bd: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e29c0: jl 0x5e2a35 */ if ((fS!=fO)) goto L_005e2a35;
L_005e29c2:; BB(0x005e29c2);
    /* 005e29c2: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e29c5: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e29c8: add edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e29cb: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e29ce: movsx eax, byte ptr [eax + edx + 0x9c] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0x9cu));
    /* 005e29d6: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005e29d7: mov ecx, 0xa */ r_ecx = 0xau;
    /* 005e29dc: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005e29dc, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005e29dc, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005e29de: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e29e1: je 0x5e2a35 */ if (fZ) goto L_005e2a35;
L_005e29e3:; BB(0x005e29e3);
    /* 005e29e3: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e29e6: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e29e9: add edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e29ec: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e29ef: movsx eax, byte ptr [eax + edx + 0x9c] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0x9cu));
    /* 005e29f7: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005e29f8: mov ecx, 0xa */ r_ecx = 0xau;
    /* 005e29fd: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005e29fd, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005e29fd, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005e29ff: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e2a01: je 0x5e2a35 */ if (fZ) goto L_005e2a35;
L_005e2a03:; BB(0x005e2a03);
    /* 005e2a03: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e2a06: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e2a09: add edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e2a0c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e2a0f: movsx ecx, byte ptr [eax + edx + 0x9c] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0x9cu));
    /* 005e2a17: cmp ecx, 0x47 */ {  u32 a = r_ecx; u32 b = 0x47u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e2a1a: jle 0x5e2a3e */ if ((fZ||fS!=fO)) goto L_005e2a3e;
L_005e2a1c:; BB(0x005e2a1c);
    /* 005e2a1c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e2a1f: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e2a22: add edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e2a25: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e2a28: movsx ecx, byte ptr [eax + edx + 0x9c] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0x9cu));
    /* 005e2a30: cmp ecx, 0x50 */ {  u32 a = r_ecx; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e2a33: jge 0x5e2a3e */ if ((fS==fO)) goto L_005e2a3e;
L_005e2a35:; BB(0x005e2a35);
    /* 005e2a35: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e2a38: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e2a3b: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
L_005e2a3e:; BB(0x005e2a3e);
    /* 005e2a3e: jmp 0x5e297d */ goto L_005e297d;
L_005e2a43:; BB(0x005e2a43);
    /* 005e2a43: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e2a46: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e2a47: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 005e2a49: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e2a4b: mov ecx, dword ptr [0x79506c] */ r_ecx = R32((u32)(0x79506cu));
    /* 005e2a51: call 0x5e7e00 */ r_esp -= 4; W32(r_esp, 0x5e2a56u); f_005e7e00();
    /* 005e2a56: jmp 0x5e2b60 */ goto L_005e2b60;
L_005e2a5b:; BB(0x005e2a5b);
    /* 005e2a5b: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005e2a62: jmp 0x5e2a6d */ goto L_005e2a6d;
L_005e2a64:; BB(0x005e2a64);
    /* 005e2a64: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e2a67: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e2a6a: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_005e2a6d:; BB(0x005e2a6d);
    /* 005e2a6d: cmp dword ptr [ebp - 0xc], 0x14 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e2a71: jge 0x5e2aa2 */ if ((fS==fO)) goto L_005e2aa2;
L_005e2a73:; BB(0x005e2a73);
    /* 005e2a73: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e2a76: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e2a79: add edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e2a7c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e2a7f: movsx ecx, byte ptr [eax + edx + 0x9c] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0x9cu));
    /* 005e2a87: cmp ecx, 0x29 */ {  u32 a = r_ecx; u32 b = 0x29u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e2a8a: jge 0x5e2a97 */ if ((fS==fO)) goto L_005e2a97;
L_005e2a8c:; BB(0x005e2a8c);
    /* 005e2a8c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e2a8f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e2a92: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005e2a95: jmp 0x5e2aa0 */ goto L_005e2aa0;
L_005e2a97:; BB(0x005e2a97);
    /* 005e2a97: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e2a9a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e2a9d: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_005e2aa0:; BB(0x005e2aa0);
    /* 005e2aa0: jmp 0x5e2a64 */ goto L_005e2a64;
L_005e2aa2:; BB(0x005e2aa2);
    /* 005e2aa2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e2aa5: sub ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005e2aa8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e2aa9: call 0x686eba */ r_esp -= 4; W32(r_esp, 0x5e2aaeu); f_00686eba();
    /* 005e2aae: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e2ab1: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005e2ab4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e2ab7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e2ab8: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 005e2aba: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e2abc: mov ecx, dword ptr [0x79506c] */ r_ecx = R32((u32)(0x79506cu));
    /* 005e2ac2: call 0x5e7e00 */ r_esp -= 4; W32(r_esp, 0x5e2ac7u); f_005e7e00();
    /* 005e2ac7: jmp 0x5e2b60 */ goto L_005e2b60;
L_005e2acc:; BB(0x005e2acc);
    /* 005e2acc: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005e2ad3: jmp 0x5e2ade */ goto L_005e2ade;
L_005e2ad5:; BB(0x005e2ad5);
    /* 005e2ad5: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e2ad8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e2adb: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_005e2ade:; BB(0x005e2ade);
    /* 005e2ade: cmp dword ptr [ebp - 0xc], 0x14 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e2ae2: jge 0x5e2b3b */ if ((fS==fO)) goto L_005e2b3b;
L_005e2ae4:; BB(0x005e2ae4);
    /* 005e2ae4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e2ae7: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e2aea: add ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e2aed: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e2af0: movsx eax, byte ptr [edx + ecx + 0x9c] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+r_ecx+0x9cu));
    /* 005e2af8: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005e2af9: mov ecx, 0xa */ r_ecx = 0xau;
    /* 005e2afe: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005e2afe, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005e2afe, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005e2b00: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005e2b02: jle 0x5e2b30 */ if ((fZ||fS!=fO)) goto L_005e2b30;
L_005e2b04:; BB(0x005e2b04);
    /* 005e2b04: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e2b07: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e2b0a: add edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e2b0d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e2b10: movsx eax, byte ptr [eax + edx + 0x9c] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0x9cu));
    /* 005e2b18: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005e2b19: mov ecx, 0xa */ r_ecx = 0xau;
    /* 005e2b1e: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005e2b1e, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005e2b1e, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005e2b20: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e2b23: jge 0x5e2b30 */ if ((fS==fO)) goto L_005e2b30;
L_005e2b25:; BB(0x005e2b25);
    /* 005e2b25: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e2b28: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e2b2b: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005e2b2e: jmp 0x5e2b39 */ goto L_005e2b39;
L_005e2b30:; BB(0x005e2b30);
    /* 005e2b30: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e2b33: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e2b36: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_005e2b39:; BB(0x005e2b39);
    /* 005e2b39: jmp 0x5e2ad5 */ goto L_005e2ad5;
L_005e2b3b:; BB(0x005e2b3b);
    /* 005e2b3b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e2b3e: sub ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005e2b41: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e2b42: call 0x686eba */ r_esp -= 4; W32(r_esp, 0x5e2b47u); f_00686eba();
    /* 005e2b47: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e2b4a: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005e2b4d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e2b50: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e2b51: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 005e2b53: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e2b55: mov ecx, dword ptr [0x79506c] */ r_ecx = R32((u32)(0x79506cu));
    /* 005e2b5b: call 0x5e7e00 */ r_esp -= 4; W32(r_esp, 0x5e2b60u); f_005e7e00();
L_005e2b60:; BB(0x005e2b60);
    /* 005e2b60: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e2b63: movsx ecx, byte ptr [eax + 1] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x1u));
    /* 005e2b67: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e2b68: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e2b6b: cmp byte ptr [edx + 3], 0 */ {  u32 a = R8((u32)(r_edx+0x3u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 005e2b6f: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 005e2b72: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e2b73: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e2b76: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e2b77: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e2b7a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e2b7b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e2b7e: movsx ecx, byte ptr [eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 005e2b81: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e2b82: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e2b85: call 0x5e15b0 */ r_esp -= 4; W32(r_esp, 0x5e2b8au); f_005e15b0();
    /* 005e2b8a: mov esp, ebp */ r_esp = r_ebp;
    /* 005e2b8c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e2b8d: ret 4 */ FN_RET(0x005e2860); r_esp += 8; return;
}

void f_005e2c40(void) /* sub_5E2C40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e2c40);
    /* 005e2c40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e2c41: mov ebp, esp */ r_ebp = r_esp;
    /* 005e2c43: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e2c45: push 0x6a9642 */ { u32 v = 0x6a9642u; r_esp -= 4; W32(r_esp, v); }
    /* 005e2c4a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005e2c50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e2c51: sub esp, 0x520 */ {  u32 a = r_esp; u32 b = 0x520u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e2c57: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005e2c5c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e2c5e: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005e2c61: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e2c62: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005e2c63: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e2c64: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005e2c67: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005e2c6d: mov dword ptr [ebp - 0x524], ecx */ W32((u32)(r_ebp+0xfffffadcu), r_ecx);
    /* 005e2c73: lea ecx, [ebp - 0x50c] */ r_ecx = (u32)(r_ebp+0xfffffaf4u);
    /* 005e2c79: call 0x5d4cf0 */ r_esp -= 4; W32(r_esp, 0x5e2c7eu); f_005d4cf0();
    /* 005e2c7e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e2c85: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e2c88: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e2c89: mov ecx, dword ptr [ebp - 0x524] */ r_ecx = R32((u32)(r_ebp+0xfffffadcu));
    /* 005e2c8f: call 0x6368b0 */ r_esp -= 4; W32(r_esp, 0x5e2c94u); f_006368b0();
    /* 005e2c94: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005e2c97: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e2c99: je 0x5e2d50 */ if (fZ) goto L_005e2d50;
L_005e2c9f:; BB(0x005e2c9f);
    /* 005e2c9f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e2ca2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e2ca3: mov ecx, dword ptr [ebp - 0x524] */ r_ecx = R32((u32)(r_ebp+0xfffffadcu));
    /* 005e2ca9: call 0x6369b0 */ r_esp -= 4; W32(r_esp, 0x5e2caeu); f_006369b0();
    /* 005e2cae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e2caf: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5e2cb4u); f_005dcb00();
    /* 005e2cb4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e2cb7: mov ecx, eax */ r_ecx = r_eax;
    /* 005e2cb9: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x5e2cbeu); f_005d52e0();
    /* 005e2cbe: mov dword ptr [ebp - 0x510], eax */ W32((u32)(r_ebp+0xfffffaf0u), r_eax);
    /* 005e2cc4: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 005e2cc7: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005e2cca: imul eax, eax, 0x24 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x24u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e2ccd: mov ecx, dword ptr [ebp - 0x510] */ r_ecx = R32((u32)(r_ebp+0xfffffaf0u));
    /* 005e2cd3: lea edi, [ecx + eax + 0x60] */ r_edi = (u32)(r_ecx+r_eax+0x60u);
    /* 005e2cd7: mov ecx, 9 */ r_ecx = 0x9u;
    /* 005e2cdc: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 005e2cde: mov edx, dword ptr [ebp - 0x510] */ r_edx = R32((u32)(r_ebp+0xfffffaf0u));
    /* 005e2ce4: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 005e2ce7: add eax, dword ptr [ebp + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e2cea: mov ecx, dword ptr [ebp - 0x510] */ r_ecx = R32((u32)(r_ebp+0xfffffaf0u));
    /* 005e2cf0: mov dword ptr [ecx + 0x2c], eax */ W32((u32)(r_ecx+0x2cu), r_eax);
    /* 005e2cf3: mov edx, dword ptr [ebp - 0x510] */ r_edx = R32((u32)(r_ebp+0xfffffaf0u));
    /* 005e2cf9: cmp dword ptr [edx + 0x2c], 0x3b9aca00 */ {  u32 a = R32((u32)(r_edx+0x2cu)); u32 b = 0x3b9aca00u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e2d00: jge 0x5e2d13 */ if ((fS==fO)) goto L_005e2d13;
L_005e2d02:; BB(0x005e2d02);
    /* 005e2d02: mov eax, dword ptr [ebp - 0x510] */ r_eax = R32((u32)(r_ebp+0xfffffaf0u));
    /* 005e2d08: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 005e2d0b: mov dword ptr [ebp - 0x528], ecx */ W32((u32)(r_ebp+0xfffffad8u), r_ecx);
    /* 005e2d11: jmp 0x5e2d1d */ goto L_005e2d1d;
L_005e2d13:; BB(0x005e2d13);
    /* 005e2d13: mov dword ptr [ebp - 0x528], 0x3b9aca00 */ W32((u32)(r_ebp+0xfffffad8u), 0x3b9aca00u);
L_005e2d1d:; BB(0x005e2d1d);
    /* 005e2d1d: mov edx, dword ptr [ebp - 0x510] */ r_edx = R32((u32)(r_ebp+0xfffffaf0u));
    /* 005e2d23: mov eax, dword ptr [ebp - 0x528] */ r_eax = R32((u32)(r_ebp+0xfffffad8u));
    /* 005e2d29: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 005e2d2c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e2d2f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e2d30: mov ecx, dword ptr [ebp - 0x524] */ r_ecx = R32((u32)(r_ebp+0xfffffadcu));
    /* 005e2d36: call 0x6369b0 */ r_esp -= 4; W32(r_esp, 0x5e2d3bu); f_006369b0();
    /* 005e2d3b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e2d3c: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5e2d41u); f_005dcb00();
    /* 005e2d41: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e2d44: mov ecx, eax */ r_ecx = r_eax;
    /* 005e2d46: call 0x63b0a0 */ r_esp -= 4; W32(r_esp, 0x5e2d4bu); f_0063b0a0();
    /* 005e2d4b: jmp 0x5e2e07 */ goto L_005e2e07;
L_005e2d50:; BB(0x005e2d50);
    /* 005e2d50: lea edx, [ebp - 0x520] */ r_edx = (u32)(r_ebp+0xfffffae0u);
    /* 005e2d56: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e2d57: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e2d5a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e2d5b: mov ecx, dword ptr [ebp - 0x524] */ r_ecx = R32((u32)(r_ebp+0xfffffadcu));
    /* 005e2d61: call 0x635f30 */ r_esp -= 4; W32(r_esp, 0x5e2d66u); f_00635f30();
    /* 005e2d66: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005e2d69: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e2d6b: je 0x5e2e07 */ if (fZ) goto L_005e2e07;
L_005e2d71:; BB(0x005e2d71);
    /* 005e2d71: lea edx, [ebp - 0x520] */ r_edx = (u32)(r_ebp+0xfffffae0u);
    /* 005e2d77: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e2d78: lea ecx, [ebp - 0x50c] */ r_ecx = (u32)(r_ebp+0xfffffaf4u);
    /* 005e2d7e: call 0x63ab10 */ r_esp -= 4; W32(r_esp, 0x5e2d83u); f_0063ab10();
    /* 005e2d83: lea ecx, [ebp - 0x50c] */ r_ecx = (u32)(r_ebp+0xfffffaf4u);
    /* 005e2d89: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x5e2d8eu); f_005d52e0();
    /* 005e2d8e: mov dword ptr [ebp - 0x510], eax */ W32((u32)(r_ebp+0xfffffaf0u), r_eax);
    /* 005e2d94: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 005e2d97: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005e2d9a: imul eax, eax, 0x24 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x24u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e2d9d: mov ecx, dword ptr [ebp - 0x510] */ r_ecx = R32((u32)(r_ebp+0xfffffaf0u));
    /* 005e2da3: lea edi, [ecx + eax + 0x60] */ r_edi = (u32)(r_ecx+r_eax+0x60u);
    /* 005e2da7: mov ecx, 9 */ r_ecx = 0x9u;
    /* 005e2dac: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 005e2dae: mov edx, dword ptr [ebp - 0x510] */ r_edx = R32((u32)(r_ebp+0xfffffaf0u));
    /* 005e2db4: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 005e2db7: add eax, dword ptr [ebp + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e2dba: mov ecx, dword ptr [ebp - 0x510] */ r_ecx = R32((u32)(r_ebp+0xfffffaf0u));
    /* 005e2dc0: mov dword ptr [ecx + 0x2c], eax */ W32((u32)(r_ecx+0x2cu), r_eax);
    /* 005e2dc3: mov edx, dword ptr [ebp - 0x510] */ r_edx = R32((u32)(r_ebp+0xfffffaf0u));
    /* 005e2dc9: cmp dword ptr [edx + 0x2c], 0x3b9aca00 */ {  u32 a = R32((u32)(r_edx+0x2cu)); u32 b = 0x3b9aca00u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e2dd0: jge 0x5e2de3 */ if ((fS==fO)) goto L_005e2de3;
L_005e2dd2:; BB(0x005e2dd2);
    /* 005e2dd2: mov eax, dword ptr [ebp - 0x510] */ r_eax = R32((u32)(r_ebp+0xfffffaf0u));
    /* 005e2dd8: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 005e2ddb: mov dword ptr [ebp - 0x52c], ecx */ W32((u32)(r_ebp+0xfffffad4u), r_ecx);
    /* 005e2de1: jmp 0x5e2ded */ goto L_005e2ded;
L_005e2de3:; BB(0x005e2de3);
    /* 005e2de3: mov dword ptr [ebp - 0x52c], 0x3b9aca00 */ W32((u32)(r_ebp+0xfffffad4u), 0x3b9aca00u);
L_005e2ded:; BB(0x005e2ded);
    /* 005e2ded: mov edx, dword ptr [ebp - 0x510] */ r_edx = R32((u32)(r_ebp+0xfffffaf0u));
    /* 005e2df3: mov eax, dword ptr [ebp - 0x52c] */ r_eax = R32((u32)(r_ebp+0xfffffad4u));
    /* 005e2df9: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 005e2dfc: lea ecx, [ebp - 0x50c] */ r_ecx = (u32)(r_ebp+0xfffffaf4u);
    /* 005e2e02: call 0x63b0a0 */ r_esp -= 4; W32(r_esp, 0x5e2e07u); f_0063b0a0();
L_005e2e07:; BB(0x005e2e07);
    /* 005e2e07: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005e2e0e: lea ecx, [ebp - 0x50c] */ r_ecx = (u32)(r_ebp+0xfffffaf4u);
    /* 005e2e14: call 0x5d4f50 */ r_esp -= 4; W32(r_esp, 0x5e2e19u); f_005d4f50();
    /* 005e2e19: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e2e1c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e2e23: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e2e24: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e2e25: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e2e26: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e2e29: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005e2e2b: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x5e2e30u); f_00686d72();
    /* 005e2e30: mov esp, ebp */ r_esp = r_ebp;
    /* 005e2e32: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e2e33: ret 0x10 */ FN_RET(0x005e2c40); r_esp += 20; return;
}

void f_005e2f60(void) /* sub_5E2F60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e2f60);
    /* 005e2f60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e2f61: mov ebp, esp */ r_ebp = r_esp;
    /* 005e2f63: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e2f66: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005e2f69: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e2f6c: call 0x5de600 */ r_esp -= 4; W32(r_esp, 0x5e2f71u); f_005de600();
    /* 005e2f71: mov ecx, eax */ r_ecx = r_eax;
    /* 005e2f73: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x5e2f78u); f_005d52e0();
    /* 005e2f78: mov al, byte ptr [eax + 0x5e] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x5eu))) & 0xffu);
    /* 005e2f7b: mov byte ptr [ebp - 1], al */ W8((u32)(r_ebp+0xffffffffu), (u8)r_eax);
    /* 005e2f7e: mov al, byte ptr [ebp - 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
    /* 005e2f81: mov esp, ebp */ r_esp = r_ebp;
    /* 005e2f83: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e2f84: ret  */ FN_RET(0x005e2f60); r_esp += 4; return;
}

void f_005e2f90(void) /* sub_5E2F90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e2f90);
    /* 005e2f90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e2f91: mov ebp, esp */ r_ebp = r_esp;
    /* 005e2f93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e2f94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e2f97: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e2f9a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e2f9d: mov dl, byte ptr [ecx + 0x4ee8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4ee8u))) & 0xffu);
    /* 005e2fa3: mov byte ptr [eax + 0x4f38], dl */ W8((u32)(r_eax+0x4f38u), (u8)r_edx);
    /* 005e2fa9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e2fac: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e2faf: mov dl, byte ptr [ecx + 0x4ee9] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4ee9u))) & 0xffu);
    /* 005e2fb5: mov byte ptr [eax + 0x4f39], dl */ W8((u32)(r_eax+0x4f39u), (u8)r_edx);
    /* 005e2fbb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e2fbe: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e2fc1: mov dl, byte ptr [ecx + 0x4eea] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4eeau))) & 0xffu);
    /* 005e2fc7: mov byte ptr [eax + 0x4f3a], dl */ W8((u32)(r_eax+0x4f3au), (u8)r_edx);
    /* 005e2fcd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e2fd0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e2fd3: mov edx, dword ptr [ecx + 0x4eec] */ r_edx = R32((u32)(r_ecx+0x4eecu));
    /* 005e2fd9: mov dword ptr [eax + 0x4f3c], edx */ W32((u32)(r_eax+0x4f3cu), r_edx);
    /* 005e2fdf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e2fe2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e2fe5: mov edx, dword ptr [ecx + 0x4ef0] */ r_edx = R32((u32)(r_ecx+0x4ef0u));
    /* 005e2feb: mov dword ptr [eax + 0x4f40], edx */ W32((u32)(r_eax+0x4f40u), r_edx);
    /* 005e2ff1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e2ff4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e2ff7: mov edx, dword ptr [ecx + 0x4ef4] */ r_edx = R32((u32)(r_ecx+0x4ef4u));
    /* 005e2ffd: mov dword ptr [eax + 0x4f44], edx */ W32((u32)(r_eax+0x4f44u), r_edx);
    /* 005e3003: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3006: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3009: mov edx, dword ptr [ecx + 0x4ef8] */ r_edx = R32((u32)(r_ecx+0x4ef8u));
    /* 005e300f: mov dword ptr [eax + 0x4f48], edx */ W32((u32)(r_eax+0x4f48u), r_edx);
    /* 005e3015: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3018: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e301b: mov edx, dword ptr [ecx + 0x4efc] */ r_edx = R32((u32)(r_ecx+0x4efcu));
    /* 005e3021: mov dword ptr [eax + 0x4f4c], edx */ W32((u32)(r_eax+0x4f4cu), r_edx);
    /* 005e3027: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e302a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e302d: mov edx, dword ptr [ecx + 0x4f00] */ r_edx = R32((u32)(r_ecx+0x4f00u));
    /* 005e3033: mov dword ptr [eax + 0x4f50], edx */ W32((u32)(r_eax+0x4f50u), r_edx);
    /* 005e3039: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e303c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e303f: mov dl, byte ptr [ecx + 0x4f04] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4f04u))) & 0xffu);
    /* 005e3045: mov byte ptr [eax + 0x4f54], dl */ W8((u32)(r_eax+0x4f54u), (u8)r_edx);
    /* 005e304b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e304e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3051: mov dl, byte ptr [ecx + 0x4f05] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4f05u))) & 0xffu);
    /* 005e3057: mov byte ptr [eax + 0x4f55], dl */ W8((u32)(r_eax+0x4f55u), (u8)r_edx);
    /* 005e305d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3060: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3063: mov edx, dword ptr [ecx + 0x4f08] */ r_edx = R32((u32)(r_ecx+0x4f08u));
    /* 005e3069: mov dword ptr [eax + 0x4f58], edx */ W32((u32)(r_eax+0x4f58u), r_edx);
    /* 005e306f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3072: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3075: mov edx, dword ptr [ecx + 0x4f0c] */ r_edx = R32((u32)(r_ecx+0x4f0cu));
    /* 005e307b: mov dword ptr [eax + 0x4f5c], edx */ W32((u32)(r_eax+0x4f5cu), r_edx);
    /* 005e3081: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3084: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3087: mov edx, dword ptr [ecx + 0x4f10] */ r_edx = R32((u32)(r_ecx+0x4f10u));
    /* 005e308d: mov dword ptr [eax + 0x4f60], edx */ W32((u32)(r_eax+0x4f60u), r_edx);
    /* 005e3093: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3096: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3099: mov edx, dword ptr [ecx + 0x4f14] */ r_edx = R32((u32)(r_ecx+0x4f14u));
    /* 005e309f: mov dword ptr [eax + 0x4f64], edx */ W32((u32)(r_eax+0x4f64u), r_edx);
    /* 005e30a5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e30a8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e30ab: mov edx, dword ptr [ecx + 0x4f18] */ r_edx = R32((u32)(r_ecx+0x4f18u));
    /* 005e30b1: mov dword ptr [eax + 0x4f68], edx */ W32((u32)(r_eax+0x4f68u), r_edx);
    /* 005e30b7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e30ba: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e30bd: mov edx, dword ptr [ecx + 0x4f1c] */ r_edx = R32((u32)(r_ecx+0x4f1cu));
    /* 005e30c3: mov dword ptr [eax + 0x4f6c], edx */ W32((u32)(r_eax+0x4f6cu), r_edx);
    /* 005e30c9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e30cc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e30cf: mov edx, dword ptr [ecx + 0x4f20] */ r_edx = R32((u32)(r_ecx+0x4f20u));
    /* 005e30d5: mov dword ptr [eax + 0x4f70], edx */ W32((u32)(r_eax+0x4f70u), r_edx);
    /* 005e30db: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e30de: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e30e1: mov edx, dword ptr [ecx + 0x4f24] */ r_edx = R32((u32)(r_ecx+0x4f24u));
    /* 005e30e7: mov dword ptr [eax + 0x4f74], edx */ W32((u32)(r_eax+0x4f74u), r_edx);
    /* 005e30ed: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e30f0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e30f3: mov edx, dword ptr [ecx + 0x4f28] */ r_edx = R32((u32)(r_ecx+0x4f28u));
    /* 005e30f9: mov dword ptr [eax + 0x4f78], edx */ W32((u32)(r_eax+0x4f78u), r_edx);
    /* 005e30ff: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3102: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3105: mov edx, dword ptr [ecx + 0x4f2c] */ r_edx = R32((u32)(r_ecx+0x4f2cu));
    /* 005e310b: mov dword ptr [eax + 0x4f7c], edx */ W32((u32)(r_eax+0x4f7cu), r_edx);
    /* 005e3111: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3114: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3117: mov edx, dword ptr [ecx + 0x4f30] */ r_edx = R32((u32)(r_ecx+0x4f30u));
    /* 005e311d: mov dword ptr [eax + 0x4f80], edx */ W32((u32)(r_eax+0x4f80u), r_edx);
    /* 005e3123: mov esp, ebp */ r_esp = r_ebp;
    /* 005e3125: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e3126: ret  */ FN_RET(0x005e2f90); r_esp += 4; return;
}

