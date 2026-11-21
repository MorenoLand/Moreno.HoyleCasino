#include "protos.h"

void f_00677690(void) /* CardsDialog::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00677690);
    /* 00677690: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00677691: mov ebp, esp */ r_ebp = r_esp;
    /* 00677693: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00677695: push 0x6ad6c8 */ { u32 v = 0x6ad6c8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067769a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006776a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006776a1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006776a2: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 006776a7: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006776a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006776aa: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 006776ad: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 006776b3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 006776b6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006776b8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006776ba: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006776bd: call 0x5f71f0 */ r_esp -= 4; W32(r_esp, 0x6776c2u); f_005f71f0();
    /* 006776c2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006776c9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006776cc: mov dword ptr [eax], 0x6e1cdc */ W32((u32)(r_eax), 0x6e1cdcu);
    /* 006776d2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006776d4: push 0x30d4f6 */ { u32 v = 0x30d4f6u; r_esp -= 4; W32(r_esp, v); }
    /* 006776d9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006776dc: call 0x5f83d0 */ r_esp -= 4; W32(r_esp, 0x6776e1u); f_005f83d0();
    /* 006776e1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006776e4: mov dword ptr [ecx + 0x1bc], 0 */ W32((u32)(r_ecx+0x1bcu), 0x0u);
    /* 006776ee: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006776f5: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006776f8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006776fb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00677702: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00677703: mov esp, ebp */ r_esp = r_ebp;
    /* 00677705: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00677706: ret  */ FN_RET(0x00677690); r_esp += 4; return;
}

void f_00677710(void) /* CardsDialog::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00677710);
    /* 00677710: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00677711: mov ebp, esp */ r_ebp = r_esp;
    /* 00677713: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00677715: push 0x6ad6eb */ { u32 v = 0x6ad6ebu; r_esp -= 4; W32(r_esp, v); }
    /* 0067771a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00677720: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00677721: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00677724: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00677729: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0067772b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067772c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0067772f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00677735: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00677738: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0067773b: mov dword ptr [eax], 0x6e1cdc */ W32((u32)(r_eax), 0x6e1cdcu);
    /* 00677741: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00677748: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0067774b: mov edx, dword ptr [ecx + 0x1bc] */ r_edx = R32((u32)(r_ecx+0x1bcu));
    /* 00677751: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00677754: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00677757: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0067775a: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067775e: je 0x677773 */ if (fZ) goto L_00677773;
L_00677760:; BB(0x00677760);
    /* 00677760: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00677762: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00677765: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00677767: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067776a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0067776c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67776eu); call_ind(t); }
    /* 0067776e: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00677771: jmp 0x67777a */ goto L_0067777a;
L_00677773:; BB(0x00677773);
    /* 00677773: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0067777a:; BB(0x0067777a);
    /* 0067777a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00677781: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00677784: call 0x5f7260 */ r_esp -= 4; W32(r_esp, 0x677789u); f_005f7260();
    /* 00677789: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0067778c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00677793: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00677794: mov esp, ebp */ r_esp = r_ebp;
    /* 00677796: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00677797: ret  */ FN_RET(0x00677710); r_esp += 4; return;
}

void f_006777a0(void) /* CardsDialog::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006777a0);
    /* 006777a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006777a1: mov ebp, esp */ r_ebp = r_esp;
    /* 006777a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006777a5: push 0x6ad711 */ { u32 v = 0x6ad711u; r_esp -= 4; W32(r_esp, v); }
    /* 006777aa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006777b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006777b1: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006777b4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 006777b9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006777bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006777bc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 006777bf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 006777c5: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006777c8: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006777ca: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006777cc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006777ce: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006777d0: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006777d2: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 006777d4: push 0x1ab */ { u32 v = 0x1abu; r_esp -= 4; W32(r_esp, v); }
    /* 006777d9: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 006777db: push 0x6e1e08 */ { u32 v = 0x6e1e08u; r_esp -= 4; W32(r_esp, v); }
    /* 006777e0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006777e2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006777e4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006777e7: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x6777ecu); f_005fa5b0();
    /* 006777ec: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006777ee: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006777f0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006777f2: push 0xa1 */ { u32 v = 0xa1u; r_esp -= 4; W32(r_esp, v); }
    /* 006777f7: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 006777f9: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 006777fb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006777fd: push 0x151 */ { u32 v = 0x151u; r_esp -= 4; W32(r_esp, v); }
    /* 00677802: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00677804: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00677806: push 0x1b1 */ { u32 v = 0x1b1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067780b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067780d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067780f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00677812: call 0x5fa880 */ r_esp -= 4; W32(r_esp, 0x677817u); f_005fa880();
    /* 00677817: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00677819: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067781b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067781d: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00677822: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00677827: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0067782c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067782e: push 0x152 */ { u32 v = 0x152u; r_esp -= 4; W32(r_esp, v); }
    /* 00677833: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00677835: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00677837: push 0x1b1 */ { u32 v = 0x1b1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067783c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067783e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00677840: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00677843: call 0x5fa880 */ r_esp -= 4; W32(r_esp, 0x677848u); f_005fa880();
    /* 00677848: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0067784f: jmp 0x67785a */ goto L_0067785a;
L_00677851:; BB(0x00677851);
    /* 00677851: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00677854: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00677857: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0067785a:; BB(0x0067785a);
    /* 0067785a: cmp dword ptr [ebp - 0x14], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067785e: jge 0x6778b2 */ if ((fS==fO)) goto L_006778b2;
L_00677860:; BB(0x00677860);
    /* 00677860: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00677862: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00677864: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 00677866: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 00677868: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 0067786a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0067786d: mov edx, dword ptr [ecx*4 + 0x781228] */ r_edx = R32((u32)(r_ecx*4+0x781228u));
    /* 00677874: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00677875: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x67787au); f_00630f40();
    /* 0067787a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067787d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067787e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00677880: push 0x15d */ { u32 v = 0x15du; r_esp -= 4; W32(r_esp, v); }
    /* 00677885: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00677888: imul eax, eax, 0x5a */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x5au; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0067788b: add eax, 0xa4 */ {  u32 a = r_eax; u32 b = 0xa4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00677890: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00677891: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00677894: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 00677896: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 00677898: and ecx, 0xfffffff9 */ {  u32 a = r_ecx; u32 b = 0xfffffff9u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0067789b: add ecx, 0x30d4e5 */ {  u32 a = r_ecx; u32 b = 0x30d4e5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006778a1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006778a2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006778a5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006778a6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006778a8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006778ab: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x6778b0u); f_005f9de0();
    /* 006778b0: jmp 0x677851 */ goto L_00677851;
L_006778b2:; BB(0x006778b2);
    /* 006778b2: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 006778b4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006778b6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006778b9: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x6778beu); f_005fb300();
    /* 006778be: mov ecx, eax */ r_ecx = r_eax;
    /* 006778c0: call 0x6026f0 */ r_esp -= 4; W32(r_esp, 0x6778c5u); f_006026f0();
    /* 006778c5: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 006778c7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006778c9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006778cc: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x6778d1u); f_005fb300();
    /* 006778d1: mov ecx, eax */ r_ecx = r_eax;
    /* 006778d3: call 0x6026f0 */ r_esp -= 4; W32(r_esp, 0x6778d8u); f_006026f0();
    /* 006778d8: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 006778dd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006778df: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 006778e5: mov eax, dword ptr [edx + 0x1f0] */ r_eax = R32((u32)(r_edx+0x1f0u));
    /* 006778eb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6778edu); call_ind(t); }
    /* 006778ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006778ef: jne 0x6779c8 */ if (!fZ) goto L_006779c8;
L_006778f5:; BB(0x006778f5);
    /* 006778f5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006778f7: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006778f9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006778fb: push 0x69 */ { u32 v = 0x69u; r_esp -= 4; W32(r_esp, v); }
    /* 006778fd: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 006778ff: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00677901: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 00677906: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 00677908: push 0x6e1dec */ { u32 v = 0x6e1decu; r_esp -= 4; W32(r_esp, v); }
    /* 0067790d: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x677912u); f_00630f40();
    /* 00677912: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00677915: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00677916: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00677918: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067791a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067791d: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x677922u); f_005fa5b0();
    /* 00677922: push 0x30d4d9 */ { u32 v = 0x30d4d9u; r_esp -= 4; W32(r_esp, v); }
    /* 00677927: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00677929: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067792b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067792d: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 0067792f: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 00677931: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00677933: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00677935: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00677937: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067793c: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0067793e: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00677940: push 0xa5 */ { u32 v = 0xa5u; r_esp -= 4; W32(r_esp, v); }
    /* 00677945: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00677947: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 00677949: push 0xd2 */ { u32 v = 0xd2u; r_esp -= 4; W32(r_esp, v); }
    /* 0067794e: push 0xbb */ { u32 v = 0xbbu; r_esp -= 4; W32(r_esp, v); }
    /* 00677953: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 00677955: push 0xd2 */ { u32 v = 0xd2u; r_esp -= 4; W32(r_esp, v); }
    /* 0067795a: push 0x30d4cf */ { u32 v = 0x30d4cfu; r_esp -= 4; W32(r_esp, v); }
    /* 0067795f: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 00677961: push 0xd3 */ { u32 v = 0xd3u; r_esp -= 4; W32(r_esp, v); }
    /* 00677966: push 0x30d4cb */ { u32 v = 0x30d4cbu; r_esp -= 4; W32(r_esp, v); }
    /* 0067796b: push 0xce */ { u32 v = 0xceu; r_esp -= 4; W32(r_esp, v); }
    /* 00677970: push 0xd3 */ { u32 v = 0xd3u; r_esp -= 4; W32(r_esp, v); }
    /* 00677975: push 0x30d4cc */ { u32 v = 0x30d4ccu; r_esp -= 4; W32(r_esp, v); }
    /* 0067797a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067797c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067797e: push 0x67 */ { u32 v = 0x67u; r_esp -= 4; W32(r_esp, v); }
    /* 00677980: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00677982: push 0x30d4eb */ { u32 v = 0x30d4ebu; r_esp -= 4; W32(r_esp, v); }
    /* 00677987: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00677989: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067798b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067798e: call 0x5fac90 */ r_esp -= 4; W32(r_esp, 0x677993u); f_005fac90();
    /* 00677993: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00677995: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0067799a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067799c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067799e: push 0x6a */ { u32 v = 0x6au; r_esp -= 4; W32(r_esp, v); }
    /* 006779a0: push 0x114 */ { u32 v = 0x114u; r_esp -= 4; W32(r_esp, v); }
    /* 006779a5: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006779ab: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006779ad: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006779b3: mov eax, dword ptr [edx + 0x390] */ r_eax = R32((u32)(r_edx+0x390u));
    /* 006779b9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6779bbu); call_ind(t); }
    /* 006779bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006779bc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006779be: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006779c0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006779c3: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x6779c8u); f_005f9ce0();
L_006779c8:; BB(0x006779c8);
    /* 006779c8: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006779ce: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006779d0: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006779d6: mov eax, dword ptr [edx + 0x1c8] */ r_eax = R32((u32)(r_edx+0x1c8u));
    /* 006779dc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6779deu); call_ind(t); }
    /* 006779de: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 006779e1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006779e3: je 0x677ba0 */ if (fZ) goto L_00677ba0;
L_006779e9:; BB(0x006779e9);
    /* 006779e9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006779eb: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 006779f0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006779f2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006779f4: push 0x6a */ { u32 v = 0x6au; r_esp -= 4; W32(r_esp, v); }
    /* 006779f6: push 0x164 */ { u32 v = 0x164u; r_esp -= 4; W32(r_esp, v); }
    /* 006779fb: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00677a01: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00677a03: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00677a09: mov edx, dword ptr [eax + 0x398] */ r_edx = R32((u32)(r_eax+0x398u));
    /* 00677a0f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x677a11u); call_ind(t); }
    /* 00677a11: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00677a12: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00677a14: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00677a16: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00677a19: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x677a1eu); f_005f9ce0();
    /* 00677a1e: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00677a23: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00677a25: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00677a2b: mov eax, dword ptr [edx + 0x398] */ r_eax = R32((u32)(r_edx+0x398u));
    /* 00677a31: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x677a33u); call_ind(t); }
    /* 00677a33: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00677a34: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00677a3a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00677a3c: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00677a42: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 00677a48: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x677a4au); call_ind(t); }
    /* 00677a4a: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00677a4d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00677a4f: je 0x677aa5 */ if (fZ) goto L_00677aa5;
L_00677a51:; BB(0x00677a51);
    /* 00677a51: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00677a53: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00677a56: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x677a5bu); f_005fb2b0();
    /* 00677a5b: mov ecx, eax */ r_ecx = r_eax;
    /* 00677a5d: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x677a62u); f_005eb240();
    /* 00677a62: cmp eax, 0x33 */ {  u32 a = r_eax; u32 b = 0x33u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00677a65: jle 0x677a70 */ if ((fZ||fS!=fO)) goto L_00677a70;
L_00677a67:; BB(0x00677a67);
    /* 00677a67: mov dword ptr [ebp - 0x24], 0x33 */ W32((u32)(r_ebp+0xffffffdcu), 0x33u);
    /* 00677a6e: jmp 0x677a84 */ goto L_00677a84;
L_00677a70:; BB(0x00677a70);
    /* 00677a70: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00677a72: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00677a75: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x677a7au); f_005fb2b0();
    /* 00677a7a: mov ecx, eax */ r_ecx = r_eax;
    /* 00677a7c: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x677a81u); f_005eb240();
    /* 00677a81: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
L_00677a84:; BB(0x00677a84);
    /* 00677a84: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00677a86: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00677a89: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x677a8eu); f_005fb2b0();
    /* 00677a8e: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00677a91: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00677a94: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00677a95: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00677a98: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00677a9a: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00677a9d: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00677aa3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x677aa5u); call_ind(t); }
L_00677aa5:; BB(0x00677aa5);
    /* 00677aa5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00677aa7: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00677aac: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00677ab1: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00677ab6: push 0xa1 */ { u32 v = 0xa1u; r_esp -= 4; W32(r_esp, v); }
    /* 00677abb: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 00677abd: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 00677abf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00677ac1: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 00677ac3: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00677ac5: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 00677ac7: push 0x158 */ { u32 v = 0x158u; r_esp -= 4; W32(r_esp, v); }
    /* 00677acc: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 00677ace: push 0x6e1dd4 */ { u32 v = 0x6e1dd4u; r_esp -= 4; W32(r_esp, v); }
    /* 00677ad3: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x677ad8u); f_00630f40();
    /* 00677ad8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00677adb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00677adc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00677ade: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00677ae0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00677ae3: call 0x5fa790 */ r_esp -= 4; W32(r_esp, 0x677ae8u); f_005fa790();
    /* 00677ae8: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00677aef: jmp 0x677afa */ goto L_00677afa;
L_00677af1:; BB(0x00677af1);
    /* 00677af1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00677af4: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00677af7: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_00677afa:; BB(0x00677afa);
    /* 00677afa: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00677b00: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00677b02: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00677b08: mov edx, dword ptr [eax + 0x1ac] */ r_edx = R32((u32)(r_eax+0x1acu));
    /* 00677b0e: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x677b10u); call_ind(t); }
    /* 00677b10: cmp dword ptr [ebp - 0x14], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00677b13: jge 0x677ba0 */ if ((fS==fO)) goto L_00677ba0;
L_00677b19:; BB(0x00677b19);
    /* 00677b19: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00677b1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00677b1d: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00677b23: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00677b25: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00677b2b: mov eax, dword ptr [edx + 0x1b0] */ r_eax = R32((u32)(r_edx+0x1b0u));
    /* 00677b31: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x677b33u); call_ind(t); }
    /* 00677b33: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00677b36: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00677b38: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00677b3a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00677b3c: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 00677b3e: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 00677b40: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00677b42: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00677b45: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00677b46: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00677b4c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00677b4e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00677b54: mov edx, dword ptr [eax + 0x1cc] */ r_edx = R32((u32)(r_eax+0x1ccu));
    /* 00677b5a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x677b5cu); call_ind(t); }
    /* 00677b5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00677b5d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00677b5f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00677b62: and eax, 0x80000001 */ {  u32 a = r_eax; u32 b = 0x80000001u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fS = ((r >> 31) & 1); }
    /* 00677b67: jns 0x677b6e */ if (!fS) goto L_00677b6e;
L_00677b69:; BB(0x00677b69);
    /* 00677b69: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00677b6a: or eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00677b6d: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00677b6e:; BB(0x00677b6e);
    /* 00677b6e: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00677b71: add eax, 0x35 */ {  u32 a = r_eax; u32 b = 0x35u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00677b74: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00677b75: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00677b78: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00677b79: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00677b7b: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00677b7d: imul eax, eax, 0x73 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x73u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00677b80: add eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00677b83: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00677b84: push 0x30d4ca */ { u32 v = 0x30d4cau; r_esp -= 4; W32(r_esp, v); }
    /* 00677b89: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00677b8b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00677b8e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00677b8f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00677b91: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00677b93: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00677b96: call 0x5f9ff0 */ r_esp -= 4; W32(r_esp, 0x677b9bu); f_005f9ff0();
    /* 00677b9b: jmp 0x677af1 */ goto L_00677af1;
L_00677ba0:; BB(0x00677ba0);
    /* 00677ba0: push 0x70 */ { u32 v = 0x70u; r_esp -= 4; W32(r_esp, v); }
    /* 00677ba2: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x677ba7u); f_00686d82();
    /* 00677ba7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00677baa: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00677bad: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00677bb4: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00677bb8: je 0x677bd3 */ if (fZ) goto L_00677bd3;
L_00677bba:; BB(0x00677bba);
    /* 00677bba: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00677bbd: call 0x680b70 */ r_esp -= 4; W32(r_esp, 0x677bc2u); f_00680b70();
    /* 00677bc2: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00677bc5: mov dword ptr [edx], 0x6e1d24 */ W32((u32)(r_edx), 0x6e1d24u);
    /* 00677bcb: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00677bce: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00677bd1: jmp 0x677bda */ goto L_00677bda;
L_00677bd3:; BB(0x00677bd3);
    /* 00677bd3: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00677bda:; BB(0x00677bda);
    /* 00677bda: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00677bdd: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00677be0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00677be7: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00677bea: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00677bed: mov dword ptr [edx + 0x1bc], eax */ W32((u32)(r_edx+0x1bcu), r_eax);
    /* 00677bf3: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00677bf6: mov edx, dword ptr [ecx + 0x1bc] */ r_edx = R32((u32)(r_ecx+0x1bcu));
    /* 00677bfc: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00677bff: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00677c02: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00677c04: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00677c06: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 00677c08: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 00677c0a: push 0xaa */ { u32 v = 0xaau; r_esp -= 4; W32(r_esp, v); }
    /* 00677c0f: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00677c11: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00677c13: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 00677c15: push 0x6b30a8 */ { u32 v = 0x6b30a8u; r_esp -= 4; W32(r_esp, v); }
    /* 00677c1a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x677c1fu); f_00630f40();
    /* 00677c1f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00677c22: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00677c23: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00677c28: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00677c2d: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00677c32: push 0xa1 */ { u32 v = 0xa1u; r_esp -= 4; W32(r_esp, v); }
    /* 00677c37: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 00677c39: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 00677c3b: push 0x86 */ { u32 v = 0x86u; r_esp -= 4; W32(r_esp, v); }
    /* 00677c40: push 0xb8 */ { u32 v = 0xb8u; r_esp -= 4; W32(r_esp, v); }
    /* 00677c45: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00677c47: push 0xc5 */ { u32 v = 0xc5u; r_esp -= 4; W32(r_esp, v); }
    /* 00677c4c: push 0xf7 */ { u32 v = 0xf7u; r_esp -= 4; W32(r_esp, v); }
    /* 00677c51: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00677c54: mov ecx, dword ptr [ecx + 0x1bc] */ r_ecx = R32((u32)(r_ecx+0x1bcu));
    /* 00677c5a: call 0x680ca0 */ r_esp -= 4; W32(r_esp, 0x677c5fu); f_00680ca0();
    /* 00677c5f: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00677c62: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 00677c68: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00677c6b: mov ecx, dword ptr [ecx + 0x1bc] */ r_ecx = R32((u32)(r_ecx+0x1bcu));
    /* 00677c71: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00677c73: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00677c76: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x677c78u); call_ind(t); }
    /* 00677c78: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00677c7b: call 0x677c90 */ r_esp -= 4; W32(r_esp, 0x677c80u); f_00677c90();
    /* 00677c80: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00677c83: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00677c8a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00677c8b: mov esp, ebp */ r_esp = r_ebp;
    /* 00677c8d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00677c8e: ret  */ FN_RET(0x006777a0); r_esp += 4; return;
}

void f_00677d10(void) /* CardsDialog::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00677d10);
    /* 00677d10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00677d11: mov ebp, esp */ r_ebp = r_esp;
    /* 00677d13: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00677d16: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00677d19: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00677d1c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00677d1f: cmp dword ptr [ebp - 8], 0x301140 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x301140u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00677d26: jg 0x677d5c */ if ((!fZ&&fS==fO)) goto L_00677d5c;
L_00677d28:; BB(0x00677d28);
    /* 00677d28: cmp dword ptr [ebp - 8], 0x301140 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x301140u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00677d2f: je 0x677da8 */ if (fZ) goto L_00677da8;
L_00677d31:; BB(0x00677d31);
    /* 00677d31: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00677d35: jg 0x677d4e */ if ((!fZ&&fS==fO)) goto L_00677d4e;
L_00677d37:; BB(0x00677d37);
    /* 00677d37: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00677d3b: je 0x677d9b */ if (fZ) goto L_00677d9b;
L_00677d3d:; BB(0x00677d3d);
    /* 00677d3d: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00677d41: je 0x677d83 */ if (fZ) goto L_00677d83;
L_00677d43:; BB(0x00677d43);
    /* 00677d43: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00677d47: je 0x677d8b */ if (fZ) goto L_00677d8b;
L_00677d49:; BB(0x00677d49);
    /* 00677d49: jmp 0x677e53 */ goto L_00677e53;
L_00677d4e:; BB(0x00677d4e);
    /* 00677d4e: cmp dword ptr [ebp - 8], 0x30113c */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x30113cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00677d55: je 0x677da8 */ if (fZ) goto L_00677da8;
L_00677d57:; BB(0x00677d57);
    /* 00677d57: jmp 0x677e53 */ goto L_00677e53;
L_00677d5c:; BB(0x00677d5c);
    /* 00677d5c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00677d5f: sub ecx, 0x301144 */ {  u32 a = r_ecx; u32 b = 0x301144u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00677d65: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00677d68: cmp dword ptr [ebp - 8], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00677d6c: ja 0x677e53 */ if ((!fC&&!fZ)) goto L_00677e53;
L_00677d72:; BB(0x00677d72);
    /* 00677d72: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00677d75: movzx eax, byte ptr [edx + 0x677e64] */ r_eax = (u32)R8((u32)(r_edx+0x677e64u));
    /* 00677d7c: jmp dword ptr [eax*4 + 0x677e5c] */ { u32 t = R32((u32)(r_eax*4+0x677e5cu)); switch (t) { case 0x677da8u: goto L_00677da8; case 0x677e53u: goto L_00677e53; default: UNSUP(0x00677d7c, "jump table entry is not a known target"); } }
L_00677d83:; BB(0x00677d83);
    /* 00677d83: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00677d86: call 0x677ec0 */ r_esp -= 4; W32(r_esp, 0x677d8bu); f_00677ec0();
L_00677d8b:; BB(0x00677d8b);
    /* 00677d8b: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00677d91: call 0x64f920 */ r_esp -= 4; W32(r_esp, 0x677d96u); f_0064f920();
    /* 00677d96: jmp 0x677e53 */ goto L_00677e53;
L_00677d9b:; BB(0x00677d9b);
    /* 00677d9b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00677d9e: call 0x677ec0 */ r_esp -= 4; W32(r_esp, 0x677da3u); f_00677ec0();
    /* 00677da3: jmp 0x677e53 */ goto L_00677e53;
L_00677da8:; BB(0x00677da8);
    /* 00677da8: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00677dae: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00677db0: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00677db6: mov eax, dword ptr [edx + 0x1c8] */ r_eax = R32((u32)(r_edx+0x1c8u));
    /* 00677dbc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x677dbeu); call_ind(t); }
    /* 00677dbe: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00677dc1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00677dc3: je 0x677e53 */ if (fZ) goto L_00677e53;
L_00677dc9:; BB(0x00677dc9);
    /* 00677dc9: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00677dcc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00677dcd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00677dcf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00677dd2: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x677dd7u); f_005fb2b0();
    /* 00677dd7: mov ecx, eax */ r_ecx = r_eax;
    /* 00677dd9: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x677ddeu); f_005eaf00();
    /* 00677dde: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00677de1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00677de2: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00677de8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00677dea: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00677df0: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 00677df6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x677df8u); call_ind(t); }
    /* 00677df8: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00677dfb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00677dfd: je 0x677e53 */ if (fZ) goto L_00677e53;
L_00677dff:; BB(0x00677dff);
    /* 00677dff: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00677e01: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00677e04: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x677e09u); f_005fb2b0();
    /* 00677e09: mov ecx, eax */ r_ecx = r_eax;
    /* 00677e0b: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x677e10u); f_005eb240();
    /* 00677e10: cmp eax, 0x33 */ {  u32 a = r_eax; u32 b = 0x33u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00677e13: jle 0x677e1e */ if ((fZ||fS!=fO)) goto L_00677e1e;
L_00677e15:; BB(0x00677e15);
    /* 00677e15: mov dword ptr [ebp - 0xc], 0x33 */ W32((u32)(r_ebp+0xfffffff4u), 0x33u);
    /* 00677e1c: jmp 0x677e32 */ goto L_00677e32;
L_00677e1e:; BB(0x00677e1e);
    /* 00677e1e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00677e20: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00677e23: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x677e28u); f_005fb2b0();
    /* 00677e28: mov ecx, eax */ r_ecx = r_eax;
    /* 00677e2a: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x677e2fu); f_005eb240();
    /* 00677e2f: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_00677e32:; BB(0x00677e32);
    /* 00677e32: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00677e34: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00677e37: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x677e3cu); f_005fb2b0();
    /* 00677e3c: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00677e3f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00677e42: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00677e43: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00677e46: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00677e48: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00677e4b: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00677e51: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x677e53u); call_ind(t); }
L_00677e53:; BB(0x00677e53);
    /* 00677e53: mov esp, ebp */ r_esp = r_ebp;
    /* 00677e55: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00677e56: ret 4 */ FN_RET(0x00677d10); r_esp += 8; return;
}

void f_00677e80(void) /* CardsDialog::vfunc9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00677e80);
    /* 00677e80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00677e81: mov ebp, esp */ r_ebp = r_esp;
    /* 00677e83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00677e84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00677e87: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 00677e8c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00677e8e: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00677e94: mov eax, dword ptr [edx + 0x1f0] */ r_eax = R32((u32)(r_edx+0x1f0u));
    /* 00677e9a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x677e9cu); call_ind(t); }
    /* 00677e9c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00677e9e: jne 0x677eba */ if (!fZ) goto L_00677eba;
L_00677ea0:; BB(0x00677ea0);
    /* 00677ea0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00677ea3: call 0x678170 */ r_esp -= 4; W32(r_esp, 0x677ea8u); f_00678170();
    /* 00677ea8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00677ea9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00677eab: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00677eae: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x677eb3u); f_005fb2b0();
    /* 00677eb3: mov ecx, eax */ r_ecx = r_eax;
    /* 00677eb5: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x677ebau); f_005eaf00();
L_00677eba:; BB(0x00677eba);
    /* 00677eba: mov esp, ebp */ r_esp = r_ebp;
    /* 00677ebc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00677ebd: ret 4 */ FN_RET(0x00677e80); r_esp += 8; return;
}

