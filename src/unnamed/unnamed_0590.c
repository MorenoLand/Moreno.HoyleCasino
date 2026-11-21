#include "protos.h"

void f_00590300(void) /* sub_590300 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00590300);
    /* 00590300: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00590301: mov ebp, esp */ r_ebp = r_esp;
    /* 00590303: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00590304: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00590307: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0059030a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059030b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0059030e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059030f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00590312: call 0x590140 */ r_esp -= 4; W32(r_esp, 0x590317u); f_00590140();
    /* 00590317: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0059031a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059031b: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0059031e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059031f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00590322: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00590323: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00590326: call 0x58ff40 */ r_esp -= 4; W32(r_esp, 0x59032bu); f_0058ff40();
    /* 0059032b: mov esp, ebp */ r_esp = r_ebp;
    /* 0059032d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059032e: ret 0xc */ FN_RET(0x00590300); r_esp += 16; return;
}

void f_00590340(void) /* sub_590340 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00590340);
    /* 00590340: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00590341: mov ebp, esp */ r_ebp = r_esp;
    /* 00590343: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00590346: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0059034b: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059034d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00590350: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00590353: movzx eax, byte ptr [ebp + 0x10] */ r_eax = (u32)R8((u32)(r_ebp+0x10u));
    /* 00590357: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00590359: je 0x59037a */ if (fZ) goto L_0059037a;
L_0059035b:; BB(0x0059035b);
    /* 0059035b: push 0x6cdfc4 */ { u32 v = 0x6cdfc4u; r_esp -= 4; W32(r_esp, v); }
    /* 00590360: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x590365u); f_00630f40();
    /* 00590365: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00590368: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00590369: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0059036c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059036d: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x590372u); f_00686d8e();
    /* 00590372: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00590375: jmp 0x59043b */ goto L_0059043b;
L_0059037a:; BB(0x0059037a);
    /* 0059037a: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00590381: jmp 0x59038c */ goto L_0059038c;
L_00590383:; BB(0x00590383);
    /* 00590383: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00590386: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00590389: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_0059038c:; BB(0x0059038c);
    /* 0059038c: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00590390: jge 0x59039e */ if ((fS==fO)) goto L_0059039e;
L_00590392:; BB(0x00590392);
    /* 00590392: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00590395: mov word ptr [ebp + eax*2 - 0xc], 0 */ W16((u32)(r_ebp+r_eax*2+0xfffffff4u), 0x0u);
    /* 0059039c: jmp 0x590383 */ goto L_00590383;
L_0059039e:; BB(0x0059039e);
    /* 0059039e: lea ecx, [ebp - 0xc] */ r_ecx = (u32)(r_ebp+0xfffffff4u);
    /* 005903a1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005903a2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005903a4: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005903a8: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005903ab: add edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005903ae: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005903af: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005903b2: imul eax, eax, 0xc */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005903b5: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 005903bb: lea edx, [ecx + eax + 0xc8] */ r_edx = (u32)(r_ecx+r_eax+0xc8u);
    /* 005903c2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005903c3: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005903c5: call 0x462a40 */ r_esp -= 4; W32(r_esp, 0x5903cau); f_00462a40();
    /* 005903ca: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005903cd: cmp dword ptr [ebp + 0xc], 2 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005903d1: jg 0x5903ec */ if ((!fZ&&fS==fO)) goto L_005903ec;
L_005903d3:; BB(0x005903d3);
    /* 005903d3: cmp dword ptr [ebp + 0xc], 2 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005903d7: jne 0x590408 */ if (!fZ) goto L_00590408;
L_005903d9:; BB(0x005903d9);
    /* 005903d9: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005903db: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005903de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005903df: call 0x4639e0 */ r_esp -= 4; W32(r_esp, 0x5903e4u); f_004639e0();
    /* 005903e4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005903e7: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005903ea: jl 0x590408 */ if ((fS!=fO)) goto L_00590408;
L_005903ec:; BB(0x005903ec);
    /* 005903ec: push 0x6cdf98 */ { u32 v = 0x6cdf98u; r_esp -= 4; W32(r_esp, v); }
    /* 005903f1: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5903f6u); f_00630f40();
    /* 005903f6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005903f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005903fa: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 005903fd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005903fe: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x590403u); f_00686d8e();
    /* 00590403: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00590406: jmp 0x59043b */ goto L_0059043b;
L_00590408:; BB(0x00590408);
    /* 00590408: cmp dword ptr [ebp + 0xc], 2 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059040c: jne 0x59043b */ if (!fZ) goto L_0059043b;
L_0059040e:; BB(0x0059040e);
    /* 0059040e: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00590410: lea edx, [ebp - 0xc] */ r_edx = (u32)(r_ebp+0xfffffff4u);
    /* 00590413: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00590414: call 0x4639e0 */ r_esp -= 4; W32(r_esp, 0x590419u); f_004639e0();
    /* 00590419: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059041c: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059041f: jl 0x59043b */ if ((fS!=fO)) goto L_0059043b;
L_00590421:; BB(0x00590421);
    /* 00590421: push 0x6cdf6c */ { u32 v = 0x6cdf6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00590426: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x59042bu); f_00630f40();
    /* 0059042b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059042e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059042f: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00590432: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00590433: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x590438u); f_00686d8e();
    /* 00590438: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0059043b:; BB(0x0059043b);
    /* 0059043b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059043e: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00590440: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x590445u); f_00686d72();
    /* 00590445: mov esp, ebp */ r_esp = r_ebp;
    /* 00590447: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00590448: ret 0x10 */ FN_RET(0x00590340); r_esp += 20; return;
}

void f_00590810(void) /* sub_590810 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00590810);
    /* 00590810: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00590811: mov ebp, esp */ r_ebp = r_esp;
    /* 00590813: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00590814: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00590817: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0059081a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059081b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0059081e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059081f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00590822: call 0x590480 */ r_esp -= 4; W32(r_esp, 0x590827u); f_00590480();
    /* 00590827: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0059082a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059082b: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0059082e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059082f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00590832: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00590833: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00590836: call 0x590450 */ r_esp -= 4; W32(r_esp, 0x59083bu); f_00590450();
    /* 0059083b: mov esp, ebp */ r_esp = r_ebp;
    /* 0059083d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059083e: ret 0xc */ FN_RET(0x00590810); r_esp += 16; return;
}

void f_00590850(void) /* sub_590850 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00590850);
    /* 00590850: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00590851: mov ebp, esp */ r_ebp = r_esp;
    /* 00590853: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00590856: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0059085b: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059085d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00590860: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00590863: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0059086a: jmp 0x590875 */ goto L_00590875;
L_0059086c:; BB(0x0059086c);
    /* 0059086c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0059086f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00590872: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_00590875:; BB(0x00590875);
    /* 00590875: cmp dword ptr [ebp - 0x14], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00590879: jge 0x590887 */ if ((fS==fO)) goto L_00590887;
L_0059087b:; BB(0x0059087b);
    /* 0059087b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0059087e: mov word ptr [ebp + ecx*2 - 0xc], 0 */ W16((u32)(r_ebp+r_ecx*2+0xfffffff4u), 0x0u);
    /* 00590885: jmp 0x59086c */ goto L_0059086c;
L_00590887:; BB(0x00590887);
    /* 00590887: lea edx, [ebp - 0xc] */ r_edx = (u32)(r_ebp+0xfffffff4u);
    /* 0059088a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059088b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059088d: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00590891: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00590894: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00590897: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00590898: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0059089b: imul ecx, ecx, 0xc */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xcu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0059089e: mov edx, dword ptr [0x7935a8] */ r_edx = R32((u32)(0x7935a8u));
    /* 005908a4: lea eax, [edx + ecx + 0xc8] */ r_eax = (u32)(r_edx+r_ecx+0xc8u);
    /* 005908ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005908ac: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005908ae: call 0x462a40 */ r_esp -= 4; W32(r_esp, 0x5908b3u); f_00462a40();
    /* 005908b3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005908b6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005908b8: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005908ba: lea ecx, [ebp - 0xc] */ r_ecx = (u32)(r_ebp+0xfffffff4u);
    /* 005908bd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005908be: call 0x462ba0 */ r_esp -= 4; W32(r_esp, 0x5908c3u); f_00462ba0();
    /* 005908c3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005908c6: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005908c9: cmp dword ptr [ebp - 0x10], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005908cd: jg 0x5908e8 */ if ((!fZ&&fS==fO)) goto L_005908e8;
L_005908cf:; BB(0x005908cf);
    /* 005908cf: cmp dword ptr [ebp - 0x10], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005908d3: jne 0x5908ec */ if (!fZ) goto L_005908ec;
L_005908d5:; BB(0x005908d5);
    /* 005908d5: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005908d7: lea edx, [ebp - 0xc] */ r_edx = (u32)(r_ebp+0xfffffff4u);
    /* 005908da: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005908db: call 0x4639e0 */ r_esp -= 4; W32(r_esp, 0x5908e0u); f_004639e0();
    /* 005908e0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005908e3: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005908e6: jl 0x5908ec */ if ((fS!=fO)) goto L_005908ec;
L_005908e8:; BB(0x005908e8);
    /* 005908e8: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005908ea: jmp 0x5908ee */ goto L_005908ee;
L_005908ec:; BB(0x005908ec);
    /* 005908ec: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_005908ee:; BB(0x005908ee);
    /* 005908ee: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005908f1: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005908f3: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x5908f8u); f_00686d72();
    /* 005908f8: mov esp, ebp */ r_esp = r_ebp;
    /* 005908fa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005908fb: ret 4 */ FN_RET(0x00590850); r_esp += 8; return;
}

void f_00590980(void) /* sub_590980 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00590980);
    /* 00590980: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00590981: mov ebp, esp */ r_ebp = r_esp;
    /* 00590983: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00590986: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00590989: lea eax, [ebp - 0x18] */ r_eax = (u32)(r_ebp+0xffffffe8u);
    /* 0059098c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059098d: mov ecx, dword ptr [0x7935a4] */ r_ecx = R32((u32)(0x7935a4u));
    /* 00590993: call 0x5daa20 */ r_esp -= 4; W32(r_esp, 0x590998u); f_005daa20();
    /* 00590998: fild dword ptr [eax] */ FPUSH((long double)(i32)R32((u32)(r_eax)));
    /* 0059099a: fstp qword ptr [ebp - 8] */ W_F64((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 0059099d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005909a0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005909a1: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5909a6u); f_005dcb00();
    /* 005909a6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005909a9: mov ecx, eax */ r_ecx = r_eax;
    /* 005909ab: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x5909b0u); f_005d5a50();
    /* 005909b0: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005909b3: fild dword ptr [ebp - 0x20] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffe0u)));
    /* 005909b6: fcomp qword ptr [ebp - 8] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xfffffff8u))); FPOP();
    /* 005909b9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005909bb: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 005909be: jp 0x5909f6 */ if (fP) goto L_005909f6;
L_005909c0:; BB(0x005909c0);
    /* 005909c0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005909c3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005909c4: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5909c9u); f_005dcb00();
    /* 005909c9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005909cc: mov ecx, eax */ r_ecx = r_eax;
    /* 005909ce: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x5909d3u); f_005d5a50();
    /* 005909d3: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005909d6: fild dword ptr [ebp - 0x24] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffdcu)));
    /* 005909d9: fsubr qword ptr [ebp - 8] */ ST(0) = R_F64((u32)(r_ebp+0xfffffff8u)) - ST(0);
    /* 005909dc: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 005909df: fld qword ptr [ebp - 0x10] */ FPUSH(R_F64((u32)(r_ebp+0xfffffff0u)));
    /* 005909e2: fdiv qword ptr [ebp - 8] */ ST(0) = ST(0) / R_F64((u32)(r_ebp+0xfffffff8u));
    /* 005909e5: fcomp qword ptr [0x6b2c38] */ fx_compare(ST(0), R_F64((u32)(0x6b2c38u))); FPOP();
    /* 005909eb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005909ed: test ah, 1 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005909f0: jne 0x5909f6 */ if (!fZ) goto L_005909f6;
L_005909f2:; BB(0x005909f2);
    /* 005909f2: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005909f4: jmp 0x5909f8 */ goto L_005909f8;
L_005909f6:; BB(0x005909f6);
    /* 005909f6: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_005909f8:; BB(0x005909f8);
    /* 005909f8: mov esp, ebp */ r_esp = r_ebp;
    /* 005909fa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005909fb: ret 4 */ FN_RET(0x00590980); r_esp += 8; return;
}

void f_00590c80(void) /* sub_590C80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00590c80);
    /* 00590c80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00590c81: mov ebp, esp */ r_ebp = r_esp;
    /* 00590c83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00590c84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00590c87: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00590c8a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00590c8d: mov dword ptr [eax + 0x1e4], ecx */ W32((u32)(r_eax+0x1e4u), r_ecx);
    /* 00590c93: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00590c96: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00590c99: mov dword ptr [edx + 0x1e0], eax */ W32((u32)(r_edx+0x1e0u), r_eax);
    /* 00590c9f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00590ca2: mov byte ptr [ecx + 0x1dc], 0 */ W8((u32)(r_ecx+0x1dcu), 0x0u);
    /* 00590ca9: mov esp, ebp */ r_esp = r_ebp;
    /* 00590cab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00590cac: ret 8 */ FN_RET(0x00590c80); r_esp += 12; return;
}

void f_00590fe0(void) /* sub_590FE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00590fe0);
    /* 00590fe0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00590fe1: mov ebp, esp */ r_ebp = r_esp;
    /* 00590fe3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00590fe4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00590fe7: push 0x314d1b */ { u32 v = 0x314d1bu; r_esp -= 4; W32(r_esp, v); }
    /* 00590fec: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00590ff2: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x590ff7u); f_005f2ba0();
    /* 00590ff7: push 0x314d1c */ { u32 v = 0x314d1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00590ffc: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00591002: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x591007u); f_005f2ba0();
    /* 00591007: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059100a: cmp dword ptr [eax + 0x4c], 0 */ {  u32 a = R32((u32)(r_eax+0x4cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059100e: je 0x591025 */ if (fZ) goto L_00591025;
L_00591010:; BB(0x00591010);
    /* 00591010: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00591013: mov ecx, dword ptr [ecx + 0x4c] */ r_ecx = R32((u32)(r_ecx+0x4cu));
    /* 00591016: call 0x5f8990 */ r_esp -= 4; W32(r_esp, 0x59101bu); f_005f8990();
    /* 0059101b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059101e: mov dword ptr [edx + 0x4c], 0 */ W32((u32)(r_edx+0x4cu), 0x0u);
L_00591025:; BB(0x00591025);
    /* 00591025: mov esp, ebp */ r_esp = r_ebp;
    /* 00591027: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00591028: ret  */ FN_RET(0x00590fe0); r_esp += 4; return;
}

