#include "protos.h"

void f_0044c670(void) /* LetItRideState::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044c670);
    /* 0044c670: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044c671: mov ebp, esp */ r_ebp = r_esp;
    /* 0044c673: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044c676: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0044c679: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044c67c: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x44c681u); f_005e9e20();
    /* 0044c681: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044c684: mov dword ptr [eax], 0x6b9328 */ W32((u32)(r_eax), 0x6b9328u);
    /* 0044c68a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044c68d: mov dword ptr [ecx + 4], 0 */ W32((u32)(r_ecx+0x4u), 0x0u);
    /* 0044c694: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044c69b: jmp 0x44c6a6 */ goto L_0044c6a6;
L_0044c69d:; BB(0x0044c69d);
    /* 0044c69d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044c6a0: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0044c6a3: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0044c6a6:; BB(0x0044c6a6);
    /* 0044c6a6: cmp dword ptr [ebp - 4], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044c6aa: jge 0x44c6bc */ if ((fS==fO)) goto L_0044c6bc;
L_0044c6ac:; BB(0x0044c6ac);
    /* 0044c6ac: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044c6af: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044c6b2: mov dword ptr [ecx + eax*4 + 8], 0 */ W32((u32)(r_ecx+r_eax*4+0x8u), 0x0u);
    /* 0044c6ba: jmp 0x44c69d */ goto L_0044c69d;
L_0044c6bc:; BB(0x0044c6bc);
    /* 0044c6bc: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044c6bf: mov esp, ebp */ r_esp = r_ebp;
    /* 0044c6c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044c6c2: ret  */ FN_RET(0x0044c670); r_esp += 4; return;
}

void f_0044c6d0(void) /* LetItRideState::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044c6d0);
    /* 0044c6d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044c6d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0044c6d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044c6d5: push 0x69ef08 */ { u32 v = 0x69ef08u; r_esp -= 4; W32(r_esp, v); }
    /* 0044c6da: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0044c6e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044c6e1: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044c6e4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0044c6e9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0044c6eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044c6ec: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0044c6ef: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0044c6f5: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0044c6f8: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0044c6fb: mov dword ptr [eax], 0x6b9328 */ W32((u32)(r_eax), 0x6b9328u);
    /* 0044c701: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044c708: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0044c70b: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0044c70e: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0044c711: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044c714: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0044c717: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044c71b: je 0x44c730 */ if (fZ) goto L_0044c730;
L_0044c71d:; BB(0x0044c71d);
    /* 0044c71d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044c71f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044c722: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0044c724: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044c727: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0044c729: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x44c72bu); call_ind(t); }
    /* 0044c72b: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0044c72e: jmp 0x44c737 */ goto L_0044c737;
L_0044c730:; BB(0x0044c730);
    /* 0044c730: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0044c737:; BB(0x0044c737);
    /* 0044c737: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0044c73e: jmp 0x44c749 */ goto L_0044c749;
L_0044c740:; BB(0x0044c740);
    /* 0044c740: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044c743: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0044c746: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0044c749:; BB(0x0044c749);
    /* 0044c749: cmp dword ptr [ebp - 0x10], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044c74d: jge 0x44c784 */ if ((fS==fO)) goto L_0044c784;
L_0044c74f:; BB(0x0044c74f);
    /* 0044c74f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044c752: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0044c755: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 0044c759: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0044c75c: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044c75f: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0044c762: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044c766: je 0x44c77b */ if (fZ) goto L_0044c77b;
L_0044c768:; BB(0x0044c768);
    /* 0044c768: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044c76a: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044c76d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0044c76f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044c772: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0044c774: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x44c776u); call_ind(t); }
    /* 0044c776: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0044c779: jmp 0x44c782 */ goto L_0044c782;
L_0044c77b:; BB(0x0044c77b);
    /* 0044c77b: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0044c782:; BB(0x0044c782);
    /* 0044c782: jmp 0x44c740 */ goto L_0044c740;
L_0044c784:; BB(0x0044c784);
    /* 0044c784: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0044c78b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0044c78e: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x44c793u); f_005e9e40();
    /* 0044c793: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044c796: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0044c79d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044c79e: mov esp, ebp */ r_esp = r_ebp;
    /* 0044c7a0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044c7a1: ret  */ FN_RET(0x0044c6d0); r_esp += 4; return;
}

void f_0044df90(void) /* letitridestate::func_0044df90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044df90);
    /* 0044df90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044df91: mov ebp, esp */ r_ebp = r_esp;
    /* 0044df93: sub esp, 0x9e0 */ {  u32 a = r_esp; u32 b = 0x9e0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044df99: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0044df9e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0044dfa0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0044dfa3: mov dword ptr [ebp - 0x9dc], ecx */ W32((u32)(r_ebp+0xfffff624u), r_ecx);
    /* 0044dfa9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044dfac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044dfad: mov ecx, dword ptr [0x79071c] */ r_ecx = R32((u32)(0x79071cu));
    /* 0044dfb3: call 0x4466b0 */ r_esp -= 4; W32(r_esp, 0x44dfb8u); f_004466b0();
    /* 0044dfb8: mov byte ptr [ebp - 0x551], al */ W8((u32)(r_ebp+0xfffffaafu), (u8)r_eax);
    /* 0044dfbe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044dfc0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044dfc3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044dfc4: mov ecx, dword ptr [ebp - 0x9dc] */ r_ecx = R32((u32)(r_ebp+0xfffff624u));
    /* 0044dfca: call 0x44ce00 */ r_esp -= 4; W32(r_esp, 0x44dfcfu); f_0044ce00();
    /* 0044dfcf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044dfd0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0044dfd3: imul edx, edx, 0xa */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xau; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044dfd6: mov eax, dword ptr [ebp - 0x9dc] */ r_eax = R32((u32)(r_ebp+0xfffff624u));
    /* 0044dfdc: lea ecx, [eax + edx + 0x98] */ r_ecx = (u32)(r_eax+r_edx+0x98u);
    /* 0044dfe3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044dfe4: call 0x462ba0 */ r_esp -= 4; W32(r_esp, 0x44dfe9u); f_00462ba0();
    /* 0044dfe9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044dfec: mov dword ptr [ebp - 0x10c], eax */ W32((u32)(r_ebp+0xfffffef4u), r_eax);
    /* 0044dff2: cmp dword ptr [ebp - 0x10c], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffef4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044dff9: jne 0x44e012 */ if (!fZ) goto L_0044e012;
L_0044dffb:; BB(0x0044dffb);
    /* 0044dffb: push 0x286 */ { u32 v = 0x286u; r_esp -= 4; W32(r_esp, v); }
    /* 0044e000: push 0x6b939c */ { u32 v = 0x6b939cu; r_esp -= 4; W32(r_esp, v); }
    /* 0044e005: push 0x6b681c */ { u32 v = 0x6b681cu; r_esp -= 4; W32(r_esp, v); }
    /* 0044e00a: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x44e00fu); f_005e9f20();
    /* 0044e00f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0044e012:; BB(0x0044e012);
    /* 0044e012: mov eax, dword ptr [ebp - 0x10c] */ r_eax = R32((u32)(r_ebp+0xfffffef4u));
    /* 0044e018: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044e019: push 0x6b9378 */ { u32 v = 0x6b9378u; r_esp -= 4; W32(r_esp, v); }
    /* 0044e01e: lea ecx, [ebp - 0x550] */ r_ecx = (u32)(r_ebp+0xfffffab0u);
    /* 0044e024: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044e025: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x44e02bu); call_ind(t); }
    /* 0044e02b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044e02e: lea edx, [ebp - 0x550] */ r_edx = (u32)(r_ebp+0xfffffab0u);
    /* 0044e034: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044e035: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x44e03au); f_0062fde0();
    /* 0044e03a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044e03d: lea eax, [ebp - 0x9d8] */ r_eax = (u32)(r_ebp+0xfffff628u);
    /* 0044e043: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044e044: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0044e04a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044e04b: call 0x462f40 */ r_esp -= 4; W32(r_esp, 0x44e050u); f_00462f40();
    /* 0044e050: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044e053: movzx edx, byte ptr [ebp - 0x551] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffaafu));
    /* 0044e05a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044e05c: je 0x44e073 */ if (fZ) goto L_0044e073;
L_0044e05e:; BB(0x0044e05e);
    /* 0044e05e: push 0x6b8cf0 */ { u32 v = 0x6b8cf0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044e063: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x44e068u); f_00630f40();
    /* 0044e068: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044e06b: mov dword ptr [ebp - 0x9e0], eax */ W32((u32)(r_ebp+0xfffff620u), r_eax);
    /* 0044e071: jmp 0x44e086 */ goto L_0044e086;
L_0044e073:; BB(0x0044e073);
    /* 0044e073: push 0x6b935c */ { u32 v = 0x6b935cu; r_esp -= 4; W32(r_esp, v); }
    /* 0044e078: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x44e07du); f_00630f40();
    /* 0044e07d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044e080: mov dword ptr [ebp - 0x9e0], eax */ W32((u32)(r_ebp+0xfffff620u), r_eax);
L_0044e086:; BB(0x0044e086);
    /* 0044e086: mov eax, dword ptr [ebp - 0x9e0] */ r_eax = R32((u32)(r_ebp+0xfffff620u));
    /* 0044e08c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044e08d: lea ecx, [ebp - 0x108] */ r_ecx = (u32)(r_ebp+0xfffffef8u);
    /* 0044e093: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044e094: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x44e099u); f_00686d8e();
    /* 0044e099: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044e09c: lea edx, [ebp - 0x510] */ r_edx = (u32)(r_ebp+0xfffffaf0u);
    /* 0044e0a2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044e0a3: mov al, byte ptr [ebp - 0x551] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffaafu))) & 0xffu);
    /* 0044e0a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044e0aa: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0044e0b0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044e0b1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0044e0b4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044e0b5: mov ecx, dword ptr [0x79071c] */ r_ecx = R32((u32)(0x79071cu));
    /* 0044e0bb: call 0x446990 */ r_esp -= 4; W32(r_esp, 0x44e0c0u); f_00446990();
    /* 0044e0c0: lea eax, [ebp - 0x510] */ r_eax = (u32)(r_ebp+0xfffffaf0u);
    /* 0044e0c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044e0c7: lea ecx, [ebp - 0x108] */ r_ecx = (u32)(r_ebp+0xfffffef8u);
    /* 0044e0cd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044e0ce: lea edx, [ebp - 0x9d8] */ r_edx = (u32)(r_ebp+0xfffff628u);
    /* 0044e0d4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044e0d5: push 0x6b9338 */ { u32 v = 0x6b9338u; r_esp -= 4; W32(r_esp, v); }
    /* 0044e0da: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x44e0dfu); f_00630f40();
    /* 0044e0df: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044e0e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044e0e3: lea eax, [ebp - 0x958] */ r_eax = (u32)(r_ebp+0xfffff6a8u);
    /* 0044e0e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044e0ea: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x44e0f0u); call_ind(t); }
    /* 0044e0f0: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044e0f3: lea ecx, [ebp - 0x958] */ r_ecx = (u32)(r_ebp+0xfffff6a8u);
    /* 0044e0f9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044e0fa: push 0x6b678c */ { u32 v = 0x6b678cu; r_esp -= 4; W32(r_esp, v); }
    /* 0044e0ff: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x44e104u); f_00630f40();
    /* 0044e104: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044e107: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044e108: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044e10a: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 0044e110: call 0x57be80 */ r_esp -= 4; W32(r_esp, 0x44e115u); f_0057be80();
    /* 0044e115: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044e118: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0044e11a: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x44e11fu); f_00686d72();
    /* 0044e11f: mov esp, ebp */ r_esp = r_ebp;
    /* 0044e121: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044e122: ret 4 */ FN_RET(0x0044df90); r_esp += 8; return;
}

