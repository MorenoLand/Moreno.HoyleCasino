#include "protos.h"

void f_005d4200(void) /* sub_5D4200 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d4200);
    /* 005d4200: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d4201: mov ebp, esp */ r_ebp = r_esp;
    /* 005d4203: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d4206: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005d4209: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d420c: cmp dword ptr [eax + 0x88], 0 */ {  u32 a = R32((u32)(r_eax+0x88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4213: je 0x5d426d */ if (fZ) goto L_005d426d;
L_005d4215:; BB(0x005d4215);
    /* 005d4215: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d4218: mov edx, dword ptr [ecx + 0x88] */ r_edx = R32((u32)(r_ecx+0x88u));
    /* 005d421e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d4221: mov ecx, dword ptr [eax + 0x88] */ r_ecx = R32((u32)(r_eax+0x88u));
    /* 005d4227: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005d4229: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005d422c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d422eu); call_ind(t); }
    /* 005d422e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d4231: mov edx, dword ptr [ecx + 0x88] */ r_edx = R32((u32)(r_ecx+0x88u));
    /* 005d4237: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005d423a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d423d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005d4240: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4244: je 0x5d4259 */ if (fZ) goto L_005d4259;
L_005d4246:; BB(0x005d4246);
    /* 005d4246: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d4248: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d424b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d424d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4250: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d4252: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d4254u); call_ind(t); }
    /* 005d4254: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005d4257: jmp 0x5d4260 */ goto L_005d4260;
L_005d4259:; BB(0x005d4259);
    /* 005d4259: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_005d4260:; BB(0x005d4260);
    /* 005d4260: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d4263: mov dword ptr [ecx + 0x88], 0 */ W32((u32)(r_ecx+0x88u), 0x0u);
L_005d426d:; BB(0x005d426d);
    /* 005d426d: mov esp, ebp */ r_esp = r_ebp;
    /* 005d426f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4270: ret  */ FN_RET(0x005d4200); r_esp += 4; return;
}

void f_005d4280(void) /* sub_5D4280 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d4280);
    /* 005d4280: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d4281: mov ebp, esp */ r_ebp = r_esp;
    /* 005d4283: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d4286: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d4289: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005d428c: sub eax, 0x64 */ {  u32 a = r_eax; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005d428f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005d4292: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d4295: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 005d429b: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005d429e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d42a1: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005d42a4: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005d42a7: cmp dword ptr [ebp - 0xc], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005d42ab: ja 0x5d43c2 */ if ((!fC&&!fZ)) goto L_005d43c2;
L_005d42b1:; BB(0x005d42b1);
    /* 005d42b1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d42b4: jmp dword ptr [ecx*4 + 0x5d43c8] */ { u32 t = R32((u32)(r_ecx*4+0x5d43c8u)); switch (t) { case 0x5d42bbu: goto L_005d42bb; case 0x5d42deu: goto L_005d42de; case 0x5d4301u: goto L_005d4301; case 0x5d4324u: goto L_005d4324; case 0x5d4344u: goto L_005d4344; case 0x5d4364u: goto L_005d4364; case 0x5d4384u: goto L_005d4384; case 0x5d43a4u: goto L_005d43a4; default: UNSUP(0x005d42b4, "jump table entry is not a known target"); } }
L_005d42bb:; BB(0x005d42bb);
    /* 005d42bb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d42be: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d42bf: push 0x6d3af4 */ { u32 v = 0x6d3af4u; r_esp -= 4; W32(r_esp, v); }
    /* 005d42c4: call 0x630f80 */ r_esp -= 4; W32(r_esp, 0x5d42c9u); f_00630f80();
    /* 005d42c9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d42cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d42cd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d42d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d42d1: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5d42d6u); f_00686d8e();
    /* 005d42d6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d42d9: jmp 0x5d43c2 */ goto L_005d43c2;
L_005d42de:; BB(0x005d42de);
    /* 005d42de: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d42e1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d42e2: push 0x6d3adc */ { u32 v = 0x6d3adcu; r_esp -= 4; W32(r_esp, v); }
    /* 005d42e7: call 0x630f80 */ r_esp -= 4; W32(r_esp, 0x5d42ecu); f_00630f80();
    /* 005d42ec: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d42ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d42f0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d42f3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d42f4: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5d42f9u); f_00686d8e();
    /* 005d42f9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d42fc: jmp 0x5d43c2 */ goto L_005d43c2;
L_005d4301:; BB(0x005d4301);
    /* 005d4301: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4304: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d4305: push 0x6d3ac8 */ { u32 v = 0x6d3ac8u; r_esp -= 4; W32(r_esp, v); }
    /* 005d430a: call 0x630f80 */ r_esp -= 4; W32(r_esp, 0x5d430fu); f_00630f80();
    /* 005d430f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d4312: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d4313: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d4316: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d4317: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5d431cu); f_00686d8e();
    /* 005d431c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d431f: jmp 0x5d43c2 */ goto L_005d43c2;
L_005d4324:; BB(0x005d4324);
    /* 005d4324: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4327: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d4328: push 0x6d3ab4 */ { u32 v = 0x6d3ab4u; r_esp -= 4; W32(r_esp, v); }
    /* 005d432d: call 0x630f80 */ r_esp -= 4; W32(r_esp, 0x5d4332u); f_00630f80();
    /* 005d4332: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d4335: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d4336: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d4339: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d433a: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5d433fu); f_00686d8e();
    /* 005d433f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d4342: jmp 0x5d43c2 */ goto L_005d43c2;
L_005d4344:; BB(0x005d4344);
    /* 005d4344: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4347: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d4348: push 0x6d3aa0 */ { u32 v = 0x6d3aa0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d434d: call 0x630f80 */ r_esp -= 4; W32(r_esp, 0x5d4352u); f_00630f80();
    /* 005d4352: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d4355: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d4356: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d4359: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d435a: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5d435fu); f_00686d8e();
    /* 005d435f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d4362: jmp 0x5d43c2 */ goto L_005d43c2;
L_005d4364:; BB(0x005d4364);
    /* 005d4364: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4367: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d4368: push 0x6d3a8c */ { u32 v = 0x6d3a8cu; r_esp -= 4; W32(r_esp, v); }
    /* 005d436d: call 0x630f80 */ r_esp -= 4; W32(r_esp, 0x5d4372u); f_00630f80();
    /* 005d4372: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d4375: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d4376: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d4379: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d437a: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5d437fu); f_00686d8e();
    /* 005d437f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d4382: jmp 0x5d43c2 */ goto L_005d43c2;
L_005d4384:; BB(0x005d4384);
    /* 005d4384: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4387: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d4388: push 0x6d3a70 */ { u32 v = 0x6d3a70u; r_esp -= 4; W32(r_esp, v); }
    /* 005d438d: call 0x630f80 */ r_esp -= 4; W32(r_esp, 0x5d4392u); f_00630f80();
    /* 005d4392: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d4395: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d4396: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d4399: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d439a: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5d439fu); f_00686d8e();
    /* 005d439f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d43a2: jmp 0x5d43c2 */ goto L_005d43c2;
L_005d43a4:; BB(0x005d43a4);
    /* 005d43a4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d43a7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d43a8: push 0x6d3a54 */ { u32 v = 0x6d3a54u; r_esp -= 4; W32(r_esp, v); }
    /* 005d43ad: call 0x630f80 */ r_esp -= 4; W32(r_esp, 0x5d43b2u); f_00630f80();
    /* 005d43b2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d43b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d43b6: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d43b9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d43ba: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5d43bfu); f_00686d8e();
    /* 005d43bf: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d43c2:; BB(0x005d43c2);
    /* 005d43c2: mov esp, ebp */ r_esp = r_ebp;
    /* 005d43c4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d43c5: ret 8 */ FN_RET(0x005d4280); r_esp += 12; return;
}

void f_005d44f0(void) /* sub_5D44F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d44f0);
    /* 005d44f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d44f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d44f3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d44f6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005d44f9: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d44fc: cmp dword ptr [eax + 0x8c], 0 */ {  u32 a = R32((u32)(r_eax+0x8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4503: je 0x5d455d */ if (fZ) goto L_005d455d;
L_005d4505:; BB(0x005d4505);
    /* 005d4505: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d4508: mov edx, dword ptr [ecx + 0x8c] */ r_edx = R32((u32)(r_ecx+0x8cu));
    /* 005d450e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d4511: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 005d4517: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005d4519: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005d451c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d451eu); call_ind(t); }
    /* 005d451e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d4521: mov edx, dword ptr [ecx + 0x8c] */ r_edx = R32((u32)(r_ecx+0x8cu));
    /* 005d4527: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005d452a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d452d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005d4530: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4534: je 0x5d4549 */ if (fZ) goto L_005d4549;
L_005d4536:; BB(0x005d4536);
    /* 005d4536: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d4538: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d453b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d453d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4540: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d4542: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d4544u); call_ind(t); }
    /* 005d4544: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005d4547: jmp 0x5d4550 */ goto L_005d4550;
L_005d4549:; BB(0x005d4549);
    /* 005d4549: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_005d4550:; BB(0x005d4550);
    /* 005d4550: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d4553: mov dword ptr [ecx + 0x8c], 0 */ W32((u32)(r_ecx+0x8cu), 0x0u);
L_005d455d:; BB(0x005d455d);
    /* 005d455d: mov esp, ebp */ r_esp = r_ebp;
    /* 005d455f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4560: ret  */ FN_RET(0x005d44f0); r_esp += 4; return;
}

