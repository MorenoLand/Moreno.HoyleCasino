#include "protos.h"

void f_005d70e0(void) /* sub_5D70E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d70e0);
    /* 005d70e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d70e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d70e3: sub esp, 0x1c0 */ {  u32 a = r_esp; u32 b = 0x1c0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d70e9: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005d70ee: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d70f0: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005d70f3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d70f4: mov dword ptr [ebp - 0x1c0], ecx */ W32((u32)(r_ebp+0xfffffe40u), r_ecx);
    /* 005d70fa: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 005d70fe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7100: jne 0x5d714a */ if (!fZ) goto L_005d714a;
L_005d7102:; BB(0x005d7102);
    /* 005d7102: push 0x6d3e8c */ { u32 v = 0x6d3e8cu; r_esp -= 4; W32(r_esp, v); }
    /* 005d7107: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5d710cu); f_00630f40();
    /* 005d710c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d710f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d7110: lea ecx, [ebp - 0xa0] */ r_ecx = (u32)(r_ebp+0xffffff60u);
    /* 005d7116: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7117: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5d711cu); f_00686d8e();
    /* 005d711c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d711f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005d7121: push 0x6d3e6c */ { u32 v = 0x6d3e6cu; r_esp -= 4; W32(r_esp, v); }
    /* 005d7126: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5d712bu); f_00630f40();
    /* 005d712b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d712e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d712f: lea edx, [ebp - 0xa0] */ r_edx = (u32)(r_ebp+0xffffff60u);
    /* 005d7135: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7136: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x5d713bu); f_0062ff10();
    /* 005d713b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d713e: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7141: je 0x5d714a */ if (fZ) goto L_005d714a;
L_005d7143:; BB(0x005d7143);
    /* 005d7143: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005d7145: jmp 0x5d7372 */ goto L_005d7372;
L_005d714a:; BB(0x005d714a);
    /* 005d714a: mov ecx, dword ptr [ebp - 0x1c0] */ r_ecx = R32((u32)(r_ebp+0xfffffe40u));
    /* 005d7150: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x5d7155u); f_005d52e0();
    /* 005d7155: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005d7158: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 005d715a: mov ecx, dword ptr [ebp - 0x1c0] */ r_ecx = R32((u32)(r_ebp+0xfffffe40u));
    /* 005d7160: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x5d7165u); f_005d52e0();
    /* 005d7165: mov dword ptr [eax + 4], 0 */ W32((u32)(r_eax+0x4u), 0x0u);
    /* 005d716c: mov ecx, dword ptr [ebp - 0x1c0] */ r_ecx = R32((u32)(r_ebp+0xfffffe40u));
    /* 005d7172: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x5d7177u); f_005d52e0();
    /* 005d7177: mov byte ptr [eax + 0x29], 0 */ W8((u32)(r_eax+0x29u), 0x0u);
    /* 005d717b: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005d717d: cmp dword ptr [ebp + 0xc], 0xf4240 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xf4240u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7184: setne bl */ r_ebx = (r_ebx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 005d7187: sub ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 005d718a: and ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 005d718d: mov ecx, dword ptr [ebp - 0x1c0] */ r_ecx = R32((u32)(r_ebp+0xfffffe40u));
    /* 005d7193: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x5d7198u); f_005d52e0();
    /* 005d7198: mov byte ptr [eax + 0x2a], bl */ W8((u32)(r_eax+0x2au), (u8)r_ebx);
    /* 005d719b: mov ecx, dword ptr [ebp - 0x1c0] */ r_ecx = R32((u32)(r_ebp+0xfffffe40u));
    /* 005d71a1: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x5d71a6u); f_005d52e0();
    /* 005d71a6: mov dword ptr [eax + 0x2c], 0 */ W32((u32)(r_eax+0x2cu), 0x0u);
    /* 005d71ad: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d71b4: jmp 0x5d71bf */ goto L_005d71bf;
L_005d71b6:; BB(0x005d71b6);
    /* 005d71b6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d71b9: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d71bc: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_005d71bf:; BB(0x005d71bf);
    /* 005d71bf: cmp dword ptr [ebp - 4], 0x16 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d71c3: jge 0x5d71de */ if ((fS==fO)) goto L_005d71de;
L_005d71c5:; BB(0x005d71c5);
    /* 005d71c5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d71c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d71c9: mov ecx, dword ptr [ebp - 0x1c0] */ r_ecx = R32((u32)(r_ebp+0xfffffe40u));
    /* 005d71cf: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d71d1: mov ecx, dword ptr [ebp - 0x1c0] */ r_ecx = R32((u32)(r_ebp+0xfffffe40u));
    /* 005d71d7: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005d71da: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d71dcu); call_ind(t); }
    /* 005d71dc: jmp 0x5d71b6 */ goto L_005d71b6;
L_005d71de:; BB(0x005d71de);
    /* 005d71de: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d71e0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d71e2: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5d71e7u); f_0064c8a0();
    /* 005d71e7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d71ea: mov dword ptr [ebp - 0x1a8], eax */ W32((u32)(r_ebp+0xfffffe58u), r_eax);
    /* 005d71f0: mov dword ptr [ebp - 0x1a4], edx */ W32((u32)(r_ebp+0xfffffe5cu), r_edx);
    /* 005d71f6: mov ecx, dword ptr [ebp - 0x1a4] */ r_ecx = R32((u32)(r_ebp+0xfffffe5cu));
    /* 005d71fc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d71fd: mov edx, dword ptr [ebp - 0x1a8] */ r_edx = R32((u32)(r_ebp+0xfffffe58u));
    /* 005d7203: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7204: mov ecx, dword ptr [ebp - 0x1c0] */ r_ecx = R32((u32)(r_ebp+0xfffffe40u));
    /* 005d720a: call 0x5d5f80 */ r_esp -= 4; W32(r_esp, 0x5d720fu); f_005d5f80();
    /* 005d720f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d7211: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d7213: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5d7218u); f_0064c8a0();
    /* 005d7218: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d721b: mov dword ptr [ebp - 0x1b0], eax */ W32((u32)(r_ebp+0xfffffe50u), r_eax);
    /* 005d7221: mov dword ptr [ebp - 0x1ac], edx */ W32((u32)(r_ebp+0xfffffe54u), r_edx);
    /* 005d7227: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 005d722d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d722e: mov ecx, dword ptr [ebp - 0x1b0] */ r_ecx = R32((u32)(r_ebp+0xfffffe50u));
    /* 005d7234: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7235: mov ecx, dword ptr [ebp - 0x1c0] */ r_ecx = R32((u32)(r_ebp+0xfffffe40u));
    /* 005d723b: call 0x5d6050 */ r_esp -= 4; W32(r_esp, 0x5d7240u); f_005d6050();
    /* 005d7240: mov edx, dword ptr [ebp - 0x1c0] */ r_edx = R32((u32)(r_ebp+0xfffffe40u));
    /* 005d7246: mov dword ptr [edx + 0x4a8], 0 */ W32((u32)(r_edx+0x4a8u), 0x0u);
    /* 005d7250: mov eax, dword ptr [ebp - 0x1c0] */ r_eax = R32((u32)(r_ebp+0xfffffe40u));
    /* 005d7256: mov byte ptr [eax + 0x4b0], 0 */ W8((u32)(r_eax+0x4b0u), 0x0u);
    /* 005d725d: mov ecx, dword ptr [ebp - 0x1c0] */ r_ecx = R32((u32)(r_ebp+0xfffffe40u));
    /* 005d7263: call 0x63b0a0 */ r_esp -= 4; W32(r_esp, 0x5d7268u); f_0063b0a0();
L_005d7268:; BB(0x005d7268);
    /* 005d7268: mov ecx, dword ptr [ebp - 0x1c0] */ r_ecx = R32((u32)(r_ebp+0xfffffe40u));
    /* 005d726e: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x5d7273u); f_005d52e0();
    /* 005d7273: movsx ecx, byte ptr [eax + 0x60] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x60u));
    /* 005d7277: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d727a: je 0x5d72a6 */ if (fZ) goto L_005d72a6;
L_005d727c:; BB(0x005d727c);
    /* 005d727c: mov ecx, dword ptr [ebp - 0x1c0] */ r_ecx = R32((u32)(r_ebp+0xfffffe40u));
    /* 005d7282: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5d7287u); f_0063aac0();
    /* 005d7287: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d728a: mov dword ptr [ebp - 0x1bc], eax */ W32((u32)(r_ebp+0xfffffe44u), r_eax);
    /* 005d7290: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d7292: mov edx, dword ptr [ebp - 0x1bc] */ r_edx = R32((u32)(r_ebp+0xfffffe44u));
    /* 005d7298: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7299: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005d729f: call 0x5e2e40 */ r_esp -= 4; W32(r_esp, 0x5d72a4u); f_005e2e40();
    /* 005d72a4: jmp 0x5d7268 */ goto L_005d7268;
L_005d72a6:; BB(0x005d72a6);
    /* 005d72a6: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d72a8: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005d72ad: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d72af: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d72b5: mov eax, dword ptr [edx + 0x33c] */ r_eax = R32((u32)(r_edx+0x33cu));
    /* 005d72bb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d72bdu); call_ind(t); }
    /* 005d72bd: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005d72c0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d72c2: je 0x5d72d9 */ if (fZ) goto L_005d72d9;
L_005d72c4:; BB(0x005d72c4);
    /* 005d72c4: mov edx, dword ptr [ebp - 0x1c0] */ r_edx = R32((u32)(r_ebp+0xfffffe40u));
    /* 005d72ca: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005d72cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d72ce: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005d72d4: call 0x5de200 */ r_esp -= 4; W32(r_esp, 0x5d72d9u); f_005de200();
L_005d72d9:; BB(0x005d72d9);
    /* 005d72d9: cmp dword ptr [ebp + 0xc], 0xf4240 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xf4240u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d72e0: jne 0x5d7370 */ if (!fZ) goto L_005d7370;
L_005d72e6:; BB(0x005d72e6);
    /* 005d72e6: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005d72e8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d72ea: call 0x62fc30 */ r_esp -= 4; W32(r_esp, 0x5d72efu); f_0062fc30();
    /* 005d72ef: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d72f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d72f3: push 0x6d3e40 */ { u32 v = 0x6d3e40u; r_esp -= 4; W32(r_esp, v); }
    /* 005d72f8: lea ecx, [ebp - 0x1a0] */ r_ecx = (u32)(r_ebp+0xfffffe60u);
    /* 005d72fe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d72ff: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5d7305u); call_ind(t); }
    /* 005d7305: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d7308: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d730a: push 0x6d3e18 */ { u32 v = 0x6d3e18u; r_esp -= 4; W32(r_esp, v); }
    /* 005d730f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5d7314u); f_00630f40();
    /* 005d7314: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d7317: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d7318: lea edx, [ebp - 0x1a0] */ r_edx = (u32)(r_ebp+0xfffffe60u);
    /* 005d731e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d731f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5d7324u); f_00630f40();
    /* 005d7324: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d7327: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d7328: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x5d732du); f_0062ff10();
    /* 005d732d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d7330: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d7332: push 0x3b9aca00 */ { u32 v = 0x3b9aca00u; r_esp -= 4; W32(r_esp, v); }
    /* 005d7337: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5d733cu); f_0064c8a0();
    /* 005d733c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d733f: mov dword ptr [ebp - 0x1b8], eax */ W32((u32)(r_ebp+0xfffffe48u), r_eax);
    /* 005d7345: mov dword ptr [ebp - 0x1b4], edx */ W32((u32)(r_ebp+0xfffffe4cu), r_edx);
    /* 005d734b: mov eax, dword ptr [ebp - 0x1b4] */ r_eax = R32((u32)(r_ebp+0xfffffe4cu));
    /* 005d7351: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d7352: mov ecx, dword ptr [ebp - 0x1b8] */ r_ecx = R32((u32)(r_ebp+0xfffffe48u));
    /* 005d7358: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7359: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d735b: mov edx, dword ptr [ebp - 0x1c0] */ r_edx = R32((u32)(r_ebp+0xfffffe40u));
    /* 005d7361: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005d7364: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d7365: mov ecx, dword ptr [0x79506c] */ r_ecx = R32((u32)(0x79506cu));
    /* 005d736b: call 0x5e7e40 */ r_esp -= 4; W32(r_esp, 0x5d7370u); f_005e7e40();
L_005d7370:; BB(0x005d7370);
    /* 005d7370: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_005d7372:; BB(0x005d7372);
    /* 005d7372: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d7373: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d7376: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005d7378: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x5d737du); f_00686d72();
    /* 005d737d: mov esp, ebp */ r_esp = r_ebp;
    /* 005d737f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d7380: ret 8 */ FN_RET(0x005d70e0); r_esp += 12; return;
}

void f_005d7390(void) /* sub_5D7390 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d7390);
    /* 005d7390: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d7391: mov ebp, esp */ r_ebp = r_esp;
    /* 005d7393: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d7396: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d7397: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 005d739a: mov eax, dword ptr [0x7947e4] */ r_eax = R32((u32)(0x7947e4u));
    /* 005d739f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d73a1: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005d73a7: mov eax, dword ptr [edx + 0x2a4] */ r_eax = R32((u32)(r_edx+0x2a4u));
    /* 005d73ad: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d73afu); call_ind(t); }
    /* 005d73af: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005d73b2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d73b4: je 0x5d73f6 */ if (fZ) goto L_005d73f6;
L_005d73b6:; BB(0x005d73b6);
    /* 005d73b6: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 005d73b9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d73ba: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005d73bd: call 0x5d5a90 */ r_esp -= 4; W32(r_esp, 0x5d73c2u); f_005d5a90();
    /* 005d73c2: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005d73c4: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005d73c7: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005d73ca: mov dword ptr [eax + 0x4b4], ecx */ W32((u32)(r_eax+0x4b4u), r_ecx);
    /* 005d73d0: mov dword ptr [eax + 0x4b8], edx */ W32((u32)(r_eax+0x4b8u), r_edx);
    /* 005d73d6: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 005d73d9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d73da: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005d73dd: call 0x5d5a90 */ r_esp -= 4; W32(r_esp, 0x5d73e2u); f_005d5a90();
    /* 005d73e2: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005d73e5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d73e6: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005d73e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d73e9: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005d73ec: call 0x5d59e0 */ r_esp -= 4; W32(r_esp, 0x5d73f1u); f_005d59e0();
    /* 005d73f1: jmp 0x5d74a9 */ goto L_005d74a9;
L_005d73f6:; BB(0x005d73f6);
    /* 005d73f6: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005d73f9: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x5d73feu); f_005d5a50();
    /* 005d73fe: mov esi, eax */ r_esi = r_eax;
    /* 005d7400: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005d7406: call 0x5da880 */ r_esp -= 4; W32(r_esp, 0x5d740bu); f_005da880();
    /* 005d740b: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d740d: jl 0x5d74a9 */ if ((fS!=fO)) goto L_005d74a9;
L_005d7413:; BB(0x005d7413);
    /* 005d7413: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 005d7416: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7417: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005d741a: call 0x5d5a90 */ r_esp -= 4; W32(r_esp, 0x5d741fu); f_005d5a90();
    /* 005d741f: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005d7422: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7423: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005d7425: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d7426: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005d7429: call 0x5d59e0 */ r_esp -= 4; W32(r_esp, 0x5d742eu); f_005d59e0();
    /* 005d742e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d7430: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005d7436: call 0x5da880 */ r_esp -= 4; W32(r_esp, 0x5d743bu); f_005da880();
    /* 005d743b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d743c: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5d7441u); f_0064c8a0();
    /* 005d7441: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d7444: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005d7447: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 005d744a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d744d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d744e: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d7451: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7452: lea eax, [ebp - 0x30] */ r_eax = (u32)(r_ebp+0xffffffd0u);
    /* 005d7455: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d7456: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 005d7459: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d745a: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005d745d: call 0x5d5a90 */ r_esp -= 4; W32(r_esp, 0x5d7462u); f_005d5a90();
    /* 005d7462: mov ecx, eax */ r_ecx = r_eax;
    /* 005d7464: call 0x64c630 */ r_esp -= 4; W32(r_esp, 0x5d7469u); f_0064c630();
    /* 005d7469: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d746b: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005d746e: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005d7471: mov dword ptr [ecx + 0x4b4], edx */ W32((u32)(r_ecx+0x4b4u), r_edx);
    /* 005d7477: mov dword ptr [ecx + 0x4b8], eax */ W32((u32)(r_ecx+0x4b8u), r_eax);
    /* 005d747d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d747f: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005d7485: call 0x5da880 */ r_esp -= 4; W32(r_esp, 0x5d748au); f_005da880();
    /* 005d748a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d748b: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5d7490u); f_0064c8a0();
    /* 005d7490: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d7493: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005d7496: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 005d7499: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005d749c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d749d: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005d74a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d74a1: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005d74a4: call 0x5d5af0 */ r_esp -= 4; W32(r_esp, 0x5d74a9u); f_005d5af0();
L_005d74a9:; BB(0x005d74a9);
    /* 005d74a9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d74aa: mov esp, ebp */ r_esp = r_ebp;
    /* 005d74ac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d74ad: ret  */ FN_RET(0x005d7390); r_esp += 4; return;
}

void f_005d74b0(void) /* sub_5D74B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d74b0);
    /* 005d74b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d74b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d74b3: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d74b6: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005d74b9: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d74bc: mov ecx, dword ptr [eax + 0x4b4] */ r_ecx = R32((u32)(r_eax+0x4b4u));
    /* 005d74c2: mov edx, dword ptr [eax + 0x4b8] */ r_edx = R32((u32)(r_eax+0x4b8u));
    /* 005d74c8: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d74cb: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005d74ce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d74d0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d74d2: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5d74d7u); f_0064c8a0();
    /* 005d74d7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d74da: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005d74dd: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005d74e0: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d74e3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d74e6: mov dword ptr [eax + 0x4b4], ecx */ W32((u32)(r_eax+0x4b4u), r_ecx);
    /* 005d74ec: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d74ef: mov dword ptr [eax + 0x4b8], edx */ W32((u32)(r_eax+0x4b8u), r_edx);
    /* 005d74f5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d74f7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d74f9: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5d74feu); f_0064c8a0();
    /* 005d74fe: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d7501: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005d7504: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005d7507: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d750a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d750b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d750e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d750f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d7512: call 0x5d59e0 */ r_esp -= 4; W32(r_esp, 0x5d7517u); f_005d59e0();
    /* 005d7517: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d751a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d751b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d751e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d751f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d7522: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x5d7527u); f_005d5cf0();
    /* 005d7527: mov esp, ebp */ r_esp = r_ebp;
    /* 005d7529: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d752a: ret  */ FN_RET(0x005d74b0); r_esp += 4; return;
}

void f_005d7540(void) /* sub_5D7540 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d7540);
    /* 005d7540: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d7541: mov ebp, esp */ r_ebp = r_esp;
    /* 005d7543: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7544: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d7547: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d754a: mov ecx, dword ptr [eax + 0x4a8] */ r_ecx = R32((u32)(r_eax+0x4a8u));
    /* 005d7550: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d7553: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7556: mov dword ptr [edx + 0x4a8], ecx */ W32((u32)(r_edx+0x4a8u), r_ecx);
    /* 005d755c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d755f: mov ecx, dword ptr [eax + 0x4a8] */ r_ecx = R32((u32)(r_eax+0x4a8u));
    /* 005d7565: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7566: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005d7568: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d756b: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005d756e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d756f: mov ecx, dword ptr [0x79506c] */ r_ecx = R32((u32)(0x79506cu));
    /* 005d7575: call 0x5e7e00 */ r_esp -= 4; W32(r_esp, 0x5d757au); f_005e7e00();
    /* 005d757a: mov esp, ebp */ r_esp = r_ebp;
    /* 005d757c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d757d: ret  */ FN_RET(0x005d7540); r_esp += 4; return;
}

void f_005d7680(void) /* sub_5D7680 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d7680);
    /* 005d7680: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d7681: mov ebp, esp */ r_ebp = r_esp;
    /* 005d7683: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7684: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d7687: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d768a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d768b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d768e: mov ecx, dword ptr [ecx + 0x184] */ r_ecx = R32((u32)(r_ecx+0x184u));
    /* 005d7694: call 0x5ee710 */ r_esp -= 4; W32(r_esp, 0x5d7699u); f_005ee710();
    /* 005d7699: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d769c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d769e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d76a1: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 005d76a4: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5d76a6u); call_ind(t); }
    /* 005d76a6: add eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d76a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d76aa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d76ad: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d76af: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d76b2: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d76b5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d76b7u); call_ind(t); }
    /* 005d76b7: add eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d76ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d76bb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d76be: mov edx, dword ptr [ecx + 0x184] */ r_edx = R32((u32)(r_ecx+0x184u));
    /* 005d76c4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d76c7: mov ecx, dword ptr [eax + 0x184] */ r_ecx = R32((u32)(r_eax+0x184u));
    /* 005d76cd: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005d76cf: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005d76d2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d76d4u); call_ind(t); }
    /* 005d76d4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d76d7: call 0x5f53c0 */ r_esp -= 4; W32(r_esp, 0x5d76dcu); f_005f53c0();
    /* 005d76dc: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d76df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d76e0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d76e3: mov edx, dword ptr [ecx + 0x184] */ r_edx = R32((u32)(r_ecx+0x184u));
    /* 005d76e9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d76ec: mov ecx, dword ptr [eax + 0x184] */ r_ecx = R32((u32)(r_eax+0x184u));
    /* 005d76f2: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005d76f4: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 005d76f7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d76f9u); call_ind(t); }
    /* 005d76f9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d76fc: call 0x5f54a0 */ r_esp -= 4; W32(r_esp, 0x5d7701u); f_005f54a0();
    /* 005d7701: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005d7704: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7706: je 0x5d7721 */ if (fZ) goto L_005d7721;
L_005d7708:; BB(0x005d7708);
    /* 005d7708: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d770b: mov eax, dword ptr [edx + 0x184] */ r_eax = R32((u32)(r_edx+0x184u));
    /* 005d7711: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7714: mov ecx, dword ptr [ecx + 0x184] */ r_ecx = R32((u32)(r_ecx+0x184u));
    /* 005d771a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d771c: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005d771f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d7721u); call_ind(t); }
L_005d7721:; BB(0x005d7721);
    /* 005d7721: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005d7724: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7725: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7728: mov ecx, dword ptr [edx + 0x188] */ r_ecx = R32((u32)(r_edx+0x188u));
    /* 005d772e: call 0x5ee710 */ r_esp -= 4; W32(r_esp, 0x5d7733u); f_005ee710();
    /* 005d7733: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7736: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d7738: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d773b: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 005d773e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d7740u); call_ind(t); }
    /* 005d7740: add eax, 0x22 */ {  u32 a = r_eax; u32 b = 0x22u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d7743: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d7744: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7747: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d7749: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d774c: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d774f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d7751u); call_ind(t); }
    /* 005d7751: add eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d7754: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d7755: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7758: mov edx, dword ptr [ecx + 0x188] */ r_edx = R32((u32)(r_ecx+0x188u));
    /* 005d775e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7761: mov ecx, dword ptr [eax + 0x188] */ r_ecx = R32((u32)(r_eax+0x188u));
    /* 005d7767: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005d7769: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005d776c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d776eu); call_ind(t); }
    /* 005d776e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7771: call 0x5f53c0 */ r_esp -= 4; W32(r_esp, 0x5d7776u); f_005f53c0();
    /* 005d7776: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d7779: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d777a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d777d: mov edx, dword ptr [ecx + 0x188] */ r_edx = R32((u32)(r_ecx+0x188u));
    /* 005d7783: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7786: mov ecx, dword ptr [eax + 0x188] */ r_ecx = R32((u32)(r_eax+0x188u));
    /* 005d778c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005d778e: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 005d7791: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d7793u); call_ind(t); }
    /* 005d7793: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7796: call 0x5f54a0 */ r_esp -= 4; W32(r_esp, 0x5d779bu); f_005f54a0();
    /* 005d779b: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005d779e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d77a0: je 0x5d77bb */ if (fZ) goto L_005d77bb;
L_005d77a2:; BB(0x005d77a2);
    /* 005d77a2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d77a5: mov eax, dword ptr [edx + 0x188] */ r_eax = R32((u32)(r_edx+0x188u));
    /* 005d77ab: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d77ae: mov ecx, dword ptr [ecx + 0x188] */ r_ecx = R32((u32)(r_ecx+0x188u));
    /* 005d77b4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d77b6: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005d77b9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d77bbu); call_ind(t); }
L_005d77bb:; BB(0x005d77bb);
    /* 005d77bb: mov esp, ebp */ r_esp = r_ebp;
    /* 005d77bd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d77be: ret 8 */ FN_RET(0x005d7680); r_esp += 12; return;
}

