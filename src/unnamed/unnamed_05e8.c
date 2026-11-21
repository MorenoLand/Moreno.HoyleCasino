#include "protos.h"

void f_005e8550(void) /* sub_5E8550 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e8550);
    /* 005e8550: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e8551: mov ebp, esp */ r_ebp = r_esp;
    /* 005e8553: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e8554: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e8557: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005e855a: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 005e855d: mov byte ptr [eax + 0x794930], cl */ W8((u32)(r_eax+0x794930u), (u8)r_ecx);
    /* 005e8563: mov esp, ebp */ r_esp = r_ebp;
    /* 005e8565: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e8566: ret 8 */ FN_RET(0x005e8550); r_esp += 12; return;
}

void f_005e8570(void) /* sub_5E8570 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e8570);
    /* 005e8570: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e8571: mov ebp, esp */ r_ebp = r_esp;
    /* 005e8573: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e8574: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e8577: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e857a: cmp byte ptr [eax + 0x794930], 0 */ {  u32 a = R8((u32)(r_eax+0x794930u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 005e8581: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 005e8584: mov esp, ebp */ r_esp = r_ebp;
    /* 005e8586: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e8587: ret 4 */ FN_RET(0x005e8570); r_esp += 8; return;
}

void f_005e8590(void) /* sub_5E8590 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e8590);
    /* 005e8590: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e8591: mov ebp, esp */ r_ebp = r_esp;
    /* 005e8593: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e8594: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e8597: movzx eax, byte ptr [0x795f95] */ r_eax = (u32)R8((u32)(0x795f95u));
    /* 005e859e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e85a0: je 0x5e85a4 */ if (fZ) goto L_005e85a4;
L_005e85a2:; BB(0x005e85a2);
    /* 005e85a2: jmp 0x5e85c4 */ goto L_005e85c4;
L_005e85a4:; BB(0x005e85a4);
    /* 005e85a4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e85a7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e85a8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e85ab: call 0x5e8570 */ r_esp -= 4; W32(r_esp, 0x5e85b0u); f_005e8570();
    /* 005e85b0: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005e85b3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e85b5: jne 0x5e85b9 */ if (!fZ) goto L_005e85b9;
L_005e85b7:; BB(0x005e85b7);
    /* 005e85b7: jmp 0x5e85c4 */ goto L_005e85c4;
L_005e85b9:; BB(0x005e85b9);
    /* 005e85b9: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005e85bf: call 0x5dc8e0 */ r_esp -= 4; W32(r_esp, 0x5e85c4u); f_005dc8e0();
L_005e85c4:; BB(0x005e85c4);
    /* 005e85c4: mov esp, ebp */ r_esp = r_ebp;
    /* 005e85c6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e85c7: ret 4 */ FN_RET(0x005e8590); r_esp += 8; return;
}

void f_005e86b0(void) /* sub_5E86B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e86b0);
    /* 005e86b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e86b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005e86b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e86b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e86b7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e86ba: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e86bc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e86bf: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005e86c2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e86c4u); call_ind(t); }
    /* 005e86c4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e86c6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e86c9: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x5e86ceu); f_005f5d50();
    /* 005e86ce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e86d0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e86d3: call 0x5f5df0 */ r_esp -= 4; W32(r_esp, 0x5e86d8u); f_005f5df0();
    /* 005e86d8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e86db: mov byte ptr [ecx + 0x190], 0 */ W8((u32)(r_ecx+0x190u), 0x0u);
    /* 005e86e2: mov esp, ebp */ r_esp = r_ebp;
    /* 005e86e4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e86e5: ret  */ FN_RET(0x005e86b0); r_esp += 4; return;
}

void f_005e86f0(void) /* sub_5E86F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e86f0);
    /* 005e86f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e86f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005e86f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e86f5: push 0x6a9a57 */ { u32 v = 0x6a9a57u; r_esp -= 4; W32(r_esp, v); }
    /* 005e86fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005e8700: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e8701: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e8704: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005e8709: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e870b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e870c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005e870f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005e8715: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005e8718: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e871b: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005e871e: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8722: je 0x5e8733 */ if (fZ) goto L_005e8733;
L_005e8724:; BB(0x005e8724);
    /* 005e8724: cmp dword ptr [ebp - 0x1c], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8728: je 0x5e87ae */ if (fZ) goto L_005e87ae;
L_005e872e:; BB(0x005e872e);
    /* 005e872e: jmp 0x5e87b9 */ goto L_005e87b9;
L_005e8733:; BB(0x005e8733);
    /* 005e8733: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8735: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e8738: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 005e873e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e8741: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 005e8747: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005e8749: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005e874c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e874eu); call_ind(t); }
    /* 005e874e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e8751: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e8753: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e8756: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005e8759: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e875bu); call_ind(t); }
    /* 005e875b: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005e875d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5e8762u); f_00686d82();
    /* 005e8762: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e8765: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005e8768: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e876f: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8773: je 0x5e878c */ if (fZ) goto L_005e878c;
L_005e8775:; BB(0x005e8775);
    /* 005e8775: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e8778: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 005e877e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e877f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e8782: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x5e8787u); f_006010a0();
    /* 005e8787: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005e878a: jmp 0x5e8793 */ goto L_005e8793;
L_005e878c:; BB(0x005e878c);
    /* 005e878c: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_005e8793:; BB(0x005e8793);
    /* 005e8793: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e8796: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005e8799: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005e87a0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e87a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e87a4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e87a7: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x5e87acu); f_005f5d50();
    /* 005e87ac: jmp 0x5e87b9 */ goto L_005e87b9;
L_005e87ae:; BB(0x005e87ae);
    /* 005e87ae: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005e87b4: call 0x5dc9d0 */ r_esp -= 4; W32(r_esp, 0x5e87b9u); f_005dc9d0();
L_005e87b9:; BB(0x005e87b9);
    /* 005e87b9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e87bc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e87c3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e87c4: mov esp, ebp */ r_esp = r_ebp;
    /* 005e87c6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e87c7: ret 4 */ FN_RET(0x005e86f0); r_esp += 8; return;
}

void f_005e88e0(void) /* sub_5E88E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e88e0);
    /* 005e88e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e88e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005e88e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e88e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e88e7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e88ea: mov ecx, dword ptr [eax + 0x80] */ r_ecx = R32((u32)(r_eax+0x80u));
    /* 005e88f0: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e88f3: jne 0x5e88f7 */ if (!fZ) goto L_005e88f7;
L_005e88f5:; BB(0x005e88f5);
    /* 005e88f5: jmp 0x5e8926 */ goto L_005e8926;
L_005e88f7:; BB(0x005e88f7);
    /* 005e88f7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e88fa: mov eax, dword ptr [edx*4 + 0x75ecb8] */ r_eax = R32((u32)(r_edx*4+0x75ecb8u));
    /* 005e8901: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e8902: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8905: call 0x5f1ad0 */ r_esp -= 4; W32(r_esp, 0x5e890au); f_005f1ad0();
    /* 005e890a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e890d: call 0x5e8af0 */ r_esp -= 4; W32(r_esp, 0x5e8912u); f_005e8af0();
    /* 005e8912: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8915: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e8918: mov dword ptr [ecx + 0x80], edx */ W32((u32)(r_ecx+0x80u), r_edx);
    /* 005e891e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8921: call 0x5e8aa0 */ r_esp -= 4; W32(r_esp, 0x5e8926u); f_005e8aa0();
L_005e8926:; BB(0x005e8926);
    /* 005e8926: mov esp, ebp */ r_esp = r_ebp;
    /* 005e8928: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e8929: ret 4 */ FN_RET(0x005e88e0); r_esp += 8; return;
}

void f_005e8a40(void) /* sub_5E8A40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e8a40);
    /* 005e8a40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e8a41: mov ebp, esp */ r_ebp = r_esp;
    /* 005e8a43: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e8a46: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e8a49: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8a4c: mov ecx, dword ptr [eax + 0x80] */ r_ecx = R32((u32)(r_eax+0x80u));
    /* 005e8a52: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005e8a55: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8a59: je 0x5e8a69 */ if (fZ) goto L_005e8a69;
L_005e8a5b:; BB(0x005e8a5b);
    /* 005e8a5b: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8a5f: je 0x5e8a77 */ if (fZ) goto L_005e8a77;
L_005e8a61:; BB(0x005e8a61);
    /* 005e8a61: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8a65: je 0x5e8a85 */ if (fZ) goto L_005e8a85;
L_005e8a67:; BB(0x005e8a67);
    /* 005e8a67: jmp 0x5e8a91 */ goto L_005e8a91;
L_005e8a69:; BB(0x005e8a69);
    /* 005e8a69: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e8a6c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e8a6d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8a70: call 0x5e9c00 */ r_esp -= 4; W32(r_esp, 0x5e8a75u); f_005e9c00();
    /* 005e8a75: jmp 0x5e8a91 */ goto L_005e8a91;
L_005e8a77:; BB(0x005e8a77);
    /* 005e8a77: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e8a7a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e8a7b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8a7e: call 0x5e9160 */ r_esp -= 4; W32(r_esp, 0x5e8a83u); f_005e9160();
    /* 005e8a83: jmp 0x5e8a91 */ goto L_005e8a91;
L_005e8a85:; BB(0x005e8a85);
    /* 005e8a85: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e8a88: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e8a89: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8a8c: call 0x5e97a0 */ r_esp -= 4; W32(r_esp, 0x5e8a91u); f_005e97a0();
L_005e8a91:; BB(0x005e8a91);
    /* 005e8a91: mov esp, ebp */ r_esp = r_ebp;
    /* 005e8a93: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e8a94: ret 4 */ FN_RET(0x005e8a40); r_esp += 8; return;
}

void f_005e8aa0(void) /* sub_5E8AA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e8aa0);
    /* 005e8aa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e8aa1: mov ebp, esp */ r_ebp = r_esp;
    /* 005e8aa3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e8aa6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e8aa9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8aac: mov ecx, dword ptr [eax + 0x80] */ r_ecx = R32((u32)(r_eax+0x80u));
    /* 005e8ab2: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005e8ab5: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8ab9: je 0x5e8ac9 */ if (fZ) goto L_005e8ac9;
L_005e8abb:; BB(0x005e8abb);
    /* 005e8abb: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8abf: je 0x5e8ad3 */ if (fZ) goto L_005e8ad3;
L_005e8ac1:; BB(0x005e8ac1);
    /* 005e8ac1: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8ac5: je 0x5e8add */ if (fZ) goto L_005e8add;
L_005e8ac7:; BB(0x005e8ac7);
    /* 005e8ac7: jmp 0x5e8ae5 */ goto L_005e8ae5;
L_005e8ac9:; BB(0x005e8ac9);
    /* 005e8ac9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8acc: call 0x5e9aa0 */ r_esp -= 4; W32(r_esp, 0x5e8ad1u); f_005e9aa0();
    /* 005e8ad1: jmp 0x5e8ae5 */ goto L_005e8ae5;
L_005e8ad3:; BB(0x005e8ad3);
    /* 005e8ad3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8ad6: call 0x5e8b40 */ r_esp -= 4; W32(r_esp, 0x5e8adbu); f_005e8b40();
    /* 005e8adb: jmp 0x5e8ae5 */ goto L_005e8ae5;
L_005e8add:; BB(0x005e8add);
    /* 005e8add: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8ae0: call 0x5e93f0 */ r_esp -= 4; W32(r_esp, 0x5e8ae5u); f_005e93f0();
L_005e8ae5:; BB(0x005e8ae5);
    /* 005e8ae5: mov esp, ebp */ r_esp = r_ebp;
    /* 005e8ae7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e8ae8: ret  */ FN_RET(0x005e8aa0); r_esp += 4; return;
}

void f_005e8af0(void) /* sub_5E8AF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e8af0);
    /* 005e8af0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e8af1: mov ebp, esp */ r_ebp = r_esp;
    /* 005e8af3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e8af6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e8af9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8afc: mov ecx, dword ptr [eax + 0x80] */ r_ecx = R32((u32)(r_eax+0x80u));
    /* 005e8b02: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005e8b05: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8b09: je 0x5e8b19 */ if (fZ) goto L_005e8b19;
L_005e8b0b:; BB(0x005e8b0b);
    /* 005e8b0b: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8b0f: je 0x5e8b23 */ if (fZ) goto L_005e8b23;
L_005e8b11:; BB(0x005e8b11);
    /* 005e8b11: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8b15: je 0x5e8b2d */ if (fZ) goto L_005e8b2d;
L_005e8b17:; BB(0x005e8b17);
    /* 005e8b17: jmp 0x5e8b35 */ goto L_005e8b35;
L_005e8b19:; BB(0x005e8b19);
    /* 005e8b19: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8b1c: call 0x5e9bc0 */ r_esp -= 4; W32(r_esp, 0x5e8b21u); f_005e9bc0();
    /* 005e8b21: jmp 0x5e8b35 */ goto L_005e8b35;
L_005e8b23:; BB(0x005e8b23);
    /* 005e8b23: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8b26: call 0x5e8d00 */ r_esp -= 4; W32(r_esp, 0x5e8b2bu); f_005e8d00();
    /* 005e8b2b: jmp 0x5e8b35 */ goto L_005e8b35;
L_005e8b2d:; BB(0x005e8b2d);
    /* 005e8b2d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8b30: call 0x5e94b0 */ r_esp -= 4; W32(r_esp, 0x5e8b35u); f_005e94b0();
L_005e8b35:; BB(0x005e8b35);
    /* 005e8b35: mov esp, ebp */ r_esp = r_ebp;
    /* 005e8b37: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e8b38: ret  */ FN_RET(0x005e8af0); r_esp += 4; return;
}

void f_005e8b40(void) /* sub_5E8B40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e8b40);
    /* 005e8b40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e8b41: mov ebp, esp */ r_ebp = r_esp;
    /* 005e8b43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e8b44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e8b47: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8b49: push 0x75ecec */ { u32 v = 0x75ececu; r_esp -= 4; W32(r_esp, v); }
    /* 005e8b4e: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8b50: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8b52: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8b55: call 0x5e97f0 */ r_esp -= 4; W32(r_esp, 0x5e8b5au); f_005e97f0();
    /* 005e8b5a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8b5c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8b5e: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005e8b63: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005e8b66: call 0x5fb3a0 */ r_esp -= 4; W32(r_esp, 0x5e8b6bu); f_005fb3a0();
    /* 005e8b6b: mov ecx, eax */ r_ecx = r_eax;
    /* 005e8b6d: call 0x6064e0 */ r_esp -= 4; W32(r_esp, 0x5e8b72u); f_006064e0();
    /* 005e8b72: push 0x154 */ { u32 v = 0x154u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8b77: push 0x53 */ { u32 v = 0x53u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8b79: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8b7c: call 0x5e9860 */ r_esp -= 4; W32(r_esp, 0x5e8b81u); f_005e9860();
    /* 005e8b81: push 0x18b */ { u32 v = 0x18bu; r_esp -= 4; W32(r_esp, v); }
    /* 005e8b86: push 0x53 */ { u32 v = 0x53u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8b88: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8b8b: call 0x5e9910 */ r_esp -= 4; W32(r_esp, 0x5e8b90u); f_005e9910();
    /* 005e8b90: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8b93: call 0x5e8c00 */ r_esp -= 4; W32(r_esp, 0x5e8b98u); f_005e8c00();
    /* 005e8b98: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8b9b: call 0x5e8c40 */ r_esp -= 4; W32(r_esp, 0x5e8ba0u); f_005e8c40();
    /* 005e8ba0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8ba3: call 0x5e8c80 */ r_esp -= 4; W32(r_esp, 0x5e8ba8u); f_005e8c80();
    /* 005e8ba8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8bab: call 0x5e8cc0 */ r_esp -= 4; W32(r_esp, 0x5e8bb0u); f_005e8cc0();
    /* 005e8bb0: push 0x105 */ { u32 v = 0x105u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8bb5: push 0x57 */ { u32 v = 0x57u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8bb7: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8bb9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8bbc: call 0x5e9a30 */ r_esp -= 4; W32(r_esp, 0x5e8bc1u); f_005e9a30();
    /* 005e8bc1: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8bc3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8bc6: call 0x5e9160 */ r_esp -= 4; W32(r_esp, 0x5e8bcbu); f_005e9160();
    /* 005e8bcb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8bcd: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e8bd2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8bd4: push 0x7d0 */ { u32 v = 0x7d0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8bd9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8bdb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8bdd: push 0x30d628 */ { u32 v = 0x30d628u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8be2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8be4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8be6: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005e8bec: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005e8bef: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x5e8bf4u); f_005f9ce0();
    /* 005e8bf4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8bf7: call 0x5e9250 */ r_esp -= 4; W32(r_esp, 0x5e8bfcu); f_005e9250();
    /* 005e8bfc: mov esp, ebp */ r_esp = r_ebp;
    /* 005e8bfe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e8bff: ret  */ FN_RET(0x005e8b40); r_esp += 4; return;
}

void f_005e8c00(void) /* sub_5E8C00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e8c00);
    /* 005e8c00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e8c01: mov ebp, esp */ r_ebp = r_esp;
    /* 005e8c03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e8c04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e8c07: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005e8c09: push 0x75ecfc */ { u32 v = 0x75ecfcu; r_esp -= 4; W32(r_esp, v); }
    /* 005e8c0e: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8c10: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8c12: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8c15: call 0x5e97f0 */ r_esp -= 4; W32(r_esp, 0x5e8c1au); f_005e97f0();
    /* 005e8c1a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8c1c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8c1e: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005e8c23: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005e8c26: call 0x5fb3a0 */ r_esp -= 4; W32(r_esp, 0x5e8c2bu); f_005fb3a0();
    /* 005e8c2b: mov ecx, eax */ r_ecx = r_eax;
    /* 005e8c2d: call 0x6064e0 */ r_esp -= 4; W32(r_esp, 0x5e8c32u); f_006064e0();
    /* 005e8c32: mov esp, ebp */ r_esp = r_ebp;
    /* 005e8c34: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e8c35: ret  */ FN_RET(0x005e8c00); r_esp += 4; return;
}

void f_005e8c40(void) /* sub_5E8C40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e8c40);
    /* 005e8c40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e8c41: mov ebp, esp */ r_ebp = r_esp;
    /* 005e8c43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e8c44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e8c47: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8c49: push 0x75ed24 */ { u32 v = 0x75ed24u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8c4e: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8c50: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8c52: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8c55: call 0x5e97f0 */ r_esp -= 4; W32(r_esp, 0x5e8c5au); f_005e97f0();
    /* 005e8c5a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8c5c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8c5e: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005e8c63: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005e8c66: call 0x5fb3a0 */ r_esp -= 4; W32(r_esp, 0x5e8c6bu); f_005fb3a0();
    /* 005e8c6b: mov ecx, eax */ r_ecx = r_eax;
    /* 005e8c6d: call 0x6064e0 */ r_esp -= 4; W32(r_esp, 0x5e8c72u); f_006064e0();
    /* 005e8c72: mov esp, ebp */ r_esp = r_ebp;
    /* 005e8c74: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e8c75: ret  */ FN_RET(0x005e8c40); r_esp += 4; return;
}

void f_005e8c80(void) /* sub_5E8C80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e8c80);
    /* 005e8c80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e8c81: mov ebp, esp */ r_ebp = r_esp;
    /* 005e8c83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e8c84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e8c87: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8c89: push 0x75ed3c */ { u32 v = 0x75ed3cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e8c8e: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8c90: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8c92: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8c95: call 0x5e97f0 */ r_esp -= 4; W32(r_esp, 0x5e8c9au); f_005e97f0();
    /* 005e8c9a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8c9c: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8c9e: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005e8ca3: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005e8ca6: call 0x5fb3a0 */ r_esp -= 4; W32(r_esp, 0x5e8cabu); f_005fb3a0();
    /* 005e8cab: mov ecx, eax */ r_ecx = r_eax;
    /* 005e8cad: call 0x6064e0 */ r_esp -= 4; W32(r_esp, 0x5e8cb2u); f_006064e0();
    /* 005e8cb2: mov esp, ebp */ r_esp = r_ebp;
    /* 005e8cb4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e8cb5: ret  */ FN_RET(0x005e8c80); r_esp += 4; return;
}

void f_005e8cc0(void) /* sub_5E8CC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e8cc0);
    /* 005e8cc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e8cc1: mov ebp, esp */ r_ebp = r_esp;
    /* 005e8cc3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e8cc4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e8cc7: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005e8cc9: push 0x75ed4c */ { u32 v = 0x75ed4cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e8cce: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8cd0: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8cd2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8cd5: call 0x5e97f0 */ r_esp -= 4; W32(r_esp, 0x5e8cdau); f_005e97f0();
    /* 005e8cda: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8cdc: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8cde: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005e8ce3: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005e8ce6: call 0x5fb3a0 */ r_esp -= 4; W32(r_esp, 0x5e8cebu); f_005fb3a0();
    /* 005e8ceb: mov ecx, eax */ r_ecx = r_eax;
    /* 005e8ced: call 0x6064e0 */ r_esp -= 4; W32(r_esp, 0x5e8cf2u); f_006064e0();
    /* 005e8cf2: mov esp, ebp */ r_esp = r_ebp;
    /* 005e8cf4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e8cf5: ret  */ FN_RET(0x005e8cc0); r_esp += 4; return;
}

void f_005e8d00(void) /* sub_5E8D00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e8d00);
    /* 005e8d00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e8d01: mov ebp, esp */ r_ebp = r_esp;
    /* 005e8d03: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e8d06: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005e8d09: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e8d10: jmp 0x5e8d1b */ goto L_005e8d1b;
L_005e8d12:; BB(0x005e8d12);
    /* 005e8d12: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8d15: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e8d18: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005e8d1b:; BB(0x005e8d1b);
    /* 005e8d1b: cmp dword ptr [ebp - 4], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e8d1f: jge 0x5e8d45 */ if ((fS==fO)) goto L_005e8d45;
L_005e8d21:; BB(0x005e8d21);
    /* 005e8d21: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e8d23: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8d26: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e8d27: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005e8d2d: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 005e8d30: call 0x5fb3a0 */ r_esp -= 4; W32(r_esp, 0x5e8d35u); f_005fb3a0();
    /* 005e8d35: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e8d36: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005e8d3b: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005e8d3e: call 0x5fbd10 */ r_esp -= 4; W32(r_esp, 0x5e8d43u); f_005fbd10();
    /* 005e8d43: jmp 0x5e8d12 */ goto L_005e8d12;
L_005e8d45:; BB(0x005e8d45);
    /* 005e8d45: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e8d47: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8d4c: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005e8d52: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005e8d55: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x5e8d5au); f_005fb300();
    /* 005e8d5a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e8d5b: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005e8d61: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 005e8d64: call 0x5fbcb0 */ r_esp -= 4; W32(r_esp, 0x5e8d69u); f_005fbcb0();
    /* 005e8d69: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e8d6b: push 0xc9 */ { u32 v = 0xc9u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8d70: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005e8d75: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005e8d78: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x5e8d7du); f_005fb300();
    /* 005e8d7d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e8d7e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005e8d84: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005e8d87: call 0x5fbcb0 */ r_esp -= 4; W32(r_esp, 0x5e8d8cu); f_005fbcb0();
    /* 005e8d8c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e8d8e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8d90: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005e8d96: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 005e8d99: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x5e8d9eu); f_005fb2b0();
    /* 005e8d9e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e8d9f: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005e8da4: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005e8da7: call 0x5fbc80 */ r_esp -= 4; W32(r_esp, 0x5e8dacu); f_005fbc80();
    /* 005e8dac: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e8dae: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8db0: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005e8db6: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005e8db9: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x5e8dbeu); f_005fb2b0();
    /* 005e8dbe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e8dbf: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005e8dc5: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 005e8dc8: call 0x5fbc80 */ r_esp -= 4; W32(r_esp, 0x5e8dcdu); f_005fbc80();
    /* 005e8dcd: mov esp, ebp */ r_esp = r_ebp;
    /* 005e8dcf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e8dd0: ret  */ FN_RET(0x005e8d00); r_esp += 4; return;
}

void f_005e8de0(void) /* sub_5E8DE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e8de0);
    /* 005e8de0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e8de1: mov ebp, esp */ r_ebp = r_esp;
    /* 005e8de3: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e8de6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005e8de9: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005e8df0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e8df7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8df9: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005e8dfe: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005e8e01: call 0x5fb3a0 */ r_esp -= 4; W32(r_esp, 0x5e8e06u); f_005fb3a0();
    /* 005e8e06: mov ecx, eax */ r_ecx = r_eax;
    /* 005e8e08: call 0x606490 */ r_esp -= 4; W32(r_esp, 0x5e8e0du); f_00606490();
    /* 005e8e0d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005e8e10: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8e14: jne 0x5e8eb3 */ if (!fZ) goto L_005e8eb3;
L_005e8e1a:; BB(0x005e8e1a);
    /* 005e8e1a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8e1c: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005e8e22: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005e8e25: call 0x5fb3a0 */ r_esp -= 4; W32(r_esp, 0x5e8e2au); f_005fb3a0();
    /* 005e8e2a: mov ecx, eax */ r_ecx = r_eax;
    /* 005e8e2c: call 0x606490 */ r_esp -= 4; W32(r_esp, 0x5e8e31u); f_00606490();
    /* 005e8e31: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005e8e34: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8e37: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005e8e3a: cmp dword ptr [ebp - 0x10], 9 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005e8e3e: ja 0x5e8eae */ if ((!fC&&!fZ)) goto L_005e8eae;
L_005e8e40:; BB(0x005e8e40);
    /* 005e8e40: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e8e43: jmp dword ptr [eax*4 + 0x5e9010] */ { u32 t = R32((u32)(r_eax*4+0x5e9010u)); switch (t) { case 0x5e8e4au: goto L_005e8e4a; case 0x5e8e54u: goto L_005e8e54; case 0x5e8e5eu: goto L_005e8e5e; case 0x5e8e68u: goto L_005e8e68; case 0x5e8e72u: goto L_005e8e72; case 0x5e8e7cu: goto L_005e8e7c; case 0x5e8e86u: goto L_005e8e86; case 0x5e8e90u: goto L_005e8e90; case 0x5e8e9au: goto L_005e8e9a; case 0x5e8ea4u: goto L_005e8ea4; case 0x5e8ee9u: goto L_005e8ee9; case 0x5e8ef3u: goto L_005e8ef3; case 0x5e8efdu: goto L_005e8efd; case 0x5e8f07u: goto L_005e8f07; case 0x5e8f11u: goto L_005e8f11; case 0x5e8f1bu: goto L_005e8f1b; case 0x5e8f60u: goto L_005e8f60; case 0x5e8f6au: goto L_005e8f6a; case 0x5e8f74u: goto L_005e8f74; case 0x5e8f7eu: goto L_005e8f7e; case 0x5e8fc0u: goto L_005e8fc0; case 0x5e8fc7u: goto L_005e8fc7; case 0x5e8fceu: goto L_005e8fce; case 0x5e8fd5u: goto L_005e8fd5; case 0x5e8fdcu: goto L_005e8fdc; case 0x5e8fe3u: goto L_005e8fe3; case 0x5e8feau: goto L_005e8fea; case 0x5e8ff1u: goto L_005e8ff1; case 0x5e8ff8u: goto L_005e8ff8; case 0x5e8fffu: goto L_005e8fff; default: UNSUP(0x005e8e43, "jump table entry is not a known target"); } }
L_005e8e4a:; BB(0x005e8e4a);
    /* 005e8e4a: mov eax, 0x30ef6a */ r_eax = 0x30ef6au;
    /* 005e8e4f: jmp 0x5e9009 */ goto L_005e9009;
L_005e8e54:; BB(0x005e8e54);
    /* 005e8e54: mov eax, 0x30ef6f */ r_eax = 0x30ef6fu;
    /* 005e8e59: jmp 0x5e9009 */ goto L_005e9009;
L_005e8e5e:; BB(0x005e8e5e);
    /* 005e8e5e: mov eax, 0x30ef71 */ r_eax = 0x30ef71u;
    /* 005e8e63: jmp 0x5e9009 */ goto L_005e9009;
L_005e8e68:; BB(0x005e8e68);
    /* 005e8e68: mov eax, 0x30ef6d */ r_eax = 0x30ef6du;
    /* 005e8e6d: jmp 0x5e9009 */ goto L_005e9009;
L_005e8e72:; BB(0x005e8e72);
    /* 005e8e72: mov eax, 0x30ef70 */ r_eax = 0x30ef70u;
    /* 005e8e77: jmp 0x5e9009 */ goto L_005e9009;
L_005e8e7c:; BB(0x005e8e7c);
    /* 005e8e7c: mov eax, 0x30ef68 */ r_eax = 0x30ef68u;
    /* 005e8e81: jmp 0x5e9009 */ goto L_005e9009;
L_005e8e86:; BB(0x005e8e86);
    /* 005e8e86: mov eax, 0x30ef6b */ r_eax = 0x30ef6bu;
    /* 005e8e8b: jmp 0x5e9009 */ goto L_005e9009;
L_005e8e90:; BB(0x005e8e90);
    /* 005e8e90: mov eax, 0x30ef69 */ r_eax = 0x30ef69u;
    /* 005e8e95: jmp 0x5e9009 */ goto L_005e9009;
L_005e8e9a:; BB(0x005e8e9a);
    /* 005e8e9a: mov eax, 0x30ef6e */ r_eax = 0x30ef6eu;
    /* 005e8e9f: jmp 0x5e9009 */ goto L_005e9009;
L_005e8ea4:; BB(0x005e8ea4);
    /* 005e8ea4: mov eax, 0x30ef6c */ r_eax = 0x30ef6cu;
    /* 005e8ea9: jmp 0x5e9009 */ goto L_005e9009;
L_005e8eae:; BB(0x005e8eae);
    /* 005e8eae: jmp 0x5e9006 */ goto L_005e9006;
L_005e8eb3:; BB(0x005e8eb3);
    /* 005e8eb3: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8eb7: jne 0x5e8f2a */ if (!fZ) goto L_005e8f2a;
L_005e8eb9:; BB(0x005e8eb9);
    /* 005e8eb9: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8ebb: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005e8ec1: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005e8ec4: call 0x5fb3a0 */ r_esp -= 4; W32(r_esp, 0x5e8ec9u); f_005fb3a0();
    /* 005e8ec9: mov ecx, eax */ r_ecx = r_eax;
    /* 005e8ecb: call 0x606490 */ r_esp -= 4; W32(r_esp, 0x5e8ed0u); f_00606490();
    /* 005e8ed0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005e8ed3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8ed6: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005e8ed9: cmp dword ptr [ebp - 0x14], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005e8edd: ja 0x5e8f25 */ if ((!fC&&!fZ)) goto L_005e8f25;
L_005e8edf:; BB(0x005e8edf);
    /* 005e8edf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e8ee2: jmp dword ptr [eax*4 + 0x5e9038] */ { u32 t = R32((u32)(r_eax*4+0x5e9038u)); switch (t) { case 0x5e8ea4u: goto L_005e8ea4; case 0x5e8e9au: goto L_005e8e9a; case 0x5e8e90u: goto L_005e8e90; case 0x5e8e86u: goto L_005e8e86; case 0x5e8e7cu: goto L_005e8e7c; case 0x5e8e72u: goto L_005e8e72; case 0x5e8e68u: goto L_005e8e68; case 0x5e8e5eu: goto L_005e8e5e; case 0x5e8e54u: goto L_005e8e54; case 0x5e8e4au: goto L_005e8e4a; case 0x5e8ee9u: goto L_005e8ee9; case 0x5e8ef3u: goto L_005e8ef3; case 0x5e8efdu: goto L_005e8efd; case 0x5e8f07u: goto L_005e8f07; case 0x5e8f11u: goto L_005e8f11; case 0x5e8f1bu: goto L_005e8f1b; case 0x5e8f60u: goto L_005e8f60; case 0x5e8f6au: goto L_005e8f6a; case 0x5e8f74u: goto L_005e8f74; case 0x5e8f7eu: goto L_005e8f7e; case 0x5e8fc0u: goto L_005e8fc0; case 0x5e8fc7u: goto L_005e8fc7; case 0x5e8fceu: goto L_005e8fce; case 0x5e8fd5u: goto L_005e8fd5; case 0x5e8fdcu: goto L_005e8fdc; case 0x5e8fe3u: goto L_005e8fe3; case 0x5e8feau: goto L_005e8fea; case 0x5e8ff1u: goto L_005e8ff1; case 0x5e8ff8u: goto L_005e8ff8; case 0x5e8fffu: goto L_005e8fff; default: UNSUP(0x005e8ee2, "jump table entry is not a known target"); } }
L_005e8ee9:; BB(0x005e8ee9);
    /* 005e8ee9: mov eax, 0x30ef72 */ r_eax = 0x30ef72u;
    /* 005e8eee: jmp 0x5e9009 */ goto L_005e9009;
L_005e8ef3:; BB(0x005e8ef3);
    /* 005e8ef3: mov eax, 0x30ef75 */ r_eax = 0x30ef75u;
    /* 005e8ef8: jmp 0x5e9009 */ goto L_005e9009;
L_005e8efd:; BB(0x005e8efd);
    /* 005e8efd: mov eax, 0x30ef78 */ r_eax = 0x30ef78u;
    /* 005e8f02: jmp 0x5e9009 */ goto L_005e9009;
L_005e8f07:; BB(0x005e8f07);
    /* 005e8f07: mov eax, 0x30ef73 */ r_eax = 0x30ef73u;
    /* 005e8f0c: jmp 0x5e9009 */ goto L_005e9009;
L_005e8f11:; BB(0x005e8f11);
    /* 005e8f11: mov eax, 0x30ef76 */ r_eax = 0x30ef76u;
    /* 005e8f16: jmp 0x5e9009 */ goto L_005e9009;
L_005e8f1b:; BB(0x005e8f1b);
    /* 005e8f1b: mov eax, 0x30ef79 */ r_eax = 0x30ef79u;
    /* 005e8f20: jmp 0x5e9009 */ goto L_005e9009;
L_005e8f25:; BB(0x005e8f25);
    /* 005e8f25: jmp 0x5e9006 */ goto L_005e9006;
L_005e8f2a:; BB(0x005e8f2a);
    /* 005e8f2a: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8f2e: jne 0x5e8f8a */ if (!fZ) goto L_005e8f8a;
L_005e8f30:; BB(0x005e8f30);
    /* 005e8f30: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8f32: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005e8f38: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005e8f3b: call 0x5fb3a0 */ r_esp -= 4; W32(r_esp, 0x5e8f40u); f_005fb3a0();
    /* 005e8f40: mov ecx, eax */ r_ecx = r_eax;
    /* 005e8f42: call 0x606490 */ r_esp -= 4; W32(r_esp, 0x5e8f47u); f_00606490();
    /* 005e8f47: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005e8f4a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8f4d: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005e8f50: cmp dword ptr [ebp - 0x18], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005e8f54: ja 0x5e8f88 */ if ((!fC&&!fZ)) goto L_005e8f88;
L_005e8f56:; BB(0x005e8f56);
    /* 005e8f56: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e8f59: jmp dword ptr [eax*4 + 0x5e9050] */ { u32 t = R32((u32)(r_eax*4+0x5e9050u)); switch (t) { case 0x5e8f1bu: goto L_005e8f1b; case 0x5e8f11u: goto L_005e8f11; case 0x5e8f07u: goto L_005e8f07; case 0x5e8efdu: goto L_005e8efd; case 0x5e8ef3u: goto L_005e8ef3; case 0x5e8ee9u: goto L_005e8ee9; case 0x5e8ea4u: goto L_005e8ea4; case 0x5e8e9au: goto L_005e8e9a; case 0x5e8e90u: goto L_005e8e90; case 0x5e8e86u: goto L_005e8e86; case 0x5e8e7cu: goto L_005e8e7c; case 0x5e8e72u: goto L_005e8e72; case 0x5e8e68u: goto L_005e8e68; case 0x5e8e5eu: goto L_005e8e5e; case 0x5e8e54u: goto L_005e8e54; case 0x5e8e4au: goto L_005e8e4a; case 0x5e8f60u: goto L_005e8f60; case 0x5e8f6au: goto L_005e8f6a; case 0x5e8f74u: goto L_005e8f74; case 0x5e8f7eu: goto L_005e8f7e; case 0x5e8fc0u: goto L_005e8fc0; case 0x5e8fc7u: goto L_005e8fc7; case 0x5e8fceu: goto L_005e8fce; case 0x5e8fd5u: goto L_005e8fd5; case 0x5e8fdcu: goto L_005e8fdc; case 0x5e8fe3u: goto L_005e8fe3; case 0x5e8feau: goto L_005e8fea; case 0x5e8ff1u: goto L_005e8ff1; case 0x5e8ff8u: goto L_005e8ff8; case 0x5e8fffu: goto L_005e8fff; default: UNSUP(0x005e8f59, "jump table entry is not a known target"); } }
L_005e8f60:; BB(0x005e8f60);
    /* 005e8f60: mov eax, 0x30ef7b */ r_eax = 0x30ef7bu;
    /* 005e8f65: jmp 0x5e9009 */ goto L_005e9009;
L_005e8f6a:; BB(0x005e8f6a);
    /* 005e8f6a: mov eax, 0x30ef74 */ r_eax = 0x30ef74u;
    /* 005e8f6f: jmp 0x5e9009 */ goto L_005e9009;
L_005e8f74:; BB(0x005e8f74);
    /* 005e8f74: mov eax, 0x30ef77 */ r_eax = 0x30ef77u;
    /* 005e8f79: jmp 0x5e9009 */ goto L_005e9009;
L_005e8f7e:; BB(0x005e8f7e);
    /* 005e8f7e: mov eax, 0x30ef7a */ r_eax = 0x30ef7au;
    /* 005e8f83: jmp 0x5e9009 */ goto L_005e9009;
L_005e8f88:; BB(0x005e8f88);
    /* 005e8f88: jmp 0x5e9006 */ goto L_005e9006;
L_005e8f8a:; BB(0x005e8f8a);
    /* 005e8f8a: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8f8e: jne 0x5e9006 */ if (!fZ) goto L_005e9006;
L_005e8f90:; BB(0x005e8f90);
    /* 005e8f90: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8f92: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005e8f98: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005e8f9b: call 0x5fb3a0 */ r_esp -= 4; W32(r_esp, 0x5e8fa0u); f_005fb3a0();
    /* 005e8fa0: mov ecx, eax */ r_ecx = r_eax;
    /* 005e8fa2: call 0x606490 */ r_esp -= 4; W32(r_esp, 0x5e8fa7u); f_00606490();
    /* 005e8fa7: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005e8faa: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8fad: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005e8fb0: cmp dword ptr [ebp - 0x1c], 9 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005e8fb4: ja 0x5e9006 */ if ((!fC&&!fZ)) goto L_005e9006;
L_005e8fb6:; BB(0x005e8fb6);
    /* 005e8fb6: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e8fb9: jmp dword ptr [eax*4 + 0x5e9060] */ { u32 t = R32((u32)(r_eax*4+0x5e9060u)); switch (t) { case 0x5e8f7eu: goto L_005e8f7e; case 0x5e8f74u: goto L_005e8f74; case 0x5e8f6au: goto L_005e8f6a; case 0x5e8f60u: goto L_005e8f60; case 0x5e8f1bu: goto L_005e8f1b; case 0x5e8f11u: goto L_005e8f11; case 0x5e8f07u: goto L_005e8f07; case 0x5e8efdu: goto L_005e8efd; case 0x5e8ef3u: goto L_005e8ef3; case 0x5e8ee9u: goto L_005e8ee9; case 0x5e8ea4u: goto L_005e8ea4; case 0x5e8e9au: goto L_005e8e9a; case 0x5e8e90u: goto L_005e8e90; case 0x5e8e86u: goto L_005e8e86; case 0x5e8e7cu: goto L_005e8e7c; case 0x5e8e72u: goto L_005e8e72; case 0x5e8e68u: goto L_005e8e68; case 0x5e8e5eu: goto L_005e8e5e; case 0x5e8e54u: goto L_005e8e54; case 0x5e8e4au: goto L_005e8e4a; case 0x5e8fc0u: goto L_005e8fc0; case 0x5e8fc7u: goto L_005e8fc7; case 0x5e8fceu: goto L_005e8fce; case 0x5e8fd5u: goto L_005e8fd5; case 0x5e8fdcu: goto L_005e8fdc; case 0x5e8fe3u: goto L_005e8fe3; case 0x5e8feau: goto L_005e8fea; case 0x5e8ff1u: goto L_005e8ff1; case 0x5e8ff8u: goto L_005e8ff8; case 0x5e8fffu: goto L_005e8fff; default: UNSUP(0x005e8fb9, "jump table entry is not a known target"); } }
L_005e8fc0:; BB(0x005e8fc0);
    /* 005e8fc0: mov eax, 0x30ef5f */ r_eax = 0x30ef5fu;
    /* 005e8fc5: jmp 0x5e9009 */ goto L_005e9009;
L_005e8fc7:; BB(0x005e8fc7);
    /* 005e8fc7: mov eax, 0x30ef60 */ r_eax = 0x30ef60u;
    /* 005e8fcc: jmp 0x5e9009 */ goto L_005e9009;
L_005e8fce:; BB(0x005e8fce);
    /* 005e8fce: mov eax, 0x30ef61 */ r_eax = 0x30ef61u;
    /* 005e8fd3: jmp 0x5e9009 */ goto L_005e9009;
L_005e8fd5:; BB(0x005e8fd5);
    /* 005e8fd5: mov eax, 0x30ef62 */ r_eax = 0x30ef62u;
    /* 005e8fda: jmp 0x5e9009 */ goto L_005e9009;
L_005e8fdc:; BB(0x005e8fdc);
    /* 005e8fdc: mov eax, 0x30ef63 */ r_eax = 0x30ef63u;
    /* 005e8fe1: jmp 0x5e9009 */ goto L_005e9009;
L_005e8fe3:; BB(0x005e8fe3);
    /* 005e8fe3: mov eax, 0x30ef65 */ r_eax = 0x30ef65u;
    /* 005e8fe8: jmp 0x5e9009 */ goto L_005e9009;
L_005e8fea:; BB(0x005e8fea);
    /* 005e8fea: mov eax, 0x30ef66 */ r_eax = 0x30ef66u;
    /* 005e8fef: jmp 0x5e9009 */ goto L_005e9009;
L_005e8ff1:; BB(0x005e8ff1);
    /* 005e8ff1: mov eax, 0x30ef67 */ r_eax = 0x30ef67u;
    /* 005e8ff6: jmp 0x5e9009 */ goto L_005e9009;
L_005e8ff8:; BB(0x005e8ff8);
    /* 005e8ff8: mov eax, 0x30fef8 */ r_eax = 0x30fef8u;
    /* 005e8ffd: jmp 0x5e9009 */ goto L_005e9009;
L_005e8fff:; BB(0x005e8fff);
    /* 005e8fff: mov eax, 0x30fb10 */ r_eax = 0x30fb10u;
    /* 005e9004: jmp 0x5e9009 */ goto L_005e9009;
L_005e9006:; BB(0x005e9006);
    /* 005e9006: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_005e9009:; BB(0x005e9009);
    /* 005e9009: mov esp, ebp */ r_esp = r_ebp;
    /* 005e900b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e900c: ret  */ FN_RET(0x005e8de0); r_esp += 4; return;
}

