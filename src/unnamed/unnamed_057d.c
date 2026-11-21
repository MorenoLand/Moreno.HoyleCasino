#include "protos.h"

void f_0057d3a0(void) /* sub_57D3A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0057d3a0);
    /* 0057d3a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057d3a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0057d3a3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057d3a6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0057d3a9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057d3ac: call 0x5f87d0 */ r_esp -= 4; W32(r_esp, 0x57d3b1u); f_005f87d0();
    /* 0057d3b1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0057d3b8: jmp 0x57d3c3 */ goto L_0057d3c3;
L_0057d3ba:; BB(0x0057d3ba);
    /* 0057d3ba: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057d3bd: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0057d3c0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0057d3c3:; BB(0x0057d3c3);
    /* 0057d3c3: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 0057d3c9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057d3cc: cmp edx, dword ptr [ecx + 0x19d4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x19d4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057d3d2: jge 0x57d3ee */ if ((fS==fO)) goto L_0057d3ee;
L_0057d3d4:; BB(0x0057d3d4);
    /* 0057d3d4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057d3d6: mov eax, dword ptr [0x793578] */ r_eax = R32((u32)(0x793578u));
    /* 0057d3db: mov ecx, dword ptr [eax + 0x19d8] */ r_ecx = R32((u32)(r_eax+0x19d8u));
    /* 0057d3e1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057d3e4: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 0057d3e7: call 0x57c410 */ r_esp -= 4; W32(r_esp, 0x57d3ecu); f_0057c410();
    /* 0057d3ec: jmp 0x57d3ba */ goto L_0057d3ba;
L_0057d3ee:; BB(0x0057d3ee);
    /* 0057d3ee: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057d3f1: mov dword ptr [eax + 0x1b4], 0xffffffff */ W32((u32)(r_eax+0x1b4u), 0xffffffffu);
    /* 0057d3fb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0057d402: jmp 0x57d40d */ goto L_0057d40d;
L_0057d404:; BB(0x0057d404);
    /* 0057d404: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057d407: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0057d40a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0057d40d:; BB(0x0057d40d);
    /* 0057d40d: cmp dword ptr [ebp - 4], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057d411: jge 0x57d438 */ if ((fS==fO)) goto L_0057d438;
L_0057d413:; BB(0x0057d413);
    /* 0057d413: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057d416: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057d419: mov ecx, dword ptr [eax + edx*4 + 0x1b8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1b8u));
    /* 0057d420: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057d423: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057d426: mov edx, dword ptr [eax + edx*4 + 0x1b8] */ r_edx = R32((u32)(r_eax+r_edx*4+0x1b8u));
    /* 0057d42d: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0057d42f: mov ecx, edx */ r_ecx = r_edx;
    /* 0057d431: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 0057d434: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x57d436u); call_ind(t); }
    /* 0057d436: jmp 0x57d404 */ goto L_0057d404;
L_0057d438:; BB(0x0057d438);
    /* 0057d438: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057d43b: mov ecx, dword ptr [eax + 0x1d0] */ r_ecx = R32((u32)(r_eax+0x1d0u));
    /* 0057d441: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057d444: mov eax, dword ptr [edx + 0x1d0] */ r_eax = R32((u32)(r_edx+0x1d0u));
    /* 0057d44a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057d44c: mov ecx, eax */ r_ecx = r_eax;
    /* 0057d44e: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0057d451: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57d453u); call_ind(t); }
    /* 0057d453: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057d456: mov edx, dword ptr [ecx + 0x1d4] */ r_edx = R32((u32)(r_ecx+0x1d4u));
    /* 0057d45c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057d45f: mov ecx, dword ptr [eax + 0x1d4] */ r_ecx = R32((u32)(r_eax+0x1d4u));
    /* 0057d465: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057d467: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0057d46a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57d46cu); call_ind(t); }
    /* 0057d46c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057d46f: mov edx, dword ptr [ecx + 0x1d8] */ r_edx = R32((u32)(r_ecx+0x1d8u));
    /* 0057d475: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057d478: mov ecx, dword ptr [eax + 0x1d8] */ r_ecx = R32((u32)(r_eax+0x1d8u));
    /* 0057d47e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057d480: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0057d483: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57d485u); call_ind(t); }
    /* 0057d485: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057d488: cmp dword ptr [ecx + 0x1dc], 0 */ {  u32 a = R32((u32)(r_ecx+0x1dcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057d48f: je 0x57d4ac */ if (fZ) goto L_0057d4ac;
L_0057d491:; BB(0x0057d491);
    /* 0057d491: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057d494: mov ecx, dword ptr [edx + 0x1dc] */ r_ecx = R32((u32)(r_edx+0x1dcu));
    /* 0057d49a: call 0x5f85d0 */ r_esp -= 4; W32(r_esp, 0x57d49fu); f_005f85d0();
    /* 0057d49f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057d4a2: mov dword ptr [eax + 0x1dc], 0 */ W32((u32)(r_eax+0x1dcu), 0x0u);
L_0057d4ac:; BB(0x0057d4ac);
    /* 0057d4ac: mov esp, ebp */ r_esp = r_ebp;
    /* 0057d4ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057d4af: ret  */ FN_RET(0x0057d3a0); r_esp += 4; return;
}

void f_0057d4b0(void) /* sub_57D4B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0057d4b0);
    /* 0057d4b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057d4b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0057d4b3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057d4b6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0057d4b9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057d4bc: call 0x5f88f0 */ r_esp -= 4; W32(r_esp, 0x57d4c1u); f_005f88f0();
    /* 0057d4c1: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0057d4c4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057d4c6: je 0x57d4cc */ if (fZ) goto L_0057d4cc;
L_0057d4c8:; BB(0x0057d4c8);
    /* 0057d4c8: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0057d4ca: jmp 0x57d51b */ goto L_0057d51b;
L_0057d4cc:; BB(0x0057d4cc);
    /* 0057d4cc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057d4cf: call 0x5f8930 */ r_esp -= 4; W32(r_esp, 0x57d4d4u); f_005f8930();
    /* 0057d4d4: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0057d4d7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057d4da: call 0x5f8950 */ r_esp -= 4; W32(r_esp, 0x57d4dfu); f_005f8950();
    /* 0057d4df: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0057d4e2: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057d4e6: jle 0x57d511 */ if ((fZ||fS!=fO)) goto L_0057d511;
L_0057d4e8:; BB(0x0057d4e8);
    /* 0057d4e8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057d4eb: call 0x5f8550 */ r_esp -= 4; W32(r_esp, 0x57d4f0u); f_005f8550();
    /* 0057d4f0: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057d4f3: jge 0x57d511 */ if ((fS==fO)) goto L_0057d511;
L_0057d4f5:; BB(0x0057d4f5);
    /* 0057d4f5: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057d4f9: jle 0x57d511 */ if ((fZ||fS!=fO)) goto L_0057d511;
L_0057d4fb:; BB(0x0057d4fb);
    /* 0057d4fb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057d4fe: call 0x5f8570 */ r_esp -= 4; W32(r_esp, 0x57d503u); f_005f8570();
    /* 0057d503: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057d506: jge 0x57d511 */ if ((fS==fO)) goto L_0057d511;
L_0057d508:; BB(0x0057d508);
    /* 0057d508: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
    /* 0057d50f: jmp 0x57d518 */ goto L_0057d518;
L_0057d511:; BB(0x0057d511);
    /* 0057d511: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_0057d518:; BB(0x0057d518);
    /* 0057d518: mov al, byte ptr [ebp - 0x10] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff0u))) & 0xffu);
L_0057d51b:; BB(0x0057d51b);
    /* 0057d51b: mov esp, ebp */ r_esp = r_ebp;
    /* 0057d51d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057d51e: ret  */ FN_RET(0x0057d4b0); r_esp += 4; return;
}

