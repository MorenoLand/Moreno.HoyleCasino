#include "protos.h"

void f_004f6210(void) /* sub_4F6210 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f6210);
    /* 004f6210: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f6211: mov ebp, esp */ r_ebp = r_esp;
    /* 004f6213: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f6216: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004f6219: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f621c: mov cx, word ptr [eax + 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0x8u))) & 0xffffu);
    /* 004f6220: mov word ptr [ebp - 4], cx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_ecx);
    /* 004f6224: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004f6227: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f6228: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f622b: call 0x4f6020 */ r_esp -= 4; W32(r_esp, 0x4f6230u); f_004f6020();
    /* 004f6230: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
    /* 004f6234: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f6238: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f623b: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 004f623e: mov byte ptr [eax + edx], 1 */ W8((u32)(r_eax+r_edx), 0x1u);
    /* 004f6242: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 004f6246: mov esp, ebp */ r_esp = r_ebp;
    /* 004f6248: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f6249: ret 4 */ FN_RET(0x004f6210); r_esp += 8; return;
}

void f_004f6250(void) /* sub_4F6250 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f6250);
    /* 004f6250: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f6251: mov ebp, esp */ r_ebp = r_esp;
    /* 004f6253: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f6256: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004f6259: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f625c: mov cx, word ptr [eax + 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0x8u))) & 0xffffu);
    /* 004f6260: mov word ptr [ebp - 4], cx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_ecx);
    /* 004f6264: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004f6267: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f6268: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f626b: call 0x4f6020 */ r_esp -= 4; W32(r_esp, 0x4f6270u); f_004f6020();
    /* 004f6270: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
    /* 004f6274: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f6278: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f627b: mov edx, dword ptr [ecx + 0x5c] */ r_edx = R32((u32)(r_ecx+0x5cu));
    /* 004f627e: mov ax, word ptr [edx + eax*2] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2))) & 0xffffu);
    /* 004f6282: sub ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f6286: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f628a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f628d: mov edx, dword ptr [edx + 0x5c] */ r_edx = R32((u32)(r_edx+0x5cu));
    /* 004f6290: mov word ptr [edx + ecx*2], ax */ W16((u32)(r_edx+r_ecx*2), (u16)r_eax);
    /* 004f6294: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f6298: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f629b: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 004f629e: mov ax, word ptr [edx + eax*2] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2))) & 0xffffu);
    /* 004f62a2: sub ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f62a6: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f62aa: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f62ad: mov edx, dword ptr [edx + 0x50] */ r_edx = R32((u32)(r_edx+0x50u));
    /* 004f62b0: mov word ptr [edx + ecx*2], ax */ W16((u32)(r_edx+r_ecx*2), (u16)r_eax);
    /* 004f62b4: movzx eax, byte ptr [ebp + 0xc] */ r_eax = (u32)R8((u32)(r_ebp+0xcu));
    /* 004f62b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f62ba: je 0x4f62ca */ if (fZ) goto L_004f62ca;
L_004f62bc:; BB(0x004f62bc);
    /* 004f62bc: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f62c0: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f62c3: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 004f62c6: mov byte ptr [ecx + eax], 0 */ W8((u32)(r_ecx+r_eax), 0x0u);
L_004f62ca:; BB(0x004f62ca);
    /* 004f62ca: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 004f62ce: mov esp, ebp */ r_esp = r_ebp;
    /* 004f62d0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f62d1: ret 8 */ FN_RET(0x004f6250); r_esp += 12; return;
}

void f_004f6c40(void) /* sub_4F6C40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f6c40);
    /* 004f6c40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f6c41: mov ebp, esp */ r_ebp = r_esp;
    /* 004f6c43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f6c44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f6c47: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6c4a: movzx ecx, byte ptr [eax + 1] */ r_ecx = (u32)R8((u32)(r_eax+0x1u));
    /* 004f6c4e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f6c50: je 0x4f6c5c */ if (fZ) goto L_004f6c5c;
L_004f6c52:; BB(0x004f6c52);
    /* 004f6c52: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6c55: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 004f6c58: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f6c5a: jne 0x4f6c60 */ if (!fZ) goto L_004f6c60;
L_004f6c5c:; BB(0x004f6c5c);
    /* 004f6c5c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f6c5e: jmp 0x4f6c6d */ goto L_004f6c6d;
L_004f6c60:; BB(0x004f6c60);
    /* 004f6c60: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f6c64: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6c67: mov eax, dword ptr [edx + 0x68] */ r_eax = R32((u32)(r_edx+0x68u));
    /* 004f6c6a: mov eax, dword ptr [eax + ecx*4] */ r_eax = R32((u32)(r_eax+r_ecx*4));
L_004f6c6d:; BB(0x004f6c6d);
    /* 004f6c6d: mov esp, ebp */ r_esp = r_ebp;
    /* 004f6c6f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f6c70: ret 4 */ FN_RET(0x004f6c40); r_esp += 8; return;
}

