#include "protos.h"

void f_00680490(void) /* sub_680490 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00680490);
    /* 00680490: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00680491: mov ebp, esp */ r_ebp = r_esp;
    /* 00680493: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00680495: push 0x6add0f */ { u32 v = 0x6add0fu; r_esp -= 4; W32(r_esp, v); }
    /* 0068049a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006804a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006804a1: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006804a4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 006804a9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006804ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006804ac: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 006804af: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 006804b5: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 006804b8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006804bb: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 006804be: cmp dword ptr [ebp - 0x2c], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006804c2: ja 0x680930 */ if ((!fC&&!fZ)) goto L_00680930;
L_006804c8:; BB(0x006804c8);
    /* 006804c8: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006804cb: jmp dword ptr [ecx*4 + 0x680944] */ { u32 t = R32((u32)(r_ecx*4+0x680944u)); switch (t) { case 0x6804d2u: goto L_006804d2; case 0x6806fau: goto L_006806fa; case 0x680884u: goto L_00680884; case 0x680923u: goto L_00680923; default: UNSUP(0x006804cb, "jump table entry is not a known target"); } }
L_006804d2:; BB(0x006804d2);
    /* 006804d2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006804d4: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006804d7: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 006804dd: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006804e0: mov ecx, dword ptr [ecx + 0x17c] */ r_ecx = R32((u32)(r_ecx+0x17cu));
    /* 006804e6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006804e8: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 006804eb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6804edu); call_ind(t); }
    /* 006804ed: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006804f0: cmp dword ptr [ecx + 0x29c], 0x249f0b */ {  u32 a = R32((u32)(r_ecx+0x29cu)); u32 b = 0x249f0bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006804fa: je 0x680587 */ if (fZ) goto L_00680587;
L_00680500:; BB(0x00680500);
    /* 00680500: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00680503: cmp dword ptr [edx + 0x29c], 0x249f09 */ {  u32 a = R32((u32)(r_edx+0x29cu)); u32 b = 0x249f09u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068050d: je 0x680587 */ if (fZ) goto L_00680587;
L_0068050f:; BB(0x0068050f);
    /* 0068050f: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00680512: cmp dword ptr [eax + 0x29c], 0x249f0f */ {  u32 a = R32((u32)(r_eax+0x29cu)); u32 b = 0x249f0fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068051c: je 0x680587 */ if (fZ) goto L_00680587;
L_0068051e:; BB(0x0068051e);
    /* 0068051e: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00680521: cmp dword ptr [ecx + 0x29c], 0x249f0e */ {  u32 a = R32((u32)(r_ecx+0x29cu)); u32 b = 0x249f0eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068052b: je 0x680587 */ if (fZ) goto L_00680587;
L_0068052d:; BB(0x0068052d);
    /* 0068052d: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00680530: cmp dword ptr [edx + 0x29c], 0x249f00 */ {  u32 a = R32((u32)(r_edx+0x29cu)); u32 b = 0x249f00u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068053a: je 0x680587 */ if (fZ) goto L_00680587;
L_0068053c:; BB(0x0068053c);
    /* 0068053c: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0068053f: cmp dword ptr [eax + 0x29c], 0x249f01 */ {  u32 a = R32((u32)(r_eax+0x29cu)); u32 b = 0x249f01u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680549: je 0x680587 */ if (fZ) goto L_00680587;
L_0068054b:; BB(0x0068054b);
    /* 0068054b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0068054e: cmp dword ptr [ecx + 0x29c], 0x249f04 */ {  u32 a = R32((u32)(r_ecx+0x29cu)); u32 b = 0x249f04u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680558: je 0x680587 */ if (fZ) goto L_00680587;
L_0068055a:; BB(0x0068055a);
    /* 0068055a: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0068055d: cmp dword ptr [edx + 0x29c], 0x249f05 */ {  u32 a = R32((u32)(r_edx+0x29cu)); u32 b = 0x249f05u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680567: je 0x680587 */ if (fZ) goto L_00680587;
L_00680569:; BB(0x00680569);
    /* 00680569: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0068056c: cmp dword ptr [eax + 0x29c], 0x249f07 */ {  u32 a = R32((u32)(r_eax+0x29cu)); u32 b = 0x249f07u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680576: je 0x680587 */ if (fZ) goto L_00680587;
L_00680578:; BB(0x00680578);
    /* 00680578: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0068057b: cmp dword ptr [ecx + 0x29c], 0x249f08 */ {  u32 a = R32((u32)(r_ecx+0x29cu)); u32 b = 0x249f08u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680585: jne 0x6805e5 */ if (!fZ) goto L_006805e5;
L_00680587:; BB(0x00680587);
    /* 00680587: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0068058a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0068058c: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0068058f: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 00680592: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x680594u); call_ind(t); }
    /* 00680594: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00680596: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x68059bu); f_00686d82();
    /* 0068059b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068059e: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006805a1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006805a8: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006805ac: je 0x6805c5 */ if (fZ) goto L_006805c5;
L_006805ae:; BB(0x006805ae);
    /* 006805ae: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006805b1: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 006805b7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006805b8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006805bb: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x6805c0u); f_006010a0();
    /* 006805c0: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 006805c3: jmp 0x6805cc */ goto L_006805cc;
L_006805c5:; BB(0x006805c5);
    /* 006805c5: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_006805cc:; BB(0x006805cc);
    /* 006805cc: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006805cf: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 006805d2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006805d9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006805dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006805dd: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006805e0: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x6805e5u); f_005f5d50();
L_006805e5:; BB(0x006805e5);
    /* 006805e5: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006805e8: cmp dword ptr [ecx + 0x29c], 0x249f0d */ {  u32 a = R32((u32)(r_ecx+0x29cu)); u32 b = 0x249f0du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006805f2: jne 0x68065b */ if (!fZ) goto L_0068065b;
L_006805f4:; BB(0x006805f4);
    /* 006805f4: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 006805f6: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x6805fbu); f_00686d82();
    /* 006805fb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006805fe: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00680601: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00680608: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068060c: je 0x68061d */ if (fZ) goto L_0068061d;
L_0068060e:; BB(0x0068060e);
    /* 0068060e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00680610: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00680613: call 0x600a70 */ r_esp -= 4; W32(r_esp, 0x680618u); f_00600a70();
    /* 00680618: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0068061b: jmp 0x680624 */ goto L_00680624;
L_0068061d:; BB(0x0068061d);
    /* 0068061d: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_00680624:; BB(0x00680624);
    /* 00680624: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00680627: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0068062a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00680631: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00680634: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00680635: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00680638: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x68063du); f_005f5d50();
    /* 0068063d: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 00680642: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00680645: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0068064b: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0068064e: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 00680654: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00680656: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00680659: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x68065bu); call_ind(t); }
L_0068065b:; BB(0x0068065b);
    /* 0068065b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0068065e: cmp dword ptr [ecx + 0x29c], 0x249f0a */ {  u32 a = R32((u32)(r_ecx+0x29cu)); u32 b = 0x249f0au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680668: jne 0x6806bb */ if (!fZ) goto L_006806bb;
L_0068066a:; BB(0x0068066a);
    /* 0068066a: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0068066c: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x680671u); f_00686d82();
    /* 00680671: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00680674: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00680677: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0068067e: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680682: je 0x68069b */ if (fZ) goto L_0068069b;
L_00680684:; BB(0x00680684);
    /* 00680684: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00680687: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 0068068d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068068e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00680691: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x680696u); f_006010a0();
    /* 00680696: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00680699: jmp 0x6806a2 */ goto L_006806a2;
L_0068069b:; BB(0x0068069b);
    /* 0068069b: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_006806a2:; BB(0x006806a2);
    /* 006806a2: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006806a5: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006806a8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006806af: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006806b2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006806b3: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006806b6: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x6806bbu); f_005f5d50();
L_006806bb:; BB(0x006806bb);
    /* 006806bb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006806bd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006806be: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 006806c4: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006806c7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006806c8: fld1  */ FPUSH(1.0);
    /* 006806ca: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006806cd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006806cf: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006806d1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006806d3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006806d5: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006806d8: mov ecx, dword ptr [eax + 0x2a0] */ r_ecx = R32((u32)(r_eax+0x2a0u));
    /* 006806de: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006806df: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 006806e5: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006806e7: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006806ed: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 006806f3: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6806f5u); call_ind(t); }
    /* 006806f5: jmp 0x680930 */ goto L_00680930;
L_006806fa:; BB(0x006806fa);
    /* 006806fa: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006806fd: cmp dword ptr [eax + 0x29c], 0x249f00 */ {  u32 a = R32((u32)(r_eax+0x29cu)); u32 b = 0x249f00u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680707: je 0x680736 */ if (fZ) goto L_00680736;
L_00680709:; BB(0x00680709);
    /* 00680709: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0068070c: cmp dword ptr [ecx + 0x29c], 0x249f01 */ {  u32 a = R32((u32)(r_ecx+0x29cu)); u32 b = 0x249f01u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680716: je 0x680736 */ if (fZ) goto L_00680736;
L_00680718:; BB(0x00680718);
    /* 00680718: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0068071b: cmp dword ptr [edx + 0x29c], 0x249f05 */ {  u32 a = R32((u32)(r_edx+0x29cu)); u32 b = 0x249f05u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680725: je 0x680736 */ if (fZ) goto L_00680736;
L_00680727:; BB(0x00680727);
    /* 00680727: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0068072a: cmp dword ptr [eax + 0x29c], 0x249f62 */ {  u32 a = R32((u32)(r_eax+0x29cu)); u32 b = 0x249f62u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680734: jne 0x680753 */ if (!fZ) goto L_00680753;
L_00680736:; BB(0x00680736);
    /* 00680736: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00680738: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0068073a: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0068073d: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 00680743: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00680746: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0068074c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0068074e: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00680751: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x680753u); call_ind(t); }
L_00680753:; BB(0x00680753);
    /* 00680753: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00680756: cmp dword ptr [ecx + 0x29c], 0x249f04 */ {  u32 a = R32((u32)(r_ecx+0x29cu)); u32 b = 0x249f04u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680760: je 0x680771 */ if (fZ) goto L_00680771;
L_00680762:; BB(0x00680762);
    /* 00680762: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00680765: cmp dword ptr [edx + 0x29c], 0x249f07 */ {  u32 a = R32((u32)(r_edx+0x29cu)); u32 b = 0x249f07u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068076f: jne 0x680790 */ if (!fZ) goto L_00680790;
L_00680771:; BB(0x00680771);
    /* 00680771: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 00680773: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00680775: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00680778: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0068077e: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00680781: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 00680787: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00680789: mov ecx, eax */ r_ecx = r_eax;
    /* 0068078b: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0068078e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x680790u); call_ind(t); }
L_00680790:; BB(0x00680790);
    /* 00680790: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00680793: cmp dword ptr [ecx + 0x29c], 0x249f0b */ {  u32 a = R32((u32)(r_ecx+0x29cu)); u32 b = 0x249f0bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068079d: je 0x6807ae */ if (fZ) goto L_006807ae;
L_0068079f:; BB(0x0068079f);
    /* 0068079f: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006807a2: cmp dword ptr [edx + 0x29c], 0x249f09 */ {  u32 a = R32((u32)(r_edx+0x29cu)); u32 b = 0x249f09u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006807ac: jne 0x6807cd */ if (!fZ) goto L_006807cd;
L_006807ae:; BB(0x006807ae);
    /* 006807ae: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 006807b0: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006807b2: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006807b5: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 006807bb: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006807be: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 006807c4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006807c6: mov ecx, eax */ r_ecx = r_eax;
    /* 006807c8: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 006807cb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6807cdu); call_ind(t); }
L_006807cd:; BB(0x006807cd);
    /* 006807cd: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006807d0: cmp dword ptr [ecx + 0x29c], 0x249f0d */ {  u32 a = R32((u32)(r_ecx+0x29cu)); u32 b = 0x249f0du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006807da: je 0x680818 */ if (fZ) goto L_00680818;
L_006807dc:; BB(0x006807dc);
    /* 006807dc: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006807df: cmp dword ptr [edx + 0x29c], 0x249f0c */ {  u32 a = R32((u32)(r_edx+0x29cu)); u32 b = 0x249f0cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006807e9: je 0x680818 */ if (fZ) goto L_00680818;
L_006807eb:; BB(0x006807eb);
    /* 006807eb: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006807ee: cmp dword ptr [eax + 0x29c], 0x249f0f */ {  u32 a = R32((u32)(r_eax+0x29cu)); u32 b = 0x249f0fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006807f8: je 0x680818 */ if (fZ) goto L_00680818;
L_006807fa:; BB(0x006807fa);
    /* 006807fa: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006807fd: cmp dword ptr [ecx + 0x29c], 0x249f0e */ {  u32 a = R32((u32)(r_ecx+0x29cu)); u32 b = 0x249f0eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680807: je 0x680818 */ if (fZ) goto L_00680818;
L_00680809:; BB(0x00680809);
    /* 00680809: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0068080c: cmp dword ptr [edx + 0x29c], 0x249f08 */ {  u32 a = R32((u32)(r_edx+0x29cu)); u32 b = 0x249f08u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680816: jne 0x680837 */ if (!fZ) goto L_00680837;
L_00680818:; BB(0x00680818);
    /* 00680818: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0068081a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0068081c: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0068081f: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 00680825: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00680828: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 0068082e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00680830: mov ecx, eax */ r_ecx = r_eax;
    /* 00680832: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00680835: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x680837u); call_ind(t); }
L_00680837:; BB(0x00680837);
    /* 00680837: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0068083a: cmp dword ptr [ecx + 0x29c], 0x249f0a */ {  u32 a = R32((u32)(r_ecx+0x29cu)); u32 b = 0x249f0au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680844: jne 0x68087f */ if (!fZ) goto L_0068087f;
L_00680846:; BB(0x00680846);
    /* 00680846: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00680849: mov eax, dword ptr [edx + 0x194] */ r_eax = R32((u32)(r_edx+0x194u));
    /* 0068084f: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00680852: mov ecx, dword ptr [ecx + 0x194] */ r_ecx = R32((u32)(r_ecx+0x194u));
    /* 00680858: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0068085a: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0068085d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x68085fu); call_ind(t); }
    /* 0068085f: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 00680864: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00680866: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00680869: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0068086f: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00680872: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 00680878: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0068087a: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0068087d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x68087fu); call_ind(t); }
L_0068087f:; BB(0x0068087f);
    /* 0068087f: jmp 0x680930 */ goto L_00680930;
L_00680884:; BB(0x00680884);
    /* 00680884: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00680887: call 0x5eb610 */ r_esp -= 4; W32(r_esp, 0x68088cu); f_005eb610();
    /* 0068088c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0068088f: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680892: je 0x6808eb */ if (fZ) goto L_006808eb;
L_00680894:; BB(0x00680894);
    /* 00680894: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00680897: call 0x5eb610 */ r_esp -= 4; W32(r_esp, 0x68089cu); f_005eb610();
    /* 0068089c: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0068089f: sub edx, 0x32 */ {  u32 a = r_edx; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006808a2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006808a3: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006808a6: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x6808abu); f_005eb5d0();
    /* 006808ab: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006808ae: cmp dword ptr [eax + 0x194], 0 */ {  u32 a = R32((u32)(r_eax+0x194u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006808b5: je 0x6808ce */ if (fZ) goto L_006808ce;
L_006808b7:; BB(0x006808b7);
    /* 006808b7: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006808ba: call 0x5eb610 */ r_esp -= 4; W32(r_esp, 0x6808bfu); f_005eb610();
    /* 006808bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006808c0: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006808c3: mov ecx, dword ptr [ecx + 0x194] */ r_ecx = R32((u32)(r_ecx+0x194u));
    /* 006808c9: call 0x5f0ae0 */ r_esp -= 4; W32(r_esp, 0x6808ceu); f_005f0ae0();
L_006808ce:; BB(0x006808ce);
    /* 006808ce: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006808d0: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006808d3: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 006808d9: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006808dc: mov ecx, dword ptr [ecx + 0x17c] */ r_ecx = R32((u32)(r_ecx+0x17cu));
    /* 006808e2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006808e4: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 006808e7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6808e9u); call_ind(t); }
    /* 006808e9: jmp 0x680906 */ goto L_00680906;
L_006808eb:; BB(0x006808eb);
    /* 006808eb: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006808ed: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006808f0: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 006808f6: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006808f9: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 006808ff: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00680901: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00680904: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x680906u); call_ind(t); }
L_00680906:; BB(0x00680906);
    /* 00680906: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00680908: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0068090b: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 00680911: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00680914: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0068091a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0068091c: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0068091f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x680921u); call_ind(t); }
    /* 00680921: jmp 0x680930 */ goto L_00680930;
L_00680923:; BB(0x00680923);
    /* 00680923: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00680925: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0068092b: call 0x650550 */ r_esp -= 4; W32(r_esp, 0x680930u); f_00650550();
L_00680930:; BB(0x00680930);
    /* 00680930: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00680933: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0068093a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068093b: mov esp, ebp */ r_esp = r_ebp;
    /* 0068093d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068093e: ret 4 */ FN_RET(0x00680490); r_esp += 8; return;
}

void f_00680ca0(void) /* sub_680CA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00680ca0);
    /* 00680ca0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00680ca1: mov ebp, esp */ r_ebp = r_esp;
    /* 00680ca3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00680ca4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00680ca7: mov eax, dword ptr [ebp + 0x54] */ r_eax = R32((u32)(r_ebp+0x54u));
    /* 00680caa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00680cab: mov cl, byte ptr [ebp + 0x50] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x50u))) & 0xffu);
    /* 00680cae: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00680caf: mov dl, byte ptr [ebp + 0x30] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x30u))) & 0xffu);
    /* 00680cb2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00680cb3: mov al, byte ptr [ebp + 0x2c] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x2cu))) & 0xffu);
    /* 00680cb6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00680cb7: mov cl, byte ptr [ebp + 0x28] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x28u))) & 0xffu);
    /* 00680cba: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00680cbb: mov dl, byte ptr [ebp + 0x24] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x24u))) & 0xffu);
    /* 00680cbe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00680cbf: mov al, byte ptr [ebp + 0x20] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x20u))) & 0xffu);
    /* 00680cc2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00680cc3: mov cl, byte ptr [ebp + 0x1c] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x1cu))) & 0xffu);
    /* 00680cc6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00680cc7: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00680cca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00680ccb: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00680cce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00680ccf: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00680cd2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00680cd3: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 00680cd6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00680cd7: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00680cda: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00680cdb: movsx ecx, byte ptr [ebp + 0x38] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0x38u));
    /* 00680cdf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00680ce0: mov edx, dword ptr [ebp + 0x34] */ r_edx = R32((u32)(r_ebp+0x34u));
    /* 00680ce3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00680ce4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00680ce7: call 0x6260e0 */ r_esp -= 4; W32(r_esp, 0x680cecu); f_006260e0();
    /* 00680cec: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00680cef: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 00680cf2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00680cf5: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00680cf8: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00680cfb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00680cfd: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00680cff: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00680d02: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00680d05: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00680d06: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00680d09: add edx, dword ptr [ebp + 0x40] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x40u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00680d0c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00680d0d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00680d10: add eax, dword ptr [ebp + 0x3c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x3cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00680d13: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00680d14: mov ecx, dword ptr [ebp + 0x48] */ r_ecx = R32((u32)(r_ebp+0x48u));
    /* 00680d17: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00680d18: mov edx, dword ptr [ebp + 0x44] */ r_edx = R32((u32)(r_ebp+0x44u));
    /* 00680d1b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00680d1c: mov eax, dword ptr [ebp + 0x4c] */ r_eax = R32((u32)(r_ebp+0x4cu));
    /* 00680d1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00680d20: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00680d25: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00680d28: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 00680d2b: call 0x5ec8f0 */ r_esp -= 4; W32(r_esp, 0x680d30u); f_005ec8f0();
    /* 00680d30: mov esp, ebp */ r_esp = r_ebp;
    /* 00680d32: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00680d33: ret 0x50 */ FN_RET(0x00680ca0); r_esp += 84; return;
}

void f_00680e90(void) /* sub_680E90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00680e90);
    /* 00680e90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00680e91: mov ebp, esp */ r_ebp = r_esp;
    /* 00680e93: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00680e98: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00680e9a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00680ea0: mov eax, dword ptr [edx + 0x20c] */ r_eax = R32((u32)(r_edx+0x20cu));
    /* 00680ea6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x680ea8u); call_ind(t); }
    /* 00680ea8: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00680eae: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00680eb0: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00680eb6: mov eax, dword ptr [edx + 0x21c] */ r_eax = R32((u32)(r_edx+0x21cu));
    /* 00680ebc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x680ebeu); call_ind(t); }
    /* 00680ebe: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00680ec4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00680ec6: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00680ecc: mov eax, dword ptr [edx + 0x214] */ r_eax = R32((u32)(r_edx+0x214u));
    /* 00680ed2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x680ed4u); call_ind(t); }
    /* 00680ed4: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 00680eda: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00680edc: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 00680ee2: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 00680ee5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x680ee7u); call_ind(t); }
    /* 00680ee7: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00680eed: call 0x631fe0 */ r_esp -= 4; W32(r_esp, 0x680ef2u); f_00631fe0();
    /* 00680ef2: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00680ef5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680ef7: jne 0x680efd */ if (!fZ) goto L_00680efd;
L_00680ef9:; BB(0x00680ef9);
    /* 00680ef9: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00680efb: jmp 0x680f15 */ goto L_00680f15;
L_00680efd:; BB(0x00680efd);
    /* 00680efd: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00680f03: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00680f05: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00680f0b: mov edx, dword ptr [eax + 0x9c] */ r_edx = R32((u32)(r_eax+0x9cu));
    /* 00680f11: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x680f13u); call_ind(t); }
    /* 00680f13: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00680f15:; BB(0x00680f15);
    /* 00680f15: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00680f16: ret  */ FN_RET(0x00680e90); r_esp += 4; return;
}

void f_00680f20(void) /* sub_680F20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00680f20);
    /* 00680f20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00680f21: mov ebp, esp */ r_ebp = r_esp;
    /* 00680f23: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00680f28: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00680f2a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00680f30: mov eax, dword ptr [edx + 0x220] */ r_eax = R32((u32)(r_edx+0x220u));
    /* 00680f36: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x680f38u); call_ind(t); }
    /* 00680f38: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 00680f3e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00680f40: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 00680f46: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 00680f49: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x680f4bu); call_ind(t); }
    /* 00680f4b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00680f51: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00680f53: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00680f59: mov eax, dword ptr [edx + 0x210] */ r_eax = R32((u32)(r_edx+0x210u));
    /* 00680f5f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x680f61u); call_ind(t); }
    /* 00680f61: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00680f67: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00680f69: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00680f6f: mov eax, dword ptr [edx + 0x224] */ r_eax = R32((u32)(r_edx+0x224u));
    /* 00680f75: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x680f77u); call_ind(t); }
    /* 00680f77: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 00680f7d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00680f7f: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 00680f85: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 00680f88: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x680f8au); call_ind(t); }
    /* 00680f8a: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00680f8c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00680f8d: ret  */ FN_RET(0x00680f20); r_esp += 4; return;
}

void f_00680f90(void) /* sub_680F90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00680f90);
    /* 00680f90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00680f91: mov ebp, esp */ r_ebp = r_esp;
    /* 00680f93: call 0x674c70 */ r_esp -= 4; W32(r_esp, 0x680f98u); f_00674c70();
    /* 00680f98: call 0x6664a0 */ r_esp -= 4; W32(r_esp, 0x680f9du); f_006664a0();
    /* 00680f9d: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00680fa2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00680fa4: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00680faa: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00680fad: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x680fafu); call_ind(t); }
    /* 00680faf: call 0x6664d0 */ r_esp -= 4; W32(r_esp, 0x680fb4u); f_006664d0();
    /* 00680fb4: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00680fba: call 0x5f3100 */ r_esp -= 4; W32(r_esp, 0x680fbfu); f_005f3100();
    /* 00680fbf: call 0x6664e0 */ r_esp -= 4; W32(r_esp, 0x680fc4u); f_006664e0();
    /* 00680fc4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00680fc6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00680fc7: ret  */ FN_RET(0x00680f90); r_esp += 4; return;
}

void f_00680fd0(void) /* sub_680FD0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00680fd0);
    /* 00680fd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00680fd1: mov ebp, esp */ r_ebp = r_esp;
    /* 00680fd3: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00680fd6: mov byte ptr [ebp - 1], 0 */ W8((u32)(r_ebp+0xffffffffu), 0x0u);
    /* 00680fda: cmp dword ptr [0x162ee84], 0 */ {  u32 a = R32((u32)(0x162ee84u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680fe1: je 0x681040 */ if (fZ) goto L_00681040;
L_00680fe3:; BB(0x00680fe3);
    /* 00680fe3: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00680fe8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00680fea: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00680ff0: mov eax, dword ptr [edx + 0x94] */ r_eax = R32((u32)(r_edx+0x94u));
    /* 00680ff6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x680ff8u); call_ind(t); }
    /* 00680ff8: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00680ffe: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00681000: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00681006: mov eax, dword ptr [edx + 0x98] */ r_eax = R32((u32)(r_edx+0x98u));
    /* 0068100c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x68100eu); call_ind(t); }
    /* 0068100e: mov byte ptr [ebp - 1], al */ W8((u32)(r_ebp+0xffffffffu), (u8)r_eax);
    /* 00681011: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00681017: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0068101a: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0068101d: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00681020: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681024: je 0x681039 */ if (fZ) goto L_00681039;
L_00681026:; BB(0x00681026);
    /* 00681026: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00681028: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068102b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0068102d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00681030: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00681032: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x681034u); call_ind(t); }
    /* 00681034: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00681037: jmp 0x681040 */ goto L_00681040;
L_00681039:; BB(0x00681039);
    /* 00681039: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00681040:; BB(0x00681040);
    /* 00681040: cmp dword ptr [0x7960d8], 0 */ {  u32 a = R32((u32)(0x7960d8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681047: je 0x68109a */ if (fZ) goto L_0068109a;
L_00681049:; BB(0x00681049);
    /* 00681049: movzx ecx, byte ptr [0x163184c] */ r_ecx = (u32)R8((u32)(0x163184cu));
    /* 00681050: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681052: je 0x68106c */ if (fZ) goto L_0068106c;
L_00681054:; BB(0x00681054);
    /* 00681054: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 0068105a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0068105c: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 00681062: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 00681065: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x681067u); call_ind(t); }
    /* 00681067: call 0x6664f0 */ r_esp -= 4; W32(r_esp, 0x68106cu); f_006664f0();
L_0068106c:; BB(0x0068106c);
    /* 0068106c: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 00681071: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00681074: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00681077: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0068107a: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068107e: je 0x681093 */ if (fZ) goto L_00681093;
L_00681080:; BB(0x00681080);
    /* 00681080: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00681082: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00681085: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00681087: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0068108a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0068108c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x68108eu); call_ind(t); }
    /* 0068108e: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00681091: jmp 0x68109a */ goto L_0068109a;
L_00681093:; BB(0x00681093);
    /* 00681093: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_0068109a:; BB(0x0068109a);
    /* 0068109a: movzx eax, byte ptr [ebp - 1] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 0068109e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006810a0: je 0x68122e */ if (fZ) goto L_0068122e;
L_006810a6:; BB(0x006810a6);
    /* 006810a6: push 0x1f4 */ { u32 v = 0x1f4u; r_esp -= 4; W32(r_esp, v); }
    /* 006810ab: call 0x5e9f00 */ r_esp -= 4; W32(r_esp, 0x6810b0u); f_005e9f00();
    /* 006810b0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006810b3: mov ecx, dword ptr [0x1630bc0] */ r_ecx = R32((u32)(0x1630bc0u));
    /* 006810b9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006810ba: push 0x6e2210 */ { u32 v = 0x6e2210u; r_esp -= 4; W32(r_esp, v); }
    /* 006810bf: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x6810c4u); f_0062fde0();
    /* 006810c4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006810c7: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 006810ce: jmp 0x6810d9 */ goto L_006810d9;
L_006810d0:; BB(0x006810d0);
    /* 006810d0: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006810d3: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006810d6: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_006810d9:; BB(0x006810d9);
    /* 006810d9: cmp dword ptr [ebp - 8], 0x19 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006810dd: jg 0x681108 */ if ((!fZ&&fS==fO)) goto L_00681108;
L_006810df:; BB(0x006810df);
    /* 006810df: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006810e2: mov ecx, dword ptr [eax*4 + 0x1630bc8] */ r_ecx = R32((u32)(r_eax*4+0x1630bc8u));
    /* 006810e9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006810ea: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006810ed: mov eax, dword ptr [edx*4 + 0x1631078] */ r_eax = R32((u32)(r_edx*4+0x1631078u));
    /* 006810f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006810f5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006810f8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006810f9: push 0x6e21ec */ { u32 v = 0x6e21ecu; r_esp -= 4; W32(r_esp, v); }
    /* 006810fe: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x681103u); f_0062fde0();
    /* 00681103: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00681106: jmp 0x6810d0 */ goto L_006810d0;
L_00681108:; BB(0x00681108);
    /* 00681108: jmp 0x681113 */ goto L_00681113;
L_0068110a:; BB(0x0068110a);
    /* 0068110a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0068110d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00681110: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_00681113:; BB(0x00681113);
    /* 00681113: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00681116: cmp eax, dword ptr [0x78142c] */ {  u32 a = r_eax; u32 b = R32((u32)(0x78142cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0068111c: jge 0x68113c */ if ((fS==fO)) goto L_0068113c;
L_0068111e:; BB(0x0068111e);
    /* 0068111e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00681121: mov edx, dword ptr [ecx*4 + 0x1631078] */ r_edx = R32((u32)(r_ecx*4+0x1631078u));
    /* 00681128: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00681129: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0068112c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068112d: push 0x6e21d4 */ { u32 v = 0x6e21d4u; r_esp -= 4; W32(r_esp, v); }
    /* 00681132: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x681137u); f_0062fde0();
    /* 00681137: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068113a: jmp 0x68110a */ goto L_0068110a;
L_0068113c:; BB(0x0068113c);
    /* 0068113c: push 0x1f4 */ { u32 v = 0x1f4u; r_esp -= 4; W32(r_esp, v); }
    /* 00681141: call 0x5e9f00 */ r_esp -= 4; W32(r_esp, 0x681146u); f_005e9f00();
    /* 00681146: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00681149: push 0x6e21bc */ { u32 v = 0x6e21bcu; r_esp -= 4; W32(r_esp, v); }
    /* 0068114e: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x681153u); f_0062fde0();
    /* 00681153: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00681156: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_0068115d:; BB(0x0068115d);
    /* 0068115d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00681160: cmp ecx, dword ptr [0x1631848] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x1631848u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00681166: jge 0x681221 */ if ((fS==fO)) goto L_00681221;
L_0068116c:; BB(0x0068116c);
    /* 0068116c: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0068116f: mov eax, dword ptr [edx*8 + 0x163152c] */ r_eax = R32((u32)(r_edx*8+0x163152cu));
    /* 00681176: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00681179: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0068117c: mov eax, 0x10000 */ r_eax = 0x10000u;
    /* 00681181: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00681182: idiv dword ptr [ecx*8 + 0x1631528] */ { i32 d = (i32)R32((u32)(r_ecx*8+0x1631528u)); if (!d) UNSUP(0x00681182, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00681182, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00681189: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0068118c: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00681193: jmp 0x68119e */ goto L_0068119e;
L_00681195:; BB(0x00681195);
    /* 00681195: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00681198: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0068119b: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0068119e:; BB(0x0068119e);
    /* 0068119e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006811a1: cmp eax, dword ptr [ebp - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006811a4: jge 0x681213 */ if ((fS==fO)) goto L_00681213;
L_006811a6:; BB(0x006811a6);
    /* 006811a6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006811a9: cmp dword ptr [ecx], 0xaaaaaaaa */ {  u32 a = R32((u32)(r_ecx)); u32 b = 0xaaaaaaaau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006811af: jne 0x681201 */ if (!fZ) goto L_00681201;
L_006811b1:; BB(0x006811b1);
    /* 006811b1: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006811b4: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 006811b7: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006811ba: cmp dword ptr [eax + 4], 0xabcdabcd */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0xabcdabcdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006811c1: jne 0x6811d7 */ if (!fZ) goto L_006811d7;
L_006811c3:; BB(0x006811c3);
    /* 006811c3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006811c6: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006811c9: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006811cc: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006811cf: cmp dword ptr [edx], 0xaaaaaaaa */ {  u32 a = R32((u32)(r_edx)); u32 b = 0xaaaaaaaau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006811d5: jne 0x6811c3 */ if (!fZ) goto L_006811c3;
L_006811d7:; BB(0x006811d7);
    /* 006811d7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006811da: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 006811dd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006811de: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006811e1: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006811e4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006811e5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006811e8: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 006811eb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006811ec: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006811ef: movzx eax, word ptr [edx + 4] */ r_eax = (u32)R16((u32)(r_edx+0x4u));
    /* 006811f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006811f4: push 0x6e217c */ { u32 v = 0x6e217cu; r_esp -= 4; W32(r_esp, v); }
    /* 006811f9: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x6811feu); f_0062fde0();
    /* 006811fe: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00681201:; BB(0x00681201);
    /* 00681201: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00681204: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00681207: add edx, dword ptr [ecx*8 + 0x1631528] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx*8+0x1631528u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0068120e: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00681211: jmp 0x681195 */ goto L_00681195;
L_00681213:; BB(0x00681213);
    /* 00681213: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00681216: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00681219: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0068121c: jmp 0x68115d */ goto L_0068115d;
L_00681221:; BB(0x00681221);
    /* 00681221: push 0x1f4 */ { u32 v = 0x1f4u; r_esp -= 4; W32(r_esp, v); }
    /* 00681226: call 0x5e9f00 */ r_esp -= 4; W32(r_esp, 0x68122bu); f_005e9f00();
    /* 0068122b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0068122e:; BB(0x0068122e);
    /* 0068122e: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00681230: mov esp, ebp */ r_esp = r_ebp;
    /* 00681232: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00681233: ret  */ FN_RET(0x00680fd0); r_esp += 4; return;
}

