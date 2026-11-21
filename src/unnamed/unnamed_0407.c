#include "protos.h"

void f_004073b0(void) /* sub_4073B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004073b0);
    /* 004073b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004073b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004073b3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004073b6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004073b9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004073bc: mov dword ptr [eax], 1 */ W32((u32)(r_eax), 0x1u);
    /* 004073c2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004073c5: mov dword ptr [ecx + 4], 0 */ W32((u32)(r_ecx+0x4u), 0x0u);
    /* 004073cc: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004073cf: mov dword ptr [edx + 8], 0 */ W32((u32)(r_edx+0x8u), 0x0u);
    /* 004073d6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004073d9: mov dword ptr [eax + 0xc], 0 */ W32((u32)(r_eax+0xcu), 0x0u);
    /* 004073e0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004073e3: mov dword ptr [ecx + 0x10], 0 */ W32((u32)(r_ecx+0x10u), 0x0u);
    /* 004073ea: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004073ed: mov dword ptr [edx + 0x14], 0 */ W32((u32)(r_edx+0x14u), 0x0u);
    /* 004073f4: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004073f7: mov dword ptr [eax + 0x18], 0 */ W32((u32)(r_eax+0x18u), 0x0u);
    /* 004073fe: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00407401: mov dword ptr [ecx + 0x1c], 0 */ W32((u32)(r_ecx+0x1cu), 0x0u);
    /* 00407408: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040740f: jmp 0x40741a */ goto L_0040741a;
L_00407411:; BB(0x00407411);
    /* 00407411: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00407414: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00407417: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0040741a:; BB(0x0040741a);
    /* 0040741a: cmp dword ptr [ebp - 4], 0x63 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x63u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040741e: jge 0x407441 */ if ((fS==fO)) goto L_00407441;
L_00407420:; BB(0x00407420);
    /* 00407420: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00407423: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00407426: mov dword ptr [ecx + eax*4 + 0x20], 0 */ W32((u32)(r_ecx+r_eax*4+0x20u), 0x0u);
    /* 0040742e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00407431: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00407434: mov dword ptr [eax + edx*4 + 0x1ac], 0 */ W32((u32)(r_eax+r_edx*4+0x1acu), 0x0u);
    /* 0040743f: jmp 0x407411 */ goto L_00407411;
L_00407441:; BB(0x00407441);
    /* 00407441: mov esp, ebp */ r_esp = r_ebp;
    /* 00407443: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00407444: ret  */ FN_RET(0x004073b0); r_esp += 4; return;
}

void f_00407450(void) /* sub_407450 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00407450);
    /* 00407450: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00407451: mov ebp, esp */ r_ebp = r_esp;
    /* 00407453: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00407456: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00407459: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040745c: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0040745e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00407461: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00407464: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 00407466: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00407469: mov dword ptr [eax + 4], 0 */ W32((u32)(r_eax+0x4u), 0x0u);
    /* 00407470: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00407473: mov dword ptr [ecx + 8], 0 */ W32((u32)(r_ecx+0x8u), 0x0u);
    /* 0040747a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040747d: mov dword ptr [edx + 0xc], 0 */ W32((u32)(r_edx+0xcu), 0x0u);
    /* 00407484: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00407487: mov dword ptr [eax + 0x10], 0 */ W32((u32)(r_eax+0x10u), 0x0u);
    /* 0040748e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00407491: mov dword ptr [ecx + 0x14], 0 */ W32((u32)(r_ecx+0x14u), 0x0u);
    /* 00407498: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040749b: mov dword ptr [edx + 0x18], 0 */ W32((u32)(r_edx+0x18u), 0x0u);
    /* 004074a2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004074a5: mov dword ptr [eax + 0x1c], 0 */ W32((u32)(r_eax+0x1cu), 0x0u);
    /* 004074ac: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004074b3: jmp 0x4074be */ goto L_004074be;
L_004074b5:; BB(0x004074b5);
    /* 004074b5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004074b8: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004074bb: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_004074be:; BB(0x004074be);
    /* 004074be: cmp dword ptr [ebp - 4], 0x63 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x63u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004074c2: jge 0x4074e5 */ if ((fS==fO)) goto L_004074e5;
L_004074c4:; BB(0x004074c4);
    /* 004074c4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004074c7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004074ca: mov dword ptr [eax + edx*4 + 0x20], 0 */ W32((u32)(r_eax+r_edx*4+0x20u), 0x0u);
    /* 004074d2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004074d5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004074d8: mov dword ptr [edx + ecx*4 + 0x1ac], 0 */ W32((u32)(r_edx+r_ecx*4+0x1acu), 0x0u);
    /* 004074e3: jmp 0x4074b5 */ goto L_004074b5;
L_004074e5:; BB(0x004074e5);
    /* 004074e5: mov esp, ebp */ r_esp = r_ebp;
    /* 004074e7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004074e8: ret  */ FN_RET(0x00407450); r_esp += 4; return;
}

void f_004074f0(void) /* sub_4074F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004074f0);
    /* 004074f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004074f1: mov ebp, esp */ r_ebp = r_esp;
    /* 004074f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004074f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004074f7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004074fa: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 004074fd: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00407500: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00407503: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 00407506: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00407509: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0040750c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040750f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00407512: mov eax, dword ptr [eax + 0x1c] */ r_eax = R32((u32)(r_eax+0x1cu));
    /* 00407515: mov dword ptr [edx + ecx*4 + 0x1ac], eax */ W32((u32)(r_edx+r_ecx*4+0x1acu), r_eax);
    /* 0040751c: mov esp, ebp */ r_esp = r_ebp;
    /* 0040751e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040751f: ret  */ FN_RET(0x004074f0); r_esp += 4; return;
}

void f_00407520(void) /* sub_407520 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00407520);
    /* 00407520: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00407521: mov ebp, esp */ r_ebp = r_esp;
    /* 00407523: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00407524: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00407527: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040752a: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0040752d: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00407530: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00407533: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 00407536: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00407539: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0040753c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040753f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00407542: mov eax, dword ptr [eax + 0x18] */ r_eax = R32((u32)(r_eax+0x18u));
    /* 00407545: mov dword ptr [edx + ecx*4 + 0x1ac], eax */ W32((u32)(r_edx+r_ecx*4+0x1acu), r_eax);
    /* 0040754c: mov esp, ebp */ r_esp = r_ebp;
    /* 0040754e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040754f: ret  */ FN_RET(0x00407520); r_esp += 4; return;
}

void f_00407550(void) /* sub_407550 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00407550);
    /* 00407550: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00407551: mov ebp, esp */ r_ebp = r_esp;
    /* 00407553: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00407554: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00407557: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040755a: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0040755d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00407560: mov dword ptr [edx + ecx*4 + 0x1ac], 0xffffffff */ W32((u32)(r_edx+r_ecx*4+0x1acu), 0xffffffffu);
    /* 0040756b: mov esp, ebp */ r_esp = r_ebp;
    /* 0040756d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040756e: ret  */ FN_RET(0x00407550); r_esp += 4; return;
}

void f_00407570(void) /* sub_407570 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00407570);
    /* 00407570: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00407571: mov ebp, esp */ r_ebp = r_esp;
    /* 00407573: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00407574: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00407577: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040757a: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0040757d: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00407580: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00407583: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 00407586: mov esp, ebp */ r_esp = r_ebp;
    /* 00407588: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00407589: ret  */ FN_RET(0x00407570); r_esp += 4; return;
}

void f_004075d0(void) /* sub_4075D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004075d0);
    /* 004075d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004075d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004075d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004075d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004075d7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004075da: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004075dd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004075e0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004075e3: mov dword ptr [edx + ecx*4 + 0x20], eax */ W32((u32)(r_edx+r_ecx*4+0x20u), r_eax);
    /* 004075e7: mov esp, ebp */ r_esp = r_ebp;
    /* 004075e9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004075ea: ret 4 */ FN_RET(0x004075d0); r_esp += 8; return;
}

void f_004075f0(void) /* sub_4075F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004075f0);
    /* 004075f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004075f1: mov ebp, esp */ r_ebp = r_esp;
    /* 004075f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004075f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004075f7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004075fa: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 004075fd: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00407600: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00407603: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 00407606: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00407609: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0040760c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040760f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00407612: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 00407615: mov esp, ebp */ r_esp = r_ebp;
    /* 00407617: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00407618: ret  */ FN_RET(0x004075f0); r_esp += 4; return;
}

void f_004077d0(void) /* sub_4077D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004077d0);
    /* 004077d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004077d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004077d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004077d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004077d7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004077d9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004077db: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004077de: mov ecx, dword ptr [eax + 0x10d8] */ r_ecx = R32((u32)(r_eax+0x10d8u));
    /* 004077e4: call 0x6437d0 */ r_esp -= 4; W32(r_esp, 0x4077e9u); f_006437d0();
    /* 004077e9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004077ec: mov dword ptr [ecx + 0x10d4], 0 */ W32((u32)(r_ecx+0x10d4u), 0x0u);
    /* 004077f6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004077f8: push 0x6b35c0 */ { u32 v = 0x6b35c0u; r_esp -= 4; W32(r_esp, v); }
    /* 004077fd: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004077ff: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00407801: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00407804: mov ecx, dword ptr [edx + 0x10d8] */ r_ecx = R32((u32)(r_edx+0x10d8u));
    /* 0040780a: call 0x643930 */ r_esp -= 4; W32(r_esp, 0x40780fu); f_00643930();
    /* 0040780f: mov esp, ebp */ r_esp = r_ebp;
    /* 00407811: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00407812: ret  */ FN_RET(0x004077d0); r_esp += 4; return;
}

void f_00407820(void) /* sub_407820 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00407820);
    /* 00407820: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00407821: mov ebp, esp */ r_ebp = r_esp;
    /* 00407823: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00407825: push 0x69d947 */ { u32 v = 0x69d947u; r_esp -= 4; W32(r_esp, v); }
    /* 0040782a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00407830: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00407831: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00407834: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00407839: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040783b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040783c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0040783f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00407845: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00407848: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0040784b: cmp dword ptr [eax + 0x10d8], 0 */ {  u32 a = R32((u32)(r_eax+0x10d8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00407852: jne 0x40789e */ if (!fZ) goto L_0040789e;
L_00407854:; BB(0x00407854);
    /* 00407854: push 0x810 */ { u32 v = 0x810u; r_esp -= 4; W32(r_esp, v); }
    /* 00407859: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x40785eu); f_00686d82();
    /* 0040785e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00407861: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00407864: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040786b: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040786f: je 0x40787e */ if (fZ) goto L_0040787e;
L_00407871:; BB(0x00407871);
    /* 00407871: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00407874: call 0x642e10 */ r_esp -= 4; W32(r_esp, 0x407879u); f_00642e10();
    /* 00407879: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0040787c: jmp 0x407885 */ goto L_00407885;
L_0040787e:; BB(0x0040787e);
    /* 0040787e: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_00407885:; BB(0x00407885);
    /* 00407885: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00407888: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0040788b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00407892: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00407895: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00407898: mov dword ptr [edx + 0x10d8], eax */ W32((u32)(r_edx+0x10d8u), r_eax);
L_0040789e:; BB(0x0040789e);
    /* 0040789e: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004078a0: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004078a3: mov ecx, dword ptr [ecx + 0x10d8] */ r_ecx = R32((u32)(r_ecx+0x10d8u));
    /* 004078a9: call 0x642e70 */ r_esp -= 4; W32(r_esp, 0x4078aeu); f_00642e70();
    /* 004078ae: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004078b1: call 0x4077d0 */ r_esp -= 4; W32(r_esp, 0x4078b6u); f_004077d0();
    /* 004078b6: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 004078bd: jmp 0x4078c8 */ goto L_004078c8;
L_004078bf:; BB(0x004078bf);
    /* 004078bf: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004078c2: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004078c5: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_004078c8:; BB(0x004078c8);
    /* 004078c8: cmp dword ptr [ebp - 0x10], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004078cc: jge 0x40795b */ if ((fS==fO)) goto L_0040795b;
L_004078d2:; BB(0x004078d2);
    /* 004078d2: push 0xf4 */ { u32 v = 0xf4u; r_esp -= 4; W32(r_esp, v); }
    /* 004078d7: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4078dcu); f_00686d82();
    /* 004078dc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004078df: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004078e2: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004078e9: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004078ed: je 0x4078fc */ if (fZ) goto L_004078fc;
L_004078ef:; BB(0x004078ef);
    /* 004078ef: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004078f2: call 0x409850 */ r_esp -= 4; W32(r_esp, 0x4078f7u); f_00409850();
    /* 004078f7: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 004078fa: jmp 0x407903 */ goto L_00407903;
L_004078fc:; BB(0x004078fc);
    /* 004078fc: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_00407903:; BB(0x00407903);
    /* 00407903: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00407906: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00407909: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00407910: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00407913: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00407916: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00407919: mov dword ptr [edx + ecx*4 + 4], eax */ W32((u32)(r_edx+r_ecx*4+0x4u), r_eax);
    /* 0040791d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00407920: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00407921: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00407924: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00407927: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 0040792b: call 0x5f53e0 */ r_esp -= 4; W32(r_esp, 0x407930u); f_005f53e0();
    /* 00407930: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00407932: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00407934: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x407939u); f_0064c8a0();
    /* 00407939: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040793c: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0040793f: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 00407942: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00407945: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00407948: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0040794b: mov dword ptr [edx + ecx*8 + 0x34], eax */ W32((u32)(r_edx+r_ecx*8+0x34u), r_eax);
    /* 0040794f: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00407952: mov dword ptr [edx + ecx*8 + 0x38], eax */ W32((u32)(r_edx+r_ecx*8+0x38u), r_eax);
    /* 00407956: jmp 0x4078bf */ goto L_004078bf;
L_0040795b:; BB(0x0040795b);
    /* 0040795b: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00407962: jmp 0x40796d */ goto L_0040796d;
L_00407964:; BB(0x00407964);
    /* 00407964: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00407967: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040796a: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0040796d:; BB(0x0040796d);
    /* 0040796d: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00407971: jge 0x40798d */ if ((fS==fO)) goto L_0040798d;
L_00407973:; BB(0x00407973);
    /* 00407973: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00407976: imul edx, edx, 0x338 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x338u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040797c: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0040797f: lea ecx, [eax + edx + 0xbc] */ r_ecx = (u32)(r_eax+r_edx+0xbcu);
    /* 00407986: call 0x4073b0 */ r_esp -= 4; W32(r_esp, 0x40798bu); f_004073b0();
    /* 0040798b: jmp 0x407964 */ goto L_00407964;
L_0040798d:; BB(0x0040798d);
    /* 0040798d: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00407990: call 0x4079b0 */ r_esp -= 4; W32(r_esp, 0x407995u); f_004079b0();
    /* 00407995: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00407998: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0040799f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004079a0: mov esp, ebp */ r_esp = r_ebp;
    /* 004079a2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004079a3: ret  */ FN_RET(0x00407820); r_esp += 4; return;
}

void f_004079b0(void) /* sub_4079B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004079b0);
    /* 004079b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004079b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004079b3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004079b6: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 004079b9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004079bb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004079bd: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004079c0: call 0x407be0 */ r_esp -= 4; W32(r_esp, 0x4079c5u); f_00407be0();
    /* 004079c5: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004079c8: mov dword ptr [eax + 0x10e0], 0xffffffff */ W32((u32)(r_eax+0x10e0u), 0xffffffffu);
    /* 004079d2: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004079d5: mov dword ptr [ecx + 0x10e4], 0xffffffff */ W32((u32)(r_ecx+0x10e4u), 0xffffffffu);
    /* 004079df: cmp dword ptr [0x7902f8], 0 */ {  u32 a = R32((u32)(0x7902f8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004079e6: je 0x4079f3 */ if (fZ) goto L_004079f3;
L_004079e8:; BB(0x004079e8);
    /* 004079e8: mov ecx, dword ptr [0x7902f8] */ r_ecx = R32((u32)(0x7902f8u));
    /* 004079ee: call 0x4024c0 */ r_esp -= 4; W32(r_esp, 0x4079f3u); f_004024c0();
L_004079f3:; BB(0x004079f3);
    /* 004079f3: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004079f6: call 0x407c50 */ r_esp -= 4; W32(r_esp, 0x4079fbu); f_00407c50();
    /* 004079fb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00407a02: jmp 0x407a0d */ goto L_00407a0d;
L_00407a04:; BB(0x00407a04);
    /* 00407a04: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00407a07: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00407a0a: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00407a0d:; BB(0x00407a0d);
    /* 00407a0d: cmp dword ptr [ebp - 4], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00407a11: jge 0x407a33 */ if ((fS==fO)) goto L_00407a33;
L_00407a13:; BB(0x00407a13);
    /* 00407a13: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00407a16: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00407a19: mov ecx, dword ptr [ecx + eax*4 + 4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 00407a1d: call 0x5cb9b0 */ r_esp -= 4; W32(r_esp, 0x407a22u); f_005cb9b0();
    /* 00407a22: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00407a25: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00407a28: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 00407a2c: call 0x409ea0 */ r_esp -= 4; W32(r_esp, 0x407a31u); f_00409ea0();
    /* 00407a31: jmp 0x407a04 */ goto L_00407a04;
L_00407a33:; BB(0x00407a33);
    /* 00407a33: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00407a3a: jmp 0x407a45 */ goto L_00407a45;
L_00407a3c:; BB(0x00407a3c);
    /* 00407a3c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00407a3f: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00407a42: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00407a45:; BB(0x00407a45);
    /* 00407a45: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00407a49: jge 0x407a86 */ if ((fS==fO)) goto L_00407a86;
L_00407a4b:; BB(0x00407a4b);
    /* 00407a4b: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00407a4e: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00407a51: mov byte ptr [edx + 0xb3], 1 */ W8((u32)(r_edx+0xb3u), 0x1u);
    /* 00407a58: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00407a5f: jmp 0x407a6a */ goto L_00407a6a;
L_00407a61:; BB(0x00407a61);
    /* 00407a61: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00407a64: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00407a67: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_00407a6a:; BB(0x00407a6a);
    /* 00407a6a: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00407a6e: jge 0x407a84 */ if ((fS==fO)) goto L_00407a84;
L_00407a70:; BB(0x00407a70);
    /* 00407a70: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00407a72: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00407a75: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00407a76: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00407a79: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00407a7a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00407a7d: call 0x4093a0 */ r_esp -= 4; W32(r_esp, 0x407a82u); f_004093a0();
    /* 00407a82: jmp 0x407a61 */ goto L_00407a61;
L_00407a84:; BB(0x00407a84);
    /* 00407a84: jmp 0x407a3c */ goto L_00407a3c;
L_00407a86:; BB(0x00407a86);
    /* 00407a86: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00407a8d: jmp 0x407a98 */ goto L_00407a98;
L_00407a8f:; BB(0x00407a8f);
    /* 00407a8f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00407a92: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00407a95: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00407a98:; BB(0x00407a98);
    /* 00407a98: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00407a9c: jge 0x407af8 */ if ((fS==fO)) goto L_00407af8;
L_00407a9e:; BB(0x00407a9e);
    /* 00407a9e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00407aa1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00407aa2: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x407aa7u); f_005dcb00();
    /* 00407aa7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00407aaa: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00407aad: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00407ab0: mov byte ptr [edx + 0x4a0], 0 */ W8((u32)(r_edx+0x4a0u), 0x0u);
    /* 00407ab7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00407aba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00407abb: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x407ac0u); f_005dcb00();
    /* 00407ac0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00407ac3: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00407ac6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00407ac9: mov byte ptr [ecx + 0x4a1], 0 */ W8((u32)(r_ecx+0x4a1u), 0x0u);
    /* 00407ad0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00407ad3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00407ad4: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x407ad9u); f_005dcb00();
    /* 00407ad9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00407adc: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00407adf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00407ae2: mov byte ptr [eax + 0x4a2], 0 */ W8((u32)(r_eax+0x4a2u), 0x0u);
    /* 00407ae9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00407aec: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00407aef: mov byte ptr [ecx + 0xb8], 0 */ W8((u32)(r_ecx+0xb8u), 0x0u);
    /* 00407af6: jmp 0x407a8f */ goto L_00407a8f;
L_00407af8:; BB(0x00407af8);
    /* 00407af8: mov esp, ebp */ r_esp = r_ebp;
    /* 00407afa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00407afb: ret  */ FN_RET(0x004079b0); r_esp += 4; return;
}

void f_00407b00(void) /* sub_407B00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00407b00);
    /* 00407b00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00407b01: mov ebp, esp */ r_ebp = r_esp;
    /* 00407b03: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00407b06: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00407b09: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00407b10: jmp 0x407b1b */ goto L_00407b1b;
L_00407b12:; BB(0x00407b12);
    /* 00407b12: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00407b15: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00407b18: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00407b1b:; BB(0x00407b1b);
    /* 00407b1b: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00407b1f: jge 0x407b9c */ if ((fS==fO)) goto L_00407b9c;
L_00407b21:; BB(0x00407b21);
    /* 00407b21: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00407b24: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00407b25: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x407b2au); f_005dcb00();
    /* 00407b2a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00407b2d: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00407b30: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00407b33: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x407b38u); f_0063aac0();
    /* 00407b38: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00407b3a: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00407b3d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00407b3f: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00407b43: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00407b46: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00407b49: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00407b4b: jne 0x407b97 */ if (!fZ) goto L_00407b97;
L_00407b4d:; BB(0x00407b4d);
    /* 00407b4d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00407b50: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00407b51: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x407b56u); f_005dcb00();
    /* 00407b56: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00407b59: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00407b5c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00407b5f: mov cl, byte ptr [eax + 0x4a1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x4a1u))) & 0xffu);
    /* 00407b65: mov byte ptr [ebp - 0x11], cl */ W8((u32)(r_ebp+0xffffffefu), (u8)r_ecx);
    /* 00407b68: movzx edx, byte ptr [ebp - 0x11] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffefu));
    /* 00407b6c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00407b6e: jne 0x407b97 */ if (!fZ) goto L_00407b97;
L_00407b70:; BB(0x00407b70);
    /* 00407b70: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00407b73: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00407b74: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x407b79u); f_005dcb00();
    /* 00407b79: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00407b7c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00407b7f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00407b82: mov dl, byte ptr [ecx + 0x4a0] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4a0u))) & 0xffu);
    /* 00407b88: mov byte ptr [ebp - 0x19], dl */ W8((u32)(r_ebp+0xffffffe7u), (u8)r_edx);
    /* 00407b8b: movzx eax, byte ptr [ebp - 0x19] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffe7u));
    /* 00407b8f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00407b91: jne 0x407b97 */ if (!fZ) goto L_00407b97;
L_00407b93:; BB(0x00407b93);
    /* 00407b93: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00407b95: jmp 0x407b9e */ goto L_00407b9e;
L_00407b97:; BB(0x00407b97);
    /* 00407b97: jmp 0x407b12 */ goto L_00407b12;
L_00407b9c:; BB(0x00407b9c);
    /* 00407b9c: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00407b9e:; BB(0x00407b9e);
    /* 00407b9e: mov esp, ebp */ r_esp = r_ebp;
    /* 00407ba0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00407ba1: ret  */ FN_RET(0x00407b00); r_esp += 4; return;
}

void f_00407bb0(void) /* sub_407BB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00407bb0);
    /* 00407bb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00407bb1: mov ebp, esp */ r_ebp = r_esp;
    /* 00407bb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00407bb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00407bb7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00407bba: cmp dword ptr [eax + 0x10dc], -1 */ {  u32 a = R32((u32)(r_eax+0x10dcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00407bc1: jne 0x407bc7 */ if (!fZ) goto L_00407bc7;
L_00407bc3:; BB(0x00407bc3);
    /* 00407bc3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00407bc5: jmp 0x407bd9 */ goto L_00407bd9;
L_00407bc7:; BB(0x00407bc7);
    /* 00407bc7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00407bca: mov edx, dword ptr [ecx + 0x10dc] */ r_edx = R32((u32)(r_ecx+0x10dcu));
    /* 00407bd0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00407bd1: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x407bd6u); f_005dcb00();
    /* 00407bd6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00407bd9:; BB(0x00407bd9);
    /* 00407bd9: mov esp, ebp */ r_esp = r_ebp;
    /* 00407bdb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00407bdc: ret  */ FN_RET(0x00407bb0); r_esp += 4; return;
}

void f_00407be0(void) /* sub_407BE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00407be0);
    /* 00407be0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00407be1: mov ebp, esp */ r_ebp = r_esp;
    /* 00407be3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00407be4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00407be7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00407bea: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00407bed: mov dword ptr [eax + 0x10dc], ecx */ W32((u32)(r_eax+0x10dcu), r_ecx);
    /* 00407bf3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00407bf6: cmp dword ptr [edx + 0x10dc], -1 */ {  u32 a = R32((u32)(r_edx+0x10dcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00407bfd: je 0x407c16 */ if (fZ) goto L_00407c16;
L_00407bff:; BB(0x00407bff);
    /* 00407bff: mov al, byte ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 00407c02: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00407c03: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00407c06: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00407c07: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00407c09: mov ecx, dword ptr [0x7902ec] */ r_ecx = R32((u32)(0x7902ecu));
    /* 00407c0f: call 0x5d8a20 */ r_esp -= 4; W32(r_esp, 0x407c14u); f_005d8a20();
    /* 00407c14: jmp 0x407c27 */ goto L_00407c27;
L_00407c16:; BB(0x00407c16);
    /* 00407c16: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00407c18: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00407c1a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00407c1c: mov ecx, dword ptr [0x7902ec] */ r_ecx = R32((u32)(0x7902ecu));
    /* 00407c22: call 0x5d8a20 */ r_esp -= 4; W32(r_esp, 0x407c27u); f_005d8a20();
L_00407c27:; BB(0x00407c27);
    /* 00407c27: mov esp, ebp */ r_esp = r_ebp;
    /* 00407c29: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00407c2a: ret 8 */ FN_RET(0x00407be0); r_esp += 12; return;
}

void f_00407c30(void) /* sub_407C30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00407c30);
    /* 00407c30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00407c31: mov ebp, esp */ r_ebp = r_esp;
    /* 00407c33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00407c34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00407c37: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00407c3a: cmp dword ptr [eax + 0x10d4], 0x18f */ {  u32 a = R32((u32)(r_eax+0x10d4u)); u32 b = 0x18fu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00407c44: jl 0x407c4a */ if ((fS!=fO)) goto L_00407c4a;
L_00407c46:; BB(0x00407c46);
    /* 00407c46: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00407c48: jmp 0x407c4c */ goto L_00407c4c;
L_00407c4a:; BB(0x00407c4a);
    /* 00407c4a: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00407c4c:; BB(0x00407c4c);
    /* 00407c4c: mov esp, ebp */ r_esp = r_ebp;
    /* 00407c4e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00407c4f: ret  */ FN_RET(0x00407c30); r_esp += 4; return;
}

void f_00407c50(void) /* sub_407C50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00407c50);
    /* 00407c50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00407c51: mov ebp, esp */ r_ebp = r_esp;
    /* 00407c53: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00407c56: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00407c59: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00407c5c: call 0x409520 */ r_esp -= 4; W32(r_esp, 0x407c61u); f_00409520();
    /* 00407c61: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00407c64: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00407c67: cmp dword ptr [eax + 0x10d4], 0x190 */ {  u32 a = R32((u32)(r_eax+0x10d4u)); u32 b = 0x190u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00407c71: jge 0x407c7c */ if ((fS==fO)) goto L_00407c7c;
L_00407c73:; BB(0x00407c73);
    /* 00407c73: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00407c76: cmp dword ptr [ecx + 8], 0x63 */ {  u32 a = R32((u32)(r_ecx+0x8u)); u32 b = 0x63u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00407c7a: jl 0x407cb6 */ if ((fS!=fO)) goto L_00407cb6;
L_00407c7c:; BB(0x00407c7c);
    /* 00407c7c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00407c7f: call 0x4077d0 */ r_esp -= 4; W32(r_esp, 0x407c84u); f_004077d0();
    /* 00407c84: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00407c8b: jmp 0x407c96 */ goto L_00407c96;
L_00407c8d:; BB(0x00407c8d);
    /* 00407c8d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00407c90: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00407c93: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00407c96:; BB(0x00407c96);
    /* 00407c96: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00407c9a: jge 0x407cb6 */ if ((fS==fO)) goto L_00407cb6;
L_00407c9c:; BB(0x00407c9c);
    /* 00407c9c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00407c9f: imul eax, eax, 0x338 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x338u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00407ca5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00407ca8: lea ecx, [ecx + eax + 0xbc] */ r_ecx = (u32)(r_ecx+r_eax+0xbcu);
    /* 00407caf: call 0x407450 */ r_esp -= 4; W32(r_esp, 0x407cb4u); f_00407450();
    /* 00407cb4: jmp 0x407c8d */ goto L_00407c8d;
L_00407cb6:; BB(0x00407cb6);
    /* 00407cb6: mov esp, ebp */ r_esp = r_ebp;
    /* 00407cb8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00407cb9: ret  */ FN_RET(0x00407c50); r_esp += 4; return;
}

void f_00407cc0(void) /* sub_407CC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00407cc0);
    /* 00407cc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00407cc1: mov ebp, esp */ r_ebp = r_esp;
    /* 00407cc3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00407cc4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00407cc7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00407cc9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00407ccc: call 0x4094b0 */ r_esp -= 4; W32(r_esp, 0x407cd1u); f_004094b0();
    /* 00407cd1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00407cd3: je 0x407cd9 */ if (fZ) goto L_00407cd9;
L_00407cd5:; BB(0x00407cd5);
    /* 00407cd5: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00407cd7: jmp 0x407ced */ goto L_00407ced;
L_00407cd9:; BB(0x00407cd9);
    /* 00407cd9: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00407cdb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00407cde: call 0x4094b0 */ r_esp -= 4; W32(r_esp, 0x407ce3u); f_004094b0();
    /* 00407ce3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00407ce5: je 0x407ceb */ if (fZ) goto L_00407ceb;
L_00407ce7:; BB(0x00407ce7);
    /* 00407ce7: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00407ce9: jmp 0x407ced */ goto L_00407ced;
L_00407ceb:; BB(0x00407ceb);
    /* 00407ceb: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00407ced:; BB(0x00407ced);
    /* 00407ced: mov esp, ebp */ r_esp = r_ebp;
    /* 00407cef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00407cf0: ret  */ FN_RET(0x00407cc0); r_esp += 4; return;
}

void f_00407d00(void) /* sub_407D00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00407d00);
    /* 00407d00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00407d01: mov ebp, esp */ r_ebp = r_esp;
    /* 00407d03: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00407d06: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00407d09: mov dword ptr [ebp - 0x14], 2 */ W32((u32)(r_ebp+0xffffffecu), 0x2u);
    /* 00407d10: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00407d17: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 00407d1e: mov dword ptr [ebp - 8], 3 */ W32((u32)(r_ebp+0xfffffff8u), 0x3u);
    /* 00407d25: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00407d2c: jmp 0x407d37 */ goto L_00407d37;
L_00407d2e:; BB(0x00407d2e);
    /* 00407d2e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00407d31: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00407d34: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00407d37:; BB(0x00407d37);
    /* 00407d37: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00407d3b: jge 0x407dcd */ if ((fS==fO)) goto L_00407dcd;
L_00407d41:; BB(0x00407d41);
    /* 00407d41: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00407d44: mov edx, dword ptr [ebp + ecx*4 - 0x14] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffecu));
    /* 00407d48: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00407d49: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x407d4eu); f_005dcb00();
    /* 00407d4e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00407d51: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00407d54: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00407d57: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x407d5cu); f_0063aac0();
    /* 00407d5c: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00407d5e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00407d61: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00407d63: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00407d67: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00407d6a: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 00407d6d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00407d6f: jne 0x407dc8 */ if (!fZ) goto L_00407dc8;
L_00407d71:; BB(0x00407d71);
    /* 00407d71: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00407d74: mov ecx, dword ptr [ebp + eax*4 - 0x14] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffecu));
    /* 00407d78: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00407d79: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x407d7eu); f_005dcb00();
    /* 00407d7e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00407d81: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00407d84: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00407d87: mov al, byte ptr [edx + 0x4a0] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x4a0u))) & 0xffu);
    /* 00407d8d: mov byte ptr [ebp - 0x21], al */ W8((u32)(r_ebp+0xffffffdfu), (u8)r_eax);
    /* 00407d90: movzx ecx, byte ptr [ebp - 0x21] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffdfu));
    /* 00407d94: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00407d96: jne 0x407dc8 */ if (!fZ) goto L_00407dc8;
L_00407d98:; BB(0x00407d98);
    /* 00407d98: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00407d9b: mov eax, dword ptr [ebp + edx*4 - 0x14] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffecu));
    /* 00407d9f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00407da0: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x407da5u); f_005dcb00();
    /* 00407da5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00407da8: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00407dab: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00407dae: mov dl, byte ptr [ecx + 0x4a1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4a1u))) & 0xffu);
    /* 00407db4: mov byte ptr [ebp - 0x29], dl */ W8((u32)(r_ebp+0xffffffd7u), (u8)r_edx);
    /* 00407db7: movzx eax, byte ptr [ebp - 0x29] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffd7u));
    /* 00407dbb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00407dbd: jne 0x407dc8 */ if (!fZ) goto L_00407dc8;
L_00407dbf:; BB(0x00407dbf);
    /* 00407dbf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00407dc2: mov eax, dword ptr [ebp + ecx*4 - 0x14] */ r_eax = R32((u32)(r_ebp+r_ecx*4+0xffffffecu));
    /* 00407dc6: jmp 0x407dd0 */ goto L_00407dd0;
L_00407dc8:; BB(0x00407dc8);
    /* 00407dc8: jmp 0x407d2e */ goto L_00407d2e;
L_00407dcd:; BB(0x00407dcd);
    /* 00407dcd: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00407dd0:; BB(0x00407dd0);
    /* 00407dd0: mov esp, ebp */ r_esp = r_ebp;
    /* 00407dd2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00407dd3: ret  */ FN_RET(0x00407d00); r_esp += 4; return;
}

void f_00407de0(void) /* sub_407DE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00407de0);
    /* 00407de0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00407de1: mov ebp, esp */ r_ebp = r_esp;
    /* 00407de3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00407de6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00407de9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00407dec: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00407def: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00407df2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00407df9: jmp 0x407e04 */ goto L_00407e04;
L_00407dfb:; BB(0x00407dfb);
    /* 00407dfb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00407dfe: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00407e01: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00407e04:; BB(0x00407e04);
    /* 00407e04: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00407e08: jge 0x407e49 */ if ((fS==fO)) goto L_00407e49;
L_00407e0a:; BB(0x00407e0a);
    /* 00407e0a: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00407e11: jmp 0x407e1c */ goto L_00407e1c;
L_00407e13:; BB(0x00407e13);
    /* 00407e13: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00407e16: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00407e19: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_00407e1c:; BB(0x00407e1c);
    /* 00407e1c: cmp dword ptr [ebp - 0xc], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00407e20: jge 0x407e47 */ if ((fS==fO)) goto L_00407e47;
L_00407e22:; BB(0x00407e22);
    /* 00407e22: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00407e24: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00407e27: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00407e28: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00407e2b: add ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00407e2e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00407e31: mov ecx, dword ptr [edx + ecx*4 + 4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 00407e35: call 0x5cb7d0 */ r_esp -= 4; W32(r_esp, 0x407e3au); f_005cb7d0();
    /* 00407e3a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00407e3d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00407e3f: je 0x407e45 */ if (fZ) goto L_00407e45;
L_00407e41:; BB(0x00407e41);
    /* 00407e41: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00407e43: jmp 0x407e4b */ goto L_00407e4b;
L_00407e45:; BB(0x00407e45);
    /* 00407e45: jmp 0x407e13 */ goto L_00407e13;
L_00407e47:; BB(0x00407e47);
    /* 00407e47: jmp 0x407dfb */ goto L_00407dfb;
L_00407e49:; BB(0x00407e49);
    /* 00407e49: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00407e4b:; BB(0x00407e4b);
    /* 00407e4b: mov esp, ebp */ r_esp = r_ebp;
    /* 00407e4d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00407e4e: ret 4 */ FN_RET(0x00407de0); r_esp += 8; return;
}

void f_00407e60(void) /* sub_407E60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00407e60);
    /* 00407e60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00407e61: mov ebp, esp */ r_ebp = r_esp;
    /* 00407e63: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00407e66: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00407e69: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00407e6c: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00407e6f: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00407e72: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00407e79: jmp 0x407e84 */ goto L_00407e84;
L_00407e7b:; BB(0x00407e7b);
    /* 00407e7b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00407e7e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00407e81: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_00407e84:; BB(0x00407e84);
    /* 00407e84: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00407e88: jge 0x407f49 */ if ((fS==fO)) goto L_00407f49;
L_00407e8e:; BB(0x00407e8e);
    /* 00407e8e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00407e90: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00407e93: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00407e94: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00407e97: add eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00407e9a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00407e9d: mov ecx, dword ptr [ecx + eax*4 + 4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 00407ea1: call 0x5cb7d0 */ r_esp -= 4; W32(r_esp, 0x407ea6u); f_005cb7d0();
    /* 00407ea6: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00407ea9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00407eab: je 0x407f44 */ if (fZ) goto L_00407f44;
L_00407eb1:; BB(0x00407eb1);
    /* 00407eb1: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00407eb4: add eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00407eb7: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00407eba: mov edx, dword ptr [ecx + eax*4 + 4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 00407ebe: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00407ec1: add eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00407ec4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00407ec7: mov ecx, dword ptr [ecx + eax*4 + 4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 00407ecb: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00407ecd: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00407ed3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x407ed5u); call_ind(t); }
    /* 00407ed5: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00407ed8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00407eda: je 0x407f32 */ if (fZ) goto L_00407f32;
L_00407edc:; BB(0x00407edc);
    /* 00407edc: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00407edf: add edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00407ee2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00407ee5: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 00407ee9: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00407eec: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00407eef: shl edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00407ef2: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00407ef5: lea ecx, [eax + edx + 0x48] */ r_ecx = (u32)(r_eax+r_edx+0x48u);
    /* 00407ef9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00407efb: shl edx, 3 */ { u32 c = (3u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00407efe: mov eax, dword ptr [ecx + edx] */ r_eax = R32((u32)(r_ecx+r_edx));
    /* 00407f01: mov ecx, dword ptr [ecx + edx + 4] */ r_ecx = R32((u32)(r_ecx+r_edx+0x4u));
    /* 00407f05: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00407f08: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00407f0b: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00407f0e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00407f11: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00407f14: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00407f17: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00407f1a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00407f1b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00407f1e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00407f1f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00407f22: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00407f23: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x407f28u); f_005dcb00();
    /* 00407f28: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00407f2b: mov ecx, eax */ r_ecx = r_eax;
    /* 00407f2d: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x407f32u); f_005d5cf0();
L_00407f32:; BB(0x00407f32);
    /* 00407f32: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00407f35: add ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00407f38: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00407f3b: mov ecx, dword ptr [edx + ecx*4 + 4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 00407f3f: call 0x5cb9b0 */ r_esp -= 4; W32(r_esp, 0x407f44u); f_005cb9b0();
L_00407f44:; BB(0x00407f44);
    /* 00407f44: jmp 0x407e7b */ goto L_00407e7b;
L_00407f49:; BB(0x00407f49);
    /* 00407f49: mov esp, ebp */ r_esp = r_ebp;
    /* 00407f4b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00407f4c: ret 4 */ FN_RET(0x00407e60); r_esp += 8; return;
}

void f_00407f50(void) /* sub_407F50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00407f50);
    /* 00407f50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00407f51: mov ebp, esp */ r_ebp = r_esp;
    /* 00407f53: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00407f56: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00407f59: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00407f5c: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00407f5f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00407f62: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00407f69: jmp 0x407f74 */ goto L_00407f74;
L_00407f6b:; BB(0x00407f6b);
    /* 00407f6b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00407f6e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00407f71: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_00407f74:; BB(0x00407f74);
    /* 00407f74: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00407f78: jge 0x407f90 */ if ((fS==fO)) goto L_00407f90;
L_00407f7a:; BB(0x00407f7a);
    /* 00407f7a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00407f7d: add edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00407f80: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00407f83: cmp dword ptr [eax + edx*8 + 0x34], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*8+0x34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00407f88: jle 0x407f8e */ if ((fZ||fS!=fO)) goto L_00407f8e;
L_00407f8a:; BB(0x00407f8a);
    /* 00407f8a: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00407f8c: jmp 0x407f92 */ goto L_00407f92;
L_00407f8e:; BB(0x00407f8e);
    /* 00407f8e: jmp 0x407f6b */ goto L_00407f6b;
L_00407f90:; BB(0x00407f90);
    /* 00407f90: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00407f92:; BB(0x00407f92);
    /* 00407f92: mov esp, ebp */ r_esp = r_ebp;
    /* 00407f94: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00407f95: ret 4 */ FN_RET(0x00407f50); r_esp += 8; return;
}

void f_00407fa0(void) /* sub_407FA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00407fa0);
    /* 00407fa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00407fa1: mov ebp, esp */ r_ebp = r_esp;
    /* 00407fa3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00407fa6: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00407fa9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00407fac: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00407faf: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00407fb2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00407fb5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00407fb6: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x407fbbu); f_005dcb00();
    /* 00407fbb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00407fbe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00407fc0: jne 0x407fc7 */ if (!fZ) goto L_00407fc7;
L_00407fc2:; BB(0x00407fc2);
    /* 00407fc2: jmp 0x4080c0 */ goto L_004080c0;
L_00407fc7:; BB(0x00407fc7);
    /* 00407fc7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00407fca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00407fcb: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00407fce: call 0x407f50 */ r_esp -= 4; W32(r_esp, 0x407fd3u); f_00407f50();
    /* 00407fd3: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00407fd6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00407fd8: jne 0x407fdf */ if (!fZ) goto L_00407fdf;
L_00407fda:; BB(0x00407fda);
    /* 00407fda: jmp 0x4080c0 */ goto L_004080c0;
L_00407fdf:; BB(0x00407fdf);
    /* 00407fdf: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00407fe2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00407fe3: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x407fe8u); f_005dcb00();
    /* 00407fe8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00407feb: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00407fee: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00407ff1: mov al, byte ptr [edx + 0x4a0] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x4a0u))) & 0xffu);
    /* 00407ff7: mov byte ptr [ebp - 0xd], al */ W8((u32)(r_ebp+0xfffffff3u), (u8)r_eax);
    /* 00407ffa: movzx ecx, byte ptr [ebp - 0xd] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffff3u));
    /* 00407ffe: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408000: je 0x408007 */ if (fZ) goto L_00408007;
L_00408002:; BB(0x00408002);
    /* 00408002: jmp 0x4080c0 */ goto L_004080c0;
L_00408007:; BB(0x00408007);
    /* 00408007: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0040800a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040800b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040800e: call 0x407e60 */ r_esp -= 4; W32(r_esp, 0x408013u); f_00407e60();
    /* 00408013: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0040801a: jmp 0x408025 */ goto L_00408025;
L_0040801c:; BB(0x0040801c);
    /* 0040801c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040801f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00408022: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_00408025:; BB(0x00408025);
    /* 00408025: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00408029: jge 0x408073 */ if ((fS==fO)) goto L_00408073;
L_0040802b:; BB(0x0040802b);
    /* 0040802b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040802e: add ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00408031: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00408034: cmp dword ptr [edx + ecx*8 + 0x34], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*8+0x34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00408039: jle 0x408071 */ if ((fZ||fS!=fO)) goto L_00408071;
L_0040803b:; BB(0x0040803b);
    /* 0040803b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040803d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040803f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00408042: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00408045: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00408048: lea edx, [ecx + eax*8 + 0x34] */ r_edx = (u32)(r_ecx+r_eax*8+0x34u);
    /* 0040804c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040804d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00408050: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00408053: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00408056: mov edx, dword ptr [ecx + eax*4 + 4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 0040805a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040805d: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00408060: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00408063: mov ecx, dword ptr [ecx + eax*4 + 4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 00408067: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00408069: mov eax, dword ptr [edx + 0xc4] */ r_eax = R32((u32)(r_edx+0xc4u));
    /* 0040806f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x408071u); call_ind(t); }
L_00408071:; BB(0x00408071);
    /* 00408071: jmp 0x40801c */ goto L_0040801c;
L_00408073:; BB(0x00408073);
    /* 00408073: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00408076: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00408077: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x40807cu); f_005dcb00();
    /* 0040807c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040807f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00408082: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00408085: mov byte ptr [edx + 0x4a0], 1 */ W8((u32)(r_edx+0x4a0u), 0x1u);
    /* 0040808c: mov ecx, dword ptr [0x7902f8] */ r_ecx = R32((u32)(0x7902f8u));
    /* 00408092: call 0x401cb0 */ r_esp -= 4; W32(r_esp, 0x408097u); f_00401cb0();
    /* 00408097: mov ecx, dword ptr [0x7902ec] */ r_ecx = R32((u32)(0x7902ecu));
    /* 0040809d: call 0x5db890 */ r_esp -= 4; W32(r_esp, 0x4080a2u); f_005db890();
    /* 004080a2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004080a4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004080a6: mov eax, dword ptr [0x7902ec] */ r_eax = R32((u32)(0x7902ecu));
    /* 004080ab: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 004080ae: mov edx, dword ptr [0x7902ec] */ r_edx = R32((u32)(0x7902ecu));
    /* 004080b4: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004080b7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004080b9: mov ecx, eax */ r_ecx = r_eax;
    /* 004080bb: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004080be: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4080c0u); call_ind(t); }
L_004080c0:; BB(0x004080c0);
    /* 004080c0: mov esp, ebp */ r_esp = r_ebp;
    /* 004080c2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004080c3: ret 4 */ FN_RET(0x00407fa0); r_esp += 8; return;
}

