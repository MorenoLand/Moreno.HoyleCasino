#include "protos.h"

void f_00576ec0(void) /* SultanButton::vfunc48 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00576ec0);
    /* 00576ec0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00576ec1: mov ebp, esp */ r_ebp = r_esp;
    /* 00576ec3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00576ec6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00576ec9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00576ecb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00576ecc: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 00576ed2: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00576ed5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00576ed6: fld1  */ FPUSH(1.0);
    /* 00576ed8: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00576edb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00576edd: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00576edf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00576ee1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00576ee3: push 0x186a4 */ { u32 v = 0x186a4u; r_esp -= 4; W32(r_esp, v); }
    /* 00576ee8: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00576eed: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00576eef: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00576ef5: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 00576efb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x576efdu); call_ind(t); }
    /* 00576efd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00576f00: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x576f05u); f_005f5400();
    /* 00576f05: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00576f08: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00576f0c: ja 0x576f59 */ if ((!fC&&!fZ)) goto L_00576f59;
L_00576f0e:; BB(0x00576f0e);
    /* 00576f0e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00576f11: jmp dword ptr [ecx*4 + 0x576f78] */ { u32 t = R32((u32)(r_ecx*4+0x576f78u)); switch (t) { case 0x576f18u: goto L_00576f18; case 0x576f25u: goto L_00576f25; case 0x576f32u: goto L_00576f32; case 0x576f3fu: goto L_00576f3f; case 0x576f4cu: goto L_00576f4c; default: UNSUP(0x00576f11, "jump table entry is not a known target"); } }
L_00576f18:; BB(0x00576f18);
    /* 00576f18: mov ecx, dword ptr [0x79345c] */ r_ecx = R32((u32)(0x79345cu));
    /* 00576f1e: call 0x576460 */ r_esp -= 4; W32(r_esp, 0x576f23u); f_00576460();
    /* 00576f23: jmp 0x576f74 */ goto L_00576f74;
L_00576f25:; BB(0x00576f25);
    /* 00576f25: mov ecx, dword ptr [0x79345c] */ r_ecx = R32((u32)(0x79345cu));
    /* 00576f2b: call 0x5764d0 */ r_esp -= 4; W32(r_esp, 0x576f30u); f_005764d0();
    /* 00576f30: jmp 0x576f74 */ goto L_00576f74;
L_00576f32:; BB(0x00576f32);
    /* 00576f32: mov ecx, dword ptr [0x79345c] */ r_ecx = R32((u32)(0x79345cu));
    /* 00576f38: call 0x576570 */ r_esp -= 4; W32(r_esp, 0x576f3du); f_00576570();
    /* 00576f3d: jmp 0x576f74 */ goto L_00576f74;
L_00576f3f:; BB(0x00576f3f);
    /* 00576f3f: mov ecx, dword ptr [0x79345c] */ r_ecx = R32((u32)(0x79345cu));
    /* 00576f45: call 0x576590 */ r_esp -= 4; W32(r_esp, 0x576f4au); f_00576590();
    /* 00576f4a: jmp 0x576f74 */ goto L_00576f74;
L_00576f4c:; BB(0x00576f4c);
    /* 00576f4c: mov ecx, dword ptr [0x79345c] */ r_ecx = R32((u32)(0x79345cu));
    /* 00576f52: call 0x576600 */ r_esp -= 4; W32(r_esp, 0x576f57u); f_00576600();
    /* 00576f57: jmp 0x576f74 */ goto L_00576f74;
L_00576f59:; BB(0x00576f59);
    /* 00576f59: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00576f5b: jne 0x576f74 */ if (!fZ) goto L_00576f74;
L_00576f5d:; BB(0x00576f5d);
    /* 00576f5d: push 0x44c */ { u32 v = 0x44cu; r_esp -= 4; W32(r_esp, v); }
    /* 00576f62: push 0x6cad74 */ { u32 v = 0x6cad74u; r_esp -= 4; W32(r_esp, v); }
    /* 00576f67: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00576f6c: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x576f71u); f_005e9f20();
    /* 00576f71: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00576f74:; BB(0x00576f74);
    /* 00576f74: mov esp, ebp */ r_esp = r_ebp;
    /* 00576f76: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00576f77: ret  */ FN_RET(0x00576ec0); r_esp += 4; return;
}

void f_00576f90(void) /* SultanButton::vfunc52 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00576f90);
    /* 00576f90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00576f91: mov ebp, esp */ r_ebp = r_esp;
    /* 00576f93: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00576f96: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00576f99: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00576f9c: call 0x602650 */ r_esp -= 4; W32(r_esp, 0x576fa1u); f_00602650();
    /* 00576fa1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00576fa4: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x576fa9u); f_005f5400();
    /* 00576fa9: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00576fac: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00576fb0: ja 0x577014 */ if ((!fC&&!fZ)) goto L_00577014;
L_00576fb2:; BB(0x00576fb2);
    /* 00576fb2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00576fb5: jmp dword ptr [eax*4 + 0x577018] */ { u32 t = R32((u32)(r_eax*4+0x577018u)); switch (t) { case 0x576fbcu: goto L_00576fbc; case 0x576fceu: goto L_00576fce; case 0x576fe0u: goto L_00576fe0; case 0x576ff2u: goto L_00576ff2; case 0x577004u: goto L_00577004; default: UNSUP(0x00576fb5, "jump table entry is not a known target"); } }
L_00576fbc:; BB(0x00576fbc);
    /* 00576fbc: push 0x30ef5d */ { u32 v = 0x30ef5du; r_esp -= 4; W32(r_esp, v); }
    /* 00576fc1: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00576fc7: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x576fccu); f_005f2ba0();
    /* 00576fcc: jmp 0x577014 */ goto L_00577014;
L_00576fce:; BB(0x00576fce);
    /* 00576fce: push 0x30ef5c */ { u32 v = 0x30ef5cu; r_esp -= 4; W32(r_esp, v); }
    /* 00576fd3: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00576fd9: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x576fdeu); f_005f2ba0();
    /* 00576fde: jmp 0x577014 */ goto L_00577014;
L_00576fe0:; BB(0x00576fe0);
    /* 00576fe0: push 0x30ef5e */ { u32 v = 0x30ef5eu; r_esp -= 4; W32(r_esp, v); }
    /* 00576fe5: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00576feb: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x576ff0u); f_005f2ba0();
    /* 00576ff0: jmp 0x577014 */ goto L_00577014;
L_00576ff2:; BB(0x00576ff2);
    /* 00576ff2: push 0x30ef5b */ { u32 v = 0x30ef5bu; r_esp -= 4; W32(r_esp, v); }
    /* 00576ff7: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00576ffd: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x577002u); f_005f2ba0();
    /* 00577002: jmp 0x577014 */ goto L_00577014;
L_00577004:; BB(0x00577004);
    /* 00577004: push 0x30ef5a */ { u32 v = 0x30ef5au; r_esp -= 4; W32(r_esp, v); }
    /* 00577009: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0057700f: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x577014u); f_005f2ba0();
L_00577014:; BB(0x00577014);
    /* 00577014: mov esp, ebp */ r_esp = r_ebp;
    /* 00577016: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00577017: ret  */ FN_RET(0x00576f90); r_esp += 4; return;
}

void f_00577030(void) /* SultanButton::vfunc51 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00577030);
    /* 00577030: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00577031: mov ebp, esp */ r_ebp = r_esp;
    /* 00577033: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00577036: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00577039: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057703c: call 0x6025c0 */ r_esp -= 4; W32(r_esp, 0x577041u); f_006025c0();
    /* 00577041: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00577044: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x577049u); f_005f5400();
    /* 00577049: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0057704c: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00577050: ja 0x5770be */ if ((!fC&&!fZ)) goto L_005770be;
L_00577052:; BB(0x00577052);
    /* 00577052: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00577055: jmp dword ptr [eax*4 + 0x5770c4] */ { u32 t = R32((u32)(r_eax*4+0x5770c4u)); switch (t) { case 0x57705cu: goto L_0057705c; case 0x577070u: goto L_00577070; case 0x577084u: goto L_00577084; case 0x577098u: goto L_00577098; case 0x5770acu: goto L_005770ac; default: UNSUP(0x00577055, "jump table entry is not a known target"); } }
L_0057705c:; BB(0x0057705c);
    /* 0057705c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0057705e: push 0x30ef5d */ { u32 v = 0x30ef5du; r_esp -= 4; W32(r_esp, v); }
    /* 00577063: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00577069: call 0x5f2b20 */ r_esp -= 4; W32(r_esp, 0x57706eu); f_005f2b20();
    /* 0057706e: jmp 0x5770be */ goto L_005770be;
L_00577070:; BB(0x00577070);
    /* 00577070: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00577072: push 0x30ef5c */ { u32 v = 0x30ef5cu; r_esp -= 4; W32(r_esp, v); }
    /* 00577077: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0057707d: call 0x5f2b20 */ r_esp -= 4; W32(r_esp, 0x577082u); f_005f2b20();
    /* 00577082: jmp 0x5770be */ goto L_005770be;
L_00577084:; BB(0x00577084);
    /* 00577084: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00577086: push 0x30ef5e */ { u32 v = 0x30ef5eu; r_esp -= 4; W32(r_esp, v); }
    /* 0057708b: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00577091: call 0x5f2b20 */ r_esp -= 4; W32(r_esp, 0x577096u); f_005f2b20();
    /* 00577096: jmp 0x5770be */ goto L_005770be;
L_00577098:; BB(0x00577098);
    /* 00577098: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0057709a: push 0x30ef5b */ { u32 v = 0x30ef5bu; r_esp -= 4; W32(r_esp, v); }
    /* 0057709f: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005770a5: call 0x5f2b20 */ r_esp -= 4; W32(r_esp, 0x5770aau); f_005f2b20();
    /* 005770aa: jmp 0x5770be */ goto L_005770be;
L_005770ac:; BB(0x005770ac);
    /* 005770ac: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005770ae: push 0x30ef5a */ { u32 v = 0x30ef5au; r_esp -= 4; W32(r_esp, v); }
    /* 005770b3: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005770b9: call 0x5f2b20 */ r_esp -= 4; W32(r_esp, 0x5770beu); f_005f2b20();
L_005770be:; BB(0x005770be);
    /* 005770be: mov esp, ebp */ r_esp = r_ebp;
    /* 005770c0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005770c1: ret  */ FN_RET(0x00577030); r_esp += 4; return;
}

