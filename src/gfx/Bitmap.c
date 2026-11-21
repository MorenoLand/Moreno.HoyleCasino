#include "protos.h"

void f_0062e2d0(void) /* Bitmap::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062e2d0);
    /* 0062e2d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062e2d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0062e2d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062e2d5: push 0x6ab79b */ { u32 v = 0x6ab79bu; r_esp -= 4; W32(r_esp, v); }
    /* 0062e2da: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0062e2e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062e2e1: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062e2e4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0062e2e9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062e2eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062e2ec: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0062e2ef: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0062e2f5: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0062e2f8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0062e2fb: mov dword ptr [eax], 0x6d9b8c */ W32((u32)(r_eax), 0x6d9b8cu);
    /* 0062e301: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0062e308: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062e30b: mov edx, dword ptr [ecx + 0x408] */ r_edx = R32((u32)(r_ecx+0x408u));
    /* 0062e311: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0062e314: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062e317: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062e318: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x62e31du); f_00686cae();
    /* 0062e31d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062e320: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0062e327: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062e32a: call 0x62aef0 */ r_esp -= 4; W32(r_esp, 0x62e32fu); f_0062aef0();
    /* 0062e32f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062e332: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062e339: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062e33a: mov esp, ebp */ r_esp = r_ebp;
    /* 0062e33c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062e33d: ret  */ FN_RET(0x0062e2d0); r_esp += 4; return;
}

void f_0062e4b0(void) /* Bitmap::vfunc4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062e4b0);
    /* 0062e4b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062e4b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0062e4b3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062e4b6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062e4b7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062e4b8: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0062e4bb: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062e4be: mov ecx, dword ptr [eax + 0x408] */ r_ecx = R32((u32)(r_eax+0x408u));
    /* 0062e4c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0062e4c7: movzx edx, word ptr [ebp + 0x18] */ r_edx = (u32)R16((u32)(r_ebp+0x18u));
    /* 0062e4cb: movzx eax, word ptr [ebp + 0x28] */ r_eax = (u32)R16((u32)(r_ebp+0x28u));
    /* 0062e4cf: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0062e4d2: movzx ecx, word ptr [ebp + 0x14] */ r_ecx = (u32)R16((u32)(r_ebp+0x14u));
    /* 0062e4d6: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062e4d9: imul ecx, dword ptr [eax + 0x418] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_eax+0x418u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0062e4e0: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062e4e3: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062e4e5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0062e4e8:; BB(0x0062e4e8);
    /* 0062e4e8: movzx ecx, word ptr [ebp + 0x20] */ r_ecx = (u32)R16((u32)(r_ebp+0x20u));
    /* 0062e4ec: mov dx, word ptr [ebp + 0x20] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0x20u))) & 0xffffu);
    /* 0062e4f0: sub dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0062e4f4: mov word ptr [ebp + 0x20], dx */ W16((u32)(r_ebp+0x20u), (u16)r_edx);
    /* 0062e4f8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e4fa: je 0x62e54c */ if (fZ) goto L_0062e54c;
L_0062e4fc:; BB(0x0062e4fc);
    /* 0062e4fc: movzx eax, word ptr [ebp + 0x10] */ r_eax = (u32)R16((u32)(r_ebp+0x10u));
    /* 0062e500: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062e501: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0062e504: call 0x6238d0 */ r_esp -= 4; W32(r_esp, 0x62e509u); f_006238d0();
    /* 0062e509: mov esi, eax */ r_esi = r_eax;
    /* 0062e50b: movzx edi, word ptr [ebp + 0xc] */ r_edi = (u32)R16((u32)(r_ebp+0xcu));
    /* 0062e50f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0062e512: call 0x623930 */ r_esp -= 4; W32(r_esp, 0x62e517u); f_00623930();
    /* 0062e517: imul edi, eax */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_eax; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0062e51a: add esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0062e51c: mov dword ptr [ebp - 8], esi */ W32((u32)(r_ebp+0xfffffff8u), r_esi);
    /* 0062e51f: mov cx, word ptr [ebp + 0x1c] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0x1cu))) & 0xffffu);
    /* 0062e523: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062e524: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062e527: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062e528: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062e52b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062e52c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062e52f: call 0x62e380 */ r_esp -= 4; W32(r_esp, 0x62e534u); f_0062e380();
    /* 0062e534: movzx ecx, word ptr [ebp + 0x28] */ r_ecx = (u32)R16((u32)(r_ebp+0x28u));
    /* 0062e538: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062e53b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0062e53e: mov dx, word ptr [ebp + 0x10] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0x10u))) & 0xffffu);
    /* 0062e542: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0062e546: mov word ptr [ebp + 0x10], dx */ W16((u32)(r_ebp+0x10u), (u16)r_edx);
    /* 0062e54a: jmp 0x62e4e8 */ goto L_0062e4e8;
L_0062e54c:; BB(0x0062e54c);
    /* 0062e54c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062e54d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062e54e: mov esp, ebp */ r_esp = r_ebp;
    /* 0062e550: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062e551: ret 0x24 */ FN_RET(0x0062e4b0); r_esp += 40; return;
}

void f_0062e6b0(void) /* Bitmap::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062e6b0);
    /* 0062e6b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062e6b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0062e6b3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062e6b6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0062e6b9: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062e6bc: mov ecx, dword ptr [eax + 0x408] */ r_ecx = R32((u32)(r_eax+0x408u));
    /* 0062e6c2: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0062e6c5: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062e6c8: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0062e6cb: imul eax, dword ptr [edx + 0x414] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_edx+0x414u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0062e6d2: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062e6d5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062e6d8: mov dl, byte ptr [ecx + eax] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+r_eax))) & 0xffu);
    /* 0062e6db: mov byte ptr [ebp - 1], dl */ W8((u32)(r_ebp+0xffffffffu), (u8)r_edx);
    /* 0062e6de: mov al, byte ptr [ebp - 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
    /* 0062e6e1: mov esp, ebp */ r_esp = r_ebp;
    /* 0062e6e3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062e6e4: ret 8 */ FN_RET(0x0062e6b0); r_esp += 12; return;
}

