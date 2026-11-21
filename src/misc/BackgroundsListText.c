#include "protos.h"

void f_00677180(void) /* BackgroundsListText::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00677180);
    /* 00677180: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00677181: mov ebp, esp */ r_ebp = r_esp;
    /* 00677183: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00677185: push 0x6ad6a2 */ { u32 v = 0x6ad6a2u; r_esp -= 4; W32(r_esp, v); }
    /* 0067718a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00677190: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00677191: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00677194: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00677199: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0067719b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067719c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0067719f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 006771a5: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 006771a8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006771aa: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006771ad: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x6771b2u); f_005fb720();
    /* 006771b2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006771b4: jne 0x6771cd */ if (!fZ) goto L_006771cd;
L_006771b6:; BB(0x006771b6);
    /* 006771b6: push 0xa6 */ { u32 v = 0xa6u; r_esp -= 4; W32(r_esp, v); }
    /* 006771bb: push 0x6e1bf4 */ { u32 v = 0x6e1bf4u; r_esp -= 4; W32(r_esp, v); }
    /* 006771c0: push 0x6e1be4 */ { u32 v = 0x6e1be4u; r_esp -= 4; W32(r_esp, v); }
    /* 006771c5: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x6771cau); f_005e9f20();
    /* 006771ca: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006771cd:; BB(0x006771cd);
    /* 006771cd: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 006771d4: jmp 0x6771df */ goto L_006771df;
L_006771d6:; BB(0x006771d6);
    /* 006771d6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006771d9: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006771dc: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_006771df:; BB(0x006771df);
    /* 006771df: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 006771e5: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006771e7: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006771ed: mov edx, dword ptr [eax + 0x1d0] */ r_edx = R32((u32)(r_eax+0x1d0u));
    /* 006771f3: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6771f5u); call_ind(t); }
    /* 006771f5: cmp dword ptr [ebp - 0x10], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006771f8: jge 0x6772a7 */ if ((fS==fO)) goto L_006772a7;
L_006771fe:; BB(0x006771fe);
    /* 006771fe: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00677200: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x677205u); f_00686d82();
    /* 00677205: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00677208: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0067720b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00677212: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00677216: je 0x677231 */ if (fZ) goto L_00677231;
L_00677218:; BB(0x00677218);
    /* 00677218: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0067721b: call 0x629ab0 */ r_esp -= 4; W32(r_esp, 0x677220u); f_00629ab0();
    /* 00677220: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00677223: mov dword ptr [eax], 0x6e1bd4 */ W32((u32)(r_eax), 0x6e1bd4u);
    /* 00677229: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0067722c: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0067722f: jmp 0x677238 */ goto L_00677238;
L_00677231:; BB(0x00677231);
    /* 00677231: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00677238:; BB(0x00677238);
    /* 00677238: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0067723b: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0067723e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00677245: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00677248: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0067724b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067724e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067724f: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00677255: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00677257: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0067725d: mov edx, dword ptr [eax + 0x1d4] */ r_edx = R32((u32)(r_eax+0x1d4u));
    /* 00677263: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x677265u); call_ind(t); }
    /* 00677265: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00677268: mov dword ptr [ecx + 0x14], eax */ W32((u32)(r_ecx+0x14u), r_eax);
    /* 0067726b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067726d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0067726f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00677272: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 00677275: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00677276: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0067727c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067727e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00677284: mov eax, dword ptr [edx + 0x1e4] */ r_eax = R32((u32)(r_edx+0x1e4u));
    /* 0067728a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67728cu); call_ind(t); }
    /* 0067728c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067728d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00677290: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00677291: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00677293: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00677296: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x67729bu); f_005fb720();
    /* 0067729b: mov ecx, eax */ r_ecx = r_eax;
    /* 0067729d: call 0x628980 */ r_esp -= 4; W32(r_esp, 0x6772a2u); f_00628980();
    /* 006772a2: jmp 0x6771d6 */ goto L_006771d6;
L_006772a7:; BB(0x006772a7);
    /* 006772a7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006772a9: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006772ac: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x6772b1u); f_005fb720();
    /* 006772b1: mov ecx, eax */ r_ecx = r_eax;
    /* 006772b3: call 0x628d80 */ r_esp -= 4; W32(r_esp, 0x6772b8u); f_00628d80();
    /* 006772b8: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 006772ba: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x6772bfu); f_00686d82();
    /* 006772bf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006772c2: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 006772c5: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006772cc: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006772d0: je 0x6772eb */ if (fZ) goto L_006772eb;
L_006772d2:; BB(0x006772d2);
    /* 006772d2: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006772d5: call 0x629ab0 */ r_esp -= 4; W32(r_esp, 0x6772dau); f_00629ab0();
    /* 006772da: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006772dd: mov dword ptr [edx], 0x6e1bd4 */ W32((u32)(r_edx), 0x6e1bd4u);
    /* 006772e3: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006772e6: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 006772e9: jmp 0x6772f2 */ goto L_006772f2;
L_006772eb:; BB(0x006772eb);
    /* 006772eb: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_006772f2:; BB(0x006772f2);
    /* 006772f2: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006772f5: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006772f8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006772ff: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00677302: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00677305: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00677308: mov dword ptr [eax + 0x14], 0xffffffff */ W32((u32)(r_eax+0x14u), 0xffffffffu);
    /* 0067730f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00677311: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00677313: push 0x6de06c */ { u32 v = 0x6de06cu; r_esp -= 4; W32(r_esp, v); }
    /* 00677318: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x67731du); f_00630f40();
    /* 0067731d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00677320: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00677321: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00677324: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00677325: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00677327: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0067732a: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x67732fu); f_005fb720();
    /* 0067732f: mov ecx, eax */ r_ecx = r_eax;
    /* 00677331: call 0x628980 */ r_esp -= 4; W32(r_esp, 0x677336u); f_00628980();
    /* 00677336: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00677339: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00677340: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00677341: mov esp, ebp */ r_esp = r_ebp;
    /* 00677343: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00677344: ret  */ FN_RET(0x00677180); r_esp += 4; return;
}

