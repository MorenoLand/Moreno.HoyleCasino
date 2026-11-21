#include "protos.h"

void f_0064a7a0(void) /* CharacterAnimationCycle::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064a7a0);
    /* 0064a7a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064a7a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0064a7a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064a7a5: push 0x6abead */ { u32 v = 0x6abeadu; r_esp -= 4; W32(r_esp, v); }
    /* 0064a7aa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0064a7b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064a7b1: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064a7b4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0064a7b9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064a7bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064a7bc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0064a7bf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0064a7c5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0064a7c8: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0064a7cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064a7cc: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064a7cf: call 0x600420 */ r_esp -= 4; W32(r_esp, 0x64a7d4u); f_00600420();
    /* 0064a7d4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064a7db: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064a7de: mov dword ptr [ecx], 0x6dc9c4 */ W32((u32)(r_ecx), 0x6dc9c4u);
    /* 0064a7e4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064a7e6: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0064a7e9: add edx, dword ptr [ebp + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0064a7ec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064a7ed: push 0x20534443 */ { u32 v = 0x20534443u; r_esp -= 4; W32(r_esp, v); }
    /* 0064a7f2: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0064a7f7: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0064a7fa: call 0x603c50 */ r_esp -= 4; W32(r_esp, 0x64a7ffu); f_00603c50();
    /* 0064a7ff: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0064a802: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064a805: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0064a808: mov dword ptr [ecx + 0x1c], edx */ W32((u32)(r_ecx+0x1cu), r_edx);
    /* 0064a80b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064a80e: call 0x61ed80 */ r_esp -= 4; W32(r_esp, 0x64a813u); f_0061ed80();
    /* 0064a813: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0064a816: cmp dword ptr [ebp - 0x14], 0x400 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x400u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064a81d: jle 0x64a850 */ if ((fZ||fS!=fO)) goto L_0064a850;
L_0064a81f:; BB(0x0064a81f);
    /* 0064a81f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0064a821: jne 0x64a83a */ if (!fZ) goto L_0064a83a;
L_0064a823:; BB(0x0064a823);
    /* 0064a823: push 0x722 */ { u32 v = 0x722u; r_esp -= 4; W32(r_esp, v); }
    /* 0064a828: push 0x6dc610 */ { u32 v = 0x6dc610u; r_esp -= 4; W32(r_esp, v); }
    /* 0064a82d: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0064a832: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x64a837u); f_005e9f20();
    /* 0064a837: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0064a83a:; BB(0x0064a83a);
    /* 0064a83a: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064a83d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064a83e: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0064a843: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0064a846: call 0x6041d0 */ r_esp -= 4; W32(r_esp, 0x64a84bu); f_006041d0();
    /* 0064a84b: jmp 0x64a8f2 */ goto L_0064a8f2;
L_0064a850:; BB(0x0064a850);
    /* 0064a850: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064a853: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064a854: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064a857: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0064a859: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064a85c: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0064a85f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x64a861u); call_ind(t); }
    /* 0064a861: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064a862: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064a865: add eax, 0x24 */ {  u32 a = r_eax; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0064a868: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064a869: call 0x686fde */ r_esp -= 4; W32(r_esp, 0x64a86eu); f_00686fde();
    /* 0064a86e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064a871: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064a874: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064a875: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 0064a87b: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 0064a87e: call 0x6041d0 */ r_esp -= 4; W32(r_esp, 0x64a883u); f_006041d0();
    /* 0064a883: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064a886: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0064a889: mov dword ptr [eax + 0x20], ecx */ W32((u32)(r_eax+0x20u), r_ecx);
    /* 0064a88c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0064a88f: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0064a890: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0064a892: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0064a894: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064a897: mov dword ptr [edx + 0x424], eax */ W32((u32)(r_edx+0x424u), r_eax);
    /* 0064a89d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064a8a0: mov dword ptr [eax + 0x428], 0 */ W32((u32)(r_eax+0x428u), 0x0u);
    /* 0064a8aa: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 0064a8b0: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 0064a8b3: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0064a8b8: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0064a8bb: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0064a8bd: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0064a8c0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64a8c2u); call_ind(t); }
    /* 0064a8c2: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064a8c5: mov dword ptr [ecx + 0x434], eax */ W32((u32)(r_ecx+0x434u), r_eax);
    /* 0064a8cb: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 0064a8d1: call 0x5f3e50 */ r_esp -= 4; W32(r_esp, 0x64a8d6u); f_005f3e50();
    /* 0064a8d6: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064a8d9: mov ecx, dword ptr [edx + 0x428] */ r_ecx = R32((u32)(r_edx+0x428u));
    /* 0064a8df: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064a8e2: movzx ecx, byte ptr [edx + ecx*2 + 0x25] */ r_ecx = (u32)R8((u32)(r_edx+r_ecx*2+0x25u));
    /* 0064a8e7: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0064a8e9: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064a8ec: mov dword ptr [edx + 0x438], eax */ W32((u32)(r_edx+0x438u), r_eax);
L_0064a8f2:; BB(0x0064a8f2);
    /* 0064a8f2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0064a8f9: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064a8fc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064a8ff: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064a906: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064a907: mov esp, ebp */ r_esp = r_ebp;
    /* 0064a909: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064a90a: ret 0x10 */ FN_RET(0x0064a7a0); r_esp += 20; return;
}

void f_0064a930(void) /* CharacterAnimationCycle::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064a930);
    /* 0064a930: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064a931: mov ebp, esp */ r_ebp = r_esp;
    /* 0064a933: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064a934: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0064a937: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064a939: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0064a93c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064a93d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064a940: call 0x6004e0 */ r_esp -= 4; W32(r_esp, 0x64a945u); f_006004e0();
    /* 0064a945: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064a948: mov edx, dword ptr [ecx + 0x428] */ r_edx = R32((u32)(r_ecx+0x428u));
    /* 0064a94e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064a951: movzx ecx, byte ptr [eax + edx*2 + 0x24] */ r_ecx = (u32)R8((u32)(r_eax+r_edx*2+0x24u));
    /* 0064a956: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064a957: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064a95a: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0064a95d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064a960: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0064a963: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064a965: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0064a96b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64a96du); call_ind(t); }
    /* 0064a96d: mov esp, ebp */ r_esp = r_ebp;
    /* 0064a96f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064a970: ret 8 */ FN_RET(0x0064a930); r_esp += 12; return;
}

void f_0064a980(void) /* CharacterAnimationCycle::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064a980);
    /* 0064a980: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064a981: mov ebp, esp */ r_ebp = r_esp;
    /* 0064a983: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064a984: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0064a987: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064a98a: movzx ecx, byte ptr [eax + 0x18] */ r_ecx = (u32)R8((u32)(r_eax+0x18u));
    /* 0064a98e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a990: jne 0x64a997 */ if (!fZ) goto L_0064a997;
L_0064a992:; BB(0x0064a992);
    /* 0064a992: jmp 0x64aa40 */ goto L_0064aa40;
L_0064a997:; BB(0x0064a997);
    /* 0064a997: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064a99a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0064a99c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064a99f: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 0064a9a2: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x64a9a4u); call_ind(t); }
    /* 0064a9a4: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0064a9a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a9a9: je 0x64aa40 */ if (fZ) goto L_0064aa40;
L_0064a9af:; BB(0x0064a9af);
    /* 0064a9af: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064a9b2: mov edx, dword ptr [ecx + 0x428] */ r_edx = R32((u32)(r_ecx+0x428u));
    /* 0064a9b8: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0064a9bb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064a9be: mov dword ptr [eax + 0x428], edx */ W32((u32)(r_eax+0x428u), r_edx);
    /* 0064a9c4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064a9c7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064a9ca: mov eax, dword ptr [ecx + 0x428] */ r_eax = R32((u32)(r_ecx+0x428u));
    /* 0064a9d0: cmp eax, dword ptr [edx + 0x424] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x424u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064a9d6: jl 0x64a9e7 */ if ((fS!=fO)) goto L_0064a9e7;
L_0064a9d8:; BB(0x0064a9d8);
    /* 0064a9d8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064a9db: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064a9dd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064a9e0: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 0064a9e3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64a9e5u); call_ind(t); }
    /* 0064a9e5: jmp 0x64aa40 */ goto L_0064aa40;
L_0064a9e7:; BB(0x0064a9e7);
    /* 0064a9e7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064a9ea: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 0064a9ed: mov byte ptr [edx + 0x5c], 1 */ W8((u32)(r_edx+0x5cu), 0x1u);
    /* 0064a9f1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064a9f4: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 0064a9fa: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064a9fd: movzx eax, byte ptr [edx + ecx*2 + 0x24] */ r_eax = (u32)R8((u32)(r_edx+r_ecx*2+0x24u));
    /* 0064aa02: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064aa03: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064aa06: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0064aa09: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064aa0c: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0064aa0f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0064aa11: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0064aa17: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64aa19u); call_ind(t); }
    /* 0064aa19: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 0064aa1f: call 0x5f3e50 */ r_esp -= 4; W32(r_esp, 0x64aa24u); f_005f3e50();
    /* 0064aa24: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064aa27: mov edx, dword ptr [ecx + 0x428] */ r_edx = R32((u32)(r_ecx+0x428u));
    /* 0064aa2d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064aa30: movzx edx, byte ptr [ecx + edx*2 + 0x25] */ r_edx = (u32)R8((u32)(r_ecx+r_edx*2+0x25u));
    /* 0064aa35: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0064aa37: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064aa3a: mov dword ptr [ecx + 0x438], eax */ W32((u32)(r_ecx+0x438u), r_eax);
L_0064aa40:; BB(0x0064aa40);
    /* 0064aa40: mov esp, ebp */ r_esp = r_ebp;
    /* 0064aa42: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064aa43: ret  */ FN_RET(0x0064a980); r_esp += 4; return;
}

void f_0064aa50(void) /* CharacterAnimationCycle::vfunc3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064aa50);
    /* 0064aa50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064aa51: mov ebp, esp */ r_ebp = r_esp;
    /* 0064aa53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064aa54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0064aa57: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064aa5a: cmp dword ptr [eax + 0x438], 0 */ {  u32 a = R32((u32)(r_eax+0x438u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064aa61: je 0x64aa8a */ if (fZ) goto L_0064aa8a;
L_0064aa63:; BB(0x0064aa63);
    /* 0064aa63: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 0064aa69: call 0x5f3e50 */ r_esp -= 4; W32(r_esp, 0x64aa6eu); f_005f3e50();
    /* 0064aa6e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064aa71: cmp eax, dword ptr [ecx + 0x438] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x438u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064aa77: jl 0x64aa8a */ if ((fS!=fO)) goto L_0064aa8a;
L_0064aa79:; BB(0x0064aa79);
    /* 0064aa79: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064aa7c: mov dword ptr [edx + 0x438], 0 */ W32((u32)(r_edx+0x438u), 0x0u);
    /* 0064aa86: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0064aa88: jmp 0x64aa8c */ goto L_0064aa8c;
L_0064aa8a:; BB(0x0064aa8a);
    /* 0064aa8a: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0064aa8c:; BB(0x0064aa8c);
    /* 0064aa8c: mov esp, ebp */ r_esp = r_ebp;
    /* 0064aa8e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064aa8f: ret  */ FN_RET(0x0064aa50); r_esp += 4; return;
}

void f_0064aa90(void) /* CharacterAnimationCycle::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064aa90);
    /* 0064aa90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064aa91: mov ebp, esp */ r_ebp = r_esp;
    /* 0064aa93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064aa94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0064aa97: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064aa9a: call 0x6005d0 */ r_esp -= 4; W32(r_esp, 0x64aa9fu); f_006005d0();
    /* 0064aa9f: mov esp, ebp */ r_esp = r_ebp;
    /* 0064aaa1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064aaa2: ret  */ FN_RET(0x0064aa90); r_esp += 4; return;
}

