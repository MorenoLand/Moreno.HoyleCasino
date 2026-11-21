#include "protos.h"

void f_004fc210(void) /* sub_4FC210 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fc210);
    /* 004fc210: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fc211: mov ebp, esp */ r_ebp = r_esp;
    /* 004fc213: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fc216: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004fc219: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc21c: mov dword ptr [eax + 0x98], 0xffffffff */ W32((u32)(r_eax+0x98u), 0xffffffffu);
    /* 004fc226: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc229: mov dword ptr [ecx + 0x80], 0 */ W32((u32)(r_ecx+0x80u), 0x0u);
    /* 004fc233: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc236: mov dword ptr [edx + 0x88], 0 */ W32((u32)(r_edx+0x88u), 0x0u);
    /* 004fc240: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc243: mov dword ptr [eax + 0x8c], 0 */ W32((u32)(r_eax+0x8cu), 0x0u);
    /* 004fc24d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc250: mov dword ptr [ecx + 0x84], 0 */ W32((u32)(r_ecx+0x84u), 0x0u);
    /* 004fc25a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc25d: mov dword ptr [edx + 0x90], 0 */ W32((u32)(r_edx+0x90u), 0x0u);
    /* 004fc267: call 0x520d60 */ r_esp -= 4; W32(r_esp, 0x4fc26cu); f_00520d60();
    /* 004fc26c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004fc26f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fc272: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fc273: call 0x5208b0 */ r_esp -= 4; W32(r_esp, 0x4fc278u); f_005208b0();
    /* 004fc278: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fc27b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc27d: call 0x520510 */ r_esp -= 4; W32(r_esp, 0x4fc282u); f_00520510();
    /* 004fc282: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fc285: mov esp, ebp */ r_esp = r_ebp;
    /* 004fc287: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fc288: ret  */ FN_RET(0x004fc210); r_esp += 4; return;
}

void f_004fc290(void) /* sub_4FC290 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fc290);
    /* 004fc290: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fc291: mov ebp, esp */ r_ebp = r_esp;
    /* 004fc293: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fc296: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004fc299: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004fc29e: mov ecx, dword ptr [eax + 0xf4] */ r_ecx = R32((u32)(r_eax+0xf4u));
    /* 004fc2a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fc2a7: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc2ab: jne 0x4fc2bc */ if (!fZ) goto L_004fc2bc;
L_004fc2ad:; BB(0x004fc2ad);
    /* 004fc2ad: push 0x6c07e0 */ { u32 v = 0x6c07e0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc2b2: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4fc2b7u); f_00630f40();
    /* 004fc2b7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fc2ba: jmp 0x4fc2c4 */ goto L_004fc2c4;
L_004fc2bc:; BB(0x004fc2bc);
    /* 004fc2bc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc2bf: call 0x4fa1a0 */ r_esp -= 4; W32(r_esp, 0x4fc2c4u); f_004fa1a0();
L_004fc2c4:; BB(0x004fc2c4);
    /* 004fc2c4: mov esp, ebp */ r_esp = r_ebp;
    /* 004fc2c6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fc2c7: ret  */ FN_RET(0x004fc290); r_esp += 4; return;
}

void f_004fc6a0(void) /* sub_4FC6A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fc6a0);
    /* 004fc6a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fc6a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004fc6a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004fc6a5: push 0x6a278d */ { u32 v = 0x6a278du; r_esp -= 4; W32(r_esp, v); }
    /* 004fc6aa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004fc6b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fc6b1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fc6b4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 004fc6b9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fc6bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fc6bc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 004fc6bf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 004fc6c5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 004fc6c8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004fc6cb: cmp dword ptr [eax + 0x80], 0 */ {  u32 a = R32((u32)(r_eax+0x80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc6d2: jne 0x4fc749 */ if (!fZ) goto L_004fc749;
L_004fc6d4:; BB(0x004fc6d4);
    /* 004fc6d4: push 0x1bc */ { u32 v = 0x1bcu; r_esp -= 4; W32(r_esp, v); }
    /* 004fc6d9: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4fc6deu); f_00686d82();
    /* 004fc6de: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fc6e1: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004fc6e4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004fc6eb: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc6ef: je 0x4fc6fe */ if (fZ) goto L_004fc6fe;
L_004fc6f1:; BB(0x004fc6f1);
    /* 004fc6f1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc6f4: call 0x51cad0 */ r_esp -= 4; W32(r_esp, 0x4fc6f9u); f_0051cad0();
    /* 004fc6f9: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004fc6fc: jmp 0x4fc705 */ goto L_004fc705;
L_004fc6fe:; BB(0x004fc6fe);
    /* 004fc6fe: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_004fc705:; BB(0x004fc705);
    /* 004fc705: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004fc708: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 004fc70b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004fc712: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004fc715: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004fc718: mov dword ptr [edx + 0x80], eax */ W32((u32)(r_edx+0x80u), r_eax);
    /* 004fc71e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004fc721: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 004fc727: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004fc72a: mov ecx, dword ptr [eax + 0x80] */ r_ecx = R32((u32)(r_eax+0x80u));
    /* 004fc730: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004fc732: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 004fc735: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4fc737u); call_ind(t); }
    /* 004fc737: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc739: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc73b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004fc73e: mov ecx, dword ptr [ecx + 0x80] */ r_ecx = R32((u32)(r_ecx+0x80u));
    /* 004fc744: call 0x5f7320 */ r_esp -= 4; W32(r_esp, 0x4fc749u); f_005f7320();
L_004fc749:; BB(0x004fc749);
    /* 004fc749: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004fc74c: mov ecx, dword ptr [edx + 0x80] */ r_ecx = R32((u32)(r_edx+0x80u));
    /* 004fc752: call 0x51cba0 */ r_esp -= 4; W32(r_esp, 0x4fc757u); f_0051cba0();
    /* 004fc757: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004fc75a: mov ecx, dword ptr [eax + 0x80] */ r_ecx = R32((u32)(r_eax+0x80u));
    /* 004fc760: call 0x5f88f0 */ r_esp -= 4; W32(r_esp, 0x4fc765u); f_005f88f0();
    /* 004fc765: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004fc768: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc76a: je 0x4fc77a */ if (fZ) goto L_004fc77a;
L_004fc76c:; BB(0x004fc76c);
    /* 004fc76c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004fc76f: mov ecx, dword ptr [edx + 0x80] */ r_ecx = R32((u32)(r_edx+0x80u));
    /* 004fc775: call 0x5f85d0 */ r_esp -= 4; W32(r_esp, 0x4fc77au); f_005f85d0();
L_004fc77a:; BB(0x004fc77a);
    /* 004fc77a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fc77d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004fc784: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fc785: mov esp, ebp */ r_esp = r_ebp;
    /* 004fc787: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fc788: ret  */ FN_RET(0x004fc6a0); r_esp += 4; return;
}

void f_004fc790(void) /* sub_4FC790 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fc790);
    /* 004fc790: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fc791: mov ebp, esp */ r_ebp = r_esp;
    /* 004fc793: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fc794: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fc797: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fc79a: cmp dword ptr [eax + 0x80], 0 */ {  u32 a = R32((u32)(r_eax+0x80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc7a1: je 0x4fc7be */ if (fZ) goto L_004fc7be;
L_004fc7a3:; BB(0x004fc7a3);
    /* 004fc7a3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fc7a6: mov ecx, dword ptr [ecx + 0x80] */ r_ecx = R32((u32)(r_ecx+0x80u));
    /* 004fc7ac: call 0x5f8990 */ r_esp -= 4; W32(r_esp, 0x4fc7b1u); f_005f8990();
    /* 004fc7b1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fc7b4: mov dword ptr [edx + 0x80], 0 */ W32((u32)(r_edx+0x80u), 0x0u);
L_004fc7be:; BB(0x004fc7be);
    /* 004fc7be: mov esp, ebp */ r_esp = r_ebp;
    /* 004fc7c0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fc7c1: ret  */ FN_RET(0x004fc790); r_esp += 4; return;
}

void f_004fc7d0(void) /* sub_4FC7D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fc7d0);
    /* 004fc7d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fc7d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004fc7d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004fc7d5: push 0x6a27b3 */ { u32 v = 0x6a27b3u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc7da: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004fc7e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fc7e1: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fc7e4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 004fc7e9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fc7eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fc7ec: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 004fc7ef: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 004fc7f5: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 004fc7f8: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004fc7fb: cmp dword ptr [eax + 0x84], 0 */ {  u32 a = R32((u32)(r_eax+0x84u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc802: jne 0x4fc8ba */ if (!fZ) goto L_004fc8ba;
L_004fc808:; BB(0x004fc808);
    /* 004fc808: push 0x1d4 */ { u32 v = 0x1d4u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc80d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4fc812u); f_00686d82();
    /* 004fc812: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fc815: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004fc818: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004fc81f: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc823: je 0x4fc832 */ if (fZ) goto L_004fc832;
L_004fc825:; BB(0x004fc825);
    /* 004fc825: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc828: call 0x51cc80 */ r_esp -= 4; W32(r_esp, 0x4fc82du); f_0051cc80();
    /* 004fc82d: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004fc830: jmp 0x4fc839 */ goto L_004fc839;
L_004fc832:; BB(0x004fc832);
    /* 004fc832: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_004fc839:; BB(0x004fc839);
    /* 004fc839: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004fc83c: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 004fc83f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004fc846: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004fc849: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004fc84c: mov dword ptr [edx + 0x84], eax */ W32((u32)(r_edx+0x84u), r_eax);
    /* 004fc852: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004fc855: mov edx, dword ptr [ecx + 0x84] */ r_edx = R32((u32)(r_ecx+0x84u));
    /* 004fc85b: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 004fc85e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004fc861: mov byte ptr [eax + 0x1c0], 1 */ W8((u32)(r_eax+0x1c0u), 0x1u);
    /* 004fc868: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004fc86e: mov edx, dword ptr [ecx + 0xf4] */ r_edx = R32((u32)(r_ecx+0xf4u));
    /* 004fc874: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 004fc877: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004fc87a: mov ecx, dword ptr [eax + 0x84] */ r_ecx = R32((u32)(r_eax+0x84u));
    /* 004fc880: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004fc883: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fc886: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004fc889: mov dword ptr [edx + 0x1bc], eax */ W32((u32)(r_edx+0x1bcu), r_eax);
    /* 004fc88f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004fc892: mov edx, dword ptr [ecx + 0x84] */ r_edx = R32((u32)(r_ecx+0x84u));
    /* 004fc898: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004fc89b: mov ecx, dword ptr [eax + 0x84] */ r_ecx = R32((u32)(r_eax+0x84u));
    /* 004fc8a1: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004fc8a3: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 004fc8a6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4fc8a8u); call_ind(t); }
    /* 004fc8a8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc8aa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc8ac: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004fc8af: mov ecx, dword ptr [ecx + 0x84] */ r_ecx = R32((u32)(r_ecx+0x84u));
    /* 004fc8b5: call 0x5f7340 */ r_esp -= 4; W32(r_esp, 0x4fc8bau); f_005f7340();
L_004fc8ba:; BB(0x004fc8ba);
    /* 004fc8ba: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004fc8bd: mov ecx, dword ptr [edx + 0x84] */ r_ecx = R32((u32)(r_edx+0x84u));
    /* 004fc8c3: call 0x5f85d0 */ r_esp -= 4; W32(r_esp, 0x4fc8c8u); f_005f85d0();
    /* 004fc8c8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fc8cb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004fc8d2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fc8d3: mov esp, ebp */ r_esp = r_ebp;
    /* 004fc8d5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fc8d6: ret  */ FN_RET(0x004fc7d0); r_esp += 4; return;
}

void f_004fc8e0(void) /* sub_4FC8E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fc8e0);
    /* 004fc8e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fc8e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004fc8e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fc8e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fc8e7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fc8ea: cmp dword ptr [eax + 0x84], 0 */ {  u32 a = R32((u32)(r_eax+0x84u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc8f1: je 0x4fc90e */ if (fZ) goto L_004fc90e;
L_004fc8f3:; BB(0x004fc8f3);
    /* 004fc8f3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fc8f6: mov ecx, dword ptr [ecx + 0x84] */ r_ecx = R32((u32)(r_ecx+0x84u));
    /* 004fc8fc: call 0x5f8990 */ r_esp -= 4; W32(r_esp, 0x4fc901u); f_005f8990();
    /* 004fc901: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fc904: mov dword ptr [edx + 0x84], 0 */ W32((u32)(r_edx+0x84u), 0x0u);
L_004fc90e:; BB(0x004fc90e);
    /* 004fc90e: mov esp, ebp */ r_esp = r_ebp;
    /* 004fc910: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fc911: ret  */ FN_RET(0x004fc8e0); r_esp += 4; return;
}

void f_004fc950(void) /* sub_4FC950 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fc950);
    /* 004fc950: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fc951: mov ebp, esp */ r_ebp = r_esp;
    /* 004fc953: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004fc955: push 0x6a27d9 */ { u32 v = 0x6a27d9u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc95a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004fc960: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fc961: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fc964: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 004fc969: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fc96b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fc96c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 004fc96f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 004fc975: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 004fc978: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 004fc97b: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004fc97e: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 004fc981: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004fc984: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 004fc987: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 004fc98a: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 004fc98d: cmp dword ptr [eax + 0x90], 0 */ {  u32 a = R32((u32)(r_eax+0x90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc994: jne 0x4fcab3 */ if (!fZ) goto L_004fcab3;
L_004fc99a:; BB(0x004fc99a);
    /* 004fc99a: push 0x3d0 */ { u32 v = 0x3d0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc99f: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4fc9a4u); f_00686d82();
    /* 004fc9a4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fc9a7: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 004fc9aa: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004fc9b1: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc9b5: je 0x4fc9c4 */ if (fZ) goto L_004fc9c4;
L_004fc9b7:; BB(0x004fc9b7);
    /* 004fc9b7: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004fc9ba: call 0x51ebd0 */ r_esp -= 4; W32(r_esp, 0x4fc9bfu); f_0051ebd0();
    /* 004fc9bf: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 004fc9c2: jmp 0x4fc9cb */ goto L_004fc9cb;
L_004fc9c4:; BB(0x004fc9c4);
    /* 004fc9c4: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_004fc9cb:; BB(0x004fc9cb);
    /* 004fc9cb: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004fc9ce: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 004fc9d1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004fc9d8: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004fc9db: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fc9de: mov dword ptr [edx + 0x90], eax */ W32((u32)(r_edx+0x90u), r_eax);
    /* 004fc9e4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004fc9e7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fc9e8: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004fc9eb: mov ecx, dword ptr [edx + 0x90] */ r_ecx = R32((u32)(r_edx+0x90u));
    /* 004fc9f1: call 0x51ec30 */ r_esp -= 4; W32(r_esp, 0x4fc9f6u); f_0051ec30();
    /* 004fc9f6: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 004fc9f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fc9fa: mov cl, byte ptr [ebp + 0xc] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 004fc9fd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fc9fe: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004fca01: mov ecx, dword ptr [edx + 0x90] */ r_ecx = R32((u32)(r_edx+0x90u));
    /* 004fca07: call 0x51ec50 */ r_esp -= 4; W32(r_esp, 0x4fca0cu); f_0051ec50();
    /* 004fca0c: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 004fca0f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fca10: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004fca13: mov ecx, dword ptr [ecx + 0x90] */ r_ecx = R32((u32)(r_ecx+0x90u));
    /* 004fca19: call 0x51ec80 */ r_esp -= 4; W32(r_esp, 0x4fca1eu); f_0051ec80();
    /* 004fca1e: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 004fca25: jmp 0x4fca30 */ goto L_004fca30;
L_004fca27:; BB(0x004fca27);
    /* 004fca27: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fca2a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fca2d: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
L_004fca30:; BB(0x004fca30);
    /* 004fca30: cmp dword ptr [ebp - 0x14], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fca34: jge 0x4fca86 */ if ((fS==fO)) goto L_004fca86;
L_004fca36:; BB(0x004fca36);
    /* 004fca36: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fca39: mov ecx, dword ptr [ebp + eax*4 - 0x24] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffdcu));
    /* 004fca3d: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 004fca40: cmp dword ptr [ebp - 0x28], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fca44: je 0x4fca84 */ if (fZ) goto L_004fca84;
L_004fca46:; BB(0x004fca46);
    /* 004fca46: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004fca49: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fca4a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004fca50: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4fca55u); f_0047e390();
    /* 004fca55: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004fca58: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004fca5b: call 0x4c6150 */ r_esp -= 4; W32(r_esp, 0x4fca60u); f_004c6150();
    /* 004fca60: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 004fca63: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004fca66: call 0x4c6a70 */ r_esp -= 4; W32(r_esp, 0x4fca6bu); f_004c6a70();
    /* 004fca6b: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004fca6e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004fca71: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fca72: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004fca75: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fca76: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004fca79: mov ecx, dword ptr [edx + 0x90] */ r_ecx = R32((u32)(r_edx+0x90u));
    /* 004fca7f: call 0x51ecb0 */ r_esp -= 4; W32(r_esp, 0x4fca84u); f_0051ecb0();
L_004fca84:; BB(0x004fca84);
    /* 004fca84: jmp 0x4fca27 */ goto L_004fca27;
L_004fca86:; BB(0x004fca86);
    /* 004fca86: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 004fca89: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 004fca8f: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004fca92: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 004fca98: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004fca9a: mov ecx, eax */ r_ecx = r_eax;
    /* 004fca9c: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 004fca9f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4fcaa1u); call_ind(t); }
    /* 004fcaa1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcaa3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcaa5: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004fcaa8: mov ecx, dword ptr [ecx + 0x90] */ r_ecx = R32((u32)(r_ecx+0x90u));
    /* 004fcaae: call 0x5f7340 */ r_esp -= 4; W32(r_esp, 0x4fcab3u); f_005f7340();
L_004fcab3:; BB(0x004fcab3);
    /* 004fcab3: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004fcab6: mov ecx, dword ptr [edx + 0x90] */ r_ecx = R32((u32)(r_edx+0x90u));
    /* 004fcabc: call 0x5f85d0 */ r_esp -= 4; W32(r_esp, 0x4fcac1u); f_005f85d0();
    /* 004fcac1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fcac4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004fcacb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fcacc: mov esp, ebp */ r_esp = r_ebp;
    /* 004fcace: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fcacf: ret 0x1c */ FN_RET(0x004fc950); r_esp += 32; return;
}

void f_004fcae0(void) /* sub_4FCAE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fcae0);
    /* 004fcae0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fcae1: mov ebp, esp */ r_ebp = r_esp;
    /* 004fcae3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fcae4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fcae7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fcaea: cmp dword ptr [eax + 0x90], 0 */ {  u32 a = R32((u32)(r_eax+0x90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcaf1: je 0x4fcb0e */ if (fZ) goto L_004fcb0e;
L_004fcaf3:; BB(0x004fcaf3);
    /* 004fcaf3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fcaf6: mov ecx, dword ptr [ecx + 0x90] */ r_ecx = R32((u32)(r_ecx+0x90u));
    /* 004fcafc: call 0x5f8990 */ r_esp -= 4; W32(r_esp, 0x4fcb01u); f_005f8990();
    /* 004fcb01: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fcb04: mov dword ptr [edx + 0x90], 0 */ W32((u32)(r_edx+0x90u), 0x0u);
L_004fcb0e:; BB(0x004fcb0e);
    /* 004fcb0e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb10: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fcb13: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 004fcb16: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fcb19: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004fcb1c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004fcb1e: mov ecx, eax */ r_ecx = r_eax;
    /* 004fcb20: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004fcb23: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4fcb25u); call_ind(t); }
    /* 004fcb25: mov esp, ebp */ r_esp = r_ebp;
    /* 004fcb27: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fcb28: ret  */ FN_RET(0x004fcae0); r_esp += 4; return;
}

void f_004fcb30(void) /* sub_4FCB30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fcb30);
    /* 004fcb30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb31: mov ebp, esp */ r_ebp = r_esp;
    /* 004fcb33: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb35: push 0x6a27ff */ { u32 v = 0x6a27ffu; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb3a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004fcb40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb41: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fcb44: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 004fcb49: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fcb4b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb4c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 004fcb4f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 004fcb55: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004fcb58: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004fcb5d: mov byte ptr [eax + 0x408], 1 */ W8((u32)(r_eax+0x408u), 0x1u);
    /* 004fcb64: cmp dword ptr [ebp + 8], 3 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcb68: jne 0x4fcb8c */ if (!fZ) goto L_004fcb8c;
L_004fcb6a:; BB(0x004fcb6a);
    /* 004fcb6a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004fcb70: call 0x479860 */ r_esp -= 4; W32(r_esp, 0x4fcb75u); f_00479860();
    /* 004fcb75: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb76: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004fcb7c: call 0x480580 */ r_esp -= 4; W32(r_esp, 0x4fcb81u); f_00480580();
    /* 004fcb81: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004fcb87: call 0x47ffe0 */ r_esp -= 4; W32(r_esp, 0x4fcb8cu); f_0047ffe0();
L_004fcb8c:; BB(0x004fcb8c);
    /* 004fcb8c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fcb8f: cmp dword ptr [ecx + 0x88], 0 */ {  u32 a = R32((u32)(r_ecx+0x88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcb96: jne 0x4fcc56 */ if (!fZ) goto L_004fcc56;
L_004fcb9c:; BB(0x004fcb9c);
    /* 004fcb9c: push 0x1e4 */ { u32 v = 0x1e4u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcba1: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4fcba6u); f_00686d82();
    /* 004fcba6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fcba9: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004fcbac: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004fcbb3: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcbb7: je 0x4fcbc6 */ if (fZ) goto L_004fcbc6;
L_004fcbb9:; BB(0x004fcbb9);
    /* 004fcbb9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcbbc: call 0x51a6b0 */ r_esp -= 4; W32(r_esp, 0x4fcbc1u); f_0051a6b0();
    /* 004fcbc1: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004fcbc4: jmp 0x4fcbcd */ goto L_004fcbcd;
L_004fcbc6:; BB(0x004fcbc6);
    /* 004fcbc6: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004fcbcd:; BB(0x004fcbcd);
    /* 004fcbcd: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004fcbd0: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 004fcbd3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004fcbda: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fcbdd: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004fcbe0: mov dword ptr [eax + 0x88], ecx */ W32((u32)(r_eax+0x88u), r_ecx);
    /* 004fcbe6: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004fcbe9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fcbea: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fcbed: mov ecx, dword ptr [eax + 0x88] */ r_ecx = R32((u32)(r_eax+0x88u));
    /* 004fcbf3: call 0x51a7d0 */ r_esp -= 4; W32(r_esp, 0x4fcbf8u); f_0051a7d0();
    /* 004fcbf8: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004fcbfe: mov edx, dword ptr [ecx + 0xf8] */ r_edx = R32((u32)(r_ecx+0xf8u));
    /* 004fcc04: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 004fcc07: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004fcc0c: mov ecx, dword ptr [eax + 0xf4] */ r_ecx = R32((u32)(r_eax+0xf4u));
    /* 004fcc12: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 004fcc15: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004fcc18: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fcc19: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004fcc1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fcc1d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fcc20: mov ecx, dword ptr [ecx + 0x88] */ r_ecx = R32((u32)(r_ecx+0x88u));
    /* 004fcc26: call 0x51a7f0 */ r_esp -= 4; W32(r_esp, 0x4fcc2bu); f_0051a7f0();
    /* 004fcc2b: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fcc2e: mov eax, dword ptr [edx + 0x88] */ r_eax = R32((u32)(r_edx+0x88u));
    /* 004fcc34: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fcc37: mov ecx, dword ptr [ecx + 0x88] */ r_ecx = R32((u32)(r_ecx+0x88u));
    /* 004fcc3d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004fcc3f: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 004fcc42: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4fcc44u); call_ind(t); }
    /* 004fcc44: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcc46: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcc48: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fcc4b: mov ecx, dword ptr [ecx + 0x88] */ r_ecx = R32((u32)(r_ecx+0x88u));
    /* 004fcc51: call 0x5f7340 */ r_esp -= 4; W32(r_esp, 0x4fcc56u); f_005f7340();
L_004fcc56:; BB(0x004fcc56);
    /* 004fcc56: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fcc59: mov ecx, dword ptr [edx + 0x88] */ r_ecx = R32((u32)(r_edx+0x88u));
    /* 004fcc5f: call 0x5f85d0 */ r_esp -= 4; W32(r_esp, 0x4fcc64u); f_005f85d0();
    /* 004fcc64: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fcc67: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004fcc6e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fcc6f: mov esp, ebp */ r_esp = r_ebp;
    /* 004fcc71: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fcc72: ret 4 */ FN_RET(0x004fcb30); r_esp += 8; return;
}

void f_004fcc80(void) /* sub_4FCC80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fcc80);
    /* 004fcc80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fcc81: mov ebp, esp */ r_ebp = r_esp;
    /* 004fcc83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fcc84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fcc87: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fcc8a: cmp dword ptr [eax + 0x88], 0 */ {  u32 a = R32((u32)(r_eax+0x88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcc91: je 0x4fccae */ if (fZ) goto L_004fccae;
L_004fcc93:; BB(0x004fcc93);
    /* 004fcc93: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fcc96: mov ecx, dword ptr [ecx + 0x88] */ r_ecx = R32((u32)(r_ecx+0x88u));
    /* 004fcc9c: call 0x5f8990 */ r_esp -= 4; W32(r_esp, 0x4fcca1u); f_005f8990();
    /* 004fcca1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fcca4: mov dword ptr [edx + 0x88], 0 */ W32((u32)(r_edx+0x88u), 0x0u);
L_004fccae:; BB(0x004fccae);
    /* 004fccae: mov esp, ebp */ r_esp = r_ebp;
    /* 004fccb0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fccb1: ret  */ FN_RET(0x004fcc80); r_esp += 4; return;
}

void f_004fccc0(void) /* sub_4FCCC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fccc0);
    /* 004fccc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fccc1: mov ebp, esp */ r_ebp = r_esp;
    /* 004fccc3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004fccc5: push 0x6a2825 */ { u32 v = 0x6a2825u; r_esp -= 4; W32(r_esp, v); }
    /* 004fccca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004fccd0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fccd1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fccd4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 004fccd9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fccdb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fccdc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 004fccdf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 004fcce5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 004fcce8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004fcceb: cmp dword ptr [eax + 0x8c], 0 */ {  u32 a = R32((u32)(r_eax+0x8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fccf2: jne 0x4fcd69 */ if (!fZ) goto L_004fcd69;
L_004fccf4:; BB(0x004fccf4);
    /* 004fccf4: push 0x1c4 */ { u32 v = 0x1c4u; r_esp -= 4; W32(r_esp, v); }
    /* 004fccf9: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4fccfeu); f_00686d82();
    /* 004fccfe: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fcd01: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004fcd04: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004fcd0b: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcd0f: je 0x4fcd1e */ if (fZ) goto L_004fcd1e;
L_004fcd11:; BB(0x004fcd11);
    /* 004fcd11: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcd14: call 0x51afc0 */ r_esp -= 4; W32(r_esp, 0x4fcd19u); f_0051afc0();
    /* 004fcd19: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004fcd1c: jmp 0x4fcd25 */ goto L_004fcd25;
L_004fcd1e:; BB(0x004fcd1e);
    /* 004fcd1e: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_004fcd25:; BB(0x004fcd25);
    /* 004fcd25: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004fcd28: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 004fcd2b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004fcd32: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004fcd35: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004fcd38: mov dword ptr [edx + 0x8c], eax */ W32((u32)(r_edx+0x8cu), r_eax);
    /* 004fcd3e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004fcd41: mov edx, dword ptr [ecx + 0x8c] */ r_edx = R32((u32)(r_ecx+0x8cu));
    /* 004fcd47: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004fcd4a: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 004fcd50: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004fcd52: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 004fcd55: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4fcd57u); call_ind(t); }
    /* 004fcd57: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcd59: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcd5b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004fcd5e: mov ecx, dword ptr [ecx + 0x8c] */ r_ecx = R32((u32)(r_ecx+0x8cu));
    /* 004fcd64: call 0x5f7340 */ r_esp -= 4; W32(r_esp, 0x4fcd69u); f_005f7340();
L_004fcd69:; BB(0x004fcd69);
    /* 004fcd69: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004fcd6c: mov ecx, dword ptr [edx + 0x8c] */ r_ecx = R32((u32)(r_edx+0x8cu));
    /* 004fcd72: call 0x5f85d0 */ r_esp -= 4; W32(r_esp, 0x4fcd77u); f_005f85d0();
    /* 004fcd77: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fcd7a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004fcd81: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fcd82: mov esp, ebp */ r_esp = r_ebp;
    /* 004fcd84: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fcd85: ret  */ FN_RET(0x004fccc0); r_esp += 4; return;
}

void f_004fce80(void) /* sub_4FCE80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fce80);
    /* 004fce80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fce81: mov ebp, esp */ r_ebp = r_esp;
    /* 004fce83: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004fce85: push 0x6a2856 */ { u32 v = 0x6a2856u; r_esp -= 4; W32(r_esp, v); }
    /* 004fce8a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004fce90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fce91: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fce94: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 004fce99: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fce9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fce9c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 004fce9f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 004fcea5: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004fcea8: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 004fceae: call 0x4fa2e0 */ r_esp -= 4; W32(r_esp, 0x4fceb3u); f_004fa2e0();
    /* 004fceb3: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 004fceb9: call 0x4fb580 */ r_esp -= 4; W32(r_esp, 0x4fcebeu); f_004fb580();
    /* 004fcebe: push 0x208 */ { u32 v = 0x208u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcec3: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4fcec8u); f_00686d82();
    /* 004fcec8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fcecb: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004fcece: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004fced5: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fced9: je 0x4fcee8 */ if (fZ) goto L_004fcee8;
L_004fcedb:; BB(0x004fcedb);
    /* 004fcedb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcede: call 0x467090 */ r_esp -= 4; W32(r_esp, 0x4fcee3u); f_00467090();
    /* 004fcee3: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004fcee6: jmp 0x4fceef */ goto L_004fceef;
L_004fcee8:; BB(0x004fcee8);
    /* 004fcee8: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004fceef:; BB(0x004fceef);
    /* 004fceef: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004fcef2: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004fcef5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004fcefc: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 004fcf02: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004fcf05: mov dword ptr [ecx + 0x9c], edx */ W32((u32)(r_ecx+0x9cu), r_edx);
    /* 004fcf0b: push 0xdc */ { u32 v = 0xdcu; r_esp -= 4; W32(r_esp, v); }
    /* 004fcf10: push 0x154 */ { u32 v = 0x154u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcf15: mov eax, dword ptr [0x791eb8] */ r_eax = R32((u32)(0x791eb8u));
    /* 004fcf1a: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 004fcf20: call 0x5198c0 */ r_esp -= 4; W32(r_esp, 0x4fcf25u); f_005198c0();
    /* 004fcf25: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 004fcf2b: mov ecx, dword ptr [ecx + 0x9c] */ r_ecx = R32((u32)(r_ecx+0x9cu));
    /* 004fcf31: call 0x5f87d0 */ r_esp -= 4; W32(r_esp, 0x4fcf36u); f_005f87d0();
    /* 004fcf36: mov edx, dword ptr [0x791eb8] */ r_edx = R32((u32)(0x791eb8u));
    /* 004fcf3c: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 004fcf42: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 004fcf48: mov ecx, dword ptr [ecx + 0x9c] */ r_ecx = R32((u32)(r_ecx+0x9cu));
    /* 004fcf4e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004fcf50: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 004fcf53: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4fcf55u); call_ind(t); }
    /* 004fcf55: push 0x22c */ { u32 v = 0x22cu; r_esp -= 4; W32(r_esp, v); }
    /* 004fcf5a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4fcf5fu); f_00686d82();
    /* 004fcf5f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fcf62: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004fcf65: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004fcf6c: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcf70: je 0x4fcf7f */ if (fZ) goto L_004fcf7f;
L_004fcf72:; BB(0x004fcf72);
    /* 004fcf72: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004fcf75: call 0x46a260 */ r_esp -= 4; W32(r_esp, 0x4fcf7au); f_0046a260();
    /* 004fcf7a: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004fcf7d: jmp 0x4fcf86 */ goto L_004fcf86;
L_004fcf7f:; BB(0x004fcf7f);
    /* 004fcf7f: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_004fcf86:; BB(0x004fcf86);
    /* 004fcf86: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004fcf89: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 004fcf8c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004fcf93: mov edx, dword ptr [0x791eb8] */ r_edx = R32((u32)(0x791eb8u));
    /* 004fcf99: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004fcf9c: mov dword ptr [edx + 0xa0], eax */ W32((u32)(r_edx+0xa0u), r_eax);
    /* 004fcfa2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcfa4: push 0x186ab */ { u32 v = 0x186abu; r_esp -= 4; W32(r_esp, v); }
    /* 004fcfa9: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 004fcfaf: mov ecx, dword ptr [ecx + 0xa0] */ r_ecx = R32((u32)(r_ecx+0xa0u));
    /* 004fcfb5: call 0x5f83d0 */ r_esp -= 4; W32(r_esp, 0x4fcfbau); f_005f83d0();
    /* 004fcfba: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcfbc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcfbe: mov edx, dword ptr [0x791eb8] */ r_edx = R32((u32)(0x791eb8u));
    /* 004fcfc4: mov ecx, dword ptr [edx + 0xa0] */ r_ecx = R32((u32)(r_edx+0xa0u));
    /* 004fcfca: call 0x5f7340 */ r_esp -= 4; W32(r_esp, 0x4fcfcfu); f_005f7340();
    /* 004fcfcf: mov eax, dword ptr [0x791eb8] */ r_eax = R32((u32)(0x791eb8u));
    /* 004fcfd4: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 004fcfda: call 0x5f87d0 */ r_esp -= 4; W32(r_esp, 0x4fcfdfu); f_005f87d0();
    /* 004fcfdf: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 004fcfe5: mov edx, dword ptr [ecx + 0xa0] */ r_edx = R32((u32)(r_ecx+0xa0u));
    /* 004fcfeb: mov eax, dword ptr [0x791eb8] */ r_eax = R32((u32)(0x791eb8u));
    /* 004fcff0: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 004fcff6: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004fcff8: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 004fcffb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4fcffdu); call_ind(t); }
    /* 004fcffd: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 004fd003: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x4fd008u); f_005da7b0();
    /* 004fd008: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004fd00b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd00d: je 0x4fd01a */ if (fZ) goto L_004fd01a;
L_004fd00f:; BB(0x004fd00f);
    /* 004fd00f: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 004fd015: call 0x4fc6a0 */ r_esp -= 4; W32(r_esp, 0x4fd01au); f_004fc6a0();
L_004fd01a:; BB(0x004fd01a);
    /* 004fd01a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fd01d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004fd024: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd025: mov esp, ebp */ r_esp = r_ebp;
    /* 004fd027: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fd028: ret  */ FN_RET(0x004fce80); r_esp += 4; return;
}

