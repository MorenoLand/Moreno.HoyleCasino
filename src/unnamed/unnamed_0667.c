#include "protos.h"

void f_00667840(void) /* CompareFunction */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00667840);
    /* 00667840: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00667841: mov ebp, esp */ r_ebp = r_esp;
    /* 00667843: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00667846: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00667848: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00667849: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0066784c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0066784e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066784f: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x667854u); f_00686ec0();
    /* 00667854: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00667857: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00667858: ret  */ FN_RET(0x00667840); r_esp += 4; return;
}

void f_006679a0(void) /* sub_6679A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006679a0);
    /* 006679a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006679a1: mov ebp, esp */ r_ebp = r_esp;
    /* 006679a3: sub esp, 0x114 */ {  u32 a = r_esp; u32 b = 0x114u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006679a9: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 006679ae: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006679b0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 006679b3: mov dword ptr [ebp - 0x110], ecx */ W32((u32)(r_ebp+0xfffffef0u), r_ecx);
    /* 006679b9: push 0x5c */ { u32 v = 0x5cu; r_esp -= 4; W32(r_esp, v); }
    /* 006679bb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006679be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006679bf: call dword ptr [0x6b2264] */ { u32 t = R32((u32)(0x6b2264u)); r_esp -= 4; W32(r_esp, 0x6679c5u); call_ind(t); }
    /* 006679c5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006679c8: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 006679cb: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006679cf: jne 0x6679d8 */ if (!fZ) goto L_006679d8;
L_006679d1:; BB(0x006679d1);
    /* 006679d1: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006679d3: jmp 0x667aa3 */ goto L_00667aa3;
L_006679d8:; BB(0x006679d8);
    /* 006679d8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006679db: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006679de: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 006679e1: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006679e4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006679e5: lea eax, [ebp + 8] */ r_eax = (u32)(r_ebp+0x8u);
    /* 006679e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006679e9: mov ecx, dword ptr [ebp - 0x110] */ r_ecx = R32((u32)(r_ebp+0xfffffef0u));
    /* 006679ef: call 0x667ac0 */ r_esp -= 4; W32(r_esp, 0x6679f4u); f_00667ac0();
    /* 006679f4: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 006679f7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006679f9: je 0x667a72 */ if (fZ) goto L_00667a72;
L_006679fb:; BB(0x006679fb);
    /* 006679fb: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 006679fe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006679ff: lea eax, [ebp + 8] */ r_eax = (u32)(r_ebp+0x8u);
    /* 00667a02: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00667a03: mov ecx, dword ptr [ebp - 0x110] */ r_ecx = R32((u32)(r_ebp+0xfffffef0u));
    /* 00667a09: call 0x667ac0 */ r_esp -= 4; W32(r_esp, 0x667a0eu); f_00667ac0();
    /* 00667a0e: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00667a11: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00667a13: je 0x667a72 */ if (fZ) goto L_00667a72;
L_00667a15:; BB(0x00667a15);
    /* 00667a15: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 00667a18: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00667a19: lea eax, [ebp + 8] */ r_eax = (u32)(r_ebp+0x8u);
    /* 00667a1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00667a1d: mov ecx, dword ptr [ebp - 0x110] */ r_ecx = R32((u32)(r_ebp+0xfffffef0u));
    /* 00667a23: call 0x667ac0 */ r_esp -= 4; W32(r_esp, 0x667a28u); f_00667ac0();
    /* 00667a28: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00667a2b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00667a2d: je 0x667a72 */ if (fZ) goto L_00667a72;
L_00667a2f:; BB(0x00667a2f);
    /* 00667a2f: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 00667a32: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00667a33: lea eax, [ebp + 8] */ r_eax = (u32)(r_ebp+0x8u);
    /* 00667a36: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00667a37: mov ecx, dword ptr [ebp - 0x110] */ r_ecx = R32((u32)(r_ebp+0xfffffef0u));
    /* 00667a3d: call 0x667ac0 */ r_esp -= 4; W32(r_esp, 0x667a42u); f_00667ac0();
    /* 00667a42: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00667a45: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00667a47: je 0x667a72 */ if (fZ) goto L_00667a72;
L_00667a49:; BB(0x00667a49);
    /* 00667a49: lea edx, [ebp - 0x108] */ r_edx = (u32)(r_ebp+0xfffffef8u);
    /* 00667a4f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00667a50: lea eax, [ebp + 8] */ r_eax = (u32)(r_ebp+0x8u);
    /* 00667a53: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00667a54: mov ecx, dword ptr [ebp - 0x110] */ r_ecx = R32((u32)(r_ebp+0xfffffef0u));
    /* 00667a5a: call 0x667ac0 */ r_esp -= 4; W32(r_esp, 0x667a5fu); f_00667ac0();
    /* 00667a5f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00667a62: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00667a64: je 0x667a72 */ if (fZ) goto L_00667a72;
L_00667a66:; BB(0x00667a66);
    /* 00667a66: mov dword ptr [ebp - 0x114], 1 */ W32((u32)(r_ebp+0xfffffeecu), 0x1u);
    /* 00667a70: jmp 0x667a7c */ goto L_00667a7c;
L_00667a72:; BB(0x00667a72);
    /* 00667a72: mov dword ptr [ebp - 0x114], 0 */ W32((u32)(r_ebp+0xfffffeecu), 0x0u);
L_00667a7c:; BB(0x00667a7c);
    /* 00667a7c: mov dl, byte ptr [ebp - 0x114] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffeecu))) & 0xffu);
    /* 00667a82: mov byte ptr [ebp - 0x109], dl */ W8((u32)(r_ebp+0xfffffef7u), (u8)r_edx);
    /* 00667a88: lea eax, [ebp - 0x108] */ r_eax = (u32)(r_ebp+0xfffffef8u);
    /* 00667a8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00667a8f: call dword ptr [0x6b223c] */ { u32 t = R32((u32)(0x6b223cu)); r_esp -= 4; W32(r_esp, 0x667a95u); call_ind(t); }
    /* 00667a95: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00667a98: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 00667a9b: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 00667a9d: mov al, byte ptr [ebp - 0x109] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffef7u))) & 0xffu);
L_00667aa3:; BB(0x00667aa3);
    /* 00667aa3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00667aa6: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00667aa8: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x667aadu); f_00686d72();
    /* 00667aad: mov esp, ebp */ r_esp = r_ebp;
    /* 00667aaf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00667ab0: ret 0x18 */ FN_RET(0x006679a0); r_esp += 28; return;
}

void f_00667ac0(void) /* sub_667AC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00667ac0);
    /* 00667ac0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00667ac1: mov ebp, esp */ r_ebp = r_esp;
    /* 00667ac3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00667ac6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00667ac9: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00667acc: mov byte ptr [eax], 0 */ W8((u32)(r_eax), 0x0u);
    /* 00667acf: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00667ad2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00667ad4: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00667ad7: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 00667ad9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00667adc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00667add: call dword ptr [0x6b22b8] */ { u32 t = R32((u32)(0x6b22b8u)); r_esp -= 4; W32(r_esp, 0x667ae3u); call_ind(t); }
    /* 00667ae3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00667ae6: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00667ae9: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00667aed: jne 0x667b01 */ if (!fZ) goto L_00667b01;
L_00667aef:; BB(0x00667aef);
    /* 00667aef: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 00667af1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00667af4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00667af5: call dword ptr [0x6b22b8] */ { u32 t = R32((u32)(0x6b22b8u)); r_esp -= 4; W32(r_esp, 0x667afbu); call_ind(t); }
    /* 00667afb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00667afe: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_00667b01:; BB(0x00667b01);
    /* 00667b01: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00667b05: jne 0x667b0b */ if (!fZ) goto L_00667b0b;
L_00667b07:; BB(0x00667b07);
    /* 00667b07: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00667b09: jmp 0x667b70 */ goto L_00667b70;
L_00667b0b:; BB(0x00667b0b);
    /* 00667b0b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00667b0e: sub edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00667b11: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00667b12: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00667b15: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00667b16: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00667b19: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00667b1a: call dword ptr [0x6b22c0] */ { u32 t = R32((u32)(0x6b22c0u)); r_esp -= 4; W32(r_esp, 0x667b20u); call_ind(t); }
    /* 00667b20: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00667b23: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00667b26: sub edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00667b29: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00667b2c: mov byte ptr [eax + edx], 0 */ W8((u32)(r_eax+r_edx), 0x0u);
    /* 00667b30: jmp 0x667b3b */ goto L_00667b3b;
L_00667b32:; BB(0x00667b32);
    /* 00667b32: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00667b35: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00667b38: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
L_00667b3b:; BB(0x00667b3b);
    /* 00667b3b: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00667b3e: movsx eax, byte ptr [edx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx));
    /* 00667b41: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00667b43: je 0x667b63 */ if (fZ) goto L_00667b63;
L_00667b45:; BB(0x00667b45);
    /* 00667b45: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00667b48: movsx edx, byte ptr [ecx] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx));
    /* 00667b4b: cmp edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00667b4e: je 0x667b5b */ if (fZ) goto L_00667b5b;
L_00667b50:; BB(0x00667b50);
    /* 00667b50: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00667b53: movsx ecx, byte ptr [eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 00667b56: cmp ecx, 0x2d */ {  u32 a = r_ecx; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00667b59: jne 0x667b61 */ if (!fZ) goto L_00667b61;
L_00667b5b:; BB(0x00667b5b);
    /* 00667b5b: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00667b5e: mov byte ptr [edx], 0x5f */ W8((u32)(r_edx), 0x5fu);
L_00667b61:; BB(0x00667b61);
    /* 00667b61: jmp 0x667b32 */ goto L_00667b32;
L_00667b63:; BB(0x00667b63);
    /* 00667b63: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00667b66: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00667b69: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00667b6c: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 00667b6e: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00667b70:; BB(0x00667b70);
    /* 00667b70: mov esp, ebp */ r_esp = r_ebp;
    /* 00667b72: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00667b73: ret 8 */ FN_RET(0x00667ac0); r_esp += 12; return;
}

void f_00667be0(void) /* sub_667BE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00667be0);
    /* 00667be0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00667be1: mov ebp, esp */ r_ebp = r_esp;
    /* 00667be3: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00667be6: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00667beb: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00667bed: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00667bf0: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 00667bf3: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00667bf9: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x667bfeu); f_005f3bf0();
    /* 00667bfe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00667bff: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00667c04: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00667c06: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00667c0c: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 00667c12: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x667c14u); call_ind(t); }
    /* 00667c14: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00667c17: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00667c1a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00667c1c: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00667c1f: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 00667c22: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x667c24u); call_ind(t); }
    /* 00667c24: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00667c25: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 00667c28: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00667c29: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x667c2eu); f_00686d8e();
    /* 00667c2e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00667c31: push 0x6dedbc */ { u32 v = 0x6dedbcu; r_esp -= 4; W32(r_esp, v); }
    /* 00667c36: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00667c38: lea edx, [ebp - 0x34] */ r_edx = (u32)(r_ebp+0xffffffccu);
    /* 00667c3b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00667c3c: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00667c3f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00667c40: call dword ptr [0x6b21dc] */ { u32 t = R32((u32)(0x6b21dcu)); r_esp -= 4; W32(r_esp, 0x667c46u); call_ind(t); }
    /* 00667c46: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00667c49: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00667c4a: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 00667c4d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00667c4e: push 0x6de52c */ { u32 v = 0x6de52cu; r_esp -= 4; W32(r_esp, v); }
    /* 00667c53: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00667c56: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00667c57: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x667c5du); call_ind(t); }
    /* 00667c5d: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00667c60: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00667c63: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00667c65: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x667c6au); f_00686d72();
    /* 00667c6a: mov esp, ebp */ r_esp = r_ebp;
    /* 00667c6c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00667c6d: ret 8 */ FN_RET(0x00667be0); r_esp += 12; return;
}

void f_00667c70(void) /* sub_667C70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00667c70);
    /* 00667c70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00667c71: mov ebp, esp */ r_ebp = r_esp;
    /* 00667c73: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00667c76: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00667c7b: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00667c7d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00667c80: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00667c83: mov byte ptr [ebp - 0x20], 0 */ W8((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 00667c87: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00667c8d: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x667c92u); f_006375b0();
    /* 00667c92: mov ecx, eax */ r_ecx = r_eax;
    /* 00667c94: call 0x520e60 */ r_esp -= 4; W32(r_esp, 0x667c99u); f_00520e60();
    /* 00667c99: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00667c9a: lea eax, [ebp - 0x20] */ r_eax = (u32)(r_ebp+0xffffffe0u);
    /* 00667c9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00667c9e: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x667ca3u); f_00686ec6();
    /* 00667ca3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00667ca6: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 00667ca8: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 00667cab: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00667cac: call dword ptr [0x6b22b8] */ { u32 t = R32((u32)(0x6b22b8u)); r_esp -= 4; W32(r_esp, 0x667cb2u); call_ind(t); }
    /* 00667cb2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00667cb5: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00667cb8: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00667cbb: mov byte ptr [edx], 0 */ W8((u32)(r_edx), 0x0u);
    /* 00667cbe: lea eax, [ebp - 0x20] */ r_eax = (u32)(r_ebp+0xffffffe0u);
    /* 00667cc1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00667cc2: call dword ptr [0x6b22f0] */ { u32 t = R32((u32)(0x6b22f0u)); r_esp -= 4; W32(r_esp, 0x667cc8u); call_ind(t); }
    /* 00667cc8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00667ccb: push 0x6d61f8 */ { u32 v = 0x6d61f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00667cd0: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 00667cd3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00667cd4: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x667cd9u); f_00686ec6();
    /* 00667cd9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00667cdc: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00667cdf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00667ce0: lea eax, [ebp - 0x20] */ r_eax = (u32)(r_ebp+0xffffffe0u);
    /* 00667ce3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00667ce4: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x667ce9u); f_00686ec6();
    /* 00667ce9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00667cec: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 00667cef: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00667cf0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00667cf3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00667cf4: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x667cf9u); f_00686d8e();
    /* 00667cf9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00667cfc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00667cff: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00667d01: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x667d06u); f_00686d72();
    /* 00667d06: mov esp, ebp */ r_esp = r_ebp;
    /* 00667d08: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00667d09: ret 4 */ FN_RET(0x00667c70); r_esp += 8; return;
}

void f_00667d10(void) /* sub_667D10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00667d10);
    /* 00667d10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00667d11: mov ebp, esp */ r_ebp = r_esp;
    /* 00667d13: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00667d16: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00667d19: mov byte ptr [ebp - 1], 0 */ W8((u32)(r_ebp+0xffffffffu), 0x0u);
    /* 00667d1d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00667d1f: mov ecx, dword ptr [0x16306d0] */ r_ecx = R32((u32)(0x16306d0u));
    /* 00667d25: call 0x5fb810 */ r_esp -= 4; W32(r_esp, 0x667d2au); f_005fb810();
    /* 00667d2a: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00667d2d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00667d30: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00667d32: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00667d35: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00667d3b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x667d3du); call_ind(t); }
    /* 00667d3d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00667d40: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00667d42: mov ecx, dword ptr [0x16306d0] */ r_ecx = R32((u32)(0x16306d0u));
    /* 00667d48: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x667d4du); f_005fb720();
    /* 00667d4d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00667d50: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00667d52: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00667d55: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00667d56: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00667d59: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00667d5b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00667d5e: mov edx, dword ptr [eax + 0xf0] */ r_edx = R32((u32)(r_eax+0xf0u));
    /* 00667d64: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x667d66u); call_ind(t); }
    /* 00667d66: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00667d69: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00667d6b: je 0x667da5 */ if (fZ) goto L_00667da5;
L_00667d6d:; BB(0x00667d6d);
    /* 00667d6d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00667d6f: push 0x6dfc48 */ { u32 v = 0x6dfc48u; r_esp -= 4; W32(r_esp, v); }
    /* 00667d74: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x667d79u); f_00630f40();
    /* 00667d79: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00667d7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00667d7d: push 0x6dfc2c */ { u32 v = 0x6dfc2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00667d82: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x667d87u); f_00630f40();
    /* 00667d87: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00667d8a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00667d8b: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x667d90u); f_0062ff10();
    /* 00667d90: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00667d93: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00667d96: je 0x667d9f */ if (fZ) goto L_00667d9f;
L_00667d98:; BB(0x00667d98);
    /* 00667d98: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00667d9a: jmp 0x667e58 */ goto L_00667e58;
L_00667d9f:; BB(0x00667d9f);
    /* 00667d9f: mov byte ptr [ebp - 1], 1 */ W8((u32)(r_ebp+0xffffffffu), 0x1u);
    /* 00667da3: jmp 0x667df4 */ goto L_00667df4;
L_00667da5:; BB(0x00667da5);
    /* 00667da5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00667da7: mov ecx, dword ptr [0x16306d0] */ r_ecx = R32((u32)(0x16306d0u));
    /* 00667dad: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x667db2u); f_005fb720();
    /* 00667db2: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00667db5: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00667db8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00667dba: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00667dbd: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00667dc3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x667dc5u); call_ind(t); }
    /* 00667dc5: cmp eax, 0x64 */ {  u32 a = r_eax; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00667dc8: jne 0x667df4 */ if (!fZ) goto L_00667df4;
L_00667dca:; BB(0x00667dca);
    /* 00667dca: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00667dcc: push 0x6dfc18 */ { u32 v = 0x6dfc18u; r_esp -= 4; W32(r_esp, v); }
    /* 00667dd1: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x667dd6u); f_00630f40();
    /* 00667dd6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00667dd9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00667dda: push 0x6dfbfc */ { u32 v = 0x6dfbfcu; r_esp -= 4; W32(r_esp, v); }
    /* 00667ddf: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x667de4u); f_00630f40();
    /* 00667de4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00667de7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00667de8: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x667dedu); f_0062ff10();
    /* 00667ded: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00667df0: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00667df2: jmp 0x667e58 */ goto L_00667e58;
L_00667df4:; BB(0x00667df4);
    /* 00667df4: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00667df9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00667dfc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00667dfd: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x667e02u); f_00686ec0();
    /* 00667e02: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00667e05: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00667e07: jne 0x667e33 */ if (!fZ) goto L_00667e33;
L_00667e09:; BB(0x00667e09);
    /* 00667e09: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00667e0b: push 0x6dfc18 */ { u32 v = 0x6dfc18u; r_esp -= 4; W32(r_esp, v); }
    /* 00667e10: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x667e15u); f_00630f40();
    /* 00667e15: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00667e18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00667e19: push 0x6dfbe4 */ { u32 v = 0x6dfbe4u; r_esp -= 4; W32(r_esp, v); }
    /* 00667e1e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x667e23u); f_00630f40();
    /* 00667e23: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00667e26: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00667e27: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x667e2cu); f_0062ff10();
    /* 00667e2c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00667e2f: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00667e31: jmp 0x667e58 */ goto L_00667e58;
L_00667e33:; BB(0x00667e33);
    /* 00667e33: mov ecx, dword ptr [0x16306d0] */ r_ecx = R32((u32)(0x16306d0u));
    /* 00667e39: call 0x5f87d0 */ r_esp -= 4; W32(r_esp, 0x667e3eu); f_005f87d0();
    /* 00667e3e: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 00667e44: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 00667e47: call 0x613f80 */ r_esp -= 4; W32(r_esp, 0x667e4cu); f_00613f80();
    /* 00667e4c: mov al, byte ptr [ebp - 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
    /* 00667e4f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00667e50: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00667e53: call 0x668170 */ r_esp -= 4; W32(r_esp, 0x667e58u); f_00668170();
L_00667e58:; BB(0x00667e58);
    /* 00667e58: mov esp, ebp */ r_esp = r_ebp;
    /* 00667e5a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00667e5b: ret  */ FN_RET(0x00667d10); r_esp += 4; return;
}

void f_00667e60(void) /* sub_667E60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00667e60);
    /* 00667e60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00667e61: mov ebp, esp */ r_ebp = r_esp;
    /* 00667e63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00667e64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00667e67: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00667e69: mov ecx, dword ptr [0x16306d0] */ r_ecx = R32((u32)(0x16306d0u));
    /* 00667e6f: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x667e74u); f_005fb720();
    /* 00667e74: mov ecx, eax */ r_ecx = r_eax;
    /* 00667e76: call 0x615260 */ r_esp -= 4; W32(r_esp, 0x667e7bu); f_00615260();
    /* 00667e7b: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00667e7e: jne 0x667e84 */ if (!fZ) goto L_00667e84;
L_00667e80:; BB(0x00667e80);
    /* 00667e80: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00667e82: jmp 0x667e8c */ goto L_00667e8c;
L_00667e84:; BB(0x00667e84);
    /* 00667e84: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00667e87: call 0x668620 */ r_esp -= 4; W32(r_esp, 0x667e8cu); f_00668620();
L_00667e8c:; BB(0x00667e8c);
    /* 00667e8c: mov esp, ebp */ r_esp = r_ebp;
    /* 00667e8e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00667e8f: ret  */ FN_RET(0x00667e60); r_esp += 4; return;
}

void f_00667e90(void) /* sub_667E90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00667e90);
    /* 00667e90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00667e91: mov ebp, esp */ r_ebp = r_esp;
    /* 00667e93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00667e94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00667e97: mov ecx, dword ptr [0x16306d0] */ r_ecx = R32((u32)(0x16306d0u));
    /* 00667e9d: call 0x673cb0 */ r_esp -= 4; W32(r_esp, 0x667ea2u); f_00673cb0();
    /* 00667ea2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00667ea3: call dword ptr [0x6b22a0] */ { u32 t = R32((u32)(0x6b22a0u)); r_esp -= 4; W32(r_esp, 0x667ea9u); call_ind(t); }
    /* 00667ea9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00667eac: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00667eae: mov esp, ebp */ r_esp = r_ebp;
    /* 00667eb0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00667eb1: ret  */ FN_RET(0x00667e90); r_esp += 4; return;
}

void f_00667ec0(void) /* sub_667EC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00667ec0);
    /* 00667ec0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00667ec1: mov ebp, esp */ r_ebp = r_esp;
    /* 00667ec3: sub esp, 0x440 */ {  u32 a = r_esp; u32 b = 0x440u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00667ec9: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00667ece: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00667ed0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00667ed3: mov dword ptr [ebp - 0x43c], ecx */ W32((u32)(r_ebp+0xfffffbc4u), r_ecx);
    /* 00667ed9: mov byte ptr [ebp - 0x411], 0 */ W8((u32)(r_ebp+0xfffffbefu), 0x0u);
    /* 00667ee0: mov byte ptr [ebp - 0x408], 0 */ W8((u32)(r_ebp+0xfffffbf8u), 0x0u);
    /* 00667ee7: push 0x3ff */ { u32 v = 0x3ffu; r_esp -= 4; W32(r_esp, v); }
    /* 00667eec: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00667eee: lea eax, [ebp - 0x407] */ r_eax = (u32)(r_ebp+0xfffffbf9u);
    /* 00667ef4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00667ef5: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x667efau); f_00686fa2();
    /* 00667efa: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00667efd: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00667f00: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00667f01: mov ecx, dword ptr [ebp - 0x43c] */ r_ecx = R32((u32)(r_ebp+0xfffffbc4u));
    /* 00667f07: call 0x667c70 */ r_esp -= 4; W32(r_esp, 0x667f0cu); f_00667c70();
    /* 00667f0c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00667f0f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00667f10: lea eax, [ebp - 0x408] */ r_eax = (u32)(r_ebp+0xfffffbf8u);
    /* 00667f16: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00667f17: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x667f1cu); f_00686d8e();
    /* 00667f1c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00667f1f: push 0x6c2d28 */ { u32 v = 0x6c2d28u; r_esp -= 4; W32(r_esp, v); }
    /* 00667f24: lea ecx, [ebp - 0x408] */ r_ecx = (u32)(r_ebp+0xfffffbf8u);
    /* 00667f2a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00667f2b: call 0x5ea9c0 */ r_esp -= 4; W32(r_esp, 0x667f30u); f_005ea9c0();
    /* 00667f30: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00667f33: mov dword ptr [ebp - 0x410], eax */ W32((u32)(r_ebp+0xfffffbf0u), r_eax);
    /* 00667f39: cmp dword ptr [ebp - 0x410], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffbf0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00667f40: je 0x66814d */ if (fZ) goto L_0066814d;
L_00667f46:; BB(0x00667f46);
    /* 00667f46: mov dword ptr [ebp - 0x420], 0x21496 */ W32((u32)(r_ebp+0xfffffbe0u), 0x21496u);
    /* 00667f50: mov edx, dword ptr [ebp - 0x420] */ r_edx = R32((u32)(r_ebp+0xfffffbe0u));
    /* 00667f56: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00667f57: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x667f5cu); f_00686d82();
    /* 00667f5c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00667f5f: mov dword ptr [ebp - 0x424], eax */ W32((u32)(r_ebp+0xfffffbdcu), r_eax);
    /* 00667f65: cmp dword ptr [ebp - 0x424], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffbdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00667f6c: je 0x667f94 */ if (fZ) goto L_00667f94;
L_00667f6e:; BB(0x00667f6e);
    /* 00667f6e: mov eax, dword ptr [ebp - 0x420] */ r_eax = R32((u32)(r_ebp+0xfffffbe0u));
    /* 00667f74: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00667f75: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00667f77: mov ecx, dword ptr [ebp - 0x424] */ r_ecx = R32((u32)(r_ebp+0xfffffbdcu));
    /* 00667f7d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00667f7e: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x667f83u); f_00686fa2();
    /* 00667f83: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00667f86: mov edx, dword ptr [ebp - 0x424] */ r_edx = R32((u32)(r_ebp+0xfffffbdcu));
    /* 00667f8c: mov dword ptr [ebp - 0x440], edx */ W32((u32)(r_ebp+0xfffffbc0u), r_edx);
    /* 00667f92: jmp 0x667f9e */ goto L_00667f9e;
L_00667f94:; BB(0x00667f94);
    /* 00667f94: mov dword ptr [ebp - 0x440], 0 */ W32((u32)(r_ebp+0xfffffbc0u), 0x0u);
L_00667f9e:; BB(0x00667f9e);
    /* 00667f9e: mov eax, dword ptr [ebp - 0x440] */ r_eax = R32((u32)(r_ebp+0xfffffbc0u));
    /* 00667fa4: mov dword ptr [ebp - 0x41c], eax */ W32((u32)(r_ebp+0xfffffbe4u), r_eax);
    /* 00667faa: mov ecx, dword ptr [ebp - 0x410] */ r_ecx = R32((u32)(r_ebp+0xfffffbf0u));
    /* 00667fb0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00667fb1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00667fb3: push 0x21496 */ { u32 v = 0x21496u; r_esp -= 4; W32(r_esp, v); }
    /* 00667fb8: mov edx, dword ptr [ebp - 0x41c] */ r_edx = R32((u32)(r_ebp+0xfffffbe4u));
    /* 00667fbe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00667fbf: call dword ptr [0x6b225c] */ { u32 t = R32((u32)(0x6b225cu)); r_esp -= 4; W32(r_esp, 0x667fc5u); call_ind(t); }
    /* 00667fc5: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00667fc8: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00667fcd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00667fcf: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00667fd5: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 00667fdb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x667fddu); call_ind(t); }
    /* 00667fdd: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00667fdf: mov edx, 0x4c */ r_edx = 0x4cu;
    /* 00667fe4: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 00667fe6: seto cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fO) ? 1 : 0) & 0xffu);
    /* 00667fe9: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00667feb: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00667fed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00667fee: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x667ff3u); f_00686d82();
    /* 00667ff3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00667ff6: mov dword ptr [ebp - 0x428], eax */ W32((u32)(r_ebp+0xfffffbd8u), r_eax);
    /* 00667ffc: mov eax, dword ptr [ebp - 0x428] */ r_eax = R32((u32)(r_ebp+0xfffffbd8u));
    /* 00668002: mov dword ptr [ebp - 0x418], eax */ W32((u32)(r_ebp+0xfffffbe8u), r_eax);
    /* 00668008: mov dword ptr [ebp - 0x40c], 0 */ W32((u32)(r_ebp+0xfffffbf4u), 0x0u);
    /* 00668012: jmp 0x668023 */ goto L_00668023;
L_00668014:; BB(0x00668014);
    /* 00668014: mov ecx, dword ptr [ebp - 0x40c] */ r_ecx = R32((u32)(r_ebp+0xfffffbf4u));
    /* 0066801a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0066801d: mov dword ptr [ebp - 0x40c], ecx */ W32((u32)(r_ebp+0xfffffbf4u), r_ecx);
L_00668023:; BB(0x00668023);
    /* 00668023: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00668029: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0066802b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00668031: mov edx, dword ptr [eax + 0x10c] */ r_edx = R32((u32)(r_eax+0x10cu));
    /* 00668037: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x668039u); call_ind(t); }
    /* 00668039: cmp dword ptr [ebp - 0x40c], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffbf4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066803f: jge 0x668067 */ if ((fS==fO)) goto L_00668067;
L_00668041:; BB(0x00668041);
    /* 00668041: mov eax, dword ptr [ebp - 0x410] */ r_eax = R32((u32)(r_ebp+0xfffffbf0u));
    /* 00668047: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00668048: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066804a: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 0066804c: mov ecx, dword ptr [ebp - 0x40c] */ r_ecx = R32((u32)(r_ebp+0xfffffbf4u));
    /* 00668052: imul ecx, ecx, 0x4c */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x4cu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00668055: add ecx, dword ptr [ebp - 0x418] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffbe8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0066805b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066805c: call dword ptr [0x6b225c] */ { u32 t = R32((u32)(0x6b225cu)); r_esp -= 4; W32(r_esp, 0x668062u); call_ind(t); }
    /* 00668062: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00668065: jmp 0x668014 */ goto L_00668014;
L_00668067:; BB(0x00668067);
    /* 00668067: mov edx, dword ptr [ebp - 0x410] */ r_edx = R32((u32)(r_ebp+0xfffffbf0u));
    /* 0066806d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066806e: call dword ptr [0x6b2258] */ { u32 t = R32((u32)(0x6b2258u)); r_esp -= 4; W32(r_esp, 0x668074u); call_ind(t); }
    /* 00668074: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00668077: mov eax, dword ptr [ebp - 0x418] */ r_eax = R32((u32)(r_ebp+0xfffffbe8u));
    /* 0066807d: movsx ecx, byte ptr [eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 00668080: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00668083: je 0x668097 */ if (fZ) goto L_00668097;
L_00668085:; BB(0x00668085);
    /* 00668085: mov edx, dword ptr [ebp - 0x418] */ r_edx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 0066808b: movsx eax, byte ptr [edx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx));
    /* 0066808e: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00668091: jne 0x668117 */ if (!fZ) goto L_00668117;
L_00668097:; BB(0x00668097);
    /* 00668097: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066809d: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x6680a2u); f_006375b0();
    /* 006680a2: mov dword ptr [ebp - 0x434], eax */ W32((u32)(r_ebp+0xfffffbccu), r_eax);
    /* 006680a8: mov ecx, dword ptr [ebp - 0x434] */ r_ecx = R32((u32)(r_ebp+0xfffffbccu));
    /* 006680ae: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x6680b3u); f_0063aac0();
    /* 006680b3: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006680b6: mov dword ptr [ebp - 0x438], eax */ W32((u32)(r_ebp+0xfffffbc8u), r_eax);
    /* 006680bc: mov ecx, dword ptr [ebp - 0x438] */ r_ecx = R32((u32)(r_ebp+0xfffffbc8u));
    /* 006680c2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006680c3: mov edx, dword ptr [ebp - 0x418] */ r_edx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 006680c9: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006680cc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006680cd: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x6680d2u); f_00686ec0();
    /* 006680d2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006680d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006680d7: jne 0x668117 */ if (!fZ) goto L_00668117;
L_006680d9:; BB(0x006680d9);
    /* 006680d9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006680dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006680dd: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 006680e3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006680e5: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 006680eb: mov eax, dword ptr [edx + 0x98] */ r_eax = R32((u32)(r_edx+0x98u));
    /* 006680f1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6680f3u); call_ind(t); }
    /* 006680f3: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 006680f6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006680f8: je 0x668117 */ if (fZ) goto L_00668117;
L_006680fa:; BB(0x006680fa);
    /* 006680fa: mov edx, dword ptr [ebp - 0x41c] */ r_edx = R32((u32)(r_ebp+0xfffffbe4u));
    /* 00668100: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00668103: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00668104: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00668107: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00668108: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x66810du); f_00686d8e();
    /* 0066810d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00668110: mov byte ptr [ebp - 0x411], 1 */ W8((u32)(r_ebp+0xfffffbefu), 0x1u);
L_00668117:; BB(0x00668117);
    /* 00668117: mov ecx, dword ptr [ebp - 0x41c] */ r_ecx = R32((u32)(r_ebp+0xfffffbe4u));
    /* 0066811d: mov dword ptr [ebp - 0x42c], ecx */ W32((u32)(r_ebp+0xfffffbd4u), r_ecx);
    /* 00668123: mov edx, dword ptr [ebp - 0x42c] */ r_edx = R32((u32)(r_ebp+0xfffffbd4u));
    /* 00668129: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066812a: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x66812fu); f_00686cae();
    /* 0066812f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00668132: mov eax, dword ptr [ebp - 0x418] */ r_eax = R32((u32)(r_ebp+0xfffffbe8u));
    /* 00668138: mov dword ptr [ebp - 0x430], eax */ W32((u32)(r_ebp+0xfffffbd0u), r_eax);
    /* 0066813e: mov ecx, dword ptr [ebp - 0x430] */ r_ecx = R32((u32)(r_ebp+0xfffffbd0u));
    /* 00668144: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00668145: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x66814au); f_00686cae();
    /* 0066814a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0066814d:; BB(0x0066814d);
    /* 0066814d: mov al, byte ptr [ebp - 0x411] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffbefu))) & 0xffu);
    /* 00668153: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00668156: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00668158: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x66815du); f_00686d72();
    /* 0066815d: mov esp, ebp */ r_esp = r_ebp;
    /* 0066815f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00668160: ret 8 */ FN_RET(0x00667ec0); r_esp += 12; return;
}

