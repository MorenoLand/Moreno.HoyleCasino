#include "protos.h"

void f_005703e0(void) /* RoadKillSlotCounter::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005703e0);
    /* 005703e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005703e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005703e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005703e5: push 0x6a5f80 */ { u32 v = 0x6a5f80u; r_esp -= 4; W32(r_esp, v); }
    /* 005703ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005703f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005703f1: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005703f4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005703f9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005703fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005703fc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005703ff: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00570405: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00570408: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057040b: mov dword ptr [eax], 0x6ca574 */ W32((u32)(r_eax), 0x6ca574u);
    /* 00570411: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00570418: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057041b: cmp dword ptr [ecx + 0x18c], 0 */ {  u32 a = R32((u32)(r_ecx+0x18cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00570422: je 0x5704d5 */ if (fZ) goto L_005704d5;
L_00570428:; BB(0x00570428);
    /* 00570428: mov word ptr [ebp - 0x10], 0 */ W16((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0057042e: jmp 0x57043c */ goto L_0057043c;
L_00570430:; BB(0x00570430);
    /* 00570430: mov dx, word ptr [ebp - 0x10] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 00570434: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00570438: mov word ptr [ebp - 0x10], dx */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_edx);
L_0057043c:; BB(0x0057043c);
    /* 0057043c: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00570440: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00570443: movsx edx, word ptr [ecx + 0x184] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x184u));
    /* 0057044a: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057044c: jge 0x5704b0 */ if ((fS==fO)) goto L_005704b0;
L_0057044e:; BB(0x0057044e);
    /* 0057044e: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00570452: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00570455: mov edx, dword ptr [ecx + 0x18c] */ r_edx = R32((u32)(r_ecx+0x18cu));
    /* 0057045b: cmp dword ptr [edx + eax*4], 0 */ {  u32 a = R32((u32)(r_edx+r_eax*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057045f: je 0x5704ae */ if (fZ) goto L_005704ae;
L_00570461:; BB(0x00570461);
    /* 00570461: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00570465: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00570468: mov edx, dword ptr [ecx + 0x18c] */ r_edx = R32((u32)(r_ecx+0x18cu));
    /* 0057046e: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 00570471: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00570474: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00570477: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0057047a: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057047e: je 0x570493 */ if (fZ) goto L_00570493;
L_00570480:; BB(0x00570480);
    /* 00570480: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00570482: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00570485: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00570487: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057048a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0057048c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x57048eu); call_ind(t); }
    /* 0057048e: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00570491: jmp 0x57049a */ goto L_0057049a;
L_00570493:; BB(0x00570493);
    /* 00570493: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0057049a:; BB(0x0057049a);
    /* 0057049a: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0057049e: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005704a1: mov edx, dword ptr [ecx + 0x18c] */ r_edx = R32((u32)(r_ecx+0x18cu));
    /* 005704a7: mov dword ptr [edx + eax*4], 0 */ W32((u32)(r_edx+r_eax*4), 0x0u);
L_005704ae:; BB(0x005704ae);
    /* 005704ae: jmp 0x570430 */ goto L_00570430;
L_005704b0:; BB(0x005704b0);
    /* 005704b0: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005704b3: mov ecx, dword ptr [eax + 0x18c] */ r_ecx = R32((u32)(r_eax+0x18cu));
    /* 005704b9: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005704bc: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005704bf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005704c0: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5704c5u); f_00686cae();
    /* 005704c5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005704c8: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005704cb: mov dword ptr [eax + 0x18c], 0 */ W32((u32)(r_eax+0x18cu), 0x0u);
L_005704d5:; BB(0x005704d5);
    /* 005704d5: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005704d8: cmp dword ptr [ecx + 0x190], 0 */ {  u32 a = R32((u32)(r_ecx+0x190u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005704df: je 0x570520 */ if (fZ) goto L_00570520;
L_005704e1:; BB(0x005704e1);
    /* 005704e1: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005704e4: mov eax, dword ptr [edx + 0x190] */ r_eax = R32((u32)(r_edx+0x190u));
    /* 005704ea: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005704ed: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005704f0: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005704f3: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005704f7: je 0x57050c */ if (fZ) goto L_0057050c;
L_005704f9:; BB(0x005704f9);
    /* 005704f9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005704fb: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005704fe: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00570500: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00570503: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00570505: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x570507u); call_ind(t); }
    /* 00570507: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0057050a: jmp 0x570513 */ goto L_00570513;
L_0057050c:; BB(0x0057050c);
    /* 0057050c: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_00570513:; BB(0x00570513);
    /* 00570513: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00570516: mov dword ptr [eax + 0x190], 0 */ W32((u32)(r_eax+0x190u), 0x0u);
L_00570520:; BB(0x00570520);
    /* 00570520: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00570527: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057052a: call 0x5f5c40 */ r_esp -= 4; W32(r_esp, 0x57052fu); f_005f5c40();
    /* 0057052f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00570532: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00570539: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0057053a: mov esp, ebp */ r_esp = r_ebp;
    /* 0057053c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057053d: ret  */ FN_RET(0x005703e0); r_esp += 4; return;
}

void f_00570540(void) /* RoadKillSlotCounter::vfunc16 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00570540);
    /* 00570540: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00570541: mov ebp, esp */ r_ebp = r_esp;
    /* 00570543: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00570545: push 0x6a5fa6 */ { u32 v = 0x6a5fa6u; r_esp -= 4; W32(r_esp, v); }
    /* 0057054a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00570550: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00570551: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00570554: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00570559: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057055b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057055c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0057055f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00570565: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00570568: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0057056b: call 0x5f5cc0 */ r_esp -= 4; W32(r_esp, 0x570570u); f_005f5cc0();
    /* 00570570: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00570573: mov dword ptr [eax + 0x188], 0 */ W32((u32)(r_eax+0x188u), 0x0u);
    /* 0057057d: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0057057f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00570582: movsx edx, word ptr [ecx + 0x184] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x184u));
    /* 00570589: imul edx, edx, 9 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x9u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057058c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057058d: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00570590: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00570592: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00570595: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 00570598: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57059au); call_ind(t); }
    /* 0057059a: mov word ptr [ebp - 0x10], 0 */ W16((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005705a0: jmp 0x5705ae */ goto L_005705ae;
L_005705a2:; BB(0x005705a2);
    /* 005705a2: mov cx, word ptr [ebp - 0x10] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 005705a6: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005705aa: mov word ptr [ebp - 0x10], cx */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_ecx);
L_005705ae:; BB(0x005705ae);
    /* 005705ae: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 005705b2: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005705b5: movsx ecx, word ptr [eax + 0x184] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x184u));
    /* 005705bc: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005705be: jge 0x570764 */ if ((fS==fO)) goto L_00570764;
L_005705c4:; BB(0x005705c4);
    /* 005705c4: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 005705c9: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5705ceu); f_00686d82();
    /* 005705ce: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005705d1: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005705d4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005705db: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005705df: je 0x5705ee */ if (fZ) goto L_005705ee;
L_005705e1:; BB(0x005705e1);
    /* 005705e1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005705e4: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x5705e9u); f_005eaaf0();
    /* 005705e9: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005705ec: jmp 0x5705f5 */ goto L_005705f5;
L_005705ee:; BB(0x005705ee);
    /* 005705ee: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_005705f5:; BB(0x005705f5);
    /* 005705f5: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005705f8: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005705fb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00570602: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00570606: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00570609: mov edx, dword ptr [ecx + 0x18c] */ r_edx = R32((u32)(r_ecx+0x18cu));
    /* 0057060f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00570612: mov dword ptr [edx + eax*4], ecx */ W32((u32)(r_edx+r_eax*4), r_ecx);
    /* 00570615: push 0x16044 */ { u32 v = 0x16044u; r_esp -= 4; W32(r_esp, v); }
    /* 0057061a: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0057061e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00570621: mov ecx, dword ptr [eax + 0x18c] */ r_ecx = R32((u32)(r_eax+0x18cu));
    /* 00570627: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 0057062a: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x57062fu); f_005eaf00();
    /* 0057062f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00570631: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00570635: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00570638: mov ecx, dword ptr [eax + 0x18c] */ r_ecx = R32((u32)(r_eax+0x18cu));
    /* 0057063e: mov edx, dword ptr [ecx + edx*4] */ r_edx = R32((u32)(r_ecx+r_edx*4));
    /* 00570641: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00570645: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00570648: mov ecx, dword ptr [ecx + 0x18c] */ r_ecx = R32((u32)(r_ecx+0x18cu));
    /* 0057064e: mov ecx, dword ptr [ecx + eax*4] */ r_ecx = R32((u32)(r_ecx+r_eax*4));
    /* 00570651: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00570653: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00570659: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57065bu); call_ind(t); }
    /* 0057065b: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0057065f: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00570662: mov eax, dword ptr [edx + 0x18c] */ r_eax = R32((u32)(r_edx+0x18cu));
    /* 00570668: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 0057066b: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0057066f: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00570672: mov eax, dword ptr [eax + 0x18c] */ r_eax = R32((u32)(r_eax+0x18cu));
    /* 00570678: mov edx, dword ptr [eax + edx*4] */ r_edx = R32((u32)(r_eax+r_edx*4));
    /* 0057067b: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0057067d: mov ecx, edx */ r_ecx = r_edx;
    /* 0057067f: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 00570682: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x570684u); call_ind(t); }
    /* 00570684: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00570687: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00570689: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0057068c: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 0057068f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x570691u); call_ind(t); }
    /* 00570691: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00570692: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00570696: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00570699: imul ecx, ecx, 9 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x9u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057069c: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0057069f: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005706a2: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005706a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005706a5: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 005706a9: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005706ac: mov eax, dword ptr [edx + 0x18c] */ r_eax = R32((u32)(r_edx+0x18cu));
    /* 005706b2: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 005706b5: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 005706b9: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005706bc: mov eax, dword ptr [eax + 0x18c] */ r_eax = R32((u32)(r_eax+0x18cu));
    /* 005706c2: mov edx, dword ptr [eax + edx*4] */ r_edx = R32((u32)(r_eax+r_edx*4));
    /* 005706c5: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005706c7: mov ecx, edx */ r_ecx = r_edx;
    /* 005706c9: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 005706cc: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5706ceu); call_ind(t); }
    /* 005706ce: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005706d1: call 0x5f53c0 */ r_esp -= 4; W32(r_esp, 0x5706d6u); f_005f53c0();
    /* 005706d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005706d7: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 005706db: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005706de: mov edx, dword ptr [ecx + 0x18c] */ r_edx = R32((u32)(r_ecx+0x18cu));
    /* 005706e4: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 005706e7: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 005706eb: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005706ee: mov edx, dword ptr [edx + 0x18c] */ r_edx = R32((u32)(r_edx+0x18cu));
    /* 005706f4: mov ecx, dword ptr [edx + ecx*4] */ r_ecx = R32((u32)(r_edx+r_ecx*4));
    /* 005706f7: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005706f9: mov edx, dword ptr [eax + 0x6c] */ r_edx = R32((u32)(r_eax+0x6cu));
    /* 005706fc: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5706feu); call_ind(t); }
    /* 005706fe: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00570701: call 0x5f54c0 */ r_esp -= 4; W32(r_esp, 0x570706u); f_005f54c0();
    /* 00570706: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00570709: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057070b: je 0x570738 */ if (fZ) goto L_00570738;
L_0057070d:; BB(0x0057070d);
    /* 0057070d: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00570711: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00570714: mov eax, dword ptr [edx + 0x18c] */ r_eax = R32((u32)(r_edx+0x18cu));
    /* 0057071a: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 0057071d: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00570721: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00570724: mov eax, dword ptr [eax + 0x18c] */ r_eax = R32((u32)(r_eax+0x18cu));
    /* 0057072a: mov edx, dword ptr [eax + edx*4] */ r_edx = R32((u32)(r_eax+r_edx*4));
    /* 0057072d: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0057072f: mov ecx, edx */ r_ecx = r_edx;
    /* 00570731: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 00570734: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x570736u); call_ind(t); }
    /* 00570736: jmp 0x57075f */ goto L_0057075f;
L_00570738:; BB(0x00570738);
    /* 00570738: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0057073c: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0057073f: mov edx, dword ptr [ecx + 0x18c] */ r_edx = R32((u32)(r_ecx+0x18cu));
    /* 00570745: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 00570748: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0057074c: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0057074f: mov edx, dword ptr [edx + 0x18c] */ r_edx = R32((u32)(r_edx+0x18cu));
    /* 00570755: mov ecx, dword ptr [edx + ecx*4] */ r_ecx = R32((u32)(r_edx+r_ecx*4));
    /* 00570758: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0057075a: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 0057075d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x57075fu); call_ind(t); }
L_0057075f:; BB(0x0057075f);
    /* 0057075f: jmp 0x5705a2 */ goto L_005705a2;
L_00570764:; BB(0x00570764);
    /* 00570764: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00570767: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0057076e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0057076f: mov esp, ebp */ r_esp = r_ebp;
    /* 00570771: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00570772: ret  */ FN_RET(0x00570540); r_esp += 4; return;
}

void f_00570780(void) /* RoadKillSlotCounter::vfunc17 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00570780);
    /* 00570780: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00570781: mov ebp, esp */ r_ebp = r_esp;
    /* 00570783: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00570786: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00570789: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0057078c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057078d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00570790: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00570791: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00570794: call 0x5eb260 */ r_esp -= 4; W32(r_esp, 0x570799u); f_005eb260();
    /* 00570799: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0057079f: jmp 0x5707ad */ goto L_005707ad;
L_005707a1:; BB(0x005707a1);
    /* 005707a1: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 005707a5: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005707a9: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
L_005707ad:; BB(0x005707ad);
    /* 005707ad: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005707b1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005707b4: movsx edx, word ptr [ecx + 0x184] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x184u));
    /* 005707bb: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005707bd: jge 0x570814 */ if ((fS==fO)) goto L_00570814;
L_005707bf:; BB(0x005707bf);
    /* 005707bf: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005707c3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005707c6: mov edx, dword ptr [ecx + 0x18c] */ r_edx = R32((u32)(r_ecx+0x18cu));
    /* 005707cc: cmp dword ptr [edx + eax*4], 0 */ {  u32 a = R32((u32)(r_edx+r_eax*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005707d0: je 0x570812 */ if (fZ) goto L_00570812;
L_005707d2:; BB(0x005707d2);
    /* 005707d2: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005707d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005707d6: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005707da: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005707dd: imul ecx, ecx, 9 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x9u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005707e0: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005707e3: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005707e6: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005707e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005707e9: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005707ed: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005707f0: mov eax, dword ptr [edx + 0x18c] */ r_eax = R32((u32)(r_edx+0x18cu));
    /* 005707f6: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 005707f9: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005707fd: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00570800: mov eax, dword ptr [eax + 0x18c] */ r_eax = R32((u32)(r_eax+0x18cu));
    /* 00570806: mov edx, dword ptr [eax + edx*4] */ r_edx = R32((u32)(r_eax+r_edx*4));
    /* 00570809: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0057080b: mov ecx, edx */ r_ecx = r_edx;
    /* 0057080d: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 00570810: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x570812u); call_ind(t); }
L_00570812:; BB(0x00570812);
    /* 00570812: jmp 0x5707a1 */ goto L_005707a1;
L_00570814:; BB(0x00570814);
    /* 00570814: mov esp, ebp */ r_esp = r_ebp;
    /* 00570816: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00570817: ret 8 */ FN_RET(0x00570780); r_esp += 12; return;
}

void f_00570820(void) /* RoadKillSlotCounter::vfunc27 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00570820);
    /* 00570820: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00570821: mov ebp, esp */ r_ebp = r_esp;
    /* 00570823: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00570826: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00570829: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0057082c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057082d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00570830: call 0x5f5300 */ r_esp -= 4; W32(r_esp, 0x570835u); f_005f5300();
    /* 00570835: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0057083b: jmp 0x570849 */ goto L_00570849;
L_0057083d:; BB(0x0057083d);
    /* 0057083d: mov cx, word ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 00570841: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00570845: mov word ptr [ebp - 4], cx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_ecx);
L_00570849:; BB(0x00570849);
    /* 00570849: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0057084d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00570850: movsx ecx, word ptr [eax + 0x184] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x184u));
    /* 00570857: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00570859: jge 0x57089b */ if ((fS==fO)) goto L_0057089b;
L_0057085b:; BB(0x0057085b);
    /* 0057085b: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0057085f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00570862: mov ecx, dword ptr [eax + 0x18c] */ r_ecx = R32((u32)(r_eax+0x18cu));
    /* 00570868: cmp dword ptr [ecx + edx*4], 0 */ {  u32 a = R32((u32)(r_ecx+r_edx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057086c: je 0x570899 */ if (fZ) goto L_00570899;
L_0057086e:; BB(0x0057086e);
    /* 0057086e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00570871: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00570872: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00570876: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00570879: mov edx, dword ptr [ecx + 0x18c] */ r_edx = R32((u32)(r_ecx+0x18cu));
    /* 0057087f: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 00570882: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00570886: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00570889: mov edx, dword ptr [edx + 0x18c] */ r_edx = R32((u32)(r_edx+0x18cu));
    /* 0057088f: mov ecx, dword ptr [edx + ecx*4] */ r_ecx = R32((u32)(r_edx+r_ecx*4));
    /* 00570892: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00570894: mov edx, dword ptr [eax + 0x6c] */ r_edx = R32((u32)(r_eax+0x6cu));
    /* 00570897: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x570899u); call_ind(t); }
L_00570899:; BB(0x00570899);
    /* 00570899: jmp 0x57083d */ goto L_0057083d;
L_0057089b:; BB(0x0057089b);
    /* 0057089b: mov esp, ebp */ r_esp = r_ebp;
    /* 0057089d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057089e: ret 4 */ FN_RET(0x00570820); r_esp += 8; return;
}

void f_005708b0(void) /* RoadKillSlotCounter::vfunc28 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005708b0);
    /* 005708b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005708b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005708b3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005708b6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005708b9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005708bc: call 0x5eb5a0 */ r_esp -= 4; W32(r_esp, 0x5708c1u); f_005eb5a0();
    /* 005708c1: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005708c7: jmp 0x5708d5 */ goto L_005708d5;
L_005708c9:; BB(0x005708c9);
    /* 005708c9: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 005708cd: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005708d1: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_005708d5:; BB(0x005708d5);
    /* 005708d5: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005708d9: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005708dc: movsx eax, word ptr [edx + 0x184] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x184u));
    /* 005708e3: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005708e5: jge 0x570925 */ if ((fS==fO)) goto L_00570925;
L_005708e7:; BB(0x005708e7);
    /* 005708e7: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005708eb: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005708ee: mov eax, dword ptr [edx + 0x18c] */ r_eax = R32((u32)(r_edx+0x18cu));
    /* 005708f4: cmp dword ptr [eax + ecx*4], 0 */ {  u32 a = R32((u32)(r_eax+r_ecx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005708f8: je 0x570923 */ if (fZ) goto L_00570923;
L_005708fa:; BB(0x005708fa);
    /* 005708fa: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005708fe: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00570901: mov eax, dword ptr [edx + 0x18c] */ r_eax = R32((u32)(r_edx+0x18cu));
    /* 00570907: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 0057090a: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0057090e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00570911: mov eax, dword ptr [eax + 0x18c] */ r_eax = R32((u32)(r_eax+0x18cu));
    /* 00570917: mov edx, dword ptr [eax + edx*4] */ r_edx = R32((u32)(r_eax+r_edx*4));
    /* 0057091a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0057091c: mov ecx, edx */ r_ecx = r_edx;
    /* 0057091e: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 00570921: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x570923u); call_ind(t); }
L_00570923:; BB(0x00570923);
    /* 00570923: jmp 0x5708c9 */ goto L_005708c9;
L_00570925:; BB(0x00570925);
    /* 00570925: mov esp, ebp */ r_esp = r_ebp;
    /* 00570927: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00570928: ret  */ FN_RET(0x005708b0); r_esp += 4; return;
}

void f_00570930(void) /* RoadKillSlotCounter::vfunc29 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00570930);
    /* 00570930: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00570931: mov ebp, esp */ r_ebp = r_esp;
    /* 00570933: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00570936: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00570939: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057093c: call 0x5eb570 */ r_esp -= 4; W32(r_esp, 0x570941u); f_005eb570();
    /* 00570941: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00570947: jmp 0x570955 */ goto L_00570955;
L_00570949:; BB(0x00570949);
    /* 00570949: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0057094d: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00570951: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_00570955:; BB(0x00570955);
    /* 00570955: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00570959: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057095c: movsx eax, word ptr [edx + 0x184] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x184u));
    /* 00570963: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00570965: jge 0x5709a5 */ if ((fS==fO)) goto L_005709a5;
L_00570967:; BB(0x00570967);
    /* 00570967: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0057096b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057096e: mov eax, dword ptr [edx + 0x18c] */ r_eax = R32((u32)(r_edx+0x18cu));
    /* 00570974: cmp dword ptr [eax + ecx*4], 0 */ {  u32 a = R32((u32)(r_eax+r_ecx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00570978: je 0x5709a3 */ if (fZ) goto L_005709a3;
L_0057097a:; BB(0x0057097a);
    /* 0057097a: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0057097e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00570981: mov eax, dword ptr [edx + 0x18c] */ r_eax = R32((u32)(r_edx+0x18cu));
    /* 00570987: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 0057098a: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0057098e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00570991: mov eax, dword ptr [eax + 0x18c] */ r_eax = R32((u32)(r_eax+0x18cu));
    /* 00570997: mov edx, dword ptr [eax + edx*4] */ r_edx = R32((u32)(r_eax+r_edx*4));
    /* 0057099a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0057099c: mov ecx, edx */ r_ecx = r_edx;
    /* 0057099e: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 005709a1: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5709a3u); call_ind(t); }
L_005709a3:; BB(0x005709a3);
    /* 005709a3: jmp 0x570949 */ goto L_00570949;
L_005709a5:; BB(0x005709a5);
    /* 005709a5: mov esp, ebp */ r_esp = r_ebp;
    /* 005709a7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005709a8: ret  */ FN_RET(0x00570930); r_esp += 4; return;
}

