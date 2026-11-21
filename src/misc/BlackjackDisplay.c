#include "protos.h"

void f_0040c420(void) /* BlackjackDisplay::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040c420);
    /* 0040c420: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040c421: mov ebp, esp */ r_ebp = r_esp;
    /* 0040c423: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040c426: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0040c429: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040c42c: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x40c431u); f_005e9e20();
    /* 0040c431: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040c434: mov dword ptr [eax], 0x6b37a8 */ W32((u32)(r_eax), 0x6b37a8u);
    /* 0040c43a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040c441: jmp 0x40c44c */ goto L_0040c44c;
L_0040c443:; BB(0x0040c443);
    /* 0040c443: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040c446: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040c449: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0040c44c:; BB(0x0040c44c);
    /* 0040c44c: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040c450: jge 0x40c462 */ if ((fS==fO)) goto L_0040c462;
L_0040c452:; BB(0x0040c452);
    /* 0040c452: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040c455: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040c458: mov dword ptr [eax + edx*4 + 4], 0 */ W32((u32)(r_eax+r_edx*4+0x4u), 0x0u);
    /* 0040c460: jmp 0x40c443 */ goto L_0040c443;
L_0040c462:; BB(0x0040c462);
    /* 0040c462: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040c469: jmp 0x40c474 */ goto L_0040c474;
L_0040c46b:; BB(0x0040c46b);
    /* 0040c46b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040c46e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040c471: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0040c474:; BB(0x0040c474);
    /* 0040c474: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040c478: jge 0x40c48a */ if ((fS==fO)) goto L_0040c48a;
L_0040c47a:; BB(0x0040c47a);
    /* 0040c47a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040c47d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040c480: mov dword ptr [eax + edx*4 + 0x18], 0 */ W32((u32)(r_eax+r_edx*4+0x18u), 0x0u);
    /* 0040c488: jmp 0x40c46b */ goto L_0040c46b;
L_0040c48a:; BB(0x0040c48a);
    /* 0040c48a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040c48d: mov dword ptr [ecx + 0x28], 0 */ W32((u32)(r_ecx+0x28u), 0x0u);
    /* 0040c494: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040c497: mov dword ptr [edx + 0x2c], 0 */ W32((u32)(r_edx+0x2cu), 0x0u);
    /* 0040c49e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040c4a1: mov dword ptr [eax + 0x3c], 0 */ W32((u32)(r_eax+0x3cu), 0x0u);
    /* 0040c4a8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040c4ab: mov dword ptr [ecx + 0x40], 0 */ W32((u32)(r_ecx+0x40u), 0x0u);
    /* 0040c4b2: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040c4b5: mov dword ptr [edx + 0x44], 0 */ W32((u32)(r_edx+0x44u), 0x0u);
    /* 0040c4bc: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040c4bf: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
    /* 0040c4c6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040c4c9: mov dword ptr [ecx + 0x34], 0 */ W32((u32)(r_ecx+0x34u), 0x0u);
    /* 0040c4d0: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040c4d3: mov dword ptr [edx + 0x38], 0 */ W32((u32)(r_edx+0x38u), 0x0u);
    /* 0040c4da: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040c4dd: mov esp, ebp */ r_esp = r_ebp;
    /* 0040c4df: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040c4e0: ret  */ FN_RET(0x0040c420); r_esp += 4; return;
}

void f_0040c4f0(void) /* BlackjackDisplay::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040c4f0);
    /* 0040c4f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040c4f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0040c4f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040c4f5: push 0x69d978 */ { u32 v = 0x69d978u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c4fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0040c500: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040c501: sub esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040c507: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0040c50c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040c50e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040c50f: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0040c512: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0040c518: mov dword ptr [ebp - 0x64], ecx */ W32((u32)(r_ebp+0xffffff9cu), r_ecx);
    /* 0040c51b: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 0040c51e: mov dword ptr [eax], 0x6b37a8 */ W32((u32)(r_eax), 0x6b37a8u);
    /* 0040c524: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040c52b: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0040c532: jmp 0x40c53d */ goto L_0040c53d;
L_0040c534:; BB(0x0040c534);
    /* 0040c534: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040c537: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040c53a: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0040c53d:; BB(0x0040c53d);
    /* 0040c53d: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040c541: jge 0x40c578 */ if ((fS==fO)) goto L_0040c578;
L_0040c543:; BB(0x0040c543);
    /* 0040c543: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040c546: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 0040c549: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 0040c54d: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0040c550: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040c553: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0040c556: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c55a: je 0x40c56f */ if (fZ) goto L_0040c56f;
L_0040c55c:; BB(0x0040c55c);
    /* 0040c55c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c55e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0040c561: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040c563: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040c566: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040c568: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40c56au); call_ind(t); }
    /* 0040c56a: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 0040c56d: jmp 0x40c576 */ goto L_0040c576;
L_0040c56f:; BB(0x0040c56f);
    /* 0040c56f: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
L_0040c576:; BB(0x0040c576);
    /* 0040c576: jmp 0x40c534 */ goto L_0040c534;
L_0040c578:; BB(0x0040c578);
    /* 0040c578: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0040c57f: jmp 0x40c58a */ goto L_0040c58a;
L_0040c581:; BB(0x0040c581);
    /* 0040c581: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040c584: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040c587: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0040c58a:; BB(0x0040c58a);
    /* 0040c58a: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040c58e: jge 0x40c5c5 */ if ((fS==fO)) goto L_0040c5c5;
L_0040c590:; BB(0x0040c590);
    /* 0040c590: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040c593: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 0040c596: mov ecx, dword ptr [eax + edx*4 + 0x18] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x18u));
    /* 0040c59a: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0040c59d: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040c5a0: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0040c5a3: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c5a7: je 0x40c5bc */ if (fZ) goto L_0040c5bc;
L_0040c5a9:; BB(0x0040c5a9);
    /* 0040c5a9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c5ab: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040c5ae: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040c5b0: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040c5b3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040c5b5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40c5b7u); call_ind(t); }
    /* 0040c5b7: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 0040c5ba: jmp 0x40c5c3 */ goto L_0040c5c3;
L_0040c5bc:; BB(0x0040c5bc);
    /* 0040c5bc: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
L_0040c5c3:; BB(0x0040c5c3);
    /* 0040c5c3: jmp 0x40c581 */ goto L_0040c581;
L_0040c5c5:; BB(0x0040c5c5);
    /* 0040c5c5: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0040c5c8: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0040c5cb: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 0040c5ce: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0040c5d1: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0040c5d4: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c5d8: je 0x40c5ed */ if (fZ) goto L_0040c5ed;
L_0040c5da:; BB(0x0040c5da);
    /* 0040c5da: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c5dc: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040c5df: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0040c5e1: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040c5e4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040c5e6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40c5e8u); call_ind(t); }
    /* 0040c5e8: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 0040c5eb: jmp 0x40c5f4 */ goto L_0040c5f4;
L_0040c5ed:; BB(0x0040c5ed);
    /* 0040c5ed: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
L_0040c5f4:; BB(0x0040c5f4);
    /* 0040c5f4: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0040c5f7: mov edx, dword ptr [ecx + 0x2c] */ r_edx = R32((u32)(r_ecx+0x2cu));
    /* 0040c5fa: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 0040c5fd: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0040c600: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0040c603: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c607: je 0x40c61c */ if (fZ) goto L_0040c61c;
L_0040c609:; BB(0x0040c609);
    /* 0040c609: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c60b: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0040c60e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0040c610: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0040c613: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040c615: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40c617u); call_ind(t); }
    /* 0040c617: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 0040c61a: jmp 0x40c623 */ goto L_0040c623;
L_0040c61c:; BB(0x0040c61c);
    /* 0040c61c: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
L_0040c623:; BB(0x0040c623);
    /* 0040c623: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0040c626: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 0040c629: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 0040c62c: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0040c62f: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0040c632: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c636: je 0x40c64b */ if (fZ) goto L_0040c64b;
L_0040c638:; BB(0x0040c638);
    /* 0040c638: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c63a: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0040c63d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0040c63f: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0040c642: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040c644: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40c646u); call_ind(t); }
    /* 0040c646: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 0040c649: jmp 0x40c652 */ goto L_0040c652;
L_0040c64b:; BB(0x0040c64b);
    /* 0040c64b: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
L_0040c652:; BB(0x0040c652);
    /* 0040c652: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0040c655: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 0040c658: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 0040c65b: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0040c65e: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0040c661: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c665: je 0x40c67a */ if (fZ) goto L_0040c67a;
L_0040c667:; BB(0x0040c667);
    /* 0040c667: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c669: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0040c66c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0040c66e: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0040c671: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040c673: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40c675u); call_ind(t); }
    /* 0040c675: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 0040c678: jmp 0x40c681 */ goto L_0040c681;
L_0040c67a:; BB(0x0040c67a);
    /* 0040c67a: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
L_0040c681:; BB(0x0040c681);
    /* 0040c681: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0040c684: mov edx, dword ptr [ecx + 0x44] */ r_edx = R32((u32)(r_ecx+0x44u));
    /* 0040c687: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 0040c68a: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0040c68d: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0040c690: cmp dword ptr [ebp - 0x44], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c694: je 0x40c6a9 */ if (fZ) goto L_0040c6a9;
L_0040c696:; BB(0x0040c696);
    /* 0040c696: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c698: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040c69b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0040c69d: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040c6a0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040c6a2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40c6a4u); call_ind(t); }
    /* 0040c6a4: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 0040c6a7: jmp 0x40c6b0 */ goto L_0040c6b0;
L_0040c6a9:; BB(0x0040c6a9);
    /* 0040c6a9: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
L_0040c6b0:; BB(0x0040c6b0);
    /* 0040c6b0: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0040c6b3: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 0040c6b6: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 0040c6b9: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0040c6bc: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0040c6bf: cmp dword ptr [ebp - 0x4c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c6c3: je 0x40c6db */ if (fZ) goto L_0040c6db;
L_0040c6c5:; BB(0x0040c6c5);
    /* 0040c6c5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c6c7: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040c6ca: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0040c6cc: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040c6cf: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040c6d1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40c6d3u); call_ind(t); }
    /* 0040c6d3: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 0040c6d9: jmp 0x40c6e5 */ goto L_0040c6e5;
L_0040c6db:; BB(0x0040c6db);
    /* 0040c6db: mov dword ptr [ebp - 0x84], 0 */ W32((u32)(r_ebp+0xffffff7cu), 0x0u);
L_0040c6e5:; BB(0x0040c6e5);
    /* 0040c6e5: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0040c6e8: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 0040c6eb: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 0040c6ee: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0040c6f1: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0040c6f4: cmp dword ptr [ebp - 0x54], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c6f8: je 0x40c710 */ if (fZ) goto L_0040c710;
L_0040c6fa:; BB(0x0040c6fa);
    /* 0040c6fa: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c6fc: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0040c6ff: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0040c701: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0040c704: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040c706: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40c708u); call_ind(t); }
    /* 0040c708: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 0040c70e: jmp 0x40c71a */ goto L_0040c71a;
L_0040c710:; BB(0x0040c710);
    /* 0040c710: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
L_0040c71a:; BB(0x0040c71a);
    /* 0040c71a: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0040c71d: mov edx, dword ptr [ecx + 0x38] */ r_edx = R32((u32)(r_ecx+0x38u));
    /* 0040c720: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 0040c723: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 0040c726: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 0040c729: cmp dword ptr [ebp - 0x5c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c72d: je 0x40c745 */ if (fZ) goto L_0040c745;
L_0040c72f:; BB(0x0040c72f);
    /* 0040c72f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c731: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0040c734: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0040c736: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0040c739: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040c73b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40c73du); call_ind(t); }
    /* 0040c73d: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 0040c743: jmp 0x40c74f */ goto L_0040c74f;
L_0040c745:; BB(0x0040c745);
    /* 0040c745: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
L_0040c74f:; BB(0x0040c74f);
    /* 0040c74f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0040c756: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0040c759: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x40c75eu); f_005e9e40();
    /* 0040c75e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040c761: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0040c768: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040c769: mov esp, ebp */ r_esp = r_ebp;
    /* 0040c76b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040c76c: ret  */ FN_RET(0x0040c4f0); r_esp += 4; return;
}

void f_0040cdc0(void) /* blackjackdisplay::func_0040cdc0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040cdc0);
    /* 0040cdc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040cdc1: mov ebp, esp */ r_ebp = r_esp;
    /* 0040cdc3: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040cdc6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0040cdc7: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0040cdca: mov dword ptr [ebp - 0x18], 0xffffffff */ W32((u32)(r_ebp+0xffffffe8u), 0xffffffffu);
    /* 0040cdd1: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
    /* 0040cdd8: mov dword ptr [ebp - 0x10], 2 */ W32((u32)(r_ebp+0xfffffff0u), 0x2u);
    /* 0040cddf: mov dword ptr [ebp - 0xc], 3 */ W32((u32)(r_ebp+0xfffffff4u), 0x3u);
    /* 0040cde6: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0040cded: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040cdf0: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0040cdf3: mov edx, dword ptr [ecx + eax*4 + 4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 0040cdf7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0040cdfa: imul eax, eax, 0x58 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x58u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040cdfd: lea ecx, [edx + eax + 0x28] */ r_ecx = (u32)(r_edx+r_eax+0x28u);
    /* 0040ce01: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0040ce04: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 0040ce07: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0040ce0a: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0040ce0d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040ce0e: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0040ce11: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040ce12: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040ce15: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040ce16: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0040ce1c: call 0x4193d0 */ r_esp -= 4; W32(r_esp, 0x40ce21u); f_004193d0();
    /* 0040ce21: mov word ptr [ebp - 0x1c], ax */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_eax);
    /* 0040ce25: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0040ce28: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040ce29: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0040ce2c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040ce2d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040ce30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040ce31: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0040ce34: call 0x40d040 */ r_esp -= 4; W32(r_esp, 0x40ce39u); f_0040d040();
    /* 0040ce39: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040ce3a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040ce3d: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x40ce42u); f_005eaf00();
    /* 0040ce42: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0040ce45: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040ce46: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0040ce49: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040ce4a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040ce4d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040ce4e: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0040ce51: call 0x40d330 */ r_esp -= 4; W32(r_esp, 0x40ce56u); f_0040d330();
    /* 0040ce56: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040ce57: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0040ce5a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040ce5b: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0040ce5e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040ce5f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040ce62: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040ce63: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0040ce66: call 0x40d0f0 */ r_esp -= 4; W32(r_esp, 0x40ce6bu); f_0040d0f0();
    /* 0040ce6b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040ce6c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040ce6f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0040ce71: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040ce74: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0040ce77: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40ce79u); call_ind(t); }
    /* 0040ce79: mov cx, word ptr [ebp - 0x1c] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe4u))) & 0xffffu);
    /* 0040ce7d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040ce7e: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x40ce83u); f_00641290();
    /* 0040ce83: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040ce86: mov esi, dword ptr [ebp + eax*4 - 0x18] */ r_esi = R32((u32)(r_ebp+r_eax*4+0xffffffe8u));
    /* 0040ce8a: imul esi, esi, 0xd */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0xdu; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040ce8d: mov dx, word ptr [ebp - 0x1c] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe4u))) & 0xffffu);
    /* 0040ce91: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040ce92: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x40ce97u); f_00641280();
    /* 0040ce97: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040ce9a: lea eax, [esi + eax - 1] */ r_eax = (u32)(r_esi+r_eax+0xffffffffu);
    /* 0040ce9e: cmp eax, 0x34 */ {  u32 a = r_eax; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040cea1: jl 0x40ceba */ if ((fS!=fO)) goto L_0040ceba;
L_0040cea3:; BB(0x0040cea3);
    /* 0040cea3: push 0xa5 */ { u32 v = 0xa5u; r_esp -= 4; W32(r_esp, v); }
    /* 0040cea8: push 0x6b38c8 */ { u32 v = 0x6b38c8u; r_esp -= 4; W32(r_esp, v); }
    /* 0040cead: push 0x6b3888 */ { u32 v = 0x6b3888u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ceb2: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x40ceb7u); f_005e9f20();
    /* 0040ceb7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0040ceba:; BB(0x0040ceba);
    /* 0040ceba: mov dx, word ptr [ebp - 0x1c] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe4u))) & 0xffffu);
    /* 0040cebe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040cebf: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x40cec4u); f_00641290();
    /* 0040cec4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040cec7: mov esi, dword ptr [ebp + eax*4 - 0x18] */ r_esi = R32((u32)(r_ebp+r_eax*4+0xffffffe8u));
    /* 0040cecb: imul esi, esi, 0xd */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0xdu; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040cece: mov ax, word ptr [ebp - 0x1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe4u))) & 0xffffu);
    /* 0040ced2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040ced3: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x40ced8u); f_00641280();
    /* 0040ced8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040cedb: lea ecx, [esi + eax - 1] */ r_ecx = (u32)(r_esi+r_eax+0xffffffffu);
    /* 0040cedf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040cee0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040cee3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040cee5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040cee8: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 0040ceee: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x40cef0u); call_ind(t); }
    /* 0040cef0: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0040cef3: imul eax, eax, 7 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x7u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040cef6: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0040cef9: lea edx, [ecx + eax + 5] */ r_edx = (u32)(r_ecx+r_eax+0x5u);
    /* 0040cefd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040cefe: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040cf01: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040cf03: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040cf06: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0040cf09: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40cf0bu); call_ind(t); }
    /* 0040cf0b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040cf0e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0040cf10: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040cf13: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0040cf16: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40cf18u); call_ind(t); }
    /* 0040cf18: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0040cf1b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040cf1c: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0040cf1f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040cf20: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040cf23: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040cf24: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0040cf27: call 0x40d530 */ r_esp -= 4; W32(r_esp, 0x40cf2cu); f_0040d530();
    /* 0040cf2c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0040cf2f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040cf31: je 0x40cf4f */ if (fZ) goto L_0040cf4f;
L_0040cf33:; BB(0x0040cf33);
    /* 0040cf33: movzx edx, byte ptr [ebp + 0x14] */ r_edx = (u32)R8((u32)(r_ebp+0x14u));
    /* 0040cf37: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040cf39: jne 0x40cf4f */ if (!fZ) goto L_0040cf4f;
L_0040cf3b:; BB(0x0040cf3b);
    /* 0040cf3b: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 0040cf3d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040cf40: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040cf42: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040cf45: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0040cf4b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40cf4du); call_ind(t); }
    /* 0040cf4d: jmp 0x40cf84 */ goto L_0040cf84;
L_0040cf4f:; BB(0x0040cf4f);
    /* 0040cf4f: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0040cf52: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040cf53: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0040cf56: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040cf57: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040cf5a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040cf5b: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0040cf61: call 0x419470 */ r_esp -= 4; W32(r_esp, 0x40cf66u); f_00419470();
    /* 0040cf66: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0040cf69: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040cf6b: jne 0x40cf84 */ if (!fZ) goto L_0040cf84;
L_0040cf6d:; BB(0x0040cf6d);
    /* 0040cf6d: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0040cf70: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040cf71: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0040cf74: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040cf75: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040cf78: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040cf79: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0040cf7f: call 0x419ad0 */ r_esp -= 4; W32(r_esp, 0x40cf84u); f_00419ad0();
L_0040cf84:; BB(0x0040cf84);
    /* 0040cf84: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040cf88: jge 0x40d023 */ if ((fS==fO)) goto L_0040d023;
L_0040cf8e:; BB(0x0040cf8e);
    /* 0040cf8e: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040cf92: jne 0x40cf9d */ if (!fZ) goto L_0040cf9d;
L_0040cf94:; BB(0x0040cf94);
    /* 0040cf94: mov dword ptr [ebp - 0x20], 0xffffffff */ W32((u32)(r_ebp+0xffffffe0u), 0xffffffffu);
    /* 0040cf9b: jmp 0x40cfcb */ goto L_0040cfcb;
L_0040cf9d:; BB(0x0040cf9d);
    /* 0040cf9d: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040cfa1: jne 0x40cfac */ if (!fZ) goto L_0040cfac;
L_0040cfa3:; BB(0x0040cfa3);
    /* 0040cfa3: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0040cfaa: jmp 0x40cfc5 */ goto L_0040cfc5;
L_0040cfac:; BB(0x0040cfac);
    /* 0040cfac: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0040cfaf: imul edx, edx, 0x118 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x118u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040cfb5: mov eax, dword ptr [0x790324] */ r_eax = R32((u32)(0x790324u));
    /* 0040cfba: movsx ecx, byte ptr [eax + edx + 0x119] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0x119u));
    /* 0040cfc2: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
L_0040cfc5:; BB(0x0040cfc5);
    /* 0040cfc5: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0040cfc8: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
L_0040cfcb:; BB(0x0040cfcb);
    /* 0040cfcb: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040cfce: cmp eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040cfd1: je 0x40d023 */ if (fZ) goto L_0040d023;
L_0040cfd3:; BB(0x0040cfd3);
    /* 0040cfd3: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040cfd7: jne 0x40cfe2 */ if (!fZ) goto L_0040cfe2;
L_0040cfd9:; BB(0x0040cfd9);
    /* 0040cfd9: mov dword ptr [ebp - 0x24], 0xffffffff */ W32((u32)(r_ebp+0xffffffdcu), 0xffffffffu);
    /* 0040cfe0: jmp 0x40d011 */ goto L_0040d011;
L_0040cfe2:; BB(0x0040cfe2);
    /* 0040cfe2: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040cfe6: jne 0x40cff1 */ if (!fZ) goto L_0040cff1;
L_0040cfe8:; BB(0x0040cfe8);
    /* 0040cfe8: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0040cfef: jmp 0x40d00b */ goto L_0040d00b;
L_0040cff1:; BB(0x0040cff1);
    /* 0040cff1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040cff4: imul ecx, ecx, 0x118 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x118u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040cffa: mov edx, dword ptr [0x790324] */ r_edx = R32((u32)(0x790324u));
    /* 0040d000: movsx eax, byte ptr [edx + ecx + 0x119] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+r_ecx+0x119u));
    /* 0040d008: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
L_0040d00b:; BB(0x0040d00b);
    /* 0040d00b: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0040d00e: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
L_0040d011:; BB(0x0040d011);
    /* 0040d011: cmp dword ptr [ebp - 0x24], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d015: je 0x40d023 */ if (fZ) goto L_0040d023;
L_0040d017:; BB(0x0040d017);
    /* 0040d017: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0040d019: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040d01c: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x40d021u); f_005eb5d0();
    /* 0040d021: jmp 0x40d030 */ goto L_0040d030;
L_0040d023:; BB(0x0040d023);
    /* 0040d023: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040d028: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040d02b: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x40d030u); f_005eb5d0();
L_0040d030:; BB(0x0040d030);
    /* 0040d030: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040d031: mov esp, ebp */ r_esp = r_ebp;
    /* 0040d033: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040d034: ret 0x10 */ FN_RET(0x0040cdc0); r_esp += 20; return;
}

