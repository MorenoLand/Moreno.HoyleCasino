#include "protos.h"

void f_00661470(void) /* MainNavigation::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00661470);
    /* 00661470: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00661471: mov ebp, esp */ r_ebp = r_esp;
    /* 00661473: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00661474: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00661477: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066147a: call 0x5d7b60 */ r_esp -= 4; W32(r_esp, 0x66147fu); f_005d7b60();
    /* 0066147f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00661482: mov dword ptr [eax], 0x6df3a4 */ W32((u32)(r_eax), 0x6df3a4u);
    /* 00661488: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066148b: mov dword ptr [ecx + 0x90], 0 */ W32((u32)(r_ecx+0x90u), 0x0u);
    /* 00661495: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00661498: mov dword ptr [edx + 0x94], 0 */ W32((u32)(r_edx+0x94u), 0x0u);
    /* 006614a2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006614a5: mov dword ptr [eax + 0x80], 0 */ W32((u32)(r_eax+0x80u), 0x0u);
    /* 006614af: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006614b2: mov dword ptr [ecx + 0x84], 0 */ W32((u32)(r_ecx+0x84u), 0x0u);
    /* 006614bc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006614bf: mov dword ptr [edx + 0x88], 0 */ W32((u32)(r_edx+0x88u), 0x0u);
    /* 006614c9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006614cc: mov dword ptr [eax + 0x8c], 0 */ W32((u32)(r_eax+0x8cu), 0x0u);
    /* 006614d6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006614d9: mov esp, ebp */ r_esp = r_ebp;
    /* 006614db: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006614dc: ret  */ FN_RET(0x00661470); r_esp += 4; return;
}

void f_00661520(void) /* MainNavigation::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00661520);
    /* 00661520: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00661521: mov ebp, esp */ r_ebp = r_esp;
    /* 00661523: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00661525: push 0x6ac9b9 */ { u32 v = 0x6ac9b9u; r_esp -= 4; W32(r_esp, v); }
    /* 0066152a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00661530: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00661531: sub esp, 0x90 */ {  u32 a = r_esp; u32 b = 0x90u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00661537: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0066153c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066153e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066153f: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00661542: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00661548: mov dword ptr [ebp - 0x90], ecx */ W32((u32)(r_ebp+0xffffff70u), r_ecx);
    /* 0066154e: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 00661554: call 0x64ce60 */ r_esp -= 4; W32(r_esp, 0x661559u); f_0064ce60();
    /* 00661559: movzx eax, byte ptr [0x795f95] */ r_eax = (u32)R8((u32)(0x795f95u));
    /* 00661560: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00661562: je 0x661585 */ if (fZ) goto L_00661585;
L_00661564:; BB(0x00661564);
    /* 00661564: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 0066156a: call 0x662e40 */ r_esp -= 4; W32(r_esp, 0x66156fu); f_00662e40();
    /* 0066156f: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00661575: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00661577: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066157d: mov eax, dword ptr [edx + 0x384] */ r_eax = R32((u32)(r_edx+0x384u));
    /* 00661583: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x661585u); call_ind(t); }
L_00661585:; BB(0x00661585);
    /* 00661585: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 0066158b: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00661591: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 00661594: mov dword ptr [ecx + 0x80], eax */ W32((u32)(r_ecx+0x80u), r_eax);
    /* 0066159a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066159c: push 0x30d5f4 */ { u32 v = 0x30d5f4u; r_esp -= 4; W32(r_esp, v); }
    /* 006615a1: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 006615a7: mov ecx, dword ptr [ecx + 0x80] */ r_ecx = R32((u32)(r_ecx+0x80u));
    /* 006615ad: call 0x5f83d0 */ r_esp -= 4; W32(r_esp, 0x6615b2u); f_005f83d0();
    /* 006615b2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006615b4: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 006615b9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006615bb: push 0x3e8 */ { u32 v = 0x3e8u; r_esp -= 4; W32(r_esp, v); }
    /* 006615c0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006615c2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006615c4: push 0x30d5fa */ { u32 v = 0x30d5fau; r_esp -= 4; W32(r_esp, v); }
    /* 006615c9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006615cb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006615cd: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 006615d3: mov ecx, dword ptr [edx + 0x80] */ r_ecx = R32((u32)(r_edx+0x80u));
    /* 006615d9: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x6615deu); f_005f9ce0();
    /* 006615de: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 006615e4: mov dword ptr [ecx + 0x84], eax */ W32((u32)(r_ecx+0x84u), r_eax);
    /* 006615ea: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006615ec: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 006615ee: push 0x3e8 */ { u32 v = 0x3e8u; r_esp -= 4; W32(r_esp, v); }
    /* 006615f3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006615f5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006615f7: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 006615f9: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 006615fe: push 0x4d */ { u32 v = 0x4du; r_esp -= 4; W32(r_esp, v); }
    /* 00661600: push 0x6df6c4 */ { u32 v = 0x6df6c4u; r_esp -= 4; W32(r_esp, v); }
    /* 00661605: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00661607: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00661609: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 0066160f: mov ecx, dword ptr [edx + 0x80] */ r_ecx = R32((u32)(r_edx+0x80u));
    /* 00661615: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x66161au); f_005fa5b0();
    /* 0066161a: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 00661620: mov dword ptr [ecx + 0x88], eax */ W32((u32)(r_ecx+0x88u), r_eax);
    /* 00661626: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00661628: push 0x30d5f7 */ { u32 v = 0x30d5f7u; r_esp -= 4; W32(r_esp, v); }
    /* 0066162d: push 0x20584554 */ { u32 v = 0x20584554u; r_esp -= 4; W32(r_esp, v); }
    /* 00661632: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 00661638: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 0066163b: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x661640u); f_006044b0();
    /* 00661640: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00661642: push 0x30d5f9 */ { u32 v = 0x30d5f9u; r_esp -= 4; W32(r_esp, v); }
    /* 00661647: push 0x20584554 */ { u32 v = 0x20584554u; r_esp -= 4; W32(r_esp, v); }
    /* 0066164c: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 00661651: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 00661654: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x661659u); f_006044b0();
    /* 00661659: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066165b: push 0x30d5fa */ { u32 v = 0x30d5fau; r_esp -= 4; W32(r_esp, v); }
    /* 00661660: push 0x20584554 */ { u32 v = 0x20584554u; r_esp -= 4; W32(r_esp, v); }
    /* 00661665: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 0066166b: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 0066166e: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x661673u); f_006044b0();
    /* 00661673: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 00661678: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x66167du); f_00686d82();
    /* 0066167d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00661680: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 00661683: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0066168a: cmp dword ptr [ebp - 0x7c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff84u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066168e: je 0x6616a0 */ if (fZ) goto L_006616a0;
L_00661690:; BB(0x00661690);
    /* 00661690: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 00661693: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x661698u); f_005eaaf0();
    /* 00661698: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 0066169e: jmp 0x6616aa */ goto L_006616aa;
L_006616a0:; BB(0x006616a0);
    /* 006616a0: mov dword ptr [ebp - 0x94], 0 */ W32((u32)(r_ebp+0xffffff6cu), 0x0u);
L_006616aa:; BB(0x006616aa);
    /* 006616aa: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 006616b0: mov dword ptr [ebp - 0x78], edx */ W32((u32)(r_ebp+0xffffff88u), r_edx);
    /* 006616b3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006616ba: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 006616bd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006616c0: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006616c2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006616c4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006616c6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006616c8: push 0x30d5f5 */ { u32 v = 0x30d5f5u; r_esp -= 4; W32(r_esp, v); }
    /* 006616cd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006616d0: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x6616d5u); f_005eae80();
    /* 006616d5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006616d8: call 0x5eb130 */ r_esp -= 4; W32(r_esp, 0x6616ddu); f_005eb130();
    /* 006616dd: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006616e0: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 006616e6: mov dword ptr [ecx + 0x94], eax */ W32((u32)(r_ecx+0x94u), r_eax);
    /* 006616ec: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006616ef: mov dword ptr [ebp - 0x84], edx */ W32((u32)(r_ebp+0xffffff7cu), r_edx);
    /* 006616f5: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 006616fb: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 006616fe: cmp dword ptr [ebp - 0x80], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00661702: je 0x66171a */ if (fZ) goto L_0066171a;
L_00661704:; BB(0x00661704);
    /* 00661704: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00661706: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 00661709: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066170b: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 0066170e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00661710: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x661712u); call_ind(t); }
    /* 00661712: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 00661718: jmp 0x661724 */ goto L_00661724;
L_0066171a:; BB(0x0066171a);
    /* 0066171a: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
L_00661724:; BB(0x00661724);
    /* 00661724: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 0066172b: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 00661732: mov dword ptr [ebp - 0x28], 0x30d5f5 */ W32((u32)(r_ebp+0xffffffd8u), 0x30d5f5u);
    /* 00661739: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00661740: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 00661747: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0066174e: lea ecx, [ebp - 0x44] */ r_ecx = (u32)(r_ebp+0xffffffbcu);
    /* 00661751: call 0x662ef0 */ r_esp -= 4; W32(r_esp, 0x661756u); f_00662ef0();
    /* 00661756: push 0x770ad8 */ { u32 v = 0x770ad8u; r_esp -= 4; W32(r_esp, v); }
    /* 0066175b: lea ecx, [ebp - 0x44] */ r_ecx = (u32)(r_ebp+0xffffffbcu);
    /* 0066175e: call 0x663060 */ r_esp -= 4; W32(r_esp, 0x661763u); f_00663060();
    /* 00661763: lea ecx, [ebp - 0x28] */ r_ecx = (u32)(r_ebp+0xffffffd8u);
    /* 00661766: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00661767: lea ecx, [ebp - 0x44] */ r_ecx = (u32)(r_ebp+0xffffffbcu);
    /* 0066176a: call 0x662f30 */ r_esp -= 4; W32(r_esp, 0x66176fu); f_00662f30();
    /* 0066176f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00661771: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00661773: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00661775: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00661777: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00661779: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0066177c: lea eax, [edx*4 + 2] */ r_eax = (u32)(r_edx*4+0x2u);
    /* 00661783: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00661784: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00661786: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00661788: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066178a: push 0x67 */ { u32 v = 0x67u; r_esp -= 4; W32(r_esp, v); }
    /* 0066178c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066178e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00661790: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00661792: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 00661798: mov ecx, dword ptr [ecx + 0x80] */ r_ecx = R32((u32)(r_ecx+0x80u));
    /* 0066179e: call 0x5fa3c0 */ r_esp -= 4; W32(r_esp, 0x6617a3u); f_005fa3c0();
    /* 006617a3: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 006617a6: push 0x67 */ { u32 v = 0x67u; r_esp -= 4; W32(r_esp, v); }
    /* 006617a8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006617aa: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 006617b0: mov ecx, dword ptr [edx + 0x80] */ r_ecx = R32((u32)(r_edx+0x80u));
    /* 006617b6: call 0x5fb510 */ r_esp -= 4; W32(r_esp, 0x6617bbu); f_005fb510();
    /* 006617bb: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006617be: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006617c0: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006617c3: call 0x625c30 */ r_esp -= 4; W32(r_esp, 0x6617c8u); f_00625c30();
    /* 006617c8: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 006617cf: jmp 0x6617da */ goto L_006617da;
L_006617d1:; BB(0x006617d1);
    /* 006617d1: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 006617d4: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006617d7: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
L_006617da:; BB(0x006617da);
    /* 006617da: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006617e0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006617e2: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006617e8: mov eax, dword ptr [edx + 0xec] */ r_eax = R32((u32)(r_edx+0xecu));
    /* 006617ee: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6617f0u); call_ind(t); }
    /* 006617f0: cmp dword ptr [ebp - 0x48], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006617f3: jge 0x66189d */ if ((fS==fO)) goto L_0066189d;
L_006617f9:; BB(0x006617f9);
    /* 006617f9: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 006617fc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006617fd: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00661803: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00661805: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066180b: mov edx, dword ptr [eax + 0xe0] */ r_edx = R32((u32)(r_eax+0xe0u));
    /* 00661811: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x661813u); call_ind(t); }
    /* 00661813: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00661816: cmp dword ptr [ebp - 0x4c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066181a: jne 0x66181e */ if (!fZ) goto L_0066181e;
L_0066181c:; BB(0x0066181c);
    /* 0066181c: jmp 0x6617d1 */ goto L_006617d1;
L_0066181e:; BB(0x0066181e);
    /* 0066181e: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00661821: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00661823: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00661826: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00661829: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66182bu); call_ind(t); }
    /* 0066182b: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0066182e: cmp dword ptr [ebp - 0x50], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00661832: jne 0x661836 */ if (!fZ) goto L_00661836;
L_00661834:; BB(0x00661834);
    /* 00661834: jmp 0x6617d1 */ goto L_006617d1;
L_00661836:; BB(0x00661836);
    /* 00661836: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 0066183d: jmp 0x661848 */ goto L_00661848;
L_0066183f:; BB(0x0066183f);
    /* 0066183f: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00661842: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00661845: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
L_00661848:; BB(0x00661848);
    /* 00661848: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 0066184b: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0066184e: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 00661851: cmp dword ptr [eax + edx], -1 */ {  u32 a = R32((u32)(r_eax+r_edx)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00661855: je 0x661898 */ if (fZ) goto L_00661898;
L_00661857:; BB(0x00661857);
    /* 00661857: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0066185a: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0066185d: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00661860: cmp dword ptr [edx + ecx], -2 */ {  u32 a = R32((u32)(r_edx+r_ecx)); u32 b = 0xfffffffeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00661864: jne 0x661868 */ if (!fZ) goto L_00661868;
L_00661866:; BB(0x00661866);
    /* 00661866: jmp 0x66183f */ goto L_0066183f;
L_00661868:; BB(0x00661868);
    /* 00661868: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066186b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066186c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0066186f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00661870: lea edx, [ebp - 0x44] */ r_edx = (u32)(r_ebp+0xffffffbcu);
    /* 00661873: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00661874: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 00661877: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0066187a: add eax, dword ptr [ebp - 0x50] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffb0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066187d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066187e: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00661881: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00661884: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00661887: mov eax, dword ptr [edx + ecx] */ r_eax = R32((u32)(r_edx+r_ecx));
    /* 0066188a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066188b: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 00661891: call 0x662360 */ r_esp -= 4; W32(r_esp, 0x661896u); f_00662360();
    /* 00661896: jmp 0x66183f */ goto L_0066183f;
L_00661898:; BB(0x00661898);
    /* 00661898: jmp 0x6617d1 */ goto L_006617d1;
L_0066189d:; BB(0x0066189d);
    /* 0066189d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066189f: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 006618a4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006618a6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006618a9: lea edx, [ecx*4 + 3] */ r_edx = (u32)(r_ecx*4+0x3u);
    /* 006618b0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006618b1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006618b3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006618b5: push 0x30d5fa */ { u32 v = 0x30d5fau; r_esp -= 4; W32(r_esp, v); }
    /* 006618ba: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006618bc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006618be: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 006618c4: mov ecx, dword ptr [eax + 0x80] */ r_ecx = R32((u32)(r_eax+0x80u));
    /* 006618ca: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x6618cfu); f_005f9ce0();
    /* 006618cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006618d0: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006618d3: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x6618d8u); f_005ff5a0();
    /* 006618d8: lea ecx, [ebp - 0x70] */ r_ecx = (u32)(r_ebp+0xffffff90u);
    /* 006618db: call 0x662ef0 */ r_esp -= 4; W32(r_esp, 0x6618e0u); f_00662ef0();
    /* 006618e0: push 0x770ab8 */ { u32 v = 0x770ab8u; r_esp -= 4; W32(r_esp, v); }
    /* 006618e5: lea ecx, [ebp - 0x70] */ r_ecx = (u32)(r_ebp+0xffffff90u);
    /* 006618e8: call 0x663060 */ r_esp -= 4; W32(r_esp, 0x6618edu); f_00663060();
    /* 006618ed: lea ecx, [ebp - 0x28] */ r_ecx = (u32)(r_ebp+0xffffffd8u);
    /* 006618f0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006618f1: lea ecx, [ebp - 0x70] */ r_ecx = (u32)(r_ebp+0xffffff90u);
    /* 006618f4: call 0x662f30 */ r_esp -= 4; W32(r_esp, 0x6618f9u); f_00662f30();
    /* 006618f9: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
    /* 00661900: jmp 0x66190b */ goto L_0066190b;
L_00661902:; BB(0x00661902);
    /* 00661902: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00661905: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00661908: mov dword ptr [ebp - 0x74], edx */ W32((u32)(r_ebp+0xffffff8cu), r_edx);
L_0066190b:; BB(0x0066190b);
    /* 0066190b: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0066190e: cmp dword ptr [eax*4 + 0x770b80], -1 */ {  u32 a = R32((u32)(r_eax*4+0x770b80u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00661916: je 0x66193e */ if (fZ) goto L_0066193e;
L_00661918:; BB(0x00661918);
    /* 00661918: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066191b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066191c: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0066191f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00661920: lea eax, [ebp - 0x70] */ r_eax = (u32)(r_ebp+0xffffff90u);
    /* 00661923: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00661924: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00661926: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00661929: mov edx, dword ptr [ecx*4 + 0x770b80] */ r_edx = R32((u32)(r_ecx*4+0x770b80u));
    /* 00661930: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00661931: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 00661937: call 0x662360 */ r_esp -= 4; W32(r_esp, 0x66193cu); f_00662360();
    /* 0066193c: jmp 0x661902 */ goto L_00661902;
L_0066193e:; BB(0x0066193e);
    /* 0066193e: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00661940: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x661945u); f_00686d82();
    /* 00661945: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00661948: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 0066194e: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00661955: cmp dword ptr [ebp - 0x8c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066195c: je 0x661985 */ if (fZ) goto L_00661985;
L_0066195e:; BB(0x0066195e);
    /* 0066195e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00661960: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 00661966: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x66196bu); f_005fc0d0();
    /* 0066196b: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 00661971: mov dword ptr [eax], 0x6df6a4 */ W32((u32)(r_eax), 0x6df6a4u);
    /* 00661977: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 0066197d: mov dword ptr [ebp - 0x9c], ecx */ W32((u32)(r_ebp+0xffffff64u), r_ecx);
    /* 00661983: jmp 0x66198f */ goto L_0066198f;
L_00661985:; BB(0x00661985);
    /* 00661985: mov dword ptr [ebp - 0x9c], 0 */ W32((u32)(r_ebp+0xffffff64u), 0x0u);
L_0066198f:; BB(0x0066198f);
    /* 0066198f: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 00661995: mov dword ptr [ebp - 0x88], edx */ W32((u32)(r_ebp+0xffffff78u), r_edx);
    /* 0066199b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006619a2: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 006619a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006619a9: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 006619af: call 0x5f1b70 */ r_esp -= 4; W32(r_esp, 0x6619b4u); f_005f1b70();
    /* 006619b4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006619b7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006619b8: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006619bb: call 0x6064e0 */ r_esp -= 4; W32(r_esp, 0x6619c0u); f_006064e0();
    /* 006619c0: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 006619c6: call 0x662ce0 */ r_esp -= 4; W32(r_esp, 0x6619cbu); f_00662ce0();
    /* 006619cb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006619cd: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006619d0: call 0x625e00 */ r_esp -= 4; W32(r_esp, 0x6619d5u); f_00625e00();
    /* 006619d5: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006619db: call 0x636760 */ r_esp -= 4; W32(r_esp, 0x6619e0u); f_00636760();
    /* 006619e0: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 006619e3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006619e5: je 0x661a07 */ if (fZ) goto L_00661a07;
L_006619e7:; BB(0x006619e7);
    /* 006619e7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006619e9: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006619eb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006619ed: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006619ef: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006619f1: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 006619f7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006619f9: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 006619ff: mov eax, dword ptr [edx + 0x16c] */ r_eax = R32((u32)(r_edx+0x16cu));
    /* 00661a05: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x661a07u); call_ind(t); }
L_00661a07:; BB(0x00661a07);
    /* 00661a07: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00661a0a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00661a11: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00661a12: mov esp, ebp */ r_esp = r_ebp;
    /* 00661a14: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00661a15: ret  */ FN_RET(0x00661520); r_esp += 4; return;
}

void f_00661a40(void) /* MainNavigation::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00661a40);
    /* 00661a40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00661a41: mov ebp, esp */ r_ebp = r_esp;
    /* 00661a43: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00661a45: push 0x6aca01 */ { u32 v = 0x6aca01u; r_esp -= 4; W32(r_esp, v); }
    /* 00661a4a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00661a50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00661a51: sub esp, 0x280 */ {  u32 a = r_esp; u32 b = 0x280u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00661a57: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00661a58: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00661a59: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00661a5e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00661a60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00661a61: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00661a64: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00661a6a: mov dword ptr [ebp - 0x27c], ecx */ W32((u32)(r_ebp+0xfffffd84u), r_ecx);
    /* 00661a70: push 0x67 */ { u32 v = 0x67u; r_esp -= 4; W32(r_esp, v); }
    /* 00661a72: mov eax, dword ptr [ebp - 0x27c] */ r_eax = R32((u32)(r_ebp+0xfffffd84u));
    /* 00661a78: mov ecx, dword ptr [eax + 0x80] */ r_ecx = R32((u32)(r_eax+0x80u));
    /* 00661a7e: call 0x5fb4c0 */ r_esp -= 4; W32(r_esp, 0x661a83u); f_005fb4c0();
    /* 00661a83: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 00661a86: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00661a89: call 0x606490 */ r_esp -= 4; W32(r_esp, 0x661a8eu); f_00606490();
    /* 00661a8e: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00661a91: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00661a94: mov dword ptr [ebp - 0x280], ecx */ W32((u32)(r_ebp+0xfffffd80u), r_ecx);
    /* 00661a9a: cmp dword ptr [ebp - 0x280], 0x64 */ {  u32 a = R32((u32)(r_ebp+0xfffffd80u)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00661aa1: je 0x661ab1 */ if (fZ) goto L_00661ab1;
L_00661aa3:; BB(0x00661aa3);
    /* 00661aa3: cmp dword ptr [ebp - 0x280], 0x65 */ {  u32 a = R32((u32)(r_ebp+0xfffffd80u)); u32 b = 0x65u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00661aaa: je 0x661ab6 */ if (fZ) goto L_00661ab6;
L_00661aac:; BB(0x00661aac);
    /* 00661aac: jmp 0x661ce2 */ goto L_00661ce2;
L_00661ab1:; BB(0x00661ab1);
    /* 00661ab1: jmp 0x662288 */ goto L_00662288;
L_00661ab6:; BB(0x00661ab6);
    /* 00661ab6: mov edx, dword ptr [ebp - 0x27c] */ r_edx = R32((u32)(r_ebp+0xfffffd84u));
    /* 00661abc: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 00661ac2: mov ecx, dword ptr [ebp - 0x27c] */ r_ecx = R32((u32)(r_ebp+0xfffffd84u));
    /* 00661ac8: mov ecx, dword ptr [ecx + 0x84] */ r_ecx = R32((u32)(r_ecx+0x84u));
    /* 00661ace: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00661ad0: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00661ad3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x661ad5u); call_ind(t); }
    /* 00661ad5: mov ecx, dword ptr [ebp - 0x27c] */ r_ecx = R32((u32)(r_ebp+0xfffffd84u));
    /* 00661adb: mov edx, dword ptr [ecx + 0x88] */ r_edx = R32((u32)(r_ecx+0x88u));
    /* 00661ae1: mov eax, dword ptr [ebp - 0x27c] */ r_eax = R32((u32)(r_ebp+0xfffffd84u));
    /* 00661ae7: mov ecx, dword ptr [eax + 0x88] */ r_ecx = R32((u32)(r_eax+0x88u));
    /* 00661aed: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00661aef: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00661af2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x661af4u); call_ind(t); }
    /* 00661af4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00661af7: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00661afa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00661afb: mov edx, dword ptr [ebp - 0x27c] */ r_edx = R32((u32)(r_ebp+0xfffffd84u));
    /* 00661b01: mov ecx, dword ptr [edx + 0x80] */ r_ecx = R32((u32)(r_edx+0x80u));
    /* 00661b07: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x661b0cu); f_005fb2b0();
    /* 00661b0c: mov dword ptr [ebp - 0x210], eax */ W32((u32)(r_ebp+0xfffffdf0u), r_eax);
    /* 00661b12: push 0x67 */ { u32 v = 0x67u; r_esp -= 4; W32(r_esp, v); }
    /* 00661b14: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00661b17: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00661b1a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00661b1b: mov ecx, dword ptr [ebp - 0x27c] */ r_ecx = R32((u32)(r_ebp+0xfffffd84u));
    /* 00661b21: mov ecx, dword ptr [ecx + 0x80] */ r_ecx = R32((u32)(r_ecx+0x80u));
    /* 00661b27: call 0x5fb510 */ r_esp -= 4; W32(r_esp, 0x661b2cu); f_005fb510();
    /* 00661b2c: mov dword ptr [ebp - 0x234], eax */ W32((u32)(r_ebp+0xfffffdccu), r_eax);
    /* 00661b32: mov edx, dword ptr [ebp - 0x234] */ r_edx = R32((u32)(r_ebp+0xfffffdccu));
    /* 00661b38: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00661b3a: mov ecx, dword ptr [ebp - 0x234] */ r_ecx = R32((u32)(r_ebp+0xfffffdccu));
    /* 00661b40: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 00661b43: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x661b45u); call_ind(t); }
    /* 00661b45: mov dword ptr [ebp - 0x230], eax */ W32((u32)(r_ebp+0xfffffdd0u), r_eax);
    /* 00661b4b: mov eax, dword ptr [ebp - 0x234] */ r_eax = R32((u32)(r_ebp+0xfffffdccu));
    /* 00661b51: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00661b53: mov ecx, dword ptr [ebp - 0x234] */ r_ecx = R32((u32)(r_ebp+0xfffffdccu));
    /* 00661b59: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 00661b5c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x661b5eu); call_ind(t); }
    /* 00661b5e: mov dword ptr [ebp - 0x22c], eax */ W32((u32)(r_ebp+0xfffffdd4u), r_eax);
    /* 00661b64: mov ecx, dword ptr [ebp - 0x210] */ r_ecx = R32((u32)(r_ebp+0xfffffdf0u));
    /* 00661b6a: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00661b6d: call 0x5f8550 */ r_esp -= 4; W32(r_esp, 0x661b72u); f_005f8550();
    /* 00661b72: mov esi, eax */ r_esi = r_eax;
    /* 00661b74: mov edx, dword ptr [ebp - 0x210] */ r_edx = R32((u32)(r_ebp+0xfffffdf0u));
    /* 00661b7a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00661b7c: mov ecx, dword ptr [ebp - 0x210] */ r_ecx = R32((u32)(r_ebp+0xfffffdf0u));
    /* 00661b82: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 00661b85: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x661b87u); call_ind(t); }
    /* 00661b87: mov edi, eax */ r_edi = r_eax;
    /* 00661b89: mov ecx, dword ptr [ebp - 0x210] */ r_ecx = R32((u32)(r_ebp+0xfffffdf0u));
    /* 00661b8f: call 0x5eb470 */ r_esp -= 4; W32(r_esp, 0x661b94u); f_005eb470();
    /* 00661b94: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00661b96: sub esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00661b98: mov dword ptr [ebp - 0x228], esi */ W32((u32)(r_ebp+0xfffffdd8u), r_esi);
    /* 00661b9e: mov dword ptr [ebp - 0x224], 0 */ W32((u32)(r_ebp+0xfffffddcu), 0x0u);
    /* 00661ba8: mov eax, dword ptr [ebp - 0x234] */ r_eax = R32((u32)(r_ebp+0xfffffdccu));
    /* 00661bae: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00661bb0: mov ecx, dword ptr [ebp - 0x234] */ r_ecx = R32((u32)(r_ebp+0xfffffdccu));
    /* 00661bb6: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00661bb9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x661bbbu); call_ind(t); }
    /* 00661bbb: sub eax, 0x1f4 */ {  u32 a = r_eax; u32 b = 0x1f4u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00661bc0: mov dword ptr [ebp - 0x220], eax */ W32((u32)(r_ebp+0xfffffde0u), r_eax);
    /* 00661bc6: mov dword ptr [ebp - 0x21c], 0 */ W32((u32)(r_ebp+0xfffffde4u), 0x0u);
    /* 00661bd0: mov ecx, dword ptr [ebp - 0x234] */ r_ecx = R32((u32)(r_ebp+0xfffffdccu));
    /* 00661bd6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00661bd8: mov ecx, dword ptr [ebp - 0x234] */ r_ecx = R32((u32)(r_ebp+0xfffffdccu));
    /* 00661bde: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00661be1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x661be3u); call_ind(t); }
    /* 00661be3: add eax, 0x12c */ {  u32 a = r_eax; u32 b = 0x12cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00661be8: mov dword ptr [ebp - 0x218], eax */ W32((u32)(r_ebp+0xfffffde8u), r_eax);
    /* 00661bee: mov dword ptr [ebp - 0x214], 0 */ W32((u32)(r_ebp+0xfffffdecu), 0x0u);
    /* 00661bf8: mov ecx, dword ptr [ebp - 0x234] */ r_ecx = R32((u32)(r_ebp+0xfffffdccu));
    /* 00661bfe: mov dword ptr [ecx + 0x184], 1 */ W32((u32)(r_ecx+0x184u), 0x1u);
    /* 00661c08: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 00661c0a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x661c0fu); f_00686d82();
    /* 00661c0f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00661c12: mov dword ptr [ebp - 0x258], eax */ W32((u32)(r_ebp+0xfffffda8u), r_eax);
    /* 00661c18: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00661c1f: cmp dword ptr [ebp - 0x258], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffda8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00661c26: je 0x661c4e */ if (fZ) goto L_00661c4e;
L_00661c28:; BB(0x00661c28);
    /* 00661c28: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00661c2a: lea edx, [ebp - 0x230] */ r_edx = (u32)(r_ebp+0xfffffdd0u);
    /* 00661c30: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00661c31: mov eax, dword ptr [ebp - 0x27c] */ r_eax = R32((u32)(r_ebp+0xfffffd84u));
    /* 00661c37: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00661c3a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00661c3b: mov ecx, dword ptr [ebp - 0x258] */ r_ecx = R32((u32)(r_ebp+0xfffffda8u));
    /* 00661c41: call 0x6632a0 */ r_esp -= 4; W32(r_esp, 0x661c46u); f_006632a0();
    /* 00661c46: mov dword ptr [ebp - 0x284], eax */ W32((u32)(r_ebp+0xfffffd7cu), r_eax);
    /* 00661c4c: jmp 0x661c58 */ goto L_00661c58;
L_00661c4e:; BB(0x00661c4e);
    /* 00661c4e: mov dword ptr [ebp - 0x284], 0 */ W32((u32)(r_ebp+0xfffffd7cu), 0x0u);
L_00661c58:; BB(0x00661c58);
    /* 00661c58: mov edx, dword ptr [ebp - 0x284] */ r_edx = R32((u32)(r_ebp+0xfffffd7cu));
    /* 00661c5e: mov dword ptr [ebp - 0x254], edx */ W32((u32)(r_ebp+0xfffffdacu), r_edx);
    /* 00661c64: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00661c6b: mov eax, dword ptr [ebp - 0x254] */ r_eax = R32((u32)(r_ebp+0xfffffdacu));
    /* 00661c71: mov dword ptr [ebp - 0x238], eax */ W32((u32)(r_ebp+0xfffffdc8u), r_eax);
    /* 00661c77: mov ecx, dword ptr [ebp - 0x234] */ r_ecx = R32((u32)(r_ebp+0xfffffdccu));
    /* 00661c7d: mov eax, 0x1e */ r_eax = 0x1eu;
    /* 00661c82: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00661c83: idiv dword ptr [ecx + 0x184] */ { i32 d = (i32)R32((u32)(r_ecx+0x184u)); if (!d) UNSUP(0x00661c83, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00661c83, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00661c89: mov dword ptr [ebp - 0x270], eax */ W32((u32)(r_ebp+0xfffffd90u), r_eax);
    /* 00661c8f: mov edx, dword ptr [ebp - 0x238] */ r_edx = R32((u32)(r_ebp+0xfffffdc8u));
    /* 00661c95: mov eax, dword ptr [ebp - 0x270] */ r_eax = R32((u32)(r_ebp+0xfffffd90u));
    /* 00661c9b: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 00661c9e: fild dword ptr [ebp - 0x270] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffd90u)));
    /* 00661ca4: fld1  */ FPUSH(1.0);
    /* 00661ca6: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 00661ca8: mov ecx, dword ptr [ebp - 0x238] */ r_ecx = R32((u32)(r_ebp+0xfffffdc8u));
    /* 00661cae: fstp dword ptr [ecx + 0x44] */ W_F32((u32)(r_ecx+0x44u), ST(0)); FPOP();
    /* 00661cb1: mov edx, dword ptr [ebp - 0x234] */ r_edx = R32((u32)(r_ebp+0xfffffdccu));
    /* 00661cb7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00661cb8: mov eax, dword ptr [ebp - 0x238] */ r_eax = R32((u32)(r_ebp+0xfffffdc8u));
    /* 00661cbe: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00661cc0: mov ecx, dword ptr [ebp - 0x238] */ r_ecx = R32((u32)(r_ebp+0xfffffdc8u));
    /* 00661cc6: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00661cc9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x661ccbu); call_ind(t); }
    /* 00661ccb: mov ecx, dword ptr [ebp - 0x238] */ r_ecx = R32((u32)(r_ebp+0xfffffdc8u));
    /* 00661cd1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00661cd2: mov ecx, dword ptr [ebp - 0x234] */ r_ecx = R32((u32)(r_ebp+0xfffffdccu));
    /* 00661cd8: call 0x5f6050 */ r_esp -= 4; W32(r_esp, 0x661cddu); f_005f6050();
    /* 00661cdd: jmp 0x662288 */ goto L_00662288;
L_00661ce2:; BB(0x00661ce2);
    /* 00661ce2: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00661ce6: jge 0x661ced */ if ((fS==fO)) goto L_00661ced;
L_00661ce8:; BB(0x00661ce8);
    /* 00661ce8: jmp 0x662288 */ goto L_00662288;
L_00661ced:; BB(0x00661ced);
    /* 00661ced: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00661cf0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00661cf1: push 0x6df6d8 */ { u32 v = 0x6df6d8u; r_esp -= 4; W32(r_esp, v); }
    /* 00661cf6: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x661cfbu); f_0062fde0();
    /* 00661cfb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00661cfe: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00661d01: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00661d04: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00661d07: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00661d0a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00661d0b: mov ecx, dword ptr [ebp - 0x27c] */ r_ecx = R32((u32)(r_ebp+0xfffffd84u));
    /* 00661d11: call 0x661500 */ r_esp -= 4; W32(r_esp, 0x661d16u); f_00661500();
    /* 00661d16: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 00661d19: push 0x220 */ { u32 v = 0x220u; r_esp -= 4; W32(r_esp, v); }
    /* 00661d1e: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x661d23u); f_00686d82();
    /* 00661d23: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00661d26: mov dword ptr [ebp - 0x260], eax */ W32((u32)(r_ebp+0xfffffda0u), r_eax);
    /* 00661d2c: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00661d33: cmp dword ptr [ebp - 0x260], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffda0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00661d3a: je 0x661d4f */ if (fZ) goto L_00661d4f;
L_00661d3c:; BB(0x00661d3c);
    /* 00661d3c: mov ecx, dword ptr [ebp - 0x260] */ r_ecx = R32((u32)(r_ebp+0xfffffda0u));
    /* 00661d42: call 0x625bf0 */ r_esp -= 4; W32(r_esp, 0x661d47u); f_00625bf0();
    /* 00661d47: mov dword ptr [ebp - 0x288], eax */ W32((u32)(r_ebp+0xfffffd78u), r_eax);
    /* 00661d4d: jmp 0x661d59 */ goto L_00661d59;
L_00661d4f:; BB(0x00661d4f);
    /* 00661d4f: mov dword ptr [ebp - 0x288], 0 */ W32((u32)(r_ebp+0xfffffd78u), 0x0u);
L_00661d59:; BB(0x00661d59);
    /* 00661d59: mov edx, dword ptr [ebp - 0x288] */ r_edx = R32((u32)(r_ebp+0xfffffd78u));
    /* 00661d5f: mov dword ptr [ebp - 0x25c], edx */ W32((u32)(r_ebp+0xfffffda4u), r_edx);
    /* 00661d65: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00661d6c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00661d6e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00661d70: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00661d72: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00661d74: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00661d76: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00661d79: lea ecx, [eax*4 + 2] */ r_ecx = (u32)(r_eax*4+0x2u);
    /* 00661d80: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00661d81: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00661d83: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00661d85: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00661d87: push 0x67 */ { u32 v = 0x67u; r_esp -= 4; W32(r_esp, v); }
    /* 00661d89: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00661d8c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00661d8f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00661d90: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 00661d93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00661d94: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00661d9a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00661d9b: mov edx, dword ptr [ebp - 0x27c] */ r_edx = R32((u32)(r_ebp+0xfffffd84u));
    /* 00661da1: mov ecx, dword ptr [edx + 0x80] */ r_ecx = R32((u32)(r_edx+0x80u));
    /* 00661da7: call 0x5fa3c0 */ r_esp -= 4; W32(r_esp, 0x661dacu); f_005fa3c0();
    /* 00661dac: push 0x67 */ { u32 v = 0x67u; r_esp -= 4; W32(r_esp, v); }
    /* 00661dae: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00661db1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00661db4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00661db5: mov ecx, dword ptr [ebp - 0x27c] */ r_ecx = R32((u32)(r_ebp+0xfffffd84u));
    /* 00661dbb: mov ecx, dword ptr [ecx + 0x80] */ r_ecx = R32((u32)(r_ecx+0x80u));
    /* 00661dc1: call 0x5fb510 */ r_esp -= 4; W32(r_esp, 0x661dc6u); f_005fb510();
    /* 00661dc6: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00661dc9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00661dcb: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00661dce: call 0x625c30 */ r_esp -= 4; W32(r_esp, 0x661dd3u); f_00625c30();
    /* 00661dd3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00661dd5: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00661dda: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00661ddc: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00661ddf: lea eax, [edx*4 + 2] */ r_eax = (u32)(r_edx*4+0x2u);
    /* 00661de6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00661de7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00661de9: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00661dec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00661ded: push 0x30d5f7 */ { u32 v = 0x30d5f7u; r_esp -= 4; W32(r_esp, v); }
    /* 00661df2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00661df5: add edx, 0x14 */ {  u32 a = r_edx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00661df8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00661df9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00661dfb: mov eax, dword ptr [ebp - 0x27c] */ r_eax = R32((u32)(r_ebp+0xfffffd84u));
    /* 00661e01: mov ecx, dword ptr [eax + 0x80] */ r_ecx = R32((u32)(r_eax+0x80u));
    /* 00661e07: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x661e0cu); f_005f9ce0();
    /* 00661e0c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00661e0f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00661e11: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00661e14: call 0x5eb000 */ r_esp -= 4; W32(r_esp, 0x661e19u); f_005eb000();
    /* 00661e19: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00661e1c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00661e1d: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00661e20: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x661e25u); f_005ff5a0();
    /* 00661e25: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00661e28: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00661e2b: mov dword ptr [ebp - 0x23c], 0 */ W32((u32)(r_ebp+0xfffffdc4u), 0x0u);
    /* 00661e35: jmp 0x661e46 */ goto L_00661e46;
L_00661e37:; BB(0x00661e37);
    /* 00661e37: mov eax, dword ptr [ebp - 0x23c] */ r_eax = R32((u32)(r_ebp+0xfffffdc4u));
    /* 00661e3d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00661e40: mov dword ptr [ebp - 0x23c], eax */ W32((u32)(r_ebp+0xfffffdc4u), r_eax);
L_00661e46:; BB(0x00661e46);
    /* 00661e46: mov ecx, dword ptr [ebp - 0x23c] */ r_ecx = R32((u32)(r_ebp+0xfffffdc4u));
    /* 00661e4c: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00661e4f: cmp dword ptr [ecx + 0x75db00], 0 */ {  u32 a = R32((u32)(r_ecx+0x75db00u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00661e56: je 0x661f7e */ if (fZ) goto L_00661f7e;
L_00661e5c:; BB(0x00661e5c);
    /* 00661e5c: mov edx, dword ptr [ebp - 0x23c] */ r_edx = R32((u32)(r_ebp+0xfffffdc4u));
    /* 00661e62: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00661e65: mov eax, dword ptr [edx + 0x75db00] */ r_eax = R32((u32)(r_edx+0x75db00u));
    /* 00661e6b: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00661e6e: je 0x661e72 */ if (fZ) goto L_00661e72;
L_00661e70:; BB(0x00661e70);
    /* 00661e70: jmp 0x661e37 */ goto L_00661e37;
L_00661e72:; BB(0x00661e72);
    /* 00661e72: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00661e74: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00661e79: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00661e7b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00661e7e: lea edx, [ecx*4 + 3] */ r_edx = (u32)(r_ecx*4+0x3u);
    /* 00661e85: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00661e86: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00661e88: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 00661e8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00661e8c: mov ecx, dword ptr [ebp - 0x23c] */ r_ecx = R32((u32)(r_ebp+0xfffffdc4u));
    /* 00661e92: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00661e95: mov edx, dword ptr [ecx + 0x75db04] */ r_edx = R32((u32)(r_ecx+0x75db04u));
    /* 00661e9b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00661e9c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00661e9e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00661ea0: mov eax, dword ptr [ebp - 0x27c] */ r_eax = R32((u32)(r_ebp+0xfffffd84u));
    /* 00661ea6: mov ecx, dword ptr [eax + 0x80] */ r_ecx = R32((u32)(r_eax+0x80u));
    /* 00661eac: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x661eb1u); f_005f9ce0();
    /* 00661eb1: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00661eb4: mov ecx, dword ptr [ebp - 0x23c] */ r_ecx = R32((u32)(r_ebp+0xfffffdc4u));
    /* 00661eba: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00661ebd: mov edx, dword ptr [ecx + 0x75db08] */ r_edx = R32((u32)(r_ecx+0x75db08u));
    /* 00661ec3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00661ec4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00661ec7: call 0x5eb000 */ r_esp -= 4; W32(r_esp, 0x661eccu); f_005eb000();
    /* 00661ecc: mov eax, dword ptr [ebp - 0x23c] */ r_eax = R32((u32)(r_ebp+0xfffffdc4u));
    /* 00661ed2: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00661ed5: mov ecx, dword ptr [eax + 0x75db0c] */ r_ecx = R32((u32)(r_eax+0x75db0cu));
    /* 00661edb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00661edc: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00661edf: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00661ee1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00661ee4: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 00661eea: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x661eecu); call_ind(t); }
    /* 00661eec: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00661eef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00661ef0: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00661ef3: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x661ef8u); f_005ff5a0();
    /* 00661ef8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00661efb: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00661efd: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00661f00: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00661f03: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x661f05u); call_ind(t); }
    /* 00661f05: mov esi, eax */ r_esi = r_eax;
    /* 00661f07: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00661f0a: call 0x5eb470 */ r_esp -= 4; W32(r_esp, 0x661f0fu); f_005eb470();
    /* 00661f0f: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00661f11: mov dword ptr [ebp - 0x240], esi */ W32((u32)(r_ebp+0xfffffdc0u), r_esi);
    /* 00661f17: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00661f1a: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00661f1d: call 0x5f8550 */ r_esp -= 4; W32(r_esp, 0x661f22u); f_005f8550();
    /* 00661f22: mov dword ptr [ebp - 0x244], eax */ W32((u32)(r_ebp+0xfffffdbcu), r_eax);
    /* 00661f28: mov edx, dword ptr [ebp - 0x240] */ r_edx = R32((u32)(r_ebp+0xfffffdc0u));
    /* 00661f2e: add edx, 0x1e */ {  u32 a = r_edx; u32 b = 0x1eu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00661f31: mov dword ptr [ebp - 0x240], edx */ W32((u32)(r_ebp+0xfffffdc0u), r_edx);
    /* 00661f37: mov eax, dword ptr [ebp - 0x244] */ r_eax = R32((u32)(r_ebp+0xfffffdbcu));
    /* 00661f3d: sub eax, dword ptr [ebp - 0x240] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffdc0u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00661f43: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00661f44: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00661f46: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00661f48: add eax, dword ptr [ebp - 0x240] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffdc0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00661f4e: mov dword ptr [ebp - 0x240], eax */ W32((u32)(r_ebp+0xfffffdc0u), r_eax);
    /* 00661f54: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00661f57: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x661f5cu); f_005f5550();
    /* 00661f5c: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00661f5d: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00661f5f: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00661f61: mov ecx, dword ptr [ebp - 0x240] */ r_ecx = R32((u32)(r_ebp+0xfffffdc0u));
    /* 00661f67: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00661f69: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00661f6a: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00661f6d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00661f6f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00661f72: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 00661f75: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x661f77u); call_ind(t); }
    /* 00661f77: jmp 0x661f7e */ goto L_00661f7e;
L_00661f7e:; BB(0x00661f7e);
    /* 00661f7e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00661f80: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00661f85: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00661f87: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00661f8a: lea ecx, [eax*4 + 3] */ r_ecx = (u32)(r_eax*4+0x3u);
    /* 00661f91: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00661f92: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00661f94: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00661f97: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00661f98: push 0x30d5fa */ { u32 v = 0x30d5fau; r_esp -= 4; W32(r_esp, v); }
    /* 00661f9d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00661f9f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00661fa1: mov eax, dword ptr [ebp - 0x27c] */ r_eax = R32((u32)(r_ebp+0xfffffd84u));
    /* 00661fa7: mov ecx, dword ptr [eax + 0x80] */ r_ecx = R32((u32)(r_eax+0x80u));
    /* 00661fad: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x661fb2u); f_005f9ce0();
    /* 00661fb2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00661fb3: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00661fb6: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x661fbbu); f_005ff5a0();
    /* 00661fbb: cmp dword ptr [ebp - 0x14], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00661fbf: jne 0x66203a */ if (!fZ) goto L_0066203a;
L_00661fc1:; BB(0x00661fc1);
    /* 00661fc1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00661fc3: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00661fc8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00661fca: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00661fcd: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00661fd0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00661fd1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00661fd3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00661fd5: push 0x30d5f7 */ { u32 v = 0x30d5f7u; r_esp -= 4; W32(r_esp, v); }
    /* 00661fda: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00661fdc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00661fde: mov edx, dword ptr [ebp - 0x27c] */ r_edx = R32((u32)(r_ebp+0xfffffd84u));
    /* 00661fe4: mov ecx, dword ptr [edx + 0x80] */ r_ecx = R32((u32)(r_edx+0x80u));
    /* 00661fea: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x661fefu); f_005f9ce0();
    /* 00661fef: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00661ff2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00661ff4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00661ff7: call 0x5eb000 */ r_esp -= 4; W32(r_esp, 0x661ffcu); f_005eb000();
    /* 00661ffc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00661ffe: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00662000: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00662002: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00662004: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00662006: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0066200b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0066200e: lea ecx, [eax*4 + 1] */ r_ecx = (u32)(r_eax*4+0x1u);
    /* 00662015: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00662016: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00662018: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066201a: push 0x30d5f9 */ { u32 v = 0x30d5f9u; r_esp -= 4; W32(r_esp, v); }
    /* 0066201f: push 0x65 */ { u32 v = 0x65u; r_esp -= 4; W32(r_esp, v); }
    /* 00662021: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00662023: mov edx, dword ptr [ebp - 0x27c] */ r_edx = R32((u32)(r_ebp+0xfffffd84u));
    /* 00662029: mov ecx, dword ptr [edx + 0x80] */ r_ecx = R32((u32)(r_edx+0x80u));
    /* 0066202f: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x662034u); f_005f9de0();
    /* 00662034: mov dword ptr [ebp - 0x248], eax */ W32((u32)(r_ebp+0xfffffdb8u), r_eax);
L_0066203a:; BB(0x0066203a);
    /* 0066203a: lea eax, [ebp - 0x20c] */ r_eax = (u32)(r_ebp+0xfffffdf4u);
    /* 00662040: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00662041: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00662044: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00662045: mov edx, dword ptr [ebp - 0x27c] */ r_edx = R32((u32)(r_ebp+0xfffffd84u));
    /* 0066204b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0066204d: mov ecx, dword ptr [ebp - 0x27c] */ r_ecx = R32((u32)(r_ebp+0xfffffd84u));
    /* 00662053: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 00662056: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x662058u); call_ind(t); }
    /* 00662058: mov dword ptr [ebp - 0x70], 0x30d5f5 */ W32((u32)(r_ebp+0xffffff90u), 0x30d5f5u);
    /* 0066205f: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
    /* 00662066: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
    /* 0066206d: lea ecx, [ebp - 0x58] */ r_ecx = (u32)(r_ebp+0xffffffa8u);
    /* 00662070: call 0x662ef0 */ r_esp -= 4; W32(r_esp, 0x662075u); f_00662ef0();
    /* 00662075: mov dword ptr [ebp - 0x58], 0x6df6d4 */ W32((u32)(r_ebp+0xffffffa8u), 0x6df6d4u);
    /* 0066207c: push 0x770b08 */ { u32 v = 0x770b08u; r_esp -= 4; W32(r_esp, v); }
    /* 00662081: lea ecx, [ebp - 0x58] */ r_ecx = (u32)(r_ebp+0xffffffa8u);
    /* 00662084: call 0x663060 */ r_esp -= 4; W32(r_esp, 0x662089u); f_00663060();
    /* 00662089: lea eax, [ebp - 0x70] */ r_eax = (u32)(r_ebp+0xffffff90u);
    /* 0066208c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066208d: lea ecx, [ebp - 0x58] */ r_ecx = (u32)(r_ebp+0xffffffa8u);
    /* 00662090: call 0x662f30 */ r_esp -= 4; W32(r_esp, 0x662095u); f_00662f30();
    /* 00662095: mov dword ptr [ebp - 0x24c], 0 */ W32((u32)(r_ebp+0xfffffdb4u), 0x0u);
    /* 0066209f: jmp 0x6620b0 */ goto L_006620b0;
L_006620a1:; BB(0x006620a1);
    /* 006620a1: mov ecx, dword ptr [ebp - 0x24c] */ r_ecx = R32((u32)(r_ebp+0xfffffdb4u));
    /* 006620a7: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006620aa: mov dword ptr [ebp - 0x24c], ecx */ W32((u32)(r_ebp+0xfffffdb4u), r_ecx);
L_006620b0:; BB(0x006620b0);
    /* 006620b0: mov edx, dword ptr [ebp - 0x24c] */ r_edx = R32((u32)(r_ebp+0xfffffdb4u));
    /* 006620b6: cmp dword ptr [ebp + edx*4 - 0x208], -1 */ {  u32 a = R32((u32)(r_ebp+r_edx*4+0xfffffdf8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006620be: je 0x662100 */ if (fZ) goto L_00662100;
L_006620c0:; BB(0x006620c0);
    /* 006620c0: mov eax, dword ptr [ebp - 0x24c] */ r_eax = R32((u32)(r_ebp+0xfffffdb4u));
    /* 006620c6: mov ecx, dword ptr [ebp + eax*4 - 0x208] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xfffffdf8u));
    /* 006620cd: mov dword ptr [ebp - 0x250], ecx */ W32((u32)(r_ebp+0xfffffdb0u), r_ecx);
    /* 006620d3: cmp dword ptr [ebp - 0x250], -2 */ {  u32 a = R32((u32)(r_ebp+0xfffffdb0u)); u32 b = 0xfffffffeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006620da: jne 0x6620de */ if (!fZ) goto L_006620de;
L_006620dc:; BB(0x006620dc);
    /* 006620dc: jmp 0x6620a1 */ goto L_006620a1;
L_006620de:; BB(0x006620de);
    /* 006620de: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 006620e1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006620e2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006620e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006620e6: lea ecx, [ebp - 0x58] */ r_ecx = (u32)(r_ebp+0xffffffa8u);
    /* 006620e9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006620ea: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006620ec: mov edx, dword ptr [ebp - 0x250] */ r_edx = R32((u32)(r_ebp+0xfffffdb0u));
    /* 006620f2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006620f3: mov ecx, dword ptr [ebp - 0x27c] */ r_ecx = R32((u32)(r_ebp+0xfffffd84u));
    /* 006620f9: call 0x662360 */ r_esp -= 4; W32(r_esp, 0x6620feu); f_00662360();
    /* 006620fe: jmp 0x6620a1 */ goto L_006620a1;
L_00662100:; BB(0x00662100);
    /* 00662100: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00662103: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00662104: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00662107: call 0x6064e0 */ r_esp -= 4; W32(r_esp, 0x66210cu); f_006064e0();
    /* 0066210c: mov ecx, dword ptr [ebp - 0x27c] */ r_ecx = R32((u32)(r_ebp+0xfffffd84u));
    /* 00662112: call 0x662ce0 */ r_esp -= 4; W32(r_esp, 0x662117u); f_00662ce0();
    /* 00662117: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00662119: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0066211c: call 0x625e00 */ r_esp -= 4; W32(r_esp, 0x662121u); f_00625e00();
    /* 00662121: mov ecx, dword ptr [ebp - 0x27c] */ r_ecx = R32((u32)(r_ebp+0xfffffd84u));
    /* 00662127: mov dword ptr [ecx + 0x8c], 0 */ W32((u32)(r_ecx+0x8cu), 0x0u);
    /* 00662131: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00662134: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00662137: call 0x5f8550 */ r_esp -= 4; W32(r_esp, 0x66213cu); f_005f8550();
    /* 0066213c: mov esi, eax */ r_esi = r_eax;
    /* 0066213e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00662141: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00662143: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00662146: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00662149: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66214bu); call_ind(t); }
    /* 0066214b: mov edi, eax */ r_edi = r_eax;
    /* 0066214d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00662150: call 0x5eb470 */ r_esp -= 4; W32(r_esp, 0x662155u); f_005eb470();
    /* 00662155: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00662157: sub esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00662159: mov dword ptr [ebp - 0x38], esi */ W32((u32)(r_ebp+0xffffffc8u), r_esi);
    /* 0066215c: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00662163: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0066216a: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00662171: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00662174: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00662177: call 0x5f8550 */ r_esp -= 4; W32(r_esp, 0x66217cu); f_005f8550();
    /* 0066217c: mov esi, eax */ r_esi = r_eax;
    /* 0066217e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00662181: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00662183: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00662186: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 00662189: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x66218bu); call_ind(t); }
    /* 0066218b: mov edi, eax */ r_edi = r_eax;
    /* 0066218d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00662190: call 0x5eb470 */ r_esp -= 4; W32(r_esp, 0x662195u); f_005eb470();
    /* 00662195: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00662197: sub esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00662199: sub esi, 0xc8 */ {  u32 a = r_esi; u32 b = 0xc8u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0066219f: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 006621a2: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006621a9: mov dword ptr [ebp - 0x20], 0x12c */ W32((u32)(r_ebp+0xffffffe0u), 0x12cu);
    /* 006621b0: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 006621b7: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 006621ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006621bb: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006621be: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006621bf: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 006621c2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006621c4: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 006621c7: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 006621ca: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6621ccu); call_ind(t); }
    /* 006621cc: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 006621cf: mov dword ptr [eax + 0x184], 1 */ W32((u32)(r_eax+0x184u), 0x1u);
    /* 006621d9: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 006621db: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x6621e0u); f_00686d82();
    /* 006621e0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006621e3: mov dword ptr [ebp - 0x268], eax */ W32((u32)(r_ebp+0xfffffd98u), r_eax);
    /* 006621e9: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 006621f0: cmp dword ptr [ebp - 0x268], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffd98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006621f7: je 0x662214 */ if (fZ) goto L_00662214;
L_006621f9:; BB(0x006621f9);
    /* 006621f9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006621fb: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 006621fe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006621ff: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00662201: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 00662207: call 0x6632a0 */ r_esp -= 4; W32(r_esp, 0x66220cu); f_006632a0();
    /* 0066220c: mov dword ptr [ebp - 0x28c], eax */ W32((u32)(r_ebp+0xfffffd74u), r_eax);
    /* 00662212: jmp 0x66221e */ goto L_0066221e;
L_00662214:; BB(0x00662214);
    /* 00662214: mov dword ptr [ebp - 0x28c], 0 */ W32((u32)(r_ebp+0xfffffd74u), 0x0u);
L_0066221e:; BB(0x0066221e);
    /* 0066221e: mov edx, dword ptr [ebp - 0x28c] */ r_edx = R32((u32)(r_ebp+0xfffffd74u));
    /* 00662224: mov dword ptr [ebp - 0x264], edx */ W32((u32)(r_ebp+0xfffffd9cu), r_edx);
    /* 0066222a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00662231: mov eax, dword ptr [ebp - 0x264] */ r_eax = R32((u32)(r_ebp+0xfffffd9cu));
    /* 00662237: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 0066223a: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0066223d: mov eax, 0x1e */ r_eax = 0x1eu;
    /* 00662242: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00662243: idiv dword ptr [ecx + 0x184] */ { i32 d = (i32)R32((u32)(r_ecx+0x184u)); if (!d) UNSUP(0x00662243, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00662243, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00662249: mov dword ptr [ebp - 0x278], eax */ W32((u32)(r_ebp+0xfffffd88u), r_eax);
    /* 0066224f: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 00662252: mov eax, dword ptr [ebp - 0x278] */ r_eax = R32((u32)(r_ebp+0xfffffd88u));
    /* 00662258: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 0066225b: fild dword ptr [ebp - 0x278] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffd88u)));
    /* 00662261: fld1  */ FPUSH(1.0);
    /* 00662263: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 00662265: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 00662268: fstp dword ptr [ecx + 0x44] */ W_F32((u32)(r_ecx+0x44u), ST(0)); FPOP();
    /* 0066226b: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0066226e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066226f: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 00662272: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00662274: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 00662277: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0066227a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66227cu); call_ind(t); }
    /* 0066227c: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0066227f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00662280: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00662283: call 0x5f6050 */ r_esp -= 4; W32(r_esp, 0x662288u); f_005f6050();
L_00662288:; BB(0x00662288);
    /* 00662288: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066228b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00662292: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00662293: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00662294: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00662295: mov esp, ebp */ r_esp = r_ebp;
    /* 00662297: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00662298: ret 4 */ FN_RET(0x00661a40); r_esp += 8; return;
}

void f_00662950(void) /* MainNavigation::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00662950);
    /* 00662950: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00662951: mov ebp, esp */ r_ebp = r_esp;
    /* 00662953: sub esp, 0x430 */ {  u32 a = r_esp; u32 b = 0x430u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00662959: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0066295e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00662960: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00662963: mov dword ptr [ebp - 0x42c], ecx */ W32((u32)(r_ebp+0xfffffbd4u), r_ecx);
    /* 00662969: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0066296c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066296d: mov ecx, dword ptr [ebp - 0x42c] */ r_ecx = R32((u32)(r_ebp+0xfffffbd4u));
    /* 00662973: call 0x650360 */ r_esp -= 4; W32(r_esp, 0x662978u); f_00650360();
    /* 00662978: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0066297b: cmp dword ptr [ecx + 0x18], 3 */ {  u32 a = R32((u32)(r_ecx+0x18u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066297f: jne 0x662cc3 */ if (!fZ) goto L_00662cc3;
L_00662985:; BB(0x00662985);
    /* 00662985: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 0066298b: call 0x5f3fe0 */ r_esp -= 4; W32(r_esp, 0x662990u); f_005f3fe0();
    /* 00662990: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00662992: jne 0x662cc3 */ if (!fZ) goto L_00662cc3;
L_00662998:; BB(0x00662998);
    /* 00662998: mov edx, dword ptr [ebp - 0x42c] */ r_edx = R32((u32)(r_ebp+0xfffffbd4u));
    /* 0066299e: cmp dword ptr [edx + 0x8c], 0 */ {  u32 a = R32((u32)(r_edx+0x8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006629a5: je 0x662a13 */ if (fZ) goto L_00662a13;
L_006629a7:; BB(0x006629a7);
    /* 006629a7: mov eax, dword ptr [ebp - 0x42c] */ r_eax = R32((u32)(r_ebp+0xfffffbd4u));
    /* 006629ad: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 006629b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006629b4: mov edx, dword ptr [ebp - 0x42c] */ r_edx = R32((u32)(r_ebp+0xfffffbd4u));
    /* 006629ba: mov ecx, dword ptr [edx + 0x80] */ r_ecx = R32((u32)(r_edx+0x80u));
    /* 006629c0: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x6629c5u); f_005fb300();
    /* 006629c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006629c7: je 0x662a13 */ if (fZ) goto L_00662a13;
L_006629c9:; BB(0x006629c9);
    /* 006629c9: mov eax, dword ptr [ebp - 0x42c] */ r_eax = R32((u32)(r_ebp+0xfffffbd4u));
    /* 006629cf: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 006629d5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006629d6: mov edx, dword ptr [ebp - 0x42c] */ r_edx = R32((u32)(r_ebp+0xfffffbd4u));
    /* 006629dc: mov ecx, dword ptr [edx + 0x80] */ r_ecx = R32((u32)(r_edx+0x80u));
    /* 006629e2: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x6629e7u); f_005fb300();
    /* 006629e7: mov dword ptr [ebp - 0x430], eax */ W32((u32)(r_ebp+0xfffffbd0u), r_eax);
    /* 006629ed: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006629f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006629f1: mov ecx, dword ptr [ebp - 0x430] */ r_ecx = R32((u32)(r_ebp+0xfffffbd0u));
    /* 006629f7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006629f9: mov ecx, dword ptr [ebp - 0x430] */ r_ecx = R32((u32)(r_ebp+0xfffffbd0u));
    /* 006629ff: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 00662a05: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x662a07u); call_ind(t); }
    /* 00662a07: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00662a0a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00662a0c: je 0x662a13 */ if (fZ) goto L_00662a13;
L_00662a0e:; BB(0x00662a0e);
    /* 00662a0e: jmp 0x662cc3 */ goto L_00662cc3;
L_00662a13:; BB(0x00662a13);
    /* 00662a13: mov edx, dword ptr [ebp - 0x42c] */ r_edx = R32((u32)(r_ebp+0xfffffbd4u));
    /* 00662a19: mov ecx, dword ptr [edx + 0x80] */ r_ecx = R32((u32)(r_edx+0x80u));
    /* 00662a1f: call 0x5f8d90 */ r_esp -= 4; W32(r_esp, 0x662a24u); f_005f8d90();
    /* 00662a24: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00662a27: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00662a2a: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x662a2fu); f_0060c9a0();
    /* 00662a2f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00662a32: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00662a39: jmp 0x662a44 */ goto L_00662a44;
L_00662a3b:; BB(0x00662a3b);
    /* 00662a3b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00662a3e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00662a41: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_00662a44:; BB(0x00662a44);
    /* 00662a44: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00662a47: cmp ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00662a4a: jge 0x662cc3 */ if ((fS==fO)) goto L_00662cc3;
L_00662a50:; BB(0x00662a50);
    /* 00662a50: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00662a53: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00662a54: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00662a57: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x662a5cu); f_0060ca40();
    /* 00662a5c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00662a5f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00662a62: call 0x5f5600 */ r_esp -= 4; W32(r_esp, 0x662a67u); f_005f5600();
    /* 00662a67: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00662a6a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00662a6c: jne 0x662cbe */ if (!fZ) goto L_00662cbe;
L_00662a72:; BB(0x00662a72);
    /* 00662a72: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00662a75: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00662a76: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00662a79: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00662a7b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00662a7e: mov edx, dword ptr [eax + 0x84] */ r_edx = R32((u32)(r_eax+0x84u));
    /* 00662a84: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x662a86u); call_ind(t); }
    /* 00662a86: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00662a89: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00662a8b: je 0x662cbe */ if (fZ) goto L_00662cbe;
L_00662a91:; BB(0x00662a91);
    /* 00662a91: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00662a94: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x662a99u); f_005f5400();
    /* 00662a99: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00662a9c: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00662aa0: jge 0x662aaa */ if ((fS==fO)) goto L_00662aaa;
L_00662aa2:; BB(0x00662aa2);
    /* 00662aa2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00662aa5: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00662aa7: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_00662aaa:; BB(0x00662aaa);
    /* 00662aaa: cmp dword ptr [ebp - 0x14], 0x66 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x66u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00662aae: jg 0x662ab2 */ if ((!fZ&&fS==fO)) goto L_00662ab2;
L_00662ab0:; BB(0x00662ab0);
    /* 00662ab0: jmp 0x662a3b */ goto L_00662a3b;
L_00662ab2:; BB(0x00662ab2);
    /* 00662ab2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00662ab5: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x662abau); f_005f5400();
    /* 00662aba: mov edx, dword ptr [ebp - 0x42c] */ r_edx = R32((u32)(r_ebp+0xfffffbd4u));
    /* 00662ac0: mov dword ptr [edx + 0x8c], eax */ W32((u32)(r_edx+0x8cu), r_eax);
    /* 00662ac6: mov eax, dword ptr [ebp - 0x42c] */ r_eax = R32((u32)(r_ebp+0xfffffbd4u));
    /* 00662acc: mov ecx, dword ptr [eax + 0x84] */ r_ecx = R32((u32)(r_eax+0x84u));
    /* 00662ad2: mov edx, dword ptr [ebp - 0x42c] */ r_edx = R32((u32)(r_ebp+0xfffffbd4u));
    /* 00662ad8: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 00662ade: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00662ae0: mov ecx, eax */ r_ecx = r_eax;
    /* 00662ae2: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00662ae5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x662ae7u); call_ind(t); }
    /* 00662ae7: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 00662aee: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 00662af5: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 00662afc: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00662b03: jmp 0x662b0e */ goto L_00662b0e;
L_00662b05:; BB(0x00662b05);
    /* 00662b05: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00662b08: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00662b0b: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
L_00662b0e:; BB(0x00662b0e);
    /* 00662b0e: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00662b11: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00662b14: cmp dword ptr [edx + 0x75dba0], 0 */ {  u32 a = R32((u32)(r_edx+0x75dba0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00662b1b: je 0x662b4f */ if (fZ) goto L_00662b4f;
L_00662b1d:; BB(0x00662b1d);
    /* 00662b1d: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00662b20: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00662b23: mov ecx, dword ptr [eax + 0x75dba0] */ r_ecx = R32((u32)(r_eax+0x75dba0u));
    /* 00662b29: cmp ecx, dword ptr [ebp - 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00662b2c: jne 0x662b4d */ if (!fZ) goto L_00662b4d;
L_00662b2e:; BB(0x00662b2e);
    /* 00662b2e: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00662b31: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00662b34: add edx, 0x75dba4 */ {  u32 a = r_edx; u32 b = 0x75dba4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00662b3a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00662b3c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00662b3f: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00662b42: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00662b45: mov edx, dword ptr [edx + 8] */ r_edx = R32((u32)(r_edx+0x8u));
    /* 00662b48: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00662b4b: jmp 0x662b4f */ goto L_00662b4f;
L_00662b4d:; BB(0x00662b4d);
    /* 00662b4d: jmp 0x662b05 */ goto L_00662b05;
L_00662b4f:; BB(0x00662b4f);
    /* 00662b4f: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00662b53: jne 0x662b9f */ if (!fZ) goto L_00662b9f;
L_00662b55:; BB(0x00662b55);
    /* 00662b55: push 0x67 */ { u32 v = 0x67u; r_esp -= 4; W32(r_esp, v); }
    /* 00662b57: mov eax, dword ptr [ebp - 0x42c] */ r_eax = R32((u32)(r_ebp+0xfffffbd4u));
    /* 00662b5d: mov ecx, dword ptr [eax + 0x80] */ r_ecx = R32((u32)(r_eax+0x80u));
    /* 00662b63: call 0x5fb4c0 */ r_esp -= 4; W32(r_esp, 0x662b68u); f_005fb4c0();
    /* 00662b68: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00662b6b: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00662b6e: call 0x606490 */ r_esp -= 4; W32(r_esp, 0x662b73u); f_00606490();
    /* 00662b73: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00662b76: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00662b79: sub eax, 0x30d400 */ {  u32 a = r_eax; u32 b = 0x30d400u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00662b7e: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00662b7f: mov ecx, 0x3e8 */ r_ecx = 0x3e8u;
    /* 00662b84: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00662b84, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00662b84, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00662b86: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00662b89: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00662b8c: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 00662b8e: sbb edx, edx */ { u32 c = fC; u32 a = r_edx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 00662b90: and edx, 0x64 */ {  u32 a = r_edx; u32 b = 0x64u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00662b93: add edx, 0x30d658 */ {  u32 a = r_edx; u32 b = 0x30d658u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00662b99: add edx, dword ptr [ebp - 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00662b9c: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
L_00662b9f:; BB(0x00662b9f);
    /* 00662b9f: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00662ba3: je 0x662c14 */ if (fZ) goto L_00662c14;
L_00662ba5:; BB(0x00662ba5);
    /* 00662ba5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00662ba8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00662ba9: mov ecx, dword ptr [ebp - 0x42c] */ r_ecx = R32((u32)(r_ebp+0xfffffbd4u));
    /* 00662baf: mov ecx, dword ptr [ecx + 0x84] */ r_ecx = R32((u32)(r_ecx+0x84u));
    /* 00662bb5: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x662bbau); f_005eaf00();
    /* 00662bba: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00662bbd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00662bbe: mov eax, dword ptr [ebp - 0x42c] */ r_eax = R32((u32)(r_ebp+0xfffffbd4u));
    /* 00662bc4: mov ecx, dword ptr [eax + 0x84] */ r_ecx = R32((u32)(r_eax+0x84u));
    /* 00662bca: call 0x5eb000 */ r_esp -= 4; W32(r_esp, 0x662bcfu); f_005eb000();
    /* 00662bcf: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00662bd2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00662bd3: mov edx, dword ptr [ebp - 0x42c] */ r_edx = R32((u32)(r_ebp+0xfffffbd4u));
    /* 00662bd9: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 00662bdf: mov ecx, dword ptr [ebp - 0x42c] */ r_ecx = R32((u32)(r_ebp+0xfffffbd4u));
    /* 00662be5: mov ecx, dword ptr [ecx + 0x84] */ r_ecx = R32((u32)(r_ecx+0x84u));
    /* 00662beb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00662bed: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00662bf3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x662bf5u); call_ind(t); }
    /* 00662bf5: mov ecx, dword ptr [ebp - 0x42c] */ r_ecx = R32((u32)(r_ebp+0xfffffbd4u));
    /* 00662bfb: mov edx, dword ptr [ecx + 0x84] */ r_edx = R32((u32)(r_ecx+0x84u));
    /* 00662c01: mov eax, dword ptr [ebp - 0x42c] */ r_eax = R32((u32)(r_ebp+0xfffffbd4u));
    /* 00662c07: mov ecx, dword ptr [eax + 0x84] */ r_ecx = R32((u32)(r_eax+0x84u));
    /* 00662c0d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00662c0f: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00662c12: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x662c14u); call_ind(t); }
L_00662c14:; BB(0x00662c14);
    /* 00662c14: lea ecx, [ebp - 0x30] */ r_ecx = (u32)(r_ebp+0xffffffd0u);
    /* 00662c17: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00662c18: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00662c1b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00662c1c: mov eax, dword ptr [ebp - 0x42c] */ r_eax = R32((u32)(r_ebp+0xfffffbd4u));
    /* 00662c22: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00662c24: mov ecx, dword ptr [ebp - 0x42c] */ r_ecx = R32((u32)(r_ebp+0xfffffbd4u));
    /* 00662c2a: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 00662c2d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x662c2fu); call_ind(t); }
    /* 00662c2f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00662c32: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00662c34: je 0x662cbc */ if (fZ) goto L_00662cbc;
L_00662c3a:; BB(0x00662c3a);
    /* 00662c3a: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00662c3d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00662c3e: push 0x6df87c */ { u32 v = 0x6df87cu; r_esp -= 4; W32(r_esp, v); }
    /* 00662c43: lea eax, [ebp - 0x428] */ r_eax = (u32)(r_ebp+0xfffffbd8u);
    /* 00662c49: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00662c4a: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x662c50u); call_ind(t); }
    /* 00662c50: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00662c53: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00662c56: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00662c57: lea edx, [ebp - 0x428] */ r_edx = (u32)(r_ebp+0xfffffbd8u);
    /* 00662c5d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00662c5e: push 0x6df868 */ { u32 v = 0x6df868u; r_esp -= 4; W32(r_esp, v); }
    /* 00662c63: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x662c68u); f_0062fde0();
    /* 00662c68: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00662c6b: lea eax, [ebp - 0x428] */ r_eax = (u32)(r_ebp+0xfffffbd8u);
    /* 00662c71: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00662c72: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x662c77u); f_00630f40();
    /* 00662c77: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00662c7a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00662c7b: mov ecx, dword ptr [ebp - 0x42c] */ r_ecx = R32((u32)(r_ebp+0xfffffbd4u));
    /* 00662c81: mov edx, dword ptr [ecx + 0x88] */ r_edx = R32((u32)(r_ecx+0x88u));
    /* 00662c87: mov eax, dword ptr [ebp - 0x42c] */ r_eax = R32((u32)(r_ebp+0xfffffbd4u));
    /* 00662c8d: mov ecx, dword ptr [eax + 0x88] */ r_ecx = R32((u32)(r_eax+0x88u));
    /* 00662c93: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00662c95: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00662c9b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x662c9du); call_ind(t); }
    /* 00662c9d: mov ecx, dword ptr [ebp - 0x42c] */ r_ecx = R32((u32)(r_ebp+0xfffffbd4u));
    /* 00662ca3: mov edx, dword ptr [ecx + 0x88] */ r_edx = R32((u32)(r_ecx+0x88u));
    /* 00662ca9: mov eax, dword ptr [ebp - 0x42c] */ r_eax = R32((u32)(r_ebp+0xfffffbd4u));
    /* 00662caf: mov ecx, dword ptr [eax + 0x88] */ r_ecx = R32((u32)(r_eax+0x88u));
    /* 00662cb5: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00662cb7: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00662cba: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x662cbcu); call_ind(t); }
L_00662cbc:; BB(0x00662cbc);
    /* 00662cbc: jmp 0x662cc3 */ goto L_00662cc3;
L_00662cbe:; BB(0x00662cbe);
    /* 00662cbe: jmp 0x662a3b */ goto L_00662a3b;
L_00662cc3:; BB(0x00662cc3);
    /* 00662cc3: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00662cc6: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00662cc8: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x662ccdu); f_00686d72();
    /* 00662ccd: mov esp, ebp */ r_esp = r_ebp;
    /* 00662ccf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00662cd0: ret 4 */ FN_RET(0x00662950); r_esp += 8; return;
}

