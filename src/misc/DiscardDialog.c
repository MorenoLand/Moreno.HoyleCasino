#include "protos.h"

void f_0046a260(void) /* DiscardDialog::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046a260);
    /* 0046a260: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046a261: mov ebp, esp */ r_ebp = r_esp;
    /* 0046a263: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046a264: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0046a267: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046a269: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046a26b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046a26e: call 0x518900 */ r_esp -= 4; W32(r_esp, 0x46a273u); f_00518900();
    /* 0046a273: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046a276: mov dword ptr [eax], 0x6bbaa4 */ W32((u32)(r_eax), 0x6bbaa4u);
    /* 0046a27c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046a27f: mov dword ptr [ecx + 0x1e0], 0 */ W32((u32)(r_ecx+0x1e0u), 0x0u);
    /* 0046a289: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046a28c: mov dword ptr [edx + 0x1e4], 0 */ W32((u32)(r_edx+0x1e4u), 0x0u);
    /* 0046a296: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046a299: mov dword ptr [eax + 0x1e8], 0 */ W32((u32)(r_eax+0x1e8u), 0x0u);
    /* 0046a2a3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046a2a6: mov dword ptr [ecx + 0x1ec], 0 */ W32((u32)(r_ecx+0x1ecu), 0x0u);
    /* 0046a2b0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046a2b3: mov dword ptr [edx + 0x1f0], 0 */ W32((u32)(r_edx+0x1f0u), 0x0u);
    /* 0046a2bd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046a2c0: mov dword ptr [eax + 0x1f4], 0 */ W32((u32)(r_eax+0x1f4u), 0x0u);
    /* 0046a2ca: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046a2cd: mov dword ptr [ecx + 0x1f8], 0 */ W32((u32)(r_ecx+0x1f8u), 0x0u);
    /* 0046a2d7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046a2da: mov dword ptr [edx + 0x1fc], 0 */ W32((u32)(r_edx+0x1fcu), 0x0u);
    /* 0046a2e4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046a2e7: mov dword ptr [eax + 0x200], 0 */ W32((u32)(r_eax+0x200u), 0x0u);
    /* 0046a2f1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046a2f4: mov dword ptr [ecx + 0x204], 0 */ W32((u32)(r_ecx+0x204u), 0x0u);
    /* 0046a2fe: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046a301: mov dword ptr [edx + 0x208], 0 */ W32((u32)(r_edx+0x208u), 0x0u);
    /* 0046a30b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046a30e: mov dword ptr [eax + 0x20c], 0 */ W32((u32)(r_eax+0x20cu), 0x0u);
    /* 0046a318: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046a31b: mov dword ptr [ecx + 0x210], 0 */ W32((u32)(r_ecx+0x210u), 0x0u);
    /* 0046a325: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046a328: mov dword ptr [edx + 0x214], 0 */ W32((u32)(r_edx+0x214u), 0x0u);
    /* 0046a332: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046a335: mov dword ptr [eax + 0x218], 0 */ W32((u32)(r_eax+0x218u), 0x0u);
    /* 0046a33f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046a342: mov esp, ebp */ r_esp = r_ebp;
    /* 0046a344: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046a345: ret  */ FN_RET(0x0046a260); r_esp += 4; return;
}

void f_0046a350(void) /* DiscardDialog::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046a350);
    /* 0046a350: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046a351: mov ebp, esp */ r_ebp = r_esp;
    /* 0046a353: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0046a355: push 0x69f6cf */ { u32 v = 0x69f6cfu; r_esp -= 4; W32(r_esp, v); }
    /* 0046a35a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0046a360: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046a361: sub esp, 0xb8 */ {  u32 a = r_esp; u32 b = 0xb8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0046a367: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0046a36c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0046a36e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046a36f: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0046a372: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0046a378: mov dword ptr [ebp - 0x88], ecx */ W32((u32)(r_ebp+0xffffff78u), r_ecx);
    /* 0046a37e: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0046a384: mov dword ptr [eax], 0x6bbaa4 */ W32((u32)(r_eax), 0x6bbaa4u);
    /* 0046a38a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0046a391: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046a397: mov edx, dword ptr [ecx + 0x1e0] */ r_edx = R32((u32)(r_ecx+0x1e0u));
    /* 0046a39d: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0046a3a0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0046a3a3: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0046a3a6: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046a3aa: je 0x46a3c2 */ if (fZ) goto L_0046a3c2;
L_0046a3ac:; BB(0x0046a3ac);
    /* 0046a3ac: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046a3ae: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0046a3b1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0046a3b3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0046a3b6: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0046a3b8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46a3bau); call_ind(t); }
    /* 0046a3ba: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 0046a3c0: jmp 0x46a3cc */ goto L_0046a3cc;
L_0046a3c2:; BB(0x0046a3c2);
    /* 0046a3c2: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
L_0046a3cc:; BB(0x0046a3cc);
    /* 0046a3cc: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046a3d2: mov edx, dword ptr [ecx + 0x1e4] */ r_edx = R32((u32)(r_ecx+0x1e4u));
    /* 0046a3d8: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0046a3db: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0046a3de: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0046a3e1: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046a3e5: je 0x46a3fd */ if (fZ) goto L_0046a3fd;
L_0046a3e7:; BB(0x0046a3e7);
    /* 0046a3e7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046a3e9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046a3ec: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0046a3ee: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046a3f1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0046a3f3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46a3f5u); call_ind(t); }
    /* 0046a3f5: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 0046a3fb: jmp 0x46a407 */ goto L_0046a407;
L_0046a3fd:; BB(0x0046a3fd);
    /* 0046a3fd: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
L_0046a407:; BB(0x0046a407);
    /* 0046a407: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046a40d: mov edx, dword ptr [ecx + 0x1e8] */ r_edx = R32((u32)(r_ecx+0x1e8u));
    /* 0046a413: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0046a416: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0046a419: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0046a41c: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046a420: je 0x46a438 */ if (fZ) goto L_0046a438;
L_0046a422:; BB(0x0046a422);
    /* 0046a422: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046a424: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0046a427: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0046a429: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0046a42c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0046a42e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46a430u); call_ind(t); }
    /* 0046a430: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 0046a436: jmp 0x46a442 */ goto L_0046a442;
L_0046a438:; BB(0x0046a438);
    /* 0046a438: mov dword ptr [ebp - 0x94], 0 */ W32((u32)(r_ebp+0xffffff6cu), 0x0u);
L_0046a442:; BB(0x0046a442);
    /* 0046a442: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046a448: mov edx, dword ptr [ecx + 0x1ec] */ r_edx = R32((u32)(r_ecx+0x1ecu));
    /* 0046a44e: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 0046a451: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0046a454: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0046a457: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046a45b: je 0x46a473 */ if (fZ) goto L_0046a473;
L_0046a45d:; BB(0x0046a45d);
    /* 0046a45d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046a45f: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0046a462: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0046a464: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0046a467: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0046a469: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46a46bu); call_ind(t); }
    /* 0046a46b: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 0046a471: jmp 0x46a47d */ goto L_0046a47d;
L_0046a473:; BB(0x0046a473);
    /* 0046a473: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
L_0046a47d:; BB(0x0046a47d);
    /* 0046a47d: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046a483: mov edx, dword ptr [ecx + 0x1f0] */ r_edx = R32((u32)(r_ecx+0x1f0u));
    /* 0046a489: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 0046a48c: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0046a48f: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0046a492: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046a496: je 0x46a4ae */ if (fZ) goto L_0046a4ae;
L_0046a498:; BB(0x0046a498);
    /* 0046a498: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046a49a: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0046a49d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0046a49f: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0046a4a2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0046a4a4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46a4a6u); call_ind(t); }
    /* 0046a4a6: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
    /* 0046a4ac: jmp 0x46a4b8 */ goto L_0046a4b8;
L_0046a4ae:; BB(0x0046a4ae);
    /* 0046a4ae: mov dword ptr [ebp - 0x9c], 0 */ W32((u32)(r_ebp+0xffffff64u), 0x0u);
L_0046a4b8:; BB(0x0046a4b8);
    /* 0046a4b8: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046a4be: mov edx, dword ptr [ecx + 0x1f4] */ r_edx = R32((u32)(r_ecx+0x1f4u));
    /* 0046a4c4: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 0046a4c7: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0046a4ca: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0046a4cd: cmp dword ptr [ebp - 0x38], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046a4d1: je 0x46a4e9 */ if (fZ) goto L_0046a4e9;
L_0046a4d3:; BB(0x0046a4d3);
    /* 0046a4d3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046a4d5: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046a4d8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0046a4da: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046a4dd: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0046a4df: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46a4e1u); call_ind(t); }
    /* 0046a4e1: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
    /* 0046a4e7: jmp 0x46a4f3 */ goto L_0046a4f3;
L_0046a4e9:; BB(0x0046a4e9);
    /* 0046a4e9: mov dword ptr [ebp - 0xa0], 0 */ W32((u32)(r_ebp+0xffffff60u), 0x0u);
L_0046a4f3:; BB(0x0046a4f3);
    /* 0046a4f3: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046a4f9: mov edx, dword ptr [ecx + 0x1f8] */ r_edx = R32((u32)(r_ecx+0x1f8u));
    /* 0046a4ff: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 0046a502: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0046a505: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0046a508: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046a50c: je 0x46a524 */ if (fZ) goto L_0046a524;
L_0046a50e:; BB(0x0046a50e);
    /* 0046a50e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046a510: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0046a513: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0046a515: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0046a518: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0046a51a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46a51cu); call_ind(t); }
    /* 0046a51c: mov dword ptr [ebp - 0xa4], eax */ W32((u32)(r_ebp+0xffffff5cu), r_eax);
    /* 0046a522: jmp 0x46a52e */ goto L_0046a52e;
L_0046a524:; BB(0x0046a524);
    /* 0046a524: mov dword ptr [ebp - 0xa4], 0 */ W32((u32)(r_ebp+0xffffff5cu), 0x0u);
L_0046a52e:; BB(0x0046a52e);
    /* 0046a52e: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046a534: mov edx, dword ptr [ecx + 0x1fc] */ r_edx = R32((u32)(r_ecx+0x1fcu));
    /* 0046a53a: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 0046a53d: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0046a540: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0046a543: cmp dword ptr [ebp - 0x48], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046a547: je 0x46a55f */ if (fZ) goto L_0046a55f;
L_0046a549:; BB(0x0046a549);
    /* 0046a549: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046a54b: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0046a54e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0046a550: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0046a553: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0046a555: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46a557u); call_ind(t); }
    /* 0046a557: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 0046a55d: jmp 0x46a569 */ goto L_0046a569;
L_0046a55f:; BB(0x0046a55f);
    /* 0046a55f: mov dword ptr [ebp - 0xa8], 0 */ W32((u32)(r_ebp+0xffffff58u), 0x0u);
L_0046a569:; BB(0x0046a569);
    /* 0046a569: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046a56f: mov edx, dword ptr [ecx + 0x200] */ r_edx = R32((u32)(r_ecx+0x200u));
    /* 0046a575: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 0046a578: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0046a57b: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0046a57e: cmp dword ptr [ebp - 0x50], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046a582: je 0x46a59a */ if (fZ) goto L_0046a59a;
L_0046a584:; BB(0x0046a584);
    /* 0046a584: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046a586: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0046a589: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0046a58b: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0046a58e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0046a590: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46a592u); call_ind(t); }
    /* 0046a592: mov dword ptr [ebp - 0xac], eax */ W32((u32)(r_ebp+0xffffff54u), r_eax);
    /* 0046a598: jmp 0x46a5a4 */ goto L_0046a5a4;
L_0046a59a:; BB(0x0046a59a);
    /* 0046a59a: mov dword ptr [ebp - 0xac], 0 */ W32((u32)(r_ebp+0xffffff54u), 0x0u);
L_0046a5a4:; BB(0x0046a5a4);
    /* 0046a5a4: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046a5aa: mov edx, dword ptr [ecx + 0x204] */ r_edx = R32((u32)(r_ecx+0x204u));
    /* 0046a5b0: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 0046a5b3: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 0046a5b6: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 0046a5b9: cmp dword ptr [ebp - 0x58], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046a5bd: je 0x46a5d5 */ if (fZ) goto L_0046a5d5;
L_0046a5bf:; BB(0x0046a5bf);
    /* 0046a5bf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046a5c1: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0046a5c4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0046a5c6: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0046a5c9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0046a5cb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46a5cdu); call_ind(t); }
    /* 0046a5cd: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 0046a5d3: jmp 0x46a5df */ goto L_0046a5df;
L_0046a5d5:; BB(0x0046a5d5);
    /* 0046a5d5: mov dword ptr [ebp - 0xb0], 0 */ W32((u32)(r_ebp+0xffffff50u), 0x0u);
L_0046a5df:; BB(0x0046a5df);
    /* 0046a5df: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046a5e5: mov edx, dword ptr [ecx + 0x208] */ r_edx = R32((u32)(r_ecx+0x208u));
    /* 0046a5eb: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 0046a5ee: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 0046a5f1: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 0046a5f4: cmp dword ptr [ebp - 0x60], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046a5f8: je 0x46a610 */ if (fZ) goto L_0046a610;
L_0046a5fa:; BB(0x0046a5fa);
    /* 0046a5fa: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046a5fc: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0046a5ff: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0046a601: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0046a604: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0046a606: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46a608u); call_ind(t); }
    /* 0046a608: mov dword ptr [ebp - 0xb4], eax */ W32((u32)(r_ebp+0xffffff4cu), r_eax);
    /* 0046a60e: jmp 0x46a61a */ goto L_0046a61a;
L_0046a610:; BB(0x0046a610);
    /* 0046a610: mov dword ptr [ebp - 0xb4], 0 */ W32((u32)(r_ebp+0xffffff4cu), 0x0u);
L_0046a61a:; BB(0x0046a61a);
    /* 0046a61a: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046a620: mov edx, dword ptr [ecx + 0x20c] */ r_edx = R32((u32)(r_ecx+0x20cu));
    /* 0046a626: mov dword ptr [ebp - 0x6c], edx */ W32((u32)(r_ebp+0xffffff94u), r_edx);
    /* 0046a629: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 0046a62c: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 0046a62f: cmp dword ptr [ebp - 0x68], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046a633: je 0x46a64b */ if (fZ) goto L_0046a64b;
L_0046a635:; BB(0x0046a635);
    /* 0046a635: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046a637: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0046a63a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0046a63c: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0046a63f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0046a641: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46a643u); call_ind(t); }
    /* 0046a643: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 0046a649: jmp 0x46a655 */ goto L_0046a655;
L_0046a64b:; BB(0x0046a64b);
    /* 0046a64b: mov dword ptr [ebp - 0xb8], 0 */ W32((u32)(r_ebp+0xffffff48u), 0x0u);
L_0046a655:; BB(0x0046a655);
    /* 0046a655: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046a65b: mov edx, dword ptr [ecx + 0x210] */ r_edx = R32((u32)(r_ecx+0x210u));
    /* 0046a661: mov dword ptr [ebp - 0x74], edx */ W32((u32)(r_ebp+0xffffff8cu), r_edx);
    /* 0046a664: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0046a667: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 0046a66a: cmp dword ptr [ebp - 0x70], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046a66e: je 0x46a686 */ if (fZ) goto L_0046a686;
L_0046a670:; BB(0x0046a670);
    /* 0046a670: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046a672: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 0046a675: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0046a677: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 0046a67a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0046a67c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46a67eu); call_ind(t); }
    /* 0046a67e: mov dword ptr [ebp - 0xbc], eax */ W32((u32)(r_ebp+0xffffff44u), r_eax);
    /* 0046a684: jmp 0x46a690 */ goto L_0046a690;
L_0046a686:; BB(0x0046a686);
    /* 0046a686: mov dword ptr [ebp - 0xbc], 0 */ W32((u32)(r_ebp+0xffffff44u), 0x0u);
L_0046a690:; BB(0x0046a690);
    /* 0046a690: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046a696: mov edx, dword ptr [ecx + 0x214] */ r_edx = R32((u32)(r_ecx+0x214u));
    /* 0046a69c: mov dword ptr [ebp - 0x7c], edx */ W32((u32)(r_ebp+0xffffff84u), r_edx);
    /* 0046a69f: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 0046a6a2: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 0046a6a5: cmp dword ptr [ebp - 0x78], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046a6a9: je 0x46a6c1 */ if (fZ) goto L_0046a6c1;
L_0046a6ab:; BB(0x0046a6ab);
    /* 0046a6ab: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046a6ad: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 0046a6b0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0046a6b2: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 0046a6b5: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0046a6b7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46a6b9u); call_ind(t); }
    /* 0046a6b9: mov dword ptr [ebp - 0xc0], eax */ W32((u32)(r_ebp+0xffffff40u), r_eax);
    /* 0046a6bf: jmp 0x46a6cb */ goto L_0046a6cb;
L_0046a6c1:; BB(0x0046a6c1);
    /* 0046a6c1: mov dword ptr [ebp - 0xc0], 0 */ W32((u32)(r_ebp+0xffffff40u), 0x0u);
L_0046a6cb:; BB(0x0046a6cb);
    /* 0046a6cb: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046a6d1: mov edx, dword ptr [ecx + 0x218] */ r_edx = R32((u32)(r_ecx+0x218u));
    /* 0046a6d7: mov dword ptr [ebp - 0x84], edx */ W32((u32)(r_ebp+0xffffff7cu), r_edx);
    /* 0046a6dd: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 0046a6e3: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 0046a6e6: cmp dword ptr [ebp - 0x80], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046a6ea: je 0x46a702 */ if (fZ) goto L_0046a702;
L_0046a6ec:; BB(0x0046a6ec);
    /* 0046a6ec: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046a6ee: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 0046a6f1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0046a6f3: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 0046a6f6: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0046a6f8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46a6fau); call_ind(t); }
    /* 0046a6fa: mov dword ptr [ebp - 0xc4], eax */ W32((u32)(r_ebp+0xffffff3cu), r_eax);
    /* 0046a700: jmp 0x46a70c */ goto L_0046a70c;
L_0046a702:; BB(0x0046a702);
    /* 0046a702: mov dword ptr [ebp - 0xc4], 0 */ W32((u32)(r_ebp+0xffffff3cu), 0x0u);
L_0046a70c:; BB(0x0046a70c);
    /* 0046a70c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0046a713: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046a719: call 0x518980 */ r_esp -= 4; W32(r_esp, 0x46a71eu); f_00518980();
    /* 0046a71e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046a721: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0046a728: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0046a729: mov esp, ebp */ r_esp = r_ebp;
    /* 0046a72b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046a72c: ret  */ FN_RET(0x0046a350); r_esp += 4; return;
}

void f_0046a730(void) /* DiscardDialog::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046a730);
    /* 0046a730: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046a731: mov ebp, esp */ r_ebp = r_esp;
    /* 0046a733: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0046a735: push 0x69f795 */ { u32 v = 0x69f795u; r_esp -= 4; W32(r_esp, v); }
    /* 0046a73a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0046a740: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046a741: sub esp, 0xb8 */ {  u32 a = r_esp; u32 b = 0xb8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0046a747: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0046a74c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0046a74e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046a74f: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0046a752: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0046a758: mov dword ptr [ebp - 0x88], ecx */ W32((u32)(r_ebp+0xffffff78u), r_ecx);
    /* 0046a75e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046a760: push 0x186ab */ { u32 v = 0x186abu; r_esp -= 4; W32(r_esp, v); }
    /* 0046a765: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046a76b: call 0x5f83d0 */ r_esp -= 4; W32(r_esp, 0x46a770u); f_005f83d0();
    /* 0046a770: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0046a772: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046a774: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 0046a776: push 0x6bbb00 */ { u32 v = 0x6bbb00u; r_esp -= 4; W32(r_esp, v); }
    /* 0046a77b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x46a780u); f_00630f40();
    /* 0046a780: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046a783: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046a784: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046a78a: call 0x5f73e0 */ r_esp -= 4; W32(r_esp, 0x46a78fu); f_005f73e0();
    /* 0046a78f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046a791: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046a797: call 0x518ac0 */ r_esp -= 4; W32(r_esp, 0x46a79cu); f_00518ac0();
    /* 0046a79c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046a79e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046a7a0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046a7a2: push 0xa1 */ { u32 v = 0xa1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046a7a7: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 0046a7a9: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 0046a7ab: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046a7ad: push 0xa0 */ { u32 v = 0xa0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046a7b2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046a7b4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046a7b6: push 0x14f */ { u32 v = 0x14fu; r_esp -= 4; W32(r_esp, v); }
    /* 0046a7bb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046a7bd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046a7bf: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046a7c5: call 0x5fa880 */ r_esp -= 4; W32(r_esp, 0x46a7cau); f_005fa880();
    /* 0046a7ca: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046a7cc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046a7ce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046a7d0: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0046a7d5: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0046a7da: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0046a7df: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046a7e1: push 0xa1 */ { u32 v = 0xa1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046a7e6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046a7e8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046a7ea: push 0x14f */ { u32 v = 0x14fu; r_esp -= 4; W32(r_esp, v); }
    /* 0046a7ef: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046a7f1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046a7f3: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046a7f9: call 0x5fa880 */ r_esp -= 4; W32(r_esp, 0x46a7feu); f_005fa880();
    /* 0046a7fe: push 0x1e4 */ { u32 v = 0x1e4u; r_esp -= 4; W32(r_esp, v); }
    /* 0046a803: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x46a808u); f_00686d82();
    /* 0046a808: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046a80b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0046a80e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0046a815: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046a819: je 0x46a832 */ if (fZ) goto L_0046a832;
L_0046a81b:; BB(0x0046a81b);
    /* 0046a81b: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0046a821: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046a822: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0046a825: call 0x46c3e0 */ r_esp -= 4; W32(r_esp, 0x46a82au); f_0046c3e0();
    /* 0046a82a: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 0046a830: jmp 0x46a83c */ goto L_0046a83c;
L_0046a832:; BB(0x0046a832);
    /* 0046a832: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
L_0046a83c:; BB(0x0046a83c);
    /* 0046a83c: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 0046a842: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0046a845: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0046a84c: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046a852: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0046a855: mov dword ptr [edx + 0x1e0], eax */ W32((u32)(r_edx+0x1e0u), r_eax);
    /* 0046a85b: push 0x186a1 */ { u32 v = 0x186a1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046a860: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046a866: mov edx, dword ptr [ecx + 0x1e0] */ r_edx = R32((u32)(r_ecx+0x1e0u));
    /* 0046a86c: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0046a872: mov ecx, dword ptr [eax + 0x1e0] */ r_ecx = R32((u32)(r_eax+0x1e0u));
    /* 0046a878: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0046a87a: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 0046a880: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46a882u); call_ind(t); }
    /* 0046a882: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046a888: mov edx, dword ptr [ecx + 0x1e0] */ r_edx = R32((u32)(r_ecx+0x1e0u));
    /* 0046a88e: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0046a894: mov ecx, dword ptr [eax + 0x1e0] */ r_ecx = R32((u32)(r_eax+0x1e0u));
    /* 0046a89a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0046a89c: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0046a89f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46a8a1u); call_ind(t); }
    /* 0046a8a1: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 0046a8a3: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0046a8a5: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046a8ab: mov edx, dword ptr [ecx + 0x1e0] */ r_edx = R32((u32)(r_ecx+0x1e0u));
    /* 0046a8b1: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0046a8b7: mov ecx, dword ptr [eax + 0x1e0] */ r_ecx = R32((u32)(r_eax+0x1e0u));
    /* 0046a8bd: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0046a8bf: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0046a8c2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46a8c4u); call_ind(t); }
    /* 0046a8c4: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 0046a8c6: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046a8cc: mov ecx, dword ptr [ecx + 0x1e0] */ r_ecx = R32((u32)(r_ecx+0x1e0u));
    /* 0046a8d2: call 0x6026f0 */ r_esp -= 4; W32(r_esp, 0x46a8d7u); f_006026f0();
    /* 0046a8d7: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046a8dd: mov eax, dword ptr [edx + 0x1e0] */ r_eax = R32((u32)(r_edx+0x1e0u));
    /* 0046a8e3: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046a8e9: mov ecx, dword ptr [ecx + 0x1e0] */ r_ecx = R32((u32)(r_ecx+0x1e0u));
    /* 0046a8ef: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0046a8f1: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 0046a8f7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46a8f9u); call_ind(t); }
    /* 0046a8f9: push 0x1e4 */ { u32 v = 0x1e4u; r_esp -= 4; W32(r_esp, v); }
    /* 0046a8fe: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x46a903u); f_00686d82();
    /* 0046a903: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046a906: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0046a909: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0046a910: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046a914: je 0x46a92d */ if (fZ) goto L_0046a92d;
L_0046a916:; BB(0x0046a916);
    /* 0046a916: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046a91c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046a91d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0046a920: call 0x46c590 */ r_esp -= 4; W32(r_esp, 0x46a925u); f_0046c590();
    /* 0046a925: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 0046a92b: jmp 0x46a937 */ goto L_0046a937;
L_0046a92d:; BB(0x0046a92d);
    /* 0046a92d: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
L_0046a937:; BB(0x0046a937);
    /* 0046a937: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 0046a93d: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0046a940: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0046a947: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0046a94d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046a950: mov dword ptr [eax + 0x1e4], ecx */ W32((u32)(r_eax+0x1e4u), r_ecx);
    /* 0046a956: push 0x186a1 */ { u32 v = 0x186a1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046a95b: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046a961: mov eax, dword ptr [edx + 0x1e4] */ r_eax = R32((u32)(r_edx+0x1e4u));
    /* 0046a967: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046a96d: mov ecx, dword ptr [ecx + 0x1e4] */ r_ecx = R32((u32)(r_ecx+0x1e4u));
    /* 0046a973: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0046a975: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 0046a97b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46a97du); call_ind(t); }
    /* 0046a97d: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046a983: mov edx, dword ptr [ecx + 0x1e4] */ r_edx = R32((u32)(r_ecx+0x1e4u));
    /* 0046a989: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0046a98f: mov ecx, dword ptr [eax + 0x1e4] */ r_ecx = R32((u32)(r_eax+0x1e4u));
    /* 0046a995: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0046a997: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0046a99a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46a99cu); call_ind(t); }
    /* 0046a99c: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 0046a99e: push 0x4d */ { u32 v = 0x4du; r_esp -= 4; W32(r_esp, v); }
    /* 0046a9a0: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046a9a6: mov edx, dword ptr [ecx + 0x1e4] */ r_edx = R32((u32)(r_ecx+0x1e4u));
    /* 0046a9ac: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0046a9b2: mov ecx, dword ptr [eax + 0x1e4] */ r_ecx = R32((u32)(r_eax+0x1e4u));
    /* 0046a9b8: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0046a9ba: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0046a9bd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46a9bfu); call_ind(t); }
    /* 0046a9bf: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 0046a9c1: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046a9c7: mov ecx, dword ptr [ecx + 0x1e4] */ r_ecx = R32((u32)(r_ecx+0x1e4u));
    /* 0046a9cd: call 0x6026f0 */ r_esp -= 4; W32(r_esp, 0x46a9d2u); f_006026f0();
    /* 0046a9d2: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046a9d8: mov eax, dword ptr [edx + 0x1e4] */ r_eax = R32((u32)(r_edx+0x1e4u));
    /* 0046a9de: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046a9e4: mov ecx, dword ptr [ecx + 0x1e4] */ r_ecx = R32((u32)(r_ecx+0x1e4u));
    /* 0046a9ea: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0046a9ec: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 0046a9f2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46a9f4u); call_ind(t); }
    /* 0046a9f4: push 0x1e4 */ { u32 v = 0x1e4u; r_esp -= 4; W32(r_esp, v); }
    /* 0046a9f9: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x46a9feu); f_00686d82();
    /* 0046a9fe: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046aa01: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0046aa04: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0046aa0b: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046aa0f: je 0x46aa28 */ if (fZ) goto L_0046aa28;
L_0046aa11:; BB(0x0046aa11);
    /* 0046aa11: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046aa17: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046aa18: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0046aa1b: call 0x46c740 */ r_esp -= 4; W32(r_esp, 0x46aa20u); f_0046c740();
    /* 0046aa20: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 0046aa26: jmp 0x46aa32 */ goto L_0046aa32;
L_0046aa28:; BB(0x0046aa28);
    /* 0046aa28: mov dword ptr [ebp - 0x94], 0 */ W32((u32)(r_ebp+0xffffff6cu), 0x0u);
L_0046aa32:; BB(0x0046aa32);
    /* 0046aa32: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 0046aa38: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0046aa3b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0046aa42: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0046aa48: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0046aa4b: mov dword ptr [eax + 0x1e8], ecx */ W32((u32)(r_eax+0x1e8u), r_ecx);
    /* 0046aa51: push 0x186a1 */ { u32 v = 0x186a1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046aa56: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046aa5c: mov eax, dword ptr [edx + 0x1e8] */ r_eax = R32((u32)(r_edx+0x1e8u));
    /* 0046aa62: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046aa68: mov ecx, dword ptr [ecx + 0x1e8] */ r_ecx = R32((u32)(r_ecx+0x1e8u));
    /* 0046aa6e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0046aa70: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 0046aa76: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46aa78u); call_ind(t); }
    /* 0046aa78: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046aa7e: mov edx, dword ptr [ecx + 0x1e8] */ r_edx = R32((u32)(r_ecx+0x1e8u));
    /* 0046aa84: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0046aa8a: mov ecx, dword ptr [eax + 0x1e8] */ r_ecx = R32((u32)(r_eax+0x1e8u));
    /* 0046aa90: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0046aa92: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0046aa95: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46aa97u); call_ind(t); }
    /* 0046aa97: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 0046aa99: push 0x8a */ { u32 v = 0x8au; r_esp -= 4; W32(r_esp, v); }
    /* 0046aa9e: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046aaa4: mov edx, dword ptr [ecx + 0x1e8] */ r_edx = R32((u32)(r_ecx+0x1e8u));
    /* 0046aaaa: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0046aab0: mov ecx, dword ptr [eax + 0x1e8] */ r_ecx = R32((u32)(r_eax+0x1e8u));
    /* 0046aab6: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0046aab8: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0046aabb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46aabdu); call_ind(t); }
    /* 0046aabd: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 0046aabf: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046aac5: mov ecx, dword ptr [ecx + 0x1e8] */ r_ecx = R32((u32)(r_ecx+0x1e8u));
    /* 0046aacb: call 0x6026f0 */ r_esp -= 4; W32(r_esp, 0x46aad0u); f_006026f0();
    /* 0046aad0: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046aad6: mov eax, dword ptr [edx + 0x1e8] */ r_eax = R32((u32)(r_edx+0x1e8u));
    /* 0046aadc: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046aae2: mov ecx, dword ptr [ecx + 0x1e8] */ r_ecx = R32((u32)(r_ecx+0x1e8u));
    /* 0046aae8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0046aaea: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 0046aaf0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46aaf2u); call_ind(t); }
    /* 0046aaf2: push 0x1e4 */ { u32 v = 0x1e4u; r_esp -= 4; W32(r_esp, v); }
    /* 0046aaf7: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x46aafcu); f_00686d82();
    /* 0046aafc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046aaff: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0046ab02: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0046ab09: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046ab0d: je 0x46ab26 */ if (fZ) goto L_0046ab26;
L_0046ab0f:; BB(0x0046ab0f);
    /* 0046ab0f: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046ab15: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046ab16: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0046ab19: call 0x46c8f0 */ r_esp -= 4; W32(r_esp, 0x46ab1eu); f_0046c8f0();
    /* 0046ab1e: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 0046ab24: jmp 0x46ab30 */ goto L_0046ab30;
L_0046ab26:; BB(0x0046ab26);
    /* 0046ab26: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
L_0046ab30:; BB(0x0046ab30);
    /* 0046ab30: mov edx, dword ptr [ebp - 0x98] */ r_edx = R32((u32)(r_ebp+0xffffff68u));
    /* 0046ab36: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 0046ab39: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0046ab40: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0046ab46: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0046ab49: mov dword ptr [eax + 0x1ec], ecx */ W32((u32)(r_eax+0x1ecu), r_ecx);
    /* 0046ab4f: push 0x186a1 */ { u32 v = 0x186a1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046ab54: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046ab5a: mov eax, dword ptr [edx + 0x1ec] */ r_eax = R32((u32)(r_edx+0x1ecu));
    /* 0046ab60: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046ab66: mov ecx, dword ptr [ecx + 0x1ec] */ r_ecx = R32((u32)(r_ecx+0x1ecu));
    /* 0046ab6c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0046ab6e: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 0046ab74: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46ab76u); call_ind(t); }
    /* 0046ab76: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046ab7c: mov edx, dword ptr [ecx + 0x1ec] */ r_edx = R32((u32)(r_ecx+0x1ecu));
    /* 0046ab82: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0046ab88: mov ecx, dword ptr [eax + 0x1ec] */ r_ecx = R32((u32)(r_eax+0x1ecu));
    /* 0046ab8e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0046ab90: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0046ab93: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46ab95u); call_ind(t); }
    /* 0046ab95: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 0046ab97: push 0xc7 */ { u32 v = 0xc7u; r_esp -= 4; W32(r_esp, v); }
    /* 0046ab9c: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046aba2: mov edx, dword ptr [ecx + 0x1ec] */ r_edx = R32((u32)(r_ecx+0x1ecu));
    /* 0046aba8: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0046abae: mov ecx, dword ptr [eax + 0x1ec] */ r_ecx = R32((u32)(r_eax+0x1ecu));
    /* 0046abb4: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0046abb6: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0046abb9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46abbbu); call_ind(t); }
    /* 0046abbb: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 0046abbd: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046abc3: mov ecx, dword ptr [ecx + 0x1ec] */ r_ecx = R32((u32)(r_ecx+0x1ecu));
    /* 0046abc9: call 0x6026f0 */ r_esp -= 4; W32(r_esp, 0x46abceu); f_006026f0();
    /* 0046abce: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046abd4: mov eax, dword ptr [edx + 0x1ec] */ r_eax = R32((u32)(r_edx+0x1ecu));
    /* 0046abda: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046abe0: mov ecx, dword ptr [ecx + 0x1ec] */ r_ecx = R32((u32)(r_ecx+0x1ecu));
    /* 0046abe6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0046abe8: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 0046abee: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46abf0u); call_ind(t); }
    /* 0046abf0: push 0x1e4 */ { u32 v = 0x1e4u; r_esp -= 4; W32(r_esp, v); }
    /* 0046abf5: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x46abfau); f_00686d82();
    /* 0046abfa: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046abfd: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0046ac00: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 0046ac07: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046ac0b: je 0x46ac24 */ if (fZ) goto L_0046ac24;
L_0046ac0d:; BB(0x0046ac0d);
    /* 0046ac0d: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046ac13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046ac14: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0046ac17: call 0x46caa0 */ r_esp -= 4; W32(r_esp, 0x46ac1cu); f_0046caa0();
    /* 0046ac1c: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
    /* 0046ac22: jmp 0x46ac2e */ goto L_0046ac2e;
L_0046ac24:; BB(0x0046ac24);
    /* 0046ac24: mov dword ptr [ebp - 0x9c], 0 */ W32((u32)(r_ebp+0xffffff64u), 0x0u);
L_0046ac2e:; BB(0x0046ac2e);
    /* 0046ac2e: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 0046ac34: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 0046ac37: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0046ac3e: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0046ac44: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0046ac47: mov dword ptr [eax + 0x1f0], ecx */ W32((u32)(r_eax+0x1f0u), r_ecx);
    /* 0046ac4d: push 0x186a1 */ { u32 v = 0x186a1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046ac52: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046ac58: mov eax, dword ptr [edx + 0x1f0] */ r_eax = R32((u32)(r_edx+0x1f0u));
    /* 0046ac5e: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046ac64: mov ecx, dword ptr [ecx + 0x1f0] */ r_ecx = R32((u32)(r_ecx+0x1f0u));
    /* 0046ac6a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0046ac6c: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 0046ac72: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46ac74u); call_ind(t); }
    /* 0046ac74: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046ac7a: mov edx, dword ptr [ecx + 0x1f0] */ r_edx = R32((u32)(r_ecx+0x1f0u));
    /* 0046ac80: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0046ac86: mov ecx, dword ptr [eax + 0x1f0] */ r_ecx = R32((u32)(r_eax+0x1f0u));
    /* 0046ac8c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0046ac8e: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0046ac91: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46ac93u); call_ind(t); }
    /* 0046ac93: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 0046ac95: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 0046ac9a: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046aca0: mov edx, dword ptr [ecx + 0x1f0] */ r_edx = R32((u32)(r_ecx+0x1f0u));
    /* 0046aca6: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0046acac: mov ecx, dword ptr [eax + 0x1f0] */ r_ecx = R32((u32)(r_eax+0x1f0u));
    /* 0046acb2: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0046acb4: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0046acb7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46acb9u); call_ind(t); }
    /* 0046acb9: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 0046acbb: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046acc1: mov ecx, dword ptr [ecx + 0x1f0] */ r_ecx = R32((u32)(r_ecx+0x1f0u));
    /* 0046acc7: call 0x6026f0 */ r_esp -= 4; W32(r_esp, 0x46acccu); f_006026f0();
    /* 0046accc: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046acd2: mov eax, dword ptr [edx + 0x1f0] */ r_eax = R32((u32)(r_edx+0x1f0u));
    /* 0046acd8: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046acde: mov ecx, dword ptr [ecx + 0x1f0] */ r_ecx = R32((u32)(r_ecx+0x1f0u));
    /* 0046ace4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0046ace6: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 0046acec: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46aceeu); call_ind(t); }
    /* 0046acee: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046acf3: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x46acf8u); f_00686d82();
    /* 0046acf8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046acfb: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0046acfe: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 0046ad05: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046ad09: je 0x46ad1b */ if (fZ) goto L_0046ad1b;
L_0046ad0b:; BB(0x0046ad0b);
    /* 0046ad0b: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0046ad0e: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x46ad13u); f_005ec5a0();
    /* 0046ad13: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
    /* 0046ad19: jmp 0x46ad25 */ goto L_0046ad25;
L_0046ad1b:; BB(0x0046ad1b);
    /* 0046ad1b: mov dword ptr [ebp - 0xa0], 0 */ W32((u32)(r_ebp+0xffffff60u), 0x0u);
L_0046ad25:; BB(0x0046ad25);
    /* 0046ad25: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 0046ad2b: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 0046ad2e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0046ad35: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046ad3b: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046ad3e: mov dword ptr [edx + 0x1f4], eax */ W32((u32)(r_edx+0x1f4u), r_eax);
    /* 0046ad44: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046ad46: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046ad4c: mov edx, dword ptr [ecx + 0x1f4] */ r_edx = R32((u32)(r_ecx+0x1f4u));
    /* 0046ad52: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046ad53: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046ad59: call 0x519960 */ r_esp -= 4; W32(r_esp, 0x46ad5eu); f_00519960();
    /* 0046ad5e: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0046ad60: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0046ad66: mov ecx, dword ptr [eax + 0x1f4] */ r_ecx = R32((u32)(r_eax+0x1f4u));
    /* 0046ad6c: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x46ad71u); f_005ecc60();
    /* 0046ad71: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0046ad73: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046ad79: mov ecx, dword ptr [ecx + 0x1f4] */ r_ecx = R32((u32)(r_ecx+0x1f4u));
    /* 0046ad7f: call 0x5eccb0 */ r_esp -= 4; W32(r_esp, 0x46ad84u); f_005eccb0();
    /* 0046ad84: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0046ad86: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046ad8c: mov ecx, dword ptr [edx + 0x1f4] */ r_ecx = R32((u32)(r_edx+0x1f4u));
    /* 0046ad92: call 0x5ef310 */ r_esp -= 4; W32(r_esp, 0x46ad97u); f_005ef310();
    /* 0046ad97: push 0x7b */ { u32 v = 0x7bu; r_esp -= 4; W32(r_esp, v); }
    /* 0046ad99: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0046ad9b: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0046ada1: mov ecx, dword ptr [eax + 0x1f4] */ r_ecx = R32((u32)(r_eax+0x1f4u));
    /* 0046ada7: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046adad: mov eax, dword ptr [edx + 0x1f4] */ r_eax = R32((u32)(r_edx+0x1f4u));
    /* 0046adb3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0046adb5: mov ecx, eax */ r_ecx = r_eax;
    /* 0046adb7: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0046adba: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46adbcu); call_ind(t); }
    /* 0046adbc: push 0x6bbaf0 */ { u32 v = 0x6bbaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046adc1: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x46adc6u); f_00630f40();
    /* 0046adc6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046adc9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046adca: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046add0: mov edx, dword ptr [ecx + 0x1f4] */ r_edx = R32((u32)(r_ecx+0x1f4u));
    /* 0046add6: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0046addc: mov ecx, dword ptr [eax + 0x1f4] */ r_ecx = R32((u32)(r_eax+0x1f4u));
    /* 0046ade2: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0046ade4: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0046adea: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46adecu); call_ind(t); }
    /* 0046adec: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046adf1: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x46adf6u); f_00686d82();
    /* 0046adf6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046adf9: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0046adfc: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 0046ae03: cmp dword ptr [ebp - 0x44], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046ae07: je 0x46ae19 */ if (fZ) goto L_0046ae19;
L_0046ae09:; BB(0x0046ae09);
    /* 0046ae09: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0046ae0c: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x46ae11u); f_005ec5a0();
    /* 0046ae11: mov dword ptr [ebp - 0xa4], eax */ W32((u32)(r_ebp+0xffffff5cu), r_eax);
    /* 0046ae17: jmp 0x46ae23 */ goto L_0046ae23;
L_0046ae19:; BB(0x0046ae19);
    /* 0046ae19: mov dword ptr [ebp - 0xa4], 0 */ W32((u32)(r_ebp+0xffffff5cu), 0x0u);
L_0046ae23:; BB(0x0046ae23);
    /* 0046ae23: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0046ae29: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 0046ae2c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0046ae33: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046ae39: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0046ae3c: mov dword ptr [edx + 0x1f8], eax */ W32((u32)(r_edx+0x1f8u), r_eax);
    /* 0046ae42: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046ae44: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046ae4a: mov edx, dword ptr [ecx + 0x1f8] */ r_edx = R32((u32)(r_ecx+0x1f8u));
    /* 0046ae50: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046ae51: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046ae57: call 0x519960 */ r_esp -= 4; W32(r_esp, 0x46ae5cu); f_00519960();
    /* 0046ae5c: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0046ae5e: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0046ae64: mov ecx, dword ptr [eax + 0x1f8] */ r_ecx = R32((u32)(r_eax+0x1f8u));
    /* 0046ae6a: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x46ae6fu); f_005ecc60();
    /* 0046ae6f: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0046ae71: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046ae77: mov ecx, dword ptr [ecx + 0x1f8] */ r_ecx = R32((u32)(r_ecx+0x1f8u));
    /* 0046ae7d: call 0x5eccb0 */ r_esp -= 4; W32(r_esp, 0x46ae82u); f_005eccb0();
    /* 0046ae82: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0046ae84: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046ae8a: mov ecx, dword ptr [edx + 0x1f8] */ r_ecx = R32((u32)(r_edx+0x1f8u));
    /* 0046ae90: call 0x5ef310 */ r_esp -= 4; W32(r_esp, 0x46ae95u); f_005ef310();
    /* 0046ae95: push 0x7b */ { u32 v = 0x7bu; r_esp -= 4; W32(r_esp, v); }
    /* 0046ae97: push 0x4d */ { u32 v = 0x4du; r_esp -= 4; W32(r_esp, v); }
    /* 0046ae99: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0046ae9f: mov ecx, dword ptr [eax + 0x1f8] */ r_ecx = R32((u32)(r_eax+0x1f8u));
    /* 0046aea5: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046aeab: mov eax, dword ptr [edx + 0x1f8] */ r_eax = R32((u32)(r_edx+0x1f8u));
    /* 0046aeb1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0046aeb3: mov ecx, eax */ r_ecx = r_eax;
    /* 0046aeb5: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0046aeb8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46aebau); call_ind(t); }
    /* 0046aeba: push 0x6bbaf0 */ { u32 v = 0x6bbaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046aebf: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x46aec4u); f_00630f40();
    /* 0046aec4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046aec7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046aec8: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046aece: mov edx, dword ptr [ecx + 0x1f8] */ r_edx = R32((u32)(r_ecx+0x1f8u));
    /* 0046aed4: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0046aeda: mov ecx, dword ptr [eax + 0x1f8] */ r_ecx = R32((u32)(r_eax+0x1f8u));
    /* 0046aee0: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0046aee2: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0046aee8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46aeeau); call_ind(t); }
    /* 0046aeea: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046aeef: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x46aef4u); f_00686d82();
    /* 0046aef4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046aef7: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0046aefa: mov dword ptr [ebp - 4], 7 */ W32((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 0046af01: cmp dword ptr [ebp - 0x4c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046af05: je 0x46af17 */ if (fZ) goto L_0046af17;
L_0046af07:; BB(0x0046af07);
    /* 0046af07: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0046af0a: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x46af0fu); f_005ec5a0();
    /* 0046af0f: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 0046af15: jmp 0x46af21 */ goto L_0046af21;
L_0046af17:; BB(0x0046af17);
    /* 0046af17: mov dword ptr [ebp - 0xa8], 0 */ W32((u32)(r_ebp+0xffffff58u), 0x0u);
L_0046af21:; BB(0x0046af21);
    /* 0046af21: mov ecx, dword ptr [ebp - 0xa8] */ r_ecx = R32((u32)(r_ebp+0xffffff58u));
    /* 0046af27: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 0046af2a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0046af31: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046af37: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0046af3a: mov dword ptr [edx + 0x1fc], eax */ W32((u32)(r_edx+0x1fcu), r_eax);
    /* 0046af40: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046af42: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046af48: mov edx, dword ptr [ecx + 0x1fc] */ r_edx = R32((u32)(r_ecx+0x1fcu));
    /* 0046af4e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046af4f: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046af55: call 0x519960 */ r_esp -= 4; W32(r_esp, 0x46af5au); f_00519960();
    /* 0046af5a: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0046af5c: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0046af62: mov ecx, dword ptr [eax + 0x1fc] */ r_ecx = R32((u32)(r_eax+0x1fcu));
    /* 0046af68: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x46af6du); f_005ecc60();
    /* 0046af6d: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0046af6f: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046af75: mov ecx, dword ptr [ecx + 0x1fc] */ r_ecx = R32((u32)(r_ecx+0x1fcu));
    /* 0046af7b: call 0x5eccb0 */ r_esp -= 4; W32(r_esp, 0x46af80u); f_005eccb0();
    /* 0046af80: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0046af82: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046af88: mov ecx, dword ptr [edx + 0x1fc] */ r_ecx = R32((u32)(r_edx+0x1fcu));
    /* 0046af8e: call 0x5ef310 */ r_esp -= 4; W32(r_esp, 0x46af93u); f_005ef310();
    /* 0046af93: push 0x7b */ { u32 v = 0x7bu; r_esp -= 4; W32(r_esp, v); }
    /* 0046af95: push 0x8a */ { u32 v = 0x8au; r_esp -= 4; W32(r_esp, v); }
    /* 0046af9a: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0046afa0: mov ecx, dword ptr [eax + 0x1fc] */ r_ecx = R32((u32)(r_eax+0x1fcu));
    /* 0046afa6: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046afac: mov eax, dword ptr [edx + 0x1fc] */ r_eax = R32((u32)(r_edx+0x1fcu));
    /* 0046afb2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0046afb4: mov ecx, eax */ r_ecx = r_eax;
    /* 0046afb6: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0046afb9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46afbbu); call_ind(t); }
    /* 0046afbb: push 0x6bbaf0 */ { u32 v = 0x6bbaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046afc0: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x46afc5u); f_00630f40();
    /* 0046afc5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046afc8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046afc9: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046afcf: mov edx, dword ptr [ecx + 0x1fc] */ r_edx = R32((u32)(r_ecx+0x1fcu));
    /* 0046afd5: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0046afdb: mov ecx, dword ptr [eax + 0x1fc] */ r_ecx = R32((u32)(r_eax+0x1fcu));
    /* 0046afe1: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0046afe3: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0046afe9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46afebu); call_ind(t); }
    /* 0046afeb: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046aff0: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x46aff5u); f_00686d82();
    /* 0046aff5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046aff8: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0046affb: mov dword ptr [ebp - 4], 8 */ W32((u32)(r_ebp+0xfffffffcu), 0x8u);
    /* 0046b002: cmp dword ptr [ebp - 0x54], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046b006: je 0x46b018 */ if (fZ) goto L_0046b018;
L_0046b008:; BB(0x0046b008);
    /* 0046b008: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0046b00b: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x46b010u); f_005ec5a0();
    /* 0046b010: mov dword ptr [ebp - 0xac], eax */ W32((u32)(r_ebp+0xffffff54u), r_eax);
    /* 0046b016: jmp 0x46b022 */ goto L_0046b022;
L_0046b018:; BB(0x0046b018);
    /* 0046b018: mov dword ptr [ebp - 0xac], 0 */ W32((u32)(r_ebp+0xffffff54u), 0x0u);
L_0046b022:; BB(0x0046b022);
    /* 0046b022: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 0046b028: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 0046b02b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0046b032: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b038: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0046b03b: mov dword ptr [edx + 0x200], eax */ W32((u32)(r_edx+0x200u), r_eax);
    /* 0046b041: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046b043: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b049: mov edx, dword ptr [ecx + 0x200] */ r_edx = R32((u32)(r_ecx+0x200u));
    /* 0046b04f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046b050: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b056: call 0x519960 */ r_esp -= 4; W32(r_esp, 0x46b05bu); f_00519960();
    /* 0046b05b: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0046b05d: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b063: mov ecx, dword ptr [eax + 0x200] */ r_ecx = R32((u32)(r_eax+0x200u));
    /* 0046b069: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x46b06eu); f_005ecc60();
    /* 0046b06e: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0046b070: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b076: mov ecx, dword ptr [ecx + 0x200] */ r_ecx = R32((u32)(r_ecx+0x200u));
    /* 0046b07c: call 0x5eccb0 */ r_esp -= 4; W32(r_esp, 0x46b081u); f_005eccb0();
    /* 0046b081: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0046b083: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b089: mov ecx, dword ptr [edx + 0x200] */ r_ecx = R32((u32)(r_edx+0x200u));
    /* 0046b08f: call 0x5ef310 */ r_esp -= 4; W32(r_esp, 0x46b094u); f_005ef310();
    /* 0046b094: push 0x7b */ { u32 v = 0x7bu; r_esp -= 4; W32(r_esp, v); }
    /* 0046b096: push 0xc7 */ { u32 v = 0xc7u; r_esp -= 4; W32(r_esp, v); }
    /* 0046b09b: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b0a1: mov ecx, dword ptr [eax + 0x200] */ r_ecx = R32((u32)(r_eax+0x200u));
    /* 0046b0a7: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b0ad: mov eax, dword ptr [edx + 0x200] */ r_eax = R32((u32)(r_edx+0x200u));
    /* 0046b0b3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0046b0b5: mov ecx, eax */ r_ecx = r_eax;
    /* 0046b0b7: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0046b0ba: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46b0bcu); call_ind(t); }
    /* 0046b0bc: push 0x6bbaf0 */ { u32 v = 0x6bbaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046b0c1: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x46b0c6u); f_00630f40();
    /* 0046b0c6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046b0c9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046b0ca: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b0d0: mov edx, dword ptr [ecx + 0x200] */ r_edx = R32((u32)(r_ecx+0x200u));
    /* 0046b0d6: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b0dc: mov ecx, dword ptr [eax + 0x200] */ r_ecx = R32((u32)(r_eax+0x200u));
    /* 0046b0e2: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0046b0e4: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0046b0ea: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46b0ecu); call_ind(t); }
    /* 0046b0ec: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046b0f1: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x46b0f6u); f_00686d82();
    /* 0046b0f6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046b0f9: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 0046b0fc: mov dword ptr [ebp - 4], 9 */ W32((u32)(r_ebp+0xfffffffcu), 0x9u);
    /* 0046b103: cmp dword ptr [ebp - 0x5c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046b107: je 0x46b119 */ if (fZ) goto L_0046b119;
L_0046b109:; BB(0x0046b109);
    /* 0046b109: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0046b10c: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x46b111u); f_005ec5a0();
    /* 0046b111: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 0046b117: jmp 0x46b123 */ goto L_0046b123;
L_0046b119:; BB(0x0046b119);
    /* 0046b119: mov dword ptr [ebp - 0xb0], 0 */ W32((u32)(r_ebp+0xffffff50u), 0x0u);
L_0046b123:; BB(0x0046b123);
    /* 0046b123: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 0046b129: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 0046b12c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0046b133: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b139: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0046b13c: mov dword ptr [edx + 0x204], eax */ W32((u32)(r_edx+0x204u), r_eax);
    /* 0046b142: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046b144: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b14a: mov edx, dword ptr [ecx + 0x204] */ r_edx = R32((u32)(r_ecx+0x204u));
    /* 0046b150: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046b151: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b157: call 0x519960 */ r_esp -= 4; W32(r_esp, 0x46b15cu); f_00519960();
    /* 0046b15c: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0046b15e: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b164: mov ecx, dword ptr [eax + 0x204] */ r_ecx = R32((u32)(r_eax+0x204u));
    /* 0046b16a: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x46b16fu); f_005ecc60();
    /* 0046b16f: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0046b171: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b177: mov ecx, dword ptr [ecx + 0x204] */ r_ecx = R32((u32)(r_ecx+0x204u));
    /* 0046b17d: call 0x5eccb0 */ r_esp -= 4; W32(r_esp, 0x46b182u); f_005eccb0();
    /* 0046b182: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0046b184: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b18a: mov ecx, dword ptr [edx + 0x204] */ r_ecx = R32((u32)(r_edx+0x204u));
    /* 0046b190: call 0x5ef310 */ r_esp -= 4; W32(r_esp, 0x46b195u); f_005ef310();
    /* 0046b195: push 0x7b */ { u32 v = 0x7bu; r_esp -= 4; W32(r_esp, v); }
    /* 0046b197: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 0046b19c: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b1a2: mov ecx, dword ptr [eax + 0x204] */ r_ecx = R32((u32)(r_eax+0x204u));
    /* 0046b1a8: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b1ae: mov eax, dword ptr [edx + 0x204] */ r_eax = R32((u32)(r_edx+0x204u));
    /* 0046b1b4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0046b1b6: mov ecx, eax */ r_ecx = r_eax;
    /* 0046b1b8: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0046b1bb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46b1bdu); call_ind(t); }
    /* 0046b1bd: push 0x6bbaf0 */ { u32 v = 0x6bbaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046b1c2: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x46b1c7u); f_00630f40();
    /* 0046b1c7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046b1ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046b1cb: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b1d1: mov edx, dword ptr [ecx + 0x204] */ r_edx = R32((u32)(r_ecx+0x204u));
    /* 0046b1d7: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b1dd: mov ecx, dword ptr [eax + 0x204] */ r_ecx = R32((u32)(r_eax+0x204u));
    /* 0046b1e3: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0046b1e5: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0046b1eb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46b1edu); call_ind(t); }
    /* 0046b1ed: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0046b1f2: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x46b1f7u); f_00686d82();
    /* 0046b1f7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046b1fa: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 0046b1fd: mov dword ptr [ebp - 4], 0xa */ W32((u32)(r_ebp+0xfffffffcu), 0xau);
    /* 0046b204: cmp dword ptr [ebp - 0x64], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff9cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046b208: je 0x46b21a */ if (fZ) goto L_0046b21a;
L_0046b20a:; BB(0x0046b20a);
    /* 0046b20a: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0046b20d: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x46b212u); f_005eaaf0();
    /* 0046b212: mov dword ptr [ebp - 0xb4], eax */ W32((u32)(r_ebp+0xffffff4cu), r_eax);
    /* 0046b218: jmp 0x46b224 */ goto L_0046b224;
L_0046b21a:; BB(0x0046b21a);
    /* 0046b21a: mov dword ptr [ebp - 0xb4], 0 */ W32((u32)(r_ebp+0xffffff4cu), 0x0u);
L_0046b224:; BB(0x0046b224);
    /* 0046b224: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0046b22a: mov dword ptr [ebp - 0x60], ecx */ W32((u32)(r_ebp+0xffffffa0u), r_ecx);
    /* 0046b22d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0046b234: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b23a: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 0046b23d: mov dword ptr [edx + 0x208], eax */ W32((u32)(r_edx+0x208u), r_eax);
    /* 0046b243: push 0x18a88 */ { u32 v = 0x18a88u; r_esp -= 4; W32(r_esp, v); }
    /* 0046b248: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b24e: mov ecx, dword ptr [ecx + 0x208] */ r_ecx = R32((u32)(r_ecx+0x208u));
    /* 0046b254: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x46b259u); f_005eaf00();
    /* 0046b259: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b25f: mov eax, dword ptr [edx + 0x208] */ r_eax = R32((u32)(r_edx+0x208u));
    /* 0046b265: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b26b: mov ecx, dword ptr [ecx + 0x208] */ r_ecx = R32((u32)(r_ecx+0x208u));
    /* 0046b271: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0046b273: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0046b276: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46b278u); call_ind(t); }
    /* 0046b278: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b27e: mov edx, dword ptr [ecx + 0x1e0] */ r_edx = R32((u32)(r_ecx+0x1e0u));
    /* 0046b284: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b28a: mov ecx, dword ptr [eax + 0x1e0] */ r_ecx = R32((u32)(r_eax+0x1e0u));
    /* 0046b290: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0046b292: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 0046b295: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46b297u); call_ind(t); }
    /* 0046b297: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046b298: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b29e: mov edx, dword ptr [ecx + 0x1e0] */ r_edx = R32((u32)(r_ecx+0x1e0u));
    /* 0046b2a4: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b2aa: mov ecx, dword ptr [eax + 0x1e0] */ r_ecx = R32((u32)(r_eax+0x1e0u));
    /* 0046b2b0: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0046b2b2: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0046b2b5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46b2b7u); call_ind(t); }
    /* 0046b2b7: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0046b2ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046b2bb: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b2c1: mov edx, dword ptr [ecx + 0x208] */ r_edx = R32((u32)(r_ecx+0x208u));
    /* 0046b2c7: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b2cd: mov ecx, dword ptr [eax + 0x208] */ r_ecx = R32((u32)(r_eax+0x208u));
    /* 0046b2d3: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0046b2d5: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0046b2d8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46b2dau); call_ind(t); }
    /* 0046b2da: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0046b2df: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x46b2e4u); f_00686d82();
    /* 0046b2e4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046b2e7: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 0046b2ea: mov dword ptr [ebp - 4], 0xb */ W32((u32)(r_ebp+0xfffffffcu), 0xbu);
    /* 0046b2f1: cmp dword ptr [ebp - 0x6c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff94u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046b2f5: je 0x46b307 */ if (fZ) goto L_0046b307;
L_0046b2f7:; BB(0x0046b2f7);
    /* 0046b2f7: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0046b2fa: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x46b2ffu); f_005eaaf0();
    /* 0046b2ff: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 0046b305: jmp 0x46b311 */ goto L_0046b311;
L_0046b307:; BB(0x0046b307);
    /* 0046b307: mov dword ptr [ebp - 0xb8], 0 */ W32((u32)(r_ebp+0xffffff48u), 0x0u);
L_0046b311:; BB(0x0046b311);
    /* 0046b311: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 0046b317: mov dword ptr [ebp - 0x68], ecx */ W32((u32)(r_ebp+0xffffff98u), r_ecx);
    /* 0046b31a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0046b321: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b327: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0046b32a: mov dword ptr [edx + 0x20c], eax */ W32((u32)(r_edx+0x20cu), r_eax);
    /* 0046b330: push 0x18a88 */ { u32 v = 0x18a88u; r_esp -= 4; W32(r_esp, v); }
    /* 0046b335: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b33b: mov ecx, dword ptr [ecx + 0x20c] */ r_ecx = R32((u32)(r_ecx+0x20cu));
    /* 0046b341: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x46b346u); f_005eaf00();
    /* 0046b346: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b34c: mov eax, dword ptr [edx + 0x20c] */ r_eax = R32((u32)(r_edx+0x20cu));
    /* 0046b352: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b358: mov ecx, dword ptr [ecx + 0x20c] */ r_ecx = R32((u32)(r_ecx+0x20cu));
    /* 0046b35e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0046b360: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0046b363: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46b365u); call_ind(t); }
    /* 0046b365: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b36b: mov edx, dword ptr [ecx + 0x1e4] */ r_edx = R32((u32)(r_ecx+0x1e4u));
    /* 0046b371: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b377: mov ecx, dword ptr [eax + 0x1e4] */ r_ecx = R32((u32)(r_eax+0x1e4u));
    /* 0046b37d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0046b37f: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 0046b382: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46b384u); call_ind(t); }
    /* 0046b384: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046b385: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b38b: mov edx, dword ptr [ecx + 0x1e4] */ r_edx = R32((u32)(r_ecx+0x1e4u));
    /* 0046b391: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b397: mov ecx, dword ptr [eax + 0x1e4] */ r_ecx = R32((u32)(r_eax+0x1e4u));
    /* 0046b39d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0046b39f: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0046b3a2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46b3a4u); call_ind(t); }
    /* 0046b3a4: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0046b3a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046b3a8: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b3ae: mov edx, dword ptr [ecx + 0x20c] */ r_edx = R32((u32)(r_ecx+0x20cu));
    /* 0046b3b4: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b3ba: mov ecx, dword ptr [eax + 0x20c] */ r_ecx = R32((u32)(r_eax+0x20cu));
    /* 0046b3c0: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0046b3c2: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0046b3c5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46b3c7u); call_ind(t); }
    /* 0046b3c7: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0046b3cc: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x46b3d1u); f_00686d82();
    /* 0046b3d1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046b3d4: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 0046b3d7: mov dword ptr [ebp - 4], 0xc */ W32((u32)(r_ebp+0xfffffffcu), 0xcu);
    /* 0046b3de: cmp dword ptr [ebp - 0x74], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046b3e2: je 0x46b3f4 */ if (fZ) goto L_0046b3f4;
L_0046b3e4:; BB(0x0046b3e4);
    /* 0046b3e4: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0046b3e7: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x46b3ecu); f_005eaaf0();
    /* 0046b3ec: mov dword ptr [ebp - 0xbc], eax */ W32((u32)(r_ebp+0xffffff44u), r_eax);
    /* 0046b3f2: jmp 0x46b3fe */ goto L_0046b3fe;
L_0046b3f4:; BB(0x0046b3f4);
    /* 0046b3f4: mov dword ptr [ebp - 0xbc], 0 */ W32((u32)(r_ebp+0xffffff44u), 0x0u);
L_0046b3fe:; BB(0x0046b3fe);
    /* 0046b3fe: mov ecx, dword ptr [ebp - 0xbc] */ r_ecx = R32((u32)(r_ebp+0xffffff44u));
    /* 0046b404: mov dword ptr [ebp - 0x70], ecx */ W32((u32)(r_ebp+0xffffff90u), r_ecx);
    /* 0046b407: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0046b40e: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b414: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 0046b417: mov dword ptr [edx + 0x210], eax */ W32((u32)(r_edx+0x210u), r_eax);
    /* 0046b41d: push 0x18a88 */ { u32 v = 0x18a88u; r_esp -= 4; W32(r_esp, v); }
    /* 0046b422: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b428: mov ecx, dword ptr [ecx + 0x210] */ r_ecx = R32((u32)(r_ecx+0x210u));
    /* 0046b42e: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x46b433u); f_005eaf00();
    /* 0046b433: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b439: mov eax, dword ptr [edx + 0x210] */ r_eax = R32((u32)(r_edx+0x210u));
    /* 0046b43f: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b445: mov ecx, dword ptr [ecx + 0x210] */ r_ecx = R32((u32)(r_ecx+0x210u));
    /* 0046b44b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0046b44d: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0046b450: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46b452u); call_ind(t); }
    /* 0046b452: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b458: mov edx, dword ptr [ecx + 0x1e8] */ r_edx = R32((u32)(r_ecx+0x1e8u));
    /* 0046b45e: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b464: mov ecx, dword ptr [eax + 0x1e8] */ r_ecx = R32((u32)(r_eax+0x1e8u));
    /* 0046b46a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0046b46c: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 0046b46f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46b471u); call_ind(t); }
    /* 0046b471: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046b472: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b478: mov edx, dword ptr [ecx + 0x1e8] */ r_edx = R32((u32)(r_ecx+0x1e8u));
    /* 0046b47e: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b484: mov ecx, dword ptr [eax + 0x1e8] */ r_ecx = R32((u32)(r_eax+0x1e8u));
    /* 0046b48a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0046b48c: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0046b48f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46b491u); call_ind(t); }
    /* 0046b491: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0046b494: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046b495: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b49b: mov edx, dword ptr [ecx + 0x210] */ r_edx = R32((u32)(r_ecx+0x210u));
    /* 0046b4a1: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b4a7: mov ecx, dword ptr [eax + 0x210] */ r_ecx = R32((u32)(r_eax+0x210u));
    /* 0046b4ad: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0046b4af: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0046b4b2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46b4b4u); call_ind(t); }
    /* 0046b4b4: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0046b4b9: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x46b4beu); f_00686d82();
    /* 0046b4be: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046b4c1: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 0046b4c4: mov dword ptr [ebp - 4], 0xd */ W32((u32)(r_ebp+0xfffffffcu), 0xdu);
    /* 0046b4cb: cmp dword ptr [ebp - 0x7c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff84u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046b4cf: je 0x46b4e1 */ if (fZ) goto L_0046b4e1;
L_0046b4d1:; BB(0x0046b4d1);
    /* 0046b4d1: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 0046b4d4: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x46b4d9u); f_005eaaf0();
    /* 0046b4d9: mov dword ptr [ebp - 0xc0], eax */ W32((u32)(r_ebp+0xffffff40u), r_eax);
    /* 0046b4df: jmp 0x46b4eb */ goto L_0046b4eb;
L_0046b4e1:; BB(0x0046b4e1);
    /* 0046b4e1: mov dword ptr [ebp - 0xc0], 0 */ W32((u32)(r_ebp+0xffffff40u), 0x0u);
L_0046b4eb:; BB(0x0046b4eb);
    /* 0046b4eb: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 0046b4f1: mov dword ptr [ebp - 0x78], ecx */ W32((u32)(r_ebp+0xffffff88u), r_ecx);
    /* 0046b4f4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0046b4fb: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b501: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 0046b504: mov dword ptr [edx + 0x214], eax */ W32((u32)(r_edx+0x214u), r_eax);
    /* 0046b50a: push 0x18a88 */ { u32 v = 0x18a88u; r_esp -= 4; W32(r_esp, v); }
    /* 0046b50f: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b515: mov ecx, dword ptr [ecx + 0x214] */ r_ecx = R32((u32)(r_ecx+0x214u));
    /* 0046b51b: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x46b520u); f_005eaf00();
    /* 0046b520: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b526: mov eax, dword ptr [edx + 0x214] */ r_eax = R32((u32)(r_edx+0x214u));
    /* 0046b52c: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b532: mov ecx, dword ptr [ecx + 0x214] */ r_ecx = R32((u32)(r_ecx+0x214u));
    /* 0046b538: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0046b53a: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0046b53d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46b53fu); call_ind(t); }
    /* 0046b53f: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b545: mov edx, dword ptr [ecx + 0x1ec] */ r_edx = R32((u32)(r_ecx+0x1ecu));
    /* 0046b54b: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b551: mov ecx, dword ptr [eax + 0x1ec] */ r_ecx = R32((u32)(r_eax+0x1ecu));
    /* 0046b557: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0046b559: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 0046b55c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46b55eu); call_ind(t); }
    /* 0046b55e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046b55f: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b565: mov edx, dword ptr [ecx + 0x1ec] */ r_edx = R32((u32)(r_ecx+0x1ecu));
    /* 0046b56b: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b571: mov ecx, dword ptr [eax + 0x1ec] */ r_ecx = R32((u32)(r_eax+0x1ecu));
    /* 0046b577: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0046b579: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0046b57c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46b57eu); call_ind(t); }
    /* 0046b57e: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0046b581: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046b582: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b588: mov edx, dword ptr [ecx + 0x214] */ r_edx = R32((u32)(r_ecx+0x214u));
    /* 0046b58e: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b594: mov ecx, dword ptr [eax + 0x214] */ r_ecx = R32((u32)(r_eax+0x214u));
    /* 0046b59a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0046b59c: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0046b59f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46b5a1u); call_ind(t); }
    /* 0046b5a1: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0046b5a6: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x46b5abu); f_00686d82();
    /* 0046b5ab: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046b5ae: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 0046b5b4: mov dword ptr [ebp - 4], 0xe */ W32((u32)(r_ebp+0xfffffffcu), 0xeu);
    /* 0046b5bb: cmp dword ptr [ebp - 0x84], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff7cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046b5c2: je 0x46b5d7 */ if (fZ) goto L_0046b5d7;
L_0046b5c4:; BB(0x0046b5c4);
    /* 0046b5c4: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0046b5ca: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x46b5cfu); f_005eaaf0();
    /* 0046b5cf: mov dword ptr [ebp - 0xc4], eax */ W32((u32)(r_ebp+0xffffff3cu), r_eax);
    /* 0046b5d5: jmp 0x46b5e1 */ goto L_0046b5e1;
L_0046b5d7:; BB(0x0046b5d7);
    /* 0046b5d7: mov dword ptr [ebp - 0xc4], 0 */ W32((u32)(r_ebp+0xffffff3cu), 0x0u);
L_0046b5e1:; BB(0x0046b5e1);
    /* 0046b5e1: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 0046b5e7: mov dword ptr [ebp - 0x80], ecx */ W32((u32)(r_ebp+0xffffff80u), r_ecx);
    /* 0046b5ea: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0046b5f1: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b5f7: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 0046b5fa: mov dword ptr [edx + 0x218], eax */ W32((u32)(r_edx+0x218u), r_eax);
    /* 0046b600: push 0x18a88 */ { u32 v = 0x18a88u; r_esp -= 4; W32(r_esp, v); }
    /* 0046b605: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b60b: mov ecx, dword ptr [ecx + 0x218] */ r_ecx = R32((u32)(r_ecx+0x218u));
    /* 0046b611: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x46b616u); f_005eaf00();
    /* 0046b616: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b61c: mov eax, dword ptr [edx + 0x218] */ r_eax = R32((u32)(r_edx+0x218u));
    /* 0046b622: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b628: mov ecx, dword ptr [ecx + 0x218] */ r_ecx = R32((u32)(r_ecx+0x218u));
    /* 0046b62e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0046b630: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0046b633: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46b635u); call_ind(t); }
    /* 0046b635: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b63b: mov edx, dword ptr [ecx + 0x1f0] */ r_edx = R32((u32)(r_ecx+0x1f0u));
    /* 0046b641: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b647: mov ecx, dword ptr [eax + 0x1f0] */ r_ecx = R32((u32)(r_eax+0x1f0u));
    /* 0046b64d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0046b64f: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 0046b652: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46b654u); call_ind(t); }
    /* 0046b654: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046b655: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b65b: mov edx, dword ptr [ecx + 0x1f0] */ r_edx = R32((u32)(r_ecx+0x1f0u));
    /* 0046b661: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b667: mov ecx, dword ptr [eax + 0x1f0] */ r_ecx = R32((u32)(r_eax+0x1f0u));
    /* 0046b66d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0046b66f: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0046b672: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46b674u); call_ind(t); }
    /* 0046b674: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0046b677: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046b678: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b67e: mov edx, dword ptr [ecx + 0x218] */ r_edx = R32((u32)(r_ecx+0x218u));
    /* 0046b684: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b68a: mov ecx, dword ptr [eax + 0x218] */ r_ecx = R32((u32)(r_eax+0x218u));
    /* 0046b690: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0046b692: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0046b695: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46b697u); call_ind(t); }
    /* 0046b697: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046b699: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b69f: mov edx, dword ptr [ecx + 0x1e0] */ r_edx = R32((u32)(r_ecx+0x1e0u));
    /* 0046b6a5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046b6a6: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b6ac: call 0x519900 */ r_esp -= 4; W32(r_esp, 0x46b6b1u); f_00519900();
    /* 0046b6b1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046b6b3: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b6b9: mov ecx, dword ptr [eax + 0x1e4] */ r_ecx = R32((u32)(r_eax+0x1e4u));
    /* 0046b6bf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046b6c0: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b6c6: call 0x519900 */ r_esp -= 4; W32(r_esp, 0x46b6cbu); f_00519900();
    /* 0046b6cb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046b6cd: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b6d3: mov eax, dword ptr [edx + 0x1e8] */ r_eax = R32((u32)(r_edx+0x1e8u));
    /* 0046b6d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046b6da: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b6e0: call 0x519900 */ r_esp -= 4; W32(r_esp, 0x46b6e5u); f_00519900();
    /* 0046b6e5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046b6e7: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b6ed: mov edx, dword ptr [ecx + 0x1ec] */ r_edx = R32((u32)(r_ecx+0x1ecu));
    /* 0046b6f3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046b6f4: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b6fa: call 0x519900 */ r_esp -= 4; W32(r_esp, 0x46b6ffu); f_00519900();
    /* 0046b6ff: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046b701: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b707: mov ecx, dword ptr [eax + 0x1f0] */ r_ecx = R32((u32)(r_eax+0x1f0u));
    /* 0046b70d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046b70e: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b714: call 0x519900 */ r_esp -= 4; W32(r_esp, 0x46b719u); f_00519900();
    /* 0046b719: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046b71b: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b721: mov eax, dword ptr [edx + 0x208] */ r_eax = R32((u32)(r_edx+0x208u));
    /* 0046b727: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046b728: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b72e: call 0x519900 */ r_esp -= 4; W32(r_esp, 0x46b733u); f_00519900();
    /* 0046b733: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046b735: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b73b: mov edx, dword ptr [ecx + 0x20c] */ r_edx = R32((u32)(r_ecx+0x20cu));
    /* 0046b741: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046b742: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b748: call 0x519900 */ r_esp -= 4; W32(r_esp, 0x46b74du); f_00519900();
    /* 0046b74d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046b74f: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b755: mov ecx, dword ptr [eax + 0x210] */ r_ecx = R32((u32)(r_eax+0x210u));
    /* 0046b75b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046b75c: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b762: call 0x519900 */ r_esp -= 4; W32(r_esp, 0x46b767u); f_00519900();
    /* 0046b767: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046b769: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b76f: mov eax, dword ptr [edx + 0x214] */ r_eax = R32((u32)(r_edx+0x214u));
    /* 0046b775: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046b776: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b77c: call 0x519900 */ r_esp -= 4; W32(r_esp, 0x46b781u); f_00519900();
    /* 0046b781: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046b783: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b789: mov edx, dword ptr [ecx + 0x218] */ r_edx = R32((u32)(r_ecx+0x218u));
    /* 0046b78f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046b790: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b796: call 0x519900 */ r_esp -= 4; W32(r_esp, 0x46b79bu); f_00519900();
    /* 0046b79b: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b7a1: mov ecx, dword ptr [eax + 0x1e0] */ r_ecx = R32((u32)(r_eax+0x1e0u));
    /* 0046b7a7: call 0x5f53c0 */ r_esp -= 4; W32(r_esp, 0x46b7acu); f_005f53c0();
    /* 0046b7ac: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0046b7af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046b7b0: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b7b6: mov edx, dword ptr [ecx + 0x208] */ r_edx = R32((u32)(r_ecx+0x208u));
    /* 0046b7bc: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b7c2: mov ecx, dword ptr [eax + 0x208] */ r_ecx = R32((u32)(r_eax+0x208u));
    /* 0046b7c8: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0046b7ca: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0046b7cd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46b7cfu); call_ind(t); }
    /* 0046b7cf: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b7d5: mov ecx, dword ptr [ecx + 0x1e4] */ r_ecx = R32((u32)(r_ecx+0x1e4u));
    /* 0046b7db: call 0x5f53c0 */ r_esp -= 4; W32(r_esp, 0x46b7e0u); f_005f53c0();
    /* 0046b7e0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0046b7e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046b7e4: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b7ea: mov eax, dword ptr [edx + 0x20c] */ r_eax = R32((u32)(r_edx+0x20cu));
    /* 0046b7f0: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b7f6: mov ecx, dword ptr [ecx + 0x20c] */ r_ecx = R32((u32)(r_ecx+0x20cu));
    /* 0046b7fc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0046b7fe: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0046b801: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46b803u); call_ind(t); }
    /* 0046b803: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b809: mov ecx, dword ptr [ecx + 0x1e8] */ r_ecx = R32((u32)(r_ecx+0x1e8u));
    /* 0046b80f: call 0x5f53c0 */ r_esp -= 4; W32(r_esp, 0x46b814u); f_005f53c0();
    /* 0046b814: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0046b817: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046b818: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b81e: mov eax, dword ptr [edx + 0x210] */ r_eax = R32((u32)(r_edx+0x210u));
    /* 0046b824: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b82a: mov ecx, dword ptr [ecx + 0x210] */ r_ecx = R32((u32)(r_ecx+0x210u));
    /* 0046b830: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0046b832: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0046b835: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46b837u); call_ind(t); }
    /* 0046b837: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b83d: mov ecx, dword ptr [ecx + 0x1ec] */ r_ecx = R32((u32)(r_ecx+0x1ecu));
    /* 0046b843: call 0x5f53c0 */ r_esp -= 4; W32(r_esp, 0x46b848u); f_005f53c0();
    /* 0046b848: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0046b84b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046b84c: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b852: mov eax, dword ptr [edx + 0x214] */ r_eax = R32((u32)(r_edx+0x214u));
    /* 0046b858: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b85e: mov ecx, dword ptr [ecx + 0x214] */ r_ecx = R32((u32)(r_ecx+0x214u));
    /* 0046b864: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0046b866: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0046b869: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46b86bu); call_ind(t); }
    /* 0046b86b: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b871: mov ecx, dword ptr [ecx + 0x1f0] */ r_ecx = R32((u32)(r_ecx+0x1f0u));
    /* 0046b877: call 0x5f53c0 */ r_esp -= 4; W32(r_esp, 0x46b87cu); f_005f53c0();
    /* 0046b87c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0046b87f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046b880: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b886: mov eax, dword ptr [edx + 0x218] */ r_eax = R32((u32)(r_edx+0x218u));
    /* 0046b88c: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b892: mov ecx, dword ptr [ecx + 0x218] */ r_ecx = R32((u32)(r_ecx+0x218u));
    /* 0046b898: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0046b89a: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0046b89d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46b89fu); call_ind(t); }
    /* 0046b89f: push 0xa6 */ { u32 v = 0xa6u; r_esp -= 4; W32(r_esp, v); }
    /* 0046b8a4: push 0x7e */ { u32 v = 0x7eu; r_esp -= 4; W32(r_esp, v); }
    /* 0046b8a6: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b8ac: mov edx, dword ptr [ecx + 0x1bc] */ r_edx = R32((u32)(r_ecx+0x1bcu));
    /* 0046b8b2: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0046b8b8: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 0046b8be: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0046b8c0: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0046b8c3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46b8c5u); call_ind(t); }
    /* 0046b8c5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046b8c8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0046b8cf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0046b8d0: mov esp, ebp */ r_esp = r_ebp;
    /* 0046b8d2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046b8d3: ret  */ FN_RET(0x0046a730); r_esp += 4; return;
}

void f_0046b8e0(void) /* DiscardDialog::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046b8e0);
    /* 0046b8e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046b8e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0046b8e3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0046b8e6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0046b8e9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0046b8ec: movzx ecx, byte ptr [eax + 4] */ r_ecx = (u32)R8((u32)(r_eax+0x4u));
    /* 0046b8f0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046b8f2: jne 0x46b903 */ if (!fZ) goto L_0046b903;
L_0046b8f4:; BB(0x0046b8f4);
    /* 0046b8f4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046b8f7: call 0x5f88f0 */ r_esp -= 4; W32(r_esp, 0x46b8fcu); f_005f88f0();
    /* 0046b8fc: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0046b8ff: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046b901: je 0x46b905 */ if (fZ) goto L_0046b905;
L_0046b903:; BB(0x0046b903);
    /* 0046b903: jmp 0x46b941 */ goto L_0046b941;
L_0046b905:; BB(0x0046b905);
    /* 0046b905: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0046b908: cmp dword ptr [eax + 0x18], 4 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046b90c: jne 0x46b935 */ if (!fZ) goto L_0046b935;
L_0046b90e:; BB(0x0046b90e);
    /* 0046b90e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0046b911: movsx edx, byte ptr [ecx + 0x14] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x14u));
    /* 0046b915: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046b916: call dword ptr [0x6b2224] */ { u32 t = R32((u32)(0x6b2224u)); r_esp -= 4; W32(r_esp, 0x46b91cu); call_ind(t); }
    /* 0046b91c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046b91f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0046b922: cmp dword ptr [ebp - 8], 0x74 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x74u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046b926: je 0x46b92a */ if (fZ) goto L_0046b92a;
L_0046b928:; BB(0x0046b928);
    /* 0046b928: jmp 0x46b935 */ goto L_0046b935;
L_0046b92a:; BB(0x0046b92a);
    /* 0046b92a: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 0046b930: call 0x5db240 */ r_esp -= 4; W32(r_esp, 0x46b935u); f_005db240();
L_0046b935:; BB(0x0046b935);
    /* 0046b935: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0046b938: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046b939: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046b93c: call 0x5f72f0 */ r_esp -= 4; W32(r_esp, 0x46b941u); f_005f72f0();
L_0046b941:; BB(0x0046b941);
    /* 0046b941: mov esp, ebp */ r_esp = r_ebp;
    /* 0046b943: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046b944: ret 4 */ FN_RET(0x0046b8e0); r_esp += 8; return;
}

