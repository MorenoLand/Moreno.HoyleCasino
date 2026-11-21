#include "protos.h"

void f_0043414d(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043414d);
    /* 0043414d: int3  */ UNSUP(0x0043414d, "int3");
}

void f_00434200(void) /* sub_434200 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00434200);
    /* 00434200: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00434201: mov ebp, esp */ r_ebp = r_esp;
    /* 00434203: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00434204: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00434207: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043420b: jne 0x434223 */ if (!fZ) goto L_00434223;
L_0043420d:; BB(0x0043420d);
    /* 0043420d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0043420f: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00434215: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x43421au); f_006375b0();
    /* 0043421a: mov ecx, eax */ r_ecx = r_eax;
    /* 0043421c: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x434221u); f_0063aae0();
    /* 00434221: jmp 0x434238 */ goto L_00434238;
L_00434223:; BB(0x00434223);
    /* 00434223: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00434225: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0043422a: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 0043422d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00434230: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 00434233: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x434238u); f_0063aae0();
L_00434238:; BB(0x00434238);
    /* 00434238: mov esp, ebp */ r_esp = r_ebp;
    /* 0043423a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043423b: ret 4 */ FN_RET(0x00434200); r_esp += 8; return;
}

void f_00434240(void) /* sub_434240 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00434240);
    /* 00434240: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00434241: mov ebp, esp */ r_ebp = r_esp;
    /* 00434243: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00434244: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00434247: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00434249: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043424c: call 0x434200 */ r_esp -= 4; W32(r_esp, 0x434251u); f_00434200();
    /* 00434251: mov al, byte ptr [eax + 3] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x3u))) & 0xffu);
    /* 00434254: mov esp, ebp */ r_esp = r_ebp;
    /* 00434256: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00434257: ret  */ FN_RET(0x00434240); r_esp += 4; return;
}

void f_00434260(void) /* sub_434260 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00434260);
    /* 00434260: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00434261: mov ebp, esp */ r_ebp = r_esp;
    /* 00434263: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00434264: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00434267: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00434269: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043426c: call 0x434200 */ r_esp -= 4; W32(r_esp, 0x434271u); f_00434200();
    /* 00434271: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 00434274: mov byte ptr [eax + 3], cl */ W8((u32)(r_eax+0x3u), (u8)r_ecx);
    /* 00434277: mov esp, ebp */ r_esp = r_ebp;
    /* 00434279: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043427a: ret 4 */ FN_RET(0x00434260); r_esp += 8; return;
}

void f_00434280(void) /* sub_434280 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00434280);
    /* 00434280: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00434281: mov ebp, esp */ r_ebp = r_esp;
    /* 00434283: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00434284: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00434287: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00434289: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043428c: call 0x434200 */ r_esp -= 4; W32(r_esp, 0x434291u); f_00434200();
    /* 00434291: mov al, byte ptr [eax + 5] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x5u))) & 0xffu);
    /* 00434294: mov esp, ebp */ r_esp = r_ebp;
    /* 00434296: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00434297: ret  */ FN_RET(0x00434280); r_esp += 4; return;
}

void f_004342a0(void) /* sub_4342A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004342a0);
    /* 004342a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004342a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004342a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004342a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004342a7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004342a9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004342ac: call 0x434200 */ r_esp -= 4; W32(r_esp, 0x4342b1u); f_00434200();
    /* 004342b1: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 004342b4: mov byte ptr [eax + 5], cl */ W8((u32)(r_eax+0x5u), (u8)r_ecx);
    /* 004342b7: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 004342bd: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x4342c2u); f_006375b0();
    /* 004342c2: mov ecx, eax */ r_ecx = r_eax;
    /* 004342c4: call 0x63b0a0 */ r_esp -= 4; W32(r_esp, 0x4342c9u); f_0063b0a0();
    /* 004342c9: mov esp, ebp */ r_esp = r_ebp;
    /* 004342cb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004342cc: ret 4 */ FN_RET(0x004342a0); r_esp += 8; return;
}

void f_004342d0(void) /* sub_4342D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004342d0);
    /* 004342d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004342d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004342d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004342d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004342d7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004342d9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004342dc: call 0x434200 */ r_esp -= 4; W32(r_esp, 0x4342e1u); f_00434200();
    /* 004342e1: mov al, byte ptr [eax + 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x1u))) & 0xffu);
    /* 004342e4: mov esp, ebp */ r_esp = r_ebp;
    /* 004342e6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004342e7: ret  */ FN_RET(0x004342d0); r_esp += 4; return;
}

void f_004342f0(void) /* sub_4342F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004342f0);
    /* 004342f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004342f1: mov ebp, esp */ r_ebp = r_esp;
    /* 004342f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004342f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004342f7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004342f9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004342fc: call 0x434200 */ r_esp -= 4; W32(r_esp, 0x434301u); f_00434200();
    /* 00434301: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 00434304: mov byte ptr [eax + 1], cl */ W8((u32)(r_eax+0x1u), (u8)r_ecx);
    /* 00434307: mov esp, ebp */ r_esp = r_ebp;
    /* 00434309: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043430a: ret 4 */ FN_RET(0x004342f0); r_esp += 8; return;
}

void f_00434310(void) /* sub_434310 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00434310);
    /* 00434310: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00434311: mov ebp, esp */ r_ebp = r_esp;
    /* 00434313: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00434316: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00434319: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
    /* 00434320: mov dword ptr [ebp - 0x10], 2 */ W32((u32)(r_ebp+0xfffffff0u), 0x2u);
    /* 00434327: mov dword ptr [ebp - 0xc], 3 */ W32((u32)(r_ebp+0xfffffff4u), 0x3u);
    /* 0043432e: mov dword ptr [ebp - 8], 5 */ W32((u32)(r_ebp+0xfffffff8u), 0x5u);
    /* 00434335: mov dword ptr [ebp - 4], 0xa */ W32((u32)(r_ebp+0xfffffffcu), 0xau);
    /* 0043433c: mov ecx, dword ptr [0x7906d0] */ r_ecx = R32((u32)(0x7906d0u));
    /* 00434342: call 0x5da830 */ r_esp -= 4; W32(r_esp, 0x434347u); f_005da830();
    /* 00434347: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0043434a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043434c: je 0x434355 */ if (fZ) goto L_00434355;
L_0043434e:; BB(0x0043434e);
    /* 0043434e: mov eax, 2 */ r_eax = 0x2u;
    /* 00434353: jmp 0x434366 */ goto L_00434366;
L_00434355:; BB(0x00434355);
    /* 00434355: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00434357: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043435a: call 0x434200 */ r_esp -= 4; W32(r_esp, 0x43435fu); f_00434200();
    /* 0043435f: movsx ecx, byte ptr [eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 00434362: mov eax, dword ptr [ebp + ecx*4 - 0x14] */ r_eax = R32((u32)(r_ebp+r_ecx*4+0xffffffecu));
L_00434366:; BB(0x00434366);
    /* 00434366: mov esp, ebp */ r_esp = r_ebp;
    /* 00434368: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00434369: ret  */ FN_RET(0x00434310); r_esp += 4; return;
}

void f_00434370(void) /* sub_434370 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00434370);
    /* 00434370: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00434371: mov ebp, esp */ r_ebp = r_esp;
    /* 00434373: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00434374: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00434377: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00434379: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043437c: call 0x434200 */ r_esp -= 4; W32(r_esp, 0x434381u); f_00434200();
    /* 00434381: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 00434384: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 00434386: mov esp, ebp */ r_esp = r_ebp;
    /* 00434388: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00434389: ret 4 */ FN_RET(0x00434370); r_esp += 8; return;
}

void f_00434390(void) /* sub_434390 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00434390);
    /* 00434390: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00434391: mov ebp, esp */ r_ebp = r_esp;
    /* 00434393: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00434394: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00434397: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00434399: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043439c: call 0x434200 */ r_esp -= 4; W32(r_esp, 0x4343a1u); f_00434200();
    /* 004343a1: mov al, byte ptr [eax + 2] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x2u))) & 0xffu);
    /* 004343a4: mov esp, ebp */ r_esp = r_ebp;
    /* 004343a6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004343a7: ret  */ FN_RET(0x00434390); r_esp += 4; return;
}

void f_004343b0(void) /* sub_4343B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004343b0);
    /* 004343b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004343b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004343b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004343b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004343b7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004343b9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004343bc: call 0x434200 */ r_esp -= 4; W32(r_esp, 0x4343c1u); f_00434200();
    /* 004343c1: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 004343c4: mov byte ptr [eax + 2], cl */ W8((u32)(r_eax+0x2u), (u8)r_ecx);
    /* 004343c7: mov esp, ebp */ r_esp = r_ebp;
    /* 004343c9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004343ca: ret 4 */ FN_RET(0x004343b0); r_esp += 8; return;
}

void f_004343d0(void) /* sub_4343D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004343d0);
    /* 004343d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004343d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004343d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004343d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004343d7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004343d9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004343dc: call 0x434200 */ r_esp -= 4; W32(r_esp, 0x4343e1u); f_00434200();
    /* 004343e1: mov al, byte ptr [eax + 4] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x4u))) & 0xffu);
    /* 004343e4: mov esp, ebp */ r_esp = r_ebp;
    /* 004343e6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004343e7: ret  */ FN_RET(0x004343d0); r_esp += 4; return;
}

void f_004343f0(void) /* sub_4343F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004343f0);
    /* 004343f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004343f1: mov ebp, esp */ r_ebp = r_esp;
    /* 004343f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004343f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004343f7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004343f9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004343fc: call 0x434200 */ r_esp -= 4; W32(r_esp, 0x434401u); f_00434200();
    /* 00434401: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 00434404: mov byte ptr [eax + 4], cl */ W8((u32)(r_eax+0x4u), (u8)r_ecx);
    /* 00434407: mov esp, ebp */ r_esp = r_ebp;
    /* 00434409: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043440a: ret 4 */ FN_RET(0x004343f0); r_esp += 8; return;
}

void f_00434410(void) /* sub_434410 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00434410);
    /* 00434410: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00434411: mov ebp, esp */ r_ebp = r_esp;
    /* 00434413: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00434414: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00434417: mov ecx, dword ptr [0x7906d0] */ r_ecx = R32((u32)(0x7906d0u));
    /* 0043441d: call 0x5da830 */ r_esp -= 4; W32(r_esp, 0x434422u); f_005da830();
    /* 00434422: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00434425: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00434427: je 0x43442d */ if (fZ) goto L_0043442d;
L_00434429:; BB(0x00434429);
    /* 00434429: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0043442b: jmp 0x43443a */ goto L_0043443a;
L_0043442d:; BB(0x0043442d);
    /* 0043442d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0043442f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00434432: call 0x434200 */ r_esp -= 4; W32(r_esp, 0x434437u); f_00434200();
    /* 00434437: mov al, byte ptr [eax + 6] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x6u))) & 0xffu);
L_0043443a:; BB(0x0043443a);
    /* 0043443a: mov esp, ebp */ r_esp = r_ebp;
    /* 0043443c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043443d: ret  */ FN_RET(0x00434410); r_esp += 4; return;
}

void f_00434440(void) /* sub_434440 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00434440);
    /* 00434440: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00434441: mov ebp, esp */ r_ebp = r_esp;
    /* 00434443: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00434444: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00434447: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00434449: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043444c: call 0x434200 */ r_esp -= 4; W32(r_esp, 0x434451u); f_00434200();
    /* 00434451: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 00434454: mov byte ptr [eax + 6], cl */ W8((u32)(r_eax+0x6u), (u8)r_ecx);
    /* 00434457: mov esp, ebp */ r_esp = r_ebp;
    /* 00434459: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043445a: ret 4 */ FN_RET(0x00434440); r_esp += 8; return;
}

void f_00434460(void) /* sub_434460 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00434460);
    /* 00434460: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00434461: mov ebp, esp */ r_ebp = r_esp;
    /* 00434463: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00434465: push 0x69e7fe */ { u32 v = 0x69e7feu; r_esp -= 4; W32(r_esp, v); }
    /* 0043446a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00434470: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00434471: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00434474: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00434479: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043447b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043447c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0043447f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00434485: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00434488: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0043448f: jmp 0x43449a */ goto L_0043449a;
L_00434491:; BB(0x00434491);
    /* 00434491: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00434494: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00434497: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0043449a:; BB(0x0043449a);
    /* 0043449a: cmp dword ptr [ebp - 0x14], 0x4c */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043449e: jge 0x434507 */ if ((fS==fO)) goto L_00434507;
L_004344a0:; BB(0x004344a0);
    /* 004344a0: push 0x114 */ { u32 v = 0x114u; r_esp -= 4; W32(r_esp, v); }
    /* 004344a5: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4344aau); f_00686d82();
    /* 004344aa: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004344ad: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004344b0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004344b7: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004344bb: je 0x4344ca */ if (fZ) goto L_004344ca;
L_004344bd:; BB(0x004344bd);
    /* 004344bd: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004344c0: call 0x43bb00 */ r_esp -= 4; W32(r_esp, 0x4344c5u); f_0043bb00();
    /* 004344c5: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 004344c8: jmp 0x4344d1 */ goto L_004344d1;
L_004344ca:; BB(0x004344ca);
    /* 004344ca: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_004344d1:; BB(0x004344d1);
    /* 004344d1: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004344d4: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 004344d7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004344de: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004344e1: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004344e4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004344e7: mov dword ptr [eax + edx*4 + 4], ecx */ W32((u32)(r_eax+r_edx*4+0x4u), r_ecx);
    /* 004344eb: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004344ee: mov eax, dword ptr [edx*4 + 0x7134b0] */ r_eax = R32((u32)(r_edx*4+0x7134b0u));
    /* 004344f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004344f6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004344f9: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004344fc: mov ecx, dword ptr [edx + ecx*4 + 4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 00434500: call 0x5f53e0 */ r_esp -= 4; W32(r_esp, 0x434505u); f_005f53e0();
    /* 00434505: jmp 0x434491 */ goto L_00434491;
L_00434507:; BB(0x00434507);
    /* 00434507: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0043450e: jmp 0x434519 */ goto L_00434519;
L_00434510:; BB(0x00434510);
    /* 00434510: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00434513: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00434516: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_00434519:; BB(0x00434519);
    /* 00434519: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043451d: jge 0x434570 */ if ((fS==fO)) goto L_00434570;
L_0043451f:; BB(0x0043451f);
    /* 0043451f: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00434526: jmp 0x434531 */ goto L_00434531;
L_00434528:; BB(0x00434528);
    /* 00434528: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043452b: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043452e: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_00434531:; BB(0x00434531);
    /* 00434531: cmp dword ptr [ebp - 0x14], 0x4c */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00434535: jge 0x43456e */ if ((fS==fO)) goto L_0043456e;
L_00434537:; BB(0x00434537);
    /* 00434537: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00434539: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043453b: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x434540u); f_0064c8a0();
    /* 00434540: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00434543: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00434546: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00434549: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043454c: imul edx, edx, 0x260 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x260u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00434552: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00434555: lea ecx, [eax + edx + 0x134] */ r_ecx = (u32)(r_eax+r_edx+0x134u);
    /* 0043455c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043455f: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00434562: mov dword ptr [ecx + edx*8], eax */ W32((u32)(r_ecx+r_edx*8), r_eax);
    /* 00434565: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00434568: mov dword ptr [ecx + edx*8 + 4], eax */ W32((u32)(r_ecx+r_edx*8+0x4u), r_eax);
    /* 0043456c: jmp 0x434528 */ goto L_00434528;
L_0043456e:; BB(0x0043456e);
    /* 0043456e: jmp 0x434510 */ goto L_00434510;
L_00434570:; BB(0x00434570);
    /* 00434570: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00434573: mov dword ptr [ecx + 0xae4], 0xffffffff */ W32((u32)(r_ecx+0xae4u), 0xffffffffu);
    /* 0043457d: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00434580: mov dword ptr [edx + 0xae8], 0xffffffff */ W32((u32)(r_edx+0xae8u), 0xffffffffu);
    /* 0043458a: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0043458d: call 0x4343d0 */ r_esp -= 4; W32(r_esp, 0x434592u); f_004343d0();
    /* 00434592: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00434595: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 00434597: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00434599: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0043459c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043459f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004345a0: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004345a3: call 0x434c20 */ r_esp -= 4; W32(r_esp, 0x4345a8u); f_00434c20();
    /* 004345a8: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004345ab: mov dword ptr [ecx + 0xab8], 1 */ W32((u32)(r_ecx+0xab8u), 0x1u);
    /* 004345b5: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004345b8: mov dword ptr [edx + 0xac4], 0 */ W32((u32)(r_edx+0xac4u), 0x0u);
    /* 004345c2: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004345c5: mov dword ptr [eax + 0xabc], 0 */ W32((u32)(r_eax+0xabcu), 0x0u);
    /* 004345cf: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004345d2: mov byte ptr [ecx + 0xad4], 0 */ W8((u32)(r_ecx+0xad4u), 0x0u);
    /* 004345d9: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004345dc: mov byte ptr [edx + 0xad5], 0 */ W8((u32)(r_edx+0xad5u), 0x0u);
    /* 004345e3: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004345e6: mov dword ptr [eax + 0xaec], 0 */ W32((u32)(r_eax+0xaecu), 0x0u);
    /* 004345f0: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004345f3: mov dword ptr [ecx + 0xadc], 0 */ W32((u32)(r_ecx+0xadcu), 0x0u);
    /* 004345fd: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00434600: mov byte ptr [edx + 0xac0], 0 */ W8((u32)(r_edx+0xac0u), 0x0u);
    /* 00434607: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0043460a: call 0x434620 */ r_esp -= 4; W32(r_esp, 0x43460fu); f_00434620();
    /* 0043460f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00434612: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00434619: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043461a: mov esp, ebp */ r_esp = r_ebp;
    /* 0043461c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043461d: ret  */ FN_RET(0x00434460); r_esp += 4; return;
}

void f_00434620(void) /* sub_434620 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00434620);
    /* 00434620: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00434621: mov ebp, esp */ r_ebp = r_esp;
    /* 00434623: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00434626: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00434629: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043462b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0043462d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00434630: call 0x434bd0 */ r_esp -= 4; W32(r_esp, 0x434635u); f_00434bd0();
    /* 00434635: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00434638: mov dword ptr [eax + 0xae0], 0xffffffff */ W32((u32)(r_eax+0xae0u), 0xffffffffu);
    /* 00434642: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00434649: jmp 0x434654 */ goto L_00434654;
L_0043464b:; BB(0x0043464b);
    /* 0043464b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043464e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00434651: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00434654:; BB(0x00434654);
    /* 00434654: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00434658: jge 0x4346a7 */ if ((fS==fO)) goto L_004346a7;
L_0043465a:; BB(0x0043465a);
    /* 0043465a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043465d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043465e: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x434663u); f_005dcb00();
    /* 00434663: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00434666: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00434669: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043466c: mov byte ptr [eax + 0x4a2], 0 */ W8((u32)(r_eax+0x4a2u), 0x0u);
    /* 00434673: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00434676: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00434677: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x43467cu); f_005dcb00();
    /* 0043467c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043467f: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00434682: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00434685: mov byte ptr [edx + 0x4a0], 0 */ W8((u32)(r_edx+0x4a0u), 0x0u);
    /* 0043468c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043468f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00434690: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x434695u); f_005dcb00();
    /* 00434695: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00434698: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0043469b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043469e: mov byte ptr [ecx + 0x4a1], 0 */ W8((u32)(r_ecx+0x4a1u), 0x0u);
    /* 004346a5: jmp 0x43464b */ goto L_0043464b;
L_004346a7:; BB(0x004346a7);
    /* 004346a7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004346ae: jmp 0x4346b9 */ goto L_004346b9;
L_004346b0:; BB(0x004346b0);
    /* 004346b0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004346b3: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004346b6: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_004346b9:; BB(0x004346b9);
    /* 004346b9: cmp dword ptr [ebp - 4], 0x4c */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004346bd: jge 0x4346d5 */ if ((fS==fO)) goto L_004346d5;
L_004346bf:; BB(0x004346bf);
    /* 004346bf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004346c2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004346c5: mov edx, dword ptr [ecx + eax*4 + 4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 004346c9: mov dword ptr [edx + 0x110], 0xffffffff */ W32((u32)(r_edx+0x110u), 0xffffffffu);
    /* 004346d3: jmp 0x4346b0 */ goto L_004346b0;
L_004346d5:; BB(0x004346d5);
    /* 004346d5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004346d8: mov byte ptr [eax + 0xad4], 0 */ W8((u32)(r_eax+0xad4u), 0x0u);
    /* 004346df: mov esp, ebp */ r_esp = r_ebp;
    /* 004346e1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004346e2: ret  */ FN_RET(0x00434620); r_esp += 4; return;
}

void f_004346f0(void) /* sub_4346F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004346f0);
    /* 004346f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004346f1: mov ebp, esp */ r_ebp = r_esp;
    /* 004346f3: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004346f6: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 004346f9: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004346fc: mov ecx, dword ptr [eax + 0xac4] */ r_ecx = R32((u32)(r_eax+0xac4u));
    /* 00434702: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00434705: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00434707: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043470b: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0043470e: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 00434711: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00434713: je 0x43471c */ if (fZ) goto L_0043471c;
L_00434715:; BB(0x00434715);
    /* 00434715: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00434717: jmp 0x4347e5 */ goto L_004347e5;
L_0043471c:; BB(0x0043471c);
    /* 0043471c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00434723: jmp 0x43472e */ goto L_0043472e;
L_00434725:; BB(0x00434725);
    /* 00434725: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00434728: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043472b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0043472e:; BB(0x0043472e);
    /* 0043472e: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00434732: jge 0x434750 */ if ((fS==fO)) goto L_00434750;
L_00434734:; BB(0x00434734);
    /* 00434734: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00434737: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00434738: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0043473b: call 0x4349b0 */ r_esp -= 4; W32(r_esp, 0x434740u); f_004349b0();
    /* 00434740: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00434743: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00434745: je 0x43474e */ if (fZ) goto L_0043474e;
L_00434747:; BB(0x00434747);
    /* 00434747: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00434749: jmp 0x4347e5 */ goto L_004347e5;
L_0043474e:; BB(0x0043474e);
    /* 0043474e: jmp 0x434725 */ goto L_00434725;
L_00434750:; BB(0x00434750);
    /* 00434750: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00434757: jmp 0x434762 */ goto L_00434762;
L_00434759:; BB(0x00434759);
    /* 00434759: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043475c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043475f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00434762:; BB(0x00434762);
    /* 00434762: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00434766: jge 0x4347e3 */ if ((fS==fO)) goto L_004347e3;
L_00434768:; BB(0x00434768);
    /* 00434768: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043476b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043476c: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x434771u); f_005dcb00();
    /* 00434771: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00434774: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00434777: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043477a: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x43477fu); f_0063aac0();
    /* 0043477f: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00434781: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00434784: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00434786: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043478a: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0043478d: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 00434790: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00434792: jne 0x4347de */ if (!fZ) goto L_004347de;
L_00434794:; BB(0x00434794);
    /* 00434794: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00434797: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00434798: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x43479du); f_005dcb00();
    /* 0043479d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004347a0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004347a3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004347a6: mov dl, byte ptr [ecx + 0x4a1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4a1u))) & 0xffu);
    /* 004347ac: mov byte ptr [ebp - 0x15], dl */ W8((u32)(r_ebp+0xffffffebu), (u8)r_edx);
    /* 004347af: movzx eax, byte ptr [ebp - 0x15] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffebu));
    /* 004347b3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004347b5: jne 0x4347de */ if (!fZ) goto L_004347de;
L_004347b7:; BB(0x004347b7);
    /* 004347b7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004347ba: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004347bb: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4347c0u); f_005dcb00();
    /* 004347c0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004347c3: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004347c6: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004347c9: mov al, byte ptr [edx + 0x4a0] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x4a0u))) & 0xffu);
    /* 004347cf: mov byte ptr [ebp - 0x1d], al */ W8((u32)(r_ebp+0xffffffe3u), (u8)r_eax);
    /* 004347d2: movzx ecx, byte ptr [ebp - 0x1d] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffe3u));
    /* 004347d6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004347d8: jne 0x4347de */ if (!fZ) goto L_004347de;
L_004347da:; BB(0x004347da);
    /* 004347da: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004347dc: jmp 0x4347e5 */ goto L_004347e5;
L_004347de:; BB(0x004347de);
    /* 004347de: jmp 0x434759 */ goto L_00434759;
L_004347e3:; BB(0x004347e3);
    /* 004347e3: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_004347e5:; BB(0x004347e5);
    /* 004347e5: mov esp, ebp */ r_esp = r_ebp;
    /* 004347e7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004347e8: ret  */ FN_RET(0x004346f0); r_esp += 4; return;
}

void f_004347f0(void) /* sub_4347F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004347f0);
    /* 004347f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004347f1: mov ebp, esp */ r_ebp = r_esp;
    /* 004347f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004347f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004347f7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004347fa: cmp dword ptr [eax + 0xad8], -1 */ {  u32 a = R32((u32)(r_eax+0xad8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00434801: jne 0x434807 */ if (!fZ) goto L_00434807;
L_00434803:; BB(0x00434803);
    /* 00434803: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00434805: jmp 0x434819 */ goto L_00434819;
L_00434807:; BB(0x00434807);
    /* 00434807: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043480a: mov edx, dword ptr [ecx + 0xad8] */ r_edx = R32((u32)(r_ecx+0xad8u));
    /* 00434810: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00434811: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x434816u); f_005dcb00();
    /* 00434816: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00434819:; BB(0x00434819);
    /* 00434819: mov esp, ebp */ r_esp = r_ebp;
    /* 0043481b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043481c: ret  */ FN_RET(0x004347f0); r_esp += 4; return;
}

void f_004348e0(void) /* sub_4348E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004348e0);
    /* 004348e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004348e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004348e3: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004348e6: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 004348e9: mov eax, dword ptr [0x7906d0] */ r_eax = R32((u32)(0x7906d0u));
    /* 004348ee: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004348f0: mov ecx, dword ptr [0x7906d0] */ r_ecx = R32((u32)(0x7906d0u));
    /* 004348f6: mov eax, dword ptr [edx + 0x2b0] */ r_eax = R32((u32)(r_edx+0x2b0u));
    /* 004348fc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4348feu); call_ind(t); }
    /* 004348fe: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00434901: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00434903: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00434905: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x43490au); f_0064c8a0();
    /* 0043490a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043490d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00434910: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00434913: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00434916: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00434919: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0043491c: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0043491f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00434926: jmp 0x434931 */ goto L_00434931;
L_00434928:; BB(0x00434928);
    /* 00434928: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043492b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043492e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00434931:; BB(0x00434931);
    /* 00434931: cmp dword ptr [ebp - 4], 0x4c */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00434935: jge 0x434997 */ if ((fS==fO)) goto L_00434997;
L_00434937:; BB(0x00434937);
    /* 00434937: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043493a: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043493d: mov eax, dword ptr [edx + ecx*4 + 4] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 00434941: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00434944: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00434947: shl ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0043494a: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0043494d: lea eax, [edx + ecx + 0x48] */ r_eax = (u32)(r_edx+r_ecx+0x48u);
    /* 00434951: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00434953: shl ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00434956: mov edx, dword ptr [eax + ecx] */ r_edx = R32((u32)(r_eax+r_ecx));
    /* 00434959: mov eax, dword ptr [eax + ecx + 4] */ r_eax = R32((u32)(r_eax+r_ecx+0x4u));
    /* 0043495d: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 00434960: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00434963: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00434966: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00434969: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0043496c: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0043496f: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00434973: jne 0x43497b */ if (!fZ) goto L_0043497b;
L_00434975:; BB(0x00434975);
    /* 00434975: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00434979: je 0x434995 */ if (fZ) goto L_00434995;
L_0043497b:; BB(0x0043497b);
    /* 0043497b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043497e: add eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00434981: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00434984: fild dword ptr [ebp - 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff0u)));
    /* 00434987: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043498a: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0043498d: lea ecx, [ebp - 0xc] */ r_ecx = (u32)(r_ebp+0xfffffff4u);
    /* 00434990: call 0x64c510 */ r_esp -= 4; W32(r_esp, 0x434995u); f_0064c510();
L_00434995:; BB(0x00434995);
    /* 00434995: jmp 0x434928 */ goto L_00434928;
L_00434997:; BB(0x00434997);
    /* 00434997: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043499a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043499c: cmp ecx, dword ptr [ebp - 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043499f: setl al */ r_eax = (r_eax & 0xffffff00u) | ((((fS!=fO)) ? 1 : 0) & 0xffu);
    /* 004349a2: mov esp, ebp */ r_esp = r_ebp;
    /* 004349a4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004349a5: ret 4 */ FN_RET(0x004348e0); r_esp += 8; return;
}

void f_004349b0(void) /* sub_4349B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004349b0);
    /* 004349b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004349b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004349b3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004349b6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004349b9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004349c0: jmp 0x4349cb */ goto L_004349cb;
L_004349c2:; BB(0x004349c2);
    /* 004349c2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004349c5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004349c8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_004349cb:; BB(0x004349cb);
    /* 004349cb: cmp dword ptr [ebp - 4], 0x4c */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004349cf: jge 0x4349f3 */ if ((fS==fO)) goto L_004349f3;
L_004349d1:; BB(0x004349d1);
    /* 004349d1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004349d3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004349d6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004349d7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004349da: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004349dd: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 004349e1: call 0x5cb7d0 */ r_esp -= 4; W32(r_esp, 0x4349e6u); f_005cb7d0();
    /* 004349e6: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004349e9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004349eb: je 0x4349f1 */ if (fZ) goto L_004349f1;
L_004349ed:; BB(0x004349ed);
    /* 004349ed: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004349ef: jmp 0x4349f5 */ goto L_004349f5;
L_004349f1:; BB(0x004349f1);
    /* 004349f1: jmp 0x4349c2 */ goto L_004349c2;
L_004349f3:; BB(0x004349f3);
    /* 004349f3: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_004349f5:; BB(0x004349f5);
    /* 004349f5: mov esp, ebp */ r_esp = r_ebp;
    /* 004349f7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004349f8: ret 4 */ FN_RET(0x004349b0); r_esp += 8; return;
}

void f_00434a00(void) /* sub_434A00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00434a00);
    /* 00434a00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00434a01: mov ebp, esp */ r_ebp = r_esp;
    /* 00434a03: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00434a06: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00434a09: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00434a10: jmp 0x434a1b */ goto L_00434a1b;
L_00434a12:; BB(0x00434a12);
    /* 00434a12: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00434a15: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00434a18: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00434a1b:; BB(0x00434a1b);
    /* 00434a1b: cmp dword ptr [ebp - 4], 0x4c */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00434a1f: jge 0x434a79 */ if ((fS==fO)) goto L_00434a79;
L_00434a21:; BB(0x00434a21);
    /* 00434a21: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00434a24: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00434a27: mov eax, dword ptr [edx + ecx*4 + 4] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 00434a2b: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00434a2e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00434a31: shl ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00434a34: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00434a37: lea eax, [edx + ecx + 0x48] */ r_eax = (u32)(r_edx+r_ecx+0x48u);
    /* 00434a3b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00434a3d: shl ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00434a40: mov edx, dword ptr [eax + ecx] */ r_edx = R32((u32)(r_eax+r_ecx));
    /* 00434a43: mov eax, dword ptr [eax + ecx + 4] */ r_eax = R32((u32)(r_eax+r_ecx+0x4u));
    /* 00434a47: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00434a4a: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00434a4d: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00434a51: je 0x434a77 */ if (fZ) goto L_00434a77;
L_00434a53:; BB(0x00434a53);
    /* 00434a53: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00434a56: mov edx, dword ptr [0x7906dc] */ r_edx = R32((u32)(0x7906dcu));
    /* 00434a5c: mov eax, dword ptr [edx + ecx*4 + 0x14] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x14u));
    /* 00434a60: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00434a63: imul ecx, ecx, 0x1e0 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x1e0u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00434a69: cmp dword ptr [eax + ecx + 0x17c], 0 */ {  u32 a = R32((u32)(r_eax+r_ecx+0x17cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00434a71: jne 0x434a77 */ if (!fZ) goto L_00434a77;
L_00434a73:; BB(0x00434a73);
    /* 00434a73: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00434a75: jmp 0x434a7b */ goto L_00434a7b;
L_00434a77:; BB(0x00434a77);
    /* 00434a77: jmp 0x434a12 */ goto L_00434a12;
L_00434a79:; BB(0x00434a79);
    /* 00434a79: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00434a7b:; BB(0x00434a7b);
    /* 00434a7b: mov esp, ebp */ r_esp = r_ebp;
    /* 00434a7d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00434a7e: ret 4 */ FN_RET(0x00434a00); r_esp += 8; return;
}

void f_00434a90(void) /* sub_434A90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00434a90);
    /* 00434a90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00434a91: mov ebp, esp */ r_ebp = r_esp;
    /* 00434a93: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00434a96: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00434a99: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00434aa0: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00434aa7: jmp 0x434ab2 */ goto L_00434ab2;
L_00434aa9:; BB(0x00434aa9);
    /* 00434aa9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00434aac: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00434aaf: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_00434ab2:; BB(0x00434ab2);
    /* 00434ab2: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00434ab6: jge 0x434ada */ if ((fS==fO)) goto L_00434ada;
L_00434ab8:; BB(0x00434ab8);
    /* 00434ab8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00434abb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00434abc: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00434abf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00434ac0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00434ac3: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x434ac8u); f_004369a0();
    /* 00434ac8: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00434acb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00434acd: je 0x434ad8 */ if (fZ) goto L_00434ad8;
L_00434acf:; BB(0x00434acf);
    /* 00434acf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00434ad2: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00434ad5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00434ad8:; BB(0x00434ad8);
    /* 00434ad8: jmp 0x434aa9 */ goto L_00434aa9;
L_00434ada:; BB(0x00434ada);
    /* 00434ada: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00434add: mov esp, ebp */ r_esp = r_ebp;
    /* 00434adf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00434ae0: ret 4 */ FN_RET(0x00434a90); r_esp += 8; return;
}

void f_00434af0(void) /* sub_434AF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00434af0);
    /* 00434af0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00434af1: mov ebp, esp */ r_ebp = r_esp;
    /* 00434af3: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00434af6: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00434af9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00434afc: mov ecx, dword ptr [eax + 0xac4] */ r_ecx = R32((u32)(r_eax+0xac4u));
    /* 00434b02: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00434b05: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00434b07: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00434b0b: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00434b0e: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 00434b11: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00434b13: jne 0x434bc2 */ if (!fZ) goto L_00434bc2;
L_00434b19:; BB(0x00434b19);
    /* 00434b19: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00434b1b: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00434b1e: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00434b21: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 00434b28: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00434b2b: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00434b30: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00434b33: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00434b36: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 00434b3d: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00434b40: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00434b43: add ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00434b46: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00434b49: jle 0x434bc2 */ if ((fZ||fS!=fO)) goto L_00434bc2;
L_00434b4b:; BB(0x00434b4b);
    /* 00434b4b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00434b4d: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00434b50: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00434b53: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 00434b5a: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00434b5d: mov edx, 1 */ r_edx = 0x1u;
    /* 00434b62: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00434b65: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00434b68: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 00434b6f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00434b72: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00434b75: add edx, dword ptr [ebp - 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00434b78: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00434b7b: jge 0x434bc2 */ if ((fS==fO)) goto L_00434bc2;
L_00434b7d:; BB(0x00434b7d);
    /* 00434b7d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00434b7f: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00434b82: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00434b85: mov edx, dword ptr [ecx + eax + 0xacc] */ r_edx = R32((u32)(r_ecx+r_eax+0xaccu));
    /* 00434b8c: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00434b8f: mov eax, 1 */ r_eax = 0x1u;
    /* 00434b94: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00434b97: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00434b9a: mov edx, dword ptr [ecx + eax + 0xacc] */ r_edx = R32((u32)(r_ecx+r_eax+0xaccu));
    /* 00434ba1: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00434ba4: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00434ba7: add eax, dword ptr [ebp - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00434baa: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00434bac: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00434baf: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00434bb2: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 00434bb5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00434bb7: jne 0x434bc2 */ if (!fZ) goto L_00434bc2;
L_00434bb9:; BB(0x00434bb9);
    /* 00434bb9: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00434bc0: jmp 0x434bc9 */ goto L_00434bc9;
L_00434bc2:; BB(0x00434bc2);
    /* 00434bc2: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00434bc9:; BB(0x00434bc9);
    /* 00434bc9: mov al, byte ptr [ebp - 0x24] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffdcu))) & 0xffu);
    /* 00434bcc: mov esp, ebp */ r_esp = r_ebp;
    /* 00434bce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00434bcf: ret  */ FN_RET(0x00434af0); r_esp += 4; return;
}

void f_00434bd0(void) /* sub_434BD0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00434bd0);
    /* 00434bd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00434bd1: mov ebp, esp */ r_ebp = r_esp;
    /* 00434bd3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00434bd4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00434bd7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00434bda: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00434bdd: mov dword ptr [eax + 0xad8], ecx */ W32((u32)(r_eax+0xad8u), r_ecx);
    /* 00434be3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00434be6: cmp dword ptr [edx + 0xad8], -1 */ {  u32 a = R32((u32)(r_edx+0xad8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00434bed: je 0x434c06 */ if (fZ) goto L_00434c06;
L_00434bef:; BB(0x00434bef);
    /* 00434bef: mov al, byte ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 00434bf2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00434bf3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00434bf6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00434bf7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00434bf9: mov ecx, dword ptr [0x7906d0] */ r_ecx = R32((u32)(0x7906d0u));
    /* 00434bff: call 0x5d8a20 */ r_esp -= 4; W32(r_esp, 0x434c04u); f_005d8a20();
    /* 00434c04: jmp 0x434c17 */ goto L_00434c17;
L_00434c06:; BB(0x00434c06);
    /* 00434c06: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00434c08: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00434c0a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00434c0c: mov ecx, dword ptr [0x7906d0] */ r_ecx = R32((u32)(0x7906d0u));
    /* 00434c12: call 0x5d8a20 */ r_esp -= 4; W32(r_esp, 0x434c17u); f_005d8a20();
L_00434c17:; BB(0x00434c17);
    /* 00434c17: mov esp, ebp */ r_esp = r_ebp;
    /* 00434c19: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00434c1a: ret 8 */ FN_RET(0x00434bd0); r_esp += 12; return;
}

void f_00434c20(void) /* sub_434C20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00434c20);
    /* 00434c20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00434c21: mov ebp, esp */ r_ebp = r_esp;
    /* 00434c23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00434c24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00434c27: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00434c2a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00434c2d: mov dword ptr [eax + 0xab4], ecx */ W32((u32)(r_eax+0xab4u), r_ecx);
    /* 00434c33: mov esp, ebp */ r_esp = r_ebp;
    /* 00434c35: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00434c36: ret 4 */ FN_RET(0x00434c20); r_esp += 8; return;
}

void f_00434c40(void) /* sub_434C40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00434c40);
    /* 00434c40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00434c41: mov ebp, esp */ r_ebp = r_esp;
    /* 00434c43: sub esp, 0xa8 */ {  u32 a = r_esp; u32 b = 0xa8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00434c49: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00434c4e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00434c50: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00434c53: mov dword ptr [ebp - 0xa4], ecx */ W32((u32)(r_ebp+0xffffff5cu), r_ecx);
    /* 00434c59: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
    /* 00434c60: mov dword ptr [ebp - 0x6c], 3 */ W32((u32)(r_ebp+0xffffff94u), 0x3u);
    /* 00434c67: mov dword ptr [ebp - 0x68], 2 */ W32((u32)(r_ebp+0xffffff98u), 0x2u);
    /* 00434c6e: mov dword ptr [ebp - 0x64], 1 */ W32((u32)(r_ebp+0xffffff9cu), 0x1u);
    /* 00434c75: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00434c7c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00434c83: mov eax, dword ptr [ebp - 0xa4] */ r_eax = R32((u32)(r_ebp+0xffffff5cu));
    /* 00434c89: mov cl, byte ptr [eax + 0xac0] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0xac0u))) & 0xffu);
    /* 00434c8f: mov byte ptr [ebp - 0x71], cl */ W8((u32)(r_ebp+0xffffff8fu), (u8)r_ecx);
    /* 00434c92: movzx edx, byte ptr [ebp - 0x71] */ r_edx = (u32)R8((u32)(r_ebp+0xffffff8fu));
    /* 00434c96: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00434c98: je 0x434c9f */ if (fZ) goto L_00434c9f;
L_00434c9a:; BB(0x00434c9a);
    /* 00434c9a: jmp 0x434f7d */ goto L_00434f7d;
L_00434c9f:; BB(0x00434c9f);
    /* 00434c9f: mov eax, dword ptr [ebp - 0xa4] */ r_eax = R32((u32)(r_ebp+0xffffff5cu));
    /* 00434ca5: mov dword ptr [eax + 0xabc], 0 */ W32((u32)(r_eax+0xabcu), 0x0u);
    /* 00434caf: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 00434cb5: call 0x4343d0 */ r_esp -= 4; W32(r_esp, 0x434cbau); f_004343d0();
    /* 00434cba: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00434cbd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00434cbf: je 0x434ce0 */ if (fZ) goto L_00434ce0;
L_00434cc1:; BB(0x00434cc1);
    /* 00434cc1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00434cc3: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 00434cc9: call 0x434c20 */ r_esp -= 4; W32(r_esp, 0x434cceu); f_00434c20();
    /* 00434cce: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 00434cd4: mov byte ptr [edx + 0xac0], 1 */ W8((u32)(r_edx+0xac0u), 0x1u);
    /* 00434cdb: jmp 0x434f7d */ goto L_00434f7d;
L_00434ce0:; BB(0x00434ce0);
    /* 00434ce0: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00434ce7: jmp 0x434cf2 */ goto L_00434cf2;
L_00434ce9:; BB(0x00434ce9);
    /* 00434ce9: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00434cec: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00434cef: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_00434cf2:; BB(0x00434cf2);
    /* 00434cf2: cmp dword ptr [ebp - 0xc], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00434cf6: jge 0x434d31 */ if ((fS==fO)) goto L_00434d31;
L_00434cf8:; BB(0x00434cf8);
    /* 00434cf8: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 00434cfe: mov edx, dword ptr [ecx + 0xab8] */ r_edx = R32((u32)(r_ecx+0xab8u));
    /* 00434d04: mov dword ptr [ebp - 0x78], edx */ W32((u32)(r_ebp+0xffffff88u), r_edx);
    /* 00434d07: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00434d0a: mov ecx, dword ptr [ebp + eax*4 - 0x70] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffff90u));
    /* 00434d0e: cmp ecx, dword ptr [ebp - 0x78] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffff88u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00434d11: jne 0x434d2f */ if (!fZ) goto L_00434d2f;
L_00434d13:; BB(0x00434d13);
    /* 00434d13: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00434d16: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00434d19: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00434d1c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00434d1f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00434d22: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00434d26: jle 0x434d2f */ if ((fZ||fS!=fO)) goto L_00434d2f;
L_00434d28:; BB(0x00434d28);
    /* 00434d28: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_00434d2f:; BB(0x00434d2f);
    /* 00434d2f: jmp 0x434ce9 */ goto L_00434ce9;
L_00434d31:; BB(0x00434d31);
    /* 00434d31: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00434d38: jmp 0x434d43 */ goto L_00434d43;
L_00434d3a:; BB(0x00434d3a);
    /* 00434d3a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00434d3d: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00434d40: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_00434d43:; BB(0x00434d43);
    /* 00434d43: cmp dword ptr [ebp - 0xc], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00434d47: jge 0x434f70 */ if ((fS==fO)) goto L_00434f70;
L_00434d4d:; BB(0x00434d4d);
    /* 00434d4d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00434d50: mov eax, dword ptr [ebp + edx*4 - 0x70] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffff90u));
    /* 00434d54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00434d55: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x434d5au); f_005dcb00();
    /* 00434d5a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00434d5d: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 00434d60: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 00434d63: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x434d68u); f_0063aac0();
    /* 00434d68: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00434d6a: mov dword ptr [ebp - 0x7c], ecx */ W32((u32)(r_ebp+0xffffff84u), r_ecx);
    /* 00434d6d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00434d6f: cmp dword ptr [ebp - 0x7c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff84u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00434d73: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00434d76: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 00434d79: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00434d7b: jne 0x434f29 */ if (!fZ) goto L_00434f29;
L_00434d81:; BB(0x00434d81);
    /* 00434d81: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00434d84: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00434d87: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00434d8a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00434d8d: mov eax, dword ptr [ebp + edx*4 - 0x70] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffff90u));
    /* 00434d91: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00434d92: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x434d97u); f_005dcb00();
    /* 00434d97: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00434d9a: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 00434da0: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 00434da6: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x434dabu); f_0063aac0();
    /* 00434dab: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00434dad: mov dword ptr [ebp - 0x84], ecx */ W32((u32)(r_ebp+0xffffff7cu), r_ecx);
    /* 00434db3: cmp dword ptr [ebp - 0x84], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff7cu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00434dba: je 0x434de4 */ if (fZ) goto L_00434de4;
L_00434dbc:; BB(0x00434dbc);
    /* 00434dbc: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 00434dc2: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x434dc7u); f_0063aac0();
    /* 00434dc7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00434dc9: mov dword ptr [ebp - 0x88], edx */ W32((u32)(r_ebp+0xffffff78u), r_edx);
    /* 00434dcf: cmp dword ptr [ebp - 0x88], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff78u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00434dd6: je 0x434de4 */ if (fZ) goto L_00434de4;
L_00434dd8:; BB(0x00434dd8);
    /* 00434dd8: mov dword ptr [ebp - 0xa8], 0 */ W32((u32)(r_ebp+0xffffff58u), 0x0u);
    /* 00434de2: jmp 0x434dee */ goto L_00434dee;
L_00434de4:; BB(0x00434de4);
    /* 00434de4: mov dword ptr [ebp - 0xa8], 1 */ W32((u32)(r_ebp+0xffffff58u), 0x1u);
L_00434dee:; BB(0x00434dee);
    /* 00434dee: movzx eax, byte ptr [ebp - 0xa8] */ r_eax = (u32)R8((u32)(r_ebp+0xffffff58u));
    /* 00434df5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00434df7: je 0x434ece */ if (fZ) goto L_00434ece;
L_00434dfd:; BB(0x00434dfd);
    /* 00434dfd: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00434e03: mov dl, byte ptr [ecx + 0x25] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x25u))) & 0xffu);
    /* 00434e06: mov byte ptr [ebp - 0x8d], dl */ W8((u32)(r_ebp+0xffffff73u), (u8)r_edx);
    /* 00434e0c: movzx eax, byte ptr [ebp - 0x8d] */ r_eax = (u32)R8((u32)(r_ebp+0xffffff73u));
    /* 00434e13: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00434e15: jne 0x434ecc */ if (!fZ) goto L_00434ecc;
L_00434e1b:; BB(0x00434e1b);
    /* 00434e1b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00434e1e: mov edx, dword ptr [ebp + ecx*4 - 0x70] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffff90u));
    /* 00434e22: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00434e23: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x434e28u); f_005dcb00();
    /* 00434e28: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00434e2b: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 00434e31: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 00434e37: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x434e3cu); f_0063aac0();
    /* 00434e3c: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00434e3f: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 00434e45: mov eax, dword ptr [ebp - 0x98] */ r_eax = R32((u32)(r_ebp+0xffffff68u));
    /* 00434e4b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00434e4c: push 0x6b7f58 */ { u32 v = 0x6b7f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00434e51: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x434e56u); f_00630f40();
    /* 00434e56: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00434e59: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00434e5a: lea ecx, [ebp - 0x60] */ r_ecx = (u32)(r_ebp+0xffffffa0u);
    /* 00434e5d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00434e5e: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x434e64u); call_ind(t); }
    /* 00434e64: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00434e67: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00434e69: push 0x6b7f3c */ { u32 v = 0x6b7f3cu; r_esp -= 4; W32(r_esp, v); }
    /* 00434e6e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x434e73u); f_00630f40();
    /* 00434e73: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00434e76: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00434e77: lea edx, [ebp - 0x60] */ r_edx = (u32)(r_ebp+0xffffffa0u);
    /* 00434e7a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00434e7b: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x434e80u); f_0062ff10();
    /* 00434e80: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00434e83: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00434e86: jne 0x434ecc */ if (!fZ) goto L_00434ecc;
L_00434e88:; BB(0x00434e88);
    /* 00434e88: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00434e8b: mov ecx, dword ptr [ebp + eax*4 - 0x70] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffff90u));
    /* 00434e8f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00434e90: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 00434e96: call 0x434c20 */ r_esp -= 4; W32(r_esp, 0x434e9bu); f_00434c20();
    /* 00434e9b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00434e9e: mov eax, dword ptr [ebp + edx*4 - 0x70] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffff90u));
    /* 00434ea2: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
    /* 00434ea8: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 00434eae: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 00434eb4: mov dword ptr [ecx + 0xab8], edx */ W32((u32)(r_ecx+0xab8u), r_edx);
    /* 00434eba: mov eax, dword ptr [ebp - 0xa4] */ r_eax = R32((u32)(r_ebp+0xffffff5cu));
    /* 00434ec0: mov byte ptr [eax + 0xac0], 1 */ W8((u32)(r_eax+0xac0u), 0x1u);
    /* 00434ec7: jmp 0x434f7d */ goto L_00434f7d;
L_00434ecc:; BB(0x00434ecc);
    /* 00434ecc: jmp 0x434f29 */ goto L_00434f29;
L_00434ece:; BB(0x00434ece);
    /* 00434ece: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00434ed1: mov edx, dword ptr [ebp + ecx*4 - 0x70] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffff90u));
    /* 00434ed5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00434ed6: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 00434edc: call 0x435040 */ r_esp -= 4; W32(r_esp, 0x434ee1u); f_00435040();
    /* 00434ee1: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00434ee4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00434ee6: je 0x434f29 */ if (fZ) goto L_00434f29;
L_00434ee8:; BB(0x00434ee8);
    /* 00434ee8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00434eeb: mov edx, dword ptr [ebp + ecx*4 - 0x70] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffff90u));
    /* 00434eef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00434ef0: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 00434ef6: call 0x434c20 */ r_esp -= 4; W32(r_esp, 0x434efbu); f_00434c20();
    /* 00434efb: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00434efe: mov ecx, dword ptr [ebp + eax*4 - 0x70] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffff90u));
    /* 00434f02: mov dword ptr [ebp - 0xa0], ecx */ W32((u32)(r_ebp+0xffffff60u), r_ecx);
    /* 00434f08: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 00434f0e: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 00434f14: mov dword ptr [edx + 0xab8], eax */ W32((u32)(r_edx+0xab8u), r_eax);
    /* 00434f1a: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 00434f20: mov byte ptr [ecx + 0xac0], 1 */ W8((u32)(r_ecx+0xac0u), 0x1u);
    /* 00434f27: jmp 0x434f7d */ goto L_00434f7d;
L_00434f29:; BB(0x00434f29);
    /* 00434f29: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00434f2f: call 0x636610 */ r_esp -= 4; W32(r_esp, 0x434f34u); f_00636610();
    /* 00434f34: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00434f37: jne 0x434f55 */ if (!fZ) goto L_00434f55;
L_00434f39:; BB(0x00434f39);
    /* 00434f39: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00434f3b: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 00434f41: call 0x434c20 */ r_esp -= 4; W32(r_esp, 0x434f46u); f_00434c20();
    /* 00434f46: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 00434f4c: mov byte ptr [edx + 0xac0], 1 */ W8((u32)(r_edx+0xac0u), 0x1u);
    /* 00434f53: jmp 0x434f7d */ goto L_00434f7d;
L_00434f55:; BB(0x00434f55);
    /* 00434f55: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00434f58: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00434f5b: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00434f5e: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00434f62: jle 0x434f6b */ if ((fZ||fS!=fO)) goto L_00434f6b;
L_00434f64:; BB(0x00434f64);
    /* 00434f64: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_00434f6b:; BB(0x00434f6b);
    /* 00434f6b: jmp 0x434d3a */ goto L_00434d3a;
L_00434f70:; BB(0x00434f70);
    /* 00434f70: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00434f72: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 00434f78: call 0x434c20 */ r_esp -= 4; W32(r_esp, 0x434f7du); f_00434c20();
L_00434f7d:; BB(0x00434f7d);
    /* 00434f7d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00434f80: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00434f82: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x434f87u); f_00686d72();
    /* 00434f87: mov esp, ebp */ r_esp = r_ebp;
    /* 00434f89: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00434f8a: ret  */ FN_RET(0x00434c40); r_esp += 4; return;
}

void f_00434f90(void) /* sub_434F90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00434f90);
    /* 00434f90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00434f91: mov ebp, esp */ r_ebp = r_esp;
    /* 00434f93: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00434f96: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00434f97: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00434f9a: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00434fa1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00434fa8: jmp 0x434fb3 */ goto L_00434fb3;
L_00434faa:; BB(0x00434faa);
    /* 00434faa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00434fad: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00434fb0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00434fb3:; BB(0x00434fb3);
    /* 00434fb3: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00434fb7: jge 0x435035 */ if ((fS==fO)) goto L_00435035;
L_00434fb9:; BB(0x00434fb9);
    /* 00434fb9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00434fbc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00434fbd: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x434fc2u); f_005dcb00();
    /* 00434fc2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00434fc5: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00434fc8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00434fcb: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x434fd0u); f_0063aac0();
    /* 00434fd0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00434fd2: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00434fd5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00434fd7: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00434fdb: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00434fde: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00434fe1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00434fe3: jne 0x435030 */ if (!fZ) goto L_00435030;
L_00434fe5:; BB(0x00434fe5);
    /* 00434fe5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00434fe8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00434fe9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00434fec: call 0x4349b0 */ r_esp -= 4; W32(r_esp, 0x434ff1u); f_004349b0();
    /* 00434ff1: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00434ff4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00434ff6: jne 0x435027 */ if (!fZ) goto L_00435027;
L_00434ff8:; BB(0x00434ff8);
    /* 00434ff8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00434ffb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00434ffc: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x435001u); f_005dcb00();
    /* 00435001: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00435004: mov ecx, eax */ r_ecx = r_eax;
    /* 00435006: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x43500bu); f_005d5a50();
    /* 0043500b: mov esi, eax */ r_esi = r_eax;
    /* 0043500d: mov edx, dword ptr [0x7906d0] */ r_edx = R32((u32)(0x7906d0u));
    /* 00435013: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00435015: mov ecx, dword ptr [0x7906d0] */ r_ecx = R32((u32)(0x7906d0u));
    /* 0043501b: mov edx, dword ptr [eax + 0x2b0] */ r_edx = R32((u32)(r_eax+0x2b0u));
    /* 00435021: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x435023u); call_ind(t); }
    /* 00435023: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00435025: jl 0x435030 */ if ((fS!=fO)) goto L_00435030;
L_00435027:; BB(0x00435027);
    /* 00435027: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043502a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043502d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_00435030:; BB(0x00435030);
    /* 00435030: jmp 0x434faa */ goto L_00434faa;
L_00435035:; BB(0x00435035);
    /* 00435035: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00435038: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00435039: mov esp, ebp */ r_esp = r_ebp;
    /* 0043503b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043503c: ret  */ FN_RET(0x00434f90); r_esp += 4; return;
}

