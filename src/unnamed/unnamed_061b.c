#include "protos.h"

void f_0061b450(void) /* sub_61B450 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061b450);
    /* 0061b450: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061b451: mov ebp, esp */ r_ebp = r_esp;
    /* 0061b453: sub esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061b459: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0061b45a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0061b45b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0061b45c: mov dword ptr [ebp - 0x10], 4 */ W32((u32)(r_ebp+0xfffffff0u), 0x4u);
    /* 0061b463: push 0xf2 */ { u32 v = 0xf2u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b468: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b46a: push 0xf8 */ { u32 v = 0xf8u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b46f: call 0x617ab0 */ r_esp -= 4; W32(r_esp, 0x61b474u); f_00617ab0();
    /* 0061b474: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061b477: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0061b47a: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b47c: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b47e: push 0xf7 */ { u32 v = 0xf7u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b483: call 0x617ab0 */ r_esp -= 4; W32(r_esp, 0x61b488u); f_00617ab0();
    /* 0061b488: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061b48b: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0061b48e: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0061b490: push 0xf3 */ { u32 v = 0xf3u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b495: push 0xee */ { u32 v = 0xeeu; r_esp -= 4; W32(r_esp, v); }
    /* 0061b49a: call 0x617ab0 */ r_esp -= 4; W32(r_esp, 0x61b49fu); f_00617ab0();
    /* 0061b49f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061b4a2: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0061b4a5: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0061b4a7: push 0xf3 */ { u32 v = 0xf3u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b4ac: push 0x8a */ { u32 v = 0x8au; r_esp -= 4; W32(r_esp, v); }
    /* 0061b4b1: call 0x617ab0 */ r_esp -= 4; W32(r_esp, 0x61b4b6u); f_00617ab0();
    /* 0061b4b6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061b4b9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0061b4bc: push 0xf2 */ { u32 v = 0xf2u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b4c1: push 0xf2 */ { u32 v = 0xf2u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b4c6: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 0061b4c8: call 0x617ab0 */ r_esp -= 4; W32(r_esp, 0x61b4cdu); f_00617ab0();
    /* 0061b4cd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061b4d0: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0061b4d3: push 0xf4 */ { u32 v = 0xf4u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b4d8: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 0061b4da: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b4dc: call 0x617ab0 */ r_esp -= 4; W32(r_esp, 0x61b4e1u); f_00617ab0();
    /* 0061b4e1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061b4e4: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0061b4e7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061b4ea: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 0061b4ed: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0061b4f0: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0061b4f3: mov ax, word ptr [edx + 1] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x1u))) & 0xffffu);
    /* 0061b4f7: mov word ptr [ebp - 0x28], ax */ W16((u32)(r_ebp+0xffffffd8u), (u16)r_eax);
    /* 0061b4fb: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061b4fe: add ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061b501: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
L_0061b504:; BB(0x0061b504);
    /* 0061b504: movzx edx, word ptr [ebp - 0x28] */ r_edx = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 0061b508: cmp dword ptr [ebp + 0x10], edx */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061b50b: jl 0x61b5de */ if ((fS!=fO)) goto L_0061b5de;
L_0061b511:; BB(0x0061b511);
    /* 0061b511: movzx eax, word ptr [ebp - 0x28] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 0061b515: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0061b517: jle 0x61b5de */ if ((fZ||fS!=fO)) goto L_0061b5de;
L_0061b51d:; BB(0x0061b51d);
    /* 0061b51d: movzx ecx, word ptr [ebp - 0x28] */ r_ecx = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 0061b521: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0061b524: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0061b526: mov dword ptr [ebp + 0x10], edx */ W32((u32)(r_ebp+0x10u), r_edx);
    /* 0061b529: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061b52c: mov dword ptr [ebp - 0xac], eax */ W32((u32)(r_ebp+0xffffff54u), r_eax);
    /* 0061b532: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 0061b538: sub ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0061b53b: mov dword ptr [ebp - 0xac], ecx */ W32((u32)(r_ebp+0xffffff54u), r_ecx);
    /* 0061b541: cmp dword ptr [ebp - 0xac], 0x86 */ {  u32 a = R32((u32)(r_ebp+0xffffff54u)); u32 b = 0x86u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0061b54b: ja 0x61b5bc */ if ((!fC&&!fZ)) goto L_0061b5bc;
L_0061b54d:; BB(0x0061b54d);
    /* 0061b54d: mov edx, dword ptr [ebp - 0xac] */ r_edx = R32((u32)(r_ebp+0xffffff54u));
    /* 0061b553: movzx eax, byte ptr [edx + 0x61c2e0] */ r_eax = (u32)R8((u32)(r_edx+0x61c2e0u));
    /* 0061b55a: jmp dword ptr [eax*4 + 0x61c2c0] */ { u32 t = R32((u32)(r_eax*4+0x61c2c0u)); switch (t) { case 0x61b572u: goto L_0061b572; case 0x61b58du: goto L_0061b58d; case 0x61b5a7u: goto L_0061b5a7; case 0x61b5b2u: goto L_0061b5b2; case 0x61b563u: goto L_0061b563; case 0x61b57eu: goto L_0061b57e; case 0x61b59cu: goto L_0061b59c; case 0x61b5bcu: goto L_0061b5bc; default: UNSUP(0x0061b55a, "jump table entry is not a known target"); } }
L_0061b563:; BB(0x0061b563);
    /* 0061b563: movzx ecx, word ptr [ebp - 0x28] */ r_ecx = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 0061b567: imul ecx, ecx, 3 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061b56a: add ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061b56d: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 0061b570: jmp 0x61b5bc */ goto L_0061b5bc;
L_0061b572:; BB(0x0061b572);
    /* 0061b572: movzx edx, word ptr [ebp - 0x28] */ r_edx = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 0061b576: add edx, dword ptr [ebp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061b579: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 0061b57c: jmp 0x61b5bc */ goto L_0061b5bc;
L_0061b57e:; BB(0x0061b57e);
    /* 0061b57e: movzx eax, word ptr [ebp - 0x28] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 0061b582: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061b585: lea edx, [ecx + eax*4] */ r_edx = (u32)(r_ecx+r_eax*4);
    /* 0061b588: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 0061b58b: jmp 0x61b5bc */ goto L_0061b5bc;
L_0061b58d:; BB(0x0061b58d);
    /* 0061b58d: movzx eax, word ptr [ebp - 0x28] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 0061b591: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061b594: lea edx, [ecx + eax*2] */ r_edx = (u32)(r_ecx+r_eax*2);
    /* 0061b597: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 0061b59a: jmp 0x61b5bc */ goto L_0061b5bc;
L_0061b59c:; BB(0x0061b59c);
    /* 0061b59c: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061b59f: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061b5a2: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 0061b5a5: jmp 0x61b5bc */ goto L_0061b5bc;
L_0061b5a7:; BB(0x0061b5a7);
    /* 0061b5a7: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061b5aa: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061b5ad: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 0061b5b0: jmp 0x61b5bc */ goto L_0061b5bc;
L_0061b5b2:; BB(0x0061b5b2);
    /* 0061b5b2: movzx edx, word ptr [ebp - 0x28] */ r_edx = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 0061b5b6: add edx, dword ptr [ebp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061b5b9: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
L_0061b5bc:; BB(0x0061b5bc);
    /* 0061b5bc: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061b5bf: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 0061b5c2: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0061b5c5: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0061b5c8: mov ax, word ptr [edx + 1] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x1u))) & 0xffffu);
    /* 0061b5cc: mov word ptr [ebp - 0x28], ax */ W16((u32)(r_ebp+0xffffffd8u), (u16)r_eax);
    /* 0061b5d0: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061b5d3: add ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061b5d6: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 0061b5d9: jmp 0x61b504 */ goto L_0061b504;
L_0061b5de:; BB(0x0061b5de);
    /* 0061b5de: cmp dword ptr [ebp + 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061b5e2: jle 0x61c2b9 */ if ((fZ||fS!=fO)) goto L_0061c2b9;
L_0061b5e8:; BB(0x0061b5e8);
    /* 0061b5e8: movzx edx, word ptr [ebp - 0x28] */ r_edx = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 0061b5ec: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0061b5ee: jle 0x61c2b9 */ if ((fZ||fS!=fO)) goto L_0061c2b9;
L_0061b5f4:; BB(0x0061b5f4);
    /* 0061b5f4: movzx eax, word ptr [ebp - 0x28] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 0061b5f8: sub eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061b5fb: mov word ptr [ebp - 0x28], ax */ W16((u32)(r_ebp+0xffffffd8u), (u16)r_eax);
    /* 0061b5ff: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061b602: mov dword ptr [ebp - 0xb0], ecx */ W32((u32)(r_ebp+0xffffff50u), r_ecx);
    /* 0061b608: mov edx, dword ptr [ebp - 0xb0] */ r_edx = R32((u32)(r_ebp+0xffffff50u));
    /* 0061b60e: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0061b611: mov dword ptr [ebp - 0xb0], edx */ W32((u32)(r_ebp+0xffffff50u), r_edx);
    /* 0061b617: cmp dword ptr [ebp - 0xb0], 0x87 */ {  u32 a = R32((u32)(r_ebp+0xffffff50u)); u32 b = 0x87u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0061b621: ja 0x61c285 */ if ((!fC&&!fZ)) goto L_0061c285;
L_0061b627:; BB(0x0061b627);
    /* 0061b627: mov eax, dword ptr [ebp - 0xb0] */ r_eax = R32((u32)(r_ebp+0xffffff50u));
    /* 0061b62d: movzx ecx, byte ptr [eax + 0x61c39c] */ r_ecx = (u32)R8((u32)(r_eax+0x61c39cu));
    /* 0061b634: jmp dword ptr [ecx*4 + 0x61c368] */ { u32 t = R32((u32)(r_ecx*4+0x61c368u)); switch (t) { case 0x61b63bu: goto L_0061b63b; case 0x61b66bu: goto L_0061b66b; case 0x61b9b6u: goto L_0061b9b6; case 0x61bd56u: goto L_0061bd56; case 0x61c0afu: goto L_0061c0af; case 0x61c141u: goto L_0061c141; case 0x61bf8bu: goto L_0061bf8b; case 0x61c01du: goto L_0061c01d; case 0x61c1d3u: goto L_0061c1d3; case 0x61b888u: goto L_0061b888; case 0x61bc10u: goto L_0061bc10; case 0x61be69u: goto L_0061be69; case 0x61c285u: goto L_0061c285; default: UNSUP(0x0061b634, "jump table entry is not a known target"); } }
L_0061b63b:; BB(0x0061b63b);
    /* 0061b63b: movzx edx, word ptr [ebp - 0x28] */ r_edx = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 0061b63f: cmp dword ptr [ebp + 0x14], edx */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061b642: jle 0x61b65f */ if ((fZ||fS!=fO)) goto L_0061b65f;
L_0061b644:; BB(0x0061b644);
    /* 0061b644: mov dword ptr [ebp + 0x10], 0 */ W32((u32)(r_ebp+0x10u), 0x0u);
    /* 0061b64b: movzx eax, word ptr [ebp - 0x28] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 0061b64f: imul eax, dword ptr [ebp - 0x10] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xfffffff0u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061b653: imul eax, dword ptr [ebp + 0x20] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0x20u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061b657: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061b65a: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 0061b65d: jmp 0x61b666 */ goto L_0061b666;
L_0061b65f:; BB(0x0061b65f);
    /* 0061b65f: mov dword ptr [ebp + 0x14], 0 */ W32((u32)(r_ebp+0x14u), 0x0u);
L_0061b666:; BB(0x0061b666);
    /* 0061b666: jmp 0x61c285 */ goto L_0061c285;
L_0061b66b:; BB(0x0061b66b);
    /* 0061b66b: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061b66e: add ecx, dword ptr [ebp + 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061b671: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 0061b674: movzx edx, word ptr [ebp - 0x28] */ r_edx = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 0061b678: cmp dword ptr [ebp + 0x14], edx */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061b67b: jle 0x61b68d */ if ((fZ||fS!=fO)) goto L_0061b68d;
L_0061b67d:; BB(0x0061b67d);
    /* 0061b67d: movzx eax, word ptr [ebp - 0x28] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 0061b681: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0061b684: mov dword ptr [ebp + 0x10], 0 */ W32((u32)(r_ebp+0x10u), 0x0u);
    /* 0061b68b: jmp 0x61b69a */ goto L_0061b69a;
L_0061b68d:; BB(0x0061b68d);
    /* 0061b68d: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0061b690: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0061b693: mov dword ptr [ebp + 0x14], 0 */ W32((u32)(r_ebp+0x14u), 0x0u);
L_0061b69a:; BB(0x0061b69a);
    /* 0061b69a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061b69d: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0061b6a0: cmp dword ptr [ebp + 0x20], 1 */ {  u32 a = R32((u32)(r_ebp+0x20u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061b6a4: jle 0x61b7ab */ if ((fZ||fS!=fO)) goto L_0061b7ab;
L_0061b6aa:; BB(0x0061b6aa);
    /* 0061b6aa: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0061b6b1: jmp 0x61b6bc */ goto L_0061b6bc;
L_0061b6b3:; BB(0x0061b6b3);
    /* 0061b6b3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0061b6b6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061b6b9: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0061b6bc:; BB(0x0061b6bc);
    /* 0061b6bc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061b6bf: cmp ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061b6c2: jge 0x61b78c */ if ((fS==fO)) goto L_0061b78c;
L_0061b6c8:; BB(0x0061b6c8);
    /* 0061b6c8: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 0061b6cf: jmp 0x61b6da */ goto L_0061b6da;
L_0061b6d1:; BB(0x0061b6d1);
    /* 0061b6d1: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0061b6d4: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061b6d7: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
L_0061b6da:; BB(0x0061b6da);
    /* 0061b6da: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0061b6dd: cmp eax, dword ptr [ebp + 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x20u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061b6e0: jge 0x61b787 */ if ((fS==fO)) goto L_0061b787;
L_0061b6e6:; BB(0x0061b6e6);
    /* 0061b6e6: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061b6e9: add ecx, dword ptr [ebp - 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061b6ec: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 0061b6ef: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 0061b6f2: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 0061b6f5: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 0061b6f8: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061b6fb: mov edi, dword ptr [ebp - 0x40] */ r_edi = R32((u32)(r_ebp+0xffffffc0u));
    /* 0061b6fe: mov esi, dword ptr [esi] */ r_esi = R32((u32)(r_esi));
    /* 0061b700: mov ebx, edi */ r_ebx = r_edi;
    /* 0061b702: mov edx, edi */ r_edx = r_edi;
    /* 0061b704: mov eax, esi */ r_eax = r_esi;
    /* 0061b706: mov ecx, esi */ r_ecx = r_esi;
    /* 0061b708: and ebx, 0xff00 */ {  u32 a = r_ebx; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0061b70e: and edx, 0xff0000 */ {  u32 a = r_edx; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0061b714: sar ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 0061b717: sar edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0061b71a: and eax, 0xff00 */ {  u32 a = r_eax; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0061b71f: and ecx, 0xff0000 */ {  u32 a = r_ecx; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0061b725: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0061b728: sar ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0061b72b: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061b72d: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0061b72f: imul eax, dword ptr [ebp + 0x1c] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0x1cu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061b733: imul ecx, dword ptr [ebp + 0x1c] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0x1cu)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061b737: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0061b73a: sar ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0061b73d: mov ebx, esi */ r_ebx = r_esi;
    /* 0061b73f: mov edx, esi */ r_edx = r_esi;
    /* 0061b741: and ebx, 0xff00 */ {  u32 a = r_ebx; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0061b747: sar edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0061b74a: sar ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 0061b74d: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0061b74f: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0061b751: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0061b757: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0061b75d: mov eax, esi */ r_eax = r_esi;
    /* 0061b75f: shl ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 0061b762: sub esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0061b764: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0061b767: imul esi, dword ptr [ebp + 0x1c] */ { i64 t = (i64)(i32)r_esi * (i64)(i32)R32((u32)(r_ebp+0x1cu)); r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061b76b: or ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0061b76d: sar esi, 8 */ { u32 c = (8u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0061b770: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061b773: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061b775: or ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0061b777: mov dword ptr [edi], ebx */ W32((u32)(r_edi), r_ebx);
    /* 0061b779: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061b77c: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061b77f: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0061b782: jmp 0x61b6d1 */ goto L_0061b6d1;
L_0061b787:; BB(0x0061b787);
    /* 0061b787: jmp 0x61b6b3 */ goto L_0061b6b3;
L_0061b78c:; BB(0x0061b78c);
    /* 0061b78c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061b78f: imul eax, dword ptr [ebp - 8] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xfffffff8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061b793: imul eax, dword ptr [ebp + 0x20] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0x20u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061b797: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061b79a: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 0061b79d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061b7a0: add ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061b7a3: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 0061b7a6: jmp 0x61b883 */ goto L_0061b883;
L_0061b7ab:; BB(0x0061b7ab);
    /* 0061b7ab: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0061b7b2: jmp 0x61b7bd */ goto L_0061b7bd;
L_0061b7b4:; BB(0x0061b7b4);
    /* 0061b7b4: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061b7b7: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061b7ba: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
L_0061b7bd:; BB(0x0061b7bd);
    /* 0061b7bd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0061b7c0: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061b7c3: jge 0x61b86d */ if ((fS==fO)) goto L_0061b86d;
L_0061b7c9:; BB(0x0061b7c9);
    /* 0061b7c9: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061b7cc: add ecx, dword ptr [ebp - 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061b7cf: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 0061b7d2: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 0061b7d5: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 0061b7d8: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 0061b7db: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061b7de: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061b7e1: lea ecx, [eax + edx*4] */ r_ecx = (u32)(r_eax+r_edx*4);
    /* 0061b7e4: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 0061b7e7: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 0061b7ea: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 0061b7ed: mov esi, dword ptr [esi] */ r_esi = R32((u32)(r_esi));
    /* 0061b7ef: mov ebx, edi */ r_ebx = r_edi;
    /* 0061b7f1: mov edx, edi */ r_edx = r_edi;
    /* 0061b7f3: mov eax, esi */ r_eax = r_esi;
    /* 0061b7f5: mov ecx, esi */ r_ecx = r_esi;
    /* 0061b7f7: and ebx, 0xff00 */ {  u32 a = r_ebx; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0061b7fd: and edx, 0xff0000 */ {  u32 a = r_edx; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0061b803: sar ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 0061b806: sar edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0061b809: and eax, 0xff00 */ {  u32 a = r_eax; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0061b80e: and ecx, 0xff0000 */ {  u32 a = r_ecx; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0061b814: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0061b817: sar ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0061b81a: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061b81c: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0061b81e: imul eax, dword ptr [ebp + 0x1c] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0x1cu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061b822: imul ecx, dword ptr [ebp + 0x1c] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0x1cu)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061b826: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0061b829: sar ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0061b82c: mov ebx, esi */ r_ebx = r_esi;
    /* 0061b82e: mov edx, esi */ r_edx = r_esi;
    /* 0061b830: and ebx, 0xff00 */ {  u32 a = r_ebx; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0061b836: sar edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0061b839: sar ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 0061b83c: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0061b83e: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0061b840: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0061b846: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0061b84c: mov eax, esi */ r_eax = r_esi;
    /* 0061b84e: shl ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 0061b851: sub esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0061b853: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0061b856: imul esi, dword ptr [ebp + 0x1c] */ { i64 t = (i64)(i32)r_esi * (i64)(i32)R32((u32)(r_ebp+0x1cu)); r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061b85a: or ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0061b85c: sar esi, 8 */ { u32 c = (8u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0061b85f: mov edi, dword ptr [ebp - 0x44] */ r_edi = R32((u32)(r_ebp+0xffffffbcu));
    /* 0061b862: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061b864: or ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0061b866: mov dword ptr [edi], ebx */ W32((u32)(r_edi), r_ebx);
    /* 0061b868: jmp 0x61b7b4 */ goto L_0061b7b4;
L_0061b86d:; BB(0x0061b86d);
    /* 0061b86d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061b870: imul edx, dword ptr [ebp - 8] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0xfffffff8u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061b874: add edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061b877: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
    /* 0061b87a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061b87d: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061b880: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
L_0061b883:; BB(0x0061b883);
    /* 0061b883: jmp 0x61c285 */ goto L_0061c285;
L_0061b888:; BB(0x0061b888);
    /* 0061b888: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0061b88b: imul ecx, ecx, 3 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061b88e: add ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061b891: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 0061b894: movzx edx, word ptr [ebp - 0x28] */ r_edx = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 0061b898: cmp dword ptr [ebp + 0x14], edx */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061b89b: jle 0x61b8ad */ if ((fZ||fS!=fO)) goto L_0061b8ad;
L_0061b89d:; BB(0x0061b89d);
    /* 0061b89d: movzx eax, word ptr [ebp - 0x28] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 0061b8a1: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0061b8a4: mov dword ptr [ebp + 0x10], 0 */ W32((u32)(r_ebp+0x10u), 0x0u);
    /* 0061b8ab: jmp 0x61b8ba */ goto L_0061b8ba;
L_0061b8ad:; BB(0x0061b8ad);
    /* 0061b8ad: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0061b8b0: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0061b8b3: mov dword ptr [ebp + 0x14], 0 */ W32((u32)(r_ebp+0x14u), 0x0u);
L_0061b8ba:; BB(0x0061b8ba);
    /* 0061b8ba: mov byte ptr [ebp - 0x31], 0xff */ W8((u32)(r_ebp+0xffffffcfu), 0xffu);
    /* 0061b8be: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0061b8c5: jmp 0x61b8d0 */ goto L_0061b8d0;
L_0061b8c7:; BB(0x0061b8c7);
    /* 0061b8c7: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061b8ca: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061b8cd: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
L_0061b8d0:; BB(0x0061b8d0);
    /* 0061b8d0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0061b8d3: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061b8d6: jge 0x61b9b1 */ if ((fS==fO)) goto L_0061b9b1;
L_0061b8dc:; BB(0x0061b8dc);
    /* 0061b8dc: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061b8df: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 0061b8e1: mov byte ptr [ebp - 0x34], dl */ W8((u32)(r_ebp+0xffffffccu), (u8)r_edx);
    /* 0061b8e4: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061b8e7: mov cl, byte ptr [eax + 1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x1u))) & 0xffu);
    /* 0061b8ea: mov byte ptr [ebp - 0x33], cl */ W8((u32)(r_ebp+0xffffffcdu), (u8)r_ecx);
    /* 0061b8ed: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0061b8f0: mov al, byte ptr [edx + 2] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x2u))) & 0xffu);
    /* 0061b8f3: mov byte ptr [ebp - 0x32], al */ W8((u32)(r_ebp+0xffffffceu), (u8)r_eax);
    /* 0061b8f6: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061b8f9: add ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061b8fc: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 0061b8ff: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 0061b906: jmp 0x61b911 */ goto L_0061b911;
L_0061b908:; BB(0x0061b908);
    /* 0061b908: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0061b90b: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061b90e: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
L_0061b911:; BB(0x0061b911);
    /* 0061b911: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0061b914: cmp eax, dword ptr [ebp + 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x20u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061b917: jge 0x61b9ac */ if ((fS==fO)) goto L_0061b9ac;
L_0061b91d:; BB(0x0061b91d);
    /* 0061b91d: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 0061b920: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 0061b923: mov esi, dword ptr [esi] */ r_esi = R32((u32)(r_esi));
    /* 0061b925: mov ebx, edi */ r_ebx = r_edi;
    /* 0061b927: mov edx, edi */ r_edx = r_edi;
    /* 0061b929: mov eax, esi */ r_eax = r_esi;
    /* 0061b92b: mov ecx, esi */ r_ecx = r_esi;
    /* 0061b92d: and ebx, 0xff00 */ {  u32 a = r_ebx; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0061b933: and edx, 0xff0000 */ {  u32 a = r_edx; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0061b939: sar ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 0061b93c: sar edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0061b93f: and eax, 0xff00 */ {  u32 a = r_eax; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0061b944: and ecx, 0xff0000 */ {  u32 a = r_ecx; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0061b94a: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0061b94d: sar ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0061b950: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061b952: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0061b954: imul eax, dword ptr [ebp + 0x1c] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0x1cu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061b958: imul ecx, dword ptr [ebp + 0x1c] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0x1cu)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061b95c: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0061b95f: sar ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0061b962: mov ebx, esi */ r_ebx = r_esi;
    /* 0061b964: mov edx, esi */ r_edx = r_esi;
    /* 0061b966: and ebx, 0xff00 */ {  u32 a = r_ebx; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0061b96c: sar edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0061b96f: sar ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 0061b972: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0061b974: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0061b976: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0061b97c: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0061b982: mov eax, esi */ r_eax = r_esi;
    /* 0061b984: shl ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 0061b987: sub esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0061b989: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0061b98c: imul esi, dword ptr [ebp + 0x1c] */ { i64 t = (i64)(i32)r_esi * (i64)(i32)R32((u32)(r_ebp+0x1cu)); r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061b990: or ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0061b992: sar esi, 8 */ { u32 c = (8u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0061b995: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0061b998: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061b99a: or ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0061b99c: mov dword ptr [edi], ebx */ W32((u32)(r_edi), r_ebx);
    /* 0061b99e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061b9a1: add ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061b9a4: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 0061b9a7: jmp 0x61b908 */ goto L_0061b908;
L_0061b9ac:; BB(0x0061b9ac);
    /* 0061b9ac: jmp 0x61b8c7 */ goto L_0061b8c7;
L_0061b9b1:; BB(0x0061b9b1);
    /* 0061b9b1: jmp 0x61c285 */ goto L_0061c285;
L_0061b9b6:; BB(0x0061b9b6);
    /* 0061b9b6: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0061b9b9: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061b9bc: lea ecx, [eax + edx*2] */ r_ecx = (u32)(r_eax+r_edx*2);
    /* 0061b9bf: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 0061b9c2: movzx edx, word ptr [ebp - 0x28] */ r_edx = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 0061b9c6: cmp dword ptr [ebp + 0x14], edx */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061b9c9: jle 0x61b9db */ if ((fZ||fS!=fO)) goto L_0061b9db;
L_0061b9cb:; BB(0x0061b9cb);
    /* 0061b9cb: movzx eax, word ptr [ebp - 0x28] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 0061b9cf: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0061b9d2: mov dword ptr [ebp + 0x10], 0 */ W32((u32)(r_ebp+0x10u), 0x0u);
    /* 0061b9d9: jmp 0x61b9e8 */ goto L_0061b9e8;
L_0061b9db:; BB(0x0061b9db);
    /* 0061b9db: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0061b9de: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0061b9e1: mov dword ptr [ebp + 0x14], 0 */ W32((u32)(r_ebp+0x14u), 0x0u);
L_0061b9e8:; BB(0x0061b9e8);
    /* 0061b9e8: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061b9eb: shl edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0061b9ed: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0061b9f0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061b9f3: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0061b9f6: cmp dword ptr [ebp + 0x20], 1 */ {  u32 a = R32((u32)(r_ebp+0x20u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061b9fa: jle 0x61bb25 */ if ((fZ||fS!=fO)) goto L_0061bb25;
L_0061ba00:; BB(0x0061ba00);
    /* 0061ba00: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0061ba07: jmp 0x61ba12 */ goto L_0061ba12;
L_0061ba09:; BB(0x0061ba09);
    /* 0061ba09: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061ba0c: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061ba0f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_0061ba12:; BB(0x0061ba12);
    /* 0061ba12: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061ba15: cmp edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061ba18: jge 0x61bb01 */ if ((fS==fO)) goto L_0061bb01;
L_0061ba1e:; BB(0x0061ba1e);
    /* 0061ba1e: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 0061ba25: jmp 0x61ba30 */ goto L_0061ba30;
L_0061ba27:; BB(0x0061ba27);
    /* 0061ba27: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0061ba2a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061ba2d: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
L_0061ba30:; BB(0x0061ba30);
    /* 0061ba30: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0061ba33: cmp ecx, dword ptr [ebp + 0x20] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x20u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061ba36: jge 0x61baef */ if ((fS==fO)) goto L_0061baef;
L_0061ba3c:; BB(0x0061ba3c);
    /* 0061ba3c: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0061ba3f: add edx, dword ptr [ebp - 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061ba42: movzx eax, byte ptr [edx + 1] */ r_eax = (u32)R8((u32)(r_edx+0x1u));
    /* 0061ba46: mov ecx, dword ptr [0x15ede08] */ r_ecx = R32((u32)(0x15ede08u));
    /* 0061ba4c: mov edx, dword ptr [ecx + eax*4] */ r_edx = R32((u32)(r_ecx+r_eax*4));
    /* 0061ba4f: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 0061ba52: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0061ba55: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0061ba56: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061ba58: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0061ba5a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061ba5d: lea edx, [ecx + eax*4] */ r_edx = (u32)(r_ecx+r_eax*4);
    /* 0061ba60: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0061ba63: lea ecx, [edx + eax*4] */ r_ecx = (u32)(r_edx+r_eax*4);
    /* 0061ba66: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 0061ba69: mov esi, dword ptr [ebp - 0x4c] */ r_esi = R32((u32)(r_ebp+0xffffffb4u));
    /* 0061ba6c: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0061ba6f: mov esi, dword ptr [esi] */ r_esi = R32((u32)(r_esi));
    /* 0061ba71: mov ebx, edi */ r_ebx = r_edi;
    /* 0061ba73: mov edx, edi */ r_edx = r_edi;
    /* 0061ba75: mov eax, esi */ r_eax = r_esi;
    /* 0061ba77: mov ecx, esi */ r_ecx = r_esi;
    /* 0061ba79: and ebx, 0xff00 */ {  u32 a = r_ebx; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0061ba7f: and edx, 0xff0000 */ {  u32 a = r_edx; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0061ba85: sar ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 0061ba88: sar edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0061ba8b: and eax, 0xff00 */ {  u32 a = r_eax; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0061ba90: and ecx, 0xff0000 */ {  u32 a = r_ecx; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0061ba96: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0061ba99: sar ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0061ba9c: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061ba9e: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0061baa0: imul eax, dword ptr [ebp - 0x50] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xffffffb0u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061baa4: imul ecx, dword ptr [ebp - 0x50] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xffffffb0u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061baa8: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0061baab: sar ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0061baae: mov ebx, esi */ r_ebx = r_esi;
    /* 0061bab0: mov edx, esi */ r_edx = r_esi;
    /* 0061bab2: and ebx, 0xff00 */ {  u32 a = r_ebx; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0061bab8: sar edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0061babb: sar ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 0061babe: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0061bac0: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0061bac2: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0061bac8: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0061bace: mov eax, esi */ r_eax = r_esi;
    /* 0061bad0: shl ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 0061bad3: sub esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0061bad5: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0061bad8: imul esi, dword ptr [ebp - 0x50] */ { i64 t = (i64)(i32)r_esi * (i64)(i32)R32((u32)(r_ebp+0xffffffb0u)); r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061badc: or ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0061bade: sar esi, 8 */ { u32 c = (8u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0061bae1: mov edi, dword ptr [ebp - 0x4c] */ r_edi = R32((u32)(r_ebp+0xffffffb4u));
    /* 0061bae4: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061bae6: or ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0061bae8: mov dword ptr [edi], ebx */ W32((u32)(r_edi), r_ebx);
    /* 0061baea: jmp 0x61ba27 */ goto L_0061ba27;
L_0061baef:; BB(0x0061baef);
    /* 0061baef: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 0061baf2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061baf5: lea ecx, [eax + edx*4 - 4] */ r_ecx = (u32)(r_eax+r_edx*4+0xfffffffcu);
    /* 0061baf9: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0061bafc: jmp 0x61ba09 */ goto L_0061ba09;
L_0061bb01:; BB(0x0061bb01);
    /* 0061bb01: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0061bb04: add edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061bb07: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 0061bb0a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061bb0d: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0061bb0e: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061bb10: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0061bb12: imul eax, dword ptr [ebp - 0x10] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xfffffff0u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061bb16: imul eax, dword ptr [ebp + 0x20] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0x20u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061bb1a: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061bb1d: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 0061bb20: jmp 0x61bc0b */ goto L_0061bc0b;
L_0061bb25:; BB(0x0061bb25);
    /* 0061bb25: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0061bb2c: jmp 0x61bb37 */ goto L_0061bb37;
L_0061bb2e:; BB(0x0061bb2e);
    /* 0061bb2e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0061bb31: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061bb34: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0061bb37:; BB(0x0061bb37);
    /* 0061bb37: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061bb3a: cmp ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061bb3d: jge 0x61bbf0 */ if ((fS==fO)) goto L_0061bbf0;
L_0061bb43:; BB(0x0061bb43);
    /* 0061bb43: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0061bb46: add edx, dword ptr [ebp - 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061bb49: movzx eax, byte ptr [edx + 1] */ r_eax = (u32)R8((u32)(r_edx+0x1u));
    /* 0061bb4d: mov ecx, dword ptr [0x15ede08] */ r_ecx = R32((u32)(0x15ede08u));
    /* 0061bb53: mov edx, dword ptr [ecx + eax*4] */ r_edx = R32((u32)(r_ecx+r_eax*4));
    /* 0061bb56: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 0061bb59: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0061bb5c: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0061bb5d: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061bb5f: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0061bb61: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061bb64: lea edx, [ecx + eax*4] */ r_edx = (u32)(r_ecx+r_eax*4);
    /* 0061bb67: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 0061bb6a: mov esi, dword ptr [ebp - 0x54] */ r_esi = R32((u32)(r_ebp+0xffffffacu));
    /* 0061bb6d: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0061bb70: mov esi, dword ptr [esi] */ r_esi = R32((u32)(r_esi));
    /* 0061bb72: mov ebx, edi */ r_ebx = r_edi;
    /* 0061bb74: mov edx, edi */ r_edx = r_edi;
    /* 0061bb76: mov eax, esi */ r_eax = r_esi;
    /* 0061bb78: mov ecx, esi */ r_ecx = r_esi;
    /* 0061bb7a: and ebx, 0xff00 */ {  u32 a = r_ebx; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0061bb80: and edx, 0xff0000 */ {  u32 a = r_edx; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0061bb86: sar ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 0061bb89: sar edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0061bb8c: and eax, 0xff00 */ {  u32 a = r_eax; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0061bb91: and ecx, 0xff0000 */ {  u32 a = r_ecx; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0061bb97: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0061bb9a: sar ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0061bb9d: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061bb9f: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0061bba1: imul eax, dword ptr [ebp - 0x58] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xffffffa8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061bba5: imul ecx, dword ptr [ebp - 0x58] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xffffffa8u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061bba9: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0061bbac: sar ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0061bbaf: mov ebx, esi */ r_ebx = r_esi;
    /* 0061bbb1: mov edx, esi */ r_edx = r_esi;
    /* 0061bbb3: and ebx, 0xff00 */ {  u32 a = r_ebx; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0061bbb9: sar edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0061bbbc: sar ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 0061bbbf: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0061bbc1: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0061bbc3: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0061bbc9: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0061bbcf: mov eax, esi */ r_eax = r_esi;
    /* 0061bbd1: shl ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 0061bbd4: sub esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0061bbd6: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0061bbd9: imul esi, dword ptr [ebp - 0x58] */ { i64 t = (i64)(i32)r_esi * (i64)(i32)R32((u32)(r_ebp+0xffffffa8u)); r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061bbdd: or ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0061bbdf: sar esi, 8 */ { u32 c = (8u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0061bbe2: mov edi, dword ptr [ebp - 0x54] */ r_edi = R32((u32)(r_ebp+0xffffffacu));
    /* 0061bbe5: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061bbe7: or ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0061bbe9: mov dword ptr [edi], ebx */ W32((u32)(r_edi), r_ebx);
    /* 0061bbeb: jmp 0x61bb2e */ goto L_0061bb2e;
L_0061bbf0:; BB(0x0061bbf0);
    /* 0061bbf0: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061bbf3: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061bbf6: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 0061bbf9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061bbfc: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0061bbfd: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061bbff: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0061bc01: imul eax, dword ptr [ebp - 0x10] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xfffffff0u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061bc05: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061bc08: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_0061bc0b:; BB(0x0061bc0b);
    /* 0061bc0b: jmp 0x61c285 */ goto L_0061c285;
L_0061bc10:; BB(0x0061bc10);
    /* 0061bc10: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0061bc13: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0061bc16: lea eax, [edx + ecx*4] */ r_eax = (u32)(r_edx+r_ecx*4);
    /* 0061bc19: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 0061bc1c: movzx ecx, word ptr [ebp - 0x28] */ r_ecx = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 0061bc20: cmp dword ptr [ebp + 0x14], ecx */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061bc23: jle 0x61bc35 */ if ((fZ||fS!=fO)) goto L_0061bc35;
L_0061bc25:; BB(0x0061bc25);
    /* 0061bc25: movzx edx, word ptr [ebp - 0x28] */ r_edx = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 0061bc29: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0061bc2c: mov dword ptr [ebp + 0x10], 0 */ W32((u32)(r_ebp+0x10u), 0x0u);
    /* 0061bc33: jmp 0x61bc42 */ goto L_0061bc42;
L_0061bc35:; BB(0x0061bc35);
    /* 0061bc35: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0061bc38: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0061bc3b: mov dword ptr [ebp + 0x14], 0 */ W32((u32)(r_ebp+0x14u), 0x0u);
L_0061bc42:; BB(0x0061bc42);
    /* 0061bc42: mov byte ptr [ebp - 0x31], 0xff */ W8((u32)(r_ebp+0xffffffcfu), 0xffu);
    /* 0061bc46: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0061bc4d: jmp 0x61bc58 */ goto L_0061bc58;
L_0061bc4f:; BB(0x0061bc4f);
    /* 0061bc4f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061bc52: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061bc55: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_0061bc58:; BB(0x0061bc58);
    /* 0061bc58: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061bc5b: cmp edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061bc5e: jge 0x61bd51 */ if ((fS==fO)) goto L_0061bd51;
L_0061bc64:; BB(0x0061bc64);
    /* 0061bc64: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061bc67: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0061bc69: mov byte ptr [ebp - 0x34], cl */ W8((u32)(r_ebp+0xffffffccu), (u8)r_ecx);
    /* 0061bc6c: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0061bc6f: mov al, byte ptr [edx + 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x1u))) & 0xffu);
    /* 0061bc72: mov byte ptr [ebp - 0x33], al */ W8((u32)(r_ebp+0xffffffcdu), (u8)r_eax);
    /* 0061bc75: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061bc78: mov dl, byte ptr [ecx + 2] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x2u))) & 0xffu);
    /* 0061bc7b: mov byte ptr [ebp - 0x32], dl */ W8((u32)(r_ebp+0xffffffceu), (u8)r_edx);
    /* 0061bc7e: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061bc81: mov cl, byte ptr [eax + 3] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x3u))) & 0xffu);
    /* 0061bc84: mov byte ptr [ebp - 0x39], cl */ W8((u32)(r_ebp+0xffffffc7u), (u8)r_ecx);
    /* 0061bc87: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0061bc8a: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061bc8d: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 0061bc90: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 0061bc97: jmp 0x61bca2 */ goto L_0061bca2;
L_0061bc99:; BB(0x0061bc99);
    /* 0061bc99: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0061bc9c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061bc9f: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
L_0061bca2:; BB(0x0061bca2);
    /* 0061bca2: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0061bca5: cmp ecx, dword ptr [ebp + 0x20] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x20u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061bca8: jge 0x61bd4c */ if ((fS==fO)) goto L_0061bd4c;
L_0061bcae:; BB(0x0061bcae);
    /* 0061bcae: movzx edx, byte ptr [ebp - 0x39] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffc7u));
    /* 0061bcb2: mov eax, dword ptr [0x15ede08] */ r_eax = R32((u32)(0x15ede08u));
    /* 0061bcb7: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 0061bcba: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 0061bcbd: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 0061bcc0: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0061bcc3: mov esi, dword ptr [esi] */ r_esi = R32((u32)(r_esi));
    /* 0061bcc5: mov ebx, edi */ r_ebx = r_edi;
    /* 0061bcc7: mov edx, edi */ r_edx = r_edi;
    /* 0061bcc9: mov eax, esi */ r_eax = r_esi;
    /* 0061bccb: mov ecx, esi */ r_ecx = r_esi;
    /* 0061bccd: and ebx, 0xff00 */ {  u32 a = r_ebx; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0061bcd3: and edx, 0xff0000 */ {  u32 a = r_edx; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0061bcd9: sar ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 0061bcdc: sar edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0061bcdf: and eax, 0xff00 */ {  u32 a = r_eax; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0061bce4: and ecx, 0xff0000 */ {  u32 a = r_ecx; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0061bcea: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0061bced: sar ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0061bcf0: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061bcf2: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0061bcf4: imul eax, dword ptr [ebp - 0x5c] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xffffffa4u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061bcf8: imul ecx, dword ptr [ebp - 0x5c] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xffffffa4u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061bcfc: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0061bcff: sar ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0061bd02: mov ebx, esi */ r_ebx = r_esi;
    /* 0061bd04: mov edx, esi */ r_edx = r_esi;
    /* 0061bd06: and ebx, 0xff00 */ {  u32 a = r_ebx; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0061bd0c: sar edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0061bd0f: sar ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 0061bd12: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0061bd14: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0061bd16: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0061bd1c: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0061bd22: mov eax, esi */ r_eax = r_esi;
    /* 0061bd24: shl ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 0061bd27: sub esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0061bd29: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0061bd2c: imul esi, dword ptr [ebp - 0x5c] */ { i64 t = (i64)(i32)r_esi * (i64)(i32)R32((u32)(r_ebp+0xffffffa4u)); r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061bd30: or ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0061bd32: sar esi, 8 */ { u32 c = (8u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0061bd35: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0061bd38: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061bd3a: or ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0061bd3c: mov dword ptr [edi], ebx */ W32((u32)(r_edi), r_ebx);
    /* 0061bd3e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061bd41: add edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061bd44: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
    /* 0061bd47: jmp 0x61bc99 */ goto L_0061bc99;
L_0061bd4c:; BB(0x0061bd4c);
    /* 0061bd4c: jmp 0x61bc4f */ goto L_0061bc4f;
L_0061bd51:; BB(0x0061bd51);
    /* 0061bd51: jmp 0x61c285 */ goto L_0061c285;
L_0061bd56:; BB(0x0061bd56);
    /* 0061bd56: movzx eax, word ptr [ebp - 0x28] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 0061bd5a: cmp dword ptr [ebp + 0x14], eax */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061bd5d: jle 0x61bd6f */ if ((fZ||fS!=fO)) goto L_0061bd6f;
L_0061bd5f:; BB(0x0061bd5f);
    /* 0061bd5f: movzx ecx, word ptr [ebp - 0x28] */ r_ecx = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 0061bd63: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0061bd66: mov dword ptr [ebp + 0x10], 0 */ W32((u32)(r_ebp+0x10u), 0x0u);
    /* 0061bd6d: jmp 0x61bd7c */ goto L_0061bd7c;
L_0061bd6f:; BB(0x0061bd6f);
    /* 0061bd6f: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0061bd72: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0061bd75: mov dword ptr [ebp + 0x14], 0 */ W32((u32)(r_ebp+0x14u), 0x0u);
L_0061bd7c:; BB(0x0061bd7c);
    /* 0061bd7c: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061bd7f: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 0061bd82: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 0061bd85: mov eax, dword ptr [edx + ecx*4] */ r_eax = R32((u32)(r_edx+r_ecx*4));
    /* 0061bd88: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0061bd8b: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0061bd92: jmp 0x61bd9d */ goto L_0061bd9d;
L_0061bd94:; BB(0x0061bd94);
    /* 0061bd94: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061bd97: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061bd9a: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_0061bd9d:; BB(0x0061bd9d);
    /* 0061bd9d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061bda0: cmp edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061bda3: jge 0x61be5b */ if ((fS==fO)) goto L_0061be5b;
L_0061bda9:; BB(0x0061bda9);
    /* 0061bda9: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 0061bdb0: jmp 0x61bdbb */ goto L_0061bdbb;
L_0061bdb2:; BB(0x0061bdb2);
    /* 0061bdb2: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0061bdb5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061bdb8: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
L_0061bdbb:; BB(0x0061bdbb);
    /* 0061bdbb: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0061bdbe: cmp ecx, dword ptr [ebp + 0x20] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x20u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061bdc1: jge 0x61be56 */ if ((fS==fO)) goto L_0061be56;
L_0061bdc7:; BB(0x0061bdc7);
    /* 0061bdc7: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 0061bdca: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 0061bdcd: mov esi, dword ptr [esi] */ r_esi = R32((u32)(r_esi));
    /* 0061bdcf: mov ebx, edi */ r_ebx = r_edi;
    /* 0061bdd1: mov edx, edi */ r_edx = r_edi;
    /* 0061bdd3: mov eax, esi */ r_eax = r_esi;
    /* 0061bdd5: mov ecx, esi */ r_ecx = r_esi;
    /* 0061bdd7: and ebx, 0xff00 */ {  u32 a = r_ebx; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0061bddd: and edx, 0xff0000 */ {  u32 a = r_edx; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0061bde3: sar ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 0061bde6: sar edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0061bde9: and eax, 0xff00 */ {  u32 a = r_eax; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0061bdee: and ecx, 0xff0000 */ {  u32 a = r_ecx; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0061bdf4: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0061bdf7: sar ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0061bdfa: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061bdfc: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0061bdfe: imul eax, dword ptr [ebp + 0x1c] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0x1cu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061be02: imul ecx, dword ptr [ebp + 0x1c] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0x1cu)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061be06: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0061be09: sar ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0061be0c: mov ebx, esi */ r_ebx = r_esi;
    /* 0061be0e: mov edx, esi */ r_edx = r_esi;
    /* 0061be10: and ebx, 0xff00 */ {  u32 a = r_ebx; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0061be16: sar edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0061be19: sar ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 0061be1c: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0061be1e: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0061be20: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0061be26: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0061be2c: mov eax, esi */ r_eax = r_esi;
    /* 0061be2e: shl ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 0061be31: sub esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0061be33: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0061be36: imul esi, dword ptr [ebp + 0x1c] */ { i64 t = (i64)(i32)r_esi * (i64)(i32)R32((u32)(r_ebp+0x1cu)); r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061be3a: or ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0061be3c: sar esi, 8 */ { u32 c = (8u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0061be3f: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0061be42: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061be44: or ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0061be46: mov dword ptr [edi], ebx */ W32((u32)(r_edi), r_ebx);
    /* 0061be48: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061be4b: add edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061be4e: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
    /* 0061be51: jmp 0x61bdb2 */ goto L_0061bdb2;
L_0061be56:; BB(0x0061be56);
    /* 0061be56: jmp 0x61bd94 */ goto L_0061bd94;
L_0061be5b:; BB(0x0061be5b);
    /* 0061be5b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061be5e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061be61: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 0061be64: jmp 0x61c285 */ goto L_0061c285;
L_0061be69:; BB(0x0061be69);
    /* 0061be69: movzx ecx, word ptr [ebp - 0x28] */ r_ecx = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 0061be6d: cmp dword ptr [ebp + 0x14], ecx */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061be70: jle 0x61be82 */ if ((fZ||fS!=fO)) goto L_0061be82;
L_0061be72:; BB(0x0061be72);
    /* 0061be72: movzx edx, word ptr [ebp - 0x28] */ r_edx = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 0061be76: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0061be79: mov dword ptr [ebp + 0x10], 0 */ W32((u32)(r_ebp+0x10u), 0x0u);
    /* 0061be80: jmp 0x61be8f */ goto L_0061be8f;
L_0061be82:; BB(0x0061be82);
    /* 0061be82: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0061be85: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0061be88: mov dword ptr [ebp + 0x14], 0 */ W32((u32)(r_ebp+0x14u), 0x0u);
L_0061be8f:; BB(0x0061be8f);
    /* 0061be8f: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061be92: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 0061be94: mov byte ptr [ebp - 0x34], dl */ W8((u32)(r_ebp+0xffffffccu), (u8)r_edx);
    /* 0061be97: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061be9a: mov cl, byte ptr [eax + 1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x1u))) & 0xffu);
    /* 0061be9d: mov byte ptr [ebp - 0x33], cl */ W8((u32)(r_ebp+0xffffffcdu), (u8)r_ecx);
    /* 0061bea0: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0061bea3: mov al, byte ptr [edx + 2] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x2u))) & 0xffu);
    /* 0061bea6: mov byte ptr [ebp - 0x32], al */ W8((u32)(r_ebp+0xffffffceu), (u8)r_eax);
    /* 0061bea9: mov byte ptr [ebp - 0x31], 0xff */ W8((u32)(r_ebp+0xffffffcfu), 0xffu);
    /* 0061bead: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061beb0: add ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061beb3: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 0061beb6: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0061bebd: jmp 0x61bec8 */ goto L_0061bec8;
L_0061bebf:; BB(0x0061bebf);
    /* 0061bebf: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061bec2: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061bec5: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
L_0061bec8:; BB(0x0061bec8);
    /* 0061bec8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0061becb: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061bece: jge 0x61bf86 */ if ((fS==fO)) goto L_0061bf86;
L_0061bed4:; BB(0x0061bed4);
    /* 0061bed4: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 0061bedb: jmp 0x61bee6 */ goto L_0061bee6;
L_0061bedd:; BB(0x0061bedd);
    /* 0061bedd: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0061bee0: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061bee3: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
L_0061bee6:; BB(0x0061bee6);
    /* 0061bee6: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0061bee9: cmp edx, dword ptr [ebp + 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x20u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061beec: jge 0x61bf81 */ if ((fS==fO)) goto L_0061bf81;
L_0061bef2:; BB(0x0061bef2);
    /* 0061bef2: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 0061bef5: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 0061bef8: mov esi, dword ptr [esi] */ r_esi = R32((u32)(r_esi));
    /* 0061befa: mov ebx, edi */ r_ebx = r_edi;
    /* 0061befc: mov edx, edi */ r_edx = r_edi;
    /* 0061befe: mov eax, esi */ r_eax = r_esi;
    /* 0061bf00: mov ecx, esi */ r_ecx = r_esi;
    /* 0061bf02: and ebx, 0xff00 */ {  u32 a = r_ebx; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0061bf08: and edx, 0xff0000 */ {  u32 a = r_edx; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0061bf0e: sar ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 0061bf11: sar edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0061bf14: and eax, 0xff00 */ {  u32 a = r_eax; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0061bf19: and ecx, 0xff0000 */ {  u32 a = r_ecx; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0061bf1f: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0061bf22: sar ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0061bf25: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061bf27: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0061bf29: imul eax, dword ptr [ebp + 0x1c] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0x1cu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061bf2d: imul ecx, dword ptr [ebp + 0x1c] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0x1cu)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061bf31: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0061bf34: sar ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0061bf37: mov ebx, esi */ r_ebx = r_esi;
    /* 0061bf39: mov edx, esi */ r_edx = r_esi;
    /* 0061bf3b: and ebx, 0xff00 */ {  u32 a = r_ebx; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0061bf41: sar edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0061bf44: sar ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 0061bf47: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0061bf49: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0061bf4b: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0061bf51: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0061bf57: mov eax, esi */ r_eax = r_esi;
    /* 0061bf59: shl ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 0061bf5c: sub esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0061bf5e: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0061bf61: imul esi, dword ptr [ebp + 0x1c] */ { i64 t = (i64)(i32)r_esi * (i64)(i32)R32((u32)(r_ebp+0x1cu)); r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061bf65: or ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0061bf67: sar esi, 8 */ { u32 c = (8u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0061bf6a: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0061bf6d: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061bf6f: or ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0061bf71: mov dword ptr [edi], ebx */ W32((u32)(r_edi), r_ebx);
    /* 0061bf73: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061bf76: add eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061bf79: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 0061bf7c: jmp 0x61bedd */ goto L_0061bedd;
L_0061bf81:; BB(0x0061bf81);
    /* 0061bf81: jmp 0x61bebf */ goto L_0061bebf;
L_0061bf86:; BB(0x0061bf86);
    /* 0061bf86: jmp 0x61c285 */ goto L_0061c285;
L_0061bf8b:; BB(0x0061bf8b);
    /* 0061bf8b: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061bf8e: add ecx, dword ptr [ebp + 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061bf91: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 0061bf94: movzx edx, word ptr [ebp - 0x28] */ r_edx = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 0061bf98: cmp dword ptr [ebp + 0x14], edx */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061bf9b: jle 0x61bfad */ if ((fZ||fS!=fO)) goto L_0061bfad;
L_0061bf9d:; BB(0x0061bf9d);
    /* 0061bf9d: movzx eax, word ptr [ebp - 0x28] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 0061bfa1: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0061bfa4: mov dword ptr [ebp + 0x10], 0 */ W32((u32)(r_ebp+0x10u), 0x0u);
    /* 0061bfab: jmp 0x61bfba */ goto L_0061bfba;
L_0061bfad:; BB(0x0061bfad);
    /* 0061bfad: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0061bfb0: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0061bfb3: mov dword ptr [ebp + 0x14], 0 */ W32((u32)(r_ebp+0x14u), 0x0u);
L_0061bfba:; BB(0x0061bfba);
    /* 0061bfba: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0061bfc1: jmp 0x61bfcc */ goto L_0061bfcc;
L_0061bfc3:; BB(0x0061bfc3);
    /* 0061bfc3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061bfc6: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061bfc9: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
L_0061bfcc:; BB(0x0061bfcc);
    /* 0061bfcc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0061bfcf: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061bfd2: jge 0x61c018 */ if ((fS==fO)) goto L_0061c018;
L_0061bfd4:; BB(0x0061bfd4);
    /* 0061bfd4: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 0061bfdb: jmp 0x61bfe6 */ goto L_0061bfe6;
L_0061bfdd:; BB(0x0061bfdd);
    /* 0061bfdd: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0061bfe0: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061bfe3: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
L_0061bfe6:; BB(0x0061bfe6);
    /* 0061bfe6: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0061bfe9: cmp edx, dword ptr [ebp + 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x20u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061bfec: jge 0x61c00d */ if ((fS==fO)) goto L_0061c00d;
L_0061bfee:; BB(0x0061bfee);
    /* 0061bfee: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 0061bff1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061bff2: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0061bff5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061bff6: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061bff9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061bffa: call 0x61d520 */ r_esp -= 4; W32(r_esp, 0x61bfffu); f_0061d520();
    /* 0061bfff: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061c002: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061c005: add eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061c008: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 0061c00b: jmp 0x61bfdd */ goto L_0061bfdd;
L_0061c00d:; BB(0x0061c00d);
    /* 0061c00d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061c010: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061c013: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 0061c016: jmp 0x61bfc3 */ goto L_0061bfc3;
L_0061c018:; BB(0x0061c018);
    /* 0061c018: jmp 0x61c285 */ goto L_0061c285;
L_0061c01d:; BB(0x0061c01d);
    /* 0061c01d: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0061c020: add edx, dword ptr [ebp + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061c023: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 0061c026: movzx eax, word ptr [ebp - 0x28] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 0061c02a: cmp dword ptr [ebp + 0x14], eax */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061c02d: jle 0x61c03f */ if ((fZ||fS!=fO)) goto L_0061c03f;
L_0061c02f:; BB(0x0061c02f);
    /* 0061c02f: movzx ecx, word ptr [ebp - 0x28] */ r_ecx = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 0061c033: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0061c036: mov dword ptr [ebp + 0x10], 0 */ W32((u32)(r_ebp+0x10u), 0x0u);
    /* 0061c03d: jmp 0x61c04c */ goto L_0061c04c;
L_0061c03f:; BB(0x0061c03f);
    /* 0061c03f: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0061c042: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0061c045: mov dword ptr [ebp + 0x14], 0 */ W32((u32)(r_ebp+0x14u), 0x0u);
L_0061c04c:; BB(0x0061c04c);
    /* 0061c04c: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0061c053: jmp 0x61c05e */ goto L_0061c05e;
L_0061c055:; BB(0x0061c055);
    /* 0061c055: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0061c058: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061c05b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0061c05e:; BB(0x0061c05e);
    /* 0061c05e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061c061: cmp ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061c064: jge 0x61c0aa */ if ((fS==fO)) goto L_0061c0aa;
L_0061c066:; BB(0x0061c066);
    /* 0061c066: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 0061c06d: jmp 0x61c078 */ goto L_0061c078;
L_0061c06f:; BB(0x0061c06f);
    /* 0061c06f: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0061c072: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061c075: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
L_0061c078:; BB(0x0061c078);
    /* 0061c078: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0061c07b: cmp eax, dword ptr [ebp + 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x20u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061c07e: jge 0x61c09f */ if ((fS==fO)) goto L_0061c09f;
L_0061c080:; BB(0x0061c080);
    /* 0061c080: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 0061c083: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061c084: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061c087: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061c088: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061c08b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061c08c: call 0x61d6a0 */ r_esp -= 4; W32(r_esp, 0x61c091u); f_0061d6a0();
    /* 0061c091: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061c094: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061c097: add ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061c09a: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 0061c09d: jmp 0x61c06f */ goto L_0061c06f;
L_0061c09f:; BB(0x0061c09f);
    /* 0061c09f: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0061c0a2: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061c0a5: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 0061c0a8: jmp 0x61c055 */ goto L_0061c055;
L_0061c0aa:; BB(0x0061c0aa);
    /* 0061c0aa: jmp 0x61c285 */ goto L_0061c285;
L_0061c0af:; BB(0x0061c0af);
    /* 0061c0af: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061c0b2: add eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061c0b5: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 0061c0b8: movzx ecx, word ptr [ebp - 0x28] */ r_ecx = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 0061c0bc: cmp dword ptr [ebp + 0x14], ecx */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061c0bf: jle 0x61c0d1 */ if ((fZ||fS!=fO)) goto L_0061c0d1;
L_0061c0c1:; BB(0x0061c0c1);
    /* 0061c0c1: movzx edx, word ptr [ebp - 0x28] */ r_edx = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 0061c0c5: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0061c0c8: mov dword ptr [ebp + 0x10], 0 */ W32((u32)(r_ebp+0x10u), 0x0u);
    /* 0061c0cf: jmp 0x61c0de */ goto L_0061c0de;
L_0061c0d1:; BB(0x0061c0d1);
    /* 0061c0d1: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0061c0d4: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0061c0d7: mov dword ptr [ebp + 0x14], 0 */ W32((u32)(r_ebp+0x14u), 0x0u);
L_0061c0de:; BB(0x0061c0de);
    /* 0061c0de: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0061c0e5: jmp 0x61c0f0 */ goto L_0061c0f0;
L_0061c0e7:; BB(0x0061c0e7);
    /* 0061c0e7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061c0ea: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061c0ed: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_0061c0f0:; BB(0x0061c0f0);
    /* 0061c0f0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061c0f3: cmp edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061c0f6: jge 0x61c13c */ if ((fS==fO)) goto L_0061c13c;
L_0061c0f8:; BB(0x0061c0f8);
    /* 0061c0f8: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 0061c0ff: jmp 0x61c10a */ goto L_0061c10a;
L_0061c101:; BB(0x0061c101);
    /* 0061c101: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0061c104: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061c107: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
L_0061c10a:; BB(0x0061c10a);
    /* 0061c10a: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0061c10d: cmp ecx, dword ptr [ebp + 0x20] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x20u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061c110: jge 0x61c131 */ if ((fS==fO)) goto L_0061c131;
L_0061c112:; BB(0x0061c112);
    /* 0061c112: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 0061c115: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061c116: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061c119: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061c11a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061c11d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061c11e: call 0x61d800 */ r_esp -= 4; W32(r_esp, 0x61c123u); f_0061d800();
    /* 0061c123: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061c126: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061c129: add edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061c12c: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
    /* 0061c12f: jmp 0x61c101 */ goto L_0061c101;
L_0061c131:; BB(0x0061c131);
    /* 0061c131: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061c134: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061c137: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 0061c13a: jmp 0x61c0e7 */ goto L_0061c0e7;
L_0061c13c:; BB(0x0061c13c);
    /* 0061c13c: jmp 0x61c285 */ goto L_0061c285;
L_0061c141:; BB(0x0061c141);
    /* 0061c141: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061c144: add ecx, dword ptr [ebp + 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061c147: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 0061c14a: movzx edx, word ptr [ebp - 0x28] */ r_edx = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 0061c14e: cmp dword ptr [ebp + 0x14], edx */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061c151: jle 0x61c163 */ if ((fZ||fS!=fO)) goto L_0061c163;
L_0061c153:; BB(0x0061c153);
    /* 0061c153: movzx eax, word ptr [ebp - 0x28] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 0061c157: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0061c15a: mov dword ptr [ebp + 0x10], 0 */ W32((u32)(r_ebp+0x10u), 0x0u);
    /* 0061c161: jmp 0x61c170 */ goto L_0061c170;
L_0061c163:; BB(0x0061c163);
    /* 0061c163: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0061c166: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0061c169: mov dword ptr [ebp + 0x14], 0 */ W32((u32)(r_ebp+0x14u), 0x0u);
L_0061c170:; BB(0x0061c170);
    /* 0061c170: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0061c177: jmp 0x61c182 */ goto L_0061c182;
L_0061c179:; BB(0x0061c179);
    /* 0061c179: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061c17c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061c17f: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
L_0061c182:; BB(0x0061c182);
    /* 0061c182: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0061c185: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061c188: jge 0x61c1ce */ if ((fS==fO)) goto L_0061c1ce;
L_0061c18a:; BB(0x0061c18a);
    /* 0061c18a: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 0061c191: jmp 0x61c19c */ goto L_0061c19c;
L_0061c193:; BB(0x0061c193);
    /* 0061c193: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0061c196: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061c199: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
L_0061c19c:; BB(0x0061c19c);
    /* 0061c19c: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0061c19f: cmp edx, dword ptr [ebp + 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x20u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061c1a2: jge 0x61c1c3 */ if ((fS==fO)) goto L_0061c1c3;
L_0061c1a4:; BB(0x0061c1a4);
    /* 0061c1a4: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 0061c1a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061c1a8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061c1ab: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061c1ac: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061c1af: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061c1b0: call 0x61da70 */ r_esp -= 4; W32(r_esp, 0x61c1b5u); f_0061da70();
    /* 0061c1b5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061c1b8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061c1bb: add eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061c1be: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 0061c1c1: jmp 0x61c193 */ goto L_0061c193;
L_0061c1c3:; BB(0x0061c1c3);
    /* 0061c1c3: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061c1c6: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061c1c9: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 0061c1cc: jmp 0x61c179 */ goto L_0061c179;
L_0061c1ce:; BB(0x0061c1ce);
    /* 0061c1ce: jmp 0x61c285 */ goto L_0061c285;
L_0061c1d3:; BB(0x0061c1d3);
    /* 0061c1d3: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0061c1d6: add edx, dword ptr [ebp + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061c1d9: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 0061c1dc: movzx eax, word ptr [ebp - 0x28] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 0061c1e0: cmp dword ptr [ebp + 0x14], eax */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061c1e3: jle 0x61c1f5 */ if ((fZ||fS!=fO)) goto L_0061c1f5;
L_0061c1e5:; BB(0x0061c1e5);
    /* 0061c1e5: movzx ecx, word ptr [ebp - 0x28] */ r_ecx = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 0061c1e9: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0061c1ec: mov dword ptr [ebp + 0x10], 0 */ W32((u32)(r_ebp+0x10u), 0x0u);
    /* 0061c1f3: jmp 0x61c202 */ goto L_0061c202;
L_0061c1f5:; BB(0x0061c1f5);
    /* 0061c1f5: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0061c1f8: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0061c1fb: mov dword ptr [ebp + 0x14], 0 */ W32((u32)(r_ebp+0x14u), 0x0u);
L_0061c202:; BB(0x0061c202);
    /* 0061c202: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0061c209: jmp 0x61c214 */ goto L_0061c214;
L_0061c20b:; BB(0x0061c20b);
    /* 0061c20b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0061c20e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061c211: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0061c214:; BB(0x0061c214);
    /* 0061c214: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061c217: cmp ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061c21a: jge 0x61c285 */ if ((fS==fO)) goto L_0061c285;
L_0061c21c:; BB(0x0061c21c);
    /* 0061c21c: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 0061c223: jmp 0x61c22e */ goto L_0061c22e;
L_0061c225:; BB(0x0061c225);
    /* 0061c225: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0061c228: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061c22b: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
L_0061c22e:; BB(0x0061c22e);
    /* 0061c22e: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0061c231: cmp eax, dword ptr [ebp + 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x20u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061c234: jge 0x61c27a */ if ((fS==fO)) goto L_0061c27a;
L_0061c236:; BB(0x0061c236);
    /* 0061c236: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0061c239: mov dword ptr [ebp - 0x90], ecx */ W32((u32)(r_ebp+0xffffff70u), r_ecx);
    /* 0061c23f: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 0061c242: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061c243: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061c246: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0061c248: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061c249: lea edx, [ebp - 0x90] */ r_edx = (u32)(r_ebp+0xffffff70u);
    /* 0061c24f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061c250: call 0x61d6a0 */ r_esp -= 4; W32(r_esp, 0x61c255u); f_0061d6a0();
    /* 0061c255: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061c258: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 0061c25b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061c25c: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 0061c262: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061c263: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061c266: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061c267: call 0x61d520 */ r_esp -= 4; W32(r_esp, 0x61c26cu); f_0061d520();
    /* 0061c26c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061c26f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061c272: add eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061c275: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 0061c278: jmp 0x61c225 */ goto L_0061c225;
L_0061c27a:; BB(0x0061c27a);
    /* 0061c27a: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061c27d: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061c280: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 0061c283: jmp 0x61c20b */ goto L_0061c20b;
L_0061c285:; BB(0x0061c285);
    /* 0061c285: cmp dword ptr [ebp + 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061c289: je 0x61c2b4 */ if (fZ) goto L_0061c2b4;
L_0061c28b:; BB(0x0061c28b);
    /* 0061c28b: movzx edx, word ptr [ebp - 0x28] */ r_edx = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 0061c28f: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0061c292: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061c294: mov dword ptr [ebp + 0x14], eax */ W32((u32)(r_ebp+0x14u), r_eax);
    /* 0061c297: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061c29a: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 0061c29d: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0061c2a0: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061c2a3: mov cx, word ptr [eax + 1] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0x1u))) & 0xffffu);
    /* 0061c2a7: mov word ptr [ebp - 0x28], cx */ W16((u32)(r_ebp+0xffffffd8u), (u16)r_ecx);
    /* 0061c2ab: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0061c2ae: add edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061c2b1: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
L_0061c2b4:; BB(0x0061c2b4);
    /* 0061c2b4: jmp 0x61b5de */ goto L_0061b5de;
L_0061c2b9:; BB(0x0061c2b9);
    /* 0061c2b9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0061c2ba: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0061c2bb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061c2bc: mov esp, ebp */ r_esp = r_ebp;
    /* 0061c2be: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061c2bf: ret  */ FN_RET(0x0061b450); r_esp += 4; return;
}

