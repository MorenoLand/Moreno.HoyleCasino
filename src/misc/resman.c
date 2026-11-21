#include "protos.h"

void f_00604810(void) /* resman::func_00604810 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00604810);
    /* 00604810: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00604811: mov ebp, esp */ r_ebp = r_esp;
    /* 00604813: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00604816: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060481a: je 0x604826 */ if (fZ) goto L_00604826;
L_0060481c:; BB(0x0060481c);
    /* 0060481c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060481f: movsx ecx, byte ptr [eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 00604822: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604824: jne 0x60482b */ if (!fZ) goto L_0060482b;
L_00604826:; BB(0x00604826);
    /* 00604826: jmp 0x6048bc */ goto L_006048bc;
L_0060482b:; BB(0x0060482b);
    /* 0060482b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00604832: jmp 0x60483d */ goto L_0060483d;
L_00604834:; BB(0x00604834);
    /* 00604834: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604837: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0060483a: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0060483d:; BB(0x0060483d);
    /* 0060483d: cmp dword ptr [ebp - 4], 0xc8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xc8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00604844: jge 0x604857 */ if ((fS==fO)) goto L_00604857;
L_00604846:; BB(0x00604846);
    /* 00604846: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604849: cmp dword ptr [eax*4 + 0x796720], 0 */ {  u32 a = R32((u32)(r_eax*4+0x796720u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604851: jne 0x604855 */ if (!fZ) goto L_00604855;
L_00604853:; BB(0x00604853);
    /* 00604853: jmp 0x604857 */ goto L_00604857;
L_00604855:; BB(0x00604855);
    /* 00604855: jmp 0x604834 */ goto L_00604834;
L_00604857:; BB(0x00604857);
    /* 00604857: cmp dword ptr [ebp - 4], 0xc8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xc8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060485e: jne 0x60487d */ if (!fZ) goto L_0060487d;
L_00604860:; BB(0x00604860);
    /* 00604860: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00604862: jne 0x60487b */ if (!fZ) goto L_0060487b;
L_00604864:; BB(0x00604864);
    /* 00604864: push 0x204 */ { u32 v = 0x204u; r_esp -= 4; W32(r_esp, v); }
    /* 00604869: push 0x6d7864 */ { u32 v = 0x6d7864u; r_esp -= 4; W32(r_esp, v); }
    /* 0060486e: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00604873: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x604878u); f_005e9f20();
    /* 00604878: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0060487b:; BB(0x0060487b);
    /* 0060487b: jmp 0x6048bc */ goto L_006048bc;
L_0060487d:; BB(0x0060487d);
    /* 0060487d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00604880: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00604881: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x604886u); f_00686ecc();
    /* 00604886: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00604889: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0060488c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060488d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x604892u); f_00686d82();
    /* 00604892: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00604895: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00604898: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060489b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060489e: mov dword ptr [ecx*4 + 0x796720], edx */ W32((u32)(r_ecx*4+0x796720u), r_edx);
    /* 006048a5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006048a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006048a9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006048ac: mov edx, dword ptr [ecx*4 + 0x796720] */ r_edx = R32((u32)(r_ecx*4+0x796720u));
    /* 006048b3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006048b4: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x6048b9u); f_00686d8e();
    /* 006048b9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006048bc:; BB(0x006048bc);
    /* 006048bc: mov esp, ebp */ r_esp = r_ebp;
    /* 006048be: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006048bf: ret  */ FN_RET(0x00604810); r_esp += 4; return;
}

void f_00604910(void) /* resman::func_00604910 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00604910);
    /* 00604910: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00604911: mov ebp, esp */ r_ebp = r_esp;
    /* 00604913: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00604916: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060491a: je 0x604926 */ if (fZ) goto L_00604926;
L_0060491c:; BB(0x0060491c);
    /* 0060491c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060491f: movsx ecx, byte ptr [eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 00604922: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604924: jne 0x60492b */ if (!fZ) goto L_0060492b;
L_00604926:; BB(0x00604926);
    /* 00604926: jmp 0x6049bc */ goto L_006049bc;
L_0060492b:; BB(0x0060492b);
    /* 0060492b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00604932: jmp 0x60493d */ goto L_0060493d;
L_00604934:; BB(0x00604934);
    /* 00604934: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604937: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0060493a: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0060493d:; BB(0x0060493d);
    /* 0060493d: cmp dword ptr [ebp - 4], 0xc8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xc8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00604944: jge 0x604957 */ if ((fS==fO)) goto L_00604957;
L_00604946:; BB(0x00604946);
    /* 00604946: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604949: cmp dword ptr [eax*4 + 0x796400], 0 */ {  u32 a = R32((u32)(r_eax*4+0x796400u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604951: jne 0x604955 */ if (!fZ) goto L_00604955;
L_00604953:; BB(0x00604953);
    /* 00604953: jmp 0x604957 */ goto L_00604957;
L_00604955:; BB(0x00604955);
    /* 00604955: jmp 0x604934 */ goto L_00604934;
L_00604957:; BB(0x00604957);
    /* 00604957: cmp dword ptr [ebp - 4], 0xc8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xc8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060495e: jne 0x60497d */ if (!fZ) goto L_0060497d;
L_00604960:; BB(0x00604960);
    /* 00604960: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00604962: jne 0x60497b */ if (!fZ) goto L_0060497b;
L_00604964:; BB(0x00604964);
    /* 00604964: push 0x220 */ { u32 v = 0x220u; r_esp -= 4; W32(r_esp, v); }
    /* 00604969: push 0x6d7864 */ { u32 v = 0x6d7864u; r_esp -= 4; W32(r_esp, v); }
    /* 0060496e: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00604973: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x604978u); f_005e9f20();
    /* 00604978: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0060497b:; BB(0x0060497b);
    /* 0060497b: jmp 0x6049bc */ goto L_006049bc;
L_0060497d:; BB(0x0060497d);
    /* 0060497d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00604980: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00604981: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x604986u); f_00686ecc();
    /* 00604986: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00604989: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0060498c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060498d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x604992u); f_00686d82();
    /* 00604992: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00604995: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00604998: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060499b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060499e: mov dword ptr [ecx*4 + 0x796400], edx */ W32((u32)(r_ecx*4+0x796400u), r_edx);
    /* 006049a5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006049a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006049a9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006049ac: mov edx, dword ptr [ecx*4 + 0x796400] */ r_edx = R32((u32)(r_ecx*4+0x796400u));
    /* 006049b3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006049b4: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x6049b9u); f_00686d8e();
    /* 006049b9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006049bc:; BB(0x006049bc);
    /* 006049bc: mov esp, ebp */ r_esp = r_ebp;
    /* 006049be: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006049bf: ret  */ FN_RET(0x00604910); r_esp += 4; return;
}

void f_00604a20(void) /* resman::func_00604a20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00604a20);
    /* 00604a20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00604a21: mov ebp, esp */ r_ebp = r_esp;
    /* 00604a23: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00604a26: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604a2a: je 0x604a36 */ if (fZ) goto L_00604a36;
L_00604a2c:; BB(0x00604a2c);
    /* 00604a2c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00604a2f: movsx ecx, byte ptr [eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 00604a32: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604a34: jne 0x604a3b */ if (!fZ) goto L_00604a3b;
L_00604a36:; BB(0x00604a36);
    /* 00604a36: jmp 0x604ae9 */ goto L_00604ae9;
L_00604a3b:; BB(0x00604a3b);
    /* 00604a3b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00604a42: jmp 0x604a4d */ goto L_00604a4d;
L_00604a44:; BB(0x00604a44);
    /* 00604a44: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604a47: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00604a4a: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00604a4d:; BB(0x00604a4d);
    /* 00604a4d: cmp dword ptr [ebp - 4], 0xc8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xc8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00604a54: jge 0x604a84 */ if ((fS==fO)) goto L_00604a84;
L_00604a56:; BB(0x00604a56);
    /* 00604a56: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604a59: cmp dword ptr [eax*4 + 0x7960e0], 0 */ {  u32 a = R32((u32)(r_eax*4+0x7960e0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604a61: jne 0x604a65 */ if (!fZ) goto L_00604a65;
L_00604a63:; BB(0x00604a63);
    /* 00604a63: jmp 0x604a84 */ goto L_00604a84;
L_00604a65:; BB(0x00604a65);
    /* 00604a65: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00604a68: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00604a69: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604a6c: mov eax, dword ptr [edx*4 + 0x7960e0] */ r_eax = R32((u32)(r_edx*4+0x7960e0u));
    /* 00604a73: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00604a74: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x604a79u); f_00686ec0();
    /* 00604a79: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00604a7c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604a7e: jne 0x604a82 */ if (!fZ) goto L_00604a82;
L_00604a80:; BB(0x00604a80);
    /* 00604a80: jmp 0x604ae9 */ goto L_00604ae9;
L_00604a82:; BB(0x00604a82);
    /* 00604a82: jmp 0x604a44 */ goto L_00604a44;
L_00604a84:; BB(0x00604a84);
    /* 00604a84: cmp dword ptr [ebp - 4], 0xc8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xc8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604a8b: jne 0x604aaa */ if (!fZ) goto L_00604aaa;
L_00604a8d:; BB(0x00604a8d);
    /* 00604a8d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00604a8f: jne 0x604aa8 */ if (!fZ) goto L_00604aa8;
L_00604a91:; BB(0x00604a91);
    /* 00604a91: push 0x243 */ { u32 v = 0x243u; r_esp -= 4; W32(r_esp, v); }
    /* 00604a96: push 0x6d7864 */ { u32 v = 0x6d7864u; r_esp -= 4; W32(r_esp, v); }
    /* 00604a9b: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00604aa0: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x604aa5u); f_005e9f20();
    /* 00604aa5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00604aa8:; BB(0x00604aa8);
    /* 00604aa8: jmp 0x604ae9 */ goto L_00604ae9;
L_00604aaa:; BB(0x00604aaa);
    /* 00604aaa: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00604aad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00604aae: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x604ab3u); f_00686ecc();
    /* 00604ab3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00604ab6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00604ab9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00604aba: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x604abfu); f_00686d82();
    /* 00604abf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00604ac2: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00604ac5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604ac8: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00604acb: mov dword ptr [ecx*4 + 0x7960e0], edx */ W32((u32)(r_ecx*4+0x7960e0u), r_edx);
    /* 00604ad2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00604ad5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00604ad6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604ad9: mov edx, dword ptr [ecx*4 + 0x7960e0] */ r_edx = R32((u32)(r_ecx*4+0x7960e0u));
    /* 00604ae0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00604ae1: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x604ae6u); f_00686d8e();
    /* 00604ae6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00604ae9:; BB(0x00604ae9);
    /* 00604ae9: mov esp, ebp */ r_esp = r_ebp;
    /* 00604aeb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00604aec: ret  */ FN_RET(0x00604a20); r_esp += 4; return;
}

