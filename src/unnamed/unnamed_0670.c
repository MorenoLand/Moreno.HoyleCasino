#include "protos.h"

void f_00670360(void) /* sub_670360 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00670360);
    /* 00670360: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00670361: mov ebp, esp */ r_ebp = r_esp;
    /* 00670363: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00670364: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00670367: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0067036a: mov eax, dword ptr [eax + 0xaf4] */ r_eax = R32((u32)(r_eax+0xaf4u));
    /* 00670370: mov esp, ebp */ r_esp = r_ebp;
    /* 00670372: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00670373: ret  */ FN_RET(0x00670360); r_esp += 4; return;
}

void f_006703e0(void) /* sub_6703E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006703e0);
    /* 006703e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006703e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006703e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006703e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006703e7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006703ea: mov eax, dword ptr [eax + 0xaf8] */ r_eax = R32((u32)(r_eax+0xaf8u));
    /* 006703f0: mov esp, ebp */ r_esp = r_ebp;
    /* 006703f2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006703f3: ret  */ FN_RET(0x006703e0); r_esp += 4; return;
}

void f_00670520(void) /* sub_670520 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00670520);
    /* 00670520: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00670521: mov ebp, esp */ r_ebp = r_esp;
    /* 00670523: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00670526: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00670529: movzx eax, byte ptr [ebp + 0xc] */ r_eax = (u32)R8((u32)(r_ebp+0xcu));
    /* 0067052d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067052f: jne 0x670577 */ if (!fZ) goto L_00670577;
L_00670531:; BB(0x00670531);
    /* 00670531: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00670534: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00670535: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0067053b: call 0x634560 */ r_esp -= 4; W32(r_esp, 0x670540u); f_00634560();
    /* 00670540: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00670543: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00670545: jne 0x670577 */ if (!fZ) goto L_00670577;
L_00670547:; BB(0x00670547);
    /* 00670547: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0067054a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0067054d: mov edx, dword ptr [ecx + eax*4 + 4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 00670551: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fS = ((r >> 31) & 1); }
    /* 00670554: jns 0x67055f */ if (!fS) goto L_0067055f;
L_00670556:; BB(0x00670556);
    /* 00670556: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0067055d: jmp 0x67056f */ goto L_0067056f;
L_0067055f:; BB(0x0067055f);
    /* 0067055f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00670562: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00670565: mov edx, dword ptr [ecx + eax*4 + 4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 00670569: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0067056c: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0067056f:; BB(0x0067056f);
    /* 0067056f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00670572: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00670575: jmp 0x670587 */ goto L_00670587;
L_00670577:; BB(0x00670577);
    /* 00670577: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0067057a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0067057d: mov eax, dword ptr [edx + ecx*4 + 4] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 00670581: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00670584: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_00670587:; BB(0x00670587);
    /* 00670587: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0067058a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0067058d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00670590: mov dword ptr [edx + ecx*4 + 4], eax */ W32((u32)(r_edx+r_ecx*4+0x4u), r_eax);
    /* 00670594: mov cl, byte ptr [ebp + 0xc] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 00670597: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00670598: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0067059b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067059c: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006705a2: call 0x634310 */ r_esp -= 4; W32(r_esp, 0x6705a7u); f_00634310();
    /* 006705a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006705a8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006705ab: call 0x670380 */ r_esp -= 4; W32(r_esp, 0x6705b0u); f_00670380();
    /* 006705b0: mov esp, ebp */ r_esp = r_ebp;
    /* 006705b2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006705b3: ret 8 */ FN_RET(0x00670520); r_esp += 12; return;
}

void f_006705c0(void) /* sub_6705C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006705c0);
    /* 006705c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006705c1: mov ebp, esp */ r_ebp = r_esp;
    /* 006705c3: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006705c6: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 006705cb: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006705cd: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 006705d0: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006705d3: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006705d6: mov ecx, dword ptr [eax + 0xafc] */ r_ecx = R32((u32)(r_eax+0xafcu));
    /* 006705dc: call 0x520e60 */ r_esp -= 4; W32(r_esp, 0x6705e1u); f_00520e60();
    /* 006705e1: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006705e4: mov byte ptr [ebp - 0x19], 0 */ W8((u32)(r_ebp+0xffffffe7u), 0x0u);
    /* 006705e8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006705eb: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 006705ee: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006705f5: jmp 0x670600 */ goto L_00670600;
L_006705f7:; BB(0x006705f7);
    /* 006705f7: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006705fa: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006705fd: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_00670600:; BB(0x00670600);
    /* 00670600: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00670603: movsx ecx, byte ptr [eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 00670606: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00670608: je 0x670665 */ if (fZ) goto L_00670665;
L_0067060a:; BB(0x0067060a);
    /* 0067060a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0067060d: movsx eax, byte ptr [edx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx));
    /* 00670610: cmp eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00670613: jl 0x67063b */ if ((fS!=fO)) goto L_0067063b;
L_00670615:; BB(0x00670615);
    /* 00670615: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00670618: movsx edx, byte ptr [ecx] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx));
    /* 0067061b: cmp edx, 0x39 */ {  u32 a = r_edx; u32 b = 0x39u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067061e: jg 0x67063b */ if ((!fZ&&fS==fO)) goto L_0067063b;
L_00670620:; BB(0x00670620);
    /* 00670620: mov byte ptr [ebp - 0x19], 1 */ W8((u32)(r_ebp+0xffffffe7u), 0x1u);
    /* 00670624: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00670627: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0067062a: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 0067062c: mov byte ptr [ebp + eax - 0x14], dl */ W8((u32)(r_ebp+r_eax+0xffffffecu), (u8)r_edx);
    /* 00670630: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00670633: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00670636: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00670639: jmp 0x670663 */ goto L_00670663;
L_0067063b:; BB(0x0067063b);
    /* 0067063b: movzx ecx, byte ptr [ebp - 0x19] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffe7u));
    /* 0067063f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00670641: je 0x670663 */ if (fZ) goto L_00670663;
L_00670643:; BB(0x00670643);
    /* 00670643: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00670646: mov byte ptr [ebp + edx - 0x14], 0 */ W8((u32)(r_ebp+r_edx+0xffffffecu), 0x0u);
    /* 0067064b: lea eax, [ebp - 0x14] */ r_eax = (u32)(r_ebp+0xffffffecu);
    /* 0067064e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067064f: call dword ptr [0x6b223c] */ { u32 t = R32((u32)(0x6b223cu)); r_esp -= 4; W32(r_esp, 0x670655u); call_ind(t); }
    /* 00670655: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00670658: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067065b: mov dword ptr [ecx + 0xb00], eax */ W32((u32)(r_ecx+0xb00u), r_eax);
    /* 00670661: jmp 0x670665 */ goto L_00670665;
L_00670663:; BB(0x00670663);
    /* 00670663: jmp 0x6705f7 */ goto L_006705f7;
L_00670665:; BB(0x00670665);
    /* 00670665: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00670668: mov eax, dword ptr [edx + 0xb00] */ r_eax = R32((u32)(r_edx+0xb00u));
    /* 0067066e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00670671: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00670673: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x670678u); f_00686d72();
    /* 00670678: mov esp, ebp */ r_esp = r_ebp;
    /* 0067067a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067067b: ret  */ FN_RET(0x006705c0); r_esp += 4; return;
}

void f_006708c0(void) /* sub_6708C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006708c0);
    /* 006708c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006708c1: mov ebp, esp */ r_ebp = r_esp;
    /* 006708c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006708c5: push 0x6ad0da */ { u32 v = 0x6ad0dau; r_esp -= 4; W32(r_esp, v); }
    /* 006708ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006708d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006708d1: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006708d4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 006708d9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006708db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006708dc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 006708df: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 006708e5: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 006708e8: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006708ea: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006708ec: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006708ee: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006708f0: push 0x27ac40 */ { u32 v = 0x27ac40u; r_esp -= 4; W32(r_esp, v); }
    /* 006708f5: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006708f8: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x6708fdu); f_005eae80();
    /* 006708fd: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00670900: call 0x5eb5a0 */ r_esp -= 4; W32(r_esp, 0x670905u); f_005eb5a0();
    /* 00670905: push 0x1e8 */ { u32 v = 0x1e8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067090a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67090fu); f_00686d82();
    /* 0067090f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00670912: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00670915: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0067091c: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00670920: je 0x670933 */ if (fZ) goto L_00670933;
L_00670922:; BB(0x00670922);
    /* 00670922: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00670925: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00670926: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00670929: call 0x671810 */ r_esp -= 4; W32(r_esp, 0x67092eu); f_00671810();
    /* 0067092e: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00670931: jmp 0x67093a */ goto L_0067093a;
L_00670933:; BB(0x00670933);
    /* 00670933: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_0067093a:; BB(0x0067093a);
    /* 0067093a: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0067093d: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00670940: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00670947: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0067094a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067094d: mov dword ptr [edx + 0x188], eax */ W32((u32)(r_edx+0x188u), r_eax);
    /* 00670953: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00670956: mov ecx, dword ptr [ecx + 0x188] */ r_ecx = R32((u32)(r_ecx+0x188u));
    /* 0067095c: call 0x671950 */ r_esp -= 4; W32(r_esp, 0x670961u); f_00671950();
    /* 00670961: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 00670966: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67096bu); f_00686d82();
    /* 0067096b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067096e: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00670971: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00670978: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067097c: je 0x67098b */ if (fZ) goto L_0067098b;
L_0067097e:; BB(0x0067097e);
    /* 0067097e: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00670981: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x670986u); f_005eaaf0();
    /* 00670986: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00670989: jmp 0x670992 */ goto L_00670992;
L_0067098b:; BB(0x0067098b);
    /* 0067098b: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_00670992:; BB(0x00670992);
    /* 00670992: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00670995: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00670998: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067099f: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 006709a2: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006709a5: mov dword ptr [eax + 0x190], ecx */ W32((u32)(r_eax+0x190u), r_ecx);
    /* 006709ab: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006709ad: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 006709af: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006709b1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006709b3: push 0x27ac45 */ { u32 v = 0x27ac45u; r_esp -= 4; W32(r_esp, v); }
    /* 006709b8: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006709bb: mov ecx, dword ptr [edx + 0x190] */ r_ecx = R32((u32)(r_edx+0x190u));
    /* 006709c1: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x6709c6u); f_005eae80();
    /* 006709c6: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 006709c9: mov ecx, dword ptr [eax + 0x190] */ r_ecx = R32((u32)(r_eax+0x190u));
    /* 006709cf: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006709d2: mov eax, dword ptr [edx + 0x190] */ r_eax = R32((u32)(r_edx+0x190u));
    /* 006709d8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006709da: mov ecx, eax */ r_ecx = r_eax;
    /* 006709dc: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 006709df: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6709e1u); call_ind(t); }
    /* 006709e1: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 006709e6: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x6709ebu); f_00686d82();
    /* 006709eb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006709ee: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 006709f1: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 006709f8: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006709fc: je 0x670a0b */ if (fZ) goto L_00670a0b;
L_006709fe:; BB(0x006709fe);
    /* 006709fe: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00670a01: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x670a06u); f_005ec5a0();
    /* 00670a06: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00670a09: jmp 0x670a12 */ goto L_00670a12;
L_00670a0b:; BB(0x00670a0b);
    /* 00670a0b: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_00670a12:; BB(0x00670a12);
    /* 00670a12: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00670a15: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00670a18: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00670a1f: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00670a22: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00670a25: mov dword ptr [edx + 0x18c], eax */ W32((u32)(r_edx+0x18cu), r_eax);
    /* 00670a2b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00670a2d: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00670a2f: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00670a32: mov ecx, dword ptr [ecx + 0x190] */ r_ecx = R32((u32)(r_ecx+0x190u));
    /* 00670a38: call 0x5f53c0 */ r_esp -= 4; W32(r_esp, 0x670a3du); f_005f53c0();
    /* 00670a3d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00670a40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00670a41: push 0x245 */ { u32 v = 0x245u; r_esp -= 4; W32(r_esp, v); }
    /* 00670a46: push 0x1e1 */ { u32 v = 0x1e1u; r_esp -= 4; W32(r_esp, v); }
    /* 00670a4b: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00670a4d: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 00670a4f: push 0x4d */ { u32 v = 0x4du; r_esp -= 4; W32(r_esp, v); }
    /* 00670a51: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00670a56: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00670a59: mov ecx, dword ptr [edx + 0x18c] */ r_ecx = R32((u32)(r_edx+0x18cu));
    /* 00670a5f: call 0x5ec8f0 */ r_esp -= 4; W32(r_esp, 0x670a64u); f_005ec8f0();
    /* 00670a64: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00670a67: mov ecx, dword ptr [eax + 0x18c] */ r_ecx = R32((u32)(r_eax+0x18cu));
    /* 00670a6d: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00670a70: mov eax, dword ptr [edx + 0x18c] */ r_eax = R32((u32)(r_edx+0x18cu));
    /* 00670a76: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00670a78: mov ecx, eax */ r_ecx = r_eax;
    /* 00670a7a: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00670a7d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x670a7fu); call_ind(t); }
    /* 00670a7f: push 0x18c */ { u32 v = 0x18cu; r_esp -= 4; W32(r_esp, v); }
    /* 00670a84: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x670a89u); f_00686d82();
    /* 00670a89: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00670a8c: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00670a8f: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00670a96: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00670a9a: je 0x670aad */ if (fZ) goto L_00670aad;
L_00670a9c:; BB(0x00670a9c);
    /* 00670a9c: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00670a9f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00670aa0: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00670aa3: call 0x6711a0 */ r_esp -= 4; W32(r_esp, 0x670aa8u); f_006711a0();
    /* 00670aa8: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 00670aab: jmp 0x670ab4 */ goto L_00670ab4;
L_00670aad:; BB(0x00670aad);
    /* 00670aad: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_00670ab4:; BB(0x00670ab4);
    /* 00670ab4: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00670ab7: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 00670aba: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00670ac1: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00670ac4: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00670ac7: mov dword ptr [eax + 0x194], ecx */ W32((u32)(r_eax+0x194u), r_ecx);
    /* 00670acd: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00670ad0: mov ecx, dword ptr [edx + 0x194] */ r_ecx = R32((u32)(r_edx+0x194u));
    /* 00670ad6: call 0x6712d0 */ r_esp -= 4; W32(r_esp, 0x670adbu); f_006712d0();
    /* 00670adb: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00670ade: mov ecx, dword ptr [eax + 0x194] */ r_ecx = R32((u32)(r_eax+0x194u));
    /* 00670ae4: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00670ae7: mov eax, dword ptr [edx + 0x194] */ r_eax = R32((u32)(r_edx+0x194u));
    /* 00670aed: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00670aef: mov ecx, eax */ r_ecx = r_eax;
    /* 00670af1: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00670af4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x670af6u); call_ind(t); }
    /* 00670af6: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 00670afb: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x670b00u); f_00686d82();
    /* 00670b00: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00670b03: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00670b06: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 00670b0d: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00670b11: je 0x670b20 */ if (fZ) goto L_00670b20;
L_00670b13:; BB(0x00670b13);
    /* 00670b13: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00670b16: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x670b1bu); f_005eaaf0();
    /* 00670b1b: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00670b1e: jmp 0x670b27 */ goto L_00670b27;
L_00670b20:; BB(0x00670b20);
    /* 00670b20: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_00670b27:; BB(0x00670b27);
    /* 00670b27: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00670b2a: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00670b2d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00670b34: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00670b37: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00670b3a: mov dword ptr [edx + 0x198], eax */ W32((u32)(r_edx+0x198u), r_eax);
    /* 00670b40: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00670b42: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00670b44: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00670b46: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00670b48: push 0x27ac47 */ { u32 v = 0x27ac47u; r_esp -= 4; W32(r_esp, v); }
    /* 00670b4d: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00670b50: mov ecx, dword ptr [ecx + 0x198] */ r_ecx = R32((u32)(r_ecx+0x198u));
    /* 00670b56: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x670b5bu); f_005eae80();
    /* 00670b5b: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00670b5e: mov eax, dword ptr [edx + 0x198] */ r_eax = R32((u32)(r_edx+0x198u));
    /* 00670b64: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00670b67: mov ecx, dword ptr [ecx + 0x198] */ r_ecx = R32((u32)(r_ecx+0x198u));
    /* 00670b6d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00670b6f: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00670b72: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x670b74u); call_ind(t); }
    /* 00670b74: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00670b77: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00670b7e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00670b7f: mov esp, ebp */ r_esp = r_ebp;
    /* 00670b81: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00670b82: ret  */ FN_RET(0x006708c0); r_esp += 4; return;
}

void f_00670e30(void) /* sub_670E30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00670e30);
    /* 00670e30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00670e31: mov ebp, esp */ r_ebp = r_esp;
    /* 00670e33: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00670e35: push 0x6ad100 */ { u32 v = 0x6ad100u; r_esp -= 4; W32(r_esp, v); }
    /* 00670e3a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00670e40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00670e41: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00670e44: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00670e49: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00670e4b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00670e4c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00670e4f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00670e55: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00670e58: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00670e5b: mov byte ptr [eax + 0x184], 1 */ W8((u32)(r_eax+0x184u), 0x1u);
    /* 00670e62: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 00670e64: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x670e69u); f_00686d82();
    /* 00670e69: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00670e6c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00670e6f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00670e76: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00670e7a: je 0x670e91 */ if (fZ) goto L_00670e91;
L_00670e7c:; BB(0x00670e7c);
    /* 00670e7c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00670e7f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00670e80: mov dl, byte ptr [ebp + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 00670e83: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00670e84: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00670e87: call 0x671c80 */ r_esp -= 4; W32(r_esp, 0x670e8cu); f_00671c80();
    /* 00670e8c: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00670e8f: jmp 0x670e98 */ goto L_00670e98;
L_00670e91:; BB(0x00670e91);
    /* 00670e91: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00670e98:; BB(0x00670e98);
    /* 00670e98: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00670e9b: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00670e9e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00670ea5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00670ea8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00670ea9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00670eac: call 0x5f5df0 */ r_esp -= 4; W32(r_esp, 0x670eb1u); f_005f5df0();
    /* 00670eb1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00670eb4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00670ebb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00670ebc: mov esp, ebp */ r_esp = r_ebp;
    /* 00670ebe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00670ebf: ret 4 */ FN_RET(0x00670e30); r_esp += 8; return;
}

