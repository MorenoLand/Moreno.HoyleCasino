#include "protos.h"

void f_00560160(void) /* sub_560160 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00560160);
    /* 00560160: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00560161: mov ebp, esp */ r_ebp = r_esp;
    /* 00560163: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00560166: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00560169: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0056016c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0056016f: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00560173: ja 0x5601a2 */ if ((!fC&&!fZ)) goto L_005601a2;
L_00560175:; BB(0x00560175);
    /* 00560175: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00560178: jmp dword ptr [ecx*4 + 0x5601ac] */ { u32 t = R32((u32)(r_ecx*4+0x5601acu)); switch (t) { case 0x56017fu: goto L_0056017f; case 0x560186u: goto L_00560186; case 0x5601a2u: goto L_005601a2; case 0x56018du: goto L_0056018d; case 0x560194u: goto L_00560194; case 0x56019bu: goto L_0056019b; default: UNSUP(0x00560178, "jump table entry is not a known target"); } }
L_0056017f:; BB(0x0056017f);
    /* 0056017f: mov eax, 0x312229 */ r_eax = 0x312229u;
    /* 00560184: jmp 0x5601a5 */ goto L_005601a5;
L_00560186:; BB(0x00560186);
    /* 00560186: mov eax, 0x312228 */ r_eax = 0x312228u;
    /* 0056018b: jmp 0x5601a5 */ goto L_005601a5;
L_0056018d:; BB(0x0056018d);
    /* 0056018d: mov eax, 0x312227 */ r_eax = 0x312227u;
    /* 00560192: jmp 0x5601a5 */ goto L_005601a5;
L_00560194:; BB(0x00560194);
    /* 00560194: mov eax, 0x31222a */ r_eax = 0x31222au;
    /* 00560199: jmp 0x5601a5 */ goto L_005601a5;
L_0056019b:; BB(0x0056019b);
    /* 0056019b: mov eax, 0x31222b */ r_eax = 0x31222bu;
    /* 005601a0: jmp 0x5601a5 */ goto L_005601a5;
L_005601a2:; BB(0x005601a2);
    /* 005601a2: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_005601a5:; BB(0x005601a5);
    /* 005601a5: mov esp, ebp */ r_esp = r_ebp;
    /* 005601a7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005601a8: ret 4 */ FN_RET(0x00560160); r_esp += 8; return;
}

void f_005601d0(void) /* sub_5601D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005601d0);
    /* 005601d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005601d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005601d3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005601d6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005601d9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005601e0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005601e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005601e4: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005601ea: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005601ed: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x5601f2u); f_005fb300();
    /* 005601f2: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005601f5: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005601f8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005601fa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005601fd: mov edx, dword ptr [eax + 0xcc] */ r_edx = R32((u32)(r_eax+0xccu));
    /* 00560203: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x560205u); call_ind(t); }
    /* 00560205: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00560208: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00560209: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056020c: call 0x560160 */ r_esp -= 4; W32(r_esp, 0x560211u); f_00560160();
    /* 00560211: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00560214: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00560218: je 0x56022b */ if (fZ) goto L_0056022b;
L_0056021a:; BB(0x0056021a);
    /* 0056021a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056021c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056021f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00560220: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00560226: call 0x5f2b20 */ r_esp -= 4; W32(r_esp, 0x56022bu); f_005f2b20();
L_0056022b:; BB(0x0056022b);
    /* 0056022b: mov esp, ebp */ r_esp = r_ebp;
    /* 0056022d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056022e: ret 4 */ FN_RET(0x005601d0); r_esp += 8; return;
}

void f_00560240(void) /* sub_560240 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00560240);
    /* 00560240: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00560241: mov ebp, esp */ r_ebp = r_esp;
    /* 00560243: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00560246: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00560249: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00560250: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00560253: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00560254: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0056025a: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 0056025d: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x560262u); f_005fb300();
    /* 00560262: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00560265: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00560268: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0056026a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056026d: mov edx, dword ptr [eax + 0xd0] */ r_edx = R32((u32)(r_eax+0xd0u));
    /* 00560273: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x560275u); call_ind(t); }
    /* 00560275: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00560278: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00560279: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056027c: call 0x560160 */ r_esp -= 4; W32(r_esp, 0x560281u); f_00560160();
    /* 00560281: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00560284: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00560288: je 0x560299 */ if (fZ) goto L_00560299;
L_0056028a:; BB(0x0056028a);
    /* 0056028a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056028d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056028e: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00560294: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x560299u); f_005f2ba0();
L_00560299:; BB(0x00560299);
    /* 00560299: mov esp, ebp */ r_esp = r_ebp;
    /* 0056029b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056029c: ret 4 */ FN_RET(0x00560240); r_esp += 8; return;
}

void f_005602a0(void) /* sub_5602A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005602a0);
    /* 005602a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005602a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005602a3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005602a6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005602a9: mov dword ptr [ebp - 8], 5 */ W32((u32)(r_ebp+0xfffffff8u), 0x5u);
    /* 005602b0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005602b7: jmp 0x5602c2 */ goto L_005602c2;
L_005602b9:; BB(0x005602b9);
    /* 005602b9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005602bc: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005602bf: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005602c2:; BB(0x005602c2);
    /* 005602c2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005602c5: cmp ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005602c8: jge 0x5602df */ if ((fS==fO)) goto L_005602df;
L_005602ca:; BB(0x005602ca);
    /* 005602ca: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005602cd: mov eax, dword ptr [edx*4 + 0x743c98] */ r_eax = R32((u32)(r_edx*4+0x743c98u));
    /* 005602d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005602d5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005602d8: call 0x560240 */ r_esp -= 4; W32(r_esp, 0x5602ddu); f_00560240();
    /* 005602dd: jmp 0x5602b9 */ goto L_005602b9;
L_005602df:; BB(0x005602df);
    /* 005602df: push 0x312222 */ { u32 v = 0x312222u; r_esp -= 4; W32(r_esp, v); }
    /* 005602e4: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005602ea: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x5602efu); f_005f2ba0();
    /* 005602ef: push 0x312223 */ { u32 v = 0x312223u; r_esp -= 4; W32(r_esp, v); }
    /* 005602f4: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005602fa: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x5602ffu); f_005f2ba0();
    /* 005602ff: push 0x312224 */ { u32 v = 0x312224u; r_esp -= 4; W32(r_esp, v); }
    /* 00560304: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0056030a: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x56030fu); f_005f2ba0();
    /* 0056030f: push 0x312225 */ { u32 v = 0x312225u; r_esp -= 4; W32(r_esp, v); }
    /* 00560314: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0056031a: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x56031fu); f_005f2ba0();
    /* 0056031f: push 0x312226 */ { u32 v = 0x312226u; r_esp -= 4; W32(r_esp, v); }
    /* 00560324: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0056032a: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x56032fu); f_005f2ba0();
    /* 0056032f: mov esp, ebp */ r_esp = r_ebp;
    /* 00560331: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00560332: ret  */ FN_RET(0x005602a0); r_esp += 4; return;
}

void f_00560340(void) /* sub_560340 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00560340);
    /* 00560340: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00560341: mov ebp, esp */ r_ebp = r_esp;
    /* 00560343: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00560344: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00560347: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0056034a: mov eax, dword ptr [eax*4 + 0x743e04] */ r_eax = R32((u32)(r_eax*4+0x743e04u));
    /* 00560351: mov esp, ebp */ r_esp = r_ebp;
    /* 00560353: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00560354: ret 4 */ FN_RET(0x00560340); r_esp += 8; return;
}

void f_00560360(void) /* sub_560360 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00560360);
    /* 00560360: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00560361: mov ebp, esp */ r_ebp = r_esp;
    /* 00560363: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00560364: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00560367: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0056036a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056036d: mov ecx, dword ptr [ecx + eax*4 + 0x8c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8cu));
    /* 00560374: call 0x562de0 */ r_esp -= 4; W32(r_esp, 0x560379u); f_00562de0();
    /* 00560379: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0056037c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056037d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00560380: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00560383: mov ecx, dword ptr [ecx + eax*4 + 0x8c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8cu));
    /* 0056038a: call 0x562e10 */ r_esp -= 4; W32(r_esp, 0x56038fu); f_00562e10();
    /* 0056038f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00560392: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00560395: mov ecx, dword ptr [eax + edx*4 + 0x8c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8cu));
    /* 0056039c: call 0x563030 */ r_esp -= 4; W32(r_esp, 0x5603a1u); f_00563030();
    /* 005603a1: mov esp, ebp */ r_esp = r_ebp;
    /* 005603a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005603a4: ret 8 */ FN_RET(0x00560360); r_esp += 12; return;
}

void f_005603b0(void) /* sub_5603B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005603b0);
    /* 005603b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005603b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005603b3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005603b6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005603b9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005603bc: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005603bf: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005603c2: sub ecx, 0x31222a */ {  u32 a = r_ecx; u32 b = 0x31222au; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005603c8: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005603cb: cmp dword ptr [ebp - 8], 0x20 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005603cf: ja 0x560441 */ if ((!fC&&!fZ)) goto L_00560441;
L_005603d1:; BB(0x005603d1);
    /* 005603d1: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005603d4: movzx eax, byte ptr [edx + 0x560488] */ r_eax = (u32)R8((u32)(r_edx+0x560488u));
    /* 005603db: jmp dword ptr [eax*4 + 0x56044c] */ { u32 t = R32((u32)(r_eax*4+0x56044cu)); switch (t) { case 0x5603e2u: goto L_005603e2; case 0x5603e6u: goto L_005603e6; case 0x5603edu: goto L_005603ed; case 0x5603f4u: goto L_005603f4; case 0x5603fbu: goto L_005603fb; case 0x560402u: goto L_00560402; case 0x560409u: goto L_00560409; case 0x560410u: goto L_00560410; case 0x560417u: goto L_00560417; case 0x56041eu: goto L_0056041e; case 0x560425u: goto L_00560425; case 0x56042cu: goto L_0056042c; case 0x560433u: goto L_00560433; case 0x56043au: goto L_0056043a; case 0x560441u: goto L_00560441; default: UNSUP(0x005603db, "jump table entry is not a known target"); } }
L_005603e2:; BB(0x005603e2);
    /* 005603e2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005603e4: jmp 0x560443 */ goto L_00560443;
L_005603e6:; BB(0x005603e6);
    /* 005603e6: mov eax, 2 */ r_eax = 0x2u;
    /* 005603eb: jmp 0x560443 */ goto L_00560443;
L_005603ed:; BB(0x005603ed);
    /* 005603ed: mov eax, 4 */ r_eax = 0x4u;
    /* 005603f2: jmp 0x560443 */ goto L_00560443;
L_005603f4:; BB(0x005603f4);
    /* 005603f4: mov eax, 6 */ r_eax = 0x6u;
    /* 005603f9: jmp 0x560443 */ goto L_00560443;
L_005603fb:; BB(0x005603fb);
    /* 005603fb: mov eax, 8 */ r_eax = 0x8u;
    /* 00560400: jmp 0x560443 */ goto L_00560443;
L_00560402:; BB(0x00560402);
    /* 00560402: mov eax, 0xa */ r_eax = 0xau;
    /* 00560407: jmp 0x560443 */ goto L_00560443;
L_00560409:; BB(0x00560409);
    /* 00560409: mov eax, 0xc */ r_eax = 0xcu;
    /* 0056040e: jmp 0x560443 */ goto L_00560443;
L_00560410:; BB(0x00560410);
    /* 00560410: mov eax, 0xe */ r_eax = 0xeu;
    /* 00560415: jmp 0x560443 */ goto L_00560443;
L_00560417:; BB(0x00560417);
    /* 00560417: mov eax, 0x10 */ r_eax = 0x10u;
    /* 0056041c: jmp 0x560443 */ goto L_00560443;
L_0056041e:; BB(0x0056041e);
    /* 0056041e: mov eax, 0x12 */ r_eax = 0x12u;
    /* 00560423: jmp 0x560443 */ goto L_00560443;
L_00560425:; BB(0x00560425);
    /* 00560425: mov eax, 0x14 */ r_eax = 0x14u;
    /* 0056042a: jmp 0x560443 */ goto L_00560443;
L_0056042c:; BB(0x0056042c);
    /* 0056042c: mov eax, 0x16 */ r_eax = 0x16u;
    /* 00560431: jmp 0x560443 */ goto L_00560443;
L_00560433:; BB(0x00560433);
    /* 00560433: mov eax, 0x18 */ r_eax = 0x18u;
    /* 00560438: jmp 0x560443 */ goto L_00560443;
L_0056043a:; BB(0x0056043a);
    /* 0056043a: mov eax, 0x1a */ r_eax = 0x1au;
    /* 0056043f: jmp 0x560443 */ goto L_00560443;
L_00560441:; BB(0x00560441);
    /* 00560441: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00560443:; BB(0x00560443);
    /* 00560443: mov esp, ebp */ r_esp = r_ebp;
    /* 00560445: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00560446: ret 4 */ FN_RET(0x005603b0); r_esp += 8; return;
}

void f_00560580(void) /* sub_560580 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00560580);
    /* 00560580: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00560581: mov ebp, esp */ r_ebp = r_esp;
    /* 00560583: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00560585: push 0x6a5911 */ { u32 v = 0x6a5911u; r_esp -= 4; W32(r_esp, v); }
    /* 0056058a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00560590: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00560591: sub esp, 0x178 */ {  u32 a = r_esp; u32 b = 0x178u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00560597: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0056059c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0056059e: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005605a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005605a2: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005605a5: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005605ab: mov dword ptr [ebp - 0x134], ecx */ W32((u32)(r_ebp+0xfffffeccu), r_ecx);
    /* 005605b1: mov dword ptr [ebp - 0x4c], 0x6c9784 */ W32((u32)(r_ebp+0xffffffb4u), 0x6c9784u);
    /* 005605b8: mov dword ptr [ebp - 0x48], 0x6c9768 */ W32((u32)(r_ebp+0xffffffb8u), 0x6c9768u);
    /* 005605bf: mov dword ptr [ebp - 0x44], 0x6b3148 */ W32((u32)(r_ebp+0xffffffbcu), 0x6b3148u);
    /* 005605c6: mov dword ptr [ebp - 0x7c], 0x2a */ W32((u32)(r_ebp+0xffffff84u), 0x2au);
    /* 005605cd: mov dword ptr [ebp - 0x78], 0x117 */ W32((u32)(r_ebp+0xffffff88u), 0x117u);
    /* 005605d4: mov dword ptr [ebp - 0x74], 0x1cc */ W32((u32)(r_ebp+0xffffff8cu), 0x1ccu);
    /* 005605db: mov dword ptr [ebp - 0x70], 0x117 */ W32((u32)(r_ebp+0xffffff90u), 0x117u);
    /* 005605e2: mov dword ptr [ebp - 0x6c], 0x1ae */ W32((u32)(r_ebp+0xffffff94u), 0x1aeu);
    /* 005605e9: mov dword ptr [ebp - 0x68], 0x140 */ W32((u32)(r_ebp+0xffffff98u), 0x140u);
    /* 005605f0: mov dword ptr [ebp - 0x64], 0x31223e */ W32((u32)(r_ebp+0xffffff9cu), 0x31223eu);
    /* 005605f7: mov dword ptr [ebp - 0x60], 0x31223f */ W32((u32)(r_ebp+0xffffffa0u), 0x31223fu);
    /* 005605fe: mov dword ptr [ebp - 0x5c], 0x312240 */ W32((u32)(r_ebp+0xffffffa4u), 0x312240u);
    /* 00560605: mov dword ptr [ebp - 0x58], 0x312241 */ W32((u32)(r_ebp+0xffffffa8u), 0x312241u);
    /* 0056060c: mov dword ptr [ebp - 0x54], 0x312242 */ W32((u32)(r_ebp+0xffffffacu), 0x312242u);
    /* 00560613: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 0056061a: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 00560621: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 00560628: push 0x6c9750 */ { u32 v = 0x6c9750u; r_esp -= 4; W32(r_esp, v); }
    /* 0056062d: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x560632u); f_00630f40();
    /* 00560632: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00560635: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00560636: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0056063c: call 0x5f38b0 */ r_esp -= 4; W32(r_esp, 0x560641u); f_005f38b0();
    /* 00560641: push 0x312220 */ { u32 v = 0x312220u; r_esp -= 4; W32(r_esp, v); }
    /* 00560646: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0056064c: call 0x5f1ad0 */ r_esp -= 4; W32(r_esp, 0x560651u); f_005f1ad0();
    /* 00560651: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00560653: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x560658u); f_00686d82();
    /* 00560658: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056065b: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 00560661: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00560668: cmp dword ptr [ebp - 0x8c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056066f: je 0x560684 */ if (fZ) goto L_00560684;
L_00560671:; BB(0x00560671);
    /* 00560671: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 00560677: call 0x5666e0 */ r_esp -= 4; W32(r_esp, 0x56067cu); f_005666e0();
    /* 0056067c: mov dword ptr [ebp - 0x138], eax */ W32((u32)(r_ebp+0xfffffec8u), r_eax);
    /* 00560682: jmp 0x56068e */ goto L_0056068e;
L_00560684:; BB(0x00560684);
    /* 00560684: mov dword ptr [ebp - 0x138], 0 */ W32((u32)(r_ebp+0xfffffec8u), 0x0u);
L_0056068e:; BB(0x0056068e);
    /* 0056068e: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 00560694: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 0056069a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005606a1: mov ecx, dword ptr [ebp - 0x134] */ r_ecx = R32((u32)(r_ebp+0xfffffeccu));
    /* 005606a7: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 005606ad: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 005606b0: mov eax, dword ptr [ebp - 0x134] */ r_eax = R32((u32)(r_ebp+0xfffffeccu));
    /* 005606b6: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005606b9: call 0x5667d0 */ r_esp -= 4; W32(r_esp, 0x5606beu); f_005667d0();
    /* 005606be: mov ecx, dword ptr [ebp - 0x134] */ r_ecx = R32((u32)(r_ebp+0xfffffeccu));
    /* 005606c4: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 005606c7: call 0x566a20 */ r_esp -= 4; W32(r_esp, 0x5606ccu); f_00566a20();
    /* 005606cc: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005606ce: mov edx, dword ptr [ebp - 0x134] */ r_edx = R32((u32)(r_ebp+0xfffffeccu));
    /* 005606d4: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 005606d7: call 0x566970 */ r_esp -= 4; W32(r_esp, 0x5606dcu); f_00566970();
    /* 005606dc: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 005606e1: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5606e6u); f_00686d82();
    /* 005606e6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005606e9: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 005606ef: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005606f6: cmp dword ptr [ebp - 0x94], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff6cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005606fd: je 0x560712 */ if (fZ) goto L_00560712;
L_005606ff:; BB(0x005606ff);
    /* 005606ff: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 00560705: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x56070au); f_005f5bf0();
    /* 0056070a: mov dword ptr [ebp - 0x13c], eax */ W32((u32)(r_ebp+0xfffffec4u), r_eax);
    /* 00560710: jmp 0x56071c */ goto L_0056071c;
L_00560712:; BB(0x00560712);
    /* 00560712: mov dword ptr [ebp - 0x13c], 0 */ W32((u32)(r_ebp+0xfffffec4u), 0x0u);
L_0056071c:; BB(0x0056071c);
    /* 0056071c: mov eax, dword ptr [ebp - 0x13c] */ r_eax = R32((u32)(r_ebp+0xfffffec4u));
    /* 00560722: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 00560728: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056072f: mov ecx, dword ptr [ebp - 0x134] */ r_ecx = R32((u32)(r_ebp+0xfffffeccu));
    /* 00560735: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 0056073b: mov dword ptr [ecx + 0x74], edx */ W32((u32)(r_ecx+0x74u), r_edx);
    /* 0056073e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00560740: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00560742: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00560744: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00560746: push 0x312239 */ { u32 v = 0x312239u; r_esp -= 4; W32(r_esp, v); }
    /* 0056074b: mov eax, dword ptr [ebp - 0x134] */ r_eax = R32((u32)(r_ebp+0xfffffeccu));
    /* 00560751: mov ecx, dword ptr [eax + 0x74] */ r_ecx = R32((u32)(r_eax+0x74u));
    /* 00560754: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x560759u); f_005eae80();
    /* 00560759: mov ecx, dword ptr [ebp - 0x134] */ r_ecx = R32((u32)(r_ebp+0xfffffeccu));
    /* 0056075f: mov edx, dword ptr [ecx + 0x74] */ r_edx = R32((u32)(r_ecx+0x74u));
    /* 00560762: mov dword ptr [edx + 0x178], 3 */ W32((u32)(r_edx+0x178u), 0x3u);
    /* 0056076c: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 00560771: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x560776u); f_00686d82();
    /* 00560776: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00560779: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
    /* 0056077f: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00560786: cmp dword ptr [ebp - 0x9c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff64u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056078d: je 0x5607a2 */ if (fZ) goto L_005607a2;
L_0056078f:; BB(0x0056078f);
    /* 0056078f: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00560795: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x56079au); f_005f5bf0();
    /* 0056079a: mov dword ptr [ebp - 0x140], eax */ W32((u32)(r_ebp+0xfffffec0u), r_eax);
    /* 005607a0: jmp 0x5607ac */ goto L_005607ac;
L_005607a2:; BB(0x005607a2);
    /* 005607a2: mov dword ptr [ebp - 0x140], 0 */ W32((u32)(r_ebp+0xfffffec0u), 0x0u);
L_005607ac:; BB(0x005607ac);
    /* 005607ac: mov eax, dword ptr [ebp - 0x140] */ r_eax = R32((u32)(r_ebp+0xfffffec0u));
    /* 005607b2: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 005607b8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005607bf: mov ecx, dword ptr [ebp - 0x134] */ r_ecx = R32((u32)(r_ebp+0xfffffeccu));
    /* 005607c5: mov edx, dword ptr [ebp - 0x98] */ r_edx = R32((u32)(r_ebp+0xffffff68u));
    /* 005607cb: mov dword ptr [ecx + 0x78], edx */ W32((u32)(r_ecx+0x78u), r_edx);
    /* 005607ce: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005607d0: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005607d2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005607d4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005607d6: push 0x31223a */ { u32 v = 0x31223au; r_esp -= 4; W32(r_esp, v); }
    /* 005607db: mov eax, dword ptr [ebp - 0x134] */ r_eax = R32((u32)(r_ebp+0xfffffeccu));
    /* 005607e1: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 005607e4: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x5607e9u); f_005eae80();
    /* 005607e9: mov ecx, dword ptr [ebp - 0x134] */ r_ecx = R32((u32)(r_ebp+0xfffffeccu));
    /* 005607ef: mov edx, dword ptr [ecx + 0x78] */ r_edx = R32((u32)(r_ecx+0x78u));
    /* 005607f2: mov dword ptr [edx + 0x178], 0 */ W32((u32)(r_edx+0x178u), 0x0u);
    /* 005607fc: lea eax, [ebp - 0x50] */ r_eax = (u32)(r_ebp+0xffffffb0u);
    /* 005607ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00560800: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 00560803: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00560804: lea edx, [ebp - 0x1c] */ r_edx = (u32)(r_ebp+0xffffffe4u);
    /* 00560807: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00560808: mov ecx, dword ptr [ebp - 0x134] */ r_ecx = R32((u32)(r_ebp+0xfffffeccu));
    /* 0056080e: call 0x5628b0 */ r_esp -= 4; W32(r_esp, 0x560813u); f_005628b0();
    /* 00560813: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 00560818: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x56081du); f_00686d82();
    /* 0056081d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00560820: mov dword ptr [ebp - 0xa4], eax */ W32((u32)(r_ebp+0xffffff5cu), r_eax);
    /* 00560826: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0056082d: cmp dword ptr [ebp - 0xa4], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff5cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00560834: je 0x560849 */ if (fZ) goto L_00560849;
L_00560836:; BB(0x00560836);
    /* 00560836: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0056083c: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x560841u); f_005eaaf0();
    /* 00560841: mov dword ptr [ebp - 0x144], eax */ W32((u32)(r_ebp+0xfffffebcu), r_eax);
    /* 00560847: jmp 0x560853 */ goto L_00560853;
L_00560849:; BB(0x00560849);
    /* 00560849: mov dword ptr [ebp - 0x144], 0 */ W32((u32)(r_ebp+0xfffffebcu), 0x0u);
L_00560853:; BB(0x00560853);
    /* 00560853: mov eax, dword ptr [ebp - 0x144] */ r_eax = R32((u32)(r_ebp+0xfffffebcu));
    /* 00560859: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
    /* 0056085f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00560866: mov ecx, dword ptr [ebp - 0x134] */ r_ecx = R32((u32)(r_ebp+0xfffffeccu));
    /* 0056086c: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 00560872: mov dword ptr [ecx + 0x7c], edx */ W32((u32)(r_ecx+0x7cu), r_edx);
    /* 00560875: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00560877: push 0x258 */ { u32 v = 0x258u; r_esp -= 4; W32(r_esp, v); }
    /* 0056087c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056087f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00560880: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00560883: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00560884: push 0x31223b */ { u32 v = 0x31223bu; r_esp -= 4; W32(r_esp, v); }
    /* 00560889: mov edx, dword ptr [ebp - 0x134] */ r_edx = R32((u32)(r_ebp+0xfffffeccu));
    /* 0056088f: mov ecx, dword ptr [edx + 0x7c] */ r_ecx = R32((u32)(r_edx+0x7cu));
    /* 00560892: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x560897u); f_005eae80();
    /* 00560897: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0056089a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056089b: mov ecx, dword ptr [ebp - 0x134] */ r_ecx = R32((u32)(r_ebp+0xfffffeccu));
    /* 005608a1: mov edx, dword ptr [ecx + 0x7c] */ r_edx = R32((u32)(r_ecx+0x7cu));
    /* 005608a4: mov eax, dword ptr [ebp - 0x134] */ r_eax = R32((u32)(r_ebp+0xfffffeccu));
    /* 005608aa: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 005608ad: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005608af: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005608b5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5608b7u); call_ind(t); }
    /* 005608b7: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005608ba: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005608bb: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005608be: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005608bf: mov eax, dword ptr [ebp - 0x134] */ r_eax = R32((u32)(r_ebp+0xfffffeccu));
    /* 005608c5: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 005608c8: mov edx, dword ptr [ebp - 0x134] */ r_edx = R32((u32)(r_ebp+0xfffffeccu));
    /* 005608ce: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 005608d1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005608d3: mov ecx, eax */ r_ecx = r_eax;
    /* 005608d5: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005608d8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5608dau); call_ind(t); }
    /* 005608da: mov ecx, dword ptr [ebp - 0x134] */ r_ecx = R32((u32)(r_ebp+0xfffffeccu));
    /* 005608e0: mov edx, dword ptr [ecx + 0x7c] */ r_edx = R32((u32)(r_ecx+0x7cu));
    /* 005608e3: mov eax, dword ptr [ebp - 0x134] */ r_eax = R32((u32)(r_ebp+0xfffffeccu));
    /* 005608e9: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 005608ec: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005608ee: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005608f1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5608f3u); call_ind(t); }
    /* 005608f3: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 005608f8: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5608fdu); f_00686d82();
    /* 005608fd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00560900: mov dword ptr [ebp - 0xac], eax */ W32((u32)(r_ebp+0xffffff54u), r_eax);
    /* 00560906: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 0056090d: cmp dword ptr [ebp - 0xac], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff54u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00560914: je 0x560929 */ if (fZ) goto L_00560929;
L_00560916:; BB(0x00560916);
    /* 00560916: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 0056091c: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x560921u); f_005f5bf0();
    /* 00560921: mov dword ptr [ebp - 0x148], eax */ W32((u32)(r_ebp+0xfffffeb8u), r_eax);
    /* 00560927: jmp 0x560933 */ goto L_00560933;
L_00560929:; BB(0x00560929);
    /* 00560929: mov dword ptr [ebp - 0x148], 0 */ W32((u32)(r_ebp+0xfffffeb8u), 0x0u);
L_00560933:; BB(0x00560933);
    /* 00560933: mov ecx, dword ptr [ebp - 0x148] */ r_ecx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 00560939: mov dword ptr [ebp - 0xa8], ecx */ W32((u32)(r_ebp+0xffffff58u), r_ecx);
    /* 0056093f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00560946: mov edx, dword ptr [ebp - 0x134] */ r_edx = R32((u32)(r_ebp+0xfffffeccu));
    /* 0056094c: mov eax, dword ptr [ebp - 0xa8] */ r_eax = R32((u32)(r_ebp+0xffffff58u));
    /* 00560952: mov dword ptr [edx + 0x80], eax */ W32((u32)(r_edx+0x80u), r_eax);
    /* 00560958: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0056095a: push 0x1f4 */ { u32 v = 0x1f4u; r_esp -= 4; W32(r_esp, v); }
    /* 0056095f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00560961: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00560963: mov ecx, dword ptr [ebp - 0x134] */ r_ecx = R32((u32)(r_ebp+0xfffffeccu));
    /* 00560969: call 0x5616c0 */ r_esp -= 4; W32(r_esp, 0x56096eu); f_005616c0();
    /* 0056096e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056096f: mov ecx, dword ptr [ebp - 0x134] */ r_ecx = R32((u32)(r_ebp+0xfffffeccu));
    /* 00560975: mov ecx, dword ptr [ecx + 0x80] */ r_ecx = R32((u32)(r_ecx+0x80u));
    /* 0056097b: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x560980u); f_005eae80();
    /* 00560980: mov edx, dword ptr [ebp - 0x134] */ r_edx = R32((u32)(r_ebp+0xfffffeccu));
    /* 00560986: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 0056098c: mov ecx, dword ptr [ebp - 0x134] */ r_ecx = R32((u32)(r_ebp+0xfffffeccu));
    /* 00560992: mov ecx, dword ptr [ecx + 0x80] */ r_ecx = R32((u32)(r_ecx+0x80u));
    /* 00560998: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0056099a: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0056099d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56099fu); call_ind(t); }
    /* 0056099f: lea ecx, [ebp - 0x80] */ r_ecx = (u32)(r_ebp+0xffffff80u);
    /* 005609a2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005609a3: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 005609a6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005609a7: lea eax, [ebp - 0x84] */ r_eax = (u32)(r_ebp+0xffffff7cu);
    /* 005609ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005609ae: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 005609b1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005609b2: mov ecx, dword ptr [ebp - 0x134] */ r_ecx = R32((u32)(r_ebp+0xfffffeccu));
    /* 005609b8: call 0x5615d0 */ r_esp -= 4; W32(r_esp, 0x5609bdu); f_005615d0();
    /* 005609bd: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 005609c2: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5609c7u); f_00686d82();
    /* 005609c7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005609ca: mov dword ptr [ebp - 0xb4], eax */ W32((u32)(r_ebp+0xffffff4cu), r_eax);
    /* 005609d0: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 005609d7: cmp dword ptr [ebp - 0xb4], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff4cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005609de: je 0x5609f3 */ if (fZ) goto L_005609f3;
L_005609e0:; BB(0x005609e0);
    /* 005609e0: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 005609e6: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x5609ebu); f_005eaaf0();
    /* 005609eb: mov dword ptr [ebp - 0x14c], eax */ W32((u32)(r_ebp+0xfffffeb4u), r_eax);
    /* 005609f1: jmp 0x5609fd */ goto L_005609fd;
L_005609f3:; BB(0x005609f3);
    /* 005609f3: mov dword ptr [ebp - 0x14c], 0 */ W32((u32)(r_ebp+0xfffffeb4u), 0x0u);
L_005609fd:; BB(0x005609fd);
    /* 005609fd: mov edx, dword ptr [ebp - 0x14c] */ r_edx = R32((u32)(r_ebp+0xfffffeb4u));
    /* 00560a03: mov dword ptr [ebp - 0xb0], edx */ W32((u32)(r_ebp+0xffffff50u), r_edx);
    /* 00560a09: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00560a10: mov eax, dword ptr [ebp - 0x134] */ r_eax = R32((u32)(r_ebp+0xfffffeccu));
    /* 00560a16: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 00560a1c: mov dword ptr [eax + 0x88], ecx */ W32((u32)(r_eax+0x88u), r_ecx);
    /* 00560a22: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00560a24: push 0x1f4 */ { u32 v = 0x1f4u; r_esp -= 4; W32(r_esp, v); }
    /* 00560a29: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00560a2b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00560a2d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00560a30: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00560a31: mov eax, dword ptr [ebp - 0x134] */ r_eax = R32((u32)(r_ebp+0xfffffeccu));
    /* 00560a37: mov ecx, dword ptr [eax + 0x88] */ r_ecx = R32((u32)(r_eax+0x88u));
    /* 00560a3d: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x560a42u); f_005eae80();
    /* 00560a42: mov ecx, dword ptr [ebp - 0x134] */ r_ecx = R32((u32)(r_ebp+0xfffffeccu));
    /* 00560a48: mov edx, dword ptr [ecx + 0x88] */ r_edx = R32((u32)(r_ecx+0x88u));
    /* 00560a4e: mov eax, dword ptr [ebp - 0x134] */ r_eax = R32((u32)(r_ebp+0xfffffeccu));
    /* 00560a54: mov ecx, dword ptr [eax + 0x88] */ r_ecx = R32((u32)(r_eax+0x88u));
    /* 00560a5a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00560a5c: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00560a5f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x560a61u); call_ind(t); }
    /* 00560a61: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 00560a68: jmp 0x560a73 */ goto L_00560a73;
L_00560a6a:; BB(0x00560a6a);
    /* 00560a6a: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00560a6d: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00560a70: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
L_00560a73:; BB(0x00560a73);
    /* 00560a73: cmp dword ptr [ebp - 0x38], 0xb */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00560a77: jge 0x560ba7 */ if ((fS==fO)) goto L_00560ba7;
L_00560a7d:; BB(0x00560a7d);
    /* 00560a7d: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00560a7f: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x560a84u); f_00686d82();
    /* 00560a84: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00560a87: mov dword ptr [ebp - 0xbc], eax */ W32((u32)(r_ebp+0xffffff44u), r_eax);
    /* 00560a8d: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 00560a94: cmp dword ptr [ebp - 0xbc], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff44u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00560a9b: je 0x560ab0 */ if (fZ) goto L_00560ab0;
L_00560a9d:; BB(0x00560a9d);
    /* 00560a9d: mov ecx, dword ptr [ebp - 0xbc] */ r_ecx = R32((u32)(r_ebp+0xffffff44u));
    /* 00560aa3: call 0x562ac0 */ r_esp -= 4; W32(r_esp, 0x560aa8u); f_00562ac0();
    /* 00560aa8: mov dword ptr [ebp - 0x150], eax */ W32((u32)(r_ebp+0xfffffeb0u), r_eax);
    /* 00560aae: jmp 0x560aba */ goto L_00560aba;
L_00560ab0:; BB(0x00560ab0);
    /* 00560ab0: mov dword ptr [ebp - 0x150], 0 */ W32((u32)(r_ebp+0xfffffeb0u), 0x0u);
L_00560aba:; BB(0x00560aba);
    /* 00560aba: mov edx, dword ptr [ebp - 0x150] */ r_edx = R32((u32)(r_ebp+0xfffffeb0u));
    /* 00560ac0: mov dword ptr [ebp - 0xb8], edx */ W32((u32)(r_ebp+0xffffff48u), r_edx);
    /* 00560ac6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00560acd: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00560ad0: mov ecx, dword ptr [ebp - 0x134] */ r_ecx = R32((u32)(r_ebp+0xfffffeccu));
    /* 00560ad6: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 00560adc: mov dword ptr [ecx + eax*4 + 0x8c], edx */ W32((u32)(r_ecx+r_eax*4+0x8cu), r_edx);
    /* 00560ae3: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00560ae6: mov ecx, dword ptr [ebp - 0x134] */ r_ecx = R32((u32)(r_ebp+0xfffffeccu));
    /* 00560aec: mov edx, dword ptr [ecx + eax*4 + 0x8c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x8cu));
    /* 00560af3: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00560af6: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 00560af9: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00560afc: mov edx, dword ptr [ebp - 0x134] */ r_edx = R32((u32)(r_ebp+0xfffffeccu));
    /* 00560b02: mov eax, dword ptr [edx + ecx*4 + 0x8c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x8cu));
    /* 00560b09: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00560b0f: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 00560b12: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00560b15: mov eax, dword ptr [ebp - 0x134] */ r_eax = R32((u32)(r_ebp+0xfffffeccu));
    /* 00560b1b: mov ecx, dword ptr [eax + edx*4 + 0x8c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8cu));
    /* 00560b22: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00560b25: mov dword ptr [ecx + 0x14], edx */ W32((u32)(r_ecx+0x14u), r_edx);
    /* 00560b28: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 00560b2b: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00560b2e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00560b30: cmp dword ptr [ebp - 0x38], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00560b33: setle cl */ r_ecx = (r_ecx & 0xffffff00u) | ((((fZ||fS!=fO)) ? 1 : 0) & 0xffu);
    /* 00560b36: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00560b39: mov eax, dword ptr [ebp - 0x134] */ r_eax = R32((u32)(r_ebp+0xfffffeccu));
    /* 00560b3f: mov edx, dword ptr [eax + edx*4 + 0x8c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x8cu));
    /* 00560b46: mov byte ptr [edx + 0x18], cl */ W8((u32)(r_edx+0x18u), (u8)r_ecx);
    /* 00560b49: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00560b4c: mov ecx, dword ptr [ebp - 0x134] */ r_ecx = R32((u32)(r_ebp+0xfffffeccu));
    /* 00560b52: mov ecx, dword ptr [ecx + eax*4 + 0x8c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8cu));
    /* 00560b59: call 0x562bd0 */ r_esp -= 4; W32(r_esp, 0x560b5eu); f_00562bd0();
    /* 00560b5e: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00560b61: mov eax, dword ptr [ebp - 0x134] */ r_eax = R32((u32)(r_ebp+0xfffffeccu));
    /* 00560b67: mov ecx, dword ptr [eax + edx*4 + 0x8c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8cu));
    /* 00560b6e: movzx edx, byte ptr [ecx + 0x18] */ r_edx = (u32)R8((u32)(r_ecx+0x18u));
    /* 00560b72: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00560b74: je 0x560b8d */ if (fZ) goto L_00560b8d;
L_00560b76:; BB(0x00560b76);
    /* 00560b76: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00560b79: mov ecx, dword ptr [ebp - 0x134] */ r_ecx = R32((u32)(r_ebp+0xfffffeccu));
    /* 00560b7f: mov ecx, dword ptr [ecx + eax*4 + 0x8c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8cu));
    /* 00560b86: call 0x563080 */ r_esp -= 4; W32(r_esp, 0x560b8bu); f_00563080();
    /* 00560b8b: jmp 0x560ba2 */ goto L_00560ba2;
L_00560b8d:; BB(0x00560b8d);
    /* 00560b8d: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00560b90: mov eax, dword ptr [ebp - 0x134] */ r_eax = R32((u32)(r_ebp+0xfffffeccu));
    /* 00560b96: mov ecx, dword ptr [eax + edx*4 + 0x8c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8cu));
    /* 00560b9d: call 0x562ff0 */ r_esp -= 4; W32(r_esp, 0x560ba2u); f_00562ff0();
L_00560ba2:; BB(0x00560ba2);
    /* 00560ba2: jmp 0x560a6a */ goto L_00560a6a;
L_00560ba7:; BB(0x00560ba7);
    /* 00560ba7: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 00560bac: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x560bb1u); f_00686d82();
    /* 00560bb1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00560bb4: mov dword ptr [ebp - 0xc4], eax */ W32((u32)(r_ebp+0xffffff3cu), r_eax);
    /* 00560bba: mov dword ptr [ebp - 4], 7 */ W32((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 00560bc1: cmp dword ptr [ebp - 0xc4], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff3cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00560bc8: je 0x560bdd */ if (fZ) goto L_00560bdd;
L_00560bca:; BB(0x00560bca);
    /* 00560bca: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00560bd0: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x560bd5u); f_005f5bf0();
    /* 00560bd5: mov dword ptr [ebp - 0x154], eax */ W32((u32)(r_ebp+0xfffffeacu), r_eax);
    /* 00560bdb: jmp 0x560be7 */ goto L_00560be7;
L_00560bdd:; BB(0x00560bdd);
    /* 00560bdd: mov dword ptr [ebp - 0x154], 0 */ W32((u32)(r_ebp+0xfffffeacu), 0x0u);
L_00560be7:; BB(0x00560be7);
    /* 00560be7: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 00560bed: mov dword ptr [ebp - 0xc0], ecx */ W32((u32)(r_ebp+0xffffff40u), r_ecx);
    /* 00560bf3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00560bfa: mov edx, dword ptr [ebp - 0x134] */ r_edx = R32((u32)(r_ebp+0xfffffeccu));
    /* 00560c00: mov eax, dword ptr [ebp - 0xc0] */ r_eax = R32((u32)(r_ebp+0xffffff40u));
    /* 00560c06: mov dword ptr [edx + 0x84], eax */ W32((u32)(r_edx+0x84u), r_eax);
    /* 00560c0c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00560c0e: push 0x1f4 */ { u32 v = 0x1f4u; r_esp -= 4; W32(r_esp, v); }
    /* 00560c13: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00560c15: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00560c17: push 0x31223c */ { u32 v = 0x31223cu; r_esp -= 4; W32(r_esp, v); }
    /* 00560c1c: mov ecx, dword ptr [ebp - 0x134] */ r_ecx = R32((u32)(r_ebp+0xfffffeccu));
    /* 00560c22: mov ecx, dword ptr [ecx + 0x84] */ r_ecx = R32((u32)(r_ecx+0x84u));
    /* 00560c28: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x560c2du); f_005eae80();
    /* 00560c2d: mov edx, dword ptr [ebp - 0x134] */ r_edx = R32((u32)(r_ebp+0xfffffeccu));
    /* 00560c33: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 00560c39: mov ecx, dword ptr [ebp - 0x134] */ r_ecx = R32((u32)(r_ebp+0xfffffeccu));
    /* 00560c3f: mov ecx, dword ptr [ecx + 0x84] */ r_ecx = R32((u32)(r_ecx+0x84u));
    /* 00560c45: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00560c47: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00560c4a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x560c4cu); call_ind(t); }
    /* 00560c4c: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 00560c53: jmp 0x560c5e */ goto L_00560c5e;
L_00560c55:; BB(0x00560c55);
    /* 00560c55: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00560c58: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00560c5b: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
L_00560c5e:; BB(0x00560c5e);
    /* 00560c5e: cmp dword ptr [ebp - 0x38], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00560c62: jge 0x560d9c */ if ((fS==fO)) goto L_00560d9c;
L_00560c68:; BB(0x00560c68);
    /* 00560c68: push 0x1e4 */ { u32 v = 0x1e4u; r_esp -= 4; W32(r_esp, v); }
    /* 00560c6d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x560c72u); f_00686d82();
    /* 00560c72: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00560c75: mov dword ptr [ebp - 0xcc], eax */ W32((u32)(r_ebp+0xffffff34u), r_eax);
    /* 00560c7b: mov dword ptr [ebp - 4], 8 */ W32((u32)(r_ebp+0xfffffffcu), 0x8u);
    /* 00560c82: cmp dword ptr [ebp - 0xcc], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00560c89: je 0x560c9e */ if (fZ) goto L_00560c9e;
L_00560c8b:; BB(0x00560c8b);
    /* 00560c8b: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 00560c91: call 0x5630c0 */ r_esp -= 4; W32(r_esp, 0x560c96u); f_005630c0();
    /* 00560c96: mov dword ptr [ebp - 0x158], eax */ W32((u32)(r_ebp+0xfffffea8u), r_eax);
    /* 00560c9c: jmp 0x560ca8 */ goto L_00560ca8;
L_00560c9e:; BB(0x00560c9e);
    /* 00560c9e: mov dword ptr [ebp - 0x158], 0 */ W32((u32)(r_ebp+0xfffffea8u), 0x0u);
L_00560ca8:; BB(0x00560ca8);
    /* 00560ca8: mov edx, dword ptr [ebp - 0x158] */ r_edx = R32((u32)(r_ebp+0xfffffea8u));
    /* 00560cae: mov dword ptr [ebp - 0xc8], edx */ W32((u32)(r_ebp+0xffffff38u), r_edx);
    /* 00560cb4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00560cbb: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00560cbe: mov ecx, dword ptr [ebp - 0x134] */ r_ecx = R32((u32)(r_ebp+0xfffffeccu));
    /* 00560cc4: mov edx, dword ptr [ebp - 0xc8] */ r_edx = R32((u32)(r_ebp+0xffffff38u));
    /* 00560cca: mov dword ptr [ecx + eax*4 + 0x60], edx */ W32((u32)(r_ecx+r_eax*4+0x60u), r_edx);
    /* 00560cce: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00560cd0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00560cd2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00560cd4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00560cd6: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00560cd9: mov ecx, dword ptr [ebp + eax*4 - 0x64] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffff9cu));
    /* 00560cdd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00560cde: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00560ce1: mov eax, dword ptr [ebp - 0x134] */ r_eax = R32((u32)(r_ebp+0xfffffeccu));
    /* 00560ce7: mov ecx, dword ptr [eax + edx*4 + 0x60] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x60u));
    /* 00560ceb: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x560cf0u); f_005eae80();
    /* 00560cf0: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00560cf3: mov edx, dword ptr [ebp - 0x134] */ r_edx = R32((u32)(r_ebp+0xfffffeccu));
    /* 00560cf9: mov eax, dword ptr [edx + ecx*4 + 0x60] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x60u));
    /* 00560cfd: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00560d00: mov edx, dword ptr [ebp - 0x134] */ r_edx = R32((u32)(r_ebp+0xfffffeccu));
    /* 00560d06: mov ecx, dword ptr [edx + ecx*4 + 0x60] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x60u));
    /* 00560d0a: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00560d0c: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 00560d0f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x560d11u); call_ind(t); }
    /* 00560d11: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00560d14: mov ecx, dword ptr [ebp - 0x134] */ r_ecx = R32((u32)(r_ebp+0xfffffeccu));
    /* 00560d1a: mov edx, dword ptr [ecx + eax*4 + 0x60] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x60u));
    /* 00560d1e: mov dword ptr [ebp - 0x130], edx */ W32((u32)(r_ebp+0xfffffed0u), r_edx);
    /* 00560d24: mov eax, dword ptr [ebp - 0x130] */ r_eax = R32((u32)(r_ebp+0xfffffed0u));
    /* 00560d2a: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00560d2d: mov dword ptr [eax + 0x1dc], ecx */ W32((u32)(r_eax+0x1dcu), r_ecx);
    /* 00560d33: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00560d36: mov eax, dword ptr [ebp - 0x134] */ r_eax = R32((u32)(r_ebp+0xfffffeccu));
    /* 00560d3c: mov ecx, dword ptr [eax + edx*4 + 0x60] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x60u));
    /* 00560d40: call 0x602eb0 */ r_esp -= 4; W32(r_esp, 0x560d45u); f_00602eb0();
    /* 00560d45: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00560d47: cmp dword ptr [ebp - 0x38], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00560d4b: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00560d4e: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00560d51: and ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00560d54: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00560d55: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00560d58: mov eax, dword ptr [ebp - 0x134] */ r_eax = R32((u32)(r_ebp+0xfffffeccu));
    /* 00560d5e: mov ecx, dword ptr [eax + edx*4 + 0x60] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x60u));
    /* 00560d62: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00560d65: mov eax, dword ptr [ebp - 0x134] */ r_eax = R32((u32)(r_ebp+0xfffffeccu));
    /* 00560d6b: mov edx, dword ptr [eax + edx*4 + 0x60] */ r_edx = R32((u32)(r_eax+r_edx*4+0x60u));
    /* 00560d6f: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00560d71: mov ecx, edx */ r_ecx = r_edx;
    /* 00560d73: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 00560d79: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x560d7bu); call_ind(t); }
    /* 00560d7b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00560d7d: cmp dword ptr [ebp - 0x38], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00560d81: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00560d84: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00560d87: mov edx, dword ptr [ebp - 0x134] */ r_edx = R32((u32)(r_ebp+0xfffffeccu));
    /* 00560d8d: mov ecx, dword ptr [edx + ecx*4 + 0x60] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x60u));
    /* 00560d91: mov byte ptr [ecx + 0x1e0], al */ W8((u32)(r_ecx+0x1e0u), (u8)r_eax);
    /* 00560d97: jmp 0x560c55 */ goto L_00560c55;
L_00560d9c:; BB(0x00560d9c);
    /* 00560d9c: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 00560da1: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x560da6u); f_00686d82();
    /* 00560da6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00560da9: mov dword ptr [ebp - 0xd4], eax */ W32((u32)(r_ebp+0xffffff2cu), r_eax);
    /* 00560daf: mov dword ptr [ebp - 4], 9 */ W32((u32)(r_ebp+0xfffffffcu), 0x9u);
    /* 00560db6: cmp dword ptr [ebp - 0xd4], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff2cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00560dbd: je 0x560dd2 */ if (fZ) goto L_00560dd2;
L_00560dbf:; BB(0x00560dbf);
    /* 00560dbf: mov ecx, dword ptr [ebp - 0xd4] */ r_ecx = R32((u32)(r_ebp+0xffffff2cu));
    /* 00560dc5: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x560dcau); f_005eaaf0();
    /* 00560dca: mov dword ptr [ebp - 0x15c], eax */ W32((u32)(r_ebp+0xfffffea4u), r_eax);
    /* 00560dd0: jmp 0x560ddc */ goto L_00560ddc;
L_00560dd2:; BB(0x00560dd2);
    /* 00560dd2: mov dword ptr [ebp - 0x15c], 0 */ W32((u32)(r_ebp+0xfffffea4u), 0x0u);
L_00560ddc:; BB(0x00560ddc);
    /* 00560ddc: mov edx, dword ptr [ebp - 0x15c] */ r_edx = R32((u32)(r_ebp+0xfffffea4u));
    /* 00560de2: mov dword ptr [ebp - 0xd0], edx */ W32((u32)(r_ebp+0xffffff30u), r_edx);
    /* 00560de8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00560def: mov eax, dword ptr [ebp - 0x134] */ r_eax = R32((u32)(r_ebp+0xfffffeccu));
    /* 00560df5: mov ecx, dword ptr [ebp - 0xd0] */ r_ecx = R32((u32)(r_ebp+0xffffff30u));
    /* 00560dfb: mov dword ptr [eax + 0xc8], ecx */ W32((u32)(r_eax+0xc8u), r_ecx);
    /* 00560e01: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00560e03: push 0x258 */ { u32 v = 0x258u; r_esp -= 4; W32(r_esp, v); }
    /* 00560e08: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00560e0a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00560e0c: push 0x312259 */ { u32 v = 0x312259u; r_esp -= 4; W32(r_esp, v); }
    /* 00560e11: mov edx, dword ptr [ebp - 0x134] */ r_edx = R32((u32)(r_ebp+0xfffffeccu));
    /* 00560e17: mov ecx, dword ptr [edx + 0xc8] */ r_ecx = R32((u32)(r_edx+0xc8u));
    /* 00560e1d: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x560e22u); f_005eae80();
    /* 00560e22: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00560e24: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x560e29u); f_00686d82();
    /* 00560e29: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00560e2c: mov dword ptr [ebp - 0xdc], eax */ W32((u32)(r_ebp+0xffffff24u), r_eax);
    /* 00560e32: mov dword ptr [ebp - 4], 0xa */ W32((u32)(r_ebp+0xfffffffcu), 0xau);
    /* 00560e39: cmp dword ptr [ebp - 0xdc], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00560e40: je 0x560e55 */ if (fZ) goto L_00560e55;
L_00560e42:; BB(0x00560e42);
    /* 00560e42: mov ecx, dword ptr [ebp - 0xdc] */ r_ecx = R32((u32)(r_ebp+0xffffff24u));
    /* 00560e48: call 0x5655d0 */ r_esp -= 4; W32(r_esp, 0x560e4du); f_005655d0();
    /* 00560e4d: mov dword ptr [ebp - 0x160], eax */ W32((u32)(r_ebp+0xfffffea0u), r_eax);
    /* 00560e53: jmp 0x560e5f */ goto L_00560e5f;
L_00560e55:; BB(0x00560e55);
    /* 00560e55: mov dword ptr [ebp - 0x160], 0 */ W32((u32)(r_ebp+0xfffffea0u), 0x0u);
L_00560e5f:; BB(0x00560e5f);
    /* 00560e5f: mov eax, dword ptr [ebp - 0x160] */ r_eax = R32((u32)(r_ebp+0xfffffea0u));
    /* 00560e65: mov dword ptr [ebp - 0xd8], eax */ W32((u32)(r_ebp+0xffffff28u), r_eax);
    /* 00560e6b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00560e72: mov ecx, dword ptr [ebp - 0x134] */ r_ecx = R32((u32)(r_ebp+0xfffffeccu));
    /* 00560e78: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 00560e7e: mov dword ptr [ecx + 0xcc], edx */ W32((u32)(r_ecx+0xccu), r_edx);
    /* 00560e84: mov eax, dword ptr [ebp - 0x134] */ r_eax = R32((u32)(r_ebp+0xfffffeccu));
    /* 00560e8a: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 00560e90: call 0x5656f0 */ r_esp -= 4; W32(r_esp, 0x560e95u); f_005656f0();
    /* 00560e95: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00560e97: mov ecx, dword ptr [ebp - 0x134] */ r_ecx = R32((u32)(r_ebp+0xfffffeccu));
    /* 00560e9d: mov ecx, dword ptr [ecx + 0xcc] */ r_ecx = R32((u32)(r_ecx+0xccu));
    /* 00560ea3: call 0x565a50 */ r_esp -= 4; W32(r_esp, 0x560ea8u); f_00565a50();
    /* 00560ea8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00560eaa: mov edx, dword ptr [ebp - 0x134] */ r_edx = R32((u32)(r_ebp+0xfffffeccu));
    /* 00560eb0: mov ecx, dword ptr [edx + 0xcc] */ r_ecx = R32((u32)(r_edx+0xccu));
    /* 00560eb6: call 0x5664c0 */ r_esp -= 4; W32(r_esp, 0x560ebbu); f_005664c0();
    /* 00560ebb: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 00560ec0: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x560ec5u); f_00686d82();
    /* 00560ec5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00560ec8: mov dword ptr [ebp - 0xe4], eax */ W32((u32)(r_ebp+0xffffff1cu), r_eax);
    /* 00560ece: mov dword ptr [ebp - 4], 0xb */ W32((u32)(r_ebp+0xfffffffcu), 0xbu);
    /* 00560ed5: cmp dword ptr [ebp - 0xe4], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00560edc: je 0x560ef1 */ if (fZ) goto L_00560ef1;
L_00560ede:; BB(0x00560ede);
    /* 00560ede: mov ecx, dword ptr [ebp - 0xe4] */ r_ecx = R32((u32)(r_ebp+0xffffff1cu));
    /* 00560ee4: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x560ee9u); f_005eaaf0();
    /* 00560ee9: mov dword ptr [ebp - 0x164], eax */ W32((u32)(r_ebp+0xfffffe9cu), r_eax);
    /* 00560eef: jmp 0x560efb */ goto L_00560efb;
L_00560ef1:; BB(0x00560ef1);
    /* 00560ef1: mov dword ptr [ebp - 0x164], 0 */ W32((u32)(r_ebp+0xfffffe9cu), 0x0u);
L_00560efb:; BB(0x00560efb);
    /* 00560efb: mov eax, dword ptr [ebp - 0x164] */ r_eax = R32((u32)(r_ebp+0xfffffe9cu));
    /* 00560f01: mov dword ptr [ebp - 0xe0], eax */ W32((u32)(r_ebp+0xffffff20u), r_eax);
    /* 00560f07: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00560f0e: mov ecx, dword ptr [ebp - 0x134] */ r_ecx = R32((u32)(r_ebp+0xfffffeccu));
    /* 00560f14: mov edx, dword ptr [ebp - 0xe0] */ r_edx = R32((u32)(r_ebp+0xffffff20u));
    /* 00560f1a: mov dword ptr [ecx + 0xd0], edx */ W32((u32)(r_ecx+0xd0u), r_edx);
    /* 00560f20: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00560f22: push 0x258 */ { u32 v = 0x258u; r_esp -= 4; W32(r_esp, v); }
    /* 00560f27: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00560f29: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00560f2b: push 0x312258 */ { u32 v = 0x312258u; r_esp -= 4; W32(r_esp, v); }
    /* 00560f30: mov eax, dword ptr [ebp - 0x134] */ r_eax = R32((u32)(r_ebp+0xfffffeccu));
    /* 00560f36: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 00560f3c: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x560f41u); f_005eae80();
    /* 00560f41: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00560f43: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x560f48u); f_00686d82();
    /* 00560f48: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00560f4b: mov dword ptr [ebp - 0xec], eax */ W32((u32)(r_ebp+0xffffff14u), r_eax);
    /* 00560f51: mov dword ptr [ebp - 4], 0xc */ W32((u32)(r_ebp+0xfffffffcu), 0xcu);
    /* 00560f58: cmp dword ptr [ebp - 0xec], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00560f5f: je 0x560f74 */ if (fZ) goto L_00560f74;
L_00560f61:; BB(0x00560f61);
    /* 00560f61: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 00560f67: call 0x5655d0 */ r_esp -= 4; W32(r_esp, 0x560f6cu); f_005655d0();
    /* 00560f6c: mov dword ptr [ebp - 0x168], eax */ W32((u32)(r_ebp+0xfffffe98u), r_eax);
    /* 00560f72: jmp 0x560f7e */ goto L_00560f7e;
L_00560f74:; BB(0x00560f74);
    /* 00560f74: mov dword ptr [ebp - 0x168], 0 */ W32((u32)(r_ebp+0xfffffe98u), 0x0u);
L_00560f7e:; BB(0x00560f7e);
    /* 00560f7e: mov ecx, dword ptr [ebp - 0x168] */ r_ecx = R32((u32)(r_ebp+0xfffffe98u));
    /* 00560f84: mov dword ptr [ebp - 0xe8], ecx */ W32((u32)(r_ebp+0xffffff18u), r_ecx);
    /* 00560f8a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00560f91: mov edx, dword ptr [ebp - 0x134] */ r_edx = R32((u32)(r_ebp+0xfffffeccu));
    /* 00560f97: mov eax, dword ptr [ebp - 0xe8] */ r_eax = R32((u32)(r_ebp+0xffffff18u));
    /* 00560f9d: mov dword ptr [edx + 0xd4], eax */ W32((u32)(r_edx+0xd4u), r_eax);
    /* 00560fa3: mov ecx, dword ptr [ebp - 0x134] */ r_ecx = R32((u32)(r_ebp+0xfffffeccu));
    /* 00560fa9: mov ecx, dword ptr [ecx + 0xd4] */ r_ecx = R32((u32)(r_ecx+0xd4u));
    /* 00560faf: call 0x5656f0 */ r_esp -= 4; W32(r_esp, 0x560fb4u); f_005656f0();
    /* 00560fb4: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00560fb6: mov edx, dword ptr [ebp - 0x134] */ r_edx = R32((u32)(r_ebp+0xfffffeccu));
    /* 00560fbc: mov ecx, dword ptr [edx + 0xd4] */ r_ecx = R32((u32)(r_edx+0xd4u));
    /* 00560fc2: call 0x565a50 */ r_esp -= 4; W32(r_esp, 0x560fc7u); f_00565a50();
    /* 00560fc7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00560fc9: mov eax, dword ptr [ebp - 0x134] */ r_eax = R32((u32)(r_ebp+0xfffffeccu));
    /* 00560fcf: mov ecx, dword ptr [eax + 0xd4] */ r_ecx = R32((u32)(r_eax+0xd4u));
    /* 00560fd5: call 0x5664c0 */ r_esp -= 4; W32(r_esp, 0x560fdau); f_005664c0();
    /* 00560fda: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 00560fdf: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x560fe4u); f_00686d82();
    /* 00560fe4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00560fe7: mov dword ptr [ebp - 0xf4], eax */ W32((u32)(r_ebp+0xffffff0cu), r_eax);
    /* 00560fed: mov dword ptr [ebp - 4], 0xd */ W32((u32)(r_ebp+0xfffffffcu), 0xdu);
    /* 00560ff4: cmp dword ptr [ebp - 0xf4], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff0cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00560ffb: je 0x561010 */ if (fZ) goto L_00561010;
L_00560ffd:; BB(0x00560ffd);
    /* 00560ffd: mov ecx, dword ptr [ebp - 0xf4] */ r_ecx = R32((u32)(r_ebp+0xffffff0cu));
    /* 00561003: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x561008u); f_005eaaf0();
    /* 00561008: mov dword ptr [ebp - 0x16c], eax */ W32((u32)(r_ebp+0xfffffe94u), r_eax);
    /* 0056100e: jmp 0x56101a */ goto L_0056101a;
L_00561010:; BB(0x00561010);
    /* 00561010: mov dword ptr [ebp - 0x16c], 0 */ W32((u32)(r_ebp+0xfffffe94u), 0x0u);
L_0056101a:; BB(0x0056101a);
    /* 0056101a: mov ecx, dword ptr [ebp - 0x16c] */ r_ecx = R32((u32)(r_ebp+0xfffffe94u));
    /* 00561020: mov dword ptr [ebp - 0xf0], ecx */ W32((u32)(r_ebp+0xffffff10u), r_ecx);
    /* 00561026: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056102d: mov edx, dword ptr [ebp - 0x134] */ r_edx = R32((u32)(r_ebp+0xfffffeccu));
    /* 00561033: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 00561039: mov dword ptr [edx + 0xd8], eax */ W32((u32)(r_edx+0xd8u), r_eax);
    /* 0056103f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00561041: push 0x258 */ { u32 v = 0x258u; r_esp -= 4; W32(r_esp, v); }
    /* 00561046: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00561048: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056104a: push 0x31225a */ { u32 v = 0x31225au; r_esp -= 4; W32(r_esp, v); }
    /* 0056104f: mov ecx, dword ptr [ebp - 0x134] */ r_ecx = R32((u32)(r_ebp+0xfffffeccu));
    /* 00561055: mov ecx, dword ptr [ecx + 0xd8] */ r_ecx = R32((u32)(r_ecx+0xd8u));
    /* 0056105b: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x561060u); f_005eae80();
    /* 00561060: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00561062: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x561067u); f_00686d82();
    /* 00561067: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056106a: mov dword ptr [ebp - 0xfc], eax */ W32((u32)(r_ebp+0xffffff04u), r_eax);
    /* 00561070: mov dword ptr [ebp - 4], 0xe */ W32((u32)(r_ebp+0xfffffffcu), 0xeu);
    /* 00561077: cmp dword ptr [ebp - 0xfc], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff04u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056107e: je 0x561093 */ if (fZ) goto L_00561093;
L_00561080:; BB(0x00561080);
    /* 00561080: mov ecx, dword ptr [ebp - 0xfc] */ r_ecx = R32((u32)(r_ebp+0xffffff04u));
    /* 00561086: call 0x5655d0 */ r_esp -= 4; W32(r_esp, 0x56108bu); f_005655d0();
    /* 0056108b: mov dword ptr [ebp - 0x170], eax */ W32((u32)(r_ebp+0xfffffe90u), r_eax);
    /* 00561091: jmp 0x56109d */ goto L_0056109d;
L_00561093:; BB(0x00561093);
    /* 00561093: mov dword ptr [ebp - 0x170], 0 */ W32((u32)(r_ebp+0xfffffe90u), 0x0u);
L_0056109d:; BB(0x0056109d);
    /* 0056109d: mov edx, dword ptr [ebp - 0x170] */ r_edx = R32((u32)(r_ebp+0xfffffe90u));
    /* 005610a3: mov dword ptr [ebp - 0xf8], edx */ W32((u32)(r_ebp+0xffffff08u), r_edx);
    /* 005610a9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005610b0: mov eax, dword ptr [ebp - 0x134] */ r_eax = R32((u32)(r_ebp+0xfffffeccu));
    /* 005610b6: mov ecx, dword ptr [ebp - 0xf8] */ r_ecx = R32((u32)(r_ebp+0xffffff08u));
    /* 005610bc: mov dword ptr [eax + 0xdc], ecx */ W32((u32)(r_eax+0xdcu), r_ecx);
    /* 005610c2: mov edx, dword ptr [ebp - 0x134] */ r_edx = R32((u32)(r_ebp+0xfffffeccu));
    /* 005610c8: mov ecx, dword ptr [edx + 0xdc] */ r_ecx = R32((u32)(r_edx+0xdcu));
    /* 005610ce: call 0x5656f0 */ r_esp -= 4; W32(r_esp, 0x5610d3u); f_005656f0();
    /* 005610d3: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005610d5: mov eax, dword ptr [ebp - 0x134] */ r_eax = R32((u32)(r_ebp+0xfffffeccu));
    /* 005610db: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 005610e1: call 0x565a50 */ r_esp -= 4; W32(r_esp, 0x5610e6u); f_00565a50();
    /* 005610e6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005610e8: mov ecx, dword ptr [ebp - 0x134] */ r_ecx = R32((u32)(r_ebp+0xfffffeccu));
    /* 005610ee: mov ecx, dword ptr [ecx + 0xdc] */ r_ecx = R32((u32)(r_ecx+0xdcu));
    /* 005610f4: call 0x5664c0 */ r_esp -= 4; W32(r_esp, 0x5610f9u); f_005664c0();
    /* 005610f9: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 00561100: jmp 0x56110b */ goto L_0056110b;
L_00561102:; BB(0x00561102);
    /* 00561102: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00561105: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00561108: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
L_0056110b:; BB(0x0056110b);
    /* 0056110b: cmp dword ptr [ebp - 0x38], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056110f: jge 0x5611ec */ if ((fS==fO)) goto L_005611ec;
L_00561115:; BB(0x00561115);
    /* 00561115: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056111a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x56111fu); f_00686d82();
    /* 0056111f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00561122: mov dword ptr [ebp - 0x104], eax */ W32((u32)(r_ebp+0xfffffefcu), r_eax);
    /* 00561128: mov dword ptr [ebp - 4], 0xf */ W32((u32)(r_ebp+0xfffffffcu), 0xfu);
    /* 0056112f: cmp dword ptr [ebp - 0x104], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffefcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00561136: je 0x56114b */ if (fZ) goto L_0056114b;
L_00561138:; BB(0x00561138);
    /* 00561138: mov ecx, dword ptr [ebp - 0x104] */ r_ecx = R32((u32)(r_ebp+0xfffffefcu));
    /* 0056113e: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x561143u); f_005ec5a0();
    /* 00561143: mov dword ptr [ebp - 0x174], eax */ W32((u32)(r_ebp+0xfffffe8cu), r_eax);
    /* 00561149: jmp 0x561155 */ goto L_00561155;
L_0056114b:; BB(0x0056114b);
    /* 0056114b: mov dword ptr [ebp - 0x174], 0 */ W32((u32)(r_ebp+0xfffffe8cu), 0x0u);
L_00561155:; BB(0x00561155);
    /* 00561155: mov eax, dword ptr [ebp - 0x174] */ r_eax = R32((u32)(r_ebp+0xfffffe8cu));
    /* 0056115b: mov dword ptr [ebp - 0x100], eax */ W32((u32)(r_ebp+0xffffff00u), r_eax);
    /* 00561161: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00561168: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0056116b: mov edx, dword ptr [ebp - 0x134] */ r_edx = R32((u32)(r_ebp+0xfffffeccu));
    /* 00561171: mov eax, dword ptr [ebp - 0x100] */ r_eax = R32((u32)(r_ebp+0xffffff00u));
    /* 00561177: mov dword ptr [edx + ecx*4 + 0xbc], eax */ W32((u32)(r_edx+r_ecx*4+0xbcu), r_eax);
    /* 0056117e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00561180: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00561182: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00561184: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00561187: mov edx, dword ptr [ebp + ecx*8 - 0x78] */ r_edx = R32((u32)(r_ebp+r_ecx*8+0xffffff88u));
    /* 0056118b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056118c: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0056118f: mov ecx, dword ptr [ebp + eax*8 - 0x7c] */ r_ecx = R32((u32)(r_ebp+r_eax*8+0xffffff84u));
    /* 00561193: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00561194: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00561196: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00561198: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 0056119a: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0056119d: mov eax, dword ptr [ebp + edx*4 - 0x4c] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffb4u));
    /* 005611a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005611a2: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5611a7u); f_00630f40();
    /* 005611a7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005611aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005611ab: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005611ae: mov edx, dword ptr [ebp - 0x134] */ r_edx = R32((u32)(r_ebp+0xfffffeccu));
    /* 005611b4: mov ecx, dword ptr [edx + ecx*4 + 0xbc] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xbcu));
    /* 005611bb: call 0x5ec8f0 */ r_esp -= 4; W32(r_esp, 0x5611c0u); f_005ec8f0();
    /* 005611c0: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005611c3: mov ecx, dword ptr [ebp - 0x134] */ r_ecx = R32((u32)(r_ebp+0xfffffeccu));
    /* 005611c9: mov edx, dword ptr [ecx + eax*4 + 0xbc] */ r_edx = R32((u32)(r_ecx+r_eax*4+0xbcu));
    /* 005611d0: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005611d3: mov ecx, dword ptr [ebp - 0x134] */ r_ecx = R32((u32)(r_ebp+0xfffffeccu));
    /* 005611d9: mov ecx, dword ptr [ecx + eax*4 + 0xbc] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xbcu));
    /* 005611e0: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005611e2: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005611e5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5611e7u); call_ind(t); }
    /* 005611e7: jmp 0x561102 */ goto L_00561102;
L_005611ec:; BB(0x005611ec);
    /* 005611ec: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005611ee: mov ecx, dword ptr [0x79343c] */ r_ecx = R32((u32)(0x79343cu));
    /* 005611f4: call 0x5d0aa0 */ r_esp -= 4; W32(r_esp, 0x5611f9u); f_005d0aa0();
    /* 005611f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005611fa: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5611ffu); f_0064c8a0();
    /* 005611ff: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00561202: mov dword ptr [ebp - 0x10c], eax */ W32((u32)(r_ebp+0xfffffef4u), r_eax);
    /* 00561208: mov dword ptr [ebp - 0x108], edx */ W32((u32)(r_ebp+0xfffffef8u), r_edx);
    /* 0056120e: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 00561214: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 00561217: mov edx, dword ptr [ebp - 0x108] */ r_edx = R32((u32)(r_ebp+0xfffffef8u));
    /* 0056121d: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 00561220: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00561222: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00561224: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00561226: lea eax, [ebp - 0x34] */ r_eax = (u32)(r_ebp+0xffffffccu);
    /* 00561229: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056122a: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0056122d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056122e: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00561231: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00561232: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x561237u); f_0064c8d0();
    /* 00561237: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056123a: lea eax, [ebp - 0x34] */ r_eax = (u32)(r_ebp+0xffffffccu);
    /* 0056123d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056123e: mov ecx, dword ptr [ebp - 0x134] */ r_ecx = R32((u32)(r_ebp+0xfffffeccu));
    /* 00561244: mov edx, dword ptr [ecx + 0xc4] */ r_edx = R32((u32)(r_ecx+0xc4u));
    /* 0056124a: mov eax, dword ptr [ebp - 0x134] */ r_eax = R32((u32)(r_ebp+0xfffffeccu));
    /* 00561250: mov ecx, dword ptr [eax + 0xc4] */ r_ecx = R32((u32)(r_eax+0xc4u));
    /* 00561256: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00561258: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0056125e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x561260u); call_ind(t); }
    /* 00561260: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 00561267: jmp 0x561272 */ goto L_00561272;
L_00561269:; BB(0x00561269);
    /* 00561269: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0056126c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0056126f: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
L_00561272:; BB(0x00561272);
    /* 00561272: cmp dword ptr [ebp - 0x38], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00561276: jge 0x561476 */ if ((fS==fO)) goto L_00561476;
L_0056127c:; BB(0x0056127c);
    /* 0056127c: push 0x1a4 */ { u32 v = 0x1a4u; r_esp -= 4; W32(r_esp, v); }
    /* 00561281: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x561286u); f_00686d82();
    /* 00561286: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00561289: mov dword ptr [ebp - 0x114], eax */ W32((u32)(r_ebp+0xfffffeecu), r_eax);
    /* 0056128f: mov dword ptr [ebp - 4], 0x10 */ W32((u32)(r_ebp+0xfffffffcu), 0x10u);
    /* 00561296: cmp dword ptr [ebp - 0x114], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffeecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056129d: je 0x5612b2 */ if (fZ) goto L_005612b2;
L_0056129f:; BB(0x0056129f);
    /* 0056129f: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 005612a5: call 0x564f10 */ r_esp -= 4; W32(r_esp, 0x5612aau); f_00564f10();
    /* 005612aa: mov dword ptr [ebp - 0x178], eax */ W32((u32)(r_ebp+0xfffffe88u), r_eax);
    /* 005612b0: jmp 0x5612bc */ goto L_005612bc;
L_005612b2:; BB(0x005612b2);
    /* 005612b2: mov dword ptr [ebp - 0x178], 0 */ W32((u32)(r_ebp+0xfffffe88u), 0x0u);
L_005612bc:; BB(0x005612bc);
    /* 005612bc: mov edx, dword ptr [ebp - 0x178] */ r_edx = R32((u32)(r_ebp+0xfffffe88u));
    /* 005612c2: mov dword ptr [ebp - 0x110], edx */ W32((u32)(r_ebp+0xfffffef0u), r_edx);
    /* 005612c8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005612cf: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005612d2: mov ecx, dword ptr [ebp - 0x134] */ r_ecx = R32((u32)(r_ebp+0xfffffeccu));
    /* 005612d8: mov edx, dword ptr [ebp - 0x110] */ r_edx = R32((u32)(r_ebp+0xfffffef0u));
    /* 005612de: mov dword ptr [ecx + eax*4 + 8], edx */ W32((u32)(r_ecx+r_eax*4+0x8u), r_edx);
    /* 005612e2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005612e4: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005612e6: push 0x102 */ { u32 v = 0x102u; r_esp -= 4; W32(r_esp, v); }
    /* 005612eb: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005612ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005612ef: mov ecx, dword ptr [ebp - 0x134] */ r_ecx = R32((u32)(r_ebp+0xfffffeccu));
    /* 005612f5: call 0x560340 */ r_esp -= 4; W32(r_esp, 0x5612fau); f_00560340();
    /* 005612fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005612fb: push 0x312245 */ { u32 v = 0x312245u; r_esp -= 4; W32(r_esp, v); }
    /* 00561300: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00561303: mov edx, dword ptr [ebp - 0x134] */ r_edx = R32((u32)(r_ebp+0xfffffeccu));
    /* 00561309: mov ecx, dword ptr [edx + ecx*4 + 8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 0056130d: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x561312u); f_005eae80();
    /* 00561312: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00561315: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00561316: mov ecx, dword ptr [ebp - 0x134] */ r_ecx = R32((u32)(r_ebp+0xfffffeccu));
    /* 0056131c: call 0x560340 */ r_esp -= 4; W32(r_esp, 0x561321u); f_00560340();
    /* 00561321: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00561324: mov dword ptr [ebp - 0x18], 0x102 */ W32((u32)(r_ebp+0xffffffe8u), 0x102u);
    /* 0056132b: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 00561330: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x561335u); f_00686d82();
    /* 00561335: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00561338: mov dword ptr [ebp - 0x11c], eax */ W32((u32)(r_ebp+0xfffffee4u), r_eax);
    /* 0056133e: mov dword ptr [ebp - 4], 0x11 */ W32((u32)(r_ebp+0xfffffffcu), 0x11u);
    /* 00561345: cmp dword ptr [ebp - 0x11c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffee4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056134c: je 0x561361 */ if (fZ) goto L_00561361;
L_0056134e:; BB(0x0056134e);
    /* 0056134e: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 00561354: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x561359u); f_005f5bf0();
    /* 00561359: mov dword ptr [ebp - 0x17c], eax */ W32((u32)(r_ebp+0xfffffe84u), r_eax);
    /* 0056135f: jmp 0x56136b */ goto L_0056136b;
L_00561361:; BB(0x00561361);
    /* 00561361: mov dword ptr [ebp - 0x17c], 0 */ W32((u32)(r_ebp+0xfffffe84u), 0x0u);
L_0056136b:; BB(0x0056136b);
    /* 0056136b: mov ecx, dword ptr [ebp - 0x17c] */ r_ecx = R32((u32)(r_ebp+0xfffffe84u));
    /* 00561371: mov dword ptr [ebp - 0x118], ecx */ W32((u32)(r_ebp+0xfffffee8u), r_ecx);
    /* 00561377: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056137e: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00561381: mov eax, dword ptr [ebp - 0x134] */ r_eax = R32((u32)(r_ebp+0xfffffeccu));
    /* 00561387: mov ecx, dword ptr [ebp - 0x118] */ r_ecx = R32((u32)(r_ebp+0xfffffee8u));
    /* 0056138d: mov dword ptr [eax + edx*4 + 0x1c], ecx */ W32((u32)(r_eax+r_edx*4+0x1cu), r_ecx);
    /* 00561391: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00561393: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00561395: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00561398: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00561399: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0056139c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056139d: push 0x312244 */ { u32 v = 0x312244u; r_esp -= 4; W32(r_esp, v); }
    /* 005613a2: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005613a5: mov edx, dword ptr [ebp - 0x134] */ r_edx = R32((u32)(r_ebp+0xfffffeccu));
    /* 005613ab: mov ecx, dword ptr [edx + ecx*4 + 0x1c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x1cu));
    /* 005613af: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x5613b4u); f_005eae80();
    /* 005613b4: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005613b7: mov ecx, dword ptr [ebp - 0x134] */ r_ecx = R32((u32)(r_ebp+0xfffffeccu));
    /* 005613bd: mov edx, dword ptr [ecx + eax*4 + 0x1c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x1cu));
    /* 005613c1: mov dword ptr [edx + 0x178], 0 */ W32((u32)(r_edx+0x178u), 0x0u);
    /* 005613cb: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 005613d0: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5613d5u); f_00686d82();
    /* 005613d5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005613d8: mov dword ptr [ebp - 0x124], eax */ W32((u32)(r_ebp+0xfffffedcu), r_eax);
    /* 005613de: mov dword ptr [ebp - 4], 0x12 */ W32((u32)(r_ebp+0xfffffffcu), 0x12u);
    /* 005613e5: cmp dword ptr [ebp - 0x124], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffedcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005613ec: je 0x561401 */ if (fZ) goto L_00561401;
L_005613ee:; BB(0x005613ee);
    /* 005613ee: mov ecx, dword ptr [ebp - 0x124] */ r_ecx = R32((u32)(r_ebp+0xfffffedcu));
    /* 005613f4: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x5613f9u); f_005eaaf0();
    /* 005613f9: mov dword ptr [ebp - 0x180], eax */ W32((u32)(r_ebp+0xfffffe80u), r_eax);
    /* 005613ff: jmp 0x56140b */ goto L_0056140b;
L_00561401:; BB(0x00561401);
    /* 00561401: mov dword ptr [ebp - 0x180], 0 */ W32((u32)(r_ebp+0xfffffe80u), 0x0u);
L_0056140b:; BB(0x0056140b);
    /* 0056140b: mov eax, dword ptr [ebp - 0x180] */ r_eax = R32((u32)(r_ebp+0xfffffe80u));
    /* 00561411: mov dword ptr [ebp - 0x120], eax */ W32((u32)(r_ebp+0xfffffee0u), r_eax);
    /* 00561417: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056141e: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00561421: mov edx, dword ptr [ebp - 0x134] */ r_edx = R32((u32)(r_ebp+0xfffffeccu));
    /* 00561427: mov eax, dword ptr [ebp - 0x120] */ r_eax = R32((u32)(r_ebp+0xfffffee0u));
    /* 0056142d: mov dword ptr [edx + ecx*4 + 0x4c], eax */ W32((u32)(r_edx+r_ecx*4+0x4cu), r_eax);
    /* 00561431: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00561433: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00561435: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00561437: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00561439: push 0x312243 */ { u32 v = 0x312243u; r_esp -= 4; W32(r_esp, v); }
    /* 0056143e: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00561441: mov edx, dword ptr [ebp - 0x134] */ r_edx = R32((u32)(r_ebp+0xfffffeccu));
    /* 00561447: mov ecx, dword ptr [edx + ecx*4 + 0x4c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x4cu));
    /* 0056144b: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x561450u); f_005eae80();
    /* 00561450: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00561453: mov ecx, dword ptr [ebp - 0x134] */ r_ecx = R32((u32)(r_ebp+0xfffffeccu));
    /* 00561459: mov edx, dword ptr [ecx + eax*4 + 0x4c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x4cu));
    /* 0056145d: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00561460: mov ecx, dword ptr [ebp - 0x134] */ r_ecx = R32((u32)(r_ebp+0xfffffeccu));
    /* 00561466: mov ecx, dword ptr [ecx + eax*4 + 0x4c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x4cu));
    /* 0056146a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0056146c: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0056146f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x561471u); call_ind(t); }
    /* 00561471: jmp 0x561269 */ goto L_00561269;
L_00561476:; BB(0x00561476);
    /* 00561476: push 0x910 */ { u32 v = 0x910u; r_esp -= 4; W32(r_esp, v); }
    /* 0056147b: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x561480u); f_00686d82();
    /* 00561480: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00561483: mov dword ptr [ebp - 0x12c], eax */ W32((u32)(r_ebp+0xfffffed4u), r_eax);
    /* 00561489: mov dword ptr [ebp - 4], 0x13 */ W32((u32)(r_ebp+0xfffffffcu), 0x13u);
    /* 00561490: cmp dword ptr [ebp - 0x12c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffed4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00561497: je 0x5614ac */ if (fZ) goto L_005614ac;
L_00561499:; BB(0x00561499);
    /* 00561499: mov ecx, dword ptr [ebp - 0x12c] */ r_ecx = R32((u32)(r_ebp+0xfffffed4u));
    /* 0056149f: call 0x563d30 */ r_esp -= 4; W32(r_esp, 0x5614a4u); f_00563d30();
    /* 005614a4: mov dword ptr [ebp - 0x184], eax */ W32((u32)(r_ebp+0xfffffe7cu), r_eax);
    /* 005614aa: jmp 0x5614b6 */ goto L_005614b6;
L_005614ac:; BB(0x005614ac);
    /* 005614ac: mov dword ptr [ebp - 0x184], 0 */ W32((u32)(r_ebp+0xfffffe7cu), 0x0u);
L_005614b6:; BB(0x005614b6);
    /* 005614b6: mov ecx, dword ptr [ebp - 0x184] */ r_ecx = R32((u32)(r_ebp+0xfffffe7cu));
    /* 005614bc: mov dword ptr [ebp - 0x128], ecx */ W32((u32)(r_ebp+0xfffffed8u), r_ecx);
    /* 005614c2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005614c9: mov edx, dword ptr [ebp - 0x134] */ r_edx = R32((u32)(r_ebp+0xfffffeccu));
    /* 005614cf: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 005614d5: mov dword ptr [edx + 0xb8], eax */ W32((u32)(r_edx+0xb8u), r_eax);
    /* 005614db: mov ecx, dword ptr [ebp - 0x134] */ r_ecx = R32((u32)(r_ebp+0xfffffeccu));
    /* 005614e1: mov ecx, dword ptr [ecx + 0xb8] */ r_ecx = R32((u32)(r_ecx+0xb8u));
    /* 005614e7: call 0x5640f0 */ r_esp -= 4; W32(r_esp, 0x5614ecu); f_005640f0();
    /* 005614ec: mov edx, dword ptr [ebp - 0x134] */ r_edx = R32((u32)(r_ebp+0xfffffeccu));
    /* 005614f2: mov ecx, dword ptr [edx + 0xb8] */ r_ecx = R32((u32)(r_edx+0xb8u));
    /* 005614f8: call 0x564490 */ r_esp -= 4; W32(r_esp, 0x5614fdu); f_00564490();
    /* 005614fd: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 00561504: jmp 0x56150f */ goto L_0056150f;
L_00561506:; BB(0x00561506);
    /* 00561506: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00561509: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056150c: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
L_0056150f:; BB(0x0056150f);
    /* 0056150f: cmp dword ptr [ebp - 0x38], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00561513: jge 0x561551 */ if ((fS==fO)) goto L_00561551;
L_00561515:; BB(0x00561515);
    /* 00561515: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00561517: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00561519: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0056151b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0056151d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0056151f: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00561524: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00561526: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00561528: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056152a: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0056152d: add ecx, 0x312221 */ {  u32 a = r_ecx; u32 b = 0x312221u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00561533: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00561534: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00561537: mov eax, dword ptr [edx*4 + 0x743c98] */ r_eax = R32((u32)(r_edx*4+0x743c98u));
    /* 0056153e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056153f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00561541: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00561547: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 0056154a: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x56154fu); f_005f9de0();
    /* 0056154f: jmp 0x561506 */ goto L_00561506;
L_00561551:; BB(0x00561551);
    /* 00561551: mov ecx, dword ptr [ebp - 0x134] */ r_ecx = R32((u32)(r_ebp+0xfffffeccu));
    /* 00561557: call 0x5602a0 */ r_esp -= 4; W32(r_esp, 0x56155cu); f_005602a0();
    /* 0056155c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056155e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00561560: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00561562: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00561564: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00561566: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0056156b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0056156d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056156f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00561571: push 0x31223d */ { u32 v = 0x31223du; r_esp -= 4; W32(r_esp, v); }
    /* 00561576: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00561578: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056157a: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00561580: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00561583: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x561588u); f_005f9de0();
    /* 00561588: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056158a: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0056158c: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00561591: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00561594: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x561599u); f_005fb300();
    /* 00561599: mov ecx, eax */ r_ecx = r_eax;
    /* 0056159b: call 0x602790 */ r_esp -= 4; W32(r_esp, 0x5615a0u); f_00602790();
    /* 005615a0: mov ecx, dword ptr [ebp - 0x134] */ r_ecx = R32((u32)(r_ebp+0xfffffeccu));
    /* 005615a6: call 0x561950 */ r_esp -= 4; W32(r_esp, 0x5615abu); f_00561950();
    /* 005615ab: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005615ae: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005615b5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005615b6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005615b9: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005615bb: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x5615c0u); f_00686d72();
    /* 005615c0: mov esp, ebp */ r_esp = r_ebp;
    /* 005615c2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005615c3: ret  */ FN_RET(0x00560580); r_esp += 4; return;
}

