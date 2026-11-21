#include "protos.h"

void f_005c3110(void) /* sub_5C3110 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c3110);
    /* 005c3110: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c3111: mov ebp, esp */ r_ebp = r_esp;
    /* 005c3113: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c3114: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c3117: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c311a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c311c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c311f: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005c3122: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c3124u); call_ind(t); }
    /* 005c3124: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c3127: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005c312a: mov dword ptr [ecx + 0x54], edx */ W32((u32)(r_ecx+0x54u), r_edx);
    /* 005c312d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c3130: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c3132: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c3135: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005c3138: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c313au); call_ind(t); }
    /* 005c313a: mov esp, ebp */ r_esp = r_ebp;
    /* 005c313c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c313d: ret 4 */ FN_RET(0x005c3110); r_esp += 8; return;
}

void f_005c3140(void) /* sub_5C3140 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c3140);
    /* 005c3140: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c3141: mov ebp, esp */ r_ebp = r_esp;
    /* 005c3143: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c3146: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005c3149: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005c314c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c314d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005c3150: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c3151: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c3154: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 005c3157: call 0x5be340 */ r_esp -= 4; W32(r_esp, 0x5c315cu); f_005be340();
    /* 005c315c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005c315f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005c3162: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 005c3165: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c3168: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005c316b: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005c316d: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005c316f: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 005c3172: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005c3175: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005c3178: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 005c317b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c317e: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 005c3181: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 005c3184: imul ecx, dword ptr [ebp - 4] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xfffffffcu)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c3188: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005c318b: add ecx, dword ptr [edx] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c318d: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005c3190: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 005c3192: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c3195: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 005c3198: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 005c319b: imul eax, dword ptr [ebp - 4] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xfffffffcu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c319f: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005c31a2: add eax, dword ptr [ecx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c31a5: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005c31a8: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005c31ab: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005c31ae: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 005c31b1: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 005c31b4: imul edx, dword ptr [ebp - 4] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0xfffffffcu)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c31b8: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005c31bb: add edx, dword ptr [eax + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c31be: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005c31c1: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 005c31c4: mov esp, ebp */ r_esp = r_ebp;
    /* 005c31c6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c31c7: ret 0xc */ FN_RET(0x005c3140); r_esp += 16; return;
}

void f_005c31d0(void) /* sub_5C31D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c31d0);
    /* 005c31d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c31d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c31d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c31d5: push 0x6a8651 */ { u32 v = 0x6a8651u; r_esp -= 4; W32(r_esp, v); }
    /* 005c31da: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005c31e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c31e1: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c31e4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005c31e9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c31eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c31ec: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005c31ef: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005c31f5: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005c31f8: lea eax, [ebp - 0x1c] */ r_eax = (u32)(r_ebp+0xffffffe4u);
    /* 005c31fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c31fc: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005c31ff: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c3200: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005c3203: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c3204: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005c3207: call 0x5c3140 */ r_esp -= 4; W32(r_esp, 0x5c320cu); f_005c3140();
    /* 005c320c: push 0x190 */ { u32 v = 0x190u; r_esp -= 4; W32(r_esp, v); }
    /* 005c3211: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5c3216u); f_00686d82();
    /* 005c3216: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c3219: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005c321c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c3223: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c3227: je 0x5c3236 */ if (fZ) goto L_005c3236;
L_005c3229:; BB(0x005c3229);
    /* 005c3229: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c322c: call 0x5f5f50 */ r_esp -= 4; W32(r_esp, 0x5c3231u); f_005f5f50();
    /* 005c3231: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005c3234: jmp 0x5c323d */ goto L_005c323d;
L_005c3236:; BB(0x005c3236);
    /* 005c3236: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_005c323d:; BB(0x005c323d);
    /* 005c323d: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005c3240: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005c3243: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005c324a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c324d: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005c3250: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005c3253: add edx, 0x3158dc */ {  u32 a = r_edx; u32 b = 0x3158dcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c3259: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c325a: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 005c325c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c325e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c3260: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c3263: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c3264: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c3267: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x5c326cu); f_005eae80();
    /* 005c326c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c326f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c3270: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c3273: call 0x5eb000 */ r_esp -= 4; W32(r_esp, 0x5c3278u); f_005eb000();
    /* 005c3278: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c327b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c327c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c327f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c3281: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c3284: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005c328a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c328cu); call_ind(t); }
    /* 005c328c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c328f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005c3291: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c3294: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005c3297: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c3299u); call_ind(t); }
    /* 005c3299: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c329c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c329f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005c32a6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c32a7: mov esp, ebp */ r_esp = r_ebp;
    /* 005c32a9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c32aa: ret 8 */ FN_RET(0x005c31d0); r_esp += 12; return;
}

void f_005c3870(void) /* sub_5C3870 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c3870);
    /* 005c3870: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c3871: mov ebp, esp */ r_ebp = r_esp;
    /* 005c3873: sub esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c3876: mov dword ptr [ebp - 0x6c], ecx */ W32((u32)(r_ebp+0xffffff94u), r_ecx);
    /* 005c3879: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 005c387c: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c387f: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 005c3882: lea ecx, [ebp - 9] */ r_ecx = (u32)(r_ebp+0xfffffff7u);
    /* 005c3885: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005c3888: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c388a: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 005c388d: call 0x5bef20 */ r_esp -= 4; W32(r_esp, 0x5c3892u); f_005bef20();
    /* 005c3892: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 005c3895: mov dword ptr [edx], 0 */ W32((u32)(r_edx), 0x0u);
    /* 005c389b: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 005c389e: mov dword ptr [eax + 4], 0 */ W32((u32)(r_eax+0x4u), 0x0u);
    /* 005c38a5: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 005c38a8: fldz  */ FPUSH(0.0);
    /* 005c38aa: fstp dword ptr [ecx + 8] */ W_F32((u32)(r_ecx+0x8u), ST(0)); FPOP();
    /* 005c38ad: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 005c38b0: fldz  */ FPUSH(0.0);
    /* 005c38b2: fstp dword ptr [edx + 0xc] */ W_F32((u32)(r_edx+0xcu), ST(0)); FPOP();
    /* 005c38b5: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 005c38b8: fldz  */ FPUSH(0.0);
    /* 005c38ba: fstp dword ptr [eax + 0x10] */ W_F32((u32)(r_eax+0x10u), ST(0)); FPOP();
    /* 005c38bd: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 005c38c0: fldz  */ FPUSH(0.0);
    /* 005c38c2: fstp dword ptr [ecx + 0x14] */ W_F32((u32)(r_ecx+0x14u), ST(0)); FPOP();
    /* 005c38c5: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 005c38c8: fldz  */ FPUSH(0.0);
    /* 005c38ca: fstp dword ptr [edx + 0x18] */ W_F32((u32)(r_edx+0x18u), ST(0)); FPOP();
    /* 005c38cd: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 005c38d0: mov dword ptr [eax + 0x1c], 1 */ W32((u32)(r_eax+0x1cu), 0x1u);
    /* 005c38d7: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 005c38da: mov dword ptr [ecx + 0x30], 0 */ W32((u32)(r_ecx+0x30u), 0x0u);
    /* 005c38e1: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 005c38e4: mov esp, ebp */ r_esp = r_ebp;
    /* 005c38e6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c38e7: ret  */ FN_RET(0x005c3870); r_esp += 4; return;
}

void f_005c38f0(void) /* sub_5C38F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c38f0);
    /* 005c38f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c38f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c38f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c38f5: push 0x6a8677 */ { u32 v = 0x6a8677u; r_esp -= 4; W32(r_esp, v); }
    /* 005c38fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005c3900: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c3901: sub esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c3904: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005c3909: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c390b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c390c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005c390f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005c3915: mov dword ptr [ebp - 0x78], ecx */ W32((u32)(r_ebp+0xffffff88u), r_ecx);
    /* 005c3918: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 005c391b: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c391e: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 005c3921: lea ecx, [ebp - 0x15] */ r_ecx = (u32)(r_ebp+0xffffffebu);
    /* 005c3924: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005c3927: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c3929: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 005c392c: call 0x5bef20 */ r_esp -= 4; W32(r_esp, 0x5c3931u); f_005bef20();
    /* 005c3931: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c3938: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005c393b: cmp edx, dword ptr [ebp - 0x78] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff88u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c393e: jne 0x5c3942 */ if (!fZ) goto L_005c3942;
L_005c3940:; BB(0x005c3940);
    /* 005c3940: jmp 0x5c3958 */ goto L_005c3958;
L_005c3942:; BB(0x005c3942);
    /* 005c3942: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 005c3945: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
    /* 005c394c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005c394f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c3950: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005c3953: call 0x5c3a20 */ r_esp -= 4; W32(r_esp, 0x5c3958u); f_005c3a20();
L_005c3958:; BB(0x005c3958);
    /* 005c3958: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005c395f: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 005c3962: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c3965: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005c396c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c396d: mov esp, ebp */ r_esp = r_ebp;
    /* 005c396f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c3970: ret 4 */ FN_RET(0x005c38f0); r_esp += 8; return;
}

void f_005c3980(void) /* sub_5C3980 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c3980);
    /* 005c3980: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c3981: mov ebp, esp */ r_ebp = r_esp;
    /* 005c3983: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c3985: push 0x6a869d */ { u32 v = 0x6a869du; r_esp -= 4; W32(r_esp, v); }
    /* 005c398a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005c3990: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c3991: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c3994: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005c3999: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c399b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c399c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005c399f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005c39a5: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 005c39a8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c39af: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c39b2: cmp dword ptr [eax + 0x30], 0 */ {  u32 a = R32((u32)(r_eax+0x30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c39b6: je 0x5c39e7 */ if (fZ) goto L_005c39e7;
L_005c39b8:; BB(0x005c39b8);
    /* 005c39b8: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c39bb: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 005c39be: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005c39c1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005c39c4: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005c39c7: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c39cb: je 0x5c39e0 */ if (fZ) goto L_005c39e0;
L_005c39cd:; BB(0x005c39cd);
    /* 005c39cd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c39cf: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c39d2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005c39d4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c39d7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c39d9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c39dbu); call_ind(t); }
    /* 005c39db: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005c39de: jmp 0x5c39e7 */ goto L_005c39e7;
L_005c39e0:; BB(0x005c39e0);
    /* 005c39e0: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_005c39e7:; BB(0x005c39e7);
    /* 005c39e7: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c39ea: mov dword ptr [ecx + 0x30], 0 */ W32((u32)(r_ecx+0x30u), 0x0u);
    /* 005c39f1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005c39f8: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c39fb: add edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c39fe: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 005c3a01: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005c3a04: call 0x5be450 */ r_esp -= 4; W32(r_esp, 0x5c3a09u); f_005be450();
    /* 005c3a09: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c3a0c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005c3a13: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c3a14: mov esp, ebp */ r_esp = r_ebp;
    /* 005c3a16: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c3a17: ret  */ FN_RET(0x005c3980); r_esp += 4; return;
}

void f_005c3a20(void) /* sub_5C3A20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c3a20);
    /* 005c3a20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c3a21: mov ebp, esp */ r_ebp = r_esp;
    /* 005c3a23: sub esp, 0x14c */ {  u32 a = r_esp; u32 b = 0x14cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c3a29: mov dword ptr [ebp - 0x148], ecx */ W32((u32)(r_ebp+0xfffffeb8u), r_ecx);
    /* 005c3a2f: mov eax, dword ptr [ebp - 0x148] */ r_eax = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005c3a35: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005c3a38: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005c3a3a: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 005c3a3c: mov eax, dword ptr [ebp - 0x148] */ r_eax = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005c3a42: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005c3a45: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005c3a48: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 005c3a4b: mov eax, dword ptr [ebp - 0x148] */ r_eax = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005c3a51: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005c3a54: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 005c3a57: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
    /* 005c3a5a: mov edx, dword ptr [ebp - 0x148] */ r_edx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005c3a60: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c3a63: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 005c3a66: fstp dword ptr [edx + 0xc] */ W_F32((u32)(r_edx+0xcu), ST(0)); FPOP();
    /* 005c3a69: mov ecx, dword ptr [ebp - 0x148] */ r_ecx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005c3a6f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005c3a72: fld dword ptr [edx + 0x10] */ FPUSH(R_F32((u32)(r_edx+0x10u)));
    /* 005c3a75: fstp dword ptr [ecx + 0x10] */ W_F32((u32)(r_ecx+0x10u), ST(0)); FPOP();
    /* 005c3a78: mov eax, dword ptr [ebp - 0x148] */ r_eax = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005c3a7e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005c3a81: fld dword ptr [ecx + 0x14] */ FPUSH(R_F32((u32)(r_ecx+0x14u)));
    /* 005c3a84: fstp dword ptr [eax + 0x14] */ W_F32((u32)(r_eax+0x14u), ST(0)); FPOP();
    /* 005c3a87: mov edx, dword ptr [ebp - 0x148] */ r_edx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005c3a8d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c3a90: fld dword ptr [eax + 0x18] */ FPUSH(R_F32((u32)(r_eax+0x18u)));
    /* 005c3a93: fstp dword ptr [edx + 0x18] */ W_F32((u32)(r_edx+0x18u), ST(0)); FPOP();
    /* 005c3a96: mov ecx, dword ptr [ebp - 0x148] */ r_ecx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005c3a9c: cmp dword ptr [ecx + 0x30], 0 */ {  u32 a = R32((u32)(r_ecx+0x30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c3aa0: je 0x5c3ada */ if (fZ) goto L_005c3ada;
L_005c3aa2:; BB(0x005c3aa2);
    /* 005c3aa2: mov edx, dword ptr [ebp - 0x148] */ r_edx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005c3aa8: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 005c3aab: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005c3aae: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c3ab1: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c3ab4: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c3ab8: je 0x5c3ad0 */ if (fZ) goto L_005c3ad0;
L_005c3aba:; BB(0x005c3aba);
    /* 005c3aba: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c3abc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c3abf: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c3ac1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c3ac4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c3ac6: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5c3ac8u); call_ind(t); }
    /* 005c3ac8: mov dword ptr [ebp - 0x14c], eax */ W32((u32)(r_ebp+0xfffffeb4u), r_eax);
    /* 005c3ace: jmp 0x5c3ada */ goto L_005c3ada;
L_005c3ad0:; BB(0x005c3ad0);
    /* 005c3ad0: mov dword ptr [ebp - 0x14c], 0 */ W32((u32)(r_ebp+0xfffffeb4u), 0x0u);
L_005c3ada:; BB(0x005c3ada);
    /* 005c3ada: mov eax, dword ptr [ebp - 0x148] */ r_eax = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005c3ae0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005c3ae3: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 005c3ae6: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
    /* 005c3ae9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c3aec: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c3aef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c3af0: mov ecx, dword ptr [ebp - 0x148] */ r_ecx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005c3af6: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c3af9: call 0x5c63d0 */ r_esp -= 4; W32(r_esp, 0x5c3afeu); f_005c63d0();
    /* 005c3afe: mov esp, ebp */ r_esp = r_ebp;
    /* 005c3b00: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c3b01: ret 4 */ FN_RET(0x005c3a20); r_esp += 8; return;
}

void f_005c3b10(void) /* sub_5C3B10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c3b10);
    /* 005c3b10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c3b11: mov ebp, esp */ r_ebp = r_esp;
    /* 005c3b13: sub esp, 0xd8 */ {  u32 a = r_esp; u32 b = 0xd8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c3b19: mov dword ptr [ebp - 0xb8], ecx */ W32((u32)(r_ebp+0xffffff48u), r_ecx);
    /* 005c3b1f: mov byte ptr [ebp - 5], 1 */ W8((u32)(r_ebp+0xfffffffbu), 0x1u);
    /* 005c3b23: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 005c3b28: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005c3b2b: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 005c3b31: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005c3b34: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005c3b36: mov ecx, eax */ r_ecx = r_eax;
    /* 005c3b38: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005c3b3b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c3b3du); call_ind(t); }
    /* 005c3b3d: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c3b43: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005c3b45: sub eax, dword ptr [edx + 0x68] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x68u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c3b48: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005c3b4b: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 005c3b51: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 005c3b54: fstp dword ptr [ebp - 0x6c] */ W_F32((u32)(r_ebp+0xffffff94u), ST(0)); FPOP();
    /* 005c3b57: lea ecx, [ebp - 0x60] */ r_ecx = (u32)(r_ebp+0xffffffa0u);
    /* 005c3b5a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c3b5b: fld dword ptr [ebp - 0x6c] */ FPUSH(R_F32((u32)(r_ebp+0xffffff94u)));
    /* 005c3b5e: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c3b61: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 005c3b64: call dword ptr [0x6b2290] */ { u32 t = R32((u32)(0x6b2290u)); r_esp -= 4; W32(r_esp, 0x5c3b6au); call_ind(t); }
    /* 005c3b6a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c3b6d: fstp qword ptr [ebp - 0x68] */ W_F64((u32)(r_ebp+0xffffff98u), ST(0)); FPOP();
    /* 005c3b70: fld qword ptr [ebp - 0x60] */ FPUSH(R_F64((u32)(r_ebp+0xffffffa0u)));
    /* 005c3b73: fstp dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0)); FPOP();
    /* 005c3b76: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c3b7c: fld dword ptr [edx + 0x14] */ FPUSH(R_F32((u32)(r_edx+0x14u)));
    /* 005c3b7f: fsub dword ptr [ebp + 8] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x8u));
    /* 005c3b82: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 005c3b88: fstp dword ptr [eax + 0x14] */ W_F32((u32)(r_eax+0x14u), ST(0)); FPOP();
    /* 005c3b8b: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c3b91: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 005c3b94: mov dword ptr [ebp - 0xbc], edx */ W32((u32)(r_ebp+0xffffff44u), r_edx);
    /* 005c3b9a: cmp dword ptr [ebp - 0xbc], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffff44u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005c3ba1: ja 0x5c3cab */ if ((!fC&&!fZ)) goto L_005c3cab;
L_005c3ba7:; BB(0x005c3ba7);
    /* 005c3ba7: mov eax, dword ptr [ebp - 0xbc] */ r_eax = R32((u32)(r_ebp+0xffffff44u));
    /* 005c3bad: jmp dword ptr [eax*4 + 0x5c42ac] */ { u32 t = R32((u32)(r_eax*4+0x5c42acu)); switch (t) { case 0x5c3c9eu: goto L_005c3c9e; case 0x5c3cabu: goto L_005c3cab; case 0x5c3bb4u: goto L_005c3bb4; case 0x5c3c3bu: goto L_005c3c3b; case 0x5c3c62u: goto L_005c3c62; default: UNSUP(0x005c3bad, "jump table entry is not a known target"); } }
L_005c3bb4:; BB(0x005c3bb4);
    /* 005c3bb4: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c3bba: fld dword ptr [ecx + 0x14] */ FPUSH(R_F32((u32)(r_ecx+0x14u)));
    /* 005c3bbd: fcomp qword ptr [0x6b2c50] */ fx_compare(ST(0), R_F64((u32)(0x6b2c50u))); FPOP();
    /* 005c3bc3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005c3bc5: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005c3bc8: jne 0x5c3bd3 */ if (!fZ) goto L_005c3bd3;
L_005c3bca:; BB(0x005c3bca);
    /* 005c3bca: mov byte ptr [ebp - 5], 0 */ W8((u32)(r_ebp+0xfffffffbu), 0x0u);
    /* 005c3bce: jmp 0x5c3cab */ goto L_005c3cab;
L_005c3bd3:; BB(0x005c3bd3);
    /* 005c3bd3: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c3bd9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c3bdb: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 005c3bde: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c3be4: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 005c3be7: fld dword ptr [ecx + 0x74] */ FPUSH(R_F32((u32)(r_ecx+0x74u)));
    /* 005c3bea: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 005c3bec: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005c3bee: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005c3bf1: jne 0x5c3c39 */ if (!fZ) goto L_005c3c39;
L_005c3bf3:; BB(0x005c3bf3);
    /* 005c3bf3: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 005c3bf9: mov dword ptr [eax + 0x1c], 3 */ W32((u32)(r_eax+0x1cu), 0x3u);
    /* 005c3c00: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c3c06: fldz  */ FPUSH(0.0);
    /* 005c3c08: fstp dword ptr [ecx + 0x10] */ W_F32((u32)(r_ecx+0x10u), ST(0)); FPOP();
    /* 005c3c0b: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c3c11: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c3c13: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 005c3c16: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c3c1c: fld dword ptr [ecx + 0x74] */ FPUSH(R_F32((u32)(r_ecx+0x74u)));
    /* 005c3c1f: fstp dword ptr [edx + 0xc] */ W_F32((u32)(r_edx+0xcu), ST(0)); FPOP();
    /* 005c3c22: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 005c3c28: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005c3c2a: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 005c3c2d: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 005c3c33: fld dword ptr [edx + 0x78] */ FPUSH(R_F32((u32)(r_edx+0x78u)));
    /* 005c3c36: fstp dword ptr [eax + 0x14] */ W_F32((u32)(r_eax+0x14u), ST(0)); FPOP();
L_005c3c39:; BB(0x005c3c39);
    /* 005c3c39: jmp 0x5c3cab */ goto L_005c3cab;
L_005c3c3b:; BB(0x005c3c3b);
    /* 005c3c3b: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c3c41: fld dword ptr [ecx + 0x14] */ FPUSH(R_F32((u32)(r_ecx+0x14u)));
    /* 005c3c44: fcomp qword ptr [0x6b2c50] */ fx_compare(ST(0), R_F64((u32)(0x6b2c50u))); FPOP();
    /* 005c3c4a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005c3c4c: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005c3c4f: jne 0x5c3c53 */ if (!fZ) goto L_005c3c53;
L_005c3c51:; BB(0x005c3c51);
    /* 005c3c51: jmp 0x5c3cab */ goto L_005c3cab;
L_005c3c53:; BB(0x005c3c53);
    /* 005c3c53: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c3c59: mov dword ptr [edx + 0x1c], 4 */ W32((u32)(r_edx+0x1cu), 0x4u);
    /* 005c3c60: jmp 0x5c3cab */ goto L_005c3cab;
L_005c3c62:; BB(0x005c3c62);
    /* 005c3c62: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 005c3c68: fld dword ptr [eax + 0x14] */ FPUSH(R_F32((u32)(r_eax+0x14u)));
    /* 005c3c6b: fcomp qword ptr [0x6b2c50] */ fx_compare(ST(0), R_F64((u32)(0x6b2c50u))); FPOP();
    /* 005c3c71: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005c3c73: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005c3c76: jne 0x5c3c9c */ if (!fZ) goto L_005c3c9c;
L_005c3c78:; BB(0x005c3c78);
    /* 005c3c78: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c3c7e: fld dword ptr [ecx + 0xc] */ FPUSH(R_F32((u32)(r_ecx+0xcu)));
    /* 005c3c81: fmul dword ptr [ebp + 8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x8u));
    /* 005c3c84: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c3c8a: fadd dword ptr [edx + 8] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x8u));
    /* 005c3c8d: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 005c3c93: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
    /* 005c3c96: mov byte ptr [ebp - 5], 0 */ W8((u32)(r_ebp+0xfffffffbu), 0x0u);
    /* 005c3c9a: jmp 0x5c3cab */ goto L_005c3cab;
L_005c3c9c:; BB(0x005c3c9c);
    /* 005c3c9c: jmp 0x5c3cab */ goto L_005c3cab;
L_005c3c9e:; BB(0x005c3c9e);
    /* 005c3c9e: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c3ca4: mov dword ptr [ecx + 0x1c], 1 */ W32((u32)(r_ecx+0x1cu), 0x1u);
L_005c3cab:; BB(0x005c3cab);
    /* 005c3cab: movzx edx, byte ptr [ebp - 5] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffffbu));
    /* 005c3caf: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c3cb1: je 0x5c3cef */ if (fZ) goto L_005c3cef;
L_005c3cb3:; BB(0x005c3cb3);
    /* 005c3cb3: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 005c3cb9: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 005c3cbc: fmul dword ptr [ebp + 8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x8u));
    /* 005c3cbf: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c3cc5: fadd dword ptr [ecx + 8] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x8u));
    /* 005c3cc8: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c3cce: fstp dword ptr [edx + 8] */ W_F32((u32)(r_edx+0x8u), ST(0)); FPOP();
    /* 005c3cd1: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 005c3cd7: fld dword ptr [eax + 0x10] */ FPUSH(R_F32((u32)(r_eax+0x10u)));
    /* 005c3cda: fmul dword ptr [ebp + 8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x8u));
    /* 005c3cdd: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c3ce3: fadd dword ptr [ecx + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0xcu));
    /* 005c3ce6: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c3cec: fstp dword ptr [edx + 0xc] */ W_F32((u32)(r_edx+0xcu), ST(0)); FPOP();
L_005c3cef:; BB(0x005c3cef);
    /* 005c3cef: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 005c3cf5: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005c3cf7: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005c3cfa: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005c3cfd: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c3d03: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005c3d06: imul edx, edx, 0x7c */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x7cu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c3d09: mov eax, dword ptr [eax + edx + 0x20] */ r_eax = R32((u32)(r_eax+r_edx+0x20u));
    /* 005c3d0d: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
L_005c3d10:; BB(0x005c3d10);
    /* 005c3d10: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c3d16: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 005c3d19: fcomp qword ptr [0x6b2c50] */ fx_compare(ST(0), R_F64((u32)(0x6b2c50u))); FPOP();
    /* 005c3d1f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005c3d21: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 005c3d24: jp 0x5c3d3d */ if (fP) goto L_005c3d3d;
L_005c3d26:; BB(0x005c3d26);
    /* 005c3d26: fild dword ptr [ebp - 0x1c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffe4u)));
    /* 005c3d29: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c3d2f: fadd dword ptr [edx + 8] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x8u));
    /* 005c3d32: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 005c3d38: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
    /* 005c3d3b: jmp 0x5c3d10 */ goto L_005c3d10;
L_005c3d3d:; BB(0x005c3d3d);
    /* 005c3d3d: fild dword ptr [ebp - 0x1c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffe4u)));
    /* 005c3d40: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c3d46: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 005c3d49: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 005c3d4b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005c3d4d: test ah, 1 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005c3d50: jne 0x5c3d69 */ if (!fZ) goto L_005c3d69;
L_005c3d52:; BB(0x005c3d52);
    /* 005c3d52: fild dword ptr [ebp - 0x1c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffe4u)));
    /* 005c3d55: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c3d5b: fsubr dword ptr [edx + 8] */ ST(0) = R_F32((u32)(r_edx+0x8u)) - ST(0);
    /* 005c3d5e: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 005c3d64: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
    /* 005c3d67: jmp 0x5c3d3d */ goto L_005c3d3d;
L_005c3d69:; BB(0x005c3d69);
    /* 005c3d69: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c3d6f: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 005c3d72: fstp dword ptr [ebp - 0x80] */ W_F32((u32)(r_ebp+0xffffff80u), ST(0)); FPOP();
    /* 005c3d75: lea edx, [ebp - 0x74] */ r_edx = (u32)(r_ebp+0xffffff8cu);
    /* 005c3d78: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c3d79: fld dword ptr [ebp - 0x80] */ FPUSH(R_F32((u32)(r_ebp+0xffffff80u)));
    /* 005c3d7c: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c3d7f: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 005c3d82: call dword ptr [0x6b2290] */ { u32 t = R32((u32)(0x6b2290u)); r_esp -= 4; W32(r_esp, 0x5c3d88u); call_ind(t); }
    /* 005c3d88: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c3d8b: fstp qword ptr [ebp - 0x7c] */ W_F64((u32)(r_ebp+0xffffff84u), ST(0)); FPOP();
    /* 005c3d8e: fld qword ptr [ebp - 0x74] */ FPUSH(R_F64((u32)(r_ebp+0xffffff8cu)));
    /* 005c3d91: fstp dword ptr [ebp - 0x10] */ W_F32((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 005c3d94: fld qword ptr [ebp - 0x7c] */ FPUSH(R_F64((u32)(r_ebp+0xffffff84u)));
    /* 005c3d97: fstp dword ptr [ebp - 0xc0] */ W_F32((u32)(r_ebp+0xffffff40u), ST(0)); FPOP();
    /* 005c3d9d: fld dword ptr [ebp - 0xc0] */ FPUSH(R_F32((u32)(r_ebp+0xffffff40u)));
    /* 005c3da3: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 005c3da6: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 005c3dac: cmp dword ptr [eax + 0x1c], 5 */ {  u32 a = R32((u32)(r_eax+0x1cu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c3db0: jne 0x5c3f3d */ if (!fZ) goto L_005c3f3d;
L_005c3db6:; BB(0x005c3db6);
    /* 005c3db6: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c3dbc: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005c3dbe: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 005c3dc1: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c3dc7: fld dword ptr [ecx + 0xc] */ FPUSH(R_F32((u32)(r_ecx+0xcu)));
    /* 005c3dca: fld dword ptr [eax + 0x80] */ FPUSH(R_F32((u32)(r_eax+0x80u)));
    /* 005c3dd0: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 005c3dd2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005c3dd4: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 005c3dd7: jnp 0x5c3df3 */ if (!fP) goto L_005c3df3;
L_005c3dd9:; BB(0x005c3dd9);
    /* 005c3dd9: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c3ddf: fld dword ptr [edx + 0x10] */ FPUSH(R_F32((u32)(r_edx+0x10u)));
    /* 005c3de2: fcomp qword ptr [0x6b2c50] */ fx_compare(ST(0), R_F64((u32)(0x6b2c50u))); FPOP();
    /* 005c3de8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005c3dea: test ah, 0x44 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x44u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 005c3ded: jp 0x5c3f3d */ if (fP) goto L_005c3f3d;
L_005c3df3:; BB(0x005c3df3);
    /* 005c3df3: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 005c3df9: fldz  */ FPUSH(0.0);
    /* 005c3dfb: fstp dword ptr [eax + 0x10] */ W_F32((u32)(r_eax+0x10u), ST(0)); FPOP();
    /* 005c3dfe: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c3e04: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005c3e06: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 005c3e09: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c3e0f: fld dword ptr [ecx + 0xc] */ FPUSH(R_F32((u32)(r_ecx+0xcu)));
    /* 005c3e12: fld dword ptr [eax + 0x84] */ FPUSH(R_F32((u32)(r_eax+0x84u)));
    /* 005c3e18: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 005c3e1a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005c3e1c: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 005c3e1f: jp 0x5c3e3b */ if (fP) goto L_005c3e3b;
L_005c3e21:; BB(0x005c3e21);
    /* 005c3e21: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c3e27: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c3e29: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 005c3e2c: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c3e32: fld dword ptr [ecx + 0x84] */ FPUSH(R_F32((u32)(r_ecx+0x84u)));
    /* 005c3e38: fstp dword ptr [edx + 0xc] */ W_F32((u32)(r_edx+0xcu), ST(0)); FPOP();
L_005c3e3b:; BB(0x005c3e3b);
    /* 005c3e3b: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 005c3e41: fld dword ptr [eax + 0x18] */ FPUSH(R_F32((u32)(r_eax+0x18u)));
    /* 005c3e44: fsub qword ptr [0x6b2c48] */ ST(0) = ST(0) - R_F64((u32)(0x6b2c48u));
    /* 005c3e4a: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x5c3e4fu); f_00686cc0();
    /* 005c3e4f: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005c3e52: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c3e56: jge 0x5c3e88 */ if ((fS==fO)) goto L_005c3e88;
L_005c3e58:; BB(0x005c3e58);
    /* 005c3e58: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c3e5e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005c3e60: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005c3e63: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005c3e66: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c3e6c: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005c3e6f: imul eax, eax, 0x7c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x7cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c3e72: mov ecx, dword ptr [ecx + eax + 0x20] */ r_ecx = R32((u32)(r_ecx+r_eax+0x20u));
    /* 005c3e76: mov dword ptr [ebp - 0x84], ecx */ W32((u32)(r_ebp+0xffffff7cu), r_ecx);
    /* 005c3e7c: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c3e7f: add edx, dword ptr [ebp - 0x84] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff7cu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c3e85: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
L_005c3e88:; BB(0x005c3e88);
    /* 005c3e88: fild dword ptr [ebp - 0x24] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffdcu)));
    /* 005c3e8b: fld dword ptr [ebp - 0x10] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff0u)));
    /* 005c3e8e: fucompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 005c3e90: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005c3e92: test ah, 0x44 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x44u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 005c3e95: jp 0x5c3f3d */ if (fP) goto L_005c3f3d;
L_005c3e9b:; BB(0x005c3e9b);
    /* 005c3e9b: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 005c3ea1: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c3ea7: fld dword ptr [ecx + 0x18] */ FPUSH(R_F32((u32)(r_ecx+0x18u)));
    /* 005c3eaa: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
    /* 005c3ead: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c3eb3: fldz  */ FPUSH(0.0);
    /* 005c3eb5: fstp dword ptr [edx + 0xc] */ W_F32((u32)(r_edx+0xcu), ST(0)); FPOP();
    /* 005c3eb8: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 005c3ebe: mov dword ptr [eax + 0x1c], 1 */ W32((u32)(r_eax+0x1cu), 0x1u);
    /* 005c3ec5: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c3ecb: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 005c3ece: fstp dword ptr [ebp - 0x98] */ W_F32((u32)(r_ebp+0xffffff68u), ST(0)); FPOP();
    /* 005c3ed4: lea edx, [ebp - 0x8c] */ r_edx = (u32)(r_ebp+0xffffff74u);
    /* 005c3eda: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c3edb: fld dword ptr [ebp - 0x98] */ FPUSH(R_F32((u32)(r_ebp+0xffffff68u)));
    /* 005c3ee1: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c3ee4: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 005c3ee7: call dword ptr [0x6b2290] */ { u32 t = R32((u32)(0x6b2290u)); r_esp -= 4; W32(r_esp, 0x5c3eedu); call_ind(t); }
    /* 005c3eed: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c3ef0: fstp qword ptr [ebp - 0x94] */ W_F64((u32)(r_ebp+0xffffff6cu), ST(0)); FPOP();
    /* 005c3ef6: fld qword ptr [ebp - 0x8c] */ FPUSH(R_F64((u32)(r_ebp+0xffffff74u)));
    /* 005c3efc: fstp dword ptr [ebp - 0x10] */ W_F32((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 005c3eff: fld qword ptr [ebp - 0x94] */ FPUSH(R_F64((u32)(r_ebp+0xffffff6cu)));
    /* 005c3f05: fstp dword ptr [ebp - 0xc4] */ W_F32((u32)(r_ebp+0xffffff3cu), ST(0)); FPOP();
    /* 005c3f0b: fld dword ptr [ebp - 0xc4] */ FPUSH(R_F32((u32)(r_ebp+0xffffff3cu)));
    /* 005c3f11: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 005c3f14: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c3f16: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 005c3f1c: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005c3f1e: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 005c3f21: add edx, 0x88 */ {  u32 a = r_edx; u32 b = 0x88u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c3f27: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c3f28: call 0x610e70 */ r_esp -= 4; W32(r_esp, 0x5c3f2du); f_00610e70();
    /* 005c3f2d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c3f30: push 0x759eb0 */ { u32 v = 0x759eb0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c3f35: call 0x610980 */ r_esp -= 4; W32(r_esp, 0x5c3f3au); f_00610980();
    /* 005c3f3a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005c3f3d:; BB(0x005c3f3d);
    /* 005c3f3d: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 005c3f43: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005c3f45: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005c3f48: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005c3f4b: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005c3f4e: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005c3f51: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c3f54: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c3f56: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005c3f57: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c3f59: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005c3f5b: mov dword ptr [ebp - 0xc8], eax */ W32((u32)(r_ebp+0xffffff38u), r_eax);
    /* 005c3f61: fild dword ptr [ebp - 0xc8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff38u)));
    /* 005c3f67: fadd dword ptr [ebp - 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffff0u));
    /* 005c3f6a: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x5c3f6fu); f_00686cc0();
    /* 005c3f6f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005c3f72: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 005c3f79: jmp 0x5c3f84 */ goto L_005c3f84;
L_005c3f7b:; BB(0x005c3f7b);
    /* 005c3f7b: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005c3f7e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c3f81: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
L_005c3f84:; BB(0x005c3f84);
    /* 005c3f84: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c3f87: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c3f8a: cmp dword ptr [ebp - 0x28], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c3f8d: jge 0x5c4282 */ if ((fS==fO)) goto L_005c4282;
L_005c3f93:; BB(0x005c3f93);
    /* 005c3f93: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 005c3f96: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c3f97: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005c3f9a: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c3f9d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c3f9e: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 005c3fa4: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005c3fa7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c3fa8: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c3fae: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 005c3fb0: call 0x5c3140 */ r_esp -= 4; W32(r_esp, 0x5c3fb5u); f_005c3140();
    /* 005c3fb5: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 005c3fbb: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c3fbe: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
    /* 005c3fc4: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 005c3fca: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c3fce: jne 0x5c3fdc */ if (!fZ) goto L_005c3fdc;
L_005c3fd0:; BB(0x005c3fd0);
    /* 005c3fd0: mov dword ptr [ebp - 0xcc], 0 */ W32((u32)(r_ebp+0xffffff34u), 0x0u);
    /* 005c3fda: jmp 0x5c3ff7 */ goto L_005c3ff7;
L_005c3fdc:; BB(0x005c3fdc);
    /* 005c3fdc: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 005c3fe2: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 005c3fe8: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005c3feb: sub ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005c3fee: sar ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005c3ff1: mov dword ptr [ebp - 0xcc], ecx */ W32((u32)(r_ebp+0xffffff34u), r_ecx);
L_005c3ff7:; BB(0x005c3ff7);
    /* 005c3ff7: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005c3ffa: cmp edx, dword ptr [ebp - 0xcc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff34u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c4000: jb 0x5c4008 */ if (fC) goto L_005c4008;
L_005c4002:; BB(0x005c4002);
    /* 005c4002: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5c4008u); call_ind(t); }
L_005c4008:; BB(0x005c4008);
    /* 005c4008: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 005c400e: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005c4011: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005c4014: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 005c4017: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005c401a: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c401e: je 0x5c403e */ if (fZ) goto L_005c403e;
L_005c4020:; BB(0x005c4020);
    /* 005c4020: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005c4023: call 0x5eafc0 */ r_esp -= 4; W32(r_esp, 0x5c4028u); f_005eafc0();
    /* 005c4028: cmp eax, dword ptr [ebp - 0x34] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c402b: jne 0x5c403e */ if (!fZ) goto L_005c403e;
L_005c402d:; BB(0x005c402d);
    /* 005c402d: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005c4030: call 0x5eb110 */ r_esp -= 4; W32(r_esp, 0x5c4035u); f_005eb110();
    /* 005c4035: cmp eax, dword ptr [ebp - 0x30] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffd0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4038: je 0x5c40fc */ if (fZ) goto L_005c40fc;
L_005c403e:; BB(0x005c403e);
    /* 005c403e: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4042: je 0x5c4076 */ if (fZ) goto L_005c4076;
L_005c4044:; BB(0x005c4044);
    /* 005c4044: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005c4047: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 005c404a: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005c404d: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 005c4050: cmp dword ptr [ebp - 0x54], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4054: je 0x5c406c */ if (fZ) goto L_005c406c;
L_005c4056:; BB(0x005c4056);
    /* 005c4056: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4058: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005c405b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c405d: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005c4060: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c4062: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c4064u); call_ind(t); }
    /* 005c4064: mov dword ptr [ebp - 0xd0], eax */ W32((u32)(r_ebp+0xffffff30u), r_eax);
    /* 005c406a: jmp 0x5c4076 */ goto L_005c4076;
L_005c406c:; BB(0x005c406c);
    /* 005c406c: mov dword ptr [ebp - 0xd0], 0 */ W32((u32)(r_ebp+0xffffff30u), 0x0u);
L_005c4076:; BB(0x005c4076);
    /* 005c4076: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005c4079: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c407c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c407d: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c4083: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005c4086: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c4087: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c408d: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 005c408f: call 0x5c31d0 */ r_esp -= 4; W32(r_esp, 0x5c4094u); f_005c31d0();
    /* 005c4094: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005c4097: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c409d: add edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c40a0: mov dword ptr [ebp - 0xa0], edx */ W32((u32)(r_ebp+0xffffff60u), r_edx);
    /* 005c40a6: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 005c40ac: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c40b0: jne 0x5c40be */ if (!fZ) goto L_005c40be;
L_005c40b2:; BB(0x005c40b2);
    /* 005c40b2: mov dword ptr [ebp - 0xd4], 0 */ W32((u32)(r_ebp+0xffffff2cu), 0x0u);
    /* 005c40bc: jmp 0x5c40d9 */ goto L_005c40d9;
L_005c40be:; BB(0x005c40be);
    /* 005c40be: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 005c40c4: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 005c40ca: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 005c40cd: sub eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c40d0: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005c40d3: mov dword ptr [ebp - 0xd4], eax */ W32((u32)(r_ebp+0xffffff2cu), r_eax);
L_005c40d9:; BB(0x005c40d9);
    /* 005c40d9: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005c40dc: cmp ecx, dword ptr [ebp - 0xd4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffff2cu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c40e2: jb 0x5c40ea */ if (fC) goto L_005c40ea;
L_005c40e4:; BB(0x005c40e4);
    /* 005c40e4: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5c40eau); call_ind(t); }
L_005c40ea:; BB(0x005c40ea);
    /* 005c40ea: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 005c40f0: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005c40f3: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005c40f6: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005c40f9: mov dword ptr [eax + ecx*4], edx */ W32((u32)(r_eax+r_ecx*4), r_edx);
L_005c40fc:; BB(0x005c40fc);
    /* 005c40fc: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 005c4103: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 005c4109: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005c410b: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c4111: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c4113: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005c4115: mov ecx, eax */ r_ecx = r_eax;
    /* 005c4117: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 005c411a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c411cu); call_ind(t); }
    /* 005c411c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005c411f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4121: je 0x5c4193 */ if (fZ) goto L_005c4193;
L_005c4123:; BB(0x005c4123);
    /* 005c4123: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005c4126: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c4129: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c412a: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 005c4130: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005c4133: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4134: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c413a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c413c: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005c413f: call 0x5c9960 */ r_esp -= 4; W32(r_esp, 0x5c4144u); f_005c9960();
    /* 005c4144: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005c4146: jle 0x5c4193 */ if ((fZ||fS!=fO)) goto L_005c4193;
L_005c4148:; BB(0x005c4148);
    /* 005c4148: mov dword ptr [ebp - 0x4c], 0xfa */ W32((u32)(r_ebp+0xffffffb4u), 0xfau);
    /* 005c414f: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 005c4156: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005c4159: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x5c415eu); f_005eb240();
    /* 005c415e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c4161: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 005c4164: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005c4167: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 005c416a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c416d: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005c416e: mov ecx, 0xfa */ r_ecx = 0xfau;
    /* 005c4173: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005c4173, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005c4173, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005c4175: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005c4178: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c417b: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005c417c: idiv dword ptr [ebp - 0x50] */ { i32 d = (i32)R32((u32)(r_ebp+0xffffffb0u)); if (!d) UNSUP(0x005c417c, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005c417c, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005c417f: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 005c4182: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c4185: cmp edx, dword ptr [ebp - 0x48] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffb8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c4188: jl 0x5c4193 */ if ((fS!=fO)) goto L_005c4193;
L_005c418a:; BB(0x005c418a);
    /* 005c418a: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 005c418d: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c4190: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
L_005c4193:; BB(0x005c4193);
    /* 005c4193: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005c4196: call 0x5eb220 */ r_esp -= 4; W32(r_esp, 0x5c419bu); f_005eb220();
    /* 005c419b: cmp dword ptr [ebp - 0x38], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c419e: je 0x5c41b4 */ if (fZ) goto L_005c41b4;
L_005c41a0:; BB(0x005c41a0);
    /* 005c41a0: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c41a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c41a4: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005c41a7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c41a9: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005c41ac: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 005c41b2: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5c41b4u); call_ind(t); }
L_005c41b4:; BB(0x005c41b4);
    /* 005c41b4: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 005c41ba: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 005c41bd: fstp dword ptr [ebp - 0xb4] */ W_F32((u32)(r_ebp+0xffffff4cu), ST(0)); FPOP();
    /* 005c41c3: lea ecx, [ebp - 0xa8] */ r_ecx = (u32)(r_ebp+0xffffff58u);
    /* 005c41c9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c41ca: fld dword ptr [ebp - 0xb4] */ FPUSH(R_F32((u32)(r_ebp+0xffffff4cu)));
    /* 005c41d0: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c41d3: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 005c41d6: call dword ptr [0x6b2290] */ { u32 t = R32((u32)(0x6b2290u)); r_esp -= 4; W32(r_esp, 0x5c41dcu); call_ind(t); }
    /* 005c41dc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c41df: fstp qword ptr [ebp - 0xb0] */ W_F64((u32)(r_ebp+0xffffff50u), ST(0)); FPOP();
    /* 005c41e5: fld qword ptr [ebp - 0xa8] */ FPUSH(R_F64((u32)(r_ebp+0xffffff58u)));
    /* 005c41eb: fstp dword ptr [ebp - 0x3c] */ W_F32((u32)(r_ebp+0xffffffc4u), ST(0)); FPOP();
    /* 005c41ee: fld qword ptr [ebp - 0xb0] */ FPUSH(R_F64((u32)(r_ebp+0xffffff50u)));
    /* 005c41f4: fstp dword ptr [ebp - 0xd8] */ W_F32((u32)(r_ebp+0xffffff28u), ST(0)); FPOP();
    /* 005c41fa: fld dword ptr [ebp - 0xd8] */ FPUSH(R_F32((u32)(r_ebp+0xffffff28u)));
    /* 005c4200: fchs  */ ST(0) = -ST(0);
    /* 005c4202: fiadd dword ptr [ebp - 0x28] */ ST(0) = ST(0) + (long double)(i32)R32((u32)(r_ebp+0xffffffd8u));
    /* 005c4205: fstp dword ptr [ebp - 0x3c] */ W_F32((u32)(r_ebp+0xffffffc4u), ST(0)); FPOP();
    /* 005c4208: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c420e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c4210: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 005c4213: fild dword ptr [ecx + 0x58] */ FPUSH((long double)(i32)R32((u32)(r_ecx+0x58u)));
    /* 005c4216: fmul dword ptr [ebp - 0x3c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffc4u));
    /* 005c4219: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c421f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c4221: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 005c4224: fiadd dword ptr [ecx + 0x50] */ ST(0) = ST(0) + (long double)(i32)R32((u32)(r_ecx+0x50u));
    /* 005c4227: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c422d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c422f: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 005c4232: fiadd dword ptr [ecx + 0x60] */ ST(0) = ST(0) + (long double)(i32)R32((u32)(r_ecx+0x60u));
    /* 005c4235: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x5c423au); f_00686cc0();
    /* 005c423a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c423b: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c4241: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c4243: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 005c4246: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c424c: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005c424f: imul eax, dword ptr [ecx + 0x54] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ecx+0x54u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c4253: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c4259: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005c425b: mov ecx, dword ptr [edx + 0x50] */ r_ecx = R32((u32)(r_edx+0x50u));
    /* 005c425e: add eax, dword ptr [ecx + 0x4c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x4cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c4261: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c4267: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 005c4269: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 005c426c: add eax, dword ptr [edx + 0x5c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x5cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c426f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c4270: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005c4273: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c4275: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005c4278: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005c427b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c427du); call_ind(t); }
    /* 005c427d: jmp 0x5c3f7b */ goto L_005c3f7b;
L_005c4282:; BB(0x005c4282);
    /* 005c4282: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c4288: fld dword ptr [ecx + 0x14] */ FPUSH(R_F32((u32)(r_ecx+0x14u)));
    /* 005c428b: fcomp qword ptr [0x6b2c50] */ fx_compare(ST(0), R_F64((u32)(0x6b2c50u))); FPOP();
    /* 005c4291: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005c4293: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 005c4296: jp 0x5c42a3 */ if (fP) goto L_005c42a3;
L_005c4298:; BB(0x005c4298);
    /* 005c4298: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c429e: fldz  */ FPUSH(0.0);
    /* 005c42a0: fstp dword ptr [edx + 0x14] */ W_F32((u32)(r_edx+0x14u), ST(0)); FPOP();
L_005c42a3:; BB(0x005c42a3);
    /* 005c42a3: mov esp, ebp */ r_esp = r_ebp;
    /* 005c42a5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c42a6: ret 4 */ FN_RET(0x005c3b10); r_esp += 8; return;
}

