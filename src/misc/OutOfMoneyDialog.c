#include "protos.h"

void f_005ce250(void) /* OutOfMoneyDialog::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ce250);
    /* 005ce250: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ce251: mov ebp, esp */ r_ebp = r_esp;
    /* 005ce253: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ce255: push 0x6a8c0b */ { u32 v = 0x6a8c0bu; r_esp -= 4; W32(r_esp, v); }
    /* 005ce25a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ce260: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ce261: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ce262: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005ce267: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005ce269: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ce26a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005ce26d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005ce273: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005ce276: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce278: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce27a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ce27d: call 0x5f71f0 */ r_esp -= 4; W32(r_esp, 0x5ce282u); f_005f71f0();
    /* 005ce282: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ce289: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ce28c: mov dword ptr [eax], 0x6d2ca4 */ W32((u32)(r_eax), 0x6d2ca4u);
    /* 005ce292: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce294: push 0x30d507 */ { u32 v = 0x30d507u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce299: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ce29c: call 0x5f83d0 */ r_esp -= 4; W32(r_esp, 0x5ce2a1u); f_005f83d0();
    /* 005ce2a1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005ce2a8: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ce2ab: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ce2ae: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ce2b5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ce2b6: mov esp, ebp */ r_esp = r_ebp;
    /* 005ce2b8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ce2b9: ret  */ FN_RET(0x005ce250); r_esp += 4; return;
}

void f_005ce540(void) /* OutOfMoneyDialog::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ce540);
    /* 005ce540: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ce541: mov ebp, esp */ r_ebp = r_esp;
    /* 005ce543: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ce546: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005ce549: mov byte ptr [ebp - 1], 0 */ W8((u32)(r_ebp+0xffffffffu), 0x0u);
    /* 005ce54d: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ce551: jne 0x5ce5fe */ if (!fZ) goto L_005ce5fe;
L_005ce557:; BB(0x005ce557);
    /* 005ce557: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce559: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ce55c: call 0x5fb3a0 */ r_esp -= 4; W32(r_esp, 0x5ce561u); f_005fb3a0();
    /* 005ce561: mov ecx, eax */ r_ecx = r_eax;
    /* 005ce563: call 0x606570 */ r_esp -= 4; W32(r_esp, 0x5ce568u); f_00606570();
    /* 005ce568: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005ce56b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005ce56e: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005ce571: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005ce574: cmp dword ptr [ebp - 0x14], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005ce578: ja 0x5ce5dd */ if ((!fC&&!fZ)) goto L_005ce5dd;
L_005ce57a:; BB(0x005ce57a);
    /* 005ce57a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ce57d: jmp dword ptr [ecx*4 + 0x5ce63c] */ { u32 t = R32((u32)(r_ecx*4+0x5ce63cu)); switch (t) { case 0x5ce584u: goto L_005ce584; case 0x5ce594u: goto L_005ce594; case 0x5ce5abu: goto L_005ce5ab; case 0x5ce5c3u: goto L_005ce5c3; default: UNSUP(0x005ce57d, "jump table entry is not a known target"); } }
L_005ce584:; BB(0x005ce584);
    /* 005ce584: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ce587: mov ecx, dword ptr [edx + 0x1bc] */ r_ecx = R32((u32)(r_edx+0x1bcu));
    /* 005ce58d: call 0x5d6de0 */ r_esp -= 4; W32(r_esp, 0x5ce592u); f_005d6de0();
    /* 005ce592: jmp 0x5ce5dd */ goto L_005ce5dd;
L_005ce594:; BB(0x005ce594);
    /* 005ce594: push 0x1388 */ { u32 v = 0x1388u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce599: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce59b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ce59e: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 005ce5a4: call 0x5d70e0 */ r_esp -= 4; W32(r_esp, 0x5ce5a9u); f_005d70e0();
    /* 005ce5a9: jmp 0x5ce5dd */ goto L_005ce5dd;
L_005ce5ab:; BB(0x005ce5ab);
    /* 005ce5ab: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ce5ae: mov edx, dword ptr [ecx + 0x1bc] */ r_edx = R32((u32)(r_ecx+0x1bcu));
    /* 005ce5b4: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005ce5b7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ce5ba: mov byte ptr [eax + 0x4a1], 1 */ W8((u32)(r_eax+0x4a1u), 0x1u);
    /* 005ce5c1: jmp 0x5ce5dd */ goto L_005ce5dd;
L_005ce5c3:; BB(0x005ce5c3);
    /* 005ce5c3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ce5c6: mov edx, dword ptr [ecx + 0x1bc] */ r_edx = R32((u32)(r_ecx+0x1bcu));
    /* 005ce5cc: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005ce5cf: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ce5d2: mov byte ptr [eax + 0x4a1], 1 */ W8((u32)(r_eax+0x4a1u), 0x1u);
    /* 005ce5d9: mov byte ptr [ebp - 1], 1 */ W8((u32)(r_ebp+0xffffffffu), 0x1u);
L_005ce5dd:; BB(0x005ce5dd);
    /* 005ce5dd: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005ce5e3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ce5e5: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005ce5eb: mov eax, dword ptr [edx + 0x278] */ r_eax = R32((u32)(r_edx+0x278u));
    /* 005ce5f1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ce5f3u); call_ind(t); }
    /* 005ce5f3: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005ce5f9: call 0x5dbcd0 */ r_esp -= 4; W32(r_esp, 0x5ce5feu); f_005dbcd0();
L_005ce5fe:; BB(0x005ce5fe);
    /* 005ce5fe: movzx ecx, byte ptr [ebp - 1] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 005ce602: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ce604: je 0x5ce634 */ if (fZ) goto L_005ce634;
L_005ce606:; BB(0x005ce606);
    /* 005ce606: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ce608: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005ce60e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ce610: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005ce616: mov edx, dword ptr [eax + 0x258] */ r_edx = R32((u32)(r_eax+0x258u));
    /* 005ce61c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5ce61eu); call_ind(t); }
    /* 005ce61e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ce61f: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005ce624: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ce626: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005ce62c: mov eax, dword ptr [edx + 0x334] */ r_eax = R32((u32)(r_edx+0x334u));
    /* 005ce632: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ce634u); call_ind(t); }
L_005ce634:; BB(0x005ce634);
    /* 005ce634: mov esp, ebp */ r_esp = r_ebp;
    /* 005ce636: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ce637: ret 4 */ FN_RET(0x005ce540); r_esp += 8; return;
}

