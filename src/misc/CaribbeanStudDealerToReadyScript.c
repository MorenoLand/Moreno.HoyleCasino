#include "protos.h"

void f_00421860(void) /* CaribbeanStudDealerToReadyScript::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00421860);
    /* 00421860: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00421861: mov ebp, esp */ r_ebp = r_esp;
    /* 00421863: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00421865: push 0x69e1f2 */ { u32 v = 0x69e1f2u; r_esp -= 4; W32(r_esp, v); }
    /* 0042186a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00421870: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00421871: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00421874: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00421879: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042187b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042187c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0042187f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00421885: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00421888: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0042188b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042188c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042188f: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x421894u); f_005fc0d0();
    /* 00421894: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0042189b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042189e: mov dword ptr [ecx], 0x6b5fc4 */ W32((u32)(r_ecx), 0x6b5fc4u);
    /* 004218a4: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004218a7: mov al, byte ptr [ebp + 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 004218aa: mov byte ptr [edx + 0x20], al */ W8((u32)(r_edx+0x20u), (u8)r_eax);
    /* 004218ad: movzx ecx, byte ptr [ebp + 8] */ r_ecx = (u32)R8((u32)(r_ebp+0x8u));
    /* 004218b1: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 004218b3: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 004218b5: and ecx, 0xfffffffe */ {  u32 a = r_ecx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 004218b8: add ecx, 0x13a4 */ {  u32 a = r_ecx; u32 b = 0x13a4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004218be: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004218c1: movzx edx, byte ptr [ebp + 8] */ r_edx = (u32)R8((u32)(r_ebp+0x8u));
    /* 004218c5: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 004218c7: sbb edx, edx */ { u32 c = fC; u32 a = r_edx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 004218c9: and edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004218cc: add edx, 0x13a5 */ {  u32 a = r_edx; u32 b = 0x13a5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004218d2: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 004218d5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004218d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004218d9: mov ecx, dword ptr [0x790360] */ r_ecx = R32((u32)(0x790360u));
    /* 004218df: mov ecx, dword ptr [ecx + 0x78] */ r_ecx = R32((u32)(r_ecx+0x78u));
    /* 004218e2: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x4218e7u); f_005eaf00();
    /* 004218e7: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004218ea: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004218eb: mov eax, dword ptr [0x790360] */ r_eax = R32((u32)(0x790360u));
    /* 004218f0: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 004218f3: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x4218f8u); f_005eaf00();
    /* 004218f8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004218fa: mov ecx, dword ptr [0x790360] */ r_ecx = R32((u32)(0x790360u));
    /* 00421900: mov edx, dword ptr [ecx + 0x78] */ r_edx = R32((u32)(r_ecx+0x78u));
    /* 00421903: mov eax, dword ptr [0x790360] */ r_eax = R32((u32)(0x790360u));
    /* 00421908: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 0042190b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0042190d: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00421913: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x421915u); call_ind(t); }
    /* 00421915: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00421917: mov ecx, dword ptr [0x790360] */ r_ecx = R32((u32)(0x790360u));
    /* 0042191d: mov edx, dword ptr [ecx + 0x7c] */ r_edx = R32((u32)(r_ecx+0x7cu));
    /* 00421920: mov eax, dword ptr [0x790360] */ r_eax = R32((u32)(0x790360u));
    /* 00421925: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 00421928: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0042192a: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00421930: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x421932u); call_ind(t); }
    /* 00421932: mov ecx, dword ptr [0x790360] */ r_ecx = R32((u32)(0x790360u));
    /* 00421938: mov edx, dword ptr [ecx + 0x78] */ r_edx = R32((u32)(r_ecx+0x78u));
    /* 0042193b: mov eax, dword ptr [0x790360] */ r_eax = R32((u32)(0x790360u));
    /* 00421940: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 00421943: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00421945: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00421948: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42194au); call_ind(t); }
    /* 0042194a: mov ecx, dword ptr [0x790360] */ r_ecx = R32((u32)(0x790360u));
    /* 00421950: mov edx, dword ptr [ecx + 0x7c] */ r_edx = R32((u32)(r_ecx+0x7cu));
    /* 00421953: mov eax, dword ptr [0x790360] */ r_eax = R32((u32)(0x790360u));
    /* 00421958: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 0042195b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0042195d: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00421960: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x421962u); call_ind(t); }
    /* 00421962: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00421969: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042196c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042196f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00421976: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00421977: mov esp, ebp */ r_esp = r_ebp;
    /* 00421979: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042197a: ret 8 */ FN_RET(0x00421860); r_esp += 12; return;
}

void f_00421980(void) /* CaribbeanStudDealerToReadyScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00421980);
    /* 00421980: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00421981: mov ebp, esp */ r_ebp = r_esp;
    /* 00421983: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00421986: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00421989: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042198c: call 0x5fc360 */ r_esp -= 4; W32(r_esp, 0x421991u); f_005fc360();
    /* 00421991: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00421994: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00421998: je 0x4219af */ if (fZ) goto L_004219af;
L_0042199a:; BB(0x0042199a);
    /* 0042199a: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042199e: je 0x4219f5 */ if (fZ) goto L_004219f5;
L_004219a0:; BB(0x004219a0);
    /* 004219a0: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004219a4: je 0x421ac4 */ if (fZ) goto L_00421ac4;
L_004219aa:; BB(0x004219aa);
    /* 004219aa: jmp 0x421aef */ goto L_00421aef;
L_004219af:; BB(0x004219af);
    /* 004219af: mov word ptr [0x790340], 0 */ W16((u32)(0x790340u), 0x0u);
    /* 004219b8: mov eax, dword ptr [0x790360] */ r_eax = R32((u32)(0x790360u));
    /* 004219bd: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 004219c0: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x4219c5u); f_005eb240();
    /* 004219c5: mov word ptr [0x79033c], ax */ W16((u32)(0x79033cu), (u16)r_eax);
    /* 004219cb: mov ecx, dword ptr [0x790360] */ r_ecx = R32((u32)(0x790360u));
    /* 004219d1: mov ecx, dword ptr [ecx + 0x7c] */ r_ecx = R32((u32)(r_ecx+0x7cu));
    /* 004219d4: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x4219d9u); f_005eb240();
    /* 004219d9: mov word ptr [0x790338], ax */ W16((u32)(0x790338u), (u16)r_eax);
    /* 004219df: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004219e1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004219e3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004219e6: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004219e8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004219eb: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 004219ee: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4219f0u); call_ind(t); }
    /* 004219f0: jmp 0x421aef */ goto L_00421aef;
L_004219f5:; BB(0x004219f5);
    /* 004219f5: mov ax, word ptr [0x790340] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x790340u))) & 0xffffu);
    /* 004219fb: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004219ff: mov word ptr [0x790340], ax */ W16((u32)(0x790340u), (u16)r_eax);
    /* 00421a05: movsx ecx, word ptr [0x790340] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x790340u));
    /* 00421a0c: movsx edx, word ptr [0x790338] */ r_edx = (u32)(i32)(i16)R16((u32)(0x790338u));
    /* 00421a13: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00421a15: jg 0x421a3a */ if ((!fZ&&fS==fO)) goto L_00421a3a;
L_00421a17:; BB(0x00421a17);
    /* 00421a17: movsx eax, word ptr [0x790340] */ r_eax = (u32)(i32)(i16)R16((u32)(0x790340u));
    /* 00421a1e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00421a1f: mov ecx, dword ptr [0x790360] */ r_ecx = R32((u32)(0x790360u));
    /* 00421a25: mov edx, dword ptr [ecx + 0x7c] */ r_edx = R32((u32)(r_ecx+0x7cu));
    /* 00421a28: mov eax, dword ptr [0x790360] */ r_eax = R32((u32)(0x790360u));
    /* 00421a2d: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 00421a30: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00421a32: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00421a38: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x421a3au); call_ind(t); }
L_00421a3a:; BB(0x00421a3a);
    /* 00421a3a: movsx ecx, word ptr [0x790340] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x790340u));
    /* 00421a41: movsx edx, word ptr [0x79033c] */ r_edx = (u32)(i32)(i16)R16((u32)(0x79033cu));
    /* 00421a48: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00421a4a: jg 0x421a6f */ if ((!fZ&&fS==fO)) goto L_00421a6f;
L_00421a4c:; BB(0x00421a4c);
    /* 00421a4c: movsx eax, word ptr [0x790340] */ r_eax = (u32)(i32)(i16)R16((u32)(0x790340u));
    /* 00421a53: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00421a54: mov ecx, dword ptr [0x790360] */ r_ecx = R32((u32)(0x790360u));
    /* 00421a5a: mov edx, dword ptr [ecx + 0x78] */ r_edx = R32((u32)(r_ecx+0x78u));
    /* 00421a5d: mov eax, dword ptr [0x790360] */ r_eax = R32((u32)(0x790360u));
    /* 00421a62: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 00421a65: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00421a67: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00421a6d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x421a6fu); call_ind(t); }
L_00421a6f:; BB(0x00421a6f);
    /* 00421a6f: movsx ecx, word ptr [0x790340] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x790340u));
    /* 00421a76: movsx edx, word ptr [0x79033c] */ r_edx = (u32)(i32)(i16)R16((u32)(0x79033cu));
    /* 00421a7d: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00421a7f: jl 0x421a93 */ if ((fS!=fO)) goto L_00421a93;
L_00421a81:; BB(0x00421a81);
    /* 00421a81: movsx eax, word ptr [0x790340] */ r_eax = (u32)(i32)(i16)R16((u32)(0x790340u));
    /* 00421a88: movsx ecx, word ptr [0x790338] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x790338u));
    /* 00421a8f: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00421a91: jge 0x421aa4 */ if ((fS==fO)) goto L_00421aa4;
L_00421a93:; BB(0x00421a93);
    /* 00421a93: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00421a95: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00421a98: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00421a9a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00421a9d: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00421aa0: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x421aa2u); call_ind(t); }
    /* 00421aa2: jmp 0x421ab3 */ goto L_00421ab3;
L_00421aa4:; BB(0x00421aa4);
    /* 00421aa4: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00421aa6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00421aa9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00421aab: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00421aae: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00421ab1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x421ab3u); call_ind(t); }
L_00421ab3:; BB(0x00421ab3);
    /* 00421ab3: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00421ab5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00421ab8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00421aba: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00421abd: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00421ac0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x421ac2u); call_ind(t); }
    /* 00421ac2: jmp 0x421aef */ goto L_00421aef;
L_00421ac4:; BB(0x00421ac4);
    /* 00421ac4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00421ac7: cmp dword ptr [ecx + 0x10], 0 */ {  u32 a = R32((u32)(r_ecx+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00421acb: je 0x421aef */ if (fZ) goto L_00421aef;
L_00421acd:; BB(0x00421acd);
    /* 00421acd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00421acf: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00421ad2: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 00421ad5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00421ad8: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 00421adb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00421add: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00421ae0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x421ae2u); call_ind(t); }
    /* 00421ae2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00421ae4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00421ae7: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 00421aea: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x421aefu); f_005fc420();
L_00421aef:; BB(0x00421aef);
    /* 00421aef: mov esp, ebp */ r_esp = r_ebp;
    /* 00421af1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00421af2: ret  */ FN_RET(0x00421980); r_esp += 4; return;
}

