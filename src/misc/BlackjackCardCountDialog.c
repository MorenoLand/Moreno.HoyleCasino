#include "protos.h"

void f_00411d70(void) /* BlackjackCardCountDialog::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00411d70);
    /* 00411d70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00411d71: mov ebp, esp */ r_ebp = r_esp;
    /* 00411d73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00411d74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00411d77: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00411d79: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00411d7b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00411d7e: call 0x5f71f0 */ r_esp -= 4; W32(r_esp, 0x411d83u); f_005f71f0();
    /* 00411d83: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00411d86: mov dword ptr [eax], 0x6b3cbc */ W32((u32)(r_eax), 0x6b3cbcu);
    /* 00411d8c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00411d8f: mov esp, ebp */ r_esp = r_ebp;
    /* 00411d91: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00411d92: ret  */ FN_RET(0x00411d70); r_esp += 4; return;
}

void f_00411dc0(void) /* BlackjackCardCountDialog::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00411dc0);
    /* 00411dc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00411dc1: mov ebp, esp */ r_ebp = r_esp;
    /* 00411dc3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00411dc6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00411dc9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00411dcb: push 0x424 */ { u32 v = 0x424u; r_esp -= 4; W32(r_esp, v); }
    /* 00411dd0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00411dd3: call 0x5f83d0 */ r_esp -= 4; W32(r_esp, 0x411dd8u); f_005f83d0();
    /* 00411dd8: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00411dda: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00411ddc: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 00411dde: push 0x6b3cfc */ { u32 v = 0x6b3cfcu; r_esp -= 4; W32(r_esp, v); }
    /* 00411de3: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x411de8u); f_00630f40();
    /* 00411de8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00411deb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00411dec: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00411def: call 0x5f73e0 */ r_esp -= 4; W32(r_esp, 0x411df4u); f_005f73e0();
    /* 00411df4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00411df6: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00411df8: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00411dfa: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00411dfc: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00411dfe: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00411e03: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00411e05: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00411e07: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 00411e09: push 0x444 */ { u32 v = 0x444u; r_esp -= 4; W32(r_esp, v); }
    /* 00411e0e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00411e10: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00411e12: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00411e15: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x411e1au); f_005f9de0();
    /* 00411e1a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00411e21: jmp 0x411e2c */ goto L_00411e2c;
L_00411e23:; BB(0x00411e23);
    /* 00411e23: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00411e26: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00411e29: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00411e2c:; BB(0x00411e2c);
    /* 00411e2c: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00411e30: jge 0x411e5f */ if ((fS==fO)) goto L_00411e5f;
L_00411e32:; BB(0x00411e32);
    /* 00411e32: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00411e34: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00411e36: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00411e38: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00411e3b: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00411e3e: add ecx, 0x26 */ {  u32 a = r_ecx; u32 b = 0x26u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00411e41: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00411e42: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00411e44: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00411e46: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00411e48: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 00411e4a: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00411e4f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00411e52: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00411e53: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00411e55: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00411e58: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x411e5du); f_005fa5b0();
    /* 00411e5d: jmp 0x411e23 */ goto L_00411e23;
L_00411e5f:; BB(0x00411e5f);
    /* 00411e5f: mov esp, ebp */ r_esp = r_ebp;
    /* 00411e61: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00411e62: ret  */ FN_RET(0x00411dc0); r_esp += 4; return;
}

void f_00412090(void) /* BlackjackCardCountDialog::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00412090);
    /* 00412090: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00412091: mov ebp, esp */ r_ebp = r_esp;
    /* 00412093: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00412096: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00412099: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0041209b: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 004120a1: call 0x418400 */ r_esp -= 4; W32(r_esp, 0x4120a6u); f_00418400();
    /* 004120a6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004120a9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004120ac: mov byte ptr [eax + 0xc], 0 */ W8((u32)(r_eax+0xcu), 0x0u);
    /* 004120b0: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 004120b6: call 0x637610 */ r_esp -= 4; W32(r_esp, 0x4120bbu); f_00637610();
    /* 004120bb: mov ecx, dword ptr [0x79032c] */ r_ecx = R32((u32)(0x79032cu));
    /* 004120c1: call 0x40dc40 */ r_esp -= 4; W32(r_esp, 0x4120c6u); f_0040dc40();
    /* 004120c6: mov esp, ebp */ r_esp = r_ebp;
    /* 004120c8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004120c9: ret 4 */ FN_RET(0x00412090); r_esp += 8; return;
}

