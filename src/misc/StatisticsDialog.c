#include "protos.h"

void f_006535f0(void) /* StatisticsDialog::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006535f0);
    /* 006535f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006535f1: mov ebp, esp */ r_ebp = r_esp;
    /* 006535f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006535f5: push 0x6ac456 */ { u32 v = 0x6ac456u; r_esp -= 4; W32(r_esp, v); }
    /* 006535fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00653600: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00653601: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00653602: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00653607: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00653609: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065360a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0065360d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00653613: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00653616: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00653618: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065361a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065361d: call 0x5f71f0 */ r_esp -= 4; W32(r_esp, 0x653622u); f_005f71f0();
    /* 00653622: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00653629: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065362c: mov dword ptr [eax], 0x6dd38c */ W32((u32)(r_eax), 0x6dd38cu);
    /* 00653632: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00653635: add ecx, 0x1c0 */ {  u32 a = r_ecx; u32 b = 0x1c0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065363b: call 0x63a0c0 */ r_esp -= 4; W32(r_esp, 0x653640u); f_0063a0c0();
    /* 00653640: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00653644: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00653646: push 0x30d4d7 */ { u32 v = 0x30d4d7u; r_esp -= 4; W32(r_esp, v); }
    /* 0065364b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065364e: call 0x5f83d0 */ r_esp -= 4; W32(r_esp, 0x653653u); f_005f83d0();
    /* 00653653: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00653656: mov dword ptr [ecx + 0x56c], 0 */ W32((u32)(r_ecx+0x56cu), 0x0u);
    /* 00653660: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00653663: mov byte ptr [edx + 0x1bc], 1 */ W8((u32)(r_edx+0x1bcu), 0x1u);
    /* 0065366a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065366d: mov dword ptr [eax + 0x570], 0 */ W32((u32)(r_eax+0x570u), 0x0u);
    /* 00653677: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0065367e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00653681: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00653684: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065368b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065368c: mov esp, ebp */ r_esp = r_ebp;
    /* 0065368e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065368f: ret  */ FN_RET(0x006535f0); r_esp += 4; return;
}

void f_00653690(void) /* StatisticsDialog::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00653690);
    /* 00653690: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00653691: mov ebp, esp */ r_ebp = r_esp;
    /* 00653693: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00653695: push 0x6ac479 */ { u32 v = 0x6ac479u; r_esp -= 4; W32(r_esp, v); }
    /* 0065369a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006536a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006536a1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006536a2: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 006536a7: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006536a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006536aa: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 006536ad: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 006536b3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 006536b6: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006536b9: mov dword ptr [eax], 0x6dd38c */ W32((u32)(r_eax), 0x6dd38cu);
    /* 006536bf: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006536c6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006536c9: add ecx, 0x1c0 */ {  u32 a = r_ecx; u32 b = 0x1c0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006536cf: call 0x63a120 */ r_esp -= 4; W32(r_esp, 0x6536d4u); f_0063a120();
    /* 006536d4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006536db: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006536de: call 0x5f7260 */ r_esp -= 4; W32(r_esp, 0x6536e3u); f_005f7260();
    /* 006536e3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006536e6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006536ed: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006536ee: mov esp, ebp */ r_esp = r_ebp;
    /* 006536f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006536f1: ret  */ FN_RET(0x00653690); r_esp += 4; return;
}

void f_00653700(void) /* StatisticsDialog::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00653700);
    /* 00653700: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00653701: mov ebp, esp */ r_ebp = r_esp;
    /* 00653703: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00653705: push 0x6ac49f */ { u32 v = 0x6ac49fu; r_esp -= 4; W32(r_esp, v); }
    /* 0065370a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00653710: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00653711: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00653714: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00653719: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065371b: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0065371e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065371f: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00653722: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00653728: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 0065372b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065372d: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0065372f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00653731: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00653733: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00653735: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 00653737: push 0x1f9 */ { u32 v = 0x1f9u; r_esp -= 4; W32(r_esp, v); }
    /* 0065373c: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 0065373e: push 0x6dd500 */ { u32 v = 0x6dd500u; r_esp -= 4; W32(r_esp, v); }
    /* 00653743: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x653748u); f_00630f40();
    /* 00653748: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065374b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065374c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065374e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00653750: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00653753: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x653758u); f_005fa5b0();
    /* 00653758: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0065375f: jmp 0x65376a */ goto L_0065376a;
L_00653761:; BB(0x00653761);
    /* 00653761: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00653764: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00653767: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0065376a:; BB(0x0065376a);
    /* 0065376a: cmp dword ptr [ebp - 0x14], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065376e: jge 0x6537e1 */ if ((fS==fO)) goto L_006537e1;
L_00653770:; BB(0x00653770);
    /* 00653770: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00653772: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00653774: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 00653776: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 00653778: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 0065377a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065377d: mov edx, dword ptr [ecx*4 + 0x76d690] */ r_edx = R32((u32)(r_ecx*4+0x76d690u));
    /* 00653784: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00653785: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x65378au); f_00630f40();
    /* 0065378a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065378d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065378e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00653790: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00653792: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00653794: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00653797: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 00653799: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0065379b: and eax, 0xfffffff9 */ {  u32 a = r_eax; u32 b = 0xfffffff9u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0065379e: add eax, 0x30d4e5 */ {  u32 a = r_eax; u32 b = 0x30d4e5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006537a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006537a4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006537a7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006537a8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006537aa: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 006537ad: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x6537b2u); f_005f9de0();
    /* 006537b2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006537b5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006537b6: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 006537b9: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x6537beu); f_005fb300();
    /* 006537be: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 006537c1: push 0x188 */ { u32 v = 0x188u; r_esp -= 4; W32(r_esp, v); }
    /* 006537c6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006537c9: imul eax, eax, 0x5a */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x5au; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006537cc: add eax, 0xf4 */ {  u32 a = r_eax; u32 b = 0xf4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006537d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006537d2: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 006537d5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006537d7: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 006537da: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 006537dd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6537dfu); call_ind(t); }
    /* 006537df: jmp 0x653761 */ goto L_00653761;
L_006537e1:; BB(0x006537e1);
    /* 006537e1: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 006537e3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006537e5: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 006537e8: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x6537edu); f_005fb300();
    /* 006537ed: mov ecx, eax */ r_ecx = r_eax;
    /* 006537ef: call 0x6026f0 */ r_esp -= 4; W32(r_esp, 0x6537f4u); f_006026f0();
    /* 006537f4: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 006537f6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006537f8: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 006537fb: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x653800u); f_005fb300();
    /* 00653800: mov ecx, eax */ r_ecx = r_eax;
    /* 00653802: call 0x6026f0 */ r_esp -= 4; W32(r_esp, 0x653807u); f_006026f0();
    /* 00653807: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00653809: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065380b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065380d: push 0xa1 */ { u32 v = 0xa1u; r_esp -= 4; W32(r_esp, v); }
    /* 00653812: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 00653814: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 00653816: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00653818: push 0x180 */ { u32 v = 0x180u; r_esp -= 4; W32(r_esp, v); }
    /* 0065381d: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0065381f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00653821: push 0x202 */ { u32 v = 0x202u; r_esp -= 4; W32(r_esp, v); }
    /* 00653826: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00653828: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065382a: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0065382d: call 0x5fa880 */ r_esp -= 4; W32(r_esp, 0x653832u); f_005fa880();
    /* 00653832: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00653834: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00653836: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00653838: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065383d: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00653842: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00653847: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00653849: push 0x181 */ { u32 v = 0x181u; r_esp -= 4; W32(r_esp, v); }
    /* 0065384e: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00653850: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00653852: push 0x202 */ { u32 v = 0x202u; r_esp -= 4; W32(r_esp, v); }
    /* 00653857: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00653859: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065385b: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0065385e: call 0x5fa880 */ r_esp -= 4; W32(r_esp, 0x653863u); f_005fa880();
    /* 00653863: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00653865: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00653867: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00653869: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 0065386b: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0065386d: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0065386f: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 00653874: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 00653876: push 0x6dd4e8 */ { u32 v = 0x6dd4e8u; r_esp -= 4; W32(r_esp, v); }
    /* 0065387b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x653880u); f_00630f40();
    /* 00653880: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00653883: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00653884: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00653886: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00653888: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0065388b: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x653890u); f_005fa5b0();
    /* 00653890: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 00653895: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x65389au); f_00686d82();
    /* 0065389a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065389d: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 006538a0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006538a7: cmp dword ptr [ebp - 0x48], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006538ab: je 0x6538c6 */ if (fZ) goto L_006538c6;
L_006538ad:; BB(0x006538ad);
    /* 006538ad: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 006538b0: call 0x6280d0 */ r_esp -= 4; W32(r_esp, 0x6538b5u); f_006280d0();
    /* 006538b5: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 006538b8: mov dword ptr [ecx], 0x6dd3ec */ W32((u32)(r_ecx), 0x6dd3ecu);
    /* 006538be: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 006538c1: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 006538c4: jmp 0x6538cd */ goto L_006538cd;
L_006538c6:; BB(0x006538c6);
    /* 006538c6: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
L_006538cd:; BB(0x006538cd);
    /* 006538cd: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 006538d0: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 006538d3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006538da: push 0x30d4d9 */ { u32 v = 0x30d4d9u; r_esp -= 4; W32(r_esp, v); }
    /* 006538df: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006538e1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006538e3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006538e5: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 006538e7: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 006538e9: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 006538eb: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006538ed: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 006538ef: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 006538f4: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 006538f6: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 006538f8: push 0x43 */ { u32 v = 0x43u; r_esp -= 4; W32(r_esp, v); }
    /* 006538fa: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 006538fc: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 006538fe: push 0xd2 */ { u32 v = 0xd2u; r_esp -= 4; W32(r_esp, v); }
    /* 00653903: push 0x58 */ { u32 v = 0x58u; r_esp -= 4; W32(r_esp, v); }
    /* 00653905: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 00653907: push 0xd2 */ { u32 v = 0xd2u; r_esp -= 4; W32(r_esp, v); }
    /* 0065390c: push 0x30d4cf */ { u32 v = 0x30d4cfu; r_esp -= 4; W32(r_esp, v); }
    /* 00653911: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 00653913: push 0xd3 */ { u32 v = 0xd3u; r_esp -= 4; W32(r_esp, v); }
    /* 00653918: push 0x30d4cb */ { u32 v = 0x30d4cbu; r_esp -= 4; W32(r_esp, v); }
    /* 0065391d: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0065391f: push 0xd3 */ { u32 v = 0xd3u; r_esp -= 4; W32(r_esp, v); }
    /* 00653924: push 0x30d4cc */ { u32 v = 0x30d4ccu; r_esp -= 4; W32(r_esp, v); }
    /* 00653929: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065392b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065392d: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0065392f: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00653931: push 0x30d4d8 */ { u32 v = 0x30d4d8u; r_esp -= 4; W32(r_esp, v); }
    /* 00653936: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00653938: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0065393b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065393c: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0065393f: call 0x5fac90 */ r_esp -= 4; W32(r_esp, 0x653944u); f_005fac90();
    /* 00653944: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 00653947: mov dword ptr [edx + 0x56c], eax */ W32((u32)(r_edx+0x56cu), r_eax);
    /* 0065394d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065394f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00653951: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00653953: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 00653955: push 0x13e */ { u32 v = 0x13eu; r_esp -= 4; W32(r_esp, v); }
    /* 0065395a: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 0065395c: push 0x88 */ { u32 v = 0x88u; r_esp -= 4; W32(r_esp, v); }
    /* 00653961: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 00653963: push 0x6dd3cc */ { u32 v = 0x6dd3ccu; r_esp -= 4; W32(r_esp, v); }
    /* 00653968: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x65396du); f_00630f40();
    /* 0065396d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00653970: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00653971: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00653973: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00653975: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00653978: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x65397du); f_005fa5b0();
    /* 0065397d: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00653980: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00653982: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 00653984: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 00653986: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00653988: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0065398d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065398f: push 0x138e */ { u32 v = 0x138eu; r_esp -= 4; W32(r_esp, v); }
    /* 00653994: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00653996: push 0x39 */ { u32 v = 0x39u; r_esp -= 4; W32(r_esp, v); }
    /* 00653998: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0065399d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0065399f: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006539a5: mov eax, dword ptr [edx + 0x318] */ r_eax = R32((u32)(r_edx+0x318u));
    /* 006539ab: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6539adu); call_ind(t); }
    /* 006539ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006539ae: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006539b4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006539b6: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006539bc: mov eax, dword ptr [edx + 0x3cc] */ r_eax = R32((u32)(r_edx+0x3ccu));
    /* 006539c2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6539c4u); call_ind(t); }
    /* 006539c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006539c5: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006539c7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006539c9: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 006539cc: call 0x5faee0 */ r_esp -= 4; W32(r_esp, 0x6539d1u); f_005faee0();
    /* 006539d1: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 006539d4: call 0x6542c0 */ r_esp -= 4; W32(r_esp, 0x6539d9u); f_006542c0();
    /* 006539d9: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 006539dc: add ecx, 0x1c0 */ {  u32 a = r_ecx; u32 b = 0x1c0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006539e2: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x6539e7u); f_0063aac0();
    /* 006539e7: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 006539ed: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 006539f4: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006539fa: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006539fc: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00653a02: mov eax, dword ptr [edx + 0xe8] */ r_eax = R32((u32)(r_edx+0xe8u));
    /* 00653a08: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x653a0au); call_ind(t); }
    /* 00653a0a: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00653a0d: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00653a11: je 0x653a5e */ if (fZ) goto L_00653a5e;
L_00653a13:; BB(0x00653a13);
    /* 00653a13: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00653a16: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00653a18: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00653a1b: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00653a1e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x653a20u); call_ind(t); }
    /* 00653a20: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00653a23: mov dword ptr [ecx + 0x570], eax */ W32((u32)(r_ecx+0x570u), r_eax);
    /* 00653a29: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 00653a2c: cmp dword ptr [edx + 0x570], -1 */ {  u32 a = R32((u32)(r_edx+0x570u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00653a33: jne 0x653a49 */ if (!fZ) goto L_00653a49;
L_00653a35:; BB(0x00653a35);
    /* 00653a35: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00653a3b: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x653a40u); f_005f3bf0();
    /* 00653a40: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00653a43: mov dword ptr [ecx + 0x570], eax */ W32((u32)(r_ecx+0x570u), r_eax);
L_00653a49:; BB(0x00653a49);
    /* 00653a49: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00653a4c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00653a4e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00653a51: mov edx, dword ptr [eax + 0x50] */ r_edx = R32((u32)(r_eax+0x50u));
    /* 00653a54: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x653a56u); call_ind(t); }
    /* 00653a56: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00653a59: jmp 0x653aeb */ goto L_00653aeb;
L_00653a5e:; BB(0x00653a5e);
    /* 00653a5e: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 00653a61: mov dword ptr [eax + 0x570], 0 */ W32((u32)(r_eax+0x570u), 0x0u);
    /* 00653a6b: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00653a6e: mov dword ptr [ecx + 0x570], 0 */ W32((u32)(r_ecx+0x570u), 0x0u);
    /* 00653a78: jmp 0x653a8f */ goto L_00653a8f;
L_00653a7a:; BB(0x00653a7a);
    /* 00653a7a: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 00653a7d: mov eax, dword ptr [edx + 0x570] */ r_eax = R32((u32)(r_edx+0x570u));
    /* 00653a83: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00653a86: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00653a89: mov dword ptr [ecx + 0x570], eax */ W32((u32)(r_ecx+0x570u), r_eax);
L_00653a8f:; BB(0x00653a8f);
    /* 00653a8f: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00653a95: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00653a97: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00653a9d: mov edx, dword ptr [eax + 0xec] */ r_edx = R32((u32)(r_eax+0xecu));
    /* 00653aa3: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x653aa5u); call_ind(t); }
    /* 00653aa5: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00653aa8: cmp dword ptr [ecx + 0x570], eax */ {  u32 a = R32((u32)(r_ecx+0x570u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00653aae: jge 0x653aeb */ if ((fS==fO)) goto L_00653aeb;
L_00653ab0:; BB(0x00653ab0);
    /* 00653ab0: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 00653ab3: mov eax, dword ptr [edx + 0x570] */ r_eax = R32((u32)(r_edx+0x570u));
    /* 00653ab9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00653aba: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00653ac0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00653ac2: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00653ac8: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 00653ace: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x653ad0u); call_ind(t); }
    /* 00653ad0: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 00653ad3: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00653ad6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00653ad8: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00653adb: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00653ade: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x653ae0u); call_ind(t); }
    /* 00653ae0: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00653ae3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00653ae5: je 0x653ae9 */ if (fZ) goto L_00653ae9;
L_00653ae7:; BB(0x00653ae7);
    /* 00653ae7: jmp 0x653aeb */ goto L_00653aeb;
L_00653ae9:; BB(0x00653ae9);
    /* 00653ae9: jmp 0x653a7a */ goto L_00653a7a;
L_00653aeb:; BB(0x00653aeb);
    /* 00653aeb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00653aed: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00653af0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00653af1: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00653af3: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00653af6: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x653afbu); f_005fb5e0();
    /* 00653afb: mov ecx, eax */ r_ecx = r_eax;
    /* 00653afd: call 0x605ef0 */ r_esp -= 4; W32(r_esp, 0x653b02u); f_00605ef0();
    /* 00653b02: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00653b07: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00653b09: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00653b0f: mov eax, dword ptr [edx + 0xec] */ r_eax = R32((u32)(r_edx+0xecu));
    /* 00653b15: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x653b17u); call_ind(t); }
    /* 00653b17: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00653b1a: jne 0x653b7a */ if (!fZ) goto L_00653b7a;
L_00653b1c:; BB(0x00653b1c);
    /* 00653b1c: lea ecx, [ebp - 0x3c] */ r_ecx = (u32)(r_ebp+0xffffffc4u);
    /* 00653b1f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00653b20: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00653b22: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00653b28: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00653b2a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00653b30: mov edx, dword ptr [eax + 0x338] */ r_edx = R32((u32)(r_eax+0x338u));
    /* 00653b36: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x653b38u); call_ind(t); }
    /* 00653b38: lea eax, [ebp - 0x3c] */ r_eax = (u32)(r_ebp+0xffffffc4u);
    /* 00653b3b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00653b3c: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00653b3f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00653b41: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00653b44: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00653b4a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x653b4cu); call_ind(t); }
    /* 00653b4c: push 0x3f */ { u32 v = 0x3fu; r_esp -= 4; W32(r_esp, v); }
    /* 00653b4e: push 0x112 */ { u32 v = 0x112u; r_esp -= 4; W32(r_esp, v); }
    /* 00653b53: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00653b56: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00653b58: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00653b5b: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00653b5e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x653b60u); call_ind(t); }
    /* 00653b60: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00653b62: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00653b65: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x653b6au); f_005fb5e0();
    /* 00653b6a: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 00653b6d: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 00653b70: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00653b72: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 00653b75: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00653b78: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x653b7au); call_ind(t); }
L_00653b7a:; BB(0x00653b7a);
    /* 00653b7a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00653b80: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x653b85u); f_006375b0();
    /* 00653b85: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00653b88: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00653b8b: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x653b90u); f_0063aac0();
    /* 00653b90: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00653b93: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00653b96: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00653b98: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00653b9b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00653b9c: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 00653b9f: mov ecx, dword ptr [edx + 0x56c] */ r_ecx = R32((u32)(r_edx+0x56cu));
    /* 00653ba5: call 0x628f40 */ r_esp -= 4; W32(r_esp, 0x653baau); f_00628f40();
    /* 00653baa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00653bad: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00653bb4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00653bb5: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00653bb8: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00653bba: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x653bbfu); f_00686d72();
    /* 00653bbf: mov esp, ebp */ r_esp = r_ebp;
    /* 00653bc1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00653bc2: ret  */ FN_RET(0x00653700); r_esp += 4; return;
}

void f_00653bd0(void) /* statisticsdialog::func_00653bd0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00653bd0);
    /* 00653bd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00653bd1: mov ebp, esp */ r_ebp = r_esp;
    /* 00653bd3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00653bd6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00653bd9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00653bdc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00653bdd: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00653be3: call 0x6352f0 */ r_esp -= 4; W32(r_esp, 0x653be8u); f_006352f0();
    /* 00653be8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00653bea: jne 0x653bf1 */ if (!fZ) goto L_00653bf1;
L_00653bec:; BB(0x00653bec);
    /* 00653bec: jmp 0x653d30 */ goto L_00653d30;
L_00653bf1:; BB(0x00653bf1);
    /* 00653bf1: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00653bf5: jl 0x653c12 */ if ((fS!=fO)) goto L_00653c12;
L_00653bf7:; BB(0x00653bf7);
    /* 00653bf7: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00653bfd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00653bff: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00653c05: mov eax, dword ptr [edx + 0xec] */ r_eax = R32((u32)(r_edx+0xecu));
    /* 00653c0b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x653c0du); call_ind(t); }
    /* 00653c0d: cmp dword ptr [ebp + 8], eax */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00653c10: jl 0x653c32 */ if ((fS!=fO)) goto L_00653c32;
L_00653c12:; BB(0x00653c12);
    /* 00653c12: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00653c14: jne 0x653c2d */ if (!fZ) goto L_00653c2d;
L_00653c16:; BB(0x00653c16);
    /* 00653c16: push 0xb2 */ { u32 v = 0xb2u; r_esp -= 4; W32(r_esp, v); }
    /* 00653c1b: push 0x6dd518 */ { u32 v = 0x6dd518u; r_esp -= 4; W32(r_esp, v); }
    /* 00653c20: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00653c25: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x653c2au); f_005e9f20();
    /* 00653c2a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00653c2d:; BB(0x00653c2d);
    /* 00653c2d: jmp 0x653d30 */ goto L_00653d30;
L_00653c32:; BB(0x00653c32);
    /* 00653c32: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00653c35: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00653c38: mov dword ptr [eax + 0x570], ecx */ W32((u32)(r_eax+0x570u), r_ecx);
    /* 00653c3e: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00653c45: jmp 0x653c50 */ goto L_00653c50;
L_00653c47:; BB(0x00653c47);
    /* 00653c47: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00653c4a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00653c4d: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00653c50:; BB(0x00653c50);
    /* 00653c50: cmp dword ptr [ebp - 4], 0x64 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00653c54: jge 0x653c66 */ if ((fS==fO)) goto L_00653c66;
L_00653c56:; BB(0x00653c56);
    /* 00653c56: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00653c59: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00653c5a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00653c5c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00653c5f: call 0x5fbd40 */ r_esp -= 4; W32(r_esp, 0x653c64u); f_005fbd40();
    /* 00653c64: jmp 0x653c47 */ goto L_00653c47;
L_00653c66:; BB(0x00653c66);
    /* 00653c66: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00653c68: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00653c6a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00653c6d: call 0x5fbd10 */ r_esp -= 4; W32(r_esp, 0x653c72u); f_005fbd10();
    /* 00653c72: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00653c74: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00653c76: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00653c79: call 0x5fbdd0 */ r_esp -= 4; W32(r_esp, 0x653c7eu); f_005fbdd0();
    /* 00653c7e: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00653c80: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00653c82: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00653c85: call 0x5fbe60 */ r_esp -= 4; W32(r_esp, 0x653c8au); f_005fbe60();
    /* 00653c8a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00653c8c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00653c8e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00653c91: call 0x5fbe30 */ r_esp -= 4; W32(r_esp, 0x653c96u); f_005fbe30();
    /* 00653c96: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00653c98: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00653c9a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00653c9d: call 0x5fbe30 */ r_esp -= 4; W32(r_esp, 0x653ca2u); f_005fbe30();
    /* 00653ca2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00653ca9: jmp 0x653cb4 */ goto L_00653cb4;
L_00653cab:; BB(0x00653cab);
    /* 00653cab: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00653cae: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00653cb1: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00653cb4:; BB(0x00653cb4);
    /* 00653cb4: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00653cb8: jge 0x653cca */ if ((fS==fO)) goto L_00653cca;
L_00653cba:; BB(0x00653cba);
    /* 00653cba: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00653cbd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00653cbe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00653cc0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00653cc3: call 0x5fbe90 */ r_esp -= 4; W32(r_esp, 0x653cc8u); f_005fbe90();
    /* 00653cc8: jmp 0x653cab */ goto L_00653cab;
L_00653cca:; BB(0x00653cca);
    /* 00653cca: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00653ccd: mov byte ptr [eax + 0x1bc], 0 */ W8((u32)(r_eax+0x1bcu), 0x0u);
    /* 00653cd4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00653cd7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00653cd8: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00653cde: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00653ce0: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00653ce6: mov edx, dword ptr [eax + 0xe0] */ r_edx = R32((u32)(r_eax+0xe0u));
    /* 00653cec: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x653ceeu); call_ind(t); }
    /* 00653cee: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00653cf1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00653cf4: add eax, 0x1c0 */ {  u32 a = r_eax; u32 b = 0x1c0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00653cf9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00653cfa: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00653cfd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00653cfe: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00653d01: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00653d03: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00653d06: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 00653d09: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x653d0bu); call_ind(t); }
    /* 00653d0b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00653d0e: mov byte ptr [eax + 0x1bc], 1 */ W8((u32)(r_eax+0x1bcu), 0x1u);
    /* 00653d15: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00653d18: call 0x653e00 */ r_esp -= 4; W32(r_esp, 0x653d1du); f_00653e00();
    /* 00653d1d: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00653d20: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00653d22: je 0x653d30 */ if (fZ) goto L_00653d30;
L_00653d24:; BB(0x00653d24);
    /* 00653d24: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00653d27: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00653d28: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00653d2b: call 0x653d40 */ r_esp -= 4; W32(r_esp, 0x653d30u); f_00653d40();
L_00653d30:; BB(0x00653d30);
    /* 00653d30: mov esp, ebp */ r_esp = r_ebp;
    /* 00653d32: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00653d33: ret 4 */ FN_RET(0x00653bd0); r_esp += 8; return;
}

void f_00653d40(void) /* statisticsdialog::func_00653d40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00653d40);
    /* 00653d40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00653d41: mov ebp, esp */ r_ebp = r_esp;
    /* 00653d43: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00653d46: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00653d49: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00653d4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00653d4d: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00653d53: call 0x6352f0 */ r_esp -= 4; W32(r_esp, 0x653d58u); f_006352f0();
    /* 00653d58: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00653d5a: jne 0x653d5e */ if (!fZ) goto L_00653d5e;
L_00653d5c:; BB(0x00653d5c);
    /* 00653d5c: jmp 0x653dca */ goto L_00653dca;
L_00653d5e:; BB(0x00653d5e);
    /* 00653d5e: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00653d62: jl 0x653d7f */ if ((fS!=fO)) goto L_00653d7f;
L_00653d64:; BB(0x00653d64);
    /* 00653d64: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00653d6a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00653d6c: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00653d72: mov eax, dword ptr [edx + 0xec] */ r_eax = R32((u32)(r_edx+0xecu));
    /* 00653d78: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x653d7au); call_ind(t); }
    /* 00653d7a: cmp dword ptr [ebp + 8], eax */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00653d7d: jl 0x653d9c */ if ((fS!=fO)) goto L_00653d9c;
L_00653d7f:; BB(0x00653d7f);
    /* 00653d7f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00653d81: jne 0x653d9a */ if (!fZ) goto L_00653d9a;
L_00653d83:; BB(0x00653d83);
    /* 00653d83: push 0xd9 */ { u32 v = 0xd9u; r_esp -= 4; W32(r_esp, v); }
    /* 00653d88: push 0x6dd518 */ { u32 v = 0x6dd518u; r_esp -= 4; W32(r_esp, v); }
    /* 00653d8d: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00653d92: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x653d97u); f_005e9f20();
    /* 00653d97: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00653d9a:; BB(0x00653d9a);
    /* 00653d9a: jmp 0x653dca */ goto L_00653dca;
L_00653d9c:; BB(0x00653d9c);
    /* 00653d9c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00653d9f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00653da0: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00653da6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00653da8: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00653dae: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 00653db4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x653db6u); call_ind(t); }
    /* 00653db6: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00653db9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00653dbc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00653dbd: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00653dc0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00653dc2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00653dc5: mov edx, dword ptr [eax + 0x58] */ r_edx = R32((u32)(r_eax+0x58u));
    /* 00653dc8: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x653dcau); call_ind(t); }
L_00653dca:; BB(0x00653dca);
    /* 00653dca: mov esp, ebp */ r_esp = r_ebp;
    /* 00653dcc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00653dcd: ret 4 */ FN_RET(0x00653d40); r_esp += 8; return;
}

void f_00653e60(void) /* StatisticsDialog::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00653e60);
    /* 00653e60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00653e61: mov ebp, esp */ r_ebp = r_esp;
    /* 00653e63: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00653e66: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00653e69: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00653e6c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00653e6f: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00653e73: ja 0x653e9b */ if ((!fC&&!fZ)) goto L_00653e9b;
L_00653e75:; BB(0x00653e75);
    /* 00653e75: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00653e78: jmp dword ptr [ecx*4 + 0x653ea4] */ { u32 t = R32((u32)(r_ecx*4+0x653ea4u)); switch (t) { case 0x653e7fu: goto L_00653e7f; case 0x653e89u: goto L_00653e89; case 0x653e93u: goto L_00653e93; case 0x653e9bu: goto L_00653e9b; default: UNSUP(0x00653e78, "jump table entry is not a known target"); } }
L_00653e7f:; BB(0x00653e7f);
    /* 00653e7f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00653e82: call 0x653ec0 */ r_esp -= 4; W32(r_esp, 0x653e87u); f_00653ec0();
    /* 00653e87: jmp 0x653e9b */ goto L_00653e9b;
L_00653e89:; BB(0x00653e89);
    /* 00653e89: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00653e8c: call 0x654100 */ r_esp -= 4; W32(r_esp, 0x653e91u); f_00654100();
    /* 00653e91: jmp 0x653e9b */ goto L_00653e9b;
L_00653e93:; BB(0x00653e93);
    /* 00653e93: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00653e96: call 0x654120 */ r_esp -= 4; W32(r_esp, 0x653e9bu); f_00654120();
L_00653e9b:; BB(0x00653e9b);
    /* 00653e9b: mov esp, ebp */ r_esp = r_ebp;
    /* 00653e9d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00653e9e: ret 4 */ FN_RET(0x00653e60); r_esp += 8; return;
}

void f_00654190(void) /* StatisticsDialog::vfunc10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00654190);
    /* 00654190: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00654191: mov ebp, esp */ r_ebp = r_esp;
    /* 00654193: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00654194: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00654197: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065419a: movzx ecx, byte ptr [eax + 0x1bc] */ r_ecx = (u32)R8((u32)(r_eax+0x1bcu));
    /* 006541a1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006541a3: je 0x6541c9 */ if (fZ) goto L_006541c9;
L_006541a5:; BB(0x006541a5);
    /* 006541a5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006541a8: mov eax, dword ptr [edx + 0x570] */ r_eax = R32((u32)(r_edx+0x570u));
    /* 006541ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006541af: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006541b2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006541b3: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 006541b9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006541bb: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006541c1: mov edx, dword ptr [eax + 0x3d8] */ r_edx = R32((u32)(r_eax+0x3d8u));
    /* 006541c7: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6541c9u); call_ind(t); }
L_006541c9:; BB(0x006541c9);
    /* 006541c9: mov esp, ebp */ r_esp = r_ebp;
    /* 006541cb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006541cc: ret 4 */ FN_RET(0x00654190); r_esp += 8; return;
}

void f_006541d0(void) /* StatisticsDialog::vfunc8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006541d0);
    /* 006541d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006541d1: mov ebp, esp */ r_ebp = r_esp;
    /* 006541d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006541d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006541d7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006541da: movzx ecx, byte ptr [eax + 0x1bc] */ r_ecx = (u32)R8((u32)(r_eax+0x1bcu));
    /* 006541e1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006541e3: je 0x654209 */ if (fZ) goto L_00654209;
L_006541e5:; BB(0x006541e5);
    /* 006541e5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006541e8: mov eax, dword ptr [edx + 0x570] */ r_eax = R32((u32)(r_edx+0x570u));
    /* 006541ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006541ef: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006541f2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006541f3: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 006541f9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006541fb: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00654201: mov edx, dword ptr [eax + 0x3d4] */ r_edx = R32((u32)(r_eax+0x3d4u));
    /* 00654207: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x654209u); call_ind(t); }
L_00654209:; BB(0x00654209);
    /* 00654209: mov esp, ebp */ r_esp = r_ebp;
    /* 0065420b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065420c: ret 4 */ FN_RET(0x006541d0); r_esp += 8; return;
}

void f_00654360(void) /* StatisticsDialog::vfunc14 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00654360);
    /* 00654360: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00654361: mov ebp, esp */ r_ebp = r_esp;
    /* 00654363: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00654364: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00654367: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0065436a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065436b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00654371: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00654373: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00654379: mov eax, dword ptr [edx + 0x3d0] */ r_eax = R32((u32)(r_edx+0x3d0u));
    /* 0065437f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x654381u); call_ind(t); }
    /* 00654381: mov esp, ebp */ r_esp = r_ebp;
    /* 00654383: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00654384: ret 8 */ FN_RET(0x00654360); r_esp += 12; return;
}

void f_00654390(void) /* statisticsdialog::func_00654390 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00654390);
    /* 00654390: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00654391: mov ebp, esp */ r_ebp = r_esp;
    /* 00654393: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00654394: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00654397: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065439b: je 0x6543a3 */ if (fZ) goto L_006543a3;
L_0065439d:; BB(0x0065439d);
    /* 0065439d: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006543a1: jne 0x6543c0 */ if (!fZ) goto L_006543c0;
L_006543a3:; BB(0x006543a3);
    /* 006543a3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 006543a5: jne 0x6543be */ if (!fZ) goto L_006543be;
L_006543a7:; BB(0x006543a7);
    /* 006543a7: push 0x160 */ { u32 v = 0x160u; r_esp -= 4; W32(r_esp, v); }
    /* 006543ac: push 0x6dd518 */ { u32 v = 0x6dd518u; r_esp -= 4; W32(r_esp, v); }
    /* 006543b1: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 006543b6: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x6543bbu); f_005e9f20();
    /* 006543bb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006543be:; BB(0x006543be);
    /* 006543be: jmp 0x654425 */ goto L_00654425;
L_006543c0:; BB(0x006543c0);
    /* 006543c0: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006543c2: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006543c4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006543c6: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006543c9: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006543cc: add edx, 0x64 */ {  u32 a = r_edx; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006543cf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006543d0: push 0x10e */ { u32 v = 0x10eu; r_esp -= 4; W32(r_esp, v); }
    /* 006543d5: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 006543d7: push 0x91 */ { u32 v = 0x91u; r_esp -= 4; W32(r_esp, v); }
    /* 006543dc: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 006543de: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006543e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006543e2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006543e5: lea edx, [ecx + ecx + 1] */ r_edx = (u32)(r_ecx+r_ecx+0x1u);
    /* 006543e9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006543ea: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006543ec: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006543ef: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x6543f4u); f_005fa5b0();
    /* 006543f4: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006543f6: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006543f8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006543fa: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006543fd: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00654400: add eax, 0x64 */ {  u32 a = r_eax; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00654403: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00654404: push 0x190 */ { u32 v = 0x190u; r_esp -= 4; W32(r_esp, v); }
    /* 00654409: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0065440b: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 0065440d: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0065440f: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00654412: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00654413: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00654416: lea eax, [edx + edx + 2] */ r_eax = (u32)(r_edx+r_edx+0x2u);
    /* 0065441a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065441b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065441d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00654420: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x654425u); f_005fa5b0();
L_00654425:; BB(0x00654425);
    /* 00654425: mov esp, ebp */ r_esp = r_ebp;
    /* 00654427: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00654428: ret 0xc */ FN_RET(0x00654390); r_esp += 16; return;
}

