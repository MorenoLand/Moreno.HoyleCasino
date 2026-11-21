#include "protos.h"

void f_00444090(void) /* HorseRacingRoomScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00444090);
    /* 00444090: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00444091: mov ebp, esp */ r_ebp = r_esp;
    /* 00444093: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00444096: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00444099: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044409c: call 0x5fc360 */ r_esp -= 4; W32(r_esp, 0x4440a1u); f_005fc360();
    /* 004440a1: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004440a4: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004440a7: sub eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004440aa: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004440ad: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004440b1: ja 0x44435e */ if ((!fC&&!fZ)) goto L_0044435e;
L_004440b7:; BB(0x004440b7);
    /* 004440b7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004440ba: jmp dword ptr [ecx*4 + 0x444364] */ { u32 t = R32((u32)(r_ecx*4+0x444364u)); switch (t) { case 0x4440c1u: goto L_004440c1; case 0x4440dbu: goto L_004440db; case 0x4442afu: goto L_004442af; case 0x444346u: goto L_00444346; case 0x444353u: goto L_00444353; default: UNSUP(0x004440ba, "jump table entry is not a known target"); } }
L_004440c1:; BB(0x004440c1);
    /* 004440c1: mov ecx, dword ptr [0x7906f4] */ r_ecx = R32((u32)(0x7906f4u));
    /* 004440c7: call 0x441c70 */ r_esp -= 4; W32(r_esp, 0x4440ccu); f_00441c70();
    /* 004440cc: mov dword ptr [0x7906f8], 1 */ W32((u32)(0x7906f8u), 0x1u);
    /* 004440d6: jmp 0x44435e */ goto L_0044435e;
L_004440db:; BB(0x004440db);
    /* 004440db: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004440dd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004440e0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004440e2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004440e5: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004440e8: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4440eau); call_ind(t); }
    /* 004440ea: mov ecx, dword ptr [0x7906f4] */ r_ecx = R32((u32)(0x7906f4u));
    /* 004440f0: call 0x441d80 */ r_esp -= 4; W32(r_esp, 0x4440f5u); f_00441d80();
    /* 004440f5: cmp dword ptr [0x7906f8], 2 */ {  u32 a = R32((u32)(0x7906f8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004440fc: jne 0x444146 */ if (!fZ) goto L_00444146;
L_004440fe:; BB(0x004440fe);
    /* 004440fe: mov eax, dword ptr [0x7906ec] */ r_eax = R32((u32)(0x7906ecu));
    /* 00444103: add eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00444108: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00444109: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044410a: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 00444110: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00444113: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00444114: fld1  */ FPUSH(1.0);
    /* 00444116: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00444119: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044411b: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0044411d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044411f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00444121: push 0x18aa9 */ { u32 v = 0x18aa9u; r_esp -= 4; W32(r_esp, v); }
    /* 00444126: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0044412c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0044412e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00444134: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 0044413a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x44413cu); call_ind(t); }
    /* 0044413c: mov dword ptr [0x7906f8], 0 */ W32((u32)(0x7906f8u), 0x0u);
L_00444146:; BB(0x00444146);
    /* 00444146: cmp dword ptr [0x7906f8], 1 */ {  u32 a = R32((u32)(0x7906f8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044414d: jne 0x4441e2 */ if (!fZ) goto L_004441e2;
L_00444153:; BB(0x00444153);
    /* 00444153: mov dword ptr [0x7906f8], 2 */ W32((u32)(0x7906f8u), 0x2u);
    /* 0044415d: mov ecx, dword ptr [0x7906f0] */ r_ecx = R32((u32)(0x7906f0u));
    /* 00444163: call 0x444ac0 */ r_esp -= 4; W32(r_esp, 0x444168u); f_00444ac0();
    /* 00444168: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0044416b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044416d: jne 0x4441a4 */ if (!fZ) goto L_004441a4;
L_0044416f:; BB(0x0044416f);
    /* 0044416f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00444171: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00444172: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 00444178: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0044417b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044417c: fld1  */ FPUSH(1.0);
    /* 0044417e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00444181: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00444183: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00444185: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00444187: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00444189: push 0x18aa7 */ { u32 v = 0x18aa7u; r_esp -= 4; W32(r_esp, v); }
    /* 0044418e: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00444194: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00444196: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0044419c: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 004441a2: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4441a4u); call_ind(t); }
L_004441a4:; BB(0x004441a4);
    /* 004441a4: mov eax, dword ptr [0x7906ec] */ r_eax = R32((u32)(0x7906ecu));
    /* 004441a9: add eax, 0x84 */ {  u32 a = r_eax; u32 b = 0x84u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004441ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004441af: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004441b0: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 004441b6: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004441b9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004441ba: fld1  */ FPUSH(1.0);
    /* 004441bc: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004441bf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004441c1: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004441c3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004441c5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004441c7: push 0x18aa8 */ { u32 v = 0x18aa8u; r_esp -= 4; W32(r_esp, v); }
    /* 004441cc: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 004441d2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004441d4: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 004441da: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 004441e0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4441e2u); call_ind(t); }
L_004441e2:; BB(0x004441e2);
    /* 004441e2: cmp dword ptr [0x7906f8], 0 */ {  u32 a = R32((u32)(0x7906f8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004441e9: jne 0x44429b */ if (!fZ) goto L_0044429b;
L_004441ef:; BB(0x004441ef);
    /* 004441ef: push 0x18aa9 */ { u32 v = 0x18aa9u; r_esp -= 4; W32(r_esp, v); }
    /* 004441f4: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 004441fa: call 0x5f4570 */ r_esp -= 4; W32(r_esp, 0x4441ffu); f_005f4570();
    /* 004441ff: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00444202: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00444204: jne 0x444245 */ if (!fZ) goto L_00444245;
L_00444206:; BB(0x00444206);
    /* 00444206: mov edx, dword ptr [0x7906ec] */ r_edx = R32((u32)(0x7906ecu));
    /* 0044420c: add edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00444212: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00444213: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00444214: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0044421a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0044421d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044421e: fld1  */ FPUSH(1.0);
    /* 00444220: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00444223: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00444225: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00444227: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00444229: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044422b: push 0x18aa9 */ { u32 v = 0x18aa9u; r_esp -= 4; W32(r_esp, v); }
    /* 00444230: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00444235: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00444237: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0044423d: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 00444243: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x444245u); call_ind(t); }
L_00444245:; BB(0x00444245);
    /* 00444245: push 0x18aa8 */ { u32 v = 0x18aa8u; r_esp -= 4; W32(r_esp, v); }
    /* 0044424a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00444250: call 0x5f4570 */ r_esp -= 4; W32(r_esp, 0x444255u); f_005f4570();
    /* 00444255: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00444258: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044425a: jne 0x44429b */ if (!fZ) goto L_0044429b;
L_0044425c:; BB(0x0044425c);
    /* 0044425c: mov edx, dword ptr [0x7906ec] */ r_edx = R32((u32)(0x7906ecu));
    /* 00444262: add edx, 0x84 */ {  u32 a = r_edx; u32 b = 0x84u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00444268: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00444269: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044426a: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 00444270: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00444273: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00444274: fld1  */ FPUSH(1.0);
    /* 00444276: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00444279: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044427b: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0044427d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044427f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00444281: push 0x18aa8 */ { u32 v = 0x18aa8u; r_esp -= 4; W32(r_esp, v); }
    /* 00444286: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0044428b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0044428d: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00444293: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 00444299: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x44429bu); call_ind(t); }
L_0044429b:; BB(0x0044429b);
    /* 0044429b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044429d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004442a0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004442a2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004442a5: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004442a8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4442aau); call_ind(t); }
    /* 004442aa: jmp 0x44435e */ goto L_0044435e;
L_004442af:; BB(0x004442af);
    /* 004442af: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004442b1: mov ecx, dword ptr [0x7906ec] */ r_ecx = R32((u32)(0x7906ecu));
    /* 004442b7: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 004442bd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004442be: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 004442c3: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004442c6: call 0x609870 */ r_esp -= 4; W32(r_esp, 0x4442cbu); f_00609870();
    /* 004442cb: mov ecx, dword ptr [0x7906ec] */ r_ecx = R32((u32)(0x7906ecu));
    /* 004442d1: mov dword ptr [ecx + 0x80], 0 */ W32((u32)(r_ecx+0x80u), 0x0u);
    /* 004442db: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004442dd: mov edx, dword ptr [0x7906ec] */ r_edx = R32((u32)(0x7906ecu));
    /* 004442e3: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 004442e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004442ea: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 004442f0: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 004442f3: call 0x609870 */ r_esp -= 4; W32(r_esp, 0x4442f8u); f_00609870();
    /* 004442f8: mov edx, dword ptr [0x7906ec] */ r_edx = R32((u32)(0x7906ecu));
    /* 004442fe: mov dword ptr [edx + 0x84], 0 */ W32((u32)(r_edx+0x84u), 0x0u);
    /* 00444308: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0044430a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044430d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0044430f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444312: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00444315: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x444317u); call_ind(t); }
    /* 00444317: mov ecx, dword ptr [0x7906f0] */ r_ecx = R32((u32)(0x7906f0u));
    /* 0044431d: movzx edx, byte ptr [ecx + 0x264] */ r_edx = (u32)R8((u32)(r_ecx+0x264u));
    /* 00444324: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00444326: jne 0x444339 */ if (!fZ) goto L_00444339;
L_00444328:; BB(0x00444328);
    /* 00444328: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044432a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044432d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0044432f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444332: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00444335: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x444337u); call_ind(t); }
    /* 00444337: jmp 0x444344 */ goto L_00444344;
L_00444339:; BB(0x00444339);
    /* 00444339: mov ecx, dword ptr [0x7906f4] */ r_ecx = R32((u32)(0x7906f4u));
    /* 0044433f: call 0x442490 */ r_esp -= 4; W32(r_esp, 0x444344u); f_00442490();
L_00444344:; BB(0x00444344);
    /* 00444344: jmp 0x44435e */ goto L_0044435e;
L_00444346:; BB(0x00444346);
    /* 00444346: mov ecx, dword ptr [0x7906f4] */ r_ecx = R32((u32)(0x7906f4u));
    /* 0044434c: call 0x4433d0 */ r_esp -= 4; W32(r_esp, 0x444351u); f_004433d0();
    /* 00444351: jmp 0x44435e */ goto L_0044435e;
L_00444353:; BB(0x00444353);
    /* 00444353: mov ecx, dword ptr [0x7906f0] */ r_ecx = R32((u32)(0x7906f0u));
    /* 00444359: call 0x444ce0 */ r_esp -= 4; W32(r_esp, 0x44435eu); f_00444ce0();
L_0044435e:; BB(0x0044435e);
    /* 0044435e: mov esp, ebp */ r_esp = r_ebp;
    /* 00444360: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00444361: ret  */ FN_RET(0x00444090); r_esp += 4; return;
}

