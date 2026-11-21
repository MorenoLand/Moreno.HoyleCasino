#include "protos.h"

void f_005a67d0(void) /* sub_5A67D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a67d0);
    /* 005a67d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a67d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005a67d3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a67d6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a67d7: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005a67da: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a67dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a67de: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a67e4: call 0x5b4e50 */ r_esp -= 4; W32(r_esp, 0x5a67e9u); f_005b4e50();
    /* 005a67e9: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005a67ec: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a67ef: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a67f0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a67f3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a67f4: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a67fa: call 0x5b5830 */ r_esp -= 4; W32(r_esp, 0x5a67ffu); f_005b5830();
    /* 005a67ff: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005a6802: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a6805: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a6806: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a680c: call 0x5b58f0 */ r_esp -= 4; W32(r_esp, 0x5a6811u); f_005b58f0();
    /* 005a6811: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005a6814: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a6818: jne 0x5a68f5 */ if (!fZ) goto L_005a68f5;
L_005a681e:; BB(0x005a681e);
    /* 005a681e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a6821: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a6822: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a6825: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a6826: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a682c: call 0x5b82f0 */ r_esp -= 4; W32(r_esp, 0x5a6831u); f_005b82f0();
    /* 005a6831: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005a6834: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a6836: je 0x5a68f5 */ if (fZ) goto L_005a68f5;
L_005a683c:; BB(0x005a683c);
    /* 005a683c: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a6842: call 0x5b5950 */ r_esp -= 4; W32(r_esp, 0x5a6847u); f_005b5950();
    /* 005a6847: movsx ecx, al */ r_ecx = (u32)(i32)(i8)(u8)r_eax;
    /* 005a684a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005a684d: cmp dword ptr [ebp - 0xc], ecx */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a6850: jge 0x5a68f5 */ if ((fS==fO)) goto L_005a68f5;
L_005a6856:; BB(0x005a6856);
    /* 005a6856: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a6858: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a685b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a685c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a685f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a6860: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a6866: call 0x5b5f60 */ r_esp -= 4; W32(r_esp, 0x5a686bu); f_005b5f60();
    /* 005a686b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a686e: jne 0x5a68bf */ if (!fZ) goto L_005a68bf;
L_005a6870:; BB(0x005a6870);
    /* 005a6870: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a6873: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a6874: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a6877: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a6878: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a687e: call 0x5b3710 */ r_esp -= 4; W32(r_esp, 0x5a6883u); f_005b3710();
    /* 005a6883: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005a6886: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a6888: je 0x5a6896 */ if (fZ) goto L_005a6896;
L_005a688a:; BB(0x005a688a);
    /* 005a688a: mov eax, 0x1e */ r_eax = 0x1eu;
    /* 005a688f: jmp 0x5a6b60 */ goto L_005a6b60;
L_005a6896:; BB(0x005a6896);
    /* 005a6896: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a6899: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a689a: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a68a0: call 0x5b6170 */ r_esp -= 4; W32(r_esp, 0x5a68a5u); f_005b6170();
    /* 005a68a5: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005a68a8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a68aa: je 0x5a68b5 */ if (fZ) goto L_005a68b5;
L_005a68ac:; BB(0x005a68ac);
    /* 005a68ac: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a68ae: jmp 0x5a6b60 */ goto L_005a6b60;
L_005a68b5:; BB(0x005a68b5);
    /* 005a68b5: mov eax, 0xd */ r_eax = 0xdu;
    /* 005a68ba: jmp 0x5a6b60 */ goto L_005a6b60;
L_005a68bf:; BB(0x005a68bf);
    /* 005a68bf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a68c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a68c3: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a68c9: call 0x5b36b0 */ r_esp -= 4; W32(r_esp, 0x5a68ceu); f_005b36b0();
    /* 005a68ce: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005a68d1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a68d3: je 0x5a68f5 */ if (fZ) goto L_005a68f5;
L_005a68d5:; BB(0x005a68d5);
    /* 005a68d5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a68d8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a68d9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a68dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a68dd: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a68e3: call 0x5b4f50 */ r_esp -= 4; W32(r_esp, 0x5a68e8u); f_005b4f50();
    /* 005a68e8: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005a68e9: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005a68eb: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005a68ed: add eax, 0x13 */ {  u32 a = r_eax; u32 b = 0x13u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a68f0: jmp 0x5a6b60 */ goto L_005a6b60;
L_005a68f5:; BB(0x005a68f5);
    /* 005a68f5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a68f8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a68f9: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a68ff: call 0x5b6170 */ r_esp -= 4; W32(r_esp, 0x5a6904u); f_005b6170();
    /* 005a6904: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005a6907: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a6909: je 0x5a6912 */ if (fZ) goto L_005a6912;
L_005a690b:; BB(0x005a690b);
    /* 005a690b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a690d: jmp 0x5a6b60 */ goto L_005a6b60;
L_005a6912:; BB(0x005a6912);
    /* 005a6912: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a6915: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a6916: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a6919: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a691a: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a6920: call 0x5b4f50 */ r_esp -= 4; W32(r_esp, 0x5a6925u); f_005b4f50();
    /* 005a6925: cmp eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a6928: jne 0x5a6931 */ if (!fZ) goto L_005a6931;
L_005a692a:; BB(0x005a692a);
    /* 005a692a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a692c: jmp 0x5a6b60 */ goto L_005a6b60;
L_005a6931:; BB(0x005a6931);
    /* 005a6931: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a6934: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a6935: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a6938: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a6939: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a693f: call 0x5b4f50 */ r_esp -= 4; W32(r_esp, 0x5a6944u); f_005b4f50();
    /* 005a6944: cmp eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a6947: jge 0x5a69b1 */ if ((fS==fO)) goto L_005a69b1;
L_005a6949:; BB(0x005a6949);
    /* 005a6949: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a694c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a694d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a6950: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a6951: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a6957: call 0x5b5040 */ r_esp -= 4; W32(r_esp, 0x5a695cu); f_005b5040();
    /* 005a695c: mov esi, eax */ r_esi = r_eax;
    /* 005a695e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a6961: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a6962: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a6965: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a6966: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a696c: call 0x5b5260 */ r_esp -= 4; W32(r_esp, 0x5a6971u); f_005b5260();
    /* 005a6971: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a6973: je 0x5a69b1 */ if (fZ) goto L_005a69b1;
L_005a6975:; BB(0x005a6975);
    /* 005a6975: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a6978: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a6979: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a697c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a697d: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a6983: call 0x5b4f50 */ r_esp -= 4; W32(r_esp, 0x5a6988u); f_005b4f50();
    /* 005a6988: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a698b: je 0x5a69a7 */ if (fZ) goto L_005a69a7;
L_005a698d:; BB(0x005a698d);
    /* 005a698d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a6990: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a6991: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a6994: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a6995: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a699b: call 0x5b4f50 */ r_esp -= 4; W32(r_esp, 0x5a69a0u); f_005b4f50();
    /* 005a69a0: jmp 0x5a6b60 */ goto L_005a6b60;
L_005a69a7:; BB(0x005a69a7);
    /* 005a69a7: mov eax, 0xd */ r_eax = 0xdu;
    /* 005a69ac: jmp 0x5a6b60 */ goto L_005a6b60;
L_005a69b1:; BB(0x005a69b1);
    /* 005a69b1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a69b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a69b5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a69b8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a69b9: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a69bf: call 0x5b4f50 */ r_esp -= 4; W32(r_esp, 0x5a69c4u); f_005b4f50();
    /* 005a69c4: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a69c7: jge 0x5a69d3 */ if ((fS==fO)) goto L_005a69d3;
L_005a69c9:; BB(0x005a69c9);
    /* 005a69c9: mov eax, 1 */ r_eax = 0x1u;
    /* 005a69ce: jmp 0x5a6b60 */ goto L_005a6b60;
L_005a69d3:; BB(0x005a69d3);
    /* 005a69d3: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a69d7: jne 0x5a6a4b */ if (!fZ) goto L_005a6a4b;
L_005a69d9:; BB(0x005a69d9);
    /* 005a69d9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a69db: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a69de: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a69df: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a69e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a69e3: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a69e9: call 0x5b5f60 */ r_esp -= 4; W32(r_esp, 0x5a69eeu); f_005b5f60();
    /* 005a69ee: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a69f1: jne 0x5a6a0d */ if (!fZ) goto L_005a6a0d;
L_005a69f3:; BB(0x005a69f3);
    /* 005a69f3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a69f5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a69f8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a69f9: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a69fc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a69fd: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a6a03: call 0x5b5f60 */ r_esp -= 4; W32(r_esp, 0x5a6a08u); f_005b5f60();
    /* 005a6a08: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a6a0b: je 0x5a6a41 */ if (fZ) goto L_005a6a41;
L_005a6a0d:; BB(0x005a6a0d);
    /* 005a6a0d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a6a0f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a6a12: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a6a13: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a6a16: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a6a17: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a6a1d: call 0x5b5f60 */ r_esp -= 4; W32(r_esp, 0x5a6a22u); f_005b5f60();
    /* 005a6a22: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a6a25: jne 0x5a6a4b */ if (!fZ) goto L_005a6a4b;
L_005a6a27:; BB(0x005a6a27);
    /* 005a6a27: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a6a29: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a6a2c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a6a2d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a6a30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a6a31: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a6a37: call 0x5b5f60 */ r_esp -= 4; W32(r_esp, 0x5a6a3cu); f_005b5f60();
    /* 005a6a3c: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a6a3f: jne 0x5a6a4b */ if (!fZ) goto L_005a6a4b;
L_005a6a41:; BB(0x005a6a41);
    /* 005a6a41: mov eax, 2 */ r_eax = 0x2u;
    /* 005a6a46: jmp 0x5a6b60 */ goto L_005a6b60;
L_005a6a4b:; BB(0x005a6a4b);
    /* 005a6a4b: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a6a4f: jne 0x5a6ac3 */ if (!fZ) goto L_005a6ac3;
L_005a6a51:; BB(0x005a6a51);
    /* 005a6a51: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a6a53: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a6a56: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a6a57: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a6a5a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a6a5b: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a6a61: call 0x5b5f60 */ r_esp -= 4; W32(r_esp, 0x5a6a66u); f_005b5f60();
    /* 005a6a66: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a6a69: jne 0x5a6a85 */ if (!fZ) goto L_005a6a85;
L_005a6a6b:; BB(0x005a6a6b);
    /* 005a6a6b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a6a6d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a6a70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a6a71: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a6a74: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a6a75: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a6a7b: call 0x5b5f60 */ r_esp -= 4; W32(r_esp, 0x5a6a80u); f_005b5f60();
    /* 005a6a80: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a6a83: je 0x5a6ab9 */ if (fZ) goto L_005a6ab9;
L_005a6a85:; BB(0x005a6a85);
    /* 005a6a85: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a6a87: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a6a8a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a6a8b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a6a8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a6a8f: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a6a95: call 0x5b5f60 */ r_esp -= 4; W32(r_esp, 0x5a6a9au); f_005b5f60();
    /* 005a6a9a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a6a9d: jne 0x5a6ac3 */ if (!fZ) goto L_005a6ac3;
L_005a6a9f:; BB(0x005a6a9f);
    /* 005a6a9f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a6aa1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a6aa4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a6aa5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a6aa8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a6aa9: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a6aaf: call 0x5b5f60 */ r_esp -= 4; W32(r_esp, 0x5a6ab4u); f_005b5f60();
    /* 005a6ab4: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a6ab7: jne 0x5a6ac3 */ if (!fZ) goto L_005a6ac3;
L_005a6ab9:; BB(0x005a6ab9);
    /* 005a6ab9: mov eax, 3 */ r_eax = 0x3u;
    /* 005a6abe: jmp 0x5a6b60 */ goto L_005a6b60;
L_005a6ac3:; BB(0x005a6ac3);
    /* 005a6ac3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a6ac6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a6ac7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a6aca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a6acb: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a6ad1: call 0x5b4f50 */ r_esp -= 4; W32(r_esp, 0x5a6ad6u); f_005b4f50();
    /* 005a6ad6: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a6ad9: jge 0x5a6af3 */ if ((fS==fO)) goto L_005a6af3;
L_005a6adb:; BB(0x005a6adb);
    /* 005a6adb: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a6ade: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a6adf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a6ae2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a6ae3: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a6ae9: call 0x5b4f50 */ r_esp -= 4; W32(r_esp, 0x5a6aeeu); f_005b4f50();
    /* 005a6aee: sub eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005a6af1: jmp 0x5a6b60 */ goto L_005a6b60;
L_005a6af3:; BB(0x005a6af3);
    /* 005a6af3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a6af6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a6af7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a6afa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a6afb: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a6b01: call 0x5b4f50 */ r_esp -= 4; W32(r_esp, 0x5a6b06u); f_005b4f50();
    /* 005a6b06: cmp eax, 0x16 */ {  u32 a = r_eax; u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a6b09: jge 0x5a6b0f */ if ((fS==fO)) goto L_005a6b0f;
L_005a6b0b:; BB(0x005a6b0b);
    /* 005a6b0b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a6b0d: jmp 0x5a6b60 */ goto L_005a6b60;
L_005a6b0f:; BB(0x005a6b0f);
    /* 005a6b0f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a6b12: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a6b13: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a6b16: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a6b17: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a6b1d: call 0x5b5260 */ r_esp -= 4; W32(r_esp, 0x5a6b22u); f_005b5260();
    /* 005a6b22: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a6b25: jge 0x5a6b2e */ if ((fS==fO)) goto L_005a6b2e;
L_005a6b27:; BB(0x005a6b27);
    /* 005a6b27: mov eax, 1 */ r_eax = 0x1u;
    /* 005a6b2c: jmp 0x5a6b60 */ goto L_005a6b60;
L_005a6b2e:; BB(0x005a6b2e);
    /* 005a6b2e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a6b31: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a6b32: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a6b35: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a6b36: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a6b3c: call 0x5b5260 */ r_esp -= 4; W32(r_esp, 0x5a6b41u); f_005b5260();
    /* 005a6b41: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a6b44: jge 0x5a6b5e */ if ((fS==fO)) goto L_005a6b5e;
L_005a6b46:; BB(0x005a6b46);
    /* 005a6b46: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a6b49: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a6b4a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a6b4d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a6b4e: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a6b54: call 0x5b5260 */ r_esp -= 4; W32(r_esp, 0x5a6b59u); f_005b5260();
    /* 005a6b59: sub eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005a6b5c: jmp 0x5a6b60 */ goto L_005a6b60;
L_005a6b5e:; BB(0x005a6b5e);
    /* 005a6b5e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005a6b60:; BB(0x005a6b60);
    /* 005a6b60: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005a6b61: mov esp, ebp */ r_esp = r_ebp;
    /* 005a6b63: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a6b64: ret 4 */ FN_RET(0x005a67d0); r_esp += 8; return;
}

void f_005a6b70(void) /* sub_5A6B70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a6b70);
    /* 005a6b70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a6b71: mov ebp, esp */ r_ebp = r_esp;
    /* 005a6b73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a6b74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005a6b77: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005a6b79: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5a6b7eu); f_0062fbf0();
    /* 005a6b7e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a6b81: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a6b84: jge 0x5a6b9f */ if ((fS==fO)) goto L_005a6b9f;
L_005a6b86:; BB(0x005a6b86);
    /* 005a6b86: mov eax, dword ptr [0x793600] */ r_eax = R32((u32)(0x793600u));
    /* 005a6b8b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005a6b8d: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005a6b93: mov eax, dword ptr [edx + 0x2b0] */ r_eax = R32((u32)(r_edx+0x2b0u));
    /* 005a6b99: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a6b9bu); call_ind(t); }
    /* 005a6b9b: jmp 0x5a6ba1 */ goto L_005a6ba1;
L_005a6b9f:; BB(0x005a6b9f);
    /* 005a6b9f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005a6ba1:; BB(0x005a6ba1);
    /* 005a6ba1: mov esp, ebp */ r_esp = r_ebp;
    /* 005a6ba3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a6ba4: ret 4 */ FN_RET(0x005a6b70); r_esp += 8; return;
}

void f_005a6bb0(void) /* sub_5A6BB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a6bb0);
    /* 005a6bb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a6bb1: mov ebp, esp */ r_ebp = r_esp;
    /* 005a6bb3: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a6bb6: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005a6bb9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a6bbc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a6bbd: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5a6bc2u); f_005dcb00();
    /* 005a6bc2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a6bc5: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005a6bc8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a6bcb: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005a6bce: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005a6bd1: cmp dword ptr [ebp - 8], 0x16 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a6bd5: je 0x5a6c31 */ if (fZ) goto L_005a6c31;
L_005a6bd7:; BB(0x005a6bd7);
    /* 005a6bd7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a6bda: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a6bdb: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5a6be0u); f_005dcb00();
    /* 005a6be0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a6be3: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005a6be6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a6be9: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005a6bec: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005a6bef: cmp dword ptr [ebp - 0x10], 0x13 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a6bf3: je 0x5a6c31 */ if (fZ) goto L_005a6c31;
L_005a6bf5:; BB(0x005a6bf5);
    /* 005a6bf5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a6bf8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a6bf9: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5a6bfeu); f_005dcb00();
    /* 005a6bfe: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a6c01: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005a6c04: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a6c07: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005a6c0a: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005a6c0d: cmp dword ptr [ebp - 0x18], 0x1c */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a6c11: je 0x5a6c31 */ if (fZ) goto L_005a6c31;
L_005a6c13:; BB(0x005a6c13);
    /* 005a6c13: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a6c16: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a6c17: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5a6c1cu); f_005dcb00();
    /* 005a6c1c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a6c1f: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005a6c22: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a6c25: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005a6c28: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 005a6c2b: cmp dword ptr [ebp - 0x20], 0x1a */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x1au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a6c2f: jne 0x5a6c44 */ if (!fZ) goto L_005a6c44;
L_005a6c31:; BB(0x005a6c31);
    /* 005a6c31: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005a6c33: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5a6c38u); f_0062fbf0();
    /* 005a6c38: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a6c3b: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 005a6c3d: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 005a6c3f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a6c42: jmp 0x5a6c46 */ goto L_005a6c46;
L_005a6c44:; BB(0x005a6c44);
    /* 005a6c44: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_005a6c46:; BB(0x005a6c46);
    /* 005a6c46: mov esp, ebp */ r_esp = r_ebp;
    /* 005a6c48: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a6c49: ret 4 */ FN_RET(0x005a6bb0); r_esp += 8; return;
}

