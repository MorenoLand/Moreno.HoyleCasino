#include "protos.h"

void f_00589050(void) /* sub_589050 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00589050);
    /* 00589050: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00589051: mov ebp, esp */ r_ebp = r_esp;
    /* 00589053: sub esp, 0x10c */ {  u32 a = r_esp; u32 b = 0x10cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00589059: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0058905e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00589060: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00589063: mov dword ptr [ebp - 0x10c], ecx */ W32((u32)(r_ebp+0xfffffef4u), r_ecx);
    /* 00589069: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058906d: jne 0x58907d */ if (!fZ) goto L_0058907d;
L_0058906f:; BB(0x0058906f);
    /* 0058906f: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 00589074: mov ecx, dword ptr [eax + 0x98] */ r_ecx = R32((u32)(r_eax+0x98u));
    /* 0058907a: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
L_0058907d:; BB(0x0058907d);
    /* 0058907d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00589080: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00589081: push 0x6ccf64 */ { u32 v = 0x6ccf64u; r_esp -= 4; W32(r_esp, v); }
    /* 00589086: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x58908bu); f_00630f40();
    /* 0058908b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058908e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058908f: lea eax, [ebp - 0x108] */ r_eax = (u32)(r_ebp+0xfffffef8u);
    /* 00589095: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00589096: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x58909cu); call_ind(t); }
    /* 0058909c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058909f: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 005890a5: cmp dword ptr [ecx + 0x3b7c], 0 */ {  u32 a = R32((u32)(r_ecx+0x3b7cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005890ac: je 0x5890d9 */ if (fZ) goto L_005890d9;
L_005890ae:; BB(0x005890ae);
    /* 005890ae: lea edx, [ebp - 0x108] */ r_edx = (u32)(r_ebp+0xfffffef8u);
    /* 005890b4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005890b5: mov eax, dword ptr [ebp - 0x10c] */ r_eax = R32((u32)(r_ebp+0xfffffef4u));
    /* 005890bb: mov ecx, dword ptr [eax + 0x3b7c] */ r_ecx = R32((u32)(r_eax+0x3b7cu));
    /* 005890c1: mov edx, dword ptr [ebp - 0x10c] */ r_edx = R32((u32)(r_ebp+0xfffffef4u));
    /* 005890c7: mov eax, dword ptr [edx + 0x3b7c] */ r_eax = R32((u32)(r_edx+0x3b7cu));
    /* 005890cd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005890cf: mov ecx, eax */ r_ecx = r_eax;
    /* 005890d1: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 005890d7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5890d9u); call_ind(t); }
L_005890d9:; BB(0x005890d9);
    /* 005890d9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005890dc: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005890de: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x5890e3u); f_00686d72();
    /* 005890e3: mov esp, ebp */ r_esp = r_ebp;
    /* 005890e5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005890e6: ret 4 */ FN_RET(0x00589050); r_esp += 8; return;
}

void f_005890f0(void) /* sub_5890F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005890f0);
    /* 005890f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005890f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005890f3: sub esp, 0x114 */ {  u32 a = r_esp; u32 b = 0x114u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005890f9: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005890fe: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00589100: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00589103: mov dword ptr [ebp - 0x114], ecx */ W32((u32)(r_ebp+0xfffffeecu), r_ecx);
    /* 00589109: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0058910c: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0058910d: mov ecx, 0xe10 */ r_ecx = 0xe10u;
    /* 00589112: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00589112, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00589112, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00589114: mov dword ptr [ebp - 0x110], eax */ W32((u32)(r_ebp+0xfffffef0u), r_eax);
    /* 0058911a: mov edx, dword ptr [ebp - 0x110] */ r_edx = R32((u32)(r_ebp+0xfffffef0u));
    /* 00589120: imul edx, edx, 0xe10 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xe10u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00589126: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00589129: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0058912b: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0058912c: mov ecx, 0x3c */ r_ecx = 0x3cu;
    /* 00589131: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00589131, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00589131, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00589133: mov dword ptr [ebp - 0x10c], eax */ W32((u32)(r_ebp+0xfffffef4u), r_eax);
    /* 00589139: mov edx, dword ptr [ebp - 0x10c] */ r_edx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0058913f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00589140: mov eax, dword ptr [ebp - 0x110] */ r_eax = R32((u32)(r_ebp+0xfffffef0u));
    /* 00589146: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00589147: push 0x6ccf80 */ { u32 v = 0x6ccf80u; r_esp -= 4; W32(r_esp, v); }
    /* 0058914c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x589151u); f_00630f40();
    /* 00589151: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00589154: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00589155: lea ecx, [ebp - 0x108] */ r_ecx = (u32)(r_ebp+0xfffffef8u);
    /* 0058915b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058915c: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x589162u); call_ind(t); }
    /* 00589162: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00589165: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0058916b: cmp dword ptr [edx + 0x3b80], 0 */ {  u32 a = R32((u32)(r_edx+0x3b80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00589172: je 0x58919d */ if (fZ) goto L_0058919d;
L_00589174:; BB(0x00589174);
    /* 00589174: lea eax, [ebp - 0x108] */ r_eax = (u32)(r_ebp+0xfffffef8u);
    /* 0058917a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058917b: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 00589181: mov edx, dword ptr [ecx + 0x3b80] */ r_edx = R32((u32)(r_ecx+0x3b80u));
    /* 00589187: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0058918d: mov ecx, dword ptr [eax + 0x3b80] */ r_ecx = R32((u32)(r_eax+0x3b80u));
    /* 00589193: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00589195: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0058919b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58919du); call_ind(t); }
L_0058919d:; BB(0x0058919d);
    /* 0058919d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005891a0: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005891a2: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x5891a7u); f_00686d72();
    /* 005891a7: mov esp, ebp */ r_esp = r_ebp;
    /* 005891a9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005891aa: ret 4 */ FN_RET(0x005890f0); r_esp += 8; return;
}

void f_005891b0(void) /* sub_5891B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005891b0);
    /* 005891b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005891b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005891b3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005891b6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005891b9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005891c0: jmp 0x5891cb */ goto L_005891cb;
L_005891c2:; BB(0x005891c2);
    /* 005891c2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005891c5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005891c8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005891cb:; BB(0x005891cb);
    /* 005891cb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005891ce: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005891d1: cmp edx, dword ptr [ecx + 0x3c04] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x3c04u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005891d7: jge 0x589264 */ if ((fS==fO)) goto L_00589264;
L_005891dd:; BB(0x005891dd);
    /* 005891dd: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005891e4: jmp 0x5891ef */ goto L_005891ef;
L_005891e6:; BB(0x005891e6);
    /* 005891e6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005891e9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005891ec: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005891ef:; BB(0x005891ef);
    /* 005891ef: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005891f2: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005891f5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005891f8: cmp eax, dword ptr [edx + ecx*4 + 0x3bf4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+r_ecx*4+0x3bf4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005891ff: jge 0x58925f */ if ((fS==fO)) goto L_0058925f;
L_00589201:; BB(0x00589201);
    /* 00589201: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00589204: imul ecx, ecx, 0xe10 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xe10u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0058920a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058920d: lea eax, [edx + ecx + 0x328] */ r_eax = (u32)(r_edx+r_ecx+0x328u);
    /* 00589214: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00589217: imul ecx, ecx, 0x24 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x24u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0058921a: cmp dword ptr [eax + ecx + 0x1c], 0 */ {  u32 a = R32((u32)(r_eax+r_ecx+0x1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058921f: je 0x58925d */ if (fZ) goto L_0058925d;
L_00589221:; BB(0x00589221);
    /* 00589221: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00589224: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00589225: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00589228: imul eax, eax, 0xe10 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xe10u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0058922e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00589231: lea edx, [ecx + eax + 0x328] */ r_edx = (u32)(r_ecx+r_eax+0x328u);
    /* 00589238: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058923b: imul eax, eax, 0x24 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x24u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0058923e: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00589240: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00589241: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00589244: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00589247: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058924a: lea eax, [edx + ecx + 0x3ba4] */ r_eax = (u32)(r_edx+r_ecx+0x3ba4u);
    /* 00589251: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00589252: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00589258: call 0x5e2b90 */ r_esp -= 4; W32(r_esp, 0x58925du); f_005e2b90();
L_0058925d:; BB(0x0058925d);
    /* 0058925d: jmp 0x5891e6 */ goto L_005891e6;
L_0058925f:; BB(0x0058925f);
    /* 0058925f: jmp 0x5891c2 */ goto L_005891c2;
L_00589264:; BB(0x00589264);
    /* 00589264: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00589267: mov ecx, dword ptr [ecx + 0x3b68] */ r_ecx = R32((u32)(r_ecx+0x3b68u));
    /* 0058926d: call 0x585eb0 */ r_esp -= 4; W32(r_esp, 0x589272u); f_00585eb0();
    /* 00589272: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00589275: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00589277: jne 0x589281 */ if (!fZ) goto L_00589281;
L_00589279:; BB(0x00589279);
    /* 00589279: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058927c: call 0x589290 */ r_esp -= 4; W32(r_esp, 0x589281u); f_00589290();
L_00589281:; BB(0x00589281);
    /* 00589281: mov esp, ebp */ r_esp = r_ebp;
    /* 00589283: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00589284: ret  */ FN_RET(0x005891b0); r_esp += 4; return;
}

