#include "protos.h"

void f_0041d8a0(void) /* BlackjackBet::vfunc44 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041d8a0);
    /* 0041d8a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041d8a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0041d8a3: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041d8a6: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0041d8a9: mov eax, dword ptr [0x790324] */ r_eax = R32((u32)(0x790324u));
    /* 0041d8ae: mov ecx, dword ptr [eax + 0x4d0] */ r_ecx = R32((u32)(r_eax+0x4d0u));
    /* 0041d8b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0041d8b7: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041d8ba: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x41d8bfu); f_005f5400();
    /* 0041d8bf: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041d8c2: jne 0x41d93b */ if (!fZ) goto L_0041d93b;
L_0041d8c4:; BB(0x0041d8c4);
    /* 0041d8c4: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0041d8ca: call 0x419080 */ r_esp -= 4; W32(r_esp, 0x41d8cfu); f_00419080();
    /* 0041d8cf: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0041d8d2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041d8d5: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x41d8dau); f_0063aac0();
    /* 0041d8da: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0041d8dc: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0041d8df: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041d8e3: je 0x41d901 */ if (fZ) goto L_0041d901;
L_0041d8e5:; BB(0x0041d8e5);
    /* 0041d8e5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041d8e8: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x41d8edu); f_0063aac0();
    /* 0041d8ed: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0041d8ef: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0041d8f2: cmp dword ptr [ebp - 0xc], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041d8f6: je 0x41d901 */ if (fZ) goto L_0041d901;
L_0041d8f8:; BB(0x0041d8f8);
    /* 0041d8f8: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 0041d8ff: jmp 0x41d908 */ goto L_0041d908;
L_0041d901:; BB(0x0041d901);
    /* 0041d901: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
L_0041d908:; BB(0x0041d908);
    /* 0041d908: movzx ecx, byte ptr [ebp - 0x20] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffe0u));
    /* 0041d90c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041d90e: je 0x41d93b */ if (fZ) goto L_0041d93b;
L_0041d910:; BB(0x0041d910);
    /* 0041d910: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0041d916: call 0x419080 */ r_esp -= 4; W32(r_esp, 0x41d91bu); f_00419080();
    /* 0041d91b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0041d91e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041d921: mov al, byte ptr [edx + 0x4a0] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x4a0u))) & 0xffu);
    /* 0041d927: mov byte ptr [ebp - 0x15], al */ W8((u32)(r_ebp+0xffffffebu), (u8)r_eax);
    /* 0041d92a: movzx ecx, byte ptr [ebp - 0x15] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffebu));
    /* 0041d92e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041d930: jne 0x41d93b */ if (!fZ) goto L_0041d93b;
L_0041d932:; BB(0x0041d932);
    /* 0041d932: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0041d939: jmp 0x41d942 */ goto L_0041d942;
L_0041d93b:; BB(0x0041d93b);
    /* 0041d93b: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0041d942:; BB(0x0041d942);
    /* 0041d942: mov al, byte ptr [ebp - 0x24] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffdcu))) & 0xffu);
    /* 0041d945: mov esp, ebp */ r_esp = r_ebp;
    /* 0041d947: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041d948: ret  */ FN_RET(0x0041d8a0); r_esp += 4; return;
}

void f_0041dc30(void) /* BlackjackBet::vfunc48 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041dc30);
    /* 0041dc30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041dc31: mov ebp, esp */ r_ebp = r_esp;
    /* 0041dc33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041dc34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0041dc37: cmp dword ptr [0x79032c], 0 */ {  u32 a = R32((u32)(0x79032cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041dc3e: je 0x41dc92 */ if (fZ) goto L_0041dc92;
L_0041dc40:; BB(0x0041dc40);
    /* 0041dc40: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041dc43: imul eax, eax, 0x118 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x118u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041dc49: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0041dc4f: cmp byte ptr [ecx + eax + 0x11b], 0 */ {  u32 a = R8((u32)(r_ecx+r_eax+0x11bu)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0041dc57: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0041dc5a: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 0041dc5d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041dc5f: je 0x41dc7f */ if (fZ) goto L_0041dc7f;
L_0041dc61:; BB(0x0041dc61);
    /* 0041dc61: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041dc64: imul ecx, ecx, 0x118 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x118u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041dc6a: mov edx, dword ptr [0x790324] */ r_edx = R32((u32)(0x790324u));
    /* 0041dc70: movsx eax, byte ptr [edx + ecx + 0x111] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+r_ecx+0x111u));
    /* 0041dc78: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041dc7b: jne 0x41dc7f */ if (!fZ) goto L_0041dc7f;
L_0041dc7d:; BB(0x0041dc7d);
    /* 0041dc7d: jmp 0x41dc92 */ goto L_0041dc92;
L_0041dc7f:; BB(0x0041dc7f);
    /* 0041dc7f: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0041dc82: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041dc83: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041dc86: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041dc87: mov ecx, dword ptr [0x79032c] */ r_ecx = R32((u32)(0x79032cu));
    /* 0041dc8d: call 0x40cd50 */ r_esp -= 4; W32(r_esp, 0x41dc92u); f_0040cd50();
L_0041dc92:; BB(0x0041dc92);
    /* 0041dc92: mov esp, ebp */ r_esp = r_ebp;
    /* 0041dc94: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041dc95: ret 8 */ FN_RET(0x0041dc30); r_esp += 12; return;
}

