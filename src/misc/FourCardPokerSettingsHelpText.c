#include "protos.h"

void f_00597080(void) /* FourCardPokerSettingsHelpText::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00597080);
    /* 00597080: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00597081: mov ebp, esp */ r_ebp = r_esp;
    /* 00597083: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00597086: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00597089: cmp dword ptr [0x163068c], 0 */ {  u32 a = R32((u32)(0x163068cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00597090: jne 0x597097 */ if (!fZ) goto L_00597097;
L_00597092:; BB(0x00597092);
    /* 00597092: jmp 0x59719a */ goto L_0059719a;
L_00597097:; BB(0x00597097);
    /* 00597097: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00597099: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0059709f: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5970a4u); f_005fb350();
    /* 005970a4: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005970a7: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 005970ae: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 005970b0: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005970b6: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5970bbu); f_005fb350();
    /* 005970bb: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005970be: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 005970c5: mov dword ptr [ebp - 8], 2 */ W32((u32)(r_ebp+0xfffffff8u), 0x2u);
    /* 005970cc: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005970d3: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 005970da: jmp 0x5970e5 */ goto L_005970e5;
L_005970dc:; BB(0x005970dc);
    /* 005970dc: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005970df: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005970e2: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
L_005970e5:; BB(0x005970e5);
    /* 005970e5: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005970e8: cmp ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005970eb: jge 0x597128 */ if ((fS==fO)) goto L_00597128;
L_005970ed:; BB(0x005970ed);
    /* 005970ed: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005970f0: cmp dword ptr [ebp + edx*8 - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+r_edx*8+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005970f5: je 0x597126 */ if (fZ) goto L_00597126;
L_005970f7:; BB(0x005970f7);
    /* 005970f7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005970fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005970fb: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005970fe: mov edx, dword ptr [ebp + ecx*8 - 0x18] */ r_edx = R32((u32)(r_ebp+r_ecx*8+0xffffffe8u));
    /* 00597102: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00597105: mov ecx, dword ptr [ebp + eax*8 - 0x18] */ r_ecx = R32((u32)(r_ebp+r_eax*8+0xffffffe8u));
    /* 00597109: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0059710b: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 00597111: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x597113u); call_ind(t); }
    /* 00597113: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00597116: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00597118: je 0x597126 */ if (fZ) goto L_00597126;
L_0059711a:; BB(0x0059711a);
    /* 0059711a: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0059711d: mov eax, dword ptr [ebp + edx*8 - 0x14] */ r_eax = R32((u32)(r_ebp+r_edx*8+0xffffffecu));
    /* 00597121: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00597124: jmp 0x597128 */ goto L_00597128;
L_00597126:; BB(0x00597126);
    /* 00597126: jmp 0x5970dc */ goto L_005970dc;
L_00597128:; BB(0x00597128);
    /* 00597128: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059712c: jne 0x597150 */ if (!fZ) goto L_00597150;
L_0059712e:; BB(0x0059712e);
    /* 0059712e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00597131: cmp dword ptr [ecx + 0x18], 3 */ {  u32 a = R32((u32)(r_ecx+0x18u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00597135: jne 0x59714c */ if (!fZ) goto L_0059714c;
L_00597137:; BB(0x00597137);
    /* 00597137: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0059713c: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0059713f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00597141: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00597144: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0059714a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x59714cu); call_ind(t); }
L_0059714c:; BB(0x0059714c);
    /* 0059714c: jmp 0x59719a */ goto L_0059719a;
L_00597150:; BB(0x00597150);
    /* 00597150: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00597154: jne 0x597176 */ if (!fZ) goto L_00597176;
L_00597156:; BB(0x00597156);
    /* 00597156: push 0x6b312c */ { u32 v = 0x6b312cu; r_esp -= 4; W32(r_esp, v); }
    /* 0059715b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x597160u); f_00630f40();
    /* 00597160: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00597163: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00597164: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00597167: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00597169: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0059716c: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00597172: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x597174u); call_ind(t); }
    /* 00597174: jmp 0x59719a */ goto L_0059719a;
L_00597176:; BB(0x00597176);
    /* 00597176: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059717a: jne 0x59719a */ if (!fZ) goto L_0059719a;
L_0059717c:; BB(0x0059717c);
    /* 0059717c: push 0x6b310c */ { u32 v = 0x6b310cu; r_esp -= 4; W32(r_esp, v); }
    /* 00597181: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x597186u); f_00630f40();
    /* 00597186: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00597189: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059718a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0059718d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0059718f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00597192: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00597198: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59719au); call_ind(t); }
L_0059719a:; BB(0x0059719a);
    /* 0059719a: mov esp, ebp */ r_esp = r_ebp;
    /* 0059719c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059719d: ret 4 */ FN_RET(0x00597080); r_esp += 8; return;
}

