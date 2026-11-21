#include "protos.h"

void f_0060c0f0(void) /* sub_60C0F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060c0f0);
    /* 0060c0f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060c0f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0060c0f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060c0f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0060c0f7: cmp dword ptr [ebp + 8], 0x800 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x800u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060c0fe: jl 0x60c107 */ if ((fS!=fO)) goto L_0060c107;
L_0060c100:; BB(0x0060c100);
    /* 0060c100: mov dword ptr [ebp + 8], 0x800 */ W32((u32)(r_ebp+0x8u), 0x800u);
L_0060c107:; BB(0x0060c107);
    /* 0060c107: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060c10a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0060c10d: mov dword ptr [eax + 0x1d4], ecx */ W32((u32)(r_eax+0x1d4u), r_ecx);
    /* 0060c113: mov esp, ebp */ r_esp = r_ebp;
    /* 0060c115: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060c116: ret 4 */ FN_RET(0x0060c0f0); r_esp += 8; return;
}

void f_0060c120(void) /* sub_60C120 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060c120);
    /* 0060c120: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060c121: mov ebp, esp */ r_ebp = r_esp;
    /* 0060c123: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060c124: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0060c127: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060c12a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0060c12d: mov dword ptr [eax + 0x1d8], ecx */ W32((u32)(r_eax+0x1d8u), r_ecx);
    /* 0060c133: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0060c135: mov esp, ebp */ r_esp = r_ebp;
    /* 0060c137: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060c138: ret 4 */ FN_RET(0x0060c120); r_esp += 8; return;
}

void f_0060c300(void) /* sub_60C300 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060c300);
    /* 0060c300: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060c301: mov ebp, esp */ r_ebp = r_esp;
    /* 0060c303: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060c304: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0060c307: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060c30a: movzx ecx, byte ptr [eax + 0x1d0] */ r_ecx = (u32)R8((u32)(r_eax+0x1d0u));
    /* 0060c311: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060c313: jne 0x60c32c */ if (!fZ) goto L_0060c32c;
L_0060c315:; BB(0x0060c315);
    /* 0060c315: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060c318: mov byte ptr [edx + 0x1d0], 1 */ W8((u32)(r_edx+0x1d0u), 0x1u);
    /* 0060c31f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060c322: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0060c324: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060c327: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0060c32a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x60c32cu); call_ind(t); }
L_0060c32c:; BB(0x0060c32c);
    /* 0060c32c: mov esp, ebp */ r_esp = r_ebp;
    /* 0060c32e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060c32f: ret  */ FN_RET(0x0060c300); r_esp += 4; return;
}

void f_0060c330(void) /* sub_60C330 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060c330);
    /* 0060c330: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060c331: mov ebp, esp */ r_ebp = r_esp;
    /* 0060c333: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060c334: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0060c337: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060c33a: movzx ecx, byte ptr [eax + 0x1d0] */ r_ecx = (u32)R8((u32)(r_eax+0x1d0u));
    /* 0060c341: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060c343: je 0x60c36c */ if (fZ) goto L_0060c36c;
L_0060c345:; BB(0x0060c345);
    /* 0060c345: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060c348: mov byte ptr [edx + 0x1d0], 0 */ W8((u32)(r_edx+0x1d0u), 0x0u);
    /* 0060c34f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060c352: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0060c354: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060c357: mov eax, dword ptr [edx + 0xac] */ r_eax = R32((u32)(r_edx+0xacu));
    /* 0060c35d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x60c35fu); call_ind(t); }
    /* 0060c35f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060c362: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0060c364: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060c367: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0060c36a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x60c36cu); call_ind(t); }
L_0060c36c:; BB(0x0060c36c);
    /* 0060c36c: mov esp, ebp */ r_esp = r_ebp;
    /* 0060c36e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060c36f: ret  */ FN_RET(0x0060c330); r_esp += 4; return;
}

void f_0060c370(void) /* sub_60C370 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060c370);
    /* 0060c370: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060c371: mov ebp, esp */ r_ebp = r_esp;
    /* 0060c373: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060c374: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0060c377: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060c37a: mov al, byte ptr [eax + 0x1d0] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x1d0u))) & 0xffu);
    /* 0060c380: mov esp, ebp */ r_esp = r_ebp;
    /* 0060c382: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060c383: ret  */ FN_RET(0x0060c370); r_esp += 4; return;
}

void f_0060c3d0(void) /* sub_60C3D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060c3d0);
    /* 0060c3d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060c3d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0060c3d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060c3d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0060c3d7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060c3da: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 0060c3dd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060c3de: call 0x62dbb0 */ r_esp -= 4; W32(r_esp, 0x60c3e3u); f_0062dbb0();
    /* 0060c3e3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060c3e6: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0060c3e9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060c3eb: je 0x60c40a */ if (fZ) goto L_0060c40a;
L_0060c3ed:; BB(0x0060c3ed);
    /* 0060c3ed: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060c3f0: mov dword ptr [eax + 0xa0], 0 */ W32((u32)(r_eax+0xa0u), 0x0u);
    /* 0060c3fa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060c3fd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0060c3ff: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060c402: mov eax, dword ptr [edx + 0xac] */ r_eax = R32((u32)(r_edx+0xacu));
    /* 0060c408: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x60c40au); call_ind(t); }
L_0060c40a:; BB(0x0060c40a);
    /* 0060c40a: mov esp, ebp */ r_esp = r_ebp;
    /* 0060c40c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060c40d: ret  */ FN_RET(0x0060c3d0); r_esp += 4; return;
}

void f_0060c500(void) /* sub_60C500 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060c500);
    /* 0060c500: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060c501: mov ebp, esp */ r_ebp = r_esp;
    /* 0060c503: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060c504: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0060c507: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 0060c50b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060c50d: jne 0x60c528 */ if (!fZ) goto L_0060c528;
L_0060c50f:; BB(0x0060c50f);
    /* 0060c50f: movzx ecx, byte ptr [ebp + 9] */ r_ecx = (u32)R8((u32)(r_ebp+0x9u));
    /* 0060c513: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060c515: jne 0x60c528 */ if (!fZ) goto L_0060c528;
L_0060c517:; BB(0x0060c517);
    /* 0060c517: movzx edx, byte ptr [ebp + 0xa] */ r_edx = (u32)R8((u32)(r_ebp+0xau));
    /* 0060c51b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060c51d: jne 0x60c528 */ if (!fZ) goto L_0060c528;
L_0060c51f:; BB(0x0060c51f);
    /* 0060c51f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060c522: mov byte ptr [eax + 0x48], 0 */ W8((u32)(r_eax+0x48u), 0x0u);
    /* 0060c526: jmp 0x60c52f */ goto L_0060c52f;
L_0060c528:; BB(0x0060c528);
    /* 0060c528: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060c52b: mov byte ptr [ecx + 0x48], 1 */ W8((u32)(r_ecx+0x48u), 0x1u);
L_0060c52f:; BB(0x0060c52f);
    /* 0060c52f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060c532: add edx, 0x1f8 */ {  u32 a = r_edx; u32 b = 0x1f8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0060c538: mov ax, word ptr [ebp + 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 0060c53c: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 0060c53f: mov cl, byte ptr [ebp + 0xa] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xau))) & 0xffu);
    /* 0060c542: mov byte ptr [edx + 2], cl */ W8((u32)(r_edx+0x2u), (u8)r_ecx);
    /* 0060c545: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060c548: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0060c54a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060c54d: mov edx, dword ptr [eax + 0xac] */ r_edx = R32((u32)(r_eax+0xacu));
    /* 0060c553: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x60c555u); call_ind(t); }
    /* 0060c555: mov esp, ebp */ r_esp = r_ebp;
    /* 0060c557: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060c558: ret 4 */ FN_RET(0x0060c500); r_esp += 8; return;
}

void f_0060c560(void) /* sub_60C560 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060c560);
    /* 0060c560: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060c561: mov ebp, esp */ r_ebp = r_esp;
    /* 0060c563: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060c566: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0060c569: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060c56c: cmp dword ptr [eax + 0x1e0], 0 */ {  u32 a = R32((u32)(r_eax+0x1e0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060c573: je 0x60c5b4 */ if (fZ) goto L_0060c5b4;
L_0060c575:; BB(0x0060c575);
    /* 0060c575: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060c578: mov edx, dword ptr [ecx + 0x1e0] */ r_edx = R32((u32)(r_ecx+0x1e0u));
    /* 0060c57e: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0060c581: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060c584: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0060c587: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060c58b: je 0x60c5a0 */ if (fZ) goto L_0060c5a0;
L_0060c58d:; BB(0x0060c58d);
    /* 0060c58d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060c58f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060c592: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0060c594: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060c597: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0060c599: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x60c59bu); call_ind(t); }
    /* 0060c59b: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0060c59e: jmp 0x60c5a7 */ goto L_0060c5a7;
L_0060c5a0:; BB(0x0060c5a0);
    /* 0060c5a0: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_0060c5a7:; BB(0x0060c5a7);
    /* 0060c5a7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060c5aa: mov dword ptr [ecx + 0x1e0], 0 */ W32((u32)(r_ecx+0x1e0u), 0x0u);
L_0060c5b4:; BB(0x0060c5b4);
    /* 0060c5b4: mov esp, ebp */ r_esp = r_ebp;
    /* 0060c5b6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060c5b7: ret  */ FN_RET(0x0060c560); r_esp += 4; return;
}

void f_0060c720(void) /* sub_60C720 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060c720);
    /* 0060c720: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060c721: mov ebp, esp */ r_ebp = r_esp;
    /* 0060c723: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060c726: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0060c729: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060c72c: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0060c72f: shl ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0060c731: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060c734: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 0060c737: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0060c739: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060c73c: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0060c73f: mov edx, 4 */ r_edx = 0x4u;
    /* 0060c744: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 0060c746: seto cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fO) ? 1 : 0) & 0xffu);
    /* 0060c749: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0060c74b: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0060c74d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060c74e: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x60c753u); f_00686d82();
    /* 0060c753: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060c756: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0060c759: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060c75c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0060c75f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060c762: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0060c765: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0060c768: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060c769: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060c76c: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0060c76f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060c770: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060c773: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060c774: call dword ptr [0x6b22d8] */ { u32 t = R32((u32)(0x6b22d8u)); r_esp -= 4; W32(r_esp, 0x60c77au); call_ind(t); }
    /* 0060c77a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060c77d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060c780: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060c783: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0060c786: sub edx, dword ptr [ecx + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0060c789: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0060c78c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060c78d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060c78f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060c792: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0060c795: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060c798: lea eax, [edx + ecx*4] */ r_eax = (u32)(r_edx+r_ecx*4);
    /* 0060c79b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060c79c: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x60c7a1u); f_00686fa2();
    /* 0060c7a1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060c7a4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060c7a7: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 0060c7aa: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0060c7ad: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060c7b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060c7b1: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x60c7b6u); f_00686cae();
    /* 0060c7b6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060c7b9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060c7bc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060c7bf: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 0060c7c2: mov esp, ebp */ r_esp = r_ebp;
    /* 0060c7c4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060c7c5: ret  */ FN_RET(0x0060c720); r_esp += 4; return;
}

void f_0060c7d0(void) /* sub_60C7D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060c7d0);
    /* 0060c7d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060c7d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0060c7d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060c7d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0060c7d7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060c7da: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060c7dd: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0060c7e0: cmp edx, dword ptr [ecx + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060c7e3: jne 0x60c7ed */ if (!fZ) goto L_0060c7ed;
L_0060c7e5:; BB(0x0060c7e5);
    /* 0060c7e5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060c7e8: call 0x60c720 */ r_esp -= 4; W32(r_esp, 0x60c7edu); f_0060c720();
L_0060c7ed:; BB(0x0060c7ed);
    /* 0060c7ed: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060c7f0: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0060c7f3: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0060c7f6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060c7f7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060c7fa: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0060c7fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060c7fe: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060c801: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 0060c804: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0060c807: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060c808: call dword ptr [0x6b22d8] */ { u32 t = R32((u32)(0x6b22d8u)); r_esp -= 4; W32(r_esp, 0x60c80eu); call_ind(t); }
    /* 0060c80e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060c811: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060c814: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0060c817: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0060c81a: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0060c81c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060c81f: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0060c822: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0060c825: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060c828: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 0060c82b: mov esp, ebp */ r_esp = r_ebp;
    /* 0060c82d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060c82e: ret 4 */ FN_RET(0x0060c7d0); r_esp += 8; return;
}

void f_0060c840(void) /* sub_60C840 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060c840);
    /* 0060c840: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060c841: mov ebp, esp */ r_ebp = r_esp;
    /* 0060c843: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060c844: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0060c847: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060c84a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060c84d: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0060c850: cmp edx, dword ptr [ecx + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060c853: jne 0x60c85d */ if (!fZ) goto L_0060c85d;
L_0060c855:; BB(0x0060c855);
    /* 0060c855: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060c858: call 0x60c720 */ r_esp -= 4; W32(r_esp, 0x60c85du); f_0060c720();
L_0060c85d:; BB(0x0060c85d);
    /* 0060c85d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060c860: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0060c863: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060c866: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0060c869: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0060c86c: mov dword ptr [eax + ecx*4], edx */ W32((u32)(r_eax+r_ecx*4), r_edx);
    /* 0060c86f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060c872: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0060c875: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0060c878: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060c87b: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 0060c87e: mov esp, ebp */ r_esp = r_ebp;
    /* 0060c880: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060c881: ret 4 */ FN_RET(0x0060c840); r_esp += 8; return;
}

void f_0060c890(void) /* sub_60C890 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060c890);
    /* 0060c890: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060c891: mov ebp, esp */ r_ebp = r_esp;
    /* 0060c893: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060c896: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0060c899: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060c89c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060c89d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060c8a0: call 0x60cac0 */ r_esp -= 4; W32(r_esp, 0x60c8a5u); f_0060cac0();
    /* 0060c8a5: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0060c8a8: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060c8ac: je 0x60c906 */ if (fZ) goto L_0060c906;
L_0060c8ae:; BB(0x0060c8ae);
    /* 0060c8ae: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060c8b1: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0060c8b4: sub edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0060c8b7: lea eax, [edx*4 - 4] */ r_eax = (u32)(r_edx*4+0xfffffffcu);
    /* 0060c8be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060c8bf: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060c8c2: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 0060c8c5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060c8c8: lea ecx, [edx + eax*4 + 4] */ r_ecx = (u32)(r_edx+r_eax*4+0x4u);
    /* 0060c8cc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060c8cd: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060c8d0: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0060c8d3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060c8d6: lea edx, [eax + ecx*4] */ r_edx = (u32)(r_eax+r_ecx*4);
    /* 0060c8d9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060c8da: call dword ptr [0x6b22d8] */ { u32 t = R32((u32)(0x6b22d8u)); r_esp -= 4; W32(r_esp, 0x60c8e0u); call_ind(t); }
    /* 0060c8e0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060c8e3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060c8e6: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0060c8e9: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060c8ec: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0060c8ef: mov dword ptr [eax + ecx*4 - 4], 0 */ W32((u32)(r_eax+r_ecx*4+0xfffffffcu), 0x0u);
    /* 0060c8f7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060c8fa: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0060c8fd: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0060c900: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060c903: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
L_0060c906:; BB(0x0060c906);
    /* 0060c906: mov esp, ebp */ r_esp = r_ebp;
    /* 0060c908: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060c909: ret 4 */ FN_RET(0x0060c890); r_esp += 8; return;
}

void f_0060c910(void) /* sub_60C910 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060c910);
    /* 0060c910: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060c911: mov ebp, esp */ r_ebp = r_esp;
    /* 0060c913: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060c916: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0060c919: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060c920: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060c923: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0060c926: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0060c929: jmp 0x60c93d */ goto L_0060c93d;
L_0060c92b:; BB(0x0060c92b);
    /* 0060c92b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060c92e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0060c931: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0060c934: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060c937: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0060c93a: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0060c93d:; BB(0x0060c93d);
    /* 0060c93d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060c940: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060c943: cmp edx, dword ptr [ecx + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060c946: jge 0x60c981 */ if ((fS==fO)) goto L_0060c981;
L_0060c948:; BB(0x0060c948);
    /* 0060c948: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060c94b: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0060c94d: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0060c950: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060c953: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0060c956: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060c95a: je 0x60c96f */ if (fZ) goto L_0060c96f;
L_0060c95c:; BB(0x0060c95c);
    /* 0060c95c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060c95e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060c961: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0060c963: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060c966: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0060c968: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x60c96au); call_ind(t); }
    /* 0060c96a: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0060c96d: jmp 0x60c976 */ goto L_0060c976;
L_0060c96f:; BB(0x0060c96f);
    /* 0060c96f: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_0060c976:; BB(0x0060c976);
    /* 0060c976: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060c979: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 0060c97f: jmp 0x60c92b */ goto L_0060c92b;
L_0060c981:; BB(0x0060c981);
    /* 0060c981: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060c984: mov dword ptr [edx + 4], 0 */ W32((u32)(r_edx+0x4u), 0x0u);
    /* 0060c98b: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0060c98d: mov esp, ebp */ r_esp = r_ebp;
    /* 0060c98f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060c990: ret  */ FN_RET(0x0060c910); r_esp += 4; return;
}

void f_0060c9e0(void) /* sub_60C9E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060c9e0);
    /* 0060c9e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060c9e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0060c9e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060c9e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0060c9e7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060c9ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060c9eb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060c9ee: call 0x60cac0 */ r_esp -= 4; W32(r_esp, 0x60c9f3u); f_0060cac0();
    /* 0060c9f3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0060c9f5: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060c9f8: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0060c9fb: mov al, cl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_ecx) & 0xffu);
    /* 0060c9fd: mov esp, ebp */ r_esp = r_ebp;
    /* 0060c9ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060ca00: ret 4 */ FN_RET(0x0060c9e0); r_esp += 8; return;
}

void f_0060ca10(void) /* sub_60CA10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060ca10);
    /* 0060ca10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060ca11: mov ebp, esp */ r_ebp = r_esp;
    /* 0060ca13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060ca14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0060ca17: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060ca1a: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0060ca1d: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0060ca20: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060ca21: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060ca23: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060ca26: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0060ca29: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060ca2a: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x60ca2fu); f_00686fa2();
    /* 0060ca2f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060ca32: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060ca35: mov dword ptr [ecx + 4], 0 */ W32((u32)(r_ecx+0x4u), 0x0u);
    /* 0060ca3c: mov esp, ebp */ r_esp = r_ebp;
    /* 0060ca3e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060ca3f: ret  */ FN_RET(0x0060ca10); r_esp += 4; return;
}

void f_0060ca40(void) /* sub_60CA40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060ca40);
    /* 0060ca40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060ca41: mov ebp, esp */ r_ebp = r_esp;
    /* 0060ca43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060ca44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0060ca47: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060ca4b: jl 0x60ca58 */ if ((fS!=fO)) goto L_0060ca58;
L_0060ca4d:; BB(0x0060ca4d);
    /* 0060ca4d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060ca50: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0060ca53: cmp ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060ca56: jl 0x60ca5e */ if ((fS!=fO)) goto L_0060ca5e;
L_0060ca58:; BB(0x0060ca58);
    /* 0060ca58: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060ca5a: jmp 0x60ca6a */ goto L_0060ca6a;
L_0060ca5e:; BB(0x0060ca5e);
    /* 0060ca5e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060ca61: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0060ca64: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0060ca67: mov eax, dword ptr [eax + ecx*4] */ r_eax = R32((u32)(r_eax+r_ecx*4));
L_0060ca6a:; BB(0x0060ca6a);
    /* 0060ca6a: mov esp, ebp */ r_esp = r_ebp;
    /* 0060ca6c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060ca6d: ret 4 */ FN_RET(0x0060ca40); r_esp += 8; return;
}

void f_0060ca70(void) /* sub_60CA70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060ca70);
    /* 0060ca70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060ca71: mov ebp, esp */ r_ebp = r_esp;
    /* 0060ca73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060ca74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0060ca77:; BB(0x0060ca77);
    /* 0060ca77: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060ca7a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0060ca7d: cmp ecx, dword ptr [eax + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060ca80: jl 0x60ca8c */ if ((fS!=fO)) goto L_0060ca8c;
L_0060ca82:; BB(0x0060ca82);
    /* 0060ca82: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060ca85: call 0x60c720 */ r_esp -= 4; W32(r_esp, 0x60ca8au); f_0060c720();
    /* 0060ca8a: jmp 0x60ca77 */ goto L_0060ca77;
L_0060ca8c:; BB(0x0060ca8c);
    /* 0060ca8c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060ca8f: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0060ca92: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0060ca95: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0060ca98: mov dword ptr [eax + ecx*4], edx */ W32((u32)(r_eax+r_ecx*4), r_edx);
    /* 0060ca9b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060ca9e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0060caa1: cmp ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060caa4: jle 0x60cab2 */ if ((fZ||fS!=fO)) goto L_0060cab2;
L_0060caa6:; BB(0x0060caa6);
    /* 0060caa6: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0060caa9: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0060caac: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060caaf: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
L_0060cab2:; BB(0x0060cab2);
    /* 0060cab2: mov esp, ebp */ r_esp = r_ebp;
    /* 0060cab4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060cab5: ret 8 */ FN_RET(0x0060ca70); r_esp += 12; return;
}

void f_0060cac0(void) /* sub_60CAC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060cac0);
    /* 0060cac0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060cac1: mov ebp, esp */ r_ebp = r_esp;
    /* 0060cac3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060cac6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0060cac9: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0060cad0: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060cad3: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0060cad6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0060cad9: jmp 0x60caed */ goto L_0060caed;
L_0060cadb:; BB(0x0060cadb);
    /* 0060cadb: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060cade: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0060cae1: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0060cae4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060cae7: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0060caea: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0060caed:; BB(0x0060caed);
    /* 0060caed: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060caf0: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060caf3: cmp edx, dword ptr [ecx + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060caf6: jge 0x60cb09 */ if ((fS==fO)) goto L_0060cb09;
L_0060caf8:; BB(0x0060caf8);
    /* 0060caf8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060cafb: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0060cafd: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060cb00: jne 0x60cb07 */ if (!fZ) goto L_0060cb07;
L_0060cb02:; BB(0x0060cb02);
    /* 0060cb02: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060cb05: jmp 0x60cb0c */ goto L_0060cb0c;
L_0060cb07:; BB(0x0060cb07);
    /* 0060cb07: jmp 0x60cadb */ goto L_0060cadb;
L_0060cb09:; BB(0x0060cb09);
    /* 0060cb09: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_0060cb0c:; BB(0x0060cb0c);
    /* 0060cb0c: mov esp, ebp */ r_esp = r_ebp;
    /* 0060cb0e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060cb0f: ret 4 */ FN_RET(0x0060cac0); r_esp += 8; return;
}

void f_0060cb20(void) /* sub_60CB20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060cb20);
    /* 0060cb20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060cb21: mov ebp, esp */ r_ebp = r_esp;
    /* 0060cb23: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060cb26: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0060cb29: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060cb2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060cb2d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060cb30: call 0x60cac0 */ r_esp -= 4; W32(r_esp, 0x60cb35u); f_0060cac0();
    /* 0060cb35: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0060cb38: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060cb3c: jle 0x60cba9 */ if ((fZ||fS!=fO)) goto L_0060cba9;
L_0060cb3e:; BB(0x0060cb3e);
    /* 0060cb3e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060cb41: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060cb44: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 0060cb47: cmp eax, dword ptr [edx + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060cb4a: jne 0x60cb54 */ if (!fZ) goto L_0060cb54;
L_0060cb4c:; BB(0x0060cb4c);
    /* 0060cb4c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060cb4f: call 0x60c720 */ r_esp -= 4; W32(r_esp, 0x60cb54u); f_0060c720();
L_0060cb54:; BB(0x0060cb54);
    /* 0060cb54: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060cb57: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0060cb5a: sub edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0060cb5d: lea eax, [edx*4 - 4] */ r_eax = (u32)(r_edx*4+0xfffffffcu);
    /* 0060cb64: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060cb65: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060cb68: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 0060cb6b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060cb6e: lea ecx, [edx + eax*4 + 4] */ r_ecx = (u32)(r_edx+r_eax*4+0x4u);
    /* 0060cb72: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060cb73: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060cb76: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0060cb79: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060cb7c: lea edx, [eax + ecx*4 + 8] */ r_edx = (u32)(r_eax+r_ecx*4+0x8u);
    /* 0060cb80: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060cb81: call dword ptr [0x6b22d8] */ { u32 t = R32((u32)(0x6b22d8u)); r_esp -= 4; W32(r_esp, 0x60cb87u); call_ind(t); }
    /* 0060cb87: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060cb8a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060cb8d: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0060cb90: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060cb93: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0060cb96: mov dword ptr [ecx + edx*4 + 4], eax */ W32((u32)(r_ecx+r_edx*4+0x4u), r_eax);
    /* 0060cb9a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060cb9d: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0060cba0: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0060cba3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060cba6: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
L_0060cba9:; BB(0x0060cba9);
    /* 0060cba9: mov esp, ebp */ r_esp = r_ebp;
    /* 0060cbab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060cbac: ret 8 */ FN_RET(0x0060cb20); r_esp += 12; return;
}

void f_0060cbb0(void) /* sub_60CBB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060cbb0);
    /* 0060cbb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060cbb1: mov ebp, esp */ r_ebp = r_esp;
    /* 0060cbb3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060cbb6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0060cbb9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060cbc0: jmp 0x60cbcb */ goto L_0060cbcb;
L_0060cbc2:; BB(0x0060cbc2);
    /* 0060cbc2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060cbc5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0060cbc8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0060cbcb:; BB(0x0060cbcb);
    /* 0060cbcb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060cbce: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060cbd1: cmp edx, dword ptr [ecx + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060cbd4: jge 0x60cc5a */ if ((fS==fO)) goto L_0060cc5a;
L_0060cbda:; BB(0x0060cbda);
    /* 0060cbda: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0060cbe1: jmp 0x60cbec */ goto L_0060cbec;
L_0060cbe3:; BB(0x0060cbe3);
    /* 0060cbe3: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060cbe6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0060cbe9: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_0060cbec:; BB(0x0060cbec);
    /* 0060cbec: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060cbef: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0060cbf2: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0060cbf5: sub edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0060cbf8: cmp dword ptr [ebp - 0x10], edx */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060cbfb: jge 0x60cc55 */ if ((fS==fO)) goto L_0060cc55;
L_0060cbfd:; BB(0x0060cbfd);
    /* 0060cbfd: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060cc00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060cc01: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060cc04: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x60cc09u); f_0060ca40();
    /* 0060cc09: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0060cc0c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060cc0f: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0060cc12: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060cc13: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060cc16: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x60cc1bu); f_0060ca40();
    /* 0060cc1b: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0060cc1e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060cc21: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060cc22: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060cc25: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060cc26: call dword ptr [ebp + 8] */ { u32 t = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, 0x60cc29u); call_ind(t); }
    /* 0060cc29: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060cc2c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0060cc2e: jle 0x60cc53 */ if ((fZ||fS!=fO)) goto L_0060cc53;
L_0060cc30:; BB(0x0060cc30);
    /* 0060cc30: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060cc33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060cc34: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060cc37: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060cc38: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060cc3b: call 0x60ca70 */ r_esp -= 4; W32(r_esp, 0x60cc40u); f_0060ca70();
    /* 0060cc40: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060cc43: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060cc44: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060cc47: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0060cc4a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060cc4b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060cc4e: call 0x60ca70 */ r_esp -= 4; W32(r_esp, 0x60cc53u); f_0060ca70();
L_0060cc53:; BB(0x0060cc53);
    /* 0060cc53: jmp 0x60cbe3 */ goto L_0060cbe3;
L_0060cc55:; BB(0x0060cc55);
    /* 0060cc55: jmp 0x60cbc2 */ goto L_0060cbc2;
L_0060cc5a:; BB(0x0060cc5a);
    /* 0060cc5a: mov esp, ebp */ r_esp = r_ebp;
    /* 0060cc5c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060cc5d: ret 4 */ FN_RET(0x0060cbb0); r_esp += 8; return;
}

void f_0060cc90(void) /* sub_60CC90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060cc90);
    /* 0060cc90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060cc91: mov ebp, esp */ r_ebp = r_esp;
    /* 0060cc93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060cc94: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0060cc97: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060cc98: push 0x6d8290 */ { u32 v = 0x6d8290u; r_esp -= 4; W32(r_esp, v); }
    /* 0060cc9d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060cc9f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060cca1: push 0x6d8280 */ { u32 v = 0x6d8280u; r_esp -= 4; W32(r_esp, v); }
    /* 0060cca6: call dword ptr [0x6b24f8] */ { u32 t = R32((u32)(0x6b24f8u)); r_esp -= 4; W32(r_esp, 0x60ccacu); call_ind(t); }
    /* 0060ccac: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0060ccaf: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060ccb3: jl 0x60cccc */ if ((fS!=fO)) goto L_0060cccc;
L_0060ccb5:; BB(0x0060ccb5);
    /* 0060ccb5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060ccb7: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0060ccba: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0060ccbc: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0060ccbf: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0060ccc1: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0060ccc3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060ccc4: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 0060ccc7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x60ccc9u); call_ind(t); }
    /* 0060ccc9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0060cccc:; BB(0x0060cccc);
    /* 0060cccc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060cccf: mov esp, ebp */ r_esp = r_ebp;
    /* 0060ccd1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060ccd2: ret  */ FN_RET(0x0060cc90); r_esp += 4; return;
}

void f_0060cce0(void) /* sub_60CCE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060cce0);
    /* 0060cce0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060cce1: mov ebp, esp */ r_ebp = r_esp;
    /* 0060cce3: sub esp, 0x210 */ {  u32 a = r_esp; u32 b = 0x210u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060cce9: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0060ccee: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060ccf0: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0060ccf3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060ccf5: push 0x75ee04 */ { u32 v = 0x75ee04u; r_esp -= 4; W32(r_esp, v); }
    /* 0060ccfa: push 0x75edec */ { u32 v = 0x75edecu; r_esp -= 4; W32(r_esp, v); }
    /* 0060ccff: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060cd01: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0060cd06: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0060cd09: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060cd0a: call 0x686ede */ r_esp -= 4; W32(r_esp, 0x60cd0fu); f_00686ede();
    /* 0060cd0f: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060cd12: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0060cd15: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060cd18: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0060cd1a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060cd1d: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0060cd20: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x60cd22u); call_ind(t); }
    /* 0060cd22: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0060cd25: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060cd27: je 0x60cd38 */ if (fZ) goto L_0060cd38;
L_0060cd29:; BB(0x0060cd29);
    /* 0060cd29: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060cd2b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060cd2e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0060cd30: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060cd33: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 0060cd36: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x60cd38u); call_ind(t); }
L_0060cd38:; BB(0x0060cd38);
    /* 0060cd38: push 0x7952c4 */ { u32 v = 0x7952c4u; r_esp -= 4; W32(r_esp, v); }
    /* 0060cd3d: lea ecx, [ebp - 0x210] */ r_ecx = (u32)(r_ebp+0xfffffdf0u);
    /* 0060cd43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060cd44: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x60cd49u); f_00686d8e();
    /* 0060cd49: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060cd4c: lea edx, [ebp - 0x210] */ r_edx = (u32)(r_ebp+0xfffffdf0u);
    /* 0060cd52: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060cd53: call 0x5eaa40 */ r_esp -= 4; W32(r_esp, 0x60cd58u); f_005eaa40();
    /* 0060cd58: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060cd5b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060cd5d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060cd5f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060cd61: lea eax, [ebp - 0x210] */ r_eax = (u32)(r_ebp+0xfffffdf0u);
    /* 0060cd67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060cd68: push 0x6d61f0 */ { u32 v = 0x6d61f0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060cd6d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060cd70: mov edx, dword ptr [ecx + 0x8c] */ r_edx = R32((u32)(r_ecx+0x8cu));
    /* 0060cd76: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060cd77: call dword ptr [0x6b23a8] */ { u32 t = R32((u32)(0x6b23a8u)); r_esp -= 4; W32(r_esp, 0x60cd7du); call_ind(t); }
    /* 0060cd7d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060cd80: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0060cd82: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x60cd87u); f_00686d72();
    /* 0060cd87: mov esp, ebp */ r_esp = r_ebp;
    /* 0060cd89: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060cd8a: ret  */ FN_RET(0x0060cce0); r_esp += 4; return;
}

void f_0060cd90(void) /* sub_60CD90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060cd90);
    /* 0060cd90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060cd91: mov ebp, esp */ r_ebp = r_esp;
    /* 0060cd93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060cd94: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060cd96: push 0x75ee04 */ { u32 v = 0x75ee04u; r_esp -= 4; W32(r_esp, v); }
    /* 0060cd9b: push 0x75edec */ { u32 v = 0x75edecu; r_esp -= 4; W32(r_esp, v); }
    /* 0060cda0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060cda2: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0060cda7: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0060cdaa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060cdab: call 0x686ede */ r_esp -= 4; W32(r_esp, 0x60cdb0u); f_00686ede();
    /* 0060cdb0: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060cdb3: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0060cdb6: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060cdba: je 0x60cdfa */ if (fZ) goto L_0060cdfa;
L_0060cdbc:; BB(0x0060cdbc);
    /* 0060cdbc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060cdbf: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 0060cdc5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060cdc6: call dword ptr [0x6b245c] */ { u32 t = R32((u32)(0x6b245cu)); r_esp -= 4; W32(r_esp, 0x60cdccu); call_ind(t); }
    /* 0060cdcc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060cdce: je 0x60cdfa */ if (fZ) goto L_0060cdfa;
L_0060cdd0:; BB(0x0060cdd0);
    /* 0060cdd0: movzx ecx, byte ptr [ebp + 8] */ r_ecx = (u32)R8((u32)(r_ebp+0x8u));
    /* 0060cdd4: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 0060cdd6: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 0060cdd8: and ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0060cddb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060cddc: mov edx, dword ptr [0x7960d0] */ r_edx = R32((u32)(0x7960d0u));
    /* 0060cde2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060cde3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060cde6: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 0060cdec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060cded: call dword ptr [0x6b245c] */ { u32 t = R32((u32)(0x6b245cu)); r_esp -= 4; W32(r_esp, 0x60cdf3u); call_ind(t); }
    /* 0060cdf3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060cdf4: call dword ptr [0x6b2460] */ { u32 t = R32((u32)(0x6b2460u)); r_esp -= 4; W32(r_esp, 0x60cdfau); call_ind(t); }
L_0060cdfa:; BB(0x0060cdfa);
    /* 0060cdfa: mov esp, ebp */ r_esp = r_ebp;
    /* 0060cdfc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060cdfd: ret  */ FN_RET(0x0060cd90); r_esp += 4; return;
}

