#include "protos.h"

void f_00546a40(void) /* VideoBlackjackDealScript::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00546a40);
    /* 00546a40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00546a41: mov ebp, esp */ r_ebp = r_esp;
    /* 00546a43: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00546a45: push 0x6a5134 */ { u32 v = 0x6a5134u; r_esp -= 4; W32(r_esp, v); }
    /* 00546a4a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00546a50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00546a51: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00546a52: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00546a57: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00546a59: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00546a5a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00546a5d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00546a63: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00546a66: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00546a68: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00546a6b: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x546a70u); f_005fc0d0();
    /* 00546a70: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00546a77: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00546a7a: mov dword ptr [eax], 0x6c68ac */ W32((u32)(r_eax), 0x6c68acu);
    /* 00546a80: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00546a82: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00546a88: call 0x637810 */ r_esp -= 4; W32(r_esp, 0x546a8du); f_00637810();
    /* 00546a8d: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00546a90: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00546a93: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 00546a96: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00546a9d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00546aa0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00546aa3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00546aaa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00546aab: mov esp, ebp */ r_esp = r_ebp;
    /* 00546aad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00546aae: ret  */ FN_RET(0x00546a40); r_esp += 4; return;
}

void f_00546ab0(void) /* VideoBlackjackDealScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00546ab0);
    /* 00546ab0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00546ab1: mov ebp, esp */ r_ebp = r_esp;
    /* 00546ab3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00546ab6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00546ab9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00546abc: call 0x5fc360 */ r_esp -= 4; W32(r_esp, 0x546ac1u); f_005fc360();
    /* 00546ac1: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00546ac4: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00546ac8: ja 0x546b97 */ if ((!fC&&!fZ)) goto L_00546b97;
L_00546ace:; BB(0x00546ace);
    /* 00546ace: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00546ad1: jmp dword ptr [eax*4 + 0x546bb8] */ { u32 t = R32((u32)(r_eax*4+0x546bb8u)); switch (t) { case 0x546ad8u: goto L_00546ad8; case 0x546b02u: goto L_00546b02; case 0x546b2cu: goto L_00546b2c; case 0x546b53u: goto L_00546b53; case 0x546b7au: goto L_00546b7a; default: UNSUP(0x00546ad1, "jump table entry is not a known target"); } }
L_00546ad8:; BB(0x00546ad8);
    /* 00546ad8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00546ada: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00546adc: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 00546ae2: call 0x5492c0 */ r_esp -= 4; W32(r_esp, 0x546ae7u); f_005492c0();
    /* 00546ae7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00546aea: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00546aed: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00546aee: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00546af0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00546af3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00546af5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00546af8: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00546afb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x546afdu); call_ind(t); }
    /* 00546afd: jmp 0x546bb2 */ goto L_00546bb2;
L_00546b02:; BB(0x00546b02);
    /* 00546b02: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00546b04: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00546b06: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 00546b0c: call 0x5492c0 */ r_esp -= 4; W32(r_esp, 0x546b11u); f_005492c0();
    /* 00546b11: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00546b14: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00546b17: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00546b18: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00546b1a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00546b1d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00546b1f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00546b22: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00546b25: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x546b27u); call_ind(t); }
    /* 00546b27: jmp 0x546bb2 */ goto L_00546bb2;
L_00546b2c:; BB(0x00546b2c);
    /* 00546b2c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00546b2e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00546b30: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 00546b36: call 0x5492c0 */ r_esp -= 4; W32(r_esp, 0x546b3bu); f_005492c0();
    /* 00546b3b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00546b3e: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00546b41: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00546b42: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00546b44: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00546b47: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00546b49: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00546b4c: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00546b4f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x546b51u); call_ind(t); }
    /* 00546b51: jmp 0x546bb2 */ goto L_00546bb2;
L_00546b53:; BB(0x00546b53);
    /* 00546b53: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00546b55: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00546b57: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 00546b5d: call 0x5492c0 */ r_esp -= 4; W32(r_esp, 0x546b62u); f_005492c0();
    /* 00546b62: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00546b65: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00546b68: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00546b69: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00546b6b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00546b6e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00546b70: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00546b73: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00546b76: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x546b78u); call_ind(t); }
    /* 00546b78: jmp 0x546bb2 */ goto L_00546bb2;
L_00546b7a:; BB(0x00546b7a);
    /* 00546b7a: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 00546b80: call 0x549300 */ r_esp -= 4; W32(r_esp, 0x546b85u); f_00549300();
    /* 00546b85: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00546b87: mov ecx, dword ptr [0x793400] */ r_ecx = R32((u32)(0x793400u));
    /* 00546b8d: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00546b90: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x546b95u); f_005fc420();
    /* 00546b95: jmp 0x546bb2 */ goto L_00546bb2;
L_00546b97:; BB(0x00546b97);
    /* 00546b97: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00546b99: jne 0x546bb2 */ if (!fZ) goto L_00546bb2;
L_00546b9b:; BB(0x00546b9b);
    /* 00546b9b: push 0x56a */ { u32 v = 0x56au; r_esp -= 4; W32(r_esp, v); }
    /* 00546ba0: push 0x6c66dc */ { u32 v = 0x6c66dcu; r_esp -= 4; W32(r_esp, v); }
    /* 00546ba5: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00546baa: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x546bafu); f_005e9f20();
    /* 00546baf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00546bb2:; BB(0x00546bb2);
    /* 00546bb2: mov esp, ebp */ r_esp = r_ebp;
    /* 00546bb4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00546bb5: ret  */ FN_RET(0x00546ab0); r_esp += 4; return;
}

