#include "protos.h"

void f_00537050(void) /* sub_537050 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00537050);
    /* 00537050: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00537051: mov ebp, esp */ r_ebp = r_esp;
    /* 00537053: sub esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00537056: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0053705b: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0053705d: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00537060: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00537061: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00537062: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 00537065: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 0053706c: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 00537073: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0053707a: mov eax, dword ptr [0x793394] */ r_eax = R32((u32)(0x793394u));
    /* 0053707f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00537081: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 00537087: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 0053708a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53708cu); call_ind(t); }
    /* 0053708c: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0053708f: mov dword ptr [ebp - 0x34], 0xffffffff */ W32((u32)(r_ebp+0xffffffccu), 0xffffffffu);
    /* 00537096: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 0053709d: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005370a0: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005370a3: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 005370a6: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005370ad: jmp 0x5370b8 */ goto L_005370b8;
L_005370af:; BB(0x005370af);
    /* 005370af: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005370b2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005370b5: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005370b8:; BB(0x005370b8);
    /* 005370b8: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005370bc: jge 0x5370e3 */ if ((fS==fO)) goto L_005370e3;
L_005370be:; BB(0x005370be);
    /* 005370be: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005370c1: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005370c4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005370c6: cmp dword ptr [ebp - 0x38], ecx */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005370c9: setge dl */ r_edx = (r_edx & 0xffffff00u) | ((((fS==fO)) ? 1 : 0) & 0xffu);
    /* 005370cc: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005370cf: mov byte ptr [ebp + eax - 0x54], dl */ W8((u32)(r_ebp+r_eax+0xffffffacu), (u8)r_edx);
    /* 005370d3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005370d6: mov dword ptr [ecx*4 + 0x7933c4], 0xffffffff */ W32((u32)(r_ecx*4+0x7933c4u), 0xffffffffu);
    /* 005370e1: jmp 0x5370af */ goto L_005370af;
L_005370e3:; BB(0x005370e3);
    /* 005370e3: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005370e6: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005370e9: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 005370ec: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 005370f3: jmp 0x5370fe */ goto L_005370fe;
L_005370f5:; BB(0x005370f5);
    /* 005370f5: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005370f8: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005370fb: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
L_005370fe:; BB(0x005370fe);
    /* 005370fe: cmp dword ptr [ebp - 0x58], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00537102: jge 0x537248 */ if ((fS==fO)) goto L_00537248;
L_00537108:; BB(0x00537108);
    /* 00537108: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0053710b: mov eax, dword ptr [edx*4 + 0x72ac14] */ r_eax = R32((u32)(r_edx*4+0x72ac14u));
    /* 00537112: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00537115: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00537118: movzx edx, byte ptr [ebp + ecx - 0x54] */ r_edx = (u32)R8((u32)(r_ebp+r_ecx+0xffffffacu));
    /* 0053711d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053711f: je 0x537243 */ if (fZ) goto L_00537243;
L_00537125:; BB(0x00537125);
    /* 00537125: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_0053712c:; BB(0x0053712c);
    /* 0053712c: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0053712f: cmp dword ptr [eax*4 + 0x7933c4], -1 */ {  u32 a = R32((u32)(r_eax*4+0x7933c4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537137: jne 0x537243 */ if (!fZ) goto L_00537243;
L_0053713d:; BB(0x0053713d);
    /* 0053713d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00537140: cmp ecx, dword ptr [ebp - 0x40] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffc0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00537143: jge 0x537243 */ if ((fS==fO)) goto L_00537243;
L_00537149:; BB(0x00537149);
    /* 00537149: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0053714c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053714d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00537150: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00537151: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 00537157: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00537159: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 0053715f: mov eax, dword ptr [edx + 0x68] */ r_eax = R32((u32)(r_edx+0x68u));
    /* 00537162: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x537164u); call_ind(t); }
    /* 00537164: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00537165: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00537168: call 0x537e60 */ r_esp -= 4; W32(r_esp, 0x53716du); f_00537e60();
    /* 0053716d: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00537170: cmp dword ptr [ebp - 0x34], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537174: je 0x537235 */ if (fZ) goto L_00537235;
L_0053717a:; BB(0x0053717a);
    /* 0053717a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053717d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053717e: mov edx, dword ptr [0x793394] */ r_edx = R32((u32)(0x793394u));
    /* 00537184: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00537186: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 0053718c: mov edx, dword ptr [eax + 0x68] */ r_edx = R32((u32)(r_eax+0x68u));
    /* 0053718f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x537191u); call_ind(t); }
    /* 00537191: mov ecx, 0xa */ r_ecx = 0xau;
    /* 00537196: mov esi, eax */ r_esi = r_eax;
    /* 00537198: lea edi, [ebp - 0x30] */ r_edi = (u32)(r_ebp+0xffffffd0u);
    /* 0053719b: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0053719d: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 005371a0: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005371a3: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005371a6: mov dword ptr [ecx + eax*4 + 0x64], edx */ W32((u32)(r_ecx+r_eax*4+0x64u), r_edx);
    /* 005371aa: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 005371ad: add eax, dword ptr [ebp - 0x58] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffa8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005371b0: mov byte ptr [eax + 0x10], 1 */ W8((u32)(r_eax+0x10u), 0x1u);
    /* 005371b4: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005371b8: jne 0x5371c1 */ if (!fZ) goto L_005371c1;
L_005371ba:; BB(0x005371ba);
    /* 005371ba: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005371bd: mov byte ptr [ecx + 0x7c], 1 */ W8((u32)(r_ecx+0x7cu), 0x1u);
L_005371c1:; BB(0x005371c1);
    /* 005371c1: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005371c5: jne 0x5371ea */ if (!fZ) goto L_005371ea;
L_005371c7:; BB(0x005371c7);
    /* 005371c7: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005371ca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005371cb: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 005371ce: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005371d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005371d2: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 005371d8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005371da: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 005371e0: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 005371e3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5371e5u); call_ind(t); }
    /* 005371e5: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005371e8: jmp 0x537207 */ goto L_00537207;
L_005371ea:; BB(0x005371ea);
    /* 005371ea: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005371ed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005371ee: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005371f1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005371f2: mov eax, dword ptr [0x793394] */ r_eax = R32((u32)(0x793394u));
    /* 005371f7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005371f9: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 005371ff: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 00537202: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x537204u); call_ind(t); }
    /* 00537204: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00537207:; BB(0x00537207);
    /* 00537207: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053720a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053720b: mov edx, dword ptr [0x793394] */ r_edx = R32((u32)(0x793394u));
    /* 00537211: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00537213: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 00537219: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 0053721c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x53721eu); call_ind(t); }
    /* 0053721e: imul eax, dword ptr [ebp - 4] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xfffffffcu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00537222: add eax, dword ptr [ebp - 0x44] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffbcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00537225: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00537228: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0053722b: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0053722e: mov dword ptr [eax*4 + 0x7933c4], ecx */ W32((u32)(r_eax*4+0x7933c4u), r_ecx);
L_00537235:; BB(0x00537235);
    /* 00537235: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00537238: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0053723b: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0053723e: jmp 0x53712c */ goto L_0053712c;
L_00537243:; BB(0x00537243);
    /* 00537243: jmp 0x5370f5 */ goto L_005370f5;
L_00537248:; BB(0x00537248);
    /* 00537248: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0053724b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0053724c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0053724d: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00537250: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00537252: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x537257u); f_00686d72();
    /* 00537257: mov esp, ebp */ r_esp = r_ebp;
    /* 00537259: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053725a: ret  */ FN_RET(0x00537050); r_esp += 4; return;
}

void f_00537260(void) /* sub_537260 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00537260);
    /* 00537260: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00537261: mov ebp, esp */ r_ebp = r_esp;
    /* 00537263: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00537266: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00537269: mov dword ptr [ebp - 0xc], 0x1388 */ W32((u32)(r_ebp+0xfffffff4u), 0x1388u);
    /* 00537270: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 00537275: mov ecx, dword ptr [eax + 0x4f14] */ r_ecx = R32((u32)(r_eax+0x4f14u));
    /* 0053727b: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0053727e: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 00537284: mov eax, dword ptr [edx + 0x4f10] */ r_eax = R32((u32)(r_edx+0x4f10u));
    /* 0053728a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0053728d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00537290: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00537293: cmp dword ptr [ebp - 0x14], 0xb */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00537297: ja 0x5372fb */ if ((!fC&&!fZ)) goto L_005372fb;
L_00537299:; BB(0x00537299);
    /* 00537299: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053729c: movzx eax, byte ptr [edx + 0x53747c] */ r_eax = (u32)R8((u32)(r_edx+0x53747cu));
    /* 005372a3: jmp dword ptr [eax*4 + 0x537468] */ { u32 t = R32((u32)(r_eax*4+0x537468u)); switch (t) { case 0x5372aau: goto L_005372aa; case 0x5372bbu: goto L_005372bb; case 0x5372cbu: goto L_005372cb; case 0x5372dcu: goto L_005372dc; case 0x5372edu: goto L_005372ed; default: UNSUP(0x005372a3, "jump table entry is not a known target"); } }
L_005372aa:; BB(0x005372aa);
    /* 005372aa: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005372b0: mov edx, dword ptr [ecx + 0x4ed0] */ r_edx = R32((u32)(r_ecx+0x4ed0u));
    /* 005372b6: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005372b9: jmp 0x5372fb */ goto L_005372fb;
L_005372bb:; BB(0x005372bb);
    /* 005372bb: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 005372c0: mov ecx, dword ptr [eax + 0x4ed4] */ r_ecx = R32((u32)(r_eax+0x4ed4u));
    /* 005372c6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005372c9: jmp 0x5372fb */ goto L_005372fb;
L_005372cb:; BB(0x005372cb);
    /* 005372cb: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 005372d1: mov eax, dword ptr [edx + 0x4ed8] */ r_eax = R32((u32)(r_edx+0x4ed8u));
    /* 005372d7: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005372da: jmp 0x5372fb */ goto L_005372fb;
L_005372dc:; BB(0x005372dc);
    /* 005372dc: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005372e2: mov edx, dword ptr [ecx + 0x4edc] */ r_edx = R32((u32)(r_ecx+0x4edcu));
    /* 005372e8: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005372eb: jmp 0x5372fb */ goto L_005372fb;
L_005372ed:; BB(0x005372ed);
    /* 005372ed: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 005372f2: mov ecx, dword ptr [eax + 0x4ee0] */ r_ecx = R32((u32)(r_eax+0x4ee0u));
    /* 005372f8: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_005372fb:; BB(0x005372fb);
    /* 005372fb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005372fe: call 0x538490 */ r_esp -= 4; W32(r_esp, 0x537303u); f_00538490();
    /* 00537303: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00537306: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537308: je 0x537461 */ if (fZ) goto L_00537461;
L_0053730e:; BB(0x0053730e);
    /* 0053730e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00537311: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00537314: cmp dword ptr [ebp - 0x18], 0x15 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537318: je 0x53732f */ if (fZ) goto L_0053732f;
L_0053731a:; BB(0x0053731a);
    /* 0053731a: cmp dword ptr [ebp - 0x18], 0x19 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053731e: je 0x537373 */ if (fZ) goto L_00537373;
L_00537320:; BB(0x00537320);
    /* 00537320: cmp dword ptr [ebp - 0x18], 0x1d */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x1du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537324: je 0x5373eb */ if (fZ) goto L_005373eb;
L_0053732a:; BB(0x0053732a);
    /* 0053732a: jmp 0x537461 */ goto L_00537461;
L_0053732f:; BB(0x0053732f);
    /* 0053732f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00537332: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00537335: cmp dword ptr [ebp - 0x1c], 0xa */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537339: je 0x537343 */ if (fZ) goto L_00537343;
L_0053733b:; BB(0x0053733b);
    /* 0053733b: cmp dword ptr [ebp - 0x1c], 0xb */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053733f: je 0x537359 */ if (fZ) goto L_00537359;
L_00537341:; BB(0x00537341);
    /* 00537341: jmp 0x53736e */ goto L_0053736e;
L_00537343:; BB(0x00537343);
    /* 00537343: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 00537349: mov eax, dword ptr [edx + 0x4ee0] */ r_eax = R32((u32)(r_edx+0x4ee0u));
    /* 0053734f: add eax, 0x7a120 */ {  u32 a = r_eax; u32 b = 0x7a120u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00537354: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00537357: jmp 0x53736e */ goto L_0053736e;
L_00537359:; BB(0x00537359);
    /* 00537359: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0053735f: mov edx, dword ptr [ecx + 0x4ee0] */ r_edx = R32((u32)(r_ecx+0x4ee0u));
    /* 00537365: add edx, 0x16e360 */ {  u32 a = r_edx; u32 b = 0x16e360u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0053736b: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_0053736e:; BB(0x0053736e);
    /* 0053736e: jmp 0x537461 */ goto L_00537461;
L_00537373:; BB(0x00537373);
    /* 00537373: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00537376: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00537379: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053737c: sub ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0053737f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00537382: cmp dword ptr [ebp - 0x20], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00537386: ja 0x5373e9 */ if ((!fC&&!fZ)) goto L_005373e9;
L_00537388:; BB(0x00537388);
    /* 00537388: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053738b: jmp dword ptr [edx*4 + 0x537488] */ { u32 t = R32((u32)(r_edx*4+0x537488u)); switch (t) { case 0x537392u: goto L_00537392; case 0x5373a8u: goto L_005373a8; case 0x5373beu: goto L_005373be; case 0x5373d5u: goto L_005373d5; case 0x53740au: goto L_0053740a; case 0x537420u: goto L_00537420; case 0x537437u: goto L_00537437; case 0x53744du: goto L_0053744d; default: UNSUP(0x0053738b, "jump table entry is not a known target"); } }
L_00537392:; BB(0x00537392);
    /* 00537392: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 00537397: mov ecx, dword ptr [eax + 0x4ee0] */ r_ecx = R32((u32)(r_eax+0x4ee0u));
    /* 0053739d: add ecx, 0x7a120 */ {  u32 a = r_ecx; u32 b = 0x7a120u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005373a3: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005373a6: jmp 0x5373e9 */ goto L_005373e9;
L_005373a8:; BB(0x005373a8);
    /* 005373a8: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 005373ae: mov eax, dword ptr [edx + 0x4ee0] */ r_eax = R32((u32)(r_edx+0x4ee0u));
    /* 005373b4: add eax, 0x1e8480 */ {  u32 a = r_eax; u32 b = 0x1e8480u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005373b9: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005373bc: jmp 0x5373e9 */ goto L_005373e9;
L_005373be:; BB(0x005373be);
    /* 005373be: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005373c4: mov edx, dword ptr [ecx + 0x4ee0] */ r_edx = R32((u32)(r_ecx+0x4ee0u));
    /* 005373ca: add edx, 0x4c4b40 */ {  u32 a = r_edx; u32 b = 0x4c4b40u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005373d0: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005373d3: jmp 0x5373e9 */ goto L_005373e9;
L_005373d5:; BB(0x005373d5);
    /* 005373d5: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 005373da: mov ecx, dword ptr [eax + 0x4ee0] */ r_ecx = R32((u32)(r_eax+0x4ee0u));
    /* 005373e0: add ecx, 0xb71b00 */ {  u32 a = r_ecx; u32 b = 0xb71b00u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005373e6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_005373e9:; BB(0x005373e9);
    /* 005373e9: jmp 0x537461 */ goto L_00537461;
L_005373eb:; BB(0x005373eb);
    /* 005373eb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005373ee: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 005373f1: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005373f4: sub eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005373f7: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005373fa: cmp dword ptr [ebp - 0x24], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005373fe: ja 0x537461 */ if ((!fC&&!fZ)) goto L_00537461;
L_00537400:; BB(0x00537400);
    /* 00537400: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00537403: jmp dword ptr [ecx*4 + 0x537498] */ { u32 t = R32((u32)(r_ecx*4+0x537498u)); switch (t) { case 0x5373d5u: goto L_005373d5; case 0x5373beu: goto L_005373be; case 0x5373a8u: goto L_005373a8; case 0x537392u: goto L_00537392; case 0x53740au: goto L_0053740a; case 0x537420u: goto L_00537420; case 0x537437u: goto L_00537437; case 0x53744du: goto L_0053744d; default: UNSUP(0x00537403, "jump table entry is not a known target"); } }
L_0053740a:; BB(0x0053740a);
    /* 0053740a: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 00537410: mov eax, dword ptr [edx + 0x4ee0] */ r_eax = R32((u32)(r_edx+0x4ee0u));
    /* 00537416: add eax, 0x927c0 */ {  u32 a = r_eax; u32 b = 0x927c0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053741b: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0053741e: jmp 0x537461 */ goto L_00537461;
L_00537420:; BB(0x00537420);
    /* 00537420: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00537426: mov edx, dword ptr [ecx + 0x4ee0] */ r_edx = R32((u32)(r_ecx+0x4ee0u));
    /* 0053742c: add edx, 0x19f0a0 */ {  u32 a = r_edx; u32 b = 0x19f0a0u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00537432: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00537435: jmp 0x537461 */ goto L_00537461;
L_00537437:; BB(0x00537437);
    /* 00537437: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 0053743c: mov ecx, dword ptr [eax + 0x4ee0] */ r_ecx = R32((u32)(r_eax+0x4ee0u));
    /* 00537442: add ecx, 0x3567e0 */ {  u32 a = r_ecx; u32 b = 0x3567e0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00537448: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0053744b: jmp 0x537461 */ goto L_00537461;
L_0053744d:; BB(0x0053744d);
    /* 0053744d: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 00537453: mov eax, dword ptr [edx + 0x4ee0] */ r_eax = R32((u32)(r_edx+0x4ee0u));
    /* 00537459: add eax, 0x632ea0 */ {  u32 a = r_eax; u32 b = 0x632ea0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053745e: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_00537461:; BB(0x00537461);
    /* 00537461: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00537464: mov esp, ebp */ r_esp = r_ebp;
    /* 00537466: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00537467: ret  */ FN_RET(0x00537260); r_esp += 4; return;
}

void f_005374b0(void) /* sub_5374B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005374b0);
    /* 005374b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005374b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005374b3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005374b6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005374b9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005374bc: call 0x537260 */ r_esp -= 4; W32(r_esp, 0x5374c1u); f_00537260();
    /* 005374c1: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005374c4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005374cb: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005374ce: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005374d1: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005374d7: mov edx, dword ptr [ecx + 0x4f10] */ r_edx = R32((u32)(r_ecx+0x4f10u));
    /* 005374dd: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005374e0: cmp dword ptr [ebp - 0x14], 0xb */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005374e4: ja 0x53764c */ if ((!fC&&!fZ)) goto L_0053764c;
L_005374ea:; BB(0x005374ea);
    /* 005374ea: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005374ed: jmp dword ptr [eax*4 + 0x537654] */ { u32 t = R32((u32)(r_eax*4+0x537654u)); switch (t) { case 0x5374f4u: goto L_005374f4; case 0x53750fu: goto L_0053750f; case 0x53752au: goto L_0053752a; case 0x537545u: goto L_00537545; case 0x53755du: goto L_0053755d; case 0x53757du: goto L_0053757d; case 0x53759du: goto L_0053759d; case 0x5375bdu: goto L_005375bd; case 0x5375dau: goto L_005375da; case 0x5375f7u: goto L_005375f7; case 0x537614u: goto L_00537614; case 0x537631u: goto L_00537631; default: UNSUP(0x005374ed, "jump table entry is not a known target"); } }
L_005374f4:; BB(0x005374f4);
    /* 005374f4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005374f7: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005374fa: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005374fd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005374ff: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00537505: call 0x5de880 */ r_esp -= 4; W32(r_esp, 0x53750au); f_005de880();
    /* 0053750a: jmp 0x53764c */ goto L_0053764c;
L_0053750f:; BB(0x0053750f);
    /* 0053750f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00537512: imul edx, edx, 0xa */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xau; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00537515: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00537518: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053751a: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00537520: call 0x5de880 */ r_esp -= 4; W32(r_esp, 0x537525u); f_005de880();
    /* 00537525: jmp 0x53764c */ goto L_0053764c;
L_0053752a:; BB(0x0053752a);
    /* 0053752a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053752d: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00537530: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00537533: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00537535: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0053753b: call 0x5de880 */ r_esp -= 4; W32(r_esp, 0x537540u); f_005de880();
    /* 00537540: jmp 0x53764c */ goto L_0053764c;
L_00537545:; BB(0x00537545);
    /* 00537545: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00537548: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0053754b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053754d: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00537553: call 0x5de880 */ r_esp -= 4; W32(r_esp, 0x537558u); f_005de880();
    /* 00537558: jmp 0x53764c */ goto L_0053764c;
L_0053755d:; BB(0x0053755d);
    /* 0053755d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00537560: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00537561: mov ecx, 5 */ r_ecx = 0x5u;
    /* 00537566: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00537566, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00537566, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00537568: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0053756b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0053756d: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00537573: call 0x5de880 */ r_esp -= 4; W32(r_esp, 0x537578u); f_005de880();
    /* 00537578: jmp 0x53764c */ goto L_0053764c;
L_0053757d:; BB(0x0053757d);
    /* 0053757d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00537580: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00537581: mov ecx, 0xa */ r_ecx = 0xau;
    /* 00537586: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00537586, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00537586, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00537588: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0053758b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0053758d: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00537593: call 0x5de880 */ r_esp -= 4; W32(r_esp, 0x537598u); f_005de880();
    /* 00537598: jmp 0x53764c */ goto L_0053764c;
L_0053759d:; BB(0x0053759d);
    /* 0053759d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005375a0: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005375a1: mov ecx, 0x19 */ r_ecx = 0x19u;
    /* 005375a6: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005375a6, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005375a6, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005375a8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005375ab: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 005375ad: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005375b3: call 0x5de880 */ r_esp -= 4; W32(r_esp, 0x5375b8u); f_005de880();
    /* 005375b8: jmp 0x53764c */ goto L_0053764c;
L_005375bd:; BB(0x005375bd);
    /* 005375bd: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005375c0: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005375c1: mov ecx, 0x32 */ r_ecx = 0x32u;
    /* 005375c6: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005375c6, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005375c6, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005375c8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005375cb: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 005375cd: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005375d3: call 0x5de880 */ r_esp -= 4; W32(r_esp, 0x5375d8u); f_005de880();
    /* 005375d8: jmp 0x53764c */ goto L_0053764c;
L_005375da:; BB(0x005375da);
    /* 005375da: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005375dd: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005375de: mov ecx, 0x64 */ r_ecx = 0x64u;
    /* 005375e3: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005375e3, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005375e3, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005375e5: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005375e8: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005375ea: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005375f0: call 0x5de880 */ r_esp -= 4; W32(r_esp, 0x5375f5u); f_005de880();
    /* 005375f5: jmp 0x53764c */ goto L_0053764c;
L_005375f7:; BB(0x005375f7);
    /* 005375f7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005375fa: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005375fb: mov ecx, 0xfa */ r_ecx = 0xfau;
    /* 00537600: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00537600, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00537600, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00537602: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00537605: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00537607: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0053760d: call 0x5de880 */ r_esp -= 4; W32(r_esp, 0x537612u); f_005de880();
    /* 00537612: jmp 0x53764c */ goto L_0053764c;
L_00537614:; BB(0x00537614);
    /* 00537614: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00537617: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00537618: mov ecx, 0x1f4 */ r_ecx = 0x1f4u;
    /* 0053761d: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0053761d, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0053761d, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0053761f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00537622: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00537624: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0053762a: call 0x5de880 */ r_esp -= 4; W32(r_esp, 0x53762fu); f_005de880();
    /* 0053762f: jmp 0x53764c */ goto L_0053764c;
L_00537631:; BB(0x00537631);
    /* 00537631: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00537634: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00537635: mov ecx, 0x3e8 */ r_ecx = 0x3e8u;
    /* 0053763a: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0053763a, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0053763a, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0053763c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0053763f: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00537641: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00537647: call 0x5de880 */ r_esp -= 4; W32(r_esp, 0x53764cu); f_005de880();
L_0053764c:; BB(0x0053764c);
    /* 0053764c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053764f: mov esp, ebp */ r_esp = r_ebp;
    /* 00537651: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00537652: ret  */ FN_RET(0x005374b0); r_esp += 4; return;
}

void f_00537880(void) /* sub_537880 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00537880);
    /* 00537880: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00537881: mov ebp, esp */ r_ebp = r_esp;
    /* 00537883: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00537886: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00537889: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053788c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053788f: mov edx, dword ptr [ecx + eax*4 + 0x58] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x58u));
    /* 00537893: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00537896: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00537899: sub eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0053789c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0053789f:; BB(0x0053789f);
    /* 0053789f: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005378a3: je 0x5378fa */ if (fZ) goto L_005378fa;
L_005378a5:; BB(0x005378a5);
    /* 005378a5: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005378a9: jge 0x5378cf */ if ((fS==fO)) goto L_005378cf;
L_005378ab:; BB(0x005378ab);
    /* 005378ab: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005378ae: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fS = ((r >> 31) & 1); }
    /* 005378b1: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005378b4: jns 0x5378c4 */ if (!fS) goto L_005378c4;
L_005378b6:; BB(0x005378b6);
    /* 005378b6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005378b9: call 0x538510 */ r_esp -= 4; W32(r_esp, 0x5378beu); f_00538510();
    /* 005378be: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005378c1: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005378c4:; BB(0x005378c4);
    /* 005378c4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005378c7: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005378ca: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005378cd: jmp 0x5378f8 */ goto L_005378f8;
L_005378cf:; BB(0x005378cf);
    /* 005378cf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005378d2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005378d5: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005378d8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005378db: call 0x538510 */ r_esp -= 4; W32(r_esp, 0x5378e0u); f_00538510();
    /* 005378e0: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005378e3: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005378e6: jle 0x5378ef */ if ((fZ||fS!=fO)) goto L_005378ef;
L_005378e8:; BB(0x005378e8);
    /* 005378e8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_005378ef:; BB(0x005378ef);
    /* 005378ef: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005378f2: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005378f5: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_005378f8:; BB(0x005378f8);
    /* 005378f8: jmp 0x53789f */ goto L_0053789f;
L_005378fa:; BB(0x005378fa);
    /* 005378fa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005378fd: mov esp, ebp */ r_esp = r_ebp;
    /* 005378ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00537900: ret 8 */ FN_RET(0x00537880); r_esp += 12; return;
}

void f_00537910(void) /* sub_537910 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00537910);
    /* 00537910: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00537911: mov ebp, esp */ r_ebp = r_esp;
    /* 00537913: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00537916: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00537919: mov eax, dword ptr [0x793394] */ r_eax = R32((u32)(0x793394u));
    /* 0053791e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00537920: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 00537926: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00537929: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53792bu); call_ind(t); }
    /* 0053792b: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0053792e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537930: je 0x537a2f */ if (fZ) goto L_00537a2f;
L_00537936:; BB(0x00537936);
    /* 00537936: cmp dword ptr [ebp + 0x10], 1 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053793a: jne 0x5379ff */ if (!fZ) goto L_005379ff;
L_00537940:; BB(0x00537940);
    /* 00537940: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00537943: mov eax, dword ptr [0x793394] */ r_eax = R32((u32)(0x793394u));
    /* 00537948: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 0053794c: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0053794f: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537953: jne 0x5379a2 */ if (!fZ) goto L_005379a2;
L_00537955:; BB(0x00537955);
    /* 00537955: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00537957: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0053795a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053795b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053795e: call 0x537880 */ r_esp -= 4; W32(r_esp, 0x537963u); f_00537880();
    /* 00537963: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00537966: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00537969: imul eax, eax, 0x16 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x16u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0053796c: add eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053796f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00537972: movsx edx, byte ptr [ecx + eax + 0x15] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+r_eax+0x15u));
    /* 00537977: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0053797a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053797d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053797e: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 00537984: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00537986: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 0053798c: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0053798f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x537991u); call_ind(t); }
    /* 00537991: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00537993: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537996: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00537999: mov al, cl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_ecx) & 0xffu);
    /* 0053799b: jmp 0x537a49 */ goto L_00537a49;
L_005379a2:; BB(0x005379a2);
    /* 005379a2: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005379a5: mov eax, dword ptr [0x793394] */ r_eax = R32((u32)(0x793394u));
    /* 005379aa: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 005379ae: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005379b1: cmp dword ptr [ebp - 0x10], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005379b5: jne 0x5379ff */ if (!fZ) goto L_005379ff;
L_005379b7:; BB(0x005379b7);
    /* 005379b7: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005379b9: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005379bc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005379bd: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005379c0: call 0x537880 */ r_esp -= 4; W32(r_esp, 0x5379c5u); f_00537880();
    /* 005379c5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005379c8: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005379cb: imul eax, eax, 0x16 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x16u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005379ce: add eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005379d1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005379d4: movsx edx, byte ptr [ecx + eax + 0x15] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+r_eax+0x15u));
    /* 005379d9: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005379dc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005379df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005379e0: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 005379e6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005379e8: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 005379ee: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 005379f1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5379f3u); call_ind(t); }
    /* 005379f3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005379f5: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005379f8: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005379fb: mov al, cl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_ecx) & 0xffu);
    /* 005379fd: jmp 0x537a49 */ goto L_00537a49;
L_005379ff:; BB(0x005379ff);
    /* 005379ff: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00537a02: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00537a03: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00537a06: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00537a07: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00537a0a: call 0x537690 */ r_esp -= 4; W32(r_esp, 0x537a0fu); f_00537690();
    /* 00537a0f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00537a10: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 00537a16: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00537a18: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 00537a1e: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00537a21: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x537a23u); call_ind(t); }
    /* 00537a23: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00537a25: cmp dword ptr [ebp + 8], eax */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537a28: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00537a2b: mov al, cl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_ecx) & 0xffu);
    /* 00537a2d: jmp 0x537a49 */ goto L_00537a49;
L_00537a2f:; BB(0x00537a2f);
    /* 00537a2f: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00537a32: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00537a33: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00537a36: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00537a37: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00537a3a: call 0x537690 */ r_esp -= 4; W32(r_esp, 0x537a3fu); f_00537690();
    /* 00537a3f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00537a41: cmp dword ptr [ebp + 8], eax */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537a44: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00537a47: mov al, cl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_ecx) & 0xffu);
L_00537a49:; BB(0x00537a49);
    /* 00537a49: mov esp, ebp */ r_esp = r_ebp;
    /* 00537a4b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00537a4c: ret 0xc */ FN_RET(0x00537910); r_esp += 16; return;
}

void f_00537a50(void) /* sub_537A50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00537a50);
    /* 00537a50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00537a51: mov ebp, esp */ r_ebp = r_esp;
    /* 00537a53: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00537a56: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00537a59: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00537a5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00537a5d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00537a5f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00537a62: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00537a63: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00537a66: call 0x537910 */ r_esp -= 4; W32(r_esp, 0x537a6bu); f_00537910();
    /* 00537a6b: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00537a6e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537a70: je 0x537aad */ if (fZ) goto L_00537aad;
L_00537a72:; BB(0x00537a72);
    /* 00537a72: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00537a75: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00537a76: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00537a78: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00537a7b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00537a7c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00537a7f: call 0x537910 */ r_esp -= 4; W32(r_esp, 0x537a84u); f_00537910();
    /* 00537a84: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00537a87: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537a89: je 0x537aad */ if (fZ) goto L_00537aad;
L_00537a8b:; BB(0x00537a8b);
    /* 00537a8b: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00537a8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00537a8f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00537a91: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00537a94: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00537a95: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00537a98: call 0x537910 */ r_esp -= 4; W32(r_esp, 0x537a9du); f_00537910();
    /* 00537a9d: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00537aa0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537aa2: je 0x537aad */ if (fZ) goto L_00537aad;
L_00537aa4:; BB(0x00537aa4);
    /* 00537aa4: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 00537aab: jmp 0x537ab4 */ goto L_00537ab4;
L_00537aad:; BB(0x00537aad);
    /* 00537aad: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_00537ab4:; BB(0x00537ab4);
    /* 00537ab4: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 00537ab7: mov esp, ebp */ r_esp = r_ebp;
    /* 00537ab9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00537aba: ret 0x10 */ FN_RET(0x00537a50); r_esp += 20; return;
}

void f_00537ac0(void) /* sub_537AC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00537ac0);
    /* 00537ac0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00537ac1: mov ebp, esp */ r_ebp = r_esp;
    /* 00537ac3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00537ac6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00537ac9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00537ad0: jmp 0x537adb */ goto L_00537adb;
L_00537ad2:; BB(0x00537ad2);
    /* 00537ad2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00537ad5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00537ad8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00537adb:; BB(0x00537adb);
    /* 00537adb: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00537adf: jge 0x537b02 */ if ((fS==fO)) goto L_00537b02;
L_00537ae1:; BB(0x00537ae1);
    /* 00537ae1: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00537ae4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00537ae5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00537ae8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00537ae9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00537aec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00537aed: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00537af0: call 0x537910 */ r_esp -= 4; W32(r_esp, 0x537af5u); f_00537910();
    /* 00537af5: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00537af8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537afa: jne 0x537b00 */ if (!fZ) goto L_00537b00;
L_00537afc:; BB(0x00537afc);
    /* 00537afc: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00537afe: jmp 0x537b04 */ goto L_00537b04;
L_00537b00:; BB(0x00537b00);
    /* 00537b00: jmp 0x537ad2 */ goto L_00537ad2;
L_00537b02:; BB(0x00537b02);
    /* 00537b02: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00537b04:; BB(0x00537b04);
    /* 00537b04: mov esp, ebp */ r_esp = r_ebp;
    /* 00537b06: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00537b07: ret 8 */ FN_RET(0x00537ac0); r_esp += 12; return;
}

void f_00537b10(void) /* sub_537B10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00537b10);
    /* 00537b10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00537b11: mov ebp, esp */ r_ebp = r_esp;
    /* 00537b13: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00537b16: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00537b19: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00537b20: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00537b27: jmp 0x537b32 */ goto L_00537b32;
L_00537b29:; BB(0x00537b29);
    /* 00537b29: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00537b2c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00537b2f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00537b32:; BB(0x00537b32);
    /* 00537b32: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00537b36: jge 0x537b5e */ if ((fS==fO)) goto L_00537b5e;
L_00537b38:; BB(0x00537b38);
    /* 00537b38: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00537b3b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00537b3c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00537b3f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00537b40: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00537b43: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00537b44: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00537b47: call 0x537910 */ r_esp -= 4; W32(r_esp, 0x537b4cu); f_00537910();
    /* 00537b4c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00537b4f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537b51: je 0x537b5c */ if (fZ) goto L_00537b5c;
L_00537b53:; BB(0x00537b53);
    /* 00537b53: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00537b56: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00537b59: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_00537b5c:; BB(0x00537b5c);
    /* 00537b5c: jmp 0x537b29 */ goto L_00537b29;
L_00537b5e:; BB(0x00537b5e);
    /* 00537b5e: movzx eax, byte ptr [ebp + 0x10] */ r_eax = (u32)R8((u32)(r_ebp+0x10u));
    /* 00537b62: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537b64: je 0x537b71 */ if (fZ) goto L_00537b71;
L_00537b66:; BB(0x00537b66);
    /* 00537b66: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00537b68: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537b6c: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00537b6f: jmp 0x537b7a */ goto L_00537b7a;
L_00537b71:; BB(0x00537b71);
    /* 00537b71: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00537b73: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00537b77: setg al */ r_eax = (r_eax & 0xffffff00u) | ((((!fZ&&fS==fO)) ? 1 : 0) & 0xffu);
L_00537b7a:; BB(0x00537b7a);
    /* 00537b7a: mov esp, ebp */ r_esp = r_ebp;
    /* 00537b7c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00537b7d: ret 0xc */ FN_RET(0x00537b10); r_esp += 16; return;
}

void f_00537b80(void) /* sub_537B80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00537b80);
    /* 00537b80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00537b81: mov ebp, esp */ r_ebp = r_esp;
    /* 00537b83: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00537b86: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00537b89: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00537b90: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00537b97: jmp 0x537ba2 */ goto L_00537ba2;
L_00537b99:; BB(0x00537b99);
    /* 00537b99: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00537b9c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00537b9f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00537ba2:; BB(0x00537ba2);
    /* 00537ba2: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00537ba6: jge 0x537bce */ if ((fS==fO)) goto L_00537bce;
L_00537ba8:; BB(0x00537ba8);
    /* 00537ba8: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00537bab: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00537bac: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00537baf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00537bb0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00537bb3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00537bb4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00537bb7: call 0x537910 */ r_esp -= 4; W32(r_esp, 0x537bbcu); f_00537910();
    /* 00537bbc: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00537bbf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537bc1: je 0x537bcc */ if (fZ) goto L_00537bcc;
L_00537bc3:; BB(0x00537bc3);
    /* 00537bc3: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00537bc6: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00537bc9: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_00537bcc:; BB(0x00537bcc);
    /* 00537bcc: jmp 0x537b99 */ goto L_00537b99;
L_00537bce:; BB(0x00537bce);
    /* 00537bce: movzx eax, byte ptr [ebp + 0x10] */ r_eax = (u32)R8((u32)(r_ebp+0x10u));
    /* 00537bd2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537bd4: je 0x537be1 */ if (fZ) goto L_00537be1;
L_00537bd6:; BB(0x00537bd6);
    /* 00537bd6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00537bd8: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537bdc: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00537bdf: jmp 0x537bea */ goto L_00537bea;
L_00537be1:; BB(0x00537be1);
    /* 00537be1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00537be3: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00537be7: setg al */ r_eax = (r_eax & 0xffffff00u) | ((((!fZ&&fS==fO)) ? 1 : 0) & 0xffu);
L_00537bea:; BB(0x00537bea);
    /* 00537bea: mov esp, ebp */ r_esp = r_ebp;
    /* 00537bec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00537bed: ret 0xc */ FN_RET(0x00537b80); r_esp += 16; return;
}

void f_00537bf0(void) /* sub_537BF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00537bf0);
    /* 00537bf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00537bf1: mov ebp, esp */ r_ebp = r_esp;
    /* 00537bf3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00537bf6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00537bf9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00537c00: jmp 0x537c0b */ goto L_00537c0b;
L_00537c02:; BB(0x00537c02);
    /* 00537c02: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00537c05: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00537c08: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00537c0b:; BB(0x00537c0b);
    /* 00537c0b: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00537c0f: jge 0x537c4d */ if ((fS==fO)) goto L_00537c4d;
L_00537c11:; BB(0x00537c11);
    /* 00537c11: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00537c14: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00537c15: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00537c18: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00537c19: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00537c1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00537c1d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00537c20: call 0x537910 */ r_esp -= 4; W32(r_esp, 0x537c25u); f_00537910();
    /* 00537c25: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00537c28: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537c2a: jne 0x537c4b */ if (!fZ) goto L_00537c4b;
L_00537c2c:; BB(0x00537c2c);
    /* 00537c2c: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00537c2f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00537c30: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00537c33: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00537c34: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00537c37: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00537c38: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00537c3b: call 0x537910 */ r_esp -= 4; W32(r_esp, 0x537c40u); f_00537910();
    /* 00537c40: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00537c43: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537c45: jne 0x537c4b */ if (!fZ) goto L_00537c4b;
L_00537c47:; BB(0x00537c47);
    /* 00537c47: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00537c49: jmp 0x537c4f */ goto L_00537c4f;
L_00537c4b:; BB(0x00537c4b);
    /* 00537c4b: jmp 0x537c02 */ goto L_00537c02;
L_00537c4d:; BB(0x00537c4d);
    /* 00537c4d: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00537c4f:; BB(0x00537c4f);
    /* 00537c4f: mov esp, ebp */ r_esp = r_ebp;
    /* 00537c51: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00537c52: ret 0xc */ FN_RET(0x00537bf0); r_esp += 16; return;
}

void f_00537c60(void) /* sub_537C60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00537c60);
    /* 00537c60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00537c61: mov ebp, esp */ r_ebp = r_esp;
    /* 00537c63: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00537c66: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00537c69: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00537c70: jmp 0x537c7b */ goto L_00537c7b;
L_00537c72:; BB(0x00537c72);
    /* 00537c72: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00537c75: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00537c78: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00537c7b:; BB(0x00537c7b);
    /* 00537c7b: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00537c7f: jge 0x537cd8 */ if ((fS==fO)) goto L_00537cd8;
L_00537c81:; BB(0x00537c81);
    /* 00537c81: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00537c84: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00537c85: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00537c88: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00537c89: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00537c8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00537c8d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00537c90: call 0x537910 */ r_esp -= 4; W32(r_esp, 0x537c95u); f_00537910();
    /* 00537c95: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00537c98: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537c9a: jne 0x537cd6 */ if (!fZ) goto L_00537cd6;
L_00537c9c:; BB(0x00537c9c);
    /* 00537c9c: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 00537c9f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00537ca0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00537ca3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00537ca4: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00537ca7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00537ca8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00537cab: call 0x537910 */ r_esp -= 4; W32(r_esp, 0x537cb0u); f_00537910();
    /* 00537cb0: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00537cb3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537cb5: jne 0x537cd6 */ if (!fZ) goto L_00537cd6;
L_00537cb7:; BB(0x00537cb7);
    /* 00537cb7: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00537cba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00537cbb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00537cbe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00537cbf: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00537cc2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00537cc3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00537cc6: call 0x537910 */ r_esp -= 4; W32(r_esp, 0x537ccbu); f_00537910();
    /* 00537ccb: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00537cce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537cd0: jne 0x537cd6 */ if (!fZ) goto L_00537cd6;
L_00537cd2:; BB(0x00537cd2);
    /* 00537cd2: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00537cd4: jmp 0x537cda */ goto L_00537cda;
L_00537cd6:; BB(0x00537cd6);
    /* 00537cd6: jmp 0x537c72 */ goto L_00537c72;
L_00537cd8:; BB(0x00537cd8);
    /* 00537cd8: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00537cda:; BB(0x00537cda);
    /* 00537cda: mov esp, ebp */ r_esp = r_ebp;
    /* 00537cdc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00537cdd: ret 0x10 */ FN_RET(0x00537c60); r_esp += 20; return;
}

void f_00537ce0(void) /* sub_537CE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00537ce0);
    /* 00537ce0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00537ce1: mov ebp, esp */ r_ebp = r_esp;
    /* 00537ce3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00537ce4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00537ce7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00537ce9: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00537cec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00537ced: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00537cf0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00537cf1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00537cf4: call 0x537910 */ r_esp -= 4; W32(r_esp, 0x537cf9u); f_00537910();
    /* 00537cf9: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00537cfc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537cfe: je 0x537d04 */ if (fZ) goto L_00537d04;
L_00537d00:; BB(0x00537d00);
    /* 00537d00: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00537d02: jmp 0x537d40 */ goto L_00537d40;
L_00537d04:; BB(0x00537d04);
    /* 00537d04: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00537d06: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00537d09: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00537d0a: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00537d0d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00537d0e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00537d11: call 0x537910 */ r_esp -= 4; W32(r_esp, 0x537d16u); f_00537910();
    /* 00537d16: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00537d19: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537d1b: je 0x537d21 */ if (fZ) goto L_00537d21;
L_00537d1d:; BB(0x00537d1d);
    /* 00537d1d: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00537d1f: jmp 0x537d40 */ goto L_00537d40;
L_00537d21:; BB(0x00537d21);
    /* 00537d21: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00537d23: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00537d26: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00537d27: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00537d2a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00537d2b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00537d2e: call 0x537910 */ r_esp -= 4; W32(r_esp, 0x537d33u); f_00537910();
    /* 00537d33: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00537d36: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537d38: je 0x537d3e */ if (fZ) goto L_00537d3e;
L_00537d3a:; BB(0x00537d3a);
    /* 00537d3a: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00537d3c: jmp 0x537d40 */ goto L_00537d40;
L_00537d3e:; BB(0x00537d3e);
    /* 00537d3e: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00537d40:; BB(0x00537d40);
    /* 00537d40: mov esp, ebp */ r_esp = r_ebp;
    /* 00537d42: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00537d43: ret 0x14 */ FN_RET(0x00537ce0); r_esp += 24; return;
}

void f_00537de0(void) /* sub_537DE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00537de0);
    /* 00537de0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00537de1: mov ebp, esp */ r_ebp = r_esp;
    /* 00537de3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00537de6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00537de9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00537df0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00537df3: cmp dword ptr [eax], 0x64 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537df6: je 0x537e01 */ if (fZ) goto L_00537e01;
L_00537df8:; BB(0x00537df8);
    /* 00537df8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00537dfb: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00537dfe: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00537e01:; BB(0x00537e01);
    /* 00537e01: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00537e04: cmp dword ptr [edx + 4], 0x64 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537e08: je 0x537e13 */ if (fZ) goto L_00537e13;
L_00537e0a:; BB(0x00537e0a);
    /* 00537e0a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00537e0d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00537e10: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00537e13:; BB(0x00537e13);
    /* 00537e13: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00537e16: cmp dword ptr [ecx + 8], 0x64 */ {  u32 a = R32((u32)(r_ecx+0x8u)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537e1a: je 0x537e25 */ if (fZ) goto L_00537e25;
L_00537e1c:; BB(0x00537e1c);
    /* 00537e1c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00537e1f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00537e22: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00537e25:; BB(0x00537e25);
    /* 00537e25: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00537e28: cmp dword ptr [eax + 0xc], 0x64 */ {  u32 a = R32((u32)(r_eax+0xcu)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537e2c: je 0x537e37 */ if (fZ) goto L_00537e37;
L_00537e2e:; BB(0x00537e2e);
    /* 00537e2e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00537e31: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00537e34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00537e37:; BB(0x00537e37);
    /* 00537e37: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00537e3a: cmp dword ptr [edx + 0x10], 0x64 */ {  u32 a = R32((u32)(r_edx+0x10u)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537e3e: je 0x537e49 */ if (fZ) goto L_00537e49;
L_00537e40:; BB(0x00537e40);
    /* 00537e40: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00537e43: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00537e46: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00537e49:; BB(0x00537e49);
    /* 00537e49: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00537e4c: mov esp, ebp */ r_esp = r_ebp;
    /* 00537e4e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00537e4f: ret 4 */ FN_RET(0x00537de0); r_esp += 8; return;
}

