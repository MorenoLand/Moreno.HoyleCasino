#include "protos.h"

void f_0042d070(void) /* sub_42D070 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042d070);
    /* 0042d070: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042d071: mov ebp, esp */ r_ebp = r_esp;
    /* 0042d073: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042d076: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0042d079: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042d07c: cmp dword ptr [eax + 0xae0], 0 */ {  u32 a = R32((u32)(r_eax+0xae0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042d083: je 0x42d0dd */ if (fZ) goto L_0042d0dd;
L_0042d085:; BB(0x0042d085);
    /* 0042d085: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042d088: mov edx, dword ptr [ecx + 0xae0] */ r_edx = R32((u32)(r_ecx+0xae0u));
    /* 0042d08e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042d091: mov ecx, dword ptr [eax + 0xae0] */ r_ecx = R32((u32)(r_eax+0xae0u));
    /* 0042d097: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0042d099: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0042d09c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42d09eu); call_ind(t); }
    /* 0042d09e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042d0a1: mov edx, dword ptr [ecx + 0xae0] */ r_edx = R32((u32)(r_ecx+0xae0u));
    /* 0042d0a7: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0042d0aa: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042d0ad: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0042d0b0: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042d0b4: je 0x42d0c9 */ if (fZ) goto L_0042d0c9;
L_0042d0b6:; BB(0x0042d0b6);
    /* 0042d0b6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0042d0b8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042d0bb: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0042d0bd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042d0c0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0042d0c2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42d0c4u); call_ind(t); }
    /* 0042d0c4: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0042d0c7: jmp 0x42d0d0 */ goto L_0042d0d0;
L_0042d0c9:; BB(0x0042d0c9);
    /* 0042d0c9: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_0042d0d0:; BB(0x0042d0d0);
    /* 0042d0d0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042d0d3: mov dword ptr [ecx + 0xae0], 0 */ W32((u32)(r_ecx+0xae0u), 0x0u);
L_0042d0dd:; BB(0x0042d0dd);
    /* 0042d0dd: mov esp, ebp */ r_esp = r_ebp;
    /* 0042d0df: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042d0e0: ret  */ FN_RET(0x0042d070); r_esp += 4; return;
}

void f_0042d3f0(void) /* sub_42D3F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042d3f0);
    /* 0042d3f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042d3f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0042d3f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042d3f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0042d3f7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042d3fa: movzx ecx, byte ptr [eax + 0x18d] */ r_ecx = (u32)R8((u32)(r_eax+0x18du));
    /* 0042d401: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042d403: jne 0x42d427 */ if (!fZ) goto L_0042d427;
L_0042d405:; BB(0x0042d405);
    /* 0042d405: push 0x30dbd3 */ { u32 v = 0x30dbd3u; r_esp -= 4; W32(r_esp, v); }
    /* 0042d40a: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0042d410: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x42d415u); f_005f2ba0();
    /* 0042d415: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042d418: call 0x42d750 */ r_esp -= 4; W32(r_esp, 0x42d41du); f_0042d750();
    /* 0042d41d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042d420: mov byte ptr [edx + 0x18d], 1 */ W8((u32)(r_edx+0x18du), 0x1u);
L_0042d427:; BB(0x0042d427);
    /* 0042d427: mov esp, ebp */ r_esp = r_ebp;
    /* 0042d429: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042d42a: ret  */ FN_RET(0x0042d3f0); r_esp += 4; return;
}

void f_0042d640(void) /* sub_42D640 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042d640);
    /* 0042d640: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042d641: mov ebp, esp */ r_ebp = r_esp;
    /* 0042d643: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042d644: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0042d647: cmp dword ptr [ebp + 8], 0x14 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042d64b: jge 0x42d664 */ if ((fS==fO)) goto L_0042d664;
L_0042d64d:; BB(0x0042d64d);
    /* 0042d64d: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0042d64f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042d652: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042d654: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042d657: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0042d65d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42d65fu); call_ind(t); }
    /* 0042d65f: jmp 0x42d744 */ goto L_0042d744;
L_0042d664:; BB(0x0042d664);
    /* 0042d664: cmp dword ptr [ebp + 8], 0x28 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042d668: jge 0x42d681 */ if ((fS==fO)) goto L_0042d681;
L_0042d66a:; BB(0x0042d66a);
    /* 0042d66a: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 0042d66c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042d66f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0042d671: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042d674: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0042d67a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42d67cu); call_ind(t); }
    /* 0042d67c: jmp 0x42d744 */ goto L_0042d744;
L_0042d681:; BB(0x0042d681);
    /* 0042d681: cmp dword ptr [ebp + 8], 0x3c */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042d685: jge 0x42d69e */ if ((fS==fO)) goto L_0042d69e;
L_0042d687:; BB(0x0042d687);
    /* 0042d687: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0042d689: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042d68c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0042d68e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042d691: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0042d697: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42d699u); call_ind(t); }
    /* 0042d699: jmp 0x42d744 */ goto L_0042d744;
L_0042d69e:; BB(0x0042d69e);
    /* 0042d69e: cmp dword ptr [ebp + 8], 0x50 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042d6a2: jge 0x42d6bb */ if ((fS==fO)) goto L_0042d6bb;
L_0042d6a4:; BB(0x0042d6a4);
    /* 0042d6a4: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0042d6a6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042d6a9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0042d6ab: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042d6ae: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0042d6b4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42d6b6u); call_ind(t); }
    /* 0042d6b6: jmp 0x42d744 */ goto L_0042d744;
L_0042d6bb:; BB(0x0042d6bb);
    /* 0042d6bb: cmp dword ptr [ebp + 8], 0x64 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042d6bf: jge 0x42d6d5 */ if ((fS==fO)) goto L_0042d6d5;
L_0042d6c1:; BB(0x0042d6c1);
    /* 0042d6c1: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0042d6c3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042d6c6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0042d6c8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042d6cb: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0042d6d1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42d6d3u); call_ind(t); }
    /* 0042d6d3: jmp 0x42d744 */ goto L_0042d744;
L_0042d6d5:; BB(0x0042d6d5);
    /* 0042d6d5: cmp dword ptr [ebp + 8], 0x78 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042d6d9: jge 0x42d6ef */ if ((fS==fO)) goto L_0042d6ef;
L_0042d6db:; BB(0x0042d6db);
    /* 0042d6db: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0042d6dd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042d6e0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0042d6e2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042d6e5: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0042d6eb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42d6edu); call_ind(t); }
    /* 0042d6ed: jmp 0x42d744 */ goto L_0042d744;
L_0042d6ef:; BB(0x0042d6ef);
    /* 0042d6ef: cmp dword ptr [ebp + 8], 0x8c */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x8cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042d6f6: jge 0x42d70c */ if ((fS==fO)) goto L_0042d70c;
L_0042d6f8:; BB(0x0042d6f8);
    /* 0042d6f8: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0042d6fa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042d6fd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0042d6ff: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042d702: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0042d708: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42d70au); call_ind(t); }
    /* 0042d70a: jmp 0x42d744 */ goto L_0042d744;
L_0042d70c:; BB(0x0042d70c);
    /* 0042d70c: cmp dword ptr [ebp + 8], 0xa0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xa0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042d713: jge 0x42d729 */ if ((fS==fO)) goto L_0042d729;
L_0042d715:; BB(0x0042d715);
    /* 0042d715: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0042d717: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042d71a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0042d71c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042d71f: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0042d725: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42d727u); call_ind(t); }
    /* 0042d727: jmp 0x42d744 */ goto L_0042d744;
L_0042d729:; BB(0x0042d729);
    /* 0042d729: cmp dword ptr [ebp + 8], 0xb4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xb4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042d730: jge 0x42d744 */ if ((fS==fO)) goto L_0042d744;
L_0042d732:; BB(0x0042d732);
    /* 0042d732: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0042d734: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042d737: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0042d739: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042d73c: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0042d742: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42d744u); call_ind(t); }
L_0042d744:; BB(0x0042d744);
    /* 0042d744: mov esp, ebp */ r_esp = r_ebp;
    /* 0042d746: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042d747: ret 8 */ FN_RET(0x0042d640); r_esp += 12; return;
}

void f_0042d750(void) /* sub_42D750 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042d750);
    /* 0042d750: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042d751: mov ebp, esp */ r_ebp = r_esp;
    /* 0042d753: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0042d755: push 0x69e626 */ { u32 v = 0x69e626u; r_esp -= 4; W32(r_esp, v); }
    /* 0042d75a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0042d760: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042d761: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042d764: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0042d769: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042d76b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042d76c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0042d76f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0042d775: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0042d778: push 0x30dbd3 */ { u32 v = 0x30dbd3u; r_esp -= 4; W32(r_esp, v); }
    /* 0042d77d: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0042d783: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x42d788u); f_005f2ba0();
    /* 0042d788: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0042d78a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x42d78fu); f_00686d82();
    /* 0042d78f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042d792: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0042d795: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0042d79c: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042d7a0: je 0x42d7b1 */ if (fZ) goto L_0042d7b1;
L_0042d7a2:; BB(0x0042d7a2);
    /* 0042d7a2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042d7a4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0042d7a7: call 0x42d7e0 */ r_esp -= 4; W32(r_esp, 0x42d7acu); f_0042d7e0();
    /* 0042d7ac: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0042d7af: jmp 0x42d7b8 */ goto L_0042d7b8;
L_0042d7b1:; BB(0x0042d7b1);
    /* 0042d7b1: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0042d7b8:; BB(0x0042d7b8);
    /* 0042d7b8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042d7bb: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0042d7be: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0042d7c5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042d7c8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042d7c9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042d7cc: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x42d7d1u); f_005f5d50();
    /* 0042d7d1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042d7d4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0042d7db: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0042d7dc: mov esp, ebp */ r_esp = r_ebp;
    /* 0042d7de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042d7df: ret  */ FN_RET(0x0042d750); r_esp += 4; return;
}

void f_0042dcf0(void) /* sub_42DCF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042dcf0);
    /* 0042dcf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042dcf1: mov ebp, esp */ r_ebp = r_esp;
    /* 0042dcf3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0042dcf5: push 0x69e672 */ { u32 v = 0x69e672u; r_esp -= 4; W32(r_esp, v); }
    /* 0042dcfa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0042dd00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042dd01: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042dd04: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0042dd09: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042dd0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042dd0c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0042dd0f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0042dd15: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0042dd18: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0042dd1a: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 0042dd1f: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0042dd22: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 0042dd28: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042dd2b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0042dd2d: mov ecx, eax */ r_ecx = r_eax;
    /* 0042dd2f: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042dd32: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42dd34u); call_ind(t); }
    /* 0042dd34: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042dd3a: call 0x43b250 */ r_esp -= 4; W32(r_esp, 0x42dd3fu); f_0043b250();
    /* 0042dd3f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0042dd42: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042dd44: je 0x42ddfa */ if (fZ) goto L_0042ddfa;
L_0042dd4a:; BB(0x0042dd4a);
    /* 0042dd4a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0042dd50: call 0x637630 */ r_esp -= 4; W32(r_esp, 0x42dd55u); f_00637630();
    /* 0042dd55: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0042dd58: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042dd5a: je 0x42ddfa */ if (fZ) goto L_0042ddfa;
L_0042dd60:; BB(0x0042dd60);
    /* 0042dd60: movzx eax, byte ptr [0x795f94] */ r_eax = (u32)R8((u32)(0x795f94u));
    /* 0042dd67: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042dd69: jne 0x42ddfa */ if (!fZ) goto L_0042ddfa;
L_0042dd6f:; BB(0x0042dd6f);
    /* 0042dd6f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042dd72: mov dword ptr [ecx + 0x178], 5 */ W32((u32)(r_ecx+0x178u), 0x5u);
    /* 0042dd7c: push 0xfcc */ { u32 v = 0xfccu; r_esp -= 4; W32(r_esp, v); }
    /* 0042dd81: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042dd84: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x42dd89u); f_005eaf00();
    /* 0042dd89: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042dd8b: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042dd8e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0042dd90: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042dd93: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 0042dd99: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x42dd9bu); call_ind(t); }
    /* 0042dd9b: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0042dd9d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x42dda2u); f_00686d82();
    /* 0042dda2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042dda5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0042dda8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0042ddaf: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ddb3: je 0x42ddcb */ if (fZ) goto L_0042ddcb;
L_0042ddb5:; BB(0x0042ddb5);
    /* 0042ddb5: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 0042ddba: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0042ddbd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042ddbe: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0042ddc1: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x42ddc6u); f_006010a0();
    /* 0042ddc6: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0042ddc9: jmp 0x42ddd2 */ goto L_0042ddd2;
L_0042ddcb:; BB(0x0042ddcb);
    /* 0042ddcb: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0042ddd2:; BB(0x0042ddd2);
    /* 0042ddd2: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042ddd5: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0042ddd8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0042dddf: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042dde2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042dde3: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042dde6: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x42ddebu); f_005f5d50();
    /* 0042ddeb: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042ddee: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0042ddf0: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042ddf3: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0042ddf6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42ddf8u); call_ind(t); }
    /* 0042ddf8: jmp 0x42de14 */ goto L_0042de14;
L_0042ddfa:; BB(0x0042ddfa);
    /* 0042ddfa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042ddfc: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0042de02: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0042de05: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 0042de0a: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0042de0d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0042de0f: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0042de12: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42de14u); call_ind(t); }
L_0042de14:; BB(0x0042de14);
    /* 0042de14: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042de17: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0042de1e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0042de1f: mov esp, ebp */ r_esp = r_ebp;
    /* 0042de21: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042de22: ret  */ FN_RET(0x0042dcf0); r_esp += 4; return;
}

void f_0042df00(void) /* sub_42DF00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042df00);
    /* 0042df00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042df01: mov ebp, esp */ r_ebp = r_esp;
    /* 0042df03: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042df06: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0042df09: mov eax, dword ptr [0x7906d4] */ r_eax = R32((u32)(0x7906d4u));
    /* 0042df0e: mov ecx, dword ptr [eax + 0xad8] */ r_ecx = R32((u32)(r_eax+0xad8u));
    /* 0042df14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0042df17: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042df1b: je 0x42e210 */ if (fZ) goto L_0042e210;
L_0042df21:; BB(0x0042df21);
    /* 0042df21: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042df24: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042df25: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x42df2au); f_005dcb00();
    /* 0042df2a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042df2d: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0042df30: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042df33: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x42df38u); f_0063aac0();
    /* 0042df38: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0042df3a: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0042df3d: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042df41: je 0x42df5f */ if (fZ) goto L_0042df5f;
L_0042df43:; BB(0x0042df43);
    /* 0042df43: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042df46: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x42df4bu); f_0063aac0();
    /* 0042df4b: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0042df4d: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0042df50: cmp dword ptr [ebp - 0xc], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042df54: je 0x42df5f */ if (fZ) goto L_0042df5f;
L_0042df56:; BB(0x0042df56);
    /* 0042df56: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0042df5d: jmp 0x42df66 */ goto L_0042df66;
L_0042df5f:; BB(0x0042df5f);
    /* 0042df5f: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
L_0042df66:; BB(0x0042df66);
    /* 0042df66: movzx edx, byte ptr [ebp - 0x28] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffd8u));
    /* 0042df6a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042df6c: je 0x42e210 */ if (fZ) goto L_0042e210;
L_0042df72:; BB(0x0042df72);
    /* 0042df72: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042df75: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042df76: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x42df7bu); f_005dcb00();
    /* 0042df7b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042df7e: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0042df81: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0042df84: mov dl, byte ptr [ecx + 0x4a0] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4a0u))) & 0xffu);
    /* 0042df8a: mov byte ptr [ebp - 0x15], dl */ W8((u32)(r_ebp+0xffffffebu), (u8)r_edx);
    /* 0042df8d: movzx eax, byte ptr [ebp - 0x15] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffebu));
    /* 0042df91: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042df93: jne 0x42e210 */ if (!fZ) goto L_0042e210;
L_0042df99:; BB(0x0042df99);
    /* 0042df99: cmp dword ptr [0x7947b0], 0 */ {  u32 a = R32((u32)(0x7947b0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042dfa0: jne 0x42dfaf */ if (!fZ) goto L_0042dfaf;
L_0042dfa2:; BB(0x0042dfa2);
    /* 0042dfa2: cmp dword ptr [0x7947ac], 0 */ {  u32 a = R32((u32)(0x7947acu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042dfa9: je 0x42e210 */ if (fZ) goto L_0042e210;
L_0042dfaf:; BB(0x0042dfaf);
    /* 0042dfaf: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042dfb5: mov edx, dword ptr [ecx + 0xac4] */ r_edx = R32((u32)(r_ecx+0xac4u));
    /* 0042dfbb: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0042dfbe: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042dfc0: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042dfc4: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0042dfc7: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0042dfca: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042dfcc: je 0x42e06c */ if (fZ) goto L_0042e06c;
L_0042dfd2:; BB(0x0042dfd2);
    /* 0042dfd2: mov edx, dword ptr [0x7906d4] */ r_edx = R32((u32)(0x7906d4u));
    /* 0042dfd8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042dfda: cmp dword ptr [edx + 0xadc], 3 */ {  u32 a = R32((u32)(r_edx+0xadcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042dfe1: setge al */ r_eax = (r_eax & 0xffffff00u) | ((((fS==fO)) ? 1 : 0) & 0xffu);
    /* 0042dfe4: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0042dfe7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042dfe9: je 0x42e02a */ if (fZ) goto L_0042e02a;
L_0042dfeb:; BB(0x0042dfeb);
    /* 0042dfeb: push 0x6b6e9c */ { u32 v = 0x6b6e9cu; r_esp -= 4; W32(r_esp, v); }
    /* 0042dff0: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x42dff5u); f_0062fde0();
    /* 0042dff5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042dff8: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042dffc: je 0x42e015 */ if (fZ) goto L_0042e015;
L_0042dffe:; BB(0x0042dffe);
    /* 0042dffe: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e002: je 0x42e015 */ if (fZ) goto L_0042e015;
L_0042e004:; BB(0x0042e004);
    /* 0042e004: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0042e007: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042e008: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042e00b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042e00d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042e010: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042e013: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42e015u); call_ind(t); }
L_0042e015:; BB(0x0042e015);
    /* 0042e015: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e017: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042e01a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042e01b: push 0xcfe9 */ { u32 v = 0xcfe9u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e020: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0042e023: call 0x5cd800 */ r_esp -= 4; W32(r_esp, 0x42e028u); f_005cd800();
    /* 0042e028: jmp 0x42e067 */ goto L_0042e067;
L_0042e02a:; BB(0x0042e02a);
    /* 0042e02a: push 0x6b6e74 */ { u32 v = 0x6b6e74u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e02f: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x42e034u); f_0062fde0();
    /* 0042e034: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042e037: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e03b: je 0x42e054 */ if (fZ) goto L_0042e054;
L_0042e03d:; BB(0x0042e03d);
    /* 0042e03d: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e041: je 0x42e054 */ if (fZ) goto L_0042e054;
L_0042e043:; BB(0x0042e043);
    /* 0042e043: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0042e046: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042e047: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042e04a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042e04c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042e04f: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042e052: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42e054u); call_ind(t); }
L_0042e054:; BB(0x0042e054);
    /* 0042e054: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e056: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042e059: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042e05a: push 0xcf08 */ { u32 v = 0xcf08u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e05f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0042e062: call 0x5cd800 */ r_esp -= 4; W32(r_esp, 0x42e067u); f_005cd800();
L_0042e067:; BB(0x0042e067);
    /* 0042e067: jmp 0x42e20e */ goto L_0042e20e;
L_0042e06c:; BB(0x0042e06c);
    /* 0042e06c: mov edx, dword ptr [0x7906d4] */ r_edx = R32((u32)(0x7906d4u));
    /* 0042e072: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042e074: cmp dword ptr [edx + 0xadc], 3 */ {  u32 a = R32((u32)(r_edx+0xadcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042e07b: setge al */ r_eax = (r_eax & 0xffffff00u) | ((((fS==fO)) ? 1 : 0) & 0xffu);
    /* 0042e07e: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0042e081: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e083: je 0x42e0c7 */ if (fZ) goto L_0042e0c7;
L_0042e085:; BB(0x0042e085);
    /* 0042e085: push 0x6b6e9c */ { u32 v = 0x6b6e9cu; r_esp -= 4; W32(r_esp, v); }
    /* 0042e08a: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x42e08fu); f_0062fde0();
    /* 0042e08f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042e092: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e096: je 0x42e0af */ if (fZ) goto L_0042e0af;
L_0042e098:; BB(0x0042e098);
    /* 0042e098: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e09c: je 0x42e0af */ if (fZ) goto L_0042e0af;
L_0042e09e:; BB(0x0042e09e);
    /* 0042e09e: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0042e0a1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042e0a2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042e0a5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042e0a7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042e0aa: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042e0ad: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42e0afu); call_ind(t); }
L_0042e0af:; BB(0x0042e0af);
    /* 0042e0af: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e0b1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042e0b4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042e0b5: push 0xcfe9 */ { u32 v = 0xcfe9u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e0ba: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0042e0bd: call 0x5cd800 */ r_esp -= 4; W32(r_esp, 0x42e0c2u); f_005cd800();
    /* 0042e0c2: jmp 0x42e20e */ goto L_0042e20e;
L_0042e0c7:; BB(0x0042e0c7);
    /* 0042e0c7: mov edx, dword ptr [0x7906d4] */ r_edx = R32((u32)(0x7906d4u));
    /* 0042e0cd: mov eax, dword ptr [0x7906d4] */ r_eax = R32((u32)(0x7906d4u));
    /* 0042e0d2: mov ecx, dword ptr [edx + 0xab8] */ r_ecx = R32((u32)(r_edx+0xab8u));
    /* 0042e0d8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0042e0da: cmp ecx, dword ptr [eax + 0xab4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0xab4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e0e0: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0042e0e3: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 0042e0e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e0e8: je 0x42e15a */ if (fZ) goto L_0042e15a;
L_0042e0ea:; BB(0x0042e0ea);
    /* 0042e0ea: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042e0f0: call 0x434f90 */ r_esp -= 4; W32(r_esp, 0x42e0f5u); f_00434f90();
    /* 0042e0f5: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042e0f8: jle 0x42e15a */ if ((fZ||fS!=fO)) goto L_0042e15a;
L_0042e0fa:; BB(0x0042e0fa);
    /* 0042e0fa: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042e100: cmp dword ptr [ecx + 0xaec], 1 */ {  u32 a = R32((u32)(r_ecx+0xaecu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e107: je 0x42e118 */ if (fZ) goto L_0042e118;
L_0042e109:; BB(0x0042e109);
    /* 0042e109: mov edx, dword ptr [0x7906d4] */ r_edx = R32((u32)(0x7906d4u));
    /* 0042e10f: cmp dword ptr [edx + 0xaec], 4 */ {  u32 a = R32((u32)(r_edx+0xaecu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e116: jne 0x42e15a */ if (!fZ) goto L_0042e15a;
L_0042e118:; BB(0x0042e118);
    /* 0042e118: push 0x6b6e48 */ { u32 v = 0x6b6e48u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e11d: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x42e122u); f_0062fde0();
    /* 0042e122: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042e125: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e129: je 0x42e142 */ if (fZ) goto L_0042e142;
L_0042e12b:; BB(0x0042e12b);
    /* 0042e12b: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e12f: je 0x42e142 */ if (fZ) goto L_0042e142;
L_0042e131:; BB(0x0042e131);
    /* 0042e131: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0042e134: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042e135: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042e138: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0042e13a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042e13d: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042e140: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42e142u); call_ind(t); }
L_0042e142:; BB(0x0042e142);
    /* 0042e142: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e144: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042e147: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042e148: push 0xd516 */ { u32 v = 0xd516u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e14d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0042e150: call 0x5cd800 */ r_esp -= 4; W32(r_esp, 0x42e155u); f_005cd800();
    /* 0042e155: jmp 0x42e20e */ goto L_0042e20e;
L_0042e15a:; BB(0x0042e15a);
    /* 0042e15a: mov edx, dword ptr [0x7906d4] */ r_edx = R32((u32)(0x7906d4u));
    /* 0042e160: mov eax, dword ptr [0x7906d4] */ r_eax = R32((u32)(0x7906d4u));
    /* 0042e165: mov ecx, dword ptr [edx + 0xab8] */ r_ecx = R32((u32)(r_edx+0xab8u));
    /* 0042e16b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0042e16d: cmp ecx, dword ptr [eax + 0xab4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0xab4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e173: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0042e176: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 0042e179: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e17b: jne 0x42e1d1 */ if (!fZ) goto L_0042e1d1;
L_0042e17d:; BB(0x0042e17d);
    /* 0042e17d: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042e183: mov edx, dword ptr [ecx + 0xabc] */ r_edx = R32((u32)(r_ecx+0xabcu));
    /* 0042e189: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0042e18c: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e190: jne 0x42e1d1 */ if (!fZ) goto L_0042e1d1;
L_0042e192:; BB(0x0042e192);
    /* 0042e192: push 0x6b6e20 */ { u32 v = 0x6b6e20u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e197: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x42e19cu); f_0062fde0();
    /* 0042e19c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042e19f: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e1a3: je 0x42e1bc */ if (fZ) goto L_0042e1bc;
L_0042e1a5:; BB(0x0042e1a5);
    /* 0042e1a5: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e1a9: je 0x42e1bc */ if (fZ) goto L_0042e1bc;
L_0042e1ab:; BB(0x0042e1ab);
    /* 0042e1ab: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0042e1ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042e1af: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042e1b2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0042e1b4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042e1b7: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042e1ba: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42e1bcu); call_ind(t); }
L_0042e1bc:; BB(0x0042e1bc);
    /* 0042e1bc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e1be: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042e1c1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042e1c2: push 0xd01b */ { u32 v = 0xd01bu; r_esp -= 4; W32(r_esp, v); }
    /* 0042e1c7: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0042e1ca: call 0x5cd800 */ r_esp -= 4; W32(r_esp, 0x42e1cfu); f_005cd800();
    /* 0042e1cf: jmp 0x42e20e */ goto L_0042e20e;
L_0042e1d1:; BB(0x0042e1d1);
    /* 0042e1d1: push 0x6b6e74 */ { u32 v = 0x6b6e74u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e1d6: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x42e1dbu); f_0062fde0();
    /* 0042e1db: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042e1de: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e1e2: je 0x42e1fb */ if (fZ) goto L_0042e1fb;
L_0042e1e4:; BB(0x0042e1e4);
    /* 0042e1e4: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e1e8: je 0x42e1fb */ if (fZ) goto L_0042e1fb;
L_0042e1ea:; BB(0x0042e1ea);
    /* 0042e1ea: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0042e1ed: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042e1ee: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042e1f1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042e1f3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042e1f6: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042e1f9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42e1fbu); call_ind(t); }
L_0042e1fb:; BB(0x0042e1fb);
    /* 0042e1fb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e1fd: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042e200: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042e201: push 0xcf08 */ { u32 v = 0xcf08u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e206: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0042e209: call 0x5cd800 */ r_esp -= 4; W32(r_esp, 0x42e20eu); f_005cd800();
L_0042e20e:; BB(0x0042e20e);
    /* 0042e20e: jmp 0x42e242 */ goto L_0042e242;
L_0042e210:; BB(0x0042e210);
    /* 0042e210: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e214: je 0x42e22d */ if (fZ) goto L_0042e22d;
L_0042e216:; BB(0x0042e216);
    /* 0042e216: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e21a: je 0x42e22d */ if (fZ) goto L_0042e22d;
L_0042e21c:; BB(0x0042e21c);
    /* 0042e21c: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0042e21f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042e220: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042e223: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042e225: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042e228: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042e22b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42e22du); call_ind(t); }
L_0042e22d:; BB(0x0042e22d);
    /* 0042e22d: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e231: je 0x42e242 */ if (fZ) goto L_0042e242;
L_0042e233:; BB(0x0042e233);
    /* 0042e233: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e235: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042e238: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0042e23a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042e23d: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0042e240: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42e242u); call_ind(t); }
L_0042e242:; BB(0x0042e242);
    /* 0042e242: mov esp, ebp */ r_esp = r_ebp;
    /* 0042e244: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042e245: ret 8 */ FN_RET(0x0042df00); r_esp += 12; return;
}

