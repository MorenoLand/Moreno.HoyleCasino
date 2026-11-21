#include "protos.h"

void f_004f9050(void) /* sub_4F9050 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f9050);
    /* 004f9050: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f9051: mov ebp, esp */ r_ebp = r_esp;
    /* 004f9053: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f9056: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004f9059: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f905c: mov cx, word ptr [eax + 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0x8u))) & 0xffffu);
    /* 004f9060: mov word ptr [ebp - 4], cx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_ecx);
    /* 004f9064: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f9067: mov ax, word ptr [edx + 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x8u))) & 0xffffu);
    /* 004f906b: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f906f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f9072: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
    /* 004f9076: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f9079: movsx eax, word ptr [edx + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 004f907d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f9080: movsx edx, word ptr [ecx + 6] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x6u));
    /* 004f9084: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9086: jne 0x4f9091 */ if (!fZ) goto L_004f9091;
L_004f9088:; BB(0x004f9088);
    /* 004f9088: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f908b: mov word ptr [eax + 8], 0 */ W16((u32)(r_eax+0x8u), 0x0u);
L_004f9091:; BB(0x004f9091);
    /* 004f9091: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f9094: movsx edx, word ptr [ecx + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x8u));
    /* 004f9098: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f909c: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f909e: je 0x4f90f9 */ if (fZ) goto L_004f90f9;
L_004f90a0:; BB(0x004f90a0);
    /* 004f90a0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f90a3: movsx edx, word ptr [ecx + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x8u));
    /* 004f90a7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f90aa: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 004f90ad: movzx edx, byte ptr [ecx + edx] */ r_edx = (u32)R8((u32)(r_ecx+r_edx));
    /* 004f90b1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f90b3: jne 0x4f90ca */ if (!fZ) goto L_004f90ca;
L_004f90b5:; BB(0x004f90b5);
    /* 004f90b5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f90b8: movsx ecx, word ptr [eax + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x8u));
    /* 004f90bc: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f90bf: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 004f90c2: movzx ecx, byte ptr [eax + ecx] */ r_ecx = (u32)R8((u32)(r_eax+r_ecx));
    /* 004f90c6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f90c8: je 0x4f90f9 */ if (fZ) goto L_004f90f9;
L_004f90ca:; BB(0x004f90ca);
    /* 004f90ca: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f90cd: mov ax, word ptr [edx + 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x8u))) & 0xffffu);
    /* 004f90d1: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f90d5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f90d8: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
    /* 004f90dc: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f90df: movsx eax, word ptr [edx + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 004f90e3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f90e6: movsx edx, word ptr [ecx + 6] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x6u));
    /* 004f90ea: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f90ec: jne 0x4f90f7 */ if (!fZ) goto L_004f90f7;
L_004f90ee:; BB(0x004f90ee);
    /* 004f90ee: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f90f1: mov word ptr [eax + 8], 0 */ W16((u32)(r_eax+0x8u), 0x0u);
L_004f90f7:; BB(0x004f90f7);
    /* 004f90f7: jmp 0x4f9091 */ goto L_004f9091;
L_004f90f9:; BB(0x004f90f9);
    /* 004f90f9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f90fc: mov ax, word ptr [ecx + 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ecx+0x8u))) & 0xffffu);
    /* 004f9100: mov esp, ebp */ r_esp = r_ebp;
    /* 004f9102: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f9103: ret  */ FN_RET(0x004f9050); r_esp += 4; return;
}

void f_004f9580(void) /* sub_4F9580 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f9580);
    /* 004f9580: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f9581: mov ebp, esp */ r_ebp = r_esp;
    /* 004f9583: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f9586: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 004f9589: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 004f9590: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 004f9597: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004f959d: jmp 0x4f95ab */ goto L_004f95ab;
L_004f959f:; BB(0x004f959f);
    /* 004f959f: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004f95a3: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f95a7: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_004f95ab:; BB(0x004f95ab);
    /* 004f95ab: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f95af: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004f95b2: movsx eax, word ptr [edx + 6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x6u));
    /* 004f95b6: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f95b8: jge 0x4f9627 */ if ((fS==fO)) goto L_004f9627;
L_004f95ba:; BB(0x004f95ba);
    /* 004f95ba: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f95be: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004f95c1: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 004f95c4: movzx ecx, byte ptr [eax + ecx] */ r_ecx = (u32)R8((u32)(r_eax+r_ecx));
    /* 004f95c8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f95ca: jne 0x4f9622 */ if (!fZ) goto L_004f9622;
L_004f95cc:; BB(0x004f95cc);
    /* 004f95cc: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f95d0: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004f95d3: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 004f95d6: movzx edx, byte ptr [ecx + edx] */ r_edx = (u32)R8((u32)(r_ecx+r_edx));
    /* 004f95da: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f95dc: jne 0x4f9622 */ if (!fZ) goto L_004f9622;
L_004f95de:; BB(0x004f95de);
    /* 004f95de: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f95e2: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004f95e5: mov edx, dword ptr [ecx + 0x68] */ r_edx = R32((u32)(r_ecx+0x68u));
    /* 004f95e8: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 004f95eb: cmp eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f95ee: jg 0x4f9602 */ if ((!fZ&&fS==fO)) goto L_004f9602;
L_004f95f0:; BB(0x004f95f0);
    /* 004f95f0: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f95f4: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004f95f7: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 004f95fa: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 004f95fd: cmp ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9600: jle 0x4f9622 */ if ((fZ||fS!=fO)) goto L_004f9622;
L_004f9602:; BB(0x004f9602);
    /* 004f9602: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f9606: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004f9609: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 004f960c: mov edx, dword ptr [ecx + edx*4] */ r_edx = R32((u32)(r_ecx+r_edx*4));
    /* 004f960f: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 004f9612: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f9616: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004f9619: mov edx, dword ptr [ecx + 0x6c] */ r_edx = R32((u32)(r_ecx+0x6cu));
    /* 004f961c: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 004f961f: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_004f9622:; BB(0x004f9622);
    /* 004f9622: jmp 0x4f959f */ goto L_004f959f;
L_004f9627:; BB(0x004f9627);
    /* 004f9627: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004f962a: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 004f962d: sub edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004f9630: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 004f9633: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f9636: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004f9639: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004f963c: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 004f963f: sub edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004f9642: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004f9645: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 004f9648: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004f964b: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 004f964e: sub edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004f9651: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004f9654: mov dword ptr [eax + 0x10], edx */ W32((u32)(r_eax+0x10u), r_edx);
    /* 004f9657: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004f965d: jmp 0x4f966b */ goto L_004f966b;
L_004f965f:; BB(0x004f965f);
    /* 004f965f: mov cx, word ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004f9663: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f9667: mov word ptr [ebp - 4], cx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_ecx);
L_004f966b:; BB(0x004f966b);
    /* 004f966b: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f966f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004f9672: movsx ecx, word ptr [eax + 6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x6u));
    /* 004f9676: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9678: jge 0x4f9752 */ if ((fS==fO)) goto L_004f9752;
L_004f967e:; BB(0x004f967e);
    /* 004f967e: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f9682: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004f9685: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 004f9688: movzx edx, byte ptr [ecx + edx] */ r_edx = (u32)R8((u32)(r_ecx+r_edx));
    /* 004f968c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f968e: je 0x4f96c3 */ if (fZ) goto L_004f96c3;
L_004f9690:; BB(0x004f9690);
    /* 004f9690: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f9694: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004f9697: mov edx, dword ptr [ecx + 0x70] */ r_edx = R32((u32)(r_ecx+0x70u));
    /* 004f969a: mov dword ptr [edx + eax*4], 0 */ W32((u32)(r_edx+r_eax*4), 0x0u);
    /* 004f96a1: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f96a5: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004f96a8: mov edx, dword ptr [ecx + 0x74] */ r_edx = R32((u32)(r_ecx+0x74u));
    /* 004f96ab: mov dword ptr [edx + eax*4], 0 */ W32((u32)(r_edx+r_eax*4), 0x0u);
    /* 004f96b2: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f96b6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004f96b9: mov edx, dword ptr [ecx + 0x78] */ r_edx = R32((u32)(r_ecx+0x78u));
    /* 004f96bc: mov dword ptr [edx + eax*4], 0 */ W32((u32)(r_edx+r_eax*4), 0x0u);
L_004f96c3:; BB(0x004f96c3);
    /* 004f96c3: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f96c7: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004f96ca: mov edx, dword ptr [ecx + 0x68] */ r_edx = R32((u32)(r_ecx+0x68u));
    /* 004f96cd: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 004f96d0: cmp eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f96d3: jle 0x4f9719 */ if ((fZ||fS!=fO)) goto L_004f9719;
L_004f96d5:; BB(0x004f96d5);
    /* 004f96d5: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f96d9: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004f96dc: mov eax, dword ptr [edx + 0x68] */ r_eax = R32((u32)(r_edx+0x68u));
    /* 004f96df: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 004f96e2: sub ecx, dword ptr [ebp - 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004f96e5: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004f96e8: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 004f96eb: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004f96ed: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004f96f0: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 004f96f3: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f96f7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004f96fa: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 004f96fd: mov edx, dword ptr [ecx + edx*4] */ r_edx = R32((u32)(r_ecx+r_edx*4));
    /* 004f9700: sub edx, dword ptr [ebp - 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004f9703: add edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f9706: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 004f9709: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f970d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004f9710: mov edx, dword ptr [ecx + 0x68] */ r_edx = R32((u32)(r_ecx+0x68u));
    /* 004f9713: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9716: mov dword ptr [edx + eax*4], ecx */ W32((u32)(r_edx+r_eax*4), r_ecx);
L_004f9719:; BB(0x004f9719);
    /* 004f9719: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f971d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004f9720: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 004f9723: movzx edx, byte ptr [ecx + edx] */ r_edx = (u32)R8((u32)(r_ecx+r_edx));
    /* 004f9727: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9729: jne 0x4f974d */ if (!fZ) goto L_004f974d;
L_004f972b:; BB(0x004f972b);
    /* 004f972b: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f972f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004f9732: mov edx, dword ptr [ecx + 0x6c] */ r_edx = R32((u32)(r_ecx+0x6cu));
    /* 004f9735: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 004f9738: cmp eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f973b: jle 0x4f974d */ if ((fZ||fS!=fO)) goto L_004f974d;
L_004f973d:; BB(0x004f973d);
    /* 004f973d: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f9741: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004f9744: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 004f9747: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f974a: mov dword ptr [eax + ecx*4], edx */ W32((u32)(r_eax+r_ecx*4), r_edx);
L_004f974d:; BB(0x004f974d);
    /* 004f974d: jmp 0x4f965f */ goto L_004f965f;
L_004f9752:; BB(0x004f9752);
    /* 004f9752: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004f9755: mov esp, ebp */ r_esp = r_ebp;
    /* 004f9757: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f9758: ret  */ FN_RET(0x004f9580); r_esp += 4; return;
}

void f_004f9760(void) /* sub_4F9760 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f9760);
    /* 004f9760: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f9761: mov ebp, esp */ r_ebp = r_esp;
    /* 004f9763: sub esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f9766: mov dword ptr [ebp - 0x64], ecx */ W32((u32)(r_ebp+0xffffff9cu), r_ecx);
    /* 004f9769: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f976c: cmp dword ptr [eax + 0x30], 0 */ {  u32 a = R32((u32)(r_eax+0x30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9770: je 0x4f9791 */ if (fZ) goto L_004f9791;
L_004f9772:; BB(0x004f9772);
    /* 004f9772: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f9775: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 004f9778: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 004f977b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f977e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f977f: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x4f9784u); f_00686cae();
    /* 004f9784: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9787: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f978a: mov dword ptr [ecx + 0x30], 0 */ W32((u32)(r_ecx+0x30u), 0x0u);
L_004f9791:; BB(0x004f9791);
    /* 004f9791: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f9794: cmp dword ptr [edx + 0x34], 0 */ {  u32 a = R32((u32)(r_edx+0x34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9798: je 0x4f97b9 */ if (fZ) goto L_004f97b9;
L_004f979a:; BB(0x004f979a);
    /* 004f979a: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f979d: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 004f97a0: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004f97a3: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f97a6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f97a7: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x4f97acu); f_00686cae();
    /* 004f97ac: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f97af: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f97b2: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
L_004f97b9:; BB(0x004f97b9);
    /* 004f97b9: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f97bc: cmp dword ptr [ecx + 0x38], 0 */ {  u32 a = R32((u32)(r_ecx+0x38u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f97c0: je 0x4f97e1 */ if (fZ) goto L_004f97e1;
L_004f97c2:; BB(0x004f97c2);
    /* 004f97c2: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f97c5: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 004f97c8: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 004f97cb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f97ce: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f97cf: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x4f97d4u); f_00686cae();
    /* 004f97d4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f97d7: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f97da: mov dword ptr [edx + 0x38], 0 */ W32((u32)(r_edx+0x38u), 0x0u);
L_004f97e1:; BB(0x004f97e1);
    /* 004f97e1: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f97e4: cmp dword ptr [eax + 0x3c], 0 */ {  u32 a = R32((u32)(r_eax+0x3cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f97e8: je 0x4f9809 */ if (fZ) goto L_004f9809;
L_004f97ea:; BB(0x004f97ea);
    /* 004f97ea: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f97ed: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 004f97f0: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 004f97f3: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004f97f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f97f7: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x4f97fcu); f_00686cae();
    /* 004f97fc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f97ff: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f9802: mov dword ptr [ecx + 0x3c], 0 */ W32((u32)(r_ecx+0x3cu), 0x0u);
L_004f9809:; BB(0x004f9809);
    /* 004f9809: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f980c: cmp dword ptr [edx + 0x40], 0 */ {  u32 a = R32((u32)(r_edx+0x40u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9810: je 0x4f9831 */ if (fZ) goto L_004f9831;
L_004f9812:; BB(0x004f9812);
    /* 004f9812: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f9815: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 004f9818: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004f981b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f981e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f981f: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x4f9824u); f_00686cae();
    /* 004f9824: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9827: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f982a: mov dword ptr [eax + 0x40], 0 */ W32((u32)(r_eax+0x40u), 0x0u);
L_004f9831:; BB(0x004f9831);
    /* 004f9831: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f9834: cmp dword ptr [ecx + 0x44], 0 */ {  u32 a = R32((u32)(r_ecx+0x44u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9838: je 0x4f9859 */ if (fZ) goto L_004f9859;
L_004f983a:; BB(0x004f983a);
    /* 004f983a: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f983d: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 004f9840: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004f9843: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004f9846: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f9847: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x4f984cu); f_00686cae();
    /* 004f984c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f984f: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f9852: mov dword ptr [edx + 0x44], 0 */ W32((u32)(r_edx+0x44u), 0x0u);
L_004f9859:; BB(0x004f9859);
    /* 004f9859: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f985c: cmp dword ptr [eax + 0x48], 0 */ {  u32 a = R32((u32)(r_eax+0x48u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9860: je 0x4f9881 */ if (fZ) goto L_004f9881;
L_004f9862:; BB(0x004f9862);
    /* 004f9862: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f9865: mov edx, dword ptr [ecx + 0x48] */ r_edx = R32((u32)(r_ecx+0x48u));
    /* 004f9868: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 004f986b: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004f986e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f986f: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x4f9874u); f_00686cae();
    /* 004f9874: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9877: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f987a: mov dword ptr [ecx + 0x48], 0 */ W32((u32)(r_ecx+0x48u), 0x0u);
L_004f9881:; BB(0x004f9881);
    /* 004f9881: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f9884: cmp dword ptr [edx + 0x68], 0 */ {  u32 a = R32((u32)(r_edx+0x68u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9888: je 0x4f98a9 */ if (fZ) goto L_004f98a9;
L_004f988a:; BB(0x004f988a);
    /* 004f988a: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f988d: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 004f9890: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004f9893: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f9896: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f9897: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x4f989cu); f_00686cae();
    /* 004f989c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f989f: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f98a2: mov dword ptr [eax + 0x68], 0 */ W32((u32)(r_eax+0x68u), 0x0u);
L_004f98a9:; BB(0x004f98a9);
    /* 004f98a9: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f98ac: cmp dword ptr [ecx + 0x6c], 0 */ {  u32 a = R32((u32)(r_ecx+0x6cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f98b0: je 0x4f98d1 */ if (fZ) goto L_004f98d1;
L_004f98b2:; BB(0x004f98b2);
    /* 004f98b2: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f98b5: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 004f98b8: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004f98bb: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004f98be: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f98bf: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x4f98c4u); f_00686cae();
    /* 004f98c4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f98c7: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f98ca: mov dword ptr [edx + 0x6c], 0 */ W32((u32)(r_edx+0x6cu), 0x0u);
L_004f98d1:; BB(0x004f98d1);
    /* 004f98d1: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f98d4: cmp dword ptr [eax + 0x70], 0 */ {  u32 a = R32((u32)(r_eax+0x70u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f98d8: je 0x4f98f9 */ if (fZ) goto L_004f98f9;
L_004f98da:; BB(0x004f98da);
    /* 004f98da: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f98dd: mov edx, dword ptr [ecx + 0x70] */ r_edx = R32((u32)(r_ecx+0x70u));
    /* 004f98e0: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 004f98e3: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004f98e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f98e7: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x4f98ecu); f_00686cae();
    /* 004f98ec: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f98ef: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f98f2: mov dword ptr [ecx + 0x70], 0 */ W32((u32)(r_ecx+0x70u), 0x0u);
L_004f98f9:; BB(0x004f98f9);
    /* 004f98f9: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f98fc: cmp dword ptr [edx + 0x74], 0 */ {  u32 a = R32((u32)(r_edx+0x74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9900: je 0x4f9921 */ if (fZ) goto L_004f9921;
L_004f9902:; BB(0x004f9902);
    /* 004f9902: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f9905: mov ecx, dword ptr [eax + 0x74] */ r_ecx = R32((u32)(r_eax+0x74u));
    /* 004f9908: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 004f990b: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004f990e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f990f: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x4f9914u); f_00686cae();
    /* 004f9914: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9917: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f991a: mov dword ptr [eax + 0x74], 0 */ W32((u32)(r_eax+0x74u), 0x0u);
L_004f9921:; BB(0x004f9921);
    /* 004f9921: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f9924: cmp dword ptr [ecx + 0x78], 0 */ {  u32 a = R32((u32)(r_ecx+0x78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9928: je 0x4f9949 */ if (fZ) goto L_004f9949;
L_004f992a:; BB(0x004f992a);
    /* 004f992a: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f992d: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 004f9930: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 004f9933: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004f9936: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f9937: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x4f993cu); f_00686cae();
    /* 004f993c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f993f: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f9942: mov dword ptr [edx + 0x78], 0 */ W32((u32)(r_edx+0x78u), 0x0u);
L_004f9949:; BB(0x004f9949);
    /* 004f9949: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f994c: cmp dword ptr [eax + 0x7c], 0 */ {  u32 a = R32((u32)(r_eax+0x7cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9950: je 0x4f9987 */ if (fZ) goto L_004f9987;
L_004f9952:; BB(0x004f9952);
    /* 004f9952: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f9955: mov edx, dword ptr [ecx + 0x7c] */ r_edx = R32((u32)(r_ecx+0x7cu));
    /* 004f9958: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 004f995b: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 004f995e: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 004f9961: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9965: je 0x4f9976 */ if (fZ) goto L_004f9976;
L_004f9967:; BB(0x004f9967);
    /* 004f9967: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9969: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004f996c: call 0x4f9b20 */ r_esp -= 4; W32(r_esp, 0x4f9971u); f_004f9b20();
    /* 004f9971: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 004f9974: jmp 0x4f997d */ goto L_004f997d;
L_004f9976:; BB(0x004f9976);
    /* 004f9976: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
L_004f997d:; BB(0x004f997d);
    /* 004f997d: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f9980: mov dword ptr [ecx + 0x7c], 0 */ W32((u32)(r_ecx+0x7cu), 0x0u);
L_004f9987:; BB(0x004f9987);
    /* 004f9987: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f998a: cmp dword ptr [edx + 0x80], 0 */ {  u32 a = R32((u32)(r_edx+0x80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9991: je 0x4f99ce */ if (fZ) goto L_004f99ce;
L_004f9993:; BB(0x004f9993);
    /* 004f9993: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f9996: mov ecx, dword ptr [eax + 0x80] */ r_ecx = R32((u32)(r_eax+0x80u));
    /* 004f999c: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 004f999f: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004f99a2: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 004f99a5: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f99a9: je 0x4f99ba */ if (fZ) goto L_004f99ba;
L_004f99ab:; BB(0x004f99ab);
    /* 004f99ab: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004f99ad: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004f99b0: call 0x4f9b20 */ r_esp -= 4; W32(r_esp, 0x4f99b5u); f_004f9b20();
    /* 004f99b5: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 004f99b8: jmp 0x4f99c1 */ goto L_004f99c1;
L_004f99ba:; BB(0x004f99ba);
    /* 004f99ba: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
L_004f99c1:; BB(0x004f99c1);
    /* 004f99c1: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f99c4: mov dword ptr [eax + 0x80], 0 */ W32((u32)(r_eax+0x80u), 0x0u);
L_004f99ce:; BB(0x004f99ce);
    /* 004f99ce: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f99d1: cmp dword ptr [ecx + 0x84], 0 */ {  u32 a = R32((u32)(r_ecx+0x84u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f99d8: je 0x4f99ff */ if (fZ) goto L_004f99ff;
L_004f99da:; BB(0x004f99da);
    /* 004f99da: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f99dd: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 004f99e3: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 004f99e6: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 004f99e9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f99ea: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x4f99efu); f_00686cae();
    /* 004f99ef: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f99f2: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f99f5: mov dword ptr [edx + 0x84], 0 */ W32((u32)(r_edx+0x84u), 0x0u);
L_004f99ff:; BB(0x004f99ff);
    /* 004f99ff: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f9a02: cmp dword ptr [eax + 0x4c], 0 */ {  u32 a = R32((u32)(r_eax+0x4cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9a06: je 0x4f9a27 */ if (fZ) goto L_004f9a27;
L_004f9a08:; BB(0x004f9a08);
    /* 004f9a08: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f9a0b: mov edx, dword ptr [ecx + 0x4c] */ r_edx = R32((u32)(r_ecx+0x4cu));
    /* 004f9a0e: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 004f9a11: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 004f9a14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9a15: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x4f9a1au); f_00686cae();
    /* 004f9a1a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9a1d: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f9a20: mov dword ptr [ecx + 0x4c], 0 */ W32((u32)(r_ecx+0x4cu), 0x0u);
L_004f9a27:; BB(0x004f9a27);
    /* 004f9a27: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f9a2a: cmp dword ptr [edx + 0x5c], 0 */ {  u32 a = R32((u32)(r_edx+0x5cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9a2e: je 0x4f9a4f */ if (fZ) goto L_004f9a4f;
L_004f9a30:; BB(0x004f9a30);
    /* 004f9a30: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f9a33: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 004f9a36: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 004f9a39: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 004f9a3c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f9a3d: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x4f9a42u); f_00686cae();
    /* 004f9a42: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9a45: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f9a48: mov dword ptr [eax + 0x5c], 0 */ W32((u32)(r_eax+0x5cu), 0x0u);
L_004f9a4f:; BB(0x004f9a4f);
    /* 004f9a4f: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f9a52: cmp dword ptr [ecx + 0x60], 0 */ {  u32 a = R32((u32)(r_ecx+0x60u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9a56: je 0x4f9a77 */ if (fZ) goto L_004f9a77;
L_004f9a58:; BB(0x004f9a58);
    /* 004f9a58: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f9a5b: mov eax, dword ptr [edx + 0x60] */ r_eax = R32((u32)(r_edx+0x60u));
    /* 004f9a5e: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 004f9a61: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004f9a64: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f9a65: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x4f9a6au); f_00686cae();
    /* 004f9a6a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9a6d: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f9a70: mov dword ptr [edx + 0x60], 0 */ W32((u32)(r_edx+0x60u), 0x0u);
L_004f9a77:; BB(0x004f9a77);
    /* 004f9a77: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f9a7a: cmp dword ptr [eax + 0x64], 0 */ {  u32 a = R32((u32)(r_eax+0x64u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9a7e: je 0x4f9a9f */ if (fZ) goto L_004f9a9f;
L_004f9a80:; BB(0x004f9a80);
    /* 004f9a80: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f9a83: mov edx, dword ptr [ecx + 0x64] */ r_edx = R32((u32)(r_ecx+0x64u));
    /* 004f9a86: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 004f9a89: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 004f9a8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9a8d: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x4f9a92u); f_00686cae();
    /* 004f9a92: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9a95: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f9a98: mov dword ptr [ecx + 0x64], 0 */ W32((u32)(r_ecx+0x64u), 0x0u);
L_004f9a9f:; BB(0x004f9a9f);
    /* 004f9a9f: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f9aa2: cmp dword ptr [edx + 0x50], 0 */ {  u32 a = R32((u32)(r_edx+0x50u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9aa6: je 0x4f9ac7 */ if (fZ) goto L_004f9ac7;
L_004f9aa8:; BB(0x004f9aa8);
    /* 004f9aa8: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f9aab: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 004f9aae: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 004f9ab1: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 004f9ab4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f9ab5: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x4f9abau); f_00686cae();
    /* 004f9aba: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9abd: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f9ac0: mov dword ptr [eax + 0x50], 0 */ W32((u32)(r_eax+0x50u), 0x0u);
L_004f9ac7:; BB(0x004f9ac7);
    /* 004f9ac7: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f9aca: cmp dword ptr [ecx + 0x54], 0 */ {  u32 a = R32((u32)(r_ecx+0x54u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9ace: je 0x4f9aef */ if (fZ) goto L_004f9aef;
L_004f9ad0:; BB(0x004f9ad0);
    /* 004f9ad0: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f9ad3: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 004f9ad6: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 004f9ad9: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 004f9adc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f9add: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x4f9ae2u); f_00686cae();
    /* 004f9ae2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9ae5: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f9ae8: mov dword ptr [edx + 0x54], 0 */ W32((u32)(r_edx+0x54u), 0x0u);
L_004f9aef:; BB(0x004f9aef);
    /* 004f9aef: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f9af2: cmp dword ptr [eax + 0x58], 0 */ {  u32 a = R32((u32)(r_eax+0x58u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9af6: je 0x4f9b17 */ if (fZ) goto L_004f9b17;
L_004f9af8:; BB(0x004f9af8);
    /* 004f9af8: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f9afb: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 004f9afe: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 004f9b01: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 004f9b04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b05: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x4f9b0au); f_00686cae();
    /* 004f9b0a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9b0d: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f9b10: mov dword ptr [ecx + 0x58], 0 */ W32((u32)(r_ecx+0x58u), 0x0u);
L_004f9b17:; BB(0x004f9b17);
    /* 004f9b17: mov esp, ebp */ r_esp = r_ebp;
    /* 004f9b19: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f9b1a: ret  */ FN_RET(0x004f9760); r_esp += 4; return;
}

void f_004f9b20(void) /* sub_4F9B20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f9b20);
    /* 004f9b20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b21: mov ebp, esp */ r_ebp = r_esp;
    /* 004f9b23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f9b27: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004f9b2a: and eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 004f9b2d: je 0x4f9b65 */ if (fZ) goto L_004f9b65;
L_004f9b2f:; BB(0x004f9b2f);
    /* 004f9b2f: push 0x4a20f0 */ { u32 v = 0x4a20f0u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b34: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9b37: mov edx, dword ptr [ecx - 4] */ r_edx = R32((u32)(r_ecx+0xfffffffcu));
    /* 004f9b3a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b3b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b3d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9b40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b41: call 0x686e57 */ r_esp -= 4; W32(r_esp, 0x4f9b46u); f_00686e57();
    /* 004f9b46: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004f9b49: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 004f9b4c: je 0x4f9b5d */ if (fZ) goto L_004f9b5d;
L_004f9b4e:; BB(0x004f9b4e);
    /* 004f9b4e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9b51: sub edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004f9b54: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b55: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x4f9b5au); f_00686cae();
    /* 004f9b5a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f9b5d:; BB(0x004f9b5d);
    /* 004f9b5d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9b60: sub eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004f9b63: jmp 0x4f9b84 */ goto L_004f9b84;
L_004f9b65:; BB(0x004f9b65);
    /* 004f9b65: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9b68: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x4f9b6du); f_004a20f0();
    /* 004f9b6d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004f9b70: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 004f9b73: je 0x4f9b81 */ if (fZ) goto L_004f9b81;
L_004f9b75:; BB(0x004f9b75);
    /* 004f9b75: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9b78: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b79: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x4f9b7eu); f_00686cae();
    /* 004f9b7e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f9b81:; BB(0x004f9b81);
    /* 004f9b81: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
L_004f9b84:; BB(0x004f9b84);
    /* 004f9b84: mov esp, ebp */ r_esp = r_ebp;
    /* 004f9b86: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f9b87: ret 4 */ FN_RET(0x004f9b20); r_esp += 8; return;
}

