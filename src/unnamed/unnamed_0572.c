#include "protos.h"

void f_00572950(void) /* sub_572950 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00572950);
    /* 00572950: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00572951: mov ebp, esp */ r_ebp = r_esp;
    /* 00572953: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00572954: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00572957: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0057295d: call 0x637670 */ r_esp -= 4; W32(r_esp, 0x572962u); f_00637670();
    /* 00572962: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00572965: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00572967: jne 0x57296b */ if (!fZ) goto L_0057296b;
L_00572969:; BB(0x00572969);
    /* 00572969: jmp 0x572973 */ goto L_00572973;
L_0057296b:; BB(0x0057296b);
    /* 0057296b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057296e: call 0x572980 */ r_esp -= 4; W32(r_esp, 0x572973u); f_00572980();
L_00572973:; BB(0x00572973);
    /* 00572973: mov esp, ebp */ r_esp = r_ebp;
    /* 00572975: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00572976: ret  */ FN_RET(0x00572950); r_esp += 4; return;
}

void f_00572980(void) /* sub_572980 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00572980);
    /* 00572980: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00572981: mov ebp, esp */ r_ebp = r_esp;
    /* 00572983: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00572984: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00572987: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0057298d: call 0x5f3e50 */ r_esp -= 4; W32(r_esp, 0x572992u); f_005f3e50();
    /* 00572992: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00572995: cmp eax, dword ptr [ecx + 0x80] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x80u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057299b: jle 0x5729e0 */ if ((fZ||fS!=fO)) goto L_005729e0;
L_0057299d:; BB(0x0057299d);
    /* 0057299d: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005729a3: call 0x5f3e50 */ r_esp -= 4; W32(r_esp, 0x5729a8u); f_005f3e50();
    /* 005729a8: add eax, 0xa8c */ {  u32 a = r_eax; u32 b = 0xa8cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005729ad: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005729b0: mov dword ptr [edx + 0x80], eax */ W32((u32)(r_edx+0x80u), r_eax);
    /* 005729b6: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005729bc: call 0x5f4740 */ r_esp -= 4; W32(r_esp, 0x5729c1u); f_005f4740();
    /* 005729c1: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005729c4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005729c6: je 0x5729ca */ if (fZ) goto L_005729ca;
L_005729c8:; BB(0x005729c8);
    /* 005729c8: jmp 0x5729e0 */ goto L_005729e0;
L_005729ca:; BB(0x005729ca);
    /* 005729ca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005729cb: fld1  */ FPUSH(1.0);
    /* 005729cd: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005729d0: push 0x1925c */ { u32 v = 0x1925cu; r_esp -= 4; W32(r_esp, v); }
    /* 005729d5: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005729db: call 0x5f4620 */ r_esp -= 4; W32(r_esp, 0x5729e0u); f_005f4620();
L_005729e0:; BB(0x005729e0);
    /* 005729e0: mov esp, ebp */ r_esp = r_ebp;
    /* 005729e2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005729e3: ret  */ FN_RET(0x00572980); r_esp += 4; return;
}

