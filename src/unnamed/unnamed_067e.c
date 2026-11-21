#include "protos.h"

void f_0067e900(void) /* sub_67E900 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0067e900);
    /* 0067e900: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0067e901: mov ebp, esp */ r_ebp = r_esp;
    /* 0067e903: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0067e905: push 0x6adc2c */ { u32 v = 0x6adc2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0067e90a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0067e910: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067e911: sub esp, 0x9c */ {  u32 a = r_esp; u32 b = 0x9cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0067e917: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0067e91c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0067e91e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067e91f: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0067e922: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0067e928: mov dword ptr [ebp - 0x74], ecx */ W32((u32)(r_ebp+0xffffff8cu), r_ecx);
    /* 0067e92b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e92d: push 0x1f62 */ { u32 v = 0x1f62u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e932: push 0x20564157 */ { u32 v = 0x20564157u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e937: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0067e93c: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0067e93f: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x67e944u); f_006044b0();
    /* 0067e944: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e946: push 0x1f63 */ { u32 v = 0x1f63u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e94b: push 0x20564157 */ { u32 v = 0x20564157u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e950: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 0067e956: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 0067e959: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x67e95eu); f_006044b0();
    /* 0067e95e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e960: push 0x1f64 */ { u32 v = 0x1f64u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e965: push 0x20564157 */ { u32 v = 0x20564157u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e96a: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 0067e970: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 0067e973: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x67e978u); f_006044b0();
    /* 0067e978: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e97a: push 0x249f3c */ { u32 v = 0x249f3cu; r_esp -= 4; W32(r_esp, v); }
    /* 0067e97f: push 0x20584554 */ { u32 v = 0x20584554u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e984: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0067e989: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0067e98c: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x67e991u); f_006044b0();
    /* 0067e991: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e993: push 0x249f3d */ { u32 v = 0x249f3du; r_esp -= 4; W32(r_esp, v); }
    /* 0067e998: push 0x20584554 */ { u32 v = 0x20584554u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e99d: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 0067e9a3: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 0067e9a6: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x67e9abu); f_006044b0();
    /* 0067e9ab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e9ad: push 0x249f3e */ { u32 v = 0x249f3eu; r_esp -= 4; W32(r_esp, v); }
    /* 0067e9b2: push 0x20584554 */ { u32 v = 0x20584554u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e9b7: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 0067e9bd: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 0067e9c0: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x67e9c5u); f_006044b0();
    /* 0067e9c5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e9c7: push 0x249f3f */ { u32 v = 0x249f3fu; r_esp -= 4; W32(r_esp, v); }
    /* 0067e9cc: push 0x20584554 */ { u32 v = 0x20584554u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e9d1: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0067e9d6: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0067e9d9: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x67e9deu); f_006044b0();
    /* 0067e9de: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e9e0: push 0x249f40 */ { u32 v = 0x249f40u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e9e5: push 0x20584554 */ { u32 v = 0x20584554u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e9ea: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 0067e9f0: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 0067e9f3: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x67e9f8u); f_006044b0();
    /* 0067e9f8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e9fa: push 0x249f42 */ { u32 v = 0x249f42u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e9ff: push 0x20584554 */ { u32 v = 0x20584554u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ea04: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 0067ea0a: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 0067ea0d: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x67ea12u); f_006044b0();
    /* 0067ea12: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ea14: push 0x249f43 */ { u32 v = 0x249f43u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ea19: push 0x20584554 */ { u32 v = 0x20584554u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ea1e: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0067ea23: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0067ea26: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x67ea2bu); f_006044b0();
    /* 0067ea2b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ea2d: push 0x249f41 */ { u32 v = 0x249f41u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ea32: push 0x20584554 */ { u32 v = 0x20584554u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ea37: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 0067ea3d: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 0067ea40: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x67ea45u); f_006044b0();
    /* 0067ea45: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ea47: push 0x249f44 */ { u32 v = 0x249f44u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ea4c: push 0x20584554 */ { u32 v = 0x20584554u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ea51: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 0067ea57: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 0067ea5a: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x67ea5fu); f_006044b0();
    /* 0067ea5f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0067ea62: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 0067ea65: cmp dword ptr [ebp - 0x78], 0x10 */ {  u32 a = R32((u32)(r_ebp+0xffffff88u)); u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0067ea69: ja 0x67f8a3 */ if ((!fC&&!fZ)) goto L_0067f8a3;
L_0067ea6f:; BB(0x0067ea6f);
    /* 0067ea6f: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 0067ea72: jmp dword ptr [ecx*4 + 0x67f8b4] */ { u32 t = R32((u32)(r_ecx*4+0x67f8b4u)); switch (t) { case 0x67ea79u: goto L_0067ea79; case 0x67efc8u: goto L_0067efc8; case 0x67f0a6u: goto L_0067f0a6; case 0x67f1b1u: goto L_0067f1b1; case 0x67f2f3u: goto L_0067f2f3; case 0x67f395u: goto L_0067f395; case 0x67f45au: goto L_0067f45a; case 0x67f4c7u: goto L_0067f4c7; case 0x67f534u: goto L_0067f534; case 0x67f5a1u: goto L_0067f5a1; case 0x67f60eu: goto L_0067f60e; case 0x67f67bu: goto L_0067f67b; case 0x67f6e8u: goto L_0067f6e8; case 0x67f755u: goto L_0067f755; case 0x67f7c2u: goto L_0067f7c2; case 0x67f82cu: goto L_0067f82c; case 0x67f896u: goto L_0067f896; default: UNSUP(0x0067ea72, "jump table entry is not a known target"); } }
L_0067ea79:; BB(0x0067ea79);
    /* 0067ea79: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0067ea80: jmp 0x67ea8b */ goto L_0067ea8b;
L_0067ea82:; BB(0x0067ea82);
    /* 0067ea82: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067ea85: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0067ea88: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_0067ea8b:; BB(0x0067ea8b);
    /* 0067ea8b: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067ea8f: jge 0x67eb3a */ if ((fS==fO)) goto L_0067eb3a;
L_0067ea95:; BB(0x0067ea95);
    /* 0067ea95: push 0x190 */ { u32 v = 0x190u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ea9a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67ea9fu); f_00686d82();
    /* 0067ea9f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067eaa2: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0067eaa5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0067eaac: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067eab0: je 0x67eabf */ if (fZ) goto L_0067eabf;
L_0067eab2:; BB(0x0067eab2);
    /* 0067eab2: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0067eab5: call 0x5f5f50 */ r_esp -= 4; W32(r_esp, 0x67eabau); f_005f5f50();
    /* 0067eaba: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 0067eabd: jmp 0x67eac6 */ goto L_0067eac6;
L_0067eabf:; BB(0x0067eabf);
    /* 0067eabf: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
L_0067eac6:; BB(0x0067eac6);
    /* 0067eac6: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 0067eac9: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0067eacc: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067ead3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067ead6: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067ead9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0067eadc: mov dword ptr [edx + ecx*4 + 0x274], eax */ W32((u32)(r_edx+r_ecx*4+0x274u), r_eax);
    /* 0067eae3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067eae6: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067eae9: mov eax, dword ptr [edx + ecx*4 + 0x274] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x274u));
    /* 0067eaf0: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067eaf3: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0067eaf6: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0067eaf9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067eafc: add eax, 0x249f3c */ {  u32 a = r_eax; u32 b = 0x249f3cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0067eb01: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067eb02: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067eb05: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067eb08: mov ecx, dword ptr [edx + ecx*4 + 0x274] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x274u));
    /* 0067eb0f: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x67eb14u); f_005eaf00();
    /* 0067eb14: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067eb17: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067eb1a: mov edx, dword ptr [ecx + eax*4 + 0x274] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x274u));
    /* 0067eb21: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067eb24: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067eb27: mov ecx, dword ptr [ecx + eax*4 + 0x274] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x274u));
    /* 0067eb2e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067eb30: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0067eb33: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67eb35u); call_ind(t); }
    /* 0067eb35: jmp 0x67ea82 */ goto L_0067ea82;
L_0067eb3a:; BB(0x0067eb3a);
    /* 0067eb3a: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0067eb41: jmp 0x67eb4c */ goto L_0067eb4c;
L_0067eb43:; BB(0x0067eb43);
    /* 0067eb43: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067eb46: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067eb49: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0067eb4c:; BB(0x0067eb4c);
    /* 0067eb4c: cmp dword ptr [ebp - 0x10], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067eb50: jge 0x67eca7 */ if ((fS==fO)) goto L_0067eca7;
L_0067eb56:; BB(0x0067eb56);
    /* 0067eb56: push 0x190 */ { u32 v = 0x190u; r_esp -= 4; W32(r_esp, v); }
    /* 0067eb5b: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67eb60u); f_00686d82();
    /* 0067eb60: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067eb63: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0067eb66: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0067eb6d: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067eb71: je 0x67eb80 */ if (fZ) goto L_0067eb80;
L_0067eb73:; BB(0x0067eb73);
    /* 0067eb73: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067eb76: call 0x5f5f50 */ r_esp -= 4; W32(r_esp, 0x67eb7bu); f_005f5f50();
    /* 0067eb7b: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 0067eb7e: jmp 0x67eb87 */ goto L_0067eb87;
L_0067eb80:; BB(0x0067eb80);
    /* 0067eb80: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
L_0067eb87:; BB(0x0067eb87);
    /* 0067eb87: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 0067eb8a: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0067eb8d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067eb94: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067eb97: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067eb9a: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0067eb9d: mov dword ptr [ecx + eax*4 + 0x288], edx */ W32((u32)(r_ecx+r_eax*4+0x288u), r_edx);
    /* 0067eba4: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067eba7: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067ebaa: mov edx, dword ptr [ecx + eax*4 + 0x288] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x288u));
    /* 0067ebb1: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067ebb4: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0067ebb7: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 0067ebba: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067ebbd: add edx, 0x249f3f */ {  u32 a = r_edx; u32 b = 0x249f3fu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0067ebc3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067ebc4: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067ebc7: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067ebca: mov ecx, dword ptr [ecx + eax*4 + 0x288] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x288u));
    /* 0067ebd1: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x67ebd6u); f_005eaf00();
    /* 0067ebd6: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067ebd9: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067ebdc: mov ecx, dword ptr [eax + edx*4 + 0x288] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x288u));
    /* 0067ebe3: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067ebe6: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067ebe9: mov edx, dword ptr [eax + edx*4 + 0x288] */ r_edx = R32((u32)(r_eax+r_edx*4+0x288u));
    /* 0067ebf0: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0067ebf2: mov ecx, edx */ r_ecx = r_edx;
    /* 0067ebf4: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0067ebf7: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x67ebf9u); call_ind(t); }
    /* 0067ebf9: push 0x190 */ { u32 v = 0x190u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ebfe: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67ec03u); f_00686d82();
    /* 0067ec03: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067ec06: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0067ec09: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0067ec10: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067ec14: je 0x67ec26 */ if (fZ) goto L_0067ec26;
L_0067ec16:; BB(0x0067ec16);
    /* 0067ec16: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0067ec19: call 0x5f5f50 */ r_esp -= 4; W32(r_esp, 0x67ec1eu); f_005f5f50();
    /* 0067ec1e: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 0067ec24: jmp 0x67ec30 */ goto L_0067ec30;
L_0067ec26:; BB(0x0067ec26);
    /* 0067ec26: mov dword ptr [ebp - 0x84], 0 */ W32((u32)(r_ebp+0xffffff7cu), 0x0u);
L_0067ec30:; BB(0x0067ec30);
    /* 0067ec30: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 0067ec36: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0067ec39: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067ec40: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067ec43: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067ec46: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067ec49: mov dword ptr [edx + ecx*4 + 0x280], eax */ W32((u32)(r_edx+r_ecx*4+0x280u), r_eax);
    /* 0067ec50: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067ec53: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067ec56: mov eax, dword ptr [edx + ecx*4 + 0x280] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x280u));
    /* 0067ec5d: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067ec60: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0067ec63: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0067ec66: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067ec69: add eax, 0x249f42 */ {  u32 a = r_eax; u32 b = 0x249f42u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0067ec6e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067ec6f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067ec72: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067ec75: mov ecx, dword ptr [edx + ecx*4 + 0x280] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x280u));
    /* 0067ec7c: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x67ec81u); f_005eaf00();
    /* 0067ec81: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067ec84: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067ec87: mov edx, dword ptr [ecx + eax*4 + 0x280] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x280u));
    /* 0067ec8e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067ec91: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067ec94: mov ecx, dword ptr [ecx + eax*4 + 0x280] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x280u));
    /* 0067ec9b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067ec9d: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0067eca0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67eca2u); call_ind(t); }
    /* 0067eca2: jmp 0x67eb43 */ goto L_0067eb43;
L_0067eca7:; BB(0x0067eca7);
    /* 0067eca7: push 0x190 */ { u32 v = 0x190u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ecac: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67ecb1u); f_00686d82();
    /* 0067ecb1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067ecb4: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0067ecb7: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0067ecbe: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067ecc2: je 0x67ecd4 */ if (fZ) goto L_0067ecd4;
L_0067ecc4:; BB(0x0067ecc4);
    /* 0067ecc4: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0067ecc7: call 0x5f5f50 */ r_esp -= 4; W32(r_esp, 0x67ecccu); f_005f5f50();
    /* 0067eccc: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 0067ecd2: jmp 0x67ecde */ goto L_0067ecde;
L_0067ecd4:; BB(0x0067ecd4);
    /* 0067ecd4: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
L_0067ecde:; BB(0x0067ecde);
    /* 0067ecde: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0067ece4: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0067ece7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067ecee: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067ecf1: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0067ecf4: mov dword ptr [edx + 0x290], eax */ W32((u32)(r_edx+0x290u), r_eax);
    /* 0067ecfa: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067ecfd: mov edx, dword ptr [ecx + 0x290] */ r_edx = R32((u32)(r_ecx+0x290u));
    /* 0067ed03: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067ed06: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0067ed09: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 0067ed0c: push 0x249f41 */ { u32 v = 0x249f41u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ed11: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067ed14: mov ecx, dword ptr [edx + 0x290] */ r_ecx = R32((u32)(r_edx+0x290u));
    /* 0067ed1a: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x67ed1fu); f_005eaf00();
    /* 0067ed1f: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067ed22: mov ecx, dword ptr [eax + 0x290] */ r_ecx = R32((u32)(r_eax+0x290u));
    /* 0067ed28: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067ed2b: mov eax, dword ptr [edx + 0x290] */ r_eax = R32((u32)(r_edx+0x290u));
    /* 0067ed31: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067ed33: mov ecx, eax */ r_ecx = r_eax;
    /* 0067ed35: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0067ed38: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67ed3au); call_ind(t); }
    /* 0067ed3a: push 0x190 */ { u32 v = 0x190u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ed3f: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67ed44u); f_00686d82();
    /* 0067ed44: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067ed47: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0067ed4a: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 0067ed51: cmp dword ptr [ebp - 0x38], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067ed55: je 0x67ed67 */ if (fZ) goto L_0067ed67;
L_0067ed57:; BB(0x0067ed57);
    /* 0067ed57: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0067ed5a: call 0x5f5f50 */ r_esp -= 4; W32(r_esp, 0x67ed5fu); f_005f5f50();
    /* 0067ed5f: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 0067ed65: jmp 0x67ed71 */ goto L_0067ed71;
L_0067ed67:; BB(0x0067ed67);
    /* 0067ed67: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
L_0067ed71:; BB(0x0067ed71);
    /* 0067ed71: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 0067ed77: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 0067ed7a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067ed81: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067ed84: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0067ed87: mov dword ptr [edx + 0x294], eax */ W32((u32)(r_edx+0x294u), r_eax);
    /* 0067ed8d: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067ed90: mov edx, dword ptr [ecx + 0x294] */ r_edx = R32((u32)(r_ecx+0x294u));
    /* 0067ed96: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067ed99: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0067ed9c: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 0067ed9f: push 0x249f44 */ { u32 v = 0x249f44u; r_esp -= 4; W32(r_esp, v); }
    /* 0067eda4: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067eda7: mov ecx, dword ptr [edx + 0x294] */ r_ecx = R32((u32)(r_edx+0x294u));
    /* 0067edad: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x67edb2u); f_005eaf00();
    /* 0067edb2: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067edb5: mov ecx, dword ptr [eax + 0x294] */ r_ecx = R32((u32)(r_eax+0x294u));
    /* 0067edbb: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067edbe: mov eax, dword ptr [edx + 0x294] */ r_eax = R32((u32)(r_edx+0x294u));
    /* 0067edc4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067edc6: mov ecx, eax */ r_ecx = r_eax;
    /* 0067edc8: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0067edcb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67edcdu); call_ind(t); }
    /* 0067edcd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067edcf: push 0xc350 */ { u32 v = 0xc350u; r_esp -= 4; W32(r_esp, v); }
    /* 0067edd4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067edd6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067edd8: push 0x249f3c */ { u32 v = 0x249f3cu; r_esp -= 4; W32(r_esp, v); }
    /* 0067eddd: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067ede0: mov ecx, dword ptr [ecx + 0x274] */ r_ecx = R32((u32)(r_ecx+0x274u));
    /* 0067ede6: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x67edebu); f_005eae80();
    /* 0067edeb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067eded: push 0xc738 */ { u32 v = 0xc738u; r_esp -= 4; W32(r_esp, v); }
    /* 0067edf2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067edf4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067edf6: push 0x249f3d */ { u32 v = 0x249f3du; r_esp -= 4; W32(r_esp, v); }
    /* 0067edfb: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067edfe: mov ecx, dword ptr [edx + 0x278] */ r_ecx = R32((u32)(r_edx+0x278u));
    /* 0067ee04: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x67ee09u); f_005eae80();
    /* 0067ee09: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ee0b: push 0xcb20 */ { u32 v = 0xcb20u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ee10: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ee12: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ee14: push 0x249f3e */ { u32 v = 0x249f3eu; r_esp -= 4; W32(r_esp, v); }
    /* 0067ee19: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067ee1c: mov ecx, dword ptr [eax + 0x27c] */ r_ecx = R32((u32)(r_eax+0x27cu));
    /* 0067ee22: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x67ee27u); f_005eae80();
    /* 0067ee27: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ee29: push 0xcf08 */ { u32 v = 0xcf08u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ee2e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ee30: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ee32: push 0x249f42 */ { u32 v = 0x249f42u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ee37: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067ee3a: mov ecx, dword ptr [ecx + 0x280] */ r_ecx = R32((u32)(r_ecx+0x280u));
    /* 0067ee40: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x67ee45u); f_005eae80();
    /* 0067ee45: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ee47: push 0xcf08 */ { u32 v = 0xcf08u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ee4c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ee4e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ee50: push 0x249f43 */ { u32 v = 0x249f43u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ee55: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067ee58: mov ecx, dword ptr [edx + 0x284] */ r_ecx = R32((u32)(r_edx+0x284u));
    /* 0067ee5e: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x67ee63u); f_005eae80();
    /* 0067ee63: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ee65: push 0xd2f0 */ { u32 v = 0xd2f0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ee6a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ee6c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ee6e: push 0x249f3f */ { u32 v = 0x249f3fu; r_esp -= 4; W32(r_esp, v); }
    /* 0067ee73: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067ee76: mov ecx, dword ptr [eax + 0x288] */ r_ecx = R32((u32)(r_eax+0x288u));
    /* 0067ee7c: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x67ee81u); f_005eae80();
    /* 0067ee81: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ee83: push 0xd6d8 */ { u32 v = 0xd6d8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ee88: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ee8a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ee8c: push 0x249f40 */ { u32 v = 0x249f40u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ee91: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067ee94: mov ecx, dword ptr [ecx + 0x28c] */ r_ecx = R32((u32)(r_ecx+0x28cu));
    /* 0067ee9a: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x67ee9fu); f_005eae80();
    /* 0067ee9f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067eea1: push 0xdac0 */ { u32 v = 0xdac0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067eea6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067eea8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067eeaa: push 0x249f41 */ { u32 v = 0x249f41u; r_esp -= 4; W32(r_esp, v); }
    /* 0067eeaf: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067eeb2: mov ecx, dword ptr [edx + 0x290] */ r_ecx = R32((u32)(r_edx+0x290u));
    /* 0067eeb8: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x67eebdu); f_005eae80();
    /* 0067eebd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067eebf: push 0xea60 */ { u32 v = 0xea60u; r_esp -= 4; W32(r_esp, v); }
    /* 0067eec4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067eec6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067eec8: push 0x249f44 */ { u32 v = 0x249f44u; r_esp -= 4; W32(r_esp, v); }
    /* 0067eecd: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067eed0: mov ecx, dword ptr [eax + 0x294] */ r_ecx = R32((u32)(r_eax+0x294u));
    /* 0067eed6: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x67eedbu); f_005eae80();
    /* 0067eedb: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067eede: mov edx, dword ptr [ecx + 0x274] */ r_edx = R32((u32)(r_ecx+0x274u));
    /* 0067eee4: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067eee7: mov ecx, dword ptr [eax + 0x274] */ r_ecx = R32((u32)(r_eax+0x274u));
    /* 0067eeed: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067eeef: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0067eef2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67eef4u); call_ind(t); }
    /* 0067eef4: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067eef7: mov edx, dword ptr [ecx + 0x278] */ r_edx = R32((u32)(r_ecx+0x278u));
    /* 0067eefd: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067ef00: mov ecx, dword ptr [eax + 0x278] */ r_ecx = R32((u32)(r_eax+0x278u));
    /* 0067ef06: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067ef08: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0067ef0b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67ef0du); call_ind(t); }
    /* 0067ef0d: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067ef10: mov edx, dword ptr [ecx + 0x280] */ r_edx = R32((u32)(r_ecx+0x280u));
    /* 0067ef16: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067ef19: mov ecx, dword ptr [eax + 0x280] */ r_ecx = R32((u32)(r_eax+0x280u));
    /* 0067ef1f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067ef21: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0067ef24: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67ef26u); call_ind(t); }
    /* 0067ef26: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067ef29: mov edx, dword ptr [ecx + 0x288] */ r_edx = R32((u32)(r_ecx+0x288u));
    /* 0067ef2f: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067ef32: mov ecx, dword ptr [eax + 0x288] */ r_ecx = R32((u32)(r_eax+0x288u));
    /* 0067ef38: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067ef3a: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0067ef3d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67ef3fu); call_ind(t); }
    /* 0067ef3f: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067ef42: mov edx, dword ptr [ecx + 0x290] */ r_edx = R32((u32)(r_ecx+0x290u));
    /* 0067ef48: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067ef4b: mov ecx, dword ptr [eax + 0x290] */ r_ecx = R32((u32)(r_eax+0x290u));
    /* 0067ef51: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067ef53: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0067ef56: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67ef58u); call_ind(t); }
    /* 0067ef58: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067ef5b: mov edx, dword ptr [ecx + 0x294] */ r_edx = R32((u32)(r_ecx+0x294u));
    /* 0067ef61: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067ef64: mov ecx, dword ptr [eax + 0x294] */ r_ecx = R32((u32)(r_eax+0x294u));
    /* 0067ef6a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067ef6c: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0067ef6f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67ef71u); call_ind(t); }
    /* 0067ef71: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ef73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067ef74: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0067ef7a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0067ef7d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067ef7e: fld1  */ FPUSH(1.0);
    /* 0067ef80: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0067ef83: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ef85: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ef87: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ef89: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ef8b: push 0x1f62 */ { u32 v = 0x1f62u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ef90: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0067ef96: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067ef98: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0067ef9e: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 0067efa4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67efa6u); call_ind(t); }
    /* 0067efa6: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0067efa8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067efaa: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067efad: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067efb3: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067efb6: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067efbc: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067efbe: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0067efc1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67efc3u); call_ind(t); }
    /* 0067efc3: jmp 0x67f8a3 */ goto L_0067f8a3;
L_0067efc8:; BB(0x0067efc8);
    /* 0067efc8: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0067efca: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67efcfu); f_00686d82();
    /* 0067efcf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067efd2: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0067efd5: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 0067efdc: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067efe0: je 0x67eff6 */ if (fZ) goto L_0067eff6;
L_0067efe2:; BB(0x0067efe2);
    /* 0067efe2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067efe4: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0067efe6: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067efe9: call 0x600f30 */ r_esp -= 4; W32(r_esp, 0x67efeeu); f_00600f30();
    /* 0067efee: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 0067eff4: jmp 0x67f000 */ goto L_0067f000;
L_0067eff6:; BB(0x0067eff6);
    /* 0067eff6: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
L_0067f000:; BB(0x0067f000);
    /* 0067f000: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 0067f006: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 0067f009: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067f010: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0067f013: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067f014: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f017: mov ecx, dword ptr [eax + 0x294] */ r_ecx = R32((u32)(r_eax+0x294u));
    /* 0067f01d: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x67f022u); f_005f5d50();
    /* 0067f022: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0067f024: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67f029u); f_00686d82();
    /* 0067f029: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067f02c: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0067f02f: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 0067f036: cmp dword ptr [ebp - 0x48], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067f03a: je 0x67f058 */ if (fZ) goto L_0067f058;
L_0067f03c:; BB(0x0067f03c);
    /* 0067f03c: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f03f: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067f045: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067f046: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0067f048: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0067f04b: call 0x600f30 */ r_esp -= 4; W32(r_esp, 0x67f050u); f_00600f30();
    /* 0067f050: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 0067f056: jmp 0x67f062 */ goto L_0067f062;
L_0067f058:; BB(0x0067f058);
    /* 0067f058: mov dword ptr [ebp - 0x94], 0 */ W32((u32)(r_ebp+0xffffff6cu), 0x0u);
L_0067f062:; BB(0x0067f062);
    /* 0067f062: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 0067f068: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0067f06b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067f072: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0067f075: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067f076: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f079: mov ecx, dword ptr [edx + 0x290] */ r_ecx = R32((u32)(r_edx+0x290u));
    /* 0067f07f: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x67f084u); f_005f5d50();
    /* 0067f084: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0067f086: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f089: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067f08f: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f092: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 0067f098: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067f09a: mov ecx, eax */ r_ecx = r_eax;
    /* 0067f09c: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0067f09f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67f0a1u); call_ind(t); }
    /* 0067f0a1: jmp 0x67f8a3 */ goto L_0067f8a3;
L_0067f0a6:; BB(0x0067f0a6);
    /* 0067f0a6: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0067f0a8: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67f0adu); f_00686d82();
    /* 0067f0ad: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067f0b0: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0067f0b3: mov dword ptr [ebp - 4], 7 */ W32((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 0067f0ba: cmp dword ptr [ebp - 0x50], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067f0be: je 0x67f0dc */ if (fZ) goto L_0067f0dc;
L_0067f0c0:; BB(0x0067f0c0);
    /* 0067f0c0: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f0c3: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067f0c9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067f0ca: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0067f0cc: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0067f0cf: call 0x600f30 */ r_esp -= 4; W32(r_esp, 0x67f0d4u); f_00600f30();
    /* 0067f0d4: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 0067f0da: jmp 0x67f0e6 */ goto L_0067f0e6;
L_0067f0dc:; BB(0x0067f0dc);
    /* 0067f0dc: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
L_0067f0e6:; BB(0x0067f0e6);
    /* 0067f0e6: mov eax, dword ptr [ebp - 0x98] */ r_eax = R32((u32)(r_ebp+0xffffff68u));
    /* 0067f0ec: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0067f0ef: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067f0f6: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067f0f9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067f0fa: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f0fd: mov ecx, dword ptr [edx + 0x294] */ r_ecx = R32((u32)(r_edx+0x294u));
    /* 0067f103: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x67f108u); f_005f5d50();
    /* 0067f108: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0067f10a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67f10fu); f_00686d82();
    /* 0067f10f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067f112: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 0067f115: mov dword ptr [ebp - 4], 8 */ W32((u32)(r_ebp+0xfffffffcu), 0x8u);
    /* 0067f11c: cmp dword ptr [ebp - 0x58], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067f120: je 0x67f136 */ if (fZ) goto L_0067f136;
L_0067f122:; BB(0x0067f122);
    /* 0067f122: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067f124: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0067f126: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067f129: call 0x600f30 */ r_esp -= 4; W32(r_esp, 0x67f12eu); f_00600f30();
    /* 0067f12e: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
    /* 0067f134: jmp 0x67f140 */ goto L_0067f140;
L_0067f136:; BB(0x0067f136);
    /* 0067f136: mov dword ptr [ebp - 0x9c], 0 */ W32((u32)(r_ebp+0xffffff64u), 0x0u);
L_0067f140:; BB(0x0067f140);
    /* 0067f140: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 0067f146: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0067f149: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067f150: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0067f153: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067f154: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f157: mov ecx, dword ptr [edx + 0x290] */ r_ecx = R32((u32)(r_edx+0x290u));
    /* 0067f15d: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x67f162u); f_005f5d50();
    /* 0067f162: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067f164: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067f165: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0067f16b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0067f16e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067f16f: fld1  */ FPUSH(1.0);
    /* 0067f171: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0067f174: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067f176: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0067f178: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067f17a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067f17c: push 0x1f63 */ { u32 v = 0x1f63u; r_esp -= 4; W32(r_esp, v); }
    /* 0067f181: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0067f186: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0067f188: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0067f18e: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 0067f194: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67f196u); call_ind(t); }
    /* 0067f196: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0067f198: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f19b: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067f1a1: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f1a4: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067f1aa: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067f1ac: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0067f1af: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67f1b1u); call_ind(t); }
L_0067f1b1:; BB(0x0067f1b1);
    /* 0067f1b1: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f1b4: mov ecx, dword ptr [ecx + 0x294] */ r_ecx = R32((u32)(r_ecx+0x294u));
    /* 0067f1ba: call 0x5eb220 */ r_esp -= 4; W32(r_esp, 0x67f1bfu); f_005eb220();
    /* 0067f1bf: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067f1c2: jne 0x67f2d3 */ if (!fZ) goto L_0067f2d3;
L_0067f1c8:; BB(0x0067f1c8);
    /* 0067f1c8: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f1cb: mov eax, dword ptr [edx + 0x280] */ r_eax = R32((u32)(r_edx+0x280u));
    /* 0067f1d1: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f1d4: mov ecx, dword ptr [ecx + 0x280] */ r_ecx = R32((u32)(r_ecx+0x280u));
    /* 0067f1da: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0067f1dc: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0067f1df: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67f1e1u); call_ind(t); }
    /* 0067f1e1: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f1e4: mov edx, dword ptr [ecx + 0x284] */ r_edx = R32((u32)(r_ecx+0x284u));
    /* 0067f1ea: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f1ed: mov ecx, dword ptr [eax + 0x284] */ r_ecx = R32((u32)(r_eax+0x284u));
    /* 0067f1f3: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067f1f5: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0067f1f8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67f1fau); call_ind(t); }
    /* 0067f1fa: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0067f1fc: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67f201u); f_00686d82();
    /* 0067f201: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067f204: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 0067f207: mov dword ptr [ebp - 4], 9 */ W32((u32)(r_ebp+0xfffffffcu), 0x9u);
    /* 0067f20e: cmp dword ptr [ebp - 0x60], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067f212: je 0x67f230 */ if (fZ) goto L_0067f230;
L_0067f214:; BB(0x0067f214);
    /* 0067f214: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f217: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067f21d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067f21e: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0067f220: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0067f223: call 0x600f30 */ r_esp -= 4; W32(r_esp, 0x67f228u); f_00600f30();
    /* 0067f228: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
    /* 0067f22e: jmp 0x67f23a */ goto L_0067f23a;
L_0067f230:; BB(0x0067f230);
    /* 0067f230: mov dword ptr [ebp - 0xa0], 0 */ W32((u32)(r_ebp+0xffffff60u), 0x0u);
L_0067f23a:; BB(0x0067f23a);
    /* 0067f23a: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 0067f240: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 0067f243: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067f24a: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0067f24d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067f24e: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f251: mov ecx, dword ptr [edx + 0x290] */ r_ecx = R32((u32)(r_edx+0x290u));
    /* 0067f257: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x67f25cu); f_005f5d50();
    /* 0067f25c: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0067f25e: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67f263u); f_00686d82();
    /* 0067f263: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067f266: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 0067f269: mov dword ptr [ebp - 4], 0xa */ W32((u32)(r_ebp+0xfffffffcu), 0xau);
    /* 0067f270: cmp dword ptr [ebp - 0x68], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067f274: je 0x67f288 */ if (fZ) goto L_0067f288;
L_0067f276:; BB(0x0067f276);
    /* 0067f276: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067f278: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067f27b: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x67f280u); f_006010a0();
    /* 0067f280: mov dword ptr [ebp - 0xa4], eax */ W32((u32)(r_ebp+0xffffff5cu), r_eax);
    /* 0067f286: jmp 0x67f292 */ goto L_0067f292;
L_0067f288:; BB(0x0067f288);
    /* 0067f288: mov dword ptr [ebp - 0xa4], 0 */ W32((u32)(r_ebp+0xffffff5cu), 0x0u);
L_0067f292:; BB(0x0067f292);
    /* 0067f292: mov eax, dword ptr [ebp - 0xa4] */ r_eax = R32((u32)(r_ebp+0xffffff5cu));
    /* 0067f298: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 0067f29b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067f2a2: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0067f2a5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067f2a6: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f2a9: mov ecx, dword ptr [edx + 0x294] */ r_ecx = R32((u32)(r_edx+0x294u));
    /* 0067f2af: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x67f2b4u); f_005f5d50();
    /* 0067f2b4: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0067f2b6: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f2b9: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067f2bf: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f2c2: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 0067f2c8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067f2ca: mov ecx, eax */ r_ecx = r_eax;
    /* 0067f2cc: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0067f2cf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67f2d1u); call_ind(t); }
    /* 0067f2d1: jmp 0x67f2ee */ goto L_0067f2ee;
L_0067f2d3:; BB(0x0067f2d3);
    /* 0067f2d3: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0067f2d5: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f2d8: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067f2de: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f2e1: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067f2e7: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067f2e9: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0067f2ec: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67f2eeu); call_ind(t); }
L_0067f2ee:; BB(0x0067f2ee);
    /* 0067f2ee: jmp 0x67f8a3 */ goto L_0067f8a3;
L_0067f2f3:; BB(0x0067f2f3);
    /* 0067f2f3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067f2f5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067f2f6: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0067f2fc: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0067f2ff: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067f300: fld1  */ FPUSH(1.0);
    /* 0067f302: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0067f305: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067f307: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0067f309: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067f30b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067f30d: push 0x1f64 */ { u32 v = 0x1f64u; r_esp -= 4; W32(r_esp, v); }
    /* 0067f312: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0067f318: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067f31a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0067f320: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 0067f326: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67f328u); call_ind(t); }
    /* 0067f328: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f32b: mov edx, dword ptr [ecx + 0x288] */ r_edx = R32((u32)(r_ecx+0x288u));
    /* 0067f331: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f334: mov ecx, dword ptr [eax + 0x288] */ r_ecx = R32((u32)(r_eax+0x288u));
    /* 0067f33a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067f33c: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0067f33f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67f341u); call_ind(t); }
    /* 0067f341: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f344: mov edx, dword ptr [ecx + 0x28c] */ r_edx = R32((u32)(r_ecx+0x28cu));
    /* 0067f34a: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f34d: mov ecx, dword ptr [eax + 0x28c] */ r_ecx = R32((u32)(r_eax+0x28cu));
    /* 0067f353: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067f355: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0067f358: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67f35au); call_ind(t); }
    /* 0067f35a: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f35d: mov edx, dword ptr [ecx + 0x27c] */ r_edx = R32((u32)(r_ecx+0x27cu));
    /* 0067f363: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f366: mov ecx, dword ptr [eax + 0x27c] */ r_ecx = R32((u32)(r_eax+0x27cu));
    /* 0067f36c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067f36e: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0067f371: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67f373u); call_ind(t); }
    /* 0067f373: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0067f375: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0067f377: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f37a: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067f380: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f383: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067f389: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067f38b: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0067f38e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67f390u); call_ind(t); }
    /* 0067f390: jmp 0x67f8a3 */ goto L_0067f8a3;
L_0067f395:; BB(0x0067f395);
    /* 0067f395: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0067f397: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67f39cu); f_00686d82();
    /* 0067f39c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067f39f: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 0067f3a2: mov dword ptr [ebp - 4], 0xb */ W32((u32)(r_ebp+0xfffffffcu), 0xbu);
    /* 0067f3a9: cmp dword ptr [ebp - 0x70], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067f3ad: je 0x67f3c1 */ if (fZ) goto L_0067f3c1;
L_0067f3af:; BB(0x0067f3af);
    /* 0067f3af: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067f3b1: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 0067f3b4: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x67f3b9u); f_006010a0();
    /* 0067f3b9: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 0067f3bf: jmp 0x67f3cb */ goto L_0067f3cb;
L_0067f3c1:; BB(0x0067f3c1);
    /* 0067f3c1: mov dword ptr [ebp - 0xa8], 0 */ W32((u32)(r_ebp+0xffffff58u), 0x0u);
L_0067f3cb:; BB(0x0067f3cb);
    /* 0067f3cb: mov ecx, dword ptr [ebp - 0xa8] */ r_ecx = R32((u32)(r_ebp+0xffffff58u));
    /* 0067f3d1: mov dword ptr [ebp - 0x6c], ecx */ W32((u32)(r_ebp+0xffffff94u), r_ecx);
    /* 0067f3d4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067f3db: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 0067f3de: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067f3df: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f3e2: mov ecx, dword ptr [eax + 0x290] */ r_ecx = R32((u32)(r_eax+0x290u));
    /* 0067f3e8: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x67f3edu); f_005f5d50();
    /* 0067f3ed: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f3f0: mov edx, dword ptr [ecx + 0x28c] */ r_edx = R32((u32)(r_ecx+0x28cu));
    /* 0067f3f6: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f3f9: mov ecx, dword ptr [eax + 0x28c] */ r_ecx = R32((u32)(r_eax+0x28cu));
    /* 0067f3ff: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067f401: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0067f404: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67f406u); call_ind(t); }
    /* 0067f406: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f409: mov edx, dword ptr [ecx + 0x288] */ r_edx = R32((u32)(r_ecx+0x288u));
    /* 0067f40f: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f412: mov ecx, dword ptr [eax + 0x288] */ r_ecx = R32((u32)(r_eax+0x288u));
    /* 0067f418: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067f41a: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0067f41d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67f41fu); call_ind(t); }
    /* 0067f41f: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f422: mov edx, dword ptr [ecx + 0x27c] */ r_edx = R32((u32)(r_ecx+0x27cu));
    /* 0067f428: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f42b: mov ecx, dword ptr [eax + 0x27c] */ r_ecx = R32((u32)(r_eax+0x27cu));
    /* 0067f431: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067f433: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0067f436: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67f438u); call_ind(t); }
    /* 0067f438: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0067f43a: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0067f43c: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f43f: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067f445: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f448: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067f44e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067f450: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0067f453: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67f455u); call_ind(t); }
    /* 0067f455: jmp 0x67f8a3 */ goto L_0067f8a3;
L_0067f45a:; BB(0x0067f45a);
    /* 0067f45a: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f45d: mov edx, dword ptr [ecx + 0x28c] */ r_edx = R32((u32)(r_ecx+0x28cu));
    /* 0067f463: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f466: mov ecx, dword ptr [eax + 0x28c] */ r_ecx = R32((u32)(r_eax+0x28cu));
    /* 0067f46c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067f46e: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0067f471: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67f473u); call_ind(t); }
    /* 0067f473: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f476: mov edx, dword ptr [ecx + 0x288] */ r_edx = R32((u32)(r_ecx+0x288u));
    /* 0067f47c: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f47f: mov ecx, dword ptr [eax + 0x288] */ r_ecx = R32((u32)(r_eax+0x288u));
    /* 0067f485: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067f487: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0067f48a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67f48cu); call_ind(t); }
    /* 0067f48c: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f48f: mov edx, dword ptr [ecx + 0x27c] */ r_edx = R32((u32)(r_ecx+0x27cu));
    /* 0067f495: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f498: mov ecx, dword ptr [eax + 0x27c] */ r_ecx = R32((u32)(r_eax+0x27cu));
    /* 0067f49e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067f4a0: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0067f4a3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67f4a5u); call_ind(t); }
    /* 0067f4a5: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0067f4a7: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0067f4a9: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f4ac: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067f4b2: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f4b5: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067f4bb: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067f4bd: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0067f4c0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67f4c2u); call_ind(t); }
    /* 0067f4c2: jmp 0x67f8a3 */ goto L_0067f8a3;
L_0067f4c7:; BB(0x0067f4c7);
    /* 0067f4c7: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f4ca: mov edx, dword ptr [ecx + 0x28c] */ r_edx = R32((u32)(r_ecx+0x28cu));
    /* 0067f4d0: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f4d3: mov ecx, dword ptr [eax + 0x28c] */ r_ecx = R32((u32)(r_eax+0x28cu));
    /* 0067f4d9: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067f4db: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0067f4de: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67f4e0u); call_ind(t); }
    /* 0067f4e0: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f4e3: mov edx, dword ptr [ecx + 0x288] */ r_edx = R32((u32)(r_ecx+0x288u));
    /* 0067f4e9: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f4ec: mov ecx, dword ptr [eax + 0x288] */ r_ecx = R32((u32)(r_eax+0x288u));
    /* 0067f4f2: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067f4f4: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0067f4f7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67f4f9u); call_ind(t); }
    /* 0067f4f9: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f4fc: mov edx, dword ptr [ecx + 0x27c] */ r_edx = R32((u32)(r_ecx+0x27cu));
    /* 0067f502: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f505: mov ecx, dword ptr [eax + 0x27c] */ r_ecx = R32((u32)(r_eax+0x27cu));
    /* 0067f50b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067f50d: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0067f510: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67f512u); call_ind(t); }
    /* 0067f512: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0067f514: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067f516: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f519: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067f51f: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f522: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067f528: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067f52a: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0067f52d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67f52fu); call_ind(t); }
    /* 0067f52f: jmp 0x67f8a3 */ goto L_0067f8a3;
L_0067f534:; BB(0x0067f534);
    /* 0067f534: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f537: mov edx, dword ptr [ecx + 0x28c] */ r_edx = R32((u32)(r_ecx+0x28cu));
    /* 0067f53d: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f540: mov ecx, dword ptr [eax + 0x28c] */ r_ecx = R32((u32)(r_eax+0x28cu));
    /* 0067f546: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067f548: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0067f54b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67f54du); call_ind(t); }
    /* 0067f54d: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f550: mov edx, dword ptr [ecx + 0x288] */ r_edx = R32((u32)(r_ecx+0x288u));
    /* 0067f556: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f559: mov ecx, dword ptr [eax + 0x288] */ r_ecx = R32((u32)(r_eax+0x288u));
    /* 0067f55f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067f561: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0067f564: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67f566u); call_ind(t); }
    /* 0067f566: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f569: mov edx, dword ptr [ecx + 0x27c] */ r_edx = R32((u32)(r_ecx+0x27cu));
    /* 0067f56f: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f572: mov ecx, dword ptr [eax + 0x27c] */ r_ecx = R32((u32)(r_eax+0x27cu));
    /* 0067f578: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067f57a: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0067f57d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67f57fu); call_ind(t); }
    /* 0067f57f: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0067f581: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0067f583: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f586: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067f58c: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f58f: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067f595: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067f597: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0067f59a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67f59cu); call_ind(t); }
    /* 0067f59c: jmp 0x67f8a3 */ goto L_0067f8a3;
L_0067f5a1:; BB(0x0067f5a1);
    /* 0067f5a1: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f5a4: mov edx, dword ptr [ecx + 0x28c] */ r_edx = R32((u32)(r_ecx+0x28cu));
    /* 0067f5aa: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f5ad: mov ecx, dword ptr [eax + 0x28c] */ r_ecx = R32((u32)(r_eax+0x28cu));
    /* 0067f5b3: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067f5b5: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0067f5b8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67f5bau); call_ind(t); }
    /* 0067f5ba: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f5bd: mov edx, dword ptr [ecx + 0x288] */ r_edx = R32((u32)(r_ecx+0x288u));
    /* 0067f5c3: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f5c6: mov ecx, dword ptr [eax + 0x288] */ r_ecx = R32((u32)(r_eax+0x288u));
    /* 0067f5cc: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067f5ce: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0067f5d1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67f5d3u); call_ind(t); }
    /* 0067f5d3: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f5d6: mov edx, dword ptr [ecx + 0x27c] */ r_edx = R32((u32)(r_ecx+0x27cu));
    /* 0067f5dc: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f5df: mov ecx, dword ptr [eax + 0x27c] */ r_ecx = R32((u32)(r_eax+0x27cu));
    /* 0067f5e5: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067f5e7: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0067f5ea: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67f5ecu); call_ind(t); }
    /* 0067f5ec: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0067f5ee: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0067f5f0: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f5f3: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067f5f9: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f5fc: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067f602: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067f604: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0067f607: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67f609u); call_ind(t); }
    /* 0067f609: jmp 0x67f8a3 */ goto L_0067f8a3;
L_0067f60e:; BB(0x0067f60e);
    /* 0067f60e: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f611: mov edx, dword ptr [ecx + 0x28c] */ r_edx = R32((u32)(r_ecx+0x28cu));
    /* 0067f617: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f61a: mov ecx, dword ptr [eax + 0x28c] */ r_ecx = R32((u32)(r_eax+0x28cu));
    /* 0067f620: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067f622: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0067f625: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67f627u); call_ind(t); }
    /* 0067f627: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f62a: mov edx, dword ptr [ecx + 0x288] */ r_edx = R32((u32)(r_ecx+0x288u));
    /* 0067f630: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f633: mov ecx, dword ptr [eax + 0x288] */ r_ecx = R32((u32)(r_eax+0x288u));
    /* 0067f639: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067f63b: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0067f63e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67f640u); call_ind(t); }
    /* 0067f640: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f643: mov edx, dword ptr [ecx + 0x27c] */ r_edx = R32((u32)(r_ecx+0x27cu));
    /* 0067f649: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f64c: mov ecx, dword ptr [eax + 0x27c] */ r_ecx = R32((u32)(r_eax+0x27cu));
    /* 0067f652: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067f654: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0067f657: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67f659u); call_ind(t); }
    /* 0067f659: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0067f65b: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0067f65d: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f660: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067f666: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f669: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067f66f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067f671: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0067f674: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67f676u); call_ind(t); }
    /* 0067f676: jmp 0x67f8a3 */ goto L_0067f8a3;
L_0067f67b:; BB(0x0067f67b);
    /* 0067f67b: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f67e: mov edx, dword ptr [ecx + 0x28c] */ r_edx = R32((u32)(r_ecx+0x28cu));
    /* 0067f684: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f687: mov ecx, dword ptr [eax + 0x28c] */ r_ecx = R32((u32)(r_eax+0x28cu));
    /* 0067f68d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067f68f: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0067f692: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67f694u); call_ind(t); }
    /* 0067f694: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f697: mov edx, dword ptr [ecx + 0x288] */ r_edx = R32((u32)(r_ecx+0x288u));
    /* 0067f69d: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f6a0: mov ecx, dword ptr [eax + 0x288] */ r_ecx = R32((u32)(r_eax+0x288u));
    /* 0067f6a6: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067f6a8: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0067f6ab: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67f6adu); call_ind(t); }
    /* 0067f6ad: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f6b0: mov edx, dword ptr [ecx + 0x27c] */ r_edx = R32((u32)(r_ecx+0x27cu));
    /* 0067f6b6: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f6b9: mov ecx, dword ptr [eax + 0x27c] */ r_ecx = R32((u32)(r_eax+0x27cu));
    /* 0067f6bf: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067f6c1: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0067f6c4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67f6c6u); call_ind(t); }
    /* 0067f6c6: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0067f6c8: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0067f6ca: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f6cd: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067f6d3: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f6d6: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067f6dc: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067f6de: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0067f6e1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67f6e3u); call_ind(t); }
    /* 0067f6e3: jmp 0x67f8a3 */ goto L_0067f8a3;
L_0067f6e8:; BB(0x0067f6e8);
    /* 0067f6e8: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f6eb: mov edx, dword ptr [ecx + 0x28c] */ r_edx = R32((u32)(r_ecx+0x28cu));
    /* 0067f6f1: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f6f4: mov ecx, dword ptr [eax + 0x28c] */ r_ecx = R32((u32)(r_eax+0x28cu));
    /* 0067f6fa: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067f6fc: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0067f6ff: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67f701u); call_ind(t); }
    /* 0067f701: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f704: mov edx, dword ptr [ecx + 0x288] */ r_edx = R32((u32)(r_ecx+0x288u));
    /* 0067f70a: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f70d: mov ecx, dword ptr [eax + 0x288] */ r_ecx = R32((u32)(r_eax+0x288u));
    /* 0067f713: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067f715: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0067f718: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67f71au); call_ind(t); }
    /* 0067f71a: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f71d: mov edx, dword ptr [ecx + 0x27c] */ r_edx = R32((u32)(r_ecx+0x27cu));
    /* 0067f723: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f726: mov ecx, dword ptr [eax + 0x27c] */ r_ecx = R32((u32)(r_eax+0x27cu));
    /* 0067f72c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067f72e: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0067f731: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67f733u); call_ind(t); }
    /* 0067f733: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0067f735: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0067f737: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f73a: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067f740: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f743: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067f749: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067f74b: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0067f74e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67f750u); call_ind(t); }
    /* 0067f750: jmp 0x67f8a3 */ goto L_0067f8a3;
L_0067f755:; BB(0x0067f755);
    /* 0067f755: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f758: mov edx, dword ptr [ecx + 0x28c] */ r_edx = R32((u32)(r_ecx+0x28cu));
    /* 0067f75e: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f761: mov ecx, dword ptr [eax + 0x28c] */ r_ecx = R32((u32)(r_eax+0x28cu));
    /* 0067f767: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067f769: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0067f76c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67f76eu); call_ind(t); }
    /* 0067f76e: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f771: mov edx, dword ptr [ecx + 0x288] */ r_edx = R32((u32)(r_ecx+0x288u));
    /* 0067f777: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f77a: mov ecx, dword ptr [eax + 0x288] */ r_ecx = R32((u32)(r_eax+0x288u));
    /* 0067f780: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067f782: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0067f785: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67f787u); call_ind(t); }
    /* 0067f787: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f78a: mov edx, dword ptr [ecx + 0x27c] */ r_edx = R32((u32)(r_ecx+0x27cu));
    /* 0067f790: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f793: mov ecx, dword ptr [eax + 0x27c] */ r_ecx = R32((u32)(r_eax+0x27cu));
    /* 0067f799: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067f79b: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0067f79e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67f7a0u); call_ind(t); }
    /* 0067f7a0: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0067f7a2: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0067f7a4: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f7a7: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067f7ad: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f7b0: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067f7b6: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067f7b8: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0067f7bb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67f7bdu); call_ind(t); }
    /* 0067f7bd: jmp 0x67f8a3 */ goto L_0067f8a3;
L_0067f7c2:; BB(0x0067f7c2);
    /* 0067f7c2: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f7c5: mov edx, dword ptr [ecx + 0x28c] */ r_edx = R32((u32)(r_ecx+0x28cu));
    /* 0067f7cb: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f7ce: mov ecx, dword ptr [eax + 0x28c] */ r_ecx = R32((u32)(r_eax+0x28cu));
    /* 0067f7d4: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067f7d6: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0067f7d9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67f7dbu); call_ind(t); }
    /* 0067f7db: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f7de: mov edx, dword ptr [ecx + 0x288] */ r_edx = R32((u32)(r_ecx+0x288u));
    /* 0067f7e4: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f7e7: mov ecx, dword ptr [eax + 0x288] */ r_ecx = R32((u32)(r_eax+0x288u));
    /* 0067f7ed: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067f7ef: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0067f7f2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67f7f4u); call_ind(t); }
    /* 0067f7f4: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f7f7: mov edx, dword ptr [ecx + 0x27c] */ r_edx = R32((u32)(r_ecx+0x27cu));
    /* 0067f7fd: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f800: mov ecx, dword ptr [eax + 0x27c] */ r_ecx = R32((u32)(r_eax+0x27cu));
    /* 0067f806: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067f808: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0067f80b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67f80du); call_ind(t); }
    /* 0067f80d: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0067f80f: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0067f811: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f814: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067f81a: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f81d: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067f823: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067f825: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0067f828: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67f82au); call_ind(t); }
    /* 0067f82a: jmp 0x67f8a3 */ goto L_0067f8a3;
L_0067f82c:; BB(0x0067f82c);
    /* 0067f82c: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f82f: mov edx, dword ptr [ecx + 0x28c] */ r_edx = R32((u32)(r_ecx+0x28cu));
    /* 0067f835: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f838: mov ecx, dword ptr [eax + 0x28c] */ r_ecx = R32((u32)(r_eax+0x28cu));
    /* 0067f83e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067f840: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0067f843: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67f845u); call_ind(t); }
    /* 0067f845: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f848: mov edx, dword ptr [ecx + 0x288] */ r_edx = R32((u32)(r_ecx+0x288u));
    /* 0067f84e: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f851: mov ecx, dword ptr [eax + 0x288] */ r_ecx = R32((u32)(r_eax+0x288u));
    /* 0067f857: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067f859: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0067f85c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67f85eu); call_ind(t); }
    /* 0067f85e: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f861: mov edx, dword ptr [ecx + 0x27c] */ r_edx = R32((u32)(r_ecx+0x27cu));
    /* 0067f867: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f86a: mov ecx, dword ptr [eax + 0x27c] */ r_ecx = R32((u32)(r_eax+0x27cu));
    /* 0067f870: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067f872: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0067f875: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67f877u); call_ind(t); }
    /* 0067f877: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 0067f879: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0067f87b: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f87e: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067f884: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067f887: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067f88d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067f88f: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0067f892: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67f894u); call_ind(t); }
    /* 0067f894: jmp 0x67f8a3 */ goto L_0067f8a3;
L_0067f896:; BB(0x0067f896);
    /* 0067f896: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067f898: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0067f89e: call 0x650550 */ r_esp -= 4; W32(r_esp, 0x67f8a3u); f_00650550();
L_0067f8a3:; BB(0x0067f8a3);
    /* 0067f8a3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0067f8a6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0067f8ad: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0067f8ae: mov esp, ebp */ r_esp = r_ebp;
    /* 0067f8b0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067f8b1: ret 4 */ FN_RET(0x0067e900); r_esp += 8; return;
}

