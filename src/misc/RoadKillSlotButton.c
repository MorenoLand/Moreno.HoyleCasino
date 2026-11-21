#include "protos.h"

void f_0056f9f0(void) /* RoadKillSlotButton::vfunc48 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056f9f0);
    /* 0056f9f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056f9f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0056f9f3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056f9f6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0056f9f9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056f9fb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056f9fc: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0056fa02: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0056fa05: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056fa06: fld1  */ FPUSH(1.0);
    /* 0056fa08: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0056fa0b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056fa0d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0056fa0f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056fa11: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056fa13: push 0x186a4 */ { u32 v = 0x186a4u; r_esp -= 4; W32(r_esp, v); }
    /* 0056fa18: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0056fa1d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0056fa1f: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0056fa25: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 0056fa2b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56fa2du); call_ind(t); }
    /* 0056fa2d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056fa30: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x56fa35u); f_005f5400();
    /* 0056fa35: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0056fa38: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0056fa3c: ja 0x56fa89 */ if ((!fC&&!fZ)) goto L_0056fa89;
L_0056fa3e:; BB(0x0056fa3e);
    /* 0056fa3e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056fa41: jmp dword ptr [ecx*4 + 0x56faa8] */ { u32 t = R32((u32)(r_ecx*4+0x56faa8u)); switch (t) { case 0x56fa48u: goto L_0056fa48; case 0x56fa55u: goto L_0056fa55; case 0x56fa62u: goto L_0056fa62; case 0x56fa6fu: goto L_0056fa6f; case 0x56fa7cu: goto L_0056fa7c; default: UNSUP(0x0056fa41, "jump table entry is not a known target"); } }
L_0056fa48:; BB(0x0056fa48);
    /* 0056fa48: mov ecx, dword ptr [0x793450] */ r_ecx = R32((u32)(0x793450u));
    /* 0056fa4e: call 0x56e620 */ r_esp -= 4; W32(r_esp, 0x56fa53u); f_0056e620();
    /* 0056fa53: jmp 0x56faa4 */ goto L_0056faa4;
L_0056fa55:; BB(0x0056fa55);
    /* 0056fa55: mov ecx, dword ptr [0x793450] */ r_ecx = R32((u32)(0x793450u));
    /* 0056fa5b: call 0x56e560 */ r_esp -= 4; W32(r_esp, 0x56fa60u); f_0056e560();
    /* 0056fa60: jmp 0x56faa4 */ goto L_0056faa4;
L_0056fa62:; BB(0x0056fa62);
    /* 0056fa62: mov ecx, dword ptr [0x793450] */ r_ecx = R32((u32)(0x793450u));
    /* 0056fa68: call 0x56e4e0 */ r_esp -= 4; W32(r_esp, 0x56fa6du); f_0056e4e0();
    /* 0056fa6d: jmp 0x56faa4 */ goto L_0056faa4;
L_0056fa6f:; BB(0x0056fa6f);
    /* 0056fa6f: mov ecx, dword ptr [0x793450] */ r_ecx = R32((u32)(0x793450u));
    /* 0056fa75: call 0x56e640 */ r_esp -= 4; W32(r_esp, 0x56fa7au); f_0056e640();
    /* 0056fa7a: jmp 0x56faa4 */ goto L_0056faa4;
L_0056fa7c:; BB(0x0056fa7c);
    /* 0056fa7c: mov ecx, dword ptr [0x793450] */ r_ecx = R32((u32)(0x793450u));
    /* 0056fa82: call 0x56e6b0 */ r_esp -= 4; W32(r_esp, 0x56fa87u); f_0056e6b0();
    /* 0056fa87: jmp 0x56faa4 */ goto L_0056faa4;
L_0056fa89:; BB(0x0056fa89);
    /* 0056fa89: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0056fa8b: jne 0x56faa4 */ if (!fZ) goto L_0056faa4;
L_0056fa8d:; BB(0x0056fa8d);
    /* 0056fa8d: push 0x489 */ { u32 v = 0x489u; r_esp -= 4; W32(r_esp, v); }
    /* 0056fa92: push 0x6ca2b4 */ { u32 v = 0x6ca2b4u; r_esp -= 4; W32(r_esp, v); }
    /* 0056fa97: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0056fa9c: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x56faa1u); f_005e9f20();
    /* 0056faa1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0056faa4:; BB(0x0056faa4);
    /* 0056faa4: mov esp, ebp */ r_esp = r_ebp;
    /* 0056faa6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056faa7: ret  */ FN_RET(0x0056f9f0); r_esp += 4; return;
}

void f_0056fac0(void) /* RoadKillSlotButton::vfunc52 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056fac0);
    /* 0056fac0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056fac1: mov ebp, esp */ r_ebp = r_esp;
    /* 0056fac3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056fac6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0056fac9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056facc: call 0x602650 */ r_esp -= 4; W32(r_esp, 0x56fad1u); f_00602650();
    /* 0056fad1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056fad4: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x56fad9u); f_005f5400();
    /* 0056fad9: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0056fadc: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0056fae0: ja 0x56fb44 */ if ((!fC&&!fZ)) goto L_0056fb44;
L_0056fae2:; BB(0x0056fae2);
    /* 0056fae2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056fae5: jmp dword ptr [eax*4 + 0x56fb48] */ { u32 t = R32((u32)(r_eax*4+0x56fb48u)); switch (t) { case 0x56faecu: goto L_0056faec; case 0x56fafeu: goto L_0056fafe; case 0x56fb10u: goto L_0056fb10; case 0x56fb22u: goto L_0056fb22; case 0x56fb34u: goto L_0056fb34; default: UNSUP(0x0056fae5, "jump table entry is not a known target"); } }
L_0056faec:; BB(0x0056faec);
    /* 0056faec: push 0x30ef5e */ { u32 v = 0x30ef5eu; r_esp -= 4; W32(r_esp, v); }
    /* 0056faf1: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0056faf7: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x56fafcu); f_005f2ba0();
    /* 0056fafc: jmp 0x56fb44 */ goto L_0056fb44;
L_0056fafe:; BB(0x0056fafe);
    /* 0056fafe: push 0x30ef5d */ { u32 v = 0x30ef5du; r_esp -= 4; W32(r_esp, v); }
    /* 0056fb03: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0056fb09: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x56fb0eu); f_005f2ba0();
    /* 0056fb0e: jmp 0x56fb44 */ goto L_0056fb44;
L_0056fb10:; BB(0x0056fb10);
    /* 0056fb10: push 0x30ef5c */ { u32 v = 0x30ef5cu; r_esp -= 4; W32(r_esp, v); }
    /* 0056fb15: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0056fb1b: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x56fb20u); f_005f2ba0();
    /* 0056fb20: jmp 0x56fb44 */ goto L_0056fb44;
L_0056fb22:; BB(0x0056fb22);
    /* 0056fb22: push 0x30ef5b */ { u32 v = 0x30ef5bu; r_esp -= 4; W32(r_esp, v); }
    /* 0056fb27: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0056fb2d: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x56fb32u); f_005f2ba0();
    /* 0056fb32: jmp 0x56fb44 */ goto L_0056fb44;
L_0056fb34:; BB(0x0056fb34);
    /* 0056fb34: push 0x30ef5a */ { u32 v = 0x30ef5au; r_esp -= 4; W32(r_esp, v); }
    /* 0056fb39: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0056fb3f: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x56fb44u); f_005f2ba0();
L_0056fb44:; BB(0x0056fb44);
    /* 0056fb44: mov esp, ebp */ r_esp = r_ebp;
    /* 0056fb46: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056fb47: ret  */ FN_RET(0x0056fac0); r_esp += 4; return;
}

void f_0056fb60(void) /* RoadKillSlotButton::vfunc51 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056fb60);
    /* 0056fb60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056fb61: mov ebp, esp */ r_ebp = r_esp;
    /* 0056fb63: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056fb66: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0056fb69: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056fb6c: call 0x6025c0 */ r_esp -= 4; W32(r_esp, 0x56fb71u); f_006025c0();
    /* 0056fb71: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056fb74: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x56fb79u); f_005f5400();
    /* 0056fb79: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0056fb7c: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0056fb80: ja 0x56fbee */ if ((!fC&&!fZ)) goto L_0056fbee;
L_0056fb82:; BB(0x0056fb82);
    /* 0056fb82: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056fb85: jmp dword ptr [eax*4 + 0x56fbf4] */ { u32 t = R32((u32)(r_eax*4+0x56fbf4u)); switch (t) { case 0x56fb8cu: goto L_0056fb8c; case 0x56fba0u: goto L_0056fba0; case 0x56fbb4u: goto L_0056fbb4; case 0x56fbc8u: goto L_0056fbc8; case 0x56fbdcu: goto L_0056fbdc; default: UNSUP(0x0056fb85, "jump table entry is not a known target"); } }
L_0056fb8c:; BB(0x0056fb8c);
    /* 0056fb8c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056fb8e: push 0x30ef5e */ { u32 v = 0x30ef5eu; r_esp -= 4; W32(r_esp, v); }
    /* 0056fb93: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0056fb99: call 0x5f2b20 */ r_esp -= 4; W32(r_esp, 0x56fb9eu); f_005f2b20();
    /* 0056fb9e: jmp 0x56fbee */ goto L_0056fbee;
L_0056fba0:; BB(0x0056fba0);
    /* 0056fba0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056fba2: push 0x30ef5d */ { u32 v = 0x30ef5du; r_esp -= 4; W32(r_esp, v); }
    /* 0056fba7: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0056fbad: call 0x5f2b20 */ r_esp -= 4; W32(r_esp, 0x56fbb2u); f_005f2b20();
    /* 0056fbb2: jmp 0x56fbee */ goto L_0056fbee;
L_0056fbb4:; BB(0x0056fbb4);
    /* 0056fbb4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056fbb6: push 0x30ef5c */ { u32 v = 0x30ef5cu; r_esp -= 4; W32(r_esp, v); }
    /* 0056fbbb: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0056fbc1: call 0x5f2b20 */ r_esp -= 4; W32(r_esp, 0x56fbc6u); f_005f2b20();
    /* 0056fbc6: jmp 0x56fbee */ goto L_0056fbee;
L_0056fbc8:; BB(0x0056fbc8);
    /* 0056fbc8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056fbca: push 0x30ef5b */ { u32 v = 0x30ef5bu; r_esp -= 4; W32(r_esp, v); }
    /* 0056fbcf: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0056fbd5: call 0x5f2b20 */ r_esp -= 4; W32(r_esp, 0x56fbdau); f_005f2b20();
    /* 0056fbda: jmp 0x56fbee */ goto L_0056fbee;
L_0056fbdc:; BB(0x0056fbdc);
    /* 0056fbdc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056fbde: push 0x30ef5a */ { u32 v = 0x30ef5au; r_esp -= 4; W32(r_esp, v); }
    /* 0056fbe3: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0056fbe9: call 0x5f2b20 */ r_esp -= 4; W32(r_esp, 0x56fbeeu); f_005f2b20();
L_0056fbee:; BB(0x0056fbee);
    /* 0056fbee: mov esp, ebp */ r_esp = r_ebp;
    /* 0056fbf0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056fbf1: ret  */ FN_RET(0x0056fb60); r_esp += 4; return;
}

