#include "protos.h"

void f_005cb040(void) /* ClearCurrentBetButton::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cb040);
    /* 005cb040: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cb041: mov ebp, esp */ r_ebp = r_esp;
    /* 005cb043: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cb045: push 0x6a8a69 */ { u32 v = 0x6a8a69u; r_esp -= 4; W32(r_esp, v); }
    /* 005cb04a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005cb050: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cb051: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cb052: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005cb057: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005cb059: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cb05a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005cb05d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005cb063: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005cb066: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cb069: call 0x601a80 */ r_esp -= 4; W32(r_esp, 0x5cb06eu); f_00601a80();
    /* 005cb06e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cb075: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cb078: mov dword ptr [eax], 0x6d2574 */ W32((u32)(r_eax), 0x6d2574u);
    /* 005cb07e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cb081: mov dword ptr [ecx + 0x1dc], 0 */ W32((u32)(r_ecx+0x1dcu), 0x0u);
    /* 005cb08b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cb08d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cb090: call 0x5eb700 */ r_esp -= 4; W32(r_esp, 0x5cb095u); f_005eb700();
    /* 005cb095: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005cb09c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cb09f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cb0a2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005cb0a9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005cb0aa: mov esp, ebp */ r_esp = r_ebp;
    /* 005cb0ac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cb0ad: ret  */ FN_RET(0x005cb040); r_esp += 4; return;
}

void f_005cb0b0(void) /* ClearCurrentBetButton::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cb0b0);
    /* 005cb0b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cb0b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005cb0b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cb0b5: push 0x6a8a8c */ { u32 v = 0x6a8a8cu; r_esp -= 4; W32(r_esp, v); }
    /* 005cb0ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005cb0c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cb0c1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cb0c4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005cb0c9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005cb0cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cb0cc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005cb0cf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005cb0d5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005cb0d8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cb0db: mov dword ptr [eax], 0x6d2574 */ W32((u32)(r_eax), 0x6d2574u);
    /* 005cb0e1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cb0e8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cb0eb: mov edx, dword ptr [ecx + 0x1dc] */ r_edx = R32((u32)(r_ecx+0x1dcu));
    /* 005cb0f1: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005cb0f4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005cb0f7: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005cb0fa: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cb0fe: je 0x5cb113 */ if (fZ) goto L_005cb113;
L_005cb100:; BB(0x005cb100);
    /* 005cb100: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cb102: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cb105: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005cb107: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cb10a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005cb10c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5cb10eu); call_ind(t); }
    /* 005cb10e: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005cb111: jmp 0x5cb11a */ goto L_005cb11a;
L_005cb113:; BB(0x005cb113);
    /* 005cb113: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005cb11a:; BB(0x005cb11a);
    /* 005cb11a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005cb121: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cb124: call 0x601ba0 */ r_esp -= 4; W32(r_esp, 0x5cb129u); f_00601ba0();
    /* 005cb129: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cb12c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005cb133: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005cb134: mov esp, ebp */ r_esp = r_ebp;
    /* 005cb136: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cb137: ret  */ FN_RET(0x005cb0b0); r_esp += 4; return;
}

void f_005cb140(void) /* ClearCurrentBetButton::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cb140);
    /* 005cb140: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cb141: mov ebp, esp */ r_ebp = r_esp;
    /* 005cb143: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cb145: push 0x6a8ab2 */ { u32 v = 0x6a8ab2u; r_esp -= 4; W32(r_esp, v); }
    /* 005cb14a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005cb150: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cb151: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cb154: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005cb159: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005cb15b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cb15c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005cb15f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005cb165: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005cb168: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005cb16b: movzx ecx, byte ptr [eax + 4] */ r_ecx = (u32)R8((u32)(r_eax+0x4u));
    /* 005cb16f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cb171: je 0x5cb178 */ if (fZ) goto L_005cb178;
L_005cb173:; BB(0x005cb173);
    /* 005cb173: jmp 0x5cb2ea */ goto L_005cb2ea;
L_005cb178:; BB(0x005cb178);
    /* 005cb178: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005cb17b: cmp dword ptr [edx + 0x18], 3 */ {  u32 a = R32((u32)(r_edx+0x18u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cb17f: jne 0x5cb2de */ if (!fZ) goto L_005cb2de;
L_005cb185:; BB(0x005cb185);
    /* 005cb185: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005cb188: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cb189: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cb18c: call 0x5eb6d0 */ r_esp -= 4; W32(r_esp, 0x5cb191u); f_005eb6d0();
    /* 005cb191: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005cb194: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cb196: je 0x5cb27a */ if (fZ) goto L_005cb27a;
L_005cb19c:; BB(0x005cb19c);
    /* 005cb19c: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cb19f: cmp dword ptr [edx + 0x1dc], 0 */ {  u32 a = R32((u32)(r_edx+0x1dcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cb1a6: jne 0x5cb278 */ if (!fZ) goto L_005cb278;
L_005cb1ac:; BB(0x005cb1ac);
    /* 005cb1ac: push 0x1d4 */ { u32 v = 0x1d4u; r_esp -= 4; W32(r_esp, v); }
    /* 005cb1b1: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5cb1b6u); f_00686d82();
    /* 005cb1b6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cb1b9: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005cb1bc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cb1c3: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cb1c7: je 0x5cb1d6 */ if (fZ) goto L_005cb1d6;
L_005cb1c9:; BB(0x005cb1c9);
    /* 005cb1c9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cb1cc: call 0x5cd360 */ r_esp -= 4; W32(r_esp, 0x5cb1d1u); f_005cd360();
    /* 005cb1d1: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005cb1d4: jmp 0x5cb1dd */ goto L_005cb1dd;
L_005cb1d6:; BB(0x005cb1d6);
    /* 005cb1d6: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005cb1dd:; BB(0x005cb1dd);
    /* 005cb1dd: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005cb1e0: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005cb1e3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005cb1ea: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cb1ed: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cb1f0: mov dword ptr [ecx + 0x1dc], edx */ W32((u32)(r_ecx+0x1dcu), r_edx);
    /* 005cb1f6: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cb1f8: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 005cb1fa: push 0x7d0 */ { u32 v = 0x7d0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cb1ff: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cb202: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cb204: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cb207: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 005cb20a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5cb20cu); call_ind(t); }
    /* 005cb20c: sub eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005cb20f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cb210: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cb213: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005cb215: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cb218: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005cb21b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5cb21du); call_ind(t); }
    /* 005cb21d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cb21e: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005cb220: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 005cb222: push 0x67 */ { u32 v = 0x67u; r_esp -= 4; W32(r_esp, v); }
    /* 005cb224: push 0x6d2664 */ { u32 v = 0x6d2664u; r_esp -= 4; W32(r_esp, v); }
    /* 005cb229: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5cb22eu); f_00630f40();
    /* 005cb22e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cb231: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cb232: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cb235: mov ecx, dword ptr [ecx + 0x1dc] */ r_ecx = R32((u32)(r_ecx+0x1dcu));
    /* 005cb23b: call 0x5ec8f0 */ r_esp -= 4; W32(r_esp, 0x5cb240u); f_005ec8f0();
    /* 005cb240: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 005cb245: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cb24a: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cb24f: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cb252: mov ecx, dword ptr [edx + 0x1dc] */ r_ecx = R32((u32)(r_edx+0x1dcu));
    /* 005cb258: call 0x5ee8c0 */ r_esp -= 4; W32(r_esp, 0x5cb25du); f_005ee8c0();
    /* 005cb25d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cb260: mov ecx, dword ptr [eax + 0x1dc] */ r_ecx = R32((u32)(r_eax+0x1dcu));
    /* 005cb266: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cb269: mov eax, dword ptr [edx + 0x1dc] */ r_eax = R32((u32)(r_edx+0x1dcu));
    /* 005cb26f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005cb271: mov ecx, eax */ r_ecx = r_eax;
    /* 005cb273: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005cb276: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5cb278u); call_ind(t); }
L_005cb278:; BB(0x005cb278);
    /* 005cb278: jmp 0x5cb2de */ goto L_005cb2de;
L_005cb27a:; BB(0x005cb27a);
    /* 005cb27a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cb27d: cmp dword ptr [ecx + 0x1dc], 0 */ {  u32 a = R32((u32)(r_ecx+0x1dcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cb284: je 0x5cb2de */ if (fZ) goto L_005cb2de;
L_005cb286:; BB(0x005cb286);
    /* 005cb286: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cb289: mov eax, dword ptr [edx + 0x1dc] */ r_eax = R32((u32)(r_edx+0x1dcu));
    /* 005cb28f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cb292: mov ecx, dword ptr [ecx + 0x1dc] */ r_ecx = R32((u32)(r_ecx+0x1dcu));
    /* 005cb298: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cb29a: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005cb29d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5cb29fu); call_ind(t); }
    /* 005cb29f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cb2a2: mov edx, dword ptr [ecx + 0x1dc] */ r_edx = R32((u32)(r_ecx+0x1dcu));
    /* 005cb2a8: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005cb2ab: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005cb2ae: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005cb2b1: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cb2b5: je 0x5cb2ca */ if (fZ) goto L_005cb2ca;
L_005cb2b7:; BB(0x005cb2b7);
    /* 005cb2b7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cb2b9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cb2bc: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005cb2be: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cb2c1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005cb2c3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5cb2c5u); call_ind(t); }
    /* 005cb2c5: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005cb2c8: jmp 0x5cb2d1 */ goto L_005cb2d1;
L_005cb2ca:; BB(0x005cb2ca);
    /* 005cb2ca: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005cb2d1:; BB(0x005cb2d1);
    /* 005cb2d1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cb2d4: mov dword ptr [ecx + 0x1dc], 0 */ W32((u32)(r_ecx+0x1dcu), 0x0u);
L_005cb2de:; BB(0x005cb2de);
    /* 005cb2de: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005cb2e1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cb2e2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cb2e5: call 0x5f4d00 */ r_esp -= 4; W32(r_esp, 0x5cb2eau); f_005f4d00();
L_005cb2ea:; BB(0x005cb2ea);
    /* 005cb2ea: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cb2ed: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005cb2f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005cb2f5: mov esp, ebp */ r_esp = r_ebp;
    /* 005cb2f7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cb2f8: ret 4 */ FN_RET(0x005cb140); r_esp += 8; return;
}

void f_005cb300(void) /* ClearCurrentBetButton::vfunc48 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cb300);
    /* 005cb300: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cb301: mov ebp, esp */ r_ebp = r_esp;
    /* 005cb303: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cb304: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cb307: mov eax, dword ptr [0x7947e4] */ r_eax = R32((u32)(0x7947e4u));
    /* 005cb30c: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 005cb30f: call 0x5ca6c0 */ r_esp -= 4; W32(r_esp, 0x5cb314u); f_005ca6c0();
    /* 005cb314: mov esp, ebp */ r_esp = r_ebp;
    /* 005cb316: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cb317: ret  */ FN_RET(0x005cb300); r_esp += 4; return;
}

