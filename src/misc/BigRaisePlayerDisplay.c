#include "protos.h"

void f_0059e270(void) /* BigRaisePlayerDisplay::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0059e270);
    /* 0059e270: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059e271: mov ebp, esp */ r_ebp = r_esp;
    /* 0059e273: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059e276: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0059e279: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0059e27c: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x59e281u); f_005e9e20();
    /* 0059e281: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0059e284: mov dword ptr [eax], 0x6cf058 */ W32((u32)(r_eax), 0x6cf058u);
    /* 0059e28a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0059e291: jmp 0x59e29c */ goto L_0059e29c;
L_0059e293:; BB(0x0059e293);
    /* 0059e293: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059e296: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0059e299: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0059e29c:; BB(0x0059e29c);
    /* 0059e29c: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059e2a0: jge 0x59e2b2 */ if ((fS==fO)) goto L_0059e2b2;
L_0059e2a2:; BB(0x0059e2a2);
    /* 0059e2a2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059e2a5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0059e2a8: mov dword ptr [eax + edx*4 + 8], 0 */ W32((u32)(r_eax+r_edx*4+0x8u), 0x0u);
    /* 0059e2b0: jmp 0x59e293 */ goto L_0059e293;
L_0059e2b2:; BB(0x0059e2b2);
    /* 0059e2b2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0059e2b5: mov esp, ebp */ r_esp = r_ebp;
    /* 0059e2b7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059e2b8: ret  */ FN_RET(0x0059e270); r_esp += 4; return;
}

void f_0059e2c0(void) /* BigRaisePlayerDisplay::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0059e2c0);
    /* 0059e2c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059e2c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0059e2c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0059e2c5: push 0x6a76a7 */ { u32 v = 0x6a76a7u; r_esp -= 4; W32(r_esp, v); }
    /* 0059e2ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0059e2d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059e2d1: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059e2d4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0059e2d9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059e2db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059e2dc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0059e2df: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0059e2e5: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0059e2e8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0059e2eb: mov dword ptr [eax], 0x6cf058 */ W32((u32)(r_eax), 0x6cf058u);
    /* 0059e2f1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0059e2f8: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0059e2ff: jmp 0x59e30a */ goto L_0059e30a;
L_0059e301:; BB(0x0059e301);
    /* 0059e301: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0059e304: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0059e307: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0059e30a:; BB(0x0059e30a);
    /* 0059e30a: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059e30e: jge 0x59e345 */ if ((fS==fO)) goto L_0059e345;
L_0059e310:; BB(0x0059e310);
    /* 0059e310: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0059e313: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0059e316: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 0059e31a: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0059e31d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0059e320: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0059e323: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059e327: je 0x59e33c */ if (fZ) goto L_0059e33c;
L_0059e329:; BB(0x0059e329);
    /* 0059e329: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059e32b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0059e32e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0059e330: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0059e333: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0059e335: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59e337u); call_ind(t); }
    /* 0059e337: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0059e33a: jmp 0x59e343 */ goto L_0059e343;
L_0059e33c:; BB(0x0059e33c);
    /* 0059e33c: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_0059e343:; BB(0x0059e343);
    /* 0059e343: jmp 0x59e301 */ goto L_0059e301;
L_0059e345:; BB(0x0059e345);
    /* 0059e345: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0059e34c: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0059e34f: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x59e354u); f_005e9e40();
    /* 0059e354: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059e357: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0059e35e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059e35f: mov esp, ebp */ r_esp = r_ebp;
    /* 0059e361: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059e362: ret  */ FN_RET(0x0059e2c0); r_esp += 4; return;
}

