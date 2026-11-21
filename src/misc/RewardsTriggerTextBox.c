#include "protos.h"

void f_006711a0(void) /* RewardsTriggerTextBox::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006711a0);
    /* 006711a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006711a1: mov ebp, esp */ r_ebp = r_esp;
    /* 006711a3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006711a6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 006711a9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006711ac: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x6711b1u); f_005eaaf0();
    /* 006711b1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006711b4: mov dword ptr [eax], 0x6e101c */ W32((u32)(r_eax), 0x6e101cu);
    /* 006711ba: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006711bd: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006711c0: mov dword ptr [ecx + 0x188], edx */ W32((u32)(r_ecx+0x188u), r_edx);
    /* 006711c6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006711cd: jmp 0x6711d8 */ goto L_006711d8;
L_006711cf:; BB(0x006711cf);
    /* 006711cf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006711d2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006711d5: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_006711d8:; BB(0x006711d8);
    /* 006711d8: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006711dc: jge 0x6711f1 */ if ((fS==fO)) goto L_006711f1;
L_006711de:; BB(0x006711de);
    /* 006711de: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006711e1: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006711e4: mov dword ptr [edx + ecx*4 + 0x178], 0 */ W32((u32)(r_edx+r_ecx*4+0x178u), 0x0u);
    /* 006711ef: jmp 0x6711cf */ goto L_006711cf;
L_006711f1:; BB(0x006711f1);
    /* 006711f1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006711f4: mov esp, ebp */ r_esp = r_ebp;
    /* 006711f6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006711f7: ret 4 */ FN_RET(0x006711a0); r_esp += 8; return;
}

void f_00671200(void) /* RewardsTriggerTextBox::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00671200);
    /* 00671200: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00671201: mov ebp, esp */ r_ebp = r_esp;
    /* 00671203: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00671205: push 0x6ad123 */ { u32 v = 0x6ad123u; r_esp -= 4; W32(r_esp, v); }
    /* 0067120a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00671210: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00671211: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00671214: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00671219: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0067121b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067121c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0067121f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00671225: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00671228: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0067122b: mov dword ptr [eax], 0x6e101c */ W32((u32)(r_eax), 0x6e101cu);
    /* 00671231: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00671238: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0067123f: jmp 0x67124a */ goto L_0067124a;
L_00671241:; BB(0x00671241);
    /* 00671241: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00671244: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00671247: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0067124a:; BB(0x0067124a);
    /* 0067124a: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067124e: jge 0x6712a9 */ if ((fS==fO)) goto L_006712a9;
L_00671250:; BB(0x00671250);
    /* 00671250: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00671253: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00671256: cmp dword ptr [eax + edx*4 + 0x178], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x178u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067125e: je 0x6712a7 */ if (fZ) goto L_006712a7;
L_00671260:; BB(0x00671260);
    /* 00671260: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00671263: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00671266: mov eax, dword ptr [edx + ecx*4 + 0x178] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x178u));
    /* 0067126d: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00671270: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00671273: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00671276: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067127a: je 0x67128f */ if (fZ) goto L_0067128f;
L_0067127c:; BB(0x0067127c);
    /* 0067127c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067127e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00671281: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00671283: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00671286: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00671288: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x67128au); call_ind(t); }
    /* 0067128a: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0067128d: jmp 0x671296 */ goto L_00671296;
L_0067128f:; BB(0x0067128f);
    /* 0067128f: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_00671296:; BB(0x00671296);
    /* 00671296: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00671299: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0067129c: mov dword ptr [ecx + eax*4 + 0x178], 0 */ W32((u32)(r_ecx+r_eax*4+0x178u), 0x0u);
L_006712a7:; BB(0x006712a7);
    /* 006712a7: jmp 0x671241 */ goto L_00671241;
L_006712a9:; BB(0x006712a9);
    /* 006712a9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006712b0: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006712b3: call 0x5eac00 */ r_esp -= 4; W32(r_esp, 0x6712b8u); f_005eac00();
    /* 006712b8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006712bb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006712c2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006712c3: mov esp, ebp */ r_esp = r_ebp;
    /* 006712c5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006712c6: ret  */ FN_RET(0x00671200); r_esp += 4; return;
}

void f_006715a0(void) /* RewardsTriggerTextBox::vfunc28 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006715a0);
    /* 006715a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006715a1: mov ebp, esp */ r_ebp = r_esp;
    /* 006715a3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006715a6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 006715a9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006715b0: jmp 0x6715bb */ goto L_006715bb;
L_006715b2:; BB(0x006715b2);
    /* 006715b2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006715b5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006715b8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_006715bb:; BB(0x006715bb);
    /* 006715bb: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006715bf: jge 0x6715e4 */ if ((fS==fO)) goto L_006715e4;
L_006715c1:; BB(0x006715c1);
    /* 006715c1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006715c4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006715c7: mov eax, dword ptr [edx + ecx*4 + 0x178] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x178u));
    /* 006715ce: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006715d1: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006715d4: mov ecx, dword ptr [edx + ecx*4 + 0x178] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x178u));
    /* 006715db: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 006715dd: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 006715e0: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6715e2u); call_ind(t); }
    /* 006715e2: jmp 0x6715b2 */ goto L_006715b2;
L_006715e4:; BB(0x006715e4);
    /* 006715e4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006715e7: call 0x5eb5a0 */ r_esp -= 4; W32(r_esp, 0x6715ecu); f_005eb5a0();
    /* 006715ec: mov esp, ebp */ r_esp = r_ebp;
    /* 006715ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006715ef: ret  */ FN_RET(0x006715a0); r_esp += 4; return;
}

void f_00671750(void) /* RewardsTriggerTextBox::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00671750);
    /* 00671750: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00671751: mov ebp, esp */ r_ebp = r_esp;
    /* 00671753: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00671754: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00671757: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0067175a: movzx ecx, byte ptr [eax + 4] */ r_ecx = (u32)R8((u32)(r_eax+0x4u));
    /* 0067175e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00671760: je 0x671766 */ if (fZ) goto L_00671766;
L_00671762:; BB(0x00671762);
    /* 00671762: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00671764: jmp 0x671772 */ goto L_00671772;
L_00671766:; BB(0x00671766);
    /* 00671766: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00671769: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0067176b: cmp dword ptr [edx + 0x18], 3 */ {  u32 a = R32((u32)(r_edx+0x18u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067176f: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
L_00671772:; BB(0x00671772);
    /* 00671772: mov esp, ebp */ r_esp = r_ebp;
    /* 00671774: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00671775: ret 4 */ FN_RET(0x00671750); r_esp += 8; return;
}

void f_00671780(void) /* RewardsTriggerTextBox::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00671780);
    /* 00671780: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00671781: mov ebp, esp */ r_ebp = r_esp;
    /* 00671783: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00671786: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00671789: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00671790: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00671793: cmp dword ptr [eax + 0x17c], 0 */ {  u32 a = R32((u32)(r_eax+0x17cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067179a: je 0x6717bb */ if (fZ) goto L_006717bb;
L_0067179c:; BB(0x0067179c);
    /* 0067179c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0067179f: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 006717a5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006717a8: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 006717ae: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 006717b0: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 006717b6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6717b8u); call_ind(t); }
    /* 006717b8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_006717bb:; BB(0x006717bb);
    /* 006717bb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006717be: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006717bf: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006717c2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006717c4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006717c7: mov edx, dword ptr [eax + 0x84] */ r_edx = R32((u32)(r_eax+0x84u));
    /* 006717cd: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6717cfu); call_ind(t); }
    /* 006717cf: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006717d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006717d4: je 0x6717f8 */ if (fZ) goto L_006717f8;
L_006717d6:; BB(0x006717d6);
    /* 006717d6: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006717da: je 0x6717f8 */ if (fZ) goto L_006717f8;
L_006717dc:; BB(0x006717dc);
    /* 006717dc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006717df: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006717e0: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x6717e5u); f_00686ecc();
    /* 006717e5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006717e8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 006717ea: jbe 0x6717f8 */ if ((fC||fZ)) goto L_006717f8;
L_006717ec:; BB(0x006717ec);
    /* 006717ec: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006717ee: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006717f1: call 0x671430 */ r_esp -= 4; W32(r_esp, 0x6717f6u); f_00671430();
    /* 006717f6: jmp 0x671802 */ goto L_00671802;
L_006717f8:; BB(0x006717f8);
    /* 006717f8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006717fa: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006717fd: call 0x671430 */ r_esp -= 4; W32(r_esp, 0x671802u); f_00671430();
L_00671802:; BB(0x00671802);
    /* 00671802: mov esp, ebp */ r_esp = r_ebp;
    /* 00671804: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00671805: ret 4 */ FN_RET(0x00671780); r_esp += 8; return;
}

