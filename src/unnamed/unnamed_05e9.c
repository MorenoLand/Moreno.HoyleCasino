#include "protos.h"

void f_005e9090(void) /* sub_5E9090 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e9090);
    /* 005e9090: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e9091: mov ebp, esp */ r_ebp = r_esp;
    /* 005e9093: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e9096: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005e9099: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e90a0: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005e90a2: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005e90a7: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005e90aa: call 0x5fb3a0 */ r_esp -= 4; W32(r_esp, 0x5e90afu); f_005fb3a0();
    /* 005e90af: mov ecx, eax */ r_ecx = r_eax;
    /* 005e90b1: call 0x606490 */ r_esp -= 4; W32(r_esp, 0x5e90b6u); f_00606490();
    /* 005e90b6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005e90b9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e90bc: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005e90bf: cmp dword ptr [ebp - 0xc], 0xb */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005e90c3: ja 0x5e9123 */ if ((!fC&&!fZ)) goto L_005e9123;
L_005e90c5:; BB(0x005e90c5);
    /* 005e90c5: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e90c8: jmp dword ptr [edx*4 + 0x5e912c] */ { u32 t = R32((u32)(r_edx*4+0x5e912cu)); switch (t) { case 0x5e90cfu: goto L_005e90cf; case 0x5e90d6u: goto L_005e90d6; case 0x5e90ddu: goto L_005e90dd; case 0x5e90e4u: goto L_005e90e4; case 0x5e90ebu: goto L_005e90eb; case 0x5e90f2u: goto L_005e90f2; case 0x5e90f9u: goto L_005e90f9; case 0x5e9100u: goto L_005e9100; case 0x5e9107u: goto L_005e9107; case 0x5e910eu: goto L_005e910e; case 0x5e9115u: goto L_005e9115; case 0x5e911cu: goto L_005e911c; default: UNSUP(0x005e90c8, "jump table entry is not a known target"); } }
L_005e90cf:; BB(0x005e90cf);
    /* 005e90cf: mov eax, 0x30ef7c */ r_eax = 0x30ef7cu;
    /* 005e90d4: jmp 0x5e9128 */ goto L_005e9128;
L_005e90d6:; BB(0x005e90d6);
    /* 005e90d6: mov eax, 0x30ef7d */ r_eax = 0x30ef7du;
    /* 005e90db: jmp 0x5e9128 */ goto L_005e9128;
L_005e90dd:; BB(0x005e90dd);
    /* 005e90dd: mov eax, 0x30ef7e */ r_eax = 0x30ef7eu;
    /* 005e90e2: jmp 0x5e9128 */ goto L_005e9128;
L_005e90e4:; BB(0x005e90e4);
    /* 005e90e4: mov eax, 0x30ef7f */ r_eax = 0x30ef7fu;
    /* 005e90e9: jmp 0x5e9128 */ goto L_005e9128;
L_005e90eb:; BB(0x005e90eb);
    /* 005e90eb: mov eax, 0x30ef80 */ r_eax = 0x30ef80u;
    /* 005e90f0: jmp 0x5e9128 */ goto L_005e9128;
L_005e90f2:; BB(0x005e90f2);
    /* 005e90f2: mov eax, 0x30ef81 */ r_eax = 0x30ef81u;
    /* 005e90f7: jmp 0x5e9128 */ goto L_005e9128;
L_005e90f9:; BB(0x005e90f9);
    /* 005e90f9: mov eax, 0x30ef82 */ r_eax = 0x30ef82u;
    /* 005e90fe: jmp 0x5e9128 */ goto L_005e9128;
L_005e9100:; BB(0x005e9100);
    /* 005e9100: mov eax, 0x30ef83 */ r_eax = 0x30ef83u;
    /* 005e9105: jmp 0x5e9128 */ goto L_005e9128;
L_005e9107:; BB(0x005e9107);
    /* 005e9107: mov eax, 0x30ef84 */ r_eax = 0x30ef84u;
    /* 005e910c: jmp 0x5e9128 */ goto L_005e9128;
L_005e910e:; BB(0x005e910e);
    /* 005e910e: mov eax, 0x30ef85 */ r_eax = 0x30ef85u;
    /* 005e9113: jmp 0x5e9128 */ goto L_005e9128;
L_005e9115:; BB(0x005e9115);
    /* 005e9115: mov eax, 0x30ef86 */ r_eax = 0x30ef86u;
    /* 005e911a: jmp 0x5e9128 */ goto L_005e9128;
L_005e911c:; BB(0x005e911c);
    /* 005e911c: mov eax, 0x30ef87 */ r_eax = 0x30ef87u;
    /* 005e9121: jmp 0x5e9128 */ goto L_005e9128;
L_005e9123:; BB(0x005e9123);
    /* 005e9123: mov eax, 0x30ef7f */ r_eax = 0x30ef7fu;
L_005e9128:; BB(0x005e9128);
    /* 005e9128: mov esp, ebp */ r_esp = r_ebp;
    /* 005e912a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e912b: ret  */ FN_RET(0x005e9090); r_esp += 4; return;
}

void f_005e9160(void) /* sub_5E9160 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e9160);
    /* 005e9160: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e9161: mov ebp, esp */ r_ebp = r_esp;
    /* 005e9163: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e9166: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005e9169: cmp dword ptr [ebp + 8], 0xc8 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xc8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e9170: jne 0x5e91a2 */ if (!fZ) goto L_005e91a2;
L_005e9172:; BB(0x005e9172);
    /* 005e9172: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e9175: call 0x5e8de0 */ r_esp -= 4; W32(r_esp, 0x5e917au); f_005e8de0();
    /* 005e917a: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005e917d: cmp dword ptr [ebp - 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e9181: je 0x5e91a2 */ if (fZ) goto L_005e91a2;
L_005e9183:; BB(0x005e9183);
    /* 005e9183: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e9186: call 0x5e8de0 */ r_esp -= 4; W32(r_esp, 0x5e918bu); f_005e8de0();
    /* 005e918b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e918c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e918f: call 0x5e9090 */ r_esp -= 4; W32(r_esp, 0x5e9194u); f_005e9090();
    /* 005e9194: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e9195: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e9198: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e919a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e919d: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005e91a0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e91a2u); call_ind(t); }
L_005e91a2:; BB(0x005e91a2);
    /* 005e91a2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e91a4: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005e91aa: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005e91ad: call 0x5fb3a0 */ r_esp -= 4; W32(r_esp, 0x5e91b2u); f_005fb3a0();
    /* 005e91b2: mov ecx, eax */ r_ecx = r_eax;
    /* 005e91b4: call 0x606490 */ r_esp -= 4; W32(r_esp, 0x5e91b9u); f_00606490();
    /* 005e91b9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e91bc: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005e91bf: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005e91c6: jmp 0x5e91d1 */ goto L_005e91d1;
L_005e91c8:; BB(0x005e91c8);
    /* 005e91c8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e91cb: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e91ce: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_005e91d1:; BB(0x005e91d1);
    /* 005e91d1: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e91d5: jge 0x5e923d */ if ((fS==fO)) goto L_005e923d;
L_005e91d7:; BB(0x005e91d7);
    /* 005e91d7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e91da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e91db: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005e91e1: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005e91e4: call 0x5fb3a0 */ r_esp -= 4; W32(r_esp, 0x5e91e9u); f_005fb3a0();
    /* 005e91e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e91eb: je 0x5e923b */ if (fZ) goto L_005e923b;
L_005e91ed:; BB(0x005e91ed);
    /* 005e91ed: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e91f0: cmp edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e91f3: jne 0x5e9219 */ if (!fZ) goto L_005e9219;
L_005e91f5:; BB(0x005e91f5);
    /* 005e91f5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e91f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e91f9: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005e91ff: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005e9202: call 0x5fb3a0 */ r_esp -= 4; W32(r_esp, 0x5e9207u); f_005fb3a0();
    /* 005e9207: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005e920a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e920d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e920f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e9212: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 005e9215: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5e9217u); call_ind(t); }
    /* 005e9217: jmp 0x5e923b */ goto L_005e923b;
L_005e9219:; BB(0x005e9219);
    /* 005e9219: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e921c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e921d: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005e9223: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005e9226: call 0x5fb3a0 */ r_esp -= 4; W32(r_esp, 0x5e922bu); f_005fb3a0();
    /* 005e922b: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005e922e: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e9231: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e9233: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e9236: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 005e9239: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5e923bu); call_ind(t); }
L_005e923b:; BB(0x005e923b);
    /* 005e923b: jmp 0x5e91c8 */ goto L_005e91c8;
L_005e923d:; BB(0x005e923d);
    /* 005e923d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e9240: call 0x5e9250 */ r_esp -= 4; W32(r_esp, 0x5e9245u); f_005e9250();
    /* 005e9245: mov esp, ebp */ r_esp = r_ebp;
    /* 005e9247: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e9248: ret 4 */ FN_RET(0x005e9160); r_esp += 8; return;
}

void f_005e9250(void) /* sub_5E9250 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e9250);
    /* 005e9250: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e9251: mov ebp, esp */ r_ebp = r_esp;
    /* 005e9253: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e9256: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005e9259: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e925b: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005e9260: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005e9263: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x5e9268u); f_005fb2b0();
    /* 005e9268: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005e926b: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e926f: jne 0x5e9276 */ if (!fZ) goto L_005e9276;
L_005e9271:; BB(0x005e9271);
    /* 005e9271: jmp 0x5e93d9 */ goto L_005e93d9;
L_005e9276:; BB(0x005e9276);
    /* 005e9276: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9278: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005e927e: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005e9281: call 0x5fb3a0 */ r_esp -= 4; W32(r_esp, 0x5e9286u); f_005fb3a0();
    /* 005e9286: mov ecx, eax */ r_ecx = r_eax;
    /* 005e9288: call 0x606490 */ r_esp -= 4; W32(r_esp, 0x5e928du); f_00606490();
    /* 005e928d: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005e9290: mov dword ptr [ebp - 0x14], 0x30d642 */ W32((u32)(r_ebp+0xffffffecu), 0x30d642u);
    /* 005e9297: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e929a: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 005e929d: cmp dword ptr [ebp - 0x28], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005e92a1: ja 0x5e92cf */ if ((!fC&&!fZ)) goto L_005e92cf;
L_005e92a3:; BB(0x005e92a3);
    /* 005e92a3: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005e92a6: jmp dword ptr [eax*4 + 0x5e93e0] */ { u32 t = R32((u32)(r_eax*4+0x5e93e0u)); switch (t) { case 0x5e92adu: goto L_005e92ad; case 0x5e92b6u: goto L_005e92b6; case 0x5e92bfu: goto L_005e92bf; case 0x5e92c8u: goto L_005e92c8; default: UNSUP(0x005e92a6, "jump table entry is not a known target"); } }
L_005e92ad:; BB(0x005e92ad);
    /* 005e92ad: mov dword ptr [ebp - 0x14], 0x30d642 */ W32((u32)(r_ebp+0xffffffecu), 0x30d642u);
    /* 005e92b4: jmp 0x5e92cf */ goto L_005e92cf;
L_005e92b6:; BB(0x005e92b6);
    /* 005e92b6: mov dword ptr [ebp - 0x14], 0x30d643 */ W32((u32)(r_ebp+0xffffffecu), 0x30d643u);
    /* 005e92bd: jmp 0x5e92cf */ goto L_005e92cf;
L_005e92bf:; BB(0x005e92bf);
    /* 005e92bf: mov dword ptr [ebp - 0x14], 0x30d644 */ W32((u32)(r_ebp+0xffffffecu), 0x30d644u);
    /* 005e92c6: jmp 0x5e92cf */ goto L_005e92cf;
L_005e92c8:; BB(0x005e92c8);
    /* 005e92c8: mov dword ptr [ebp - 0x14], 0x30d628 */ W32((u32)(r_ebp+0xffffffecu), 0x30d628u);
L_005e92cf:; BB(0x005e92cf);
    /* 005e92cf: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e92d2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e92d3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e92d6: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x5e92dbu); f_005eaf00();
    /* 005e92db: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e92de: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e92e1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e92e2: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005e92e7: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005e92ea: call 0x5fb3a0 */ r_esp -= 4; W32(r_esp, 0x5e92efu); f_005fb3a0();
    /* 005e92ef: mov ecx, eax */ r_ecx = r_eax;
    /* 005e92f1: call 0x606490 */ r_esp -= 4; W32(r_esp, 0x5e92f6u); f_00606490();
    /* 005e92f6: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005e92f9: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e92fd: jne 0x5e937e */ if (!fZ) goto L_005e937e;
L_005e92ff:; BB(0x005e92ff);
    /* 005e92ff: cmp dword ptr [ebp - 0xc], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e9303: jl 0x5e9353 */ if ((fS!=fO)) goto L_005e9353;
L_005e9305:; BB(0x005e9305);
    /* 005e9305: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 005e930c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e930f: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005e9312: cmp dword ptr [ebp - 0x2c], 8 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e9316: je 0x5e9320 */ if (fZ) goto L_005e9320;
L_005e9318:; BB(0x005e9318);
    /* 005e9318: cmp dword ptr [ebp - 0x2c], 9 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e931c: je 0x5e9329 */ if (fZ) goto L_005e9329;
L_005e931e:; BB(0x005e931e);
    /* 005e931e: jmp 0x5e9330 */ goto L_005e9330;
L_005e9320:; BB(0x005e9320);
    /* 005e9320: mov dword ptr [ebp - 0x1c], 1 */ W32((u32)(r_ebp+0xffffffe4u), 0x1u);
    /* 005e9327: jmp 0x5e9330 */ goto L_005e9330;
L_005e9329:; BB(0x005e9329);
    /* 005e9329: mov dword ptr [ebp - 0x1c], 2 */ W32((u32)(r_ebp+0xffffffe4u), 0x2u);
L_005e9330:; BB(0x005e9330);
    /* 005e9330: push 0x30d62c */ { u32 v = 0x30d62cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e9335: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e9338: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x5e933du); f_005eaf00();
    /* 005e933d: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e9340: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e9341: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e9344: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e9346: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e9349: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005e934f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e9351u); call_ind(t); }
    /* 005e9351: jmp 0x5e937c */ goto L_005e937c;
L_005e9353:; BB(0x005e9353);
    /* 005e9353: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e9356: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005e9359: cmp dword ptr [ebp - 0xc], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e935d: jl 0x5e9368 */ if ((fS!=fO)) goto L_005e9368;
L_005e935f:; BB(0x005e935f);
    /* 005e935f: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e9362: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e9365: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
L_005e9368:; BB(0x005e9368);
    /* 005e9368: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e936b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e936c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e936f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e9371: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e9374: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005e937a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e937cu); call_ind(t); }
L_005e937c:; BB(0x005e937c);
    /* 005e937c: jmp 0x5e9392 */ goto L_005e9392;
L_005e937e:; BB(0x005e937e);
    /* 005e937e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e9381: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e9382: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e9385: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e9387: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e938a: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 005e9390: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5e9392u); call_ind(t); }
L_005e9392:; BB(0x005e9392);
    /* 005e9392: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9394: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005e9399: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005e939c: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x5e93a1u); f_005fb2b0();
    /* 005e93a1: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005e93a4: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 005e93ab: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005e93ad: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005e93b3: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005e93b6: call 0x5fb3a0 */ r_esp -= 4; W32(r_esp, 0x5e93bbu); f_005fb3a0();
    /* 005e93bb: mov ecx, eax */ r_ecx = r_eax;
    /* 005e93bd: call 0x606490 */ r_esp -= 4; W32(r_esp, 0x5e93c2u); f_00606490();
    /* 005e93c2: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005e93c5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e93c8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e93c9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e93cc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e93ce: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e93d1: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005e93d7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e93d9u); call_ind(t); }
L_005e93d9:; BB(0x005e93d9);
    /* 005e93d9: mov esp, ebp */ r_esp = r_ebp;
    /* 005e93db: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e93dc: ret  */ FN_RET(0x005e9250); r_esp += 4; return;
}

void f_005e93f0(void) /* sub_5E93F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e93f0);
    /* 005e93f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e93f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005e93f3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e93f6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e93f9: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 005e93fb: push 0x75ed74 */ { u32 v = 0x75ed74u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9400: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9402: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9404: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9407: call 0x5e97f0 */ r_esp -= 4; W32(r_esp, 0x5e940cu); f_005e97f0();
    /* 005e940c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e940e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9410: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005e9415: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005e9418: call 0x5fb3a0 */ r_esp -= 4; W32(r_esp, 0x5e941du); f_005fb3a0();
    /* 005e941d: mov ecx, eax */ r_ecx = r_eax;
    /* 005e941f: call 0x6064e0 */ r_esp -= 4; W32(r_esp, 0x5e9424u); f_006064e0();
    /* 005e9424: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9426: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e942b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e942d: push 0x7d0 */ { u32 v = 0x7d0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9432: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9434: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9436: push 0x30d602 */ { u32 v = 0x30d602u; r_esp -= 4; W32(r_esp, v); }
    /* 005e943b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e943d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e943f: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005e9445: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005e9448: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x5e944du); f_005f9ce0();
    /* 005e944d: push 0x136 */ { u32 v = 0x136u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9452: push 0x70 */ { u32 v = 0x70u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9454: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9457: call 0x5e9860 */ r_esp -= 4; W32(r_esp, 0x5e945cu); f_005e9860();
    /* 005e945c: push 0x172 */ { u32 v = 0x172u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9461: push 0x70 */ { u32 v = 0x70u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9463: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9466: call 0x5e9910 */ r_esp -= 4; W32(r_esp, 0x5e946bu); f_005e9910();
    /* 005e946b: push 0xd9 */ { u32 v = 0xd9u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9470: push 0x5d */ { u32 v = 0x5du; r_esp -= 4; W32(r_esp, v); }
    /* 005e9472: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9474: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9477: call 0x5e99c0 */ r_esp -= 4; W32(r_esp, 0x5e947cu); f_005e99c0();
    /* 005e947c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e947e: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005e9484: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 005e9487: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x5e948cu); f_005fb2b0();
    /* 005e948c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005e948f: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9491: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e9494: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e9496: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e9499: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005e949f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e94a1u); call_ind(t); }
    /* 005e94a1: mov esp, ebp */ r_esp = r_ebp;
    /* 005e94a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e94a4: ret  */ FN_RET(0x005e93f0); r_esp += 4; return;
}

void f_005e94b0(void) /* sub_5E94B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e94b0);
    /* 005e94b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e94b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005e94b3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e94b6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005e94b9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e94c0: jmp 0x5e94cb */ goto L_005e94cb;
L_005e94c2:; BB(0x005e94c2);
    /* 005e94c2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e94c5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e94c8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005e94cb:; BB(0x005e94cb);
    /* 005e94cb: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e94cf: jge 0x5e94f5 */ if ((fS==fO)) goto L_005e94f5;
L_005e94d1:; BB(0x005e94d1);
    /* 005e94d1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e94d3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e94d6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e94d7: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005e94dd: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 005e94e0: call 0x5fb3a0 */ r_esp -= 4; W32(r_esp, 0x5e94e5u); f_005fb3a0();
    /* 005e94e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e94e6: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005e94eb: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005e94ee: call 0x5fbd10 */ r_esp -= 4; W32(r_esp, 0x5e94f3u); f_005fbd10();
    /* 005e94f3: jmp 0x5e94c2 */ goto L_005e94c2;
L_005e94f5:; BB(0x005e94f5);
    /* 005e94f5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e94f7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e94f9: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005e94ff: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005e9502: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x5e9507u); f_005fb2b0();
    /* 005e9507: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e9508: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005e950e: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 005e9511: call 0x5fbc80 */ r_esp -= 4; W32(r_esp, 0x5e9516u); f_005fbc80();
    /* 005e9516: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e9518: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e951a: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005e951f: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005e9522: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x5e9527u); f_005fb2b0();
    /* 005e9527: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e9528: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005e952e: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005e9531: call 0x5fbc80 */ r_esp -= 4; W32(r_esp, 0x5e9536u); f_005fbc80();
    /* 005e9536: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e9538: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 005e953d: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005e9543: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 005e9546: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x5e954bu); f_005fb300();
    /* 005e954b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e954c: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005e9551: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005e9554: call 0x5fbcb0 */ r_esp -= 4; W32(r_esp, 0x5e9559u); f_005fbcb0();
    /* 005e9559: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e955b: push 0xc9 */ { u32 v = 0xc9u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9560: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005e9566: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005e9569: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x5e956eu); f_005fb300();
    /* 005e956e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e956f: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005e9575: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 005e9578: call 0x5fbcb0 */ r_esp -= 4; W32(r_esp, 0x5e957du); f_005fbcb0();
    /* 005e957d: mov esp, ebp */ r_esp = r_ebp;
    /* 005e957f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e9580: ret  */ FN_RET(0x005e94b0); r_esp += 4; return;
}

void f_005e9590(void) /* sub_5E9590 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e9590);
    /* 005e9590: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e9591: mov ebp, esp */ r_ebp = r_esp;
    /* 005e9593: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e9596: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005e9599: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e959b: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005e95a0: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005e95a3: call 0x5fb3a0 */ r_esp -= 4; W32(r_esp, 0x5e95a8u); f_005fb3a0();
    /* 005e95a8: mov ecx, eax */ r_ecx = r_eax;
    /* 005e95aa: call 0x606490 */ r_esp -= 4; W32(r_esp, 0x5e95afu); f_00606490();
    /* 005e95af: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005e95b2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e95b5: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005e95b8: cmp dword ptr [ebp - 0xc], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005e95bc: ja 0x5e9607 */ if ((!fC&&!fZ)) goto L_005e9607;
L_005e95be:; BB(0x005e95be);
    /* 005e95be: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e95c1: jmp dword ptr [edx*4 + 0x5e9610] */ { u32 t = R32((u32)(r_edx*4+0x5e9610u)); switch (t) { case 0x5e95c8u: goto L_005e95c8; case 0x5e95cfu: goto L_005e95cf; case 0x5e95d6u: goto L_005e95d6; case 0x5e95ddu: goto L_005e95dd; case 0x5e95e4u: goto L_005e95e4; case 0x5e95ebu: goto L_005e95eb; case 0x5e95f2u: goto L_005e95f2; case 0x5e95f9u: goto L_005e95f9; case 0x5e9600u: goto L_005e9600; default: UNSUP(0x005e95c1, "jump table entry is not a known target"); } }
L_005e95c8:; BB(0x005e95c8);
    /* 005e95c8: mov eax, 0x30f34e */ r_eax = 0x30f34eu;
    /* 005e95cd: jmp 0x5e960a */ goto L_005e960a;
L_005e95cf:; BB(0x005e95cf);
    /* 005e95cf: mov eax, 0x30f354 */ r_eax = 0x30f354u;
    /* 005e95d4: jmp 0x5e960a */ goto L_005e960a;
L_005e95d6:; BB(0x005e95d6);
    /* 005e95d6: mov eax, 0x30f351 */ r_eax = 0x30f351u;
    /* 005e95db: jmp 0x5e960a */ goto L_005e960a;
L_005e95dd:; BB(0x005e95dd);
    /* 005e95dd: mov eax, 0x30f350 */ r_eax = 0x30f350u;
    /* 005e95e2: jmp 0x5e960a */ goto L_005e960a;
L_005e95e4:; BB(0x005e95e4);
    /* 005e95e4: mov eax, 0x30f352 */ r_eax = 0x30f352u;
    /* 005e95e9: jmp 0x5e960a */ goto L_005e960a;
L_005e95eb:; BB(0x005e95eb);
    /* 005e95eb: mov eax, 0x30f34f */ r_eax = 0x30f34fu;
    /* 005e95f0: jmp 0x5e960a */ goto L_005e960a;
L_005e95f2:; BB(0x005e95f2);
    /* 005e95f2: mov eax, 0x30f353 */ r_eax = 0x30f353u;
    /* 005e95f7: jmp 0x5e960a */ goto L_005e960a;
L_005e95f9:; BB(0x005e95f9);
    /* 005e95f9: mov eax, 0x30f356 */ r_eax = 0x30f356u;
    /* 005e95fe: jmp 0x5e960a */ goto L_005e960a;
L_005e9600:; BB(0x005e9600);
    /* 005e9600: mov eax, 0x30f355 */ r_eax = 0x30f355u;
    /* 005e9605: jmp 0x5e960a */ goto L_005e960a;
L_005e9607:; BB(0x005e9607);
    /* 005e9607: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_005e960a:; BB(0x005e960a);
    /* 005e960a: mov esp, ebp */ r_esp = r_ebp;
    /* 005e960c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e960d: ret  */ FN_RET(0x005e9590); r_esp += 4; return;
}

void f_005e9640(void) /* sub_5E9640 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e9640);
    /* 005e9640: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e9641: mov ebp, esp */ r_ebp = r_esp;
    /* 005e9643: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e9646: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005e9649: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e964b: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005e9650: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005e9653: call 0x5fb3a0 */ r_esp -= 4; W32(r_esp, 0x5e9658u); f_005fb3a0();
    /* 005e9658: mov ecx, eax */ r_ecx = r_eax;
    /* 005e965a: call 0x606490 */ r_esp -= 4; W32(r_esp, 0x5e965fu); f_00606490();
    /* 005e965f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005e9662: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9665: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005e9668: cmp dword ptr [ebp - 0xc], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005e966c: ja 0x5e9694 */ if ((!fC&&!fZ)) goto L_005e9694;
L_005e966e:; BB(0x005e966e);
    /* 005e966e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e9671: jmp dword ptr [edx*4 + 0x5e96a0] */ { u32 t = R32((u32)(r_edx*4+0x5e96a0u)); switch (t) { case 0x5e9678u: goto L_005e9678; case 0x5e967fu: goto L_005e967f; case 0x5e9686u: goto L_005e9686; case 0x5e968du: goto L_005e968d; default: UNSUP(0x005e9671, "jump table entry is not a known target"); } }
L_005e9678:; BB(0x005e9678);
    /* 005e9678: mov eax, 0x30f357 */ r_eax = 0x30f357u;
    /* 005e967d: jmp 0x5e9699 */ goto L_005e9699;
L_005e967f:; BB(0x005e967f);
    /* 005e967f: mov eax, 0x30f358 */ r_eax = 0x30f358u;
    /* 005e9684: jmp 0x5e9699 */ goto L_005e9699;
L_005e9686:; BB(0x005e9686);
    /* 005e9686: mov eax, 0x30f359 */ r_eax = 0x30f359u;
    /* 005e968b: jmp 0x5e9699 */ goto L_005e9699;
L_005e968d:; BB(0x005e968d);
    /* 005e968d: mov eax, 0x30f35a */ r_eax = 0x30f35au;
    /* 005e9692: jmp 0x5e9699 */ goto L_005e9699;
L_005e9694:; BB(0x005e9694);
    /* 005e9694: mov eax, 0x30f357 */ r_eax = 0x30f357u;
L_005e9699:; BB(0x005e9699);
    /* 005e9699: mov esp, ebp */ r_esp = r_ebp;
    /* 005e969b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e969c: ret  */ FN_RET(0x005e9640); r_esp += 4; return;
}

void f_005e96b0(void) /* sub_5E96B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e96b0);
    /* 005e96b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e96b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005e96b3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e96b6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005e96b9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e96c0: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005e96c7: cmp dword ptr [ebp + 8], 0x1f4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1f4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e96ce: jl 0x5e9741 */ if ((fS!=fO)) goto L_005e9741;
L_005e96d0:; BB(0x005e96d0);
    /* 005e96d0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e96d3: sub eax, 0x1f4 */ {  u32 a = r_eax; u32 b = 0x1f4u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e96d8: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005e96db: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e96de: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005e96e1: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005e96e5: ja 0x5e9713 */ if ((!fC&&!fZ)) goto L_005e9713;
L_005e96e7:; BB(0x005e96e7);
    /* 005e96e7: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e96ea: jmp dword ptr [edx*4 + 0x5e9784] */ { u32 t = R32((u32)(r_edx*4+0x5e9784u)); switch (t) { case 0x5e96f1u: goto L_005e96f1; case 0x5e96fau: goto L_005e96fa; case 0x5e9703u: goto L_005e9703; case 0x5e970cu: goto L_005e970c; default: UNSUP(0x005e96ea, "jump table entry is not a known target"); } }
L_005e96f1:; BB(0x005e96f1);
    /* 005e96f1: mov dword ptr [ebp - 8], 3 */ W32((u32)(r_ebp+0xfffffff8u), 0x3u);
    /* 005e96f8: jmp 0x5e9713 */ goto L_005e9713;
L_005e96fa:; BB(0x005e96fa);
    /* 005e96fa: mov dword ptr [ebp - 8], 4 */ W32((u32)(r_ebp+0xfffffff8u), 0x4u);
    /* 005e9701: jmp 0x5e9713 */ goto L_005e9713;
L_005e9703:; BB(0x005e9703);
    /* 005e9703: mov dword ptr [ebp - 8], 6 */ W32((u32)(r_ebp+0xfffffff8u), 0x6u);
    /* 005e970a: jmp 0x5e9713 */ goto L_005e9713;
L_005e970c:; BB(0x005e970c);
    /* 005e970c: mov dword ptr [ebp - 8], 8 */ W32((u32)(r_ebp+0xfffffff8u), 0x8u);
L_005e9713:; BB(0x005e9713);
    /* 005e9713: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9715: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005e971a: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005e971d: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x5e9722u); f_005fb2b0();
    /* 005e9722: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005e9725: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e9729: je 0x5e973f */ if (fZ) goto L_005e973f;
L_005e972b:; BB(0x005e972b);
    /* 005e972b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e972e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e972f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9732: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e9734: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9737: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 005e973d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5e973fu); call_ind(t); }
L_005e973f:; BB(0x005e973f);
    /* 005e973f: jmp 0x5e977d */ goto L_005e977d;
L_005e9741:; BB(0x005e9741);
    /* 005e9741: cmp dword ptr [ebp + 8], 0x64 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e9745: jl 0x5e977d */ if ((fS!=fO)) goto L_005e977d;
L_005e9747:; BB(0x005e9747);
    /* 005e9747: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e974a: sub eax, 0x64 */ {  u32 a = r_eax; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e974d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005e9750: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9752: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005e9758: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005e975b: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x5e9760u); f_005fb2b0();
    /* 005e9760: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005e9763: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e9767: je 0x5e977d */ if (fZ) goto L_005e977d;
L_005e9769:; BB(0x005e9769);
    /* 005e9769: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e976c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e976d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9770: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e9772: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9775: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005e977b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e977du); call_ind(t); }
L_005e977d:; BB(0x005e977d);
    /* 005e977d: mov esp, ebp */ r_esp = r_ebp;
    /* 005e977f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e9780: ret 4 */ FN_RET(0x005e96b0); r_esp += 8; return;
}

void f_005e97a0(void) /* sub_5E97A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e97a0);
    /* 005e97a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e97a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005e97a3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e97a6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005e97a9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e97ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e97ad: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e97b0: call 0x5e96b0 */ r_esp -= 4; W32(r_esp, 0x5e97b5u); f_005e96b0();
    /* 005e97b5: cmp dword ptr [ebp + 8], 0xc8 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xc8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e97bc: jne 0x5e97e9 */ if (!fZ) goto L_005e97e9;
L_005e97be:; BB(0x005e97be);
    /* 005e97be: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e97c1: call 0x5e9590 */ r_esp -= 4; W32(r_esp, 0x5e97c6u); f_005e9590();
    /* 005e97c6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005e97c9: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e97cd: je 0x5e97e9 */ if (fZ) goto L_005e97e9;
L_005e97cf:; BB(0x005e97cf);
    /* 005e97cf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e97d2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e97d3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e97d6: call 0x5e9640 */ r_esp -= 4; W32(r_esp, 0x5e97dbu); f_005e9640();
    /* 005e97db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e97dc: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e97df: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e97e1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e97e4: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 005e97e7: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5e97e9u); call_ind(t); }
L_005e97e9:; BB(0x005e97e9);
    /* 005e97e9: mov esp, ebp */ r_esp = r_ebp;
    /* 005e97eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e97ec: ret 4 */ FN_RET(0x005e97a0); r_esp += 8; return;
}

void f_005e97f0(void) /* sub_5E97F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e97f0);
    /* 005e97f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e97f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005e97f3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e97f6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005e97f9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e9800: jmp 0x5e980b */ goto L_005e980b;
L_005e9802:; BB(0x005e9802);
    /* 005e9802: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9805: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e9808: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005e980b:; BB(0x005e980b);
    /* 005e980b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e980e: cmp ecx, dword ptr [ebp + 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e9811: jge 0x5e9853 */ if ((fS==fO)) goto L_005e9853;
L_005e9813:; BB(0x005e9813);
    /* 005e9813: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9815: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9817: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e9819: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e981b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e981d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e981f: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9824: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9826: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9828: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e982a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e982d: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005e9830: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 005e9833: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e9834: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e9837: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e9838: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005e983b: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e983e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e983f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9841: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9843: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005e9849: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005e984c: call 0x5f9ff0 */ r_esp -= 4; W32(r_esp, 0x5e9851u); f_005f9ff0();
    /* 005e9851: jmp 0x5e9802 */ goto L_005e9802;
L_005e9853:; BB(0x005e9853);
    /* 005e9853: mov esp, ebp */ r_esp = r_ebp;
    /* 005e9855: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e9856: ret 0x10 */ FN_RET(0x005e97f0); r_esp += 20; return;
}

void f_005e9860(void) /* sub_5E9860 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e9860);
    /* 005e9860: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e9861: mov ebp, esp */ r_ebp = r_esp;
    /* 005e9863: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e9865: push 0x6a9ad4 */ { u32 v = 0x6a9ad4u; r_esp -= 4; W32(r_esp, v); }
    /* 005e986a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005e9870: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e9871: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e9874: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005e9879: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e987b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e987c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005e987f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005e9885: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005e9888: push 0x1dc */ { u32 v = 0x1dcu; r_esp -= 4; W32(r_esp, v); }
    /* 005e988d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5e9892u); f_00686d82();
    /* 005e9892: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e9895: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005e9898: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e989f: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e98a3: je 0x5e98b2 */ if (fZ) goto L_005e98b2;
L_005e98a5:; BB(0x005e98a5);
    /* 005e98a5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e98a8: call 0x601a80 */ r_esp -= 4; W32(r_esp, 0x5e98adu); f_00601a80();
    /* 005e98ad: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005e98b0: jmp 0x5e98b9 */ goto L_005e98b9;
L_005e98b2:; BB(0x005e98b2);
    /* 005e98b2: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005e98b9:; BB(0x005e98b9);
    /* 005e98b9: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e98bc: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005e98bf: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005e98c6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e98c8: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e98ca: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e98cc: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e98ce: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e98d0: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005e98d5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e98d7: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005e98da: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e98db: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e98de: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e98df: push 0x30d62d */ { u32 v = 0x30d62du; r_esp -= 4; W32(r_esp, v); }
    /* 005e98e4: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 005e98e9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e98ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e98ed: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005e98f3: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005e98f6: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x5e98fbu); f_005f9de0();
    /* 005e98fb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e98fe: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e9905: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e9906: mov esp, ebp */ r_esp = r_ebp;
    /* 005e9908: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e9909: ret 8 */ FN_RET(0x005e9860); r_esp += 12; return;
}

void f_005e9910(void) /* sub_5E9910 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e9910);
    /* 005e9910: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e9911: mov ebp, esp */ r_ebp = r_esp;
    /* 005e9913: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e9915: push 0x6a9afa */ { u32 v = 0x6a9afau; r_esp -= 4; W32(r_esp, v); }
    /* 005e991a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005e9920: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e9921: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e9924: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005e9929: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e992b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e992c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005e992f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005e9935: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005e9938: push 0x1dc */ { u32 v = 0x1dcu; r_esp -= 4; W32(r_esp, v); }
    /* 005e993d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5e9942u); f_00686d82();
    /* 005e9942: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e9945: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005e9948: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e994f: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e9953: je 0x5e9962 */ if (fZ) goto L_005e9962;
L_005e9955:; BB(0x005e9955);
    /* 005e9955: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e9958: call 0x601a80 */ r_esp -= 4; W32(r_esp, 0x5e995du); f_00601a80();
    /* 005e995d: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005e9960: jmp 0x5e9969 */ goto L_005e9969;
L_005e9962:; BB(0x005e9962);
    /* 005e9962: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005e9969:; BB(0x005e9969);
    /* 005e9969: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e996c: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005e996f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005e9976: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9978: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e997a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e997c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e997e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e9980: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9985: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9987: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005e998a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e998b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e998e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e998f: push 0x30d62e */ { u32 v = 0x30d62eu; r_esp -= 4; W32(r_esp, v); }
    /* 005e9994: push 0xc9 */ { u32 v = 0xc9u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9999: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e999c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e999d: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005e99a3: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005e99a6: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x5e99abu); f_005f9de0();
    /* 005e99ab: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e99ae: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e99b5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e99b6: mov esp, ebp */ r_esp = r_ebp;
    /* 005e99b8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e99b9: ret 8 */ FN_RET(0x005e9910); r_esp += 12; return;
}

void f_005e99c0(void) /* sub_5E99C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e99c0);
    /* 005e99c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e99c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005e99c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e99c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e99c7: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005e99c9: push 0x75ed98 */ { u32 v = 0x75ed98u; r_esp -= 4; W32(r_esp, v); }
    /* 005e99ce: push 0x1f4 */ { u32 v = 0x1f4u; r_esp -= 4; W32(r_esp, v); }
    /* 005e99d3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e99d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e99d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e99da: call 0x5e97f0 */ r_esp -= 4; W32(r_esp, 0x5e99dfu); f_005e97f0();
    /* 005e99df: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e99e1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e99e4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e99e5: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005e99eb: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 005e99ee: call 0x5fb3a0 */ r_esp -= 4; W32(r_esp, 0x5e99f3u); f_005fb3a0();
    /* 005e99f3: mov ecx, eax */ r_ecx = r_eax;
    /* 005e99f5: call 0x6064e0 */ r_esp -= 4; W32(r_esp, 0x5e99fau); f_006064e0();
    /* 005e99fa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e99fc: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e9a01: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9a03: push 0x7d0 */ { u32 v = 0x7d0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9a08: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005e9a0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e9a0c: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005e9a0f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e9a10: push 0x30d63b */ { u32 v = 0x30d63bu; r_esp -= 4; W32(r_esp, v); }
    /* 005e9a15: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9a17: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9a19: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005e9a1f: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 005e9a22: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x5e9a27u); f_005f9ce0();
    /* 005e9a27: mov esp, ebp */ r_esp = r_ebp;
    /* 005e9a29: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e9a2a: ret 0xc */ FN_RET(0x005e99c0); r_esp += 16; return;
}

void f_005e9a30(void) /* sub_5E9A30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e9a30);
    /* 005e9a30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e9a31: mov ebp, esp */ r_ebp = r_esp;
    /* 005e9a33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e9a34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e9a37: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005e9a39: push 0x75eda8 */ { u32 v = 0x75eda8u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9a3e: push 0x1f4 */ { u32 v = 0x1f4u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9a43: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e9a46: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e9a47: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9a4a: call 0x5e97f0 */ r_esp -= 4; W32(r_esp, 0x5e9a4fu); f_005e97f0();
    /* 005e9a4f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9a51: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e9a54: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e9a55: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005e9a5b: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 005e9a5e: call 0x5fb3a0 */ r_esp -= 4; W32(r_esp, 0x5e9a63u); f_005fb3a0();
    /* 005e9a63: mov ecx, eax */ r_ecx = r_eax;
    /* 005e9a65: call 0x6064e0 */ r_esp -= 4; W32(r_esp, 0x5e9a6au); f_006064e0();
    /* 005e9a6a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9a6c: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e9a71: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9a73: push 0x7d0 */ { u32 v = 0x7d0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9a78: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005e9a7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e9a7c: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005e9a7f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e9a80: push 0x30d63b */ { u32 v = 0x30d63bu; r_esp -= 4; W32(r_esp, v); }
    /* 005e9a85: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9a87: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9a89: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005e9a8f: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 005e9a92: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x5e9a97u); f_005f9ce0();
    /* 005e9a97: mov esp, ebp */ r_esp = r_ebp;
    /* 005e9a99: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e9a9a: ret 0xc */ FN_RET(0x005e9a30); r_esp += 16; return;
}

void f_005e9aa0(void) /* sub_5E9AA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e9aa0);
    /* 005e9aa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e9aa1: mov ebp, esp */ r_ebp = r_esp;
    /* 005e9aa3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e9aa5: push 0x6a9b20 */ { u32 v = 0x6a9b20u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9aaa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005e9ab0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e9ab1: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e9ab4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005e9ab9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e9abb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e9abc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005e9abf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005e9ac5: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005e9ac8: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005e9acf: jmp 0x5e9ada */ goto L_005e9ada;
L_005e9ad1:; BB(0x005e9ad1);
    /* 005e9ad1: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e9ad4: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e9ad7: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_005e9ada:; BB(0x005e9ada);
    /* 005e9ada: cmp dword ptr [ebp - 0x10], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e9ade: jge 0x5e9bb0 */ if ((fS==fO)) goto L_005e9bb0;
L_005e9ae4:; BB(0x005e9ae4);
    /* 005e9ae4: push 0x1e8 */ { u32 v = 0x1e8u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9ae9: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5e9aeeu); f_00686d82();
    /* 005e9aee: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e9af1: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005e9af4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e9afb: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e9aff: je 0x5e9b1d */ if (fZ) goto L_005e9b1d;
L_005e9b01:; BB(0x005e9b01);
    /* 005e9b01: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9b03: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e9b06: mov edx, dword ptr [ecx*4 + 0x75ede0] */ r_edx = R32((u32)(r_ecx*4+0x75ede0u));
    /* 005e9b0d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e9b0e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9b10: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e9b13: call 0x603120 */ r_esp -= 4; W32(r_esp, 0x5e9b18u); f_00603120();
    /* 005e9b18: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005e9b1b: jmp 0x5e9b24 */ goto L_005e9b24;
L_005e9b1d:; BB(0x005e9b1d);
    /* 005e9b1d: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_005e9b24:; BB(0x005e9b24);
    /* 005e9b24: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e9b27: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005e9b2a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005e9b31: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9b33: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e9b35: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e9b37: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e9b39: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e9b3b: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9b40: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9b42: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9b44: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9b46: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e9b49: mov edx, dword ptr [ecx*4 + 0x75edd8] */ r_edx = R32((u32)(r_ecx*4+0x75edd8u));
    /* 005e9b50: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e9b51: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e9b54: add eax, 0x64 */ {  u32 a = r_eax; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e9b57: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e9b58: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e9b5b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e9b5c: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005e9b62: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 005e9b65: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x5e9b6au); f_005f9de0();
    /* 005e9b6a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9b6c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9b6e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9b70: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9b72: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e9b75: add eax, 0x64 */ {  u32 a = r_eax; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e9b78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e9b79: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005e9b7f: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005e9b82: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x5e9b87u); f_005fb300();
    /* 005e9b87: mov ecx, eax */ r_ecx = r_eax;
    /* 005e9b89: call 0x6023d0 */ r_esp -= 4; W32(r_esp, 0x5e9b8eu); f_006023d0();
    /* 005e9b8e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9b90: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e9b93: add edx, 0x64 */ {  u32 a = r_edx; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e9b96: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e9b97: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005e9b9c: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005e9b9f: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x5e9ba4u); f_005fb300();
    /* 005e9ba4: mov ecx, eax */ r_ecx = r_eax;
    /* 005e9ba6: call 0x5eb700 */ r_esp -= 4; W32(r_esp, 0x5e9babu); f_005eb700();
    /* 005e9bab: jmp 0x5e9ad1 */ goto L_005e9ad1;
L_005e9bb0:; BB(0x005e9bb0);
    /* 005e9bb0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e9bb3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e9bba: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e9bbb: mov esp, ebp */ r_esp = r_ebp;
    /* 005e9bbd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e9bbe: ret  */ FN_RET(0x005e9aa0); r_esp += 4; return;
}

void f_005e9bc0(void) /* sub_5E9BC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e9bc0);
    /* 005e9bc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e9bc1: mov ebp, esp */ r_ebp = r_esp;
    /* 005e9bc3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e9bc6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005e9bc9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e9bd0: jmp 0x5e9bdb */ goto L_005e9bdb;
L_005e9bd2:; BB(0x005e9bd2);
    /* 005e9bd2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9bd5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e9bd8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005e9bdb:; BB(0x005e9bdb);
    /* 005e9bdb: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e9bdf: jge 0x5e9bfa */ if ((fS==fO)) goto L_005e9bfa;
L_005e9be1:; BB(0x005e9be1);
    /* 005e9be1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9be4: add ecx, 0x64 */ {  u32 a = r_ecx; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e9be7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e9be8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9bea: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005e9bf0: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 005e9bf3: call 0x5fbcb0 */ r_esp -= 4; W32(r_esp, 0x5e9bf8u); f_005fbcb0();
    /* 005e9bf8: jmp 0x5e9bd2 */ goto L_005e9bd2;
L_005e9bfa:; BB(0x005e9bfa);
    /* 005e9bfa: mov esp, ebp */ r_esp = r_ebp;
    /* 005e9bfc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e9bfd: ret  */ FN_RET(0x005e9bc0); r_esp += 4; return;
}

void f_005e9c00(void) /* sub_5E9C00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e9c00);
    /* 005e9c00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e9c01: mov ebp, esp */ r_ebp = r_esp;
    /* 005e9c03: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e9c06: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e9c09: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e9c0c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005e9c0f: cmp dword ptr [ebp - 8], 0x64 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e9c13: je 0x5e9c1d */ if (fZ) goto L_005e9c1d;
L_005e9c15:; BB(0x005e9c15);
    /* 005e9c15: cmp dword ptr [ebp - 8], 0x65 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x65u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e9c19: je 0x5e9c29 */ if (fZ) goto L_005e9c29;
L_005e9c1b:; BB(0x005e9c1b);
    /* 005e9c1b: jmp 0x5e9c33 */ goto L_005e9c33;
L_005e9c1d:; BB(0x005e9c1d);
    /* 005e9c1d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9c1f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9c22: call 0x5e88e0 */ r_esp -= 4; W32(r_esp, 0x5e9c27u); f_005e88e0();
    /* 005e9c27: jmp 0x5e9c33 */ goto L_005e9c33;
L_005e9c29:; BB(0x005e9c29);
    /* 005e9c29: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9c2b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9c2e: call 0x5e88e0 */ r_esp -= 4; W32(r_esp, 0x5e9c33u); f_005e88e0();
L_005e9c33:; BB(0x005e9c33);
    /* 005e9c33: mov esp, ebp */ r_esp = r_ebp;
    /* 005e9c35: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e9c36: ret 4 */ FN_RET(0x005e9c00); r_esp += 8; return;
}

void f_005e9e60(void) /* sub_5E9E60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e9e60);
    /* 005e9e60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e9e61: mov ebp, esp */ r_ebp = r_esp;
    /* 005e9e63: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9e65: call dword ptr [0x6b243c] */ { u32 t = R32((u32)(0x6b243cu)); r_esp -= 4; W32(r_esp, 0x5e9e6bu); call_ind(t); }
    /* 005e9e6b: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 005e9e6e: and eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005e9e73: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 005e9e76: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e9e77: ret  */ FN_RET(0x005e9e60); r_esp += 4; return;
}

void f_005e9e80(void) /* sub_5E9E80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e9e80);
    /* 005e9e80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e9e81: mov ebp, esp */ r_ebp = r_esp;
    /* 005e9e83: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9e85: call dword ptr [0x6b243c] */ { u32 t = R32((u32)(0x6b243cu)); r_esp -= 4; W32(r_esp, 0x5e9e8bu); call_ind(t); }
    /* 005e9e8b: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 005e9e8e: and eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005e9e93: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 005e9e96: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e9e97: ret  */ FN_RET(0x005e9e80); r_esp += 4; return;
}

void f_005e9ec0(void) /* sub_5E9EC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e9ec0);
    /* 005e9ec0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e9ec1: mov ebp, esp */ r_ebp = r_esp;
    /* 005e9ec3: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9ec5: call dword ptr [0x6b243c] */ { u32 t = R32((u32)(0x6b243cu)); r_esp -= 4; W32(r_esp, 0x5e9ecbu); call_ind(t); }
    /* 005e9ecb: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 005e9ece: and eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005e9ed3: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 005e9ed6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e9ed7: ret  */ FN_RET(0x005e9ec0); r_esp += 4; return;
}

void f_005e9f00(void) /* sub_5E9F00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e9f00);
    /* 005e9f00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e9f01: mov ebp, esp */ r_ebp = r_esp;
    /* 005e9f03: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e9f06: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e9f07: call dword ptr [0x6b20b8] */ { u32 t = R32((u32)(0x6b20b8u)); r_esp -= 4; W32(r_esp, 0x5e9f0du); call_ind(t); }
    /* 005e9f0d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e9f0e: ret  */ FN_RET(0x005e9f00); r_esp += 4; return;
}

void f_005e9f20(void) /* sub_5E9F20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e9f20);
    /* 005e9f20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e9f21: mov ebp, esp */ r_ebp = r_esp;
    /* 005e9f23: sub esp, 0x210 */ {  u32 a = r_esp; u32 b = 0x210u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e9f29: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005e9f2e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e9f30: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005e9f33: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005e9f36: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e9f37: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005e9f3a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e9f3b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e9f3e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e9f3f: push 0x6d61d8 */ { u32 v = 0x6d61d8u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9f44: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x5e9f49u); f_0062fde0();
    /* 005e9f49: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e9f4c: cmp dword ptr [0x7960d8], 0 */ {  u32 a = R32((u32)(0x7960d8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e9f53: je 0x5e9fb0 */ if (fZ) goto L_005e9fb0;
L_005e9f55:; BB(0x005e9f55);
    /* 005e9f55: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 005e9f5a: cmp dword ptr [eax + 0x14], 0 */ {  u32 a = R32((u32)(r_eax+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e9f5e: je 0x5e9fb0 */ if (fZ) goto L_005e9fb0;
L_005e9f60:; BB(0x005e9f60);
    /* 005e9f60: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9f62: push 0x6d61cc */ { u32 v = 0x6d61ccu; r_esp -= 4; W32(r_esp, v); }
    /* 005e9f67: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 005e9f6d: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005e9f70: call 0x607960 */ r_esp -= 4; W32(r_esp, 0x5e9f75u); f_00607960();
    /* 005e9f75: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e9f77: je 0x5e9fb0 */ if (fZ) goto L_005e9fb0;
L_005e9f79:; BB(0x005e9f79);
    /* 005e9f79: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005e9f7c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e9f7d: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005e9f80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e9f81: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e9f84: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e9f85: push 0x6d61bc */ { u32 v = 0x6d61bcu; r_esp -= 4; W32(r_esp, v); }
    /* 005e9f8a: lea edx, [ebp - 0x210] */ r_edx = (u32)(r_ebp+0xfffffdf0u);
    /* 005e9f90: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e9f91: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5e9f97u); call_ind(t); }
    /* 005e9f97: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e9f9a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9f9c: push 0x6d61b4 */ { u32 v = 0x6d61b4u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9fa1: lea eax, [ebp - 0x210] */ r_eax = (u32)(r_ebp+0xfffffdf0u);
    /* 005e9fa7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e9fa8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9faa: call dword ptr [0x6b2440] */ { u32 t = R32((u32)(0x6b2440u)); r_esp -= 4; W32(r_esp, 0x5e9fb0u); call_ind(t); }
L_005e9fb0:; BB(0x005e9fb0);
    /* 005e9fb0: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005e9fb2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9fb5: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005e9fb7: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x5e9fbcu); f_00686d72();
    /* 005e9fbc: mov esp, ebp */ r_esp = r_ebp;
    /* 005e9fbe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e9fbf: ret  */ FN_RET(0x005e9f20); r_esp += 4; return;
}

void f_005e9fc0(void) /* sub_5E9FC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e9fc0);
    /* 005e9fc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e9fc1: mov ebp, esp */ r_ebp = r_esp;
    /* 005e9fc3: call dword ptr [0x6b2444] */ { u32 t = R32((u32)(0x6b2444u)); r_esp -= 4; W32(r_esp, 0x5e9fc9u); call_ind(t); }
    /* 005e9fc9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e9fca: ret  */ FN_RET(0x005e9fc0); r_esp += 4; return;
}

void f_005e9fd0(void) /* sub_5E9FD0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e9fd0);
    /* 005e9fd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e9fd1: mov ebp, esp */ r_ebp = r_esp;
    /* 005e9fd3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e9fd6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e9fd7: call dword ptr [0x6b22ac] */ { u32 t = R32((u32)(0x6b22acu)); r_esp -= 4; W32(r_esp, 0x5e9fddu); call_ind(t); }
    /* 005e9fdd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e9fe0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e9fe1: call dword ptr [0x6b22a8] */ { u32 t = R32((u32)(0x6b22a8u)); r_esp -= 4; W32(r_esp, 0x5e9fe7u); call_ind(t); }
    /* 005e9fe7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e9fea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e9feb: ret  */ FN_RET(0x005e9fd0); r_esp += 4; return;
}

void f_005e9ff0(void) /* sub_5E9FF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e9ff0);
    /* 005e9ff0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e9ff1: mov ebp, esp */ r_ebp = r_esp;
    /* 005e9ff3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e9ff6: push 0x6c2d28 */ { u32 v = 0x6c2d28u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9ffb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e9ffe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e9fff: call 0x5ea9c0 */ r_esp -= 4; W32(r_esp, 0x5ea004u); f_005ea9c0();
    /* 005ea004: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ea007: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005ea00a: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea00e: je 0x5ea031 */ if (fZ) goto L_005ea031;
L_005ea010:; BB(0x005ea010);
    /* 005ea010: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ea013: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea014: call 0x5e9fd0 */ r_esp -= 4; W32(r_esp, 0x5ea019u); f_005e9fd0();
    /* 005ea019: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ea01c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005ea01f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ea022: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea023: call dword ptr [0x6b2258] */ { u32 t = R32((u32)(0x6b2258u)); r_esp -= 4; W32(r_esp, 0x5ea029u); call_ind(t); }
    /* 005ea029: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ea02c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea02f: jmp 0x5ea034 */ goto L_005ea034;
L_005ea031:; BB(0x005ea031);
    /* 005ea031: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_005ea034:; BB(0x005ea034);
    /* 005ea034: mov esp, ebp */ r_esp = r_ebp;
    /* 005ea036: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ea037: ret  */ FN_RET(0x005e9ff0); r_esp += 4; return;
}

