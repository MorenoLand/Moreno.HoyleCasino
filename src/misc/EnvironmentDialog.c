#include "protos.h"

void f_00654930(void) /* EnvironmentDialog::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00654930);
    /* 00654930: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00654931: mov ebp, esp */ r_ebp = r_esp;
    /* 00654933: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00654935: push 0x6ac538 */ { u32 v = 0x6ac538u; r_esp -= 4; W32(r_esp, v); }
    /* 0065493a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00654940: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00654941: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00654942: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00654947: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00654949: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065494a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0065494d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00654953: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00654956: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00654958: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065495a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065495d: call 0x5f71f0 */ r_esp -= 4; W32(r_esp, 0x654962u); f_005f71f0();
    /* 00654962: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00654969: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065496c: mov dword ptr [eax], 0x6ddde4 */ W32((u32)(r_eax), 0x6ddde4u);
    /* 00654972: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00654974: push 0x30d4d7 */ { u32 v = 0x30d4d7u; r_esp -= 4; W32(r_esp, v); }
    /* 00654979: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065497c: call 0x5f83d0 */ r_esp -= 4; W32(r_esp, 0x654981u); f_005f83d0();
    /* 00654981: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00654984: mov dword ptr [ecx + 0x1bc], 0 */ W32((u32)(r_ecx+0x1bcu), 0x0u);
    /* 0065498e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00654991: mov byte ptr [edx + 0x1b8], 1 */ W8((u32)(r_edx+0x1b8u), 0x1u);
    /* 00654998: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0065499f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006549a2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006549a5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006549ac: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006549ad: mov esp, ebp */ r_esp = r_ebp;
    /* 006549af: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006549b0: ret  */ FN_RET(0x00654930); r_esp += 4; return;
}

void f_006549c0(void) /* EnvironmentDialog::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006549c0);
    /* 006549c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006549c1: mov ebp, esp */ r_ebp = r_esp;
    /* 006549c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006549c5: push 0x6ac55b */ { u32 v = 0x6ac55bu; r_esp -= 4; W32(r_esp, v); }
    /* 006549ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006549d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006549d1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006549d4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 006549d9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006549db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006549dc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 006549df: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 006549e5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 006549e8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006549eb: mov dword ptr [eax], 0x6ddde4 */ W32((u32)(r_eax), 0x6ddde4u);
    /* 006549f1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006549f8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006549fb: mov edx, dword ptr [ecx + 0x1bc] */ r_edx = R32((u32)(r_ecx+0x1bcu));
    /* 00654a01: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00654a04: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00654a07: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00654a0a: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00654a0e: je 0x654a23 */ if (fZ) goto L_00654a23;
L_00654a10:; BB(0x00654a10);
    /* 00654a10: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00654a12: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00654a15: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00654a17: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00654a1a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00654a1c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x654a1eu); call_ind(t); }
    /* 00654a1e: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00654a21: jmp 0x654a2a */ goto L_00654a2a;
L_00654a23:; BB(0x00654a23);
    /* 00654a23: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00654a2a:; BB(0x00654a2a);
    /* 00654a2a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00654a31: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00654a34: call 0x5f7260 */ r_esp -= 4; W32(r_esp, 0x654a39u); f_005f7260();
    /* 00654a39: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00654a3c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00654a43: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00654a44: mov esp, ebp */ r_esp = r_ebp;
    /* 00654a46: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00654a47: ret  */ FN_RET(0x006549c0); r_esp += 4; return;
}

void f_00654a50(void) /* EnvironmentDialog::vfunc16 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00654a50);
    /* 00654a50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00654a51: mov ebp, esp */ r_ebp = r_esp;
    /* 00654a53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00654a54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00654a57: mov eax, 0xa1 */ r_eax = 0xa1u;
    /* 00654a5c: mov esp, ebp */ r_esp = r_ebp;
    /* 00654a5e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00654a5f: ret  */ FN_RET(0x00654a50); r_esp += 4; return;
}

void f_00654a60(void) /* EnvironmentDialog::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00654a60);
    /* 00654a60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00654a61: mov ebp, esp */ r_ebp = r_esp;
    /* 00654a63: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00654a65: push 0x6ac581 */ { u32 v = 0x6ac581u; r_esp -= 4; W32(r_esp, v); }
    /* 00654a6a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00654a70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00654a71: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00654a74: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00654a75: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00654a7a: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00654a7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00654a7d: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00654a80: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00654a86: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00654a89: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00654a8b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00654a8d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00654a8f: push 0xa1 */ { u32 v = 0xa1u; r_esp -= 4; W32(r_esp, v); }
    /* 00654a94: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 00654a96: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 00654a98: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00654a9a: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 00654a9c: push 0x103 */ { u32 v = 0x103u; r_esp -= 4; W32(r_esp, v); }
    /* 00654aa1: push 0x156 */ { u32 v = 0x156u; r_esp -= 4; W32(r_esp, v); }
    /* 00654aa6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00654aa8: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00654aaa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00654aac: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00654aaf: call 0x5fa880 */ r_esp -= 4; W32(r_esp, 0x654ab4u); f_005fa880();
    /* 00654ab4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00654ab6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00654ab8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00654aba: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00654abf: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00654ac4: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00654ac9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00654acb: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00654acd: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 00654ad2: push 0x156 */ { u32 v = 0x156u; r_esp -= 4; W32(r_esp, v); }
    /* 00654ad7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00654ad9: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00654adb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00654add: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00654ae0: call 0x5fa880 */ r_esp -= 4; W32(r_esp, 0x654ae5u); f_005fa880();
    /* 00654ae5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00654ae7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00654ae9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00654aeb: push 0xa1 */ { u32 v = 0xa1u; r_esp -= 4; W32(r_esp, v); }
    /* 00654af0: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 00654af2: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 00654af4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00654af6: push 0x180 */ { u32 v = 0x180u; r_esp -= 4; W32(r_esp, v); }
    /* 00654afb: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00654afd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00654aff: push 0x202 */ { u32 v = 0x202u; r_esp -= 4; W32(r_esp, v); }
    /* 00654b04: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00654b06: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00654b08: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00654b0b: call 0x5fa880 */ r_esp -= 4; W32(r_esp, 0x654b10u); f_005fa880();
    /* 00654b10: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00654b12: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00654b14: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00654b16: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00654b1b: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00654b20: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00654b25: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00654b27: push 0x181 */ { u32 v = 0x181u; r_esp -= 4; W32(r_esp, v); }
    /* 00654b2c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00654b2e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00654b30: push 0x202 */ { u32 v = 0x202u; r_esp -= 4; W32(r_esp, v); }
    /* 00654b35: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00654b37: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00654b39: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00654b3c: call 0x5fa880 */ r_esp -= 4; W32(r_esp, 0x654b41u); f_005fa880();
    /* 00654b41: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00654b43: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00654b45: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00654b47: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00654b49: push 0x18b */ { u32 v = 0x18bu; r_esp -= 4; W32(r_esp, v); }
    /* 00654b4e: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 00654b50: push 0x73 */ { u32 v = 0x73u; r_esp -= 4; W32(r_esp, v); }
    /* 00654b52: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 00654b54: push 0x6de040 */ { u32 v = 0x6de040u; r_esp -= 4; W32(r_esp, v); }
    /* 00654b59: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x654b5eu); f_00630f40();
    /* 00654b5e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00654b61: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00654b62: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00654b64: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00654b66: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00654b69: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x654b6eu); f_005fa5b0();
    /* 00654b6e: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00654b75: jmp 0x654b80 */ goto L_00654b80;
L_00654b77:; BB(0x00654b77);
    /* 00654b77: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00654b7a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00654b7d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_00654b80:; BB(0x00654b80);
    /* 00654b80: cmp dword ptr [ebp - 0x14], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00654b84: jge 0x654bd8 */ if ((fS==fO)) goto L_00654bd8;
L_00654b86:; BB(0x00654b86);
    /* 00654b86: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00654b88: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00654b8a: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 00654b8c: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 00654b8e: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 00654b90: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00654b93: mov edx, dword ptr [ecx*4 + 0x77082c] */ r_edx = R32((u32)(r_ecx*4+0x77082cu));
    /* 00654b9a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00654b9b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x654ba0u); f_00630f40();
    /* 00654ba0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00654ba3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00654ba4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00654ba6: push 0x188 */ { u32 v = 0x188u; r_esp -= 4; W32(r_esp, v); }
    /* 00654bab: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00654bae: imul eax, eax, 0x5a */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x5au; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00654bb1: add eax, 0xf4 */ {  u32 a = r_eax; u32 b = 0xf4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00654bb6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00654bb7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00654bba: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 00654bbc: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 00654bbe: and ecx, 0xfffffff9 */ {  u32 a = r_ecx; u32 b = 0xfffffff9u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00654bc1: add ecx, 0x30d4e5 */ {  u32 a = r_ecx; u32 b = 0x30d4e5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00654bc7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00654bc8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00654bcb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00654bcc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00654bce: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00654bd1: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x654bd6u); f_005f9de0();
    /* 00654bd6: jmp 0x654b77 */ goto L_00654b77;
L_00654bd8:; BB(0x00654bd8);
    /* 00654bd8: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00654bda: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00654bdc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00654bdf: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x654be4u); f_005fb300();
    /* 00654be4: mov ecx, eax */ r_ecx = r_eax;
    /* 00654be6: call 0x6026f0 */ r_esp -= 4; W32(r_esp, 0x654bebu); f_006026f0();
    /* 00654beb: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 00654bed: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00654bef: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00654bf2: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x654bf7u); f_005fb300();
    /* 00654bf7: mov ecx, eax */ r_ecx = r_eax;
    /* 00654bf9: call 0x6026f0 */ r_esp -= 4; W32(r_esp, 0x654bfeu); f_006026f0();
    /* 00654bfe: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00654c05: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00654c07: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00654c09: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00654c0b: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 00654c0d: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 00654c0f: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00654c11: push 0x6de028 */ { u32 v = 0x6de028u; r_esp -= 4; W32(r_esp, v); }
    /* 00654c16: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x654c1bu); f_00630f40();
    /* 00654c1b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00654c1e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00654c1f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00654c21: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00654c24: imul eax, eax, 0x19 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x19u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00654c27: add eax, 0x39 */ {  u32 a = r_eax; u32 b = 0x39u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00654c2a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00654c2b: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 00654c2d: push 0x30d4c9 */ { u32 v = 0x30d4c9u; r_esp -= 4; W32(r_esp, v); }
    /* 00654c32: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00654c34: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00654c36: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00654c39: call 0x5f9ef0 */ r_esp -= 4; W32(r_esp, 0x654c3eu); f_005f9ef0();
    /* 00654c3e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00654c41: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00654c44: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00654c47: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00654c49: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00654c4b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00654c4d: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 00654c4f: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 00654c51: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00654c53: push 0x6de010 */ { u32 v = 0x6de010u; r_esp -= 4; W32(r_esp, v); }
    /* 00654c58: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x654c5du); f_00630f40();
    /* 00654c5d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00654c60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00654c61: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00654c63: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00654c66: imul edx, edx, 0x19 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x19u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00654c69: add edx, 0x39 */ {  u32 a = r_edx; u32 b = 0x39u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00654c6c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00654c6d: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 00654c6f: push 0x30d4c9 */ { u32 v = 0x30d4c9u; r_esp -= 4; W32(r_esp, v); }
    /* 00654c74: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00654c76: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00654c78: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00654c7b: call 0x5f9ef0 */ r_esp -= 4; W32(r_esp, 0x654c80u); f_005f9ef0();
    /* 00654c80: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00654c83: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00654c86: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00654c89: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00654c8f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00654c91: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00654c97: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00654c9d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x654c9fu); call_ind(t); }
    /* 00654c9f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00654ca2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00654ca4: je 0x654cdf */ if (fZ) goto L_00654cdf;
L_00654ca6:; BB(0x00654ca6);
    /* 00654ca6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00654ca8: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00654caa: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00654cac: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 00654cae: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 00654cb0: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00654cb2: push 0x6ddff4 */ { u32 v = 0x6ddff4u; r_esp -= 4; W32(r_esp, v); }
    /* 00654cb7: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x654cbcu); f_00630f40();
    /* 00654cbc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00654cbf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00654cc0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00654cc2: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00654cc5: imul edx, edx, 0x19 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x19u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00654cc8: add edx, 0x39 */ {  u32 a = r_edx; u32 b = 0x39u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00654ccb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00654ccc: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 00654cce: push 0x30d4c9 */ { u32 v = 0x30d4c9u; r_esp -= 4; W32(r_esp, v); }
    /* 00654cd3: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00654cd5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00654cd7: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00654cda: call 0x5f9ef0 */ r_esp -= 4; W32(r_esp, 0x654cdfu); f_005f9ef0();
L_00654cdf:; BB(0x00654cdf);
    /* 00654cdf: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00654ce2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00654ce5: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00654ce8: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00654cee: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00654cf0: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00654cf6: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00654cfc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x654cfeu); call_ind(t); }
    /* 00654cfe: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00654d01: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00654d03: je 0x654d63 */ if (fZ) goto L_00654d63;
L_00654d05:; BB(0x00654d05);
    /* 00654d05: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00654d07: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00654d09: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00654d0b: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 00654d0d: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 00654d0f: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00654d11: push 0x6ddfd8 */ { u32 v = 0x6ddfd8u; r_esp -= 4; W32(r_esp, v); }
    /* 00654d16: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x654d1bu); f_00630f40();
    /* 00654d1b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00654d1e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00654d1f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00654d21: mov esi, dword ptr [ebp - 0x10] */ r_esi = R32((u32)(r_ebp+0xfffffff0u));
    /* 00654d24: imul esi, esi, 0x19 */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0x19u; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00654d27: add esi, 0x39 */ {  u32 a = r_esi; u32 b = 0x39u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00654d2a: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00654d30: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00654d32: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00654d38: mov edx, dword ptr [eax + 0xb8] */ r_edx = R32((u32)(r_eax+0xb8u));
    /* 00654d3e: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x654d40u); call_ind(t); }
    /* 00654d40: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00654d43: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 00654d45: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00654d47: and eax, 0xffffffe7 */ {  u32 a = r_eax; u32 b = 0xffffffe7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00654d4a: add eax, 0x19 */ {  u32 a = r_eax; u32 b = 0x19u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00654d4d: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00654d4f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00654d50: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 00654d52: push 0x30d4c9 */ { u32 v = 0x30d4c9u; r_esp -= 4; W32(r_esp, v); }
    /* 00654d57: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00654d59: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00654d5b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00654d5e: call 0x5f9ef0 */ r_esp -= 4; W32(r_esp, 0x654d63u); f_005f9ef0();
L_00654d63:; BB(0x00654d63);
    /* 00654d63: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00654d66: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00654d69: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00654d6c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00654d6e: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00654d73: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00654d78: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00654d7d: push 0xa1 */ { u32 v = 0xa1u; r_esp -= 4; W32(r_esp, v); }
    /* 00654d82: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 00654d84: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 00654d86: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00654d88: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00654d8a: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00654d8c: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00654d92: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00654d94: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00654d9a: mov edx, dword ptr [eax + 0xb8] */ r_edx = R32((u32)(r_eax+0xb8u));
    /* 00654da0: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x654da2u); call_ind(t); }
    /* 00654da2: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00654da5: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 00654da7: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00654da9: and eax, 0xffffffe7 */ {  u32 a = r_eax; u32 b = 0xffffffe7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00654dac: add eax, 0x19 */ {  u32 a = r_eax; u32 b = 0x19u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00654daf: mov ecx, 0x75 */ r_ecx = 0x75u;
    /* 00654db4: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00654db6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00654db7: push 0xf3 */ { u32 v = 0xf3u; r_esp -= 4; W32(r_esp, v); }
    /* 00654dbc: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 00654dbe: push 0x6ddfc4 */ { u32 v = 0x6ddfc4u; r_esp -= 4; W32(r_esp, v); }
    /* 00654dc3: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x654dc8u); f_00630f40();
    /* 00654dc8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00654dcb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00654dcc: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00654dce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00654dd0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00654dd3: call 0x5fa790 */ r_esp -= 4; W32(r_esp, 0x654dd8u); f_005fa790();
    /* 00654dd8: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00654dde: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00654de0: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00654de6: mov edx, dword ptr [eax + 0x168] */ r_edx = R32((u32)(r_eax+0x168u));
    /* 00654dec: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x654deeu); call_ind(t); }
    /* 00654dee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00654df0: jle 0x654f1f */ if ((fZ||fS!=fO)) goto L_00654f1f;
L_00654df6:; BB(0x00654df6);
    /* 00654df6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00654df8: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00654dfa: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00654dfc: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 00654dfe: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 00654e00: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00654e02: push 0x6ddfa8 */ { u32 v = 0x6ddfa8u; r_esp -= 4; W32(r_esp, v); }
    /* 00654e07: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x654e0cu); f_00630f40();
    /* 00654e0c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00654e0f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00654e10: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00654e12: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00654e14: push 0x119 */ { u32 v = 0x119u; r_esp -= 4; W32(r_esp, v); }
    /* 00654e19: push 0x30d4c9 */ { u32 v = 0x30d4c9u; r_esp -= 4; W32(r_esp, v); }
    /* 00654e1e: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00654e20: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00654e22: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00654e25: call 0x5f9ef0 */ r_esp -= 4; W32(r_esp, 0x654e2au); f_005f9ef0();
    /* 00654e2a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00654e2c: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00654e2e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00654e30: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 00654e32: push 0x11b */ { u32 v = 0x11bu; r_esp -= 4; W32(r_esp, v); }
    /* 00654e37: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00654e39: push 0xd4 */ { u32 v = 0xd4u; r_esp -= 4; W32(r_esp, v); }
    /* 00654e3e: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 00654e40: push 0x6ddf94 */ { u32 v = 0x6ddf94u; r_esp -= 4; W32(r_esp, v); }
    /* 00654e45: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x654e4au); f_00630f40();
    /* 00654e4a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00654e4d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00654e4e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00654e50: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00654e52: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00654e55: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x654e5au); f_005fa5b0();
    /* 00654e5a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00654e5c: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 00654e5e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00654e60: push 0x72 */ { u32 v = 0x72u; r_esp -= 4; W32(r_esp, v); }
    /* 00654e62: push 0x120 */ { u32 v = 0x120u; r_esp -= 4; W32(r_esp, v); }
    /* 00654e67: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00654e69: push 0x3d */ { u32 v = 0x3du; r_esp -= 4; W32(r_esp, v); }
    /* 00654e6b: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00654e6d: push 0x6ddf80 */ { u32 v = 0x6ddf80u; r_esp -= 4; W32(r_esp, v); }
    /* 00654e72: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x654e77u); f_00630f40();
    /* 00654e77: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00654e7a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00654e7b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00654e7d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00654e7f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00654e82: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x654e87u); f_005fa5b0();
    /* 00654e87: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00654e89: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00654e8b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00654e8d: push 0x72 */ { u32 v = 0x72u; r_esp -= 4; W32(r_esp, v); }
    /* 00654e8f: push 0x188 */ { u32 v = 0x188u; r_esp -= 4; W32(r_esp, v); }
    /* 00654e94: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00654e96: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00654e98: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00654e9a: push 0x6ddf6c */ { u32 v = 0x6ddf6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00654e9f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x654ea4u); f_00630f40();
    /* 00654ea4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00654ea7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00654ea8: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00654eaa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00654eac: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00654eaf: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x654eb4u); f_005fa5b0();
    /* 00654eb4: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00654eb6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00654eb8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00654eba: push 0xc6 */ { u32 v = 0xc6u; r_esp -= 4; W32(r_esp, v); }
    /* 00654ebf: push -2 */ { u32 v = 0xfffffffeu; r_esp -= 4; W32(r_esp, v); }
    /* 00654ec1: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00654ec3: push 0x30d4d4 */ { u32 v = 0x30d4d4u; r_esp -= 4; W32(r_esp, v); }
    /* 00654ec8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00654eca: push 0x47 */ { u32 v = 0x47u; r_esp -= 4; W32(r_esp, v); }
    /* 00654ecc: push 0x119 */ { u32 v = 0x119u; r_esp -= 4; W32(r_esp, v); }
    /* 00654ed1: push 0x30d4d3 */ { u32 v = 0x30d4d3u; r_esp -= 4; W32(r_esp, v); }
    /* 00654ed6: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00654ed8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00654eda: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00654edd: call 0x5faa90 */ r_esp -= 4; W32(r_esp, 0x654ee2u); f_005faa90();
    /* 00654ee2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00654ee4: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00654ee9: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00654eee: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00654ef3: push 0xa1 */ { u32 v = 0xa1u; r_esp -= 4; W32(r_esp, v); }
    /* 00654ef8: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 00654efa: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 00654efc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00654efe: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00654f00: push 0x10b */ { u32 v = 0x10bu; r_esp -= 4; W32(r_esp, v); }
    /* 00654f05: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00654f07: push 0xf3 */ { u32 v = 0xf3u; r_esp -= 4; W32(r_esp, v); }
    /* 00654f0c: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 00654f0e: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00654f13: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00654f15: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00654f17: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00654f1a: call 0x5fa790 */ r_esp -= 4; W32(r_esp, 0x654f1fu); f_005fa790();
L_00654f1f:; BB(0x00654f1f);
    /* 00654f1f: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00654f24: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00654f26: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00654f2c: mov eax, dword ptr [edx + 0xbc] */ r_eax = R32((u32)(r_edx+0xbcu));
    /* 00654f32: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x654f34u); call_ind(t); }
    /* 00654f34: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00654f37: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00654f39: je 0x65507c */ if (fZ) goto L_0065507c;
L_00654f3f:; BB(0x00654f3f);
    /* 00654f3f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00654f41: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00654f43: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00654f45: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00654f48: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00654f4a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00654f4d: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 00654f50: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x654f52u); call_ind(t); }
    /* 00654f52: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00654f55: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00654f56: push 0x11b */ { u32 v = 0x11bu; r_esp -= 4; W32(r_esp, v); }
    /* 00654f5b: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00654f5d: push 0xd4 */ { u32 v = 0xd4u; r_esp -= 4; W32(r_esp, v); }
    /* 00654f62: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 00654f64: push 0x6ddf5c */ { u32 v = 0x6ddf5cu; r_esp -= 4; W32(r_esp, v); }
    /* 00654f69: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x654f6eu); f_00630f40();
    /* 00654f6e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00654f71: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00654f72: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00654f74: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00654f76: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00654f79: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x654f7eu); f_005fa5b0();
    /* 00654f7e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00654f80: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 00654f82: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00654f84: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00654f87: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00654f89: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00654f8c: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00654f8f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x654f91u); call_ind(t); }
    /* 00654f91: add eax, 0x2b */ {  u32 a = r_eax; u32 b = 0x2bu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00654f94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00654f95: push 0x120 */ { u32 v = 0x120u; r_esp -= 4; W32(r_esp, v); }
    /* 00654f9a: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00654f9c: push 0x3d */ { u32 v = 0x3du; r_esp -= 4; W32(r_esp, v); }
    /* 00654f9e: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00654fa0: push 0x6ddf4c */ { u32 v = 0x6ddf4cu; r_esp -= 4; W32(r_esp, v); }
    /* 00654fa5: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x654faau); f_00630f40();
    /* 00654faa: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00654fad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00654fae: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00654fb0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00654fb2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00654fb5: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x654fbau); f_005fa5b0();
    /* 00654fba: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00654fbc: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00654fbe: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00654fc0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00654fc3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00654fc5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00654fc8: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00654fcb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x654fcdu); call_ind(t); }
    /* 00654fcd: add eax, 0x2b */ {  u32 a = r_eax; u32 b = 0x2bu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00654fd0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00654fd1: push 0x188 */ { u32 v = 0x188u; r_esp -= 4; W32(r_esp, v); }
    /* 00654fd6: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00654fd8: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00654fda: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00654fdc: push 0x6ddf3c */ { u32 v = 0x6ddf3cu; r_esp -= 4; W32(r_esp, v); }
    /* 00654fe1: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x654fe6u); f_00630f40();
    /* 00654fe6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00654fe9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00654fea: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00654fec: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00654fee: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00654ff1: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x654ff6u); f_005fa5b0();
    /* 00654ff6: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00654ff8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00654ffa: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00654ffc: push 0xc6 */ { u32 v = 0xc6u; r_esp -= 4; W32(r_esp, v); }
    /* 00655001: push -2 */ { u32 v = 0xfffffffeu; r_esp -= 4; W32(r_esp, v); }
    /* 00655003: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00655005: push 0x30d4d4 */ { u32 v = 0x30d4d4u; r_esp -= 4; W32(r_esp, v); }
    /* 0065500a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065500c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065500f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00655011: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00655014: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00655017: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x655019u); call_ind(t); }
    /* 00655019: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065501a: push 0x119 */ { u32 v = 0x119u; r_esp -= 4; W32(r_esp, v); }
    /* 0065501f: push 0x30d4d3 */ { u32 v = 0x30d4d3u; r_esp -= 4; W32(r_esp, v); }
    /* 00655024: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00655026: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00655028: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065502b: call 0x5faa90 */ r_esp -= 4; W32(r_esp, 0x655030u); f_005faa90();
    /* 00655030: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00655032: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00655037: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065503c: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00655041: push 0xa1 */ { u32 v = 0xa1u; r_esp -= 4; W32(r_esp, v); }
    /* 00655046: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 00655048: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 0065504a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065504c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065504f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00655051: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00655054: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00655057: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x655059u); call_ind(t); }
    /* 00655059: sub eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0065505c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065505d: push 0x10b */ { u32 v = 0x10bu; r_esp -= 4; W32(r_esp, v); }
    /* 00655062: push 0x51 */ { u32 v = 0x51u; r_esp -= 4; W32(r_esp, v); }
    /* 00655064: push 0xf3 */ { u32 v = 0xf3u; r_esp -= 4; W32(r_esp, v); }
    /* 00655069: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 0065506b: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00655070: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00655072: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00655074: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00655077: call 0x5fa790 */ r_esp -= 4; W32(r_esp, 0x65507cu); f_005fa790();
L_0065507c:; BB(0x0065507c);
    /* 0065507c: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00655082: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00655084: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065508a: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 00655090: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x655092u); call_ind(t); }
    /* 00655092: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00655094: je 0x65526c */ if (fZ) goto L_0065526c;
L_0065509a:; BB(0x0065509a);
    /* 0065509a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065509c: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0065509e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006550a0: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 006550a2: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 006550a4: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 006550a6: push 0x6ddf20 */ { u32 v = 0x6ddf20u; r_esp -= 4; W32(r_esp, v); }
    /* 006550ab: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6550b0u); f_00630f40();
    /* 006550b0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006550b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006550b4: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006550b6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006550b9: call 0x655a30 */ r_esp -= 4; W32(r_esp, 0x6550beu); f_00655a30();
    /* 006550be: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 006550c1: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 006550c3: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 006550c5: and ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 006550c8: mov edx, 0xfb */ r_edx = 0xfbu;
    /* 006550cd: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006550cf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006550d0: push 0x119 */ { u32 v = 0x119u; r_esp -= 4; W32(r_esp, v); }
    /* 006550d5: push 0x30d4c9 */ { u32 v = 0x30d4c9u; r_esp -= 4; W32(r_esp, v); }
    /* 006550da: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 006550dc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006550de: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006550e1: call 0x5f9ef0 */ r_esp -= 4; W32(r_esp, 0x6550e6u); f_005f9ef0();
    /* 006550e6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006550e9: call 0x655a30 */ r_esp -= 4; W32(r_esp, 0x6550eeu); f_00655a30();
    /* 006550ee: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006550f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006550f3: je 0x655168 */ if (fZ) goto L_00655168;
L_006550f5:; BB(0x006550f5);
    /* 006550f5: push 0x30d4d9 */ { u32 v = 0x30d4d9u; r_esp -= 4; W32(r_esp, v); }
    /* 006550fa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006550fc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006550fe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00655100: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 00655102: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 00655104: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00655106: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00655108: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0065510a: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 0065510f: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00655111: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00655113: push 0x43 */ { u32 v = 0x43u; r_esp -= 4; W32(r_esp, v); }
    /* 00655115: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00655117: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 00655119: push 0xd2 */ { u32 v = 0xd2u; r_esp -= 4; W32(r_esp, v); }
    /* 0065511e: push 0x58 */ { u32 v = 0x58u; r_esp -= 4; W32(r_esp, v); }
    /* 00655120: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 00655122: push 0xd2 */ { u32 v = 0xd2u; r_esp -= 4; W32(r_esp, v); }
    /* 00655127: push 0x30d4cf */ { u32 v = 0x30d4cfu; r_esp -= 4; W32(r_esp, v); }
    /* 0065512c: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 0065512e: push 0xd3 */ { u32 v = 0xd3u; r_esp -= 4; W32(r_esp, v); }
    /* 00655133: push 0x30d4cb */ { u32 v = 0x30d4cbu; r_esp -= 4; W32(r_esp, v); }
    /* 00655138: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0065513a: push 0xd3 */ { u32 v = 0xd3u; r_esp -= 4; W32(r_esp, v); }
    /* 0065513f: push 0x30d4cc */ { u32 v = 0x30d4ccu; r_esp -= 4; W32(r_esp, v); }
    /* 00655144: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00655146: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00655148: push 0xf2 */ { u32 v = 0xf2u; r_esp -= 4; W32(r_esp, v); }
    /* 0065514d: push 0x110 */ { u32 v = 0x110u; r_esp -= 4; W32(r_esp, v); }
    /* 00655152: push 0x30d4d8 */ { u32 v = 0x30d4d8u; r_esp -= 4; W32(r_esp, v); }
    /* 00655157: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00655159: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065515b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065515e: call 0x5fac90 */ r_esp -= 4; W32(r_esp, 0x655163u); f_005fac90();
    /* 00655163: jmp 0x65526c */ goto L_0065526c;
L_00655168:; BB(0x00655168);
    /* 00655168: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065516a: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0065516c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0065516e: push 0x111 */ { u32 v = 0x111u; r_esp -= 4; W32(r_esp, v); }
    /* 00655173: push 0x11b */ { u32 v = 0x11bu; r_esp -= 4; W32(r_esp, v); }
    /* 00655178: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0065517a: push 0xd4 */ { u32 v = 0xd4u; r_esp -= 4; W32(r_esp, v); }
    /* 0065517f: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 00655181: push 0x6ddf0c */ { u32 v = 0x6ddf0cu; r_esp -= 4; W32(r_esp, v); }
    /* 00655186: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x65518bu); f_00630f40();
    /* 0065518b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065518e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065518f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00655191: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00655193: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00655196: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x65519bu); f_005fa5b0();
    /* 0065519b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065519d: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 0065519f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006551a1: push 0x13a */ { u32 v = 0x13au; r_esp -= 4; W32(r_esp, v); }
    /* 006551a6: push 0x120 */ { u32 v = 0x120u; r_esp -= 4; W32(r_esp, v); }
    /* 006551ab: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 006551ad: push 0x3d */ { u32 v = 0x3du; r_esp -= 4; W32(r_esp, v); }
    /* 006551af: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 006551b1: push 0x6ddefc */ { u32 v = 0x6ddefcu; r_esp -= 4; W32(r_esp, v); }
    /* 006551b6: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6551bbu); f_00630f40();
    /* 006551bb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006551be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006551bf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006551c1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006551c3: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006551c6: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x6551cbu); f_005fa5b0();
    /* 006551cb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006551cd: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 006551cf: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006551d1: push 0x13a */ { u32 v = 0x13au; r_esp -= 4; W32(r_esp, v); }
    /* 006551d6: push 0x188 */ { u32 v = 0x188u; r_esp -= 4; W32(r_esp, v); }
    /* 006551db: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 006551dd: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 006551df: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 006551e1: push 0x6ddeec */ { u32 v = 0x6ddeecu; r_esp -= 4; W32(r_esp, v); }
    /* 006551e6: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6551ebu); f_00630f40();
    /* 006551eb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006551ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006551ef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006551f1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006551f3: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006551f6: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x6551fbu); f_005fa5b0();
    /* 006551fb: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 006551fd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006551ff: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00655201: push 0xc6 */ { u32 v = 0xc6u; r_esp -= 4; W32(r_esp, v); }
    /* 00655206: push -2 */ { u32 v = 0xfffffffeu; r_esp -= 4; W32(r_esp, v); }
    /* 00655208: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0065520a: push 0x30d4d4 */ { u32 v = 0x30d4d4u; r_esp -= 4; W32(r_esp, v); }
    /* 0065520f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00655211: push 0x10f */ { u32 v = 0x10fu; r_esp -= 4; W32(r_esp, v); }
    /* 00655216: push 0x119 */ { u32 v = 0x119u; r_esp -= 4; W32(r_esp, v); }
    /* 0065521b: push 0x30d4d3 */ { u32 v = 0x30d4d3u; r_esp -= 4; W32(r_esp, v); }
    /* 00655220: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00655222: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00655224: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00655227: call 0x5faa90 */ r_esp -= 4; W32(r_esp, 0x65522cu); f_005faa90();
    /* 0065522c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065522e: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00655233: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00655238: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065523d: push 0xa1 */ { u32 v = 0xa1u; r_esp -= 4; W32(r_esp, v); }
    /* 00655242: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 00655244: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 00655246: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00655248: push 0xf4 */ { u32 v = 0xf4u; r_esp -= 4; W32(r_esp, v); }
    /* 0065524d: push 0x10b */ { u32 v = 0x10bu; r_esp -= 4; W32(r_esp, v); }
    /* 00655252: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00655254: push 0xf3 */ { u32 v = 0xf3u; r_esp -= 4; W32(r_esp, v); }
    /* 00655259: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 0065525b: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00655260: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00655262: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00655264: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00655267: call 0x5fa790 */ r_esp -= 4; W32(r_esp, 0x65526cu); f_005fa790();
L_0065526c:; BB(0x0065526c);
    /* 0065526c: push 0x70 */ { u32 v = 0x70u; r_esp -= 4; W32(r_esp, v); }
    /* 0065526e: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x655273u); f_00686d82();
    /* 00655273: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00655276: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00655279: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00655280: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00655284: je 0x65529f */ if (fZ) goto L_0065529f;
L_00655286:; BB(0x00655286);
    /* 00655286: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00655289: call 0x680b70 */ r_esp -= 4; W32(r_esp, 0x65528eu); f_00680b70();
    /* 0065528e: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00655291: mov dword ptr [ecx], 0x6dde3c */ W32((u32)(r_ecx), 0x6dde3cu);
    /* 00655297: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065529a: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0065529d: jmp 0x6552a6 */ goto L_006552a6;
L_0065529f:; BB(0x0065529f);
    /* 0065529f: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006552a6:; BB(0x006552a6);
    /* 006552a6: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006552a9: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006552ac: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006552b3: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006552b6: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006552b9: mov dword ptr [ecx + 0x1bc], edx */ W32((u32)(r_ecx+0x1bcu), r_edx);
    /* 006552bf: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006552c2: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 006552c8: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006552cb: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 006552ce: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006552d0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006552d2: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 006552d4: push 0x47 */ { u32 v = 0x47u; r_esp -= 4; W32(r_esp, v); }
    /* 006552d6: push 0xe3 */ { u32 v = 0xe3u; r_esp -= 4; W32(r_esp, v); }
    /* 006552db: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 006552dd: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 006552df: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 006552e1: push 0x6b30a8 */ { u32 v = 0x6b30a8u; r_esp -= 4; W32(r_esp, v); }
    /* 006552e6: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6552ebu); f_00630f40();
    /* 006552eb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006552ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006552ef: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 006552f4: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 006552f9: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 006552fe: push 0xa1 */ { u32 v = 0xa1u; r_esp -= 4; W32(r_esp, v); }
    /* 00655303: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 00655305: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 00655307: push 0x53 */ { u32 v = 0x53u; r_esp -= 4; W32(r_esp, v); }
    /* 00655309: push 0xf3 */ { u32 v = 0xf3u; r_esp -= 4; W32(r_esp, v); }
    /* 0065530e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00655310: push 0x11c */ { u32 v = 0x11cu; r_esp -= 4; W32(r_esp, v); }
    /* 00655315: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00655317: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065531a: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 00655320: call 0x680ca0 */ r_esp -= 4; W32(r_esp, 0x655325u); f_00680ca0();
    /* 00655325: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00655328: mov edx, dword ptr [ecx + 0x1bc] */ r_edx = R32((u32)(r_ecx+0x1bcu));
    /* 0065532e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00655331: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 00655337: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00655339: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0065533c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65533eu); call_ind(t); }
    /* 0065533e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00655341: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00655343: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00655346: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00655349: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65534bu); call_ind(t); }
    /* 0065534b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065534e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00655355: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00655356: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00655357: mov esp, ebp */ r_esp = r_ebp;
    /* 00655359: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065535a: ret  */ FN_RET(0x00654a60); r_esp += 4; return;
}

void f_00655360(void) /* EnvironmentDialog::vfunc17 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00655360);
    /* 00655360: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00655361: mov ebp, esp */ r_ebp = r_esp;
    /* 00655363: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00655366: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00655369: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065536c: call 0x655a30 */ r_esp -= 4; W32(r_esp, 0x655371u); f_00655a30();
    /* 00655371: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00655374: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00655376: je 0x655380 */ if (fZ) goto L_00655380;
L_00655378:; BB(0x00655378);
    /* 00655378: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065537b: call 0x655a60 */ r_esp -= 4; W32(r_esp, 0x655380u); f_00655a60();
L_00655380:; BB(0x00655380);
    /* 00655380: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00655386: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00655388: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065538e: mov eax, dword ptr [edx + 0x168] */ r_eax = R32((u32)(r_edx+0x168u));
    /* 00655394: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x655396u); call_ind(t); }
    /* 00655396: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00655398: jle 0x6553cb */ if ((fZ||fS!=fO)) goto L_006553cb;
L_0065539a:; BB(0x0065539a);
    /* 0065539a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065539c: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006553a2: call 0x637730 */ r_esp -= 4; W32(r_esp, 0x6553a7u); f_00637730();
    /* 006553a7: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 006553aa: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006553ac: je 0x6553cb */ if (fZ) goto L_006553cb;
L_006553ae:; BB(0x006553ae);
    /* 006553ae: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006553b0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006553b3: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x6553b8u); f_005fb350();
    /* 006553b8: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 006553bb: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006553be: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006553c0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006553c3: mov edx, dword ptr [eax + 0xf4] */ r_edx = R32((u32)(r_eax+0xf4u));
    /* 006553c9: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6553cbu); call_ind(t); }
L_006553cb:; BB(0x006553cb);
    /* 006553cb: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006553d1: call 0x637630 */ r_esp -= 4; W32(r_esp, 0x6553d6u); f_00637630();
    /* 006553d6: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006553d9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006553db: je 0x6553fa */ if (fZ) goto L_006553fa;
L_006553dd:; BB(0x006553dd);
    /* 006553dd: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006553df: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006553e2: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x6553e7u); f_005fb350();
    /* 006553e7: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 006553ea: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006553ed: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006553ef: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006553f2: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 006553f8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6553fau); call_ind(t); }
L_006553fa:; BB(0x006553fa);
    /* 006553fa: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00655400: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00655402: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00655408: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 0065540b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65540du); call_ind(t); }
    /* 0065540d: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00655410: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00655412: je 0x655431 */ if (fZ) goto L_00655431;
L_00655414:; BB(0x00655414);
    /* 00655414: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00655416: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00655419: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x65541eu); f_005fb350();
    /* 0065541e: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00655421: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00655424: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00655426: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00655429: mov edx, dword ptr [eax + 0xf4] */ r_edx = R32((u32)(r_eax+0xf4u));
    /* 0065542f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x655431u); call_ind(t); }
L_00655431:; BB(0x00655431);
    /* 00655431: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00655436: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00655438: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065543e: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 00655444: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x655446u); call_ind(t); }
    /* 00655446: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00655448: je 0x6554b1 */ if (fZ) goto L_006554b1;
L_0065544a:; BB(0x0065544a);
    /* 0065544a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00655450: call 0x637670 */ r_esp -= 4; W32(r_esp, 0x655455u); f_00637670();
    /* 00655455: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00655458: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065545a: je 0x655479 */ if (fZ) goto L_00655479;
L_0065545c:; BB(0x0065545c);
    /* 0065545c: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0065545e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00655461: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x655466u); f_005fb350();
    /* 00655466: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00655469: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065546c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0065546e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00655471: mov edx, dword ptr [eax + 0xf4] */ r_edx = R32((u32)(r_eax+0xf4u));
    /* 00655477: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x655479u); call_ind(t); }
L_00655479:; BB(0x00655479);
    /* 00655479: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065547c: call 0x655a30 */ r_esp -= 4; W32(r_esp, 0x655481u); f_00655a30();
    /* 00655481: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00655484: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00655486: je 0x655492 */ if (fZ) goto L_00655492;
L_00655488:; BB(0x00655488);
    /* 00655488: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065548b: call 0x655c30 */ r_esp -= 4; W32(r_esp, 0x655490u); f_00655c30();
    /* 00655490: jmp 0x6554b1 */ goto L_006554b1;
L_00655492:; BB(0x00655492);
    /* 00655492: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00655494: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065549a: call 0x6377e0 */ r_esp -= 4; W32(r_esp, 0x65549fu); f_006377e0();
    /* 0065549f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006554a0: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 006554a2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006554a5: call 0x5fb860 */ r_esp -= 4; W32(r_esp, 0x6554aau); f_005fb860();
    /* 006554aa: mov ecx, eax */ r_ecx = r_eax;
    /* 006554ac: call 0x605110 */ r_esp -= 4; W32(r_esp, 0x6554b1u); f_00605110();
L_006554b1:; BB(0x006554b1);
    /* 006554b1: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006554b7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006554b9: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006554bf: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 006554c5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6554c7u); call_ind(t); }
    /* 006554c7: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 006554ca: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006554cc: je 0x6554fd */ if (fZ) goto L_006554fd;
L_006554ce:; BB(0x006554ce);
    /* 006554ce: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006554d4: call 0x6376d0 */ r_esp -= 4; W32(r_esp, 0x6554d9u); f_006376d0();
    /* 006554d9: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 006554dc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006554de: je 0x6554fd */ if (fZ) goto L_006554fd;
L_006554e0:; BB(0x006554e0);
    /* 006554e0: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006554e2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006554e5: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x6554eau); f_005fb350();
    /* 006554ea: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006554ed: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006554f0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006554f2: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006554f5: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 006554fb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6554fdu); call_ind(t); }
L_006554fd:; BB(0x006554fd);
    /* 006554fd: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00655503: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00655505: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065550b: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00655511: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x655513u); call_ind(t); }
    /* 00655513: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00655516: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00655518: je 0x655542 */ if (fZ) goto L_00655542;
L_0065551a:; BB(0x0065551a);
    /* 0065551a: movzx edx, byte ptr [0x7960c5] */ r_edx = (u32)R8((u32)(0x7960c5u));
    /* 00655521: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00655523: je 0x655542 */ if (fZ) goto L_00655542;
L_00655525:; BB(0x00655525);
    /* 00655525: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00655527: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065552a: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x65552fu); f_005fb350();
    /* 0065552f: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00655532: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00655535: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00655537: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065553a: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 00655540: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x655542u); call_ind(t); }
L_00655542:; BB(0x00655542);
    /* 00655542: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00655548: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065554a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00655550: mov eax, dword ptr [edx + 0x168] */ r_eax = R32((u32)(r_edx+0x168u));
    /* 00655556: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x655558u); call_ind(t); }
    /* 00655558: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0065555a: jle 0x65557b */ if ((fZ||fS!=fO)) goto L_0065557b;
L_0065555c:; BB(0x0065555c);
    /* 0065555c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065555e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00655564: call 0x6377b0 */ r_esp -= 4; W32(r_esp, 0x655569u); f_006377b0();
    /* 00655569: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065556a: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0065556c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065556f: call 0x5fb860 */ r_esp -= 4; W32(r_esp, 0x655574u); f_005fb860();
    /* 00655574: mov ecx, eax */ r_ecx = r_eax;
    /* 00655576: call 0x605110 */ r_esp -= 4; W32(r_esp, 0x65557bu); f_00605110();
L_0065557b:; BB(0x0065557b);
    /* 0065557b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00655581: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00655583: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00655589: mov eax, dword ptr [edx + 0xbc] */ r_eax = R32((u32)(r_edx+0xbcu));
    /* 0065558f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x655591u); call_ind(t); }
    /* 00655591: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00655594: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00655596: je 0x6555c0 */ if (fZ) goto L_006555c0;
L_00655598:; BB(0x00655598);
    /* 00655598: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065559a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065559c: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006555a2: call 0x637810 */ r_esp -= 4; W32(r_esp, 0x6555a7u); f_00637810();
    /* 006555a7: mov edx, 0xa */ r_edx = 0xau;
    /* 006555ac: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006555ae: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006555af: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 006555b1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006555b4: call 0x5fb860 */ r_esp -= 4; W32(r_esp, 0x6555b9u); f_005fb860();
    /* 006555b9: mov ecx, eax */ r_ecx = r_eax;
    /* 006555bb: call 0x605110 */ r_esp -= 4; W32(r_esp, 0x6555c0u); f_00605110();
L_006555c0:; BB(0x006555c0);
    /* 006555c0: movzx eax, byte ptr [0x795f94] */ r_eax = (u32)R8((u32)(0x795f94u));
    /* 006555c7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006555c9: je 0x655650 */ if (fZ) goto L_00655650;
L_006555cf:; BB(0x006555cf);
    /* 006555cf: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006555d1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006555d4: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x6555d9u); f_005fb350();
    /* 006555d9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006555db: je 0x6555fa */ if (fZ) goto L_006555fa;
L_006555dd:; BB(0x006555dd);
    /* 006555dd: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006555df: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006555e2: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x6555e7u); f_005fb350();
    /* 006555e7: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006555ea: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006555ed: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006555ef: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006555f2: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 006555f8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6555fau); call_ind(t); }
L_006555fa:; BB(0x006555fa);
    /* 006555fa: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006555fc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006555ff: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x655604u); f_005fb350();
    /* 00655604: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00655606: je 0x655625 */ if (fZ) goto L_00655625;
L_00655608:; BB(0x00655608);
    /* 00655608: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0065560a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065560d: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x655612u); f_005fb350();
    /* 00655612: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00655615: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00655618: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065561a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065561d: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 00655623: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x655625u); call_ind(t); }
L_00655625:; BB(0x00655625);
    /* 00655625: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00655627: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065562a: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x65562fu); f_005fb350();
    /* 0065562f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00655631: je 0x655650 */ if (fZ) goto L_00655650;
L_00655633:; BB(0x00655633);
    /* 00655633: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00655635: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00655638: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x65563du); f_005fb350();
    /* 0065563d: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00655640: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00655643: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00655645: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00655648: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 0065564e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x655650u); call_ind(t); }
L_00655650:; BB(0x00655650);
    /* 00655650: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00655653: call 0x655a30 */ r_esp -= 4; W32(r_esp, 0x655658u); f_00655a30();
    /* 00655658: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0065565b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065565d: je 0x6556c2 */ if (fZ) goto L_006556c2;
L_0065565f:; BB(0x0065565f);
    /* 0065565f: movzx edx, byte ptr [0x795f94] */ r_edx = (u32)R8((u32)(0x795f94u));
    /* 00655666: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00655668: jne 0x6556a5 */ if (!fZ) goto L_006556a5;
L_0065566a:; BB(0x0065566a);
    /* 0065566a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065566c: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00655671: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00655673: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00655679: mov eax, dword ptr [edx + 0x33c] */ r_eax = R32((u32)(r_edx+0x33cu));
    /* 0065567f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x655681u); call_ind(t); }
    /* 00655681: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00655684: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00655686: je 0x6556a5 */ if (fZ) goto L_006556a5;
L_00655688:; BB(0x00655688);
    /* 00655688: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 0065568e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00655690: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00655696: mov edx, dword ptr [eax + 0xac] */ r_edx = R32((u32)(r_eax+0xacu));
    /* 0065569c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x65569eu); call_ind(t); }
    /* 0065569e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006556a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006556a3: je 0x6556c2 */ if (fZ) goto L_006556c2;
L_006556a5:; BB(0x006556a5);
    /* 006556a5: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 006556a7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006556aa: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x6556afu); f_005fb720();
    /* 006556af: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 006556b2: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006556b5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006556b7: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006556ba: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 006556c0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6556c2u); call_ind(t); }
L_006556c2:; BB(0x006556c2);
    /* 006556c2: mov esp, ebp */ r_esp = r_ebp;
    /* 006556c4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006556c5: ret  */ FN_RET(0x00655360); r_esp += 4; return;
}

void f_00655d10(void) /* EnvironmentDialog::vfunc20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00655d10);
    /* 00655d10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00655d11: mov ebp, esp */ r_ebp = r_esp;
    /* 00655d13: sub esp, 0x74 */ {  u32 a = r_esp; u32 b = 0x74u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00655d16: mov dword ptr [ebp - 0x74], ecx */ W32((u32)(r_ebp+0xffffff8cu), r_ecx);
    /* 00655d19: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00655d1b: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00655d1e: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x655d23u); f_005fb300();
    /* 00655d23: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00655d24: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00655d27: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00655d28: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00655d2b: call 0x656230 */ r_esp -= 4; W32(r_esp, 0x655d30u); f_00656230();
    /* 00655d30: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00655d33: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00655d35: je 0x655d74 */ if (fZ) goto L_00655d74;
L_00655d37:; BB(0x00655d37);
    /* 00655d37: push 0x6de304 */ { u32 v = 0x6de304u; r_esp -= 4; W32(r_esp, v); }
    /* 00655d3c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x655d41u); f_00630f40();
    /* 00655d41: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00655d44: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00655d47: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00655d4a: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 00655d50: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00655d53: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00655d56: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00655d57: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00655d5a: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00655d5d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00655d60: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 00655d63: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00655d65: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00655d6b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x655d6du); call_ind(t); }
    /* 00655d6d: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00655d6f: jmp 0x656229 */ goto L_00656229;
L_00655d74:; BB(0x00655d74);
    /* 00655d74: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00655d76: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00655d79: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x655d7eu); f_005fb300();
    /* 00655d7e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00655d7f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00655d82: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00655d83: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00655d86: call 0x656230 */ r_esp -= 4; W32(r_esp, 0x655d8bu); f_00656230();
    /* 00655d8b: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00655d8e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00655d90: je 0x655dd1 */ if (fZ) goto L_00655dd1;
L_00655d92:; BB(0x00655d92);
    /* 00655d92: push 0x6de2dc */ { u32 v = 0x6de2dcu; r_esp -= 4; W32(r_esp, v); }
    /* 00655d97: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x655d9cu); f_00630f40();
    /* 00655d9c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00655d9f: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00655da2: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 00655da5: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 00655dab: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00655dae: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00655db1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00655db2: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00655db5: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 00655db8: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00655dbb: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00655dbe: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00655dc0: mov ecx, eax */ r_ecx = r_eax;
    /* 00655dc2: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00655dc8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x655dcau); call_ind(t); }
    /* 00655dca: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00655dcc: jmp 0x656229 */ goto L_00656229;
L_00655dd1:; BB(0x00655dd1);
    /* 00655dd1: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00655dd3: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00655dd6: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x655ddbu); f_005fb300();
    /* 00655ddb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00655ddc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00655ddf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00655de0: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00655de3: call 0x656230 */ r_esp -= 4; W32(r_esp, 0x655de8u); f_00656230();
    /* 00655de8: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00655deb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00655ded: je 0x655e2e */ if (fZ) goto L_00655e2e;
L_00655def:; BB(0x00655def);
    /* 00655def: push 0x6de2b4 */ { u32 v = 0x6de2b4u; r_esp -= 4; W32(r_esp, v); }
    /* 00655df4: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x655df9u); f_00630f40();
    /* 00655df9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00655dfc: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00655dff: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 00655e02: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 00655e08: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00655e0b: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00655e0e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00655e0f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00655e12: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 00655e15: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00655e18: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00655e1b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00655e1d: mov ecx, eax */ r_ecx = r_eax;
    /* 00655e1f: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00655e25: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x655e27u); call_ind(t); }
    /* 00655e27: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00655e29: jmp 0x656229 */ goto L_00656229;
L_00655e2e:; BB(0x00655e2e);
    /* 00655e2e: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00655e30: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00655e33: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x655e38u); f_005fb350();
    /* 00655e38: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00655e39: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00655e3c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00655e3d: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00655e40: call 0x656230 */ r_esp -= 4; W32(r_esp, 0x655e45u); f_00656230();
    /* 00655e45: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00655e48: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00655e4a: je 0x655e8b */ if (fZ) goto L_00655e8b;
L_00655e4c:; BB(0x00655e4c);
    /* 00655e4c: push 0x6de28c */ { u32 v = 0x6de28cu; r_esp -= 4; W32(r_esp, v); }
    /* 00655e51: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x655e56u); f_00630f40();
    /* 00655e56: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00655e59: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00655e5c: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 00655e5f: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 00655e65: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00655e68: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00655e6b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00655e6c: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00655e6f: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 00655e72: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00655e75: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00655e78: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00655e7a: mov ecx, eax */ r_ecx = r_eax;
    /* 00655e7c: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00655e82: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x655e84u); call_ind(t); }
    /* 00655e84: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00655e86: jmp 0x656229 */ goto L_00656229;
L_00655e8b:; BB(0x00655e8b);
    /* 00655e8b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00655e8d: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00655e90: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x655e95u); f_005fb350();
    /* 00655e95: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00655e96: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00655e99: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00655e9a: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00655e9d: call 0x656230 */ r_esp -= 4; W32(r_esp, 0x655ea2u); f_00656230();
    /* 00655ea2: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00655ea5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00655ea7: je 0x655ee8 */ if (fZ) goto L_00655ee8;
L_00655ea9:; BB(0x00655ea9);
    /* 00655ea9: push 0x6de260 */ { u32 v = 0x6de260u; r_esp -= 4; W32(r_esp, v); }
    /* 00655eae: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x655eb3u); f_00630f40();
    /* 00655eb3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00655eb6: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00655eb9: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 00655ebc: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 00655ec2: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00655ec5: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00655ec8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00655ec9: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00655ecc: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 00655ecf: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00655ed2: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00655ed5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00655ed7: mov ecx, eax */ r_ecx = r_eax;
    /* 00655ed9: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00655edf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x655ee1u); call_ind(t); }
    /* 00655ee1: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00655ee3: jmp 0x656229 */ goto L_00656229;
L_00655ee8:; BB(0x00655ee8);
    /* 00655ee8: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00655eea: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00655eed: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x655ef2u); f_005fb350();
    /* 00655ef2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00655ef3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00655ef6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00655ef7: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00655efa: call 0x656230 */ r_esp -= 4; W32(r_esp, 0x655effu); f_00656230();
    /* 00655eff: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00655f02: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00655f04: je 0x655f45 */ if (fZ) goto L_00655f45;
L_00655f06:; BB(0x00655f06);
    /* 00655f06: push 0x6de238 */ { u32 v = 0x6de238u; r_esp -= 4; W32(r_esp, v); }
    /* 00655f0b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x655f10u); f_00630f40();
    /* 00655f10: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00655f13: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00655f16: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 00655f19: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 00655f1f: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00655f22: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00655f25: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00655f26: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00655f29: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 00655f2c: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00655f2f: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00655f32: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00655f34: mov ecx, eax */ r_ecx = r_eax;
    /* 00655f36: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00655f3c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x655f3eu); call_ind(t); }
    /* 00655f3e: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00655f40: jmp 0x656229 */ goto L_00656229;
L_00655f45:; BB(0x00655f45);
    /* 00655f45: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00655f47: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00655f4a: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x655f4fu); f_005fb350();
    /* 00655f4f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00655f50: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00655f53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00655f54: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00655f57: call 0x656230 */ r_esp -= 4; W32(r_esp, 0x655f5cu); f_00656230();
    /* 00655f5c: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00655f5f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00655f61: je 0x655fa2 */ if (fZ) goto L_00655fa2;
L_00655f63:; BB(0x00655f63);
    /* 00655f63: push 0x6de210 */ { u32 v = 0x6de210u; r_esp -= 4; W32(r_esp, v); }
    /* 00655f68: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x655f6du); f_00630f40();
    /* 00655f6d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00655f70: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00655f73: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 00655f76: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 00655f7c: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 00655f7f: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00655f82: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00655f83: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00655f86: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 00655f89: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00655f8c: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00655f8f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00655f91: mov ecx, eax */ r_ecx = r_eax;
    /* 00655f93: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00655f99: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x655f9bu); call_ind(t); }
    /* 00655f9b: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00655f9d: jmp 0x656229 */ goto L_00656229;
L_00655fa2:; BB(0x00655fa2);
    /* 00655fa2: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00655fa4: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00655fa7: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x655facu); f_005fb350();
    /* 00655fac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00655fad: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00655fb0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00655fb1: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00655fb4: call 0x656230 */ r_esp -= 4; W32(r_esp, 0x655fb9u); f_00656230();
    /* 00655fb9: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00655fbc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00655fbe: je 0x655fff */ if (fZ) goto L_00655fff;
L_00655fc0:; BB(0x00655fc0);
    /* 00655fc0: push 0x6de1e8 */ { u32 v = 0x6de1e8u; r_esp -= 4; W32(r_esp, v); }
    /* 00655fc5: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x655fcau); f_00630f40();
    /* 00655fca: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00655fcd: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00655fd0: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 00655fd3: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 00655fd9: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 00655fdc: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00655fdf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00655fe0: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00655fe3: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 00655fe6: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00655fe9: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00655fec: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00655fee: mov ecx, eax */ r_ecx = r_eax;
    /* 00655ff0: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00655ff6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x655ff8u); call_ind(t); }
    /* 00655ff8: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00655ffa: jmp 0x656229 */ goto L_00656229;
L_00655fff:; BB(0x00655fff);
    /* 00655fff: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00656001: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00656004: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x656009u); f_005fb350();
    /* 00656009: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065600a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0065600d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065600e: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00656011: call 0x656230 */ r_esp -= 4; W32(r_esp, 0x656016u); f_00656230();
    /* 00656016: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00656019: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065601b: je 0x65605c */ if (fZ) goto L_0065605c;
L_0065601d:; BB(0x0065601d);
    /* 0065601d: push 0x6de1c0 */ { u32 v = 0x6de1c0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656022: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x656027u); f_00630f40();
    /* 00656027: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065602a: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0065602d: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 00656030: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 00656036: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 00656039: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0065603c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065603d: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00656040: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 00656043: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00656046: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00656049: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065604b: mov ecx, eax */ r_ecx = r_eax;
    /* 0065604d: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00656053: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x656055u); call_ind(t); }
    /* 00656055: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00656057: jmp 0x656229 */ goto L_00656229;
L_0065605c:; BB(0x0065605c);
    /* 0065605c: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0065605e: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00656061: call 0x5fb860 */ r_esp -= 4; W32(r_esp, 0x656066u); f_005fb860();
    /* 00656066: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00656067: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0065606a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065606b: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0065606e: call 0x656230 */ r_esp -= 4; W32(r_esp, 0x656073u); f_00656230();
    /* 00656073: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00656076: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00656078: je 0x6560b9 */ if (fZ) goto L_006560b9;
L_0065607a:; BB(0x0065607a);
    /* 0065607a: push 0x6de198 */ { u32 v = 0x6de198u; r_esp -= 4; W32(r_esp, v); }
    /* 0065607f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x656084u); f_00630f40();
    /* 00656084: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00656087: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0065608a: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0065608d: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 00656093: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 00656096: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00656099: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065609a: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0065609d: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 006560a0: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 006560a3: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 006560a6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006560a8: mov ecx, eax */ r_ecx = r_eax;
    /* 006560aa: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 006560b0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6560b2u); call_ind(t); }
    /* 006560b2: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 006560b4: jmp 0x656229 */ goto L_00656229;
L_006560b9:; BB(0x006560b9);
    /* 006560b9: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 006560bb: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 006560be: call 0x5fb860 */ r_esp -= 4; W32(r_esp, 0x6560c3u); f_005fb860();
    /* 006560c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006560c4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006560c7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006560c8: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 006560cb: call 0x656230 */ r_esp -= 4; W32(r_esp, 0x6560d0u); f_00656230();
    /* 006560d0: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 006560d3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006560d5: je 0x656116 */ if (fZ) goto L_00656116;
L_006560d7:; BB(0x006560d7);
    /* 006560d7: push 0x6de170 */ { u32 v = 0x6de170u; r_esp -= 4; W32(r_esp, v); }
    /* 006560dc: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6560e1u); f_00630f40();
    /* 006560e1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006560e4: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 006560e7: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 006560ea: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 006560f0: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 006560f3: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 006560f6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006560f7: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 006560fa: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 006560fd: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 00656100: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00656103: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00656105: mov ecx, eax */ r_ecx = r_eax;
    /* 00656107: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0065610d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65610fu); call_ind(t); }
    /* 0065610f: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00656111: jmp 0x656229 */ goto L_00656229;
L_00656116:; BB(0x00656116);
    /* 00656116: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00656118: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0065611b: call 0x5fb860 */ r_esp -= 4; W32(r_esp, 0x656120u); f_005fb860();
    /* 00656120: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00656121: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00656124: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00656125: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00656128: call 0x656230 */ r_esp -= 4; W32(r_esp, 0x65612du); f_00656230();
    /* 0065612d: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00656130: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00656132: je 0x656173 */ if (fZ) goto L_00656173;
L_00656134:; BB(0x00656134);
    /* 00656134: push 0x6de148 */ { u32 v = 0x6de148u; r_esp -= 4; W32(r_esp, v); }
    /* 00656139: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x65613eu); f_00630f40();
    /* 0065613e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00656141: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 00656144: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 00656147: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 0065614d: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 00656150: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00656153: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00656154: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 00656157: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 0065615a: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0065615d: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00656160: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00656162: mov ecx, eax */ r_ecx = r_eax;
    /* 00656164: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0065616a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65616cu); call_ind(t); }
    /* 0065616c: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0065616e: jmp 0x656229 */ goto L_00656229;
L_00656173:; BB(0x00656173);
    /* 00656173: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00656175: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00656178: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x65617du); f_005fb720();
    /* 0065617d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065617e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00656181: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00656182: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00656185: call 0x656230 */ r_esp -= 4; W32(r_esp, 0x65618au); f_00656230();
    /* 0065618a: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0065618d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065618f: je 0x656227 */ if (fZ) goto L_00656227;
L_00656195:; BB(0x00656195);
    /* 00656195: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0065619a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0065619c: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006561a2: mov eax, dword ptr [edx + 0x178] */ r_eax = R32((u32)(r_edx+0x178u));
    /* 006561a8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6561aau); call_ind(t); }
    /* 006561aa: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 006561ad: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006561af: je 0x6561ed */ if (fZ) goto L_006561ed;
L_006561b1:; BB(0x006561b1);
    /* 006561b1: push 0x6de110 */ { u32 v = 0x6de110u; r_esp -= 4; W32(r_esp, v); }
    /* 006561b6: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6561bbu); f_00630f40();
    /* 006561bb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006561be: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 006561c1: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 006561c4: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 006561ca: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 006561cd: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 006561d0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006561d1: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 006561d4: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 006561d7: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 006561da: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 006561dd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006561df: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 006561e5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6561e7u); call_ind(t); }
    /* 006561e7: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 006561e9: jmp 0x656229 */ goto L_00656229;
L_006561ed:; BB(0x006561ed);
    /* 006561ed: push 0x6de0e4 */ { u32 v = 0x6de0e4u; r_esp -= 4; W32(r_esp, v); }
    /* 006561f2: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6561f7u); f_00630f40();
    /* 006561f7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006561fa: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 006561fd: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00656200: mov edx, dword ptr [ecx + 0x1bc] */ r_edx = R32((u32)(r_ecx+0x1bcu));
    /* 00656206: mov dword ptr [ebp - 0x6c], edx */ W32((u32)(r_ebp+0xffffff94u), r_edx);
    /* 00656209: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 0065620c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065620d: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00656210: mov edx, dword ptr [ecx + 0x6c] */ r_edx = R32((u32)(r_ecx+0x6cu));
    /* 00656213: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 00656216: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 00656219: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0065621b: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00656221: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x656223u); call_ind(t); }
    /* 00656223: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00656225: jmp 0x656229 */ goto L_00656229;
L_00656227:; BB(0x00656227);
    /* 00656227: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00656229:; BB(0x00656229);
    /* 00656229: mov esp, ebp */ r_esp = r_ebp;
    /* 0065622b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065622c: ret 4 */ FN_RET(0x00655d10); r_esp += 8; return;
}

