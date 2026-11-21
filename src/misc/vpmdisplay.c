#include "protos.h"

void f_005604b0(void) /* vpmdisplay::func_005604b0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005604b0);
    /* 005604b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005604b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005604b3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005604b6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005604b9: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 005604be: mov ecx, dword ptr [eax + 0x4f14] */ r_ecx = R32((u32)(r_eax+0x4f14u));
    /* 005604c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005604c7: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005604cb: jl 0x5604d3 */ if ((fS!=fO)) goto L_005604d3;
L_005604cd:; BB(0x005604cd);
    /* 005604cd: cmp dword ptr [ebp + 8], 0xb */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005604d1: jle 0x5604dd */ if ((fZ||fS!=fO)) goto L_005604dd;
L_005604d3:; BB(0x005604d3);
    /* 005604d3: mov eax, 0x31222a */ r_eax = 0x31222au;
    /* 005604d8: jmp 0x560577 */ goto L_00560577;
L_005604dd:; BB(0x005604dd);
    /* 005604dd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005604e0: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005604e3: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005604e7: je 0x5604f7 */ if (fZ) goto L_005604f7;
L_005604e9:; BB(0x005604e9);
    /* 005604e9: cmp dword ptr [ebp - 0xc], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005604ed: je 0x560520 */ if (fZ) goto L_00560520;
L_005604ef:; BB(0x005604ef);
    /* 005604ef: cmp dword ptr [ebp - 0xc], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005604f3: je 0x560549 */ if (fZ) goto L_00560549;
L_005604f5:; BB(0x005604f5);
    /* 005604f5: jmp 0x560572 */ goto L_00560572;
L_005604f7:; BB(0x005604f7);
    /* 005604f7: cmp dword ptr [ebp + 8], 8 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005604fb: jle 0x560514 */ if ((fZ||fS!=fO)) goto L_00560514;
L_005604fd:; BB(0x005604fd);
    /* 005604fd: push 0x12e */ { u32 v = 0x12eu; r_esp -= 4; W32(r_esp, v); }
    /* 00560502: push 0x6c9734 */ { u32 v = 0x6c9734u; r_esp -= 4; W32(r_esp, v); }
    /* 00560507: push 0x6c9724 */ { u32 v = 0x6c9724u; r_esp -= 4; W32(r_esp, v); }
    /* 0056050c: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x560511u); f_005e9f20();
    /* 00560511: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00560514:; BB(0x00560514);
    /* 00560514: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00560517: mov eax, dword ptr [ecx*4 + 0x743e6c] */ r_eax = R32((u32)(r_ecx*4+0x743e6cu));
    /* 0056051e: jmp 0x560577 */ goto L_00560577;
L_00560520:; BB(0x00560520);
    /* 00560520: cmp dword ptr [ebp + 8], 9 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00560524: jle 0x56053d */ if ((fZ||fS!=fO)) goto L_0056053d;
L_00560526:; BB(0x00560526);
    /* 00560526: push 0x131 */ { u32 v = 0x131u; r_esp -= 4; W32(r_esp, v); }
    /* 0056052b: push 0x6c9734 */ { u32 v = 0x6c9734u; r_esp -= 4; W32(r_esp, v); }
    /* 00560530: push 0x6c9714 */ { u32 v = 0x6c9714u; r_esp -= 4; W32(r_esp, v); }
    /* 00560535: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x56053au); f_005e9f20();
    /* 0056053a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0056053d:; BB(0x0056053d);
    /* 0056053d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00560540: mov eax, dword ptr [eax*4 + 0x743e44] */ r_eax = R32((u32)(r_eax*4+0x743e44u));
    /* 00560547: jmp 0x560577 */ goto L_00560577;
L_00560549:; BB(0x00560549);
    /* 00560549: cmp dword ptr [ebp + 8], 0xa */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056054d: jle 0x560566 */ if ((fZ||fS!=fO)) goto L_00560566;
L_0056054f:; BB(0x0056054f);
    /* 0056054f: push 0x134 */ { u32 v = 0x134u; r_esp -= 4; W32(r_esp, v); }
    /* 00560554: push 0x6c9734 */ { u32 v = 0x6c9734u; r_esp -= 4; W32(r_esp, v); }
    /* 00560559: push 0x6c9700 */ { u32 v = 0x6c9700u; r_esp -= 4; W32(r_esp, v); }
    /* 0056055e: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x560563u); f_005e9f20();
    /* 00560563: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00560566:; BB(0x00560566);
    /* 00560566: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00560569: mov eax, dword ptr [edx*4 + 0x743e18] */ r_eax = R32((u32)(r_edx*4+0x743e18u));
    /* 00560570: jmp 0x560577 */ goto L_00560577;
L_00560572:; BB(0x00560572);
    /* 00560572: mov eax, 0x31222a */ r_eax = 0x31222au;
L_00560577:; BB(0x00560577);
    /* 00560577: mov esp, ebp */ r_esp = r_ebp;
    /* 00560579: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056057a: ret 4 */ FN_RET(0x005604b0); r_esp += 8; return;
}

void f_005615d0(void) /* vpmdisplay::func_005615d0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005615d0);
    /* 005615d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005615d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005615d3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005615d6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005615d9: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 005615de: mov ecx, dword ptr [eax + 0x4f14] */ r_ecx = R32((u32)(r_eax+0x4f14u));
    /* 005615e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005615e7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005615ea: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005615ed: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005615f1: je 0x561601 */ if (fZ) goto L_00561601;
L_005615f3:; BB(0x005615f3);
    /* 005615f3: cmp dword ptr [ebp - 0xc], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005615f7: je 0x561627 */ if (fZ) goto L_00561627;
L_005615f9:; BB(0x005615f9);
    /* 005615f9: cmp dword ptr [ebp - 0xc], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005615fd: je 0x56164d */ if (fZ) goto L_0056164d;
L_005615ff:; BB(0x005615ff);
    /* 005615ff: jmp 0x561673 */ goto L_00561673;
L_00561601:; BB(0x00561601);
    /* 00561601: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00561604: mov dword ptr [eax], 0x31224e */ W32((u32)(r_eax), 0x31224eu);
    /* 0056160a: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0056160d: mov dword ptr [ecx], 0x312250 */ W32((u32)(r_ecx), 0x312250u);
    /* 00561613: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00561616: mov dword ptr [edx], 0x31224f */ W32((u32)(r_edx), 0x31224fu);
    /* 0056161c: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0056161f: mov dword ptr [eax], 9 */ W32((u32)(r_eax), 0x9u);
    /* 00561625: jmp 0x561697 */ goto L_00561697;
L_00561627:; BB(0x00561627);
    /* 00561627: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0056162a: mov dword ptr [ecx], 0x312254 */ W32((u32)(r_ecx), 0x312254u);
    /* 00561630: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00561633: mov dword ptr [edx], 0x312255 */ W32((u32)(r_edx), 0x312255u);
    /* 00561639: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0056163c: mov dword ptr [eax], 0x312256 */ W32((u32)(r_eax), 0x312256u);
    /* 00561642: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00561645: mov dword ptr [ecx], 0xa */ W32((u32)(r_ecx), 0xau);
    /* 0056164b: jmp 0x561697 */ goto L_00561697;
L_0056164d:; BB(0x0056164d);
    /* 0056164d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00561650: mov dword ptr [edx], 0x312251 */ W32((u32)(r_edx), 0x312251u);
    /* 00561656: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00561659: mov dword ptr [eax], 0x312253 */ W32((u32)(r_eax), 0x312253u);
    /* 0056165f: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00561662: mov dword ptr [ecx], 0x312252 */ W32((u32)(r_ecx), 0x312252u);
    /* 00561668: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0056166b: mov dword ptr [edx], 0xb */ W32((u32)(r_edx), 0xbu);
    /* 00561671: jmp 0x561697 */ goto L_00561697;
L_00561673:; BB(0x00561673);
    /* 00561673: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00561676: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 0056167c: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0056167f: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 00561685: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00561688: mov dword ptr [edx], 0 */ W32((u32)(r_edx), 0x0u);
    /* 0056168e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00561691: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
L_00561697:; BB(0x00561697);
    /* 00561697: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0056169a: cmp dword ptr [ecx], 0xb */ {  u32 a = R32((u32)(r_ecx)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056169d: jle 0x5616b6 */ if ((fZ||fS!=fO)) goto L_005616b6;
L_0056169f:; BB(0x0056169f);
    /* 0056169f: push 0x1fb */ { u32 v = 0x1fbu; r_esp -= 4; W32(r_esp, v); }
    /* 005616a4: push 0x6c9734 */ { u32 v = 0x6c9734u; r_esp -= 4; W32(r_esp, v); }
    /* 005616a9: push 0x6c97a4 */ { u32 v = 0x6c97a4u; r_esp -= 4; W32(r_esp, v); }
    /* 005616ae: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5616b3u); f_005e9f20();
    /* 005616b3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005616b6:; BB(0x005616b6);
    /* 005616b6: mov esp, ebp */ r_esp = r_ebp;
    /* 005616b8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005616b9: ret 0x10 */ FN_RET(0x005615d0); r_esp += 20; return;
}

void f_005629a0(void) /* vpmdisplay::func_005629a0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005629a0);
    /* 005629a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005629a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005629a3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005629a6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005629a9: mov dword ptr [ebp - 8], 6 */ W32((u32)(r_ebp+0xfffffff8u), 0x6u);
    /* 005629b0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005629b3: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005629b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005629b7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005629b9: call 0x62fc30 */ r_esp -= 4; W32(r_esp, 0x5629beu); f_0062fc30();
    /* 005629be: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005629c1: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005629c4: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005629c8: jl 0x5629d0 */ if ((fS!=fO)) goto L_005629d0;
L_005629ca:; BB(0x005629ca);
    /* 005629ca: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005629ce: jle 0x5629e7 */ if ((fZ||fS!=fO)) goto L_005629e7;
L_005629d0:; BB(0x005629d0);
    /* 005629d0: push 0x444 */ { u32 v = 0x444u; r_esp -= 4; W32(r_esp, v); }
    /* 005629d5: push 0x6c9734 */ { u32 v = 0x6c9734u; r_esp -= 4; W32(r_esp, v); }
    /* 005629da: push 0x6c97c4 */ { u32 v = 0x6c97c4u; r_esp -= 4; W32(r_esp, v); }
    /* 005629df: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5629e4u); f_005e9f20();
    /* 005629e4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005629e7:; BB(0x005629e7);
    /* 005629e7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005629ea: mov eax, dword ptr [edx*4 + 0x743e90] */ r_eax = R32((u32)(r_edx*4+0x743e90u));
    /* 005629f1: mov esp, ebp */ r_esp = r_ebp;
    /* 005629f3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005629f4: ret  */ FN_RET(0x005629a0); r_esp += 4; return;
}

void f_00562eb0(void) /* vpmdisplay::func_00562eb0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00562eb0);
    /* 00562eb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00562eb1: mov ebp, esp */ r_ebp = r_esp;
    /* 00562eb3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00562eb6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00562eb9: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 00562ebe: mov ecx, dword ptr [eax + 0x4f14] */ r_ecx = R32((u32)(r_eax+0x4f14u));
    /* 00562ec4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00562ec7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00562eca: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00562ecd: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00562ed1: je 0x562ee1 */ if (fZ) goto L_00562ee1;
L_00562ed3:; BB(0x00562ed3);
    /* 00562ed3: cmp dword ptr [ebp - 0xc], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00562ed7: je 0x562ef0 */ if (fZ) goto L_00562ef0;
L_00562ed9:; BB(0x00562ed9);
    /* 00562ed9: cmp dword ptr [ebp - 0xc], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00562edd: je 0x562eff */ if (fZ) goto L_00562eff;
L_00562edf:; BB(0x00562edf);
    /* 00562edf: jmp 0x562f0e */ goto L_00562f0e;
L_00562ee1:; BB(0x00562ee1);
    /* 00562ee1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00562ee4: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00562ee7: mov eax, dword ptr [ecx*4 + 0x743efc] */ r_eax = R32((u32)(r_ecx*4+0x743efcu));
    /* 00562eee: jmp 0x562f2b */ goto L_00562f2b;
L_00562ef0:; BB(0x00562ef0);
    /* 00562ef0: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00562ef3: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 00562ef6: mov eax, dword ptr [eax*4 + 0x743ed4] */ r_eax = R32((u32)(r_eax*4+0x743ed4u));
    /* 00562efd: jmp 0x562f2b */ goto L_00562f2b;
L_00562eff:; BB(0x00562eff);
    /* 00562eff: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00562f02: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 00562f05: mov eax, dword ptr [edx*4 + 0x743ea8] */ r_eax = R32((u32)(r_edx*4+0x743ea8u));
    /* 00562f0c: jmp 0x562f2b */ goto L_00562f2b;
L_00562f0e:; BB(0x00562f0e);
    /* 00562f0e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00562f10: jne 0x562f29 */ if (!fZ) goto L_00562f29;
L_00562f12:; BB(0x00562f12);
    /* 00562f12: push 0x4bd */ { u32 v = 0x4bdu; r_esp -= 4; W32(r_esp, v); }
    /* 00562f17: push 0x6c9734 */ { u32 v = 0x6c9734u; r_esp -= 4; W32(r_esp, v); }
    /* 00562f1c: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 00562f21: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x562f26u); f_005e9f20();
    /* 00562f26: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00562f29:; BB(0x00562f29);
    /* 00562f29: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00562f2b:; BB(0x00562f2b);
    /* 00562f2b: mov esp, ebp */ r_esp = r_ebp;
    /* 00562f2d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00562f2e: ret  */ FN_RET(0x00562eb0); r_esp += 4; return;
}

void f_00562f30(void) /* vpmdisplay::func_00562f30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00562f30);
    /* 00562f30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00562f31: mov ebp, esp */ r_ebp = r_esp;
    /* 00562f33: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00562f36: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00562f39: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 00562f3e: mov ecx, dword ptr [eax + 0x4f14] */ r_ecx = R32((u32)(r_eax+0x4f14u));
    /* 00562f44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00562f47: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00562f4a: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00562f4d: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00562f51: je 0x562f61 */ if (fZ) goto L_00562f61;
L_00562f53:; BB(0x00562f53);
    /* 00562f53: cmp dword ptr [ebp - 0xc], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00562f57: je 0x562f70 */ if (fZ) goto L_00562f70;
L_00562f59:; BB(0x00562f59);
    /* 00562f59: cmp dword ptr [ebp - 0xc], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00562f5d: je 0x562f7f */ if (fZ) goto L_00562f7f;
L_00562f5f:; BB(0x00562f5f);
    /* 00562f5f: jmp 0x562f8e */ goto L_00562f8e;
L_00562f61:; BB(0x00562f61);
    /* 00562f61: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00562f64: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00562f67: mov eax, dword ptr [ecx*4 + 0x743f74] */ r_eax = R32((u32)(r_ecx*4+0x743f74u));
    /* 00562f6e: jmp 0x562fab */ goto L_00562fab;
L_00562f70:; BB(0x00562f70);
    /* 00562f70: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00562f73: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 00562f76: mov eax, dword ptr [eax*4 + 0x743f4c] */ r_eax = R32((u32)(r_eax*4+0x743f4cu));
    /* 00562f7d: jmp 0x562fab */ goto L_00562fab;
L_00562f7f:; BB(0x00562f7f);
    /* 00562f7f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00562f82: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 00562f85: mov eax, dword ptr [edx*4 + 0x743f20] */ r_eax = R32((u32)(r_edx*4+0x743f20u));
    /* 00562f8c: jmp 0x562fab */ goto L_00562fab;
L_00562f8e:; BB(0x00562f8e);
    /* 00562f8e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00562f90: jne 0x562fa9 */ if (!fZ) goto L_00562fa9;
L_00562f92:; BB(0x00562f92);
    /* 00562f92: push 0x4cf */ { u32 v = 0x4cfu; r_esp -= 4; W32(r_esp, v); }
    /* 00562f97: push 0x6c9734 */ { u32 v = 0x6c9734u; r_esp -= 4; W32(r_esp, v); }
    /* 00562f9c: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 00562fa1: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x562fa6u); f_005e9f20();
    /* 00562fa6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00562fa9:; BB(0x00562fa9);
    /* 00562fa9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00562fab:; BB(0x00562fab);
    /* 00562fab: mov esp, ebp */ r_esp = r_ebp;
    /* 00562fad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00562fae: ret  */ FN_RET(0x00562f30); r_esp += 4; return;
}

void f_00564d10(void) /* vpmdisplay::func_00564d10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00564d10);
    /* 00564d10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00564d11: mov ebp, esp */ r_ebp = r_esp;
    /* 00564d13: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00564d16: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00564d19: mov ax, word ptr [ebp + 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 00564d1d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00564d1e: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x564d23u); f_00641280();
    /* 00564d23: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00564d26: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00564d29: mov cx, word ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 00564d2d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00564d2e: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x564d33u); f_00641290();
    /* 00564d33: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00564d36: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00564d39: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00564d40: mov dx, word ptr [ebp + 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 00564d44: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00564d45: mov ecx, dword ptr [0x793444] */ r_ecx = R32((u32)(0x793444u));
    /* 00564d4b: call 0x5593d0 */ r_esp -= 4; W32(r_esp, 0x564d50u); f_005593d0();
    /* 00564d50: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00564d52: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00564d55: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00564d58: mov byte ptr [ebp - 1], cl */ W8((u32)(r_ebp+0xffffffffu), (u8)r_ecx);
    /* 00564d5b: movzx edx, byte ptr [ebp - 1] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 00564d5f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00564d61: je 0x564dc0 */ if (fZ) goto L_00564dc0;
L_00564d63:; BB(0x00564d63);
    /* 00564d63: cmp dword ptr [ebp - 0xc], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00564d67: jne 0x564db0 */ if (!fZ) goto L_00564db0;
L_00564d69:; BB(0x00564d69);
    /* 00564d69: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00564d6c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00564d6f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00564d72: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00564d75: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00564d78: cmp dword ptr [ebp - 0x18], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00564d7c: ja 0x564db0 */ if ((!fC&&!fZ)) goto L_00564db0;
L_00564d7e:; BB(0x00564d7e);
    /* 00564d7e: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00564d81: jmp dword ptr [edx*4 + 0x564e58] */ { u32 t = R32((u32)(r_edx*4+0x564e58u)); switch (t) { case 0x564d92u: goto L_00564d92; case 0x564d9cu: goto L_00564d9c; case 0x564da6u: goto L_00564da6; case 0x564d88u: goto L_00564d88; case 0x564defu: goto L_00564def; case 0x564df8u: goto L_00564df8; case 0x564e01u: goto L_00564e01; case 0x564e0au: goto L_00564e0a; default: UNSUP(0x00564d81, "jump table entry is not a known target"); } }
L_00564d88:; BB(0x00564d88);
    /* 00564d88: mov eax, 0x36 */ r_eax = 0x36u;
    /* 00564d8d: jmp 0x564e50 */ goto L_00564e50;
L_00564d92:; BB(0x00564d92);
    /* 00564d92: mov eax, 0x37 */ r_eax = 0x37u;
    /* 00564d97: jmp 0x564e50 */ goto L_00564e50;
L_00564d9c:; BB(0x00564d9c);
    /* 00564d9c: mov eax, 0x38 */ r_eax = 0x38u;
    /* 00564da1: jmp 0x564e50 */ goto L_00564e50;
L_00564da6:; BB(0x00564da6);
    /* 00564da6: mov eax, 0x39 */ r_eax = 0x39u;
    /* 00564dab: jmp 0x564e50 */ goto L_00564e50;
L_00564db0:; BB(0x00564db0);
    /* 00564db0: cmp dword ptr [ebp - 0xc], 0xf */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00564db4: jne 0x564dc0 */ if (!fZ) goto L_00564dc0;
L_00564db6:; BB(0x00564db6);
    /* 00564db6: mov eax, 0x3a */ r_eax = 0x3au;
    /* 00564dbb: jmp 0x564e50 */ goto L_00564e50;
L_00564dc0:; BB(0x00564dc0);
    /* 00564dc0: cmp dword ptr [ebp - 0xc], 0xf */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00564dc4: jne 0x564dd0 */ if (!fZ) goto L_00564dd0;
L_00564dc6:; BB(0x00564dc6);
    /* 00564dc6: mov eax, 0x34 */ r_eax = 0x34u;
    /* 00564dcb: jmp 0x564e50 */ goto L_00564e50;
L_00564dd0:; BB(0x00564dd0);
    /* 00564dd0: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00564dd3: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00564dd6: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00564dd9: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00564ddc: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00564ddf: cmp dword ptr [ebp - 0x1c], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00564de3: ja 0x564e13 */ if ((!fC&&!fZ)) goto L_00564e13;
L_00564de5:; BB(0x00564de5);
    /* 00564de5: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00564de8: jmp dword ptr [edx*4 + 0x564e68] */ { u32 t = R32((u32)(r_edx*4+0x564e68u)); switch (t) { case 0x564d88u: goto L_00564d88; case 0x564da6u: goto L_00564da6; case 0x564d9cu: goto L_00564d9c; case 0x564d92u: goto L_00564d92; case 0x564defu: goto L_00564def; case 0x564df8u: goto L_00564df8; case 0x564e01u: goto L_00564e01; case 0x564e0au: goto L_00564e0a; default: UNSUP(0x00564de8, "jump table entry is not a known target"); } }
L_00564def:; BB(0x00564def);
    /* 00564def: mov dword ptr [ebp - 8], 0xd */ W32((u32)(r_ebp+0xfffffff8u), 0xdu);
    /* 00564df6: jmp 0x564e35 */ goto L_00564e35;
L_00564df8:; BB(0x00564df8);
    /* 00564df8: mov dword ptr [ebp - 8], 0x1a */ W32((u32)(r_ebp+0xfffffff8u), 0x1au);
    /* 00564dff: jmp 0x564e35 */ goto L_00564e35;
L_00564e01:; BB(0x00564e01);
    /* 00564e01: mov dword ptr [ebp - 8], 0x27 */ W32((u32)(r_ebp+0xfffffff8u), 0x27u);
    /* 00564e08: jmp 0x564e35 */ goto L_00564e35;
L_00564e0a:; BB(0x00564e0a);
    /* 00564e0a: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00564e11: jmp 0x564e35 */ goto L_00564e35;
L_00564e13:; BB(0x00564e13);
    /* 00564e13: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00564e15: jne 0x564e2e */ if (!fZ) goto L_00564e2e;
L_00564e17:; BB(0x00564e17);
    /* 00564e17: push 0x7df */ { u32 v = 0x7dfu; r_esp -= 4; W32(r_esp, v); }
    /* 00564e1c: push 0x6c9734 */ { u32 v = 0x6c9734u; r_esp -= 4; W32(r_esp, v); }
    /* 00564e21: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00564e26: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x564e2bu); f_005e9f20();
    /* 00564e2b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00564e2e:; BB(0x00564e2e);
    /* 00564e2e: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_00564e35:; BB(0x00564e35);
    /* 00564e35: cmp dword ptr [ebp - 0xc], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00564e39: je 0x564e41 */ if (fZ) goto L_00564e41;
L_00564e3b:; BB(0x00564e3b);
    /* 00564e3b: cmp dword ptr [ebp - 0xc], 0xe */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00564e3f: jne 0x564e46 */ if (!fZ) goto L_00564e46;
L_00564e41:; BB(0x00564e41);
    /* 00564e41: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00564e44: jmp 0x564e50 */ goto L_00564e50;
L_00564e46:; BB(0x00564e46);
    /* 00564e46: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00564e49: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00564e4c: lea eax, [eax + edx - 1] */ r_eax = (u32)(r_eax+r_edx+0xffffffffu);
L_00564e50:; BB(0x00564e50);
    /* 00564e50: mov esp, ebp */ r_esp = r_ebp;
    /* 00564e52: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00564e53: ret 4 */ FN_RET(0x00564d10); r_esp += 8; return;
}

void f_00565d90(void) /* vpmdisplay::func_00565d90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00565d90);
    /* 00565d90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00565d91: mov ebp, esp */ r_ebp = r_esp;
    /* 00565d93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00565d94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00565d97: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00565d9a: call 0x565c70 */ r_esp -= 4; W32(r_esp, 0x565d9fu); f_00565c70();
    /* 00565d9f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00565da2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00565da4: je 0x565dcd */ if (fZ) goto L_00565dcd;
L_00565da6:; BB(0x00565da6);
    /* 00565da6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00565da9: call 0x566380 */ r_esp -= 4; W32(r_esp, 0x565daeu); f_00566380();
    /* 00565dae: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00565db1: jg 0x565dc1 */ if ((!fZ&&fS==fO)) goto L_00565dc1;
L_00565db3:; BB(0x00565db3);
    /* 00565db3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00565db6: mov eax, dword ptr [ecx*4 + 0x743cac] */ r_eax = R32((u32)(r_ecx*4+0x743cacu));
    /* 00565dbd: jmp 0x565e1c */ goto L_00565e1c;
L_00565dc1:; BB(0x00565dc1);
    /* 00565dc1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00565dc4: mov eax, dword ptr [edx*4 + 0x743cc8] */ r_eax = R32((u32)(r_edx*4+0x743cc8u));
    /* 00565dcb: jmp 0x565e1c */ goto L_00565e1c;
L_00565dcd:; BB(0x00565dcd);
    /* 00565dcd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00565dd0: call 0x566380 */ r_esp -= 4; W32(r_esp, 0x565dd5u); f_00566380();
    /* 00565dd5: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00565dd8: jg 0x565de6 */ if ((!fZ&&fS==fO)) goto L_00565de6;
L_00565dda:; BB(0x00565dda);
    /* 00565dda: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00565ddd: mov eax, dword ptr [eax*4 + 0x743cec] */ r_eax = R32((u32)(r_eax*4+0x743cecu));
    /* 00565de4: jmp 0x565e1c */ goto L_00565e1c;
L_00565de6:; BB(0x00565de6);
    /* 00565de6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00565de8: jne 0x565e01 */ if (!fZ) goto L_00565e01;
L_00565dea:; BB(0x00565dea);
    /* 00565dea: push 0x980 */ { u32 v = 0x980u; r_esp -= 4; W32(r_esp, v); }
    /* 00565def: push 0x6c9734 */ { u32 v = 0x6c9734u; r_esp -= 4; W32(r_esp, v); }
    /* 00565df4: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 00565df9: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x565dfeu); f_005e9f20();
    /* 00565dfe: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00565e01:; BB(0x00565e01);
    /* 00565e01: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00565e04: call 0x566380 */ r_esp -= 4; W32(r_esp, 0x565e09u); f_00566380();
    /* 00565e09: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00565e0c: jg 0x565e1a */ if ((!fZ&&fS==fO)) goto L_00565e1a;
L_00565e0e:; BB(0x00565e0e);
    /* 00565e0e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00565e11: mov eax, dword ptr [eax*4 + 0x743cec] */ r_eax = R32((u32)(r_eax*4+0x743cecu));
    /* 00565e18: jmp 0x565e1c */ goto L_00565e1c;
L_00565e1a:; BB(0x00565e1a);
    /* 00565e1a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00565e1c:; BB(0x00565e1c);
    /* 00565e1c: mov esp, ebp */ r_esp = r_ebp;
    /* 00565e1e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00565e1f: ret 4 */ FN_RET(0x00565d90); r_esp += 8; return;
}

void f_00566b00(void) /* vpmdisplay::func_00566b00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00566b00);
    /* 00566b00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00566b01: mov ebp, esp */ r_ebp = r_esp;
    /* 00566b03: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00566b06: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00566b09: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00566b10: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 00566b15: mov ecx, dword ptr [eax + 0x4f14] */ r_ecx = R32((u32)(r_eax+0x4f14u));
    /* 00566b1b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00566b1e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00566b21: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00566b24: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00566b28: je 0x566b3b */ if (fZ) goto L_00566b3b;
L_00566b2a:; BB(0x00566b2a);
    /* 00566b2a: cmp dword ptr [ebp - 0x18], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00566b2e: je 0x566b67 */ if (fZ) goto L_00566b67;
L_00566b30:; BB(0x00566b30);
    /* 00566b30: cmp dword ptr [ebp - 0x18], 0xa */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00566b34: je 0x566b93 */ if (fZ) goto L_00566b93;
L_00566b36:; BB(0x00566b36);
    /* 00566b36: jmp 0x566bbd */ goto L_00566bbd;
L_00566b3b:; BB(0x00566b3b);
    /* 00566b3b: cmp dword ptr [ebp + 8], 8 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00566b3f: jle 0x566b58 */ if ((fZ||fS!=fO)) goto L_00566b58;
L_00566b41:; BB(0x00566b41);
    /* 00566b41: push 0xb03 */ { u32 v = 0xb03u; r_esp -= 4; W32(r_esp, v); }
    /* 00566b46: push 0x6c9734 */ { u32 v = 0x6c9734u; r_esp -= 4; W32(r_esp, v); }
    /* 00566b4b: push 0x6c9724 */ { u32 v = 0x6c9724u; r_esp -= 4; W32(r_esp, v); }
    /* 00566b50: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x566b55u); f_005e9f20();
    /* 00566b55: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00566b58:; BB(0x00566b58);
    /* 00566b58: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00566b5b: mov edx, dword ptr [ecx*4 + 0x7448fc] */ r_edx = R32((u32)(r_ecx*4+0x7448fcu));
    /* 00566b62: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00566b65: jmp 0x566bbd */ goto L_00566bbd;
L_00566b67:; BB(0x00566b67);
    /* 00566b67: cmp dword ptr [ebp + 8], 9 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00566b6b: jle 0x566b84 */ if ((fZ||fS!=fO)) goto L_00566b84;
L_00566b6d:; BB(0x00566b6d);
    /* 00566b6d: push 0xb07 */ { u32 v = 0xb07u; r_esp -= 4; W32(r_esp, v); }
    /* 00566b72: push 0x6c9734 */ { u32 v = 0x6c9734u; r_esp -= 4; W32(r_esp, v); }
    /* 00566b77: push 0x6c9714 */ { u32 v = 0x6c9714u; r_esp -= 4; W32(r_esp, v); }
    /* 00566b7c: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x566b81u); f_005e9f20();
    /* 00566b81: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00566b84:; BB(0x00566b84);
    /* 00566b84: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00566b87: mov edx, dword ptr [ecx*4 + 0x7448d4] */ r_edx = R32((u32)(r_ecx*4+0x7448d4u));
    /* 00566b8e: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00566b91: jmp 0x566bbd */ goto L_00566bbd;
L_00566b93:; BB(0x00566b93);
    /* 00566b93: cmp dword ptr [ebp + 8], 0xa */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00566b97: jle 0x566bb0 */ if ((fZ||fS!=fO)) goto L_00566bb0;
L_00566b99:; BB(0x00566b99);
    /* 00566b99: push 0xb0b */ { u32 v = 0xb0bu; r_esp -= 4; W32(r_esp, v); }
    /* 00566b9e: push 0x6c9734 */ { u32 v = 0x6c9734u; r_esp -= 4; W32(r_esp, v); }
    /* 00566ba3: push 0x6c9700 */ { u32 v = 0x6c9700u; r_esp -= 4; W32(r_esp, v); }
    /* 00566ba8: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x566badu); f_005e9f20();
    /* 00566bad: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00566bb0:; BB(0x00566bb0);
    /* 00566bb0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00566bb3: mov edx, dword ptr [ecx*4 + 0x7448a8] */ r_edx = R32((u32)(r_ecx*4+0x7448a8u));
    /* 00566bba: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_00566bbd:; BB(0x00566bbd);
    /* 00566bbd: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00566bc0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00566bc1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00566bc4: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00566bc7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00566bca: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00566bcd: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00566bcf: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00566bd5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x566bd7u); call_ind(t); }
    /* 00566bd7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00566bda: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00566bdb: mov ecx, dword ptr [0x793440] */ r_ecx = R32((u32)(0x793440u));
    /* 00566be1: call 0x5604b0 */ r_esp -= 4; W32(r_esp, 0x566be6u); f_005604b0();
    /* 00566be6: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00566be9: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00566bec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00566bed: mov ecx, dword ptr [0x793440] */ r_ecx = R32((u32)(0x793440u));
    /* 00566bf3: call 0x5603b0 */ r_esp -= 4; W32(r_esp, 0x566bf8u); f_005603b0();
    /* 00566bf8: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00566bfb: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00566bfe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00566bff: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00566c02: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00566c05: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00566c08: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00566c0b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00566c0d: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00566c13: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x566c15u); call_ind(t); }
    /* 00566c15: mov esp, ebp */ r_esp = r_ebp;
    /* 00566c17: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00566c18: ret 4 */ FN_RET(0x00566b00); r_esp += 8; return;
}

