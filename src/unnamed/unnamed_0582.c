#include "protos.h"

void f_00582180(void) /* sub_582180 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00582180);
    /* 00582180: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00582181: mov ebp, esp */ r_ebp = r_esp;
    /* 00582183: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00582184: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00582187: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058218a: cmp dword ptr [eax + 0x407c], 0 */ {  u32 a = R32((u32)(r_eax+0x407cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00582191: jg 0x582195 */ if ((!fZ&&fS==fO)) goto L_00582195;
L_00582193:; BB(0x00582193);
    /* 00582193: jmp 0x5821b2 */ goto L_005821b2;
L_00582195:; BB(0x00582195);
    /* 00582195: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00582198: mov edx, dword ptr [ecx + 0x407c] */ r_edx = R32((u32)(r_ecx+0x407cu));
    /* 0058219e: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005821a1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005821a2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005821a5: call 0x581610 */ r_esp -= 4; W32(r_esp, 0x5821aau); f_00581610();
    /* 005821aa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005821ad: call 0x581b70 */ r_esp -= 4; W32(r_esp, 0x5821b2u); f_00581b70();
L_005821b2:; BB(0x005821b2);
    /* 005821b2: mov esp, ebp */ r_esp = r_ebp;
    /* 005821b4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005821b5: ret  */ FN_RET(0x00582180); r_esp += 4; return;
}

void f_005821c0(void) /* sub_5821C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005821c0);
    /* 005821c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005821c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005821c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005821c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005821c7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005821ca: mov ecx, dword ptr [eax + 0x407c] */ r_ecx = R32((u32)(r_eax+0x407cu));
    /* 005821d0: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005821d3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005821d6: cmp ecx, dword ptr [edx + 0x4078] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x4078u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005821dc: jl 0x5821e0 */ if ((fS!=fO)) goto L_005821e0;
L_005821de:; BB(0x005821de);
    /* 005821de: jmp 0x5821fd */ goto L_005821fd;
L_005821e0:; BB(0x005821e0);
    /* 005821e0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005821e3: mov ecx, dword ptr [eax + 0x407c] */ r_ecx = R32((u32)(r_eax+0x407cu));
    /* 005821e9: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005821ec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005821ed: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005821f0: call 0x581610 */ r_esp -= 4; W32(r_esp, 0x5821f5u); f_00581610();
    /* 005821f5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005821f8: call 0x581b70 */ r_esp -= 4; W32(r_esp, 0x5821fdu); f_00581b70();
L_005821fd:; BB(0x005821fd);
    /* 005821fd: mov esp, ebp */ r_esp = r_ebp;
    /* 005821ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00582200: ret  */ FN_RET(0x005821c0); r_esp += 4; return;
}

void f_00582210(void) /* sub_582210 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00582210);
    /* 00582210: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00582211: mov ebp, esp */ r_ebp = r_esp;
    /* 00582213: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00582214: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00582217: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058221a: mov ecx, dword ptr [eax + 0x407c] */ r_ecx = R32((u32)(r_eax+0x407cu));
    /* 00582220: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00582223: cmp dword ptr [edx + ecx*4 + 0x39f8], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x39f8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058222b: jg 0x58222f */ if ((!fZ&&fS==fO)) goto L_0058222f;
L_0058222d:; BB(0x0058222d);
    /* 0058222d: jmp 0x582260 */ goto L_00582260;
L_0058222f:; BB(0x0058222f);
    /* 0058222f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00582232: mov ecx, dword ptr [eax + 0x407c] */ r_ecx = R32((u32)(r_eax+0x407cu));
    /* 00582238: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058223b: mov eax, dword ptr [edx + ecx*4 + 0x39f8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x39f8u));
    /* 00582242: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00582245: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00582248: mov edx, dword ptr [ecx + 0x407c] */ r_edx = R32((u32)(r_ecx+0x407cu));
    /* 0058224e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00582251: mov dword ptr [ecx + edx*4 + 0x39f8], eax */ W32((u32)(r_ecx+r_edx*4+0x39f8u), r_eax);
    /* 00582258: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058225b: call 0x581b70 */ r_esp -= 4; W32(r_esp, 0x582260u); f_00581b70();
L_00582260:; BB(0x00582260);
    /* 00582260: mov esp, ebp */ r_esp = r_ebp;
    /* 00582262: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00582263: ret  */ FN_RET(0x00582210); r_esp += 4; return;
}

void f_00582270(void) /* sub_582270 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00582270);
    /* 00582270: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00582271: mov ebp, esp */ r_ebp = r_esp;
    /* 00582273: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00582274: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00582277: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058227a: mov ecx, dword ptr [eax + 0x407c] */ r_ecx = R32((u32)(r_eax+0x407cu));
    /* 00582280: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00582283: mov eax, dword ptr [edx + ecx*4 + 0x39f8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x39f8u));
    /* 0058228a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0058228d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00582290: mov edx, dword ptr [ecx + 0x407c] */ r_edx = R32((u32)(r_ecx+0x407cu));
    /* 00582296: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00582299: cmp eax, dword ptr [ecx + edx*4 + 0x3a18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+r_edx*4+0x3a18u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005822a0: jl 0x5822a4 */ if ((fS!=fO)) goto L_005822a4;
L_005822a2:; BB(0x005822a2);
    /* 005822a2: jmp 0x5822d5 */ goto L_005822d5;
L_005822a4:; BB(0x005822a4);
    /* 005822a4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005822a7: mov eax, dword ptr [edx + 0x407c] */ r_eax = R32((u32)(r_edx+0x407cu));
    /* 005822ad: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005822b0: mov edx, dword ptr [ecx + eax*4 + 0x39f8] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x39f8u));
    /* 005822b7: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005822ba: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005822bd: mov ecx, dword ptr [eax + 0x407c] */ r_ecx = R32((u32)(r_eax+0x407cu));
    /* 005822c3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005822c6: mov dword ptr [eax + ecx*4 + 0x39f8], edx */ W32((u32)(r_eax+r_ecx*4+0x39f8u), r_edx);
    /* 005822cd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005822d0: call 0x581b70 */ r_esp -= 4; W32(r_esp, 0x5822d5u); f_00581b70();
L_005822d5:; BB(0x005822d5);
    /* 005822d5: mov esp, ebp */ r_esp = r_ebp;
    /* 005822d7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005822d8: ret  */ FN_RET(0x00582270); r_esp += 4; return;
}

void f_005822e0(void) /* sub_5822E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005822e0);
    /* 005822e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005822e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005822e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005822e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005822e7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005822ea: cmp dword ptr [eax + 0x407c], 0 */ {  u32 a = R32((u32)(r_eax+0x407cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005822f1: je 0x5822ff */ if (fZ) goto L_005822ff;
L_005822f3:; BB(0x005822f3);
    /* 005822f3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005822f6: cmp dword ptr [ecx + 0x4078], 1 */ {  u32 a = R32((u32)(r_ecx+0x4078u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005822fd: jne 0x58230f */ if (!fZ) goto L_0058230f;
L_005822ff:; BB(0x005822ff);
    /* 005822ff: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00582302: mov ecx, dword ptr [edx + 0x4320] */ r_ecx = R32((u32)(r_edx+0x4320u));
    /* 00582308: call 0x582750 */ r_esp -= 4; W32(r_esp, 0x58230du); f_00582750();
    /* 0058230d: jmp 0x58231d */ goto L_0058231d;
L_0058230f:; BB(0x0058230f);
    /* 0058230f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00582312: mov ecx, dword ptr [eax + 0x4320] */ r_ecx = R32((u32)(r_eax+0x4320u));
    /* 00582318: call 0x582720 */ r_esp -= 4; W32(r_esp, 0x58231du); f_00582720();
L_0058231d:; BB(0x0058231d);
    /* 0058231d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00582320: mov edx, dword ptr [ecx + 0x4078] */ r_edx = R32((u32)(r_ecx+0x4078u));
    /* 00582326: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00582329: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058232c: cmp dword ptr [eax + 0x407c], edx */ {  u32 a = R32((u32)(r_eax+0x407cu)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00582332: jge 0x582340 */ if ((fS==fO)) goto L_00582340;
L_00582334:; BB(0x00582334);
    /* 00582334: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00582337: cmp dword ptr [ecx + 0x4078], 1 */ {  u32 a = R32((u32)(r_ecx+0x4078u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058233e: jne 0x582350 */ if (!fZ) goto L_00582350;
L_00582340:; BB(0x00582340);
    /* 00582340: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00582343: mov ecx, dword ptr [edx + 0x4324] */ r_ecx = R32((u32)(r_edx+0x4324u));
    /* 00582349: call 0x582750 */ r_esp -= 4; W32(r_esp, 0x58234eu); f_00582750();
    /* 0058234e: jmp 0x58235e */ goto L_0058235e;
L_00582350:; BB(0x00582350);
    /* 00582350: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00582353: mov ecx, dword ptr [eax + 0x4324] */ r_ecx = R32((u32)(r_eax+0x4324u));
    /* 00582359: call 0x582720 */ r_esp -= 4; W32(r_esp, 0x58235eu); f_00582720();
L_0058235e:; BB(0x0058235e);
    /* 0058235e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00582361: mov edx, dword ptr [ecx + 0x407c] */ r_edx = R32((u32)(r_ecx+0x407cu));
    /* 00582367: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058236a: cmp dword ptr [eax + edx*4 + 0x39f8], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x39f8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00582372: je 0x58238a */ if (fZ) goto L_0058238a;
L_00582374:; BB(0x00582374);
    /* 00582374: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00582377: mov edx, dword ptr [ecx + 0x407c] */ r_edx = R32((u32)(r_ecx+0x407cu));
    /* 0058237d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00582380: cmp dword ptr [eax + edx*4 + 0x3a18], 1 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x3a18u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00582388: jg 0x58239a */ if ((!fZ&&fS==fO)) goto L_0058239a;
L_0058238a:; BB(0x0058238a);
    /* 0058238a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058238d: mov ecx, dword ptr [ecx + 0x4328] */ r_ecx = R32((u32)(r_ecx+0x4328u));
    /* 00582393: call 0x582750 */ r_esp -= 4; W32(r_esp, 0x582398u); f_00582750();
    /* 00582398: jmp 0x5823a8 */ goto L_005823a8;
L_0058239a:; BB(0x0058239a);
    /* 0058239a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058239d: mov ecx, dword ptr [edx + 0x4328] */ r_ecx = R32((u32)(r_edx+0x4328u));
    /* 005823a3: call 0x582720 */ r_esp -= 4; W32(r_esp, 0x5823a8u); f_00582720();
L_005823a8:; BB(0x005823a8);
    /* 005823a8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005823ab: mov ecx, dword ptr [eax + 0x407c] */ r_ecx = R32((u32)(r_eax+0x407cu));
    /* 005823b1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005823b4: mov eax, dword ptr [edx + 0x407c] */ r_eax = R32((u32)(r_edx+0x407cu));
    /* 005823ba: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005823bd: mov eax, dword ptr [edx + eax*4 + 0x3a18] */ r_eax = R32((u32)(r_edx+r_eax*4+0x3a18u));
    /* 005823c4: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005823c7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005823ca: cmp dword ptr [edx + ecx*4 + 0x39f8], eax */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x39f8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005823d1: jge 0x5823e9 */ if ((fS==fO)) goto L_005823e9;
L_005823d3:; BB(0x005823d3);
    /* 005823d3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005823d6: mov ecx, dword ptr [eax + 0x407c] */ r_ecx = R32((u32)(r_eax+0x407cu));
    /* 005823dc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005823df: cmp dword ptr [edx + ecx*4 + 0x3a18], 1 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x3a18u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005823e7: jg 0x5823f9 */ if ((!fZ&&fS==fO)) goto L_005823f9;
L_005823e9:; BB(0x005823e9);
    /* 005823e9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005823ec: mov ecx, dword ptr [eax + 0x432c] */ r_ecx = R32((u32)(r_eax+0x432cu));
    /* 005823f2: call 0x582750 */ r_esp -= 4; W32(r_esp, 0x5823f7u); f_00582750();
    /* 005823f7: jmp 0x582407 */ goto L_00582407;
L_005823f9:; BB(0x005823f9);
    /* 005823f9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005823fc: mov ecx, dword ptr [ecx + 0x432c] */ r_ecx = R32((u32)(r_ecx+0x432cu));
    /* 00582402: call 0x582720 */ r_esp -= 4; W32(r_esp, 0x582407u); f_00582720();
L_00582407:; BB(0x00582407);
    /* 00582407: mov esp, ebp */ r_esp = r_ebp;
    /* 00582409: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058240a: ret  */ FN_RET(0x005822e0); r_esp += 4; return;
}

void f_00582410(void) /* sub_582410 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00582410);
    /* 00582410: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00582411: mov ebp, esp */ r_ebp = r_esp;
    /* 00582413: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00582416: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00582419: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058241c: mov ecx, dword ptr [eax + 0x4084] */ r_ecx = R32((u32)(r_eax+0x4084u));
    /* 00582422: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00582425: mov eax, dword ptr [edx + 0x4084] */ r_eax = R32((u32)(r_edx+0x4084u));
    /* 0058242b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0058242d: mov ecx, eax */ r_ecx = r_eax;
    /* 0058242f: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00582432: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x582434u); call_ind(t); }
    /* 00582434: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00582437: mov edx, dword ptr [ecx + 0x4318] */ r_edx = R32((u32)(r_ecx+0x4318u));
    /* 0058243d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00582440: mov ecx, dword ptr [eax + 0x4318] */ r_ecx = R32((u32)(r_eax+0x4318u));
    /* 00582446: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00582448: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0058244b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58244du); call_ind(t); }
    /* 0058244d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00582450: mov edx, dword ptr [ecx + 0x4088] */ r_edx = R32((u32)(r_ecx+0x4088u));
    /* 00582456: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00582459: mov ecx, dword ptr [eax + 0x4088] */ r_ecx = R32((u32)(r_eax+0x4088u));
    /* 0058245f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00582461: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00582464: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x582466u); call_ind(t); }
    /* 00582466: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00582469: mov edx, dword ptr [ecx + 0x408c] */ r_edx = R32((u32)(r_ecx+0x408cu));
    /* 0058246f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00582472: mov ecx, dword ptr [eax + 0x408c] */ r_ecx = R32((u32)(r_eax+0x408cu));
    /* 00582478: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0058247a: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0058247d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58247fu); call_ind(t); }
    /* 0058247f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00582482: mov edx, dword ptr [ecx + 0x4090] */ r_edx = R32((u32)(r_ecx+0x4090u));
    /* 00582488: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058248b: mov ecx, dword ptr [eax + 0x4090] */ r_ecx = R32((u32)(r_eax+0x4090u));
    /* 00582491: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00582493: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00582496: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x582498u); call_ind(t); }
    /* 00582498: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058249b: mov edx, dword ptr [ecx + 0x4094] */ r_edx = R32((u32)(r_ecx+0x4094u));
    /* 005824a1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005824a4: mov ecx, dword ptr [eax + 0x4094] */ r_ecx = R32((u32)(r_eax+0x4094u));
    /* 005824aa: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005824ac: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005824af: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5824b1u); call_ind(t); }
    /* 005824b1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005824b4: mov edx, dword ptr [ecx + 0x431c] */ r_edx = R32((u32)(r_ecx+0x431cu));
    /* 005824ba: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005824bd: mov ecx, dword ptr [eax + 0x431c] */ r_ecx = R32((u32)(r_eax+0x431cu));
    /* 005824c3: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005824c5: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005824c8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5824cau); call_ind(t); }
    /* 005824ca: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005824d1: jmp 0x5824dc */ goto L_005824dc;
L_005824d3:; BB(0x005824d3);
    /* 005824d3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005824d6: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005824d9: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005824dc:; BB(0x005824dc);
    /* 005824dc: cmp dword ptr [ebp - 4], 0x50 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005824e0: jge 0x582507 */ if ((fS==fO)) goto L_00582507;
L_005824e2:; BB(0x005824e2);
    /* 005824e2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005824e5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005824e8: mov ecx, dword ptr [eax + edx*4 + 0x4098] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4098u));
    /* 005824ef: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005824f2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005824f5: mov edx, dword ptr [eax + edx*4 + 0x4098] */ r_edx = R32((u32)(r_eax+r_edx*4+0x4098u));
    /* 005824fc: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005824fe: mov ecx, edx */ r_ecx = r_edx;
    /* 00582500: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 00582503: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x582505u); call_ind(t); }
    /* 00582505: jmp 0x5824d3 */ goto L_005824d3;
L_00582507:; BB(0x00582507);
    /* 00582507: mov esp, ebp */ r_esp = r_ebp;
    /* 00582509: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058250a: ret  */ FN_RET(0x00582410); r_esp += 4; return;
}

void f_00582510(void) /* sub_582510 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00582510);
    /* 00582510: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00582511: mov ebp, esp */ r_ebp = r_esp;
    /* 00582513: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00582514: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00582517: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058251a: cmp dword ptr [eax + 0x431c], 0 */ {  u32 a = R32((u32)(r_eax+0x431cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00582521: je 0x582535 */ if (fZ) goto L_00582535;
L_00582523:; BB(0x00582523);
    /* 00582523: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 00582526: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00582527: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058252a: mov ecx, dword ptr [edx + 0x431c] */ r_ecx = R32((u32)(r_edx+0x431cu));
    /* 00582530: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x582535u); f_005eb5d0();
L_00582535:; BB(0x00582535);
    /* 00582535: mov esp, ebp */ r_esp = r_ebp;
    /* 00582537: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00582538: ret 4 */ FN_RET(0x00582510); r_esp += 8; return;
}

void f_00582540(void) /* sub_582540 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00582540);
    /* 00582540: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00582541: mov ebp, esp */ r_ebp = r_esp;
    /* 00582543: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00582546: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00582549: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00582550: jmp 0x58255b */ goto L_0058255b;
L_00582552:; BB(0x00582552);
    /* 00582552: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00582555: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00582558: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0058255b:; BB(0x0058255b);
    /* 0058255b: cmp dword ptr [ebp - 4], 0x50 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058255f: jge 0x582594 */ if ((fS==fO)) goto L_00582594;
L_00582561:; BB(0x00582561);
    /* 00582561: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00582564: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00582567: cmp dword ptr [edx + ecx*4 + 0x41d8], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x41d8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058256f: je 0x582592 */ if (fZ) goto L_00582592;
L_00582571:; BB(0x00582571);
    /* 00582571: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00582574: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00582577: mov edx, dword ptr [ecx + eax*4 + 0x41d8] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x41d8u));
    /* 0058257e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00582581: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00582584: mov ecx, dword ptr [ecx + eax*4 + 0x41d8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x41d8u));
    /* 0058258b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0058258d: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00582590: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x582592u); call_ind(t); }
L_00582592:; BB(0x00582592);
    /* 00582592: jmp 0x582552 */ goto L_00582552;
L_00582594:; BB(0x00582594);
    /* 00582594: mov esp, ebp */ r_esp = r_ebp;
    /* 00582596: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00582597: ret  */ FN_RET(0x00582540); r_esp += 4; return;
}

void f_00582720(void) /* sub_582720 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00582720);
    /* 00582720: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00582721: mov ebp, esp */ r_ebp = r_esp;
    /* 00582723: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00582724: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00582727: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058272a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0058272c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058272f: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 00582735: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x582737u); call_ind(t); }
    /* 00582737: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058273a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0058273c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058273f: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00582742: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x582744u); call_ind(t); }
    /* 00582744: mov esp, ebp */ r_esp = r_ebp;
    /* 00582746: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00582747: ret  */ FN_RET(0x00582720); r_esp += 4; return;
}

void f_00582750(void) /* sub_582750 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00582750);
    /* 00582750: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00582751: mov ebp, esp */ r_ebp = r_esp;
    /* 00582753: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00582754: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00582757: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058275a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0058275c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058275f: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 00582765: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x582767u); call_ind(t); }
    /* 00582767: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058276a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0058276c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058276f: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00582772: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x582774u); call_ind(t); }
    /* 00582774: mov esp, ebp */ r_esp = r_ebp;
    /* 00582776: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00582777: ret  */ FN_RET(0x00582750); r_esp += 4; return;
}

