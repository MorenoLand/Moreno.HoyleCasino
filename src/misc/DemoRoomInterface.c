#include "protos.h"

void f_0057a4f0(void) /* DemoRoomInterface::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0057a4f0);
    /* 0057a4f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057a4f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0057a4f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057a4f5: push 0x6a66ab */ { u32 v = 0x6a66abu; r_esp -= 4; W32(r_esp, v); }
    /* 0057a4fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0057a500: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057a501: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057a504: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0057a509: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057a50b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057a50c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0057a50f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0057a515: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0057a518: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a51d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x57a522u); f_00686d82();
    /* 0057a522: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057a525: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0057a528: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0057a52f: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057a533: je 0x57a542 */ if (fZ) goto L_0057a542;
L_0057a535:; BB(0x0057a535);
    /* 0057a535: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057a538: call 0x579ae0 */ r_esp -= 4; W32(r_esp, 0x57a53du); f_00579ae0();
    /* 0057a53d: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0057a540: jmp 0x57a549 */ goto L_0057a549;
L_0057a542:; BB(0x0057a542);
    /* 0057a542: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0057a549:; BB(0x0057a549);
    /* 0057a549: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0057a54c: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0057a54f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0057a556: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057a559: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057a55c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0057a563: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0057a564: mov esp, ebp */ r_esp = r_ebp;
    /* 0057a566: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057a567: ret  */ FN_RET(0x0057a4f0); r_esp += 4; return;
}

void f_0057a570(void) /* DemoRoomInterface::vfunc3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0057a570);
    /* 0057a570: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057a571: mov ebp, esp */ r_ebp = r_esp;
    /* 0057a573: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057a574: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0057a577: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057a57b: jne 0x57a581 */ if (!fZ) goto L_0057a581;
L_0057a57d:; BB(0x0057a57d);
    /* 0057a57d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0057a57f: jmp 0x57a59d */ goto L_0057a59d;
L_0057a581:; BB(0x0057a581);
    /* 0057a581: push 0x6b3148 */ { u32 v = 0x6b3148u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a586: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x57a58bu); f_00630f40();
    /* 0057a58b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057a58e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057a58f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0057a592: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057a593: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x57a598u); f_00686d8e();
    /* 0057a598: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057a59b: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0057a59d:; BB(0x0057a59d);
    /* 0057a59d: mov esp, ebp */ r_esp = r_ebp;
    /* 0057a59f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057a5a0: ret 4 */ FN_RET(0x0057a570); r_esp += 8; return;
}

void f_0057a5d0(void) /* DemoRoomInterface::vfunc4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0057a5d0);
    /* 0057a5d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057a5d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0057a5d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057a5d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0057a5d7: mov eax, 0x311a50 */ r_eax = 0x311a50u;
    /* 0057a5dc: mov esp, ebp */ r_esp = r_ebp;
    /* 0057a5de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057a5df: ret  */ FN_RET(0x0057a5d0); r_esp += 4; return;
}

void f_0057a5e0(void) /* DemoRoomInterface::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0057a5e0);
    /* 0057a5e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057a5e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0057a5e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057a5e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0057a5e7: mov eax, 0x6cbbc4 */ r_eax = 0x6cbbc4u;
    /* 0057a5ec: mov esp, ebp */ r_esp = r_ebp;
    /* 0057a5ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057a5ef: ret  */ FN_RET(0x0057a5e0); r_esp += 4; return;
}

void f_0057a6e0(void) /* DemoRoomInterface::vfunc25 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0057a6e0);
    /* 0057a6e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057a6e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0057a6e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057a6e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0057a6e7: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0057a6e9: mov esp, ebp */ r_esp = r_ebp;
    /* 0057a6eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057a6ec: ret 4 */ FN_RET(0x0057a6e0); r_esp += 8; return;
}

void f_0057a6f0(void) /* DemoRoomInterface::vfunc27 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0057a6f0);
    /* 0057a6f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057a6f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0057a6f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057a6f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0057a6f7: mov eax, 0x74b484 */ r_eax = 0x74b484u;
    /* 0057a6fc: mov esp, ebp */ r_esp = r_ebp;
    /* 0057a6fe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057a6ff: ret  */ FN_RET(0x0057a6f0); r_esp += 4; return;
}

void f_0057a710(void) /* DemoRoomInterface::vfunc29 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0057a710);
    /* 0057a710: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057a711: mov ebp, esp */ r_ebp = r_esp;
    /* 0057a713: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057a714: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0057a717: mov eax, 0x74b120 */ r_eax = 0x74b120u;
    /* 0057a71c: mov esp, ebp */ r_esp = r_ebp;
    /* 0057a71e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057a71f: ret  */ FN_RET(0x0057a710); r_esp += 4; return;
}

void f_0057a720(void) /* DemoRoomInterface::vfunc30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0057a720);
    /* 0057a720: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057a721: mov ebp, esp */ r_ebp = r_esp;
    /* 0057a723: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057a724: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0057a727: mov eax, 0x74b448 */ r_eax = 0x74b448u;
    /* 0057a72c: mov esp, ebp */ r_esp = r_ebp;
    /* 0057a72e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057a72f: ret  */ FN_RET(0x0057a720); r_esp += 4; return;
}

void f_0057a730(void) /* DemoRoomInterface::vfunc31 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0057a730);
    /* 0057a730: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057a731: mov ebp, esp */ r_ebp = r_esp;
    /* 0057a733: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057a736: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0057a739: cmp dword ptr [ebp + 0xc], 0x186bf */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x186bfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057a740: je 0x57a74f */ if (fZ) goto L_0057a74f;
L_0057a742:; BB(0x0057a742);
    /* 0057a742: cmp dword ptr [ebp + 0xc], 0x186be */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x186beu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057a749: je 0x57a74f */ if (fZ) goto L_0057a74f;
L_0057a74b:; BB(0x0057a74b);
    /* 0057a74b: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0057a74d: jmp 0x57a787 */ goto L_0057a787;
L_0057a74f:; BB(0x0057a74f);
    /* 0057a74f: cmp dword ptr [ebp + 8], 0x311e38 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x311e38u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057a756: jne 0x57a785 */ if (!fZ) goto L_0057a785;
L_0057a758:; BB(0x0057a758);
    /* 0057a758: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0057a75d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0057a760: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057a763: mov byte ptr [ecx + 0x25], 1 */ W8((u32)(r_ecx+0x25u), 0x1u);
    /* 0057a767: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0057a76d: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0057a770: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057a773: mov byte ptr [eax + 0x26], 0 */ W8((u32)(r_eax+0x26u), 0x0u);
    /* 0057a777: mov dword ptr [0x793574], 0 */ W32((u32)(0x793574u), 0x0u);
    /* 0057a781: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0057a783: jmp 0x57a787 */ goto L_0057a787;
L_0057a785:; BB(0x0057a785);
    /* 0057a785: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0057a787:; BB(0x0057a787);
    /* 0057a787: mov esp, ebp */ r_esp = r_ebp;
    /* 0057a789: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057a78a: ret 8 */ FN_RET(0x0057a730); r_esp += 12; return;
}

