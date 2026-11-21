#include "protos.h"

void f_00576030(void) /* sub_576030 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00576030);
    /* 00576030: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00576031: mov ebp, esp */ r_ebp = r_esp;
    /* 00576033: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00576035: push 0x6a63db */ { u32 v = 0x6a63dbu; r_esp -= 4; W32(r_esp, v); }
    /* 0057603a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00576040: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00576041: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00576044: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00576049: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057604b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057604c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0057604f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00576055: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00576058: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057605b: mov ecx, dword ptr [eax + 0x80] */ r_ecx = R32((u32)(r_eax+0x80u));
    /* 00576061: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00576062: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00576065: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 00576068: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057606b: mov ecx, dword ptr [ecx + 0x2c] */ r_ecx = R32((u32)(r_ecx+0x2cu));
    /* 0057606e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00576070: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00576076: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x576078u); call_ind(t); }
    /* 00576078: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0057607b: add ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0057607e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057607f: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00576082: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 00576085: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00576088: mov ecx, dword ptr [ecx + 0x30] */ r_ecx = R32((u32)(r_ecx+0x30u));
    /* 0057608b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0057608d: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00576093: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x576095u); call_ind(t); }
    /* 00576095: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00576098: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0057609b: imul ecx, ecx, 7 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x7u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057609e: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005760a1: add ecx, dword ptr [edx + 0x80] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x80u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005760a7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005760a8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005760ab: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 005760ae: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005760b1: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 005760b4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005760b6: mov ecx, eax */ r_ecx = r_eax;
    /* 005760b8: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005760be: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5760c0u); call_ind(t); }
    /* 005760c0: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 005760c2: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5760c7u); f_00686d82();
    /* 005760c7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005760ca: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005760cd: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005760d4: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005760d8: je 0x5760f1 */ if (fZ) goto L_005760f1;
L_005760da:; BB(0x005760da);
    /* 005760da: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005760dc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005760de: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005760e0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005760e2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005760e4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005760e7: call 0x601110 */ r_esp -= 4; W32(r_esp, 0x5760ecu); f_00601110();
    /* 005760ec: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005760ef: jmp 0x5760f8 */ goto L_005760f8;
L_005760f1:; BB(0x005760f1);
    /* 005760f1: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005760f8:; BB(0x005760f8);
    /* 005760f8: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005760fb: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005760fe: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00576105: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00576108: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00576109: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057610c: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0057610f: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x576114u); f_005f5d50();
    /* 00576114: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00576117: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0057611a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057611d: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 00576120: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00576122: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00576125: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x576127u); call_ind(t); }
    /* 00576127: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057612a: mov edx, dword ptr [ecx + 0x2c] */ r_edx = R32((u32)(r_ecx+0x2cu));
    /* 0057612d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00576130: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 00576133: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00576135: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00576138: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57613au); call_ind(t); }
    /* 0057613a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057613d: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 00576140: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00576143: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 00576146: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00576148: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0057614b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57614du); call_ind(t); }
    /* 0057614d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00576150: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00576157: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00576158: mov esp, ebp */ r_esp = r_ebp;
    /* 0057615a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057615b: ret 4 */ FN_RET(0x00576030); r_esp += 8; return;
}

void f_00576160(void) /* sub_576160 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00576160);
    /* 00576160: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00576161: mov ebp, esp */ r_ebp = r_esp;
    /* 00576163: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00576165: push 0x6a6401 */ { u32 v = 0x6a6401u; r_esp -= 4; W32(r_esp, v); }
    /* 0057616a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00576170: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00576171: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00576174: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00576179: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057617b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057617c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0057617f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00576185: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00576188: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057618b: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0057618e: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00576191: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 00576194: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00576196: mov ecx, eax */ r_ecx = r_eax;
    /* 00576198: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0057619b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57619du); call_ind(t); }
    /* 0057619d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005761a0: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 005761a3: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005761a6: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 005761a9: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005761ab: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005761ae: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5761b0u); call_ind(t); }
    /* 005761b0: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005761b3: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 005761b6: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005761b9: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 005761bc: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005761be: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005761c1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5761c3u); call_ind(t); }
    /* 005761c3: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 005761c5: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5761cau); f_00686d82();
    /* 005761ca: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005761cd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005761d0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005761d7: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005761db: je 0x5761ec */ if (fZ) goto L_005761ec;
L_005761dd:; BB(0x005761dd);
    /* 005761dd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005761df: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005761e2: call 0x600a70 */ r_esp -= 4; W32(r_esp, 0x5761e7u); f_00600a70();
    /* 005761e7: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005761ea: jmp 0x5761f3 */ goto L_005761f3;
L_005761ec:; BB(0x005761ec);
    /* 005761ec: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005761f3:; BB(0x005761f3);
    /* 005761f3: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005761f6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005761f9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00576200: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00576203: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00576204: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00576207: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0057620a: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x57620fu); f_005f5d50();
    /* 0057620f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00576212: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00576219: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0057621a: mov esp, ebp */ r_esp = r_ebp;
    /* 0057621c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057621d: ret  */ FN_RET(0x00576160); r_esp += 4; return;
}

void f_00576220(void) /* sub_576220 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00576220);
    /* 00576220: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00576221: mov ebp, esp */ r_ebp = r_esp;
    /* 00576223: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00576226: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00576229: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0057622f: jmp 0x57623d */ goto L_0057623d;
L_00576231:; BB(0x00576231);
    /* 00576231: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 00576235: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00576239: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_0057623d:; BB(0x0057623d);
    /* 0057623d: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00576241: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00576244: jge 0x576277 */ if ((fS==fO)) goto L_00576277;
L_00576246:; BB(0x00576246);
    /* 00576246: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00576248: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0057624c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057624f: mov ecx, dword ptr [eax + edx*4 + 0x28] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x28u));
    /* 00576253: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x576258u); f_005f5d50();
    /* 00576258: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0057625c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057625f: mov eax, dword ptr [edx + ecx*4 + 0x28] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x28u));
    /* 00576263: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00576267: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057626a: mov ecx, dword ptr [edx + ecx*4 + 0x28] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x28u));
    /* 0057626e: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00576270: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 00576273: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x576275u); call_ind(t); }
    /* 00576275: jmp 0x576231 */ goto L_00576231;
L_00576277:; BB(0x00576277);
    /* 00576277: mov esp, ebp */ r_esp = r_ebp;
    /* 00576279: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057627a: ret  */ FN_RET(0x00576220); r_esp += 4; return;
}

void f_00576280(void) /* sub_576280 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00576280);
    /* 00576280: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00576281: mov ebp, esp */ r_ebp = r_esp;
    /* 00576283: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00576286: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00576289: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057628b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057628d: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x576292u); f_0064c8a0();
    /* 00576292: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00576295: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00576298: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0057629b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057629e: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005762a1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005762a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005762a7: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 005762aa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005762ab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005762ad: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5762b2u); f_005dcb00();
    /* 005762b2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005762b5: mov ecx, eax */ r_ecx = r_eax;
    /* 005762b7: call 0x5d5ac0 */ r_esp -= 4; W32(r_esp, 0x5762bcu); f_005d5ac0();
    /* 005762bc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005762bf: cmp dword ptr [eax + 0x6c], 2 */ {  u32 a = R32((u32)(r_eax+0x6cu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005762c3: jle 0x5762d9 */ if ((fZ||fS!=fO)) goto L_005762d9;
L_005762c5:; BB(0x005762c5);
    /* 005762c5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005762c8: mov edx, dword ptr [ecx + 0x6c] */ r_edx = R32((u32)(r_ecx+0x6cu));
    /* 005762cb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005762cc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005762cf: call 0x576330 */ r_esp -= 4; W32(r_esp, 0x5762d4u); f_00576330();
    /* 005762d4: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005762d7: jl 0x5762fc */ if ((fS!=fO)) goto L_005762fc;
L_005762d9:; BB(0x005762d9);
    /* 005762d9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005762dc: cmp dword ptr [eax + 0x6c], 2 */ {  u32 a = R32((u32)(r_eax+0x6cu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005762e0: jg 0x576324 */ if ((!fZ&&fS==fO)) goto L_00576324;
L_005762e2:; BB(0x005762e2);
    /* 005762e2: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005762e6: jne 0x576324 */ if (!fZ) goto L_00576324;
L_005762e8:; BB(0x005762e8);
    /* 005762e8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005762eb: mov edx, dword ptr [ecx + 0x6c] */ r_edx = R32((u32)(r_ecx+0x6cu));
    /* 005762ee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005762ef: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005762f2: call 0x576400 */ r_esp -= 4; W32(r_esp, 0x5762f7u); f_00576400();
    /* 005762f7: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005762fa: jge 0x576324 */ if ((fS==fO)) goto L_00576324;
L_005762fc:; BB(0x005762fc);
    /* 005762fc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005762ff: cmp dword ptr [eax + 0x70], 0 */ {  u32 a = R32((u32)(r_eax+0x70u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00576303: jne 0x576324 */ if (!fZ) goto L_00576324;
L_00576305:; BB(0x00576305);
    /* 00576305: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00576308: cmp dword ptr [ecx + 0x74], 0 */ {  u32 a = R32((u32)(r_ecx+0x74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057630c: jne 0x576324 */ if (!fZ) goto L_00576324;
L_0057630e:; BB(0x0057630e);
    /* 0057630e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00576310: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x576315u); f_005dcb00();
    /* 00576315: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00576318: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00576319: mov ecx, dword ptr [0x793458] */ r_ecx = R32((u32)(0x793458u));
    /* 0057631f: call 0x5dbb70 */ r_esp -= 4; W32(r_esp, 0x576324u); f_005dbb70();
L_00576324:; BB(0x00576324);
    /* 00576324: mov esp, ebp */ r_esp = r_ebp;
    /* 00576326: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00576327: ret  */ FN_RET(0x00576280); r_esp += 4; return;
}

void f_00576460(void) /* sub_576460 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00576460);
    /* 00576460: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00576461: mov ebp, esp */ r_ebp = r_esp;
    /* 00576463: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00576464: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00576467: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057646a: cmp dword ptr [eax + 0x74], 3 */ {  u32 a = R32((u32)(r_eax+0x74u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057646e: jne 0x576472 */ if (!fZ) goto L_00576472;
L_00576470:; BB(0x00576470);
    /* 00576470: jmp 0x5764c2 */ goto L_005764c2;
L_00576472:; BB(0x00576472);
    /* 00576472: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00576475: cmp dword ptr [ecx + 0x70], 0 */ {  u32 a = R32((u32)(r_ecx+0x70u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00576479: je 0x5764b8 */ if (fZ) goto L_005764b8;
L_0057647b:; BB(0x0057647b);
    /* 0057647b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057647e: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 00576481: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00576484: mov ecx, dword ptr [ecx + 0x50] */ r_ecx = R32((u32)(r_ecx+0x50u));
    /* 00576487: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00576489: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 0057648f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x576491u); call_ind(t); }
    /* 00576491: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00576494: cmp dword ptr [ecx + 0x74], 3 */ {  u32 a = R32((u32)(r_ecx+0x74u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00576498: jge 0x5764b6 */ if ((fS==fO)) goto L_005764b6;
L_0057649a:; BB(0x0057649a);
    /* 0057649a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057649d: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005764a0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005764a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005764a4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005764a7: call 0x575e20 */ r_esp -= 4; W32(r_esp, 0x5764acu); f_00575e20();
    /* 005764ac: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005764ae: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005764b1: call 0x575d70 */ r_esp -= 4; W32(r_esp, 0x5764b6u); f_00575d70();
L_005764b6:; BB(0x005764b6);
    /* 005764b6: jmp 0x5764c2 */ goto L_005764c2;
L_005764b8:; BB(0x005764b8);
    /* 005764b8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005764ba: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005764bd: call 0x576740 */ r_esp -= 4; W32(r_esp, 0x5764c2u); f_00576740();
L_005764c2:; BB(0x005764c2);
    /* 005764c2: mov esp, ebp */ r_esp = r_ebp;
    /* 005764c4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005764c5: ret  */ FN_RET(0x00576460); r_esp += 4; return;
}

void f_005764d0(void) /* sub_5764D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005764d0);
    /* 005764d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005764d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005764d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005764d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005764d7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005764da: cmp dword ptr [eax + 0x74], 3 */ {  u32 a = R32((u32)(r_eax+0x74u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005764de: jne 0x5764e5 */ if (!fZ) goto L_005764e5;
L_005764e0:; BB(0x005764e0);
    /* 005764e0: jmp 0x57656b */ goto L_0057656b;
L_005764e5:; BB(0x005764e5);
    /* 005764e5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005764e8: cmp dword ptr [ecx + 0x70], 0 */ {  u32 a = R32((u32)(r_ecx+0x70u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005764ec: je 0x576557 */ if (fZ) goto L_00576557;
L_005764ee:; BB(0x005764ee);
    /* 005764ee: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005764f1: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 005764f4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005764f7: mov ecx, dword ptr [ecx + 0x50] */ r_ecx = R32((u32)(r_ecx+0x50u));
    /* 005764fa: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005764fc: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 00576502: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x576504u); call_ind(t); }
    /* 00576504: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00576507: mov edx, 3 */ r_edx = 0x3u;
    /* 0057650c: sub edx, dword ptr [ecx + 0x74] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x74u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0057650f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00576512: cmp dword ptr [eax + 0x70], edx */ {  u32 a = R32((u32)(r_eax+0x70u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00576515: jbe 0x576537 */ if ((fC||fZ)) goto L_00576537;
L_00576517:; BB(0x00576517);
    /* 00576517: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057651a: mov edx, 3 */ r_edx = 0x3u;
    /* 0057651f: sub edx, dword ptr [ecx + 0x74] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x74u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00576522: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00576523: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00576526: call 0x575d70 */ r_esp -= 4; W32(r_esp, 0x57652bu); f_00575d70();
    /* 0057652b: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0057652d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00576530: call 0x575e20 */ r_esp -= 4; W32(r_esp, 0x576535u); f_00575e20();
    /* 00576535: jmp 0x576555 */ goto L_00576555;
L_00576537:; BB(0x00576537);
    /* 00576537: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057653a: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 0057653d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057653e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00576541: call 0x575e20 */ r_esp -= 4; W32(r_esp, 0x576546u); f_00575e20();
    /* 00576546: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00576549: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0057654c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057654d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00576550: call 0x575d70 */ r_esp -= 4; W32(r_esp, 0x576555u); f_00575d70();
L_00576555:; BB(0x00576555);
    /* 00576555: jmp 0x57656b */ goto L_0057656b;
L_00576557:; BB(0x00576557);
    /* 00576557: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057655a: mov edx, 3 */ r_edx = 0x3u;
    /* 0057655f: sub edx, dword ptr [ecx + 0x74] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x74u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00576562: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00576563: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00576566: call 0x576740 */ r_esp -= 4; W32(r_esp, 0x57656bu); f_00576740();
L_0057656b:; BB(0x0057656b);
    /* 0057656b: mov esp, ebp */ r_esp = r_ebp;
    /* 0057656d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057656e: ret  */ FN_RET(0x005764d0); r_esp += 4; return;
}

void f_00576590(void) /* sub_576590 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00576590);
    /* 00576590: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00576591: mov ebp, esp */ r_ebp = r_esp;
    /* 00576593: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00576594: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00576597: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057659a: cmp dword ptr [eax + 0x74], 0 */ {  u32 a = R32((u32)(r_eax+0x74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057659e: je 0x5765ee */ if (fZ) goto L_005765ee;
L_005765a0:; BB(0x005765a0);
    /* 005765a0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005765a3: mov byte ptr [ecx + 0x68], 0 */ W8((u32)(r_ecx+0x68u), 0x0u);
    /* 005765a7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005765aa: call 0x575c10 */ r_esp -= 4; W32(r_esp, 0x5765afu); f_00575c10();
    /* 005765af: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005765b1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005765b4: call 0x575e80 */ r_esp -= 4; W32(r_esp, 0x5765b9u); f_00575e80();
    /* 005765b9: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005765bb: mov edx, dword ptr [0x793458] */ r_edx = R32((u32)(0x793458u));
    /* 005765c1: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005765c4: mov ecx, dword ptr [0x793458] */ r_ecx = R32((u32)(0x793458u));
    /* 005765ca: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 005765cd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005765cf: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005765d2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5765d4u); call_ind(t); }
    /* 005765d4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005765d6: mov ecx, dword ptr [0x793458] */ r_ecx = R32((u32)(0x793458u));
    /* 005765dc: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005765df: mov eax, dword ptr [0x793458] */ r_eax = R32((u32)(0x793458u));
    /* 005765e4: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005765e7: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005765e9: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005765ec: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5765eeu); call_ind(t); }
L_005765ee:; BB(0x005765ee);
    /* 005765ee: mov esp, ebp */ r_esp = r_ebp;
    /* 005765f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005765f1: ret  */ FN_RET(0x00576590); r_esp += 4; return;
}

void f_00576600(void) /* sub_576600 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00576600);
    /* 00576600: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00576601: mov ebp, esp */ r_ebp = r_esp;
    /* 00576603: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00576606: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 00576609: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057660b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057660c: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 00576612: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00576615: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00576616: fld1  */ FPUSH(1.0);
    /* 00576618: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0057661b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0057661d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0057661f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00576621: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00576623: push 0x18a88 */ { u32 v = 0x18a88u; r_esp -= 4; W32(r_esp, v); }
    /* 00576628: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0057662d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0057662f: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00576635: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 0057663b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57663du); call_ind(t); }
    /* 0057663d: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00576640: mov edx, dword ptr [ecx + 0x70] */ r_edx = R32((u32)(r_ecx+0x70u));
    /* 00576643: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00576644: lea eax, [ebp - 0x20] */ r_eax = (u32)(r_ebp+0xffffffe0u);
    /* 00576647: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00576648: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0057664b: call 0x574cc0 */ r_esp -= 4; W32(r_esp, 0x576650u); f_00574cc0();
    /* 00576650: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00576652: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00576655: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00576658: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0057665b: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0057665e: mov ecx, dword ptr [eax + 0x74] */ r_ecx = R32((u32)(r_eax+0x74u));
    /* 00576661: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00576662: lea edx, [ebp - 0x28] */ r_edx = (u32)(r_ebp+0xffffffd8u);
    /* 00576665: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00576666: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00576669: call 0x574cc0 */ r_esp -= 4; W32(r_esp, 0x57666eu); f_00574cc0();
    /* 0057666e: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00576670: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00576673: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00576676: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00576679: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057667b: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0057667e: call 0x575e20 */ r_esp -= 4; W32(r_esp, 0x576683u); f_00575e20();
    /* 00576683: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00576685: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00576688: call 0x575e80 */ r_esp -= 4; W32(r_esp, 0x57668du); f_00575e80();
    /* 0057668d: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00576690: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 00576693: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00576694: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00576697: call 0x575d70 */ r_esp -= 4; W32(r_esp, 0x57669cu); f_00575d70();
    /* 0057669c: cmp dword ptr [ebp - 0x10], 0x3b9aca00 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3b9aca00u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005766a3: jl 0x5766b3 */ if ((fS!=fO)) goto L_005766b3;
L_005766a5:; BB(0x005766a5);
    /* 005766a5: mov dword ptr [ebp - 0x10], 0x3b9aca00 */ W32((u32)(r_ebp+0xfffffff0u), 0x3b9aca00u);
    /* 005766ac: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_005766b3:; BB(0x005766b3);
    /* 005766b3: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005766b6: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 005766b9: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005766bc: mov ecx, dword ptr [ecx + 0x50] */ r_ecx = R32((u32)(r_ecx+0x50u));
    /* 005766bf: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005766c1: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 005766c7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5766c9u); call_ind(t); }
    /* 005766c9: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005766cc: mov edx, dword ptr [ecx + 0x54] */ r_edx = R32((u32)(r_ecx+0x54u));
    /* 005766cf: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005766d2: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 005766d5: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005766d7: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 005766dd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5766dfu); call_ind(t); }
    /* 005766df: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005766e2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005766e3: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005766e6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005766e7: lea eax, [ebp - 0x30] */ r_eax = (u32)(r_ebp+0xffffffd0u);
    /* 005766ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005766eb: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 005766ee: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x5766f3u); f_0064c5c0();
    /* 005766f3: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005766f5: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005766f8: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005766fb: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005766fe: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00576701: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00576702: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00576705: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00576706: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00576708: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x57670du); f_005dcb00();
    /* 0057670d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00576710: mov ecx, eax */ r_ecx = r_eax;
    /* 00576712: call 0x5d5fb0 */ r_esp -= 4; W32(r_esp, 0x576717u); f_005d5fb0();
    /* 00576717: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057671a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057671b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057671e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057671f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00576721: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x576726u); f_005dcb00();
    /* 00576726: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00576729: mov ecx, eax */ r_ecx = r_eax;
    /* 0057672b: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x576730u); f_005d5cf0();
    /* 00576730: mov esp, ebp */ r_esp = r_ebp;
    /* 00576732: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00576733: ret  */ FN_RET(0x00576600); r_esp += 4; return;
}

void f_00576860(void) /* sub_576860 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00576860);
    /* 00576860: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00576861: mov ebp, esp */ r_ebp = r_esp;
    /* 00576863: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00576866: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00576869: mov word ptr [ebp - 0x10], 0xffff */ W16((u32)(r_ebp+0xfffffff0u), 0xffffu);
    /* 0057686f: fldz  */ FPUSH(0.0);
    /* 00576871: fstp qword ptr [ebp - 8] */ W_F64((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 00576874: push 0x186a0 */ { u32 v = 0x186a0u; r_esp -= 4; W32(r_esp, v); }
    /* 00576879: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x57687eu); f_0062fbf0();
    /* 0057687e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00576881: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00576884: mov word ptr [ebp - 0xc], 0 */ W16((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0057688a: jmp 0x576898 */ goto L_00576898;
L_0057688c:; BB(0x0057688c);
    /* 0057688c: mov ax, word ptr [ebp - 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 00576890: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00576894: mov word ptr [ebp - 0xc], ax */ W16((u32)(r_ebp+0xfffffff4u), (u16)r_eax);
L_00576898:; BB(0x00576898);
    /* 00576898: movsx ecx, word ptr [ebp - 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 0057689c: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057689f: jge 0x5768d1 */ if ((fS==fO)) goto L_005768d1;
L_005768a1:; BB(0x005768a1);
    /* 005768a1: movsx edx, word ptr [ebp - 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 005768a5: fld qword ptr [0x6cae30] */ FPUSH(R_F64((u32)(0x6cae30u)));
    /* 005768ab: fmul qword ptr [edx*8 + 0x749448] */ ST(0) = ST(0) * R_F64((u32)(r_edx*8+0x749448u));
    /* 005768b2: fadd qword ptr [ebp - 8] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xfffffff8u));
    /* 005768b5: fstp qword ptr [ebp - 8] */ W_F64((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 005768b8: fild dword ptr [ebp - 0x14] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffecu)));
    /* 005768bb: fcomp qword ptr [ebp - 8] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xfffffff8u))); FPOP();
    /* 005768be: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005768c0: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 005768c3: jp 0x5768cf */ if (fP) goto L_005768cf;
L_005768c5:; BB(0x005768c5);
    /* 005768c5: mov ax, word ptr [ebp - 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 005768c9: mov word ptr [ebp - 0x10], ax */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_eax);
    /* 005768cd: jmp 0x5768d1 */ goto L_005768d1;
L_005768cf:; BB(0x005768cf);
    /* 005768cf: jmp 0x57688c */ goto L_0057688c;
L_005768d1:; BB(0x005768d1);
    /* 005768d1: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 005768d5: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005768d8: jne 0x5768e4 */ if (!fZ) goto L_005768e4;
L_005768da:; BB(0x005768da);
    /* 005768da: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005768dd: call 0x576b50 */ r_esp -= 4; W32(r_esp, 0x5768e2u); f_00576b50();
    /* 005768e2: jmp 0x576915 */ goto L_00576915;
L_005768e4:; BB(0x005768e4);
    /* 005768e4: mov word ptr [ebp - 0xc], 0 */ W16((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005768ea: jmp 0x5768f8 */ goto L_005768f8;
L_005768ec:; BB(0x005768ec);
    /* 005768ec: mov dx, word ptr [ebp - 0xc] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 005768f0: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005768f4: mov word ptr [ebp - 0xc], dx */ W16((u32)(r_ebp+0xfffffff4u), (u16)r_edx);
L_005768f8:; BB(0x005768f8);
    /* 005768f8: movsx eax, word ptr [ebp - 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 005768fc: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005768ff: jge 0x576915 */ if ((fS==fO)) goto L_00576915;
L_00576901:; BB(0x00576901);
    /* 00576901: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00576905: movsx edx, word ptr [ebp - 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 00576909: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057690c: mov dword ptr [eax + edx*4 + 0x80], ecx */ W32((u32)(r_eax+r_edx*4+0x80u), r_ecx);
    /* 00576913: jmp 0x5768ec */ goto L_005768ec;
L_00576915:; BB(0x00576915);
    /* 00576915: mov esp, ebp */ r_esp = r_ebp;
    /* 00576917: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00576918: ret  */ FN_RET(0x00576860); r_esp += 4; return;
}

void f_00576920(void) /* sub_576920 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00576920);
    /* 00576920: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00576921: mov ebp, esp */ r_ebp = r_esp;
    /* 00576923: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00576926: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00576929: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00576930: mov byte ptr [ebp - 0xd], 1 */ W8((u32)(r_ebp+0xfffffff3u), 0x1u);
    /* 00576934: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00576937: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00576939: cmp dword ptr [eax + 0x7c], -1 */ {  u32 a = R32((u32)(r_eax+0x7cu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057693d: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00576940: mov byte ptr [ebp - 5], cl */ W8((u32)(r_ebp+0xfffffffbu), (u8)r_ecx);
    /* 00576943: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00576946: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00576949: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0057694c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057694e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00576951: call 0x575e20 */ r_esp -= 4; W32(r_esp, 0x576956u); f_00575e20();
    /* 00576956: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00576959: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057695c: mov eax, dword ptr [ecx + 0x80] */ r_eax = R32((u32)(r_ecx+0x80u));
    /* 00576962: cmp eax, dword ptr [edx + 0x84] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x84u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00576968: jne 0x57697e */ if (!fZ) goto L_0057697e;
L_0057696a:; BB(0x0057696a);
    /* 0057696a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057696d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00576970: mov eax, dword ptr [ecx + 0x80] */ r_eax = R32((u32)(r_ecx+0x80u));
    /* 00576976: cmp eax, dword ptr [edx + 0x88] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x88u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057697c: je 0x576999 */ if (fZ) goto L_00576999;
L_0057697e:; BB(0x0057697e);
    /* 0057697e: mov byte ptr [ebp - 0xd], 0 */ W8((u32)(r_ebp+0xfffffff3u), 0x0u);
    /* 00576982: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00576985: call 0x576220 */ r_esp -= 4; W32(r_esp, 0x57698au); f_00576220();
    /* 0057698a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057698c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057698f: call 0x575e80 */ r_esp -= 4; W32(r_esp, 0x576994u); f_00575e80();
    /* 00576994: jmp 0x576a64 */ goto L_00576a64;
L_00576999:; BB(0x00576999);
    /* 00576999: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057699c: cmp dword ptr [ecx + 0x80], 7 */ {  u32 a = R32((u32)(r_ecx+0x80u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005769a3: je 0x576a4e */ if (fZ) goto L_00576a4e;
L_005769a9:; BB(0x005769a9);
    /* 005769a9: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005769ac: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 005769b2: imul eax, eax, 0xc */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005769b5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005769b8: mov edx, dword ptr [eax + ecx*4 + 0x7493ec] */ r_edx = R32((u32)(r_eax+r_ecx*4+0x7493ecu));
    /* 005769bf: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005769c2: movzx eax, byte ptr [ebp - 5] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffffbu));
    /* 005769c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005769c8: je 0x5769e6 */ if (fZ) goto L_005769e6;
L_005769ca:; BB(0x005769ca);
    /* 005769ca: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005769cd: mov edx, dword ptr [ecx + 0x7c] */ r_edx = R32((u32)(r_ecx+0x7cu));
    /* 005769d0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005769d3: imul eax, dword ptr [edx*4 + 0x7493d8] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_edx*4+0x7493d8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005769db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005769dc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005769df: call 0x575e80 */ r_esp -= 4; W32(r_esp, 0x5769e4u); f_00575e80();
    /* 005769e4: jmp 0x5769f2 */ goto L_005769f2;
L_005769e6:; BB(0x005769e6);
    /* 005769e6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005769e9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005769ea: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005769ed: call 0x575e80 */ r_esp -= 4; W32(r_esp, 0x5769f2u); f_00575e80();
L_005769f2:; BB(0x005769f2);
    /* 005769f2: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005769f5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005769f6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005769f9: call 0x576030 */ r_esp -= 4; W32(r_esp, 0x5769feu); f_00576030();
    /* 005769fe: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00576a03: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00576a05: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00576a0b: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 00576a0e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x576a10u); call_ind(t); }
    /* 00576a10: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00576a13: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00576a15: je 0x576a4c */ if (fZ) goto L_00576a4c;
L_00576a17:; BB(0x00576a17);
    /* 00576a17: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00576a19: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00576a1a: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 00576a20: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00576a23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00576a24: fld1  */ FPUSH(1.0);
    /* 00576a26: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00576a29: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00576a2b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00576a2d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00576a2f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00576a31: push 0x19258 */ { u32 v = 0x19258u; r_esp -= 4; W32(r_esp, v); }
    /* 00576a36: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00576a3c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00576a3e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00576a44: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 00576a4a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x576a4cu); call_ind(t); }
L_00576a4c:; BB(0x00576a4c);
    /* 00576a4c: jmp 0x576a64 */ goto L_00576a64;
L_00576a4e:; BB(0x00576a4e);
    /* 00576a4e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00576a51: call 0x576220 */ r_esp -= 4; W32(r_esp, 0x576a56u); f_00576220();
    /* 00576a56: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00576a59: call 0x576bf0 */ r_esp -= 4; W32(r_esp, 0x576a5eu); f_00576bf0();
    /* 00576a5e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00576a61: mov dword ptr [ecx + 0x7c], eax */ W32((u32)(r_ecx+0x7cu), r_eax);
L_00576a64:; BB(0x00576a64);
    /* 00576a64: movzx edx, byte ptr [ebp - 5] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffffbu));
    /* 00576a68: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00576a6a: je 0x576aa0 */ if (fZ) goto L_00576aa0;
L_00576a6c:; BB(0x00576a6c);
    /* 00576a6c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00576a6f: cmp dword ptr [eax + 0x80], 7 */ {  u32 a = R32((u32)(r_eax+0x80u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00576a76: jne 0x576a80 */ if (!fZ) goto L_00576a80;
L_00576a78:; BB(0x00576a78);
    /* 00576a78: movzx ecx, byte ptr [ebp - 0xd] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffff3u));
    /* 00576a7c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00576a7e: jne 0x576aa0 */ if (!fZ) goto L_00576aa0;
L_00576a80:; BB(0x00576a80);
    /* 00576a80: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00576a82: mov edx, dword ptr [0x793458] */ r_edx = R32((u32)(0x793458u));
    /* 00576a88: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00576a8b: mov ecx, dword ptr [0x793458] */ r_ecx = R32((u32)(0x793458u));
    /* 00576a91: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00576a94: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00576a96: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00576a99: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x576a9bu); call_ind(t); }
    /* 00576a9b: jmp 0x576b2b */ goto L_00576b2b;
L_00576aa0:; BB(0x00576aa0);
    /* 00576aa0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00576aa3: cmp dword ptr [ecx + 0x7c], -1 */ {  u32 a = R32((u32)(r_ecx+0x7cu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00576aa7: je 0x576aeb */ if (fZ) goto L_00576aeb;
L_00576aa9:; BB(0x00576aa9);
    /* 00576aa9: movzx edx, byte ptr [ebp - 5] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffffbu));
    /* 00576aad: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00576aaf: je 0x576acf */ if (fZ) goto L_00576acf;
L_00576ab1:; BB(0x00576ab1);
    /* 00576ab1: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00576ab3: mov eax, dword ptr [0x793458] */ r_eax = R32((u32)(0x793458u));
    /* 00576ab8: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00576abb: mov edx, dword ptr [0x793458] */ r_edx = R32((u32)(0x793458u));
    /* 00576ac1: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00576ac4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00576ac6: mov ecx, eax */ r_ecx = r_eax;
    /* 00576ac8: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00576acb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x576acdu); call_ind(t); }
    /* 00576acd: jmp 0x576ae9 */ goto L_00576ae9;
L_00576acf:; BB(0x00576acf);
    /* 00576acf: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00576ad1: mov ecx, dword ptr [0x793458] */ r_ecx = R32((u32)(0x793458u));
    /* 00576ad7: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00576ada: mov eax, dword ptr [0x793458] */ r_eax = R32((u32)(0x793458u));
    /* 00576adf: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00576ae2: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00576ae4: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00576ae7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x576ae9u); call_ind(t); }
L_00576ae9:; BB(0x00576ae9);
    /* 00576ae9: jmp 0x576b2b */ goto L_00576b2b;
L_00576aeb:; BB(0x00576aeb);
    /* 00576aeb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00576aee: cmp dword ptr [ecx + 0x70], 0 */ {  u32 a = R32((u32)(r_ecx+0x70u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00576af2: jne 0x576b11 */ if (!fZ) goto L_00576b11;
L_00576af4:; BB(0x00576af4);
    /* 00576af4: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00576af6: mov edx, dword ptr [0x793458] */ r_edx = R32((u32)(0x793458u));
    /* 00576afc: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00576aff: mov ecx, dword ptr [0x793458] */ r_ecx = R32((u32)(0x793458u));
    /* 00576b05: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00576b08: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00576b0a: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00576b0d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x576b0fu); call_ind(t); }
    /* 00576b0f: jmp 0x576b2b */ goto L_00576b2b;
L_00576b11:; BB(0x00576b11);
    /* 00576b11: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00576b13: mov ecx, dword ptr [0x793458] */ r_ecx = R32((u32)(0x793458u));
    /* 00576b19: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00576b1c: mov eax, dword ptr [0x793458] */ r_eax = R32((u32)(0x793458u));
    /* 00576b21: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00576b24: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00576b26: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00576b29: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x576b2bu); call_ind(t); }
L_00576b2b:; BB(0x00576b2b);
    /* 00576b2b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00576b2d: mov ecx, dword ptr [0x793458] */ r_ecx = R32((u32)(0x793458u));
    /* 00576b33: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00576b36: mov eax, dword ptr [0x793458] */ r_eax = R32((u32)(0x793458u));
    /* 00576b3b: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00576b3e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00576b40: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00576b43: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x576b45u); call_ind(t); }
    /* 00576b45: mov esp, ebp */ r_esp = r_ebp;
    /* 00576b47: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00576b48: ret  */ FN_RET(0x00576920); r_esp += 4; return;
}

void f_00576b50(void) /* sub_576B50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00576b50);
    /* 00576b50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00576b51: mov ebp, esp */ r_ebp = r_esp;
    /* 00576b53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00576b54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00576b57: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00576b59: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x576b5eu); f_0062fbf0();
    /* 00576b5e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00576b61: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00576b64: mov dword ptr [ecx + 0x80], eax */ W32((u32)(r_ecx+0x80u), r_eax);
    /* 00576b6a: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00576b6c: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x576b71u); f_0062fbf0();
    /* 00576b71: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00576b74: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00576b77: mov dword ptr [edx + 0x84], eax */ W32((u32)(r_edx+0x84u), r_eax);
    /* 00576b7d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00576b80: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00576b83: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 00576b89: cmp edx, dword ptr [ecx + 0x84] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x84u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00576b8f: je 0x576ba6 */ if (fZ) goto L_00576ba6;
L_00576b91:; BB(0x00576b91);
    /* 00576b91: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00576b93: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x576b98u); f_0062fbf0();
    /* 00576b98: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00576b9b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00576b9e: mov dword ptr [ecx + 0x88], eax */ W32((u32)(r_ecx+0x88u), r_eax);
    /* 00576ba4: jmp 0x576be2 */ goto L_00576be2;
L_00576ba6:; BB(0x00576ba6);
    /* 00576ba6: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00576ba8: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x576badu); f_0062fbf0();
    /* 00576bad: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00576bb0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00576bb3: mov dword ptr [edx + 0x88], eax */ W32((u32)(r_edx+0x88u), r_eax);
    /* 00576bb9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00576bbc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00576bbf: mov edx, dword ptr [eax + 0x88] */ r_edx = R32((u32)(r_eax+0x88u));
    /* 00576bc5: cmp edx, dword ptr [ecx + 0x80] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x80u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00576bcb: jl 0x576be2 */ if ((fS!=fO)) goto L_00576be2;
L_00576bcd:; BB(0x00576bcd);
    /* 00576bcd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00576bd0: mov ecx, dword ptr [eax + 0x88] */ r_ecx = R32((u32)(r_eax+0x88u));
    /* 00576bd6: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00576bd9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00576bdc: mov dword ptr [edx + 0x88], ecx */ W32((u32)(r_edx+0x88u), r_ecx);
L_00576be2:; BB(0x00576be2);
    /* 00576be2: mov esp, ebp */ r_esp = r_ebp;
    /* 00576be4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00576be5: ret  */ FN_RET(0x00576b50); r_esp += 4; return;
}

void f_00576ce0(void) /* sub_576CE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00576ce0);
    /* 00576ce0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00576ce1: mov ebp, esp */ r_ebp = r_esp;
    /* 00576ce3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00576ce5: push 0x6a6427 */ { u32 v = 0x6a6427u; r_esp -= 4; W32(r_esp, v); }
    /* 00576cea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00576cf0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00576cf1: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00576cf4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00576cf9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00576cfb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00576cfc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00576cff: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00576d05: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00576d08: mov word ptr [ebp - 0x10], 0 */ W16((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00576d0e: jmp 0x576d1c */ goto L_00576d1c;
L_00576d10:; BB(0x00576d10);
    /* 00576d10: mov ax, word ptr [ebp - 0x10] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 00576d14: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00576d18: mov word ptr [ebp - 0x10], ax */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_eax);
L_00576d1c:; BB(0x00576d1c);
    /* 00576d1c: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00576d20: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00576d23: jge 0x576d9e */ if ((fS==fO)) goto L_00576d9e;
L_00576d25:; BB(0x00576d25);
    /* 00576d25: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00576d29: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00576d2c: mov ecx, dword ptr [eax + edx*4 + 0x38] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x38u));
    /* 00576d30: mov dword ptr [ecx + 0x178], 2 */ W32((u32)(r_ecx+0x178u), 0x2u);
    /* 00576d3a: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00576d3c: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x576d41u); f_00686d82();
    /* 00576d41: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00576d44: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00576d47: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00576d4e: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00576d52: je 0x576d71 */ if (fZ) goto L_00576d71;
L_00576d54:; BB(0x00576d54);
    /* 00576d54: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00576d58: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 00576d5a: sbb edx, edx */ { u32 c = fC; u32 a = r_edx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 00576d5c: not edx */ r_edx = ~r_edx;
    /* 00576d5e: and edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00576d61: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00576d62: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00576d64: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00576d67: call 0x577b80 */ r_esp -= 4; W32(r_esp, 0x576d6cu); f_00577b80();
    /* 00576d6c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00576d6f: jmp 0x576d78 */ goto L_00576d78;
L_00576d71:; BB(0x00576d71);
    /* 00576d71: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_00576d78:; BB(0x00576d78);
    /* 00576d78: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00576d7b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00576d7e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00576d85: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00576d88: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00576d89: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00576d8d: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00576d90: mov ecx, dword ptr [eax + edx*4 + 0x38] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x38u));
    /* 00576d94: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x576d99u); f_005f5d50();
    /* 00576d99: jmp 0x576d10 */ goto L_00576d10;
L_00576d9e:; BB(0x00576d9e);
    /* 00576d9e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00576da1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00576da8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00576da9: mov esp, ebp */ r_esp = r_ebp;
    /* 00576dab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00576dac: ret 4 */ FN_RET(0x00576ce0); r_esp += 8; return;
}

void f_00576db0(void) /* sub_576DB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00576db0);
    /* 00576db0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00576db1: mov ebp, esp */ r_ebp = r_esp;
    /* 00576db3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00576db5: push 0x6a644d */ { u32 v = 0x6a644du; r_esp -= 4; W32(r_esp, v); }
    /* 00576dba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00576dc0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00576dc1: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00576dc4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00576dc9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00576dcb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00576dcc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00576dcf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00576dd5: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00576dd8: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00576ddb: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00576ddf: je 0x576e1a */ if (fZ) goto L_00576e1a;
L_00576de1:; BB(0x00576de1);
    /* 00576de1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00576de4: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00576de7: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00576dea: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00576ded: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00576df0: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00576df4: je 0x576e09 */ if (fZ) goto L_00576e09;
L_00576df6:; BB(0x00576df6);
    /* 00576df6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00576df8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00576dfb: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00576dfd: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00576e00: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00576e02: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x576e04u); call_ind(t); }
    /* 00576e04: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00576e07: jmp 0x576e10 */ goto L_00576e10;
L_00576e09:; BB(0x00576e09);
    /* 00576e09: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00576e10:; BB(0x00576e10);
    /* 00576e10: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00576e13: mov dword ptr [ecx + 4], 0 */ W32((u32)(r_ecx+0x4u), 0x0u);
L_00576e1a:; BB(0x00576e1a);
    /* 00576e1a: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00576e1d: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00576e21: jne 0x576e67 */ if (!fZ) goto L_00576e67;
L_00576e23:; BB(0x00576e23);
    /* 00576e23: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 00576e25: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x576e2au); f_00686d82();
    /* 00576e2a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00576e2d: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00576e30: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00576e37: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00576e3b: je 0x576e4a */ if (fZ) goto L_00576e4a;
L_00576e3d:; BB(0x00576e3d);
    /* 00576e3d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00576e40: call 0x578210 */ r_esp -= 4; W32(r_esp, 0x576e45u); f_00578210();
    /* 00576e45: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00576e48: jmp 0x576e51 */ goto L_00576e51;
L_00576e4a:; BB(0x00576e4a);
    /* 00576e4a: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00576e51:; BB(0x00576e51);
    /* 00576e51: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00576e54: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00576e57: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00576e5e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00576e61: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00576e64: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
L_00576e67:; BB(0x00576e67);
    /* 00576e67: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00576e6a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00576e71: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00576e72: mov esp, ebp */ r_esp = r_ebp;
    /* 00576e74: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00576e75: ret  */ FN_RET(0x00576db0); r_esp += 4; return;
}

