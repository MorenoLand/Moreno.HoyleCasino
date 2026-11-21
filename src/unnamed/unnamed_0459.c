#include "protos.h"

void f_00459030(void) /* sub_459030 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00459030);
    /* 00459030: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00459031: mov ebp, esp */ r_ebp = r_esp;
    /* 00459033: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00459036: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00459039: mov dword ptr [ebp - 0x2c], 0xffffffd3 */ W32((u32)(r_ebp+0xffffffd4u), 0xffffffd3u);
    /* 00459040: mov dword ptr [ebp - 0x28], 0xffffffc9 */ W32((u32)(r_ebp+0xffffffd8u), 0xffffffc9u);
    /* 00459047: mov dword ptr [ebp - 0x24], 0xffffffc7 */ W32((u32)(r_ebp+0xffffffdcu), 0xffffffc7u);
    /* 0045904e: mov dword ptr [ebp - 0x20], 0xffffffd3 */ W32((u32)(r_ebp+0xffffffe0u), 0xffffffd3u);
    /* 00459055: mov dword ptr [ebp - 0x1c], 0xffffffc9 */ W32((u32)(r_ebp+0xffffffe4u), 0xffffffc9u);
    /* 0045905c: mov dword ptr [ebp - 0x14], 0x148 */ W32((u32)(r_ebp+0xffffffecu), 0x148u);
    /* 00459063: mov dword ptr [ebp - 0x10], 0x9d */ W32((u32)(r_ebp+0xfffffff0u), 0x9du);
    /* 0045906a: mov dword ptr [ebp - 0xc], 0x1de */ W32((u32)(r_ebp+0xfffffff4u), 0x1deu);
    /* 00459071: mov dword ptr [ebp - 8], 6 */ W32((u32)(r_ebp+0xfffffff8u), 0x6u);
    /* 00459078: mov dword ptr [ebp - 4], 0xf0 */ W32((u32)(r_ebp+0xfffffffcu), 0xf0u);
    /* 0045907f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00459082: imul eax, eax, 0x11 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x11u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00459085: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00459088: add eax, dword ptr [ebp + ecx*4 - 0x2c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+r_ecx*4+0xffffffd4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045908c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0045908f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00459092: mov esp, ebp */ r_esp = r_ebp;
    /* 00459094: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00459095: ret 8 */ FN_RET(0x00459030); r_esp += 12; return;
}

void f_004590a0(void) /* sub_4590A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004590a0);
    /* 004590a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004590a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004590a3: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004590a6: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 004590a9: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 004590b0: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 004590b7: mov dword ptr [ebp - 0x24], 0xfffffff1 */ W32((u32)(r_ebp+0xffffffdcu), 0xfffffff1u);
    /* 004590be: mov dword ptr [ebp - 0x20], 0xfffffff1 */ W32((u32)(r_ebp+0xffffffe0u), 0xfffffff1u);
    /* 004590c5: mov dword ptr [ebp - 0x1c], 0xffffffba */ W32((u32)(r_ebp+0xffffffe4u), 0xffffffbau);
    /* 004590cc: mov dword ptr [ebp - 0x18], 0x10e */ W32((u32)(r_ebp+0xffffffe8u), 0x10eu);
    /* 004590d3: mov dword ptr [ebp - 0x14], 0x10e */ W32((u32)(r_ebp+0xffffffecu), 0x10eu);
    /* 004590da: mov dword ptr [ebp - 0x10], 0x55 */ W32((u32)(r_ebp+0xfffffff0u), 0x55u);
    /* 004590e1: mov dword ptr [ebp - 0xc], 0x55 */ W32((u32)(r_ebp+0xfffffff4u), 0x55u);
    /* 004590e8: mov dword ptr [ebp - 8], 0x55 */ W32((u32)(r_ebp+0xfffffff8u), 0x55u);
    /* 004590ef: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004590f2: mov ecx, dword ptr [ebp + eax*4 - 0x2c] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffd4u));
    /* 004590f6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004590f9: movzx edx, byte ptr [ebp + 0x10] */ r_edx = (u32)R8((u32)(r_ebp+0x10u));
    /* 004590fd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004590ff: je 0x459125 */ if (fZ) goto L_00459125;
L_00459101:; BB(0x00459101);
    /* 00459101: mov ax, word ptr [ebp + 0x14] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0x14u))) & 0xffffu);
    /* 00459105: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00459106: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00459109: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045910a: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 00459110: call 0x461220 */ r_esp -= 4; W32(r_esp, 0x459115u); f_00461220();
    /* 00459115: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00459118: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045911a: je 0x459125 */ if (fZ) goto L_00459125;
L_0045911c:; BB(0x0045911c);
    /* 0045911c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045911f: add eax, 0x19 */ {  u32 a = r_eax; u32 b = 0x19u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00459122: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00459125:; BB(0x00459125);
    /* 00459125: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00459128: mov esp, ebp */ r_esp = r_ebp;
    /* 0045912a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045912b: ret 0x10 */ FN_RET(0x004590a0); r_esp += 20; return;
}

void f_00459130(void) /* sub_459130 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00459130);
    /* 00459130: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00459131: mov ebp, esp */ r_ebp = r_esp;
    /* 00459133: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00459135: push 0x69f080 */ { u32 v = 0x69f080u; r_esp -= 4; W32(r_esp, v); }
    /* 0045913a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00459140: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00459141: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00459144: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00459145: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0045914a: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0045914c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045914d: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00459150: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00459156: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 00459159: cmp dword ptr [ebp + 8], 3 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045915d: je 0x459165 */ if (fZ) goto L_00459165;
L_0045915f:; BB(0x0045915f);
    /* 0045915f: cmp dword ptr [ebp + 8], 2 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00459163: jne 0x4591c9 */ if (!fZ) goto L_004591c9;
L_00459165:; BB(0x00459165);
    /* 00459165: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00459168: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0045916b: mov edx, dword ptr [ecx + eax*4 + 4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 0045916f: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00459172: call 0x5eb470 */ r_esp -= 4; W32(r_esp, 0x459177u); f_005eb470();
    /* 00459177: mov esi, eax */ r_esi = r_eax;
    /* 00459179: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045917b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045917e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045917f: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00459182: call 0x459030 */ r_esp -= 4; W32(r_esp, 0x459187u); f_00459030();
    /* 00459187: lea ecx, [esi + eax + 0xa] */ r_ecx = (u32)(r_esi+r_eax+0xau);
    /* 0045918b: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0045918e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00459191: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00459194: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 00459198: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0045919b: call 0x5eb4b0 */ r_esp -= 4; W32(r_esp, 0x4591a0u); f_005eb4b0();
    /* 004591a0: mov esi, eax */ r_esi = r_eax;
    /* 004591a2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004591a4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004591a6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004591a8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004591ab: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004591ac: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004591af: call 0x4590a0 */ r_esp -= 4; W32(r_esp, 0x4591b4u); f_004590a0();
    /* 004591b4: lea eax, [esi + eax + 0x1e] */ r_eax = (u32)(r_esi+r_eax+0x1eu);
    /* 004591b8: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004591bb: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004591be: add ecx, 0x50 */ {  u32 a = r_ecx; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004591c1: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004591c4: jmp 0x45928f */ goto L_0045928f;
L_004591c9:; BB(0x004591c9);
    /* 004591c9: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004591cd: je 0x459230 */ if (fZ) goto L_00459230;
L_004591cf:; BB(0x004591cf);
    /* 004591cf: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004591d2: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 004591d5: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 004591d9: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 004591dc: call 0x5eb470 */ r_esp -= 4; W32(r_esp, 0x4591e1u); f_005eb470();
    /* 004591e1: mov esi, eax */ r_esi = r_eax;
    /* 004591e3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004591e5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004591e8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004591e9: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004591ec: call 0x459030 */ r_esp -= 4; W32(r_esp, 0x4591f1u); f_00459030();
    /* 004591f1: lea eax, [esi + eax + 8] */ r_eax = (u32)(r_esi+r_eax+0x8u);
    /* 004591f5: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004591f8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004591fb: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004591fe: mov eax, dword ptr [edx + ecx*4 + 4] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 00459202: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00459205: call 0x5eb4b0 */ r_esp -= 4; W32(r_esp, 0x45920au); f_005eb4b0();
    /* 0045920a: mov esi, eax */ r_esi = r_eax;
    /* 0045920c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045920e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00459210: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00459212: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00459215: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00459216: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00459219: call 0x4590a0 */ r_esp -= 4; W32(r_esp, 0x45921eu); f_004590a0();
    /* 0045921e: lea edx, [esi + eax + 0x23] */ r_edx = (u32)(r_esi+r_eax+0x23u);
    /* 00459222: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00459225: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00459228: add eax, 0x52 */ {  u32 a = r_eax; u32 b = 0x52u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045922b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0045922e: jmp 0x45928f */ goto L_0045928f;
L_00459230:; BB(0x00459230);
    /* 00459230: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00459233: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00459236: mov eax, dword ptr [edx + ecx*4 + 4] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 0045923a: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0045923d: call 0x5eb470 */ r_esp -= 4; W32(r_esp, 0x459242u); f_005eb470();
    /* 00459242: mov esi, eax */ r_esi = r_eax;
    /* 00459244: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00459246: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00459249: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045924a: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0045924d: call 0x459030 */ r_esp -= 4; W32(r_esp, 0x459252u); f_00459030();
    /* 00459252: lea edx, [esi + eax + 7] */ r_edx = (u32)(r_esi+r_eax+0x7u);
    /* 00459256: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00459259: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045925c: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0045925f: mov edx, dword ptr [ecx + eax*4 + 4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 00459263: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00459266: call 0x5eb4b0 */ r_esp -= 4; W32(r_esp, 0x45926bu); f_005eb4b0();
    /* 0045926b: mov esi, eax */ r_esi = r_eax;
    /* 0045926d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045926f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00459271: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00459273: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00459276: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00459277: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0045927a: call 0x4590a0 */ r_esp -= 4; W32(r_esp, 0x45927fu); f_004590a0();
    /* 0045927f: lea ecx, [esi + eax + 0x1f] */ r_ecx = (u32)(r_esi+r_eax+0x1fu);
    /* 00459283: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00459286: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00459289: add edx, 0x50 */ {  u32 a = r_edx; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045928c: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
L_0045928f:; BB(0x0045928f);
    /* 0045928f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00459292: add eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00459295: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00459298: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045929c: jne 0x4592af */ if (!fZ) goto L_004592af;
L_0045929e:; BB(0x0045929e);
    /* 0045929e: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 004592a4: movzx edx, byte ptr [ecx + 0x115] */ r_edx = (u32)R8((u32)(r_ecx+0x115u));
    /* 004592ab: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004592ad: jne 0x4592e0 */ if (!fZ) goto L_004592e0;
L_004592af:; BB(0x004592af);
    /* 004592af: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004592b3: jge 0x45948f */ if ((fS==fO)) goto L_0045948f;
L_004592b9:; BB(0x004592b9);
    /* 004592b9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004592bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004592bd: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4592c2u); f_005dcb00();
    /* 004592c2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004592c5: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 004592c8: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004592cb: mov dl, byte ptr [ecx + 0x4a2] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4a2u))) & 0xffu);
    /* 004592d1: mov byte ptr [ebp - 0x41], dl */ W8((u32)(r_ebp+0xffffffbfu), (u8)r_edx);
    /* 004592d4: movzx eax, byte ptr [ebp - 0x41] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffbfu));
    /* 004592d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004592da: je 0x45948f */ if (fZ) goto L_0045948f;
L_004592e0:; BB(0x004592e0);
    /* 004592e0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004592e3: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004592e6: cmp dword ptr [edx + ecx*4 + 0x54], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x54u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004592eb: jne 0x4593b5 */ if (!fZ) goto L_004593b5;
L_004592f1:; BB(0x004592f1);
    /* 004592f1: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 004592f6: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4592fbu); f_00686d82();
    /* 004592fb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004592fe: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00459301: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00459308: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045930c: je 0x45931b */ if (fZ) goto L_0045931b;
L_0045930e:; BB(0x0045930e);
    /* 0045930e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00459311: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x459316u); f_005eaaf0();
    /* 00459316: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00459319: jmp 0x459322 */ goto L_00459322;
L_0045931b:; BB(0x0045931b);
    /* 0045931b: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_00459322:; BB(0x00459322);
    /* 00459322: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00459325: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00459328: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0045932f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00459332: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00459335: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00459338: mov dword ptr [edx + ecx*4 + 0x54], eax */ W32((u32)(r_edx+r_ecx*4+0x54u), r_eax);
    /* 0045933c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045933e: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 00459340: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00459343: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00459344: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00459347: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00459348: push 0x13b2 */ { u32 v = 0x13b2u; r_esp -= 4; W32(r_esp, v); }
    /* 0045934d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00459350: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00459353: mov ecx, dword ptr [ecx + eax*4 + 0x54] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x54u));
    /* 00459357: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x45935cu); f_005eae80();
    /* 0045935c: mov edx, dword ptr [0x790738] */ r_edx = R32((u32)(0x790738u));
    /* 00459362: add edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00459365: mov al, byte ptr [edx + 0xef] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0xefu))) & 0xffu);
    /* 0045936b: mov byte ptr [ebp - 0x42], al */ W8((u32)(r_ebp+0xffffffbeu), (u8)r_eax);
    /* 0045936e: movzx ecx, byte ptr [ebp - 0x42] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffbeu));
    /* 00459372: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 00459374: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 00459376: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00459379: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045937a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045937d: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00459380: mov ecx, dword ptr [eax + edx*4 + 0x54] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x54u));
    /* 00459384: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00459387: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0045938a: mov edx, dword ptr [eax + edx*4 + 0x54] */ r_edx = R32((u32)(r_eax+r_edx*4+0x54u));
    /* 0045938e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00459390: mov ecx, edx */ r_ecx = r_edx;
    /* 00459392: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 00459398: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x45939au); call_ind(t); }
    /* 0045939a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045939d: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004593a0: mov edx, dword ptr [ecx + eax*4 + 0x54] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x54u));
    /* 004593a4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004593a7: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004593aa: mov ecx, dword ptr [ecx + eax*4 + 0x54] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x54u));
    /* 004593ae: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004593b0: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 004593b3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4593b5u); call_ind(t); }
L_004593b5:; BB(0x004593b5);
    /* 004593b5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004593b8: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004593bb: cmp dword ptr [edx + ecx*4 + 0x68], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x68u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004593c0: jne 0x45948a */ if (!fZ) goto L_0045948a;
L_004593c6:; BB(0x004593c6);
    /* 004593c6: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 004593cb: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4593d0u); f_00686d82();
    /* 004593d0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004593d3: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 004593d6: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004593dd: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004593e1: je 0x4593f0 */ if (fZ) goto L_004593f0;
L_004593e3:; BB(0x004593e3);
    /* 004593e3: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004593e6: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x4593ebu); f_005eaaf0();
    /* 004593eb: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 004593ee: jmp 0x4593f7 */ goto L_004593f7;
L_004593f0:; BB(0x004593f0);
    /* 004593f0: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_004593f7:; BB(0x004593f7);
    /* 004593f7: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 004593fa: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004593fd: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00459404: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00459407: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0045940a: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0045940d: mov dword ptr [edx + ecx*4 + 0x68], eax */ W32((u32)(r_edx+r_ecx*4+0x68u), r_eax);
    /* 00459411: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00459413: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 00459415: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00459418: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00459419: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045941c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045941d: push 0x13b2 */ { u32 v = 0x13b2u; r_esp -= 4; W32(r_esp, v); }
    /* 00459422: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00459425: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00459428: mov ecx, dword ptr [ecx + eax*4 + 0x68] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x68u));
    /* 0045942c: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x459431u); f_005eae80();
    /* 00459431: mov edx, dword ptr [0x790738] */ r_edx = R32((u32)(0x790738u));
    /* 00459437: add edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045943a: mov al, byte ptr [edx + 0xea] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0xeau))) & 0xffu);
    /* 00459440: mov byte ptr [ebp - 0x43], al */ W8((u32)(r_ebp+0xffffffbdu), (u8)r_eax);
    /* 00459443: movzx ecx, byte ptr [ebp - 0x43] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffbdu));
    /* 00459447: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 00459449: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 0045944b: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045944e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045944f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00459452: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00459455: mov ecx, dword ptr [eax + edx*4 + 0x68] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x68u));
    /* 00459459: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045945c: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0045945f: mov edx, dword ptr [eax + edx*4 + 0x68] */ r_edx = R32((u32)(r_eax+r_edx*4+0x68u));
    /* 00459463: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00459465: mov ecx, edx */ r_ecx = r_edx;
    /* 00459467: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 0045946d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x45946fu); call_ind(t); }
    /* 0045946f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00459472: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00459475: mov edx, dword ptr [ecx + eax*4 + 0x68] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x68u));
    /* 00459479: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045947c: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0045947f: mov ecx, dword ptr [ecx + eax*4 + 0x68] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x68u));
    /* 00459483: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00459485: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00459488: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45948au); call_ind(t); }
L_0045948a:; BB(0x0045948a);
    /* 0045948a: jmp 0x459561 */ goto L_00459561;
L_0045948f:; BB(0x0045948f);
    /* 0045948f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00459492: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00459495: cmp dword ptr [edx + ecx*4 + 0x54], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x54u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045949a: je 0x4594f8 */ if (fZ) goto L_004594f8;
L_0045949c:; BB(0x0045949c);
    /* 0045949c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045949f: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004594a2: mov edx, dword ptr [ecx + eax*4 + 0x54] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x54u));
    /* 004594a6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004594a9: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004594ac: mov ecx, dword ptr [ecx + eax*4 + 0x54] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x54u));
    /* 004594b0: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004594b2: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 004594b5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4594b7u); call_ind(t); }
    /* 004594b7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004594ba: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004594bd: mov eax, dword ptr [edx + ecx*4 + 0x54] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x54u));
    /* 004594c1: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 004594c4: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004594c7: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 004594ca: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004594ce: je 0x4594e3 */ if (fZ) goto L_004594e3;
L_004594d0:; BB(0x004594d0);
    /* 004594d0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004594d2: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004594d5: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004594d7: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004594da: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004594dc: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4594deu); call_ind(t); }
    /* 004594de: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 004594e1: jmp 0x4594ea */ goto L_004594ea;
L_004594e3:; BB(0x004594e3);
    /* 004594e3: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_004594ea:; BB(0x004594ea);
    /* 004594ea: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004594ed: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004594f0: mov dword ptr [ecx + eax*4 + 0x54], 0 */ W32((u32)(r_ecx+r_eax*4+0x54u), 0x0u);
L_004594f8:; BB(0x004594f8);
    /* 004594f8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004594fb: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 004594fe: cmp dword ptr [eax + edx*4 + 0x68], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x68u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00459503: je 0x459561 */ if (fZ) goto L_00459561;
L_00459505:; BB(0x00459505);
    /* 00459505: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00459508: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0045950b: mov eax, dword ptr [edx + ecx*4 + 0x68] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x68u));
    /* 0045950f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00459512: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00459515: mov ecx, dword ptr [edx + ecx*4 + 0x68] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x68u));
    /* 00459519: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0045951b: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 0045951e: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x459520u); call_ind(t); }
    /* 00459520: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00459523: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00459526: mov edx, dword ptr [ecx + eax*4 + 0x68] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x68u));
    /* 0045952a: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 0045952d: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00459530: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00459533: cmp dword ptr [ebp - 0x38], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00459537: je 0x45954c */ if (fZ) goto L_0045954c;
L_00459539:; BB(0x00459539);
    /* 00459539: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045953b: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0045953e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00459540: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00459543: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00459545: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x459547u); call_ind(t); }
    /* 00459547: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 0045954a: jmp 0x459553 */ goto L_00459553;
L_0045954c:; BB(0x0045954c);
    /* 0045954c: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
L_00459553:; BB(0x00459553);
    /* 00459553: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00459556: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00459559: mov dword ptr [edx + ecx*4 + 0x68], 0 */ W32((u32)(r_edx+r_ecx*4+0x68u), 0x0u);
L_00459561:; BB(0x00459561);
    /* 00459561: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00459564: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0045956b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045956c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045956d: mov esp, ebp */ r_esp = r_ebp;
    /* 0045956f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00459570: ret 4 */ FN_RET(0x00459130); r_esp += 8; return;
}

void f_00459580(void) /* sub_459580 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00459580);
    /* 00459580: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00459581: mov ebp, esp */ r_ebp = r_esp;
    /* 00459583: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00459586: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00459589: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00459590: jmp 0x45959b */ goto L_0045959b;
L_00459592:; BB(0x00459592);
    /* 00459592: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00459595: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00459598: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0045959b:; BB(0x0045959b);
    /* 0045959b: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045959f: jge 0x4595e4 */ if ((fS==fO)) goto L_004595e4;
L_004595a1:; BB(0x004595a1);
    /* 004595a1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004595a4: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004595a7: mov eax, dword ptr [edx + ecx*4 + 0x7c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x7cu));
    /* 004595ab: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 004595ae: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004595b1: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004595b4: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004595b8: je 0x4595cd */ if (fZ) goto L_004595cd;
L_004595ba:; BB(0x004595ba);
    /* 004595ba: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004595bc: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004595bf: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004595c1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004595c4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004595c6: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4595c8u); call_ind(t); }
    /* 004595c8: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004595cb: jmp 0x4595d4 */ goto L_004595d4;
L_004595cd:; BB(0x004595cd);
    /* 004595cd: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_004595d4:; BB(0x004595d4);
    /* 004595d4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004595d7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004595da: mov dword ptr [ecx + eax*4 + 0x7c], 0 */ W32((u32)(r_ecx+r_eax*4+0x7cu), 0x0u);
    /* 004595e2: jmp 0x459592 */ goto L_00459592;
L_004595e4:; BB(0x004595e4);
    /* 004595e4: mov esp, ebp */ r_esp = r_ebp;
    /* 004595e6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004595e7: ret  */ FN_RET(0x00459580); r_esp += 4; return;
}

void f_004595f0(void) /* sub_4595F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004595f0);
    /* 004595f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004595f1: mov ebp, esp */ r_ebp = r_esp;
    /* 004595f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004595f5: push 0x69f0a6 */ { u32 v = 0x69f0a6u; r_esp -= 4; W32(r_esp, v); }
    /* 004595fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00459600: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00459601: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00459604: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00459609: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0045960b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045960c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0045960f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00459615: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00459618: mov eax, dword ptr [0x790738] */ r_eax = R32((u32)(0x790738u));
    /* 0045961d: mov ecx, dword ptr [eax + 0x104] */ r_ecx = R32((u32)(r_eax+0x104u));
    /* 00459623: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00459626: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045962c: call 0x45f900 */ r_esp -= 4; W32(r_esp, 0x459631u); f_0045f900();
    /* 00459631: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00459634: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00459636: jne 0x4596d3 */ if (!fZ) goto L_004596d3;
L_0045963c:; BB(0x0045963c);
    /* 0045963c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045963f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00459640: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 00459646: call 0x461320 */ r_esp -= 4; W32(r_esp, 0x45964bu); f_00461320();
    /* 0045964b: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0045964e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00459650: jne 0x4596ad */ if (!fZ) goto L_004596ad;
L_00459652:; BB(0x00459652);
    /* 00459652: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00459654: push 0x6b97a8 */ { u32 v = 0x6b97a8u; r_esp -= 4; W32(r_esp, v); }
    /* 00459659: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x45965eu); f_00630f40();
    /* 0045965e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00459661: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00459662: push 0x6b978c */ { u32 v = 0x6b978cu; r_esp -= 4; W32(r_esp, v); }
    /* 00459667: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x45966cu); f_00630f40();
    /* 0045966c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045966f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00459670: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x459675u); f_0062ff10();
    /* 00459675: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00459678: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045967b: mov eax, dword ptr [0x790738] */ r_eax = R32((u32)(0x790738u));
    /* 00459680: mov word ptr [eax + edx*2 + 0xa2], 0 */ W16((u32)(r_eax+r_edx*2+0xa2u), 0x0u);
    /* 0045968a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045968d: mov edx, dword ptr [0x790738] */ r_edx = R32((u32)(0x790738u));
    /* 00459693: mov word ptr [edx + ecx*2 + 0xac], 0 */ W16((u32)(r_edx+r_ecx*2+0xacu), 0x0u);
    /* 0045969d: mov ecx, dword ptr [0x79073c] */ r_ecx = R32((u32)(0x79073cu));
    /* 004596a3: call 0x45b300 */ r_esp -= 4; W32(r_esp, 0x4596a8u); f_0045b300();
    /* 004596a8: jmp 0x459767 */ goto L_00459767;
L_004596ad:; BB(0x004596ad);
    /* 004596ad: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004596b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004596b1: mov ecx, dword ptr [0x79073c] */ r_ecx = R32((u32)(0x79073cu));
    /* 004596b7: call 0x45c0a0 */ r_esp -= 4; W32(r_esp, 0x4596bcu); f_0045c0a0();
    /* 004596bc: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004596bf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004596c1: je 0x4596ce */ if (fZ) goto L_004596ce;
L_004596c3:; BB(0x004596c3);
    /* 004596c3: mov ecx, dword ptr [0x79073c] */ r_ecx = R32((u32)(0x79073cu));
    /* 004596c9: call 0x45b300 */ r_esp -= 4; W32(r_esp, 0x4596ceu); f_0045b300();
L_004596ce:; BB(0x004596ce);
    /* 004596ce: jmp 0x459767 */ goto L_00459767;
L_004596d3:; BB(0x004596d3);
    /* 004596d3: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004596d6: cmp dword ptr [edx + 0x98], 0 */ {  u32 a = R32((u32)(r_edx+0x98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004596dd: jne 0x459759 */ if (!fZ) goto L_00459759;
L_004596df:; BB(0x004596df);
    /* 004596df: push 0x1bc */ { u32 v = 0x1bcu; r_esp -= 4; W32(r_esp, v); }
    /* 004596e4: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4596e9u); f_00686d82();
    /* 004596e9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004596ec: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004596ef: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004596f6: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004596fa: je 0x459709 */ if (fZ) goto L_00459709;
L_004596fc:; BB(0x004596fc);
    /* 004596fc: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004596ff: call 0x45ae90 */ r_esp -= 4; W32(r_esp, 0x459704u); f_0045ae90();
    /* 00459704: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00459707: jmp 0x459710 */ goto L_00459710;
L_00459709:; BB(0x00459709);
    /* 00459709: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_00459710:; BB(0x00459710);
    /* 00459710: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00459713: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00459716: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0045971d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00459720: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00459723: mov dword ptr [ecx + 0x98], edx */ W32((u32)(r_ecx+0x98u), r_edx);
    /* 00459729: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0045972c: mov ecx, dword ptr [eax + 0x98] */ r_ecx = R32((u32)(r_eax+0x98u));
    /* 00459732: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00459735: mov eax, dword ptr [edx + 0x98] */ r_eax = R32((u32)(r_edx+0x98u));
    /* 0045973b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0045973d: mov ecx, eax */ r_ecx = r_eax;
    /* 0045973f: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 00459742: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x459744u); call_ind(t); }
    /* 00459744: push 0xb9 */ { u32 v = 0xb9u; r_esp -= 4; W32(r_esp, v); }
    /* 00459749: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045974b: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0045974e: mov ecx, dword ptr [ecx + 0x98] */ r_ecx = R32((u32)(r_ecx+0x98u));
    /* 00459754: call 0x5f7340 */ r_esp -= 4; W32(r_esp, 0x459759u); f_005f7340();
L_00459759:; BB(0x00459759);
    /* 00459759: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0045975c: mov ecx, dword ptr [edx + 0x98] */ r_ecx = R32((u32)(r_edx+0x98u));
    /* 00459762: call 0x5f85d0 */ r_esp -= 4; W32(r_esp, 0x459767u); f_005f85d0();
L_00459767:; BB(0x00459767);
    /* 00459767: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045976a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00459771: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00459772: mov esp, ebp */ r_esp = r_ebp;
    /* 00459774: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00459775: ret  */ FN_RET(0x004595f0); r_esp += 4; return;
}

void f_00459780(void) /* sub_459780 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00459780);
    /* 00459780: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00459781: mov ebp, esp */ r_ebp = r_esp;
    /* 00459783: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00459784: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00459787: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045978a: cmp dword ptr [eax + 0x98], 0 */ {  u32 a = R32((u32)(r_eax+0x98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00459791: je 0x4597ae */ if (fZ) goto L_004597ae;
L_00459793:; BB(0x00459793);
    /* 00459793: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00459796: mov ecx, dword ptr [ecx + 0x98] */ r_ecx = R32((u32)(r_ecx+0x98u));
    /* 0045979c: call 0x5f8990 */ r_esp -= 4; W32(r_esp, 0x4597a1u); f_005f8990();
    /* 004597a1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004597a4: mov dword ptr [edx + 0x98], 0 */ W32((u32)(r_edx+0x98u), 0x0u);
L_004597ae:; BB(0x004597ae);
    /* 004597ae: mov esp, ebp */ r_esp = r_ebp;
    /* 004597b0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004597b1: ret  */ FN_RET(0x00459780); r_esp += 4; return;
}

void f_004597c0(void) /* sub_4597C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004597c0);
    /* 004597c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004597c1: mov ebp, esp */ r_ebp = r_esp;
    /* 004597c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004597c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004597c7: push 0xaf */ { u32 v = 0xafu; r_esp -= 4; W32(r_esp, v); }
    /* 004597cc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004597ce: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 004597d4: call 0x5db7d0 */ r_esp -= 4; W32(r_esp, 0x4597d9u); f_005db7d0();
    /* 004597d9: mov esp, ebp */ r_esp = r_ebp;
    /* 004597db: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004597dc: ret  */ FN_RET(0x004597c0); r_esp += 4; return;
}

void f_004597e0(void) /* sub_4597E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004597e0);
    /* 004597e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004597e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004597e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004597e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004597e7: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 004597ed: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x4597f2u); f_005da7b0();
    /* 004597f2: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004597f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004597f7: je 0x459818 */ if (fZ) goto L_00459818;
L_004597f9:; BB(0x004597f9);
    /* 004597f9: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 004597ff: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00459801: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 00459807: mov eax, dword ptr [edx + 0x2d4] */ r_eax = R32((u32)(r_edx+0x2d4u));
    /* 0045980d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45980fu); call_ind(t); }
    /* 0045980f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00459812: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00459814: jne 0x459818 */ if (!fZ) goto L_00459818;
L_00459816:; BB(0x00459816);
    /* 00459816: jmp 0x459855 */ goto L_00459855;
L_00459818:; BB(0x00459818);
    /* 00459818: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045981e: call 0x45f8b0 */ r_esp -= 4; W32(r_esp, 0x459823u); f_0045f8b0();
    /* 00459823: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00459826: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00459828: jne 0x459843 */ if (!fZ) goto L_00459843;
L_0045982a:; BB(0x0045982a);
    /* 0045982a: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00459830: call 0x5df650 */ r_esp -= 4; W32(r_esp, 0x459835u); f_005df650();
    /* 00459835: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00459836: mov ecx, dword ptr [0x79073c] */ r_ecx = R32((u32)(0x79073cu));
    /* 0045983c: call 0x45b260 */ r_esp -= 4; W32(r_esp, 0x459841u); f_0045b260();
    /* 00459841: jmp 0x459855 */ goto L_00459855;
L_00459843:; BB(0x00459843);
    /* 00459843: push 0xaa */ { u32 v = 0xaau; r_esp -= 4; W32(r_esp, v); }
    /* 00459848: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045984a: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 00459850: call 0x5db8c0 */ r_esp -= 4; W32(r_esp, 0x459855u); f_005db8c0();
L_00459855:; BB(0x00459855);
    /* 00459855: mov esp, ebp */ r_esp = r_ebp;
    /* 00459857: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00459858: ret  */ FN_RET(0x004597e0); r_esp += 4; return;
}

void f_00459c00(void) /* sub_459C00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00459c00);
    /* 00459c00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00459c01: mov ebp, esp */ r_ebp = r_esp;
    /* 00459c03: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00459c05: push 0x69f112 */ { u32 v = 0x69f112u; r_esp -= 4; W32(r_esp, v); }
    /* 00459c0a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00459c10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00459c11: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00459c14: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00459c19: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00459c1b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00459c1c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00459c1f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00459c25: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00459c28: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00459c2b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00459c2e: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 00459c31: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00459c38: jmp 0x459c43 */ goto L_00459c43;
L_00459c3a:; BB(0x00459c3a);
    /* 00459c3a: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00459c3d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00459c40: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_00459c43:; BB(0x00459c43);
    /* 00459c43: cmp dword ptr [ebp - 0x10], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00459c47: jge 0x459cba */ if ((fS==fO)) goto L_00459cba;
L_00459c49:; BB(0x00459c49);
    /* 00459c49: push 0x1a0 */ { u32 v = 0x1a0u; r_esp -= 4; W32(r_esp, v); }
    /* 00459c4e: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x459c53u); f_00686d82();
    /* 00459c53: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00459c56: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00459c59: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00459c60: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00459c64: je 0x459c7c */ if (fZ) goto L_00459c7c;
L_00459c66:; BB(0x00459c66);
    /* 00459c66: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00459c68: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00459c6b: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00459c6e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00459c6f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00459c72: call 0x459860 */ r_esp -= 4; W32(r_esp, 0x459c77u); f_00459860();
    /* 00459c77: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00459c7a: jmp 0x459c83 */ goto L_00459c83;
L_00459c7c:; BB(0x00459c7c);
    /* 00459c7c: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_00459c83:; BB(0x00459c83);
    /* 00459c83: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00459c86: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00459c89: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00459c90: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00459c93: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00459c96: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00459c99: mov dword ptr [ecx + eax*4 + 8], edx */ W32((u32)(r_ecx+r_eax*4+0x8u), r_edx);
    /* 00459c9d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00459ca0: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00459ca3: mov edx, dword ptr [ecx + eax*4 + 8] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 00459ca7: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00459caa: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00459cad: mov ecx, dword ptr [ecx + eax*4 + 8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 00459cb1: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00459cb3: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00459cb6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x459cb8u); call_ind(t); }
    /* 00459cb8: jmp 0x459c3a */ goto L_00459c3a;
L_00459cba:; BB(0x00459cba);
    /* 00459cba: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00459cbd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00459cc4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00459cc5: mov esp, ebp */ r_esp = r_ebp;
    /* 00459cc7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00459cc8: ret 4 */ FN_RET(0x00459c00); r_esp += 8; return;
}

void f_00459cd0(void) /* sub_459CD0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00459cd0);
    /* 00459cd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00459cd1: mov ebp, esp */ r_ebp = r_esp;
    /* 00459cd3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00459cd6: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00459cd9: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00459cdc: cmp dword ptr [eax + 4], 4 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00459ce0: je 0x459d2e */ if (fZ) goto L_00459d2e;
L_00459ce2:; BB(0x00459ce2);
    /* 00459ce2: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00459ce4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00459ce7: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00459cea: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00459ceb: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00459cf1: call 0x639110 */ r_esp -= 4; W32(r_esp, 0x459cf6u); f_00639110();
    /* 00459cf6: mov ecx, eax */ r_ecx = r_eax;
    /* 00459cf8: call 0x646380 */ r_esp -= 4; W32(r_esp, 0x459cfdu); f_00646380();
    /* 00459cfd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00459cff: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00459d01: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00459d04: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00459d07: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00459d08: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00459d0e: call 0x639110 */ r_esp -= 4; W32(r_esp, 0x459d13u); f_00639110();
    /* 00459d13: mov ecx, eax */ r_ecx = r_eax;
    /* 00459d15: call 0x6464d0 */ r_esp -= 4; W32(r_esp, 0x459d1au); f_006464d0();
    /* 00459d1a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00459d1c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00459d1f: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00459d22: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00459d23: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 00459d29: call 0x5d9180 */ r_esp -= 4; W32(r_esp, 0x459d2eu); f_005d9180();
L_00459d2e:; BB(0x00459d2e);
    /* 00459d2e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00459d35: jmp 0x459d40 */ goto L_00459d40;
L_00459d37:; BB(0x00459d37);
    /* 00459d37: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00459d3a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00459d3d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00459d40:; BB(0x00459d40);
    /* 00459d40: cmp dword ptr [ebp - 4], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00459d44: jge 0x459d65 */ if ((fS==fO)) goto L_00459d65;
L_00459d46:; BB(0x00459d46);
    /* 00459d46: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00459d49: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00459d4c: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 00459d50: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00459d53: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00459d56: mov edx, dword ptr [eax + edx*4 + 8] */ r_edx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 00459d5a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00459d5c: mov ecx, edx */ r_ecx = r_edx;
    /* 00459d5e: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 00459d61: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x459d63u); call_ind(t); }
    /* 00459d63: jmp 0x459d37 */ goto L_00459d37;
L_00459d65:; BB(0x00459d65);
    /* 00459d65: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00459d68: cmp dword ptr [eax + 4], 4 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00459d6c: je 0x459dd4 */ if (fZ) goto L_00459dd4;
L_00459d6e:; BB(0x00459d6e);
    /* 00459d6e: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 00459d74: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00459d77: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00459d7b: jne 0x459dd4 */ if (!fZ) goto L_00459dd4;
L_00459d7d:; BB(0x00459d7d);
    /* 00459d7d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00459d80: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00459d83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00459d84: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x459d89u); f_005dcb00();
    /* 00459d89: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00459d8c: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00459d8f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00459d92: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x459d97u); f_0063aac0();
    /* 00459d97: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00459d99: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00459d9c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00459d9e: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00459da2: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00459da5: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00459da8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00459daa: jne 0x459dd2 */ if (!fZ) goto L_00459dd2;
L_00459dac:; BB(0x00459dac);
    /* 00459dac: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00459daf: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00459db2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00459db3: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x459db8u); f_005dcb00();
    /* 00459db8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00459dbb: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00459dbe: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00459dc1: mov dl, byte ptr [ecx + 0x4a1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4a1u))) & 0xffu);
    /* 00459dc7: mov byte ptr [ebp - 0x11], dl */ W8((u32)(r_ebp+0xffffffefu), (u8)r_edx);
    /* 00459dca: movzx eax, byte ptr [ebp - 0x11] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffefu));
    /* 00459dce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00459dd0: je 0x459dd4 */ if (fZ) goto L_00459dd4;
L_00459dd2:; BB(0x00459dd2);
    /* 00459dd2: jmp 0x459e23 */ goto L_00459e23;
L_00459dd4:; BB(0x00459dd4);
    /* 00459dd4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00459ddb: jmp 0x459de6 */ goto L_00459de6;
L_00459ddd:; BB(0x00459ddd);
    /* 00459ddd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00459de0: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00459de3: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00459de6:; BB(0x00459de6);
    /* 00459de6: cmp dword ptr [ebp - 4], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00459dea: jge 0x459e23 */ if ((fS==fO)) goto L_00459e23;
L_00459dec:; BB(0x00459dec);
    /* 00459dec: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00459def: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00459df0: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00459df3: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00459df6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00459df7: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 00459dfd: call 0x4604d0 */ r_esp -= 4; W32(r_esp, 0x459e02u); f_004604d0();
    /* 00459e02: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 00459e05: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00459e07: jne 0x459e0b */ if (!fZ) goto L_00459e0b;
L_00459e09:; BB(0x00459e09);
    /* 00459e09: jmp 0x459ddd */ goto L_00459ddd;
L_00459e0b:; BB(0x00459e0b);
    /* 00459e0b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00459e0e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00459e0f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00459e12: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00459e15: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00459e16: mov ecx, dword ptr [0x790740] */ r_ecx = R32((u32)(0x790740u));
    /* 00459e1c: call 0x458be0 */ r_esp -= 4; W32(r_esp, 0x459e21u); f_00458be0();
    /* 00459e21: jmp 0x459ddd */ goto L_00459ddd;
L_00459e23:; BB(0x00459e23);
    /* 00459e23: mov esp, ebp */ r_esp = r_ebp;
    /* 00459e25: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00459e26: ret  */ FN_RET(0x00459cd0); r_esp += 4; return;
}

void f_00459e30(void) /* sub_459E30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00459e30);
    /* 00459e30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00459e31: mov ebp, esp */ r_ebp = r_esp;
    /* 00459e33: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00459e35: push 0x69f143 */ { u32 v = 0x69f143u; r_esp -= 4; W32(r_esp, v); }
    /* 00459e3a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00459e40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00459e41: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00459e44: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00459e49: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00459e4b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00459e4c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00459e4f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00459e55: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00459e58: mov eax, dword ptr [0x790740] */ r_eax = R32((u32)(0x790740u));
    /* 00459e5d: cmp dword ptr [eax + 0x44], 0 */ {  u32 a = R32((u32)(r_eax+0x44u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00459e61: je 0x459efe */ if (fZ) goto L_00459efe;
L_00459e67:; BB(0x00459e67);
    /* 00459e67: push 0x7e7 */ { u32 v = 0x7e7u; r_esp -= 4; W32(r_esp, v); }
    /* 00459e6c: mov ecx, dword ptr [0x790740] */ r_ecx = R32((u32)(0x790740u));
    /* 00459e72: mov ecx, dword ptr [ecx + 0x44] */ r_ecx = R32((u32)(r_ecx+0x44u));
    /* 00459e75: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x459e7au); f_005eaf00();
    /* 00459e7a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00459e7c: mov edx, dword ptr [0x790740] */ r_edx = R32((u32)(0x790740u));
    /* 00459e82: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00459e85: mov ecx, dword ptr [0x790740] */ r_ecx = R32((u32)(0x790740u));
    /* 00459e8b: mov ecx, dword ptr [ecx + 0x44] */ r_ecx = R32((u32)(r_ecx+0x44u));
    /* 00459e8e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00459e90: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00459e96: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x459e98u); call_ind(t); }
    /* 00459e98: mov ecx, dword ptr [0x790740] */ r_ecx = R32((u32)(0x790740u));
    /* 00459e9e: mov edx, dword ptr [ecx + 0x44] */ r_edx = R32((u32)(r_ecx+0x44u));
    /* 00459ea1: mov eax, dword ptr [0x790740] */ r_eax = R32((u32)(0x790740u));
    /* 00459ea6: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 00459ea9: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00459eab: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00459eae: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x459eb0u); call_ind(t); }
    /* 00459eb0: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00459eb2: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x459eb7u); f_00686d82();
    /* 00459eb7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00459eba: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00459ebd: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00459ec4: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00459ec8: je 0x459ed9 */ if (fZ) goto L_00459ed9;
L_00459eca:; BB(0x00459eca);
    /* 00459eca: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00459ecc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00459ecf: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x459ed4u); f_006010a0();
    /* 00459ed4: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00459ed7: jmp 0x459ee0 */ goto L_00459ee0;
L_00459ed9:; BB(0x00459ed9);
    /* 00459ed9: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00459ee0:; BB(0x00459ee0);
    /* 00459ee0: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00459ee3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00459ee6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00459eed: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00459ef0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00459ef1: mov eax, dword ptr [0x790740] */ r_eax = R32((u32)(0x790740u));
    /* 00459ef6: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 00459ef9: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x459efeu); f_005f5d50();
L_00459efe:; BB(0x00459efe);
    /* 00459efe: mov ecx, dword ptr [0x790740] */ r_ecx = R32((u32)(0x790740u));
    /* 00459f04: cmp dword ptr [ecx + 0x40], 0 */ {  u32 a = R32((u32)(r_ecx+0x40u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00459f08: je 0x459fa9 */ if (fZ) goto L_00459fa9;
L_00459f0e:; BB(0x00459f0e);
    /* 00459f0e: push 0x7e6 */ { u32 v = 0x7e6u; r_esp -= 4; W32(r_esp, v); }
    /* 00459f13: mov edx, dword ptr [0x790740] */ r_edx = R32((u32)(0x790740u));
    /* 00459f19: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 00459f1c: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x459f21u); f_005eaf00();
    /* 00459f21: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00459f23: mov eax, dword ptr [0x790740] */ r_eax = R32((u32)(0x790740u));
    /* 00459f28: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 00459f2b: mov edx, dword ptr [0x790740] */ r_edx = R32((u32)(0x790740u));
    /* 00459f31: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00459f34: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00459f36: mov ecx, eax */ r_ecx = r_eax;
    /* 00459f38: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00459f3e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x459f40u); call_ind(t); }
    /* 00459f40: mov ecx, dword ptr [0x790740] */ r_ecx = R32((u32)(0x790740u));
    /* 00459f46: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 00459f49: mov eax, dword ptr [0x790740] */ r_eax = R32((u32)(0x790740u));
    /* 00459f4e: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 00459f51: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00459f53: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00459f56: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x459f58u); call_ind(t); }
    /* 00459f58: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00459f5a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x459f5fu); f_00686d82();
    /* 00459f5f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00459f62: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00459f65: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00459f6c: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00459f70: je 0x459f83 */ if (fZ) goto L_00459f83;
L_00459f72:; BB(0x00459f72);
    /* 00459f72: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00459f75: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00459f76: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00459f79: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x459f7eu); f_006010a0();
    /* 00459f7e: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00459f81: jmp 0x459f8a */ goto L_00459f8a;
L_00459f83:; BB(0x00459f83);
    /* 00459f83: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00459f8a:; BB(0x00459f8a);
    /* 00459f8a: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00459f8d: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00459f90: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00459f97: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00459f9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00459f9b: mov ecx, dword ptr [0x790740] */ r_ecx = R32((u32)(0x790740u));
    /* 00459fa1: mov ecx, dword ptr [ecx + 0x40] */ r_ecx = R32((u32)(r_ecx+0x40u));
    /* 00459fa4: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x459fa9u); f_005f5d50();
L_00459fa9:; BB(0x00459fa9);
    /* 00459fa9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00459fac: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00459fb3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00459fb4: mov esp, ebp */ r_esp = r_ebp;
    /* 00459fb6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00459fb7: ret 4 */ FN_RET(0x00459e30); r_esp += 8; return;
}

void f_00459fc0(void) /* sub_459FC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00459fc0);
    /* 00459fc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00459fc1: mov ebp, esp */ r_ebp = r_esp;
    /* 00459fc3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00459fc5: push 0x69f174 */ { u32 v = 0x69f174u; r_esp -= 4; W32(r_esp, v); }
    /* 00459fca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00459fd0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00459fd1: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00459fd4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00459fd9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00459fdb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00459fdc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00459fdf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00459fe5: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00459fe8: mov eax, dword ptr [0x790740] */ r_eax = R32((u32)(0x790740u));
    /* 00459fed: cmp dword ptr [eax + 0x44], 0 */ {  u32 a = R32((u32)(r_eax+0x44u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00459ff1: je 0x45a072 */ if (fZ) goto L_0045a072;
L_00459ff3:; BB(0x00459ff3);
    /* 00459ff3: push 0x7e9 */ { u32 v = 0x7e9u; r_esp -= 4; W32(r_esp, v); }
    /* 00459ff8: mov ecx, dword ptr [0x790740] */ r_ecx = R32((u32)(0x790740u));
    /* 00459ffe: mov ecx, dword ptr [ecx + 0x44] */ r_ecx = R32((u32)(r_ecx+0x44u));
    /* 0045a001: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x45a006u); f_005eaf00();
    /* 0045a006: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045a008: mov edx, dword ptr [0x790740] */ r_edx = R32((u32)(0x790740u));
    /* 0045a00e: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0045a011: mov ecx, dword ptr [0x790740] */ r_ecx = R32((u32)(0x790740u));
    /* 0045a017: mov ecx, dword ptr [ecx + 0x44] */ r_ecx = R32((u32)(r_ecx+0x44u));
    /* 0045a01a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045a01c: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0045a022: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45a024u); call_ind(t); }
    /* 0045a024: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0045a026: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x45a02bu); f_00686d82();
    /* 0045a02b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045a02e: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0045a031: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045a038: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045a03c: je 0x45a04d */ if (fZ) goto L_0045a04d;
L_0045a03e:; BB(0x0045a03e);
    /* 0045a03e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045a040: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045a043: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x45a048u); f_006010a0();
    /* 0045a048: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0045a04b: jmp 0x45a054 */ goto L_0045a054;
L_0045a04d:; BB(0x0045a04d);
    /* 0045a04d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0045a054:; BB(0x0045a054);
    /* 0045a054: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045a057: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0045a05a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0045a061: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045a064: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045a065: mov eax, dword ptr [0x790740] */ r_eax = R32((u32)(0x790740u));
    /* 0045a06a: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 0045a06d: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x45a072u); f_005f5d50();
L_0045a072:; BB(0x0045a072);
    /* 0045a072: mov ecx, dword ptr [0x790740] */ r_ecx = R32((u32)(0x790740u));
    /* 0045a078: cmp dword ptr [ecx + 0x40], 0 */ {  u32 a = R32((u32)(r_ecx+0x40u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045a07c: je 0x45a105 */ if (fZ) goto L_0045a105;
L_0045a082:; BB(0x0045a082);
    /* 0045a082: push 0x7e8 */ { u32 v = 0x7e8u; r_esp -= 4; W32(r_esp, v); }
    /* 0045a087: mov edx, dword ptr [0x790740] */ r_edx = R32((u32)(0x790740u));
    /* 0045a08d: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 0045a090: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x45a095u); f_005eaf00();
    /* 0045a095: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045a097: mov eax, dword ptr [0x790740] */ r_eax = R32((u32)(0x790740u));
    /* 0045a09c: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 0045a09f: mov edx, dword ptr [0x790740] */ r_edx = R32((u32)(0x790740u));
    /* 0045a0a5: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0045a0a8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0045a0aa: mov ecx, eax */ r_ecx = r_eax;
    /* 0045a0ac: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0045a0b2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45a0b4u); call_ind(t); }
    /* 0045a0b4: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0045a0b6: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x45a0bbu); f_00686d82();
    /* 0045a0bb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045a0be: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0045a0c1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0045a0c8: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045a0cc: je 0x45a0df */ if (fZ) goto L_0045a0df;
L_0045a0ce:; BB(0x0045a0ce);
    /* 0045a0ce: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045a0d1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045a0d2: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0045a0d5: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x45a0dau); f_006010a0();
    /* 0045a0da: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0045a0dd: jmp 0x45a0e6 */ goto L_0045a0e6;
L_0045a0df:; BB(0x0045a0df);
    /* 0045a0df: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0045a0e6:; BB(0x0045a0e6);
    /* 0045a0e6: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0045a0e9: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0045a0ec: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0045a0f3: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045a0f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045a0f7: mov ecx, dword ptr [0x790740] */ r_ecx = R32((u32)(0x790740u));
    /* 0045a0fd: mov ecx, dword ptr [ecx + 0x40] */ r_ecx = R32((u32)(r_ecx+0x40u));
    /* 0045a100: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x45a105u); f_005f5d50();
L_0045a105:; BB(0x0045a105);
    /* 0045a105: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045a108: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0045a10f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045a110: mov esp, ebp */ r_esp = r_ebp;
    /* 0045a112: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045a113: ret 4 */ FN_RET(0x00459fc0); r_esp += 8; return;
}

