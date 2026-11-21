#include "protos.h"

void f_00422240(void) /* CaribbeanStudSayHumanLineScript::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00422240);
    /* 00422240: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00422241: mov ebp, esp */ r_ebp = r_esp;
    /* 00422243: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00422244: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00422247: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00422249: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042224c: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x422251u); f_005fc0d0();
    /* 00422251: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00422254: mov dword ptr [eax], 0x6b60b4 */ W32((u32)(r_eax), 0x6b60b4u);
    /* 0042225a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042225d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00422260: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 00422263: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00422266: mov esp, ebp */ r_esp = r_ebp;
    /* 00422268: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00422269: ret 4 */ FN_RET(0x00422240); r_esp += 8; return;
}

void f_00422270(void) /* CaribbeanStudSayHumanLineScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00422270);
    /* 00422270: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00422271: mov ebp, esp */ r_ebp = r_esp;
    /* 00422273: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00422276: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 00422279: mov eax, dword ptr [0x790358] */ r_eax = R32((u32)(0x790358u));
    /* 0042227e: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 00422284: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00422287: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0042228a: call 0x5fc360 */ r_esp -= 4; W32(r_esp, 0x42228fu); f_005fc360();
    /* 0042228f: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00422292: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00422296: je 0x4222a7 */ if (fZ) goto L_004222a7;
L_00422298:; BB(0x00422298);
    /* 00422298: cmp dword ptr [ebp - 0x40], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042229c: je 0x422394 */ if (fZ) goto L_00422394;
L_004222a2:; BB(0x004222a2);
    /* 004222a2: jmp 0x4223f3 */ goto L_004223f3;
L_004222a7:; BB(0x004222a7);
    /* 004222a7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004222a9: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004222ac: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004222ae: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004222b1: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004222b4: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4222b6u); call_ind(t); }
    /* 004222b6: mov dword ptr [ebp - 0x24], 0xffffffff */ W32((u32)(r_ebp+0xffffffdcu), 0xffffffffu);
    /* 004222bd: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004222c1: je 0x422364 */ if (fZ) goto L_00422364;
L_004222c7:; BB(0x004222c7);
    /* 004222c7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004222ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004222cb: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4222d0u); f_005dcb00();
    /* 004222d0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004222d3: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 004222d6: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004222d9: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4222deu); f_0063aac0();
    /* 004222de: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 004222e0: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 004222e3: cmp dword ptr [ebp - 0x2c], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004222e7: je 0x422305 */ if (fZ) goto L_00422305;
L_004222e9:; BB(0x004222e9);
    /* 004222e9: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004222ec: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4222f1u); f_0063aac0();
    /* 004222f1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004222f3: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 004222f6: cmp dword ptr [ebp - 0x30], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004222fa: je 0x422305 */ if (fZ) goto L_00422305;
L_004222fc:; BB(0x004222fc);
    /* 004222fc: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 00422303: jmp 0x42230c */ goto L_0042230c;
L_00422305:; BB(0x00422305);
    /* 00422305: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
L_0042230c:; BB(0x0042230c);
    /* 0042230c: movzx eax, byte ptr [ebp - 0x44] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffbcu));
    /* 00422310: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00422312: je 0x422364 */ if (fZ) goto L_00422364;
L_00422314:; BB(0x00422314);
    /* 00422314: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00422317: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0042231a: mov dword ptr [ebp - 0x20], 0xffffffff */ W32((u32)(r_ebp+0xffffffe0u), 0xffffffffu);
    /* 00422321: fldz  */ FPUSH(0.0);
    /* 00422323: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 00422326: fld1  */ FPUSH(1.0);
    /* 00422328: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0042232b: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0042232e: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00422331: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 00422334: cmp dword ptr [ebp - 0x48], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00422338: je 0x42234b */ if (fZ) goto L_0042234b;
L_0042233a:; BB(0x0042233a);
    /* 0042233a: cmp dword ptr [ebp - 0x48], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042233e: je 0x422342 */ if (fZ) goto L_00422342;
L_00422340:; BB(0x00422340);
    /* 00422340: jmp 0x422364 */ goto L_00422364;
L_00422342:; BB(0x00422342);
    /* 00422342: mov dword ptr [ebp - 0x24], 0x7dd */ W32((u32)(r_ebp+0xffffffdcu), 0x7ddu);
    /* 00422349: jmp 0x422364 */ goto L_00422364;
L_0042234b:; BB(0x0042234b);
    /* 0042234b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0042234d: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x422352u); f_0062fbf0();
    /* 00422352: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00422355: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 00422357: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00422359: and eax, 0x24 */ {  u32 a = r_eax; u32 b = 0x24u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0042235c: add eax, 0x803 */ {  u32 a = r_eax; u32 b = 0x803u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00422361: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
L_00422364:; BB(0x00422364);
    /* 00422364: cmp dword ptr [ebp - 0x24], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00422368: je 0x422383 */ if (fZ) goto L_00422383;
L_0042236a:; BB(0x0042236a);
    /* 0042236a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042236c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042236e: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00422371: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00422372: lea edx, [ebp - 0x28] */ r_edx = (u32)(r_ebp+0xffffffd8u);
    /* 00422375: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00422376: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0042237c: call 0x639390 */ r_esp -= 4; W32(r_esp, 0x422381u); f_00639390();
    /* 00422381: jmp 0x422392 */ goto L_00422392;
L_00422383:; BB(0x00422383);
    /* 00422383: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00422385: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00422388: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042238a: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0042238d: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00422390: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x422392u); call_ind(t); }
L_00422392:; BB(0x00422392);
    /* 00422392: jmp 0x4223f3 */ goto L_004223f3;
L_00422394:; BB(0x00422394);
    /* 00422394: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 0042239a: mov edx, dword ptr [ecx + 0xa0] */ r_edx = R32((u32)(r_ecx+0xa0u));
    /* 004223a0: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 004223a3: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 004223a6: cmp dword ptr [eax + 0x20], 0 */ {  u32 a = R32((u32)(r_eax+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004223aa: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 004223ad: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004223ae: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004223b1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004223b2: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 004223b8: call 0x426d40 */ r_esp -= 4; W32(r_esp, 0x4223bdu); f_00426d40();
    /* 004223bd: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004223c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004223c2: jne 0x4223c6 */ if (!fZ) goto L_004223c6;
L_004223c4:; BB(0x004223c4);
    /* 004223c4: jmp 0x4223f3 */ goto L_004223f3;
L_004223c6:; BB(0x004223c6);
    /* 004223c6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004223c8: mov ecx, dword ptr [0x790354] */ r_ecx = R32((u32)(0x790354u));
    /* 004223ce: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 004223d1: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x4223d6u); f_005fc420();
    /* 004223d6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004223d8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004223da: mov edx, dword ptr [0x790354] */ r_edx = R32((u32)(0x790354u));
    /* 004223e0: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004223e3: mov ecx, dword ptr [0x790354] */ r_ecx = R32((u32)(0x790354u));
    /* 004223e9: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 004223ec: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004223ee: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004223f1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4223f3u); call_ind(t); }
L_004223f3:; BB(0x004223f3);
    /* 004223f3: mov esp, ebp */ r_esp = r_ebp;
    /* 004223f5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004223f6: ret  */ FN_RET(0x00422270); r_esp += 4; return;
}

