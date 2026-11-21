#include "protos.h"

void f_005793c0(void) /* SultanSlotRoomScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005793c0);
    /* 005793c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005793c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005793c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005793c5: push 0x6a6603 */ { u32 v = 0x6a6603u; r_esp -= 4; W32(r_esp, v); }
    /* 005793ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005793d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005793d1: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005793d4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005793d9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005793db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005793dc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005793df: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005793e5: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005793e8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005793eb: call 0x5fc360 */ r_esp -= 4; W32(r_esp, 0x5793f0u); f_005fc360();
    /* 005793f0: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005793f3: cmp dword ptr [ebp - 0x24], 7 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005793f7: ja 0x5795d3 */ if ((!fC&&!fZ)) goto L_005795d3;
L_005793fd:; BB(0x005793fd);
    /* 005793fd: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00579400: jmp dword ptr [eax*4 + 0x579600] */ { u32 t = R32((u32)(r_eax*4+0x579600u)); switch (t) { case 0x579407u: goto L_00579407; case 0x579435u: goto L_00579435; case 0x5795a8u: goto L_005795a8; case 0x57949bu: goto L_0057949b; case 0x5794e7u: goto L_005794e7; case 0x579581u: goto L_00579581; case 0x57958eu: goto L_0057958e; case 0x57959bu: goto L_0057959b; default: UNSUP(0x00579400, "jump table entry is not a known target"); } }
L_00579407:; BB(0x00579407);
    /* 00579407: mov ecx, dword ptr [0x79345c] */ r_ecx = R32((u32)(0x79345cu));
    /* 0057940d: call 0x573960 */ r_esp -= 4; W32(r_esp, 0x579412u); f_00573960();
    /* 00579412: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00579414: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00579417: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00579419: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0057941c: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0057941f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x579421u); call_ind(t); }
    /* 00579421: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00579423: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00579426: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00579428: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0057942b: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0057942e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x579430u); call_ind(t); }
    /* 00579430: jmp 0x5795ee */ goto L_005795ee;
L_00579435:; BB(0x00579435);
    /* 00579435: mov ecx, dword ptr [0x79345c] */ r_ecx = R32((u32)(0x79345cu));
    /* 0057943b: mov byte ptr [ecx + 0x68], 1 */ W8((u32)(r_ecx+0x68u), 0x1u);
    /* 0057943f: mov ecx, dword ptr [0x79345c] */ r_ecx = R32((u32)(0x79345cu));
    /* 00579445: call 0x575b20 */ r_esp -= 4; W32(r_esp, 0x57944au); f_00575b20();
    /* 0057944a: mov edx, dword ptr [0x79345c] */ r_edx = R32((u32)(0x79345cu));
    /* 00579450: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00579453: mov ecx, dword ptr [0x79345c] */ r_ecx = R32((u32)(0x79345cu));
    /* 00579459: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0057945c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0057945e: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00579461: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x579463u); call_ind(t); }
    /* 00579463: mov ecx, dword ptr [0x79345c] */ r_ecx = R32((u32)(0x79345cu));
    /* 00579469: cmp dword ptr [ecx + 0x70], 0 */ {  u32 a = R32((u32)(r_ecx+0x70u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057946d: jne 0x57948b */ if (!fZ) goto L_0057948b;
L_0057946f:; BB(0x0057946f);
    /* 0057946f: mov edx, dword ptr [0x79345c] */ r_edx = R32((u32)(0x79345cu));
    /* 00579475: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 00579478: mov ecx, dword ptr [0x79345c] */ r_ecx = R32((u32)(0x79345cu));
    /* 0057947e: mov ecx, dword ptr [ecx + 0x54] */ r_ecx = R32((u32)(r_ecx+0x54u));
    /* 00579481: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00579483: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 00579489: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57948bu); call_ind(t); }
L_0057948b:; BB(0x0057948b);
    /* 0057948b: mov ecx, dword ptr [0x79345c] */ r_ecx = R32((u32)(0x79345cu));
    /* 00579491: call 0x576280 */ r_esp -= 4; W32(r_esp, 0x579496u); f_00576280();
    /* 00579496: jmp 0x5795ee */ goto L_005795ee;
L_0057949b:; BB(0x0057949b);
    /* 0057949b: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0057949d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5794a2u); f_00686d82();
    /* 005794a2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005794a5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005794a8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005794af: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005794b3: je 0x5794c2 */ if (fZ) goto L_005794c2;
L_005794b5:; BB(0x005794b5);
    /* 005794b5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005794b8: call 0x577d40 */ r_esp -= 4; W32(r_esp, 0x5794bdu); f_00577d40();
    /* 005794bd: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005794c0: jmp 0x5794c9 */ goto L_005794c9;
L_005794c2:; BB(0x005794c2);
    /* 005794c2: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005794c9:; BB(0x005794c9);
    /* 005794c9: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005794cc: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005794cf: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005794d6: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005794d9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005794da: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005794dd: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x5794e2u); f_005fc420();
    /* 005794e2: jmp 0x5795ee */ goto L_005795ee;
L_005794e7:; BB(0x005794e7);
    /* 005794e7: mov eax, dword ptr [0x79345c] */ r_eax = R32((u32)(0x79345cu));
    /* 005794ec: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005794ef: mov edx, dword ptr [0x79345c] */ r_edx = R32((u32)(0x79345cu));
    /* 005794f5: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 005794f8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005794fa: mov ecx, eax */ r_ecx = r_eax;
    /* 005794fc: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005794ff: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x579501u); call_ind(t); }
    /* 00579501: mov ecx, dword ptr [0x79345c] */ r_ecx = R32((u32)(0x79345cu));
    /* 00579507: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 0057950a: mov dword ptr [edx + 0x178], 6 */ W32((u32)(r_edx+0x178u), 0x6u);
    /* 00579514: push 0x16020 */ { u32 v = 0x16020u; r_esp -= 4; W32(r_esp, v); }
    /* 00579519: mov eax, dword ptr [0x79345c] */ r_eax = R32((u32)(0x79345cu));
    /* 0057951e: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 00579521: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x579526u); f_005eaf00();
    /* 00579526: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00579528: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x57952du); f_00686d82();
    /* 0057952d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00579530: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00579533: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0057953a: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057953e: je 0x57954f */ if (fZ) goto L_0057954f;
L_00579540:; BB(0x00579540);
    /* 00579540: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00579542: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00579545: call 0x600a70 */ r_esp -= 4; W32(r_esp, 0x57954au); f_00600a70();
    /* 0057954a: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0057954d: jmp 0x579556 */ goto L_00579556;
L_0057954f:; BB(0x0057954f);
    /* 0057954f: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00579556:; BB(0x00579556);
    /* 00579556: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00579559: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0057955c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00579563: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00579566: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00579567: mov eax, dword ptr [0x79345c] */ r_eax = R32((u32)(0x79345cu));
    /* 0057956c: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0057956f: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x579574u); f_005f5d50();
    /* 00579574: mov ecx, dword ptr [0x79345c] */ r_ecx = R32((u32)(0x79345cu));
    /* 0057957a: call 0x576920 */ r_esp -= 4; W32(r_esp, 0x57957fu); f_00576920();
    /* 0057957f: jmp 0x5795ee */ goto L_005795ee;
L_00579581:; BB(0x00579581);
    /* 00579581: mov ecx, dword ptr [0x79345c] */ r_ecx = R32((u32)(0x79345cu));
    /* 00579587: call 0x575260 */ r_esp -= 4; W32(r_esp, 0x57958cu); f_00575260();
    /* 0057958c: jmp 0x5795ee */ goto L_005795ee;
L_0057958e:; BB(0x0057958e);
    /* 0057958e: mov ecx, dword ptr [0x79345c] */ r_ecx = R32((u32)(0x79345cu));
    /* 00579594: call 0x5755c0 */ r_esp -= 4; W32(r_esp, 0x579599u); f_005755c0();
    /* 00579599: jmp 0x5795ee */ goto L_005795ee;
L_0057959b:; BB(0x0057959b);
    /* 0057959b: mov ecx, dword ptr [0x79345c] */ r_ecx = R32((u32)(0x79345cu));
    /* 005795a1: call 0x575860 */ r_esp -= 4; W32(r_esp, 0x5795a6u); f_00575860();
    /* 005795a6: jmp 0x5795ee */ goto L_005795ee;
L_005795a8:; BB(0x005795a8);
    /* 005795a8: mov ecx, dword ptr [0x79345c] */ r_ecx = R32((u32)(0x79345cu));
    /* 005795ae: call 0x576160 */ r_esp -= 4; W32(r_esp, 0x5795b3u); f_00576160();
    /* 005795b3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005795b5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005795b8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005795ba: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005795bd: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005795c0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5795c2u); call_ind(t); }
    /* 005795c2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005795c4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005795c7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005795c9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005795cc: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005795cf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5795d1u); call_ind(t); }
    /* 005795d1: jmp 0x5795ee */ goto L_005795ee;
L_005795d3:; BB(0x005795d3);
    /* 005795d3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 005795d5: jne 0x5795ee */ if (!fZ) goto L_005795ee;
L_005795d7:; BB(0x005795d7);
    /* 005795d7: push 0x14a */ { u32 v = 0x14au; r_esp -= 4; W32(r_esp, v); }
    /* 005795dc: push 0x6cb4fc */ { u32 v = 0x6cb4fcu; r_esp -= 4; W32(r_esp, v); }
    /* 005795e1: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 005795e6: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5795ebu); f_005e9f20();
    /* 005795eb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005795ee:; BB(0x005795ee);
    /* 005795ee: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005795f1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005795f8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005795f9: mov esp, ebp */ r_esp = r_ebp;
    /* 005795fb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005795fc: ret  */ FN_RET(0x005793c0); r_esp += 4; return;
}

