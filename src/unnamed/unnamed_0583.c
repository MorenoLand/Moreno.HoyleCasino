#include "protos.h"

void f_00583010(void) /* sub_583010 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00583010);
    /* 00583010: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00583011: mov ebp, esp */ r_ebp = r_esp;
    /* 00583013: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00583014: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00583017: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058301a: call 0x583030 */ r_esp -= 4; W32(r_esp, 0x58301fu); f_00583030();
    /* 0058301f: mov esp, ebp */ r_esp = r_ebp;
    /* 00583021: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00583022: ret  */ FN_RET(0x00583010); r_esp += 4; return;
}

void f_00583030(void) /* sub_583030 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00583030);
    /* 00583030: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00583031: mov ebp, esp */ r_ebp = r_esp;
    /* 00583033: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00583035: push 0x6a6b69 */ { u32 v = 0x6a6b69u; r_esp -= 4; W32(r_esp, v); }
    /* 0058303a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00583040: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00583041: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00583044: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00583049: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0058304b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058304c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0058304f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00583055: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00583058: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0058305f: jmp 0x58306a */ goto L_0058306a;
L_00583061:; BB(0x00583061);
    /* 00583061: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00583064: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00583067: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_0058306a:; BB(0x0058306a);
    /* 0058306a: cmp dword ptr [ebp - 0x10], 0x14 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058306e: jge 0x583080 */ if ((fS==fO)) goto L_00583080;
L_00583070:; BB(0x00583070);
    /* 00583070: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00583073: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00583076: mov dword ptr [edx + ecx*4 + 4], 0xffffffff */ W32((u32)(r_edx+r_ecx*4+0x4u), 0xffffffffu);
    /* 0058307e: jmp 0x583061 */ goto L_00583061;
L_00583080:; BB(0x00583080);
    /* 00583080: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00583083: cmp dword ptr [eax + 0x54], 0 */ {  u32 a = R32((u32)(r_eax+0x54u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00583087: jne 0x58317d */ if (!fZ) goto L_0058317d;
L_0058308d:; BB(0x0058308d);
    /* 0058308d: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 00583092: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x583097u); f_00686d82();
    /* 00583097: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058309a: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0058309d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005830a4: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005830a8: je 0x5830b7 */ if (fZ) goto L_005830b7;
L_005830aa:; BB(0x005830aa);
    /* 005830aa: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005830ad: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x5830b2u); f_005f5bf0();
    /* 005830b2: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005830b5: jmp 0x5830be */ goto L_005830be;
L_005830b7:; BB(0x005830b7);
    /* 005830b7: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005830be:; BB(0x005830be);
    /* 005830be: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005830c1: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005830c4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005830cb: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005830ce: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005830d1: mov dword ptr [edx + 0x54], eax */ W32((u32)(r_edx+0x54u), r_eax);
    /* 005830d4: push 0x30dfcb */ { u32 v = 0x30dfcbu; r_esp -= 4; W32(r_esp, v); }
    /* 005830d9: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005830dc: mov ecx, dword ptr [ecx + 0x54] */ r_ecx = R32((u32)(r_ecx+0x54u));
    /* 005830df: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x5830e4u); f_005eaf00();
    /* 005830e4: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005830e7: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 005830ea: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005830ed: mov ecx, dword ptr [ecx + 0x54] */ r_ecx = R32((u32)(r_ecx+0x54u));
    /* 005830f0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005830f2: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 005830f5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5830f7u); call_ind(t); }
    /* 005830f7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005830f9: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005830fc: mov edx, dword ptr [ecx + 0x54] */ r_edx = R32((u32)(r_ecx+0x54u));
    /* 005830ff: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00583102: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 00583105: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00583107: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0058310a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58310cu); call_ind(t); }
    /* 0058310c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0058310f: mov edx, dword ptr [ecx + 0x54] */ r_edx = R32((u32)(r_ecx+0x54u));
    /* 00583112: mov dword ptr [edx + 0x178], 8 */ W32((u32)(r_edx+0x178u), 0x8u);
    /* 0058311c: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0058311e: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x583123u); f_00686d82();
    /* 00583123: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00583126: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00583129: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00583130: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00583134: je 0x583145 */ if (fZ) goto L_00583145;
L_00583136:; BB(0x00583136);
    /* 00583136: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00583138: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0058313b: call 0x600a70 */ r_esp -= 4; W32(r_esp, 0x583140u); f_00600a70();
    /* 00583140: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00583143: jmp 0x58314c */ goto L_0058314c;
L_00583145:; BB(0x00583145);
    /* 00583145: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0058314c:; BB(0x0058314c);
    /* 0058314c: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0058314f: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00583152: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00583159: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0058315c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058315d: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00583160: mov ecx, dword ptr [edx + 0x54] */ r_ecx = R32((u32)(r_edx+0x54u));
    /* 00583163: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x583168u); f_005f5d50();
    /* 00583168: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0058316b: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 0058316e: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00583171: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 00583174: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00583176: mov ecx, eax */ r_ecx = r_eax;
    /* 00583178: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0058317b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58317du); call_ind(t); }
L_0058317d:; BB(0x0058317d);
    /* 0058317d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00583180: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00583187: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00583188: mov esp, ebp */ r_esp = r_ebp;
    /* 0058318a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058318b: ret  */ FN_RET(0x00583030); r_esp += 4; return;
}

void f_005835b0(void) /* sub_5835B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005835b0);
    /* 005835b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005835b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005835b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005835b5: push 0x6a6c22 */ { u32 v = 0x6a6c22u; r_esp -= 4; W32(r_esp, v); }
    /* 005835ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005835c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005835c1: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005835c4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005835c9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005835cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005835cc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005835cf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005835d5: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005835d8: cmp dword ptr [0x793580], 0 */ {  u32 a = R32((u32)(0x793580u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005835df: jne 0x583625 */ if (!fZ) goto L_00583625;
L_005835e1:; BB(0x005835e1);
    /* 005835e1: push 0x58 */ { u32 v = 0x58u; r_esp -= 4; W32(r_esp, v); }
    /* 005835e3: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5835e8u); f_00686d82();
    /* 005835e8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005835eb: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005835ee: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005835f5: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005835f9: je 0x583608 */ if (fZ) goto L_00583608;
L_005835fb:; BB(0x005835fb);
    /* 005835fb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005835fe: call 0x582f40 */ r_esp -= 4; W32(r_esp, 0x583603u); f_00582f40();
    /* 00583603: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00583606: jmp 0x58360f */ goto L_0058360f;
L_00583608:; BB(0x00583608);
    /* 00583608: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0058360f:; BB(0x0058360f);
    /* 0058360f: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00583612: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00583615: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0058361c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058361f: mov dword ptr [0x793580], ecx */ W32((u32)(0x793580u), r_ecx);
L_00583625:; BB(0x00583625);
    /* 00583625: mov ecx, dword ptr [0x793580] */ r_ecx = R32((u32)(0x793580u));
    /* 0058362b: call 0x583010 */ r_esp -= 4; W32(r_esp, 0x583630u); f_00583010();
    /* 00583630: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00583633: cmp dword ptr [edx + 0x84], 0 */ {  u32 a = R32((u32)(r_edx+0x84u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058363a: jne 0x583686 */ if (!fZ) goto L_00583686;
L_0058363c:; BB(0x0058363c);
    /* 0058363c: push 0x20c */ { u32 v = 0x20cu; r_esp -= 4; W32(r_esp, v); }
    /* 00583641: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x583646u); f_00686d82();
    /* 00583646: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00583649: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0058364c: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00583653: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00583657: je 0x583666 */ if (fZ) goto L_00583666;
L_00583659:; BB(0x00583659);
    /* 00583659: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0058365c: call 0x57d600 */ r_esp -= 4; W32(r_esp, 0x583661u); f_0057d600();
    /* 00583661: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00583664: jmp 0x58366d */ goto L_0058366d;
L_00583666:; BB(0x00583666);
    /* 00583666: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0058366d:; BB(0x0058366d);
    /* 0058366d: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00583670: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00583673: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0058367a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0058367d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00583680: mov dword ptr [ecx + 0x84], edx */ W32((u32)(r_ecx+0x84u), r_edx);
L_00583686:; BB(0x00583686);
    /* 00583686: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00583689: mov ecx, dword ptr [eax + 0x84] */ r_ecx = R32((u32)(r_eax+0x84u));
    /* 0058368f: call 0x57e3d0 */ r_esp -= 4; W32(r_esp, 0x583694u); f_0057e3d0();
    /* 00583694: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00583697: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0058369e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0058369f: mov esp, ebp */ r_esp = r_ebp;
    /* 005836a1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005836a2: ret  */ FN_RET(0x005835b0); r_esp += 4; return;
}

void f_005837d0(void) /* sub_5837D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005837d0);
    /* 005837d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005837d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005837d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005837d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005837d7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005837da: mov byte ptr [eax + 0x88], 1 */ W8((u32)(r_eax+0x88u), 0x1u);
    /* 005837e1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005837e4: mov byte ptr [ecx + 0x89], 1 */ W8((u32)(r_ecx+0x89u), 0x1u);
    /* 005837eb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005837ee: call 0x583af0 */ r_esp -= 4; W32(r_esp, 0x5837f3u); f_00583af0();
    /* 005837f3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005837f6: mov ecx, dword ptr [edx + 0x84] */ r_ecx = R32((u32)(r_edx+0x84u));
    /* 005837fc: call 0x57e760 */ r_esp -= 4; W32(r_esp, 0x583801u); f_0057e760();
    /* 00583801: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00583806: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00583808: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0058380e: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 00583811: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x583813u); call_ind(t); }
    /* 00583813: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00583816: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00583818: je 0x583822 */ if (fZ) goto L_00583822;
L_0058381a:; BB(0x0058381a);
    /* 0058381a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058381d: call 0x583a50 */ r_esp -= 4; W32(r_esp, 0x583822u); f_00583a50();
L_00583822:; BB(0x00583822);
    /* 00583822: mov esp, ebp */ r_esp = r_ebp;
    /* 00583824: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00583825: ret  */ FN_RET(0x005837d0); r_esp += 4; return;
}

void f_00583830(void) /* sub_583830 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00583830);
    /* 00583830: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00583831: mov ebp, esp */ r_ebp = r_esp;
    /* 00583833: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00583836: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00583839: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0058383c: call 0x583aa0 */ r_esp -= 4; W32(r_esp, 0x583841u); f_00583aa0();
    /* 00583841: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00583844: mov byte ptr [eax + 0x89], 0 */ W8((u32)(r_eax+0x89u), 0x0u);
    /* 0058384b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0058384e: mov byte ptr [ecx + 0x88], 0 */ W8((u32)(r_ecx+0x88u), 0x0u);
    /* 00583855: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00583858: call 0x583ae0 */ r_esp -= 4; W32(r_esp, 0x58385du); f_00583ae0();
    /* 0058385d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00583864: jmp 0x58386f */ goto L_0058386f;
L_00583866:; BB(0x00583866);
    /* 00583866: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00583869: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0058386c: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0058386f:; BB(0x0058386f);
    /* 0058386f: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00583874: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00583876: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0058387c: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 00583882: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x583884u); call_ind(t); }
    /* 00583884: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00583887: jge 0x5838ea */ if ((fS==fO)) goto L_005838ea;
L_00583889:; BB(0x00583889);
    /* 00583889: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058388c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058388d: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x583892u); f_005dcb00();
    /* 00583892: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00583895: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00583898: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058389b: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5838a0u); f_0063aac0();
    /* 005838a0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005838a2: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005838a5: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005838a9: je 0x5838c7 */ if (fZ) goto L_005838c7;
L_005838ab:; BB(0x005838ab);
    /* 005838ab: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005838ae: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5838b3u); f_0063aac0();
    /* 005838b3: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005838b5: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005838b8: cmp dword ptr [ebp - 0xc], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005838bc: je 0x5838c7 */ if (fZ) goto L_005838c7;
L_005838be:; BB(0x005838be);
    /* 005838be: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 005838c5: jmp 0x5838ce */ goto L_005838ce;
L_005838c7:; BB(0x005838c7);
    /* 005838c7: mov dword ptr [ebp - 0x18], 1 */ W32((u32)(r_ebp+0xffffffe8u), 0x1u);
L_005838ce:; BB(0x005838ce);
    /* 005838ce: movzx ecx, byte ptr [ebp - 0x18] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffe8u));
    /* 005838d2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005838d4: je 0x5838e5 */ if (fZ) goto L_005838e5;
L_005838d6:; BB(0x005838d6);
    /* 005838d6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005838d9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005838da: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005838e0: call 0x5e1410 */ r_esp -= 4; W32(r_esp, 0x5838e5u); f_005e1410();
L_005838e5:; BB(0x005838e5);
    /* 005838e5: jmp 0x583866 */ goto L_00583866;
L_005838ea:; BB(0x005838ea);
    /* 005838ea: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005838ed: call 0x583900 */ r_esp -= 4; W32(r_esp, 0x5838f2u); f_00583900();
    /* 005838f2: mov esp, ebp */ r_esp = r_ebp;
    /* 005838f4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005838f5: ret  */ FN_RET(0x00583830); r_esp += 4; return;
}

void f_00583900(void) /* sub_583900 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00583900);
    /* 00583900: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00583901: mov ebp, esp */ r_ebp = r_esp;
    /* 00583903: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00583904: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00583905: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00583908: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0058390e: call 0x5f3e50 */ r_esp -= 4; W32(r_esp, 0x583913u); f_005f3e50();
    /* 00583913: mov esi, eax */ r_esi = r_eax;
    /* 00583915: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0058391b: call 0x5e2f60 */ r_esp -= 4; W32(r_esp, 0x583920u); f_005e2f60();
    /* 00583920: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 00583923: imul eax, eax, 0xe10 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xe10u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00583929: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0058392b: mov dword ptr [0x75d7ac], esi */ W32((u32)(0x75d7acu), r_esi);
    /* 00583931: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00583932: mov esp, ebp */ r_esp = r_ebp;
    /* 00583934: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00583935: ret  */ FN_RET(0x00583900); r_esp += 4; return;
}

void f_00583940(void) /* sub_583940 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00583940);
    /* 00583940: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00583941: mov ebp, esp */ r_ebp = r_esp;
    /* 00583943: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00583944: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00583947: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058394a: movzx ecx, byte ptr [eax + 0x89] */ r_ecx = (u32)R8((u32)(r_eax+0x89u));
    /* 00583951: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00583953: je 0x58398c */ if (fZ) goto L_0058398c;
L_00583955:; BB(0x00583955);
    /* 00583955: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00583958: mov ecx, dword ptr [edx + 0x84] */ r_ecx = R32((u32)(r_edx+0x84u));
    /* 0058395e: call 0x57e8b0 */ r_esp -= 4; W32(r_esp, 0x583963u); f_0057e8b0();
    /* 00583963: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00583966: call 0x583900 */ r_esp -= 4; W32(r_esp, 0x58396bu); f_00583900();
    /* 0058396b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058396e: mov ecx, dword ptr [eax + 0x84] */ r_ecx = R32((u32)(r_eax+0x84u));
    /* 00583974: call 0x57e3d0 */ r_esp -= 4; W32(r_esp, 0x583979u); f_0057e3d0();
    /* 00583979: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0058397f: call 0x5e1070 */ r_esp -= 4; W32(r_esp, 0x583984u); f_005e1070();
    /* 00583984: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00583987: call 0x583830 */ r_esp -= 4; W32(r_esp, 0x58398cu); f_00583830();
L_0058398c:; BB(0x0058398c);
    /* 0058398c: mov esp, ebp */ r_esp = r_ebp;
    /* 0058398e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058398f: ret  */ FN_RET(0x00583940); r_esp += 4; return;
}

void f_00583a20(void) /* sub_583A20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00583a20);
    /* 00583a20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00583a21: mov ebp, esp */ r_ebp = r_esp;
    /* 00583a23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00583a24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00583a27: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00583a2a: cmp dword ptr [eax + 0x84], 0 */ {  u32 a = R32((u32)(r_eax+0x84u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00583a31: je 0x583a41 */ if (fZ) goto L_00583a41;
L_00583a33:; BB(0x00583a33);
    /* 00583a33: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00583a36: mov ecx, dword ptr [ecx + 0x84] */ r_ecx = R32((u32)(r_ecx+0x84u));
    /* 00583a3c: call 0x57e9b0 */ r_esp -= 4; W32(r_esp, 0x583a41u); f_0057e9b0();
L_00583a41:; BB(0x00583a41);
    /* 00583a41: mov esp, ebp */ r_esp = r_ebp;
    /* 00583a43: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00583a44: ret  */ FN_RET(0x00583a20); r_esp += 4; return;
}

void f_00583a50(void) /* sub_583A50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00583a50);
    /* 00583a50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00583a51: mov ebp, esp */ r_ebp = r_esp;
    /* 00583a53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00583a54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00583a57: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00583a5a: add eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00583a5f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00583a60: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00583a61: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 00583a67: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00583a6a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00583a6b: fld1  */ FPUSH(1.0);
    /* 00583a6d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00583a70: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00583a72: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00583a74: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00583a76: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00583a78: push 0x18a99 */ { u32 v = 0x18a99u; r_esp -= 4; W32(r_esp, v); }
    /* 00583a7d: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00583a83: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00583a85: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00583a8b: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 00583a91: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x583a93u); call_ind(t); }
    /* 00583a93: mov esp, ebp */ r_esp = r_ebp;
    /* 00583a95: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00583a96: ret  */ FN_RET(0x00583a50); r_esp += 4; return;
}

void f_00583aa0(void) /* sub_583AA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00583aa0);
    /* 00583aa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00583aa1: mov ebp, esp */ r_ebp = r_esp;
    /* 00583aa3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00583aa4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00583aa7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00583aa9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00583aac: mov ecx, dword ptr [eax + 0x80] */ r_ecx = R32((u32)(r_eax+0x80u));
    /* 00583ab2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00583ab3: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 00583ab9: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00583abc: call 0x609870 */ r_esp -= 4; W32(r_esp, 0x583ac1u); f_00609870();
    /* 00583ac1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00583ac4: mov dword ptr [eax + 0x80], 0 */ W32((u32)(r_eax+0x80u), 0x0u);
    /* 00583ace: mov esp, ebp */ r_esp = r_ebp;
    /* 00583ad0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00583ad1: ret  */ FN_RET(0x00583aa0); r_esp += 4; return;
}

