#include "protos.h"

void f_005e6420(void) /* CasinoDemoAboutRoomScript::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e6420);
    /* 005e6420: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e6421: mov ebp, esp */ r_ebp = r_esp;
    /* 005e6423: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6424: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e6427: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6429: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e642c: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x5e6431u); f_005fc0d0();
    /* 005e6431: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6434: mov dword ptr [eax], 0x6d5ad4 */ W32((u32)(r_eax), 0x6d5ad4u);
    /* 005e643a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e643d: mov dword ptr [ecx + 0x20], 0 */ W32((u32)(r_ecx+0x20u), 0x0u);
    /* 005e6444: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6447: mov esp, ebp */ r_esp = r_ebp;
    /* 005e6449: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e644a: ret  */ FN_RET(0x005e6420); r_esp += 4; return;
}

void f_005e64b0(void) /* CasinoDemoAboutRoomScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e64b0);
    /* 005e64b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e64b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005e64b3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e64b6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005e64b9: push 0x311b63 */ { u32 v = 0x311b63u; r_esp -= 4; W32(r_esp, v); }
    /* 005e64be: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005e64c3: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005e64c6: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x5e64cbu); f_005fb2b0();
    /* 005e64cb: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005e64ce: push 0x311b64 */ { u32 v = 0x311b64u; r_esp -= 4; W32(r_esp, v); }
    /* 005e64d3: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005e64d9: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005e64dc: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x5e64e1u); f_005fb2b0();
    /* 005e64e1: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005e64e4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e64e7: call 0x5fc360 */ r_esp -= 4; W32(r_esp, 0x5e64ecu); f_005fc360();
    /* 005e64ec: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005e64ef: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005e64f3: ja 0x5e6715 */ if ((!fC&&!fZ)) goto L_005e6715;
L_005e64f9:; BB(0x005e64f9);
    /* 005e64f9: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e64fc: jmp dword ptr [edx*4 + 0x5e671c] */ { u32 t = R32((u32)(r_edx*4+0x5e671cu)); switch (t) { case 0x5e6503u: goto L_005e6503; case 0x5e659fu: goto L_005e659f; case 0x5e660bu: goto L_005e660b; case 0x5e6679u: goto L_005e6679; case 0x5e66c7u: goto L_005e66c7; default: UNSUP(0x005e64fc, "jump table entry is not a known target"); } }
L_005e6503:; BB(0x005e6503);
    /* 005e6503: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6505: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e650a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e650c: push 0x65 */ { u32 v = 0x65u; r_esp -= 4; W32(r_esp, v); }
    /* 005e650e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6510: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6512: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6514: push 0x311b63 */ { u32 v = 0x311b63u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6519: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e651b: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005e6520: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005e6523: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x5e6528u); f_005f9ce0();
    /* 005e6528: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005e652b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e652d: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e6532: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6534: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6536: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6538: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e653a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e653c: push 0x311b64 */ { u32 v = 0x311b64u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6541: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6543: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005e6549: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005e654c: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x5e6551u); f_005f9ce0();
    /* 005e6551: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005e6554: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e6557: call 0x5e6470 */ r_esp -= 4; W32(r_esp, 0x5e655cu); f_005e6470();
    /* 005e655c: mov edx, dword ptr [eax*4 + 0x75e840] */ r_edx = R32((u32)(r_eax*4+0x75e840u));
    /* 005e6563: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6564: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e6567: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x5e656cu); f_005eaf00();
    /* 005e656c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e656f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e6571: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e6574: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005e6577: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e6579u); call_ind(t); }
    /* 005e6579: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e657c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e657e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6581: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005e6584: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e6586u); call_ind(t); }
    /* 005e6586: push 0x12c */ { u32 v = 0x12cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e658b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e658d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e6590: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e6592: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e6595: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005e6598: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e659au); call_ind(t); }
    /* 005e659a: jmp 0x5e6715 */ goto L_005e6715;
L_005e659f:; BB(0x005e659f);
    /* 005e659f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e65a2: call 0x5e6470 */ r_esp -= 4; W32(r_esp, 0x5e65a7u); f_005e6470();
    /* 005e65a7: mov ecx, dword ptr [eax*4 + 0x75e840] */ r_ecx = R32((u32)(r_eax*4+0x75e840u));
    /* 005e65ae: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e65af: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e65b2: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x5e65b7u); f_005eaf00();
    /* 005e65b7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e65ba: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e65bc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e65bf: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 005e65c2: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5e65c4u); call_ind(t); }
    /* 005e65c4: mov dword ptr [0x794928], 0xff */ W32((u32)(0x794928u), 0xffu);
    /* 005e65ce: mov dword ptr [0x794924], 0 */ W32((u32)(0x794924u), 0x0u);
    /* 005e65d8: mov al, byte ptr [0x794928] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x794928u))) & 0xffu);
    /* 005e65dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e65de: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e65e1: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x5e65e6u); f_005eb5d0();
    /* 005e65e6: mov cl, byte ptr [0x794924] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(0x794924u))) & 0xffu);
    /* 005e65ec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e65ed: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e65f0: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x5e65f5u); f_005eb5d0();
    /* 005e65f5: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005e65f7: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005e65f9: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e65fc: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e65fe: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e6601: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005e6604: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5e6606u); call_ind(t); }
    /* 005e6606: jmp 0x5e6715 */ goto L_005e6715;
L_005e660b:; BB(0x005e660b);
    /* 005e660b: mov eax, dword ptr [0x794928] */ r_eax = R32((u32)(0x794928u));
    /* 005e6610: sub eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e6613: mov dword ptr [0x794928], eax */ W32((u32)(0x794928u), r_eax);
    /* 005e6618: mov ecx, dword ptr [0x794924] */ r_ecx = R32((u32)(0x794924u));
    /* 005e661e: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e6621: mov dword ptr [0x794924], ecx */ W32((u32)(0x794924u), r_ecx);
    /* 005e6627: cmp dword ptr [0x794928], 0 */ {  u32 a = R32((u32)(0x794928u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e662e: jge 0x5e6646 */ if ((fS==fO)) goto L_005e6646;
L_005e6630:; BB(0x005e6630);
    /* 005e6630: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6632: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6634: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e6637: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e6639: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e663c: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005e663f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5e6641u); call_ind(t); }
    /* 005e6641: jmp 0x5e6715 */ goto L_005e6715;
L_005e6646:; BB(0x005e6646);
    /* 005e6646: mov al, byte ptr [0x794928] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x794928u))) & 0xffu);
    /* 005e664b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e664c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e664f: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x5e6654u); f_005eb5d0();
    /* 005e6654: mov cl, byte ptr [0x794924] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(0x794924u))) & 0xffu);
    /* 005e665a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e665b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e665e: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x5e6663u); f_005eb5d0();
    /* 005e6663: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6665: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6667: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e666a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e666c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e666f: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005e6672: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5e6674u); call_ind(t); }
    /* 005e6674: jmp 0x5e6715 */ goto L_005e6715;
L_005e6679:; BB(0x005e6679);
    /* 005e6679: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e667c: call 0x5eafc0 */ r_esp -= 4; W32(r_esp, 0x5e6681u); f_005eafc0();
    /* 005e6681: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e6682: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e6685: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x5e668au); f_005eaf00();
    /* 005e668a: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e668f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e6692: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x5e6697u); f_005eb5d0();
    /* 005e6697: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e669a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e669c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e669f: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005e66a2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e66a4u); call_ind(t); }
    /* 005e66a4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e66a7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e66a9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e66ac: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005e66af: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e66b1u); call_ind(t); }
    /* 005e66b1: push 0x12c */ { u32 v = 0x12cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e66b6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e66b8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e66bb: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e66bd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e66c0: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005e66c3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e66c5u); call_ind(t); }
    /* 005e66c5: jmp 0x5e6715 */ goto L_005e6715;
L_005e66c7:; BB(0x005e66c7);
    /* 005e66c7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e66ca: call 0x5f54c0 */ r_esp -= 4; W32(r_esp, 0x5e66cfu); f_005f54c0();
    /* 005e66cf: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005e66d2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e66d4: je 0x5e6704 */ if (fZ) goto L_005e6704;
L_005e66d6:; BB(0x005e66d6);
    /* 005e66d6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e66d9: call 0x5e6470 */ r_esp -= 4; W32(r_esp, 0x5e66deu); f_005e6470();
    /* 005e66de: mov edx, dword ptr [eax*4 + 0x75e840] */ r_edx = R32((u32)(r_eax*4+0x75e840u));
    /* 005e66e5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e66e6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e66e9: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x5e66eeu); f_005eaf00();
    /* 005e66ee: push 0x12c */ { u32 v = 0x12cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e66f3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e66f5: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e66f8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e66fa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e66fd: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005e6700: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e6702u); call_ind(t); }
    /* 005e6702: jmp 0x5e6715 */ goto L_005e6715;
L_005e6704:; BB(0x005e6704);
    /* 005e6704: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6706: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6708: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e670b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e670d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e6710: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005e6713: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e6715u); call_ind(t); }
L_005e6715:; BB(0x005e6715);
    /* 005e6715: mov esp, ebp */ r_esp = r_ebp;
    /* 005e6717: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e6718: ret  */ FN_RET(0x005e64b0); r_esp += 4; return;
}

