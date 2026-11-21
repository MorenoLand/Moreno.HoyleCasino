#include "protos.h"

void f_0060b4a0(void) /* sciEditBox::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060b4a0);
    /* 0060b4a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060b4a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0060b4a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060b4a5: push 0x6aacb8 */ { u32 v = 0x6aacb8u; r_esp -= 4; W32(r_esp, v); }
    /* 0060b4aa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060b4b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060b4b1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060b4b2: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0060b4b7: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060b4b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060b4ba: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0060b4bd: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0060b4c3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0060b4c6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060b4c9: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x60b4ceu); f_005ec5a0();
    /* 0060b4ce: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060b4d5: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060b4d8: mov dword ptr [eax], 0x6d8184 */ W32((u32)(r_eax), 0x6d8184u);
    /* 0060b4de: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060b4e1: mov dword ptr [ecx + 0x1dc], 0 */ W32((u32)(r_ecx+0x1dcu), 0x0u);
    /* 0060b4eb: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060b4ee: mov dword ptr [edx + 0x1e0], 0 */ W32((u32)(r_edx+0x1e0u), 0x0u);
    /* 0060b4f8: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060b4fb: mov byte ptr [eax + 0x1d0], 1 */ W8((u32)(r_eax+0x1d0u), 0x1u);
    /* 0060b502: push 0x3e8 */ { u32 v = 0x3e8u; r_esp -= 4; W32(r_esp, v); }
    /* 0060b507: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060b50a: call 0x5f5300 */ r_esp -= 4; W32(r_esp, 0x60b50fu); f_005f5300();
    /* 0060b50f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060b512: mov dword ptr [ecx + 0x1e4], 0 */ W32((u32)(r_ecx+0x1e4u), 0x0u);
    /* 0060b51c: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060b51f: mov byte ptr [edx + 0x1e8], 0 */ W8((u32)(r_edx+0x1e8u), 0x0u);
    /* 0060b526: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060b529: mov byte ptr [eax + 0x1f0], 0 */ W8((u32)(r_eax+0x1f0u), 0x0u);
    /* 0060b530: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060b533: mov dword ptr [ecx + 0x1ec], 0 */ W32((u32)(r_ecx+0x1ecu), 0x0u);
    /* 0060b53d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060b540: mov byte ptr [edx + 0x1f0], 0 */ W8((u32)(r_edx+0x1f0u), 0x0u);
    /* 0060b547: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060b54a: mov dword ptr [eax + 0x1f4], 0 */ W32((u32)(r_eax+0x1f4u), 0x0u);
    /* 0060b554: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060b557: mov dword ptr [ecx + 0x1d4], 0 */ W32((u32)(r_ecx+0x1d4u), 0x0u);
    /* 0060b561: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060b564: mov dword ptr [edx + 0x1d8], 0 */ W32((u32)(r_edx+0x1d8u), 0x0u);
    /* 0060b56e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060b571: mov byte ptr [eax + 0x1f8], 0x3c */ W8((u32)(r_eax+0x1f8u), 0x3cu);
    /* 0060b578: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060b57b: mov byte ptr [ecx + 0x1f9], 0x78 */ W8((u32)(r_ecx+0x1f9u), 0x78u);
    /* 0060b582: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060b585: mov byte ptr [edx + 0x1fa], 0xc8 */ W8((u32)(r_edx+0x1fau), 0xc8u);
    /* 0060b58c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060b593: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060b596: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060b599: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060b5a0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060b5a1: mov esp, ebp */ r_esp = r_ebp;
    /* 0060b5a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060b5a4: ret  */ FN_RET(0x0060b4a0); r_esp += 4; return;
}

void f_0060b5b0(void) /* sciEditBox::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060b5b0);
    /* 0060b5b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060b5b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0060b5b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060b5b5: push 0x6aacdb */ { u32 v = 0x6aacdbu; r_esp -= 4; W32(r_esp, v); }
    /* 0060b5ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060b5c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060b5c1: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060b5c4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0060b5c9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060b5cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060b5cc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0060b5cf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0060b5d5: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0060b5d8: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0060b5db: mov dword ptr [eax], 0x6d8184 */ W32((u32)(r_eax), 0x6d8184u);
    /* 0060b5e1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060b5e8: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0060b5eb: cmp dword ptr [ecx + 0x1e4], 0 */ {  u32 a = R32((u32)(r_ecx+0x1e4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060b5f2: je 0x60b626 */ if (fZ) goto L_0060b626;
L_0060b5f4:; BB(0x0060b5f4);
    /* 0060b5f4: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0060b5f7: mov eax, dword ptr [edx + 0x1e4] */ r_eax = R32((u32)(r_edx+0x1e4u));
    /* 0060b5fd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060b600: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060b603: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0060b606: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060b60a: je 0x60b61f */ if (fZ) goto L_0060b61f;
L_0060b60c:; BB(0x0060b60c);
    /* 0060b60c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060b60e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060b611: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0060b613: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060b616: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0060b618: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x60b61au); call_ind(t); }
    /* 0060b61a: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0060b61d: jmp 0x60b626 */ goto L_0060b626;
L_0060b61f:; BB(0x0060b61f);
    /* 0060b61f: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0060b626:; BB(0x0060b626);
    /* 0060b626: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0060b629: cmp dword ptr [eax + 0x1dc], 0 */ {  u32 a = R32((u32)(r_eax+0x1dcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060b630: je 0x60b664 */ if (fZ) goto L_0060b664;
L_0060b632:; BB(0x0060b632);
    /* 0060b632: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0060b635: mov edx, dword ptr [ecx + 0x1dc] */ r_edx = R32((u32)(r_ecx+0x1dcu));
    /* 0060b63b: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0060b63e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0060b641: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0060b644: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060b648: je 0x60b65d */ if (fZ) goto L_0060b65d;
L_0060b64a:; BB(0x0060b64a);
    /* 0060b64a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060b64c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060b64f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0060b651: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060b654: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0060b656: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x60b658u); call_ind(t); }
    /* 0060b658: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0060b65b: jmp 0x60b664 */ goto L_0060b664;
L_0060b65d:; BB(0x0060b65d);
    /* 0060b65d: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_0060b664:; BB(0x0060b664);
    /* 0060b664: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0060b667: cmp dword ptr [ecx + 0x1e0], 0 */ {  u32 a = R32((u32)(r_ecx+0x1e0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060b66e: je 0x60b6a2 */ if (fZ) goto L_0060b6a2;
L_0060b670:; BB(0x0060b670);
    /* 0060b670: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0060b673: mov eax, dword ptr [edx + 0x1e0] */ r_eax = R32((u32)(r_edx+0x1e0u));
    /* 0060b679: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0060b67c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060b67f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0060b682: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060b686: je 0x60b69b */ if (fZ) goto L_0060b69b;
L_0060b688:; BB(0x0060b688);
    /* 0060b688: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060b68a: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060b68d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0060b68f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060b692: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0060b694: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x60b696u); call_ind(t); }
    /* 0060b696: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0060b699: jmp 0x60b6a2 */ goto L_0060b6a2;
L_0060b69b:; BB(0x0060b69b);
    /* 0060b69b: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_0060b6a2:; BB(0x0060b6a2);
    /* 0060b6a2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060b6a9: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0060b6ac: call 0x5ec760 */ r_esp -= 4; W32(r_esp, 0x60b6b1u); f_005ec760();
    /* 0060b6b1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060b6b4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060b6bb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060b6bc: mov esp, ebp */ r_esp = r_ebp;
    /* 0060b6be: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060b6bf: ret  */ FN_RET(0x0060b5b0); r_esp += 4; return;
}

void f_0060b6c0(void) /* sciEditBox::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060b6c0);
    /* 0060b6c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060b6c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0060b6c3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060b6c6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0060b6c9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060b6cc: call 0x60c370 */ r_esp -= 4; W32(r_esp, 0x60b6d1u); f_0060c370();
    /* 0060b6d1: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0060b6d4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060b6d6: je 0x60b6f4 */ if (fZ) goto L_0060b6f4;
L_0060b6d8:; BB(0x0060b6d8);
    /* 0060b6d8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0060b6db: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060b6dc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060b6df: call 0x5f4b60 */ r_esp -= 4; W32(r_esp, 0x60b6e4u); f_005f4b60();
    /* 0060b6e4: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0060b6e7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060b6e9: je 0x60b6f4 */ if (fZ) goto L_0060b6f4;
L_0060b6eb:; BB(0x0060b6eb);
    /* 0060b6eb: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 0060b6f2: jmp 0x60b6fb */ goto L_0060b6fb;
L_0060b6f4:; BB(0x0060b6f4);
    /* 0060b6f4: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_0060b6fb:; BB(0x0060b6fb);
    /* 0060b6fb: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0060b6fe: mov esp, ebp */ r_esp = r_ebp;
    /* 0060b700: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060b701: ret 4 */ FN_RET(0x0060b6c0); r_esp += 8; return;
}

void f_0060b710(void) /* sciEditBox::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060b710);
    /* 0060b710: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060b711: mov ebp, esp */ r_ebp = r_esp;
    /* 0060b713: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060b714: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0060b717: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060b71a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060b71b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060b71e: call 0x5f4ed0 */ r_esp -= 4; W32(r_esp, 0x60b723u); f_005f4ed0();
    /* 0060b723: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0060b726: mov byte ptr [ecx + 4], 1 */ W8((u32)(r_ecx+0x4u), 0x1u);
    /* 0060b72a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060b72d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0060b72f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060b732: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 0060b735: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x60b737u); call_ind(t); }
    /* 0060b737: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0060b73a: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 0060b73d: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0060b73f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060b740: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060b743: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0060b745: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060b748: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0060b74b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x60b74du); call_ind(t); }
    /* 0060b74d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0060b750: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0060b753: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0060b755: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060b756: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060b759: call 0x5efa20 */ r_esp -= 4; W32(r_esp, 0x60b75eu); f_005efa20();
    /* 0060b75e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060b761: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0060b763: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060b766: mov eax, dword ptr [edx + 0xac] */ r_eax = R32((u32)(r_edx+0xacu));
    /* 0060b76c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x60b76eu); call_ind(t); }
    /* 0060b76e: mov esp, ebp */ r_esp = r_ebp;
    /* 0060b770: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060b771: ret 4 */ FN_RET(0x0060b710); r_esp += 8; return;
}

void f_0060b7a0(void) /* sciEditBox::vfunc14 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060b7a0);
    /* 0060b7a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060b7a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0060b7a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060b7a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0060b7a7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060b7aa: movsx ecx, byte ptr [eax + 0x14] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x14u));
    /* 0060b7ae: cmp ecx, 0x16 */ {  u32 a = r_ecx; u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060b7b1: je 0x60b7be */ if (fZ) goto L_0060b7be;
L_0060b7b3:; BB(0x0060b7b3);
    /* 0060b7b3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0060b7b6: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0060b7b9: and eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0060b7bc: jne 0x60b7c2 */ if (!fZ) goto L_0060b7c2;
L_0060b7be:; BB(0x0060b7be);
    /* 0060b7be: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0060b7c0: jmp 0x60b7c4 */ goto L_0060b7c4;
L_0060b7c2:; BB(0x0060b7c2);
    /* 0060b7c2: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0060b7c4:; BB(0x0060b7c4);
    /* 0060b7c4: mov esp, ebp */ r_esp = r_ebp;
    /* 0060b7c6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060b7c7: ret 4 */ FN_RET(0x0060b7a0); r_esp += 8; return;
}

void f_0060b7d0(void) /* sciEditBox::vfunc7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060b7d0);
    /* 0060b7d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060b7d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0060b7d3: sub esp, 0x82c */ {  u32 a = r_esp; u32 b = 0x82cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060b7d9: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0060b7de: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060b7e0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0060b7e3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0060b7e4: mov dword ptr [ebp - 0x828], ecx */ W32((u32)(r_ebp+0xfffff7d8u), r_ecx);
    /* 0060b7ea: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060b7ed: movsx ecx, byte ptr [eax + 0x14] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x14u));
    /* 0060b7f1: mov dword ptr [ebp - 0x82c], ecx */ W32((u32)(r_ebp+0xfffff7d4u), r_ecx);
    /* 0060b7f7: mov edx, dword ptr [ebp - 0x82c] */ r_edx = R32((u32)(r_ebp+0xfffff7d4u));
    /* 0060b7fd: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0060b800: mov dword ptr [ebp - 0x82c], edx */ W32((u32)(r_ebp+0xfffff7d4u), r_edx);
    /* 0060b806: cmp dword ptr [ebp - 0x82c], 0x1a */ {  u32 a = R32((u32)(r_ebp+0xfffff7d4u)); u32 b = 0x1au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0060b80d: ja 0x60bba5 */ if ((!fC&&!fZ)) goto L_0060bba5;
L_0060b813:; BB(0x0060b813);
    /* 0060b813: mov eax, dword ptr [ebp - 0x82c] */ r_eax = R32((u32)(r_ebp+0xfffff7d4u));
    /* 0060b819: movzx ecx, byte ptr [eax + 0x60bdfc] */ r_ecx = (u32)R8((u32)(r_eax+0x60bdfcu));
    /* 0060b820: jmp dword ptr [ecx*4 + 0x60bdcc] */ { u32 t = R32((u32)(r_ecx*4+0x60bdccu)); switch (t) { case 0x60b945u: goto L_0060b945; case 0x60b97eu: goto L_0060b97e; case 0x60b89du: goto L_0060b89d; case 0x60b8e2u: goto L_0060b8e2; case 0x60b86du: goto L_0060b86d; case 0x60b827u: goto L_0060b827; case 0x60b898u: goto L_0060b898; case 0x60bb9bu: goto L_0060bb9b; case 0x60ba93u: goto L_0060ba93; case 0x60b9b7u: goto L_0060b9b7; case 0x60bba0u: goto L_0060bba0; case 0x60bba5u: goto L_0060bba5; default: UNSUP(0x0060b820, "jump table entry is not a known target"); } }
L_0060b827:; BB(0x0060b827);
    /* 0060b827: mov edx, dword ptr [ebp - 0x828] */ r_edx = R32((u32)(r_ebp+0xfffff7d8u));
    /* 0060b82d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0060b82f: mov ecx, dword ptr [ebp - 0x828] */ r_ecx = R32((u32)(r_ebp+0xfffff7d8u));
    /* 0060b835: mov edx, dword ptr [eax + 0xb8] */ r_edx = R32((u32)(r_eax+0xb8u));
    /* 0060b83b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x60b83du); call_ind(t); }
    /* 0060b83d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060b83e: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x60b843u); f_00686ecc();
    /* 0060b843: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060b846: mov ecx, dword ptr [ebp - 0x828] */ r_ecx = R32((u32)(r_ebp+0xfffff7d8u));
    /* 0060b84c: mov dword ptr [ecx + 0xa0], eax */ W32((u32)(r_ecx+0xa0u), r_eax);
    /* 0060b852: mov edx, dword ptr [ebp - 0x828] */ r_edx = R32((u32)(r_ebp+0xfffff7d8u));
    /* 0060b858: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0060b85a: mov ecx, dword ptr [ebp - 0x828] */ r_ecx = R32((u32)(r_ebp+0xfffff7d8u));
    /* 0060b860: mov edx, dword ptr [eax + 0xac] */ r_edx = R32((u32)(r_eax+0xacu));
    /* 0060b866: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x60b868u); call_ind(t); }
    /* 0060b868: jmp 0x60bdb4 */ goto L_0060bdb4;
L_0060b86d:; BB(0x0060b86d);
    /* 0060b86d: mov eax, dword ptr [ebp - 0x828] */ r_eax = R32((u32)(r_ebp+0xfffff7d8u));
    /* 0060b873: mov dword ptr [eax + 0xa0], 0 */ W32((u32)(r_eax+0xa0u), 0x0u);
    /* 0060b87d: mov ecx, dword ptr [ebp - 0x828] */ r_ecx = R32((u32)(r_ebp+0xfffff7d8u));
    /* 0060b883: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0060b885: mov ecx, dword ptr [ebp - 0x828] */ r_ecx = R32((u32)(r_ebp+0xfffff7d8u));
    /* 0060b88b: mov eax, dword ptr [edx + 0xac] */ r_eax = R32((u32)(r_edx+0xacu));
    /* 0060b891: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x60b893u); call_ind(t); }
    /* 0060b893: jmp 0x60bdb4 */ goto L_0060bdb4;
L_0060b898:; BB(0x0060b898);
    /* 0060b898: jmp 0x60bdbb */ goto L_0060bdbb;
L_0060b89d:; BB(0x0060b89d);
    /* 0060b89d: mov ecx, dword ptr [ebp - 0x828] */ r_ecx = R32((u32)(r_ebp+0xfffff7d8u));
    /* 0060b8a3: cmp dword ptr [ecx + 0xa0], 0 */ {  u32 a = R32((u32)(r_ecx+0xa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060b8aa: jle 0x60b8c7 */ if ((fZ||fS!=fO)) goto L_0060b8c7;
L_0060b8ac:; BB(0x0060b8ac);
    /* 0060b8ac: mov ecx, dword ptr [ebp - 0x828] */ r_ecx = R32((u32)(r_ebp+0xfffff7d8u));
    /* 0060b8b2: mov edx, dword ptr [ecx + 0xa0] */ r_edx = R32((u32)(r_ecx+0xa0u));
    /* 0060b8b8: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0060b8bb: mov eax, dword ptr [ebp - 0x828] */ r_eax = R32((u32)(r_ebp+0xfffff7d8u));
    /* 0060b8c1: mov dword ptr [eax + 0xa0], edx */ W32((u32)(r_eax+0xa0u), r_edx);
L_0060b8c7:; BB(0x0060b8c7);
    /* 0060b8c7: mov ecx, dword ptr [ebp - 0x828] */ r_ecx = R32((u32)(r_ebp+0xfffff7d8u));
    /* 0060b8cd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0060b8cf: mov ecx, dword ptr [ebp - 0x828] */ r_ecx = R32((u32)(r_ebp+0xfffff7d8u));
    /* 0060b8d5: mov eax, dword ptr [edx + 0xac] */ r_eax = R32((u32)(r_edx+0xacu));
    /* 0060b8db: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x60b8ddu); call_ind(t); }
    /* 0060b8dd: jmp 0x60bdb4 */ goto L_0060bdb4;
L_0060b8e2:; BB(0x0060b8e2);
    /* 0060b8e2: mov ecx, dword ptr [ebp - 0x828] */ r_ecx = R32((u32)(r_ebp+0xfffff7d8u));
    /* 0060b8e8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0060b8ea: mov ecx, dword ptr [ebp - 0x828] */ r_ecx = R32((u32)(r_ebp+0xfffff7d8u));
    /* 0060b8f0: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 0060b8f6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x60b8f8u); call_ind(t); }
    /* 0060b8f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060b8f9: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x60b8feu); f_00686ecc();
    /* 0060b8fe: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060b901: mov ecx, dword ptr [ebp - 0x828] */ r_ecx = R32((u32)(r_ebp+0xfffff7d8u));
    /* 0060b907: cmp dword ptr [ecx + 0xa0], eax */ {  u32 a = R32((u32)(r_ecx+0xa0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060b90d: jge 0x60b92a */ if ((fS==fO)) goto L_0060b92a;
L_0060b90f:; BB(0x0060b90f);
    /* 0060b90f: mov ecx, dword ptr [ebp - 0x828] */ r_ecx = R32((u32)(r_ebp+0xfffff7d8u));
    /* 0060b915: mov edx, dword ptr [ecx + 0xa0] */ r_edx = R32((u32)(r_ecx+0xa0u));
    /* 0060b91b: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0060b91e: mov eax, dword ptr [ebp - 0x828] */ r_eax = R32((u32)(r_ebp+0xfffff7d8u));
    /* 0060b924: mov dword ptr [eax + 0xa0], edx */ W32((u32)(r_eax+0xa0u), r_edx);
L_0060b92a:; BB(0x0060b92a);
    /* 0060b92a: mov ecx, dword ptr [ebp - 0x828] */ r_ecx = R32((u32)(r_ebp+0xfffff7d8u));
    /* 0060b930: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0060b932: mov ecx, dword ptr [ebp - 0x828] */ r_ecx = R32((u32)(r_ebp+0xfffff7d8u));
    /* 0060b938: mov eax, dword ptr [edx + 0xac] */ r_eax = R32((u32)(r_edx+0xacu));
    /* 0060b93e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x60b940u); call_ind(t); }
    /* 0060b940: jmp 0x60bdb4 */ goto L_0060bdb4;
L_0060b945:; BB(0x0060b945);
    /* 0060b945: mov ecx, dword ptr [ebp - 0x828] */ r_ecx = R32((u32)(r_ebp+0xfffff7d8u));
    /* 0060b94b: movzx edx, byte ptr [ecx + 0xa4] */ r_edx = (u32)R8((u32)(r_ecx+0xa4u));
    /* 0060b952: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060b954: jne 0x60b979 */ if (!fZ) goto L_0060b979;
L_0060b956:; BB(0x0060b956);
    /* 0060b956: mov eax, dword ptr [ebp - 0x828] */ r_eax = R32((u32)(r_ebp+0xfffff7d8u));
    /* 0060b95c: mov byte ptr [eax + 0xa4], 1 */ W8((u32)(r_eax+0xa4u), 0x1u);
    /* 0060b963: mov ecx, dword ptr [ebp - 0x828] */ r_ecx = R32((u32)(r_ebp+0xfffff7d8u));
    /* 0060b969: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0060b96b: mov ecx, dword ptr [ebp - 0x828] */ r_ecx = R32((u32)(r_ebp+0xfffff7d8u));
    /* 0060b971: mov eax, dword ptr [edx + 0xac] */ r_eax = R32((u32)(r_edx+0xacu));
    /* 0060b977: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x60b979u); call_ind(t); }
L_0060b979:; BB(0x0060b979);
    /* 0060b979: jmp 0x60bdb4 */ goto L_0060bdb4;
L_0060b97e:; BB(0x0060b97e);
    /* 0060b97e: mov ecx, dword ptr [ebp - 0x828] */ r_ecx = R32((u32)(r_ebp+0xfffff7d8u));
    /* 0060b984: movzx edx, byte ptr [ecx + 0xa5] */ r_edx = (u32)R8((u32)(r_ecx+0xa5u));
    /* 0060b98b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060b98d: jne 0x60b9b2 */ if (!fZ) goto L_0060b9b2;
L_0060b98f:; BB(0x0060b98f);
    /* 0060b98f: mov eax, dword ptr [ebp - 0x828] */ r_eax = R32((u32)(r_ebp+0xfffff7d8u));
    /* 0060b995: mov byte ptr [eax + 0xa5], 1 */ W8((u32)(r_eax+0xa5u), 0x1u);
    /* 0060b99c: mov ecx, dword ptr [ebp - 0x828] */ r_ecx = R32((u32)(r_ebp+0xfffff7d8u));
    /* 0060b9a2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0060b9a4: mov ecx, dword ptr [ebp - 0x828] */ r_ecx = R32((u32)(r_ebp+0xfffff7d8u));
    /* 0060b9aa: mov eax, dword ptr [edx + 0xac] */ r_eax = R32((u32)(r_edx+0xacu));
    /* 0060b9b0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x60b9b2u); call_ind(t); }
L_0060b9b2:; BB(0x0060b9b2);
    /* 0060b9b2: jmp 0x60bdb4 */ goto L_0060bdb4;
L_0060b9b7:; BB(0x0060b9b7);
    /* 0060b9b7: mov ecx, dword ptr [ebp - 0x828] */ r_ecx = R32((u32)(r_ebp+0xfffff7d8u));
    /* 0060b9bd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0060b9bf: mov ecx, dword ptr [ebp - 0x828] */ r_ecx = R32((u32)(r_ebp+0xfffff7d8u));
    /* 0060b9c5: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 0060b9cb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x60b9cdu); call_ind(t); }
    /* 0060b9cd: mov dword ptr [ebp - 0x814], eax */ W32((u32)(r_ebp+0xfffff7ecu), r_eax);
    /* 0060b9d3: mov ecx, dword ptr [ebp - 0x814] */ r_ecx = R32((u32)(r_ebp+0xfffff7ecu));
    /* 0060b9d9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060b9da: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x60b9dfu); f_00686ecc();
    /* 0060b9df: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060b9e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060b9e4: je 0x60ba8e */ if (fZ) goto L_0060ba8e;
L_0060b9ea:; BB(0x0060b9ea);
    /* 0060b9ea: mov edx, dword ptr [ebp - 0x814] */ r_edx = R32((u32)(r_ebp+0xfffff7ecu));
    /* 0060b9f0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060b9f1: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x60b9f6u); f_00686ecc();
    /* 0060b9f6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060b9f9: mov ecx, dword ptr [ebp - 0x828] */ r_ecx = R32((u32)(r_ebp+0xfffff7d8u));
    /* 0060b9ff: cmp dword ptr [ecx + 0xa0], eax */ {  u32 a = R32((u32)(r_ecx+0xa0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060ba05: je 0x60ba8e */ if (fZ) goto L_0060ba8e;
L_0060ba0b:; BB(0x0060ba0b);
    /* 0060ba0b: mov edx, dword ptr [ebp - 0x814] */ r_edx = R32((u32)(r_ebp+0xfffff7ecu));
    /* 0060ba11: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060ba12: lea eax, [ebp - 0x810] */ r_eax = (u32)(r_ebp+0xfffff7f0u);
    /* 0060ba18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060ba19: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x60ba1eu); f_00686d8e();
    /* 0060ba1e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060ba21: mov ecx, dword ptr [ebp - 0x828] */ r_ecx = R32((u32)(r_ebp+0xfffff7d8u));
    /* 0060ba27: mov edx, dword ptr [ecx + 0xa0] */ r_edx = R32((u32)(r_ecx+0xa0u));
    /* 0060ba2d: lea eax, [ebp + edx - 0x80f] */ r_eax = (u32)(r_ebp+r_edx+0xfffff7f1u);
    /* 0060ba34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060ba35: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x60ba3au); f_00686ecc();
    /* 0060ba3a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060ba3d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0060ba40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060ba41: mov ecx, dword ptr [ebp - 0x828] */ r_ecx = R32((u32)(r_ebp+0xfffff7d8u));
    /* 0060ba47: mov edx, dword ptr [ecx + 0xa0] */ r_edx = R32((u32)(r_ecx+0xa0u));
    /* 0060ba4d: lea eax, [ebp + edx - 0x80f] */ r_eax = (u32)(r_ebp+r_edx+0xfffff7f1u);
    /* 0060ba54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060ba55: mov ecx, dword ptr [ebp - 0x828] */ r_ecx = R32((u32)(r_ebp+0xfffff7d8u));
    /* 0060ba5b: mov edx, dword ptr [ecx + 0xa0] */ r_edx = R32((u32)(r_ecx+0xa0u));
    /* 0060ba61: lea eax, [ebp + edx - 0x810] */ r_eax = (u32)(r_ebp+r_edx+0xfffff7f0u);
    /* 0060ba68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060ba69: call 0x686fde */ r_esp -= 4; W32(r_esp, 0x60ba6eu); f_00686fde();
    /* 0060ba6e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060ba71: lea ecx, [ebp - 0x810] */ r_ecx = (u32)(r_ebp+0xfffff7f0u);
    /* 0060ba77: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060ba78: mov edx, dword ptr [ebp - 0x828] */ r_edx = R32((u32)(r_ebp+0xfffff7d8u));
    /* 0060ba7e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0060ba80: mov ecx, dword ptr [ebp - 0x828] */ r_ecx = R32((u32)(r_ebp+0xfffff7d8u));
    /* 0060ba86: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0060ba8c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x60ba8eu); call_ind(t); }
L_0060ba8e:; BB(0x0060ba8e);
    /* 0060ba8e: jmp 0x60bdb4 */ goto L_0060bdb4;
L_0060ba93:; BB(0x0060ba93);
    /* 0060ba93: mov eax, dword ptr [ebp - 0x828] */ r_eax = R32((u32)(r_ebp+0xfffff7d8u));
    /* 0060ba99: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0060ba9b: mov ecx, dword ptr [ebp - 0x828] */ r_ecx = R32((u32)(r_ebp+0xfffff7d8u));
    /* 0060baa1: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 0060baa7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x60baa9u); call_ind(t); }
    /* 0060baa9: mov dword ptr [ebp - 0x814], eax */ W32((u32)(r_ebp+0xfffff7ecu), r_eax);
    /* 0060baaf: mov ecx, dword ptr [ebp - 0x814] */ r_ecx = R32((u32)(r_ebp+0xfffff7ecu));
    /* 0060bab5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060bab6: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x60babbu); f_00686ecc();
    /* 0060babb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060babe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 0060bac0: jbe 0x60bb96 */ if ((fC||fZ)) goto L_0060bb96;
L_0060bac6:; BB(0x0060bac6);
    /* 0060bac6: mov edx, dword ptr [ebp - 0x828] */ r_edx = R32((u32)(r_ebp+0xfffff7d8u));
    /* 0060bacc: cmp dword ptr [edx + 0xa0], 0 */ {  u32 a = R32((u32)(r_edx+0xa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060bad3: jle 0x60bb96 */ if ((fZ||fS!=fO)) goto L_0060bb96;
L_0060bad9:; BB(0x0060bad9);
    /* 0060bad9: mov eax, dword ptr [ebp - 0x828] */ r_eax = R32((u32)(r_ebp+0xfffff7d8u));
    /* 0060badf: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0060bae1: mov ecx, dword ptr [ebp - 0x828] */ r_ecx = R32((u32)(r_ebp+0xfffff7d8u));
    /* 0060bae7: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 0060baed: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x60baefu); call_ind(t); }
    /* 0060baef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060baf0: lea ecx, [ebp - 0x810] */ r_ecx = (u32)(r_ebp+0xfffff7f0u);
    /* 0060baf6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060baf7: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x60bafcu); f_00686d8e();
    /* 0060bafc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060baff: mov edx, dword ptr [ebp - 0x828] */ r_edx = R32((u32)(r_ebp+0xfffff7d8u));
    /* 0060bb05: mov eax, dword ptr [edx + 0xa0] */ r_eax = R32((u32)(r_edx+0xa0u));
    /* 0060bb0b: lea ecx, [ebp + eax - 0x810] */ r_ecx = (u32)(r_ebp+r_eax+0xfffff7f0u);
    /* 0060bb12: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060bb13: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x60bb18u); f_00686ecc();
    /* 0060bb18: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060bb1b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0060bb1e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060bb1f: mov edx, dword ptr [ebp - 0x828] */ r_edx = R32((u32)(r_ebp+0xfffff7d8u));
    /* 0060bb25: mov eax, dword ptr [edx + 0xa0] */ r_eax = R32((u32)(r_edx+0xa0u));
    /* 0060bb2b: lea ecx, [ebp + eax - 0x810] */ r_ecx = (u32)(r_ebp+r_eax+0xfffff7f0u);
    /* 0060bb32: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060bb33: mov edx, dword ptr [ebp - 0x828] */ r_edx = R32((u32)(r_ebp+0xfffff7d8u));
    /* 0060bb39: mov eax, dword ptr [edx + 0xa0] */ r_eax = R32((u32)(r_edx+0xa0u));
    /* 0060bb3f: lea ecx, [ebp + eax - 0x811] */ r_ecx = (u32)(r_ebp+r_eax+0xfffff7efu);
    /* 0060bb46: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060bb47: call 0x686fde */ r_esp -= 4; W32(r_esp, 0x60bb4cu); f_00686fde();
    /* 0060bb4c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060bb4f: mov edx, dword ptr [ebp - 0x828] */ r_edx = R32((u32)(r_ebp+0xfffff7d8u));
    /* 0060bb55: cmp dword ptr [edx + 0xa0], 0 */ {  u32 a = R32((u32)(r_edx+0xa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060bb5c: jle 0x60bb79 */ if ((fZ||fS!=fO)) goto L_0060bb79;
L_0060bb5e:; BB(0x0060bb5e);
    /* 0060bb5e: mov eax, dword ptr [ebp - 0x828] */ r_eax = R32((u32)(r_ebp+0xfffff7d8u));
    /* 0060bb64: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 0060bb6a: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0060bb6d: mov edx, dword ptr [ebp - 0x828] */ r_edx = R32((u32)(r_ebp+0xfffff7d8u));
    /* 0060bb73: mov dword ptr [edx + 0xa0], ecx */ W32((u32)(r_edx+0xa0u), r_ecx);
L_0060bb79:; BB(0x0060bb79);
    /* 0060bb79: lea eax, [ebp - 0x810] */ r_eax = (u32)(r_ebp+0xfffff7f0u);
    /* 0060bb7f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060bb80: mov ecx, dword ptr [ebp - 0x828] */ r_ecx = R32((u32)(r_ebp+0xfffff7d8u));
    /* 0060bb86: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0060bb88: mov ecx, dword ptr [ebp - 0x828] */ r_ecx = R32((u32)(r_ebp+0xfffff7d8u));
    /* 0060bb8e: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0060bb94: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x60bb96u); call_ind(t); }
L_0060bb96:; BB(0x0060bb96);
    /* 0060bb96: jmp 0x60bdb4 */ goto L_0060bdb4;
L_0060bb9b:; BB(0x0060bb9b);
    /* 0060bb9b: jmp 0x60bdbb */ goto L_0060bdbb;
L_0060bba0:; BB(0x0060bba0);
    /* 0060bba0: jmp 0x60bdbb */ goto L_0060bdbb;
L_0060bba5:; BB(0x0060bba5);
    /* 0060bba5: mov ecx, dword ptr [ebp - 0x828] */ r_ecx = R32((u32)(r_ebp+0xfffff7d8u));
    /* 0060bbab: cmp dword ptr [ecx + 0x1d4], 0 */ {  u32 a = R32((u32)(r_ecx+0x1d4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060bbb2: jg 0x60bbcb */ if ((!fZ&&fS==fO)) goto L_0060bbcb;
L_0060bbb4:; BB(0x0060bbb4);
    /* 0060bbb4: push 0x88 */ { u32 v = 0x88u; r_esp -= 4; W32(r_esp, v); }
    /* 0060bbb9: push 0x6d825c */ { u32 v = 0x6d825cu; r_esp -= 4; W32(r_esp, v); }
    /* 0060bbbe: push 0x6d8248 */ { u32 v = 0x6d8248u; r_esp -= 4; W32(r_esp, v); }
    /* 0060bbc3: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x60bbc8u); f_005e9f20();
    /* 0060bbc8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0060bbcb:; BB(0x0060bbcb);
    /* 0060bbcb: mov eax, dword ptr [ebp - 0x828] */ r_eax = R32((u32)(r_ebp+0xfffff7d8u));
    /* 0060bbd1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0060bbd3: mov ecx, dword ptr [ebp - 0x828] */ r_ecx = R32((u32)(r_ebp+0xfffff7d8u));
    /* 0060bbd9: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 0060bbdf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x60bbe1u); call_ind(t); }
    /* 0060bbe1: mov dword ptr [ebp - 0x814], eax */ W32((u32)(r_ebp+0xfffff7ecu), r_eax);
    /* 0060bbe7: mov ecx, dword ptr [ebp - 0x814] */ r_ecx = R32((u32)(r_ebp+0xfffff7ecu));
    /* 0060bbed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060bbee: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x60bbf3u); f_00686ecc();
    /* 0060bbf3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060bbf6: cmp eax, 0x7ff */ {  u32 a = r_eax; u32 b = 0x7ffu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0060bbfb: jae 0x60bdb4 */ if (!fC) goto L_0060bdb4;
L_0060bc01:; BB(0x0060bc01);
    /* 0060bc01: mov edx, dword ptr [ebp - 0x814] */ r_edx = R32((u32)(r_ebp+0xfffff7ecu));
    /* 0060bc07: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060bc08: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x60bc0du); f_00686ecc();
    /* 0060bc0d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060bc10: mov ecx, dword ptr [ebp - 0x828] */ r_ecx = R32((u32)(r_ebp+0xfffff7d8u));
    /* 0060bc16: cmp eax, dword ptr [ecx + 0x1d4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x1d4u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0060bc1c: jae 0x60bdb4 */ if (!fC) goto L_0060bdb4;
L_0060bc22:; BB(0x0060bc22);
    /* 0060bc22: mov edx, dword ptr [ebp - 0x828] */ r_edx = R32((u32)(r_ebp+0xfffff7d8u));
    /* 0060bc28: cmp dword ptr [edx + 0x1d8], 0 */ {  u32 a = R32((u32)(r_edx+0x1d8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060bc2f: je 0x60bc66 */ if (fZ) goto L_0060bc66;
L_0060bc31:; BB(0x0060bc31);
    /* 0060bc31: mov ecx, dword ptr [ebp - 0x828] */ r_ecx = R32((u32)(r_ebp+0xfffff7d8u));
    /* 0060bc37: call 0x5ef050 */ r_esp -= 4; W32(r_esp, 0x60bc3cu); f_005ef050();
    /* 0060bc3c: mov esi, eax */ r_esi = r_eax;
    /* 0060bc3e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060bc40: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060bc43: mov cl, byte ptr [eax + 0x14] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x14u))) & 0xffu);
    /* 0060bc46: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060bc47: mov ecx, dword ptr [ebp - 0x828] */ r_ecx = R32((u32)(r_ebp+0xfffff7d8u));
    /* 0060bc4d: call 0x5ee950 */ r_esp -= 4; W32(r_esp, 0x60bc52u); f_005ee950();
    /* 0060bc52: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0060bc54: mov edx, dword ptr [ebp - 0x828] */ r_edx = R32((u32)(r_ebp+0xfffff7d8u));
    /* 0060bc5a: cmp esi, dword ptr [edx + 0x1d8] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edx+0x1d8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060bc60: jg 0x60bdb4 */ if ((!fZ&&fS==fO)) goto L_0060bdb4;
L_0060bc66:; BB(0x0060bc66);
    /* 0060bc66: mov eax, dword ptr [ebp - 0x814] */ r_eax = R32((u32)(r_ebp+0xfffff7ecu));
    /* 0060bc6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060bc6d: lea ecx, [ebp - 0x810] */ r_ecx = (u32)(r_ebp+0xfffff7f0u);
    /* 0060bc73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060bc74: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x60bc79u); f_00686d8e();
    /* 0060bc79: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060bc7c: cmp dword ptr [0x795f90], 3 */ {  u32 a = R32((u32)(0x795f90u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060bc83: je 0x60bcf3 */ if (fZ) goto L_0060bcf3;
L_0060bc85:; BB(0x0060bc85);
    /* 0060bc85: mov edx, dword ptr [ebp - 0x828] */ r_edx = R32((u32)(r_ebp+0xfffff7d8u));
    /* 0060bc8b: mov eax, dword ptr [edx + 0xa0] */ r_eax = R32((u32)(r_edx+0xa0u));
    /* 0060bc91: lea ecx, [ebp + eax - 0x810] */ r_ecx = (u32)(r_ebp+r_eax+0xfffff7f0u);
    /* 0060bc98: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060bc99: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x60bc9eu); f_00686ecc();
    /* 0060bc9e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060bca1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0060bca4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060bca5: mov edx, dword ptr [ebp - 0x828] */ r_edx = R32((u32)(r_ebp+0xfffff7d8u));
    /* 0060bcab: mov eax, dword ptr [edx + 0xa0] */ r_eax = R32((u32)(r_edx+0xa0u));
    /* 0060bcb1: lea ecx, [ebp + eax - 0x810] */ r_ecx = (u32)(r_ebp+r_eax+0xfffff7f0u);
    /* 0060bcb8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060bcb9: mov edx, dword ptr [ebp - 0x828] */ r_edx = R32((u32)(r_ebp+0xfffff7d8u));
    /* 0060bcbf: mov eax, dword ptr [edx + 0xa0] */ r_eax = R32((u32)(r_edx+0xa0u));
    /* 0060bcc5: lea ecx, [ebp + eax - 0x80f] */ r_ecx = (u32)(r_ebp+r_eax+0xfffff7f1u);
    /* 0060bccc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060bccd: call 0x686fde */ r_esp -= 4; W32(r_esp, 0x60bcd2u); f_00686fde();
    /* 0060bcd2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060bcd5: mov edx, dword ptr [ebp - 0x828] */ r_edx = R32((u32)(r_ebp+0xfffff7d8u));
    /* 0060bcdb: mov eax, dword ptr [edx + 0xa0] */ r_eax = R32((u32)(r_edx+0xa0u));
    /* 0060bce1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0060bce4: mov dl, byte ptr [ecx + 0x14] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x14u))) & 0xffu);
    /* 0060bce7: mov byte ptr [ebp + eax - 0x810], dl */ W8((u32)(r_ebp+r_eax+0xfffff7f0u), (u8)r_edx);
    /* 0060bcee: jmp 0x60bd7c */ goto L_0060bd7c;
L_0060bcf3:; BB(0x0060bcf3);
    /* 0060bcf3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060bcf6: mov cl, byte ptr [eax + 0x14] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x14u))) & 0xffu);
    /* 0060bcf9: mov byte ptr [ebp - 0x821], cl */ W8((u32)(r_ebp+0xfffff7dfu), (u8)r_ecx);
    /* 0060bcff: lea edx, [ebp - 0x810] */ r_edx = (u32)(r_ebp+0xfffff7f0u);
    /* 0060bd05: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060bd06: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x60bd0bu); f_00686ecc();
    /* 0060bd0b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060bd0e: mov dword ptr [ebp - 0x820], eax */ W32((u32)(r_ebp+0xfffff7e0u), r_eax);
    /* 0060bd14: mov eax, dword ptr [ebp - 0x828] */ r_eax = R32((u32)(r_ebp+0xfffff7d8u));
    /* 0060bd1a: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 0060bd20: mov dword ptr [ebp - 0x81c], ecx */ W32((u32)(r_ebp+0xfffff7e4u), r_ecx);
    /* 0060bd26: jmp 0x60bd37 */ goto L_0060bd37;
L_0060bd28:; BB(0x0060bd28);
    /* 0060bd28: mov edx, dword ptr [ebp - 0x81c] */ r_edx = R32((u32)(r_ebp+0xfffff7e4u));
    /* 0060bd2e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0060bd31: mov dword ptr [ebp - 0x81c], edx */ W32((u32)(r_ebp+0xfffff7e4u), r_edx);
L_0060bd37:; BB(0x0060bd37);
    /* 0060bd37: mov eax, dword ptr [ebp - 0x820] */ r_eax = R32((u32)(r_ebp+0xfffff7e0u));
    /* 0060bd3d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0060bd40: cmp dword ptr [ebp - 0x81c], eax */ {  u32 a = R32((u32)(r_ebp+0xfffff7e4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060bd46: jg 0x60bd7c */ if ((!fZ&&fS==fO)) goto L_0060bd7c;
L_0060bd48:; BB(0x0060bd48);
    /* 0060bd48: mov ecx, dword ptr [ebp - 0x81c] */ r_ecx = R32((u32)(r_ebp+0xfffff7e4u));
    /* 0060bd4e: mov dl, byte ptr [ebp + ecx - 0x810] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+r_ecx+0xfffff7f0u))) & 0xffu);
    /* 0060bd55: mov byte ptr [ebp - 0x815], dl */ W8((u32)(r_ebp+0xfffff7ebu), (u8)r_edx);
    /* 0060bd5b: mov eax, dword ptr [ebp - 0x81c] */ r_eax = R32((u32)(r_ebp+0xfffff7e4u));
    /* 0060bd61: mov cl, byte ptr [ebp - 0x821] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffff7dfu))) & 0xffu);
    /* 0060bd67: mov byte ptr [ebp + eax - 0x810], cl */ W8((u32)(r_ebp+r_eax+0xfffff7f0u), (u8)r_ecx);
    /* 0060bd6e: mov dl, byte ptr [ebp - 0x815] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffff7ebu))) & 0xffu);
    /* 0060bd74: mov byte ptr [ebp - 0x821], dl */ W8((u32)(r_ebp+0xfffff7dfu), (u8)r_edx);
    /* 0060bd7a: jmp 0x60bd28 */ goto L_0060bd28;
L_0060bd7c:; BB(0x0060bd7c);
    /* 0060bd7c: mov eax, dword ptr [ebp - 0x828] */ r_eax = R32((u32)(r_ebp+0xfffff7d8u));
    /* 0060bd82: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 0060bd88: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0060bd8b: mov edx, dword ptr [ebp - 0x828] */ r_edx = R32((u32)(r_ebp+0xfffff7d8u));
    /* 0060bd91: mov dword ptr [edx + 0xa0], ecx */ W32((u32)(r_edx+0xa0u), r_ecx);
    /* 0060bd97: lea eax, [ebp - 0x810] */ r_eax = (u32)(r_ebp+0xfffff7f0u);
    /* 0060bd9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060bd9e: mov ecx, dword ptr [ebp - 0x828] */ r_ecx = R32((u32)(r_ebp+0xfffff7d8u));
    /* 0060bda4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0060bda6: mov ecx, dword ptr [ebp - 0x828] */ r_ecx = R32((u32)(r_ebp+0xfffff7d8u));
    /* 0060bdac: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0060bdb2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x60bdb4u); call_ind(t); }
L_0060bdb4:; BB(0x0060bdb4);
    /* 0060bdb4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0060bdb7: mov byte ptr [ecx + 4], 1 */ W8((u32)(r_ecx+0x4u), 0x1u);
L_0060bdbb:; BB(0x0060bdbb);
    /* 0060bdbb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0060bdbc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060bdbf: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0060bdc1: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x60bdc6u); f_00686d72();
    /* 0060bdc6: mov esp, ebp */ r_esp = r_ebp;
    /* 0060bdc8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060bdc9: ret 4 */ FN_RET(0x0060b7d0); r_esp += 8; return;
}

