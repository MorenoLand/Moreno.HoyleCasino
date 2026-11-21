#include "protos.h"

void f_005831c0(void) /* KenoRoom::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005831c0);
    /* 005831c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005831c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005831c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005831c5: push 0x6a6b98 */ { u32 v = 0x6a6b98u; r_esp -= 4; W32(r_esp, v); }
    /* 005831ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005831d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005831d1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005831d2: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005831d7: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005831d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005831da: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005831dd: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005831e3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005831e6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005831e9: call 0x5d7b60 */ r_esp -= 4; W32(r_esp, 0x5831eeu); f_005d7b60();
    /* 005831ee: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005831f5: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005831f8: mov dword ptr [eax], 0x6cc304 */ W32((u32)(r_eax), 0x6cc304u);
    /* 005831fe: push 0x6cc2f4 */ { u32 v = 0x6cc2f4u; r_esp -= 4; W32(r_esp, v); }
    /* 00583203: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x583208u); f_00630f40();
    /* 00583208: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058320b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058320c: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00583212: call 0x5f38b0 */ r_esp -= 4; W32(r_esp, 0x583217u); f_005f38b0();
    /* 00583217: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058321a: mov dword ptr [0x79357c], ecx */ W32((u32)(0x79357cu), r_ecx);
    /* 00583220: mov dword ptr [0x793580], 0 */ W32((u32)(0x793580u), 0x0u);
    /* 0058322a: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058322d: mov byte ptr [edx + 0x88], 0 */ W8((u32)(r_edx+0x88u), 0x0u);
    /* 00583234: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00583237: mov byte ptr [eax + 0x89], 0 */ W8((u32)(r_eax+0x89u), 0x0u);
    /* 0058323e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00583241: mov dword ptr [ecx + 0x84], 0 */ W32((u32)(r_ecx+0x84u), 0x0u);
    /* 0058324b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058324e: mov dword ptr [edx + 0x80], 0 */ W32((u32)(r_edx+0x80u), 0x0u);
    /* 00583258: push 0x30dfe2 */ { u32 v = 0x30dfe2u; r_esp -= 4; W32(r_esp, v); }
    /* 0058325d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00583260: call 0x5f1ad0 */ r_esp -= 4; W32(r_esp, 0x583265u); f_005f1ad0();
    /* 00583265: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0058326c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058326f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00583272: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00583279: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0058327a: mov esp, ebp */ r_esp = r_ebp;
    /* 0058327c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058327d: ret  */ FN_RET(0x005831c0); r_esp += 4; return;
}

void f_00583280(void) /* KenoRoom::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00583280);
    /* 00583280: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00583281: mov ebp, esp */ r_ebp = r_esp;
    /* 00583283: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00583285: push 0x6a6bbb */ { u32 v = 0x6a6bbbu; r_esp -= 4; W32(r_esp, v); }
    /* 0058328a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00583290: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00583291: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00583294: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00583299: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0058329b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058329c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0058329f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005832a5: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005832a8: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005832ab: mov dword ptr [eax], 0x6cc304 */ W32((u32)(r_eax), 0x6cc304u);
    /* 005832b1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005832b8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005832bb: movzx edx, byte ptr [ecx + 0x89] */ r_edx = (u32)R8((u32)(r_ecx+0x89u));
    /* 005832c2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005832c4: je 0x5832d9 */ if (fZ) goto L_005832d9;
L_005832c6:; BB(0x005832c6);
    /* 005832c6: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005832cc: call 0x5e1070 */ r_esp -= 4; W32(r_esp, 0x5832d1u); f_005e1070();
    /* 005832d1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005832d4: call 0x583830 */ r_esp -= 4; W32(r_esp, 0x5832d9u); f_00583830();
L_005832d9:; BB(0x005832d9);
    /* 005832d9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005832dc: call 0x583ae0 */ r_esp -= 4; W32(r_esp, 0x5832e1u); f_00583ae0();
    /* 005832e1: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005832e4: cmp dword ptr [eax + 0x84], 0 */ {  u32 a = R32((u32)(r_eax+0x84u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005832eb: je 0x58332c */ if (fZ) goto L_0058332c;
L_005832ed:; BB(0x005832ed);
    /* 005832ed: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005832f0: mov edx, dword ptr [ecx + 0x84] */ r_edx = R32((u32)(r_ecx+0x84u));
    /* 005832f6: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005832f9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005832fc: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005832ff: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00583303: je 0x583318 */ if (fZ) goto L_00583318;
L_00583305:; BB(0x00583305);
    /* 00583305: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00583307: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058330a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0058330c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058330f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00583311: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x583313u); call_ind(t); }
    /* 00583313: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00583316: jmp 0x58331f */ goto L_0058331f;
L_00583318:; BB(0x00583318);
    /* 00583318: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0058331f:; BB(0x0058331f);
    /* 0058331f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00583322: mov dword ptr [ecx + 0x84], 0 */ W32((u32)(r_ecx+0x84u), 0x0u);
L_0058332c:; BB(0x0058332c);
    /* 0058332c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0058332e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00583334: call 0x5f38b0 */ r_esp -= 4; W32(r_esp, 0x583339u); f_005f38b0();
    /* 00583339: mov edx, dword ptr [0x793580] */ r_edx = R32((u32)(0x793580u));
    /* 0058333f: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00583342: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00583345: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00583348: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058334c: je 0x583361 */ if (fZ) goto L_00583361;
L_0058334e:; BB(0x0058334e);
    /* 0058334e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00583350: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00583353: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00583355: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00583358: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0058335a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58335cu); call_ind(t); }
    /* 0058335c: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0058335f: jmp 0x583368 */ goto L_00583368;
L_00583361:; BB(0x00583361);
    /* 00583361: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00583368:; BB(0x00583368);
    /* 00583368: mov dword ptr [0x793580], 0 */ W32((u32)(0x793580u), 0x0u);
    /* 00583372: mov dword ptr [0x79357c], 0 */ W32((u32)(0x79357cu), 0x0u);
    /* 0058337c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00583383: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00583386: call 0x5d7bd0 */ r_esp -= 4; W32(r_esp, 0x58338bu); f_005d7bd0();
    /* 0058338b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058338e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00583395: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00583396: mov esp, ebp */ r_esp = r_ebp;
    /* 00583398: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00583399: ret  */ FN_RET(0x00583280); r_esp += 4; return;
}

void f_005833a0(void) /* KenoRoom::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005833a0);
    /* 005833a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005833a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005833a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005833a5: push 0x6a6be4 */ { u32 v = 0x6a6be4u; r_esp -= 4; W32(r_esp, v); }
    /* 005833aa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005833b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005833b1: sub esp, 0x138 */ {  u32 a = r_esp; u32 b = 0x138u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005833b7: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005833bc: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005833be: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005833c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005833c2: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005833c5: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005833cb: mov dword ptr [ebp - 0x13c], ecx */ W32((u32)(r_ebp+0xfffffec4u), r_ecx);
    /* 005833d1: mov ecx, dword ptr [ebp - 0x13c] */ r_ecx = R32((u32)(r_ebp+0xfffffec4u));
    /* 005833d7: call 0x5d8230 */ r_esp -= 4; W32(r_esp, 0x5833dcu); f_005d8230();
    /* 005833dc: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005833e3: jmp 0x5833ee */ goto L_005833ee;
L_005833e5:; BB(0x005833e5);
    /* 005833e5: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005833e8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005833eb: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_005833ee:; BB(0x005833ee);
    /* 005833ee: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005833f4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005833f6: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005833fc: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 00583402: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x583404u); call_ind(t); }
    /* 00583404: cmp dword ptr [ebp - 0x10], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00583407: jge 0x583520 */ if ((fS==fO)) goto L_00583520;
L_0058340d:; BB(0x0058340d);
    /* 0058340d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00583410: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00583411: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x583416u); f_005dcb00();
    /* 00583416: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00583419: mov dword ptr [ebp - 0x130], eax */ W32((u32)(r_ebp+0xfffffed0u), r_eax);
    /* 0058341f: mov ecx, dword ptr [ebp - 0x130] */ r_ecx = R32((u32)(r_ebp+0xfffffed0u));
    /* 00583425: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x58342au); f_0063aac0();
    /* 0058342a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0058342c: mov dword ptr [ebp - 0x128], edx */ W32((u32)(r_ebp+0xfffffed8u), r_edx);
    /* 00583432: cmp dword ptr [ebp - 0x128], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffed8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00583439: je 0x583463 */ if (fZ) goto L_00583463;
L_0058343b:; BB(0x0058343b);
    /* 0058343b: mov ecx, dword ptr [ebp - 0x130] */ r_ecx = R32((u32)(r_ebp+0xfffffed0u));
    /* 00583441: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x583446u); f_0063aac0();
    /* 00583446: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00583448: mov dword ptr [ebp - 0x12c], eax */ W32((u32)(r_ebp+0xfffffed4u), r_eax);
    /* 0058344e: cmp dword ptr [ebp - 0x12c], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffed4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00583455: je 0x583463 */ if (fZ) goto L_00583463;
L_00583457:; BB(0x00583457);
    /* 00583457: mov dword ptr [ebp - 0x140], 0 */ W32((u32)(r_ebp+0xfffffec0u), 0x0u);
    /* 00583461: jmp 0x58346d */ goto L_0058346d;
L_00583463:; BB(0x00583463);
    /* 00583463: mov dword ptr [ebp - 0x140], 1 */ W32((u32)(r_ebp+0xfffffec0u), 0x1u);
L_0058346d:; BB(0x0058346d);
    /* 0058346d: movzx ecx, byte ptr [ebp - 0x140] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffec0u));
    /* 00583474: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00583476: je 0x58351b */ if (fZ) goto L_0058351b;
L_0058347c:; BB(0x0058347c);
    /* 0058347c: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058347f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00583480: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x583485u); f_005dcb00();
    /* 00583485: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00583488: mov ecx, eax */ r_ecx = r_eax;
    /* 0058348a: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x58348fu); f_005d52e0();
    /* 0058348f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00583492: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00583495: cmp dword ptr [eax + 0x2c], 0 */ {  u32 a = R32((u32)(r_eax+0x2cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00583499: je 0x58350c */ if (fZ) goto L_0058350c;
L_0058349b:; BB(0x0058349b);
    /* 0058349b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058349e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058349f: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5834a4u); f_005dcb00();
    /* 005834a4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005834a7: mov dword ptr [ebp - 0x134], eax */ W32((u32)(r_ebp+0xfffffeccu), r_eax);
    /* 005834ad: mov ecx, dword ptr [ebp - 0x134] */ r_ecx = R32((u32)(r_ebp+0xfffffeccu));
    /* 005834b3: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5834b8u); f_0063aac0();
    /* 005834b8: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005834bb: mov dword ptr [ebp - 0x138], eax */ W32((u32)(r_ebp+0xfffffec8u), r_eax);
    /* 005834c1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005834c4: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 005834c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005834c8: mov ecx, dword ptr [ebp - 0x138] */ r_ecx = R32((u32)(r_ebp+0xfffffec8u));
    /* 005834ce: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005834cf: push 0x6cc634 */ { u32 v = 0x6cc634u; r_esp -= 4; W32(r_esp, v); }
    /* 005834d4: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5834d9u); f_00630f40();
    /* 005834d9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005834dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005834dd: lea edx, [ebp - 0x11c] */ r_edx = (u32)(r_ebp+0xfffffee4u);
    /* 005834e3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005834e4: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5834eau); call_ind(t); }
    /* 005834ea: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005834ed: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005834ef: push 0x6cc624 */ { u32 v = 0x6cc624u; r_esp -= 4; W32(r_esp, v); }
    /* 005834f4: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5834f9u); f_00630f40();
    /* 005834f9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005834fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005834fd: lea eax, [ebp - 0x11c] */ r_eax = (u32)(r_ebp+0xfffffee4u);
    /* 00583503: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00583504: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x583509u); f_0062ff10();
    /* 00583509: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0058350c:; BB(0x0058350c);
    /* 0058350c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058350f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00583510: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00583516: call 0x5e1410 */ r_esp -= 4; W32(r_esp, 0x58351bu); f_005e1410();
L_0058351b:; BB(0x0058351b);
    /* 0058351b: jmp 0x5833e5 */ goto L_005833e5;
L_00583520:; BB(0x00583520);
    /* 00583520: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00583522: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x583527u); f_00686d82();
    /* 00583527: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058352a: mov dword ptr [ebp - 0x124], eax */ W32((u32)(r_ebp+0xfffffedcu), r_eax);
    /* 00583530: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00583537: cmp dword ptr [ebp - 0x124], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffedcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058353e: je 0x583567 */ if (fZ) goto L_00583567;
L_00583540:; BB(0x00583540);
    /* 00583540: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00583542: mov ecx, dword ptr [ebp - 0x124] */ r_ecx = R32((u32)(r_ebp+0xfffffedcu));
    /* 00583548: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x58354du); f_005fc0d0();
    /* 0058354d: mov edx, dword ptr [ebp - 0x124] */ r_edx = R32((u32)(r_ebp+0xfffffedcu));
    /* 00583553: mov dword ptr [edx], 0x6cc604 */ W32((u32)(r_edx), 0x6cc604u);
    /* 00583559: mov eax, dword ptr [ebp - 0x124] */ r_eax = R32((u32)(r_ebp+0xfffffedcu));
    /* 0058355f: mov dword ptr [ebp - 0x144], eax */ W32((u32)(r_ebp+0xfffffebcu), r_eax);
    /* 00583565: jmp 0x583571 */ goto L_00583571;
L_00583567:; BB(0x00583567);
    /* 00583567: mov dword ptr [ebp - 0x144], 0 */ W32((u32)(r_ebp+0xfffffebcu), 0x0u);
L_00583571:; BB(0x00583571);
    /* 00583571: mov ecx, dword ptr [ebp - 0x144] */ r_ecx = R32((u32)(r_ebp+0xfffffebcu));
    /* 00583577: mov dword ptr [ebp - 0x120], ecx */ W32((u32)(r_ebp+0xfffffee0u), r_ecx);
    /* 0058357d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00583584: mov edx, dword ptr [ebp - 0x120] */ r_edx = R32((u32)(r_ebp+0xfffffee0u));
    /* 0058358a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058358b: mov ecx, dword ptr [ebp - 0x13c] */ r_ecx = R32((u32)(r_ebp+0xfffffec4u));
    /* 00583591: call 0x5f1b70 */ r_esp -= 4; W32(r_esp, 0x583596u); f_005f1b70();
    /* 00583596: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00583599: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005835a0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005835a1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005835a4: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005835a6: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x5835abu); f_00686d72();
    /* 005835ab: mov esp, ebp */ r_esp = r_ebp;
    /* 005835ad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005835ae: ret  */ FN_RET(0x005833a0); r_esp += 4; return;
}

void f_005836b0(void) /* KenoRoom::vfunc12 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005836b0);
    /* 005836b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005836b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005836b3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005836b6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005836b9: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005836bc: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005836bf: cmp dword ptr [ebp - 8], 0x186a1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x186a1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005836c6: je 0x5836dc */ if (fZ) goto L_005836dc;
L_005836c8:; BB(0x005836c8);
    /* 005836c8: cmp dword ptr [ebp - 8], 0x186c3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x186c3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005836cf: je 0x58372d */ if (fZ) goto L_0058372d;
L_005836d1:; BB(0x005836d1);
    /* 005836d1: cmp dword ptr [ebp - 8], 0x186d7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x186d7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005836d8: je 0x58373e */ if (fZ) goto L_0058373e;
L_005836da:; BB(0x005836da);
    /* 005836da: jmp 0x583759 */ goto L_00583759;
L_005836dc:; BB(0x005836dc);
    /* 005836dc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005836de: push 0x186a6 */ { u32 v = 0x186a6u; r_esp -= 4; W32(r_esp, v); }
    /* 005836e3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005836e6: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x5836ebu); f_005fe640();
    /* 005836eb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005836ed: push 0x186a9 */ { u32 v = 0x186a9u; r_esp -= 4; W32(r_esp, v); }
    /* 005836f2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005836f5: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x5836fau); f_005fe640();
    /* 005836fa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005836fc: push 0x186a7 */ { u32 v = 0x186a7u; r_esp -= 4; W32(r_esp, v); }
    /* 00583701: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00583704: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x583709u); f_005fe640();
    /* 00583709: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0058370b: push 0x186a8 */ { u32 v = 0x186a8u; r_esp -= 4; W32(r_esp, v); }
    /* 00583710: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00583713: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x583718u); f_005fe640();
    /* 00583718: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0058371a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0058371c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0058371e: push 0x1399 */ { u32 v = 0x1399u; r_esp -= 4; W32(r_esp, v); }
    /* 00583723: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00583726: call 0x5fe240 */ r_esp -= 4; W32(r_esp, 0x58372bu); f_005fe240();
    /* 0058372b: jmp 0x583759 */ goto L_00583759;
L_0058372d:; BB(0x0058372d);
    /* 0058372d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0058372f: push 0x186c6 */ { u32 v = 0x186c6u; r_esp -= 4; W32(r_esp, v); }
    /* 00583734: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00583737: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x58373cu); f_005fe640();
    /* 0058373c: jmp 0x583759 */ goto L_00583759;
L_0058373e:; BB(0x0058373e);
    /* 0058373e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00583740: push -2 */ { u32 v = 0xfffffffeu; r_esp -= 4; W32(r_esp, v); }
    /* 00583742: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00583745: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x58374au); f_005fe640();
    /* 0058374a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0058374c: push 0x186da */ { u32 v = 0x186dau; r_esp -= 4; W32(r_esp, v); }
    /* 00583751: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00583754: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x583759u); f_005fe640();
L_00583759:; BB(0x00583759);
    /* 00583759: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0058375c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058375d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00583760: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00583761: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00583764: call 0x5d8670 */ r_esp -= 4; W32(r_esp, 0x583769u); f_005d8670();
    /* 00583769: mov esp, ebp */ r_esp = r_ebp;
    /* 0058376b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058376c: ret 8 */ FN_RET(0x005836b0); r_esp += 12; return;
}

void f_00583770(void) /* KenoRoom::vfunc3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00583770);
    /* 00583770: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00583771: mov ebp, esp */ r_ebp = r_esp;
    /* 00583773: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00583774: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00583777: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058377a: call 0x5d8020 */ r_esp -= 4; W32(r_esp, 0x58377fu); f_005d8020();
    /* 0058377f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00583782: cmp dword ptr [eax + 0x84], 0 */ {  u32 a = R32((u32)(r_eax+0x84u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00583789: je 0x5837a7 */ if (fZ) goto L_005837a7;
L_0058378b:; BB(0x0058378b);
    /* 0058378b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058378e: movzx edx, byte ptr [ecx + 0x89] */ r_edx = (u32)R8((u32)(r_ecx+0x89u));
    /* 00583795: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00583797: jne 0x5837a7 */ if (!fZ) goto L_005837a7;
L_00583799:; BB(0x00583799);
    /* 00583799: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058379c: mov ecx, dword ptr [eax + 0x84] */ r_ecx = R32((u32)(r_eax+0x84u));
    /* 005837a2: call 0x57e550 */ r_esp -= 4; W32(r_esp, 0x5837a7u); f_0057e550();
L_005837a7:; BB(0x005837a7);
    /* 005837a7: mov esp, ebp */ r_esp = r_ebp;
    /* 005837a9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005837aa: ret  */ FN_RET(0x00583770); r_esp += 4; return;
}

void f_005837b0(void) /* KenoRoom::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005837b0);
    /* 005837b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005837b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005837b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005837b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005837b7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005837ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005837bb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005837be: call 0x5d7f40 */ r_esp -= 4; W32(r_esp, 0x5837c3u); f_005d7f40();
    /* 005837c3: mov esp, ebp */ r_esp = r_ebp;
    /* 005837c5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005837c6: ret 4 */ FN_RET(0x005837b0); r_esp += 8; return;
}

void f_00583b00(void) /* KenoRoom::vfunc158 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00583b00);
    /* 00583b00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00583b01: mov ebp, esp */ r_ebp = r_esp;
    /* 00583b03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00583b04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00583b07: cmp dword ptr [0x793584], 0 */ {  u32 a = R32((u32)(0x793584u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00583b0e: je 0x583b1b */ if (fZ) goto L_00583b1b;
L_00583b10:; BB(0x00583b10);
    /* 00583b10: mov ecx, dword ptr [0x793584] */ r_ecx = R32((u32)(0x793584u));
    /* 00583b16: call 0x589290 */ r_esp -= 4; W32(r_esp, 0x583b1bu); f_00589290();
L_00583b1b:; BB(0x00583b1b);
    /* 00583b1b: mov esp, ebp */ r_esp = r_ebp;
    /* 00583b1d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00583b1e: ret  */ FN_RET(0x00583b00); r_esp += 4; return;
}

void f_00583b20(void) /* KenoRoom::vfunc149 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00583b20);
    /* 00583b20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00583b21: mov ebp, esp */ r_ebp = r_esp;
    /* 00583b23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00583b24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00583b27: mov eax, 0x18a89 */ r_eax = 0x18a89u;
    /* 00583b2c: mov esp, ebp */ r_esp = r_ebp;
    /* 00583b2e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00583b2f: ret  */ FN_RET(0x00583b20); r_esp += 4; return;
}

