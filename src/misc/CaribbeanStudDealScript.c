#include "protos.h"

void f_00421390(void) /* CaribbeanStudDealScript::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00421390);
    /* 00421390: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00421391: mov ebp, esp */ r_ebp = r_esp;
    /* 00421393: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00421395: push 0x69e193 */ { u32 v = 0x69e193u; r_esp -= 4; W32(r_esp, v); }
    /* 0042139a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004213a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004213a1: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004213a4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 004213a9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004213ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004213ac: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 004213af: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 004213b5: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004213b8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004213ba: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004213bd: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x4213c2u); f_005fc0d0();
    /* 004213c2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004213c9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004213cc: mov dword ptr [eax], 0x6b5fa0 */ W32((u32)(r_eax), 0x6b5fa0u);
    /* 004213d2: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 004213d8: mov dl, byte ptr [ecx + 0x25] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x25u))) & 0xffu);
    /* 004213db: mov byte ptr [ebp - 0xd], dl */ W8((u32)(r_ebp+0xfffffff3u), (u8)r_edx);
    /* 004213de: movzx eax, byte ptr [ebp - 0xd] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffff3u));
    /* 004213e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004213e4: jne 0x421401 */ if (!fZ) goto L_00421401;
L_004213e6:; BB(0x004213e6);
    /* 004213e6: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004213e8: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 004213ee: call 0x637810 */ r_esp -= 4; W32(r_esp, 0x4213f3u); f_00637810();
    /* 004213f3: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004213f6: jl 0x421401 */ if ((fS!=fO)) goto L_00421401;
L_004213f8:; BB(0x004213f8);
    /* 004213f8: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 004213ff: jmp 0x421408 */ goto L_00421408;
L_00421401:; BB(0x00421401);
    /* 00421401: mov dword ptr [ebp - 0x18], 1 */ W32((u32)(r_ebp+0xffffffe8u), 0x1u);
L_00421408:; BB(0x00421408);
    /* 00421408: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0042140b: mov dl, byte ptr [ebp - 0x18] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffe8u))) & 0xffu);
    /* 0042140e: mov byte ptr [ecx + 0x24], dl */ W8((u32)(r_ecx+0x24u), (u8)r_edx);
    /* 00421411: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00421418: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0042141b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042141e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00421425: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00421426: mov esp, ebp */ r_esp = r_ebp;
    /* 00421428: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00421429: ret  */ FN_RET(0x00421390); r_esp += 4; return;
}

void f_004214b0(void) /* CaribbeanStudDealScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004214b0);
    /* 004214b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004214b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004214b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004214b5: push 0x69e1cf */ { u32 v = 0x69e1cfu; r_esp -= 4; W32(r_esp, v); }
    /* 004214ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004214c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004214c1: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004214c4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 004214c9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004214cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004214cc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 004214cf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 004214d5: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 004214d8: mov byte ptr [ebp - 0x11], 0 */ W8((u32)(r_ebp+0xffffffefu), 0x0u);
    /* 004214dc: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004214df: call 0x5fc360 */ r_esp -= 4; W32(r_esp, 0x4214e4u); f_005fc360();
    /* 004214e4: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 004214e7: cmp dword ptr [ebp - 0x34], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004214eb: ja 0x42182e */ if ((!fC&&!fZ)) goto L_0042182e;
L_004214f1:; BB(0x004214f1);
    /* 004214f1: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004214f4: jmp dword ptr [eax*4 + 0x421840] */ { u32 t = R32((u32)(r_eax*4+0x421840u)); switch (t) { case 0x4214fbu: goto L_004214fb; case 0x421622u: goto L_00421622; case 0x4216d6u: goto L_004216d6; case 0x421790u: goto L_00421790; case 0x4217d2u: goto L_004217d2; default: UNSUP(0x004214f4, "jump table entry is not a known target"); } }
L_004214fb:; BB(0x004214fb);
    /* 004214fb: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 00421501: call 0x4269a0 */ r_esp -= 4; W32(r_esp, 0x421506u); f_004269a0();
    /* 00421506: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00421509: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 0042150c: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00421513: jmp 0x42151e */ goto L_0042151e;
L_00421515:; BB(0x00421515);
    /* 00421515: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00421518: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0042151b: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_0042151e:; BB(0x0042151e);
    /* 0042151e: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00421522: jge 0x421564 */ if ((fS==fO)) goto L_00421564;
L_00421524:; BB(0x00421524);
    /* 00421524: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00421527: mov ecx, dword ptr [0x790360] */ r_ecx = R32((u32)(0x790360u));
    /* 0042152d: mov ecx, dword ptr [ecx + eax*4 + 0x54] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x54u));
    /* 00421531: call 0x5f54a0 */ r_esp -= 4; W32(r_esp, 0x421536u); f_005f54a0();
    /* 00421536: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00421539: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042153b: je 0x421541 */ if (fZ) goto L_00421541;
L_0042153d:; BB(0x0042153d);
    /* 0042153d: mov byte ptr [ebp - 0x11], 1 */ W8((u32)(r_ebp+0xffffffefu), 0x1u);
L_00421541:; BB(0x00421541);
    /* 00421541: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00421544: mov ecx, dword ptr [0x790360] */ r_ecx = R32((u32)(0x790360u));
    /* 0042154a: mov edx, dword ptr [ecx + eax*4 + 0x54] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x54u));
    /* 0042154e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00421551: mov ecx, dword ptr [0x790360] */ r_ecx = R32((u32)(0x790360u));
    /* 00421557: mov ecx, dword ptr [ecx + eax*4 + 0x54] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x54u));
    /* 0042155b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0042155d: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00421560: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x421562u); call_ind(t); }
    /* 00421562: jmp 0x421515 */ goto L_00421515;
L_00421564:; BB(0x00421564);
    /* 00421564: movzx ecx, byte ptr [ebp - 0x11] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffefu));
    /* 00421568: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042156a: je 0x4215a1 */ if (fZ) goto L_004215a1;
L_0042156c:; BB(0x0042156c);
    /* 0042156c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042156e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042156f: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 00421575: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00421578: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00421579: fld1  */ FPUSH(1.0);
    /* 0042157b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0042157e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00421580: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00421582: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00421584: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00421586: push 0x3106c9 */ { u32 v = 0x3106c9u; r_esp -= 4; W32(r_esp, v); }
    /* 0042158b: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00421591: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00421593: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00421599: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 0042159f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4215a1u); call_ind(t); }
L_004215a1:; BB(0x004215a1);
    /* 004215a1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004215a3: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004215a6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004215a8: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004215ab: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004215ae: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4215b0u); call_ind(t); }
    /* 004215b0: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004215b3: call 0x421450 */ r_esp -= 4; W32(r_esp, 0x4215b8u); f_00421450();
    /* 004215b8: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004215bb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004215bd: je 0x42160e */ if (fZ) goto L_0042160e;
L_004215bf:; BB(0x004215bf);
    /* 004215bf: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 004215c1: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4215c6u); f_00686d82();
    /* 004215c6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004215c9: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004215cc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004215d3: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004215d7: je 0x4215ec */ if (fZ) goto L_004215ec;
L_004215d9:; BB(0x004215d9);
    /* 004215d9: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004215dc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004215dd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004215df: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004215e2: call 0x421860 */ r_esp -= 4; W32(r_esp, 0x4215e7u); f_00421860();
    /* 004215e7: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 004215ea: jmp 0x4215f3 */ goto L_004215f3;
L_004215ec:; BB(0x004215ec);
    /* 004215ec: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_004215f3:; BB(0x004215f3);
    /* 004215f3: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 004215f6: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004215f9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00421600: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00421603: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00421604: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00421607: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x42160cu); f_005fc420();
    /* 0042160c: jmp 0x42161d */ goto L_0042161d;
L_0042160e:; BB(0x0042160e);
    /* 0042160e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00421610: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00421613: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00421615: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00421618: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 0042161b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x42161du); call_ind(t); }
L_0042161d:; BB(0x0042161d);
    /* 0042161d: jmp 0x42182e */ goto L_0042182e;
L_00421622:; BB(0x00421622);
    /* 00421622: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00421624: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00421627: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00421629: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0042162c: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042162f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x421631u); call_ind(t); }
    /* 00421631: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00421634: call 0x421450 */ r_esp -= 4; W32(r_esp, 0x421639u); f_00421450();
    /* 00421639: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0042163c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042163e: je 0x421696 */ if (fZ) goto L_00421696;
L_00421640:; BB(0x00421640);
    /* 00421640: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00421642: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x421647u); f_00686d82();
    /* 00421647: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042164a: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0042164d: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00421654: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00421658: je 0x421674 */ if (fZ) goto L_00421674;
L_0042165a:; BB(0x0042165a);
    /* 0042165a: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0042165d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042165e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00421660: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00421663: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00421666: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00421667: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0042166a: call 0x421b00 */ r_esp -= 4; W32(r_esp, 0x42166fu); f_00421b00();
    /* 0042166f: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00421672: jmp 0x42167b */ goto L_0042167b;
L_00421674:; BB(0x00421674);
    /* 00421674: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_0042167b:; BB(0x0042167b);
    /* 0042167b: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0042167e: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00421681: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00421688: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042168b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042168c: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0042168f: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x421694u); f_005fc420();
    /* 00421694: jmp 0x4216d1 */ goto L_004216d1;
L_00421696:; BB(0x00421696);
    /* 00421696: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 0042169c: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0042169f: call 0x6436c0 */ r_esp -= 4; W32(r_esp, 0x4216a4u); f_006436c0();
    /* 004216a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004216a5: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004216a8: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 004216ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004216ac: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 004216b2: call 0x426310 */ r_esp -= 4; W32(r_esp, 0x4216b7u); f_00426310();
    /* 004216b7: mov ecx, dword ptr [0x790360] */ r_ecx = R32((u32)(0x790360u));
    /* 004216bd: call 0x41f1b0 */ r_esp -= 4; W32(r_esp, 0x4216c2u); f_0041f1b0();
    /* 004216c2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004216c4: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004216c7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004216c9: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004216cc: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004216cf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4216d1u); call_ind(t); }
L_004216d1:; BB(0x004216d1);
    /* 004216d1: jmp 0x42182e */ goto L_0042182e;
L_004216d6:; BB(0x004216d6);
    /* 004216d6: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004216d8: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 004216de: call 0x426370 */ r_esp -= 4; W32(r_esp, 0x4216e3u); f_00426370();
    /* 004216e3: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004216e6: jne 0x4216fe */ if (!fZ) goto L_004216fe;
L_004216e8:; BB(0x004216e8);
    /* 004216e8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004216ea: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004216ec: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004216ef: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004216f1: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004216f4: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004216f7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4216f9u); call_ind(t); }
    /* 004216f9: jmp 0x42178b */ goto L_0042178b;
L_004216fe:; BB(0x004216fe);
    /* 004216fe: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 00421704: call 0x4269a0 */ r_esp -= 4; W32(r_esp, 0x421709u); f_004269a0();
    /* 00421709: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0042170c: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 0042170f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00421711: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00421714: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00421716: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00421719: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0042171c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x42171eu); call_ind(t); }
    /* 0042171e: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00421721: call 0x421450 */ r_esp -= 4; W32(r_esp, 0x421726u); f_00421450();
    /* 00421726: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00421729: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042172b: je 0x42177c */ if (fZ) goto L_0042177c;
L_0042172d:; BB(0x0042172d);
    /* 0042172d: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0042172f: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x421734u); f_00686d82();
    /* 00421734: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00421737: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0042173a: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00421741: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00421745: je 0x42175a */ if (fZ) goto L_0042175a;
L_00421747:; BB(0x00421747);
    /* 00421747: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0042174a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042174b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042174d: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00421750: call 0x421860 */ r_esp -= 4; W32(r_esp, 0x421755u); f_00421860();
    /* 00421755: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00421758: jmp 0x421761 */ goto L_00421761;
L_0042175a:; BB(0x0042175a);
    /* 0042175a: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_00421761:; BB(0x00421761);
    /* 00421761: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00421764: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 00421767: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0042176e: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00421771: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00421772: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00421775: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x42177au); f_005fc420();
    /* 0042177a: jmp 0x42178b */ goto L_0042178b;
L_0042177c:; BB(0x0042177c);
    /* 0042177c: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0042177e: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00421781: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00421783: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00421786: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00421789: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42178bu); call_ind(t); }
L_0042178b:; BB(0x0042178b);
    /* 0042178b: jmp 0x42182e */ goto L_0042182e;
L_00421790:; BB(0x00421790);
    /* 00421790: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00421792: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00421795: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00421797: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0042179a: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042179d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42179fu); call_ind(t); }
    /* 0042179f: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004217a2: call 0x421450 */ r_esp -= 4; W32(r_esp, 0x4217a7u); f_00421450();
    /* 004217a7: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004217aa: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004217ac: je 0x4217c1 */ if (fZ) goto L_004217c1;
L_004217ae:; BB(0x004217ae);
    /* 004217ae: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004217b1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004217b2: mov eax, dword ptr [0x790360] */ r_eax = R32((u32)(0x790360u));
    /* 004217b7: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 004217ba: call 0x4207f0 */ r_esp -= 4; W32(r_esp, 0x4217bfu); f_004207f0();
    /* 004217bf: jmp 0x4217d0 */ goto L_004217d0;
L_004217c1:; BB(0x004217c1);
    /* 004217c1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004217c3: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004217c6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004217c8: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004217cb: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004217ce: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4217d0u); call_ind(t); }
L_004217d0:; BB(0x004217d0);
    /* 004217d0: jmp 0x42182e */ goto L_0042182e;
L_004217d2:; BB(0x004217d2);
    /* 004217d2: mov ecx, dword ptr [0x790360] */ r_ecx = R32((u32)(0x790360u));
    /* 004217d8: mov edx, dword ptr [ecx + 0x7c] */ r_edx = R32((u32)(r_ecx+0x7cu));
    /* 004217db: mov eax, dword ptr [0x790360] */ r_eax = R32((u32)(0x790360u));
    /* 004217e0: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 004217e3: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004217e5: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 004217e8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4217eau); call_ind(t); }
    /* 004217ea: mov ecx, dword ptr [0x790360] */ r_ecx = R32((u32)(0x790360u));
    /* 004217f0: mov edx, dword ptr [ecx + 0x78] */ r_edx = R32((u32)(r_ecx+0x78u));
    /* 004217f3: mov eax, dword ptr [0x790360] */ r_eax = R32((u32)(0x790360u));
    /* 004217f8: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 004217fb: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004217fd: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00421800: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x421802u); call_ind(t); }
    /* 00421802: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00421804: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00421806: mov ecx, dword ptr [0x790354] */ r_ecx = R32((u32)(0x790354u));
    /* 0042180c: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0042180f: mov eax, dword ptr [0x790354] */ r_eax = R32((u32)(0x790354u));
    /* 00421814: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00421817: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00421819: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0042181c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42181eu); call_ind(t); }
    /* 0042181e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00421820: mov ecx, dword ptr [0x790354] */ r_ecx = R32((u32)(0x790354u));
    /* 00421826: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00421829: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x42182eu); f_005fc420();
L_0042182e:; BB(0x0042182e);
    /* 0042182e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00421831: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00421838: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00421839: mov esp, ebp */ r_esp = r_ebp;
    /* 0042183b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042183c: ret  */ FN_RET(0x004214b0); r_esp += 4; return;
}

