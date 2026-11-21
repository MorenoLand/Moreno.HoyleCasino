#include "protos.h"

void f_00526f90(void) /* RouletteSettingsHelpText::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00526f90);
    /* 00526f90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00526f91: mov ebp, esp */ r_ebp = r_esp;
    /* 00526f93: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00526f96: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00526f99: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00526fa0: cmp dword ptr [0x163068c], 0 */ {  u32 a = R32((u32)(0x163068cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00526fa7: jne 0x526fae */ if (!fZ) goto L_00526fae;
L_00526fa9:; BB(0x00526fa9);
    /* 00526fa9: jmp 0x5270a6 */ goto L_005270a6;
L_00526fae:; BB(0x00526fae);
    /* 00526fae: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00526fb0: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 00526fb6: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x526fbbu); f_005fb350();
    /* 00526fbb: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00526fbe: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 00526fc5: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 00526fc7: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 00526fcd: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x526fd2u); f_005fb350();
    /* 00526fd2: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00526fd5: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
    /* 00526fdc: mov dword ptr [ebp - 0xc], 2 */ W32((u32)(r_ebp+0xfffffff4u), 0x2u);
    /* 00526fe3: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00526fea: jmp 0x526ff5 */ goto L_00526ff5;
L_00526fec:; BB(0x00526fec);
    /* 00526fec: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00526fef: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00526ff2: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_00526ff5:; BB(0x00526ff5);
    /* 00526ff5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00526ff8: cmp ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00526ffb: jge 0x527038 */ if ((fS==fO)) goto L_00527038;
L_00526ffd:; BB(0x00526ffd);
    /* 00526ffd: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00527000: cmp dword ptr [ebp + edx*8 - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+r_edx*8+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00527005: je 0x527036 */ if (fZ) goto L_00527036;
L_00527007:; BB(0x00527007);
    /* 00527007: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0052700a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052700b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0052700e: mov edx, dword ptr [ebp + ecx*8 - 0x1c] */ r_edx = R32((u32)(r_ebp+r_ecx*8+0xffffffe4u));
    /* 00527012: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00527015: mov ecx, dword ptr [ebp + eax*8 - 0x1c] */ r_ecx = R32((u32)(r_ebp+r_eax*8+0xffffffe4u));
    /* 00527019: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052701b: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 00527021: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x527023u); call_ind(t); }
    /* 00527023: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00527026: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00527028: je 0x527036 */ if (fZ) goto L_00527036;
L_0052702a:; BB(0x0052702a);
    /* 0052702a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0052702d: mov eax, dword ptr [ebp + edx*8 - 0x18] */ r_eax = R32((u32)(r_ebp+r_edx*8+0xffffffe8u));
    /* 00527031: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00527034: jmp 0x527038 */ goto L_00527038;
L_00527036:; BB(0x00527036);
    /* 00527036: jmp 0x526fec */ goto L_00526fec;
L_00527038:; BB(0x00527038);
    /* 00527038: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052703c: jne 0x52705e */ if (!fZ) goto L_0052705e;
L_0052703e:; BB(0x0052703e);
    /* 0052703e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00527041: cmp dword ptr [ecx + 0x18], 3 */ {  u32 a = R32((u32)(r_ecx+0x18u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00527045: jne 0x52705c */ if (!fZ) goto L_0052705c;
L_00527047:; BB(0x00527047);
    /* 00527047: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0052704c: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0052704f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00527051: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00527054: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0052705a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x52705cu); call_ind(t); }
L_0052705c:; BB(0x0052705c);
    /* 0052705c: jmp 0x5270a6 */ goto L_005270a6;
L_0052705e:; BB(0x0052705e);
    /* 0052705e: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00527062: jne 0x527082 */ if (!fZ) goto L_00527082;
L_00527064:; BB(0x00527064);
    /* 00527064: push 0x6c35b4 */ { u32 v = 0x6c35b4u; r_esp -= 4; W32(r_esp, v); }
    /* 00527069: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x52706eu); f_00630f40();
    /* 0052706e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00527071: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00527072: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00527075: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00527077: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0052707a: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00527080: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x527082u); call_ind(t); }
L_00527082:; BB(0x00527082);
    /* 00527082: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00527086: jne 0x5270a6 */ if (!fZ) goto L_005270a6;
L_00527088:; BB(0x00527088);
    /* 00527088: push 0x6c3598 */ { u32 v = 0x6c3598u; r_esp -= 4; W32(r_esp, v); }
    /* 0052708d: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x527092u); f_00630f40();
    /* 00527092: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00527095: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00527096: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00527099: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0052709b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0052709e: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 005270a4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5270a6u); call_ind(t); }
L_005270a6:; BB(0x005270a6);
    /* 005270a6: mov esp, ebp */ r_esp = r_ebp;
    /* 005270a8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005270a9: ret 4 */ FN_RET(0x00526f90); r_esp += 8; return;
}

