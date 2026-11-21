#include "protos.h"

void f_0061dc00(void) /* Resource::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061dc00);
    /* 0061dc00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061dc01: mov ebp, esp */ r_ebp = r_esp;
    /* 0061dc03: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0061dc05: push 0x6ab2a8 */ { u32 v = 0x6ab2a8u; r_esp -= 4; W32(r_esp, v); }
    /* 0061dc0a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0061dc10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061dc11: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061dc12: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0061dc17: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061dc19: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061dc1a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0061dc1d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0061dc23: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0061dc26: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061dc29: call 0x62aea0 */ r_esp -= 4; W32(r_esp, 0x61dc2eu); f_0062aea0();
    /* 0061dc2e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061dc35: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061dc38: mov dword ptr [eax], 0x6d8ba4 */ W32((u32)(r_eax), 0x6d8ba4u);
    /* 0061dc3e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061dc41: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061dc44: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 0061dc47: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061dc4a: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061dc4d: mov dword ptr [eax + 0x34], ecx */ W32((u32)(r_eax+0x34u), r_ecx);
    /* 0061dc50: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061dc53: mov byte ptr [edx + 0x38], 0 */ W8((u32)(r_edx+0x38u), 0x0u);
    /* 0061dc57: movzx eax, byte ptr [ebp + 0x14] */ r_eax = (u32)R8((u32)(r_ebp+0x14u));
    /* 0061dc5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061dc5c: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0061dc5f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061dc60: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061dc63: call 0x61dff0 */ r_esp -= 4; W32(r_esp, 0x61dc68u); f_0061dff0();
    /* 0061dc68: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0061dc6f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061dc72: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061dc75: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061dc7c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061dc7d: mov esp, ebp */ r_esp = r_ebp;
    /* 0061dc7f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061dc80: ret 0x10 */ FN_RET(0x0061dc00); r_esp += 20; return;
}

void f_0061dc90(void) /* Resource::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061dc90);
    /* 0061dc90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061dc91: mov ebp, esp */ r_ebp = r_esp;
    /* 0061dc93: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0061dc95: push 0x6ab2cb */ { u32 v = 0x6ab2cbu; r_esp -= 4; W32(r_esp, v); }
    /* 0061dc9a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0061dca0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061dca1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061dca4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0061dca9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061dcab: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0061dcae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061dcaf: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0061dcb2: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0061dcb8: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0061dcbb: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0061dcbe: call 0x62aea0 */ r_esp -= 4; W32(r_esp, 0x61dcc3u); f_0062aea0();
    /* 0061dcc3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061dcca: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0061dccd: mov dword ptr [eax], 0x6d8ba4 */ W32((u32)(r_eax), 0x6d8ba4u);
    /* 0061dcd3: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0061dcd6: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0061dcd9: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 0061dcdc: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0061dcdf: mov byte ptr [eax + 0x38], 0 */ W8((u32)(r_eax+0x38u), 0x0u);
    /* 0061dce3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061dce6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061dce7: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x61dcecu); f_00686ecc();
    /* 0061dcec: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061dcef: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0061dcf2: jbe 0x61dcf6 */ if ((fC||fZ)) goto L_0061dcf6;
L_0061dcf4:; BB(0x0061dcf4);
    /* 0061dcf4: jmp 0x61dd6a */ goto L_0061dd6a;
L_0061dcf6:; BB(0x0061dcf6);
    /* 0061dcf6: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0061dcf8: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0061dcfa: lea edx, [ebp - 0x18] */ r_edx = (u32)(r_ebp+0xffffffe8u);
    /* 0061dcfd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061dcfe: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x61dd03u); f_00686fa2();
    /* 0061dd03: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061dd06: mov byte ptr [ebp - 0x14], 0 */ W8((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0061dd0a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061dd0d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061dd0e: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x61dd13u); f_00686ecc();
    /* 0061dd13: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061dd16: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061dd17: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061dd1a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061dd1b: lea edx, [ebp - 0x18] */ r_edx = (u32)(r_ebp+0xffffffe8u);
    /* 0061dd1e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061dd1f: call 0x686fde */ r_esp -= 4; W32(r_esp, 0x61dd24u); f_00686fde();
    /* 0061dd24: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061dd27: lea eax, [ebp - 0x18] */ r_eax = (u32)(r_ebp+0xffffffe8u);
    /* 0061dd2a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061dd2b: call dword ptr [0x6b21e0] */ { u32 t = R32((u32)(0x6b21e0u)); r_esp -= 4; W32(r_esp, 0x61dd31u); call_ind(t); }
    /* 0061dd31: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061dd34: movsx ecx, byte ptr [ebp - 0x15] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffebu));
    /* 0061dd38: shl ecx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0061dd3b: movsx edx, byte ptr [ebp - 0x16] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffeau));
    /* 0061dd3f: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0061dd42: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061dd44: movsx eax, byte ptr [ebp - 0x17] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffe9u));
    /* 0061dd48: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0061dd4b: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061dd4d: movsx edx, byte ptr [ebp - 0x18] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffe8u));
    /* 0061dd51: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061dd53: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0061dd56: mov dword ptr [eax + 0x30], ecx */ W32((u32)(r_eax+0x30u), r_ecx);
    /* 0061dd59: movzx ecx, byte ptr [ebp + 0x14] */ r_ecx = (u32)R8((u32)(r_ebp+0x14u));
    /* 0061dd5d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061dd5e: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0061dd61: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061dd62: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0061dd65: call 0x61dff0 */ r_esp -= 4; W32(r_esp, 0x61dd6au); f_0061dff0();
L_0061dd6a:; BB(0x0061dd6a);
    /* 0061dd6a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0061dd71: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0061dd74: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061dd77: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061dd7e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061dd7f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061dd82: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0061dd84: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x61dd89u); f_00686d72();
    /* 0061dd89: mov esp, ebp */ r_esp = r_ebp;
    /* 0061dd8b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061dd8c: ret 0x10 */ FN_RET(0x0061dc90); r_esp += 20; return;
}

void f_0061dd90(void) /* Resource::ctor_1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061dd90);
    /* 0061dd90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061dd91: mov ebp, esp */ r_ebp = r_esp;
    /* 0061dd93: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0061dd95: push 0x6ab2f8 */ { u32 v = 0x6ab2f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0061dd9a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0061dda0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061dda1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061dda2: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0061dda7: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061dda9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061ddaa: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0061ddad: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0061ddb3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0061ddb6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061ddb9: call 0x62aea0 */ r_esp -= 4; W32(r_esp, 0x61ddbeu); f_0062aea0();
    /* 0061ddbe: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061ddc5: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061ddc8: mov dword ptr [eax], 0x6d8ba4 */ W32((u32)(r_eax), 0x6d8ba4u);
    /* 0061ddce: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061ddd1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061ddd4: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 0061ddd7: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061ddda: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
    /* 0061dde1: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061dde4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061dde5: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061dde8: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061ddeb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061ddec: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x61ddf1u); f_00686d8e();
    /* 0061ddf1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061ddf4: movzx eax, byte ptr [ebp + 0x14] */ r_eax = (u32)R8((u32)(r_ebp+0x14u));
    /* 0061ddf8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061ddf9: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0061ddfc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061ddfd: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061de00: call 0x61dff0 */ r_esp -= 4; W32(r_esp, 0x61de05u); f_0061dff0();
    /* 0061de05: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0061de0c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061de0f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061de12: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061de19: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061de1a: mov esp, ebp */ r_esp = r_ebp;
    /* 0061de1c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061de1d: ret 0x10 */ FN_RET(0x0061dd90); r_esp += 20; return;
}

void f_0061de20(void) /* Resource::ctor_2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061de20);
    /* 0061de20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061de21: mov ebp, esp */ r_ebp = r_esp;
    /* 0061de23: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0061de25: push 0x6ab31e */ { u32 v = 0x6ab31eu; r_esp -= 4; W32(r_esp, v); }
    /* 0061de2a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0061de30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061de31: sub esp, 0x110 */ {  u32 a = r_esp; u32 b = 0x110u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061de37: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0061de3c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061de3e: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0061de41: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061de42: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0061de45: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0061de4b: mov dword ptr [ebp - 0x11c], ecx */ W32((u32)(r_ebp+0xfffffee4u), r_ecx);
    /* 0061de51: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0061de57: call 0x62aea0 */ r_esp -= 4; W32(r_esp, 0x61de5cu); f_0062aea0();
    /* 0061de5c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061de63: mov eax, dword ptr [ebp - 0x11c] */ r_eax = R32((u32)(r_ebp+0xfffffee4u));
    /* 0061de69: mov dword ptr [eax], 0x6d8ba4 */ W32((u32)(r_eax), 0x6d8ba4u);
    /* 0061de6f: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0061de75: mov dword ptr [ecx + 0x14c], 0 */ W32((u32)(r_ecx+0x14cu), 0x0u);
    /* 0061de7f: mov edx, dword ptr [ebp - 0x11c] */ r_edx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0061de85: mov dword ptr [edx + 0x158], 0 */ W32((u32)(r_edx+0x158u), 0x0u);
    /* 0061de8f: mov eax, dword ptr [ebp - 0x11c] */ r_eax = R32((u32)(r_ebp+0xfffffee4u));
    /* 0061de95: mov dword ptr [eax + 0x13c], 0 */ W32((u32)(r_eax+0x13cu), 0x0u);
    /* 0061de9f: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0061dea5: mov dword ptr [ecx + 0x140], 0 */ W32((u32)(r_ecx+0x140u), 0x0u);
    /* 0061deaf: mov edx, dword ptr [ebp - 0x11c] */ r_edx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0061deb5: mov dword ptr [edx + 0x144], 0 */ W32((u32)(r_edx+0x144u), 0x0u);
    /* 0061debf: mov eax, dword ptr [ebp - 0x11c] */ r_eax = R32((u32)(r_ebp+0xfffffee4u));
    /* 0061dec5: mov byte ptr [eax + 0x154], 0 */ W8((u32)(r_eax+0x154u), 0x0u);
    /* 0061decc: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0061ded2: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061ded5: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 0061ded8: mov eax, dword ptr [ebp - 0x11c] */ r_eax = R32((u32)(r_ebp+0xfffffee4u));
    /* 0061dede: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061dee1: mov dword ptr [eax + 0x34], ecx */ W32((u32)(r_eax+0x34u), r_ecx);
    /* 0061dee4: mov edx, dword ptr [ebp - 0x11c] */ r_edx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0061deea: mov byte ptr [edx + 0x38], 0 */ W8((u32)(r_edx+0x38u), 0x0u);
    /* 0061deee: mov eax, dword ptr [ebp - 0x11c] */ r_eax = R32((u32)(r_ebp+0xfffffee4u));
    /* 0061def4: cmp dword ptr [eax + 0x34], 0 */ {  u32 a = R32((u32)(r_eax+0x34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061def8: jne 0x61deff */ if (!fZ) goto L_0061deff;
L_0061defa:; BB(0x0061defa);
    /* 0061defa: jmp 0x61dfc7 */ goto L_0061dfc7;
L_0061deff:; BB(0x0061deff);
    /* 0061deff: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061df03: je 0x61df0b */ if (fZ) goto L_0061df0b;
L_0061df05:; BB(0x0061df05);
    /* 0061df05: cmp dword ptr [ebp + 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061df09: jne 0x61df21 */ if (!fZ) goto L_0061df21;
L_0061df0b:; BB(0x0061df0b);
    /* 0061df0b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0061df0d: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 0061df10: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061df11: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0061df17: call 0x61dff0 */ r_esp -= 4; W32(r_esp, 0x61df1cu); f_0061dff0();
    /* 0061df1c: jmp 0x61dfc7 */ goto L_0061dfc7;
L_0061df21:; BB(0x0061df21);
    /* 0061df21: mov edx, dword ptr [ebp - 0x11c] */ r_edx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0061df27: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0061df2a: mov dword ptr [edx + 0x14c], eax */ W32((u32)(r_edx+0x14cu), r_eax);
    /* 0061df30: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0061df36: mov edx, dword ptr [ecx + 0x14c] */ r_edx = R32((u32)(r_ecx+0x14cu));
    /* 0061df3c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061df3d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x61df42u); f_00686d82();
    /* 0061df42: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061df45: mov dword ptr [ebp - 0x118], eax */ W32((u32)(r_ebp+0xfffffee8u), r_eax);
    /* 0061df4b: mov eax, dword ptr [ebp - 0x11c] */ r_eax = R32((u32)(r_ebp+0xfffffee4u));
    /* 0061df51: mov ecx, dword ptr [ebp - 0x118] */ r_ecx = R32((u32)(r_ebp+0xfffffee8u));
    /* 0061df57: mov dword ptr [eax + 0x158], ecx */ W32((u32)(r_eax+0x158u), r_ecx);
    /* 0061df5d: mov edx, dword ptr [ebp - 0x11c] */ r_edx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0061df63: mov eax, dword ptr [edx + 0x14c] */ r_eax = R32((u32)(r_edx+0x14cu));
    /* 0061df69: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061df6a: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0061df6d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061df6e: mov edx, dword ptr [ebp - 0x11c] */ r_edx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0061df74: mov eax, dword ptr [edx + 0x158] */ r_eax = R32((u32)(r_edx+0x158u));
    /* 0061df7a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061df7b: call 0x686fde */ r_esp -= 4; W32(r_esp, 0x61df80u); f_00686fde();
    /* 0061df80: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061df83: movzx ecx, byte ptr [0x795fb2] */ r_ecx = (u32)R8((u32)(0x795fb2u));
    /* 0061df8a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061df8c: je 0x61dfb6 */ if (fZ) goto L_0061dfb6;
L_0061df8e:; BB(0x0061df8e);
    /* 0061df8e: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0061df91: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061df92: push 0x6d8bac */ { u32 v = 0x6d8bacu; r_esp -= 4; W32(r_esp, v); }
    /* 0061df97: lea eax, [ebp - 0x114] */ r_eax = (u32)(r_ebp+0xfffffeecu);
    /* 0061df9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061df9e: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x61dfa4u); call_ind(t); }
    /* 0061dfa4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061dfa7: lea ecx, [ebp - 0x114] */ r_ecx = (u32)(r_ebp+0xfffffeecu);
    /* 0061dfad: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061dfae: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x61dfb3u); f_0062fde0();
    /* 0061dfb3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0061dfb6:; BB(0x0061dfb6);
    /* 0061dfb6: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0061dfb8: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 0061dfbb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061dfbc: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0061dfc2: call 0x61dff0 */ r_esp -= 4; W32(r_esp, 0x61dfc7u); f_0061dff0();
L_0061dfc7:; BB(0x0061dfc7);
    /* 0061dfc7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0061dfce: mov eax, dword ptr [ebp - 0x11c] */ r_eax = R32((u32)(r_ebp+0xfffffee4u));
    /* 0061dfd4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061dfd7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061dfde: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061dfdf: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061dfe2: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0061dfe4: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x61dfe9u); f_00686d72();
    /* 0061dfe9: mov esp, ebp */ r_esp = r_ebp;
    /* 0061dfeb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061dfec: ret 0x14 */ FN_RET(0x0061de20); r_esp += 24; return;
}

void f_0061e400(void) /* Resource::ctor_3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061e400);
    /* 0061e400: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061e401: mov ebp, esp */ r_ebp = r_esp;
    /* 0061e403: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0061e405: push 0x6ab34e */ { u32 v = 0x6ab34eu; r_esp -= 4; W32(r_esp, v); }
    /* 0061e40a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0061e410: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e411: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061e414: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0061e419: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061e41b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e41c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0061e41f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0061e425: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0061e428: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061e42b: mov dword ptr [eax], 0x6d8ba4 */ W32((u32)(r_eax), 0x6d8ba4u);
    /* 0061e431: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061e438: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061e43b: mov edx, dword ptr [ecx + 0x158] */ r_edx = R32((u32)(r_ecx+0x158u));
    /* 0061e441: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0061e444: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0061e447: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e448: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x61e44du); f_00686cae();
    /* 0061e44d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061e450: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061e453: cmp dword ptr [ecx + 0x13c], 0 */ {  u32 a = R32((u32)(r_ecx+0x13cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e45a: je 0x61e47d */ if (fZ) goto L_0061e47d;
L_0061e45c:; BB(0x0061e45c);
    /* 0061e45c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061e45f: movzx eax, byte ptr [edx + 0x154] */ r_eax = (u32)R8((u32)(r_edx+0x154u));
    /* 0061e466: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e468: je 0x61e47d */ if (fZ) goto L_0061e47d;
L_0061e46a:; BB(0x0061e46a);
    /* 0061e46a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061e46d: mov edx, dword ptr [ecx + 0x13c] */ r_edx = R32((u32)(r_ecx+0x13cu));
    /* 0061e473: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e474: call dword ptr [0x6b2258] */ { u32 t = R32((u32)(0x6b2258u)); r_esp -= 4; W32(r_esp, 0x61e47au); call_ind(t); }
    /* 0061e47a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0061e47d:; BB(0x0061e47d);
    /* 0061e47d: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0061e484: jmp 0x61e48f */ goto L_0061e48f;
L_0061e486:; BB(0x0061e486);
    /* 0061e486: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061e489: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061e48c: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_0061e48f:; BB(0x0061e48f);
    /* 0061e48f: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061e493: jge 0x61e4cd */ if ((fS==fO)) goto L_0061e4cd;
L_0061e495:; BB(0x0061e495);
    /* 0061e495: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061e498: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061e49b: cmp dword ptr [edx + ecx*8 + 0xc], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*8+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e4a0: je 0x61e4bf */ if (fZ) goto L_0061e4bf;
L_0061e4a2:; BB(0x0061e4a2);
    /* 0061e4a2: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061e4a5: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061e4a8: movzx edx, byte ptr [ecx + eax*8 + 8] */ r_edx = (u32)R8((u32)(r_ecx+r_eax*8+0x8u));
    /* 0061e4ad: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e4af: je 0x61e4bf */ if (fZ) goto L_0061e4bf;
L_0061e4b1:; BB(0x0061e4b1);
    /* 0061e4b1: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061e4b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e4b5: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061e4b8: call 0x61f320 */ r_esp -= 4; W32(r_esp, 0x61e4bdu); f_0061f320();
    /* 0061e4bd: jmp 0x61e4cb */ goto L_0061e4cb;
L_0061e4bf:; BB(0x0061e4bf);
    /* 0061e4bf: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061e4c2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e4c3: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061e4c6: call 0x61f2d0 */ r_esp -= 4; W32(r_esp, 0x61e4cbu); f_0061f2d0();
L_0061e4cb:; BB(0x0061e4cb);
    /* 0061e4cb: jmp 0x61e486 */ goto L_0061e486;
L_0061e4cd:; BB(0x0061e4cd);
    /* 0061e4cd: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0061e4d4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061e4d7: call 0x62aef0 */ r_esp -= 4; W32(r_esp, 0x61e4dcu); f_0062aef0();
    /* 0061e4dc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061e4df: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061e4e6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061e4e7: mov esp, ebp */ r_esp = r_ebp;
    /* 0061e4e9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061e4ea: ret  */ FN_RET(0x0061e400); r_esp += 4; return;
}

void f_0061ebd0(void) /* resource::func_0061ebd0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061ebd0);
    /* 0061ebd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061ebd1: mov ebp, esp */ r_ebp = r_esp;
    /* 0061ebd3: sub esp, 0x390 */ {  u32 a = r_esp; u32 b = 0x390u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061ebd9: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0061ebde: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061ebe0: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0061ebe3: mov dword ptr [ebp - 0x390], ecx */ W32((u32)(r_ebp+0xfffffc70u), r_ecx);
    /* 0061ebe9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061ebf0: mov byte ptr [ebp - 0x110], 0 */ W8((u32)(r_ebp+0xfffffef0u), 0x0u);
    /* 0061ebf7: lea eax, [ebp - 0x110] */ r_eax = (u32)(r_ebp+0xfffffef0u);
    /* 0061ebfd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061ebfe: mov ecx, dword ptr [ebp - 0x390] */ r_ecx = R32((u32)(r_ebp+0xfffffc70u));
    /* 0061ec04: call 0x61e6c0 */ r_esp -= 4; W32(r_esp, 0x61ec09u); f_0061e6c0();
    /* 0061ec09: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0061ec0c: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061ec10: je 0x61ecfa */ if (fZ) goto L_0061ecfa;
L_0061ec16:; BB(0x0061ec16);
    /* 0061ec16: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061ec19: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061ec1a: call 0x5e9fd0 */ r_esp -= 4; W32(r_esp, 0x61ec1fu); f_005e9fd0();
    /* 0061ec1f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061ec22: mov edx, dword ptr [ebp - 0x390] */ r_edx = R32((u32)(r_ebp+0xfffffc70u));
    /* 0061ec28: mov dword ptr [edx + 0x14c], eax */ W32((u32)(r_edx+0x14cu), r_eax);
    /* 0061ec2e: mov eax, dword ptr [ebp - 0x390] */ r_eax = R32((u32)(r_ebp+0xfffffc70u));
    /* 0061ec34: mov ecx, dword ptr [eax + 0x14c] */ r_ecx = R32((u32)(r_eax+0x14cu));
    /* 0061ec3a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061ec3b: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x61ec40u); f_00686d82();
    /* 0061ec40: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061ec43: mov dword ptr [ebp - 0x38c], eax */ W32((u32)(r_ebp+0xfffffc74u), r_eax);
    /* 0061ec49: mov edx, dword ptr [ebp - 0x390] */ r_edx = R32((u32)(r_ebp+0xfffffc70u));
    /* 0061ec4f: mov eax, dword ptr [ebp - 0x38c] */ r_eax = R32((u32)(r_ebp+0xfffffc74u));
    /* 0061ec55: mov dword ptr [edx + 0x158], eax */ W32((u32)(r_edx+0x158u), r_eax);
    /* 0061ec5b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061ec5e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061ec5f: mov edx, dword ptr [ebp - 0x390] */ r_edx = R32((u32)(r_ebp+0xfffffc70u));
    /* 0061ec65: mov eax, dword ptr [edx + 0x14c] */ r_eax = R32((u32)(r_edx+0x14cu));
    /* 0061ec6b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061ec6c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061ec6e: mov ecx, dword ptr [ebp - 0x390] */ r_ecx = R32((u32)(r_ebp+0xfffffc70u));
    /* 0061ec74: mov edx, dword ptr [ecx + 0x158] */ r_edx = R32((u32)(r_ecx+0x158u));
    /* 0061ec7a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061ec7b: call dword ptr [0x6b225c] */ { u32 t = R32((u32)(0x6b225cu)); r_esp -= 4; W32(r_esp, 0x61ec81u); call_ind(t); }
    /* 0061ec81: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061ec84: mov dword ptr [ebp - 0x114], eax */ W32((u32)(r_ebp+0xfffffeecu), r_eax);
    /* 0061ec8a: mov eax, dword ptr [ebp - 0x390] */ r_eax = R32((u32)(r_ebp+0xfffffc70u));
    /* 0061ec90: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0061ec96: cmp ecx, dword ptr [eax + 0x14c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x14cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061ec9c: je 0x61ecb5 */ if (fZ) goto L_0061ecb5;
L_0061ec9e:; BB(0x0061ec9e);
    /* 0061ec9e: push 0x180 */ { u32 v = 0x180u; r_esp -= 4; W32(r_esp, v); }
    /* 0061eca3: push 0x6d8db8 */ { u32 v = 0x6d8db8u; r_esp -= 4; W32(r_esp, v); }
    /* 0061eca8: push 0x6d8da0 */ { u32 v = 0x6d8da0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061ecad: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x61ecb2u); f_005e9f20();
    /* 0061ecb2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0061ecb5:; BB(0x0061ecb5);
    /* 0061ecb5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061ecb8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061ecb9: call dword ptr [0x6b2258] */ { u32 t = R32((u32)(0x6b2258u)); r_esp -= 4; W32(r_esp, 0x61ecbfu); call_ind(t); }
    /* 0061ecbf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061ecc2: movzx ecx, byte ptr [0x795fb2] */ r_ecx = (u32)R8((u32)(0x795fb2u));
    /* 0061ecc9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061eccb: je 0x61ecf8 */ if (fZ) goto L_0061ecf8;
L_0061eccd:; BB(0x0061eccd);
    /* 0061eccd: lea edx, [ebp - 0x110] */ r_edx = (u32)(r_ebp+0xfffffef0u);
    /* 0061ecd3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061ecd4: push 0x6d8d88 */ { u32 v = 0x6d8d88u; r_esp -= 4; W32(r_esp, v); }
    /* 0061ecd9: lea eax, [ebp - 0x250] */ r_eax = (u32)(r_ebp+0xfffffdb0u);
    /* 0061ecdf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061ece0: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x61ece6u); call_ind(t); }
    /* 0061ece6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061ece9: lea ecx, [ebp - 0x250] */ r_ecx = (u32)(r_ebp+0xfffffdb0u);
    /* 0061ecef: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061ecf0: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x61ecf5u); f_0062fde0();
    /* 0061ecf5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0061ecf8:; BB(0x0061ecf8);
    /* 0061ecf8: jmp 0x61ed64 */ goto L_0061ed64;
L_0061ecfa:; BB(0x0061ecfa);
    /* 0061ecfa: movzx edx, byte ptr [0x795fb2] */ r_edx = (u32)R8((u32)(0x795fb2u));
    /* 0061ed01: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061ed03: je 0x61ed64 */ if (fZ) goto L_0061ed64;
L_0061ed05:; BB(0x0061ed05);
    /* 0061ed05: mov eax, dword ptr [ebp - 0x390] */ r_eax = R32((u32)(r_ebp+0xfffffc70u));
    /* 0061ed0b: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0061ed0e: sar ecx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0061ed11: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061ed12: mov edx, dword ptr [ebp - 0x390] */ r_edx = R32((u32)(r_ebp+0xfffffc70u));
    /* 0061ed18: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 0061ed1b: sar eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0061ed1e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061ed1f: mov ecx, dword ptr [ebp - 0x390] */ r_ecx = R32((u32)(r_ebp+0xfffffc70u));
    /* 0061ed25: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 0061ed28: sar edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0061ed2b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061ed2c: mov eax, dword ptr [ebp - 0x390] */ r_eax = R32((u32)(r_ebp+0xfffffc70u));
    /* 0061ed32: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0061ed35: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061ed36: mov edx, dword ptr [ebp - 0x390] */ r_edx = R32((u32)(r_ebp+0xfffffc70u));
    /* 0061ed3c: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 0061ed3f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061ed40: push 0x6d8d64 */ { u32 v = 0x6d8d64u; r_esp -= 4; W32(r_esp, v); }
    /* 0061ed45: lea ecx, [ebp - 0x388] */ r_ecx = (u32)(r_ebp+0xfffffc78u);
    /* 0061ed4b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061ed4c: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x61ed52u); call_ind(t); }
    /* 0061ed52: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061ed55: lea edx, [ebp - 0x388] */ r_edx = (u32)(r_ebp+0xfffffc78u);
    /* 0061ed5b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061ed5c: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x61ed61u); f_0062fde0();
    /* 0061ed61: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0061ed64:; BB(0x0061ed64);
    /* 0061ed64: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061ed67: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0061ed69: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x61ed6eu); f_00686d72();
    /* 0061ed6e: mov esp, ebp */ r_esp = r_ebp;
    /* 0061ed70: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061ed71: ret  */ FN_RET(0x0061ebd0); r_esp += 4; return;
}

