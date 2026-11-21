#include "protos.h"

void f_006660e0(void) /* sub_6660E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006660e0);
    /* 006660e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006660e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006660e3: sub esp, 0x210 */ {  u32 a = r_esp; u32 b = 0x210u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006660e9: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 006660ee: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006660f0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 006660f3: mov dword ptr [ebp - 0x20c], 0 */ W32((u32)(r_ebp+0xfffffdf4u), 0x0u);
    /* 006660fd: call 0x665cb0 */ r_esp -= 4; W32(r_esp, 0x666102u); f_00665cb0();
    /* 00666102: call 0x665d20 */ r_esp -= 4; W32(r_esp, 0x666107u); f_00665d20();
    /* 00666107: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00666109: je 0x666133 */ if (fZ) goto L_00666133;
L_0066610b:; BB(0x0066610b);
    /* 0066610b: push 0x6dfa94 */ { u32 v = 0x6dfa94u; r_esp -= 4; W32(r_esp, v); }
    /* 00666110: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x666115u); f_00630f40();
    /* 00666115: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00666118: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00666119: lea eax, [ebp - 0x108] */ r_eax = (u32)(r_ebp+0xfffffef8u);
    /* 0066611f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00666120: call dword ptr [0x6b2438] */ { u32 t = R32((u32)(0x6b2438u)); r_esp -= 4; W32(r_esp, 0x666126u); call_ind(t); }
    /* 00666126: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00666129: mov dword ptr [ebp - 0x20c], 2 */ W32((u32)(r_ebp+0xfffffdf4u), 0x2u);
L_00666133:; BB(0x00666133);
    /* 00666133: call 0x665da0 */ r_esp -= 4; W32(r_esp, 0x666138u); f_00665da0();
    /* 00666138: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066613a: je 0x666169 */ if (fZ) goto L_00666169;
L_0066613c:; BB(0x0066613c);
    /* 0066613c: mov dword ptr [ebp - 0x20c], 2 */ W32((u32)(r_ebp+0xfffffdf4u), 0x2u);
    /* 00666146: push 0x795634 */ { u32 v = 0x795634u; r_esp -= 4; W32(r_esp, v); }
    /* 0066614b: push 0x6dfa6c */ { u32 v = 0x6dfa6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00666150: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x666155u); f_00630f40();
    /* 00666155: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00666158: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00666159: lea ecx, [ebp - 0x108] */ r_ecx = (u32)(r_ebp+0xfffffef8u);
    /* 0066615f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00666160: call dword ptr [0x6b2438] */ { u32 t = R32((u32)(0x6b2438u)); r_esp -= 4; W32(r_esp, 0x666166u); call_ind(t); }
    /* 00666166: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00666169:; BB(0x00666169);
    /* 00666169: movzx edx, byte ptr [0x7950b5] */ r_edx = (u32)R8((u32)(0x7950b5u));
    /* 00666170: cmp edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00666173: jge 0x6661a2 */ if ((fS==fO)) goto L_006661a2;
L_00666175:; BB(0x00666175);
    /* 00666175: mov dword ptr [ebp - 0x20c], 2 */ W32((u32)(r_ebp+0xfffffdf4u), 0x2u);
    /* 0066617f: push 0x795634 */ { u32 v = 0x795634u; r_esp -= 4; W32(r_esp, v); }
    /* 00666184: push 0x6dfa4c */ { u32 v = 0x6dfa4cu; r_esp -= 4; W32(r_esp, v); }
    /* 00666189: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x66618eu); f_00630f40();
    /* 0066618e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00666191: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00666192: lea eax, [ebp - 0x108] */ r_eax = (u32)(r_ebp+0xfffffef8u);
    /* 00666198: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00666199: call dword ptr [0x6b2438] */ { u32 t = R32((u32)(0x6b2438u)); r_esp -= 4; W32(r_esp, 0x66619fu); call_ind(t); }
    /* 0066619f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006661a2:; BB(0x006661a2);
    /* 006661a2: call 0x665e20 */ r_esp -= 4; W32(r_esp, 0x6661a7u); f_00665e20();
    /* 006661a7: mov ecx, dword ptr [ebp - 0x20c] */ r_ecx = R32((u32)(r_ebp+0xfffffdf4u));
    /* 006661ad: mov dword ptr [ebp - 0x210], ecx */ W32((u32)(r_ebp+0xfffffdf0u), r_ecx);
    /* 006661b3: cmp dword ptr [ebp - 0x210], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffdf0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006661ba: je 0x6661dc */ if (fZ) goto L_006661dc;
L_006661bc:; BB(0x006661bc);
    /* 006661bc: cmp dword ptr [ebp - 0x210], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffdf0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006661c3: je 0x66621f */ if (fZ) goto L_0066621f;
L_006661c5:; BB(0x006661c5);
    /* 006661c5: cmp dword ptr [ebp - 0x210], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffdf0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006661cc: je 0x666289 */ if (fZ) goto L_00666289;
L_006661d2:; BB(0x006661d2);
    /* 006661d2: jmp 0x6662a6 */ goto L_006662a6;
L_006661dc:; BB(0x006661dc);
    /* 006661dc: push 0x795634 */ { u32 v = 0x795634u; r_esp -= 4; W32(r_esp, v); }
    /* 006661e1: push 0x6dfa30 */ { u32 v = 0x6dfa30u; r_esp -= 4; W32(r_esp, v); }
    /* 006661e6: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6661ebu); f_00630f40();
    /* 006661eb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006661ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006661ef: lea edx, [ebp - 0x208] */ r_edx = (u32)(r_ebp+0xfffffdf8u);
    /* 006661f5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006661f6: call dword ptr [0x6b2438] */ { u32 t = R32((u32)(0x6b2438u)); r_esp -= 4; W32(r_esp, 0x6661fcu); call_ind(t); }
    /* 006661fc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006661ff: push 0x2040 */ { u32 v = 0x2040u; r_esp -= 4; W32(r_esp, v); }
    /* 00666204: lea eax, [ebp - 0x208] */ r_eax = (u32)(r_ebp+0xfffffdf8u);
    /* 0066620a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066620b: lea ecx, [ebp - 0x108] */ r_ecx = (u32)(r_ebp+0xfffffef8u);
    /* 00666211: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00666212: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00666214: call dword ptr [0x6b2440] */ { u32 t = R32((u32)(0x6b2440u)); r_esp -= 4; W32(r_esp, 0x66621au); call_ind(t); }
    /* 0066621a: jmp 0x6662a6 */ goto L_006662a6;
L_0066621f:; BB(0x0066621f);
    /* 0066621f: push 0x795634 */ { u32 v = 0x795634u; r_esp -= 4; W32(r_esp, v); }
    /* 00666224: push 0x6dfa18 */ { u32 v = 0x6dfa18u; r_esp -= 4; W32(r_esp, v); }
    /* 00666229: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x66622eu); f_00630f40();
    /* 0066622e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00666231: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00666232: lea edx, [ebp - 0x208] */ r_edx = (u32)(r_ebp+0xfffffdf8u);
    /* 00666238: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00666239: call dword ptr [0x6b2438] */ { u32 t = R32((u32)(0x6b2438u)); r_esp -= 4; W32(r_esp, 0x66623fu); call_ind(t); }
    /* 0066623f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00666242: push 0x6df9fc */ { u32 v = 0x6df9fcu; r_esp -= 4; W32(r_esp, v); }
    /* 00666247: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x66624cu); f_00630f40();
    /* 0066624c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066624f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00666250: lea eax, [ebp - 0x108] */ r_eax = (u32)(r_ebp+0xfffffef8u);
    /* 00666256: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00666257: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x66625cu); f_00686ec6();
    /* 0066625c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066625f: push 0x2024 */ { u32 v = 0x2024u; r_esp -= 4; W32(r_esp, v); }
    /* 00666264: lea ecx, [ebp - 0x208] */ r_ecx = (u32)(r_ebp+0xfffffdf8u);
    /* 0066626a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066626b: lea edx, [ebp - 0x108] */ r_edx = (u32)(r_ebp+0xfffffef8u);
    /* 00666271: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00666272: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00666274: call dword ptr [0x6b2440] */ { u32 t = R32((u32)(0x6b2440u)); r_esp -= 4; W32(r_esp, 0x66627au); call_ind(t); }
    /* 0066627a: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066627d: jne 0x666285 */ if (!fZ) goto L_00666285;
L_0066627f:; BB(0x0066627f);
    /* 0066627f: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00666281: jmp 0x6662a8 */ goto L_006662a8;
L_00666285:; BB(0x00666285);
    /* 00666285: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00666287: jmp 0x6662a8 */ goto L_006662a8;
L_00666289:; BB(0x00666289);
    /* 00666289: push 0x2010 */ { u32 v = 0x2010u; r_esp -= 4; W32(r_esp, v); }
    /* 0066628e: push 0x795634 */ { u32 v = 0x795634u; r_esp -= 4; W32(r_esp, v); }
    /* 00666293: lea eax, [ebp - 0x108] */ r_eax = (u32)(r_ebp+0xfffffef8u);
    /* 00666299: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066629a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066629c: call dword ptr [0x6b2440] */ { u32 t = R32((u32)(0x6b2440u)); r_esp -= 4; W32(r_esp, 0x6662a2u); call_ind(t); }
    /* 006662a2: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006662a4: jmp 0x6662a8 */ goto L_006662a8;
L_006662a6:; BB(0x006662a6);
    /* 006662a6: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_006662a8:; BB(0x006662a8);
    /* 006662a8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006662ab: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006662ad: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x6662b2u); f_00686d72();
    /* 006662b2: mov esp, ebp */ r_esp = r_ebp;
    /* 006662b4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006662b5: ret  */ FN_RET(0x006660e0); r_esp += 4; return;
}

void f_006662c0(void) /* sub_6662C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006662c0);
    /* 006662c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006662c1: mov ebp, esp */ r_ebp = r_esp;
    /* 006662c3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006662c6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006662c9: mov dword ptr [0x16306b4], eax */ W32((u32)(0x16306b4u), r_eax);
    /* 006662ce: call 0x5fc4f0 */ r_esp -= 4; W32(r_esp, 0x6662d3u); f_005fc4f0();
    /* 006662d3: call 0x665bd0 */ r_esp -= 4; W32(r_esp, 0x6662d8u); f_00665bd0();
    /* 006662d8: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 006662db: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006662dd: jne 0x6662e6 */ if (!fZ) goto L_006662e6;
L_006662df:; BB(0x006662df);
    /* 006662df: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006662e1: jmp 0x6663b2 */ goto L_006663b2;
L_006662e6:; BB(0x006662e6);
    /* 006662e6: call 0x680da0 */ r_esp -= 4; W32(r_esp, 0x6662ebu); f_00680da0();
    /* 006662eb: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 006662ee: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006662f0: jne 0x6662f9 */ if (!fZ) goto L_006662f9;
L_006662f2:; BB(0x006662f2);
    /* 006662f2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006662f4: jmp 0x6663b2 */ goto L_006663b2;
L_006662f9:; BB(0x006662f9);
    /* 006662f9: call 0x680e90 */ r_esp -= 4; W32(r_esp, 0x6662feu); f_00680e90();
    /* 006662fe: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00666301: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00666303: jne 0x66630c */ if (!fZ) goto L_0066630c;
L_00666305:; BB(0x00666305);
    /* 00666305: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00666307: jmp 0x6663b2 */ goto L_006663b2;
L_0066630c:; BB(0x0066630c);
    /* 0066630c: call 0x680f20 */ r_esp -= 4; W32(r_esp, 0x666311u); f_00680f20();
    /* 00666311: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00666314: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00666316: jne 0x66631f */ if (!fZ) goto L_0066631f;
L_00666318:; BB(0x00666318);
    /* 00666318: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066631a: jmp 0x6663b2 */ goto L_006663b2;
L_0066631f:; BB(0x0066631f);
    /* 0066631f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00666326: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0066632c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0066632e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00666334: mov edx, dword ptr [eax + 0xa0] */ r_edx = R32((u32)(r_eax+0xa0u));
    /* 0066633a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x66633cu); call_ind(t); }
    /* 0066633c: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0066633f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00666341: je 0x666382 */ if (fZ) goto L_00666382;
L_00666343:; BB(0x00666343);
    /* 00666343: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00666349: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066634b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00666351: mov eax, dword ptr [edx + 0x124] */ r_eax = R32((u32)(r_edx+0x124u));
    /* 00666357: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x666359u); call_ind(t); }
    /* 00666359: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066635a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066635c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066635e: call dword ptr [0x6b20b0] */ { u32 t = R32((u32)(0x6b20b0u)); r_esp -= 4; W32(r_esp, 0x666364u); call_ind(t); }
    /* 00666364: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00666367: call dword ptr [0x6b20d4] */ { u32 t = R32((u32)(0x6b20d4u)); r_esp -= 4; W32(r_esp, 0x66636du); call_ind(t); }
    /* 0066636d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00666370: cmp dword ptr [ebp - 8], 0xb7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xb7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00666377: jne 0x666382 */ if (!fZ) goto L_00666382;
L_00666379:; BB(0x00666379);
    /* 00666379: call 0x680fd0 */ r_esp -= 4; W32(r_esp, 0x66637eu); f_00680fd0();
    /* 0066637e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00666380: jmp 0x6663b2 */ goto L_006663b2;
L_00666382:; BB(0x00666382);
    /* 00666382: call 0x6660e0 */ r_esp -= 4; W32(r_esp, 0x666387u); f_006660e0();
    /* 00666387: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0066638a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066638c: jne 0x666392 */ if (!fZ) goto L_00666392;
L_0066638e:; BB(0x0066638e);
    /* 0066638e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00666390: jmp 0x6663b2 */ goto L_006663b2;
L_00666392:; BB(0x00666392);
    /* 00666392: call 0x680f90 */ r_esp -= 4; W32(r_esp, 0x666397u); f_00680f90();
    /* 00666397: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0066639a: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066639e: je 0x6663aa */ if (fZ) goto L_006663aa;
L_006663a0:; BB(0x006663a0);
    /* 006663a0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006663a3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006663a4: call dword ptr [0x6b20ac] */ { u32 t = R32((u32)(0x6b20acu)); r_esp -= 4; W32(r_esp, 0x6663aau); call_ind(t); }
L_006663aa:; BB(0x006663aa);
    /* 006663aa: call 0x680fd0 */ r_esp -= 4; W32(r_esp, 0x6663afu); f_00680fd0();
    /* 006663af: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
L_006663b2:; BB(0x006663b2);
    /* 006663b2: mov esp, ebp */ r_esp = r_ebp;
    /* 006663b4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006663b5: ret 0x10 */ FN_RET(0x006662c0); r_esp += 20; return;
}

void f_00666490(void) /* sub_666490 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00666490);
    /* 00666490: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00666491: mov ebp, esp */ r_ebp = r_esp;
    /* 00666493: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00666494: ret  */ FN_RET(0x00666490); r_esp += 4; return;
}

void f_006664a0(void) /* sub_6664A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006664a0);
    /* 006664a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006664a1: mov ebp, esp */ r_ebp = r_esp;
    /* 006664a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006664a4: ret  */ FN_RET(0x006664a0); r_esp += 4; return;
}

void f_006664b0(void) /* sub_6664B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006664b0);
    /* 006664b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006664b1: mov ebp, esp */ r_ebp = r_esp;
    /* 006664b3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006664b4: ret  */ FN_RET(0x006664b0); r_esp += 4; return;
}

void f_006664c0(void) /* sub_6664C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006664c0);
    /* 006664c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006664c1: mov ebp, esp */ r_ebp = r_esp;
    /* 006664c3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006664c4: ret  */ FN_RET(0x006664c0); r_esp += 4; return;
}

void f_006664d0(void) /* sub_6664D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006664d0);
    /* 006664d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006664d1: mov ebp, esp */ r_ebp = r_esp;
    /* 006664d3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006664d4: ret  */ FN_RET(0x006664d0); r_esp += 4; return;
}

void f_006664e0(void) /* sub_6664E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006664e0);
    /* 006664e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006664e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006664e3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006664e4: ret  */ FN_RET(0x006664e0); r_esp += 4; return;
}

void f_006664f0(void) /* sub_6664F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006664f0);
    /* 006664f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006664f1: mov ebp, esp */ r_ebp = r_esp;
    /* 006664f3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006664f4: ret  */ FN_RET(0x006664f0); r_esp += 4; return;
}

void f_00666500(void) /* sub_666500 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00666500);
    /* 00666500: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00666501: mov ebp, esp */ r_ebp = r_esp;
    /* 00666503: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00666504: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00666507: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00666508: call dword ptr [0x6b22b0] */ { u32 t = R32((u32)(0x6b22b0u)); r_esp -= 4; W32(r_esp, 0x66650eu); call_ind(t); }
    /* 0066650e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00666511: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00666514: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00666518: jne 0x666573 */ if (!fZ) goto L_00666573;
L_0066651a:; BB(0x0066651a);
    /* 0066651a: cmp dword ptr [0x7960d8], 0 */ {  u32 a = R32((u32)(0x7960d8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00666521: je 0x666573 */ if (fZ) goto L_00666573;
L_00666523:; BB(0x00666523);
    /* 00666523: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00666525: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 0066652b: call 0x625240 */ r_esp -= 4; W32(r_esp, 0x666530u); f_00625240();
    /* 00666530: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00666533: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00666534: call dword ptr [0x6b22b0] */ { u32 t = R32((u32)(0x6b22b0u)); r_esp -= 4; W32(r_esp, 0x66653au); call_ind(t); }
    /* 0066653a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066653d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00666540: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00666544: jne 0x666573 */ if (!fZ) goto L_00666573;
L_00666546:; BB(0x00666546);
    /* 00666546: push 0x2000 */ { u32 v = 0x2000u; r_esp -= 4; W32(r_esp, v); }
    /* 0066654b: push 0x6dfae8 */ { u32 v = 0x6dfae8u; r_esp -= 4; W32(r_esp, v); }
    /* 00666550: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x666555u); f_00630f40();
    /* 00666555: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00666558: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00666559: push 0x6dfad0 */ { u32 v = 0x6dfad0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066655e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x666563u); f_00630f40();
    /* 00666563: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00666566: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00666567: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00666569: call dword ptr [0x6b2440] */ { u32 t = R32((u32)(0x6b2440u)); r_esp -= 4; W32(r_esp, 0x66656fu); call_ind(t); }
    /* 0066656f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00666571: jmp 0x666576 */ goto L_00666576;
L_00666573:; BB(0x00666573);
    /* 00666573: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
L_00666576:; BB(0x00666576);
    /* 00666576: mov esp, ebp */ r_esp = r_ebp;
    /* 00666578: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00666579: ret  */ FN_RET(0x00666500); r_esp += 4; return;
}

void f_00666580(void) /* sub_666580 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00666580);
    /* 00666580: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00666581: mov ebp, esp */ r_ebp = r_esp;
    /* 00666583: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00666587: je 0x666596 */ if (fZ) goto L_00666596;
L_00666589:; BB(0x00666589);
    /* 00666589: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0066658c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066658d: call dword ptr [0x6b22bc] */ { u32 t = R32((u32)(0x6b22bcu)); r_esp -= 4; W32(r_esp, 0x666593u); call_ind(t); }
    /* 00666593: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00666596:; BB(0x00666596);
    /* 00666596: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00666597: ret  */ FN_RET(0x00666580); r_esp += 4; return;
}

void f_006665a0(void) /* sub_6665A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006665a0);
    /* 006665a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006665a1: mov ebp, esp */ r_ebp = r_esp;
    /* 006665a3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006665a6: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 006665a9: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 006665ab: sub eax, dword ptr [ecx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006665ad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006665ae: ret  */ FN_RET(0x006665a0); r_esp += 4; return;
}

void f_006665e0(void) /* sub_6665E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006665e0);
    /* 006665e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006665e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006665e3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006665e6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 006665e9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006665ec: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006665ef: je 0x66663e */ if (fZ) goto L_0066663e;
L_006665f1:; BB(0x006665f1);
    /* 006665f1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006665f8: jmp 0x666603 */ goto L_00666603;
L_006665fa:; BB(0x006665fa);
    /* 006665fa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006665fd: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00666600: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00666603:; BB(0x00666603);
    /* 00666603: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00666606: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00666609: cmp eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066660c: jge 0x66662a */ if ((fS==fO)) goto L_0066662a;
L_0066660e:; BB(0x0066660e);
    /* 0066660e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00666611: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00666613: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00666616: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 00666619: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0066661c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0066661f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00666620: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x666625u); f_00686cae();
    /* 00666625: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00666628: jmp 0x6665fa */ goto L_006665fa;
L_0066662a:; BB(0x0066662a);
    /* 0066662a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0066662d: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0066662f: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00666632: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00666635: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00666636: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x66663bu); f_00686cae();
    /* 0066663b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0066663e:; BB(0x0066663e);
    /* 0066663e: mov esp, ebp */ r_esp = r_ebp;
    /* 00666640: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00666641: ret  */ FN_RET(0x006665e0); r_esp += 4; return;
}

void f_00666650(void) /* sub_666650 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00666650);
    /* 00666650: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00666651: mov ebp, esp */ r_ebp = r_esp;
    /* 00666653: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00666656: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00666659: cmp dword ptr [0x162ee84], 0 */ {  u32 a = R32((u32)(0x162ee84u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00666660: je 0x66667b */ if (fZ) goto L_0066667b;
L_00666662:; BB(0x00666662);
    /* 00666662: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00666667: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00666669: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066666f: mov eax, dword ptr [edx + 0x168] */ r_eax = R32((u32)(r_edx+0x168u));
    /* 00666675: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x666677u); call_ind(t); }
    /* 00666677: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00666679: jne 0x66668b */ if (!fZ) goto L_0066668b;
L_0066667b:; BB(0x0066667b);
    /* 0066667b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0066667e: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 00666684: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00666686: jmp 0x666732 */ goto L_00666732;
L_0066668b:; BB(0x0066668b);
    /* 0066668b: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00666691: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00666693: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00666699: mov edx, dword ptr [eax + 0x16c] */ r_edx = R32((u32)(r_eax+0x16cu));
    /* 0066669f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6666a1u); call_ind(t); }
    /* 006666a1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006666a4: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006666a7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006666a9: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006666ac: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 006666af: mov edx, 4 */ r_edx = 0x4u;
    /* 006666b4: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 006666b6: seto cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fO) ? 1 : 0) & 0xffu);
    /* 006666b9: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006666bb: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 006666bd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006666be: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x6666c3u); f_00686d82();
    /* 006666c3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006666c6: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 006666c9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006666cc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006666cf: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 006666d1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006666d8: jmp 0x6666e3 */ goto L_006666e3;
L_006666da:; BB(0x006666da);
    /* 006666da: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006666dd: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006666e0: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_006666e3:; BB(0x006666e3);
    /* 006666e3: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006666e6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006666e9: cmp ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006666ec: jge 0x666712 */ if ((fS==fO)) goto L_00666712;
L_006666ee:; BB(0x006666ee);
    /* 006666ee: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006666f1: call 0x666f80 */ r_esp -= 4; W32(r_esp, 0x6666f6u); f_00666f80();
    /* 006666f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006666f7: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x6666fcu); f_00686d82();
    /* 006666fc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006666ff: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00666702: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00666705: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00666707: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066670a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066670d: mov dword ptr [eax + ecx*4], edx */ W32((u32)(r_eax+r_ecx*4), r_edx);
    /* 00666710: jmp 0x6666da */ goto L_006666da;
L_00666712:; BB(0x00666712);
    /* 00666712: push 0x6665a0 */ { u32 v = 0x6665a0u; r_esp -= 4; W32(r_esp, v); }
    /* 00666717: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 00666719: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0066671c: call 0x666c60 */ r_esp -= 4; W32(r_esp, 0x666721u); f_00666c60();
    /* 00666721: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00666722: push 0x7712e0 */ { u32 v = 0x7712e0u; r_esp -= 4; W32(r_esp, v); }
    /* 00666727: call dword ptr [0x6b2248] */ { u32 t = R32((u32)(0x6b2248u)); r_esp -= 4; W32(r_esp, 0x66672du); call_ind(t); }
    /* 0066672d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00666730: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00666732:; BB(0x00666732);
    /* 00666732: mov esp, ebp */ r_esp = r_ebp;
    /* 00666734: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00666735: ret  */ FN_RET(0x00666650); r_esp += 4; return;
}

void f_00666740(void) /* sub_666740 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00666740);
    /* 00666740: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00666741: mov ebp, esp */ r_ebp = r_esp;
    /* 00666743: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00666744: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00666747: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0066674a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066674b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0066674e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066674f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00666752: call 0x6667c0 */ r_esp -= 4; W32(r_esp, 0x666757u); f_006667c0();
    /* 00666757: add eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066675a: mov esp, ebp */ r_esp = r_ebp;
    /* 0066675c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066675d: ret 0xc */ FN_RET(0x00666740); r_esp += 16; return;
}

void f_00666760(void) /* sub_666760 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00666760);
    /* 00666760: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00666761: mov ebp, esp */ r_ebp = r_esp;
    /* 00666763: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00666764: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00666767: cmp dword ptr [ebp + 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066676b: je 0x66677d */ if (fZ) goto L_0066677d;
L_0066676d:; BB(0x0066676d);
    /* 0066676d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00666770: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00666771: mov ecx, 0x64 */ r_ecx = 0x64u;
    /* 00666776: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00666776, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00666776, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00666778: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0066677b: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
L_0066677d:; BB(0x0066677d);
    /* 0066677d: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00666781: je 0x66679b */ if (fZ) goto L_0066679b;
L_00666783:; BB(0x00666783);
    /* 00666783: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00666786: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00666787: mov ecx, 0x64 */ r_ecx = 0x64u;
    /* 0066678c: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0066678c, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0066678c, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0066678e: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0066678f: mov ecx, 0x2710 */ r_ecx = 0x2710u;
    /* 00666794: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00666794, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00666794, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00666796: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00666799: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
L_0066679b:; BB(0x0066679b);
    /* 0066679b: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066679f: je 0x6667b1 */ if (fZ) goto L_006667b1;
L_006667a1:; BB(0x006667a1);
    /* 006667a1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006667a4: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 006667a5: mov ecx, 0xf4240 */ r_ecx = 0xf4240u;
    /* 006667aa: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x006667aa, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x006667aa, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 006667ac: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006667af: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
L_006667b1:; BB(0x006667b1);
    /* 006667b1: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 006667b3: mov esp, ebp */ r_esp = r_ebp;
    /* 006667b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006667b6: ret 0x10 */ FN_RET(0x00666760); r_esp += 20; return;
}

void f_00666840(void) /* sub_666840 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00666840);
    /* 00666840: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00666841: mov ebp, esp */ r_ebp = r_esp;
    /* 00666843: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00666846: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00666849: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066684b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0066684e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066684f: push 0x20534443 */ { u32 v = 0x20534443u; r_esp -= 4; W32(r_esp, v); }
    /* 00666854: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 0066685a: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 0066685d: call 0x603c50 */ r_esp -= 4; W32(r_esp, 0x666862u); f_00603c50();
    /* 00666862: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00666865: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00666868: call 0x61ed80 */ r_esp -= 4; W32(r_esp, 0x66686du); f_0061ed80();
    /* 0066686d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00666870: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00666873: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00666874: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 00666879: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0066687c: call 0x6041d0 */ r_esp -= 4; W32(r_esp, 0x666881u); f_006041d0();
    /* 00666881: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00666885: jg 0x66688b */ if ((!fZ&&fS==fO)) goto L_0066688b;
L_00666887:; BB(0x00666887);
    /* 00666887: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00666889: jmp 0x66688d */ goto L_0066688d;
L_0066688b:; BB(0x0066688b);
    /* 0066688b: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0066688d:; BB(0x0066688d);
    /* 0066688d: mov esp, ebp */ r_esp = r_ebp;
    /* 0066688f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00666890: ret 4 */ FN_RET(0x00666840); r_esp += 8; return;
}

void f_00666a20(void) /* sub_666A20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00666a20);
    /* 00666a20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00666a21: mov ebp, esp */ r_ebp = r_esp;
    /* 00666a23: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00666a26: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00666a29: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00666a30: jmp 0x666a3b */ goto L_00666a3b;
L_00666a32:; BB(0x00666a32);
    /* 00666a32: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00666a35: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00666a38: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00666a3b:; BB(0x00666a3b);
    /* 00666a3b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00666a41: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00666a43: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00666a49: mov eax, dword ptr [edx + 0x16c] */ r_eax = R32((u32)(r_edx+0x16cu));
    /* 00666a4f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x666a51u); call_ind(t); }
    /* 00666a51: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00666a54: jge 0x666a77 */ if ((fS==fO)) goto L_00666a77;
L_00666a56:; BB(0x00666a56);
    /* 00666a56: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00666a59: call 0x666f80 */ r_esp -= 4; W32(r_esp, 0x666a5eu); f_00666f80();
    /* 00666a5e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00666a5f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00666a61: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00666a64: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00666a66: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00666a69: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 00666a6c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00666a6d: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x666a72u); f_00686fa2();
    /* 00666a72: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00666a75: jmp 0x666a32 */ goto L_00666a32;
L_00666a77:; BB(0x00666a77);
    /* 00666a77: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00666a79: mov esp, ebp */ r_esp = r_ebp;
    /* 00666a7b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00666a7c: ret  */ FN_RET(0x00666a20); r_esp += 4; return;
}

void f_00666c60(void) /* sub_666C60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00666c60);
    /* 00666c60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00666c61: mov ebp, esp */ r_ebp = r_esp;
    /* 00666c63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00666c64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00666c67: mov eax, 0x350 */ r_eax = 0x350u;
    /* 00666c6c: mov esp, ebp */ r_esp = r_ebp;
    /* 00666c6e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00666c6f: ret  */ FN_RET(0x00666c60); r_esp += 4; return;
}

void f_00666d90(void) /* sub_666D90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00666d90);
    /* 00666d90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00666d91: mov ebp, esp */ r_ebp = r_esp;
    /* 00666d93: sub esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00666d96: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00666d9b: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00666d9d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00666da0: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 00666da3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00666da6: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00666da9: mov cl, byte ptr [0x6b27f8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(0x6b27f8u))) & 0xffu);
    /* 00666daf: mov byte ptr [ebp - 0x4c], cl */ W8((u32)(r_ebp+0xffffffb4u), (u8)r_ecx);
    /* 00666db2: push 0x3f */ { u32 v = 0x3fu; r_esp -= 4; W32(r_esp, v); }
    /* 00666db4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00666db6: lea edx, [ebp - 0x4b] */ r_edx = (u32)(r_ebp+0xffffffb5u);
    /* 00666db9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00666dba: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x666dbfu); f_00686fa2();
    /* 00666dbf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00666dc2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00666dc4: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00666dc7: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 00666dce: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_00666dd5:; BB(0x00666dd5);
    /* 00666dd5: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00666dd8: call 0x666c60 */ r_esp -= 4; W32(r_esp, 0x666dddu); f_00666c60();
    /* 00666ddd: cmp dword ptr [ebp - 0x54], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffacu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00666de0: jge 0x666e0e */ if ((fS==fO)) goto L_00666e0e;
L_00666de2:; BB(0x00666de2);
    /* 00666de2: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00666de5: imul ecx, ecx, 0x48 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x48u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00666de8: mov edx, dword ptr [ecx + 0x7712e0] */ r_edx = R32((u32)(r_ecx+0x7712e0u));
    /* 00666dee: cmp edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00666df1: jne 0x666e03 */ if (!fZ) goto L_00666e03;
L_00666df3:; BB(0x00666df3);
    /* 00666df3: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 00666df6: imul eax, eax, 0x48 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x48u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00666df9: add eax, 0x7712e0 */ {  u32 a = r_eax; u32 b = 0x7712e0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00666dfe: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 00666e01: jmp 0x666e0e */ goto L_00666e0e;
L_00666e03:; BB(0x00666e03);
    /* 00666e03: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00666e06: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00666e09: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 00666e0c: jmp 0x666dd5 */ goto L_00666dd5;
L_00666e0e:; BB(0x00666e0e);
    /* 00666e0e: cmp dword ptr [ebp - 0x58], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00666e12: jne 0x666e1e */ if (!fZ) goto L_00666e1e;
L_00666e14:; BB(0x00666e14);
    /* 00666e14: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00666e17: call 0x666f00 */ r_esp -= 4; W32(r_esp, 0x666e1cu); f_00666f00();
    /* 00666e1c: jmp 0x666e21 */ goto L_00666e21;
L_00666e1e:; BB(0x00666e1e);
    /* 00666e1e: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
L_00666e21:; BB(0x00666e21);
    /* 00666e21: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00666e24: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00666e26: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x666e2bu); f_00686d72();
    /* 00666e2b: mov esp, ebp */ r_esp = r_ebp;
    /* 00666e2d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00666e2e: ret 4 */ FN_RET(0x00666d90); r_esp += 8; return;
}

void f_00666e40(void) /* sub_666E40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00666e40);
    /* 00666e40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00666e41: mov ebp, esp */ r_ebp = r_esp;
    /* 00666e43: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00666e46: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00666e49: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00666e4c: call 0x666c60 */ r_esp -= 4; W32(r_esp, 0x666e51u); f_00666c60();
    /* 00666e51: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00666e54: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00666e5b: jmp 0x666e66 */ goto L_00666e66;
L_00666e5d:; BB(0x00666e5d);
    /* 00666e5d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00666e60: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00666e63: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00666e66:; BB(0x00666e66);
    /* 00666e66: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00666e69: cmp ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00666e6c: jge 0x666e9a */ if ((fS==fO)) goto L_00666e9a;
L_00666e6e:; BB(0x00666e6e);
    /* 00666e6e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00666e71: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00666e72: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00666e75: imul eax, eax, 0x48 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x48u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00666e78: add eax, 0x7712e4 */ {  u32 a = r_eax; u32 b = 0x7712e4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00666e7d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00666e7e: call dword ptr [0x6b21e4] */ { u32 t = R32((u32)(0x6b21e4u)); r_esp -= 4; W32(r_esp, 0x666e84u); call_ind(t); }
    /* 00666e84: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00666e87: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00666e89: jne 0x666e98 */ if (!fZ) goto L_00666e98;
L_00666e8b:; BB(0x00666e8b);
    /* 00666e8b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00666e8e: imul eax, eax, 0x48 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x48u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00666e91: add eax, 0x7712e0 */ {  u32 a = r_eax; u32 b = 0x7712e0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00666e96: jmp 0x666ea2 */ goto L_00666ea2;
L_00666e98:; BB(0x00666e98);
    /* 00666e98: jmp 0x666e5d */ goto L_00666e5d;
L_00666e9a:; BB(0x00666e9a);
    /* 00666e9a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00666e9d: call 0x666f00 */ r_esp -= 4; W32(r_esp, 0x666ea2u); f_00666f00();
L_00666ea2:; BB(0x00666ea2);
    /* 00666ea2: mov esp, ebp */ r_esp = r_ebp;
    /* 00666ea4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00666ea5: ret 4 */ FN_RET(0x00666e40); r_esp += 8; return;
}

void f_00666f00(void) /* sub_666F00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00666f00);
    /* 00666f00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00666f01: mov ebp, esp */ r_ebp = r_esp;
    /* 00666f03: sub esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00666f06: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00666f0b: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00666f0d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00666f10: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 00666f13: mov dword ptr [ebp - 0x50], 0xffffffff */ W32((u32)(r_ebp+0xffffffb0u), 0xffffffffu);
    /* 00666f1a: push 0x6665a0 */ { u32 v = 0x6665a0u; r_esp -= 4; W32(r_esp, v); }
    /* 00666f1f: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 00666f21: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00666f24: call 0x666c60 */ r_esp -= 4; W32(r_esp, 0x666f29u); f_00666c60();
    /* 00666f29: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00666f2a: push 0x7712e0 */ { u32 v = 0x7712e0u; r_esp -= 4; W32(r_esp, v); }
    /* 00666f2f: lea eax, [ebp - 0x50] */ r_eax = (u32)(r_ebp+0xffffffb0u);
    /* 00666f32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00666f33: call dword ptr [0x6b2184] */ { u32 t = R32((u32)(0x6b2184u)); r_esp -= 4; W32(r_esp, 0x666f39u); call_ind(t); }
    /* 00666f39: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00666f3c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00666f3f: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00666f41: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x666f46u); f_00686d72();
    /* 00666f46: mov esp, ebp */ r_esp = r_ebp;
    /* 00666f48: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00666f49: ret  */ FN_RET(0x00666f00); r_esp += 4; return;
}

void f_00666f50(void) /* sub_666F50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00666f50);
    /* 00666f50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00666f51: mov ebp, esp */ r_ebp = r_esp;
    /* 00666f53: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00666f56: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00666f59: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00666f5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00666f5d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00666f60: call 0x666d90 */ r_esp -= 4; W32(r_esp, 0x666f65u); f_00666d90();
    /* 00666f65: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00666f68: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00666f6b: sub eax, 0x7712e0 */ {  u32 a = r_eax; u32 b = 0x7712e0u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00666f70: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00666f71: mov ecx, 0x48 */ r_ecx = 0x48u;
    /* 00666f76: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00666f76, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00666f76, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00666f78: mov esp, ebp */ r_esp = r_ebp;
    /* 00666f7a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00666f7b: ret 4 */ FN_RET(0x00666f50); r_esp += 8; return;
}

void f_00666f80(void) /* sub_666F80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00666f80);
    /* 00666f80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00666f81: mov ebp, esp */ r_ebp = r_esp;
    /* 00666f83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00666f84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00666f87: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00666f8a: call 0x666c60 */ r_esp -= 4; W32(r_esp, 0x666f8fu); f_00666c60();
    /* 00666f8f: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00666f92: mov esp, ebp */ r_esp = r_ebp;
    /* 00666f94: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00666f95: ret  */ FN_RET(0x00666f80); r_esp += 4; return;
}

void f_00666fb0(void) /* sub_666FB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00666fb0);
    /* 00666fb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00666fb1: mov ebp, esp */ r_ebp = r_esp;
    /* 00666fb3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00666fb6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00666fb9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00666fc0: jmp 0x666fcb */ goto L_00666fcb;
L_00666fc2:; BB(0x00666fc2);
    /* 00666fc2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00666fc5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00666fc8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00666fcb:; BB(0x00666fcb);
    /* 00666fcb: cmp dword ptr [ebp - 4], 0x2c */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00666fcf: jge 0x666fff */ if ((fS==fO)) goto L_00666fff;
L_00666fd1:; BB(0x00666fd1);
    /* 00666fd1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00666fd4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00666fd5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00666fd8: imul edx, edx, 0x44 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x44u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00666fdb: add edx, 0x780164 */ {  u32 a = r_edx; u32 b = 0x780164u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00666fe1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00666fe2: call dword ptr [0x6b21e4] */ { u32 t = R32((u32)(0x6b21e4u)); r_esp -= 4; W32(r_esp, 0x666fe8u); call_ind(t); }
    /* 00666fe8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00666feb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00666fed: jne 0x666ffd */ if (!fZ) goto L_00666ffd;
L_00666fef:; BB(0x00666fef);
    /* 00666fef: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00666ff2: imul eax, eax, 0x44 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x44u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00666ff5: mov eax, dword ptr [eax + 0x780160] */ r_eax = R32((u32)(r_eax+0x780160u));
    /* 00666ffb: jmp 0x667002 */ goto L_00667002;
L_00666ffd:; BB(0x00666ffd);
    /* 00666ffd: jmp 0x666fc2 */ goto L_00666fc2;
L_00666fff:; BB(0x00666fff);
    /* 00666fff: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00667002:; BB(0x00667002);
    /* 00667002: mov esp, ebp */ r_esp = r_ebp;
    /* 00667004: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00667005: ret 4 */ FN_RET(0x00666fb0); r_esp += 8; return;
}

