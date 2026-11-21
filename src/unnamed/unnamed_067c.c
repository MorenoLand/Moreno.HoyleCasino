#include "protos.h"

void f_0067c880(void) /* sub_67C880 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0067c880);
    /* 0067c880: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0067c881: mov ebp, esp */ r_ebp = r_esp;
    /* 0067c883: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0067c885: push 0x6ada8e */ { u32 v = 0x6ada8eu; r_esp -= 4; W32(r_esp, v); }
    /* 0067c88a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0067c890: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067c891: sub esp, 0x74 */ {  u32 a = r_esp; u32 b = 0x74u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0067c894: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0067c899: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0067c89b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067c89c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0067c89f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0067c8a5: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 0067c8a8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067c8aa: push 0x1f59 */ { u32 v = 0x1f59u; r_esp -= 4; W32(r_esp, v); }
    /* 0067c8af: push 0x20564157 */ { u32 v = 0x20564157u; r_esp -= 4; W32(r_esp, v); }
    /* 0067c8b4: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0067c8b9: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0067c8bc: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x67c8c1u); f_006044b0();
    /* 0067c8c1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067c8c3: push 0x1f5a */ { u32 v = 0x1f5au; r_esp -= 4; W32(r_esp, v); }
    /* 0067c8c8: push 0x20564157 */ { u32 v = 0x20564157u; r_esp -= 4; W32(r_esp, v); }
    /* 0067c8cd: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 0067c8d3: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 0067c8d6: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x67c8dbu); f_006044b0();
    /* 0067c8db: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067c8dd: push 0x1f5b */ { u32 v = 0x1f5bu; r_esp -= 4; W32(r_esp, v); }
    /* 0067c8e2: push 0x20564157 */ { u32 v = 0x20564157u; r_esp -= 4; W32(r_esp, v); }
    /* 0067c8e7: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 0067c8ed: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 0067c8f0: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x67c8f5u); f_006044b0();
    /* 0067c8f5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067c8f7: push 0x1f5c */ { u32 v = 0x1f5cu; r_esp -= 4; W32(r_esp, v); }
    /* 0067c8fc: push 0x20564157 */ { u32 v = 0x20564157u; r_esp -= 4; W32(r_esp, v); }
    /* 0067c901: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0067c906: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0067c909: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x67c90eu); f_006044b0();
    /* 0067c90e: mov dword ptr [0x16306f0], 0 */ W32((u32)(0x16306f0u), 0x0u);
    /* 0067c918: jmp 0x67c929 */ goto L_0067c929;
L_0067c91a:; BB(0x0067c91a);
    /* 0067c91a: mov ecx, dword ptr [0x16306f0] */ r_ecx = R32((u32)(0x16306f0u));
    /* 0067c920: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067c923: mov dword ptr [0x16306f0], ecx */ W32((u32)(0x16306f0u), r_ecx);
L_0067c929:; BB(0x0067c929);
    /* 0067c929: cmp dword ptr [0x16306f0], 5 */ {  u32 a = R32((u32)(0x16306f0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067c930: jge 0x67c955 */ if ((fS==fO)) goto L_0067c955;
L_0067c932:; BB(0x0067c932);
    /* 0067c932: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067c934: mov edx, dword ptr [0x16306f0] */ r_edx = R32((u32)(0x16306f0u));
    /* 0067c93a: add edx, 0x249f31 */ {  u32 a = r_edx; u32 b = 0x249f31u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0067c940: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067c941: push 0x20584554 */ { u32 v = 0x20584554u; r_esp -= 4; W32(r_esp, v); }
    /* 0067c946: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0067c94b: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0067c94e: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x67c953u); f_006044b0();
    /* 0067c953: jmp 0x67c91a */ goto L_0067c91a;
L_0067c955:; BB(0x0067c955);
    /* 0067c955: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0067c958: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 0067c95b: cmp dword ptr [ebp - 0x5c], 6 */ {  u32 a = R32((u32)(r_ebp+0xffffffa4u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0067c95f: ja 0x67d058 */ if ((!fC&&!fZ)) goto L_0067d058;
L_0067c965:; BB(0x0067c965);
    /* 0067c965: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0067c968: jmp dword ptr [edx*4 + 0x67d06c] */ { u32 t = R32((u32)(r_edx*4+0x67d06cu)); switch (t) { case 0x67c96fu: goto L_0067c96f; case 0x67cc16u: goto L_0067cc16; case 0x67cd2eu: goto L_0067cd2e; case 0x67ce46u: goto L_0067ce46; case 0x67cf5cu: goto L_0067cf5c; case 0x67cf7eu: goto L_0067cf7e; case 0x67d03eu: goto L_0067d03e; default: UNSUP(0x0067c968, "jump table entry is not a known target"); } }
L_0067c96f:; BB(0x0067c96f);
    /* 0067c96f: mov dword ptr [0x16306f0], 0 */ W32((u32)(0x16306f0u), 0x0u);
    /* 0067c979: jmp 0x67c988 */ goto L_0067c988;
L_0067c97b:; BB(0x0067c97b);
    /* 0067c97b: mov eax, dword ptr [0x16306f0] */ r_eax = R32((u32)(0x16306f0u));
    /* 0067c980: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0067c983: mov dword ptr [0x16306f0], eax */ W32((u32)(0x16306f0u), r_eax);
L_0067c988:; BB(0x0067c988);
    /* 0067c988: cmp dword ptr [0x16306f0], 5 */ {  u32 a = R32((u32)(0x16306f0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067c98f: jge 0x67ca4d */ if ((fS==fO)) goto L_0067ca4d;
L_0067c995:; BB(0x0067c995);
    /* 0067c995: push 0x190 */ { u32 v = 0x190u; r_esp -= 4; W32(r_esp, v); }
    /* 0067c99a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67c99fu); f_00686d82();
    /* 0067c99f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067c9a2: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0067c9a5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0067c9ac: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067c9b0: je 0x67c9bf */ if (fZ) goto L_0067c9bf;
L_0067c9b2:; BB(0x0067c9b2);
    /* 0067c9b2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0067c9b5: call 0x5f5f50 */ r_esp -= 4; W32(r_esp, 0x67c9bau); f_005f5f50();
    /* 0067c9ba: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 0067c9bd: jmp 0x67c9c6 */ goto L_0067c9c6;
L_0067c9bf:; BB(0x0067c9bf);
    /* 0067c9bf: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
L_0067c9c6:; BB(0x0067c9c6);
    /* 0067c9c6: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0067c9c9: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0067c9cc: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067c9d3: mov edx, dword ptr [0x16306f0] */ r_edx = R32((u32)(0x16306f0u));
    /* 0067c9d9: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c9dc: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067c9df: mov dword ptr [eax + edx*4 + 0x248], ecx */ W32((u32)(r_eax+r_edx*4+0x248u), r_ecx);
    /* 0067c9e6: mov edx, dword ptr [0x16306f0] */ r_edx = R32((u32)(0x16306f0u));
    /* 0067c9ec: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c9ef: mov ecx, dword ptr [eax + edx*4 + 0x248] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x248u));
    /* 0067c9f6: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c9f9: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0067c9fc: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0067c9ff: mov ecx, dword ptr [0x16306f0] */ r_ecx = R32((u32)(0x16306f0u));
    /* 0067ca05: add ecx, 0x249f31 */ {  u32 a = r_ecx; u32 b = 0x249f31u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067ca0b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067ca0c: mov edx, dword ptr [0x16306f0] */ r_edx = R32((u32)(0x16306f0u));
    /* 0067ca12: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067ca15: mov ecx, dword ptr [eax + edx*4 + 0x248] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x248u));
    /* 0067ca1c: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x67ca21u); f_005eaf00();
    /* 0067ca21: mov ecx, dword ptr [0x16306f0] */ r_ecx = R32((u32)(0x16306f0u));
    /* 0067ca27: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067ca2a: mov eax, dword ptr [edx + ecx*4 + 0x248] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x248u));
    /* 0067ca31: mov ecx, dword ptr [0x16306f0] */ r_ecx = R32((u32)(0x16306f0u));
    /* 0067ca37: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067ca3a: mov ecx, dword ptr [edx + ecx*4 + 0x248] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x248u));
    /* 0067ca41: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0067ca43: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0067ca46: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x67ca48u); call_ind(t); }
    /* 0067ca48: jmp 0x67c97b */ goto L_0067c97b;
L_0067ca4d:; BB(0x0067ca4d);
    /* 0067ca4d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ca4f: push 0xea60 */ { u32 v = 0xea60u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ca54: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ca56: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ca58: push 0x249f31 */ { u32 v = 0x249f31u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ca5d: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067ca60: mov ecx, dword ptr [eax + 0x248] */ r_ecx = R32((u32)(r_eax+0x248u));
    /* 0067ca66: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x67ca6bu); f_005eae80();
    /* 0067ca6b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ca6d: push 0xd6d8 */ { u32 v = 0xd6d8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ca72: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ca74: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ca76: push 0x249f32 */ { u32 v = 0x249f32u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ca7b: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067ca7e: mov ecx, dword ptr [ecx + 0x24c] */ r_ecx = R32((u32)(r_ecx+0x24cu));
    /* 0067ca84: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x67ca89u); f_005eae80();
    /* 0067ca89: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ca8b: push 0xc350 */ { u32 v = 0xc350u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ca90: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ca92: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0067ca94: push 0x249f33 */ { u32 v = 0x249f33u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ca99: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067ca9c: mov ecx, dword ptr [edx + 0x250] */ r_ecx = R32((u32)(r_edx+0x250u));
    /* 0067caa2: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x67caa7u); f_005eae80();
    /* 0067caa7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067caa9: push 0xc350 */ { u32 v = 0xc350u; r_esp -= 4; W32(r_esp, v); }
    /* 0067caae: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067cab0: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0067cab2: push 0x249f34 */ { u32 v = 0x249f34u; r_esp -= 4; W32(r_esp, v); }
    /* 0067cab7: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067caba: mov ecx, dword ptr [eax + 0x254] */ r_ecx = R32((u32)(r_eax+0x254u));
    /* 0067cac0: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x67cac5u); f_005eae80();
    /* 0067cac5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067cac7: push 0xc350 */ { u32 v = 0xc350u; r_esp -= 4; W32(r_esp, v); }
    /* 0067cacc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067cace: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067cad0: push 0x249f35 */ { u32 v = 0x249f35u; r_esp -= 4; W32(r_esp, v); }
    /* 0067cad5: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067cad8: mov ecx, dword ptr [ecx + 0x258] */ r_ecx = R32((u32)(r_ecx+0x258u));
    /* 0067cade: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x67cae3u); f_005eae80();
    /* 0067cae3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067cae5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067cae6: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0067caec: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0067caef: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067caf0: fld1  */ FPUSH(1.0);
    /* 0067caf2: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0067caf5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067caf7: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0067caf9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067cafb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067cafd: push 0x1f59 */ { u32 v = 0x1f59u; r_esp -= 4; W32(r_esp, v); }
    /* 0067cb02: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0067cb08: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0067cb0a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0067cb10: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 0067cb16: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x67cb18u); call_ind(t); }
    /* 0067cb18: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067cb1b: mov ecx, dword ptr [eax + 0x248] */ r_ecx = R32((u32)(r_eax+0x248u));
    /* 0067cb21: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067cb24: mov eax, dword ptr [edx + 0x248] */ r_eax = R32((u32)(r_edx+0x248u));
    /* 0067cb2a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067cb2c: mov ecx, eax */ r_ecx = r_eax;
    /* 0067cb2e: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0067cb31: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67cb33u); call_ind(t); }
    /* 0067cb33: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067cb36: mov edx, dword ptr [ecx + 0x24c] */ r_edx = R32((u32)(r_ecx+0x24cu));
    /* 0067cb3c: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067cb3f: mov ecx, dword ptr [eax + 0x24c] */ r_ecx = R32((u32)(r_eax+0x24cu));
    /* 0067cb45: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067cb47: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0067cb4a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67cb4cu); call_ind(t); }
    /* 0067cb4c: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0067cb4e: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67cb53u); f_00686d82();
    /* 0067cb53: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067cb56: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0067cb59: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0067cb60: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067cb64: je 0x67cb7f */ if (fZ) goto L_0067cb7f;
L_0067cb66:; BB(0x0067cb66);
    /* 0067cb66: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067cb69: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067cb6f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067cb70: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0067cb72: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0067cb75: call 0x600f30 */ r_esp -= 4; W32(r_esp, 0x67cb7au); f_00600f30();
    /* 0067cb7a: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 0067cb7d: jmp 0x67cb86 */ goto L_0067cb86;
L_0067cb7f:; BB(0x0067cb7f);
    /* 0067cb7f: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
L_0067cb86:; BB(0x0067cb86);
    /* 0067cb86: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 0067cb89: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0067cb8c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067cb93: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0067cb96: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067cb97: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067cb9a: mov ecx, dword ptr [edx + 0x248] */ r_ecx = R32((u32)(r_edx+0x248u));
    /* 0067cba0: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x67cba5u); f_005f5d50();
    /* 0067cba5: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0067cba7: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67cbacu); f_00686d82();
    /* 0067cbac: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067cbaf: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0067cbb2: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0067cbb9: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067cbbd: je 0x67cbce */ if (fZ) goto L_0067cbce;
L_0067cbbf:; BB(0x0067cbbf);
    /* 0067cbbf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067cbc1: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067cbc4: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x67cbc9u); f_006010a0();
    /* 0067cbc9: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 0067cbcc: jmp 0x67cbd5 */ goto L_0067cbd5;
L_0067cbce:; BB(0x0067cbce);
    /* 0067cbce: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
L_0067cbd5:; BB(0x0067cbd5);
    /* 0067cbd5: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0067cbd8: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0067cbdb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067cbe2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067cbe5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067cbe6: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067cbe9: mov ecx, dword ptr [edx + 0x24c] */ r_ecx = R32((u32)(r_edx+0x24cu));
    /* 0067cbef: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x67cbf4u); f_005f5d50();
    /* 0067cbf4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067cbf6: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067cbf9: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067cbff: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067cc02: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 0067cc08: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067cc0a: mov ecx, eax */ r_ecx = r_eax;
    /* 0067cc0c: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0067cc0f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67cc11u); call_ind(t); }
    /* 0067cc11: jmp 0x67d058 */ goto L_0067d058;
L_0067cc16:; BB(0x0067cc16);
    /* 0067cc16: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067cc18: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067cc19: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0067cc1f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0067cc22: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067cc23: fld1  */ FPUSH(1.0);
    /* 0067cc25: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0067cc28: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067cc2a: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0067cc2c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067cc2e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067cc30: push 0x1f5a */ { u32 v = 0x1f5au; r_esp -= 4; W32(r_esp, v); }
    /* 0067cc35: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0067cc3b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067cc3d: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0067cc43: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 0067cc49: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67cc4bu); call_ind(t); }
    /* 0067cc4b: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0067cc4d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67cc52u); f_00686d82();
    /* 0067cc52: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067cc55: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0067cc58: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0067cc5f: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067cc63: je 0x67cc7e */ if (fZ) goto L_0067cc7e;
L_0067cc65:; BB(0x0067cc65);
    /* 0067cc65: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067cc68: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067cc6e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067cc6f: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0067cc71: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0067cc74: call 0x600f30 */ r_esp -= 4; W32(r_esp, 0x67cc79u); f_00600f30();
    /* 0067cc79: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 0067cc7c: jmp 0x67cc85 */ goto L_0067cc85;
L_0067cc7e:; BB(0x0067cc7e);
    /* 0067cc7e: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
L_0067cc85:; BB(0x0067cc85);
    /* 0067cc85: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 0067cc88: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0067cc8b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067cc92: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0067cc95: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067cc96: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067cc99: mov ecx, dword ptr [edx + 0x248] */ r_ecx = R32((u32)(r_edx+0x248u));
    /* 0067cc9f: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x67cca4u); f_005f5d50();
    /* 0067cca4: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067cca7: mov ecx, dword ptr [eax + 0x250] */ r_ecx = R32((u32)(r_eax+0x250u));
    /* 0067ccad: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067ccb0: mov eax, dword ptr [edx + 0x250] */ r_eax = R32((u32)(r_edx+0x250u));
    /* 0067ccb6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067ccb8: mov ecx, eax */ r_ecx = r_eax;
    /* 0067ccba: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0067ccbd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67ccbfu); call_ind(t); }
    /* 0067ccbf: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ccc1: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67ccc6u); f_00686d82();
    /* 0067ccc6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067ccc9: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0067cccc: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 0067ccd3: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067ccd7: je 0x67cce8 */ if (fZ) goto L_0067cce8;
L_0067ccd9:; BB(0x0067ccd9);
    /* 0067ccd9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ccdb: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0067ccde: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x67cce3u); f_006010a0();
    /* 0067cce3: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 0067cce6: jmp 0x67ccef */ goto L_0067ccef;
L_0067cce8:; BB(0x0067cce8);
    /* 0067cce8: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
L_0067ccef:; BB(0x0067ccef);
    /* 0067ccef: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 0067ccf2: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 0067ccf5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067ccfc: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0067ccff: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067cd00: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067cd03: mov ecx, dword ptr [eax + 0x250] */ r_ecx = R32((u32)(r_eax+0x250u));
    /* 0067cd09: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x67cd0eu); f_005f5d50();
    /* 0067cd0e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0067cd10: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067cd13: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067cd19: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067cd1c: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067cd22: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067cd24: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0067cd27: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67cd29u); call_ind(t); }
    /* 0067cd29: jmp 0x67d058 */ goto L_0067d058;
L_0067cd2e:; BB(0x0067cd2e);
    /* 0067cd2e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067cd30: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067cd31: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0067cd37: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0067cd3a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067cd3b: fld1  */ FPUSH(1.0);
    /* 0067cd3d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0067cd40: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067cd42: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0067cd44: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067cd46: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067cd48: push 0x1f5b */ { u32 v = 0x1f5bu; r_esp -= 4; W32(r_esp, v); }
    /* 0067cd4d: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0067cd53: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067cd55: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0067cd5b: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 0067cd61: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67cd63u); call_ind(t); }
    /* 0067cd63: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0067cd65: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67cd6au); f_00686d82();
    /* 0067cd6a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067cd6d: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0067cd70: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 0067cd77: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067cd7b: je 0x67cd96 */ if (fZ) goto L_0067cd96;
L_0067cd7d:; BB(0x0067cd7d);
    /* 0067cd7d: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067cd80: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067cd86: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067cd87: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0067cd89: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0067cd8c: call 0x600f30 */ r_esp -= 4; W32(r_esp, 0x67cd91u); f_00600f30();
    /* 0067cd91: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 0067cd94: jmp 0x67cd9d */ goto L_0067cd9d;
L_0067cd96:; BB(0x0067cd96);
    /* 0067cd96: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
L_0067cd9d:; BB(0x0067cd9d);
    /* 0067cd9d: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067cda0: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0067cda3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067cdaa: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0067cdad: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067cdae: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067cdb1: mov ecx, dword ptr [edx + 0x248] */ r_ecx = R32((u32)(r_edx+0x248u));
    /* 0067cdb7: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x67cdbcu); f_005f5d50();
    /* 0067cdbc: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067cdbf: mov ecx, dword ptr [eax + 0x254] */ r_ecx = R32((u32)(r_eax+0x254u));
    /* 0067cdc5: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067cdc8: mov eax, dword ptr [edx + 0x254] */ r_eax = R32((u32)(r_edx+0x254u));
    /* 0067cdce: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067cdd0: mov ecx, eax */ r_ecx = r_eax;
    /* 0067cdd2: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0067cdd5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67cdd7u); call_ind(t); }
    /* 0067cdd7: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0067cdd9: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67cddeu); f_00686d82();
    /* 0067cdde: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067cde1: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0067cde4: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 0067cdeb: cmp dword ptr [ebp - 0x44], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067cdef: je 0x67ce00 */ if (fZ) goto L_0067ce00;
L_0067cdf1:; BB(0x0067cdf1);
    /* 0067cdf1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067cdf3: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0067cdf6: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x67cdfbu); f_006010a0();
    /* 0067cdfb: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 0067cdfe: jmp 0x67ce07 */ goto L_0067ce07;
L_0067ce00:; BB(0x0067ce00);
    /* 0067ce00: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
L_0067ce07:; BB(0x0067ce07);
    /* 0067ce07: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 0067ce0a: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 0067ce0d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067ce14: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067ce17: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067ce18: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067ce1b: mov ecx, dword ptr [eax + 0x254] */ r_ecx = R32((u32)(r_eax+0x254u));
    /* 0067ce21: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x67ce26u); f_005f5d50();
    /* 0067ce26: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ce28: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067ce2b: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067ce31: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067ce34: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067ce3a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067ce3c: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0067ce3f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67ce41u); call_ind(t); }
    /* 0067ce41: jmp 0x67d058 */ goto L_0067d058;
L_0067ce46:; BB(0x0067ce46);
    /* 0067ce46: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ce48: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067ce49: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0067ce4f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0067ce52: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067ce53: fld1  */ FPUSH(1.0);
    /* 0067ce55: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0067ce58: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ce5a: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ce5c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ce5e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ce60: push 0x1f5c */ { u32 v = 0x1f5cu; r_esp -= 4; W32(r_esp, v); }
    /* 0067ce65: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0067ce6b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067ce6d: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0067ce73: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 0067ce79: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67ce7bu); call_ind(t); }
    /* 0067ce7b: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ce7d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67ce82u); f_00686d82();
    /* 0067ce82: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067ce85: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0067ce88: mov dword ptr [ebp - 4], 7 */ W32((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 0067ce8f: cmp dword ptr [ebp - 0x4c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067ce93: je 0x67cea4 */ if (fZ) goto L_0067cea4;
L_0067ce95:; BB(0x0067ce95);
    /* 0067ce95: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ce97: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067ce9a: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x67ce9fu); f_006010a0();
    /* 0067ce9f: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 0067cea2: jmp 0x67ceab */ goto L_0067ceab;
L_0067cea4:; BB(0x0067cea4);
    /* 0067cea4: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
L_0067ceab:; BB(0x0067ceab);
    /* 0067ceab: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 0067ceae: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 0067ceb1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067ceb8: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0067cebb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067cebc: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067cebf: mov ecx, dword ptr [eax + 0x248] */ r_ecx = R32((u32)(r_eax+0x248u));
    /* 0067cec5: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x67cecau); f_005f5d50();
    /* 0067ceca: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067cecd: mov edx, dword ptr [ecx + 0x258] */ r_edx = R32((u32)(r_ecx+0x258u));
    /* 0067ced3: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067ced6: mov ecx, dword ptr [eax + 0x258] */ r_ecx = R32((u32)(r_eax+0x258u));
    /* 0067cedc: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067cede: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0067cee1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67cee3u); call_ind(t); }
    /* 0067cee3: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0067cee5: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67ceeau); f_00686d82();
    /* 0067ceea: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067ceed: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0067cef0: mov dword ptr [ebp - 4], 8 */ W32((u32)(r_ebp+0xfffffffcu), 0x8u);
    /* 0067cef7: cmp dword ptr [ebp - 0x54], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067cefb: je 0x67cf14 */ if (fZ) goto L_0067cf14;
L_0067cefd:; BB(0x0067cefd);
    /* 0067cefd: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067cf00: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067cf06: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067cf07: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0067cf0a: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x67cf0fu); f_006010a0();
    /* 0067cf0f: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 0067cf12: jmp 0x67cf1b */ goto L_0067cf1b;
L_0067cf14:; BB(0x0067cf14);
    /* 0067cf14: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
L_0067cf1b:; BB(0x0067cf1b);
    /* 0067cf1b: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 0067cf1e: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0067cf21: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067cf28: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0067cf2b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067cf2c: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067cf2f: mov ecx, dword ptr [edx + 0x258] */ r_ecx = R32((u32)(r_edx+0x258u));
    /* 0067cf35: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x67cf3au); f_005f5d50();
    /* 0067cf3a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0067cf3c: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067cf3f: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067cf45: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067cf48: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 0067cf4e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067cf50: mov ecx, eax */ r_ecx = r_eax;
    /* 0067cf52: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0067cf55: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67cf57u); call_ind(t); }
    /* 0067cf57: jmp 0x67d058 */ goto L_0067d058;
L_0067cf5c:; BB(0x0067cf5c);
    /* 0067cf5c: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0067cf5e: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0067cf60: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067cf63: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067cf69: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067cf6c: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067cf72: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067cf74: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0067cf77: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67cf79u); call_ind(t); }
    /* 0067cf79: jmp 0x67d058 */ goto L_0067d058;
L_0067cf7e:; BB(0x0067cf7e);
    /* 0067cf7e: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067cf81: call 0x5eb610 */ r_esp -= 4; W32(r_esp, 0x67cf86u); f_005eb610();
    /* 0067cf86: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0067cf89: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067cf8c: je 0x67d006 */ if (fZ) goto L_0067d006;
L_0067cf8e:; BB(0x0067cf8e);
    /* 0067cf8e: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067cf91: call 0x5eb610 */ r_esp -= 4; W32(r_esp, 0x67cf96u); f_005eb610();
    /* 0067cf96: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0067cf99: sub edx, 0x19 */ {  u32 a = r_edx; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0067cf9c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067cf9d: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067cfa0: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x67cfa5u); f_005eb5d0();
    /* 0067cfa5: mov dword ptr [0x16306f0], 0 */ W32((u32)(0x16306f0u), 0x0u);
    /* 0067cfaf: jmp 0x67cfbe */ goto L_0067cfbe;
L_0067cfb1:; BB(0x0067cfb1);
    /* 0067cfb1: mov eax, dword ptr [0x16306f0] */ r_eax = R32((u32)(0x16306f0u));
    /* 0067cfb6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0067cfb9: mov dword ptr [0x16306f0], eax */ W32((u32)(0x16306f0u), r_eax);
L_0067cfbe:; BB(0x0067cfbe);
    /* 0067cfbe: cmp dword ptr [0x16306f0], 5 */ {  u32 a = R32((u32)(0x16306f0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067cfc5: jge 0x67cfe7 */ if ((fS==fO)) goto L_0067cfe7;
L_0067cfc7:; BB(0x0067cfc7);
    /* 0067cfc7: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067cfca: call 0x5eb610 */ r_esp -= 4; W32(r_esp, 0x67cfcfu); f_005eb610();
    /* 0067cfcf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067cfd0: mov ecx, dword ptr [0x16306f0] */ r_ecx = R32((u32)(0x16306f0u));
    /* 0067cfd6: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067cfd9: mov ecx, dword ptr [edx + ecx*4 + 0x248] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x248u));
    /* 0067cfe0: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x67cfe5u); f_005eb5d0();
    /* 0067cfe5: jmp 0x67cfb1 */ goto L_0067cfb1;
L_0067cfe7:; BB(0x0067cfe7);
    /* 0067cfe7: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0067cfe9: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067cfec: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067cff2: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067cff5: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 0067cffb: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067cffd: mov ecx, eax */ r_ecx = r_eax;
    /* 0067cfff: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0067d002: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67d004u); call_ind(t); }
    /* 0067d004: jmp 0x67d021 */ goto L_0067d021;
L_0067d006:; BB(0x0067d006);
    /* 0067d006: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d008: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067d00b: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067d011: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067d014: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067d01a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067d01c: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0067d01f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67d021u); call_ind(t); }
L_0067d021:; BB(0x0067d021);
    /* 0067d021: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d023: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067d026: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067d02c: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067d02f: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067d035: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067d037: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0067d03a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67d03cu); call_ind(t); }
    /* 0067d03c: jmp 0x67d058 */ goto L_0067d058;
L_0067d03e:; BB(0x0067d03e);
    /* 0067d03e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d040: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0067d046: call 0x5f45d0 */ r_esp -= 4; W32(r_esp, 0x67d04bu); f_005f45d0();
    /* 0067d04b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d04d: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0067d053: call 0x650550 */ r_esp -= 4; W32(r_esp, 0x67d058u); f_00650550();
L_0067d058:; BB(0x0067d058);
    /* 0067d058: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0067d05b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0067d062: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0067d063: mov esp, ebp */ r_esp = r_ebp;
    /* 0067d065: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067d066: ret 4 */ FN_RET(0x0067c880); r_esp += 8; return;
}

