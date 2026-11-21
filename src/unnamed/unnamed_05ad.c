#include "protos.h"

void f_005ad0a0(void) /* sub_5AD0A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ad0a0);
    /* 005ad0a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ad0a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005ad0a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ad0a5: push 0x6a7c8b */ { u32 v = 0x6a7c8bu; r_esp -= 4; W32(r_esp, v); }
    /* 005ad0aa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ad0b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ad0b1: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ad0b4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005ad0b9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005ad0bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ad0bc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005ad0bf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005ad0c5: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005ad0c8: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005ad0ce: call 0x5f2870 */ r_esp -= 4; W32(r_esp, 0x5ad0d3u); f_005f2870();
    /* 005ad0d3: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005ad0da: jmp 0x5ad0e5 */ goto L_005ad0e5;
L_005ad0dc:; BB(0x005ad0dc);
    /* 005ad0dc: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ad0df: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ad0e2: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_005ad0e5:; BB(0x005ad0e5);
    /* 005ad0e5: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ad0e9: jge 0x5ad11a */ if ((fS==fO)) goto L_005ad11a;
L_005ad0eb:; BB(0x005ad0eb);
    /* 005ad0eb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ad0ed: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ad0ef: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5ad0f4u); f_0064c8a0();
    /* 005ad0f4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ad0f7: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005ad0fa: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005ad0fd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ad100: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ad101: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ad104: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ad105: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ad108: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ad109: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5ad10eu); f_005dcb00();
    /* 005ad10e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ad111: mov ecx, eax */ r_ecx = r_eax;
    /* 005ad113: call 0x5d6050 */ r_esp -= 4; W32(r_esp, 0x5ad118u); f_005d6050();
    /* 005ad118: jmp 0x5ad0dc */ goto L_005ad0dc;
L_005ad11a:; BB(0x005ad11a);
    /* 005ad11a: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005ad120: call 0x5b6740 */ r_esp -= 4; W32(r_esp, 0x5ad125u); f_005b6740();
    /* 005ad125: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005ad128: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ad12a: je 0x5ad190 */ if (fZ) goto L_005ad190;
L_005ad12c:; BB(0x005ad12c);
    /* 005ad12c: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005ad132: call 0x5b7ef0 */ r_esp -= 4; W32(r_esp, 0x5ad137u); f_005b7ef0();
    /* 005ad137: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ad139: mov edx, dword ptr [0x793600] */ r_edx = R32((u32)(0x793600u));
    /* 005ad13f: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005ad142: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005ad148: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 005ad14b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ad14d: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005ad150: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ad152u); call_ind(t); }
    /* 005ad152: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ad154: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ad155: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 005ad15b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005ad15e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ad15f: fld1  */ FPUSH(1.0);
    /* 005ad161: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005ad164: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ad166: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005ad168: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ad16a: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005ad170: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005ad173: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ad174: push 0xfb3 */ { u32 v = 0xfb3u; r_esp -= 4; W32(r_esp, v); }
    /* 005ad179: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005ad17e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ad180: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005ad186: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 005ad18c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ad18eu); call_ind(t); }
    /* 005ad18e: jmp 0x5ad1da */ goto L_005ad1da;
L_005ad190:; BB(0x005ad190);
    /* 005ad190: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 005ad192: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5ad197u); f_00686d82();
    /* 005ad197: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ad19a: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005ad19d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ad1a4: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ad1a8: je 0x5ad1b7 */ if (fZ) goto L_005ad1b7;
L_005ad1aa:; BB(0x005ad1aa);
    /* 005ad1aa: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ad1ad: call 0x5aa980 */ r_esp -= 4; W32(r_esp, 0x5ad1b2u); f_005aa980();
    /* 005ad1b2: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005ad1b5: jmp 0x5ad1be */ goto L_005ad1be;
L_005ad1b7:; BB(0x005ad1b7);
    /* 005ad1b7: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005ad1be:; BB(0x005ad1be);
    /* 005ad1be: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005ad1c1: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005ad1c4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005ad1cb: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005ad1ce: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ad1cf: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005ad1d5: call 0x5da390 */ r_esp -= 4; W32(r_esp, 0x5ad1dau); f_005da390();
L_005ad1da:; BB(0x005ad1da);
    /* 005ad1da: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ad1dd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ad1e4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ad1e5: mov esp, ebp */ r_esp = r_ebp;
    /* 005ad1e7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ad1e8: ret  */ FN_RET(0x005ad0a0); r_esp += 4; return;
}

void f_005ad500(void) /* sub_5AD500 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ad500);
    /* 005ad500: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ad501: mov ebp, esp */ r_ebp = r_esp;
    /* 005ad503: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ad506: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005ad509: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ad50c: movzx ecx, byte ptr [eax + 9] */ r_ecx = (u32)R8((u32)(r_eax+0x9u));
    /* 005ad510: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ad512: jne 0x5ad560 */ if (!fZ) goto L_005ad560;
L_005ad514:; BB(0x005ad514);
    /* 005ad514: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ad517: mov byte ptr [edx + 9], 1 */ W8((u32)(r_edx+0x9u), 0x1u);
    /* 005ad51b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ad51d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ad51f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ad521: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005ad523: mov ecx, dword ptr [0x7935f8] */ r_ecx = R32((u32)(0x7935f8u));
    /* 005ad529: call 0x5a82a0 */ r_esp -= 4; W32(r_esp, 0x5ad52eu); f_005a82a0();
    /* 005ad52e: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005ad530: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 005ad532: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005ad538: call 0x5b7310 */ r_esp -= 4; W32(r_esp, 0x5ad53du); f_005b7310();
    /* 005ad53d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ad53f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ad541: mov eax, dword ptr [0x793600] */ r_eax = R32((u32)(0x793600u));
    /* 005ad546: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005ad549: mov edx, dword ptr [0x793600] */ r_edx = R32((u32)(0x793600u));
    /* 005ad54f: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005ad552: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ad554: mov ecx, eax */ r_ecx = r_eax;
    /* 005ad556: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005ad559: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ad55bu); call_ind(t); }
    /* 005ad55b: jmp 0x5ad61c */ goto L_005ad61c;
L_005ad560:; BB(0x005ad560);
    /* 005ad560: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005ad566: call 0x5b5590 */ r_esp -= 4; W32(r_esp, 0x5ad56bu); f_005b5590();
    /* 005ad56b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005ad56e: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ad572: je 0x5ad602 */ if (fZ) goto L_005ad602;
L_005ad578:; BB(0x005ad578);
    /* 005ad578: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ad57a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ad57d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ad57e: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005ad584: call 0x5b70e0 */ r_esp -= 4; W32(r_esp, 0x5ad589u); f_005b70e0();
    /* 005ad589: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ad58c: movzx eax, byte ptr [edx + 0xa] */ r_eax = (u32)R8((u32)(r_edx+0xau));
    /* 005ad590: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ad592: jne 0x5ad5cc */ if (!fZ) goto L_005ad5cc;
L_005ad594:; BB(0x005ad594);
    /* 005ad594: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ad597: mov byte ptr [ecx + 0xa], 1 */ W8((u32)(r_ecx+0xau), 0x1u);
    /* 005ad59b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ad59e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ad59f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005ad5a1: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005ad5a7: call 0x5b7310 */ r_esp -= 4; W32(r_esp, 0x5ad5acu); f_005b7310();
    /* 005ad5ac: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ad5ae: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ad5b0: mov eax, dword ptr [0x793600] */ r_eax = R32((u32)(0x793600u));
    /* 005ad5b5: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005ad5b8: mov edx, dword ptr [0x793600] */ r_edx = R32((u32)(0x793600u));
    /* 005ad5be: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005ad5c1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ad5c3: mov ecx, eax */ r_ecx = r_eax;
    /* 005ad5c5: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005ad5c8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ad5cau); call_ind(t); }
    /* 005ad5ca: jmp 0x5ad61c */ goto L_005ad61c;
L_005ad5cc:; BB(0x005ad5cc);
    /* 005ad5cc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ad5cf: mov byte ptr [ecx + 0xa], 0 */ W8((u32)(r_ecx+0xau), 0x0u);
    /* 005ad5d3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ad5d6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ad5d7: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005ad5dd: call 0x5b3ce0 */ r_esp -= 4; W32(r_esp, 0x5ad5e2u); f_005b3ce0();
    /* 005ad5e2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ad5e4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ad5e6: mov eax, dword ptr [0x793600] */ r_eax = R32((u32)(0x793600u));
    /* 005ad5eb: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005ad5ee: mov edx, dword ptr [0x793600] */ r_edx = R32((u32)(0x793600u));
    /* 005ad5f4: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005ad5f7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ad5f9: mov ecx, eax */ r_ecx = r_eax;
    /* 005ad5fb: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005ad5fe: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ad600u); call_ind(t); }
    /* 005ad600: jmp 0x5ad61c */ goto L_005ad61c;
L_005ad602:; BB(0x005ad602);
    /* 005ad602: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ad604: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ad606: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005ad60c: call 0x5b70e0 */ r_esp -= 4; W32(r_esp, 0x5ad611u); f_005b70e0();
    /* 005ad611: mov ecx, dword ptr [0x7935f8] */ r_ecx = R32((u32)(0x7935f8u));
    /* 005ad617: call 0x5a8590 */ r_esp -= 4; W32(r_esp, 0x5ad61cu); f_005a8590();
L_005ad61c:; BB(0x005ad61c);
    /* 005ad61c: mov esp, ebp */ r_esp = r_ebp;
    /* 005ad61e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ad61f: ret  */ FN_RET(0x005ad500); r_esp += 4; return;
}

