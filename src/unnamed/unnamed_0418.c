#include "protos.h"

void f_00418400(void) /* sub_418400 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00418400);
    /* 00418400: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00418401: mov ebp, esp */ r_ebp = r_esp;
    /* 00418403: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00418404: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00418407: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041840b: jne 0x418423 */ if (!fZ) goto L_00418423;
L_0041840d:; BB(0x0041840d);
    /* 0041840d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0041840f: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00418415: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x41841au); f_006375b0();
    /* 0041841a: mov ecx, eax */ r_ecx = r_eax;
    /* 0041841c: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x418421u); f_0063aae0();
    /* 00418421: jmp 0x418438 */ goto L_00418438;
L_00418423:; BB(0x00418423);
    /* 00418423: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00418425: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0041842a: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 0041842d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00418430: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 00418433: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x418438u); f_0063aae0();
L_00418438:; BB(0x00418438);
    /* 00418438: mov esp, ebp */ r_esp = r_ebp;
    /* 0041843a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041843b: ret 4 */ FN_RET(0x00418400); r_esp += 8; return;
}

void f_00418440(void) /* sub_418440 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00418440);
    /* 00418440: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00418441: mov ebp, esp */ r_ebp = r_esp;
    /* 00418443: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00418444: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00418447: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00418449: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041844c: call 0x418400 */ r_esp -= 4; W32(r_esp, 0x418451u); f_00418400();
    /* 00418451: cmp byte ptr [eax + 0xa], 0 */ {  u32 a = R8((u32)(r_eax+0xau)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00418455: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00418458: mov esp, ebp */ r_esp = r_ebp;
    /* 0041845a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041845b: ret  */ FN_RET(0x00418440); r_esp += 4; return;
}

void f_00418460(void) /* sub_418460 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00418460);
    /* 00418460: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00418461: mov ebp, esp */ r_ebp = r_esp;
    /* 00418463: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00418464: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00418467: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00418469: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041846c: call 0x418400 */ r_esp -= 4; W32(r_esp, 0x418471u); f_00418400();
    /* 00418471: cmp byte ptr [eax + 0xb], 0 */ {  u32 a = R8((u32)(r_eax+0xbu)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00418475: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00418478: mov esp, ebp */ r_esp = r_ebp;
    /* 0041847a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041847b: ret  */ FN_RET(0x00418460); r_esp += 4; return;
}

void f_00418480(void) /* sub_418480 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00418480);
    /* 00418480: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00418481: mov ebp, esp */ r_ebp = r_esp;
    /* 00418483: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00418484: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00418487: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00418489: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041848c: call 0x418400 */ r_esp -= 4; W32(r_esp, 0x418491u); f_00418400();
    /* 00418491: cmp byte ptr [eax + 0xc], 0 */ {  u32 a = R8((u32)(r_eax+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00418495: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00418498: mov esp, ebp */ r_esp = r_ebp;
    /* 0041849a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041849b: ret  */ FN_RET(0x00418480); r_esp += 4; return;
}

void f_004184a0(void) /* sub_4184A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004184a0);
    /* 004184a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004184a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004184a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004184a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004184a7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004184a9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004184ac: call 0x418400 */ r_esp -= 4; W32(r_esp, 0x4184b1u); f_00418400();
    /* 004184b1: cmp byte ptr [eax + 0xd], 0 */ {  u32 a = R8((u32)(r_eax+0xdu)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 004184b5: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 004184b8: mov esp, ebp */ r_esp = r_ebp;
    /* 004184ba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004184bb: ret  */ FN_RET(0x004184a0); r_esp += 4; return;
}

void f_004184c0(void) /* sub_4184C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004184c0);
    /* 004184c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004184c1: mov ebp, esp */ r_ebp = r_esp;
    /* 004184c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004184c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004184c7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004184c9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004184cc: call 0x418400 */ r_esp -= 4; W32(r_esp, 0x4184d1u); f_00418400();
    /* 004184d1: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 004184d4: mov byte ptr [eax + 0xd], cl */ W8((u32)(r_eax+0xdu), (u8)r_ecx);
    /* 004184d7: mov esp, ebp */ r_esp = r_ebp;
    /* 004184d9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004184da: ret 4 */ FN_RET(0x004184c0); r_esp += 8; return;
}

void f_004184e0(void) /* sub_4184E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004184e0);
    /* 004184e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004184e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004184e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004184e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004184e7: mov ecx, dword ptr [0x790320] */ r_ecx = R32((u32)(0x790320u));
    /* 004184ed: call 0x5da830 */ r_esp -= 4; W32(r_esp, 0x4184f2u); f_005da830();
    /* 004184f2: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004184f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004184f7: je 0x4184fd */ if (fZ) goto L_004184fd;
L_004184f9:; BB(0x004184f9);
    /* 004184f9: mov al, 4 */ r_eax = (r_eax & 0xffffff00u) | ((0x4u) & 0xffu);
    /* 004184fb: jmp 0x418509 */ goto L_00418509;
L_004184fd:; BB(0x004184fd);
    /* 004184fd: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004184ff: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00418502: call 0x418400 */ r_esp -= 4; W32(r_esp, 0x418507u); f_00418400();
    /* 00418507: mov al, byte ptr [eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
L_00418509:; BB(0x00418509);
    /* 00418509: mov esp, ebp */ r_esp = r_ebp;
    /* 0041850b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041850c: ret  */ FN_RET(0x004184e0); r_esp += 4; return;
}

void f_00418510(void) /* sub_418510 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00418510);
    /* 00418510: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00418511: mov ebp, esp */ r_ebp = r_esp;
    /* 00418513: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00418514: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00418517: mov ecx, dword ptr [0x790320] */ r_ecx = R32((u32)(0x790320u));
    /* 0041851d: call 0x5da830 */ r_esp -= 4; W32(r_esp, 0x418522u); f_005da830();
    /* 00418522: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00418525: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00418527: je 0x41852d */ if (fZ) goto L_0041852d;
L_00418529:; BB(0x00418529);
    /* 00418529: mov al, 0x50 */ r_eax = (r_eax & 0xffffff00u) | ((0x50u) & 0xffu);
    /* 0041852b: jmp 0x41853a */ goto L_0041853a;
L_0041852d:; BB(0x0041852d);
    /* 0041852d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0041852f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00418532: call 0x418400 */ r_esp -= 4; W32(r_esp, 0x418537u); f_00418400();
    /* 00418537: mov al, byte ptr [eax + 2] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x2u))) & 0xffu);
L_0041853a:; BB(0x0041853a);
    /* 0041853a: mov esp, ebp */ r_esp = r_ebp;
    /* 0041853c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041853d: ret  */ FN_RET(0x00418510); r_esp += 4; return;
}

void f_00418540(void) /* sub_418540 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00418540);
    /* 00418540: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00418541: mov ebp, esp */ r_ebp = r_esp;
    /* 00418543: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00418544: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00418547: mov ecx, dword ptr [0x790320] */ r_ecx = R32((u32)(0x790320u));
    /* 0041854d: call 0x5da830 */ r_esp -= 4; W32(r_esp, 0x418552u); f_005da830();
    /* 00418552: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00418555: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00418557: je 0x41855d */ if (fZ) goto L_0041855d;
L_00418559:; BB(0x00418559);
    /* 00418559: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0041855b: jmp 0x41856e */ goto L_0041856e;
L_0041855d:; BB(0x0041855d);
    /* 0041855d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0041855f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00418562: call 0x418400 */ r_esp -= 4; W32(r_esp, 0x418567u); f_00418400();
    /* 00418567: cmp byte ptr [eax + 3], 0 */ {  u32 a = R8((u32)(r_eax+0x3u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0041856b: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
L_0041856e:; BB(0x0041856e);
    /* 0041856e: mov esp, ebp */ r_esp = r_ebp;
    /* 00418570: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00418571: ret  */ FN_RET(0x00418540); r_esp += 4; return;
}

void f_00418580(void) /* sub_418580 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00418580);
    /* 00418580: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00418581: mov ebp, esp */ r_ebp = r_esp;
    /* 00418583: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00418584: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00418587: mov ecx, dword ptr [0x790320] */ r_ecx = R32((u32)(0x790320u));
    /* 0041858d: call 0x5da830 */ r_esp -= 4; W32(r_esp, 0x418592u); f_005da830();
    /* 00418592: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00418595: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00418597: je 0x41859d */ if (fZ) goto L_0041859d;
L_00418599:; BB(0x00418599);
    /* 00418599: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0041859b: jmp 0x4185b0 */ goto L_004185b0;
L_0041859d:; BB(0x0041859d);
    /* 0041859d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0041859f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004185a2: call 0x418400 */ r_esp -= 4; W32(r_esp, 0x4185a7u); f_00418400();
    /* 004185a7: movsx ecx, byte ptr [eax + 4] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x4u));
    /* 004185ab: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004185ad: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
L_004185b0:; BB(0x004185b0);
    /* 004185b0: mov esp, ebp */ r_esp = r_ebp;
    /* 004185b2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004185b3: ret  */ FN_RET(0x00418580); r_esp += 4; return;
}

void f_004185c0(void) /* sub_4185C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004185c0);
    /* 004185c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004185c1: mov ebp, esp */ r_ebp = r_esp;
    /* 004185c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004185c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004185c7: mov ecx, dword ptr [0x790320] */ r_ecx = R32((u32)(0x790320u));
    /* 004185cd: call 0x5da830 */ r_esp -= 4; W32(r_esp, 0x4185d2u); f_005da830();
    /* 004185d2: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004185d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004185d7: je 0x4185dd */ if (fZ) goto L_004185dd;
L_004185d9:; BB(0x004185d9);
    /* 004185d9: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004185db: jmp 0x4185ee */ goto L_004185ee;
L_004185dd:; BB(0x004185dd);
    /* 004185dd: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004185df: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004185e2: call 0x418400 */ r_esp -= 4; W32(r_esp, 0x4185e7u); f_00418400();
    /* 004185e7: cmp byte ptr [eax + 5], 0 */ {  u32 a = R8((u32)(r_eax+0x5u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 004185eb: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
L_004185ee:; BB(0x004185ee);
    /* 004185ee: mov esp, ebp */ r_esp = r_ebp;
    /* 004185f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004185f1: ret  */ FN_RET(0x004185c0); r_esp += 4; return;
}

void f_00418600(void) /* sub_418600 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00418600);
    /* 00418600: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00418601: mov ebp, esp */ r_ebp = r_esp;
    /* 00418603: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00418606: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00418609: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 00418610: mov dword ptr [ebp - 8], 3 */ W32((u32)(r_ebp+0xfffffff8u), 0x3u);
    /* 00418617: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0041861e: mov ecx, dword ptr [0x790320] */ r_ecx = R32((u32)(0x790320u));
    /* 00418624: call 0x5da830 */ r_esp -= 4; W32(r_esp, 0x418629u); f_005da830();
    /* 00418629: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0041862c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041862e: je 0x418634 */ if (fZ) goto L_00418634;
L_00418630:; BB(0x00418630);
    /* 00418630: mov al, 3 */ r_eax = (r_eax & 0xffffff00u) | ((0x3u) & 0xffu);
    /* 00418632: jmp 0x418646 */ goto L_00418646;
L_00418634:; BB(0x00418634);
    /* 00418634: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00418636: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00418639: call 0x418400 */ r_esp -= 4; W32(r_esp, 0x41863eu); f_00418400();
    /* 0041863e: movsx ecx, byte ptr [eax + 6] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x6u));
    /* 00418642: mov al, byte ptr [ebp + ecx*4 - 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+r_ecx*4+0xfffffff4u))) & 0xffu);
L_00418646:; BB(0x00418646);
    /* 00418646: mov esp, ebp */ r_esp = r_ebp;
    /* 00418648: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00418649: ret  */ FN_RET(0x00418600); r_esp += 4; return;
}

void f_00418650(void) /* sub_418650 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00418650);
    /* 00418650: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00418651: mov ebp, esp */ r_ebp = r_esp;
    /* 00418653: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00418654: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00418657: mov ecx, dword ptr [0x790320] */ r_ecx = R32((u32)(0x790320u));
    /* 0041865d: call 0x5da830 */ r_esp -= 4; W32(r_esp, 0x418662u); f_005da830();
    /* 00418662: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00418665: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00418667: je 0x41866d */ if (fZ) goto L_0041866d;
L_00418669:; BB(0x00418669);
    /* 00418669: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0041866b: jmp 0x41867e */ goto L_0041867e;
L_0041866d:; BB(0x0041866d);
    /* 0041866d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0041866f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00418672: call 0x418400 */ r_esp -= 4; W32(r_esp, 0x418677u); f_00418400();
    /* 00418677: cmp byte ptr [eax + 7], 0 */ {  u32 a = R8((u32)(r_eax+0x7u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0041867b: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
L_0041867e:; BB(0x0041867e);
    /* 0041867e: mov esp, ebp */ r_esp = r_ebp;
    /* 00418680: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00418681: ret  */ FN_RET(0x00418650); r_esp += 4; return;
}

void f_00418690(void) /* sub_418690 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00418690);
    /* 00418690: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00418691: mov ebp, esp */ r_ebp = r_esp;
    /* 00418693: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00418694: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00418697: mov ecx, dword ptr [0x790320] */ r_ecx = R32((u32)(0x790320u));
    /* 0041869d: call 0x5da830 */ r_esp -= 4; W32(r_esp, 0x4186a2u); f_005da830();
    /* 004186a2: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004186a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004186a7: je 0x4186ad */ if (fZ) goto L_004186ad;
L_004186a9:; BB(0x004186a9);
    /* 004186a9: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004186ab: jmp 0x4186be */ goto L_004186be;
L_004186ad:; BB(0x004186ad);
    /* 004186ad: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004186af: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004186b2: call 0x418400 */ r_esp -= 4; W32(r_esp, 0x4186b7u); f_00418400();
    /* 004186b7: cmp byte ptr [eax + 8], 0 */ {  u32 a = R8((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 004186bb: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
L_004186be:; BB(0x004186be);
    /* 004186be: mov esp, ebp */ r_esp = r_ebp;
    /* 004186c0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004186c1: ret  */ FN_RET(0x00418690); r_esp += 4; return;
}

void f_004186d0(void) /* sub_4186D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004186d0);
    /* 004186d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004186d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004186d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004186d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004186d7: mov ecx, dword ptr [0x790320] */ r_ecx = R32((u32)(0x790320u));
    /* 004186dd: call 0x5da830 */ r_esp -= 4; W32(r_esp, 0x4186e2u); f_005da830();
    /* 004186e2: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004186e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004186e7: je 0x4186ed */ if (fZ) goto L_004186ed;
L_004186e9:; BB(0x004186e9);
    /* 004186e9: mov al, 4 */ r_eax = (r_eax & 0xffffff00u) | ((0x4u) & 0xffu);
    /* 004186eb: jmp 0x4186fa */ goto L_004186fa;
L_004186ed:; BB(0x004186ed);
    /* 004186ed: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004186ef: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004186f2: call 0x418400 */ r_esp -= 4; W32(r_esp, 0x4186f7u); f_00418400();
    /* 004186f7: mov al, byte ptr [eax + 9] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x9u))) & 0xffu);
L_004186fa:; BB(0x004186fa);
    /* 004186fa: mov esp, ebp */ r_esp = r_ebp;
    /* 004186fc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004186fd: ret  */ FN_RET(0x004186d0); r_esp += 4; return;
}

void f_00418700(void) /* sub_418700 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00418700);
    /* 00418700: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00418701: mov ebp, esp */ r_ebp = r_esp;
    /* 00418703: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00418706: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00418709: mov ecx, dword ptr [0x790320] */ r_ecx = R32((u32)(0x790320u));
    /* 0041870f: call 0x5da830 */ r_esp -= 4; W32(r_esp, 0x418714u); f_005da830();
    /* 00418714: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00418717: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00418719: je 0x418729 */ if (fZ) goto L_00418729;
L_0041871b:; BB(0x0041871b);
    /* 0041871b: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00418721: mov eax, dword ptr [ecx + 0x4ef4] */ r_eax = R32((u32)(r_ecx+0x4ef4u));
    /* 00418727: jmp 0x418746 */ goto L_00418746;
L_00418729:; BB(0x00418729);
    /* 00418729: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041872c: mov eax, dword ptr [edx + 0x464] */ r_eax = R32((u32)(r_edx+0x464u));
    /* 00418732: mov ecx, dword ptr [eax + 0x80c] */ r_ecx = R32((u32)(r_eax+0x80cu));
    /* 00418738: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0041873b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041873e: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0041873f: mov ecx, 0x34 */ r_ecx = 0x34u;
    /* 00418744: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00418744, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00418744, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
L_00418746:; BB(0x00418746);
    /* 00418746: mov esp, ebp */ r_esp = r_ebp;
    /* 00418748: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00418749: ret  */ FN_RET(0x00418700); r_esp += 4; return;
}

void f_00418750(void) /* sub_418750 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00418750);
    /* 00418750: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00418751: mov ebp, esp */ r_ebp = r_esp;
    /* 00418753: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00418755: push 0x69dec9 */ { u32 v = 0x69dec9u; r_esp -= 4; W32(r_esp, v); }
    /* 0041875a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00418760: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00418761: sub esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00418764: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00418769: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041876b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041876c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0041876f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00418775: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 00418778: mov dword ptr [ebp - 0x3c], 5 */ W32((u32)(r_ebp+0xffffffc4u), 0x5u);
    /* 0041877f: mov dword ptr [ebp - 0x38], 5 */ W32((u32)(r_ebp+0xffffffc8u), 0x5u);
    /* 00418786: mov dword ptr [ebp - 0x34], 6 */ W32((u32)(r_ebp+0xffffffccu), 0x6u);
    /* 0041878d: mov dword ptr [ebp - 0x30], 5 */ W32((u32)(r_ebp+0xffffffd0u), 0x5u);
    /* 00418794: mov dword ptr [ebp - 0x2c], 2 */ W32((u32)(r_ebp+0xffffffd4u), 0x2u);
    /* 0041879b: mov dword ptr [ebp - 0x28], 5 */ W32((u32)(r_ebp+0xffffffd8u), 0x5u);
    /* 004187a2: mov dword ptr [ebp - 0x24], 3 */ W32((u32)(r_ebp+0xffffffdcu), 0x3u);
    /* 004187a9: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
    /* 004187b0: mov dword ptr [ebp - 0x1c], 2 */ W32((u32)(r_ebp+0xffffffe4u), 0x2u);
    /* 004187b7: mov dword ptr [ebp - 0x18], 4 */ W32((u32)(r_ebp+0xffffffe8u), 0x4u);
    /* 004187be: mov dword ptr [ebp - 0x14], 6 */ W32((u32)(r_ebp+0xffffffecu), 0x6u);
    /* 004187c5: mov ecx, dword ptr [0x790320] */ r_ecx = R32((u32)(0x790320u));
    /* 004187cb: call 0x5da830 */ r_esp -= 4; W32(r_esp, 0x4187d0u); f_005da830();
    /* 004187d0: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004187d3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004187d5: je 0x4187e8 */ if (fZ) goto L_004187e8;
L_004187d7:; BB(0x004187d7);
    /* 004187d7: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 004187dd: mov edx, dword ptr [ecx + 0x4ef4] */ r_edx = R32((u32)(r_ecx+0x4ef4u));
    /* 004187e3: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 004187e6: jmp 0x4187fd */ goto L_004187fd;
L_004187e8:; BB(0x004187e8);
    /* 004187e8: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004187ea: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 004187ed: call 0x418400 */ r_esp -= 4; W32(r_esp, 0x4187f2u); f_00418400();
    /* 004187f2: movsx eax, byte ptr [eax + 1] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+0x1u));
    /* 004187f6: mov ecx, dword ptr [ebp + eax*4 - 0x20] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffe0u));
    /* 004187fa: mov dword ptr [ebp - 0x60], ecx */ W32((u32)(r_ebp+0xffffffa0u), r_ecx);
L_004187fd:; BB(0x004187fd);
    /* 004187fd: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00418800: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 00418803: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 00418806: cmp dword ptr [eax + 0x464], 0 */ {  u32 a = R32((u32)(r_eax+0x464u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041880d: jne 0x418859 */ if (!fZ) goto L_00418859;
L_0041880f:; BB(0x0041880f);
    /* 0041880f: push 0x810 */ { u32 v = 0x810u; r_esp -= 4; W32(r_esp, v); }
    /* 00418814: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x418819u); f_00686d82();
    /* 00418819: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041881c: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0041881f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00418826: cmp dword ptr [ebp - 0x48], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041882a: je 0x418839 */ if (fZ) goto L_00418839;
L_0041882c:; BB(0x0041882c);
    /* 0041882c: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0041882f: call 0x642e10 */ r_esp -= 4; W32(r_esp, 0x418834u); f_00642e10();
    /* 00418834: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 00418837: jmp 0x418840 */ goto L_00418840;
L_00418839:; BB(0x00418839);
    /* 00418839: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
L_00418840:; BB(0x00418840);
    /* 00418840: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 00418843: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 00418846: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0041884d: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00418850: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00418853: mov dword ptr [edx + 0x464], eax */ W32((u32)(r_edx+0x464u), r_eax);
L_00418859:; BB(0x00418859);
    /* 00418859: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0041885c: mov edx, dword ptr [ebp + ecx*4 - 0x3c] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffc4u));
    /* 00418860: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00418861: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 00418864: mov ecx, dword ptr [eax + 0x464] */ r_ecx = R32((u32)(r_eax+0x464u));
    /* 0041886a: call 0x642e70 */ r_esp -= 4; W32(r_esp, 0x41886fu); f_00642e70();
    /* 0041886f: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00418872: call 0x418ed0 */ r_esp -= 4; W32(r_esp, 0x418877u); f_00418ed0();
    /* 00418877: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0041887e: jmp 0x418889 */ goto L_00418889;
L_00418880:; BB(0x00418880);
    /* 00418880: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00418883: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00418886: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_00418889:; BB(0x00418889);
    /* 00418889: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041888d: jge 0x418928 */ if ((fS==fO)) goto L_00418928;
L_00418893:; BB(0x00418893);
    /* 00418893: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 00418898: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x41889du); f_00686d82();
    /* 0041889d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004188a0: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 004188a3: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004188aa: cmp dword ptr [ebp - 0x50], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004188ae: je 0x4188bd */ if (fZ) goto L_004188bd;
L_004188b0:; BB(0x004188b0);
    /* 004188b0: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004188b3: call 0x41d860 */ r_esp -= 4; W32(r_esp, 0x4188b8u); f_0041d860();
    /* 004188b8: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 004188bb: jmp 0x4188c4 */ goto L_004188c4;
L_004188bd:; BB(0x004188bd);
    /* 004188bd: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
L_004188c4:; BB(0x004188c4);
    /* 004188c4: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 004188c7: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 004188ca: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004188d1: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004188d4: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 004188d7: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 004188da: mov dword ptr [ecx + eax*4 + 0x468], edx */ W32((u32)(r_ecx+r_eax*4+0x468u), r_edx);
    /* 004188e1: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004188e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004188e5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004188e8: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 004188eb: mov ecx, dword ptr [edx + ecx*4 + 0x468] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x468u));
    /* 004188f2: call 0x5f53e0 */ r_esp -= 4; W32(r_esp, 0x4188f7u); f_005f53e0();
    /* 004188f7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004188f9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004188fb: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x418900u); f_0064c8a0();
    /* 00418900: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00418903: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 00418906: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 00418909: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041890c: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0041890f: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00418912: mov dword ptr [ecx + eax*8 + 0x478], edx */ W32((u32)(r_ecx+r_eax*8+0x478u), r_edx);
    /* 00418919: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 0041891c: mov dword ptr [ecx + eax*8 + 0x47c], edx */ W32((u32)(r_ecx+r_eax*8+0x47cu), r_edx);
    /* 00418923: jmp 0x418880 */ goto L_00418880;
L_00418928:; BB(0x00418928);
    /* 00418928: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 0041892b: mov byte ptr [eax + 0x4d8], 0 */ W8((u32)(r_eax+0x4d8u), 0x0u);
    /* 00418932: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00418935: mov byte ptr [ecx + 0x4cc], 0 */ W8((u32)(r_ecx+0x4ccu), 0x0u);
    /* 0041893c: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0041893f: mov dword ptr [edx + 0x4c8], 0 */ W32((u32)(r_edx+0x4c8u), 0x0u);
    /* 00418949: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 0041894c: mov dword ptr [eax + 0x4dc], 0 */ W32((u32)(r_eax+0x4dcu), 0x0u);
    /* 00418956: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00418959: mov dword ptr [ecx + 0x4e4], 0 */ W32((u32)(r_ecx+0x4e4u), 0x0u);
    /* 00418963: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00418966: mov dword ptr [edx + 0x4e0], 0 */ W32((u32)(r_edx+0x4e0u), 0x0u);
    /* 00418970: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 00418973: mov dword ptr [eax + 0x4e8], 0 */ W32((u32)(r_eax+0x4e8u), 0x0u);
    /* 0041897d: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00418980: call 0x4189a0 */ r_esp -= 4; W32(r_esp, 0x418985u); f_004189a0();
    /* 00418985: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00418988: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0041898f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00418990: mov esp, ebp */ r_esp = r_ebp;
    /* 00418992: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00418993: ret  */ FN_RET(0x00418750); r_esp += 4; return;
}

void f_004189a0(void) /* sub_4189A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004189a0);
    /* 004189a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004189a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004189a3: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004189a6: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 004189a9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004189ab: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004189ad: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004189b0: call 0x4190b0 */ r_esp -= 4; W32(r_esp, 0x4189b5u); f_004190b0();
    /* 004189b5: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004189b8: call 0x418d60 */ r_esp -= 4; W32(r_esp, 0x4189bdu); f_00418d60();
    /* 004189bd: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004189c4: jmp 0x4189cf */ goto L_004189cf;
L_004189c6:; BB(0x004189c6);
    /* 004189c6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004189c9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004189cc: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_004189cf:; BB(0x004189cf);
    /* 004189cf: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004189d3: jge 0x4189e9 */ if ((fS==fO)) goto L_004189e9;
L_004189d5:; BB(0x004189d5);
    /* 004189d5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004189d8: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004189db: mov ecx, dword ptr [edx + ecx*4 + 0x468] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x468u));
    /* 004189e2: call 0x5cb9b0 */ r_esp -= 4; W32(r_esp, 0x4189e7u); f_005cb9b0();
    /* 004189e7: jmp 0x4189c6 */ goto L_004189c6;
L_004189e9:; BB(0x004189e9);
    /* 004189e9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004189f0: jmp 0x4189fb */ goto L_004189fb;
L_004189f2:; BB(0x004189f2);
    /* 004189f2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004189f5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004189f8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_004189fb:; BB(0x004189fb);
    /* 004189fb: cmp dword ptr [ebp - 4], 0xf */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004189ff: jge 0x418a27 */ if ((fS==fO)) goto L_00418a27;
L_00418a01:; BB(0x00418a01);
    /* 00418a01: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00418a03: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00418a06: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00418a07: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00418a09: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00418a0b: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00418a0e: call 0x419370 */ r_esp -= 4; W32(r_esp, 0x418a13u); f_00419370();
    /* 00418a13: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00418a15: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00418a18: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00418a19: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00418a1b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00418a1d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00418a20: call 0x419420 */ r_esp -= 4; W32(r_esp, 0x418a25u); f_00419420();
    /* 00418a25: jmp 0x4189f2 */ goto L_004189f2;
L_00418a27:; BB(0x00418a27);
    /* 00418a27: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00418a2e: jmp 0x418a39 */ goto L_00418a39;
L_00418a30:; BB(0x00418a30);
    /* 00418a30: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00418a33: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00418a36: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00418a39:; BB(0x00418a39);
    /* 00418a39: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00418a3d: jge 0x418aa1 */ if ((fS==fO)) goto L_00418aa1;
L_00418a3f:; BB(0x00418a3f);
    /* 00418a3f: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00418a46: jmp 0x418a51 */ goto L_00418a51;
L_00418a48:; BB(0x00418a48);
    /* 00418a48: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00418a4b: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00418a4e: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_00418a51:; BB(0x00418a51);
    /* 00418a51: cmp dword ptr [ebp - 0xc], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00418a55: jge 0x418a9f */ if ((fS==fO)) goto L_00418a9f;
L_00418a57:; BB(0x00418a57);
    /* 00418a57: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00418a5e: jmp 0x418a69 */ goto L_00418a69;
L_00418a60:; BB(0x00418a60);
    /* 00418a60: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00418a63: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00418a66: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_00418a69:; BB(0x00418a69);
    /* 00418a69: cmp dword ptr [ebp - 8], 0x16 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00418a6d: jge 0x418a9d */ if ((fS==fO)) goto L_00418a9d;
L_00418a6f:; BB(0x00418a6f);
    /* 00418a6f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00418a71: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00418a74: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00418a75: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00418a78: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00418a79: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00418a7c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00418a7d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00418a80: call 0x419370 */ r_esp -= 4; W32(r_esp, 0x418a85u); f_00419370();
    /* 00418a85: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00418a87: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00418a8a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00418a8b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00418a8e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00418a8f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00418a92: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00418a93: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00418a96: call 0x419420 */ r_esp -= 4; W32(r_esp, 0x418a9bu); f_00419420();
    /* 00418a9b: jmp 0x418a60 */ goto L_00418a60;
L_00418a9d:; BB(0x00418a9d);
    /* 00418a9d: jmp 0x418a48 */ goto L_00418a48;
L_00418a9f:; BB(0x00418a9f);
    /* 00418a9f: jmp 0x418a30 */ goto L_00418a30;
L_00418aa1:; BB(0x00418aa1);
    /* 00418aa1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00418aa8: jmp 0x418ab3 */ goto L_00418ab3;
L_00418aaa:; BB(0x00418aaa);
    /* 00418aaa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00418aad: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00418ab0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00418ab3:; BB(0x00418ab3);
    /* 00418ab3: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00418ab7: jge 0x418bb7 */ if ((fS==fO)) goto L_00418bb7;
L_00418abd:; BB(0x00418abd);
    /* 00418abd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00418ac0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00418ac1: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x418ac6u); f_005dcb00();
    /* 00418ac6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00418ac9: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00418acc: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00418acf: mov byte ptr [edx + 0x4a2], 0 */ W8((u32)(r_edx+0x4a2u), 0x0u);
    /* 00418ad6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00418ad9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00418ada: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x418adfu); f_005dcb00();
    /* 00418adf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00418ae2: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00418ae5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00418ae8: mov byte ptr [ecx + 0x4a0], 0 */ W8((u32)(r_ecx+0x4a0u), 0x0u);
    /* 00418aef: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00418af2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00418af3: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x418af8u); f_005dcb00();
    /* 00418af8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00418afb: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00418afe: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00418b01: mov byte ptr [eax + 0x4a1], 0 */ W8((u32)(r_eax+0x4a1u), 0x0u);
    /* 00418b08: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00418b0f: jmp 0x418b1a */ goto L_00418b1a;
L_00418b11:; BB(0x00418b11);
    /* 00418b11: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00418b14: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00418b17: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_00418b1a:; BB(0x00418b1a);
    /* 00418b1a: cmp dword ptr [ebp - 0xc], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00418b1e: jge 0x418b62 */ if ((fS==fO)) goto L_00418b62;
L_00418b20:; BB(0x00418b20);
    /* 00418b20: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00418b23: imul edx, edx, 0x118 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x118u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00418b29: add edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00418b2c: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00418b2f: mov byte ptr [eax + edx + 0x10c], 0 */ W8((u32)(r_eax+r_edx+0x10cu), 0x0u);
    /* 00418b37: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00418b39: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00418b3c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00418b3d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00418b40: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00418b41: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00418b44: call 0x4191f0 */ r_esp -= 4; W32(r_esp, 0x418b49u); f_004191f0();
    /* 00418b49: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00418b4c: imul eax, eax, 0x118 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x118u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00418b52: add eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00418b55: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00418b58: mov byte ptr [ecx + eax + 0x114], 0 */ W8((u32)(r_ecx+r_eax+0x114u), 0x0u);
    /* 00418b60: jmp 0x418b11 */ goto L_00418b11;
L_00418b62:; BB(0x00418b62);
    /* 00418b62: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00418b65: imul edx, edx, 0x118 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x118u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00418b6b: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00418b6e: mov byte ptr [eax + edx + 0x119], 0 */ W8((u32)(r_eax+r_edx+0x119u), 0x0u);
    /* 00418b76: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00418b79: imul ecx, ecx, 0x118 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x118u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00418b7f: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00418b82: mov byte ptr [edx + ecx + 0x118], 0 */ W8((u32)(r_edx+r_ecx+0x118u), 0x0u);
    /* 00418b8a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00418b8d: imul eax, eax, 0x118 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x118u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00418b93: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00418b96: mov byte ptr [ecx + eax + 0x11a], 0 */ W8((u32)(r_ecx+r_eax+0x11au), 0x0u);
    /* 00418b9e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00418ba1: imul edx, edx, 0x118 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x118u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00418ba7: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00418baa: mov byte ptr [eax + edx + 0x11b], 0 */ W8((u32)(r_eax+r_edx+0x11bu), 0x0u);
    /* 00418bb2: jmp 0x418aaa */ goto L_00418aaa;
L_00418bb7:; BB(0x00418bb7);
    /* 00418bb7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00418bbe: jmp 0x418bc9 */ goto L_00418bc9;
L_00418bc0:; BB(0x00418bc0);
    /* 00418bc0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00418bc3: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00418bc6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00418bc9:; BB(0x00418bc9);
    /* 00418bc9: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00418bcd: jge 0x418be2 */ if ((fS==fO)) goto L_00418be2;
L_00418bcf:; BB(0x00418bcf);
    /* 00418bcf: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00418bd2: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00418bd5: mov dword ptr [eax + edx*4 + 0x4f4], 0 */ W32((u32)(r_eax+r_edx*4+0x4f4u), 0x0u);
    /* 00418be0: jmp 0x418bc0 */ goto L_00418bc0;
L_00418be2:; BB(0x00418be2);
    /* 00418be2: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00418be5: mov dword ptr [ecx + 0x4d4], 0xffffffff */ W32((u32)(r_ecx+0x4d4u), 0xffffffffu);
    /* 00418bef: mov esp, ebp */ r_esp = r_ebp;
    /* 00418bf1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00418bf2: ret  */ FN_RET(0x004189a0); r_esp += 4; return;
}

void f_00418c00(void) /* sub_418C00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00418c00);
    /* 00418c00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00418c01: mov ebp, esp */ r_ebp = r_esp;
    /* 00418c03: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00418c06: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00418c09: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00418c10: jmp 0x418c1b */ goto L_00418c1b;
L_00418c12:; BB(0x00418c12);
    /* 00418c12: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00418c15: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00418c18: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00418c1b:; BB(0x00418c1b);
    /* 00418c1b: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00418c1f: jge 0x418c9c */ if ((fS==fO)) goto L_00418c9c;
L_00418c21:; BB(0x00418c21);
    /* 00418c21: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00418c24: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00418c25: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x418c2au); f_005dcb00();
    /* 00418c2a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00418c2d: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00418c30: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00418c33: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x418c38u); f_0063aac0();
    /* 00418c38: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00418c3a: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00418c3d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00418c3f: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00418c43: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00418c46: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00418c49: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00418c4b: jne 0x418c97 */ if (!fZ) goto L_00418c97;
L_00418c4d:; BB(0x00418c4d);
    /* 00418c4d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00418c50: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00418c51: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x418c56u); f_005dcb00();
    /* 00418c56: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00418c59: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00418c5c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00418c5f: mov cl, byte ptr [eax + 0x4a1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x4a1u))) & 0xffu);
    /* 00418c65: mov byte ptr [ebp - 0x11], cl */ W8((u32)(r_ebp+0xffffffefu), (u8)r_ecx);
    /* 00418c68: movzx edx, byte ptr [ebp - 0x11] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffefu));
    /* 00418c6c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00418c6e: jne 0x418c97 */ if (!fZ) goto L_00418c97;
L_00418c70:; BB(0x00418c70);
    /* 00418c70: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00418c73: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00418c74: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x418c79u); f_005dcb00();
    /* 00418c79: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00418c7c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00418c7f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00418c82: mov dl, byte ptr [ecx + 0x4a0] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4a0u))) & 0xffu);
    /* 00418c88: mov byte ptr [ebp - 0x19], dl */ W8((u32)(r_ebp+0xffffffe7u), (u8)r_edx);
    /* 00418c8b: movzx eax, byte ptr [ebp - 0x19] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffe7u));
    /* 00418c8f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00418c91: jne 0x418c97 */ if (!fZ) goto L_00418c97;
L_00418c93:; BB(0x00418c93);
    /* 00418c93: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00418c95: jmp 0x418c9e */ goto L_00418c9e;
L_00418c97:; BB(0x00418c97);
    /* 00418c97: jmp 0x418c12 */ goto L_00418c12;
L_00418c9c:; BB(0x00418c9c);
    /* 00418c9c: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00418c9e:; BB(0x00418c9e);
    /* 00418c9e: mov esp, ebp */ r_esp = r_ebp;
    /* 00418ca0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00418ca1: ret  */ FN_RET(0x00418c00); r_esp += 4; return;
}

void f_00418d60(void) /* sub_418D60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00418d60);
    /* 00418d60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00418d61: mov ebp, esp */ r_ebp = r_esp;
    /* 00418d63: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00418d66: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00418d67: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00418d6a: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
    /* 00418d71: mov dword ptr [ebp - 0xc], 2 */ W32((u32)(r_ebp+0xfffffff4u), 0x2u);
    /* 00418d78: mov dword ptr [ebp - 8], 4 */ W32((u32)(r_ebp+0xfffffff8u), 0x4u);
    /* 00418d7f: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 00418d86: mov dword ptr [ebp - 0x2c], 5 */ W32((u32)(r_ebp+0xffffffd4u), 0x5u);
    /* 00418d8d: mov dword ptr [ebp - 0x28], 5 */ W32((u32)(r_ebp+0xffffffd8u), 0x5u);
    /* 00418d94: mov dword ptr [ebp - 0x24], 6 */ W32((u32)(r_ebp+0xffffffdcu), 0x6u);
    /* 00418d9b: mov dword ptr [ebp - 0x20], 5 */ W32((u32)(r_ebp+0xffffffe0u), 0x5u);
    /* 00418da2: mov dword ptr [ebp - 0x1c], 2 */ W32((u32)(r_ebp+0xffffffe4u), 0x2u);
    /* 00418da9: mov dword ptr [ebp - 0x18], 5 */ W32((u32)(r_ebp+0xffffffe8u), 0x5u);
    /* 00418db0: mov dword ptr [ebp - 0x14], 3 */ W32((u32)(r_ebp+0xffffffecu), 0x3u);
    /* 00418db7: mov ecx, dword ptr [0x790320] */ r_ecx = R32((u32)(0x790320u));
    /* 00418dbd: call 0x5da830 */ r_esp -= 4; W32(r_esp, 0x418dc2u); f_005da830();
    /* 00418dc2: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00418dc5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00418dc7: jne 0x418e14 */ if (!fZ) goto L_00418e14;
L_00418dc9:; BB(0x00418dc9);
    /* 00418dc9: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00418dcc: call 0x418700 */ r_esp -= 4; W32(r_esp, 0x418dd1u); f_00418700();
    /* 00418dd1: mov esi, eax */ r_esi = r_eax;
    /* 00418dd3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00418dd5: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00418dd8: call 0x418400 */ r_esp -= 4; W32(r_esp, 0x418dddu); f_00418400();
    /* 00418ddd: movsx ecx, byte ptr [eax + 1] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x1u));
    /* 00418de1: cmp esi, dword ptr [ebp + ecx*4 - 0x10] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+r_ecx*4+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00418de5: je 0x418e14 */ if (fZ) goto L_00418e14;
L_00418de7:; BB(0x00418de7);
    /* 00418de7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00418de9: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00418dec: call 0x418400 */ r_esp -= 4; W32(r_esp, 0x418df1u); f_00418400();
    /* 00418df1: movsx edx, byte ptr [eax + 1] */ r_edx = (u32)(i32)(i8)R8((u32)(r_eax+0x1u));
    /* 00418df5: mov eax, dword ptr [ebp + edx*4 - 0x10] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xfffffff0u));
    /* 00418df9: mov ecx, dword ptr [ebp + eax*4 - 0x2c] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffd4u));
    /* 00418dfd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00418dfe: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00418e01: mov ecx, dword ptr [edx + 0x464] */ r_ecx = R32((u32)(r_edx+0x464u));
    /* 00418e07: call 0x642e70 */ r_esp -= 4; W32(r_esp, 0x418e0cu); f_00642e70();
    /* 00418e0c: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00418e0f: call 0x418ed0 */ r_esp -= 4; W32(r_esp, 0x418e14u); f_00418ed0();
L_00418e14:; BB(0x00418e14);
    /* 00418e14: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00418e15: mov esp, ebp */ r_esp = r_ebp;
    /* 00418e17: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00418e18: ret  */ FN_RET(0x00418d60); r_esp += 4; return;
}

void f_00418e20(void) /* sub_418E20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00418e20);
    /* 00418e20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00418e21: mov ebp, esp */ r_ebp = r_esp;
    /* 00418e23: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00418e26: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00418e29: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00418e2c: movzx ecx, byte ptr [eax + 0x4cc] */ r_ecx = (u32)R8((u32)(r_eax+0x4ccu));
    /* 00418e33: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00418e35: jne 0x418e53 */ if (!fZ) goto L_00418e53;
L_00418e37:; BB(0x00418e37);
    /* 00418e37: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00418e3a: call 0x418e70 */ r_esp -= 4; W32(r_esp, 0x418e3fu); f_00418e70();
    /* 00418e3f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00418e42: cmp dword ptr [edx + 0x4c8], eax */ {  u32 a = R32((u32)(r_edx+0x4c8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00418e48: jge 0x418e53 */ if ((fS==fO)) goto L_00418e53;
L_00418e4a:; BB(0x00418e4a);
    /* 00418e4a: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00418e51: jmp 0x418e5a */ goto L_00418e5a;
L_00418e53:; BB(0x00418e53);
    /* 00418e53: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
L_00418e5a:; BB(0x00418e5a);
    /* 00418e5a: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 00418e5d: mov esp, ebp */ r_esp = r_ebp;
    /* 00418e5f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00418e60: ret  */ FN_RET(0x00418e20); r_esp += 4; return;
}

void f_00418e70(void) /* sub_418E70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00418e70);
    /* 00418e70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00418e71: mov ebp, esp */ r_ebp = r_esp;
    /* 00418e73: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00418e76: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00418e79: mov ecx, dword ptr [0x790320] */ r_ecx = R32((u32)(0x790320u));
    /* 00418e7f: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x418e84u); f_005da7b0();
    /* 00418e84: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00418e87: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00418e89: je 0x418e94 */ if (fZ) goto L_00418e94;
L_00418e8b:; BB(0x00418e8b);
    /* 00418e8b: mov dword ptr [ebp - 0x10], 0x50 */ W32((u32)(r_ebp+0xfffffff0u), 0x50u);
    /* 00418e92: jmp 0x418ea2 */ goto L_00418ea2;
L_00418e94:; BB(0x00418e94);
    /* 00418e94: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00418e97: call 0x418510 */ r_esp -= 4; W32(r_esp, 0x418e9cu); f_00418510();
    /* 00418e9c: movsx ecx, al */ r_ecx = (u32)(i32)(i8)(u8)r_eax;
    /* 00418e9f: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_00418ea2:; BB(0x00418ea2);
    /* 00418ea2: fild dword ptr [ebp - 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff0u)));
    /* 00418ea5: fstp qword ptr [ebp - 8] */ W_F64((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 00418ea8: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00418eab: mov eax, dword ptr [edx + 0x464] */ r_eax = R32((u32)(r_edx+0x464u));
    /* 00418eb1: fild dword ptr [eax + 0x80c] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x80cu)));
    /* 00418eb7: fld qword ptr [ebp - 8] */ FPUSH(R_F64((u32)(r_ebp+0xfffffff8u)));
    /* 00418eba: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 00418ec0: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00418ec2: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x418ec7u); f_00686cc0();
    /* 00418ec7: mov esp, ebp */ r_esp = r_ebp;
    /* 00418ec9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00418eca: ret  */ FN_RET(0x00418e70); r_esp += 4; return;
}

void f_00418ed0(void) /* sub_418ED0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00418ed0);
    /* 00418ed0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00418ed1: mov ebp, esp */ r_ebp = r_esp;
    /* 00418ed3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00418ed4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00418ed7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00418ed9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00418edb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00418ede: mov ecx, dword ptr [eax + 0x464] */ r_ecx = R32((u32)(r_eax+0x464u));
    /* 00418ee4: call 0x6437d0 */ r_esp -= 4; W32(r_esp, 0x418ee9u); f_006437d0();
    /* 00418ee9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00418eec: mov dword ptr [ecx + 0x4c8], 0 */ W32((u32)(r_ecx+0x4c8u), 0x0u);
    /* 00418ef6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00418ef9: mov dword ptr [edx + 0x4dc], 0 */ W32((u32)(r_edx+0x4dcu), 0x0u);
    /* 00418f03: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00418f06: mov dword ptr [eax + 0x4e4], 0 */ W32((u32)(r_eax+0x4e4u), 0x0u);
    /* 00418f10: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00418f13: mov dword ptr [ecx + 0x4e8], 0 */ W32((u32)(r_ecx+0x4e8u), 0x0u);
    /* 00418f1d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00418f20: mov dword ptr [edx + 0x4e0], 0 */ W32((u32)(r_edx+0x4e0u), 0x0u);
    /* 00418f2a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00418f2c: push 0x6b4b08 */ { u32 v = 0x6b4b08u; r_esp -= 4; W32(r_esp, v); }
    /* 00418f31: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00418f33: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00418f35: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00418f38: mov ecx, dword ptr [eax + 0x464] */ r_ecx = R32((u32)(r_eax+0x464u));
    /* 00418f3e: call 0x643930 */ r_esp -= 4; W32(r_esp, 0x418f43u); f_00643930();
    /* 00418f43: mov esp, ebp */ r_esp = r_ebp;
    /* 00418f45: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00418f46: ret  */ FN_RET(0x00418ed0); r_esp += 4; return;
}

void f_00418f50(void) /* sub_418F50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00418f50);
    /* 00418f50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00418f51: mov ebp, esp */ r_ebp = r_esp;
    /* 00418f53: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00418f56: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00418f57: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00418f5a: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 00418f61: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00418f68: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00418f6f: jmp 0x418f7a */ goto L_00418f7a;
L_00418f71:; BB(0x00418f71);
    /* 00418f71: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00418f74: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00418f77: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00418f7a:; BB(0x00418f7a);
    /* 00418f7a: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00418f7e: jge 0x418f94 */ if ((fS==fO)) goto L_00418f94;
L_00418f80:; BB(0x00418f80);
    /* 00418f80: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00418f83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00418f84: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00418f87: call 0x419610 */ r_esp -= 4; W32(r_esp, 0x418f8cu); f_00419610();
    /* 00418f8c: add eax, dword ptr [ebp - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00418f8f: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00418f92: jmp 0x418f71 */ goto L_00418f71;
L_00418f94:; BB(0x00418f94);
    /* 00418f94: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00418f97: mov eax, dword ptr [edx + 0x464] */ r_eax = R32((u32)(r_edx+0x464u));
    /* 00418f9d: mov ecx, dword ptr [eax + 0x80c] */ r_ecx = R32((u32)(r_eax+0x80cu));
    /* 00418fa3: sub ecx, dword ptr [ebp - 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00418fa6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00418fa9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00418fb0: jmp 0x418fbb */ goto L_00418fbb;
L_00418fb2:; BB(0x00418fb2);
    /* 00418fb2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00418fb5: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00418fb8: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00418fbb:; BB(0x00418fbb);
    /* 00418fbb: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00418fbf: jge 0x419050 */ if ((fS==fO)) goto L_00419050;
L_00418fc5:; BB(0x00418fc5);
    /* 00418fc5: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00418fc8: mov ecx, dword ptr [eax + 0x464] */ r_ecx = R32((u32)(r_eax+0x464u));
    /* 00418fce: mov edx, dword ptr [ecx + 0x80c] */ r_edx = R32((u32)(r_ecx+0x80cu));
    /* 00418fd4: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00418fd7: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00418fda: jmp 0x418fe5 */ goto L_00418fe5;
L_00418fdc:; BB(0x00418fdc);
    /* 00418fdc: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00418fdf: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00418fe2: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_00418fe5:; BB(0x00418fe5);
    /* 00418fe5: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00418fe9: jle 0x41904b */ if ((fZ||fS!=fO)) goto L_0041904b;
L_00418feb:; BB(0x00418feb);
    /* 00418feb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00418fee: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00418fef: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x418ff4u); f_0062fbf0();
    /* 00418ff4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00418ff7: add eax, dword ptr [ebp - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00418ffa: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00418ffd: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00419000: mov eax, dword ptr [edx + 0x464] */ r_eax = R32((u32)(r_edx+0x464u));
    /* 00419006: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00419009: mov dx, word ptr [eax + ecx*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_eax+r_ecx*2+0x4u))) & 0xffffu);
    /* 0041900e: mov word ptr [ebp - 0x10], dx */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_edx);
    /* 00419012: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00419015: mov ecx, dword ptr [eax + 0x464] */ r_ecx = R32((u32)(r_eax+0x464u));
    /* 0041901b: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041901e: mov eax, dword ptr [edx + 0x464] */ r_eax = R32((u32)(r_edx+0x464u));
    /* 00419024: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00419027: mov esi, dword ptr [ebp - 0xc] */ r_esi = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041902a: mov cx, word ptr [ecx + esi*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ecx+r_esi*2+0x4u))) & 0xffffu);
    /* 0041902f: mov word ptr [eax + edx*2 + 4], cx */ W16((u32)(r_eax+r_edx*2+0x4u), (u16)r_ecx);
    /* 00419034: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00419037: mov eax, dword ptr [edx + 0x464] */ r_eax = R32((u32)(r_edx+0x464u));
    /* 0041903d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00419040: mov dx, word ptr [ebp - 0x10] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 00419044: mov word ptr [eax + ecx*2 + 4], dx */ W16((u32)(r_eax+r_ecx*2+0x4u), (u16)r_edx);
    /* 00419049: jmp 0x418fdc */ goto L_00418fdc;
L_0041904b:; BB(0x0041904b);
    /* 0041904b: jmp 0x418fb2 */ goto L_00418fb2;
L_00419050:; BB(0x00419050);
    /* 00419050: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00419053: mov ecx, dword ptr [eax + 0x464] */ r_ecx = R32((u32)(r_eax+0x464u));
    /* 00419059: mov edx, dword ptr [ecx + 0x80c] */ r_edx = R32((u32)(r_ecx+0x80cu));
    /* 0041905f: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00419062: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00419063: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00419066: mov ecx, dword ptr [eax + 0x464] */ r_ecx = R32((u32)(r_eax+0x464u));
    /* 0041906c: call 0x6436a0 */ r_esp -= 4; W32(r_esp, 0x419071u); f_006436a0();
    /* 00419071: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00419072: mov esp, ebp */ r_esp = r_ebp;
    /* 00419074: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00419075: ret  */ FN_RET(0x00418f50); r_esp += 4; return;
}

