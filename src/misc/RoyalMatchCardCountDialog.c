#include "protos.h"

void f_005a9ec0(void) /* RoyalMatchCardCountDialog::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a9ec0);
    /* 005a9ec0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a9ec1: mov ebp, esp */ r_ebp = r_esp;
    /* 005a9ec3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a9ec4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005a9ec7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a9ec9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a9ecb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a9ece: call 0x5f71f0 */ r_esp -= 4; W32(r_esp, 0x5a9ed3u); f_005f71f0();
    /* 005a9ed3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a9ed6: mov dword ptr [eax], 0x6cfb2c */ W32((u32)(r_eax), 0x6cfb2cu);
    /* 005a9edc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a9edf: mov esp, ebp */ r_esp = r_ebp;
    /* 005a9ee1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a9ee2: ret  */ FN_RET(0x005a9ec0); r_esp += 4; return;
}

void f_005a9f10(void) /* RoyalMatchCardCountDialog::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a9f10);
    /* 005a9f10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a9f11: mov ebp, esp */ r_ebp = r_esp;
    /* 005a9f13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a9f14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005a9f17: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a9f19: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a9f1f: call 0x5b5fb0 */ r_esp -= 4; W32(r_esp, 0x5a9f24u); f_005b5fb0();
    /* 005a9f24: mov byte ptr [eax + 6], 0 */ W8((u32)(r_eax+0x6u), 0x0u);
    /* 005a9f28: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005a9f2e: call 0x637610 */ r_esp -= 4; W32(r_esp, 0x5a9f33u); f_00637610();
    /* 005a9f33: mov ecx, dword ptr [0x7935f8] */ r_ecx = R32((u32)(0x7935f8u));
    /* 005a9f39: call 0x5a7100 */ r_esp -= 4; W32(r_esp, 0x5a9f3eu); f_005a7100();
    /* 005a9f3e: mov esp, ebp */ r_esp = r_ebp;
    /* 005a9f40: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a9f41: ret 4 */ FN_RET(0x005a9f10); r_esp += 8; return;
}

void f_005a9f50(void) /* RoyalMatchCardCountDialog::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a9f50);
    /* 005a9f50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a9f51: mov ebp, esp */ r_ebp = r_esp;
    /* 005a9f53: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a9f56: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005a9f59: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a9f5b: push 0x424 */ { u32 v = 0x424u; r_esp -= 4; W32(r_esp, v); }
    /* 005a9f60: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a9f63: call 0x5f83d0 */ r_esp -= 4; W32(r_esp, 0x5a9f68u); f_005f83d0();
    /* 005a9f68: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005a9f6a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a9f6c: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 005a9f6e: push 0x6cfb6c */ { u32 v = 0x6cfb6cu; r_esp -= 4; W32(r_esp, v); }
    /* 005a9f73: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5a9f78u); f_00630f40();
    /* 005a9f78: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a9f7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a9f7c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a9f7f: call 0x5f73e0 */ r_esp -= 4; W32(r_esp, 0x5a9f84u); f_005f73e0();
    /* 005a9f84: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a9f86: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a9f88: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a9f8a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a9f8c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a9f8e: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005a9f93: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a9f95: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005a9f97: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 005a9f99: push 0x444 */ { u32 v = 0x444u; r_esp -= 4; W32(r_esp, v); }
    /* 005a9f9e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a9fa0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a9fa2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a9fa5: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x5a9faau); f_005f9de0();
    /* 005a9faa: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005a9fb1: jmp 0x5a9fbc */ goto L_005a9fbc;
L_005a9fb3:; BB(0x005a9fb3);
    /* 005a9fb3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a9fb6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a9fb9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005a9fbc:; BB(0x005a9fbc);
    /* 005a9fbc: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a9fc0: jge 0x5a9fef */ if ((fS==fO)) goto L_005a9fef;
L_005a9fc2:; BB(0x005a9fc2);
    /* 005a9fc2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a9fc4: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005a9fc6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a9fc8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a9fcb: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a9fce: add ecx, 0x26 */ {  u32 a = r_ecx; u32 b = 0x26u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005a9fd1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a9fd2: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005a9fd4: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005a9fd6: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005a9fd8: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 005a9fda: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005a9fdf: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a9fe2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a9fe3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a9fe5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a9fe8: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x5a9fedu); f_005fa5b0();
    /* 005a9fed: jmp 0x5a9fb3 */ goto L_005a9fb3;
L_005a9fef:; BB(0x005a9fef);
    /* 005a9fef: mov esp, ebp */ r_esp = r_ebp;
    /* 005a9ff1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a9ff2: ret  */ FN_RET(0x005a9f50); r_esp += 4; return;
}

