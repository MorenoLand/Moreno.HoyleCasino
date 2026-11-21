#include "protos.h"

void f_00428fe0(void) /* CrapsStickMan::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00428fe0);
    /* 00428fe0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00428fe1: mov ebp, esp */ r_ebp = r_esp;
    /* 00428fe3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00428fe5: push 0x69e4aa */ { u32 v = 0x69e4aau; r_esp -= 4; W32(r_esp, v); }
    /* 00428fea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00428ff0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00428ff1: sub esp, 0xa8 */ {  u32 a = r_esp; u32 b = 0xa8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00428ff7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00428ff8: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00428ffd: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00428fff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00429000: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00429003: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00429009: mov dword ptr [ebp - 0x84], ecx */ W32((u32)(r_ebp+0xffffff7cu), r_ecx);
    /* 0042900f: mov dword ptr [ebp - 0x20], 0xfc5 */ W32((u32)(r_ebp+0xffffffe0u), 0xfc5u);
    /* 00429016: mov dword ptr [ebp - 0x1c], 0xfc7 */ W32((u32)(r_ebp+0xffffffe4u), 0xfc7u);
    /* 0042901d: mov dword ptr [ebp - 0x18], 0xfad */ W32((u32)(r_ebp+0xffffffe8u), 0xfadu);
    /* 00429024: mov dword ptr [ebp - 0x14], 0xfae */ W32((u32)(r_ebp+0xffffffecu), 0xfaeu);
    /* 0042902b: push 0x6b6b0c */ { u32 v = 0x6b6b0cu; r_esp -= 4; W32(r_esp, v); }
    /* 00429030: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x429035u); f_00630f40();
    /* 00429035: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00429038: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00429039: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0042903f: call 0x5f38b0 */ r_esp -= 4; W32(r_esp, 0x429044u); f_005f38b0();
    /* 00429044: push 0xfa5 */ { u32 v = 0xfa5u; r_esp -= 4; W32(r_esp, v); }
    /* 00429049: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0042904f: call 0x5f1ad0 */ r_esp -= 4; W32(r_esp, 0x429054u); f_005f1ad0();
    /* 00429054: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0042905b: jmp 0x429066 */ goto L_00429066;
L_0042905d:; BB(0x0042905d);
    /* 0042905d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00429060: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00429063: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_00429066:; BB(0x00429066);
    /* 00429066: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042906a: jge 0x4290f2 */ if ((fS==fO)) goto L_004290f2;
L_00429070:; BB(0x00429070);
    /* 00429070: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00429072: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x429077u); f_00686d82();
    /* 00429077: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042907a: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0042907d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00429084: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00429088: je 0x42909a */ if (fZ) goto L_0042909a;
L_0042908a:; BB(0x0042908a);
    /* 0042908a: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0042908d: call 0x42be40 */ r_esp -= 4; W32(r_esp, 0x429092u); f_0042be40();
    /* 00429092: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 00429098: jmp 0x4290a4 */ goto L_004290a4;
L_0042909a:; BB(0x0042909a);
    /* 0042909a: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
L_004290a4:; BB(0x004290a4);
    /* 004290a4: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 004290aa: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 004290ad: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004290b4: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004290b7: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 004290bd: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004290c0: mov dword ptr [eax + edx*4 + 4], ecx */ W32((u32)(r_eax+r_edx*4+0x4u), r_ecx);
    /* 004290c4: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004290c7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004290c8: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004290cb: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 004290d1: mov ecx, dword ptr [ecx + eax*4 + 4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 004290d5: call 0x42be80 */ r_esp -= 4; W32(r_esp, 0x4290dau); f_0042be80();
    /* 004290da: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004290dd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004290de: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4290e3u); f_005dcb00();
    /* 004290e3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004290e6: mov ecx, eax */ r_ecx = r_eax;
    /* 004290e8: call 0x5d66b0 */ r_esp -= 4; W32(r_esp, 0x4290edu); f_005d66b0();
    /* 004290ed: jmp 0x42905d */ goto L_0042905d;
L_004290f2:; BB(0x004290f2);
    /* 004290f2: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 004290f9: jmp 0x429104 */ goto L_00429104;
L_004290fb:; BB(0x004290fb);
    /* 004290fb: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004290fe: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00429101: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_00429104:; BB(0x00429104);
    /* 00429104: cmp dword ptr [ebp - 0x10], 0x4c */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00429108: jge 0x429404 */ if ((fS==fO)) goto L_00429404;
L_0042910e:; BB(0x0042910e);
    /* 0042910e: push 0xb10 */ { u32 v = 0xb10u; r_esp -= 4; W32(r_esp, v); }
    /* 00429113: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x429118u); f_00686d82();
    /* 00429118: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042911b: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0042911e: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00429125: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00429129: je 0x42913b */ if (fZ) goto L_0042913b;
L_0042912b:; BB(0x0042912b);
    /* 0042912b: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0042912e: call 0x42bf50 */ r_esp -= 4; W32(r_esp, 0x429133u); f_0042bf50();
    /* 00429133: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 00429139: jmp 0x429145 */ goto L_00429145;
L_0042913b:; BB(0x0042913b);
    /* 0042913b: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
L_00429145:; BB(0x00429145);
    /* 00429145: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 0042914b: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0042914e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00429155: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00429158: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 0042915e: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00429161: mov dword ptr [eax + edx*4 + 0x14], ecx */ W32((u32)(r_eax+r_edx*4+0x14u), r_ecx);
    /* 00429165: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00429168: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 0042916e: mov ecx, dword ptr [eax + edx*4 + 0x14] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x14u));
    /* 00429172: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00429175: mov dword ptr [ecx + 0xb0c], edx */ W32((u32)(r_ecx+0xb0cu), r_edx);
    /* 0042917b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0042917d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0042917f: push -0x11 */ { u32 v = 0xffffffefu; r_esp -= 4; W32(r_esp, v); }
    /* 00429181: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00429183: push 0xfab */ { u32 v = 0xfabu; r_esp -= 4; W32(r_esp, v); }
    /* 00429188: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042918b: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00429191: mov ecx, dword ptr [ecx + eax*4 + 0x14] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x14u));
    /* 00429195: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x42919au); f_005eae80();
    /* 0042919a: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042919d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042919e: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 004291a4: call 0x42a030 */ r_esp -= 4; W32(r_esp, 0x4291a9u); f_0042a030();
    /* 004291a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004291aa: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004291ad: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 004291b3: mov edx, dword ptr [ecx + eax*4 + 0x14] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x14u));
    /* 004291b7: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004291ba: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 004291c0: mov ecx, dword ptr [ecx + eax*4 + 0x14] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x14u));
    /* 004291c4: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004291c6: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 004291cc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4291ceu); call_ind(t); }
    /* 004291ce: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004291d0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004291d3: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 004291d9: mov ecx, dword ptr [edx + ecx*4 + 0x14] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x14u));
    /* 004291dd: call 0x5eb700 */ r_esp -= 4; W32(r_esp, 0x4291e2u); f_005eb700();
    /* 004291e2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004291e4: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004291e7: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 004291ed: mov ecx, dword ptr [ecx + eax*4 + 0x14] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x14u));
    /* 004291f1: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x4291f6u); f_005eb5d0();
    /* 004291f6: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004291f9: mov eax, dword ptr [0x7906d4] */ r_eax = R32((u32)(0x7906d4u));
    /* 004291fe: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 00429202: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00429203: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00429206: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 0042920c: mov ecx, dword ptr [eax + edx*4 + 0x14] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x14u));
    /* 00429210: call 0x5cc2c0 */ r_esp -= 4; W32(r_esp, 0x429215u); f_005cc2c0();
    /* 00429215: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00429218: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0042921e: mov eax, dword ptr [edx + ecx*4 + 0x14] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x14u));
    /* 00429222: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00429225: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0042922b: mov ecx, dword ptr [edx + ecx*4 + 0x14] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x14u));
    /* 0042922f: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00429231: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 00429234: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x429236u); call_ind(t); }
    /* 00429236: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 0042923b: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x429240u); f_00686d82();
    /* 00429240: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00429243: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00429246: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0042924d: cmp dword ptr [ebp - 0x38], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00429251: je 0x429263 */ if (fZ) goto L_00429263;
L_00429253:; BB(0x00429253);
    /* 00429253: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00429256: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x42925bu); f_005f5bf0();
    /* 0042925b: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 00429261: jmp 0x42926d */ goto L_0042926d;
L_00429263:; BB(0x00429263);
    /* 00429263: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
L_0042926d:; BB(0x0042926d);
    /* 0042926d: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 00429273: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00429276: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0042927d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00429280: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00429286: mov eax, dword ptr [edx + ecx*4 + 0x14] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x14u));
    /* 0042928a: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0042928d: mov dword ptr [eax + 0xae4], ecx */ W32((u32)(r_eax+0xae4u), r_ecx);
    /* 00429293: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00429295: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00429297: push -0x11 */ { u32 v = 0xffffffefu; r_esp -= 4; W32(r_esp, v); }
    /* 00429299: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042929b: push 0xfba */ { u32 v = 0xfbau; r_esp -= 4; W32(r_esp, v); }
    /* 004292a0: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004292a3: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 004292a9: mov ecx, dword ptr [eax + edx*4 + 0x14] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x14u));
    /* 004292ad: mov ecx, dword ptr [ecx + 0xae4] */ r_ecx = R32((u32)(r_ecx+0xae4u));
    /* 004292b3: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x4292b8u); f_005eae80();
    /* 004292b8: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004292bb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004292bc: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 004292c2: call 0x42a030 */ r_esp -= 4; W32(r_esp, 0x4292c7u); f_0042a030();
    /* 004292c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004292c8: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004292cb: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 004292d1: mov edx, dword ptr [ecx + eax*4 + 0x14] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x14u));
    /* 004292d5: mov eax, dword ptr [edx + 0xae4] */ r_eax = R32((u32)(r_edx+0xae4u));
    /* 004292db: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004292de: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 004292e4: mov ecx, dword ptr [edx + ecx*4 + 0x14] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x14u));
    /* 004292e8: mov ecx, dword ptr [ecx + 0xae4] */ r_ecx = R32((u32)(r_ecx+0xae4u));
    /* 004292ee: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004292f0: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 004292f6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4292f8u); call_ind(t); }
    /* 004292f8: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004292fc: jle 0x42933f */ if ((fZ||fS!=fO)) goto L_0042933f;
L_004292fe:; BB(0x004292fe);
    /* 004292fe: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00429301: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00429302: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00429308: call 0x42a030 */ r_esp -= 4; W32(r_esp, 0x42930du); f_0042a030();
    /* 0042930d: mov esi, eax */ r_esi = r_eax;
    /* 0042930f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00429312: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00429315: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00429316: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0042931c: call 0x42a030 */ r_esp -= 4; W32(r_esp, 0x429321u); f_0042a030();
    /* 00429321: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00429323: jne 0x42933f */ if (!fZ) goto L_0042933f;
L_00429325:; BB(0x00429325);
    /* 00429325: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00429327: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042932a: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00429330: mov edx, dword ptr [ecx + eax*4 + 0x14] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x14u));
    /* 00429334: mov ecx, dword ptr [edx + 0xae4] */ r_ecx = R32((u32)(r_edx+0xae4u));
    /* 0042933a: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x42933fu); f_005eaf00();
L_0042933f:; BB(0x0042933f);
    /* 0042933f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00429342: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00429348: mov edx, dword ptr [ecx + eax*4 + 0x14] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x14u));
    /* 0042934c: mov ecx, dword ptr [edx + 0x178] */ r_ecx = R32((u32)(r_edx+0x178u));
    /* 00429352: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x429357u); f_005f5400();
    /* 00429357: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042935a: je 0x42937d */ if (fZ) goto L_0042937d;
L_0042935c:; BB(0x0042935c);
    /* 0042935c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042935f: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00429365: mov edx, dword ptr [ecx + eax*4 + 0x14] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x14u));
    /* 00429369: mov ecx, dword ptr [edx + 0x178] */ r_ecx = R32((u32)(r_edx+0x178u));
    /* 0042936f: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x429374u); f_005f5400();
    /* 00429374: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00429377: jne 0x4293ff */ if (!fZ) goto L_004293ff;
L_0042937d:; BB(0x0042937d);
    /* 0042937d: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 00429382: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x429387u); f_00686d82();
    /* 00429387: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042938a: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0042938d: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00429394: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00429398: je 0x4293aa */ if (fZ) goto L_004293aa;
L_0042939a:; BB(0x0042939a);
    /* 0042939a: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0042939d: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x4293a2u); f_005f5bf0();
    /* 004293a2: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 004293a8: jmp 0x4293b4 */ goto L_004293b4;
L_004293aa:; BB(0x004293aa);
    /* 004293aa: mov dword ptr [ebp - 0x94], 0 */ W32((u32)(r_ebp+0xffffff6cu), 0x0u);
L_004293b4:; BB(0x004293b4);
    /* 004293b4: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 004293ba: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 004293bd: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004293c4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004293c7: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 004293cd: mov eax, dword ptr [edx + ecx*4 + 0x14] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x14u));
    /* 004293d1: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004293d4: mov dword ptr [eax + 0xae8], ecx */ W32((u32)(r_eax+0xae8u), r_ecx);
    /* 004293da: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004293dc: push 0x63 */ { u32 v = 0x63u; r_esp -= 4; W32(r_esp, v); }
    /* 004293de: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004293e0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004293e2: push 0xfcd */ { u32 v = 0xfcdu; r_esp -= 4; W32(r_esp, v); }
    /* 004293e7: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004293ea: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 004293f0: mov ecx, dword ptr [eax + edx*4 + 0x14] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x14u));
    /* 004293f4: mov ecx, dword ptr [ecx + 0xae8] */ r_ecx = R32((u32)(r_ecx+0xae8u));
    /* 004293fa: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x4293ffu); f_005eae80();
L_004293ff:; BB(0x004293ff);
    /* 004293ff: jmp 0x4290fb */ goto L_004290fb;
L_00429404:; BB(0x00429404);
    /* 00429404: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 00429409: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x42940eu); f_00686d82();
    /* 0042940e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00429411: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 00429414: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 0042941b: cmp dword ptr [ebp - 0x48], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042941f: je 0x42943d */ if (fZ) goto L_0042943d;
L_00429421:; BB(0x00429421);
    /* 00429421: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00429424: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x429429u); f_005eaaf0();
    /* 00429429: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0042942c: mov dword ptr [edx], 0x6b6a54 */ W32((u32)(r_edx), 0x6b6a54u);
    /* 00429432: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00429435: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 0042943b: jmp 0x429447 */ goto L_00429447;
L_0042943d:; BB(0x0042943d);
    /* 0042943d: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
L_00429447:; BB(0x00429447);
    /* 00429447: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 0042944d: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 00429450: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00429457: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0042945d: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00429460: mov dword ptr [edx + 0x144], eax */ W32((u32)(r_edx+0x144u), r_eax);
    /* 00429466: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00429468: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0042946a: push -0x11 */ { u32 v = 0xffffffefu; r_esp -= 4; W32(r_esp, v); }
    /* 0042946c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042946e: push 0xfb9 */ { u32 v = 0xfb9u; r_esp -= 4; W32(r_esp, v); }
    /* 00429473: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00429479: mov ecx, dword ptr [ecx + 0x144] */ r_ecx = R32((u32)(r_ecx+0x144u));
    /* 0042947f: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x429484u); f_005eae80();
    /* 00429484: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0042948a: mov eax, dword ptr [edx + 0x144] */ r_eax = R32((u32)(r_edx+0x144u));
    /* 00429490: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00429496: mov ecx, dword ptr [ecx + 0x144] */ r_ecx = R32((u32)(r_ecx+0x144u));
    /* 0042949c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042949e: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 004294a1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4294a3u); call_ind(t); }
    /* 004294a3: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 004294aa: jmp 0x4294b5 */ goto L_004294b5;
L_004294ac:; BB(0x004294ac);
    /* 004294ac: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004294af: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004294b2: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_004294b5:; BB(0x004294b5);
    /* 004294b5: cmp dword ptr [ebp - 0x10], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004294b9: jge 0x4295df */ if ((fS==fO)) goto L_004295df;
L_004294bf:; BB(0x004294bf);
    /* 004294bf: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 004294c4: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4294c9u); f_00686d82();
    /* 004294c9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004294cc: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 004294cf: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 004294d6: cmp dword ptr [ebp - 0x50], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004294da: je 0x4294ec */ if (fZ) goto L_004294ec;
L_004294dc:; BB(0x004294dc);
    /* 004294dc: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004294df: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x4294e4u); f_005f5bf0();
    /* 004294e4: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
    /* 004294ea: jmp 0x4294f6 */ goto L_004294f6;
L_004294ec:; BB(0x004294ec);
    /* 004294ec: mov dword ptr [ebp - 0x9c], 0 */ W32((u32)(r_ebp+0xffffff64u), 0x0u);
L_004294f6:; BB(0x004294f6);
    /* 004294f6: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 004294fc: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 004294ff: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00429506: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00429509: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0042950f: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00429512: mov dword ptr [ecx + eax*4 + 0x148], edx */ W32((u32)(r_ecx+r_eax*4+0x148u), r_edx);
    /* 00429519: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0042951b: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 0042951d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042951f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00429521: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00429524: mov ecx, dword ptr [ebp + eax*4 - 0x20] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffe0u));
    /* 00429528: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00429529: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042952c: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 00429532: mov ecx, dword ptr [eax + edx*4 + 0x148] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x148u));
    /* 00429539: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x42953eu); f_005eae80();
    /* 0042953e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00429541: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00429547: mov eax, dword ptr [edx + ecx*4 + 0x148] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x148u));
    /* 0042954e: mov dword ptr [eax + 0x178], 3 */ W32((u32)(r_eax+0x178u), 0x3u);
    /* 00429558: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0042955d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x429562u); f_00686d82();
    /* 00429562: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00429565: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 00429568: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 0042956f: cmp dword ptr [ebp - 0x58], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00429573: je 0x429585 */ if (fZ) goto L_00429585;
L_00429575:; BB(0x00429575);
    /* 00429575: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00429578: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x42957du); f_005eaaf0();
    /* 0042957d: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
    /* 00429583: jmp 0x42958f */ goto L_0042958f;
L_00429585:; BB(0x00429585);
    /* 00429585: mov dword ptr [ebp - 0xa0], 0 */ W32((u32)(r_ebp+0xffffff60u), 0x0u);
L_0042958f:; BB(0x0042958f);
    /* 0042958f: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 00429595: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 00429598: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0042959f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004295a2: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 004295a8: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 004295ab: mov dword ptr [eax + edx*4 + 0x150], ecx */ W32((u32)(r_eax+r_edx*4+0x150u), r_ecx);
    /* 004295b2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004295b4: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 004295b6: push 0xfffffe66 */ { u32 v = 0xfffffe66u; r_esp -= 4; W32(r_esp, v); }
    /* 004295bb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004295bd: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004295c0: mov eax, dword ptr [ebp + edx*4 - 0x18] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffe8u));
    /* 004295c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004295c5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004295c8: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 004295ce: mov ecx, dword ptr [edx + ecx*4 + 0x150] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x150u));
    /* 004295d5: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x4295dau); f_005eae80();
    /* 004295da: jmp 0x4294ac */ goto L_004294ac;
L_004295df:; BB(0x004295df);
    /* 004295df: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 004295e4: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4295e9u); f_00686d82();
    /* 004295e9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004295ec: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 004295ef: mov dword ptr [ebp - 4], 7 */ W32((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 004295f6: cmp dword ptr [ebp - 0x60], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004295fa: je 0x42960c */ if (fZ) goto L_0042960c;
L_004295fc:; BB(0x004295fc);
    /* 004295fc: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 004295ff: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x429604u); f_005eaaf0();
    /* 00429604: mov dword ptr [ebp - 0xa4], eax */ W32((u32)(r_ebp+0xffffff5cu), r_eax);
    /* 0042960a: jmp 0x429616 */ goto L_00429616;
L_0042960c:; BB(0x0042960c);
    /* 0042960c: mov dword ptr [ebp - 0xa4], 0 */ W32((u32)(r_ebp+0xffffff5cu), 0x0u);
L_00429616:; BB(0x00429616);
    /* 00429616: mov eax, dword ptr [ebp - 0xa4] */ r_eax = R32((u32)(r_ebp+0xffffff5cu));
    /* 0042961c: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 0042961f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00429626: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0042962c: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0042962f: mov dword ptr [ecx + 0x158], edx */ W32((u32)(r_ecx+0x158u), r_edx);
    /* 00429635: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00429637: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00429639: push 0xfffffe66 */ { u32 v = 0xfffffe66u; r_esp -= 4; W32(r_esp, v); }
    /* 0042963e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00429640: push 0xfac */ { u32 v = 0xfacu; r_esp -= 4; W32(r_esp, v); }
    /* 00429645: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 0042964b: mov ecx, dword ptr [eax + 0x158] */ r_ecx = R32((u32)(r_eax+0x158u));
    /* 00429651: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x429656u); f_005eae80();
    /* 00429656: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0042965b: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x429660u); f_00686d82();
    /* 00429660: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00429663: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 00429666: mov dword ptr [ebp - 4], 8 */ W32((u32)(r_ebp+0xfffffffcu), 0x8u);
    /* 0042966d: cmp dword ptr [ebp - 0x68], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00429671: je 0x429683 */ if (fZ) goto L_00429683;
L_00429673:; BB(0x00429673);
    /* 00429673: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00429676: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x42967bu); f_005eaaf0();
    /* 0042967b: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 00429681: jmp 0x42968d */ goto L_0042968d;
L_00429683:; BB(0x00429683);
    /* 00429683: mov dword ptr [ebp - 0xa8], 0 */ W32((u32)(r_ebp+0xffffff58u), 0x0u);
L_0042968d:; BB(0x0042968d);
    /* 0042968d: mov ecx, dword ptr [ebp - 0xa8] */ r_ecx = R32((u32)(r_ebp+0xffffff58u));
    /* 00429693: mov dword ptr [ebp - 0x64], ecx */ W32((u32)(r_ebp+0xffffff9cu), r_ecx);
    /* 00429696: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0042969d: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 004296a3: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 004296a6: mov dword ptr [edx + 0x15c], eax */ W32((u32)(r_edx+0x15cu), r_eax);
    /* 004296ac: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004296ae: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004296b0: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 004296b2: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 004296b4: push 0xfb2 */ { u32 v = 0xfb2u; r_esp -= 4; W32(r_esp, v); }
    /* 004296b9: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 004296bf: mov ecx, dword ptr [ecx + 0x15c] */ r_ecx = R32((u32)(r_ecx+0x15cu));
    /* 004296c5: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x4296cau); f_005eae80();
    /* 004296ca: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004296cc: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 004296d2: mov eax, dword ptr [edx + 0x15c] */ r_eax = R32((u32)(r_edx+0x15cu));
    /* 004296d8: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 004296de: mov ecx, dword ptr [ecx + 0x15c] */ r_ecx = R32((u32)(r_ecx+0x15cu));
    /* 004296e4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004296e6: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 004296ec: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4296eeu); call_ind(t); }
    /* 004296ee: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 004296f4: mov edx, dword ptr [ecx + 0x15c] */ r_edx = R32((u32)(r_ecx+0x15cu));
    /* 004296fa: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 00429700: mov ecx, dword ptr [eax + 0x15c] */ r_ecx = R32((u32)(r_eax+0x15cu));
    /* 00429706: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00429708: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0042970b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42970du); call_ind(t); }
    /* 0042970d: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 00429712: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x429717u); f_00686d82();
    /* 00429717: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042971a: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 0042971d: mov dword ptr [ebp - 4], 9 */ W32((u32)(r_ebp+0xfffffffcu), 0x9u);
    /* 00429724: cmp dword ptr [ebp - 0x70], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00429728: je 0x42973a */ if (fZ) goto L_0042973a;
L_0042972a:; BB(0x0042972a);
    /* 0042972a: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 0042972d: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x429732u); f_005eaaf0();
    /* 00429732: mov dword ptr [ebp - 0xac], eax */ W32((u32)(r_ebp+0xffffff54u), r_eax);
    /* 00429738: jmp 0x429744 */ goto L_00429744;
L_0042973a:; BB(0x0042973a);
    /* 0042973a: mov dword ptr [ebp - 0xac], 0 */ W32((u32)(r_ebp+0xffffff54u), 0x0u);
L_00429744:; BB(0x00429744);
    /* 00429744: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 0042974a: mov dword ptr [ebp - 0x6c], ecx */ W32((u32)(r_ebp+0xffffff94u), r_ecx);
    /* 0042974d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00429754: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0042975a: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 0042975d: mov dword ptr [edx + 0x160], eax */ W32((u32)(r_edx+0x160u), r_eax);
    /* 00429763: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00429765: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00429767: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00429769: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042976b: push 0xfcb */ { u32 v = 0xfcbu; r_esp -= 4; W32(r_esp, v); }
    /* 00429770: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00429776: mov ecx, dword ptr [ecx + 0x160] */ r_ecx = R32((u32)(r_ecx+0x160u));
    /* 0042977c: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x429781u); f_005eae80();
    /* 00429781: push 0x190 */ { u32 v = 0x190u; r_esp -= 4; W32(r_esp, v); }
    /* 00429786: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x42978bu); f_00686d82();
    /* 0042978b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042978e: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 00429791: mov dword ptr [ebp - 4], 0xa */ W32((u32)(r_ebp+0xfffffffcu), 0xau);
    /* 00429798: cmp dword ptr [ebp - 0x78], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042979c: je 0x4297ae */ if (fZ) goto L_004297ae;
L_0042979e:; BB(0x0042979e);
    /* 0042979e: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 004297a1: call 0x42d300 */ r_esp -= 4; W32(r_esp, 0x4297a6u); f_0042d300();
    /* 004297a6: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 004297ac: jmp 0x4297b8 */ goto L_004297b8;
L_004297ae:; BB(0x004297ae);
    /* 004297ae: mov dword ptr [ebp - 0xb0], 0 */ W32((u32)(r_ebp+0xffffff50u), 0x0u);
L_004297b8:; BB(0x004297b8);
    /* 004297b8: mov edx, dword ptr [ebp - 0xb0] */ r_edx = R32((u32)(r_ebp+0xffffff50u));
    /* 004297be: mov dword ptr [ebp - 0x74], edx */ W32((u32)(r_ebp+0xffffff8cu), r_edx);
    /* 004297c1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004297c8: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 004297ce: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 004297d1: mov dword ptr [eax + 0x164], ecx */ W32((u32)(r_eax+0x164u), r_ecx);
    /* 004297d7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004297d9: push 0x65 */ { u32 v = 0x65u; r_esp -= 4; W32(r_esp, v); }
    /* 004297db: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004297dd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004297df: push 0xfbc */ { u32 v = 0xfbcu; r_esp -= 4; W32(r_esp, v); }
    /* 004297e4: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 004297ea: mov ecx, dword ptr [edx + 0x164] */ r_ecx = R32((u32)(r_edx+0x164u));
    /* 004297f0: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x4297f5u); f_005eae80();
    /* 004297f5: push 0x198 */ { u32 v = 0x198u; r_esp -= 4; W32(r_esp, v); }
    /* 004297fa: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4297ffu); f_00686d82();
    /* 004297ff: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00429802: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 00429805: mov dword ptr [ebp - 4], 0xb */ W32((u32)(r_ebp+0xfffffffcu), 0xbu);
    /* 0042980c: cmp dword ptr [ebp - 0x80], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00429810: je 0x42982e */ if (fZ) goto L_0042982e;
L_00429812:; BB(0x00429812);
    /* 00429812: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 00429815: call 0x5cd6a0 */ r_esp -= 4; W32(r_esp, 0x42981au); f_005cd6a0();
    /* 0042981a: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 0042981d: mov dword ptr [eax], 0x6b698c */ W32((u32)(r_eax), 0x6b698cu);
    /* 00429823: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 00429826: mov dword ptr [ebp - 0xb4], ecx */ W32((u32)(r_ebp+0xffffff4cu), r_ecx);
    /* 0042982c: jmp 0x429838 */ goto L_00429838;
L_0042982e:; BB(0x0042982e);
    /* 0042982e: mov dword ptr [ebp - 0xb4], 0 */ W32((u32)(r_ebp+0xffffff4cu), 0x0u);
L_00429838:; BB(0x00429838);
    /* 00429838: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0042983e: mov dword ptr [ebp - 0x7c], edx */ W32((u32)(r_ebp+0xffffff84u), r_edx);
    /* 00429841: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00429848: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 0042984e: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 00429851: mov dword ptr [eax + 0x168], ecx */ W32((u32)(r_eax+0x168u), r_ecx);
    /* 00429857: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0042985d: mov eax, dword ptr [edx + 0x168] */ r_eax = R32((u32)(r_edx+0x168u));
    /* 00429863: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00429869: mov ecx, dword ptr [ecx + 0x168] */ r_ecx = R32((u32)(r_ecx+0x168u));
    /* 0042986f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00429871: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00429874: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x429876u); call_ind(t); }
    /* 00429876: push 0x30dbd3 */ { u32 v = 0x30dbd3u; r_esp -= 4; W32(r_esp, v); }
    /* 0042987b: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00429881: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x429886u); f_005f2ba0();
    /* 00429886: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00429889: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00429890: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00429891: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00429892: mov esp, ebp */ r_esp = r_ebp;
    /* 00429894: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00429895: ret  */ FN_RET(0x00428fe0); r_esp += 4; return;
}

void f_0042dc60(void) /* CrapsStickMan::vfunc16 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042dc60);
    /* 0042dc60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042dc61: mov ebp, esp */ r_ebp = r_esp;
    /* 0042dc63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042dc64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0042dc67: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042dc6a: call 0x5f5cc0 */ r_esp -= 4; W32(r_esp, 0x42dc6fu); f_005f5cc0();
    /* 0042dc6f: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0042dc71: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042dc74: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042dc76: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042dc79: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0042dc7c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42dc7eu); call_ind(t); }
    /* 0042dc7e: mov esp, ebp */ r_esp = r_ebp;
    /* 0042dc80: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042dc81: ret  */ FN_RET(0x0042dc60); r_esp += 4; return;
}

void f_0042dc90(void) /* CrapsStickMan::vfunc47 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042dc90);
    /* 0042dc90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042dc91: mov ebp, esp */ r_ebp = r_esp;
    /* 0042dc93: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042dc96: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0042dc99: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042dc9c: call 0x5eb220 */ r_esp -= 4; W32(r_esp, 0x42dca1u); f_005eb220();
    /* 0042dca1: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042dca4: jne 0x42dce8 */ if (!fZ) goto L_0042dce8;
L_0042dca6:; BB(0x0042dca6);
    /* 0042dca6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0042dcad: jmp 0x42dcb8 */ goto L_0042dcb8;
L_0042dcaf:; BB(0x0042dcaf);
    /* 0042dcaf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042dcb2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042dcb5: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0042dcb8:; BB(0x0042dcb8);
    /* 0042dcb8: cmp dword ptr [ebp - 4], 0x4c */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042dcbc: jge 0x42dce8 */ if ((fS==fO)) goto L_0042dce8;
L_0042dcbe:; BB(0x0042dcbe);
    /* 0042dcbe: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042dcc1: mov edx, dword ptr [0x7906d4] */ r_edx = R32((u32)(0x7906d4u));
    /* 0042dcc7: mov eax, dword ptr [edx + ecx*4 + 4] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 0042dccb: cmp dword ptr [eax + 0x110], 0 */ {  u32 a = R32((u32)(r_eax+0x110u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042dcd2: jne 0x42dce6 */ if (!fZ) goto L_0042dce6;
L_0042dcd4:; BB(0x0042dcd4);
    /* 0042dcd4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042dcd7: mov edx, dword ptr [0x7906d4] */ r_edx = R32((u32)(0x7906d4u));
    /* 0042dcdd: mov ecx, dword ptr [edx + ecx*4 + 4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 0042dce1: call 0x5cb9b0 */ r_esp -= 4; W32(r_esp, 0x42dce6u); f_005cb9b0();
L_0042dce6:; BB(0x0042dce6);
    /* 0042dce6: jmp 0x42dcaf */ goto L_0042dcaf;
L_0042dce8:; BB(0x0042dce8);
    /* 0042dce8: mov esp, ebp */ r_esp = r_ebp;
    /* 0042dcea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042dceb: ret  */ FN_RET(0x0042dc90); r_esp += 4; return;
}

void f_0042de30(void) /* CrapsStickMan::vfunc48 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042de30);
    /* 0042de30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042de31: mov ebp, esp */ r_ebp = r_esp;
    /* 0042de33: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042de36: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0042de39: fld qword ptr [0x6b3e40] */ FPUSH(R_F64((u32)(0x6b3e40u)));
    /* 0042de3f: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0042de42: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042de45: call 0x5cd8b0 */ r_esp -= 4; W32(r_esp, 0x42de4au); f_005cd8b0();
    /* 0042de4a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0042de4d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042de4f: jne 0x42de58 */ if (!fZ) goto L_0042de58;
L_0042de51:; BB(0x0042de51);
    /* 0042de51: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0042de53: jmp 0x42def4 */ goto L_0042def4;
L_0042de58:; BB(0x0042de58);
    /* 0042de58: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0042de5e: call 0x6377b0 */ r_esp -= 4; W32(r_esp, 0x42de63u); f_006377b0();
    /* 0042de63: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0042de66: fild dword ptr [ebp - 0x20] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffe0u)));
    /* 0042de69: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 0042de6c: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 0042de72: fcomp qword ptr [ebp - 0x10] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xfffffff0u))); FPOP();
    /* 0042de75: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042de77: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 0042de7a: jp 0x42de9e */ if (fP) goto L_0042de9e;
L_0042de7c:; BB(0x0042de7c);
    /* 0042de7c: fld qword ptr [ebp - 0x10] */ FPUSH(R_F64((u32)(r_ebp+0xfffffff0u)));
    /* 0042de7f: fsub qword ptr [0x6b2c38] */ ST(0) = ST(0) - R_F64((u32)(0x6b2c38u));
    /* 0042de85: fdiv qword ptr [0x6b2c38] */ ST(0) = ST(0) / R_F64((u32)(0x6b2c38u));
    /* 0042de8b: fstp qword ptr [ebp - 8] */ W_F64((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 0042de8e: fld1  */ FPUSH(1.0);
    /* 0042de90: fsub qword ptr [ebp - 0x18] */ ST(0) = ST(0) - R_F64((u32)(r_ebp+0xffffffe8u));
    /* 0042de93: fmul qword ptr [ebp - 8] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xfffffff8u));
    /* 0042de96: fadd qword ptr [ebp - 0x18] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xffffffe8u));
    /* 0042de99: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 0042de9c: jmp 0x42debc */ goto L_0042debc;
L_0042de9e:; BB(0x0042de9e);
    /* 0042de9e: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 0042dea4: fsub qword ptr [ebp - 0x10] */ ST(0) = ST(0) - R_F64((u32)(r_ebp+0xfffffff0u));
    /* 0042dea7: fdiv qword ptr [0x6b2c38] */ ST(0) = ST(0) / R_F64((u32)(0x6b2c38u));
    /* 0042dead: fstp qword ptr [ebp - 8] */ W_F64((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 0042deb0: fld qword ptr [ebp - 0x18] */ FPUSH(R_F64((u32)(r_ebp+0xffffffe8u)));
    /* 0042deb3: fmul qword ptr [ebp - 8] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xfffffff8u));
    /* 0042deb6: fsubr qword ptr [ebp - 0x18] */ ST(0) = R_F64((u32)(r_ebp+0xffffffe8u)) - ST(0);
    /* 0042deb9: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
L_0042debc:; BB(0x0042debc);
    /* 0042debc: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 0042dec1: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x42dec6u); f_0062fbf0();
    /* 0042dec6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042dec9: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0042decc: fild dword ptr [ebp - 0x24] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffdcu)));
    /* 0042decf: fld qword ptr [ebp - 0x18] */ FPUSH(R_F64((u32)(r_ebp+0xffffffe8u)));
    /* 0042ded2: fmul qword ptr [0x6b6e18] */ ST(0) = ST(0) * R_F64((u32)(0x6b6e18u));
    /* 0042ded8: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0042deda: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042dedc: test ah, 1 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0042dedf: jne 0x42deea */ if (!fZ) goto L_0042deea;
L_0042dee1:; BB(0x0042dee1);
    /* 0042dee1: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0042dee8: jmp 0x42def1 */ goto L_0042def1;
L_0042deea:; BB(0x0042deea);
    /* 0042deea: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0042def1:; BB(0x0042def1);
    /* 0042def1: mov al, byte ptr [ebp - 0x28] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffd8u))) & 0xffu);
L_0042def4:; BB(0x0042def4);
    /* 0042def4: mov esp, ebp */ r_esp = r_ebp;
    /* 0042def6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042def7: ret  */ FN_RET(0x0042de30); r_esp += 4; return;
}

