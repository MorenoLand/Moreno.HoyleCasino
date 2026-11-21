#include "protos.h"

void f_00521f20(void) /* RouletteWheelBackground::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00521f20);
    /* 00521f20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00521f21: mov ebp, esp */ r_ebp = r_esp;
    /* 00521f23: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00521f25: push 0x6a3f5e */ { u32 v = 0x6a3f5eu; r_esp -= 4; W32(r_esp, v); }
    /* 00521f2a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00521f30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00521f31: sub esp, 0x78 */ {  u32 a = r_esp; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00521f34: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00521f39: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00521f3b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00521f3c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00521f3f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00521f45: mov dword ptr [ebp - 0x60], ecx */ W32((u32)(r_ebp+0xffffffa0u), r_ecx);
    /* 00521f48: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00521f4f: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
    /* 00521f56: mov dword ptr [ebp - 0x1c], 5 */ W32((u32)(r_ebp+0xffffffe4u), 0x5u);
    /* 00521f5d: mov dword ptr [ebp - 0x18], 4 */ W32((u32)(r_ebp+0xffffffe8u), 0x4u);
    /* 00521f64: push 0x6c2fb0 */ { u32 v = 0x6c2fb0u; r_esp -= 4; W32(r_esp, v); }
    /* 00521f69: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x521f6eu); f_00630f40();
    /* 00521f6e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00521f71: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00521f72: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00521f78: call 0x5f38b0 */ r_esp -= 4; W32(r_esp, 0x521f7du); f_005f38b0();
    /* 00521f7d: push 0x1adbe */ { u32 v = 0x1adbeu; r_esp -= 4; W32(r_esp, v); }
    /* 00521f82: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00521f88: call 0x5f1ad0 */ r_esp -= 4; W32(r_esp, 0x521f8du); f_005f1ad0();
    /* 00521f8d: push 0x1a0 */ { u32 v = 0x1a0u; r_esp -= 4; W32(r_esp, v); }
    /* 00521f92: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x521f97u); f_00686d82();
    /* 00521f97: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00521f9a: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00521f9d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00521fa4: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00521fa8: je 0x521fc3 */ if (fZ) goto L_00521fc3;
L_00521faa:; BB(0x00521faa);
    /* 00521faa: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00521fad: call 0x5cd6a0 */ r_esp -= 4; W32(r_esp, 0x521fb2u); f_005cd6a0();
    /* 00521fb2: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00521fb5: mov dword ptr [eax], 0x6c2eec */ W32((u32)(r_eax), 0x6c2eecu);
    /* 00521fbb: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00521fbe: mov dword ptr [ebp - 0x64], ecx */ W32((u32)(r_ebp+0xffffff9cu), r_ecx);
    /* 00521fc1: jmp 0x521fca */ goto L_00521fca;
L_00521fc3:; BB(0x00521fc3);
    /* 00521fc3: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
L_00521fca:; BB(0x00521fca);
    /* 00521fca: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 00521fcd: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 00521fd0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00521fd7: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 00521fda: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00521fdd: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 00521fe0: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00521fe3: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00521fe6: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00521fe9: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00521fec: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00521fee: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00521ff1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x521ff3u); call_ind(t); }
    /* 00521ff3: push 0x1adc2 */ { u32 v = 0x1adc2u; r_esp -= 4; W32(r_esp, v); }
    /* 00521ff8: push 0x1adc3 */ { u32 v = 0x1adc3u; r_esp -= 4; W32(r_esp, v); }
    /* 00521ffd: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00522000: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00522003: call 0x523560 */ r_esp -= 4; W32(r_esp, 0x522008u); f_00523560();
    /* 00522008: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052200a: push 0x3e9 */ { u32 v = 0x3e9u; r_esp -= 4; W32(r_esp, v); }
    /* 0052200f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00522011: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00522013: push 0x1adc1 */ { u32 v = 0x1adc1u; r_esp -= 4; W32(r_esp, v); }
    /* 00522018: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0052201b: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 0052201e: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x522023u); f_005eae80();
    /* 00522023: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 00522028: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x52202du); f_00686d82();
    /* 0052202d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00522030: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00522033: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0052203a: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052203e: je 0x522059 */ if (fZ) goto L_00522059;
L_00522040:; BB(0x00522040);
    /* 00522040: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00522043: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x522048u); f_005eaaf0();
    /* 00522048: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0052204b: mov dword ptr [eax], 0x6c2e2c */ W32((u32)(r_eax), 0x6c2e2cu);
    /* 00522051: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00522054: mov dword ptr [ebp - 0x68], ecx */ W32((u32)(r_ebp+0xffffff98u), r_ecx);
    /* 00522057: jmp 0x522060 */ goto L_00522060;
L_00522059:; BB(0x00522059);
    /* 00522059: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
L_00522060:; BB(0x00522060);
    /* 00522060: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 00522063: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 00522066: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0052206d: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 00522070: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00522073: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 00522076: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0052207c: call 0x637630 */ r_esp -= 4; W32(r_esp, 0x522081u); f_00637630();
    /* 00522081: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00522084: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00522086: je 0x5220a3 */ if (fZ) goto L_005220a3;
L_00522088:; BB(0x00522088);
    /* 00522088: movzx eax, byte ptr [0x795f94] */ r_eax = (u32)R8((u32)(0x795f94u));
    /* 0052208f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00522091: jne 0x5220a3 */ if (!fZ) goto L_005220a3;
L_00522093:; BB(0x00522093);
    /* 00522093: push 0x1adba */ { u32 v = 0x1adbau; r_esp -= 4; W32(r_esp, v); }
    /* 00522098: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0052209b: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0052209e: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x5220a3u); f_005eaf00();
L_005220a3:; BB(0x005220a3);
    /* 005220a3: push 0x1388 */ { u32 v = 0x1388u; r_esp -= 4; W32(r_esp, v); }
    /* 005220a8: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005220ab: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005220ae: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005220b1: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 005220b4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005220b6: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 005220b9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5220bbu); call_ind(t); }
    /* 005220bb: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005220be: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005220c1: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 005220c4: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005220c7: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005220c9: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 005220cc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5220ceu); call_ind(t); }
    /* 005220ce: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 005220d3: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5220d8u); f_00686d82();
    /* 005220d8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005220db: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005220de: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005220e5: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005220e9: je 0x5220f8 */ if (fZ) goto L_005220f8;
L_005220eb:; BB(0x005220eb);
    /* 005220eb: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005220ee: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x5220f3u); f_005f5bf0();
    /* 005220f3: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 005220f6: jmp 0x5220ff */ goto L_005220ff;
L_005220f8:; BB(0x005220f8);
    /* 005220f8: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
L_005220ff:; BB(0x005220ff);
    /* 005220ff: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00522102: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 00522105: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0052210c: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0052210f: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00522112: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 00522115: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0052211b: call 0x637630 */ r_esp -= 4; W32(r_esp, 0x522120u); f_00637630();
    /* 00522120: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00522123: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00522125: je 0x522142 */ if (fZ) goto L_00522142;
L_00522127:; BB(0x00522127);
    /* 00522127: movzx edx, byte ptr [0x795f94] */ r_edx = (u32)R8((u32)(0x795f94u));
    /* 0052212e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00522130: jne 0x522142 */ if (!fZ) goto L_00522142;
L_00522132:; BB(0x00522132);
    /* 00522132: push 0x1adb1 */ { u32 v = 0x1adb1u; r_esp -= 4; W32(r_esp, v); }
    /* 00522137: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 0052213a: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0052213d: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x522142u); f_005eaf00();
L_00522142:; BB(0x00522142);
    /* 00522142: push 0x1389 */ { u32 v = 0x1389u; r_esp -= 4; W32(r_esp, v); }
    /* 00522147: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0052214a: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 0052214d: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 00522150: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 00522153: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00522155: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00522158: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52215au); call_ind(t); }
    /* 0052215a: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0052215d: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 00522160: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 00522163: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 00522166: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00522168: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0052216b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52216du); call_ind(t); }
    /* 0052216d: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 00522172: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x522177u); f_00686d82();
    /* 00522177: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052217a: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0052217d: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00522184: cmp dword ptr [ebp - 0x44], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00522188: je 0x522197 */ if (fZ) goto L_00522197;
L_0052218a:; BB(0x0052218a);
    /* 0052218a: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0052218d: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x522192u); f_005f5bf0();
    /* 00522192: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 00522195: jmp 0x52219e */ goto L_0052219e;
L_00522197:; BB(0x00522197);
    /* 00522197: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
L_0052219e:; BB(0x0052219e);
    /* 0052219e: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 005221a1: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 005221a4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005221ab: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005221ae: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005221b1: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 005221b4: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005221ba: call 0x637630 */ r_esp -= 4; W32(r_esp, 0x5221bfu); f_00637630();
    /* 005221bf: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005221c2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005221c4: je 0x5221e1 */ if (fZ) goto L_005221e1;
L_005221c6:; BB(0x005221c6);
    /* 005221c6: movzx edx, byte ptr [0x795f94] */ r_edx = (u32)R8((u32)(0x795f94u));
    /* 005221cd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005221cf: jne 0x5221e1 */ if (!fZ) goto L_005221e1;
L_005221d1:; BB(0x005221d1);
    /* 005221d1: push 0x1adbf */ { u32 v = 0x1adbfu; r_esp -= 4; W32(r_esp, v); }
    /* 005221d6: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 005221d9: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005221dc: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x5221e1u); f_005eaf00();
L_005221e1:; BB(0x005221e1);
    /* 005221e1: push 0x138a */ { u32 v = 0x138au; r_esp -= 4; W32(r_esp, v); }
    /* 005221e6: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005221e9: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 005221ec: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 005221ef: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005221f2: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005221f4: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 005221f7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5221f9u); call_ind(t); }
    /* 005221f9: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005221fc: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 005221ff: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 00522202: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00522205: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00522207: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0052220a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52220cu); call_ind(t); }
    /* 0052220c: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00522213: jmp 0x52221e */ goto L_0052221e;
L_00522215:; BB(0x00522215);
    /* 00522215: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00522218: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0052221b: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0052221e:; BB(0x0052221e);
    /* 0052221e: cmp dword ptr [ebp - 0x10], 0x1a */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x1au; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00522222: jge 0x52228d */ if ((fS==fO)) goto L_0052228d;
L_00522224:; BB(0x00522224);
    /* 00522224: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 00522229: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x52222eu); f_00686d82();
    /* 0052222e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00522231: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00522234: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 0052223b: cmp dword ptr [ebp - 0x4c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052223f: je 0x52224e */ if (fZ) goto L_0052224e;
L_00522241:; BB(0x00522241);
    /* 00522241: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00522244: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x522249u); f_005eaaf0();
    /* 00522249: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 0052224c: jmp 0x522255 */ goto L_00522255;
L_0052224e:; BB(0x0052224e);
    /* 0052224e: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
L_00522255:; BB(0x00522255);
    /* 00522255: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00522258: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 0052225b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00522262: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00522265: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00522268: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0052226b: mov dword ptr [ecx + eax*4 + 0x18], edx */ W32((u32)(r_ecx+r_eax*4+0x18u), r_edx);
    /* 0052226f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00522271: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00522273: push -0x1e */ { u32 v = 0xffffffe2u; r_esp -= 4; W32(r_esp, v); }
    /* 00522275: push -3 */ { u32 v = 0xfffffffdu; r_esp -= 4; W32(r_esp, v); }
    /* 00522277: push 0x1adc0 */ { u32 v = 0x1adc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052227c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052227f: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00522282: mov ecx, dword ptr [ecx + eax*4 + 0x18] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x18u));
    /* 00522286: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x52228bu); f_005eae80();
    /* 0052228b: jmp 0x522215 */ goto L_00522215;
L_0052228d:; BB(0x0052228d);
    /* 0052228d: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00522294: jmp 0x52229f */ goto L_0052229f;
L_00522296:; BB(0x00522296);
    /* 00522296: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00522299: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0052229c: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_0052229f:; BB(0x0052229f);
    /* 0052229f: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005222a3: jge 0x5222f3 */ if ((fS==fO)) goto L_005222f3;
L_005222a5:; BB(0x005222a5);
    /* 005222a5: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005222a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005222a9: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005222af: call 0x639110 */ r_esp -= 4; W32(r_esp, 0x5222b4u); f_00639110();
    /* 005222b4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005222b7: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005222b9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005222bc: call 0x646380 */ r_esp -= 4; W32(r_esp, 0x5222c1u); f_00646380();
    /* 005222c1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005222c3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005222c5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005222c8: call 0x6464d0 */ r_esp -= 4; W32(r_esp, 0x5222cdu); f_006464d0();
    /* 005222cd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005222cf: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005222d2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005222d3: mov ecx, dword ptr [0x793370] */ r_ecx = R32((u32)(0x793370u));
    /* 005222d9: call 0x5d9180 */ r_esp -= 4; W32(r_esp, 0x5222deu); f_005d9180();
    /* 005222de: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005222e1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005222e2: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5222e7u); f_005dcb00();
    /* 005222e7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005222ea: mov ecx, eax */ r_ecx = r_eax;
    /* 005222ec: call 0x5d66b0 */ r_esp -= 4; W32(r_esp, 0x5222f1u); f_005d66b0();
    /* 005222f1: jmp 0x522296 */ goto L_00522296;
L_005222f3:; BB(0x005222f3);
    /* 005222f3: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005222fa: jmp 0x522305 */ goto L_00522305;
L_005222fc:; BB(0x005222fc);
    /* 005222fc: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005222ff: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00522302: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_00522305:; BB(0x00522305);
    /* 00522305: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00522309: jge 0x522434 */ if ((fS==fO)) goto L_00522434;
L_0052230f:; BB(0x0052230f);
    /* 0052230f: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 00522314: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x522319u); f_00686d82();
    /* 00522319: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052231c: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0052231f: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 00522326: cmp dword ptr [ebp - 0x54], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052232a: je 0x522339 */ if (fZ) goto L_00522339;
L_0052232c:; BB(0x0052232c);
    /* 0052232c: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0052232f: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x522334u); f_005eaaf0();
    /* 00522334: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 00522337: jmp 0x522340 */ goto L_00522340;
L_00522339:; BB(0x00522339);
    /* 00522339: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
L_00522340:; BB(0x00522340);
    /* 00522340: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 00522343: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 00522346: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0052234d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00522350: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 00522353: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00522356: mov dword ptr [eax + edx*4 + 0x304], ecx */ W32((u32)(r_eax+r_edx*4+0x304u), r_ecx);
    /* 0052235d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00522360: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00522361: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x522366u); f_005dcb00();
    /* 00522366: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00522369: mov eax, dword ptr [eax + 0x20] */ r_eax = R32((u32)(r_eax+0x20u));
    /* 0052236c: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0052236f: mov dword ptr [ebp - 0x7c], ecx */ W32((u32)(r_ebp+0xffffff84u), r_ecx);
    /* 00522372: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00522375: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00522376: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x52237bu); f_005dcb00();
    /* 0052237b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052237e: mov eax, dword ptr [eax + 0x20] */ r_eax = R32((u32)(r_eax+0x20u));
    /* 00522381: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 00522384: mov dword ptr [ebp - 0x80], ecx */ W32((u32)(r_ebp+0xffffff80u), r_ecx);
    /* 00522387: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00522389: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052238c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052238d: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x522392u); f_005dcb00();
    /* 00522392: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00522395: mov eax, dword ptr [eax + 0x20] */ r_eax = R32((u32)(r_eax+0x20u));
    /* 00522398: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0052239b: call 0x5f53c0 */ r_esp -= 4; W32(r_esp, 0x5223a0u); f_005f53c0();
    /* 005223a0: add eax, 0x64 */ {  u32 a = r_eax; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005223a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005223a4: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 005223a7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005223a9: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 005223ac: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 005223af: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5223b1u); call_ind(t); }
    /* 005223b1: sub eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005223b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005223b5: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 005223b8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005223ba: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 005223bd: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005223c0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5223c2u); call_ind(t); }
    /* 005223c2: add eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005223c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005223c6: push 0x1adbd */ { u32 v = 0x1adbdu; r_esp -= 4; W32(r_esp, v); }
    /* 005223cb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005223ce: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005223d1: mov ecx, dword ptr [edx + ecx*4 + 0x304] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x304u));
    /* 005223d8: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x5223ddu); f_005eae80();
    /* 005223dd: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005223e0: mov ecx, dword ptr [ebp + eax*4 - 0x24] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffdcu));
    /* 005223e4: imul ecx, ecx, 3 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005223e7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005223e8: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005223eb: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 005223ee: mov ecx, dword ptr [eax + edx*4 + 0x304] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x304u));
    /* 005223f5: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005223f8: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 005223fb: mov edx, dword ptr [eax + edx*4 + 0x304] */ r_edx = R32((u32)(r_eax+r_edx*4+0x304u));
    /* 00522402: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00522404: mov ecx, edx */ r_ecx = r_edx;
    /* 00522406: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 0052240c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x52240eu); call_ind(t); }
    /* 0052240e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00522411: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00522414: mov edx, dword ptr [ecx + eax*4 + 0x304] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x304u));
    /* 0052241b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052241e: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00522421: mov ecx, dword ptr [ecx + eax*4 + 0x304] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x304u));
    /* 00522428: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052242a: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0052242d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52242fu); call_ind(t); }
    /* 0052242f: jmp 0x5222fc */ goto L_005222fc;
L_00522434:; BB(0x00522434);
    /* 00522434: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0052243b: jmp 0x522446 */ goto L_00522446;
L_0052243d:; BB(0x0052243d);
    /* 0052243d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00522440: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00522443: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_00522446:; BB(0x00522446);
    /* 00522446: cmp dword ptr [ebp - 0x10], 0xa1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xa1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052244d: jge 0x52254c */ if ((fS==fO)) goto L_0052254c;
L_00522453:; BB(0x00522453);
    /* 00522453: push 0xae8 */ { u32 v = 0xae8u; r_esp -= 4; W32(r_esp, v); }
    /* 00522458: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x52245du); f_00686d82();
    /* 0052245d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00522460: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 00522463: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 0052246a: cmp dword ptr [ebp - 0x5c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052246e: je 0x522480 */ if (fZ) goto L_00522480;
L_00522470:; BB(0x00522470);
    /* 00522470: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00522473: call 0x523890 */ r_esp -= 4; W32(r_esp, 0x522478u); f_00523890();
    /* 00522478: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 0052247e: jmp 0x52248a */ goto L_0052248a;
L_00522480:; BB(0x00522480);
    /* 00522480: mov dword ptr [ebp - 0x84], 0 */ W32((u32)(r_ebp+0xffffff7cu), 0x0u);
L_0052248a:; BB(0x0052248a);
    /* 0052248a: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00522490: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 00522493: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0052249a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052249d: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005224a0: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005224a3: mov dword ptr [ecx + eax*4 + 0x80], edx */ W32((u32)(r_ecx+r_eax*4+0x80u), r_edx);
    /* 005224aa: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005224ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005224ae: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005224b0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005224b2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005224b4: push 0x1adbc */ { u32 v = 0x1adbcu; r_esp -= 4; W32(r_esp, v); }
    /* 005224b9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005224bc: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005224bf: mov ecx, dword ptr [edx + ecx*4 + 0x80] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x80u));
    /* 005224c6: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x5224cbu); f_005eae80();
    /* 005224cb: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005224ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005224cf: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005224d2: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005224d5: mov eax, dword ptr [edx + ecx*4 + 0x80] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x80u));
    /* 005224dc: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005224df: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005224e2: mov ecx, dword ptr [edx + ecx*4 + 0x80] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x80u));
    /* 005224e9: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005224eb: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 005224f1: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5224f3u); call_ind(t); }
    /* 005224f3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005224f5: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005224f8: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005224fb: mov ecx, dword ptr [ecx + eax*4 + 0x80] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x80u));
    /* 00522502: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x522507u); f_005eb5d0();
    /* 00522507: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052250a: mov eax, dword ptr [0x793374] */ r_eax = R32((u32)(0x793374u));
    /* 0052250f: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 00522513: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00522514: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00522517: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 0052251a: mov ecx, dword ptr [eax + edx*4 + 0x80] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x80u));
    /* 00522521: call 0x5cc2c0 */ r_esp -= 4; W32(r_esp, 0x522526u); f_005cc2c0();
    /* 00522526: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00522529: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0052252c: mov eax, dword ptr [edx + ecx*4 + 0x80] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x80u));
    /* 00522533: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00522536: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00522539: mov ecx, dword ptr [edx + ecx*4 + 0x80] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x80u));
    /* 00522540: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00522542: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 00522545: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x522547u); call_ind(t); }
    /* 00522547: jmp 0x52243d */ goto L_0052243d;
L_0052254c:; BB(0x0052254c);
    /* 0052254c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052254f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00522556: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00522557: mov esp, ebp */ r_esp = r_ebp;
    /* 00522559: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052255a: ret  */ FN_RET(0x00521f20); r_esp += 4; return;
}

void f_005234d0(void) /* RouletteWheelBackground::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005234d0);
    /* 005234d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005234d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005234d3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005234d6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005234d9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005234dc: call 0x5f54c0 */ r_esp -= 4; W32(r_esp, 0x5234e1u); f_005f54c0();
    /* 005234e1: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005234e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005234e6: jne 0x5234f3 */ if (!fZ) goto L_005234f3;
L_005234e8:; BB(0x005234e8);
    /* 005234e8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005234eb: movzx edx, byte ptr [ecx + 4] */ r_edx = (u32)R8((u32)(r_ecx+0x4u));
    /* 005234ef: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005234f1: je 0x5234f5 */ if (fZ) goto L_005234f5;
L_005234f3:; BB(0x005234f3);
    /* 005234f3: jmp 0x52351e */ goto L_0052351e;
L_005234f5:; BB(0x005234f5);
    /* 005234f5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005234f8: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 005234fb: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005234fe: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00523502: je 0x52350c */ if (fZ) goto L_0052350c;
L_00523504:; BB(0x00523504);
    /* 00523504: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00523508: je 0x52350c */ if (fZ) goto L_0052350c;
L_0052350a:; BB(0x0052350a);
    /* 0052350a: jmp 0x52351e */ goto L_0052351e;
L_0052350c:; BB(0x0052350c);
    /* 0052350c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0052350f: mov byte ptr [edx + 4], 1 */ W8((u32)(r_edx+0x4u), 0x1u);
    /* 00523513: mov ecx, dword ptr [0x79337c] */ r_ecx = R32((u32)(0x79337cu));
    /* 00523519: call 0x5229b0 */ r_esp -= 4; W32(r_esp, 0x52351eu); f_005229b0();
L_0052351e:; BB(0x0052351e);
    /* 0052351e: mov esp, ebp */ r_esp = r_ebp;
    /* 00523520: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00523521: ret 4 */ FN_RET(0x005234d0); r_esp += 8; return;
}

