#include "protos.h"

void f_00585010(void) /* sub_585010 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00585010);
    /* 00585010: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00585011: mov ebp, esp */ r_ebp = r_esp;
    /* 00585013: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00585014: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00585017: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058501a: mov byte ptr [eax + 0x6c], 1 */ W8((u32)(r_eax+0x6cu), 0x1u);
    /* 0058501e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00585021: call 0x5850d0 */ r_esp -= 4; W32(r_esp, 0x585026u); f_005850d0();
    /* 00585026: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00585029: mov edx, dword ptr [ecx + 0x64] */ r_edx = R32((u32)(r_ecx+0x64u));
    /* 0058502c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058502f: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 00585032: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00585034: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00585037: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x585039u); call_ind(t); }
    /* 00585039: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058503c: mov edx, dword ptr [ecx + 0x5c] */ r_edx = R32((u32)(r_ecx+0x5cu));
    /* 0058503f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00585042: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 00585045: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00585047: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 0058504d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58504fu); call_ind(t); }
    /* 0058504f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00585052: mov edx, dword ptr [ecx + 0x60] */ r_edx = R32((u32)(r_ecx+0x60u));
    /* 00585055: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00585058: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 0058505b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0058505d: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 00585063: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x585065u); call_ind(t); }
    /* 00585065: mov esp, ebp */ r_esp = r_ebp;
    /* 00585067: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00585068: ret  */ FN_RET(0x00585010); r_esp += 4; return;
}

void f_00585070(void) /* sub_585070 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00585070);
    /* 00585070: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00585071: mov ebp, esp */ r_ebp = r_esp;
    /* 00585073: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00585074: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00585077: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058507a: mov byte ptr [eax + 0x6c], 0 */ W8((u32)(r_eax+0x6cu), 0x0u);
    /* 0058507e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00585081: call 0x585100 */ r_esp -= 4; W32(r_esp, 0x585086u); f_00585100();
    /* 00585086: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00585089: mov edx, dword ptr [ecx + 0x64] */ r_edx = R32((u32)(r_ecx+0x64u));
    /* 0058508c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058508f: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 00585092: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00585094: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00585097: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x585099u); call_ind(t); }
    /* 00585099: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058509c: mov edx, dword ptr [ecx + 0x5c] */ r_edx = R32((u32)(r_ecx+0x5cu));
    /* 0058509f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005850a2: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 005850a5: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005850a7: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 005850ad: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5850afu); call_ind(t); }
    /* 005850af: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005850b2: mov edx, dword ptr [ecx + 0x60] */ r_edx = R32((u32)(r_ecx+0x60u));
    /* 005850b5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005850b8: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 005850bb: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005850bd: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 005850c3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5850c5u); call_ind(t); }
    /* 005850c5: mov esp, ebp */ r_esp = r_ebp;
    /* 005850c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005850c8: ret  */ FN_RET(0x00585070); r_esp += 4; return;
}

void f_005850d0(void) /* sub_5850D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005850d0);
    /* 005850d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005850d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005850d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005850d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005850d7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005850d8: mov eax, esp */ r_eax = r_esp;
    /* 005850da: mov cx, word ptr [0x75f49c] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x75f49cu))) & 0xffffu);
    /* 005850e1: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 005850e4: mov dl, byte ptr [0x75f49e] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(0x75f49eu))) & 0xffu);
    /* 005850ea: mov byte ptr [eax + 2], dl */ W8((u32)(r_eax+0x2u), (u8)r_edx);
    /* 005850ed: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005850f0: call 0x5f6510 */ r_esp -= 4; W32(r_esp, 0x5850f5u); f_005f6510();
    /* 005850f5: mov esp, ebp */ r_esp = r_ebp;
    /* 005850f7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005850f8: ret  */ FN_RET(0x005850d0); r_esp += 4; return;
}

void f_00585100(void) /* sub_585100 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00585100);
    /* 00585100: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00585101: mov ebp, esp */ r_ebp = r_esp;
    /* 00585103: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00585104: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00585107: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00585108: mov eax, esp */ r_eax = r_esp;
    /* 0058510a: mov cx, word ptr [0x75f498] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x75f498u))) & 0xffffu);
    /* 00585111: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 00585114: mov dl, byte ptr [0x75f49a] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(0x75f49au))) & 0xffu);
    /* 0058511a: mov byte ptr [eax + 2], dl */ W8((u32)(r_eax+0x2u), (u8)r_edx);
    /* 0058511d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00585120: call 0x5f6510 */ r_esp -= 4; W32(r_esp, 0x585125u); f_005f6510();
    /* 00585125: mov esp, ebp */ r_esp = r_ebp;
    /* 00585127: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00585128: ret  */ FN_RET(0x00585100); r_esp += 4; return;
}

void f_00585150(void) /* sub_585150 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00585150);
    /* 00585150: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00585151: mov ebp, esp */ r_ebp = r_esp;
    /* 00585153: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00585156: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00585157: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0058515a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058515d: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 00585160: call 0x584240 */ r_esp -= 4; W32(r_esp, 0x585165u); f_00584240();
    /* 00585165: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00585168: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058516c: je 0x5851a5 */ if (fZ) goto L_005851a5;
L_0058516e:; BB(0x0058516e);
    /* 0058516e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00585171: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00585173: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00585176: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0058517c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58517eu); call_ind(t); }
    /* 0058517e: mov esi, eax */ r_esi = r_eax;
    /* 00585180: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00585183: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00585185: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00585188: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0058518e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x585190u); call_ind(t); }
    /* 00585190: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00585192: cmp dword ptr [ebp + 8], esi */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00585195: jl 0x5851a5 */ if ((fS!=fO)) goto L_005851a5;
L_00585197:; BB(0x00585197);
    /* 00585197: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058519a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058519d: add edx, dword ptr [ecx + 0x70] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x70u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005851a0: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005851a3: jmp 0x5851d0 */ goto L_005851d0;
L_005851a5:; BB(0x005851a5);
    /* 005851a5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005851a8: call 0x585470 */ r_esp -= 4; W32(r_esp, 0x5851adu); f_00585470();
    /* 005851ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005851af: je 0x5851d0 */ if (fZ) goto L_005851d0;
L_005851b1:; BB(0x005851b1);
    /* 005851b1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005851b4: mov esi, dword ptr [eax + 0x70] */ r_esi = R32((u32)(r_eax+0x70u));
    /* 005851b7: imul esi, dword ptr [ebp + 8] */ { i64 t = (i64)(i32)r_esi * (i64)(i32)R32((u32)(r_ebp+0x8u)); r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005851bb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005851be: call 0x585470 */ r_esp -= 4; W32(r_esp, 0x5851c3u); f_00585470();
    /* 005851c3: mov ecx, eax */ r_ecx = r_eax;
    /* 005851c5: mov eax, esi */ r_eax = r_esi;
    /* 005851c7: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005851c8: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005851c8, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005851c8, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005851ca: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005851cd: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005851d0:; BB(0x005851d0);
    /* 005851d0: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005851d3: cmp dword ptr [edx + 0x68], 0 */ {  u32 a = R32((u32)(r_edx+0x68u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005851d7: jne 0x585206 */ if (!fZ) goto L_00585206;
L_005851d9:; BB(0x005851d9);
    /* 005851d9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005851dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005851dd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005851e0: mov edx, dword ptr [ecx + 0x64] */ r_edx = R32((u32)(r_ecx+0x64u));
    /* 005851e3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005851e6: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 005851e9: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005851eb: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005851ee: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5851f0u); call_ind(t); }
    /* 005851f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005851f1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005851f4: mov edx, dword ptr [ecx + 0x64] */ r_edx = R32((u32)(r_ecx+0x64u));
    /* 005851f7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005851fa: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 005851fd: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005851ff: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00585202: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x585204u); call_ind(t); }
    /* 00585204: jmp 0x585231 */ goto L_00585231;
L_00585206:; BB(0x00585206);
    /* 00585206: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00585209: mov edx, dword ptr [ecx + 0x64] */ r_edx = R32((u32)(r_ecx+0x64u));
    /* 0058520c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058520f: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 00585212: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00585214: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 00585217: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x585219u); call_ind(t); }
    /* 00585219: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058521a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058521d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058521e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00585221: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 00585224: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00585227: mov ecx, dword ptr [ecx + 0x64] */ r_ecx = R32((u32)(r_ecx+0x64u));
    /* 0058522a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0058522c: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0058522f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x585231u); call_ind(t); }
L_00585231:; BB(0x00585231);
    /* 00585231: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00585232: mov esp, ebp */ r_esp = r_ebp;
    /* 00585234: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00585235: ret 4 */ FN_RET(0x00585150); r_esp += 8; return;
}

void f_00585240(void) /* sub_585240 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00585240);
    /* 00585240: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00585241: mov ebp, esp */ r_ebp = r_esp;
    /* 00585243: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00585246: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00585249: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058524c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0058524e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00585251: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00585257: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x585259u); call_ind(t); }
    /* 00585259: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0058525c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058525f: cmp dword ptr [ecx + 0x68], 0 */ {  u32 a = R32((u32)(r_ecx+0x68u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585263: jne 0x585286 */ if (!fZ) goto L_00585286;
L_00585265:; BB(0x00585265);
    /* 00585265: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00585268: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0058526b: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0058526e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00585271: mov edx, dword ptr [ecx + 0x64] */ r_edx = R32((u32)(r_ecx+0x64u));
    /* 00585274: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00585277: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 0058527a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0058527c: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 0058527f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x585281u); call_ind(t); }
    /* 00585281: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00585284: jmp 0x5852a7 */ goto L_005852a7;
L_00585286:; BB(0x00585286);
    /* 00585286: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00585289: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0058528c: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0058528f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00585292: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 00585295: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00585298: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 0058529b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0058529d: mov ecx, eax */ r_ecx = r_eax;
    /* 0058529f: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005852a2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5852a4u); call_ind(t); }
    /* 005852a4: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005852a7:; BB(0x005852a7);
    /* 005852a7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005852aa: cmp ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005852ad: jge 0x5852dc */ if ((fS==fO)) goto L_005852dc;
L_005852af:; BB(0x005852af);
    /* 005852af: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005852b3: jg 0x5852be */ if ((!fZ&&fS==fO)) goto L_005852be;
L_005852b5:; BB(0x005852b5);
    /* 005852b5: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
    /* 005852bc: jmp 0x5852c4 */ goto L_005852c4;
L_005852be:; BB(0x005852be);
    /* 005852be: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005852c1: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
L_005852c4:; BB(0x005852c4);
    /* 005852c4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005852c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005852c8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005852ca: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005852cd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005852cf: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005852d2: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 005852d8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5852dau); call_ind(t); }
    /* 005852da: jmp 0x585307 */ goto L_00585307;
L_005852dc:; BB(0x005852dc);
    /* 005852dc: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005852e0: jg 0x5852eb */ if ((!fZ&&fS==fO)) goto L_005852eb;
L_005852e2:; BB(0x005852e2);
    /* 005852e2: mov dword ptr [ebp - 0x18], 1 */ W32((u32)(r_ebp+0xffffffe8u), 0x1u);
    /* 005852e9: jmp 0x5852f1 */ goto L_005852f1;
L_005852eb:; BB(0x005852eb);
    /* 005852eb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005852ee: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
L_005852f1:; BB(0x005852f1);
    /* 005852f1: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005852f4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005852f5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005852f7: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005852fa: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005852fc: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005852ff: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00585305: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x585307u); call_ind(t); }
L_00585307:; BB(0x00585307);
    /* 00585307: mov esp, ebp */ r_esp = r_ebp;
    /* 00585309: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058530a: ret 4 */ FN_RET(0x00585240); r_esp += 8; return;
}

void f_00585470(void) /* sub_585470 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00585470);
    /* 00585470: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00585471: mov ebp, esp */ r_ebp = r_esp;
    /* 00585473: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00585476: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00585477: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0058547a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058547d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0058547f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00585482: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00585488: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58548au); call_ind(t); }
    /* 0058548a: mov esi, eax */ r_esi = r_eax;
    /* 0058548c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058548f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00585491: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00585494: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0058549a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58549cu); call_ind(t); }
    /* 0058549c: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r; fS = ((r >> 31) & 1); }
    /* 0058549e: mov dword ptr [ebp - 4], esi */ W32((u32)(r_ebp+0xfffffffcu), r_esi);
    /* 005854a1: jns 0x5854aa */ if (!fS) goto L_005854aa;
L_005854a3:; BB(0x005854a3);
    /* 005854a3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_005854aa:; BB(0x005854aa);
    /* 005854aa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005854ad: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005854ae: mov esp, ebp */ r_esp = r_ebp;
    /* 005854b0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005854b1: ret  */ FN_RET(0x00585470); r_esp += 4; return;
}

void f_005857a0(void) /* sub_5857A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005857a0);
    /* 005857a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005857a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005857a3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005857a6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005857a9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005857ac: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005857af: mov byte ptr [ecx], 0 */ W8((u32)(r_ecx), 0x0u);
    /* 005857b2: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005857b5: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005857b8: mov byte ptr [eax + 1], 1 */ W8((u32)(r_eax+0x1u), 0x1u);
    /* 005857bc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005857bf: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005857c2: mov byte ptr [edx + 2], 1 */ W8((u32)(r_edx+0x2u), 0x1u);
    /* 005857c6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005857c9: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005857cc: mov byte ptr [ecx + 3], 0 */ W8((u32)(r_ecx+0x3u), 0x0u);
    /* 005857d0: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005857d3: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005857d6: mov byte ptr [eax + 4], 0 */ W8((u32)(r_eax+0x4u), 0x0u);
    /* 005857da: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005857dd: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005857e0: mov dword ptr [edx + 0x1c], 0 */ W32((u32)(r_edx+0x1cu), 0x0u);
    /* 005857e7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005857ea: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005857ed: mov dword ptr [ecx + 0x20], 0 */ W32((u32)(r_ecx+0x20u), 0x0u);
    /* 005857f4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005857fb: jmp 0x585806 */ goto L_00585806;
L_005857fd:; BB(0x005857fd);
    /* 005857fd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00585800: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00585803: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00585806:; BB(0x00585806);
    /* 00585806: cmp dword ptr [ebp - 4], 0x14 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058580a: jge 0x58581c */ if ((fS==fO)) goto L_0058581c;
L_0058580c:; BB(0x0058580c);
    /* 0058580c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058580f: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00585812: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00585815: mov byte ptr [ecx + edx + 5], 0 */ W8((u32)(r_ecx+r_edx+0x5u), 0x0u);
    /* 0058581a: jmp 0x5857fd */ goto L_005857fd;
L_0058581c:; BB(0x0058581c);
    /* 0058581c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058581f: call 0x585830 */ r_esp -= 4; W32(r_esp, 0x585824u); f_00585830();
    /* 00585824: mov esp, ebp */ r_esp = r_ebp;
    /* 00585826: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00585827: ret  */ FN_RET(0x005857a0); r_esp += 4; return;
}

void f_00585830(void) /* sub_585830 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00585830);
    /* 00585830: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00585831: mov ebp, esp */ r_ebp = r_esp;
    /* 00585833: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00585834: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00585837: mov ecx, dword ptr [0x793584] */ r_ecx = R32((u32)(0x793584u));
    /* 0058583d: call 0x589290 */ r_esp -= 4; W32(r_esp, 0x585842u); f_00589290();
    /* 00585842: mov esp, ebp */ r_esp = r_ebp;
    /* 00585844: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00585845: ret  */ FN_RET(0x00585830); r_esp += 4; return;
}

void f_00585850(void) /* sub_585850 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00585850);
    /* 00585850: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00585851: mov ebp, esp */ r_ebp = r_esp;
    /* 00585853: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00585856: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00585857: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0058585a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058585d: call 0x585eb0 */ r_esp -= 4; W32(r_esp, 0x585862u); f_00585eb0();
    /* 00585862: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00585865: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585867: jne 0x58586e */ if (!fZ) goto L_0058586e;
L_00585869:; BB(0x00585869);
    /* 00585869: jmp 0x585a36 */ goto L_00585a36;
L_0058586e:; BB(0x0058586e);
    /* 0058586e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00585871: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00585872: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00585875: call 0x585e60 */ r_esp -= 4; W32(r_esp, 0x58587au); f_00585e60();
    /* 0058587a: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0058587d: cmp dword ptr [ebp - 8], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585881: jne 0x58593e */ if (!fZ) goto L_0058593e;
L_00585887:; BB(0x00585887);
    /* 00585887: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058588a: call 0x585ed0 */ r_esp -= 4; W32(r_esp, 0x58588fu); f_00585ed0();
    /* 0058588f: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585892: je 0x5858a2 */ if (fZ) goto L_005858a2;
L_00585894:; BB(0x00585894);
    /* 00585894: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00585897: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0058589a: movsx ecx, byte ptr [eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 0058589d: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005858a0: jl 0x5858a7 */ if ((fS!=fO)) goto L_005858a7;
L_005858a2:; BB(0x005858a2);
    /* 005858a2: jmp 0x585a36 */ goto L_00585a36;
L_005858a7:; BB(0x005858a7);
    /* 005858a7: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005858aa: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 005858ad: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005858b0: call 0x585ed0 */ r_esp -= 4; W32(r_esp, 0x5858b5u); f_00585ed0();
    /* 005858b5: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 005858b8: mov byte ptr [esi + eax + 5], cl */ W8((u32)(r_esi+r_eax+0x5u), (u8)r_ecx);
    /* 005858bc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005858bf: call 0x585ed0 */ r_esp -= 4; W32(r_esp, 0x5858c4u); f_00585ed0();
    /* 005858c4: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005858c7: jne 0x5858f0 */ if (!fZ) goto L_005858f0;
L_005858c9:; BB(0x005858c9);
    /* 005858c9: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005858cc: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005858cf: movsx ecx, byte ptr [eax + 1] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x1u));
    /* 005858d3: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005858d6: jge 0x5858e4 */ if ((fS==fO)) goto L_005858e4;
L_005858d8:; BB(0x005858d8);
    /* 005858d8: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005858db: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005858de: mov byte ptr [eax + 1], 5 */ W8((u32)(r_eax+0x1u), 0x5u);
    /* 005858e2: jmp 0x5858ee */ goto L_005858ee;
L_005858e4:; BB(0x005858e4);
    /* 005858e4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005858e7: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005858ea: mov byte ptr [edx + 1], 0xa */ W8((u32)(r_edx+0x1u), 0xau);
L_005858ee:; BB(0x005858ee);
    /* 005858ee: jmp 0x58593c */ goto L_0058593c;
L_005858f0:; BB(0x005858f0);
    /* 005858f0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005858f3: call 0x585ed0 */ r_esp -= 4; W32(r_esp, 0x5858f8u); f_00585ed0();
    /* 005858f8: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005858fb: jle 0x585916 */ if ((fZ||fS!=fO)) goto L_00585916;
L_005858fd:; BB(0x005858fd);
    /* 005858fd: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00585900: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00585903: movsx edx, byte ptr [ecx + 1] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x1u));
    /* 00585907: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058590a: jne 0x585916 */ if (!fZ) goto L_00585916;
L_0058590c:; BB(0x0058590c);
    /* 0058590c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058590f: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00585912: mov byte ptr [ecx + 1], 2 */ W8((u32)(r_ecx+0x1u), 0x2u);
L_00585916:; BB(0x00585916);
    /* 00585916: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00585919: call 0x585ed0 */ r_esp -= 4; W32(r_esp, 0x58591eu); f_00585ed0();
    /* 0058591e: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00585921: jge 0x58593c */ if ((fS==fO)) goto L_0058593c;
L_00585923:; BB(0x00585923);
    /* 00585923: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00585926: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00585929: movsx ecx, byte ptr [eax + 1] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x1u));
    /* 0058592d: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585930: jne 0x58593c */ if (!fZ) goto L_0058593c;
L_00585932:; BB(0x00585932);
    /* 00585932: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00585935: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00585938: mov byte ptr [eax + 1], 1 */ W8((u32)(r_eax+0x1u), 0x1u);
L_0058593c:; BB(0x0058593c);
    /* 0058593c: jmp 0x5859a1 */ goto L_005859a1;
L_0058593e:; BB(0x0058593e);
    /* 0058593e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00585941: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00585944: jmp 0x58594f */ goto L_0058594f;
L_00585946:; BB(0x00585946);
    /* 00585946: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00585949: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0058594c: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0058594f:; BB(0x0058594f);
    /* 0058594f: cmp dword ptr [ebp - 4], 0x13 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00585953: jge 0x585971 */ if ((fS==fO)) goto L_00585971;
L_00585955:; BB(0x00585955);
    /* 00585955: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00585958: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0058595b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058595e: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00585961: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00585964: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 00585967: mov cl, byte ptr [ecx + esi + 6] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ecx+r_esi+0x6u))) & 0xffu);
    /* 0058596b: mov byte ptr [eax + edx + 5], cl */ W8((u32)(r_eax+r_edx+0x5u), (u8)r_ecx);
    /* 0058596f: jmp 0x585946 */ goto L_00585946;
L_00585971:; BB(0x00585971);
    /* 00585971: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00585974: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00585977: mov byte ptr [eax + 0x18], 0 */ W8((u32)(r_eax+0x18u), 0x0u);
    /* 0058597b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058597e: call 0x585ed0 */ r_esp -= 4; W32(r_esp, 0x585983u); f_00585ed0();
    /* 00585983: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00585986: jge 0x5859a1 */ if ((fS==fO)) goto L_005859a1;
L_00585988:; BB(0x00585988);
    /* 00585988: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058598b: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0058598e: movsx eax, byte ptr [edx + 1] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x1u));
    /* 00585992: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585995: jne 0x5859a1 */ if (!fZ) goto L_005859a1;
L_00585997:; BB(0x00585997);
    /* 00585997: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058599a: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0058599d: mov byte ptr [edx + 1], 1 */ W8((u32)(r_edx+0x1u), 0x1u);
L_005859a1:; BB(0x005859a1);
    /* 005859a1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005859a4: call 0x585ed0 */ r_esp -= 4; W32(r_esp, 0x5859a9u); f_00585ed0();
    /* 005859a9: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005859ac: jl 0x5859bb */ if ((fS!=fO)) goto L_005859bb;
L_005859ae:; BB(0x005859ae);
    /* 005859ae: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005859b1: call 0x585ed0 */ r_esp -= 4; W32(r_esp, 0x5859b6u); f_00585ed0();
    /* 005859b6: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005859b9: jle 0x585a2e */ if ((fZ||fS!=fO)) goto L_00585a2e;
L_005859bb:; BB(0x005859bb);
    /* 005859bb: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005859be: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005859c1: movsx edx, byte ptr [ecx + 3] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x3u));
    /* 005859c5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005859c7: je 0x585a2e */ if (fZ) goto L_00585a2e;
L_005859c9:; BB(0x005859c9);
    /* 005859c9: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005859cc: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005859cf: mov byte ptr [ecx + 3], 0 */ W8((u32)(r_ecx+0x3u), 0x0u);
    /* 005859d3: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005859d6: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005859d9: movsx ecx, byte ptr [eax + 1] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x1u));
    /* 005859dd: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005859e0: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005859e3: sub edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005859e6: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005859e9: cmp dword ptr [ebp - 0x10], 0x3f */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005859ed: ja 0x585a2e */ if ((!fC&&!fZ)) goto L_00585a2e;
L_005859ef:; BB(0x005859ef);
    /* 005859ef: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005859f2: movzx ecx, byte ptr [eax + 0x585a54] */ r_ecx = (u32)R8((u32)(r_eax+0x585a54u));
    /* 005859f9: jmp dword ptr [ecx*4 + 0x585a40] */ { u32 t = R32((u32)(r_ecx*4+0x585a40u)); switch (t) { case 0x585a00u: goto L_00585a00; case 0x585a0cu: goto L_00585a0c; case 0x585a18u: goto L_00585a18; case 0x585a24u: goto L_00585a24; case 0x585a2eu: goto L_00585a2e; default: UNSUP(0x005859f9, "jump table entry is not a known target"); } }
L_00585a00:; BB(0x00585a00);
    /* 00585a00: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00585a03: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00585a06: mov byte ptr [eax + 1], 1 */ W8((u32)(r_eax+0x1u), 0x1u);
    /* 00585a0a: jmp 0x585a2e */ goto L_00585a2e;
L_00585a0c:; BB(0x00585a0c);
    /* 00585a0c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00585a0f: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00585a12: mov byte ptr [edx + 1], 5 */ W8((u32)(r_edx+0x1u), 0x5u);
    /* 00585a16: jmp 0x585a2e */ goto L_00585a2e;
L_00585a18:; BB(0x00585a18);
    /* 00585a18: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00585a1b: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00585a1e: mov byte ptr [ecx + 1], 0xa */ W8((u32)(r_ecx+0x1u), 0xau);
    /* 00585a22: jmp 0x585a2e */ goto L_00585a2e;
L_00585a24:; BB(0x00585a24);
    /* 00585a24: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00585a27: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00585a2a: mov byte ptr [eax + 1], 0x14 */ W8((u32)(r_eax+0x1u), 0x14u);
L_00585a2e:; BB(0x00585a2e);
    /* 00585a2e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00585a31: call 0x585830 */ r_esp -= 4; W32(r_esp, 0x585a36u); f_00585830();
L_00585a36:; BB(0x00585a36);
    /* 00585a36: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00585a37: mov esp, ebp */ r_esp = r_ebp;
    /* 00585a39: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00585a3a: ret 4 */ FN_RET(0x00585850); r_esp += 8; return;
}

void f_00585aa0(void) /* sub_585AA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00585aa0);
    /* 00585aa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00585aa1: mov ebp, esp */ r_ebp = r_esp;
    /* 00585aa3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00585aa4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00585aa7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00585aaa: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00585aad: mov dl, byte ptr [ebp + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 00585ab0: mov byte ptr [ecx + 2], dl */ W8((u32)(r_ecx+0x2u), (u8)r_edx);
    /* 00585ab3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00585ab6: call 0x585830 */ r_esp -= 4; W32(r_esp, 0x585abbu); f_00585830();
    /* 00585abb: mov esp, ebp */ r_esp = r_ebp;
    /* 00585abd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00585abe: ret 4 */ FN_RET(0x00585aa0); r_esp += 8; return;
}

void f_00585ad0(void) /* sub_585AD0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00585ad0);
    /* 00585ad0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00585ad1: mov ebp, esp */ r_ebp = r_esp;
    /* 00585ad3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00585ad4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00585ad7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00585ada: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585ade: je 0x585af4 */ if (fZ) goto L_00585af4;
L_00585ae0:; BB(0x00585ae0);
    /* 00585ae0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00585ae3: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00585ae6: mov al, byte ptr [ebp + 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 00585ae9: mov byte ptr [edx + 1], al */ W8((u32)(r_edx+0x1u), (u8)r_eax);
    /* 00585aec: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00585aef: call 0x585830 */ r_esp -= 4; W32(r_esp, 0x585af4u); f_00585830();
L_00585af4:; BB(0x00585af4);
    /* 00585af4: mov esp, ebp */ r_esp = r_ebp;
    /* 00585af6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00585af7: ret 4 */ FN_RET(0x00585ad0); r_esp += 8; return;
}

void f_00585b00(void) /* sub_585B00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00585b00);
    /* 00585b00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00585b01: mov ebp, esp */ r_ebp = r_esp;
    /* 00585b03: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00585b06: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00585b09: cmp dword ptr [ebp + 8], 1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585b0d: je 0x585b2e */ if (fZ) goto L_00585b2e;
L_00585b0f:; BB(0x00585b0f);
    /* 00585b0f: cmp dword ptr [ebp + 8], 2 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585b13: je 0x585b2e */ if (fZ) goto L_00585b2e;
L_00585b15:; BB(0x00585b15);
    /* 00585b15: cmp dword ptr [ebp + 8], 3 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585b19: je 0x585b2e */ if (fZ) goto L_00585b2e;
L_00585b1b:; BB(0x00585b1b);
    /* 00585b1b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00585b1e: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00585b21: movsx edx, byte ptr [ecx] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx));
    /* 00585b24: cmp edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585b27: jne 0x585b2e */ if (!fZ) goto L_00585b2e;
L_00585b29:; BB(0x00585b29);
    /* 00585b29: jmp 0x585c6c */ goto L_00585c6c;
L_00585b2e:; BB(0x00585b2e);
    /* 00585b2e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00585b31: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00585b34: mov dl, byte ptr [ebp + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 00585b37: mov byte ptr [ecx], dl */ W8((u32)(r_ecx), (u8)r_edx);
    /* 00585b39: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00585b40: jmp 0x585b4b */ goto L_00585b4b;
L_00585b42:; BB(0x00585b42);
    /* 00585b42: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00585b45: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00585b48: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00585b4b:; BB(0x00585b4b);
    /* 00585b4b: cmp dword ptr [ebp - 4], 0x14 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00585b4f: jge 0x585b61 */ if ((fS==fO)) goto L_00585b61;
L_00585b51:; BB(0x00585b51);
    /* 00585b51: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00585b54: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00585b57: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00585b5a: mov byte ptr [edx + eax + 5], 0 */ W8((u32)(r_edx+r_eax+0x5u), 0x0u);
    /* 00585b5f: jmp 0x585b42 */ goto L_00585b42;
L_00585b61:; BB(0x00585b61);
    /* 00585b61: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00585b64: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00585b67: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00585b6a: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00585b6d: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00585b70: cmp dword ptr [ebp - 0xc], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00585b74: ja 0x585c59 */ if ((!fC&&!fZ)) goto L_00585c59;
L_00585b7a:; BB(0x00585b7a);
    /* 00585b7a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00585b7d: jmp dword ptr [eax*4 + 0x585c74] */ { u32 t = R32((u32)(r_eax*4+0x585c74u)); switch (t) { case 0x585b89u: goto L_00585b89; case 0x585bc5u: goto L_00585bc5; case 0x585bfeu: goto L_00585bfe; case 0x585c37u: goto L_00585c37; case 0x585c43u: goto L_00585c43; case 0x585c4fu: goto L_00585c4f; default: UNSUP(0x00585b7d, "jump table entry is not a known target"); } }
L_00585b89:; BB(0x00585b89);
    /* 00585b89: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00585b8c: call 0x585ed0 */ r_esp -= 4; W32(r_esp, 0x585b91u); f_00585ed0();
    /* 00585b91: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585b94: je 0x585bc0 */ if (fZ) goto L_00585bc0;
L_00585b96:; BB(0x00585b96);
    /* 00585b96: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 00585b98: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x585b9du); f_0062fbf0();
    /* 00585b9d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00585ba0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00585ba3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00585ba4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00585ba7: call 0x585850 */ r_esp -= 4; W32(r_esp, 0x585bacu); f_00585850();
    /* 00585bac: mov ecx, dword ptr [0x793584] */ r_ecx = R32((u32)(0x793584u));
    /* 00585bb2: mov edx, dword ptr [ecx + 0x3b68] */ r_edx = R32((u32)(r_ecx+0x3b68u));
    /* 00585bb8: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00585bbb: mov byte ptr [eax], 1 */ W8((u32)(r_eax), 0x1u);
    /* 00585bbe: jmp 0x585b89 */ goto L_00585b89;
L_00585bc0:; BB(0x00585bc0);
    /* 00585bc0: jmp 0x585c59 */ goto L_00585c59;
L_00585bc5:; BB(0x00585bc5);
    /* 00585bc5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00585bc8: call 0x585ed0 */ r_esp -= 4; W32(r_esp, 0x585bcdu); f_00585ed0();
    /* 00585bcd: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585bd0: je 0x585bfc */ if (fZ) goto L_00585bfc;
L_00585bd2:; BB(0x00585bd2);
    /* 00585bd2: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 00585bd4: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x585bd9u); f_0062fbf0();
    /* 00585bd9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00585bdc: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00585bdf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00585be0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00585be3: call 0x585850 */ r_esp -= 4; W32(r_esp, 0x585be8u); f_00585850();
    /* 00585be8: mov ecx, dword ptr [0x793584] */ r_ecx = R32((u32)(0x793584u));
    /* 00585bee: mov edx, dword ptr [ecx + 0x3b68] */ r_edx = R32((u32)(r_ecx+0x3b68u));
    /* 00585bf4: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00585bf7: mov byte ptr [eax], 2 */ W8((u32)(r_eax), 0x2u);
    /* 00585bfa: jmp 0x585bc5 */ goto L_00585bc5;
L_00585bfc:; BB(0x00585bfc);
    /* 00585bfc: jmp 0x585c59 */ goto L_00585c59;
L_00585bfe:; BB(0x00585bfe);
    /* 00585bfe: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00585c01: call 0x585ed0 */ r_esp -= 4; W32(r_esp, 0x585c06u); f_00585ed0();
    /* 00585c06: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585c09: je 0x585c35 */ if (fZ) goto L_00585c35;
L_00585c0b:; BB(0x00585c0b);
    /* 00585c0b: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 00585c0d: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x585c12u); f_0062fbf0();
    /* 00585c12: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00585c15: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00585c18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00585c19: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00585c1c: call 0x585850 */ r_esp -= 4; W32(r_esp, 0x585c21u); f_00585850();
    /* 00585c21: mov ecx, dword ptr [0x793584] */ r_ecx = R32((u32)(0x793584u));
    /* 00585c27: mov edx, dword ptr [ecx + 0x3b68] */ r_edx = R32((u32)(r_ecx+0x3b68u));
    /* 00585c2d: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00585c30: mov byte ptr [eax], 3 */ W8((u32)(r_eax), 0x3u);
    /* 00585c33: jmp 0x585bfe */ goto L_00585bfe;
L_00585c35:; BB(0x00585c35);
    /* 00585c35: jmp 0x585c59 */ goto L_00585c59;
L_00585c37:; BB(0x00585c37);
    /* 00585c37: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00585c39: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00585c3c: call 0x585ad0 */ r_esp -= 4; W32(r_esp, 0x585c41u); f_00585ad0();
    /* 00585c41: jmp 0x585c59 */ goto L_00585c59;
L_00585c43:; BB(0x00585c43);
    /* 00585c43: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00585c45: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00585c48: call 0x585ad0 */ r_esp -= 4; W32(r_esp, 0x585c4du); f_00585ad0();
    /* 00585c4d: jmp 0x585c59 */ goto L_00585c59;
L_00585c4f:; BB(0x00585c4f);
    /* 00585c4f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00585c51: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00585c54: call 0x585ad0 */ r_esp -= 4; W32(r_esp, 0x585c59u); f_00585ad0();
L_00585c59:; BB(0x00585c59);
    /* 00585c59: mov ecx, dword ptr [0x793584] */ r_ecx = R32((u32)(0x793584u));
    /* 00585c5f: call 0x589290 */ r_esp -= 4; W32(r_esp, 0x585c64u); f_00589290();
    /* 00585c64: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00585c67: call 0x585830 */ r_esp -= 4; W32(r_esp, 0x585c6cu); f_00585830();
L_00585c6c:; BB(0x00585c6c);
    /* 00585c6c: mov esp, ebp */ r_esp = r_ebp;
    /* 00585c6e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00585c6f: ret 4 */ FN_RET(0x00585b00); r_esp += 8; return;
}

void f_00585c90(void) /* sub_585C90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00585c90);
    /* 00585c90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00585c91: mov ebp, esp */ r_ebp = r_esp;
    /* 00585c93: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00585c96: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00585c99: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 00585c9d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585c9f: je 0x585d08 */ if (fZ) goto L_00585d08;
L_00585ca1:; BB(0x00585ca1);
    /* 00585ca1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00585ca4: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00585ca7: mov byte ptr [edx + 3], 1 */ W8((u32)(r_edx+0x3u), 0x1u);
    /* 00585cab: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00585cae: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00585cb1: movsx edx, byte ptr [ecx + 1] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x1u));
    /* 00585cb5: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00585cb8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00585cbb: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00585cbe: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00585cc1: cmp dword ptr [ebp - 8], 0x13 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00585cc5: ja 0x585d06 */ if ((!fC&&!fZ)) goto L_00585d06;
L_00585cc7:; BB(0x00585cc7);
    /* 00585cc7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00585cca: movzx edx, byte ptr [ecx + 0x585d90] */ r_edx = (u32)R8((u32)(r_ecx+0x585d90u));
    /* 00585cd1: jmp dword ptr [edx*4 + 0x585d7c] */ { u32 t = R32((u32)(r_edx*4+0x585d7cu)); switch (t) { case 0x585cd8u: goto L_00585cd8; case 0x585ce4u: goto L_00585ce4; case 0x585cf0u: goto L_00585cf0; case 0x585cfcu: goto L_00585cfc; case 0x585d06u: goto L_00585d06; default: UNSUP(0x00585cd1, "jump table entry is not a known target"); } }
L_00585cd8:; BB(0x00585cd8);
    /* 00585cd8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00585cdb: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00585cde: mov byte ptr [ecx + 1], 7 */ W8((u32)(r_ecx+0x1u), 0x7u);
    /* 00585ce2: jmp 0x585d06 */ goto L_00585d06;
L_00585ce4:; BB(0x00585ce4);
    /* 00585ce4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00585ce7: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00585cea: mov byte ptr [eax + 1], 0xe */ W8((u32)(r_eax+0x1u), 0xeu);
    /* 00585cee: jmp 0x585d06 */ goto L_00585d06;
L_00585cf0:; BB(0x00585cf0);
    /* 00585cf0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00585cf3: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00585cf6: mov byte ptr [edx + 1], 0x1c */ W8((u32)(r_edx+0x1u), 0x1cu);
    /* 00585cfa: jmp 0x585d06 */ goto L_00585d06;
L_00585cfc:; BB(0x00585cfc);
    /* 00585cfc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00585cff: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00585d02: mov byte ptr [ecx + 1], 0x46 */ W8((u32)(r_ecx+0x1u), 0x46u);
L_00585d06:; BB(0x00585d06);
    /* 00585d06: jmp 0x585d6d */ goto L_00585d6d;
L_00585d08:; BB(0x00585d08);
    /* 00585d08: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00585d0b: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00585d0e: mov byte ptr [eax + 3], 0 */ W8((u32)(r_eax+0x3u), 0x0u);
    /* 00585d12: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00585d15: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00585d18: movsx eax, byte ptr [edx + 1] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x1u));
    /* 00585d1c: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00585d1f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00585d22: sub ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00585d25: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00585d28: cmp dword ptr [ebp - 0xc], 0x3f */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x3fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00585d2c: ja 0x585d6d */ if ((!fC&&!fZ)) goto L_00585d6d;
L_00585d2e:; BB(0x00585d2e);
    /* 00585d2e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00585d31: movzx eax, byte ptr [edx + 0x585db8] */ r_eax = (u32)R8((u32)(r_edx+0x585db8u));
    /* 00585d38: jmp dword ptr [eax*4 + 0x585da4] */ { u32 t = R32((u32)(r_eax*4+0x585da4u)); switch (t) { case 0x585d3fu: goto L_00585d3f; case 0x585d4bu: goto L_00585d4b; case 0x585d57u: goto L_00585d57; case 0x585d63u: goto L_00585d63; case 0x585d6du: goto L_00585d6d; default: UNSUP(0x00585d38, "jump table entry is not a known target"); } }
L_00585d3f:; BB(0x00585d3f);
    /* 00585d3f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00585d42: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00585d45: mov byte ptr [edx + 1], 1 */ W8((u32)(r_edx+0x1u), 0x1u);
    /* 00585d49: jmp 0x585d6d */ goto L_00585d6d;
L_00585d4b:; BB(0x00585d4b);
    /* 00585d4b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00585d4e: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00585d51: mov byte ptr [ecx + 1], 5 */ W8((u32)(r_ecx+0x1u), 0x5u);
    /* 00585d55: jmp 0x585d6d */ goto L_00585d6d;
L_00585d57:; BB(0x00585d57);
    /* 00585d57: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00585d5a: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00585d5d: mov byte ptr [eax + 1], 0xa */ W8((u32)(r_eax+0x1u), 0xau);
    /* 00585d61: jmp 0x585d6d */ goto L_00585d6d;
L_00585d63:; BB(0x00585d63);
    /* 00585d63: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00585d66: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00585d69: mov byte ptr [edx + 1], 0x14 */ W8((u32)(r_edx+0x1u), 0x14u);
L_00585d6d:; BB(0x00585d6d);
    /* 00585d6d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00585d70: call 0x585830 */ r_esp -= 4; W32(r_esp, 0x585d75u); f_00585830();
    /* 00585d75: mov esp, ebp */ r_esp = r_ebp;
    /* 00585d77: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00585d78: ret 4 */ FN_RET(0x00585c90); r_esp += 8; return;
}

void f_00585e00(void) /* sub_585E00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00585e00);
    /* 00585e00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00585e01: mov ebp, esp */ r_ebp = r_esp;
    /* 00585e03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00585e04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00585e07: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00585e0a: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00585e0d: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 00585e13: mov eax, dword ptr [edx + 0x98] */ r_eax = R32((u32)(r_edx+0x98u));
    /* 00585e19: mov dword ptr [ecx + 0x1c], eax */ W32((u32)(r_ecx+0x1cu), r_eax);
    /* 00585e1c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00585e1f: call 0x585830 */ r_esp -= 4; W32(r_esp, 0x585e24u); f_00585830();
    /* 00585e24: mov esp, ebp */ r_esp = r_ebp;
    /* 00585e26: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00585e27: ret  */ FN_RET(0x00585e00); r_esp += 4; return;
}

void f_00585e30(void) /* sub_585E30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00585e30);
    /* 00585e30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00585e31: mov ebp, esp */ r_ebp = r_esp;
    /* 00585e33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00585e34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00585e37: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00585e3a: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00585e3d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00585e40: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 00585e43: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00585e46: call 0x585830 */ r_esp -= 4; W32(r_esp, 0x585e4bu); f_00585830();
    /* 00585e4b: mov esp, ebp */ r_esp = r_ebp;
    /* 00585e4d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00585e4e: ret 4 */ FN_RET(0x00585e30); r_esp += 8; return;
}

void f_00585e60(void) /* sub_585E60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00585e60);
    /* 00585e60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00585e61: mov ebp, esp */ r_ebp = r_esp;
    /* 00585e63: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00585e66: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00585e69: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00585e70: jmp 0x585e7b */ goto L_00585e7b;
L_00585e72:; BB(0x00585e72);
    /* 00585e72: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00585e75: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00585e78: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00585e7b:; BB(0x00585e7b);
    /* 00585e7b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00585e7e: call 0x585ed0 */ r_esp -= 4; W32(r_esp, 0x585e83u); f_00585ed0();
    /* 00585e83: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00585e86: jge 0x585ea2 */ if ((fS==fO)) goto L_00585ea2;
L_00585e88:; BB(0x00585e88);
    /* 00585e88: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00585e8b: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00585e8e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00585e91: movsx ecx, byte ptr [edx + eax + 5] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+r_eax+0x5u));
    /* 00585e96: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585e99: jne 0x585ea0 */ if (!fZ) goto L_00585ea0;
L_00585e9b:; BB(0x00585e9b);
    /* 00585e9b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00585e9e: jmp 0x585ea5 */ goto L_00585ea5;
L_00585ea0:; BB(0x00585ea0);
    /* 00585ea0: jmp 0x585e72 */ goto L_00585e72;
L_00585ea2:; BB(0x00585ea2);
    /* 00585ea2: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00585ea5:; BB(0x00585ea5);
    /* 00585ea5: mov esp, ebp */ r_esp = r_ebp;
    /* 00585ea7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00585ea8: ret 4 */ FN_RET(0x00585e60); r_esp += 8; return;
}

void f_00585eb0(void) /* sub_585EB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00585eb0);
    /* 00585eb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00585eb1: mov ebp, esp */ r_ebp = r_esp;
    /* 00585eb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00585eb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00585eb7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00585eba: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00585ebd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00585ebf: cmp dword ptr [ecx + 0x1c], 0 */ {  u32 a = R32((u32)(r_ecx+0x1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585ec3: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00585ec6: mov esp, ebp */ r_esp = r_ebp;
    /* 00585ec8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00585ec9: ret  */ FN_RET(0x00585eb0); r_esp += 4; return;
}

void f_00585ed0(void) /* sub_585ED0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00585ed0);
    /* 00585ed0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00585ed1: mov ebp, esp */ r_ebp = r_esp;
    /* 00585ed3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00585ed6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00585ed9: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00585ee0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00585ee7: jmp 0x585ef2 */ goto L_00585ef2;
L_00585ee9:; BB(0x00585ee9);
    /* 00585ee9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00585eec: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00585eef: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00585ef2:; BB(0x00585ef2);
    /* 00585ef2: cmp dword ptr [ebp - 4], 0x14 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00585ef6: jge 0x585f15 */ if ((fS==fO)) goto L_00585f15;
L_00585ef8:; BB(0x00585ef8);
    /* 00585ef8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00585efb: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00585efe: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00585f01: movsx ecx, byte ptr [edx + eax + 5] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+r_eax+0x5u));
    /* 00585f06: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585f08: je 0x585f13 */ if (fZ) goto L_00585f13;
L_00585f0a:; BB(0x00585f0a);
    /* 00585f0a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00585f0d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00585f10: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_00585f13:; BB(0x00585f13);
    /* 00585f13: jmp 0x585ee9 */ goto L_00585ee9;
L_00585f15:; BB(0x00585f15);
    /* 00585f15: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00585f18: mov esp, ebp */ r_esp = r_ebp;
    /* 00585f1a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00585f1b: ret  */ FN_RET(0x00585ed0); r_esp += 4; return;
}

