#include "protos.h"

void f_0043e2c0(void) /* HorseAnnouncerScript::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043e2c0);
    /* 0043e2c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043e2c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0043e2c3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043e2c6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0043e2c9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e2cb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043e2ce: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x43e2d3u); f_005fc0d0();
    /* 0043e2d3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043e2d6: mov dword ptr [eax], 0x6b82dc */ W32((u32)(r_eax), 0x6b82dcu);
    /* 0043e2dc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043e2e3: jmp 0x43e2ee */ goto L_0043e2ee;
L_0043e2e5:; BB(0x0043e2e5);
    /* 0043e2e5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043e2e8: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043e2eb: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0043e2ee:; BB(0x0043e2ee);
    /* 0043e2ee: cmp dword ptr [ebp - 4], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043e2f2: jge 0x43e304 */ if ((fS==fO)) goto L_0043e304;
L_0043e2f4:; BB(0x0043e2f4);
    /* 0043e2f4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043e2f7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043e2fa: mov dword ptr [eax + edx*4 + 0x20], 0 */ W32((u32)(r_eax+r_edx*4+0x20u), 0x0u);
    /* 0043e302: jmp 0x43e2e5 */ goto L_0043e2e5;
L_0043e304:; BB(0x0043e304);
    /* 0043e304: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043e307: mov esp, ebp */ r_esp = r_ebp;
    /* 0043e309: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043e30a: ret  */ FN_RET(0x0043e2c0); r_esp += 4; return;
}

void f_0043e310(void) /* HorseAnnouncerScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043e310);
    /* 0043e310: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043e311: mov ebp, esp */ r_ebp = r_esp;
    /* 0043e313: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043e316: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 0043e319: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043e31c: call 0x5fc360 */ r_esp -= 4; W32(r_esp, 0x43e321u); f_005fc360();
    /* 0043e321: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0043e324: cmp dword ptr [ebp - 0x34], 0x2c */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0043e328: ja 0x43f0cf */ if ((!fC&&!fZ)) goto L_0043f0cf;
L_0043e32e:; BB(0x0043e32e);
    /* 0043e32e: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0043e331: jmp dword ptr [eax*4 + 0x43f0f0] */ { u32 t = R32((u32)(r_eax*4+0x43f0f0u)); switch (t) { case 0x43e338u: goto L_0043e338; case 0x43e33du: goto L_0043e33d; case 0x43e38au: goto L_0043e38a; case 0x43e3e2u: goto L_0043e3e2; case 0x43e4a6u: goto L_0043e4a6; case 0x43e4beu: goto L_0043e4be; case 0x43e516u: goto L_0043e516; case 0x43e56eu: goto L_0043e56e; case 0x43e5c6u: goto L_0043e5c6; case 0x43e61eu: goto L_0043e61e; case 0x43e676u: goto L_0043e676; case 0x43e6ceu: goto L_0043e6ce; case 0x43e726u: goto L_0043e726; case 0x43e77eu: goto L_0043e77e; case 0x43e7d6u: goto L_0043e7d6; case 0x43e82eu: goto L_0043e82e; case 0x43e846u: goto L_0043e846; case 0x43e89eu: goto L_0043e89e; case 0x43e8f6u: goto L_0043e8f6; case 0x43e94eu: goto L_0043e94e; case 0x43e9a6u: goto L_0043e9a6; case 0x43e9beu: goto L_0043e9be; case 0x43ea16u: goto L_0043ea16; case 0x43ea6eu: goto L_0043ea6e; case 0x43eac6u: goto L_0043eac6; case 0x43eb1eu: goto L_0043eb1e; case 0x43eb36u: goto L_0043eb36; case 0x43eb8eu: goto L_0043eb8e; case 0x43ebe6u: goto L_0043ebe6; case 0x43ec3eu: goto L_0043ec3e; case 0x43ec96u: goto L_0043ec96; case 0x43ecaeu: goto L_0043ecae; case 0x43ed06u: goto L_0043ed06; case 0x43ed5eu: goto L_0043ed5e; case 0x43ed76u: goto L_0043ed76; case 0x43edfau: goto L_0043edfa; case 0x43ee3du: goto L_0043ee3d; case 0x43ee95u: goto L_0043ee95; case 0x43eeedu: goto L_0043eeed; case 0x43ef45u: goto L_0043ef45; case 0x43ef9du: goto L_0043ef9d; case 0x43eff5u: goto L_0043eff5; case 0x43f04du: goto L_0043f04d; case 0x43f065u: goto L_0043f065; case 0x43f0bau: goto L_0043f0ba; default: UNSUP(0x0043e331, "jump table entry is not a known target"); } }
L_0043e338:; BB(0x0043e338);
    /* 0043e338: jmp 0x43f0ea */ goto L_0043f0ea;
L_0043e33d:; BB(0x0043e33d);
    /* 0043e33d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e33f: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043e342: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043e344: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043e347: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0043e34a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43e34cu); call_ind(t); }
    /* 0043e34c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e34e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e34f: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0043e355: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043e358: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e359: fld1  */ FPUSH(1.0);
    /* 0043e35b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043e35e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e360: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e362: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e364: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043e367: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e368: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043e36b: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 0043e36e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043e36f: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0043e375: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043e377: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0043e37d: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 0043e383: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43e385u); call_ind(t); }
    /* 0043e385: jmp 0x43f0ea */ goto L_0043f0ea;
L_0043e38a:; BB(0x0043e38a);
    /* 0043e38a: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e38c: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043e38f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043e391: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043e394: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0043e397: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43e399u); call_ind(t); }
    /* 0043e399: mov ecx, dword ptr [0x7906ec] */ r_ecx = R32((u32)(0x7906ecu));
    /* 0043e39f: add ecx, 0x88 */ {  u32 a = r_ecx; u32 b = 0x88u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043e3a5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e3a6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e3a7: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0043e3ad: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043e3b0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e3b1: fld1  */ FPUSH(1.0);
    /* 0043e3b3: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043e3b6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e3b8: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e3ba: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e3bc: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043e3bf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e3c0: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043e3c3: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0043e3c6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e3c7: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0043e3cd: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043e3cf: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0043e3d5: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 0043e3db: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x43e3ddu); call_ind(t); }
    /* 0043e3dd: jmp 0x43f0ea */ goto L_0043f0ea;
L_0043e3e2:; BB(0x0043e3e2);
    /* 0043e3e2: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e3e4: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043e3e7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043e3e9: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043e3ec: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0043e3ef: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43e3f1u); call_ind(t); }
    /* 0043e3f1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e3f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e3f4: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0043e3fa: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043e3fd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e3fe: fld1  */ FPUSH(1.0);
    /* 0043e400: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043e403: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e405: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e407: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e409: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e40b: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043e40e: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0043e411: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e412: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0043e417: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043e419: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0043e41f: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 0043e425: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43e427u); call_ind(t); }
    /* 0043e427: mov ecx, dword ptr [0x7906ec] */ r_ecx = R32((u32)(0x7906ecu));
    /* 0043e42d: add ecx, 0x8c */ {  u32 a = r_ecx; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043e433: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e434: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e435: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0043e43b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043e43e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e43f: fld1  */ FPUSH(1.0);
    /* 0043e441: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043e444: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e446: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e448: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e44a: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043e44d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e44e: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043e451: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0043e454: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e455: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0043e45b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043e45d: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0043e463: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 0043e469: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x43e46bu); call_ind(t); }
    /* 0043e46b: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e46d: mov eax, dword ptr [0x7906ec] */ r_eax = R32((u32)(0x7906ecu));
    /* 0043e472: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0043e475: mov edx, dword ptr [0x7906ec] */ r_edx = R32((u32)(0x7906ecu));
    /* 0043e47b: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0043e47e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043e480: mov ecx, eax */ r_ecx = r_eax;
    /* 0043e482: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0043e485: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43e487u); call_ind(t); }
    /* 0043e487: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e489: mov ecx, dword ptr [0x7906ec] */ r_ecx = R32((u32)(0x7906ecu));
    /* 0043e48f: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0043e492: mov eax, dword ptr [0x7906ec] */ r_eax = R32((u32)(0x7906ecu));
    /* 0043e497: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0043e49a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0043e49c: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0043e49f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43e4a1u); call_ind(t); }
    /* 0043e4a1: jmp 0x43f0ea */ goto L_0043f0ea;
L_0043e4a6:; BB(0x0043e4a6);
    /* 0043e4a6: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043e4a9: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 0043e4ac: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0043e4af: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043e4b2: mov byte ptr [eax + 0x188], 0 */ W8((u32)(r_eax+0x188u), 0x0u);
    /* 0043e4b9: jmp 0x43f0ea */ goto L_0043f0ea;
L_0043e4be:; BB(0x0043e4be);
    /* 0043e4be: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e4c0: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043e4c3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043e4c5: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043e4c8: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0043e4cb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43e4cdu); call_ind(t); }
    /* 0043e4cd: mov ecx, dword ptr [0x7906ec] */ r_ecx = R32((u32)(0x7906ecu));
    /* 0043e4d3: add ecx, 0x88 */ {  u32 a = r_ecx; u32 b = 0x88u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043e4d9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e4da: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e4db: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0043e4e1: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043e4e4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e4e5: fld1  */ FPUSH(1.0);
    /* 0043e4e7: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043e4ea: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e4ec: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e4ee: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e4f0: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043e4f3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e4f4: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043e4f7: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0043e4fa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e4fb: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0043e501: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043e503: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0043e509: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 0043e50f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x43e511u); call_ind(t); }
    /* 0043e511: jmp 0x43f0ea */ goto L_0043f0ea;
L_0043e516:; BB(0x0043e516);
    /* 0043e516: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e518: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043e51b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043e51d: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043e520: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0043e523: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43e525u); call_ind(t); }
    /* 0043e525: mov ecx, dword ptr [0x7906ec] */ r_ecx = R32((u32)(0x7906ecu));
    /* 0043e52b: add ecx, 0x8c */ {  u32 a = r_ecx; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043e531: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e532: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e533: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0043e539: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043e53c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e53d: fld1  */ FPUSH(1.0);
    /* 0043e53f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043e542: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e544: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e546: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e548: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043e54b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e54c: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043e54f: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0043e552: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e553: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0043e559: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043e55b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0043e561: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 0043e567: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x43e569u); call_ind(t); }
    /* 0043e569: jmp 0x43f0ea */ goto L_0043f0ea;
L_0043e56e:; BB(0x0043e56e);
    /* 0043e56e: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e570: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043e573: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043e575: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043e578: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0043e57b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43e57du); call_ind(t); }
    /* 0043e57d: mov ecx, dword ptr [0x7906ec] */ r_ecx = R32((u32)(0x7906ecu));
    /* 0043e583: add ecx, 0x88 */ {  u32 a = r_ecx; u32 b = 0x88u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043e589: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e58a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e58b: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0043e591: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043e594: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e595: fld1  */ FPUSH(1.0);
    /* 0043e597: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043e59a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e59c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e59e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e5a0: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043e5a3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e5a4: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043e5a7: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0043e5aa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e5ab: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0043e5b1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043e5b3: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0043e5b9: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 0043e5bf: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x43e5c1u); call_ind(t); }
    /* 0043e5c1: jmp 0x43f0ea */ goto L_0043f0ea;
L_0043e5c6:; BB(0x0043e5c6);
    /* 0043e5c6: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e5c8: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043e5cb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043e5cd: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043e5d0: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0043e5d3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43e5d5u); call_ind(t); }
    /* 0043e5d5: mov ecx, dword ptr [0x7906ec] */ r_ecx = R32((u32)(0x7906ecu));
    /* 0043e5db: add ecx, 0x8c */ {  u32 a = r_ecx; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043e5e1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e5e2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e5e3: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0043e5e9: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043e5ec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e5ed: fld1  */ FPUSH(1.0);
    /* 0043e5ef: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043e5f2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e5f4: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e5f6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e5f8: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043e5fb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e5fc: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043e5ff: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0043e602: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e603: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0043e609: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043e60b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0043e611: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 0043e617: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x43e619u); call_ind(t); }
    /* 0043e619: jmp 0x43f0ea */ goto L_0043f0ea;
L_0043e61e:; BB(0x0043e61e);
    /* 0043e61e: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0043e620: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043e623: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043e625: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043e628: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0043e62b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43e62du); call_ind(t); }
    /* 0043e62d: mov ecx, dword ptr [0x7906ec] */ r_ecx = R32((u32)(0x7906ecu));
    /* 0043e633: add ecx, 0x88 */ {  u32 a = r_ecx; u32 b = 0x88u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043e639: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e63a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e63b: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0043e641: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043e644: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e645: fld1  */ FPUSH(1.0);
    /* 0043e647: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043e64a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e64c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e64e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e650: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043e653: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e654: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043e657: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0043e65a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e65b: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0043e661: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043e663: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0043e669: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 0043e66f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x43e671u); call_ind(t); }
    /* 0043e671: jmp 0x43f0ea */ goto L_0043f0ea;
L_0043e676:; BB(0x0043e676);
    /* 0043e676: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0043e678: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043e67b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043e67d: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043e680: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0043e683: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43e685u); call_ind(t); }
    /* 0043e685: mov ecx, dword ptr [0x7906ec] */ r_ecx = R32((u32)(0x7906ecu));
    /* 0043e68b: add ecx, 0x8c */ {  u32 a = r_ecx; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043e691: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e692: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e693: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0043e699: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043e69c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e69d: fld1  */ FPUSH(1.0);
    /* 0043e69f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043e6a2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e6a4: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e6a6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e6a8: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043e6ab: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e6ac: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043e6af: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0043e6b2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e6b3: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0043e6b9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043e6bb: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0043e6c1: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 0043e6c7: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x43e6c9u); call_ind(t); }
    /* 0043e6c9: jmp 0x43f0ea */ goto L_0043f0ea;
L_0043e6ce:; BB(0x0043e6ce);
    /* 0043e6ce: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0043e6d0: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043e6d3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043e6d5: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043e6d8: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0043e6db: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43e6ddu); call_ind(t); }
    /* 0043e6dd: mov ecx, dword ptr [0x7906ec] */ r_ecx = R32((u32)(0x7906ecu));
    /* 0043e6e3: add ecx, 0x88 */ {  u32 a = r_ecx; u32 b = 0x88u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043e6e9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e6ea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e6eb: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0043e6f1: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043e6f4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e6f5: fld1  */ FPUSH(1.0);
    /* 0043e6f7: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043e6fa: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e6fc: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e6fe: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e700: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043e703: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e704: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043e707: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0043e70a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e70b: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0043e711: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043e713: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0043e719: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 0043e71f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x43e721u); call_ind(t); }
    /* 0043e721: jmp 0x43f0ea */ goto L_0043f0ea;
L_0043e726:; BB(0x0043e726);
    /* 0043e726: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0043e728: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043e72b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043e72d: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043e730: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0043e733: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43e735u); call_ind(t); }
    /* 0043e735: mov ecx, dword ptr [0x7906ec] */ r_ecx = R32((u32)(0x7906ecu));
    /* 0043e73b: add ecx, 0x8c */ {  u32 a = r_ecx; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043e741: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e742: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e743: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0043e749: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043e74c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e74d: fld1  */ FPUSH(1.0);
    /* 0043e74f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043e752: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e754: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e756: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e758: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043e75b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e75c: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043e75f: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 0043e762: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e763: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0043e769: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043e76b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0043e771: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 0043e777: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x43e779u); call_ind(t); }
    /* 0043e779: jmp 0x43f0ea */ goto L_0043f0ea;
L_0043e77e:; BB(0x0043e77e);
    /* 0043e77e: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0043e780: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043e783: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043e785: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043e788: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0043e78b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43e78du); call_ind(t); }
    /* 0043e78d: mov ecx, dword ptr [0x7906ec] */ r_ecx = R32((u32)(0x7906ecu));
    /* 0043e793: add ecx, 0x88 */ {  u32 a = r_ecx; u32 b = 0x88u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043e799: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e79a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e79b: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0043e7a1: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043e7a4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e7a5: fld1  */ FPUSH(1.0);
    /* 0043e7a7: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043e7aa: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e7ac: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e7ae: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e7b0: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043e7b3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e7b4: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043e7b7: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 0043e7ba: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e7bb: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0043e7c1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043e7c3: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0043e7c9: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 0043e7cf: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x43e7d1u); call_ind(t); }
    /* 0043e7d1: jmp 0x43f0ea */ goto L_0043f0ea;
L_0043e7d6:; BB(0x0043e7d6);
    /* 0043e7d6: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0043e7d8: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043e7db: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043e7dd: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043e7e0: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0043e7e3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43e7e5u); call_ind(t); }
    /* 0043e7e5: mov ecx, dword ptr [0x7906ec] */ r_ecx = R32((u32)(0x7906ecu));
    /* 0043e7eb: add ecx, 0x8c */ {  u32 a = r_ecx; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043e7f1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e7f2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e7f3: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0043e7f9: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043e7fc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e7fd: fld1  */ FPUSH(1.0);
    /* 0043e7ff: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043e802: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e804: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e806: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e808: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043e80b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e80c: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043e80f: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 0043e812: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e813: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0043e819: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043e81b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0043e821: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 0043e827: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x43e829u); call_ind(t); }
    /* 0043e829: jmp 0x43f0ea */ goto L_0043f0ea;
L_0043e82e:; BB(0x0043e82e);
    /* 0043e82e: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043e831: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0043e834: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0043e837: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043e83a: mov byte ptr [edx + 0x188], 0 */ W8((u32)(r_edx+0x188u), 0x0u);
    /* 0043e841: jmp 0x43f0ea */ goto L_0043f0ea;
L_0043e846:; BB(0x0043e846);
    /* 0043e846: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e848: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043e84b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043e84d: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043e850: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0043e853: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43e855u); call_ind(t); }
    /* 0043e855: mov ecx, dword ptr [0x7906ec] */ r_ecx = R32((u32)(0x7906ecu));
    /* 0043e85b: add ecx, 0x88 */ {  u32 a = r_ecx; u32 b = 0x88u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043e861: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e862: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e863: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0043e869: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043e86c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e86d: fld1  */ FPUSH(1.0);
    /* 0043e86f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043e872: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e874: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e876: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e878: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043e87b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e87c: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043e87f: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0043e882: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e883: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0043e889: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043e88b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0043e891: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 0043e897: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x43e899u); call_ind(t); }
    /* 0043e899: jmp 0x43f0ea */ goto L_0043f0ea;
L_0043e89e:; BB(0x0043e89e);
    /* 0043e89e: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e8a0: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043e8a3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043e8a5: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043e8a8: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0043e8ab: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43e8adu); call_ind(t); }
    /* 0043e8ad: mov ecx, dword ptr [0x7906ec] */ r_ecx = R32((u32)(0x7906ecu));
    /* 0043e8b3: add ecx, 0x8c */ {  u32 a = r_ecx; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043e8b9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e8ba: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e8bb: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0043e8c1: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043e8c4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e8c5: fld1  */ FPUSH(1.0);
    /* 0043e8c7: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043e8ca: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e8cc: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e8ce: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e8d0: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043e8d3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e8d4: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043e8d7: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0043e8da: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e8db: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0043e8e1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043e8e3: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0043e8e9: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 0043e8ef: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x43e8f1u); call_ind(t); }
    /* 0043e8f1: jmp 0x43f0ea */ goto L_0043f0ea;
L_0043e8f6:; BB(0x0043e8f6);
    /* 0043e8f6: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e8f8: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043e8fb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043e8fd: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043e900: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0043e903: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43e905u); call_ind(t); }
    /* 0043e905: mov ecx, dword ptr [0x7906ec] */ r_ecx = R32((u32)(0x7906ecu));
    /* 0043e90b: add ecx, 0x88 */ {  u32 a = r_ecx; u32 b = 0x88u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043e911: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e912: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e913: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0043e919: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043e91c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e91d: fld1  */ FPUSH(1.0);
    /* 0043e91f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043e922: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e924: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e926: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e928: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043e92b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e92c: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043e92f: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0043e932: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e933: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0043e939: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043e93b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0043e941: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 0043e947: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x43e949u); call_ind(t); }
    /* 0043e949: jmp 0x43f0ea */ goto L_0043f0ea;
L_0043e94e:; BB(0x0043e94e);
    /* 0043e94e: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e950: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043e953: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043e955: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043e958: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0043e95b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43e95du); call_ind(t); }
    /* 0043e95d: mov ecx, dword ptr [0x7906ec] */ r_ecx = R32((u32)(0x7906ecu));
    /* 0043e963: add ecx, 0x8c */ {  u32 a = r_ecx; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043e969: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e96a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e96b: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0043e971: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043e974: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e975: fld1  */ FPUSH(1.0);
    /* 0043e977: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043e97a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e97c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e97e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e980: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043e983: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e984: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043e987: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0043e98a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e98b: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0043e991: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043e993: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0043e999: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 0043e99f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x43e9a1u); call_ind(t); }
    /* 0043e9a1: jmp 0x43f0ea */ goto L_0043f0ea;
L_0043e9a6:; BB(0x0043e9a6);
    /* 0043e9a6: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043e9a9: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0043e9ac: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0043e9af: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043e9b2: mov byte ptr [edx + 0x188], 0 */ W8((u32)(r_edx+0x188u), 0x0u);
    /* 0043e9b9: jmp 0x43f0ea */ goto L_0043f0ea;
L_0043e9be:; BB(0x0043e9be);
    /* 0043e9be: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e9c0: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043e9c3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043e9c5: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043e9c8: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0043e9cb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43e9cdu); call_ind(t); }
    /* 0043e9cd: mov ecx, dword ptr [0x7906ec] */ r_ecx = R32((u32)(0x7906ecu));
    /* 0043e9d3: add ecx, 0x88 */ {  u32 a = r_ecx; u32 b = 0x88u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043e9d9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e9da: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e9db: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0043e9e1: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043e9e4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e9e5: fld1  */ FPUSH(1.0);
    /* 0043e9e7: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043e9ea: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e9ec: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e9ee: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e9f0: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043e9f3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e9f4: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043e9f7: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0043e9fa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e9fb: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0043ea01: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043ea03: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0043ea09: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 0043ea0f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x43ea11u); call_ind(t); }
    /* 0043ea11: jmp 0x43f0ea */ goto L_0043f0ea;
L_0043ea16:; BB(0x0043ea16);
    /* 0043ea16: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ea18: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043ea1b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043ea1d: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043ea20: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0043ea23: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43ea25u); call_ind(t); }
    /* 0043ea25: mov ecx, dword ptr [0x7906ec] */ r_ecx = R32((u32)(0x7906ecu));
    /* 0043ea2b: add ecx, 0x8c */ {  u32 a = r_ecx; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043ea31: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ea32: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ea33: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0043ea39: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043ea3c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ea3d: fld1  */ FPUSH(1.0);
    /* 0043ea3f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043ea42: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ea44: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ea46: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ea48: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043ea4b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ea4c: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043ea4f: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0043ea52: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ea53: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0043ea59: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043ea5b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0043ea61: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 0043ea67: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x43ea69u); call_ind(t); }
    /* 0043ea69: jmp 0x43f0ea */ goto L_0043f0ea;
L_0043ea6e:; BB(0x0043ea6e);
    /* 0043ea6e: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ea70: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043ea73: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043ea75: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043ea78: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0043ea7b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43ea7du); call_ind(t); }
    /* 0043ea7d: mov ecx, dword ptr [0x7906ec] */ r_ecx = R32((u32)(0x7906ecu));
    /* 0043ea83: add ecx, 0x88 */ {  u32 a = r_ecx; u32 b = 0x88u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043ea89: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ea8a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ea8b: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0043ea91: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043ea94: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ea95: fld1  */ FPUSH(1.0);
    /* 0043ea97: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043ea9a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ea9c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ea9e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043eaa0: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043eaa3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043eaa4: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043eaa7: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0043eaaa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043eaab: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0043eab1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043eab3: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0043eab9: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 0043eabf: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x43eac1u); call_ind(t); }
    /* 0043eac1: jmp 0x43f0ea */ goto L_0043f0ea;
L_0043eac6:; BB(0x0043eac6);
    /* 0043eac6: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0043eac8: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043eacb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043eacd: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043ead0: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0043ead3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43ead5u); call_ind(t); }
    /* 0043ead5: mov ecx, dword ptr [0x7906ec] */ r_ecx = R32((u32)(0x7906ecu));
    /* 0043eadb: add ecx, 0x8c */ {  u32 a = r_ecx; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043eae1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043eae2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043eae3: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0043eae9: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043eaec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043eaed: fld1  */ FPUSH(1.0);
    /* 0043eaef: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043eaf2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043eaf4: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0043eaf6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043eaf8: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043eafb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043eafc: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043eaff: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0043eb02: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043eb03: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0043eb09: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043eb0b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0043eb11: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 0043eb17: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x43eb19u); call_ind(t); }
    /* 0043eb19: jmp 0x43f0ea */ goto L_0043f0ea;
L_0043eb1e:; BB(0x0043eb1e);
    /* 0043eb1e: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043eb21: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0043eb24: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0043eb27: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043eb2a: mov byte ptr [edx + 0x188], 0 */ W8((u32)(r_edx+0x188u), 0x0u);
    /* 0043eb31: jmp 0x43f0ea */ goto L_0043f0ea;
L_0043eb36:; BB(0x0043eb36);
    /* 0043eb36: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 0043eb38: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043eb3b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043eb3d: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043eb40: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0043eb43: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43eb45u); call_ind(t); }
    /* 0043eb45: mov ecx, dword ptr [0x7906ec] */ r_ecx = R32((u32)(0x7906ecu));
    /* 0043eb4b: add ecx, 0x88 */ {  u32 a = r_ecx; u32 b = 0x88u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043eb51: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043eb52: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043eb53: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0043eb59: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043eb5c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043eb5d: fld1  */ FPUSH(1.0);
    /* 0043eb5f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043eb62: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043eb64: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0043eb66: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043eb68: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043eb6b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043eb6c: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043eb6f: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0043eb72: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043eb73: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0043eb79: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043eb7b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0043eb81: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 0043eb87: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x43eb89u); call_ind(t); }
    /* 0043eb89: jmp 0x43f0ea */ goto L_0043f0ea;
L_0043eb8e:; BB(0x0043eb8e);
    /* 0043eb8e: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0043eb90: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043eb93: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043eb95: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043eb98: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0043eb9b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43eb9du); call_ind(t); }
    /* 0043eb9d: mov ecx, dword ptr [0x7906ec] */ r_ecx = R32((u32)(0x7906ecu));
    /* 0043eba3: add ecx, 0x8c */ {  u32 a = r_ecx; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043eba9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ebaa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ebab: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0043ebb1: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043ebb4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ebb5: fld1  */ FPUSH(1.0);
    /* 0043ebb7: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043ebba: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ebbc: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ebbe: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ebc0: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043ebc3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ebc4: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043ebc7: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0043ebca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ebcb: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0043ebd1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043ebd3: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0043ebd9: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 0043ebdf: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x43ebe1u); call_ind(t); }
    /* 0043ebe1: jmp 0x43f0ea */ goto L_0043f0ea;
L_0043ebe6:; BB(0x0043ebe6);
    /* 0043ebe6: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 0043ebe8: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043ebeb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043ebed: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043ebf0: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0043ebf3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43ebf5u); call_ind(t); }
    /* 0043ebf5: mov ecx, dword ptr [0x7906ec] */ r_ecx = R32((u32)(0x7906ecu));
    /* 0043ebfb: add ecx, 0x88 */ {  u32 a = r_ecx; u32 b = 0x88u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043ec01: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ec02: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ec03: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0043ec09: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043ec0c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ec0d: fld1  */ FPUSH(1.0);
    /* 0043ec0f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043ec12: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ec14: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ec16: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ec18: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043ec1b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ec1c: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043ec1f: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0043ec22: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ec23: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0043ec29: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043ec2b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0043ec31: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 0043ec37: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x43ec39u); call_ind(t); }
    /* 0043ec39: jmp 0x43f0ea */ goto L_0043f0ea;
L_0043ec3e:; BB(0x0043ec3e);
    /* 0043ec3e: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0043ec40: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043ec43: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043ec45: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043ec48: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0043ec4b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43ec4du); call_ind(t); }
    /* 0043ec4d: mov ecx, dword ptr [0x7906ec] */ r_ecx = R32((u32)(0x7906ecu));
    /* 0043ec53: add ecx, 0x8c */ {  u32 a = r_ecx; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043ec59: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ec5a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ec5b: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0043ec61: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043ec64: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ec65: fld1  */ FPUSH(1.0);
    /* 0043ec67: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043ec6a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ec6c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ec6e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ec70: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043ec73: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ec74: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043ec77: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0043ec7a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ec7b: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0043ec81: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043ec83: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0043ec89: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 0043ec8f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x43ec91u); call_ind(t); }
    /* 0043ec91: jmp 0x43f0ea */ goto L_0043f0ea;
L_0043ec96:; BB(0x0043ec96);
    /* 0043ec96: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043ec99: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0043ec9c: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0043ec9f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043eca2: mov byte ptr [edx + 0x188], 0 */ W8((u32)(r_edx+0x188u), 0x0u);
    /* 0043eca9: jmp 0x43f0ea */ goto L_0043f0ea;
L_0043ecae:; BB(0x0043ecae);
    /* 0043ecae: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ecb0: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043ecb3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043ecb5: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043ecb8: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0043ecbb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43ecbdu); call_ind(t); }
    /* 0043ecbd: mov ecx, dword ptr [0x7906ec] */ r_ecx = R32((u32)(0x7906ecu));
    /* 0043ecc3: add ecx, 0x88 */ {  u32 a = r_ecx; u32 b = 0x88u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043ecc9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ecca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043eccb: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0043ecd1: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043ecd4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ecd5: fld1  */ FPUSH(1.0);
    /* 0043ecd7: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043ecda: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ecdc: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ecde: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ece0: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043ece3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ece4: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043ece7: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0043ecea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043eceb: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0043ecf1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043ecf3: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0043ecf9: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 0043ecff: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x43ed01u); call_ind(t); }
    /* 0043ed01: jmp 0x43f0ea */ goto L_0043f0ea;
L_0043ed06:; BB(0x0043ed06);
    /* 0043ed06: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ed08: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043ed0b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043ed0d: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043ed10: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0043ed13: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43ed15u); call_ind(t); }
    /* 0043ed15: mov ecx, dword ptr [0x7906ec] */ r_ecx = R32((u32)(0x7906ecu));
    /* 0043ed1b: add ecx, 0x8c */ {  u32 a = r_ecx; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043ed21: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ed22: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ed23: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0043ed29: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043ed2c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ed2d: fld1  */ FPUSH(1.0);
    /* 0043ed2f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043ed32: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ed34: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ed36: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ed38: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043ed3b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ed3c: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043ed3f: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0043ed42: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ed43: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0043ed49: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043ed4b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0043ed51: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 0043ed57: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x43ed59u); call_ind(t); }
    /* 0043ed59: jmp 0x43f0ea */ goto L_0043f0ea;
L_0043ed5e:; BB(0x0043ed5e);
    /* 0043ed5e: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043ed61: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0043ed64: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0043ed67: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043ed6a: mov byte ptr [edx + 0x188], 0 */ W8((u32)(r_edx+0x188u), 0x0u);
    /* 0043ed71: jmp 0x43f0ea */ goto L_0043f0ea;
L_0043ed76:; BB(0x0043ed76);
    /* 0043ed76: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ed78: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043ed7b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043ed7d: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043ed80: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0043ed83: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43ed85u); call_ind(t); }
    /* 0043ed85: mov ecx, dword ptr [0x7906f4] */ r_ecx = R32((u32)(0x7906f4u));
    /* 0043ed8b: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0043ed8e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ed90: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0043ed96: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 0043ed99: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x43ed9eu); f_005fb300();
    /* 0043ed9e: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0043eda1: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0043eda4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043eda6: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0043eda9: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 0043edaf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43edb1u); call_ind(t); }
    /* 0043edb1: mov ecx, dword ptr [0x7906ec] */ r_ecx = R32((u32)(0x7906ecu));
    /* 0043edb7: add ecx, 0x88 */ {  u32 a = r_ecx; u32 b = 0x88u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043edbd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043edbe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043edbf: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0043edc5: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043edc8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043edc9: fld1  */ FPUSH(1.0);
    /* 0043edcb: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043edce: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043edd0: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0043edd2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043edd4: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043edd7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043edd8: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043eddb: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0043edde: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043eddf: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0043ede5: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043ede7: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0043eded: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 0043edf3: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x43edf5u); call_ind(t); }
    /* 0043edf5: jmp 0x43f0ea */ goto L_0043f0ea;
L_0043edfa:; BB(0x0043edfa);
    /* 0043edfa: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043edfd: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0043ee00: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0043ee03: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043ee06: mov byte ptr [edx + 0x188], 0 */ W8((u32)(r_edx+0x188u), 0x0u);
    /* 0043ee0d: mov eax, dword ptr [0x7906f4] */ r_eax = R32((u32)(0x7906f4u));
    /* 0043ee12: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0043ee15: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ee17: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0043ee1d: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 0043ee20: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x43ee25u); f_005fb300();
    /* 0043ee25: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0043ee28: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0043ee2b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043ee2d: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0043ee30: mov edx, dword ptr [eax + 0xcc] */ r_edx = R32((u32)(r_eax+0xccu));
    /* 0043ee36: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x43ee38u); call_ind(t); }
    /* 0043ee38: jmp 0x43f0ea */ goto L_0043f0ea;
L_0043ee3d:; BB(0x0043ee3d);
    /* 0043ee3d: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ee3f: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043ee42: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043ee44: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043ee47: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0043ee4a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43ee4cu); call_ind(t); }
    /* 0043ee4c: mov ecx, dword ptr [0x7906ec] */ r_ecx = R32((u32)(0x7906ecu));
    /* 0043ee52: add ecx, 0x88 */ {  u32 a = r_ecx; u32 b = 0x88u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043ee58: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ee59: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ee5a: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0043ee60: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043ee63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ee64: fld1  */ FPUSH(1.0);
    /* 0043ee66: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043ee69: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ee6b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ee6d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ee6f: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043ee72: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ee73: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043ee76: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0043ee79: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ee7a: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0043ee80: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043ee82: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0043ee88: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 0043ee8e: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x43ee90u); call_ind(t); }
    /* 0043ee90: jmp 0x43f0ea */ goto L_0043f0ea;
L_0043ee95:; BB(0x0043ee95);
    /* 0043ee95: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ee97: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043ee9a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043ee9c: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043ee9f: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0043eea2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43eea4u); call_ind(t); }
    /* 0043eea4: mov ecx, dword ptr [0x7906ec] */ r_ecx = R32((u32)(0x7906ecu));
    /* 0043eeaa: add ecx, 0x8c */ {  u32 a = r_ecx; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043eeb0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043eeb1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043eeb2: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0043eeb8: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043eebb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043eebc: fld1  */ FPUSH(1.0);
    /* 0043eebe: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043eec1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043eec3: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0043eec5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043eec7: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043eeca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043eecb: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043eece: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0043eed1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043eed2: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0043eed8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043eeda: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0043eee0: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 0043eee6: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x43eee8u); call_ind(t); }
    /* 0043eee8: jmp 0x43f0ea */ goto L_0043f0ea;
L_0043eeed:; BB(0x0043eeed);
    /* 0043eeed: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 0043eeef: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043eef2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043eef4: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043eef7: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0043eefa: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43eefcu); call_ind(t); }
    /* 0043eefc: mov ecx, dword ptr [0x7906ec] */ r_ecx = R32((u32)(0x7906ecu));
    /* 0043ef02: add ecx, 0x88 */ {  u32 a = r_ecx; u32 b = 0x88u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043ef08: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ef09: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ef0a: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0043ef10: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043ef13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ef14: fld1  */ FPUSH(1.0);
    /* 0043ef16: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043ef19: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ef1b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ef1d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ef1f: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043ef22: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ef23: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043ef26: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0043ef29: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ef2a: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0043ef30: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043ef32: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0043ef38: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 0043ef3e: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x43ef40u); call_ind(t); }
    /* 0043ef40: jmp 0x43f0ea */ goto L_0043f0ea;
L_0043ef45:; BB(0x0043ef45);
    /* 0043ef45: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ef47: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043ef4a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043ef4c: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043ef4f: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0043ef52: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43ef54u); call_ind(t); }
    /* 0043ef54: mov ecx, dword ptr [0x7906ec] */ r_ecx = R32((u32)(0x7906ecu));
    /* 0043ef5a: add ecx, 0x8c */ {  u32 a = r_ecx; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043ef60: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ef61: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ef62: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0043ef68: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043ef6b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ef6c: fld1  */ FPUSH(1.0);
    /* 0043ef6e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043ef71: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ef73: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ef75: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ef77: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043ef7a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ef7b: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043ef7e: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0043ef81: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ef82: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0043ef88: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043ef8a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0043ef90: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 0043ef96: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x43ef98u); call_ind(t); }
    /* 0043ef98: jmp 0x43f0ea */ goto L_0043f0ea;
L_0043ef9d:; BB(0x0043ef9d);
    /* 0043ef9d: push 0x29 */ { u32 v = 0x29u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ef9f: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043efa2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043efa4: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043efa7: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0043efaa: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43efacu); call_ind(t); }
    /* 0043efac: mov ecx, dword ptr [0x7906ec] */ r_ecx = R32((u32)(0x7906ecu));
    /* 0043efb2: add ecx, 0x88 */ {  u32 a = r_ecx; u32 b = 0x88u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043efb8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043efb9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043efba: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0043efc0: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043efc3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043efc4: fld1  */ FPUSH(1.0);
    /* 0043efc6: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043efc9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043efcb: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0043efcd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043efcf: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043efd2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043efd3: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043efd6: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0043efd9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043efda: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0043efe0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043efe2: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0043efe8: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 0043efee: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x43eff0u); call_ind(t); }
    /* 0043eff0: jmp 0x43f0ea */ goto L_0043f0ea;
L_0043eff5:; BB(0x0043eff5);
    /* 0043eff5: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 0043eff7: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043effa: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043effc: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043efff: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0043f002: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43f004u); call_ind(t); }
    /* 0043f004: mov ecx, dword ptr [0x7906ec] */ r_ecx = R32((u32)(0x7906ecu));
    /* 0043f00a: add ecx, 0x8c */ {  u32 a = r_ecx; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043f010: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043f011: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043f012: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0043f018: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043f01b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043f01c: fld1  */ FPUSH(1.0);
    /* 0043f01e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043f021: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043f023: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0043f025: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043f027: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043f02a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043f02b: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043f02e: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0043f031: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043f032: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0043f038: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043f03a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0043f040: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 0043f046: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x43f048u); call_ind(t); }
    /* 0043f048: jmp 0x43f0ea */ goto L_0043f0ea;
L_0043f04d:; BB(0x0043f04d);
    /* 0043f04d: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043f050: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0043f053: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0043f056: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0043f059: mov byte ptr [edx + 0x188], 0 */ W8((u32)(r_edx+0x188u), 0x0u);
    /* 0043f060: jmp 0x43f0ea */ goto L_0043f0ea;
L_0043f065:; BB(0x0043f065);
    /* 0043f065: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0043f067: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043f06a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043f06c: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043f06f: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0043f072: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43f074u); call_ind(t); }
    /* 0043f074: mov ecx, dword ptr [0x7906ec] */ r_ecx = R32((u32)(0x7906ecu));
    /* 0043f07a: add ecx, 0x88 */ {  u32 a = r_ecx; u32 b = 0x88u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043f080: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043f081: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043f082: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0043f088: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043f08b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043f08c: fld1  */ FPUSH(1.0);
    /* 0043f08e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043f091: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043f093: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0043f095: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043f097: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043f09a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043f09b: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043f09e: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0043f0a1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043f0a2: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0043f0a8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043f0aa: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0043f0b0: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 0043f0b6: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x43f0b8u); call_ind(t); }
    /* 0043f0b8: jmp 0x43f0ea */ goto L_0043f0ea;
L_0043f0ba:; BB(0x0043f0ba);
    /* 0043f0ba: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043f0bd: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0043f0c0: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0043f0c3: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0043f0c6: mov byte ptr [edx + 0x188], 0 */ W8((u32)(r_edx+0x188u), 0x0u);
    /* 0043f0cd: jmp 0x43f0ea */ goto L_0043f0ea;
L_0043f0cf:; BB(0x0043f0cf);
    /* 0043f0cf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0043f0d1: jne 0x43f0ea */ if (!fZ) goto L_0043f0ea;
L_0043f0d3:; BB(0x0043f0d3);
    /* 0043f0d3: push 0x330 */ { u32 v = 0x330u; r_esp -= 4; W32(r_esp, v); }
    /* 0043f0d8: push 0x6b82b4 */ { u32 v = 0x6b82b4u; r_esp -= 4; W32(r_esp, v); }
    /* 0043f0dd: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 0043f0e2: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x43f0e7u); f_005e9f20();
    /* 0043f0e7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0043f0ea:; BB(0x0043f0ea);
    /* 0043f0ea: mov esp, ebp */ r_esp = r_ebp;
    /* 0043f0ec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043f0ed: ret  */ FN_RET(0x0043e310); r_esp += 4; return;
}

