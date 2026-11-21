#include "protos.h"

void f_0064c070(void) /* CommentButton::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064c070);
    /* 0064c070: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064c071: mov ebp, esp */ r_ebp = r_esp;
    /* 0064c073: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064c074: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0064c077: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064c07a: call 0x601a80 */ r_esp -= 4; W32(r_esp, 0x64c07fu); f_00601a80();
    /* 0064c07f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064c082: mov dword ptr [eax], 0x6dcc6c */ W32((u32)(r_eax), 0x6dcc6cu);
    /* 0064c088: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064c08b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0064c08e: mov dword ptr [ecx + 0x1dc], edx */ W32((u32)(r_ecx+0x1dcu), r_edx);
    /* 0064c094: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064c097: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0064c09a: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 0064c09d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064c0a0: mov al, byte ptr [ebp + 0x10] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 0064c0a3: mov byte ptr [edx + 0x1e0], al */ W8((u32)(r_edx+0x1e0u), (u8)r_eax);
    /* 0064c0a9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064c0ac: mov esp, ebp */ r_esp = r_ebp;
    /* 0064c0ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064c0af: ret 0xc */ FN_RET(0x0064c070); r_esp += 16; return;
}

void f_0064c0e0(void) /* CommentButton::vfunc16 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064c0e0);
    /* 0064c0e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064c0e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0064c0e3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064c0e6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0064c0e9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064c0ec: call 0x5f5cc0 */ r_esp -= 4; W32(r_esp, 0x64c0f1u); f_005f5cc0();
    /* 0064c0f1: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064c0f4: mov ecx, dword ptr [eax + 0x1dc] */ r_ecx = R32((u32)(r_eax+0x1dcu));
    /* 0064c0fa: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0064c0fd: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0064c100: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0064c103: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x64c108u); f_0063aac0();
    /* 0064c108: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0064c10a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0064c10d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0064c10f: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c113: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0064c116: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 0064c119: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c11b: je 0x64c150 */ if (fZ) goto L_0064c150;
L_0064c11d:; BB(0x0064c11d);
    /* 0064c11d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064c120: mov cl, byte ptr [eax + 0x1e0] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x1e0u))) & 0xffu);
    /* 0064c126: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064c127: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0064c12d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0064c12f: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064c135: mov edx, dword ptr [eax + 0x234] */ r_edx = R32((u32)(r_eax+0x234u));
    /* 0064c13b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x64c13du); call_ind(t); }
    /* 0064c13d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064c13e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064c141: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064c143: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064c146: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 0064c14c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64c14eu); call_ind(t); }
    /* 0064c14e: jmp 0x64c180 */ goto L_0064c180;
L_0064c150:; BB(0x0064c150);
    /* 0064c150: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064c153: mov dl, byte ptr [ecx + 0x1e0] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x1e0u))) & 0xffu);
    /* 0064c159: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064c15a: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0064c15f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064c161: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064c167: mov eax, dword ptr [edx + 0x238] */ r_eax = R32((u32)(r_edx+0x238u));
    /* 0064c16d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64c16fu); call_ind(t); }
    /* 0064c16f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064c170: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064c173: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064c175: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064c178: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 0064c17e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64c180u); call_ind(t); }
L_0064c180:; BB(0x0064c180);
    /* 0064c180: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0064c182: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0064c184: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064c186: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064c188: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064c18b: call 0x6023d0 */ r_esp -= 4; W32(r_esp, 0x64c190u); f_006023d0();
    /* 0064c190: mov esp, ebp */ r_esp = r_ebp;
    /* 0064c192: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064c193: ret  */ FN_RET(0x0064c0e0); r_esp += 4; return;
}

void f_0064c1a0(void) /* CommentButton::vfunc29 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064c1a0);
    /* 0064c1a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064c1a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0064c1a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064c1a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0064c1a7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064c1aa: mov cl, byte ptr [eax + 0x1e0] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x1e0u))) & 0xffu);
    /* 0064c1b0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064c1b1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064c1b4: mov eax, dword ptr [edx + 0x1dc] */ r_eax = R32((u32)(r_edx+0x1dcu));
    /* 0064c1ba: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0064c1bd: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0064c1c0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064c1c1: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 0064c1c6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064c1c8: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0064c1ce: mov eax, dword ptr [edx + 0x1d8] */ r_eax = R32((u32)(r_edx+0x1d8u));
    /* 0064c1d4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64c1d6u); call_ind(t); }
    /* 0064c1d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064c1d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064c1da: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064c1dc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064c1df: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 0064c1e2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64c1e4u); call_ind(t); }
    /* 0064c1e4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064c1e7: mov dl, byte ptr [ecx + 0x1e0] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x1e0u))) & 0xffu);
    /* 0064c1ed: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064c1ee: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064c1f1: mov ecx, dword ptr [eax + 0x1dc] */ r_ecx = R32((u32)(r_eax+0x1dcu));
    /* 0064c1f7: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0064c1fa: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0064c1fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064c1fe: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0064c204: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064c206: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0064c20c: mov eax, dword ptr [edx + 0x1dc] */ r_eax = R32((u32)(r_edx+0x1dcu));
    /* 0064c212: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64c214u); call_ind(t); }
    /* 0064c214: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064c215: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064c218: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064c21a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064c21d: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 0064c220: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64c222u); call_ind(t); }
    /* 0064c222: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064c225: call 0x602500 */ r_esp -= 4; W32(r_esp, 0x64c22au); f_00602500();
    /* 0064c22a: mov esp, ebp */ r_esp = r_ebp;
    /* 0064c22c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064c22d: ret  */ FN_RET(0x0064c1a0); r_esp += 4; return;
}

void f_0064c230(void) /* CommentButton::vfunc28 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064c230);
    /* 0064c230: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064c231: mov ebp, esp */ r_ebp = r_esp;
    /* 0064c233: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064c234: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0064c237: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064c23a: call 0x602550 */ r_esp -= 4; W32(r_esp, 0x64c23fu); f_00602550();
    /* 0064c23f: mov esp, ebp */ r_esp = r_ebp;
    /* 0064c241: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064c242: ret  */ FN_RET(0x0064c230); r_esp += 4; return;
}

void f_0064c250(void) /* CommentButton::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064c250);
    /* 0064c250: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064c251: mov ebp, esp */ r_ebp = r_esp;
    /* 0064c253: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064c254: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0064c257: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0064c25a: mov byte ptr [eax + 4], 1 */ W8((u32)(r_eax+0x4u), 0x1u);
    /* 0064c25e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064c261: mov byte ptr [ecx + 8], 1 */ W8((u32)(r_ecx+0x8u), 0x1u);
    /* 0064c265: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064c268: mov byte ptr [edx + 9], 0 */ W8((u32)(r_edx+0x9u), 0x0u);
    /* 0064c26c: mov esp, ebp */ r_esp = r_ebp;
    /* 0064c26e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064c26f: ret 4 */ FN_RET(0x0064c250); r_esp += 8; return;
}

void f_0064c280(void) /* CommentButton::vfunc4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064c280);
    /* 0064c280: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064c281: mov ebp, esp */ r_ebp = r_esp;
    /* 0064c283: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064c284: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0064c287: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0064c28a: mov byte ptr [eax + 4], 1 */ W8((u32)(r_eax+0x4u), 0x1u);
    /* 0064c28e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0064c291: mov byte ptr [ecx + 0x14], 0x72 */ W8((u32)(r_ecx+0x14u), 0x72u);
    /* 0064c295: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064c298: mov al, byte ptr [edx + 0x1e0] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x1e0u))) & 0xffu);
    /* 0064c29e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064c29f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064c2a2: mov ecx, dword ptr [ecx + 0x1dc] */ r_ecx = R32((u32)(r_ecx+0x1dcu));
    /* 0064c2a8: call 0x648640 */ r_esp -= 4; W32(r_esp, 0x64c2adu); f_00648640();
    /* 0064c2ad: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0064c2b0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064c2b1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064c2b4: call 0x5f4ed0 */ r_esp -= 4; W32(r_esp, 0x64c2b9u); f_005f4ed0();
    /* 0064c2b9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064c2bc: mov byte ptr [eax + 8], 0 */ W8((u32)(r_eax+0x8u), 0x0u);
    /* 0064c2c0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064c2c3: mov byte ptr [ecx + 9], 0 */ W8((u32)(r_ecx+0x9u), 0x0u);
    /* 0064c2c7: mov esp, ebp */ r_esp = r_ebp;
    /* 0064c2c9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064c2ca: ret 4 */ FN_RET(0x0064c280); r_esp += 8; return;
}

void f_0064c2d0(void) /* CommentButton::vfunc48 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064c2d0);
    /* 0064c2d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064c2d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0064c2d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064c2d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0064c2d7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064c2da: mov cl, byte ptr [eax + 0x1e0] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x1e0u))) & 0xffu);
    /* 0064c2e0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064c2e1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064c2e4: mov ecx, dword ptr [edx + 0x1dc] */ r_ecx = R32((u32)(r_edx+0x1dcu));
    /* 0064c2ea: call 0x648640 */ r_esp -= 4; W32(r_esp, 0x64c2efu); f_00648640();
    /* 0064c2ef: mov esp, ebp */ r_esp = r_ebp;
    /* 0064c2f1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064c2f2: ret  */ FN_RET(0x0064c2d0); r_esp += 4; return;
}

