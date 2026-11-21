#include "protos.h"

void f_00434100(void) /* CrapsState::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00434100);
    /* 00434100: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00434101: mov ebp, esp */ r_ebp = r_esp;
    /* 00434103: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00434106: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00434109: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043410c: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x434111u); f_005e9e20();
    /* 00434111: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00434114: mov dword ptr [eax], 0x6b7f1c */ W32((u32)(r_eax), 0x6b7f1cu);
    /* 0043411a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00434121: jmp 0x43412c */ goto L_0043412c;
L_00434123:; BB(0x00434123);
    /* 00434123: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00434126: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00434129: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0043412c:; BB(0x0043412c);
    /* 0043412c: cmp dword ptr [ebp - 4], 0x4c */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00434130: jge 0x434142 */ if ((fS==fO)) goto L_00434142;
L_00434132:; BB(0x00434132);
    /* 00434132: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00434135: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00434138: mov dword ptr [eax + edx*4 + 4], 0 */ W32((u32)(r_eax+r_edx*4+0x4u), 0x0u);
    /* 00434140: jmp 0x434123 */ goto L_00434123;
L_00434142:; BB(0x00434142);
    /* 00434142: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00434145: mov esp, ebp */ r_esp = r_ebp;
    /* 00434147: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00434148: ret  */ FN_RET(0x00434100); r_esp += 4; return;
}

void f_00434150(void) /* CrapsState::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00434150);
    /* 00434150: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00434151: mov ebp, esp */ r_ebp = r_esp;
    /* 00434153: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00434155: push 0x69e7d8 */ { u32 v = 0x69e7d8u; r_esp -= 4; W32(r_esp, v); }
    /* 0043415a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00434160: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00434161: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00434164: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00434169: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043416b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043416c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0043416f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00434175: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00434178: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0043417b: mov dword ptr [eax], 0x6b7f1c */ W32((u32)(r_eax), 0x6b7f1cu);
    /* 00434181: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00434188: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0043418f: jmp 0x43419a */ goto L_0043419a;
L_00434191:; BB(0x00434191);
    /* 00434191: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00434194: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00434197: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0043419a:; BB(0x0043419a);
    /* 0043419a: cmp dword ptr [ebp - 0x10], 0x4c */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043419e: jge 0x4341d5 */ if ((fS==fO)) goto L_004341d5;
L_004341a0:; BB(0x004341a0);
    /* 004341a0: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004341a3: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004341a6: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 004341aa: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 004341ad: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004341b0: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 004341b3: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004341b7: je 0x4341cc */ if (fZ) goto L_004341cc;
L_004341b9:; BB(0x004341b9);
    /* 004341b9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004341bb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004341be: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004341c0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004341c3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004341c5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4341c7u); call_ind(t); }
    /* 004341c7: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004341ca: jmp 0x4341d3 */ goto L_004341d3;
L_004341cc:; BB(0x004341cc);
    /* 004341cc: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_004341d3:; BB(0x004341d3);
    /* 004341d3: jmp 0x434191 */ goto L_00434191;
L_004341d5:; BB(0x004341d5);
    /* 004341d5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004341dc: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004341df: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x4341e4u); f_005e9e40();
    /* 004341e4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004341e7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004341ee: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004341ef: mov esp, ebp */ r_esp = r_ebp;
    /* 004341f1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004341f2: ret  */ FN_RET(0x00434150); r_esp += 4; return;
}

void f_00434820(void) /* crapsstate::func_00434820 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00434820);
    /* 00434820: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00434821: mov ebp, esp */ r_ebp = r_esp;
    /* 00434823: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00434826: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00434829: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00434830: jmp 0x43483b */ goto L_0043483b;
L_00434832:; BB(0x00434832);
    /* 00434832: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00434835: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00434838: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0043483b:; BB(0x0043483b);
    /* 0043483b: cmp dword ptr [ebp - 4], 0x4c */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043483f: jge 0x434857 */ if ((fS==fO)) goto L_00434857;
L_00434841:; BB(0x00434841);
    /* 00434841: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00434844: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00434847: mov eax, dword ptr [edx + ecx*4 + 4] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 0043484b: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043484e: jne 0x434855 */ if (!fZ) goto L_00434855;
L_00434850:; BB(0x00434850);
    /* 00434850: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00434853: jmp 0x434875 */ goto L_00434875;
L_00434855:; BB(0x00434855);
    /* 00434855: jmp 0x434832 */ goto L_00434832;
L_00434857:; BB(0x00434857);
    /* 00434857: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00434859: jne 0x434872 */ if (!fZ) goto L_00434872;
L_0043485b:; BB(0x0043485b);
    /* 0043485b: push 0x13d */ { u32 v = 0x13du; r_esp -= 4; W32(r_esp, v); }
    /* 00434860: push 0x6b7f20 */ { u32 v = 0x6b7f20u; r_esp -= 4; W32(r_esp, v); }
    /* 00434865: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0043486a: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x43486fu); f_005e9f20();
    /* 0043486f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00434872:; BB(0x00434872);
    /* 00434872: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00434875:; BB(0x00434875);
    /* 00434875: mov esp, ebp */ r_esp = r_ebp;
    /* 00434877: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00434878: ret 4 */ FN_RET(0x00434820); r_esp += 8; return;
}

void f_00434880(void) /* crapsstate::func_00434880 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00434880);
    /* 00434880: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00434881: mov ebp, esp */ r_ebp = r_esp;
    /* 00434883: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00434886: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00434889: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00434890: jmp 0x43489b */ goto L_0043489b;
L_00434892:; BB(0x00434892);
    /* 00434892: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00434895: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00434898: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0043489b:; BB(0x0043489b);
    /* 0043489b: cmp dword ptr [ebp - 4], 0x4c */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043489f: jge 0x4348bc */ if ((fS==fO)) goto L_004348bc;
L_004348a1:; BB(0x004348a1);
    /* 004348a1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004348a4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004348a7: mov ecx, dword ptr [edx + ecx*4 + 4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 004348ab: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x4348b0u); f_005f5400();
    /* 004348b0: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004348b3: jne 0x4348ba */ if (!fZ) goto L_004348ba;
L_004348b5:; BB(0x004348b5);
    /* 004348b5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004348b8: jmp 0x4348da */ goto L_004348da;
L_004348ba:; BB(0x004348ba);
    /* 004348ba: jmp 0x434892 */ goto L_00434892;
L_004348bc:; BB(0x004348bc);
    /* 004348bc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 004348be: jne 0x4348d7 */ if (!fZ) goto L_004348d7;
L_004348c0:; BB(0x004348c0);
    /* 004348c0: push 0x14b */ { u32 v = 0x14bu; r_esp -= 4; W32(r_esp, v); }
    /* 004348c5: push 0x6b7f20 */ { u32 v = 0x6b7f20u; r_esp -= 4; W32(r_esp, v); }
    /* 004348ca: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 004348cf: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4348d4u); f_005e9f20();
    /* 004348d4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004348d7:; BB(0x004348d7);
    /* 004348d7: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_004348da:; BB(0x004348da);
    /* 004348da: mov esp, ebp */ r_esp = r_ebp;
    /* 004348dc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004348dd: ret 4 */ FN_RET(0x00434880); r_esp += 8; return;
}

void f_0043b830(void) /* crapsstate::func_0043b830 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043b830);
    /* 0043b830: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043b831: mov ebp, esp */ r_ebp = r_esp;
    /* 0043b833: sub esp, 0x814 */ {  u32 a = r_esp; u32 b = 0x814u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043b839: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0043b83e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043b840: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0043b843: mov dword ptr [ebp - 0x814], ecx */ W32((u32)(r_ebp+0xfffff7ecu), r_ecx);
    /* 0043b849: mov eax, dword ptr [0x7906d4] */ r_eax = R32((u32)(0x7906d4u));
    /* 0043b84e: mov ecx, dword ptr [eax + 0xad8] */ r_ecx = R32((u32)(r_eax+0xad8u));
    /* 0043b854: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043b857: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b85b: jne 0x43b874 */ if (!fZ) goto L_0043b874;
L_0043b85d:; BB(0x0043b85d);
    /* 0043b85d: push 0x998 */ { u32 v = 0x998u; r_esp -= 4; W32(r_esp, v); }
    /* 0043b862: push 0x6b7f20 */ { u32 v = 0x6b7f20u; r_esp -= 4; W32(r_esp, v); }
    /* 0043b867: push 0x6b6c68 */ { u32 v = 0x6b6c68u; r_esp -= 4; W32(r_esp, v); }
    /* 0043b86c: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x43b871u); f_005e9f20();
    /* 0043b871: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0043b874:; BB(0x0043b874);
    /* 0043b874: mov byte ptr [ebp - 0x808], 0 */ W8((u32)(r_ebp+0xfffff7f8u), 0x0u);
    /* 0043b87b: mov eax, dword ptr [ebp - 0x814] */ r_eax = R32((u32)(r_ebp+0xfffff7ecu));
    /* 0043b881: mov ecx, dword ptr [eax + 0xac4] */ r_ecx = R32((u32)(r_eax+0xac4u));
    /* 0043b887: mov dword ptr [ebp - 0x80c], ecx */ W32((u32)(r_ebp+0xfffff7f4u), r_ecx);
    /* 0043b88d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0043b88f: cmp dword ptr [ebp - 0x80c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffff7f4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b896: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0043b899: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 0043b89c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b89e: jne 0x43b8bf */ if (!fZ) goto L_0043b8bf;
L_0043b8a0:; BB(0x0043b8a0);
    /* 0043b8a0: push 0x6b8064 */ { u32 v = 0x6b8064u; r_esp -= 4; W32(r_esp, v); }
    /* 0043b8a5: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x43b8aau); f_00630f40();
    /* 0043b8aa: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043b8ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043b8ae: lea ecx, [ebp - 0x808] */ r_ecx = (u32)(r_ebp+0xfffff7f8u);
    /* 0043b8b4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043b8b5: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x43b8bau); f_00686d8e();
    /* 0043b8ba: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043b8bd: jmp 0x43b90f */ goto L_0043b90f;
L_0043b8bf:; BB(0x0043b8bf);
    /* 0043b8bf: push 0x6b804c */ { u32 v = 0x6b804cu; r_esp -= 4; W32(r_esp, v); }
    /* 0043b8c4: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x43b8c9u); f_00630f40();
    /* 0043b8c9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043b8cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043b8cd: lea edx, [ebp - 0x808] */ r_edx = (u32)(r_ebp+0xfffff7f8u);
    /* 0043b8d3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043b8d4: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x43b8d9u); f_00686d8e();
    /* 0043b8d9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043b8dc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043b8df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043b8e0: mov ecx, dword ptr [ebp - 0x814] */ r_ecx = R32((u32)(r_ebp+0xfffff7ecu));
    /* 0043b8e6: call 0x435d40 */ r_esp -= 4; W32(r_esp, 0x43b8ebu); f_00435d40();
    /* 0043b8eb: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0043b8ee: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b8f0: je 0x43b90f */ if (fZ) goto L_0043b90f;
L_0043b8f2:; BB(0x0043b8f2);
    /* 0043b8f2: push 0x6b8034 */ { u32 v = 0x6b8034u; r_esp -= 4; W32(r_esp, v); }
    /* 0043b8f7: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x43b8fcu); f_00630f40();
    /* 0043b8fc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043b8ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043b900: lea edx, [ebp - 0x808] */ r_edx = (u32)(r_ebp+0xfffff7f8u);
    /* 0043b906: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043b907: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x43b90cu); f_00686ec6();
    /* 0043b90c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0043b90f:; BB(0x0043b90f);
    /* 0043b90f: lea eax, [ebp - 0x808] */ r_eax = (u32)(r_ebp+0xfffff7f8u);
    /* 0043b915: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043b916: push 0x6b6940 */ { u32 v = 0x6b6940u; r_esp -= 4; W32(r_esp, v); }
    /* 0043b91b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x43b920u); f_00630f40();
    /* 0043b920: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043b923: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043b924: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043b926: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 0043b92c: call 0x57be80 */ r_esp -= 4; W32(r_esp, 0x43b931u); f_0057be80();
    /* 0043b931: mov byte ptr [ebp - 0x808], 0 */ W8((u32)(r_ebp+0xfffff7f8u), 0x0u);
    /* 0043b938: mov ecx, dword ptr [ebp - 0x814] */ r_ecx = R32((u32)(r_ebp+0xfffff7ecu));
    /* 0043b93e: mov edx, dword ptr [ecx + 0xac4] */ r_edx = R32((u32)(r_ecx+0xac4u));
    /* 0043b944: mov dword ptr [ebp - 0x810], edx */ W32((u32)(r_ebp+0xfffff7f0u), r_edx);
    /* 0043b94a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043b94c: cmp dword ptr [ebp - 0x810], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffff7f0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b953: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0043b956: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0043b959: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b95b: jne 0x43b97f */ if (!fZ) goto L_0043b97f;
L_0043b95d:; BB(0x0043b95d);
    /* 0043b95d: push 0x6b801c */ { u32 v = 0x6b801cu; r_esp -= 4; W32(r_esp, v); }
    /* 0043b962: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x43b967u); f_00630f40();
    /* 0043b967: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043b96a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043b96b: lea edx, [ebp - 0x808] */ r_edx = (u32)(r_ebp+0xfffff7f8u);
    /* 0043b971: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043b972: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x43b977u); f_00686ec6();
    /* 0043b977: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043b97a: jmp 0x43bac6 */ goto L_0043bac6;
L_0043b97f:; BB(0x0043b97f);
    /* 0043b97f: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 0043b983: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b985: jne 0x43b9e7 */ if (!fZ) goto L_0043b9e7;
L_0043b987:; BB(0x0043b987);
    /* 0043b987: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043b989: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043b98c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043b98d: mov ecx, dword ptr [ebp - 0x814] */ r_ecx = R32((u32)(r_ebp+0xfffff7ecu));
    /* 0043b993: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x43b998u); f_004369a0();
    /* 0043b998: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0043b99b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b99d: je 0x43b9b7 */ if (fZ) goto L_0043b9b7;
L_0043b99f:; BB(0x0043b99f);
    /* 0043b99f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043b9a1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043b9a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043b9a5: mov ecx, dword ptr [ebp - 0x814] */ r_ecx = R32((u32)(r_ebp+0xfffff7ecu));
    /* 0043b9ab: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x43b9b0u); f_004369a0();
    /* 0043b9b0: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0043b9b3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b9b5: je 0x43b9e7 */ if (fZ) goto L_0043b9e7;
L_0043b9b7:; BB(0x0043b9b7);
    /* 0043b9b7: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0043b9b9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043b9bc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043b9bd: mov ecx, dword ptr [ebp - 0x814] */ r_ecx = R32((u32)(r_ebp+0xfffff7ecu));
    /* 0043b9c3: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x43b9c8u); f_004369a0();
    /* 0043b9c8: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0043b9cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b9cd: je 0x43ba04 */ if (fZ) goto L_0043ba04;
L_0043b9cf:; BB(0x0043b9cf);
    /* 0043b9cf: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0043b9d1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043b9d4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043b9d5: mov ecx, dword ptr [ebp - 0x814] */ r_ecx = R32((u32)(r_ebp+0xfffff7ecu));
    /* 0043b9db: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x43b9e0u); f_004369a0();
    /* 0043b9e0: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0043b9e3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b9e5: jne 0x43ba04 */ if (!fZ) goto L_0043ba04;
L_0043b9e7:; BB(0x0043b9e7);
    /* 0043b9e7: push 0x6b8004 */ { u32 v = 0x6b8004u; r_esp -= 4; W32(r_esp, v); }
    /* 0043b9ec: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x43b9f1u); f_00630f40();
    /* 0043b9f1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043b9f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043b9f5: lea eax, [ebp - 0x808] */ r_eax = (u32)(r_ebp+0xfffff7f8u);
    /* 0043b9fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043b9fc: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x43ba01u); f_00686ec6();
    /* 0043ba01: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0043ba04:; BB(0x0043ba04);
    /* 0043ba04: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ba06: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043ba09: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ba0a: mov ecx, dword ptr [ebp - 0x814] */ r_ecx = R32((u32)(r_ebp+0xfffff7ecu));
    /* 0043ba10: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x43ba15u); f_004369a0();
    /* 0043ba15: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0043ba18: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ba1a: jne 0x43ba7d */ if (!fZ) goto L_0043ba7d;
L_0043ba1c:; BB(0x0043ba1c);
    /* 0043ba1c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043ba1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043ba20: mov ecx, dword ptr [ebp - 0x814] */ r_ecx = R32((u32)(r_ebp+0xfffff7ecu));
    /* 0043ba26: call 0x435d40 */ r_esp -= 4; W32(r_esp, 0x43ba2bu); f_00435d40();
    /* 0043ba2b: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0043ba2e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ba30: jne 0x43ba7d */ if (!fZ) goto L_0043ba7d;
L_0043ba32:; BB(0x0043ba32);
    /* 0043ba32: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ba34: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043ba37: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ba38: mov ecx, dword ptr [ebp - 0x814] */ r_ecx = R32((u32)(r_ebp+0xfffff7ecu));
    /* 0043ba3e: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x43ba43u); f_004369a0();
    /* 0043ba43: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0043ba46: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ba48: jne 0x43ba7d */ if (!fZ) goto L_0043ba7d;
L_0043ba4a:; BB(0x0043ba4a);
    /* 0043ba4a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043ba4d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ba4e: mov ecx, dword ptr [ebp - 0x814] */ r_ecx = R32((u32)(r_ebp+0xfffff7ecu));
    /* 0043ba54: call 0x435de0 */ r_esp -= 4; W32(r_esp, 0x43ba59u); f_00435de0();
    /* 0043ba59: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0043ba5c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ba5e: jne 0x43ba7d */ if (!fZ) goto L_0043ba7d;
L_0043ba60:; BB(0x0043ba60);
    /* 0043ba60: push 0x6b7fec */ { u32 v = 0x6b7fecu; r_esp -= 4; W32(r_esp, v); }
    /* 0043ba65: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x43ba6au); f_00630f40();
    /* 0043ba6a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043ba6d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043ba6e: lea eax, [ebp - 0x808] */ r_eax = (u32)(r_ebp+0xfffff7f8u);
    /* 0043ba74: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043ba75: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x43ba7au); f_00686ec6();
    /* 0043ba7a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0043ba7d:; BB(0x0043ba7d);
    /* 0043ba7d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043ba80: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ba81: mov ecx, dword ptr [ebp - 0x814] */ r_ecx = R32((u32)(r_ebp+0xfffff7ecu));
    /* 0043ba87: call 0x435d40 */ r_esp -= 4; W32(r_esp, 0x43ba8cu); f_00435d40();
    /* 0043ba8c: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0043ba8f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ba91: jne 0x43baa9 */ if (!fZ) goto L_0043baa9;
L_0043ba93:; BB(0x0043ba93);
    /* 0043ba93: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043ba96: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043ba97: mov ecx, dword ptr [ebp - 0x814] */ r_ecx = R32((u32)(r_ebp+0xfffff7ecu));
    /* 0043ba9d: call 0x435de0 */ r_esp -= 4; W32(r_esp, 0x43baa2u); f_00435de0();
    /* 0043baa2: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0043baa5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043baa7: je 0x43bac6 */ if (fZ) goto L_0043bac6;
L_0043baa9:; BB(0x0043baa9);
    /* 0043baa9: push 0x6b7fd4 */ { u32 v = 0x6b7fd4u; r_esp -= 4; W32(r_esp, v); }
    /* 0043baae: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x43bab3u); f_00630f40();
    /* 0043bab3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043bab6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043bab7: lea edx, [ebp - 0x808] */ r_edx = (u32)(r_ebp+0xfffff7f8u);
    /* 0043babd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043babe: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x43bac3u); f_00686ec6();
    /* 0043bac3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0043bac6:; BB(0x0043bac6);
    /* 0043bac6: lea eax, [ebp - 0x808] */ r_eax = (u32)(r_ebp+0xfffff7f8u);
    /* 0043bacc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043bacd: push 0x6b7fc0 */ { u32 v = 0x6b7fc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bad2: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x43bad7u); f_00630f40();
    /* 0043bad7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043bada: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043badb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043badd: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 0043bae3: call 0x57be80 */ r_esp -= 4; W32(r_esp, 0x43bae8u); f_0057be80();
    /* 0043bae8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043baeb: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043baed: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x43baf2u); f_00686d72();
    /* 0043baf2: mov esp, ebp */ r_esp = r_ebp;
    /* 0043baf4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043baf5: ret 4 */ FN_RET(0x0043b830); r_esp += 8; return;
}

void f_0043cd40(void) /* crapsstate::func_0043cd40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043cd40);
    /* 0043cd40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043cd41: mov ebp, esp */ r_ebp = r_esp;
    /* 0043cd43: sub esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043cd46: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 0043cd49: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043cd4c: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0043cd4f: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0043cd52: lea edx, [ecx + eax + 0x48] */ r_edx = (u32)(r_ecx+r_eax+0x48u);
    /* 0043cd56: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043cd58: shl eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0043cd5b: mov ecx, dword ptr [edx + eax] */ r_ecx = R32((u32)(r_edx+r_eax));
    /* 0043cd5e: mov edx, dword ptr [edx + eax + 4] */ r_edx = R32((u32)(r_edx+r_eax+0x4u));
    /* 0043cd62: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0043cd65: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0043cd68: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043cd6a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043cd6c: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x43cd71u); f_0064c8a0();
    /* 0043cd71: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043cd74: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0043cd77: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0043cd7a: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0043cd7d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0043cd80: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0043cd83: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0043cd86: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043cd88: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043cd8a: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x43cd8fu); f_0064c8a0();
    /* 0043cd8f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043cd92: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0043cd95: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 0043cd98: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043cd9b: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0043cd9e: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0043cda1: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0043cda4: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0043cda7: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x43cdacu); f_005f5400();
    /* 0043cdac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043cdad: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0043cdb3: call 0x43adc0 */ r_esp -= 4; W32(r_esp, 0x43cdb8u); f_0043adc0();
    /* 0043cdb8: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0043cdbb: fild dword ptr [ebp - 0x48] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb8u)));
    /* 0043cdbe: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0043cdc1: fstp qword ptr [ebp - 0x50] */ W_F64((u32)(r_ebp+0xffffffb0u), ST(0)); FPOP();
    /* 0043cdc4: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x43cdc9u); f_005f5400();
    /* 0043cdc9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043cdca: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0043cdd0: call 0x43aff0 */ r_esp -= 4; W32(r_esp, 0x43cdd5u); f_0043aff0();
    /* 0043cdd5: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0043cdd8: fild dword ptr [ebp - 0x54] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffacu)));
    /* 0043cddb: fdivr qword ptr [ebp - 0x50] */ ST(0) = R_F64((u32)(r_ebp+0xffffffb0u)) / ST(0);
    /* 0043cdde: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 0043cde1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043cde4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043cde5: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x43cdeau); f_005dcb00();
    /* 0043cdea: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043cded: mov ecx, eax */ r_ecx = r_eax;
    /* 0043cdef: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x43cdf4u); f_005d5a50();
    /* 0043cdf4: cmp eax, 0x77359400 */ {  u32 a = r_eax; u32 b = 0x77359400u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043cdf9: jl 0x43ce00 */ if ((fS!=fO)) goto L_0043ce00;
L_0043cdfb:; BB(0x0043cdfb);
    /* 0043cdfb: jmp 0x43d0c1 */ goto L_0043d0c1;
L_0043ce00:; BB(0x0043ce00);
    /* 0043ce00: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0043ce03: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x43ce08u); f_005f5400();
    /* 0043ce08: cmp eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ce0b: jne 0x43ce22 */ if (!fZ) goto L_0043ce22;
L_0043ce0d:; BB(0x0043ce0d);
    /* 0043ce0d: cmp dword ptr [ebp + 0xc], 1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ce11: jne 0x43ce22 */ if (!fZ) goto L_0043ce22;
L_0043ce13:; BB(0x0043ce13);
    /* 0043ce13: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043ce16: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0043ce17: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0043ce1a: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043ce1c: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0043ce1f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0043ce22:; BB(0x0043ce22);
    /* 0043ce22: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0043ce25: mov dword ptr [edx + 0x110], 0xffffffff */ W32((u32)(r_edx+0x110u), 0xffffffffu);
    /* 0043ce2f: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043ce33: jg 0x43ce4c */ if ((!fZ&&fS==fO)) goto L_0043ce4c;
L_0043ce35:; BB(0x0043ce35);
    /* 0043ce35: push 0xb80 */ { u32 v = 0xb80u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ce3a: push 0x6b7f20 */ { u32 v = 0x6b7f20u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ce3f: push 0x6b81d8 */ { u32 v = 0x6b81d8u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ce44: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x43ce49u); f_005e9f20();
    /* 0043ce49: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0043ce4c:; BB(0x0043ce4c);
    /* 0043ce4c: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0043ce4f: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 0043ce52: cmp dword ptr [ebp - 0x58], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ce56: je 0x43ce71 */ if (fZ) goto L_0043ce71;
L_0043ce58:; BB(0x0043ce58);
    /* 0043ce58: cmp dword ptr [ebp - 0x58], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ce5c: je 0x43cf29 */ if (fZ) goto L_0043cf29;
L_0043ce62:; BB(0x0043ce62);
    /* 0043ce62: cmp dword ptr [ebp - 0x58], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ce66: je 0x43cefc */ if (fZ) goto L_0043cefc;
L_0043ce6c:; BB(0x0043ce6c);
    /* 0043ce6c: jmp 0x43d09b */ goto L_0043d09b;
L_0043ce71:; BB(0x0043ce71);
    /* 0043ce71: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0043ce74: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ce75: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x43ce7au); f_005dcb00();
    /* 0043ce7a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043ce7d: cmp dword ptr [eax + 0x4a8], 0 */ {  u32 a = R32((u32)(r_eax+0x4a8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043ce84: jle 0x43ce9c */ if ((fZ||fS!=fO)) goto L_0043ce9c;
L_0043ce86:; BB(0x0043ce86);
    /* 0043ce86: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043ce89: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043ce8a: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x43ce8fu); f_005dcb00();
    /* 0043ce8f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043ce92: mov dword ptr [eax + 0x4a8], 0 */ W32((u32)(r_eax+0x4a8u), 0x0u);
L_0043ce9c:; BB(0x0043ce9c);
    /* 0043ce9c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043ce9f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043cea0: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x43cea5u); f_005dcb00();
    /* 0043cea5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043cea8: add eax, 0x4a8 */ {  u32 a = r_eax; u32 b = 0x4a8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043cead: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 0043ceb0: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0043ceb3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043ceb5: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0043ceb8: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0043cebb: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0043cebd: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043cec0: imul edx, edx, -1 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xffffffffu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043cec3: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0043cec6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043cec9: imul eax, eax, -1 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xffffffffu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043cecc: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0043cecf: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0043ced2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ced3: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043ced6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ced7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043ceda: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043cedb: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x43cee0u); f_005dcb00();
    /* 0043cee0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043cee3: mov ecx, eax */ r_ecx = r_eax;
    /* 0043cee5: call 0x5d5fb0 */ r_esp -= 4; W32(r_esp, 0x43ceeau); f_005d5fb0();
    /* 0043ceea: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0043ceed: mov dword ptr [ecx + 0x110], 0 */ W32((u32)(r_ecx+0x110u), 0x0u);
    /* 0043cef7: jmp 0x43d09b */ goto L_0043d09b;
L_0043cefc:; BB(0x0043cefc);
    /* 0043cefc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043ceff: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043cf00: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043cf03: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043cf04: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043cf07: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043cf08: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x43cf0du); f_005dcb00();
    /* 0043cf0d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043cf10: mov ecx, eax */ r_ecx = r_eax;
    /* 0043cf12: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x43cf17u); f_005d5cf0();
    /* 0043cf17: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0043cf1a: mov dword ptr [edx + 0x110], 3 */ W32((u32)(r_edx+0x110u), 0x3u);
    /* 0043cf24: jmp 0x43d09b */ goto L_0043d09b;
L_0043cf29:; BB(0x0043cf29);
    /* 0043cf29: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043cf2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043cf2d: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x43cf32u); f_005dcb00();
    /* 0043cf32: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043cf35: cmp dword ptr [eax + 0x4a8], 0 */ {  u32 a = R32((u32)(r_eax+0x4a8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043cf3c: jge 0x43cf54 */ if ((fS==fO)) goto L_0043cf54;
L_0043cf3e:; BB(0x0043cf3e);
    /* 0043cf3e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043cf41: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043cf42: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x43cf47u); f_005dcb00();
    /* 0043cf47: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043cf4a: mov dword ptr [eax + 0x4a8], 0 */ W32((u32)(r_eax+0x4a8u), 0x0u);
L_0043cf54:; BB(0x0043cf54);
    /* 0043cf54: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0043cf57: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043cf58: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x43cf5du); f_005dcb00();
    /* 0043cf5d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043cf60: mov ecx, eax */ r_ecx = r_eax;
    /* 0043cf62: call 0x5d7540 */ r_esp -= 4; W32(r_esp, 0x43cf67u); f_005d7540();
    /* 0043cf67: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043cf6a: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0043cf6d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043cf70: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0043cf73: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043cf76: fld qword ptr [ebp - 0x18] */ FPUSH(R_F64((u32)(r_ebp+0xffffffe8u)));
    /* 0043cf79: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0043cf7c: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 0043cf7f: call 0x64c560 */ r_esp -= 4; W32(r_esp, 0x43cf84u); f_0064c560();
    /* 0043cf84: cmp dword ptr [ebp - 0x20], 0x3b9aca00 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x3b9aca00u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043cf8b: jle 0x43cf9b */ if ((fZ||fS!=fO)) goto L_0043cf9b;
L_0043cf8d:; BB(0x0043cf8d);
    /* 0043cf8d: mov dword ptr [ebp - 0x20], 0x3b9aca00 */ W32((u32)(r_ebp+0xffffffe0u), 0x3b9aca00u);
    /* 0043cf94: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0043cf9b:; BB(0x0043cf9b);
    /* 0043cf9b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043cf9e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043cf9f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043cfa2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043cfa3: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 0043cfa6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043cfa7: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 0043cfaa: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x43cfafu); f_0064c5c0();
    /* 0043cfaf: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043cfb1: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0043cfb4: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0043cfb7: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0043cfba: cmp dword ptr [ebp - 0x10], 0x3b9aca00 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3b9aca00u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043cfc1: jl 0x43cfe4 */ if ((fS!=fO)) goto L_0043cfe4;
L_0043cfc3:; BB(0x0043cfc3);
    /* 0043cfc3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043cfc5: push 0x3b9aca00 */ { u32 v = 0x3b9aca00u; r_esp -= 4; W32(r_esp, v); }
    /* 0043cfca: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x43cfcfu); f_0064c8a0();
    /* 0043cfcf: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043cfd2: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0043cfd5: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 0043cfd8: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0043cfdb: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0043cfde: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0043cfe1: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_0043cfe4:; BB(0x0043cfe4);
    /* 0043cfe4: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0043cfe7: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x43cfecu); f_005f5400();
    /* 0043cfec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043cfed: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0043cff3: call 0x438870 */ r_esp -= 4; W32(r_esp, 0x43cff8u); f_00438870();
    /* 0043cff8: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0043cffb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043cffd: je 0x43d03a */ if (fZ) goto L_0043d03a;
L_0043cfff:; BB(0x0043cfff);
    /* 0043cfff: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0043d002: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043d003: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043d006: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043d007: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043d00a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043d00b: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x43d010u); f_005dcb00();
    /* 0043d010: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043d013: mov ecx, eax */ r_ecx = r_eax;
    /* 0043d015: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x43d01au); f_005d5cf0();
    /* 0043d01a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d01c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043d01f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043d020: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d023: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043d024: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043d027: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043d028: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0043d02b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043d02d: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0043d030: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 0043d036: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43d038u); call_ind(t); }
    /* 0043d038: jmp 0x43d073 */ goto L_0043d073;
L_0043d03a:; BB(0x0043d03a);
    /* 0043d03a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d03d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043d03e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043d041: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043d042: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043d045: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043d046: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x43d04bu); f_005dcb00();
    /* 0043d04b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043d04e: mov ecx, eax */ r_ecx = r_eax;
    /* 0043d050: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x43d055u); f_005d5cf0();
    /* 0043d055: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d057: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043d05a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043d05b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d05e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043d05f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043d062: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043d063: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0043d066: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043d068: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0043d06b: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 0043d071: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43d073u); call_ind(t); }
L_0043d073:; BB(0x0043d073);
    /* 0043d073: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0043d076: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043d077: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043d07a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043d07b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043d07e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043d07f: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x43d084u); f_005dcb00();
    /* 0043d084: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043d087: mov ecx, eax */ r_ecx = r_eax;
    /* 0043d089: call 0x5d5fb0 */ r_esp -= 4; W32(r_esp, 0x43d08eu); f_005d5fb0();
    /* 0043d08e: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0043d091: mov dword ptr [ecx + 0x110], 1 */ W32((u32)(r_ecx+0x110u), 0x1u);
L_0043d09b:; BB(0x0043d09b);
    /* 0043d09b: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0043d09e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043d09f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043d0a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043d0a3: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0043d0a6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043d0a7: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0043d0ad: call 0x434820 */ r_esp -= 4; W32(r_esp, 0x43d0b2u); f_00434820();
    /* 0043d0b2: mov edx, dword ptr [0x7906dc] */ r_edx = R32((u32)(0x7906dcu));
    /* 0043d0b8: mov ecx, dword ptr [edx + eax*4 + 0x14] */ r_ecx = R32((u32)(r_edx+r_eax*4+0x14u));
    /* 0043d0bc: call 0x42c5f0 */ r_esp -= 4; W32(r_esp, 0x43d0c1u); f_0042c5f0();
L_0043d0c1:; BB(0x0043d0c1);
    /* 0043d0c1: mov esp, ebp */ r_esp = r_ebp;
    /* 0043d0c3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043d0c4: ret 8 */ FN_RET(0x0043cd40); r_esp += 12; return;
}

