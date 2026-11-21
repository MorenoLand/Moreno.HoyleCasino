#include "protos.h"

void f_00654100(void) /* sub_654100 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00654100);
    /* 00654100: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00654101: mov ebp, esp */ r_ebp = r_esp;
    /* 00654103: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00654104: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00654107: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0065410d: call 0x64f350 */ r_esp -= 4; W32(r_esp, 0x654112u); f_0064f350();
    /* 00654112: mov esp, ebp */ r_esp = r_ebp;
    /* 00654114: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00654115: ret  */ FN_RET(0x00654100); r_esp += 4; return;
}

void f_00654120(void) /* sub_654120 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00654120);
    /* 00654120: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00654121: mov ebp, esp */ r_ebp = r_esp;
    /* 00654123: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00654126: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00654129: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0065412b: push 0x6dd560 */ { u32 v = 0x6dd560u; r_esp -= 4; W32(r_esp, v); }
    /* 00654130: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x654135u); f_00630f40();
    /* 00654135: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00654138: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00654139: push 0x6dd53c */ { u32 v = 0x6dd53cu; r_esp -= 4; W32(r_esp, v); }
    /* 0065413e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x654143u); f_00630f40();
    /* 00654143: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00654146: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00654147: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x65414cu); f_0062ff10();
    /* 0065414c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065414f: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00654152: jne 0x654156 */ if (!fZ) goto L_00654156;
L_00654154:; BB(0x00654154);
    /* 00654154: jmp 0x654186 */ goto L_00654186;
L_00654156:; BB(0x00654156);
    /* 00654156: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00654159: mov ecx, dword ptr [eax + 0x56c] */ r_ecx = R32((u32)(r_eax+0x56cu));
    /* 0065415f: call 0x5e4390 */ r_esp -= 4; W32(r_esp, 0x654164u); f_005e4390();
    /* 00654164: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 00654167: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065416a: mov eax, dword ptr [edx + 0x570] */ r_eax = R32((u32)(r_edx+0x570u));
    /* 00654170: mov byte ptr [ecx + eax], 1 */ W8((u32)(r_ecx+r_eax), 0x1u);
    /* 00654174: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00654177: mov edx, dword ptr [ecx + 0x570] */ r_edx = R32((u32)(r_ecx+0x570u));
    /* 0065417d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065417e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00654181: call 0x653bd0 */ r_esp -= 4; W32(r_esp, 0x654186u); f_00653bd0();
L_00654186:; BB(0x00654186);
    /* 00654186: mov esp, ebp */ r_esp = r_ebp;
    /* 00654188: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00654189: ret  */ FN_RET(0x00654120); r_esp += 4; return;
}

void f_00654210(void) /* sub_654210 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00654210);
    /* 00654210: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00654211: mov ebp, esp */ r_ebp = r_esp;
    /* 00654213: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00654215: push 0x6ac4cf */ { u32 v = 0x6ac4cfu; r_esp -= 4; W32(r_esp, v); }
    /* 0065421a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00654220: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00654221: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00654224: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00654229: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065422b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065422c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0065422f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00654235: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00654238: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0065423a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x65423fu); f_00686d82();
    /* 0065423f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00654242: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00654245: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065424c: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00654250: je 0x65425f */ if (fZ) goto L_0065425f;
L_00654252:; BB(0x00654252);
    /* 00654252: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00654255: call 0x654740 */ r_esp -= 4; W32(r_esp, 0x65425au); f_00654740();
    /* 0065425a: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0065425d: jmp 0x654266 */ goto L_00654266;
L_0065425f:; BB(0x0065425f);
    /* 0065425f: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_00654266:; BB(0x00654266);
    /* 00654266: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00654269: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0065426c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00654273: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00654276: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00654279: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0065427c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065427d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00654280: add eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00654283: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00654284: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x654289u); f_00686d8e();
    /* 00654289: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065428c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065428e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00654290: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00654293: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00654294: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00654297: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00654298: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065429b: mov ecx, dword ptr [eax + 0x56c] */ r_ecx = R32((u32)(r_eax+0x56cu));
    /* 006542a1: call 0x628980 */ r_esp -= 4; W32(r_esp, 0x6542a6u); f_00628980();
    /* 006542a6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006542a9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006542b0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006542b1: mov esp, ebp */ r_esp = r_ebp;
    /* 006542b3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006542b4: ret 8 */ FN_RET(0x00654210); r_esp += 12; return;
}

void f_006542c0(void) /* sub_6542C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006542c0);
    /* 006542c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006542c1: mov ebp, esp */ r_ebp = r_esp;
    /* 006542c3: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006542c6: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 006542cb: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006542cd: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 006542d0: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 006542d3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006542da: jmp 0x6542e5 */ goto L_006542e5;
L_006542dc:; BB(0x006542dc);
    /* 006542dc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006542df: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006542e2: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_006542e5:; BB(0x006542e5);
    /* 006542e5: cmp dword ptr [ebp - 4], 0x64 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006542e9: jge 0x65433a */ if ((fS==fO)) goto L_0065433a;
L_006542eb:; BB(0x006542eb);
    /* 006542eb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006542ee: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006542ef: push 0x6d44ec */ { u32 v = 0x6d44ecu; r_esp -= 4; W32(r_esp, v); }
    /* 006542f4: lea edx, [ebp - 0x18] */ r_edx = (u32)(r_ebp+0xffffffe8u);
    /* 006542f7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006542f8: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x6542feu); call_ind(t); }
    /* 006542fe: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00654301: lea eax, [ebp - 0x18] */ r_eax = (u32)(r_ebp+0xffffffe8u);
    /* 00654304: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00654305: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00654308: add ecx, 0x1c0 */ {  u32 a = r_ecx; u32 b = 0x1c0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065430e: call 0x63ab10 */ r_esp -= 4; W32(r_esp, 0x654313u); f_0063ab10();
    /* 00654313: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00654316: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00654318: je 0x654338 */ if (fZ) goto L_00654338;
L_0065431a:; BB(0x0065431a);
    /* 0065431a: lea edx, [ebp - 0x18] */ r_edx = (u32)(r_ebp+0xffffffe8u);
    /* 0065431d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065431e: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00654321: add ecx, 0x1c0 */ {  u32 a = r_ecx; u32 b = 0x1c0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00654327: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x65432cu); f_0063aac0();
    /* 0065432c: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065432f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00654330: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00654333: call 0x654210 */ r_esp -= 4; W32(r_esp, 0x654338u); f_00654210();
L_00654338:; BB(0x00654338);
    /* 00654338: jmp 0x6542dc */ goto L_006542dc;
L_0065433a:; BB(0x0065433a);
    /* 0065433a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065433c: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065433f: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x654344u); f_005fb720();
    /* 00654344: mov ecx, eax */ r_ecx = r_eax;
    /* 00654346: call 0x628d80 */ r_esp -= 4; W32(r_esp, 0x65434bu); f_00628d80();
    /* 0065434b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065434e: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00654350: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x654355u); f_00686d72();
    /* 00654355: mov esp, ebp */ r_esp = r_ebp;
    /* 00654357: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00654358: ret  */ FN_RET(0x006542c0); r_esp += 4; return;
}

