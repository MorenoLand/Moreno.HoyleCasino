#include "protos.h"

void f_00411530(void) /* BlackjackInsuranceDialog::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00411530);
    /* 00411530: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00411531: mov ebp, esp */ r_ebp = r_esp;
    /* 00411533: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00411534: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00411537: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00411539: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041153b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041153e: call 0x5f71f0 */ r_esp -= 4; W32(r_esp, 0x411543u); f_005f71f0();
    /* 00411543: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00411546: mov dword ptr [eax], 0x6b3b5c */ W32((u32)(r_eax), 0x6b3b5cu);
    /* 0041154c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041154f: mov dword ptr [ecx + 0x1bc], 0 */ W32((u32)(r_ecx+0x1bcu), 0x0u);
    /* 00411559: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041155c: mov esp, ebp */ r_esp = r_ebp;
    /* 0041155e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041155f: ret  */ FN_RET(0x00411530); r_esp += 4; return;
}

void f_00411580(void) /* BlackjackInsuranceDialog::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00411580);
    /* 00411580: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00411581: mov ebp, esp */ r_ebp = r_esp;
    /* 00411583: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00411584: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00411587: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00411589: push 0x30d4f3 */ { u32 v = 0x30d4f3u; r_esp -= 4; W32(r_esp, v); }
    /* 0041158e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00411591: call 0x5f83d0 */ r_esp -= 4; W32(r_esp, 0x411596u); f_005f83d0();
    /* 00411596: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00411598: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041159b: call 0x5f89d0 */ r_esp -= 4; W32(r_esp, 0x4115a0u); f_005f89d0();
    /* 004115a0: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004115a2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004115a4: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 004115a6: push 0x6b3bd8 */ { u32 v = 0x6b3bd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004115ab: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4115b0u); f_00630f40();
    /* 004115b0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004115b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004115b4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004115b7: call 0x5f73e0 */ r_esp -= 4; W32(r_esp, 0x4115bcu); f_005f73e0();
    /* 004115bc: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004115be: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 004115c0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004115c2: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 004115c4: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 004115c6: push 0x55 */ { u32 v = 0x55u; r_esp -= 4; W32(r_esp, v); }
    /* 004115c8: push 0xd9 */ { u32 v = 0xd9u; r_esp -= 4; W32(r_esp, v); }
    /* 004115cd: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 004115cf: push 0x6b3bbc */ { u32 v = 0x6b3bbcu; r_esp -= 4; W32(r_esp, v); }
    /* 004115d4: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4115d9u); f_00630f40();
    /* 004115d9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004115dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004115dd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004115df: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004115e1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004115e4: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x4115e9u); f_005fa5b0();
    /* 004115e9: push 0x79 */ { u32 v = 0x79u; r_esp -= 4; W32(r_esp, v); }
    /* 004115eb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004115ed: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 004115ef: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 004115f1: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 004115f3: push 0x6b3bac */ { u32 v = 0x6b3bacu; r_esp -= 4; W32(r_esp, v); }
    /* 004115f8: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4115fdu); f_00630f40();
    /* 004115fd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00411600: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00411601: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00411603: push 0x7d */ { u32 v = 0x7du; r_esp -= 4; W32(r_esp, v); }
    /* 00411605: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 00411607: push 0x30d4de */ { u32 v = 0x30d4deu; r_esp -= 4; W32(r_esp, v); }
    /* 0041160c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041160e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00411610: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00411613: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x411618u); f_005f9de0();
    /* 00411618: push 0x6e */ { u32 v = 0x6eu; r_esp -= 4; W32(r_esp, v); }
    /* 0041161a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0041161c: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 0041161e: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 00411620: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 00411622: push 0x6b3b9c */ { u32 v = 0x6b3b9cu; r_esp -= 4; W32(r_esp, v); }
    /* 00411627: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41162cu); f_00630f40();
    /* 0041162c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041162f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00411630: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00411632: push 0x7d */ { u32 v = 0x7du; r_esp -= 4; W32(r_esp, v); }
    /* 00411634: push 0x84 */ { u32 v = 0x84u; r_esp -= 4; W32(r_esp, v); }
    /* 00411639: push 0x30d4de */ { u32 v = 0x30d4deu; r_esp -= 4; W32(r_esp, v); }
    /* 0041163e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00411640: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00411642: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00411645: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x41164au); f_005f9de0();
    /* 0041164a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041164c: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00411651: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00411653: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00411655: push 0x89 */ { u32 v = 0x89u; r_esp -= 4; W32(r_esp, v); }
    /* 0041165a: push 0x75 */ { u32 v = 0x75u; r_esp -= 4; W32(r_esp, v); }
    /* 0041165c: push 0x1398 */ { u32 v = 0x1398u; r_esp -= 4; W32(r_esp, v); }
    /* 00411661: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00411663: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00411665: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00411668: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x41166du); f_005f9ce0();
    /* 0041166d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00411670: mov dword ptr [ecx + 0x1bc], eax */ W32((u32)(r_ecx+0x1bcu), r_eax);
    /* 00411676: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00411678: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041167b: mov ecx, dword ptr [edx + 0x1bc] */ r_ecx = R32((u32)(r_edx+0x1bcu));
    /* 00411681: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x411686u); f_005eb5d0();
    /* 00411686: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00411689: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 0041168f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00411692: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 00411698: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0041169a: mov ecx, eax */ r_ecx = r_eax;
    /* 0041169c: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0041169f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4116a1u); call_ind(t); }
    /* 004116a1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004116a4: mov byte ptr [ecx + 0x1c0], 1 */ W8((u32)(r_ecx+0x1c0u), 0x1u);
    /* 004116ab: mov esp, ebp */ r_esp = r_ebp;
    /* 004116ad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004116ae: ret  */ FN_RET(0x00411580); r_esp += 4; return;
}

void f_004116b0(void) /* BlackjackInsuranceDialog::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004116b0);
    /* 004116b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004116b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004116b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004116b5: push 0x69dcaf */ { u32 v = 0x69dcafu; r_esp -= 4; W32(r_esp, v); }
    /* 004116ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004116c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004116c1: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004116c4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 004116c9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004116cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004116cc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 004116cf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 004116d5: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 004116d8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004116da: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004116de: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 004116e1: mov byte ptr [ebp - 0xd], al */ W8((u32)(r_ebp+0xfffffff3u), (u8)r_eax);
    /* 004116e4: mov ecx, dword ptr [0x79032c] */ r_ecx = R32((u32)(0x79032cu));
    /* 004116ea: call 0x40d900 */ r_esp -= 4; W32(r_esp, 0x4116efu); f_0040d900();
    /* 004116ef: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 004116f1: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4116f6u); f_00686d82();
    /* 004116f6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004116f9: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004116fc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00411703: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00411707: je 0x411722 */ if (fZ) goto L_00411722;
L_00411709:; BB(0x00411709);
    /* 00411709: movzx ecx, byte ptr [ebp - 0xd] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffff3u));
    /* 0041170d: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 0041170f: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 00411711: add ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00411714: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00411715: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00411718: call 0x411310 */ r_esp -= 4; W32(r_esp, 0x41171du); f_00411310();
    /* 0041171d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00411720: jmp 0x411729 */ goto L_00411729;
L_00411722:; BB(0x00411722);
    /* 00411722: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_00411729:; BB(0x00411729);
    /* 00411729: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0041172c: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0041172f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00411736: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00411739: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041173a: mov ecx, dword ptr [0x790320] */ r_ecx = R32((u32)(0x790320u));
    /* 00411740: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00411743: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x411748u); f_005fc420();
    /* 00411748: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041174b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00411752: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00411753: mov esp, ebp */ r_esp = r_ebp;
    /* 00411755: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00411756: ret 4 */ FN_RET(0x004116b0); r_esp += 8; return;
}

