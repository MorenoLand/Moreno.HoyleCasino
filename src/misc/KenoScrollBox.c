#include "protos.h"

void f_005845c0(void) /* KenoScrollBox::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005845c0);
    /* 005845c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005845c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005845c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005845c5: push 0x6a6c99 */ { u32 v = 0x6a6c99u; r_esp -= 4; W32(r_esp, v); }
    /* 005845ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005845d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005845d1: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005845d4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005845d9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005845db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005845dc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005845df: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005845e5: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005845e8: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005845eb: call 0x5f6130 */ r_esp -= 4; W32(r_esp, 0x5845f0u); f_005f6130();
    /* 005845f0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005845f7: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005845fa: mov dword ptr [eax], 0x6ccb5c */ W32((u32)(r_eax), 0x6ccb5cu);
    /* 00584600: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00584603: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00584606: mov dword ptr [ecx + 0x68], edx */ W32((u32)(r_ecx+0x68u), r_edx);
    /* 00584609: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0058460c: mov byte ptr [eax + 0x6c], 1 */ W8((u32)(r_eax+0x6cu), 0x1u);
    /* 00584610: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00584613: mov dword ptr [ecx + 0x70], 0 */ W32((u32)(r_ecx+0x70u), 0x0u);
    /* 0058461a: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0058461d: mov dword ptr [edx + 0x74], 0 */ W32((u32)(r_edx+0x74u), 0x0u);
    /* 00584624: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00584627: mov dword ptr [eax + 0x78], 0 */ W32((u32)(r_eax+0x78u), 0x0u);
    /* 0058462e: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00584631: mov dword ptr [ecx + 0x7c], 0 */ W32((u32)(r_ecx+0x7cu), 0x0u);
    /* 00584638: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0058463b: mov dword ptr [edx + 0x80], 0 */ W32((u32)(r_edx+0x80u), 0x0u);
    /* 00584645: push 0x1e4 */ { u32 v = 0x1e4u; r_esp -= 4; W32(r_esp, v); }
    /* 0058464a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x58464fu); f_00686d82();
    /* 0058464f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00584652: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00584655: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00584659: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058465d: je 0x584672 */ if (fZ) goto L_00584672;
L_0058465f:; BB(0x0058465f);
    /* 0058465f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00584661: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00584664: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00584665: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00584668: call 0x5840e0 */ r_esp -= 4; W32(r_esp, 0x58466du); f_005840e0();
    /* 0058466d: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00584670: jmp 0x584679 */ goto L_00584679;
L_00584672:; BB(0x00584672);
    /* 00584672: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00584679:; BB(0x00584679);
    /* 00584679: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0058467c: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0058467f: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00584683: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00584686: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00584689: mov dword ptr [edx + 0x5c], eax */ W32((u32)(r_edx+0x5cu), r_eax);
    /* 0058468c: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0058468e: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00584690: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00584693: mov ecx, dword ptr [ecx + 0x5c] */ r_ecx = R32((u32)(r_ecx+0x5cu));
    /* 00584696: call 0x602ef0 */ r_esp -= 4; W32(r_esp, 0x58469bu); f_00602ef0();
    /* 0058469b: push 0x1e4 */ { u32 v = 0x1e4u; r_esp -= 4; W32(r_esp, v); }
    /* 005846a0: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5846a5u); f_00686d82();
    /* 005846a5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005846a8: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005846ab: mov byte ptr [ebp - 4], 2 */ W8((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005846af: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005846b3: je 0x5846c8 */ if (fZ) goto L_005846c8;
L_005846b5:; BB(0x005846b5);
    /* 005846b5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005846b7: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005846ba: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005846bb: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005846be: call 0x5840e0 */ r_esp -= 4; W32(r_esp, 0x5846c3u); f_005840e0();
    /* 005846c3: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005846c6: jmp 0x5846cf */ goto L_005846cf;
L_005846c8:; BB(0x005846c8);
    /* 005846c8: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_005846cf:; BB(0x005846cf);
    /* 005846cf: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005846d2: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005846d5: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005846d9: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005846dc: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005846df: mov dword ptr [ecx + 0x60], edx */ W32((u32)(r_ecx+0x60u), r_edx);
    /* 005846e2: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005846e4: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005846e6: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005846e9: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 005846ec: call 0x602ef0 */ r_esp -= 4; W32(r_esp, 0x5846f1u); f_00602ef0();
    /* 005846f1: push 0x1a4 */ { u32 v = 0x1a4u; r_esp -= 4; W32(r_esp, v); }
    /* 005846f6: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5846fbu); f_00686d82();
    /* 005846fb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005846fe: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00584701: mov byte ptr [ebp - 4], 3 */ W8((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00584705: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584709: je 0x58471c */ if (fZ) goto L_0058471c;
L_0058470b:; BB(0x0058470b);
    /* 0058470b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0058470e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058470f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00584712: call 0x584180 */ r_esp -= 4; W32(r_esp, 0x584717u); f_00584180();
    /* 00584717: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0058471a: jmp 0x584723 */ goto L_00584723;
L_0058471c:; BB(0x0058471c);
    /* 0058471c: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_00584723:; BB(0x00584723);
    /* 00584723: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00584726: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00584729: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0058472d: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00584730: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00584733: mov dword ptr [eax + 0x64], ecx */ W32((u32)(r_eax+0x64u), r_ecx);
    /* 00584736: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0058473d: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00584740: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00584743: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0058474a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0058474b: mov esp, ebp */ r_esp = r_ebp;
    /* 0058474d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058474e: ret 4 */ FN_RET(0x005845c0); r_esp += 8; return;
}

void f_00584760(void) /* KenoScrollBox::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00584760);
    /* 00584760: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00584761: mov ebp, esp */ r_ebp = r_esp;
    /* 00584763: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00584765: push 0x6a6cbc */ { u32 v = 0x6a6cbcu; r_esp -= 4; W32(r_esp, v); }
    /* 0058476a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00584770: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00584771: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00584774: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00584779: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0058477b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058477c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0058477f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00584785: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00584788: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0058478b: mov dword ptr [eax], 0x6ccb5c */ W32((u32)(r_eax), 0x6ccb5cu);
    /* 00584791: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00584798: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0058479b: cmp dword ptr [ecx + 0x5c], 0 */ {  u32 a = R32((u32)(r_ecx+0x5cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058479f: je 0x5847da */ if (fZ) goto L_005847da;
L_005847a1:; BB(0x005847a1);
    /* 005847a1: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005847a4: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 005847a7: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005847aa: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005847ad: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005847b0: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005847b4: je 0x5847c9 */ if (fZ) goto L_005847c9;
L_005847b6:; BB(0x005847b6);
    /* 005847b6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005847b8: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005847bb: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005847bd: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005847c0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005847c2: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5847c4u); call_ind(t); }
    /* 005847c4: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005847c7: jmp 0x5847d0 */ goto L_005847d0;
L_005847c9:; BB(0x005847c9);
    /* 005847c9: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_005847d0:; BB(0x005847d0);
    /* 005847d0: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005847d3: mov dword ptr [eax + 0x5c], 0 */ W32((u32)(r_eax+0x5cu), 0x0u);
L_005847da:; BB(0x005847da);
    /* 005847da: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005847dd: cmp dword ptr [ecx + 0x60], 0 */ {  u32 a = R32((u32)(r_ecx+0x60u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005847e1: je 0x58481c */ if (fZ) goto L_0058481c;
L_005847e3:; BB(0x005847e3);
    /* 005847e3: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005847e6: mov eax, dword ptr [edx + 0x60] */ r_eax = R32((u32)(r_edx+0x60u));
    /* 005847e9: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005847ec: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005847ef: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005847f2: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005847f6: je 0x58480b */ if (fZ) goto L_0058480b;
L_005847f8:; BB(0x005847f8);
    /* 005847f8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005847fa: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005847fd: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005847ff: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00584802: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00584804: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x584806u); call_ind(t); }
    /* 00584806: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00584809: jmp 0x584812 */ goto L_00584812;
L_0058480b:; BB(0x0058480b);
    /* 0058480b: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_00584812:; BB(0x00584812);
    /* 00584812: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00584815: mov dword ptr [eax + 0x60], 0 */ W32((u32)(r_eax+0x60u), 0x0u);
L_0058481c:; BB(0x0058481c);
    /* 0058481c: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0058481f: cmp dword ptr [ecx + 0x64], 0 */ {  u32 a = R32((u32)(r_ecx+0x64u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584823: je 0x58485e */ if (fZ) goto L_0058485e;
L_00584825:; BB(0x00584825);
    /* 00584825: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00584828: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 0058482b: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0058482e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00584831: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00584834: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584838: je 0x58484d */ if (fZ) goto L_0058484d;
L_0058483a:; BB(0x0058483a);
    /* 0058483a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0058483c: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0058483f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00584841: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00584844: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00584846: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x584848u); call_ind(t); }
    /* 00584848: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0058484b: jmp 0x584854 */ goto L_00584854;
L_0058484d:; BB(0x0058484d);
    /* 0058484d: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_00584854:; BB(0x00584854);
    /* 00584854: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00584857: mov dword ptr [eax + 0x64], 0 */ W32((u32)(r_eax+0x64u), 0x0u);
L_0058485e:; BB(0x0058485e);
    /* 0058485e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00584865: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00584868: call 0x5f61b0 */ r_esp -= 4; W32(r_esp, 0x58486du); f_005f61b0();
    /* 0058486d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00584870: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00584877: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00584878: mov esp, ebp */ r_esp = r_ebp;
    /* 0058487a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058487b: ret  */ FN_RET(0x00584760); r_esp += 4; return;
}

void f_00585310(void) /* kenoscrollbox::func_00585310 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00585310);
    /* 00585310: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00585311: mov ebp, esp */ r_ebp = r_esp;
    /* 00585313: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00585316: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00585319: fldz  */ FPUSH(0.0);
    /* 0058531b: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0058531e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00585321: cmp dword ptr [eax + 0x68], 0 */ {  u32 a = R32((u32)(r_eax+0x68u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585325: jne 0x58533f */ if (!fZ) goto L_0058533f;
L_00585327:; BB(0x00585327);
    /* 00585327: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0058532a: mov edx, dword ptr [ecx + 0x64] */ r_edx = R32((u32)(r_ecx+0x64u));
    /* 0058532d: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00585330: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 00585333: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00585335: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 00585338: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58533au); call_ind(t); }
    /* 0058533a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0058533d: jmp 0x585355 */ goto L_00585355;
L_0058533f:; BB(0x0058533f);
    /* 0058533f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00585342: mov edx, dword ptr [ecx + 0x64] */ r_edx = R32((u32)(r_ecx+0x64u));
    /* 00585345: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00585348: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 0058534b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0058534d: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00585350: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x585352u); call_ind(t); }
    /* 00585352: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00585355:; BB(0x00585355);
    /* 00585355: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00585358: mov ecx, dword ptr [ecx + 0x64] */ r_ecx = R32((u32)(r_ecx+0x64u));
    /* 0058535b: call 0x584240 */ r_esp -= 4; W32(r_esp, 0x585360u); f_00584240();
    /* 00585360: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00585363: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00585365: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00585368: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0058536b: call 0x585470 */ r_esp -= 4; W32(r_esp, 0x585370u); f_00585470();
    /* 00585370: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585372: je 0x5853ec */ if (fZ) goto L_005853ec;
L_00585374:; BB(0x00585374);
    /* 00585374: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00585377: fild dword ptr [eax + 0x70] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x70u)));
    /* 0058537a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0058537d: fstp qword ptr [ebp - 0x24] */ W_F64((u32)(r_ebp+0xffffffdcu), ST(0)); FPOP();
    /* 00585380: call 0x585470 */ r_esp -= 4; W32(r_esp, 0x585385u); f_00585470();
    /* 00585385: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00585388: fild dword ptr [ebp - 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd8u)));
    /* 0058538b: fdivr qword ptr [ebp - 0x24] */ ST(0) = R_F64((u32)(r_ebp+0xffffffdcu)) / ST(0);
    /* 0058538e: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 00585391: fild dword ptr [ebp - 4] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffffcu)));
    /* 00585394: fdiv qword ptr [ebp - 0x18] */ ST(0) = ST(0) / R_F64((u32)(r_ebp+0xffffffe8u));
    /* 00585397: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0058539a: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058539d: fld1  */ FPUSH(1.0);
    /* 0058539f: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 005853a2: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005853a5: fld qword ptr [ebp - 0x10] */ FPUSH(R_F64((u32)(r_ebp+0xfffffff0u)));
    /* 005853a8: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 005853ab: call 0x686fba */ r_esp -= 4; W32(r_esp, 0x5853b0u); f_00686fba();
    /* 005853b0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005853b3: fcomp qword ptr [0x6b2c38] */ fx_compare(ST(0), R_F64((u32)(0x6b2c38u))); FPOP();
    /* 005853b9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005853bb: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 005853be: jp 0x5853d7 */ if (fP) goto L_005853d7;
L_005853c0:; BB(0x005853c0);
    /* 005853c0: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005853c3: fld qword ptr [ebp - 0x10] */ FPUSH(R_F64((u32)(r_ebp+0xfffffff0u)));
    /* 005853c6: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 005853c9: call dword ptr [0x6b2268] */ { u32 t = R32((u32)(0x6b2268u)); r_esp -= 4; W32(r_esp, 0x5853cfu); call_ind(t); }
    /* 005853cf: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005853d2: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 005853d5: jmp 0x5853ec */ goto L_005853ec;
L_005853d7:; BB(0x005853d7);
    /* 005853d7: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005853da: fld qword ptr [ebp - 0x10] */ FPUSH(R_F64((u32)(r_ebp+0xfffffff0u)));
    /* 005853dd: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 005853e0: call dword ptr [0x6b2244] */ { u32 t = R32((u32)(0x6b2244u)); r_esp -= 4; W32(r_esp, 0x5853e6u); call_ind(t); }
    /* 005853e6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005853e9: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
L_005853ec:; BB(0x005853ec);
    /* 005853ec: fldz  */ FPUSH(0.0);
    /* 005853ee: fcomp qword ptr [ebp - 0x10] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xfffffff0u))); FPOP();
    /* 005853f1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005853f3: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 005853f6: jp 0x58542c */ if (fP) goto L_0058542c;
L_005853f8:; BB(0x005853f8);
    /* 005853f8: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005853fb: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005853fd: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00585400: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00585406: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x585408u); call_ind(t); }
    /* 00585408: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058540a: je 0x585443 */ if (fZ) goto L_00585443;
L_0058540c:; BB(0x0058540c);
    /* 0058540c: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0058540f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00585411: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00585414: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0058541a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58541cu); call_ind(t); }
    /* 0058541c: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0058541f: fild dword ptr [ebp - 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd4u)));
    /* 00585422: fcomp qword ptr [ebp - 0x10] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xfffffff0u))); FPOP();
    /* 00585425: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00585427: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0058542a: je 0x585443 */ if (fZ) goto L_00585443;
L_0058542c:; BB(0x0058542c);
    /* 0058542c: push 0x173 */ { u32 v = 0x173u; r_esp -= 4; W32(r_esp, v); }
    /* 00585431: push 0x6ccc60 */ { u32 v = 0x6ccc60u; r_esp -= 4; W32(r_esp, v); }
    /* 00585436: push 0x6ccc20 */ { u32 v = 0x6ccc20u; r_esp -= 4; W32(r_esp, v); }
    /* 0058543b: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x585440u); f_005e9f20();
    /* 00585440: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00585443:; BB(0x00585443);
    /* 00585443: fld qword ptr [ebp - 0x10] */ FPUSH(R_F64((u32)(r_ebp+0xfffffff0u)));
    /* 00585446: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x58544bu); f_00686cc0();
    /* 0058544b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058544c: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0058544f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00585451: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00585454: mov edx, dword ptr [eax + 0xbc] */ r_edx = R32((u32)(r_eax+0xbcu));
    /* 0058545a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x58545cu); call_ind(t); }
    /* 0058545c: mov esp, ebp */ r_esp = r_ebp;
    /* 0058545e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058545f: ret 4 */ FN_RET(0x00585310); r_esp += 8; return;
}

void f_005855e0(void) /* KenoScrollBox::vfunc47 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005855e0);
    /* 005855e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005855e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005855e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005855e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005855e7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005855ea: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005855ed: mov dword ptr [eax + 0x74], ecx */ W32((u32)(r_eax+0x74u), r_ecx);
    /* 005855f0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005855f3: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005855f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005855f7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005855fa: call 0x585150 */ r_esp -= 4; W32(r_esp, 0x5855ffu); f_00585150();
    /* 005855ff: mov esp, ebp */ r_esp = r_ebp;
    /* 00585601: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00585602: ret 4 */ FN_RET(0x005855e0); r_esp += 8; return;
}

