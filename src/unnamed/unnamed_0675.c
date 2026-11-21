#include "protos.h"

void f_00675480(void) /* sub_675480 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00675480);
    /* 00675480: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00675481: mov ebp, esp */ r_ebp = r_esp;
    /* 00675483: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00675486: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00675489: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0067548c: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067548f: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x675494u); f_0060c9a0();
    /* 00675494: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00675496: jg 0x67554c */ if ((!fZ&&fS==fO)) goto L_0067554c;
L_0067549c:; BB(0x0067549c);
    /* 0067549c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0067549f: add ecx, 0x1c */ {  u32 a = r_ecx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006754a2: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x6754a7u); f_0060c9a0();
    /* 006754a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006754a9: jg 0x67554c */ if ((!fZ&&fS==fO)) goto L_0067554c;
L_006754af:; BB(0x006754af);
    /* 006754af: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006754b2: add ecx, 0x2c */ {  u32 a = r_ecx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006754b5: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x6754bau); f_0060c9a0();
    /* 006754ba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006754bc: jg 0x67554c */ if ((!fZ&&fS==fO)) goto L_0067554c;
L_006754c2:; BB(0x006754c2);
    /* 006754c2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006754c5: add ecx, 0x3c */ {  u32 a = r_ecx; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006754c8: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x6754cdu); f_0060c9a0();
    /* 006754cd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006754cf: jg 0x67554c */ if ((!fZ&&fS==fO)) goto L_0067554c;
L_006754d1:; BB(0x006754d1);
    /* 006754d1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006754d4: add ecx, 0x4c */ {  u32 a = r_ecx; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006754d7: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x6754dcu); f_0060c9a0();
    /* 006754dc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006754de: jg 0x67554c */ if ((!fZ&&fS==fO)) goto L_0067554c;
L_006754e0:; BB(0x006754e0);
    /* 006754e0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006754e3: add ecx, 0x5c */ {  u32 a = r_ecx; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006754e6: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x6754ebu); f_0060c9a0();
    /* 006754eb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006754ed: jg 0x67554c */ if ((!fZ&&fS==fO)) goto L_0067554c;
L_006754ef:; BB(0x006754ef);
    /* 006754ef: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006754f2: add ecx, 0x6c */ {  u32 a = r_ecx; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006754f5: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x6754fau); f_0060c9a0();
    /* 006754fa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006754fc: jg 0x67554c */ if ((!fZ&&fS==fO)) goto L_0067554c;
L_006754fe:; BB(0x006754fe);
    /* 006754fe: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00675501: add ecx, 0x7c */ {  u32 a = r_ecx; u32 b = 0x7cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00675504: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x675509u); f_0060c9a0();
    /* 00675509: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0067550b: jg 0x67554c */ if ((!fZ&&fS==fO)) goto L_0067554c;
L_0067550d:; BB(0x0067550d);
    /* 0067550d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00675510: add ecx, 0x8c */ {  u32 a = r_ecx; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00675516: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x67551bu); f_0060c9a0();
    /* 0067551b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0067551d: jg 0x67554c */ if ((!fZ&&fS==fO)) goto L_0067554c;
L_0067551f:; BB(0x0067551f);
    /* 0067551f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00675522: add ecx, 0x9c */ {  u32 a = r_ecx; u32 b = 0x9cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00675528: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x67552du); f_0060c9a0();
    /* 0067552d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0067552f: jg 0x67554c */ if ((!fZ&&fS==fO)) goto L_0067554c;
L_00675531:; BB(0x00675531);
    /* 00675531: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00675534: add ecx, 0xac */ {  u32 a = r_ecx; u32 b = 0xacu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067553a: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x67553fu); f_0060c9a0();
    /* 0067553f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00675541: jg 0x67554c */ if ((!fZ&&fS==fO)) goto L_0067554c;
L_00675543:; BB(0x00675543);
    /* 00675543: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0067554a: jmp 0x675553 */ goto L_00675553;
L_0067554c:; BB(0x0067554c);
    /* 0067554c: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
L_00675553:; BB(0x00675553);
    /* 00675553: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 00675556: mov esp, ebp */ r_esp = r_ebp;
    /* 00675558: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00675559: ret  */ FN_RET(0x00675480); r_esp += 4; return;
}

void f_00675560(void) /* sub_675560 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00675560);
    /* 00675560: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00675561: mov ebp, esp */ r_ebp = r_esp;
    /* 00675563: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00675566: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0067556b: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0067556d: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00675570: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 00675573: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 0067557a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00675581: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00675584: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00675585: lea ecx, [ebp - 0x30] */ r_ecx = (u32)(r_ebp+0xffffffd0u);
    /* 00675588: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00675589: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0067558c: call 0x675100 */ r_esp -= 4; W32(r_esp, 0x675591u); f_00675100();
    /* 00675591: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00675594: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00675596: je 0x675633 */ if (fZ) goto L_00675633;
L_0067559c:; BB(0x0067559c);
    /* 0067559c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0067559f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006755a0: push 0x6b2828 */ { u32 v = 0x6b2828u; r_esp -= 4; W32(r_esp, v); }
    /* 006755a5: lea ecx, [ebp - 0x2c] */ r_ecx = (u32)(r_ebp+0xffffffd4u);
    /* 006755a8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006755a9: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x6755afu); call_ind(t); }
    /* 006755af: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006755b2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006755b4: lea edx, [ebp - 0x2c] */ r_edx = (u32)(r_ebp+0xffffffd4u);
    /* 006755b7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006755b8: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006755bb: call 0x607960 */ r_esp -= 4; W32(r_esp, 0x6755c0u); f_00607960();
    /* 006755c0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_006755c3:; BB(0x006755c3);
    /* 006755c3: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006755c7: je 0x675607 */ if (fZ) goto L_00675607;
L_006755c9:; BB(0x006755c9);
    /* 006755c9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006755cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006755cd: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006755d0: call 0x6764e0 */ r_esp -= 4; W32(r_esp, 0x6755d5u); f_006764e0();
    /* 006755d5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006755d8: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006755db: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 006755de: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006755e1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006755e2: push 0x6b2828 */ { u32 v = 0x6b2828u; r_esp -= 4; W32(r_esp, v); }
    /* 006755e7: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 006755ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006755eb: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x6755f1u); call_ind(t); }
    /* 006755f1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006755f4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006755f6: lea ecx, [ebp - 0x2c] */ r_ecx = (u32)(r_ebp+0xffffffd4u);
    /* 006755f9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006755fa: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006755fd: call 0x607960 */ r_esp -= 4; W32(r_esp, 0x675602u); f_00607960();
    /* 00675602: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00675605: jmp 0x6755c3 */ goto L_006755c3;
L_00675607:; BB(0x00675607);
    /* 00675607: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0067560a: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 0067560d: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00675610: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00675613: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00675617: je 0x67562c */ if (fZ) goto L_0067562c;
L_00675619:; BB(0x00675619);
    /* 00675619: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067561b: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0067561e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00675620: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00675623: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00675625: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x675627u); call_ind(t); }
    /* 00675627: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0067562a: jmp 0x675633 */ goto L_00675633;
L_0067562c:; BB(0x0067562c);
    /* 0067562c: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_00675633:; BB(0x00675633);
    /* 00675633: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00675636: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00675638: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x67563du); f_00686d72();
    /* 0067563d: mov esp, ebp */ r_esp = r_ebp;
    /* 0067563f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00675640: ret 8 */ FN_RET(0x00675560); r_esp += 12; return;
}

void f_00675650(void) /* sub_675650 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00675650);
    /* 00675650: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00675651: mov ebp, esp */ r_ebp = r_esp;
    /* 00675653: sub esp, 0x128 */ {  u32 a = r_esp; u32 b = 0x128u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00675659: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0067565e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00675660: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00675663: mov dword ptr [ebp - 0x124], ecx */ W32((u32)(r_ebp+0xfffffedcu), r_ecx);
    /* 00675669: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00675670: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 00675677: push 0x6e19f8 */ { u32 v = 0x6e19f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067567c: lea eax, [ebp - 0x14] */ r_eax = (u32)(r_ebp+0xffffffecu);
    /* 0067567f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00675680: mov ecx, dword ptr [ebp - 0x124] */ r_ecx = R32((u32)(r_ebp+0xfffffedcu));
    /* 00675686: call 0x675100 */ r_esp -= 4; W32(r_esp, 0x67568bu); f_00675100();
    /* 0067568b: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0067568e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00675690: je 0x6757a6 */ if (fZ) goto L_006757a6;
L_00675696:; BB(0x00675696);
    /* 00675696: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0067569d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006756a0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006756a1: push 0x6b2828 */ { u32 v = 0x6b2828u; r_esp -= 4; W32(r_esp, v); }
    /* 006756a6: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 006756a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006756aa: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x6756b0u); call_ind(t); }
    /* 006756b0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006756b3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006756b5: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 006756b8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006756b9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006756bc: call 0x607960 */ r_esp -= 4; W32(r_esp, 0x6756c1u); f_00607960();
    /* 006756c1: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_006756c4:; BB(0x006756c4);
    /* 006756c4: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006756c8: je 0x675762 */ if (fZ) goto L_00675762;
L_006756ce:; BB(0x006756ce);
    /* 006756ce: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006756d1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006756d2: mov ecx, dword ptr [ebp - 0x124] */ r_ecx = R32((u32)(r_ebp+0xfffffedcu));
    /* 006756d8: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006756db: call 0x6764e0 */ r_esp -= 4; W32(r_esp, 0x6756e0u); f_006764e0();
    /* 006756e0: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 006756e5: lea eax, [ebp - 0x118] */ r_eax = (u32)(r_ebp+0xfffffee8u);
    /* 006756eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006756ec: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 006756f1: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 006756f4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006756f5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006756f8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006756fa: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006756fd: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 00675700: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x675702u); call_ind(t); }
    /* 00675702: lea eax, [ebp - 0x118] */ r_eax = (u32)(r_ebp+0xfffffee8u);
    /* 00675708: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00675709: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0067570c: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0067570f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00675710: mov ecx, dword ptr [ebp - 0x124] */ r_ecx = R32((u32)(r_ebp+0xfffffedcu));
    /* 00675716: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00675719: call 0x6765a0 */ r_esp -= 4; W32(r_esp, 0x67571eu); f_006765a0();
    /* 0067571e: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00675721: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00675722: mov ecx, dword ptr [ebp - 0x124] */ r_ecx = R32((u32)(r_ebp+0xfffffedcu));
    /* 00675728: call 0x6757c0 */ r_esp -= 4; W32(r_esp, 0x67572du); f_006757c0();
    /* 0067572d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00675730: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00675733: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00675736: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00675739: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067573a: push 0x6b2828 */ { u32 v = 0x6b2828u; r_esp -= 4; W32(r_esp, v); }
    /* 0067573f: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 00675742: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00675743: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x675749u); call_ind(t); }
    /* 00675749: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067574c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067574e: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 00675751: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00675752: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00675755: call 0x607960 */ r_esp -= 4; W32(r_esp, 0x67575au); f_00607960();
    /* 0067575a: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0067575d: jmp 0x6756c4 */ goto L_006756c4;
L_00675762:; BB(0x00675762);
    /* 00675762: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00675765: mov dword ptr [ebp - 0x120], eax */ W32((u32)(r_ebp+0xfffffee0u), r_eax);
    /* 0067576b: mov ecx, dword ptr [ebp - 0x120] */ r_ecx = R32((u32)(r_ebp+0xfffffee0u));
    /* 00675771: mov dword ptr [ebp - 0x11c], ecx */ W32((u32)(r_ebp+0xfffffee4u), r_ecx);
    /* 00675777: cmp dword ptr [ebp - 0x11c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffee4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067577e: je 0x67579c */ if (fZ) goto L_0067579c;
L_00675780:; BB(0x00675780);
    /* 00675780: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00675782: mov edx, dword ptr [ebp - 0x11c] */ r_edx = R32((u32)(r_ebp+0xfffffee4u));
    /* 00675788: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0067578a: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 00675790: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00675792: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x675794u); call_ind(t); }
    /* 00675794: mov dword ptr [ebp - 0x128], eax */ W32((u32)(r_ebp+0xfffffed8u), r_eax);
    /* 0067579a: jmp 0x6757a6 */ goto L_006757a6;
L_0067579c:; BB(0x0067579c);
    /* 0067579c: mov dword ptr [ebp - 0x128], 0 */ W32((u32)(r_ebp+0xfffffed8u), 0x0u);
L_006757a6:; BB(0x006757a6);
    /* 006757a6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006757a9: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006757ab: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x6757b0u); f_00686d72();
    /* 006757b0: mov esp, ebp */ r_esp = r_ebp;
    /* 006757b2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006757b3: ret  */ FN_RET(0x00675650); r_esp += 4; return;
}

void f_006757c0(void) /* sub_6757C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006757c0);
    /* 006757c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006757c1: mov ebp, esp */ r_ebp = r_esp;
    /* 006757c3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006757c6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 006757c9: push 0x6e1a00 */ { u32 v = 0x6e1a00u; r_esp -= 4; W32(r_esp, v); }
    /* 006757ce: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 006757d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006757d2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006757d5: call 0x675100 */ r_esp -= 4; W32(r_esp, 0x6757dau); f_00675100();
    /* 006757da: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 006757dd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006757df: je 0x675821 */ if (fZ) goto L_00675821;
L_006757e1:; BB(0x006757e1);
    /* 006757e1: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006757e4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006757e5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006757e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006757e9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006757ec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006757ed: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006757f0: call 0x675830 */ r_esp -= 4; W32(r_esp, 0x6757f5u); f_00675830();
    /* 006757f5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006757f8: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 006757fb: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 006757fe: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00675801: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00675805: je 0x67581a */ if (fZ) goto L_0067581a;
L_00675807:; BB(0x00675807);
    /* 00675807: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00675809: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0067580c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067580e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00675811: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00675813: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x675815u); call_ind(t); }
    /* 00675815: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00675818: jmp 0x675821 */ goto L_00675821;
L_0067581a:; BB(0x0067581a);
    /* 0067581a: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_00675821:; BB(0x00675821);
    /* 00675821: mov esp, ebp */ r_esp = r_ebp;
    /* 00675823: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00675824: ret 8 */ FN_RET(0x006757c0); r_esp += 12; return;
}

void f_00675830(void) /* sub_675830 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00675830);
    /* 00675830: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00675831: mov ebp, esp */ r_ebp = r_esp;
    /* 00675833: sub esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00675836: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0067583b: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0067583d: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00675840: mov dword ptr [ebp - 0x64], ecx */ W32((u32)(r_ebp+0xffffff9cu), r_ecx);
    /* 00675843: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0067584a: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0067584d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067584e: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x675853u); f_00686ecc();
    /* 00675853: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00675856: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00675859: mov byte ptr [ebp - 0x59], 0 */ W8((u32)(r_ebp+0xffffffa7u), 0x0u);
    /* 0067585d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00675864: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0067586b: jmp 0x675876 */ goto L_00675876;
L_0067586d:; BB(0x0067586d);
    /* 0067586d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00675870: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00675873: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_00675876:; BB(0x00675876);
    /* 00675876: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00675879: cmp edx, dword ptr [ebp - 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067587c: jge 0x675899 */ if ((fS==fO)) goto L_00675899;
L_0067587e:; BB(0x0067587e);
    /* 0067587e: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00675881: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00675884: movsx ecx, byte ptr [eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 00675887: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00675888: call dword ptr [0x6b2170] */ { u32 t = R32((u32)(0x6b2170u)); r_esp -= 4; W32(r_esp, 0x67588eu); call_ind(t); }
    /* 0067588e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00675891: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00675893: jne 0x675897 */ if (!fZ) goto L_00675897;
L_00675895:; BB(0x00675895);
    /* 00675895: jmp 0x675899 */ goto L_00675899;
L_00675897:; BB(0x00675897);
    /* 00675897: jmp 0x67586d */ goto L_0067586d;
L_00675899:; BB(0x00675899);
    /* 00675899: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 0067589b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067589d: lea edx, [ebp - 0x58] */ r_edx = (u32)(r_ebp+0xffffffa8u);
    /* 006758a0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006758a1: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x6758a6u); f_00686fa2();
    /* 006758a6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006758a9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006758ac: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006758af: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 006758b2: jmp 0x6758bd */ goto L_006758bd;
L_006758b4:; BB(0x006758b4);
    /* 006758b4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006758b7: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006758ba: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_006758bd:; BB(0x006758bd);
    /* 006758bd: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006758c0: cmp edx, dword ptr [ebp - 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006758c3: jge 0x6759f0 */ if ((fS==fO)) goto L_006759f0;
L_006758c9:; BB(0x006758c9);
    /* 006758c9: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 006758cc: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006758cf: movsx ecx, byte ptr [eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 006758d2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006758d3: call dword ptr [0x6b2164] */ { u32 t = R32((u32)(0x6b2164u)); r_esp -= 4; W32(r_esp, 0x6758d9u); call_ind(t); }
    /* 006758d9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006758dc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006758de: je 0x6759c1 */ if (fZ) goto L_006759c1;
L_006758e4:; BB(0x006758e4);
    /* 006758e4: movzx edx, byte ptr [ebp - 0x59] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffa7u));
    /* 006758e8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006758ea: je 0x67595c */ if (fZ) goto L_0067595c;
L_006758ec:; BB(0x006758ec);
    /* 006758ec: lea eax, [ebp - 0x1c] */ r_eax = (u32)(r_ebp+0xffffffe4u);
    /* 006758ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006758f0: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 006758f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006758f4: push 0x6c2394 */ { u32 v = 0x6c2394u; r_esp -= 4; W32(r_esp, v); }
    /* 006758f9: lea edx, [ebp - 0x58] */ r_edx = (u32)(r_ebp+0xffffffa8u);
    /* 006758fc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006758fd: call dword ptr [0x6b22f8] */ { u32 t = R32((u32)(0x6b22f8u)); r_esp -= 4; W32(r_esp, 0x675903u); call_ind(t); }
    /* 00675903: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00675906: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00675909: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 0067590c: jmp 0x675917 */ goto L_00675917;
L_0067590e:; BB(0x0067590e);
    /* 0067590e: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00675911: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00675914: mov dword ptr [ebp - 0x60], ecx */ W32((u32)(r_ebp+0xffffffa0u), r_ecx);
L_00675917:; BB(0x00675917);
    /* 00675917: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0067591a: cmp edx, dword ptr [ebp - 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067591d: jg 0x67595a */ if ((!fZ&&fS==fO)) goto L_0067595a;
L_0067591f:; BB(0x0067591f);
    /* 0067591f: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 00675922: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00675923: push 0x6b2828 */ { u32 v = 0x6b2828u; r_esp -= 4; W32(r_esp, v); }
    /* 00675928: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 0067592b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067592c: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x675932u); call_ind(t); }
    /* 00675932: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00675935: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00675937: lea edx, [ebp - 0x14] */ r_edx = (u32)(r_ebp+0xffffffecu);
    /* 0067593a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067593b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0067593e: call 0x607960 */ r_esp -= 4; W32(r_esp, 0x675943u); f_00607960();
    /* 00675943: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00675946: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067594a: je 0x675958 */ if (fZ) goto L_00675958;
L_0067594c:; BB(0x0067594c);
    /* 0067594c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067594f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00675950: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00675953: call 0x6764e0 */ r_esp -= 4; W32(r_esp, 0x675958u); f_006764e0();
L_00675958:; BB(0x00675958);
    /* 00675958: jmp 0x67590e */ goto L_0067590e;
L_0067595a:; BB(0x0067595a);
    /* 0067595a: jmp 0x6759ab */ goto L_006759ab;
L_0067595c:; BB(0x0067595c);
    /* 0067595c: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 0067595f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00675960: push 0x6b2828 */ { u32 v = 0x6b2828u; r_esp -= 4; W32(r_esp, v); }
    /* 00675965: lea edx, [ebp - 0x58] */ r_edx = (u32)(r_ebp+0xffffffa8u);
    /* 00675968: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00675969: call dword ptr [0x6b22f8] */ { u32 t = R32((u32)(0x6b22f8u)); r_esp -= 4; W32(r_esp, 0x67596fu); call_ind(t); }
    /* 0067596f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00675972: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00675975: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00675976: push 0x6b2828 */ { u32 v = 0x6b2828u; r_esp -= 4; W32(r_esp, v); }
    /* 0067597b: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 0067597e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067597f: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x675985u); call_ind(t); }
    /* 00675985: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00675988: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067598a: lea edx, [ebp - 0x14] */ r_edx = (u32)(r_ebp+0xffffffecu);
    /* 0067598d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067598e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00675991: call 0x607960 */ r_esp -= 4; W32(r_esp, 0x675996u); f_00607960();
    /* 00675996: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00675999: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067599d: je 0x6759ab */ if (fZ) goto L_006759ab;
L_0067599f:; BB(0x0067599f);
    /* 0067599f: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006759a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006759a3: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 006759a6: call 0x6764e0 */ r_esp -= 4; W32(r_esp, 0x6759abu); f_006764e0();
L_006759ab:; BB(0x006759ab);
    /* 006759ab: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 006759ad: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006759af: lea ecx, [ebp - 0x58] */ r_ecx = (u32)(r_ebp+0xffffffa8u);
    /* 006759b2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006759b3: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x6759b8u); f_00686fa2();
    /* 006759b8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006759bb: mov byte ptr [ebp - 0x59], 0 */ W8((u32)(r_ebp+0xffffffa7u), 0x0u);
    /* 006759bf: jmp 0x6759eb */ goto L_006759eb;
L_006759c1:; BB(0x006759c1);
    /* 006759c1: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 006759c4: add edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006759c7: movsx eax, byte ptr [edx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx));
    /* 006759ca: cmp eax, 0x2d */ {  u32 a = r_eax; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006759cd: jne 0x6759d3 */ if (!fZ) goto L_006759d3;
L_006759cf:; BB(0x006759cf);
    /* 006759cf: mov byte ptr [ebp - 0x59], 1 */ W8((u32)(r_ebp+0xffffffa7u), 0x1u);
L_006759d3:; BB(0x006759d3);
    /* 006759d3: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 006759d6: add ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006759d9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006759dc: mov al, byte ptr [ecx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 006759de: mov byte ptr [ebp + edx - 0x58], al */ W8((u32)(r_ebp+r_edx+0xffffffa8u), (u8)r_eax);
    /* 006759e2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006759e5: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006759e8: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_006759eb:; BB(0x006759eb);
    /* 006759eb: jmp 0x6758b4 */ goto L_006758b4;
L_006759f0:; BB(0x006759f0);
    /* 006759f0: movzx edx, byte ptr [ebp - 0x59] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffa7u));
    /* 006759f4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006759f6: je 0x675a68 */ if (fZ) goto L_00675a68;
L_006759f8:; BB(0x006759f8);
    /* 006759f8: lea eax, [ebp - 0x1c] */ r_eax = (u32)(r_ebp+0xffffffe4u);
    /* 006759fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006759fc: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 006759ff: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00675a00: push 0x6c2394 */ { u32 v = 0x6c2394u; r_esp -= 4; W32(r_esp, v); }
    /* 00675a05: lea edx, [ebp - 0x58] */ r_edx = (u32)(r_ebp+0xffffffa8u);
    /* 00675a08: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00675a09: call dword ptr [0x6b22f8] */ { u32 t = R32((u32)(0x6b22f8u)); r_esp -= 4; W32(r_esp, 0x675a0fu); call_ind(t); }
    /* 00675a0f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00675a12: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00675a15: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 00675a18: jmp 0x675a23 */ goto L_00675a23;
L_00675a1a:; BB(0x00675a1a);
    /* 00675a1a: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00675a1d: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00675a20: mov dword ptr [ebp - 0x60], ecx */ W32((u32)(r_ebp+0xffffffa0u), r_ecx);
L_00675a23:; BB(0x00675a23);
    /* 00675a23: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00675a26: cmp edx, dword ptr [ebp - 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00675a29: jg 0x675a66 */ if ((!fZ&&fS==fO)) goto L_00675a66;
L_00675a2b:; BB(0x00675a2b);
    /* 00675a2b: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 00675a2e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00675a2f: push 0x6b2828 */ { u32 v = 0x6b2828u; r_esp -= 4; W32(r_esp, v); }
    /* 00675a34: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 00675a37: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00675a38: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x675a3eu); call_ind(t); }
    /* 00675a3e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00675a41: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00675a43: lea edx, [ebp - 0x14] */ r_edx = (u32)(r_ebp+0xffffffecu);
    /* 00675a46: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00675a47: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00675a4a: call 0x607960 */ r_esp -= 4; W32(r_esp, 0x675a4fu); f_00607960();
    /* 00675a4f: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00675a52: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00675a56: je 0x675a64 */ if (fZ) goto L_00675a64;
L_00675a58:; BB(0x00675a58);
    /* 00675a58: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00675a5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00675a5c: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00675a5f: call 0x6764e0 */ r_esp -= 4; W32(r_esp, 0x675a64u); f_006764e0();
L_00675a64:; BB(0x00675a64);
    /* 00675a64: jmp 0x675a1a */ goto L_00675a1a;
L_00675a66:; BB(0x00675a66);
    /* 00675a66: jmp 0x675ab7 */ goto L_00675ab7;
L_00675a68:; BB(0x00675a68);
    /* 00675a68: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 00675a6b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00675a6c: push 0x6b2828 */ { u32 v = 0x6b2828u; r_esp -= 4; W32(r_esp, v); }
    /* 00675a71: lea edx, [ebp - 0x58] */ r_edx = (u32)(r_ebp+0xffffffa8u);
    /* 00675a74: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00675a75: call dword ptr [0x6b22f8] */ { u32 t = R32((u32)(0x6b22f8u)); r_esp -= 4; W32(r_esp, 0x675a7bu); call_ind(t); }
    /* 00675a7b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00675a7e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00675a81: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00675a82: push 0x6b2828 */ { u32 v = 0x6b2828u; r_esp -= 4; W32(r_esp, v); }
    /* 00675a87: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 00675a8a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00675a8b: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x675a91u); call_ind(t); }
    /* 00675a91: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00675a94: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00675a96: lea edx, [ebp - 0x14] */ r_edx = (u32)(r_ebp+0xffffffecu);
    /* 00675a99: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00675a9a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00675a9d: call 0x607960 */ r_esp -= 4; W32(r_esp, 0x675aa2u); f_00607960();
    /* 00675aa2: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00675aa5: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00675aa9: je 0x675ab7 */ if (fZ) goto L_00675ab7;
L_00675aab:; BB(0x00675aab);
    /* 00675aab: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00675aae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00675aaf: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00675ab2: call 0x6764e0 */ r_esp -= 4; W32(r_esp, 0x675ab7u); f_006764e0();
L_00675ab7:; BB(0x00675ab7);
    /* 00675ab7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00675aba: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00675abc: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x675ac1u); f_00686d72();
    /* 00675ac1: mov esp, ebp */ r_esp = r_ebp;
    /* 00675ac3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00675ac4: ret 0xc */ FN_RET(0x00675830); r_esp += 16; return;
}

void f_00675ad0(void) /* sub_675AD0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00675ad0);
    /* 00675ad0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00675ad1: mov ebp, esp */ r_ebp = r_esp;
    /* 00675ad3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00675ad6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00675ad7: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00675ada: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00675ae1: jmp 0x675aec */ goto L_00675aec;
L_00675ae3:; BB(0x00675ae3);
    /* 00675ae3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00675ae6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00675ae9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00675aec:; BB(0x00675aec);
    /* 00675aec: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00675aef: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00675af2: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x675af7u); f_0060c9a0();
    /* 00675af7: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00675afa: jge 0x675b2b */ if ((fS==fO)) goto L_00675b2b;
L_00675afc:; BB(0x00675afc);
    /* 00675afc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00675aff: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00675b00: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00675b03: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00675b06: call 0x676570 */ r_esp -= 4; W32(r_esp, 0x675b0bu); f_00676570();
    /* 00675b0b: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00675b0c: mov ecx, 0x186a0 */ r_ecx = 0x186a0u;
    /* 00675b11: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00675b11, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00675b11, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00675b13: mov ecx, edx */ r_ecx = r_edx;
    /* 00675b15: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00675b18: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00675b19: mov esi, 0x186a0 */ r_esi = 0x186a0u;
    /* 00675b1e: idiv esi */ { i32 d = (i32)r_esi; if (!d) UNSUP(0x00675b1e, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00675b1e, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00675b20: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00675b22: jne 0x675b29 */ if (!fZ) goto L_00675b29;
L_00675b24:; BB(0x00675b24);
    /* 00675b24: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00675b27: jmp 0x675b2e */ goto L_00675b2e;
L_00675b29:; BB(0x00675b29);
    /* 00675b29: jmp 0x675ae3 */ goto L_00675ae3;
L_00675b2b:; BB(0x00675b2b);
    /* 00675b2b: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00675b2e:; BB(0x00675b2e);
    /* 00675b2e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00675b2f: mov esp, ebp */ r_esp = r_ebp;
    /* 00675b31: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00675b32: ret 4 */ FN_RET(0x00675ad0); r_esp += 8; return;
}

void f_00675b40(void) /* sub_675B40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00675b40);
    /* 00675b40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00675b41: mov ebp, esp */ r_ebp = r_esp;
    /* 00675b43: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00675b46: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00675b49: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00675b4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00675b4d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00675b50: call 0x675ad0 */ r_esp -= 4; W32(r_esp, 0x675b55u); f_00675ad0();
    /* 00675b55: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00675b58: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00675b5b: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00675b5e: cmp dword ptr [ebp - 0xc], 0xb */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00675b62: ja 0x675c64 */ if ((!fC&&!fZ)) goto L_00675c64;
L_00675b68:; BB(0x00675b68);
    /* 00675b68: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00675b6b: jmp dword ptr [edx*4 + 0x675c70] */ { u32 t = R32((u32)(r_edx*4+0x675c70u)); switch (t) { case 0x675b72u: goto L_00675b72; case 0x675b86u: goto L_00675b86; case 0x675ba8u: goto L_00675ba8; case 0x675bbcu: goto L_00675bbc; case 0x675bd0u: goto L_00675bd0; case 0x675be4u: goto L_00675be4; case 0x675bf5u: goto L_00675bf5; case 0x675c06u: goto L_00675c06; case 0x675c17u: goto L_00675c17; case 0x675c28u: goto L_00675c28; case 0x675c3cu: goto L_00675c3c; case 0x675c50u: goto L_00675c50; default: UNSUP(0x00675b6b, "jump table entry is not a known target"); } }
L_00675b72:; BB(0x00675b72);
    /* 00675b72: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00675b75: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00675b76: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00675b79: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00675b7c: call 0x676570 */ r_esp -= 4; W32(r_esp, 0x675b81u); f_00676570();
    /* 00675b81: jmp 0x675c67 */ goto L_00675c67;
L_00675b86:; BB(0x00675b86);
    /* 00675b86: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00675b89: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00675b8a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00675b8d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00675b8e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00675b91: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00675b94: call 0x6765a0 */ r_esp -= 4; W32(r_esp, 0x675b99u); f_006765a0();
    /* 00675b99: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00675b9c: mov ecx, eax */ r_ecx = r_eax;
    /* 00675b9e: call 0x676570 */ r_esp -= 4; W32(r_esp, 0x675ba3u); f_00676570();
    /* 00675ba3: jmp 0x675c67 */ goto L_00675c67;
L_00675ba8:; BB(0x00675ba8);
    /* 00675ba8: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00675bab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00675bac: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00675baf: add ecx, 0x1c */ {  u32 a = r_ecx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00675bb2: call 0x676570 */ r_esp -= 4; W32(r_esp, 0x675bb7u); f_00676570();
    /* 00675bb7: jmp 0x675c67 */ goto L_00675c67;
L_00675bbc:; BB(0x00675bbc);
    /* 00675bbc: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00675bbf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00675bc0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00675bc3: add ecx, 0x2c */ {  u32 a = r_ecx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00675bc6: call 0x676570 */ r_esp -= 4; W32(r_esp, 0x675bcbu); f_00676570();
    /* 00675bcb: jmp 0x675c67 */ goto L_00675c67;
L_00675bd0:; BB(0x00675bd0);
    /* 00675bd0: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00675bd3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00675bd4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00675bd7: add ecx, 0x3c */ {  u32 a = r_ecx; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00675bda: call 0x676570 */ r_esp -= 4; W32(r_esp, 0x675bdfu); f_00676570();
    /* 00675bdf: jmp 0x675c67 */ goto L_00675c67;
L_00675be4:; BB(0x00675be4);
    /* 00675be4: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00675be7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00675be8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00675beb: add ecx, 0x4c */ {  u32 a = r_ecx; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00675bee: call 0x676570 */ r_esp -= 4; W32(r_esp, 0x675bf3u); f_00676570();
    /* 00675bf3: jmp 0x675c67 */ goto L_00675c67;
L_00675bf5:; BB(0x00675bf5);
    /* 00675bf5: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00675bf8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00675bf9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00675bfc: add ecx, 0x5c */ {  u32 a = r_ecx; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00675bff: call 0x676570 */ r_esp -= 4; W32(r_esp, 0x675c04u); f_00676570();
    /* 00675c04: jmp 0x675c67 */ goto L_00675c67;
L_00675c06:; BB(0x00675c06);
    /* 00675c06: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00675c09: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00675c0a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00675c0d: add ecx, 0x6c */ {  u32 a = r_ecx; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00675c10: call 0x676570 */ r_esp -= 4; W32(r_esp, 0x675c15u); f_00676570();
    /* 00675c15: jmp 0x675c67 */ goto L_00675c67;
L_00675c17:; BB(0x00675c17);
    /* 00675c17: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00675c1a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00675c1b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00675c1e: add ecx, 0x7c */ {  u32 a = r_ecx; u32 b = 0x7cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00675c21: call 0x676570 */ r_esp -= 4; W32(r_esp, 0x675c26u); f_00676570();
    /* 00675c26: jmp 0x675c67 */ goto L_00675c67;
L_00675c28:; BB(0x00675c28);
    /* 00675c28: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00675c2b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00675c2c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00675c2f: add ecx, 0x8c */ {  u32 a = r_ecx; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00675c35: call 0x676570 */ r_esp -= 4; W32(r_esp, 0x675c3au); f_00676570();
    /* 00675c3a: jmp 0x675c67 */ goto L_00675c67;
L_00675c3c:; BB(0x00675c3c);
    /* 00675c3c: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00675c3f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00675c40: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00675c43: add ecx, 0x9c */ {  u32 a = r_ecx; u32 b = 0x9cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00675c49: call 0x676570 */ r_esp -= 4; W32(r_esp, 0x675c4eu); f_00676570();
    /* 00675c4e: jmp 0x675c67 */ goto L_00675c67;
L_00675c50:; BB(0x00675c50);
    /* 00675c50: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00675c53: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00675c54: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00675c57: add ecx, 0xac */ {  u32 a = r_ecx; u32 b = 0xacu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00675c5d: call 0x676570 */ r_esp -= 4; W32(r_esp, 0x675c62u); f_00676570();
    /* 00675c62: jmp 0x675c67 */ goto L_00675c67;
L_00675c64:; BB(0x00675c64);
    /* 00675c64: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00675c67:; BB(0x00675c67);
    /* 00675c67: mov esp, ebp */ r_esp = r_ebp;
    /* 00675c69: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00675c6a: ret 0xc */ FN_RET(0x00675b40); r_esp += 16; return;
}

void f_00675ca0(void) /* sub_675CA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00675ca0);
    /* 00675ca0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00675ca1: mov ebp, esp */ r_ebp = r_esp;
    /* 00675ca3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00675ca6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00675ca9: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00675cac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00675cad: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00675cb0: call 0x675ad0 */ r_esp -= 4; W32(r_esp, 0x675cb5u); f_00675ad0();
    /* 00675cb5: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00675cb8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00675cbb: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00675cbe: cmp dword ptr [ebp - 0xc], 0xb */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00675cc2: ja 0x675e03 */ if ((!fC&&!fZ)) goto L_00675e03;
L_00675cc8:; BB(0x00675cc8);
    /* 00675cc8: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00675ccb: jmp dword ptr [edx*4 + 0x675e0c] */ { u32 t = R32((u32)(r_edx*4+0x675e0cu)); switch (t) { case 0x675cd2u: goto L_00675cd2; case 0x675cebu: goto L_00675ceb; case 0x675d12u: goto L_00675d12; case 0x675d2bu: goto L_00675d2b; case 0x675d44u: goto L_00675d44; case 0x675d5du: goto L_00675d5d; case 0x675d76u: goto L_00675d76; case 0x675d8cu: goto L_00675d8c; case 0x675da2u: goto L_00675da2; case 0x675db8u: goto L_00675db8; case 0x675dd1u: goto L_00675dd1; case 0x675deau: goto L_00675dea; default: UNSUP(0x00675ccb, "jump table entry is not a known target"); } }
L_00675cd2:; BB(0x00675cd2);
    /* 00675cd2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00675cd5: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00675cd8: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x675cddu); f_0060c9a0();
    /* 00675cdd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00675cde: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x675ce3u); f_0062fbf0();
    /* 00675ce3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00675ce6: jmp 0x675e06 */ goto L_00675e06;
L_00675ceb:; BB(0x00675ceb);
    /* 00675ceb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00675cee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00675cef: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00675cf2: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00675cf5: call 0x6765a0 */ r_esp -= 4; W32(r_esp, 0x675cfau); f_006765a0();
    /* 00675cfa: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00675cfd: mov ecx, eax */ r_ecx = r_eax;
    /* 00675cff: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x675d04u); f_0060c9a0();
    /* 00675d04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00675d05: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x675d0au); f_0062fbf0();
    /* 00675d0a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00675d0d: jmp 0x675e06 */ goto L_00675e06;
L_00675d12:; BB(0x00675d12);
    /* 00675d12: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00675d15: add ecx, 0x1c */ {  u32 a = r_ecx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00675d18: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x675d1du); f_0060c9a0();
    /* 00675d1d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00675d1e: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x675d23u); f_0062fbf0();
    /* 00675d23: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00675d26: jmp 0x675e06 */ goto L_00675e06;
L_00675d2b:; BB(0x00675d2b);
    /* 00675d2b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00675d2e: add ecx, 0x2c */ {  u32 a = r_ecx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00675d31: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x675d36u); f_0060c9a0();
    /* 00675d36: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00675d37: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x675d3cu); f_0062fbf0();
    /* 00675d3c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00675d3f: jmp 0x675e06 */ goto L_00675e06;
L_00675d44:; BB(0x00675d44);
    /* 00675d44: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00675d47: add ecx, 0x3c */ {  u32 a = r_ecx; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00675d4a: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x675d4fu); f_0060c9a0();
    /* 00675d4f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00675d50: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x675d55u); f_0062fbf0();
    /* 00675d55: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00675d58: jmp 0x675e06 */ goto L_00675e06;
L_00675d5d:; BB(0x00675d5d);
    /* 00675d5d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00675d60: add ecx, 0x4c */ {  u32 a = r_ecx; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00675d63: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x675d68u); f_0060c9a0();
    /* 00675d68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00675d69: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x675d6eu); f_0062fbf0();
    /* 00675d6e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00675d71: jmp 0x675e06 */ goto L_00675e06;
L_00675d76:; BB(0x00675d76);
    /* 00675d76: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00675d79: add ecx, 0x5c */ {  u32 a = r_ecx; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00675d7c: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x675d81u); f_0060c9a0();
    /* 00675d81: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00675d82: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x675d87u); f_0062fbf0();
    /* 00675d87: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00675d8a: jmp 0x675e06 */ goto L_00675e06;
L_00675d8c:; BB(0x00675d8c);
    /* 00675d8c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00675d8f: add ecx, 0x6c */ {  u32 a = r_ecx; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00675d92: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x675d97u); f_0060c9a0();
    /* 00675d97: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00675d98: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x675d9du); f_0062fbf0();
    /* 00675d9d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00675da0: jmp 0x675e06 */ goto L_00675e06;
L_00675da2:; BB(0x00675da2);
    /* 00675da2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00675da5: add ecx, 0x7c */ {  u32 a = r_ecx; u32 b = 0x7cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00675da8: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x675dadu); f_0060c9a0();
    /* 00675dad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00675dae: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x675db3u); f_0062fbf0();
    /* 00675db3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00675db6: jmp 0x675e06 */ goto L_00675e06;
L_00675db8:; BB(0x00675db8);
    /* 00675db8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00675dbb: add ecx, 0x8c */ {  u32 a = r_ecx; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00675dc1: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x675dc6u); f_0060c9a0();
    /* 00675dc6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00675dc7: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x675dccu); f_0062fbf0();
    /* 00675dcc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00675dcf: jmp 0x675e06 */ goto L_00675e06;
L_00675dd1:; BB(0x00675dd1);
    /* 00675dd1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00675dd4: add ecx, 0x9c */ {  u32 a = r_ecx; u32 b = 0x9cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00675dda: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x675ddfu); f_0060c9a0();
    /* 00675ddf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00675de0: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x675de5u); f_0062fbf0();
    /* 00675de5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00675de8: jmp 0x675e06 */ goto L_00675e06;
L_00675dea:; BB(0x00675dea);
    /* 00675dea: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00675ded: add ecx, 0xac */ {  u32 a = r_ecx; u32 b = 0xacu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00675df3: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x675df8u); f_0060c9a0();
    /* 00675df8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00675df9: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x675dfeu); f_0062fbf0();
    /* 00675dfe: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00675e01: jmp 0x675e06 */ goto L_00675e06;
L_00675e03:; BB(0x00675e03);
    /* 00675e03: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00675e06:; BB(0x00675e06);
    /* 00675e06: mov esp, ebp */ r_esp = r_ebp;
    /* 00675e08: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00675e09: ret 8 */ FN_RET(0x00675ca0); r_esp += 12; return;
}

void f_00675e40(void) /* sub_675E40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00675e40);
    /* 00675e40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00675e41: mov ebp, esp */ r_ebp = r_esp;
    /* 00675e43: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00675e46: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00675e49: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00675e4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00675e4d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00675e50: call 0x675ad0 */ r_esp -= 4; W32(r_esp, 0x675e55u); f_00675ad0();
    /* 00675e55: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00675e58: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00675e5b: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00675e5e: cmp dword ptr [ebp - 0xc], 0xb */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00675e62: ja 0x675f2e */ if ((!fC&&!fZ)) goto L_00675f2e;
L_00675e68:; BB(0x00675e68);
    /* 00675e68: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00675e6b: jmp dword ptr [edx*4 + 0x675f38] */ { u32 t = R32((u32)(r_edx*4+0x675f38u)); switch (t) { case 0x675e72u: goto L_00675e72; case 0x675e82u: goto L_00675e82; case 0x675ea0u: goto L_00675ea0; case 0x675eb0u: goto L_00675eb0; case 0x675ebdu: goto L_00675ebd; case 0x675ecau: goto L_00675eca; case 0x675ed7u: goto L_00675ed7; case 0x675ee4u: goto L_00675ee4; case 0x675ef1u: goto L_00675ef1; case 0x675efeu: goto L_00675efe; case 0x675f0eu: goto L_00675f0e; case 0x675f1eu: goto L_00675f1e; default: UNSUP(0x00675e6b, "jump table entry is not a known target"); } }
L_00675e72:; BB(0x00675e72);
    /* 00675e72: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00675e75: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00675e78: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x675e7du); f_0060c9a0();
    /* 00675e7d: jmp 0x675f30 */ goto L_00675f30;
L_00675e82:; BB(0x00675e82);
    /* 00675e82: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00675e85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00675e86: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00675e89: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00675e8c: call 0x6765a0 */ r_esp -= 4; W32(r_esp, 0x675e91u); f_006765a0();
    /* 00675e91: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00675e94: mov ecx, eax */ r_ecx = r_eax;
    /* 00675e96: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x675e9bu); f_0060c9a0();
    /* 00675e9b: jmp 0x675f30 */ goto L_00675f30;
L_00675ea0:; BB(0x00675ea0);
    /* 00675ea0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00675ea3: add ecx, 0x1c */ {  u32 a = r_ecx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00675ea6: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x675eabu); f_0060c9a0();
    /* 00675eab: jmp 0x675f30 */ goto L_00675f30;
L_00675eb0:; BB(0x00675eb0);
    /* 00675eb0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00675eb3: add ecx, 0x2c */ {  u32 a = r_ecx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00675eb6: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x675ebbu); f_0060c9a0();
    /* 00675ebb: jmp 0x675f30 */ goto L_00675f30;
L_00675ebd:; BB(0x00675ebd);
    /* 00675ebd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00675ec0: add ecx, 0x3c */ {  u32 a = r_ecx; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00675ec3: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x675ec8u); f_0060c9a0();
    /* 00675ec8: jmp 0x675f30 */ goto L_00675f30;
L_00675eca:; BB(0x00675eca);
    /* 00675eca: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00675ecd: add ecx, 0x4c */ {  u32 a = r_ecx; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00675ed0: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x675ed5u); f_0060c9a0();
    /* 00675ed5: jmp 0x675f30 */ goto L_00675f30;
L_00675ed7:; BB(0x00675ed7);
    /* 00675ed7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00675eda: add ecx, 0x5c */ {  u32 a = r_ecx; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00675edd: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x675ee2u); f_0060c9a0();
    /* 00675ee2: jmp 0x675f30 */ goto L_00675f30;
L_00675ee4:; BB(0x00675ee4);
    /* 00675ee4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00675ee7: add ecx, 0x6c */ {  u32 a = r_ecx; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00675eea: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x675eefu); f_0060c9a0();
    /* 00675eef: jmp 0x675f30 */ goto L_00675f30;
L_00675ef1:; BB(0x00675ef1);
    /* 00675ef1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00675ef4: add ecx, 0x7c */ {  u32 a = r_ecx; u32 b = 0x7cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00675ef7: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x675efcu); f_0060c9a0();
    /* 00675efc: jmp 0x675f30 */ goto L_00675f30;
L_00675efe:; BB(0x00675efe);
    /* 00675efe: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00675f01: add ecx, 0x8c */ {  u32 a = r_ecx; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00675f07: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x675f0cu); f_0060c9a0();
    /* 00675f0c: jmp 0x675f30 */ goto L_00675f30;
L_00675f0e:; BB(0x00675f0e);
    /* 00675f0e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00675f11: add ecx, 0x9c */ {  u32 a = r_ecx; u32 b = 0x9cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00675f17: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x675f1cu); f_0060c9a0();
    /* 00675f1c: jmp 0x675f30 */ goto L_00675f30;
L_00675f1e:; BB(0x00675f1e);
    /* 00675f1e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00675f21: add ecx, 0xac */ {  u32 a = r_ecx; u32 b = 0xacu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00675f27: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x675f2cu); f_0060c9a0();
    /* 00675f2c: jmp 0x675f30 */ goto L_00675f30;
L_00675f2e:; BB(0x00675f2e);
    /* 00675f2e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00675f30:; BB(0x00675f30);
    /* 00675f30: mov esp, ebp */ r_esp = r_ebp;
    /* 00675f32: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00675f33: ret 8 */ FN_RET(0x00675e40); r_esp += 12; return;
}

void f_00675f70(void) /* sub_675F70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00675f70);
    /* 00675f70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00675f71: mov ebp, esp */ r_ebp = r_esp;
    /* 00675f73: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00675f76: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00675f79: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00675f7c: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00675f7f: cmp dword ptr [ebp - 0x10], 0xb */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00675f83: ja 0x6762fe */ if ((!fC&&!fZ)) goto L_006762fe;
L_00675f89:; BB(0x00675f89);
    /* 00675f89: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00675f8c: jmp dword ptr [ecx*4 + 0x676308] */ { u32 t = R32((u32)(r_ecx*4+0x676308u)); switch (t) { case 0x675f93u: goto L_00675f93; case 0x675fd8u: goto L_00675fd8; case 0x676048u: goto L_00676048; case 0x67608du: goto L_0067608d; case 0x6760d2u: goto L_006760d2; case 0x676117u: goto L_00676117; case 0x67615cu: goto L_0067615c; case 0x6761a1u: goto L_006761a1; case 0x6761e6u: goto L_006761e6; case 0x67622bu: goto L_0067622b; case 0x676276u: goto L_00676276; case 0x6762bbu: goto L_006762bb; default: UNSUP(0x00675f8c, "jump table entry is not a known target"); } }
L_00675f93:; BB(0x00675f93);
    /* 00675f93: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00675f9a: jmp 0x675fa5 */ goto L_00675fa5;
L_00675f9c:; BB(0x00675f9c);
    /* 00675f9c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00675f9f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00675fa2: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00675fa5:; BB(0x00675fa5);
    /* 00675fa5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00675fa8: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00675fab: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x675fb0u); f_0060c9a0();
    /* 00675fb0: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00675fb3: jge 0x675fd3 */ if ((fS==fO)) goto L_00675fd3;
L_00675fb5:; BB(0x00675fb5);
    /* 00675fb5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00675fb8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00675fb9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00675fbc: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00675fbf: call 0x676570 */ r_esp -= 4; W32(r_esp, 0x675fc4u); f_00676570();
    /* 00675fc4: cmp eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00675fc7: jne 0x675fd1 */ if (!fZ) goto L_00675fd1;
L_00675fc9:; BB(0x00675fc9);
    /* 00675fc9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00675fcc: jmp 0x676301 */ goto L_00676301;
L_00675fd1:; BB(0x00675fd1);
    /* 00675fd1: jmp 0x675f9c */ goto L_00675f9c;
L_00675fd3:; BB(0x00675fd3);
    /* 00675fd3: jmp 0x6762fe */ goto L_006762fe;
L_00675fd8:; BB(0x00675fd8);
    /* 00675fd8: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00675fdb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00675fdc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00675fdf: call 0x675ad0 */ r_esp -= 4; W32(r_esp, 0x675fe4u); f_00675ad0();
    /* 00675fe4: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00675fe7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00675fee: jmp 0x675ff9 */ goto L_00675ff9;
L_00675ff0:; BB(0x00675ff0);
    /* 00675ff0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00675ff3: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00675ff6: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00675ff9:; BB(0x00675ff9);
    /* 00675ff9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00675ffc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00675ffd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00676000: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00676003: call 0x6765a0 */ r_esp -= 4; W32(r_esp, 0x676008u); f_006765a0();
    /* 00676008: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0067600b: mov ecx, eax */ r_ecx = r_eax;
    /* 0067600d: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x676012u); f_0060c9a0();
    /* 00676012: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00676015: jge 0x676043 */ if ((fS==fO)) goto L_00676043;
L_00676017:; BB(0x00676017);
    /* 00676017: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0067601a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067601b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0067601e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067601f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00676022: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00676025: call 0x6765a0 */ r_esp -= 4; W32(r_esp, 0x67602au); f_006765a0();
    /* 0067602a: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0067602d: mov ecx, eax */ r_ecx = r_eax;
    /* 0067602f: call 0x676570 */ r_esp -= 4; W32(r_esp, 0x676034u); f_00676570();
    /* 00676034: cmp eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00676037: jne 0x676041 */ if (!fZ) goto L_00676041;
L_00676039:; BB(0x00676039);
    /* 00676039: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0067603c: jmp 0x676301 */ goto L_00676301;
L_00676041:; BB(0x00676041);
    /* 00676041: jmp 0x675ff0 */ goto L_00675ff0;
L_00676043:; BB(0x00676043);
    /* 00676043: jmp 0x6762fe */ goto L_006762fe;
L_00676048:; BB(0x00676048);
    /* 00676048: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0067604f: jmp 0x67605a */ goto L_0067605a;
L_00676051:; BB(0x00676051);
    /* 00676051: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00676054: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00676057: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0067605a:; BB(0x0067605a);
    /* 0067605a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0067605d: add ecx, 0x1c */ {  u32 a = r_ecx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00676060: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x676065u); f_0060c9a0();
    /* 00676065: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00676068: jge 0x676088 */ if ((fS==fO)) goto L_00676088;
L_0067606a:; BB(0x0067606a);
    /* 0067606a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0067606d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067606e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00676071: add ecx, 0x1c */ {  u32 a = r_ecx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00676074: call 0x676570 */ r_esp -= 4; W32(r_esp, 0x676079u); f_00676570();
    /* 00676079: cmp eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067607c: jne 0x676086 */ if (!fZ) goto L_00676086;
L_0067607e:; BB(0x0067607e);
    /* 0067607e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00676081: jmp 0x676301 */ goto L_00676301;
L_00676086:; BB(0x00676086);
    /* 00676086: jmp 0x676051 */ goto L_00676051;
L_00676088:; BB(0x00676088);
    /* 00676088: jmp 0x6762fe */ goto L_006762fe;
L_0067608d:; BB(0x0067608d);
    /* 0067608d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00676094: jmp 0x67609f */ goto L_0067609f;
L_00676096:; BB(0x00676096);
    /* 00676096: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00676099: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0067609c: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0067609f:; BB(0x0067609f);
    /* 0067609f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006760a2: add ecx, 0x2c */ {  u32 a = r_ecx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006760a5: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x6760aau); f_0060c9a0();
    /* 006760aa: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006760ad: jge 0x6760cd */ if ((fS==fO)) goto L_006760cd;
L_006760af:; BB(0x006760af);
    /* 006760af: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006760b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006760b3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006760b6: add ecx, 0x2c */ {  u32 a = r_ecx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006760b9: call 0x676570 */ r_esp -= 4; W32(r_esp, 0x6760beu); f_00676570();
    /* 006760be: cmp eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006760c1: jne 0x6760cb */ if (!fZ) goto L_006760cb;
L_006760c3:; BB(0x006760c3);
    /* 006760c3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006760c6: jmp 0x676301 */ goto L_00676301;
L_006760cb:; BB(0x006760cb);
    /* 006760cb: jmp 0x676096 */ goto L_00676096;
L_006760cd:; BB(0x006760cd);
    /* 006760cd: jmp 0x6762fe */ goto L_006762fe;
L_006760d2:; BB(0x006760d2);
    /* 006760d2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006760d9: jmp 0x6760e4 */ goto L_006760e4;
L_006760db:; BB(0x006760db);
    /* 006760db: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006760de: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006760e1: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_006760e4:; BB(0x006760e4);
    /* 006760e4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006760e7: add ecx, 0x3c */ {  u32 a = r_ecx; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006760ea: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x6760efu); f_0060c9a0();
    /* 006760ef: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006760f2: jge 0x676112 */ if ((fS==fO)) goto L_00676112;
L_006760f4:; BB(0x006760f4);
    /* 006760f4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006760f7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006760f8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006760fb: add ecx, 0x3c */ {  u32 a = r_ecx; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006760fe: call 0x676570 */ r_esp -= 4; W32(r_esp, 0x676103u); f_00676570();
    /* 00676103: cmp eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00676106: jne 0x676110 */ if (!fZ) goto L_00676110;
L_00676108:; BB(0x00676108);
    /* 00676108: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0067610b: jmp 0x676301 */ goto L_00676301;
L_00676110:; BB(0x00676110);
    /* 00676110: jmp 0x6760db */ goto L_006760db;
L_00676112:; BB(0x00676112);
    /* 00676112: jmp 0x6762fe */ goto L_006762fe;
L_00676117:; BB(0x00676117);
    /* 00676117: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0067611e: jmp 0x676129 */ goto L_00676129;
L_00676120:; BB(0x00676120);
    /* 00676120: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00676123: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00676126: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00676129:; BB(0x00676129);
    /* 00676129: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0067612c: add ecx, 0x4c */ {  u32 a = r_ecx; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067612f: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x676134u); f_0060c9a0();
    /* 00676134: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00676137: jge 0x676157 */ if ((fS==fO)) goto L_00676157;
L_00676139:; BB(0x00676139);
    /* 00676139: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0067613c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067613d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00676140: add ecx, 0x4c */ {  u32 a = r_ecx; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00676143: call 0x676570 */ r_esp -= 4; W32(r_esp, 0x676148u); f_00676570();
    /* 00676148: cmp eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067614b: jne 0x676155 */ if (!fZ) goto L_00676155;
L_0067614d:; BB(0x0067614d);
    /* 0067614d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00676150: jmp 0x676301 */ goto L_00676301;
L_00676155:; BB(0x00676155);
    /* 00676155: jmp 0x676120 */ goto L_00676120;
L_00676157:; BB(0x00676157);
    /* 00676157: jmp 0x6762fe */ goto L_006762fe;
L_0067615c:; BB(0x0067615c);
    /* 0067615c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00676163: jmp 0x67616e */ goto L_0067616e;
L_00676165:; BB(0x00676165);
    /* 00676165: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00676168: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0067616b: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0067616e:; BB(0x0067616e);
    /* 0067616e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00676171: add ecx, 0x5c */ {  u32 a = r_ecx; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00676174: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x676179u); f_0060c9a0();
    /* 00676179: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067617c: jge 0x67619c */ if ((fS==fO)) goto L_0067619c;
L_0067617e:; BB(0x0067617e);
    /* 0067617e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00676181: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00676182: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00676185: add ecx, 0x5c */ {  u32 a = r_ecx; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00676188: call 0x676570 */ r_esp -= 4; W32(r_esp, 0x67618du); f_00676570();
    /* 0067618d: cmp eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00676190: jne 0x67619a */ if (!fZ) goto L_0067619a;
L_00676192:; BB(0x00676192);
    /* 00676192: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00676195: jmp 0x676301 */ goto L_00676301;
L_0067619a:; BB(0x0067619a);
    /* 0067619a: jmp 0x676165 */ goto L_00676165;
L_0067619c:; BB(0x0067619c);
    /* 0067619c: jmp 0x6762fe */ goto L_006762fe;
L_006761a1:; BB(0x006761a1);
    /* 006761a1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006761a8: jmp 0x6761b3 */ goto L_006761b3;
L_006761aa:; BB(0x006761aa);
    /* 006761aa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006761ad: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006761b0: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_006761b3:; BB(0x006761b3);
    /* 006761b3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006761b6: add ecx, 0x6c */ {  u32 a = r_ecx; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006761b9: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x6761beu); f_0060c9a0();
    /* 006761be: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006761c1: jge 0x6761e1 */ if ((fS==fO)) goto L_006761e1;
L_006761c3:; BB(0x006761c3);
    /* 006761c3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006761c6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006761c7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006761ca: add ecx, 0x6c */ {  u32 a = r_ecx; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006761cd: call 0x676570 */ r_esp -= 4; W32(r_esp, 0x6761d2u); f_00676570();
    /* 006761d2: cmp eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006761d5: jne 0x6761df */ if (!fZ) goto L_006761df;
L_006761d7:; BB(0x006761d7);
    /* 006761d7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006761da: jmp 0x676301 */ goto L_00676301;
L_006761df:; BB(0x006761df);
    /* 006761df: jmp 0x6761aa */ goto L_006761aa;
L_006761e1:; BB(0x006761e1);
    /* 006761e1: jmp 0x6762fe */ goto L_006762fe;
L_006761e6:; BB(0x006761e6);
    /* 006761e6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006761ed: jmp 0x6761f8 */ goto L_006761f8;
L_006761ef:; BB(0x006761ef);
    /* 006761ef: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006761f2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006761f5: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_006761f8:; BB(0x006761f8);
    /* 006761f8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006761fb: add ecx, 0x7c */ {  u32 a = r_ecx; u32 b = 0x7cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006761fe: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x676203u); f_0060c9a0();
    /* 00676203: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00676206: jge 0x676226 */ if ((fS==fO)) goto L_00676226;
L_00676208:; BB(0x00676208);
    /* 00676208: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0067620b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067620c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0067620f: add ecx, 0x7c */ {  u32 a = r_ecx; u32 b = 0x7cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00676212: call 0x676570 */ r_esp -= 4; W32(r_esp, 0x676217u); f_00676570();
    /* 00676217: cmp eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067621a: jne 0x676224 */ if (!fZ) goto L_00676224;
L_0067621c:; BB(0x0067621c);
    /* 0067621c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0067621f: jmp 0x676301 */ goto L_00676301;
L_00676224:; BB(0x00676224);
    /* 00676224: jmp 0x6761ef */ goto L_006761ef;
L_00676226:; BB(0x00676226);
    /* 00676226: jmp 0x6762fe */ goto L_006762fe;
L_0067622b:; BB(0x0067622b);
    /* 0067622b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00676232: jmp 0x67623d */ goto L_0067623d;
L_00676234:; BB(0x00676234);
    /* 00676234: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00676237: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0067623a: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0067623d:; BB(0x0067623d);
    /* 0067623d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00676240: add ecx, 0x8c */ {  u32 a = r_ecx; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00676246: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x67624bu); f_0060c9a0();
    /* 0067624b: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067624e: jge 0x676271 */ if ((fS==fO)) goto L_00676271;
L_00676250:; BB(0x00676250);
    /* 00676250: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00676253: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00676254: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00676257: add ecx, 0x8c */ {  u32 a = r_ecx; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067625d: call 0x676570 */ r_esp -= 4; W32(r_esp, 0x676262u); f_00676570();
    /* 00676262: cmp eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00676265: jne 0x67626f */ if (!fZ) goto L_0067626f;
L_00676267:; BB(0x00676267);
    /* 00676267: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0067626a: jmp 0x676301 */ goto L_00676301;
L_0067626f:; BB(0x0067626f);
    /* 0067626f: jmp 0x676234 */ goto L_00676234;
L_00676271:; BB(0x00676271);
    /* 00676271: jmp 0x6762fe */ goto L_006762fe;
L_00676276:; BB(0x00676276);
    /* 00676276: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0067627d: jmp 0x676288 */ goto L_00676288;
L_0067627f:; BB(0x0067627f);
    /* 0067627f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00676282: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00676285: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00676288:; BB(0x00676288);
    /* 00676288: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0067628b: add ecx, 0x9c */ {  u32 a = r_ecx; u32 b = 0x9cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00676291: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x676296u); f_0060c9a0();
    /* 00676296: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00676299: jge 0x6762b9 */ if ((fS==fO)) goto L_006762b9;
L_0067629b:; BB(0x0067629b);
    /* 0067629b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0067629e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067629f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006762a2: add ecx, 0x9c */ {  u32 a = r_ecx; u32 b = 0x9cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006762a8: call 0x676570 */ r_esp -= 4; W32(r_esp, 0x6762adu); f_00676570();
    /* 006762ad: cmp eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006762b0: jne 0x6762b7 */ if (!fZ) goto L_006762b7;
L_006762b2:; BB(0x006762b2);
    /* 006762b2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006762b5: jmp 0x676301 */ goto L_00676301;
L_006762b7:; BB(0x006762b7);
    /* 006762b7: jmp 0x67627f */ goto L_0067627f;
L_006762b9:; BB(0x006762b9);
    /* 006762b9: jmp 0x6762fe */ goto L_006762fe;
L_006762bb:; BB(0x006762bb);
    /* 006762bb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006762c2: jmp 0x6762cd */ goto L_006762cd;
L_006762c4:; BB(0x006762c4);
    /* 006762c4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006762c7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006762ca: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_006762cd:; BB(0x006762cd);
    /* 006762cd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006762d0: add ecx, 0xac */ {  u32 a = r_ecx; u32 b = 0xacu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006762d6: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x6762dbu); f_0060c9a0();
    /* 006762db: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006762de: jge 0x6762fe */ if ((fS==fO)) goto L_006762fe;
L_006762e0:; BB(0x006762e0);
    /* 006762e0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006762e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006762e4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006762e7: add ecx, 0xac */ {  u32 a = r_ecx; u32 b = 0xacu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006762ed: call 0x676570 */ r_esp -= 4; W32(r_esp, 0x6762f2u); f_00676570();
    /* 006762f2: cmp eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006762f5: jne 0x6762fc */ if (!fZ) goto L_006762fc;
L_006762f7:; BB(0x006762f7);
    /* 006762f7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006762fa: jmp 0x676301 */ goto L_00676301;
L_006762fc:; BB(0x006762fc);
    /* 006762fc: jmp 0x6762c4 */ goto L_006762c4;
L_006762fe:; BB(0x006762fe);
    /* 006762fe: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00676301:; BB(0x00676301);
    /* 00676301: mov esp, ebp */ r_esp = r_ebp;
    /* 00676303: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00676304: ret 0xc */ FN_RET(0x00675f70); r_esp += 16; return;
}

