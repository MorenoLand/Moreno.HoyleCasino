#include "protos.h"

void f_0061c5e0(void) /* sub_61C5E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061c5e0);
    /* 0061c5e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061c5e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0061c5e3: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061c5e6: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0061c5ed: mov dword ptr [ebp - 0xc], 0x1000000 */ W32((u32)(r_ebp+0xfffffff4u), 0x1000000u);
    /* 0061c5f4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061c5f7: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0061c5fa: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0061c601: jmp 0x61c60c */ goto L_0061c60c;
L_0061c603:; BB(0x0061c603);
    /* 0061c603: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061c606: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061c609: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0061c60c:; BB(0x0061c60c);
    /* 0061c60c: cmp dword ptr [ebp - 8], 0x100 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061c613: jge 0x61c6c7 */ if ((fS==fO)) goto L_0061c6c7;
L_0061c619:; BB(0x0061c619);
    /* 0061c619: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061c61c: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 0061c61f: movzx ecx, byte ptr [ebp + 0xc] */ r_ecx = (u32)R8((u32)(r_ebp+0xcu));
    /* 0061c623: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061c625: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0061c628: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061c62b: movzx eax, byte ptr [edx + 1] */ r_eax = (u32)R8((u32)(r_edx+0x1u));
    /* 0061c62f: movzx ecx, byte ptr [ebp + 0x10] */ r_ecx = (u32)R8((u32)(r_ebp+0x10u));
    /* 0061c633: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061c635: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0061c638: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061c63b: movzx eax, byte ptr [edx + 2] */ r_eax = (u32)R8((u32)(r_edx+0x2u));
    /* 0061c63f: movzx ecx, byte ptr [ebp + 0x14] */ r_ecx = (u32)R8((u32)(r_ebp+0x14u));
    /* 0061c643: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061c645: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0061c648: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061c64b: add edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061c64e: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0061c651: cmp dword ptr [ebp - 0x18], -0x64 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0xffffff9cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061c655: jl 0x61c65d */ if ((fS!=fO)) goto L_0061c65d;
L_0061c657:; BB(0x0061c657);
    /* 0061c657: cmp dword ptr [ebp - 0x18], 0x64 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061c65b: jle 0x61c65f */ if ((fZ||fS!=fO)) goto L_0061c65f;
L_0061c65d:; BB(0x0061c65d);
    /* 0061c65d: jmp 0x61c603 */ goto L_0061c603;
L_0061c65f:; BB(0x0061c65f);
    /* 0061c65f: cmp dword ptr [ebp - 0x20], -0x64 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0xffffff9cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061c663: jl 0x61c66b */ if ((fS!=fO)) goto L_0061c66b;
L_0061c665:; BB(0x0061c665);
    /* 0061c665: cmp dword ptr [ebp - 0x20], 0x64 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061c669: jle 0x61c66d */ if ((fZ||fS!=fO)) goto L_0061c66d;
L_0061c66b:; BB(0x0061c66b);
    /* 0061c66b: jmp 0x61c603 */ goto L_0061c603;
L_0061c66d:; BB(0x0061c66d);
    /* 0061c66d: cmp dword ptr [ebp - 4], -0x64 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffff9cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061c671: jl 0x61c679 */ if ((fS!=fO)) goto L_0061c679;
L_0061c673:; BB(0x0061c673);
    /* 0061c673: cmp dword ptr [ebp - 4], 0x64 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061c677: jle 0x61c67b */ if ((fZ||fS!=fO)) goto L_0061c67b;
L_0061c679:; BB(0x0061c679);
    /* 0061c679: jmp 0x61c603 */ goto L_0061c603;
L_0061c67b:; BB(0x0061c67b);
    /* 0061c67b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061c67e: imul eax, dword ptr [ebp - 0x18] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xffffffe8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061c682: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061c685: imul ecx, dword ptr [ebp - 0x20] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xffffffe0u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061c689: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061c68b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061c68e: imul edx, dword ptr [ebp - 4] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0xfffffffcu)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061c692: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r; fS = ((r >> 31) & 1); }
    /* 0061c694: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0061c697: jns 0x61c6a1 */ if (!fS) goto L_0061c6a1;
L_0061c699:; BB(0x0061c699);
    /* 0061c699: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0061c69c: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061c69e: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
L_0061c6a1:; BB(0x0061c6a1);
    /* 0061c6a1: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0061c6a4: cmp ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061c6a7: jge 0x61c6b5 */ if ((fS==fO)) goto L_0061c6b5;
L_0061c6a9:; BB(0x0061c6a9);
    /* 0061c6a9: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061c6ac: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0061c6af: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0061c6b2: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_0061c6b5:; BB(0x0061c6b5);
    /* 0061c6b5: cmp dword ptr [ebp - 0x1c], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061c6b9: jge 0x61c6c2 */ if ((fS==fO)) goto L_0061c6c2;
L_0061c6bb:; BB(0x0061c6bb);
    /* 0061c6bb: mov dword ptr [ebp - 8], 0x100 */ W32((u32)(r_ebp+0xfffffff8u), 0x100u);
L_0061c6c2:; BB(0x0061c6c2);
    /* 0061c6c2: jmp 0x61c603 */ goto L_0061c603;
L_0061c6c7:; BB(0x0061c6c7);
    /* 0061c6c7: mov al, byte ptr [ebp - 0x10] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff0u))) & 0xffu);
    /* 0061c6ca: mov esp, ebp */ r_esp = r_ebp;
    /* 0061c6cc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061c6cd: ret  */ FN_RET(0x0061c5e0); r_esp += 4; return;
}

void f_0061c810(void) /* sub_61C810 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061c810);
    /* 0061c810: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061c811: mov ebp, esp */ r_ebp = r_esp;
    /* 0061c813: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061c816: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061c819: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0061c81b: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0061c81e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061c821: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061c824: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
    /* 0061c827: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061c82a: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0061c82c: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0061c82f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061c832: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061c835: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
    /* 0061c838: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0061c83b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061c83e: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0061c840: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061c843: add edx, 0x300 */ {  u32 a = r_edx; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061c849: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
    /* 0061c84c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061c84f: mov cx, word ptr [eax] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax))) & 0xffffu);
    /* 0061c852: mov word ptr [ebp - 4], cx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_ecx);
    /* 0061c856: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061c859: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061c85c: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
    /* 0061c85f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061c862: mov cx, word ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0061c866: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 0061c869: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0061c86c: movsx eax, word ptr [edx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 0061c86f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0061c871: mov edx, 8 */ r_edx = 0x8u;
    /* 0061c876: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 0061c878: seto cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fO) ? 1 : 0) & 0xffu);
    /* 0061c87b: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0061c87d: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0061c87f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061c880: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x61c885u); f_00686d82();
    /* 0061c885: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061c888: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0061c88b: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0061c88e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061c891: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0061c893: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0061c89a: jmp 0x61c8a5 */ goto L_0061c8a5;
L_0061c89c:; BB(0x0061c89c);
    /* 0061c89c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061c89f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061c8a2: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0061c8a5:; BB(0x0061c8a5);
    /* 0061c8a5: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061c8a8: movsx ecx, word ptr [eax] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 0061c8ab: cmp dword ptr [ebp - 8], ecx */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061c8ae: jge 0x61c8ce */ if ((fS==fO)) goto L_0061c8ce;
L_0061c8b0:; BB(0x0061c8b0);
    /* 0061c8b0: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061c8b3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061c8b4: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0061c8b7: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0061c8b9: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061c8bc: lea eax, [ecx + edx*8] */ r_eax = (u32)(r_ecx+r_edx*8);
    /* 0061c8bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061c8c0: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 0061c8c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061c8c4: call 0x61c8f0 */ r_esp -= 4; W32(r_esp, 0x61c8c9u); f_0061c8f0();
    /* 0061c8c9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061c8cc: jmp 0x61c89c */ goto L_0061c89c;
L_0061c8ce:; BB(0x0061c8ce);
    /* 0061c8ce: mov esp, ebp */ r_esp = r_ebp;
    /* 0061c8d0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061c8d1: ret  */ FN_RET(0x0061c810); r_esp += 4; return;
}

void f_0061c8f0(void) /* sub_61C8F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061c8f0);
    /* 0061c8f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061c8f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0061c8f3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061c8f6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061c8f9: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0061c8fb: mov dx, word ptr [ecx] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx))) & 0xffffu);
    /* 0061c8fe: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
    /* 0061c902: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061c905: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0061c907: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061c90a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061c90d: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 0061c90f: movzx eax, word ptr [ebp - 4] */ r_eax = (u32)R16((u32)(r_ebp+0xfffffffcu));
    /* 0061c913: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0061c916: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061c919: mov dx, word ptr [ebp - 0xc] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 0061c91d: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 0061c920: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0061c922: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061c925: mov edx, 0x10 */ r_edx = 0x10u;
    /* 0061c92a: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 0061c92c: seto cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fO) ? 1 : 0) & 0xffu);
    /* 0061c92f: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0061c931: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0061c933: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061c934: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x61c939u); f_00686d82();
    /* 0061c939: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061c93c: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0061c93f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061c942: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061c945: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 0061c948: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0061c94f: jmp 0x61c95a */ goto L_0061c95a;
L_0061c951:; BB(0x0061c951);
    /* 0061c951: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061c954: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061c957: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0061c95a:; BB(0x0061c95a);
    /* 0061c95a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061c95d: cmp eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061c960: jge 0x61c97c */ if ((fS==fO)) goto L_0061c97c;
L_0061c962:; BB(0x0061c962);
    /* 0061c962: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061c965: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061c966: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0061c969: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061c96a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061c96d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061c96e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061c971: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061c972: call 0x61c980 */ r_esp -= 4; W32(r_esp, 0x61c977u); f_0061c980();
    /* 0061c977: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061c97a: jmp 0x61c951 */ goto L_0061c951;
L_0061c97c:; BB(0x0061c97c);
    /* 0061c97c: mov esp, ebp */ r_esp = r_ebp;
    /* 0061c97e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061c97f: ret  */ FN_RET(0x0061c8f0); r_esp += 4; return;
}

void f_0061c980(void) /* sub_61C980 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061c980);
    /* 0061c980: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061c981: mov ebp, esp */ r_ebp = r_esp;
    /* 0061c983: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061c986: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061c989: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0061c98b: mov dx, word ptr [ecx] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx))) & 0xffffu);
    /* 0061c98e: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
    /* 0061c992: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061c995: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0061c997: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061c99a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061c99d: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 0061c99f: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0061c9a2: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0061c9a5: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061c9a8: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0061c9ab: mov cx, word ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0061c9af: mov word ptr [eax + edx], cx */ W16((u32)(r_eax+r_edx), (u16)r_ecx);
    /* 0061c9b3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061c9b6: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0061c9b8: mov cx, word ptr [eax] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax))) & 0xffffu);
    /* 0061c9bb: mov word ptr [ebp - 4], cx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_ecx);
    /* 0061c9bf: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061c9c2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0061c9c4: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061c9c7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061c9ca: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0061c9cc: movzx edx, word ptr [ebp - 4] */ r_edx = (u32)R16((u32)(r_ebp+0xfffffffcu));
    /* 0061c9d0: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0061c9d3: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0061c9d6: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0061c9d9: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061c9dc: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0061c9df: mov cx, word ptr [ebp - 0xc] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 0061c9e3: mov word ptr [edx + eax + 2], cx */ W16((u32)(r_edx+r_eax+0x2u), (u16)r_ecx);
    /* 0061c9e8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061c9eb: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0061c9ed: mov cx, word ptr [eax] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax))) & 0xffffu);
    /* 0061c9f0: mov word ptr [ebp - 4], cx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_ecx);
    /* 0061c9f4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061c9f7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0061c9f9: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061c9fc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061c9ff: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0061ca01: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0061ca04: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0061ca07: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061ca0a: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0061ca0d: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0061ca11: mov word ptr [ecx + edx + 4], ax */ W16((u32)(r_ecx+r_edx+0x4u), (u16)r_eax);
    /* 0061ca16: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061ca19: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0061ca1b: mov ax, word ptr [edx] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx))) & 0xffffu);
    /* 0061ca1e: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 0061ca22: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061ca25: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0061ca27: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061ca2a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061ca2d: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0061ca2f: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0061ca32: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0061ca35: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0061ca38: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0061ca3b: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0061ca3f: mov word ptr [eax + ecx + 6], dx */ W16((u32)(r_eax+r_ecx+0x6u), (u16)r_edx);
    /* 0061ca44: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061ca47: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0061ca49: mov dx, word ptr [ecx] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx))) & 0xffffu);
    /* 0061ca4c: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
    /* 0061ca50: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061ca53: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0061ca55: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061ca58: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061ca5b: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 0061ca5d: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0061ca60: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0061ca63: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061ca66: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0061ca69: mov cx, word ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0061ca6d: mov word ptr [edx + eax + 8], cx */ W16((u32)(r_edx+r_eax+0x8u), (u16)r_ecx);
    /* 0061ca72: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061ca75: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0061ca77: mov cx, word ptr [eax] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax))) & 0xffffu);
    /* 0061ca7a: mov word ptr [ebp - 4], cx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_ecx);
    /* 0061ca7e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061ca81: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0061ca83: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061ca86: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061ca89: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0061ca8b: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0061ca8e: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0061ca91: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061ca94: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0061ca97: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0061ca9b: mov word ptr [ecx + edx + 0xa], ax */ W16((u32)(r_ecx+r_edx+0xau), (u16)r_eax);
    /* 0061caa0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0061caa2: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061caa5: mov edx, 4 */ r_edx = 0x4u;
    /* 0061caaa: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 0061caac: seto cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fO) ? 1 : 0) & 0xffu);
    /* 0061caaf: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0061cab1: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0061cab3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061cab4: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x61cab9u); f_00686d82();
    /* 0061cab9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061cabc: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0061cabf: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0061cac2: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0061cac5: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061cac8: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0061cacb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061cace: mov dword ptr [edx + eax + 0xc], ecx */ W32((u32)(r_edx+r_eax+0xcu), r_ecx);
    /* 0061cad2: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0061cad9: jmp 0x61cae4 */ goto L_0061cae4;
L_0061cadb:; BB(0x0061cadb);
    /* 0061cadb: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061cade: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061cae1: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0061cae4:; BB(0x0061cae4);
    /* 0061cae4: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061cae7: cmp eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061caea: jge 0x61cb36 */ if ((fS==fO)) goto L_0061cb36;
L_0061caec:; BB(0x0061caec);
    /* 0061caec: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061caef: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0061caf1: mov ax, word ptr [edx] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx))) & 0xffffu);
    /* 0061caf4: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 0061caf8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061cafb: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0061cafd: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061cb00: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061cb03: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0061cb05: movzx ecx, word ptr [ebp - 4] */ r_ecx = (u32)R16((u32)(r_ebp+0xfffffffcu));
    /* 0061cb09: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0061cb0c: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0061cb0f: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0061cb12: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061cb15: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0061cb18: mov edx, dword ptr [ecx + edx + 0xc] */ r_edx = R32((u32)(r_ecx+r_edx+0xcu));
    /* 0061cb1c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061cb1f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061cb22: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 0061cb24: mov dword ptr [edx + eax*4], ecx */ W32((u32)(r_edx+r_eax*4), r_ecx);
    /* 0061cb27: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061cb2a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0061cb2c: add eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061cb2f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061cb32: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0061cb34: jmp 0x61cadb */ goto L_0061cadb;
L_0061cb36:; BB(0x0061cb36);
    /* 0061cb36: mov esp, ebp */ r_esp = r_ebp;
    /* 0061cb38: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061cb39: ret  */ FN_RET(0x0061c980); r_esp += 4; return;
}

void f_0061cd70(void) /* sub_61CD70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061cd70);
    /* 0061cd70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061cd71: mov ebp, esp */ r_ebp = r_esp;
    /* 0061cd73: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061cd76: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061cd79: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061cd7c: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 0061cd7f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061cd82: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061cd85: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 0061cd88: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061cd8b: add edx, 0x300 */ {  u32 a = r_edx; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061cd91: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
    /* 0061cd94: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061cd97: mov cx, word ptr [eax] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax))) & 0xffffu);
    /* 0061cd9a: mov word ptr [ebp - 8], cx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_ecx);
    /* 0061cd9e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061cda1: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061cda4: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
    /* 0061cda7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061cdae: jmp 0x61cdb9 */ goto L_0061cdb9;
L_0061cdb0:; BB(0x0061cdb0);
    /* 0061cdb0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061cdb3: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061cdb6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0061cdb9:; BB(0x0061cdb9);
    /* 0061cdb9: movzx ecx, word ptr [ebp - 8] */ r_ecx = (u32)R16((u32)(r_ebp+0xfffffff8u));
    /* 0061cdbd: cmp dword ptr [ebp - 4], ecx */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061cdc0: jge 0x61cdd8 */ if ((fS==fO)) goto L_0061cdd8;
L_0061cdc2:; BB(0x0061cdc2);
    /* 0061cdc2: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0061cdc5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061cdc6: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061cdc9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061cdca: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 0061cdcd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061cdce: call 0x61cde0 */ r_esp -= 4; W32(r_esp, 0x61cdd3u); f_0061cde0();
    /* 0061cdd3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061cdd6: jmp 0x61cdb0 */ goto L_0061cdb0;
L_0061cdd8:; BB(0x0061cdd8);
    /* 0061cdd8: mov esp, ebp */ r_esp = r_ebp;
    /* 0061cdda: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061cddb: ret  */ FN_RET(0x0061cd70); r_esp += 4; return;
}

void f_0061cde0(void) /* sub_61CDE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061cde0);
    /* 0061cde0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061cde1: mov ebp, esp */ r_ebp = r_esp;
    /* 0061cde3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061cde6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061cde9: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0061cdeb: mov dx, word ptr [ecx] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx))) & 0xffffu);
    /* 0061cdee: mov word ptr [ebp - 8], dx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_edx);
    /* 0061cdf2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061cdf5: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0061cdf7: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061cdfa: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061cdfd: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 0061cdff: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061ce06: jmp 0x61ce11 */ goto L_0061ce11;
L_0061ce08:; BB(0x0061ce08);
    /* 0061ce08: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061ce0b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061ce0e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0061ce11:; BB(0x0061ce11);
    /* 0061ce11: movzx ecx, word ptr [ebp - 8] */ r_ecx = (u32)R16((u32)(r_ebp+0xfffffff8u));
    /* 0061ce15: cmp dword ptr [ebp - 4], ecx */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061ce18: jge 0x61ce30 */ if ((fS==fO)) goto L_0061ce30;
L_0061ce1a:; BB(0x0061ce1a);
    /* 0061ce1a: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0061ce1d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061ce1e: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061ce21: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061ce22: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061ce25: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061ce26: call 0x61ce40 */ r_esp -= 4; W32(r_esp, 0x61ce2bu); f_0061ce40();
    /* 0061ce2b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061ce2e: jmp 0x61ce08 */ goto L_0061ce08;
L_0061ce30:; BB(0x0061ce30);
    /* 0061ce30: mov esp, ebp */ r_esp = r_ebp;
    /* 0061ce32: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061ce33: ret  */ FN_RET(0x0061cde0); r_esp += 4; return;
}

void f_0061ce40(void) /* sub_61CE40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061ce40);
    /* 0061ce40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061ce41: mov ebp, esp */ r_ebp = r_esp;
    /* 0061ce43: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061ce46: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061ce49: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0061ce4b: mov dx, word ptr [ecx] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx))) & 0xffffu);
    /* 0061ce4e: mov word ptr [ebp - 0x10], dx */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_edx);
    /* 0061ce52: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061ce55: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0061ce57: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061ce5a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061ce5d: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 0061ce5f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061ce62: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0061ce64: mov dx, word ptr [ecx] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx))) & 0xffffu);
    /* 0061ce67: mov word ptr [ebp - 0xc], dx */ W16((u32)(r_ebp+0xfffffff4u), (u16)r_edx);
    /* 0061ce6b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061ce6e: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0061ce70: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061ce73: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061ce76: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 0061ce78: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061ce7b: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0061ce7d: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061ce80: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061ce83: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 0061ce85: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061ce88: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0061ce8a: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061ce8d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061ce90: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 0061ce92: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061ce95: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0061ce97: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061ce9a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061ce9d: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 0061ce9f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061cea2: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0061cea4: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061cea7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061ceaa: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 0061ceac: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0061ceb3: jmp 0x61cebe */ goto L_0061cebe;
L_0061ceb5:; BB(0x0061ceb5);
    /* 0061ceb5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061ceb8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061cebb: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0061cebe:; BB(0x0061cebe);
    /* 0061cebe: movzx ecx, word ptr [ebp - 0xc] */ r_ecx = (u32)R16((u32)(r_ebp+0xfffffff4u));
    /* 0061cec2: cmp dword ptr [ebp - 8], ecx */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061cec5: jge 0x61cf0b */ if ((fS==fO)) goto L_0061cf0b;
L_0061cec7:; BB(0x0061cec7);
    /* 0061cec7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061ceca: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0061cecc: mov cx, word ptr [eax] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax))) & 0xffffu);
    /* 0061cecf: mov word ptr [ebp - 4], cx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_ecx);
    /* 0061ced3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061ced6: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0061ced8: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061cedb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061cede: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0061cee0: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0061cee3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061cee4: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061cee7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061cee8: movzx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)R16((u32)(r_ebp+0xfffffff0u));
    /* 0061ceec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061ceed: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061cef0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0061cef2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061cef3: call 0x61cf10 */ r_esp -= 4; W32(r_esp, 0x61cef8u); f_0061cf10();
    /* 0061cef8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061cefb: movzx ecx, word ptr [ebp - 4] */ r_ecx = (u32)R16((u32)(r_ebp+0xfffffffcu));
    /* 0061ceff: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061cf02: add ecx, dword ptr [edx] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061cf04: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061cf07: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0061cf09: jmp 0x61ceb5 */ goto L_0061ceb5;
L_0061cf0b:; BB(0x0061cf0b);
    /* 0061cf0b: mov esp, ebp */ r_esp = r_ebp;
    /* 0061cf0d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061cf0e: ret  */ FN_RET(0x0061ce40); r_esp += 4; return;
}

void f_0061cf10(void) /* sub_61CF10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061cf10);
    /* 0061cf10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061cf11: mov ebp, esp */ r_ebp = r_esp;
    /* 0061cf13: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061cf16: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061cf19: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 0061cf1c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061cf1f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061cf22: cmp edx, dword ptr [ebp + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061cf25: jne 0x61cf2f */ if (!fZ) goto L_0061cf2f;
L_0061cf27:; BB(0x0061cf27);
    /* 0061cf27: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061cf2a: mov cl, byte ptr [ebp + 0x14] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x14u))) & 0xffu);
    /* 0061cf2d: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
L_0061cf2f:; BB(0x0061cf2f);
    /* 0061cf2f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061cf32: mov ax, word ptr [edx + 1] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x1u))) & 0xffffu);
    /* 0061cf36: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
    /* 0061cf3a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061cf3d: add ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061cf40: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
L_0061cf43:; BB(0x0061cf43);
    /* 0061cf43: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061cf47: jle 0x61d021 */ if ((fZ||fS!=fO)) goto L_0061d021;
L_0061cf4d:; BB(0x0061cf4d);
    /* 0061cf4d: movzx edx, word ptr [ebp - 8] */ r_edx = (u32)R16((u32)(r_ebp+0xfffffff8u));
    /* 0061cf51: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0061cf53: jle 0x61d021 */ if ((fZ||fS!=fO)) goto L_0061d021;
L_0061cf59:; BB(0x0061cf59);
    /* 0061cf59: movzx eax, word ptr [ebp - 8] */ r_eax = (u32)R16((u32)(r_ebp+0xfffffff8u));
    /* 0061cf5d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061cf60: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0061cf62: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 0061cf65: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061cf68: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0061cf6b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061cf6e: sub eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061cf71: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0061cf74: cmp dword ptr [ebp - 0xc], 0x86 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x86u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0061cf7b: ja 0x61cfe9 */ if ((!fC&&!fZ)) goto L_0061cfe9;
L_0061cf7d:; BB(0x0061cf7d);
    /* 0061cf7d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061cf80: movzx edx, byte ptr [ecx + 0x61d048] */ r_edx = (u32)R8((u32)(r_ecx+0x61d048u));
    /* 0061cf87: jmp dword ptr [edx*4 + 0x61d028] */ { u32 t = R32((u32)(r_edx*4+0x61d028u)); switch (t) { case 0x61cf9fu: goto L_0061cf9f; case 0x61cfbau: goto L_0061cfba; case 0x61cfd4u: goto L_0061cfd4; case 0x61cfdfu: goto L_0061cfdf; case 0x61cf90u: goto L_0061cf90; case 0x61cfabu: goto L_0061cfab; case 0x61cfc9u: goto L_0061cfc9; case 0x61cfe9u: goto L_0061cfe9; default: UNSUP(0x0061cf87, "jump table entry is not a known target"); } }
L_0061cf90:; BB(0x0061cf90);
    /* 0061cf90: movzx eax, word ptr [ebp - 8] */ r_eax = (u32)R16((u32)(r_ebp+0xfffffff8u));
    /* 0061cf94: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061cf97: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061cf9a: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 0061cf9d: jmp 0x61cfe9 */ goto L_0061cfe9;
L_0061cf9f:; BB(0x0061cf9f);
    /* 0061cf9f: movzx ecx, word ptr [ebp - 8] */ r_ecx = (u32)R16((u32)(r_ebp+0xfffffff8u));
    /* 0061cfa3: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061cfa6: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 0061cfa9: jmp 0x61cfe9 */ goto L_0061cfe9;
L_0061cfab:; BB(0x0061cfab);
    /* 0061cfab: movzx edx, word ptr [ebp - 8] */ r_edx = (u32)R16((u32)(r_ebp+0xfffffff8u));
    /* 0061cfaf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061cfb2: lea ecx, [eax + edx*4] */ r_ecx = (u32)(r_eax+r_edx*4);
    /* 0061cfb5: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 0061cfb8: jmp 0x61cfe9 */ goto L_0061cfe9;
L_0061cfba:; BB(0x0061cfba);
    /* 0061cfba: movzx edx, word ptr [ebp - 8] */ r_edx = (u32)R16((u32)(r_ebp+0xfffffff8u));
    /* 0061cfbe: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061cfc1: lea ecx, [eax + edx*2] */ r_ecx = (u32)(r_eax+r_edx*2);
    /* 0061cfc4: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 0061cfc7: jmp 0x61cfe9 */ goto L_0061cfe9;
L_0061cfc9:; BB(0x0061cfc9);
    /* 0061cfc9: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061cfcc: add edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061cfcf: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
    /* 0061cfd2: jmp 0x61cfe9 */ goto L_0061cfe9;
L_0061cfd4:; BB(0x0061cfd4);
    /* 0061cfd4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061cfd7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061cfda: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 0061cfdd: jmp 0x61cfe9 */ goto L_0061cfe9;
L_0061cfdf:; BB(0x0061cfdf);
    /* 0061cfdf: movzx ecx, word ptr [ebp - 8] */ r_ecx = (u32)R16((u32)(r_ebp+0xfffffff8u));
    /* 0061cfe3: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061cfe6: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
L_0061cfe9:; BB(0x0061cfe9);
    /* 0061cfe9: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061cfed: jle 0x61d01c */ if ((fZ||fS!=fO)) goto L_0061d01c;
L_0061cfef:; BB(0x0061cfef);
    /* 0061cfef: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061cff2: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 0061cff5: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0061cff8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061cffb: cmp ecx, dword ptr [ebp + 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061cffe: jne 0x61d008 */ if (!fZ) goto L_0061d008;
L_0061d000:; BB(0x0061d000);
    /* 0061d000: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061d003: mov al, byte ptr [ebp + 0x14] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x14u))) & 0xffu);
    /* 0061d006: mov byte ptr [edx], al */ W8((u32)(r_edx), (u8)r_eax);
L_0061d008:; BB(0x0061d008);
    /* 0061d008: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061d00b: mov dx, word ptr [ecx + 1] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+0x1u))) & 0xffffu);
    /* 0061d00f: mov word ptr [ebp - 8], dx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_edx);
    /* 0061d013: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061d016: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061d019: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_0061d01c:; BB(0x0061d01c);
    /* 0061d01c: jmp 0x61cf43 */ goto L_0061cf43;
L_0061d021:; BB(0x0061d021);
    /* 0061d021: mov esp, ebp */ r_esp = r_ebp;
    /* 0061d023: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061d024: ret  */ FN_RET(0x0061cf10); r_esp += 4; return;
}

