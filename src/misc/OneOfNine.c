#include "protos.h"

void f_005bf340(void) /* OneOfNine::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bf340);
    /* 005bf340: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bf341: mov ebp, esp */ r_ebp = r_esp;
    /* 005bf343: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005bf345: push 0x6a82ce */ { u32 v = 0x6a82ceu; r_esp -= 4; W32(r_esp, v); }
    /* 005bf34a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005bf350: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bf351: sub esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bf354: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005bf359: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005bf35b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bf35c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005bf35f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005bf365: mov dword ptr [ebp - 0x78], ecx */ W32((u32)(r_ebp+0xffffff88u), r_ecx);
    /* 005bf368: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005bf36b: call 0x5bf210 */ r_esp -= 4; W32(r_esp, 0x5bf370u); f_005bf210();
    /* 005bf370: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005bf377: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 005bf37a: mov dword ptr [eax], 0x6d1d04 */ W32((u32)(r_eax), 0x6d1d04u);
    /* 005bf380: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005bf383: add ecx, 0x1c */ {  u32 a = r_ecx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bf386: mov dword ptr [ebp - 0x74], ecx */ W32((u32)(r_ebp+0xffffff8cu), r_ecx);
    /* 005bf389: lea edx, [ebp - 0x15] */ r_edx = (u32)(r_ebp+0xffffffebu);
    /* 005bf38c: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005bf38f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bf391: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 005bf394: call 0x5c0870 */ r_esp -= 4; W32(r_esp, 0x5bf399u); f_005c0870();
    /* 005bf399: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 005bf39c: mov dword ptr [eax + 0x14], 0 */ W32((u32)(r_eax+0x14u), 0x0u);
    /* 005bf3a3: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005bf3a6: mov dword ptr [ecx + 0x18], 0 */ W32((u32)(r_ecx+0x18u), 0x0u);
    /* 005bf3ad: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005bf3b4: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 005bf3b7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bf3ba: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005bf3c1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005bf3c2: mov esp, ebp */ r_esp = r_ebp;
    /* 005bf3c4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bf3c5: ret  */ FN_RET(0x005bf340); r_esp += 4; return;
}

void f_005bf3d0(void) /* OneOfNine::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bf3d0);
    /* 005bf3d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bf3d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005bf3d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005bf3d5: push 0x6a82fc */ { u32 v = 0x6a82fcu; r_esp -= 4; W32(r_esp, v); }
    /* 005bf3da: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005bf3e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bf3e1: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bf3e4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005bf3e9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005bf3eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bf3ec: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005bf3ef: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005bf3f5: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 005bf3f8: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005bf3fb: mov dword ptr [eax], 0x6d1d04 */ W32((u32)(r_eax), 0x6d1d04u);
    /* 005bf401: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005bf408: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005bf40b: cmp dword ptr [ecx + 0xc], 0 */ {  u32 a = R32((u32)(r_ecx+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bf40f: je 0x5bf441 */ if (fZ) goto L_005bf441;
L_005bf411:; BB(0x005bf411);
    /* 005bf411: mov dword ptr [ebp - 0x10], 0x64 */ W32((u32)(r_ebp+0xfffffff0u), 0x64u);
    /* 005bf418: jmp 0x5bf423 */ goto L_005bf423;
L_005bf41a:; BB(0x005bf41a);
    /* 005bf41a: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bf41d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bf420: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_005bf423:; BB(0x005bf423);
    /* 005bf423: cmp dword ptr [ebp - 0x10], 0xca */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xcau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bf42a: jg 0x5bf441 */ if ((!fZ&&fS==fO)) goto L_005bf441;
L_005bf42c:; BB(0x005bf42c);
    /* 005bf42c: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005bf42f: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005bf432: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bf433: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bf436: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bf437: call 0x6104c0 */ r_esp -= 4; W32(r_esp, 0x5bf43cu); f_006104c0();
    /* 005bf43c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bf43f: jmp 0x5bf41a */ goto L_005bf41a;
L_005bf441:; BB(0x005bf441);
    /* 005bf441: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005bf445: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005bf448: add eax, 0x1c */ {  u32 a = r_eax; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bf44b: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005bf44e: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005bf451: call 0x5be450 */ r_esp -= 4; W32(r_esp, 0x5bf456u); f_005be450();
    /* 005bf456: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005bf45d: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005bf460: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x5bf465u); f_005e9e40();
    /* 005bf465: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bf468: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005bf46f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005bf470: mov esp, ebp */ r_esp = r_ebp;
    /* 005bf472: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bf473: ret  */ FN_RET(0x005bf3d0); r_esp += 4; return;
}

void f_005bf480(void) /* OneOfNine::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bf480);
    /* 005bf480: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bf481: mov ebp, esp */ r_ebp = r_esp;
    /* 005bf483: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005bf485: push 0x6a8338 */ { u32 v = 0x6a8338u; r_esp -= 4; W32(r_esp, v); }
    /* 005bf48a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005bf490: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bf491: sub esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bf497: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005bf49c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005bf49e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bf49f: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005bf4a2: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005bf4a8: mov dword ptr [ebp - 0xb0], ecx */ W32((u32)(r_ebp+0xffffff50u), r_ecx);
    /* 005bf4ae: mov eax, dword ptr [ebp - 0xb0] */ r_eax = R32((u32)(r_ebp+0xffffff50u));
    /* 005bf4b4: mov dword ptr [eax + 0x18], 3 */ W32((u32)(r_eax+0x18u), 0x3u);
    /* 005bf4bb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005bf4be: mov dword ptr [ebp - 0xb4], ecx */ W32((u32)(r_ebp+0xffffff4cu), r_ecx);
    /* 005bf4c4: cmp dword ptr [ebp - 0xb4], 0x3158d1 */ {  u32 a = R32((u32)(r_ebp+0xffffff4cu)); u32 b = 0x3158d1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bf4ce: jl 0x5bf4f8 */ if ((fS!=fO)) goto L_005bf4f8;
L_005bf4d0:; BB(0x005bf4d0);
    /* 005bf4d0: cmp dword ptr [ebp - 0xb4], 0x3158d5 */ {  u32 a = R32((u32)(r_ebp+0xffffff4cu)); u32 b = 0x3158d5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bf4da: jle 0x5bf4de */ if ((fZ||fS!=fO)) goto L_005bf4de;
L_005bf4dc:; BB(0x005bf4dc);
    /* 005bf4dc: jmp 0x5bf4f8 */ goto L_005bf4f8;
L_005bf4de:; BB(0x005bf4de);
    /* 005bf4de: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005bf4e1: imul edx, edx, 0x90 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x90u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005bf4e7: lea eax, [edx - 0x1b4c62c0] */ r_eax = (u32)(r_edx+0xe4b39d40u);
    /* 005bf4ed: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 005bf4f3: mov dword ptr [ecx + 0x14], eax */ W32((u32)(r_ecx+0x14u), r_eax);
    /* 005bf4f6: jmp 0x5bf505 */ goto L_005bf505;
L_005bf4f8:; BB(0x005bf4f8);
    /* 005bf4f8: mov edx, dword ptr [ebp - 0xb0] */ r_edx = R32((u32)(r_ebp+0xffffff50u));
    /* 005bf4fe: mov dword ptr [edx + 0x14], 0x7592d0 */ W32((u32)(r_edx+0x14u), 0x7592d0u);
L_005bf505:; BB(0x005bf505);
    /* 005bf505: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 005bf50a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5bf50fu); f_00686d82();
    /* 005bf50f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bf512: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005bf515: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005bf51c: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bf520: je 0x5bf532 */ if (fZ) goto L_005bf532;
L_005bf522:; BB(0x005bf522);
    /* 005bf522: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005bf525: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x5bf52au); f_005eaaf0();
    /* 005bf52a: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 005bf530: jmp 0x5bf53c */ goto L_005bf53c;
L_005bf532:; BB(0x005bf532);
    /* 005bf532: mov dword ptr [ebp - 0xb8], 0 */ W32((u32)(r_ebp+0xffffff48u), 0x0u);
L_005bf53c:; BB(0x005bf53c);
    /* 005bf53c: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 005bf542: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005bf545: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005bf54c: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005bf54f: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005bf552: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bf554: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005bf559: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bf55b: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005bf55d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bf55f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bf561: mov edx, dword ptr [ebp - 0xb0] */ r_edx = R32((u32)(r_ebp+0xffffff50u));
    /* 005bf567: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 005bf56a: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005bf56d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bf56e: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005bf570: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005bf573: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bf574: mov eax, dword ptr [ebp - 0xb0] */ r_eax = R32((u32)(r_ebp+0xffffff50u));
    /* 005bf57a: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005bf57d: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x5bf582u); f_005f9ce0();
    /* 005bf582: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 005bf588: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 005bf58b: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005bf58e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bf58f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005bf592: call 0x5eb000 */ r_esp -= 4; W32(r_esp, 0x5bf597u); f_005eb000();
    /* 005bf597: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 005bf59d: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 005bf5a0: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005bf5a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bf5a4: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005bf5a7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005bf5a9: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005bf5ac: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005bf5b2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5bf5b4u); call_ind(t); }
    /* 005bf5b4: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 005bf5b9: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5bf5beu); f_00686d82();
    /* 005bf5be: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bf5c1: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005bf5c4: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005bf5cb: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bf5cf: je 0x5bf5e1 */ if (fZ) goto L_005bf5e1;
L_005bf5d1:; BB(0x005bf5d1);
    /* 005bf5d1: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005bf5d4: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x5bf5d9u); f_005eaaf0();
    /* 005bf5d9: mov dword ptr [ebp - 0xbc], eax */ W32((u32)(r_ebp+0xffffff44u), r_eax);
    /* 005bf5df: jmp 0x5bf5eb */ goto L_005bf5eb;
L_005bf5e1:; BB(0x005bf5e1);
    /* 005bf5e1: mov dword ptr [ebp - 0xbc], 0 */ W32((u32)(r_ebp+0xffffff44u), 0x0u);
L_005bf5eb:; BB(0x005bf5eb);
    /* 005bf5eb: mov ecx, dword ptr [ebp - 0xbc] */ r_ecx = R32((u32)(r_ebp+0xffffff44u));
    /* 005bf5f1: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 005bf5f4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005bf5fb: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005bf5fe: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 005bf601: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bf603: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005bf608: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bf60a: push 0xca */ { u32 v = 0xcau; r_esp -= 4; W32(r_esp, v); }
    /* 005bf60f: mov eax, dword ptr [ebp - 0xb0] */ r_eax = R32((u32)(r_ebp+0xffffff50u));
    /* 005bf615: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005bf618: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 005bf61b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bf61c: mov eax, dword ptr [ebp - 0xb0] */ r_eax = R32((u32)(r_ebp+0xffffff50u));
    /* 005bf622: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005bf625: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 005bf628: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bf629: mov eax, dword ptr [ebp - 0xb0] */ r_eax = R32((u32)(r_ebp+0xffffff50u));
    /* 005bf62f: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005bf632: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 005bf635: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bf636: push 0xca */ { u32 v = 0xcau; r_esp -= 4; W32(r_esp, v); }
    /* 005bf63b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005bf63e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bf63f: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 005bf645: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 005bf648: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x5bf64du); f_005f9ce0();
    /* 005bf64d: mov edx, dword ptr [ebp - 0xb0] */ r_edx = R32((u32)(r_ebp+0xffffff50u));
    /* 005bf653: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 005bf656: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 005bf659: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bf65a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005bf65d: call 0x5eb000 */ r_esp -= 4; W32(r_esp, 0x5bf662u); f_005eb000();
    /* 005bf662: mov edx, dword ptr [ebp - 0xb0] */ r_edx = R32((u32)(r_ebp+0xffffff50u));
    /* 005bf668: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 005bf66b: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 005bf66e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bf66f: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005bf672: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005bf674: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005bf677: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 005bf67d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5bf67fu); call_ind(t); }
    /* 005bf67f: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 005bf686: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005bf68d: jmp 0x5bf698 */ goto L_005bf698;
L_005bf68f:; BB(0x005bf68f);
    /* 005bf68f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bf692: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bf695: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_005bf698:; BB(0x005bf698);
    /* 005bf698: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 005bf69e: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 005bf6a1: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bf6a4: cmp eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bf6a7: jge 0x5bf7d8 */ if ((fS==fO)) goto L_005bf7d8;
L_005bf6ad:; BB(0x005bf6ad);
    /* 005bf6ad: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 005bf6b4: jmp 0x5bf6bf */ goto L_005bf6bf;
L_005bf6b6:; BB(0x005bf6b6);
    /* 005bf6b6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005bf6b9: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bf6bc: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_005bf6bf:; BB(0x005bf6bf);
    /* 005bf6bf: mov edx, dword ptr [ebp - 0xb0] */ r_edx = R32((u32)(r_ebp+0xffffff50u));
    /* 005bf6c5: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 005bf6c8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005bf6cb: cmp ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bf6cd: jge 0x5bf7d3 */ if ((fS==fO)) goto L_005bf7d3;
L_005bf6d3:; BB(0x005bf6d3);
    /* 005bf6d3: push 0x1dc */ { u32 v = 0x1dcu; r_esp -= 4; W32(r_esp, v); }
    /* 005bf6d8: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5bf6ddu); f_00686d82();
    /* 005bf6dd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bf6e0: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005bf6e3: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005bf6ea: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bf6ee: je 0x5bf700 */ if (fZ) goto L_005bf700;
L_005bf6f0:; BB(0x005bf6f0);
    /* 005bf6f0: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005bf6f3: call 0x601a80 */ r_esp -= 4; W32(r_esp, 0x5bf6f8u); f_00601a80();
    /* 005bf6f8: mov dword ptr [ebp - 0xc0], eax */ W32((u32)(r_ebp+0xffffff40u), r_eax);
    /* 005bf6fe: jmp 0x5bf70a */ goto L_005bf70a;
L_005bf700:; BB(0x005bf700);
    /* 005bf700: mov dword ptr [ebp - 0xc0], 0 */ W32((u32)(r_ebp+0xffffff40u), 0x0u);
L_005bf70a:; BB(0x005bf70a);
    /* 005bf70a: mov edx, dword ptr [ebp - 0xc0] */ r_edx = R32((u32)(r_ebp+0xffffff40u));
    /* 005bf710: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 005bf713: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005bf71a: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005bf71d: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005bf720: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bf722: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005bf724: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005bf726: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005bf728: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005bf72a: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005bf72f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bf732: add ecx, 0x65 */ {  u32 a = r_ecx; u32 b = 0x65u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bf735: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bf736: mov edx, dword ptr [ebp - 0xb0] */ r_edx = R32((u32)(r_ebp+0xffffff50u));
    /* 005bf73c: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 005bf73f: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 005bf745: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 005bf748: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bf74b: imul ecx, dword ptr [edx + 0x4c] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_edx+0x4cu)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005bf74f: add ecx, dword ptr [eax + 0x44] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x44u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bf752: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bf753: mov edx, dword ptr [ebp - 0xb0] */ r_edx = R32((u32)(r_ebp+0xffffff50u));
    /* 005bf759: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 005bf75c: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 005bf762: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 005bf765: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005bf768: imul ecx, dword ptr [edx + 0x48] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_edx+0x48u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005bf76c: add ecx, dword ptr [eax + 0x40] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x40u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bf76f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bf770: mov edx, dword ptr [ebp - 0xb0] */ r_edx = R32((u32)(r_ebp+0xffffff50u));
    /* 005bf776: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 005bf779: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005bf77c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bf77d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bf780: add edx, 0x65 */ {  u32 a = r_edx; u32 b = 0x65u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bf783: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bf784: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005bf787: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bf788: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 005bf78e: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 005bf791: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x5bf796u); f_005f9de0();
    /* 005bf796: mov edx, dword ptr [ebp - 0xb0] */ r_edx = R32((u32)(r_ebp+0xffffff50u));
    /* 005bf79c: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 005bf79f: mov cl, byte ptr [eax + 0x2c] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x2cu))) & 0xffu);
    /* 005bf7a2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bf7a3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005bf7a6: call 0x5eb700 */ r_esp -= 4; W32(r_esp, 0x5bf7abu); f_005eb700();
    /* 005bf7ab: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005bf7ae: call 0x5eb130 */ r_esp -= 4; W32(r_esp, 0x5bf7b3u); f_005eb130();
    /* 005bf7b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bf7b4: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5bf7b9u); f_0062fbf0();
    /* 005bf7b9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bf7bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bf7bd: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005bf7c0: call 0x5eb000 */ r_esp -= 4; W32(r_esp, 0x5bf7c5u); f_005eb000();
    /* 005bf7c5: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bf7c8: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bf7cb: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005bf7ce: jmp 0x5bf6b6 */ goto L_005bf6b6;
L_005bf7d3:; BB(0x005bf7d3);
    /* 005bf7d3: jmp 0x5bf68f */ goto L_005bf68f;
L_005bf7d8:; BB(0x005bf7d8);
    /* 005bf7d8: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 005bf7df: jmp 0x5bf7ea */ goto L_005bf7ea;
L_005bf7e1:; BB(0x005bf7e1);
    /* 005bf7e1: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bf7e4: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bf7e7: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_005bf7ea:; BB(0x005bf7ea);
    /* 005bf7ea: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 005bf7f0: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 005bf7f3: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bf7f6: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005bf7f9: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 005bf7fc: cmp dword ptr [eax + ecx], -0x64 */ {  u32 a = R32((u32)(r_eax+r_ecx)); u32 b = 0xffffff9cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bf800: je 0x5bf82b */ if (fZ) goto L_005bf82b;
L_005bf802:; BB(0x005bf802);
    /* 005bf802: mov edx, dword ptr [ebp - 0xb0] */ r_edx = R32((u32)(r_ebp+0xffffff50u));
    /* 005bf808: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 005bf80b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bf80e: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005bf811: add ecx, dword ptr [eax + 0x3c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x3cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bf814: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 005bf817: lea edx, [ebp - 0x40] */ r_edx = (u32)(r_ebp+0xffffffc0u);
    /* 005bf81a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bf81b: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 005bf821: add ecx, 0x1c */ {  u32 a = r_ecx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bf824: call 0x5bfd30 */ r_esp -= 4; W32(r_esp, 0x5bf829u); f_005bfd30();
    /* 005bf829: jmp 0x5bf7e1 */ goto L_005bf7e1;
L_005bf82b:; BB(0x005bf82b);
    /* 005bf82b: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 005bf831: call 0x5bfc00 */ r_esp -= 4; W32(r_esp, 0x5bf836u); f_005bfc00();
    /* 005bf836: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bf839: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005bf840: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005bf841: mov esp, ebp */ r_esp = r_ebp;
    /* 005bf843: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bf844: ret 4 */ FN_RET(0x005bf480); r_esp += 8; return;
}

void f_005bf850(void) /* OneOfNine::vfunc3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bf850);
    /* 005bf850: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bf851: mov ebp, esp */ r_ebp = r_esp;
    /* 005bf853: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005bf855: push 0x6a8377 */ { u32 v = 0x6a8377u; r_esp -= 4; W32(r_esp, v); }
    /* 005bf85a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005bf860: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bf861: sub esp, 0xb8 */ {  u32 a = r_esp; u32 b = 0xb8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bf867: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005bf86c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005bf86e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bf86f: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005bf872: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005bf878: mov dword ptr [ebp - 0xac], ecx */ W32((u32)(r_ebp+0xffffff54u), r_ecx);
    /* 005bf87e: mov byte ptr [ebp - 0x15], 0 */ W8((u32)(r_ebp+0xffffffebu), 0x0u);
    /* 005bf882: cmp dword ptr [ebp + 8], 0x65 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x65u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bf886: jl 0x5bfba7 */ if ((fS!=fO)) goto L_005bfba7;
L_005bf88c:; BB(0x005bf88c);
    /* 005bf88c: cmp dword ptr [ebp + 8], 0xc9 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xc9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bf893: jg 0x5bfba7 */ if ((!fZ&&fS==fO)) goto L_005bfba7;
L_005bf899:; BB(0x005bf899);
    /* 005bf899: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 005bf89f: cmp dword ptr [eax + 0x18], 0 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bf8a3: jle 0x5bfba7 */ if ((fZ||fS!=fO)) goto L_005bfba7;
L_005bf8a9:; BB(0x005bf8a9);
    /* 005bf8a9: mov byte ptr [ebp - 0x15], 1 */ W8((u32)(r_ebp+0xffffffebu), 0x1u);
    /* 005bf8ad: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005bf8b0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bf8b1: mov edx, dword ptr [ebp - 0xac] */ r_edx = R32((u32)(r_ebp+0xffffff54u));
    /* 005bf8b7: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 005bf8ba: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x5bf8bfu); f_005fb300();
    /* 005bf8bf: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005bf8c2: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bf8c6: jne 0x5bf8d0 */ if (!fZ) goto L_005bf8d0;
L_005bf8c8:; BB(0x005bf8c8);
    /* 005bf8c8: mov al, byte ptr [ebp - 0x15] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffebu))) & 0xffu);
    /* 005bf8cb: jmp 0x5bfbaa */ goto L_005bfbaa;
L_005bf8d0:; BB(0x005bf8d0);
    /* 005bf8d0: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 005bf8d6: add eax, 0x1c */ {  u32 a = r_eax; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bf8d9: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005bf8dc: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005bf8df: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bf8e3: jne 0x5bf8f1 */ if (!fZ) goto L_005bf8f1;
L_005bf8e5:; BB(0x005bf8e5);
    /* 005bf8e5: mov dword ptr [ebp - 0xb0], 0 */ W32((u32)(r_ebp+0xffffff50u), 0x0u);
    /* 005bf8ef: jmp 0x5bf906 */ goto L_005bf906;
L_005bf8f1:; BB(0x005bf8f1);
    /* 005bf8f1: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005bf8f4: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005bf8f7: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005bf8fa: sub ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005bf8fd: sar ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005bf900: mov dword ptr [ebp - 0xb0], ecx */ W32((u32)(r_ebp+0xffffff50u), r_ecx);
L_005bf906:; BB(0x005bf906);
    /* 005bf906: mov edx, dword ptr [ebp - 0xb0] */ r_edx = R32((u32)(r_ebp+0xffffff50u));
    /* 005bf90c: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005bf90f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bf910: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5bf915u); f_0062fbf0();
    /* 005bf915: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bf918: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005bf91b: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 005bf921: add eax, 0x1c */ {  u32 a = r_eax; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bf924: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 005bf927: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005bf92a: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bf92e: jne 0x5bf93c */ if (!fZ) goto L_005bf93c;
L_005bf930:; BB(0x005bf930);
    /* 005bf930: mov dword ptr [ebp - 0xb4], 0 */ W32((u32)(r_ebp+0xffffff4cu), 0x0u);
    /* 005bf93a: jmp 0x5bf951 */ goto L_005bf951;
L_005bf93c:; BB(0x005bf93c);
    /* 005bf93c: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005bf93f: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 005bf942: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005bf945: sub ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005bf948: sar ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005bf94b: mov dword ptr [ebp - 0xb4], ecx */ W32((u32)(r_ebp+0xffffff4cu), r_ecx);
L_005bf951:; BB(0x005bf951);
    /* 005bf951: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005bf954: cmp edx, dword ptr [ebp - 0xb4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff4cu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005bf95a: jb 0x5bf962 */ if (fC) goto L_005bf962;
L_005bf95c:; BB(0x005bf95c);
    /* 005bf95c: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5bf962u); call_ind(t); }
L_005bf962:; BB(0x005bf962);
    /* 005bf962: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 005bf965: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005bf968: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005bf96b: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 005bf96e: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005bf971: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005bf974: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bf975: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 005bf97b: add ecx, 0x1c */ {  u32 a = r_ecx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bf97e: call 0x5c0790 */ r_esp -= 4; W32(r_esp, 0x5bf983u); f_005c0790();
    /* 005bf983: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005bf986: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005bf988: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005bf98b: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 005bf98e: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5bf990u); call_ind(t); }
    /* 005bf990: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 005bf995: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5bf99au); f_00686d82();
    /* 005bf99a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bf99d: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005bf9a0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005bf9a7: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bf9ab: je 0x5bf9bd */ if (fZ) goto L_005bf9bd;
L_005bf9ad:; BB(0x005bf9ad);
    /* 005bf9ad: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005bf9b0: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x5bf9b5u); f_005f5bf0();
    /* 005bf9b5: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 005bf9bb: jmp 0x5bf9c7 */ goto L_005bf9c7;
L_005bf9bd:; BB(0x005bf9bd);
    /* 005bf9bd: mov dword ptr [ebp - 0xb8], 0 */ W32((u32)(r_ebp+0xffffff48u), 0x0u);
L_005bf9c7:; BB(0x005bf9c7);
    /* 005bf9c7: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 005bf9cd: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005bf9d0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005bf9d7: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005bf9da: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005bf9dd: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 005bf9df: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5bf9e4u); f_00686d82();
    /* 005bf9e4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bf9e7: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005bf9ea: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005bf9f1: cmp dword ptr [ebp - 0x38], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bf9f5: je 0x5bfa12 */ if (fZ) goto L_005bfa12;
L_005bf9f7:; BB(0x005bf9f7);
    /* 005bf9f7: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005bf9fa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bf9fb: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 005bfa01: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bfa02: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005bfa05: call 0x5bfc40 */ r_esp -= 4; W32(r_esp, 0x5bfa0au); f_005bfc40();
    /* 005bfa0a: mov dword ptr [ebp - 0xbc], eax */ W32((u32)(r_ebp+0xffffff44u), r_eax);
    /* 005bfa10: jmp 0x5bfa1c */ goto L_005bfa1c;
L_005bfa12:; BB(0x005bfa12);
    /* 005bfa12: mov dword ptr [ebp - 0xbc], 0 */ W32((u32)(r_ebp+0xffffff44u), 0x0u);
L_005bfa1c:; BB(0x005bfa1c);
    /* 005bfa1c: mov ecx, dword ptr [ebp - 0xbc] */ r_ecx = R32((u32)(r_ebp+0xffffff44u));
    /* 005bfa22: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 005bfa25: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005bfa2c: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005bfa2f: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 005bfa32: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 005bfa34: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5bfa39u); f_00686d82();
    /* 005bfa39: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bfa3c: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005bfa3f: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005bfa46: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bfa4a: je 0x5bfa6d */ if (fZ) goto L_005bfa6d;
L_005bfa4c:; BB(0x005bfa4c);
    /* 005bfa4c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005bfa4f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bfa50: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 005bfa56: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 005bfa59: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 005bfa5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bfa5d: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005bfa60: call 0x5bf080 */ r_esp -= 4; W32(r_esp, 0x5bfa65u); f_005bf080();
    /* 005bfa65: mov dword ptr [ebp - 0xc0], eax */ W32((u32)(r_ebp+0xffffff40u), r_eax);
    /* 005bfa6b: jmp 0x5bfa77 */ goto L_005bfa77;
L_005bfa6d:; BB(0x005bfa6d);
    /* 005bfa6d: mov dword ptr [ebp - 0xc0], 0 */ W32((u32)(r_ebp+0xffffff40u), 0x0u);
L_005bfa77:; BB(0x005bfa77);
    /* 005bfa77: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 005bfa7d: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 005bfa80: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005bfa87: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bfa89: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005bfa8e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bfa90: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005bfa93: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bfa94: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005bfa97: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bfa98: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005bfa9b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bfa9c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bfa9e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bfaa0: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005bfaa3: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005bfaa6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bfaa7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005bfaaa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bfaab: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005bfaae: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bfaaf: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 005bfab5: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005bfab8: call 0x5f9c10 */ r_esp -= 4; W32(r_esp, 0x5bfabdu); f_005f9c10();
    /* 005bfabd: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005bfac0: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005bfac3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bfac4: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005bfac7: call 0x5eb000 */ r_esp -= 4; W32(r_esp, 0x5bfaccu); f_005eb000();
    /* 005bfacc: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005bfacf: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005bfad2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bfad3: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005bfad6: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005bfad8: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005bfadb: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 005bfae1: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5bfae3u); call_ind(t); }
    /* 005bfae3: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005bfae6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bfae7: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005bfaea: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005bfaec: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005bfaef: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 005bfaf5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5bfaf7u); call_ind(t); }
    /* 005bfaf7: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005bfafa: mov dword ptr [ecx + 0x178], 0x14 */ W32((u32)(r_ecx+0x178u), 0x14u);
    /* 005bfb04: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005bfb06: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005bfb09: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bfb0a: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 005bfb10: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005bfb13: call 0x5fbcb0 */ r_esp -= 4; W32(r_esp, 0x5bfb18u); f_005fbcb0();
    /* 005bfb18: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005bfb1b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005bfb1d: mov dword ptr [ebp - 0xc4], edx */ W32((u32)(r_ebp+0xffffff3cu), r_edx);
    /* 005bfb23: cmp dword ptr [ebp - 0xc4], -2 */ {  u32 a = R32((u32)(r_ebp+0xffffff3cu)); u32 b = 0xfffffffeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bfb2a: je 0x5bfb37 */ if (fZ) goto L_005bfb37;
L_005bfb2c:; BB(0x005bfb2c);
    /* 005bfb2c: cmp dword ptr [ebp - 0xc4], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffff3cu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bfb33: je 0x5bfb4e */ if (fZ) goto L_005bfb4e;
L_005bfb35:; BB(0x005bfb35);
    /* 005bfb35: jmp 0x5bfb72 */ goto L_005bfb72;
L_005bfb37:; BB(0x005bfb37);
    /* 005bfb37: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 005bfb3d: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005bfb40: add ecx, 0x50 */ {  u32 a = r_ecx; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bfb43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bfb44: call 0x610980 */ r_esp -= 4; W32(r_esp, 0x5bfb49u); f_00610980();
    /* 005bfb49: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bfb4c: jmp 0x5bfb9c */ goto L_005bfb9c;
L_005bfb4e:; BB(0x005bfb4e);
    /* 005bfb4e: mov edx, dword ptr [ebp - 0xac] */ r_edx = R32((u32)(r_ebp+0xffffff54u));
    /* 005bfb54: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 005bfb57: add eax, 0x70 */ {  u32 a = r_eax; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bfb5a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bfb5b: call 0x610980 */ r_esp -= 4; W32(r_esp, 0x5bfb60u); f_00610980();
    /* 005bfb60: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bfb63: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 005bfb69: mov dword ptr [ecx + 0x18], 0 */ W32((u32)(r_ecx+0x18u), 0x0u);
    /* 005bfb70: jmp 0x5bfb9c */ goto L_005bfb9c;
L_005bfb72:; BB(0x005bfb72);
    /* 005bfb72: mov edx, dword ptr [ebp - 0xac] */ r_edx = R32((u32)(r_ebp+0xffffff54u));
    /* 005bfb78: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005bfb7b: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005bfb7e: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 005bfb84: mov dword ptr [ecx + 0x18], eax */ W32((u32)(r_ecx+0x18u), r_eax);
    /* 005bfb87: mov edx, dword ptr [ebp - 0xac] */ r_edx = R32((u32)(r_ebp+0xffffff54u));
    /* 005bfb8d: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 005bfb90: add eax, 0x50 */ {  u32 a = r_eax; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bfb93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bfb94: call 0x610980 */ r_esp -= 4; W32(r_esp, 0x5bfb99u); f_00610980();
    /* 005bfb99: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005bfb9c:; BB(0x005bfb9c);
    /* 005bfb9c: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 005bfba2: call 0x5bfc00 */ r_esp -= 4; W32(r_esp, 0x5bfba7u); f_005bfc00();
L_005bfba7:; BB(0x005bfba7);
    /* 005bfba7: mov al, byte ptr [ebp - 0x15] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffebu))) & 0xffu);
L_005bfbaa:; BB(0x005bfbaa);
    /* 005bfbaa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bfbad: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005bfbb4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005bfbb5: mov esp, ebp */ r_esp = r_ebp;
    /* 005bfbb7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bfbb8: ret 4 */ FN_RET(0x005bf850); r_esp += 8; return;
}

