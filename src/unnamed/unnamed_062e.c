#include "protos.h"

void f_0062e0a0(void) /* sub_62E0A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062e0a0);
    /* 0062e0a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062e0a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0062e0a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062e0a4: cmp dword ptr [0x76208c], 0 */ {  u32 a = R32((u32)(0x76208cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e0ab: jne 0x62e0dd */ if (!fZ) goto L_0062e0dd;
L_0062e0ad:; BB(0x0062e0ad);
    /* 0062e0ad: mov eax, dword ptr [0x762088] */ r_eax = R32((u32)(0x762088u));
    /* 0062e0b2: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0062e0b4: imul ecx, ecx, 0x41c64e6d */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x41c64e6du; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0062e0ba: add ecx, 0x3039 */ {  u32 a = r_ecx; u32 b = 0x3039u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062e0c0: and ecx, 0x7fffffff */ {  u32 a = r_ecx; u32 b = 0x7fffffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0062e0c6: mov edx, dword ptr [0x762088] */ r_edx = R32((u32)(0x762088u));
    /* 0062e0cc: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 0062e0ce: mov eax, dword ptr [0x762088] */ r_eax = R32((u32)(0x762088u));
    /* 0062e0d3: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0062e0d5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0062e0d8: jmp 0x62e167 */ goto L_0062e167;
L_0062e0dd:; BB(0x0062e0dd);
    /* 0062e0dd: mov edx, dword ptr [0x762080] */ r_edx = R32((u32)(0x762080u));
    /* 0062e0e3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0062e0e5: mov ecx, dword ptr [0x762084] */ r_ecx = R32((u32)(0x762084u));
    /* 0062e0eb: add eax, dword ptr [ecx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062e0ed: mov edx, dword ptr [0x762080] */ r_edx = R32((u32)(0x762080u));
    /* 0062e0f3: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0062e0f5: mov eax, dword ptr [0x762080] */ r_eax = R32((u32)(0x762080u));
    /* 0062e0fa: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0062e0fc: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0062e0fe: and ecx, 0x7fffffff */ {  u32 a = r_ecx; u32 b = 0x7fffffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0062e104: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0062e107: mov edx, dword ptr [0x762080] */ r_edx = R32((u32)(0x762080u));
    /* 0062e10d: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062e110: mov dword ptr [0x762080], edx */ W32((u32)(0x762080u), r_edx);
    /* 0062e116: mov eax, dword ptr [0x762080] */ r_eax = R32((u32)(0x762080u));
    /* 0062e11b: cmp eax, dword ptr [0x762098] */ {  u32 a = r_eax; u32 b = R32((u32)(0x762098u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0062e121: jb 0x62e140 */ if (fC) goto L_0062e140;
L_0062e123:; BB(0x0062e123);
    /* 0062e123: mov ecx, dword ptr [0x762088] */ r_ecx = R32((u32)(0x762088u));
    /* 0062e129: mov dword ptr [0x762080], ecx */ W32((u32)(0x762080u), r_ecx);
    /* 0062e12f: mov edx, dword ptr [0x762084] */ r_edx = R32((u32)(0x762084u));
    /* 0062e135: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062e138: mov dword ptr [0x762084], edx */ W32((u32)(0x762084u), r_edx);
    /* 0062e13e: jmp 0x62e167 */ goto L_0062e167;
L_0062e140:; BB(0x0062e140);
    /* 0062e140: mov eax, dword ptr [0x762084] */ r_eax = R32((u32)(0x762084u));
    /* 0062e145: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062e148: mov dword ptr [0x762084], eax */ W32((u32)(0x762084u), r_eax);
    /* 0062e14d: mov ecx, dword ptr [0x762084] */ r_ecx = R32((u32)(0x762084u));
    /* 0062e153: cmp ecx, dword ptr [0x762098] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x762098u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0062e159: jb 0x62e167 */ if (fC) goto L_0062e167;
L_0062e15b:; BB(0x0062e15b);
    /* 0062e15b: mov edx, dword ptr [0x762088] */ r_edx = R32((u32)(0x762088u));
    /* 0062e161: mov dword ptr [0x762084], edx */ W32((u32)(0x762084u), r_edx);
L_0062e167:; BB(0x0062e167);
    /* 0062e167: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062e16a: mov esp, ebp */ r_esp = r_ebp;
    /* 0062e16c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062e16d: ret  */ FN_RET(0x0062e0a0); r_esp += 4; return;
}

void f_0062e340(void) /* sub_62E340 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062e340);
    /* 0062e340: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062e341: mov ebp, esp */ r_ebp = r_esp;
    /* 0062e343: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062e344: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0062e347: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062e34a: mov eax, dword ptr [eax + 0x40c] */ r_eax = R32((u32)(r_eax+0x40cu));
    /* 0062e350: mov esp, ebp */ r_esp = r_ebp;
    /* 0062e352: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062e353: ret  */ FN_RET(0x0062e340); r_esp += 4; return;
}

void f_0062e360(void) /* sub_62E360 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062e360);
    /* 0062e360: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062e361: mov ebp, esp */ r_ebp = r_esp;
    /* 0062e363: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062e364: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0062e367: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062e36a: mov eax, dword ptr [eax + 0x410] */ r_eax = R32((u32)(r_eax+0x410u));
    /* 0062e370: mov esp, ebp */ r_esp = r_ebp;
    /* 0062e372: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062e373: ret  */ FN_RET(0x0062e360); r_esp += 4; return;
}

void f_0062e380(void) /* sub_62E380 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062e380);
    /* 0062e380: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062e381: mov ebp, esp */ r_ebp = r_esp;
    /* 0062e383: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062e384: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0062e387:; BB(0x0062e387);
    /* 0062e387: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062e38a: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0062e38d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0062e38f: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0062e391: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062e394: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062e397: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 0062e39a: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0062e39d: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062e3a0: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 0062e3a3: mov dx, word ptr [ebp + 0x10] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0x10u))) & 0xffffu);
    /* 0062e3a7: sub dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0062e3ab: mov word ptr [ebp + 0x10], dx */ W16((u32)(r_ebp+0x10u), (u16)r_edx);
    /* 0062e3af: movzx eax, word ptr [ebp + 0x10] */ r_eax = (u32)R16((u32)(r_ebp+0x10u));
    /* 0062e3b3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e3b5: jne 0x62e387 */ if (!fZ) goto L_0062e387;
L_0062e3b7:; BB(0x0062e3b7);
    /* 0062e3b7: mov esp, ebp */ r_esp = r_ebp;
    /* 0062e3b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062e3ba: ret 0xc */ FN_RET(0x0062e380); r_esp += 16; return;
}

void f_0062e3c0(void) /* sub_62E3C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062e3c0);
    /* 0062e3c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062e3c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0062e3c3: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062e3c6: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 0062e3c9: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0062e3cc: cmp dword ptr [eax + 0x408], 0 */ {  u32 a = R32((u32)(r_eax+0x408u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e3d3: jne 0x62e3da */ if (!fZ) goto L_0062e3da;
L_0062e3d5:; BB(0x0062e3d5);
    /* 0062e3d5: jmp 0x62e4a0 */ goto L_0062e4a0;
L_0062e3da:; BB(0x0062e3da);
    /* 0062e3da: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0062e3dd: call 0x62e360 */ r_esp -= 4; W32(r_esp, 0x62e3e2u); f_0062e360();
    /* 0062e3e2: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0062e3e5: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0062e3e8: call 0x62e340 */ r_esp -= 4; W32(r_esp, 0x62e3edu); f_0062e340();
    /* 0062e3ed: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0062e3f0: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 0062e3f7: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 0062e3fe: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062e401: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0062e404: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0062e407: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0062e40a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0062e40d: call 0x623910 */ r_esp -= 4; W32(r_esp, 0x62e412u); f_00623910();
    /* 0062e412: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0062e415: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0062e418: call 0x6238f0 */ r_esp -= 4; W32(r_esp, 0x62e41du); f_006238f0();
    /* 0062e41d: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0062e420: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0062e427: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0062e42e: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0062e431: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0062e434: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0062e437: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0062e43a: lea edx, [ebp - 0x20] */ r_edx = (u32)(r_ebp+0xffffffe0u);
    /* 0062e43d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062e43e: lea eax, [ebp + 0x1c] */ r_eax = (u32)(r_ebp+0x1cu);
    /* 0062e441: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062e442: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0062e445: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062e446: lea edx, [ebp + 0xc] */ r_edx = (u32)(r_ebp+0xcu);
    /* 0062e449: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062e44a: call 0x624a70 */ r_esp -= 4; W32(r_esp, 0x62e44fu); f_00624a70();
    /* 0062e44f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062e452: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0062e455: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e457: je 0x62e4a0 */ if (fZ) goto L_0062e4a0;
L_0062e459:; BB(0x0062e459);
    /* 0062e459: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0062e45c: mov dx, word ptr [ecx + 0x414] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+0x414u))) & 0xffffu);
    /* 0062e463: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062e464: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0062e467: call 0x6238b0 */ r_esp -= 4; W32(r_esp, 0x62e46cu); f_006238b0();
    /* 0062e46c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062e46d: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 0062e470: sub eax, dword ptr [ebp + 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x20u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0062e473: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062e474: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 0062e477: sub ecx, dword ptr [ebp + 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x1cu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0062e47a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062e47b: mov dx, word ptr [ebp + 0x20] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0x20u))) & 0xffffu);
    /* 0062e47f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062e480: mov ax, word ptr [ebp + 0x1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0x1cu))) & 0xffffu);
    /* 0062e484: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062e485: mov cx, word ptr [ebp + 0x10] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0x10u))) & 0xffffu);
    /* 0062e489: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062e48a: mov dx, word ptr [ebp + 0xc] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 0062e48e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062e48f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062e492: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062e493: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0062e496: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0062e498: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0062e49b: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0062e49e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x62e4a0u); call_ind(t); }
L_0062e4a0:; BB(0x0062e4a0);
    /* 0062e4a0: mov esp, ebp */ r_esp = r_ebp;
    /* 0062e4a2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062e4a3: ret 0x24 */ FN_RET(0x0062e3c0); r_esp += 40; return;
}

void f_0062e6f0(void) /* sub_62E6F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062e6f0);
    /* 0062e6f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062e6f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0062e6f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062e6f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0062e6f7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062e6fa: mov eax, dword ptr [eax + 0x414] */ r_eax = R32((u32)(r_eax+0x414u));
    /* 0062e700: mov esp, ebp */ r_esp = r_ebp;
    /* 0062e702: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062e703: ret  */ FN_RET(0x0062e6f0); r_esp += 4; return;
}

void f_0062ee80(void) /* sub_62EE80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062ee80);
    /* 0062ee80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062ee81: mov ebp, esp */ r_ebp = r_esp;
    /* 0062ee83: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062ee86: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0062ee89: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062ee8c: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0062ee8f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062ee90: call dword ptr [0x6b2190] */ { u32 t = R32((u32)(0x6b2190u)); r_esp -= 4; W32(r_esp, 0x62ee96u); call_ind(t); }
    /* 0062ee96: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062ee99: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0062ee9c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062ee9f: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 0062eea2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062eea3: call dword ptr [0x6b2194] */ { u32 t = R32((u32)(0x6b2194u)); r_esp -= 4; W32(r_esp, 0x62eea9u); call_ind(t); }
    /* 0062eea9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062eeac: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062eeaf: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 0062eeb2: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062eeb5: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 0062eeb8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062eebb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062eebe: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 0062eec1: cmp dword ptr [ebp - 4], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062eec5: jne 0x62eee0 */ if (!fZ) goto L_0062eee0;
L_0062eec7:; BB(0x0062eec7);
    /* 0062eec7: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062eeca: mov dword ptr [edx + 0x34], 0 */ W32((u32)(r_edx+0x34u), 0x0u);
    /* 0062eed1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062eed4: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0062eed7: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062eeda: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062eedd: mov dword ptr [edx + 0x30], ecx */ W32((u32)(r_edx+0x30u), r_ecx);
L_0062eee0:; BB(0x0062eee0);
    /* 0062eee0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062eee3: mov esp, ebp */ r_esp = r_ebp;
    /* 0062eee5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062eee6: ret  */ FN_RET(0x0062ee80); r_esp += 4; return;
}

void f_0062efe0(void) /* sub_62EFE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062efe0);
    /* 0062efe0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062efe1: mov ebp, esp */ r_ebp = r_esp;
    /* 0062efe3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062efe6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0062efe9:; BB(0x0062efe9);
    /* 0062efe9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062efec: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0062efef: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 0062eff2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062eff4: je 0x62f013 */ if (fZ) goto L_0062f013;
L_0062eff6:; BB(0x0062eff6);
    /* 0062eff6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062eff9: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0062effc: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062efff: add ecx, dword ptr [edx + 0x28] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x28u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062f002: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062f005: cmp dword ptr [eax + 0x24], ecx */ {  u32 a = R32((u32)(r_eax+0x24u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0062f008: jae 0x62f013 */ if (!fC) goto L_0062f013;
L_0062f00a:; BB(0x0062f00a);
    /* 0062f00a: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0062f011: jmp 0x62f01a */ goto L_0062f01a;
L_0062f013:; BB(0x0062f013);
    /* 0062f013: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
L_0062f01a:; BB(0x0062f01a);
    /* 0062f01a: movzx ecx, byte ptr [ebp - 0xc] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffff4u));
    /* 0062f01e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f020: je 0x62f026 */ if (fZ) goto L_0062f026;
L_0062f022:; BB(0x0062f022);
    /* 0062f022: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062f024: jmp 0x62f086 */ goto L_0062f086;
L_0062f026:; BB(0x0062f026);
    /* 0062f026: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062f029: call 0x62ee80 */ r_esp -= 4; W32(r_esp, 0x62f02eu); f_0062ee80();
    /* 0062f02e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0062f031: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062f034: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0062f036: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062f039: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 0062f03c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x62f03eu); call_ind(t); }
    /* 0062f03e: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f041: jne 0x62f05c */ if (!fZ) goto L_0062f05c;
L_0062f043:; BB(0x0062f043);
    /* 0062f043: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062f046: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0062f049: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062f04c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062f04f: mov dword ptr [edx + 0x30], ecx */ W32((u32)(r_edx+0x30u), r_ecx);
    /* 0062f052: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062f055: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
L_0062f05c:; BB(0x0062f05c);
    /* 0062f05c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062f05f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062f060: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062f063: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0062f065: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062f068: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0062f06b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x62f06du); call_ind(t); }
    /* 0062f06d: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0062f070: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f072: jne 0x62efe9 */ if (!fZ) goto L_0062efe9;
L_0062f078:; BB(0x0062f078);
    /* 0062f078: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062f07b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062f07c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062f07f: call 0x62eef0 */ r_esp -= 4; W32(r_esp, 0x62f084u); f_0062eef0();
    /* 0062f084: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0062f086:; BB(0x0062f086);
    /* 0062f086: mov esp, ebp */ r_esp = r_ebp;
    /* 0062f088: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062f089: ret  */ FN_RET(0x0062efe0); r_esp += 4; return;
}

