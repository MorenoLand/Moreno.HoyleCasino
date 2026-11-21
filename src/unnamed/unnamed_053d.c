#include "protos.h"

void f_0053d320(void) /* sub_53D320 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053d320);
    /* 0053d320: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053d321: mov ebp, esp */ r_ebp = r_esp;
    /* 0053d323: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053d324: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0053d327: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053d32a: mov byte ptr [eax + 4], 0 */ W8((u32)(r_eax+0x4u), 0x0u);
    /* 0053d32e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053d331: mov byte ptr [ecx + 5], 0 */ W8((u32)(r_ecx+0x5u), 0x0u);
    /* 0053d335: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053d338: mov byte ptr [edx + 7], 0 */ W8((u32)(r_edx+0x7u), 0x0u);
    /* 0053d33c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053d33f: mov byte ptr [eax + 8], 0 */ W8((u32)(r_eax+0x8u), 0x0u);
    /* 0053d343: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053d346: mov byte ptr [ecx + 9], 0 */ W8((u32)(r_ecx+0x9u), 0x0u);
    /* 0053d34a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053d34d: mov byte ptr [edx + 6], 0 */ W8((u32)(r_edx+0x6u), 0x0u);
    /* 0053d351: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053d354: mov byte ptr [eax + 0xa], 0 */ W8((u32)(r_eax+0xau), 0x0u);
    /* 0053d358: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053d35b: mov byte ptr [ecx + 0xb], 0 */ W8((u32)(r_ecx+0xbu), 0x0u);
    /* 0053d35f: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053d363: jne 0x53d392 */ if (!fZ) goto L_0053d392;
L_0053d365:; BB(0x0053d365);
    /* 0053d365: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053d36b: call 0x5408b0 */ r_esp -= 4; W32(r_esp, 0x53d370u); f_005408b0();
    /* 0053d370: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0053d373: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053d374: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053d376: mov eax, dword ptr [0x7933e8] */ r_eax = R32((u32)(0x7933e8u));
    /* 0053d37b: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0053d37e: mov edx, dword ptr [0x7933e8] */ r_edx = R32((u32)(0x7933e8u));
    /* 0053d384: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0053d387: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0053d389: mov ecx, eax */ r_ecx = r_eax;
    /* 0053d38b: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0053d38e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53d390u); call_ind(t); }
    /* 0053d390: jmp 0x53d3b4 */ goto L_0053d3b4;
L_0053d392:; BB(0x0053d392);
    /* 0053d392: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0053d395: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053d396: push 0x1f4 */ { u32 v = 0x1f4u; r_esp -= 4; W32(r_esp, v); }
    /* 0053d39b: mov edx, dword ptr [0x7933e8] */ r_edx = R32((u32)(0x7933e8u));
    /* 0053d3a1: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0053d3a4: mov ecx, dword ptr [0x7933e8] */ r_ecx = R32((u32)(0x7933e8u));
    /* 0053d3aa: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0053d3ad: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0053d3af: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0053d3b2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53d3b4u); call_ind(t); }
L_0053d3b4:; BB(0x0053d3b4);
    /* 0053d3b4: mov esp, ebp */ r_esp = r_ebp;
    /* 0053d3b6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053d3b7: ret 4 */ FN_RET(0x0053d320); r_esp += 8; return;
}

void f_0053d3c0(void) /* sub_53D3C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053d3c0);
    /* 0053d3c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053d3c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0053d3c3: sub esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053d3c6: mov dword ptr [ebp - 0x64], ecx */ W32((u32)(r_ebp+0xffffff9cu), r_ecx);
    /* 0053d3c9: mov ecx, dword ptr [0x7933f4] */ r_ecx = R32((u32)(0x7933f4u));
    /* 0053d3cf: call 0x53b1a0 */ r_esp -= 4; W32(r_esp, 0x53d3d4u); f_0053b1a0();
    /* 0053d3d4: mov eax, dword ptr [0x7933ec] */ r_eax = R32((u32)(0x7933ecu));
    /* 0053d3d9: mov ecx, dword ptr [eax + 0x100] */ r_ecx = R32((u32)(r_eax+0x100u));
    /* 0053d3df: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0053d3e2: cmp dword ptr [ebp - 8], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053d3e6: je 0x53d3f5 */ if (fZ) goto L_0053d3f5;
L_0053d3e8:; BB(0x0053d3e8);
    /* 0053d3e8: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0053d3eb: call 0x53deb0 */ r_esp -= 4; W32(r_esp, 0x53d3f0u); f_0053deb0();
    /* 0053d3f0: jmp 0x53d8f6 */ goto L_0053d8f6;
L_0053d3f5:; BB(0x0053d3f5);
    /* 0053d3f5: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0053d3f8: movzx eax, byte ptr [edx + 4] */ r_eax = (u32)R8((u32)(r_edx+0x4u));
    /* 0053d3fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053d3fe: jne 0x53d44c */ if (!fZ) goto L_0053d44c;
L_0053d400:; BB(0x0053d400);
    /* 0053d400: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0053d403: mov byte ptr [ecx + 4], 1 */ W8((u32)(r_ecx+0x4u), 0x1u);
    /* 0053d407: mov edx, dword ptr [0x7933ec] */ r_edx = R32((u32)(0x7933ecu));
    /* 0053d40d: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0053d410: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053d413: mov dword ptr [eax + 0x100], 4 */ W32((u32)(r_eax+0x100u), 0x4u);
    /* 0053d41d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053d420: mov dword ptr [ecx + 0x104], 4 */ W32((u32)(r_ecx+0x104u), 0x4u);
    /* 0053d42a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053d42c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053d42e: mov edx, dword ptr [0x7933e8] */ r_edx = R32((u32)(0x7933e8u));
    /* 0053d434: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0053d437: mov ecx, dword ptr [0x7933e8] */ r_ecx = R32((u32)(0x7933e8u));
    /* 0053d43d: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0053d440: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0053d442: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0053d445: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53d447u); call_ind(t); }
    /* 0053d447: jmp 0x53d8f6 */ goto L_0053d8f6;
L_0053d44c:; BB(0x0053d44c);
    /* 0053d44c: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053d452: call 0x540d00 */ r_esp -= 4; W32(r_esp, 0x53d457u); f_00540d00();
    /* 0053d457: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0053d45a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0053d460: mov dl, byte ptr [ecx + 0x25] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x25u))) & 0xffu);
    /* 0053d463: mov byte ptr [ebp - 0xd], dl */ W8((u32)(r_ebp+0xfffffff3u), (u8)r_edx);
    /* 0053d466: movzx eax, byte ptr [ebp - 0xd] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffff3u));
    /* 0053d46a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053d46c: je 0x53d4e8 */ if (fZ) goto L_0053d4e8;
L_0053d46e:; BB(0x0053d46e);
    /* 0053d46e: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053d472: je 0x53d4e8 */ if (fZ) goto L_0053d4e8;
L_0053d474:; BB(0x0053d474);
    /* 0053d474: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053d477: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053d478: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x53d47du); f_005dcb00();
    /* 0053d47d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053d480: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0053d483: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053d486: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x53d48bu); f_0063aac0();
    /* 0053d48b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0053d48d: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0053d490: cmp dword ptr [ebp - 0x14], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053d494: je 0x53d4b2 */ if (fZ) goto L_0053d4b2;
L_0053d496:; BB(0x0053d496);
    /* 0053d496: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053d499: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x53d49eu); f_0063aac0();
    /* 0053d49e: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0053d4a0: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0053d4a3: cmp dword ptr [ebp - 0x18], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053d4a7: je 0x53d4b2 */ if (fZ) goto L_0053d4b2;
L_0053d4a9:; BB(0x0053d4a9);
    /* 0053d4a9: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
    /* 0053d4b0: jmp 0x53d4b9 */ goto L_0053d4b9;
L_0053d4b2:; BB(0x0053d4b2);
    /* 0053d4b2: mov dword ptr [ebp - 0x68], 1 */ W32((u32)(r_ebp+0xffffff98u), 0x1u);
L_0053d4b9:; BB(0x0053d4b9);
    /* 0053d4b9: movzx ecx, byte ptr [ebp - 0x68] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffff98u));
    /* 0053d4bd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053d4bf: je 0x53d4e8 */ if (fZ) goto L_0053d4e8;
L_0053d4c1:; BB(0x0053d4c1);
    /* 0053d4c1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053d4c4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053d4c5: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x53d4cau); f_005dcb00();
    /* 0053d4ca: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053d4cd: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0053d4d0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053d4d3: mov byte ptr [eax + 0x4a1], 1 */ W8((u32)(r_eax+0x4a1u), 0x1u);
    /* 0053d4da: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053d4e0: call 0x540d00 */ r_esp -= 4; W32(r_esp, 0x53d4e5u); f_00540d00();
    /* 0053d4e5: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0053d4e8:; BB(0x0053d4e8);
    /* 0053d4e8: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053d4ec: je 0x53d557 */ if (fZ) goto L_0053d557;
L_0053d4ee:; BB(0x0053d4ee);
    /* 0053d4ee: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053d4f1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053d4f2: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x53d4f7u); f_005dcb00();
    /* 0053d4f7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053d4fa: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0053d4fd: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0053d500: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x53d505u); f_0063aac0();
    /* 0053d505: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0053d507: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0053d50a: cmp dword ptr [ebp - 0x24], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053d50e: je 0x53d52c */ if (fZ) goto L_0053d52c;
L_0053d510:; BB(0x0053d510);
    /* 0053d510: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0053d513: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x53d518u); f_0063aac0();
    /* 0053d518: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0053d51a: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0053d51d: cmp dword ptr [ebp - 0x28], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053d521: je 0x53d52c */ if (fZ) goto L_0053d52c;
L_0053d523:; BB(0x0053d523);
    /* 0053d523: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
    /* 0053d52a: jmp 0x53d533 */ goto L_0053d533;
L_0053d52c:; BB(0x0053d52c);
    /* 0053d52c: mov dword ptr [ebp - 0x6c], 1 */ W32((u32)(r_ebp+0xffffff94u), 0x1u);
L_0053d533:; BB(0x0053d533);
    /* 0053d533: mov cl, byte ptr [ebp - 0x6c] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff94u))) & 0xffu);
    /* 0053d536: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053d537: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053d53a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053d53b: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053d541: call 0x540b20 */ r_esp -= 4; W32(r_esp, 0x53d546u); f_00540b20();
    /* 0053d546: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053d549: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053d54a: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0053d54d: call 0x53d900 */ r_esp -= 4; W32(r_esp, 0x53d552u); f_0053d900();
    /* 0053d552: jmp 0x53d8f6 */ goto L_0053d8f6;
L_0053d557:; BB(0x0053d557);
    /* 0053d557: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0053d55a: movzx edx, byte ptr [ecx + 0xb] */ r_edx = (u32)R8((u32)(r_ecx+0xbu));
    /* 0053d55e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053d560: jne 0x53d574 */ if (!fZ) goto L_0053d574;
L_0053d562:; BB(0x0053d562);
    /* 0053d562: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053d568: call 0x540fe0 */ r_esp -= 4; W32(r_esp, 0x53d56du); f_00540fe0();
    /* 0053d56d: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 0053d570: mov byte ptr [eax + 0xb], 1 */ W8((u32)(r_eax+0xbu), 0x1u);
L_0053d574:; BB(0x0053d574);
    /* 0053d574: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0053d577: movzx edx, byte ptr [ecx + 5] */ r_edx = (u32)R8((u32)(r_ecx+0x5u));
    /* 0053d57b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053d57d: jne 0x53d5ca */ if (!fZ) goto L_0053d5ca;
L_0053d57f:; BB(0x0053d57f);
    /* 0053d57f: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 0053d582: mov byte ptr [eax + 5], 1 */ W8((u32)(r_eax+0x5u), 0x1u);
    /* 0053d586: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053d58c: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 0053d58f: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0053d592: mov dword ptr [edx + 0x100], 5 */ W32((u32)(r_edx+0x100u), 0x5u);
    /* 0053d59c: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0053d59f: mov dword ptr [eax + 0x104], 4 */ W32((u32)(r_eax+0x104u), 0x4u);
    /* 0053d5a9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053d5ab: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053d5ad: mov ecx, dword ptr [0x7933e8] */ r_ecx = R32((u32)(0x7933e8u));
    /* 0053d5b3: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0053d5b6: mov eax, dword ptr [0x7933e8] */ r_eax = R32((u32)(0x7933e8u));
    /* 0053d5bb: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0053d5be: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0053d5c0: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0053d5c3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53d5c5u); call_ind(t); }
    /* 0053d5c5: jmp 0x53d8f6 */ goto L_0053d8f6;
L_0053d5ca:; BB(0x0053d5ca);
    /* 0053d5ca: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053d5d0: call 0x5410d0 */ r_esp -= 4; W32(r_esp, 0x53d5d5u); f_005410d0();
    /* 0053d5d5: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0053d5d8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053d5da: je 0x53d603 */ if (fZ) goto L_0053d603;
L_0053d5dc:; BB(0x0053d5dc);
    /* 0053d5dc: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0053d5e2: call 0x5f2870 */ r_esp -= 4; W32(r_esp, 0x53d5e7u); f_005f2870();
    /* 0053d5e7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053d5e9: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0053d5eb: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053d5f1: call 0x540b20 */ r_esp -= 4; W32(r_esp, 0x53d5f6u); f_00540b20();
    /* 0053d5f6: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0053d5f9: call 0x53dc10 */ r_esp -= 4; W32(r_esp, 0x53d5feu); f_0053dc10();
    /* 0053d5fe: jmp 0x53d8f6 */ goto L_0053d8f6;
L_0053d603:; BB(0x0053d603);
    /* 0053d603: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053d609: call 0x541280 */ r_esp -= 4; W32(r_esp, 0x53d60eu); f_00541280();
    /* 0053d60e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0053d611: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053d615: je 0x53d646 */ if (fZ) goto L_0053d646;
L_0053d617:; BB(0x0053d617);
    /* 0053d617: mov edx, dword ptr [0x7933ec] */ r_edx = R32((u32)(0x7933ecu));
    /* 0053d61d: mov byte ptr [edx + 0xfa], 0 */ W8((u32)(r_edx+0xfau), 0x0u);
    /* 0053d624: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053d626: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053d629: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053d62a: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053d630: call 0x540b20 */ r_esp -= 4; W32(r_esp, 0x53d635u); f_00540b20();
    /* 0053d635: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053d638: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053d639: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0053d63c: call 0x53dca0 */ r_esp -= 4; W32(r_esp, 0x53d641u); f_0053dca0();
    /* 0053d641: jmp 0x53d8f6 */ goto L_0053d8f6;
L_0053d646:; BB(0x0053d646);
    /* 0053d646: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0053d649: movzx eax, byte ptr [edx + 6] */ r_eax = (u32)R8((u32)(r_edx+0x6u));
    /* 0053d64d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053d64f: jne 0x53d6af */ if (!fZ) goto L_0053d6af;
L_0053d651:; BB(0x0053d651);
    /* 0053d651: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0053d654: mov byte ptr [ecx + 6], 1 */ W8((u32)(r_ecx+0x6u), 0x1u);
    /* 0053d658: mov edx, dword ptr [0x7933ec] */ r_edx = R32((u32)(0x7933ecu));
    /* 0053d65e: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 0053d661: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0053d664: mov byte ptr [eax + 0xf1], 1 */ W8((u32)(r_eax+0xf1u), 0x1u);
    /* 0053d66b: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053d671: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 0053d674: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0053d677: mov dword ptr [edx + 0x100], 6 */ W32((u32)(r_edx+0x100u), 0x6u);
    /* 0053d681: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0053d684: mov dword ptr [eax + 0x104], 4 */ W32((u32)(r_eax+0x104u), 0x4u);
    /* 0053d68e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053d690: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053d692: mov ecx, dword ptr [0x7933e8] */ r_ecx = R32((u32)(0x7933e8u));
    /* 0053d698: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0053d69b: mov eax, dword ptr [0x7933e8] */ r_eax = R32((u32)(0x7933e8u));
    /* 0053d6a0: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0053d6a3: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0053d6a5: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0053d6a8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53d6aau); call_ind(t); }
    /* 0053d6aa: jmp 0x53d8f6 */ goto L_0053d8f6;
L_0053d6af:; BB(0x0053d6af);
    /* 0053d6af: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053d6b5: call 0x541660 */ r_esp -= 4; W32(r_esp, 0x53d6bau); f_00541660();
    /* 0053d6ba: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0053d6bd: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053d6c1: je 0x53d80e */ if (fZ) goto L_0053d80e;
L_0053d6c7:; BB(0x0053d6c7);
    /* 0053d6c7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053d6c9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053d6cc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053d6cd: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053d6d3: call 0x540b20 */ r_esp -= 4; W32(r_esp, 0x53d6d8u); f_00540b20();
    /* 0053d6d8: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0053d6db: movzx eax, byte ptr [edx + 0xa] */ r_eax = (u32)R8((u32)(r_edx+0xau));
    /* 0053d6df: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053d6e1: jne 0x53d75a */ if (!fZ) goto L_0053d75a;
L_0053d6e3:; BB(0x0053d6e3);
    /* 0053d6e3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053d6e6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053d6e7: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053d6ed: call 0x541d80 */ r_esp -= 4; W32(r_esp, 0x53d6f2u); f_00541d80();
    /* 0053d6f2: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0053d6f5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053d6f7: je 0x53d75a */ if (fZ) goto L_0053d75a;
L_0053d6f9:; BB(0x0053d6f9);
    /* 0053d6f9: mov eax, dword ptr [0x7933ec] */ r_eax = R32((u32)(0x7933ecu));
    /* 0053d6fe: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0053d701: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0053d704: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0053d707: mov byte ptr [ecx + 0xed], 1 */ W8((u32)(r_ecx+0xedu), 0x1u);
    /* 0053d70e: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0053d711: mov byte ptr [edx + 0xa], 1 */ W8((u32)(r_edx+0xau), 0x1u);
    /* 0053d715: mov eax, dword ptr [0x7933ec] */ r_eax = R32((u32)(0x7933ecu));
    /* 0053d71a: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0053d71d: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0053d720: mov dword ptr [ecx + 0x100], 7 */ W32((u32)(r_ecx+0x100u), 0x7u);
    /* 0053d72a: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0053d72d: mov dword ptr [edx + 0x104], 4 */ W32((u32)(r_edx+0x104u), 0x4u);
    /* 0053d737: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053d739: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053d73b: mov eax, dword ptr [0x7933e8] */ r_eax = R32((u32)(0x7933e8u));
    /* 0053d740: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0053d743: mov edx, dword ptr [0x7933e8] */ r_edx = R32((u32)(0x7933e8u));
    /* 0053d749: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0053d74c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0053d74e: mov ecx, eax */ r_ecx = r_eax;
    /* 0053d750: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0053d753: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53d755u); call_ind(t); }
    /* 0053d755: jmp 0x53d8f6 */ goto L_0053d8f6;
L_0053d75a:; BB(0x0053d75a);
    /* 0053d75a: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0053d75d: mov byte ptr [ecx + 0xa], 0 */ W8((u32)(r_ecx+0xau), 0x0u);
    /* 0053d761: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053d764: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053d765: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0053d768: call 0x53de30 */ r_esp -= 4; W32(r_esp, 0x53d76du); f_0053de30();
    /* 0053d76d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053d770: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053d771: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x53d776u); f_005dcb00();
    /* 0053d776: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053d779: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0053d77c: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0053d77f: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x53d784u); f_0063aac0();
    /* 0053d784: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0053d786: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 0053d789: cmp dword ptr [ebp - 0x44], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053d78d: je 0x53d7ab */ if (fZ) goto L_0053d7ab;
L_0053d78f:; BB(0x0053d78f);
    /* 0053d78f: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0053d792: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x53d797u); f_0063aac0();
    /* 0053d797: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0053d799: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 0053d79c: cmp dword ptr [ebp - 0x48], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053d7a0: je 0x53d7ab */ if (fZ) goto L_0053d7ab;
L_0053d7a2:; BB(0x0053d7a2);
    /* 0053d7a2: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
    /* 0053d7a9: jmp 0x53d7b2 */ goto L_0053d7b2;
L_0053d7ab:; BB(0x0053d7ab);
    /* 0053d7ab: mov dword ptr [ebp - 0x70], 1 */ W32((u32)(r_ebp+0xffffff90u), 0x1u);
L_0053d7b2:; BB(0x0053d7b2);
    /* 0053d7b2: movzx eax, byte ptr [ebp - 0x70] */ r_eax = (u32)R8((u32)(r_ebp+0xffffff90u));
    /* 0053d7b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053d7b8: je 0x53d7c3 */ if (fZ) goto L_0053d7c3;
L_0053d7ba:; BB(0x0053d7ba);
    /* 0053d7ba: mov dword ptr [ebp - 0x54], 0xffffffff */ W32((u32)(r_ebp+0xffffffacu), 0xffffffffu);
    /* 0053d7c1: jmp 0x53d7c9 */ goto L_0053d7c9;
L_0053d7c3:; BB(0x0053d7c3);
    /* 0053d7c3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053d7c6: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
L_0053d7c9:; BB(0x0053d7c9);
    /* 0053d7c9: mov edx, dword ptr [0x7933ec] */ r_edx = R32((u32)(0x7933ecu));
    /* 0053d7cf: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 0053d7d2: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0053d7d5: mov dword ptr [eax + 0x100], 2 */ W32((u32)(r_eax+0x100u), 0x2u);
    /* 0053d7df: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0053d7e2: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 0053d7e5: mov dword ptr [ecx + 0x104], edx */ W32((u32)(r_ecx+0x104u), r_edx);
    /* 0053d7eb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053d7ed: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053d7ef: mov eax, dword ptr [0x7933e8] */ r_eax = R32((u32)(0x7933e8u));
    /* 0053d7f4: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0053d7f7: mov edx, dword ptr [0x7933e8] */ r_edx = R32((u32)(0x7933e8u));
    /* 0053d7fd: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0053d800: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0053d802: mov ecx, eax */ r_ecx = r_eax;
    /* 0053d804: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0053d807: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53d809u); call_ind(t); }
    /* 0053d809: jmp 0x53d8f6 */ goto L_0053d8f6;
L_0053d80e:; BB(0x0053d80e);
    /* 0053d80e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053d810: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0053d812: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053d818: call 0x540b20 */ r_esp -= 4; W32(r_esp, 0x53d81du); f_00540b20();
    /* 0053d81d: mov ecx, dword ptr [0x7933e8] */ r_ecx = R32((u32)(0x7933e8u));
    /* 0053d823: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x53d828u); f_005da7b0();
    /* 0053d828: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0053d82b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053d82d: je 0x53d883 */ if (fZ) goto L_0053d883;
L_0053d82f:; BB(0x0053d82f);
    /* 0053d82f: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0053d832: movzx eax, byte ptr [edx + 9] */ r_eax = (u32)R8((u32)(r_edx+0x9u));
    /* 0053d836: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053d838: jne 0x53d883 */ if (!fZ) goto L_0053d883;
L_0053d83a:; BB(0x0053d83a);
    /* 0053d83a: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0053d83d: mov byte ptr [ecx + 9], 1 */ W8((u32)(r_ecx+0x9u), 0x1u);
    /* 0053d841: mov edx, dword ptr [0x7933ec] */ r_edx = R32((u32)(0x7933ecu));
    /* 0053d847: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 0053d84a: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0053d84d: mov dword ptr [eax + 0x100], 3 */ W32((u32)(r_eax+0x100u), 0x3u);
    /* 0053d857: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0053d85a: mov dword ptr [ecx + 0x104], 0xffffffff */ W32((u32)(r_ecx+0x104u), 0xffffffffu);
    /* 0053d864: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053d866: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053d868: mov edx, dword ptr [0x7933e8] */ r_edx = R32((u32)(0x7933e8u));
    /* 0053d86e: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0053d871: mov ecx, dword ptr [0x7933e8] */ r_ecx = R32((u32)(0x7933e8u));
    /* 0053d877: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0053d87a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0053d87c: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0053d87f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53d881u); call_ind(t); }
    /* 0053d881: jmp 0x53d8f6 */ goto L_0053d8f6;
L_0053d883:; BB(0x0053d883);
    /* 0053d883: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0053d885: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053d88b: call 0x540c90 */ r_esp -= 4; W32(r_esp, 0x53d890u); f_00540c90();
    /* 0053d890: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0053d893: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053d895: jne 0x53d8c8 */ if (!fZ) goto L_0053d8c8;
L_0053d897:; BB(0x0053d897);
    /* 0053d897: mov edx, dword ptr [0x7933ec] */ r_edx = R32((u32)(0x7933ecu));
    /* 0053d89d: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 0053d8a0: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 0053d8a3: mov byte ptr [eax + 0xf1], 1 */ W8((u32)(r_eax+0xf1u), 0x1u);
    /* 0053d8aa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053d8ac: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053d8ae: mov ecx, dword ptr [0x7933e8] */ r_ecx = R32((u32)(0x7933e8u));
    /* 0053d8b4: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0053d8b7: mov eax, dword ptr [0x7933e8] */ r_eax = R32((u32)(0x7933e8u));
    /* 0053d8bc: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0053d8bf: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0053d8c1: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0053d8c4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53d8c6u); call_ind(t); }
    /* 0053d8c6: jmp 0x53d8f6 */ goto L_0053d8f6;
L_0053d8c8:; BB(0x0053d8c8);
    /* 0053d8c8: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0053d8ce: mov dl, byte ptr [ecx + 0x25] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x25u))) & 0xffu);
    /* 0053d8d1: mov byte ptr [ebp - 0x5d], dl */ W8((u32)(r_ebp+0xffffffa3u), (u8)r_edx);
    /* 0053d8d4: movzx eax, byte ptr [ebp - 0x5d] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffa3u));
    /* 0053d8d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053d8da: je 0x53d8eb */ if (fZ) goto L_0053d8eb;
L_0053d8dc:; BB(0x0053d8dc);
    /* 0053d8dc: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 0053d8e1: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0053d8e4: call 0x53d320 */ r_esp -= 4; W32(r_esp, 0x53d8e9u); f_0053d320();
    /* 0053d8e9: jmp 0x53d8f6 */ goto L_0053d8f6;
L_0053d8eb:; BB(0x0053d8eb);
    /* 0053d8eb: mov ecx, dword ptr [0x7933f4] */ r_ecx = R32((u32)(0x7933f4u));
    /* 0053d8f1: call 0x53bab0 */ r_esp -= 4; W32(r_esp, 0x53d8f6u); f_0053bab0();
L_0053d8f6:; BB(0x0053d8f6);
    /* 0053d8f6: mov esp, ebp */ r_esp = r_ebp;
    /* 0053d8f8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053d8f9: ret  */ FN_RET(0x0053d3c0); r_esp += 4; return;
}

void f_0053d900(void) /* sub_53D900 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053d900);
    /* 0053d900: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053d901: mov ebp, esp */ r_ebp = r_esp;
    /* 0053d903: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053d906: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0053d907: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 0053d90a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053d90c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053d90e: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x53d913u); f_0064c8a0();
    /* 0053d913: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053d916: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0053d919: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0053d91c: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053d91f: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0053d922: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053d925: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0053d928: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053d92a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053d92c: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x53d931u); f_0064c8a0();
    /* 0053d931: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053d934: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0053d937: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0053d93a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0053d93d: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0053d940: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053d943: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0053d946: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0053d949: imul ecx, ecx, 3 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0053d94c: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0053d94f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0053d952: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053d953: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x53d958u); f_005dcb00();
    /* 0053d958: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053d95b: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0053d95e: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0053d961: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x53d966u); f_0063aac0();
    /* 0053d966: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0053d968: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0053d96b: cmp dword ptr [ebp - 0x28], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053d96f: je 0x53d98d */ if (fZ) goto L_0053d98d;
L_0053d971:; BB(0x0053d971);
    /* 0053d971: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0053d974: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x53d979u); f_0063aac0();
    /* 0053d979: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0053d97b: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0053d97e: cmp dword ptr [ebp - 0x2c], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053d982: je 0x53d98d */ if (fZ) goto L_0053d98d;
L_0053d984:; BB(0x0053d984);
    /* 0053d984: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 0053d98b: jmp 0x53d994 */ goto L_0053d994;
L_0053d98d:; BB(0x0053d98d);
    /* 0053d98d: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
L_0053d994:; BB(0x0053d994);
    /* 0053d994: movzx edx, byte ptr [ebp - 0x44] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffbcu));
    /* 0053d998: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053d99a: je 0x53da85 */ if (fZ) goto L_0053da85;
L_0053d9a0:; BB(0x0053d9a0);
    /* 0053d9a0: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0053d9a2: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0053d9a8: call 0x5df700 */ r_esp -= 4; W32(r_esp, 0x53d9adu); f_005df700();
    /* 0053d9ad: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0053d9b0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053d9b2: je 0x53d9c8 */ if (fZ) goto L_0053d9c8;
L_0053d9b4:; BB(0x0053d9b4);
    /* 0053d9b4: push 0x7372c0 */ { u32 v = 0x7372c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053d9b9: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0053d9bb: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 0053d9c1: call 0x57ab80 */ r_esp -= 4; W32(r_esp, 0x53d9c6u); f_0057ab80();
    /* 0053d9c6: jmp 0x53d9d3 */ goto L_0053d9d3;
L_0053d9c8:; BB(0x0053d9c8);
    /* 0053d9c8: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 0053d9ce: call 0x57ae30 */ r_esp -= 4; W32(r_esp, 0x53d9d3u); f_0057ae30();
L_0053d9d3:; BB(0x0053d9d3);
    /* 0053d9d3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0053d9d6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053d9d7: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053d9dd: call 0x540de0 */ r_esp -= 4; W32(r_esp, 0x53d9e2u); f_00540de0();
    /* 0053d9e2: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0053d9e5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053d9e7: jne 0x53da6e */ if (!fZ) goto L_0053da6e;
L_0053d9ed:; BB(0x0053d9ed);
    /* 0053d9ed: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053d9f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053d9f1: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x53d9f6u); f_005dcb00();
    /* 0053d9f6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053d9f9: mov ecx, eax */ r_ecx = r_eax;
    /* 0053d9fb: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x53da00u); f_005d5a50();
    /* 0053da00: mov esi, eax */ r_esi = r_eax;
    /* 0053da02: mov ecx, dword ptr [0x7933e8] */ r_ecx = R32((u32)(0x7933e8u));
    /* 0053da08: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0053da0a: mov ecx, dword ptr [0x7933e8] */ r_ecx = R32((u32)(0x7933e8u));
    /* 0053da10: mov eax, dword ptr [edx + 0x2b0] */ r_eax = R32((u32)(r_edx+0x2b0u));
    /* 0053da16: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53da18u); call_ind(t); }
    /* 0053da18: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053da1a: jge 0x53da6e */ if ((fS==fO)) goto L_0053da6e;
L_0053da1c:; BB(0x0053da1c);
    /* 0053da1c: mov ecx, dword ptr [0x7933e8] */ r_ecx = R32((u32)(0x7933e8u));
    /* 0053da22: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x53da27u); f_005da7b0();
    /* 0053da27: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0053da2a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053da2c: je 0x53da54 */ if (fZ) goto L_0053da54;
L_0053da2e:; BB(0x0053da2e);
    /* 0053da2e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0053da31: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053da32: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x53da37u); f_005dcb00();
    /* 0053da37: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053da3a: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0053da3d: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0053da40: mov byte ptr [eax + 0x4a1], 1 */ W8((u32)(r_eax+0x4a1u), 0x1u);
    /* 0053da47: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0053da4a: call 0x53d3c0 */ r_esp -= 4; W32(r_esp, 0x53da4fu); f_0053d3c0();
    /* 0053da4f: jmp 0x53dc04 */ goto L_0053dc04;
L_0053da54:; BB(0x0053da54);
    /* 0053da54: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0053da57: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053da58: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x53da5du); f_005dcb00();
    /* 0053da5d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053da60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053da61: mov ecx, dword ptr [0x7933e8] */ r_ecx = R32((u32)(0x7933e8u));
    /* 0053da67: call 0x5dbb70 */ r_esp -= 4; W32(r_esp, 0x53da6cu); f_005dbb70();
    /* 0053da6c: jmp 0x53da80 */ goto L_0053da80;
L_0053da6e:; BB(0x0053da6e);
    /* 0053da6e: push 0xaf */ { u32 v = 0xafu; r_esp -= 4; W32(r_esp, v); }
    /* 0053da73: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053da75: mov ecx, dword ptr [0x7933e8] */ r_ecx = R32((u32)(0x7933e8u));
    /* 0053da7b: call 0x5db7d0 */ r_esp -= 4; W32(r_esp, 0x53da80u); f_005db7d0();
L_0053da80:; BB(0x0053da80);
    /* 0053da80: jmp 0x53dc04 */ goto L_0053dc04;
L_0053da85:; BB(0x0053da85);
    /* 0053da85: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0053da88: movzx eax, byte ptr [edx + 7] */ r_eax = (u32)R8((u32)(r_edx+0x7u));
    /* 0053da8c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053da8e: jne 0x53dab5 */ if (!fZ) goto L_0053dab5;
L_0053da90:; BB(0x0053da90);
    /* 0053da90: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0053da93: mov byte ptr [ecx + 7], 1 */ W8((u32)(r_ecx+0x7u), 0x1u);
    /* 0053da97: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0053da99: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0053da9f: call 0x637810 */ r_esp -= 4; W32(r_esp, 0x53daa4u); f_00637810();
    /* 0053daa4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053daa5: mov ecx, dword ptr [0x7933e8] */ r_ecx = R32((u32)(0x7933e8u));
    /* 0053daab: call 0x5da360 */ r_esp -= 4; W32(r_esp, 0x53dab0u); f_005da360();
    /* 0053dab0: jmp 0x53dc04 */ goto L_0053dc04;
L_0053dab5:; BB(0x0053dab5);
    /* 0053dab5: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0053dab8: mov byte ptr [edx + 7], 0 */ W8((u32)(r_edx+0x7u), 0x0u);
    /* 0053dabc: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 0053dac2: call 0x57ae30 */ r_esp -= 4; W32(r_esp, 0x53dac7u); f_0057ae30();
    /* 0053dac7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053daca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053dacb: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x53dad0u); f_005dcb00();
    /* 0053dad0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053dad3: mov ecx, eax */ r_ecx = r_eax;
    /* 0053dad5: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x53dadau); f_005d5a50();
    /* 0053dada: mov esi, eax */ r_esi = r_eax;
    /* 0053dadc: mov ecx, dword ptr [0x7933e8] */ r_ecx = R32((u32)(0x7933e8u));
    /* 0053dae2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0053dae4: mov ecx, dword ptr [0x7933e8] */ r_ecx = R32((u32)(0x7933e8u));
    /* 0053daea: mov eax, dword ptr [edx + 0x2b0] */ r_eax = R32((u32)(r_edx+0x2b0u));
    /* 0053daf0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53daf2u); call_ind(t); }
    /* 0053daf2: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053daf4: jl 0x53dbab */ if ((fS!=fO)) goto L_0053dbab;
L_0053dafa:; BB(0x0053dafa);
    /* 0053dafa: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0053dafd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053dafe: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 0053db01: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053db02: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053db05: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053db06: mov ecx, dword ptr [0x7933f8] */ r_ecx = R32((u32)(0x7933f8u));
    /* 0053db0c: call 0x539a50 */ r_esp -= 4; W32(r_esp, 0x53db11u); f_00539a50();
    /* 0053db11: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053db15: je 0x53db43 */ if (fZ) goto L_0053db43;
L_0053db17:; BB(0x0053db17);
    /* 0053db17: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053db19: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053db1b: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0053db1e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053db1f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053db22: mov eax, dword ptr [0x7933ec] */ r_eax = R32((u32)(0x7933ecu));
    /* 0053db27: mov ecx, dword ptr [eax + edx*4 + 0x10] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 0053db2b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053db2e: mov eax, dword ptr [0x7933ec] */ r_eax = R32((u32)(0x7933ecu));
    /* 0053db33: mov edx, dword ptr [eax + edx*4 + 0x10] */ r_edx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 0053db37: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0053db39: mov ecx, edx */ r_ecx = r_edx;
    /* 0053db3b: mov edx, dword ptr [eax + 0xc4] */ r_edx = R32((u32)(r_eax+0xc4u));
    /* 0053db41: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x53db43u); call_ind(t); }
L_0053db43:; BB(0x0053db43);
    /* 0053db43: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053db47: je 0x53db75 */ if (fZ) goto L_0053db75;
L_0053db49:; BB(0x0053db49);
    /* 0053db49: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053db4b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053db4d: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 0053db50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053db51: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053db54: mov edx, dword ptr [0x7933ec] */ r_edx = R32((u32)(0x7933ecu));
    /* 0053db5a: mov eax, dword ptr [edx + ecx*4 + 0xc] */ r_eax = R32((u32)(r_edx+r_ecx*4+0xcu));
    /* 0053db5e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053db61: mov edx, dword ptr [0x7933ec] */ r_edx = R32((u32)(0x7933ecu));
    /* 0053db67: mov ecx, dword ptr [edx + ecx*4 + 0xc] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xcu));
    /* 0053db6b: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0053db6d: mov edx, dword ptr [eax + 0xc4] */ r_edx = R32((u32)(r_eax+0xc4u));
    /* 0053db73: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x53db75u); call_ind(t); }
L_0053db75:; BB(0x0053db75);
    /* 0053db75: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053db7b: call 0x540af0 */ r_esp -= 4; W32(r_esp, 0x53db80u); f_00540af0();
    /* 0053db80: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0053db83: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0053db86: mov byte ptr [eax + 0x4a0], 1 */ W8((u32)(r_eax+0x4a0u), 0x1u);
    /* 0053db8d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053db8f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053db91: mov ecx, dword ptr [0x7933e8] */ r_ecx = R32((u32)(0x7933e8u));
    /* 0053db97: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0053db9a: mov eax, dword ptr [0x7933e8] */ r_eax = R32((u32)(0x7933e8u));
    /* 0053db9f: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0053dba2: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0053dba4: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0053dba7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53dba9u); call_ind(t); }
    /* 0053dba9: jmp 0x53dc04 */ goto L_0053dc04;
L_0053dbab:; BB(0x0053dbab);
    /* 0053dbab: mov ecx, dword ptr [0x7933e8] */ r_ecx = R32((u32)(0x7933e8u));
    /* 0053dbb1: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x53dbb6u); f_005da7b0();
    /* 0053dbb6: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0053dbb9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053dbbb: je 0x53dbd8 */ if (fZ) goto L_0053dbd8;
L_0053dbbd:; BB(0x0053dbbd);
    /* 0053dbbd: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0053dbc0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053dbc1: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x53dbc6u); f_005dcb00();
    /* 0053dbc6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053dbc9: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0053dbcc: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0053dbcf: mov byte ptr [eax + 0x4a1], 1 */ W8((u32)(r_eax+0x4a1u), 0x1u);
    /* 0053dbd6: jmp 0x53dbe7 */ goto L_0053dbe7;
L_0053dbd8:; BB(0x0053dbd8);
    /* 0053dbd8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0053dbdb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053dbdc: mov ecx, dword ptr [0x7933e8] */ r_ecx = R32((u32)(0x7933e8u));
    /* 0053dbe2: call 0x5d9570 */ r_esp -= 4; W32(r_esp, 0x53dbe7u); f_005d9570();
L_0053dbe7:; BB(0x0053dbe7);
    /* 0053dbe7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053dbe9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053dbeb: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 0053dbf1: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0053dbf4: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0053dbfa: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0053dbfd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0053dbff: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0053dc02: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53dc04u); call_ind(t); }
L_0053dc04:; BB(0x0053dc04);
    /* 0053dc04: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0053dc05: mov esp, ebp */ r_esp = r_ebp;
    /* 0053dc07: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053dc08: ret 4 */ FN_RET(0x0053d900); r_esp += 8; return;
}

void f_0053dc10(void) /* sub_53DC10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053dc10);
    /* 0053dc10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053dc11: mov ebp, esp */ r_ebp = r_esp;
    /* 0053dc13: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0053dc15: push 0x6a4cdb */ { u32 v = 0x6a4cdbu; r_esp -= 4; W32(r_esp, v); }
    /* 0053dc1a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0053dc20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053dc21: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053dc24: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0053dc29: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0053dc2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053dc2c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0053dc2f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0053dc35: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0053dc38: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0053dc3a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x53dc3fu); f_00686d82();
    /* 0053dc3f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053dc42: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0053dc45: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0053dc4c: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053dc50: je 0x53dc5f */ if (fZ) goto L_0053dc5f;
L_0053dc52:; BB(0x0053dc52);
    /* 0053dc52: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053dc55: call 0x53c3e0 */ r_esp -= 4; W32(r_esp, 0x53dc5au); f_0053c3e0();
    /* 0053dc5a: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0053dc5d: jmp 0x53dc66 */ goto L_0053dc66;
L_0053dc5f:; BB(0x0053dc5f);
    /* 0053dc5f: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0053dc66:; BB(0x0053dc66);
    /* 0053dc66: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053dc69: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0053dc6c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0053dc73: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0053dc76: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053dc77: mov edx, dword ptr [0x7933e8] */ r_edx = R32((u32)(0x7933e8u));
    /* 0053dc7d: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0053dc80: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x53dc85u); f_005fc420();
    /* 0053dc85: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053dc88: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0053dc8f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0053dc90: mov esp, ebp */ r_esp = r_ebp;
    /* 0053dc92: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053dc93: ret  */ FN_RET(0x0053dc10); r_esp += 4; return;
}

void f_0053dca0(void) /* sub_53DCA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053dca0);
    /* 0053dca0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053dca1: mov ebp, esp */ r_ebp = r_esp;
    /* 0053dca3: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053dca6: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0053dca9: mov byte ptr [ebp - 1], 0 */ W8((u32)(r_ebp+0xffffffffu), 0x0u);
    /* 0053dcad: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053dcb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053dcb1: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x53dcb6u); f_005dcb00();
    /* 0053dcb6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053dcb9: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0053dcbc: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0053dcbf: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x53dcc4u); f_0063aac0();
    /* 0053dcc4: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0053dcc6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0053dcc9: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053dccd: je 0x53dceb */ if (fZ) goto L_0053dceb;
L_0053dccf:; BB(0x0053dccf);
    /* 0053dccf: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0053dcd2: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x53dcd7u); f_0063aac0();
    /* 0053dcd7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0053dcd9: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0053dcdc: cmp dword ptr [ebp - 0xc], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053dce0: je 0x53dceb */ if (fZ) goto L_0053dceb;
L_0053dce2:; BB(0x0053dce2);
    /* 0053dce2: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0053dce9: jmp 0x53dcf2 */ goto L_0053dcf2;
L_0053dceb:; BB(0x0053dceb);
    /* 0053dceb: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
L_0053dcf2:; BB(0x0053dcf2);
    /* 0053dcf2: movzx eax, byte ptr [ebp - 0x24] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffdcu));
    /* 0053dcf6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053dcf8: je 0x53dd66 */ if (fZ) goto L_0053dd66;
L_0053dcfa:; BB(0x0053dcfa);
    /* 0053dcfa: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0053dcfc: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0053dd02: call 0x5df700 */ r_esp -= 4; W32(r_esp, 0x53dd07u); f_005df700();
    /* 0053dd07: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0053dd0a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053dd0c: je 0x53dd31 */ if (fZ) goto L_0053dd31;
L_0053dd0e:; BB(0x0053dd0e);
    /* 0053dd0e: push 0x738ad0 */ { u32 v = 0x738ad0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053dd13: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0053dd15: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 0053dd1b: call 0x57ab80 */ r_esp -= 4; W32(r_esp, 0x53dd20u); f_0057ab80();
    /* 0053dd20: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0053dd23: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053dd24: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053dd2a: call 0x541e90 */ r_esp -= 4; W32(r_esp, 0x53dd2fu); f_00541e90();
    /* 0053dd2f: jmp 0x53dd3c */ goto L_0053dd3c;
L_0053dd31:; BB(0x0053dd31);
    /* 0053dd31: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 0053dd37: call 0x57ae30 */ r_esp -= 4; W32(r_esp, 0x53dd3cu); f_0057ae30();
L_0053dd3c:; BB(0x0053dd3c);
    /* 0053dd3c: mov eax, dword ptr [0x7933ec] */ r_eax = R32((u32)(0x7933ecu));
    /* 0053dd41: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0053dd44: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053dd47: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0053dd4a: mov byte ptr [ecx + 0xed], 1 */ W8((u32)(r_ecx+0xedu), 0x1u);
    /* 0053dd51: mov ecx, dword ptr [0x7933f4] */ r_ecx = R32((u32)(0x7933f4u));
    /* 0053dd57: call 0x53b970 */ r_esp -= 4; W32(r_esp, 0x53dd5cu); f_0053b970();
    /* 0053dd5c: jmp 0x53de26 */ goto L_0053de26;
L_0053dd66:; BB(0x0053dd66);
    /* 0053dd66: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 0053dd6c: call 0x57ae30 */ r_esp -= 4; W32(r_esp, 0x53dd71u); f_0057ae30();
    /* 0053dd71: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053dd74: movzx eax, byte ptr [edx + 8] */ r_eax = (u32)R8((u32)(r_edx+0x8u));
    /* 0053dd78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053dd7a: jne 0x53dda1 */ if (!fZ) goto L_0053dda1;
L_0053dd7c:; BB(0x0053dd7c);
    /* 0053dd7c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053dd7f: mov byte ptr [ecx + 8], 1 */ W8((u32)(r_ecx+0x8u), 0x1u);
    /* 0053dd83: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0053dd85: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0053dd8b: call 0x637810 */ r_esp -= 4; W32(r_esp, 0x53dd90u); f_00637810();
    /* 0053dd90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053dd91: mov ecx, dword ptr [0x7933e8] */ r_ecx = R32((u32)(0x7933e8u));
    /* 0053dd97: call 0x5da360 */ r_esp -= 4; W32(r_esp, 0x53dd9cu); f_005da360();
    /* 0053dd9c: jmp 0x53de26 */ goto L_0053de26;
L_0053dda1:; BB(0x0053dda1);
    /* 0053dda1: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053dda4: mov byte ptr [edx + 8], 0 */ W8((u32)(r_edx+0x8u), 0x0u);
    /* 0053dda8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053ddab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053ddac: mov ecx, dword ptr [0x7933f8] */ r_ecx = R32((u32)(0x7933f8u));
    /* 0053ddb2: call 0x539f40 */ r_esp -= 4; W32(r_esp, 0x53ddb7u); f_00539f40();
    /* 0053ddb7: mov byte ptr [ebp - 1], al */ W8((u32)(r_ebp+0xffffffffu), (u8)r_eax);
    /* 0053ddba: mov cl, byte ptr [ebp - 1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
    /* 0053ddbd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053ddbe: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0053ddc1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053ddc2: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053ddc8: call 0x541360 */ r_esp -= 4; W32(r_esp, 0x53ddcdu); f_00541360();
    /* 0053ddcd: mov eax, dword ptr [0x7933ec] */ r_eax = R32((u32)(0x7933ecu));
    /* 0053ddd2: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0053ddd5: movzx ecx, byte ptr [ebp - 1] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 0053ddd9: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 0053dddb: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 0053dddd: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0053dddf: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053dde2: mov dword ptr [edx + 0x100], ecx */ W32((u32)(r_edx+0x100u), r_ecx);
    /* 0053dde8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053ddeb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0053ddee: mov dword ptr [eax + 0x104], ecx */ W32((u32)(r_eax+0x104u), r_ecx);
    /* 0053ddf4: mov edx, dword ptr [0x7933ec] */ r_edx = R32((u32)(0x7933ecu));
    /* 0053ddfa: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0053ddfd: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053de00: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053de03: mov byte ptr [eax + 0xf2], 1 */ W8((u32)(r_eax+0xf2u), 0x1u);
    /* 0053de0a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053de0c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053de0e: mov ecx, dword ptr [0x7933e8] */ r_ecx = R32((u32)(0x7933e8u));
    /* 0053de14: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0053de17: mov eax, dword ptr [0x7933e8] */ r_eax = R32((u32)(0x7933e8u));
    /* 0053de1c: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0053de1f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0053de21: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0053de24: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53de26u); call_ind(t); }
L_0053de26:; BB(0x0053de26);
    /* 0053de26: mov esp, ebp */ r_esp = r_ebp;
    /* 0053de28: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053de29: ret 4 */ FN_RET(0x0053dca0); r_esp += 8; return;
}

void f_0053de30(void) /* sub_53DE30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053de30);
    /* 0053de30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053de31: mov ebp, esp */ r_ebp = r_esp;
    /* 0053de33: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053de36: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0053de39: mov eax, dword ptr [0x7933ec] */ r_eax = R32((u32)(0x7933ecu));
    /* 0053de3e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0053de41: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053de44: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0053de47: mov byte ptr [ecx + 0xed], 1 */ W8((u32)(r_ecx+0xedu), 0x1u);
    /* 0053de4e: mov ecx, dword ptr [0x7933f4] */ r_ecx = R32((u32)(0x7933f4u));
    /* 0053de54: call 0x53b1a0 */ r_esp -= 4; W32(r_esp, 0x53de59u); f_0053b1a0();
    /* 0053de59: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0053de5c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053de5d: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053de63: call 0x5418a0 */ r_esp -= 4; W32(r_esp, 0x53de68u); f_005418a0();
    /* 0053de68: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053de6b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053de6c: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x53de71u); f_005dcb00();
    /* 0053de71: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053de74: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0053de77: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053de7a: mov byte ptr [ecx + 0x4a2], 1 */ W8((u32)(r_ecx+0x4a2u), 0x1u);
    /* 0053de81: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053de83: mov edx, dword ptr [0x7933e8] */ r_edx = R32((u32)(0x7933e8u));
    /* 0053de89: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0053de8c: mov ecx, dword ptr [0x7933e8] */ r_ecx = R32((u32)(0x7933e8u));
    /* 0053de92: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0053de95: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0053de97: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0053de9a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53de9cu); call_ind(t); }
    /* 0053de9c: mov esp, ebp */ r_esp = r_ebp;
    /* 0053de9e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053de9f: ret 4 */ FN_RET(0x0053de30); r_esp += 8; return;
}

void f_0053deb0(void) /* sub_53DEB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053deb0);
    /* 0053deb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053deb1: mov ebp, esp */ r_ebp = r_esp;
    /* 0053deb3: sub esp, 0x154 */ {  u32 a = r_esp; u32 b = 0x154u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053deb9: mov dword ptr [ebp - 0x10c], ecx */ W32((u32)(r_ebp+0xfffffef4u), r_ecx);
    /* 0053debf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053dec1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053dec3: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x53dec8u); f_0064c8a0();
    /* 0053dec8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053decb: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 0053dece: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 0053ded1: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 0053ded4: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 0053ded7: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0053deda: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 0053dedd: mov dword ptr [ebp - 0x48], 0xffffffff */ W32((u32)(r_ebp+0xffffffb8u), 0xffffffffu);
    /* 0053dee4: mov dword ptr [ebp - 0x20], 0xffffffff */ W32((u32)(r_ebp+0xffffffe0u), 0xffffffffu);
    /* 0053deeb: mov dword ptr [ebp - 0x4c], 0xffffffff */ W32((u32)(r_ebp+0xffffffb4u), 0xffffffffu);
    /* 0053def2: fldz  */ FPUSH(0.0);
    /* 0053def4: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 0053def7: fld1  */ FPUSH(1.0);
    /* 0053def9: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0053defc: mov edx, dword ptr [0x7933ec] */ r_edx = R32((u32)(0x7933ecu));
    /* 0053df02: mov eax, dword ptr [edx + 0xe8] */ r_eax = R32((u32)(r_edx+0xe8u));
    /* 0053df08: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0053df0b: mov dword ptr [ebp - 0x1c], 0xffffffff */ W32((u32)(r_ebp+0xffffffe4u), 0xffffffffu);
    /* 0053df12: mov dword ptr [ebp - 8], 0xffffffff */ W32((u32)(r_ebp+0xfffffff8u), 0xffffffffu);
    /* 0053df19: mov dword ptr [ebp - 0x50], 0xffffffff */ W32((u32)(r_ebp+0xffffffb0u), 0xffffffffu);
    /* 0053df20: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 0053df27: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053df2d: mov edx, dword ptr [ecx + 0x104] */ r_edx = R32((u32)(r_ecx+0x104u));
    /* 0053df33: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 0053df36: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 0053df39: mov dword ptr [ebp - 0x110], eax */ W32((u32)(r_ebp+0xfffffef0u), r_eax);
    /* 0053df3f: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053df45: mov edx, dword ptr [ecx + 0x100] */ r_edx = R32((u32)(r_ecx+0x100u));
    /* 0053df4b: mov dword ptr [ebp - 0x110], edx */ W32((u32)(r_ebp+0xfffffef0u), r_edx);
    /* 0053df51: cmp dword ptr [ebp - 0x110], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffef0u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0053df58: ja 0x53e79e */ if ((!fC&&!fZ)) goto L_0053e79e;
L_0053df5e:; BB(0x0053df5e);
    /* 0053df5e: mov eax, dword ptr [ebp - 0x110] */ r_eax = R32((u32)(r_ebp+0xfffffef0u));
    /* 0053df64: jmp dword ptr [eax*4 + 0x53e958] */ { u32 t = R32((u32)(r_eax*4+0x53e958u)); switch (t) { case 0x53df80u: goto L_0053df80; case 0x53df6bu: goto L_0053df6b; case 0x53df95u: goto L_0053df95; case 0x53e31eu: goto L_0053e31e; case 0x53e6cdu: goto L_0053e6cd; case 0x53e6d9u: goto L_0053e6d9; case 0x53e6e5u: goto L_0053e6e5; case 0x53e797u: goto L_0053e797; default: UNSUP(0x0053df64, "jump table entry is not a known target"); } }
L_0053df6b:; BB(0x0053df6b);
    /* 0053df6b: mov dword ptr [ebp - 0x20], 0x803 */ W32((u32)(r_ebp+0xffffffe0u), 0x803u);
    /* 0053df72: fld qword ptr [0x6b2c40] */ FPUSH(R_F64((u32)(0x6b2c40u)));
    /* 0053df78: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0053df7b: jmp 0x53e79e */ goto L_0053e79e;
L_0053df80:; BB(0x0053df80);
    /* 0053df80: mov dword ptr [ebp - 0x20], 0x82e */ W32((u32)(r_ebp+0xffffffe0u), 0x82eu);
    /* 0053df87: fld qword ptr [0x6b2c40] */ FPUSH(R_F64((u32)(0x6b2c40u)));
    /* 0053df8d: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0053df90: jmp 0x53e79e */ goto L_0053e79e;
L_0053df95:; BB(0x0053df95);
    /* 0053df95: lea ecx, [ebp - 0x58] */ r_ecx = (u32)(r_ebp+0xffffffa8u);
    /* 0053df98: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053df99: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053df9c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053df9d: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x53dfa2u); f_005dcb00();
    /* 0053dfa2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053dfa5: mov ecx, eax */ r_ecx = r_eax;
    /* 0053dfa7: call 0x5d6020 */ r_esp -= 4; W32(r_esp, 0x53dfacu); f_005d6020();
    /* 0053dfac: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053dfaf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053dfb0: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x53dfb5u); f_005dcb00();
    /* 0053dfb5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053dfb8: cmp dword ptr [eax + 0x4a8], 3 */ {  u32 a = R32((u32)(r_eax+0x4a8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053dfbf: jle 0x53e03f */ if ((fZ||fS!=fO)) goto L_0053e03f;
L_0053dfc1:; BB(0x0053dfc1);
    /* 0053dfc1: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0053dfc3: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x53dfc8u); f_0062fbf0();
    /* 0053dfc8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053dfcb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053dfcd: jne 0x53e03f */ if (!fZ) goto L_0053e03f;
L_0053dfcf:; BB(0x0053dfcf);
    /* 0053dfcf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053dfd2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053dfd3: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x53dfd8u); f_005dcb00();
    /* 0053dfd8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053dfdb: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 0053dfde: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 0053dfe1: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x53dfe6u); f_0063aac0();
    /* 0053dfe6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0053dfe8: mov dword ptr [ebp - 0x68], edx */ W32((u32)(r_ebp+0xffffff98u), r_edx);
    /* 0053dfeb: cmp dword ptr [ebp - 0x68], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff98u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053dfef: je 0x53e010 */ if (fZ) goto L_0053e010;
L_0053dff1:; BB(0x0053dff1);
    /* 0053dff1: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 0053dff4: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x53dff9u); f_0063aac0();
    /* 0053dff9: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0053dffb: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 0053dffe: cmp dword ptr [ebp - 0x6c], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff94u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e002: je 0x53e010 */ if (fZ) goto L_0053e010;
L_0053e004:; BB(0x0053e004);
    /* 0053e004: mov dword ptr [ebp - 0x114], 0 */ W32((u32)(r_ebp+0xfffffeecu), 0x0u);
    /* 0053e00e: jmp 0x53e01a */ goto L_0053e01a;
L_0053e010:; BB(0x0053e010);
    /* 0053e010: mov dword ptr [ebp - 0x114], 1 */ W32((u32)(r_ebp+0xfffffeecu), 0x1u);
L_0053e01a:; BB(0x0053e01a);
    /* 0053e01a: movzx ecx, byte ptr [ebp - 0x114] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffeecu));
    /* 0053e021: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 0053e023: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 0053e025: and ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0053e028: add ecx, 0x400 */ {  u32 a = r_ecx; u32 b = 0x400u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0053e02e: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0053e031: fld qword ptr [0x6b2c40] */ FPUSH(R_F64((u32)(0x6b2c40u)));
    /* 0053e037: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0053e03a: jmp 0x53e79e */ goto L_0053e79e;
L_0053e03f:; BB(0x0053e03f);
    /* 0053e03f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053e042: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053e043: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x53e048u); f_005dcb00();
    /* 0053e048: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053e04b: cmp dword ptr [eax + 0x4a8], -3 */ {  u32 a = R32((u32)(r_eax+0x4a8u)); u32 b = 0xfffffffdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053e052: jge 0x53e0d1 */ if ((fS==fO)) goto L_0053e0d1;
L_0053e054:; BB(0x0053e054);
    /* 0053e054: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0053e056: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x53e05bu); f_0062fbf0();
    /* 0053e05b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053e05e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e060: jne 0x53e0d1 */ if (!fZ) goto L_0053e0d1;
L_0053e062:; BB(0x0053e062);
    /* 0053e062: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053e065: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053e066: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x53e06bu); f_005dcb00();
    /* 0053e06b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053e06e: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 0053e071: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 0053e074: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x53e079u); f_0063aac0();
    /* 0053e079: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0053e07b: mov dword ptr [ebp - 0x74], ecx */ W32((u32)(r_ebp+0xffffff8cu), r_ecx);
    /* 0053e07e: cmp dword ptr [ebp - 0x74], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff8cu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e082: je 0x53e0a3 */ if (fZ) goto L_0053e0a3;
L_0053e084:; BB(0x0053e084);
    /* 0053e084: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 0053e087: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x53e08cu); f_0063aac0();
    /* 0053e08c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0053e08e: mov dword ptr [ebp - 0x78], edx */ W32((u32)(r_ebp+0xffffff88u), r_edx);
    /* 0053e091: cmp dword ptr [ebp - 0x78], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff88u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e095: je 0x53e0a3 */ if (fZ) goto L_0053e0a3;
L_0053e097:; BB(0x0053e097);
    /* 0053e097: mov dword ptr [ebp - 0x118], 0 */ W32((u32)(r_ebp+0xfffffee8u), 0x0u);
    /* 0053e0a1: jmp 0x53e0ad */ goto L_0053e0ad;
L_0053e0a3:; BB(0x0053e0a3);
    /* 0053e0a3: mov dword ptr [ebp - 0x118], 1 */ W32((u32)(r_ebp+0xfffffee8u), 0x1u);
L_0053e0ad:; BB(0x0053e0ad);
    /* 0053e0ad: movzx eax, byte ptr [ebp - 0x118] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffee8u));
    /* 0053e0b4: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0053e0b6: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0053e0b8: and eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0053e0bb: add eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053e0c0: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0053e0c3: fld qword ptr [0x6b2c40] */ FPUSH(R_F64((u32)(0x6b2c40u)));
    /* 0053e0c9: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0053e0cc: jmp 0x53e79e */ goto L_0053e79e;
L_0053e0d1:; BB(0x0053e0d1);
    /* 0053e0d1: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053e0d7: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0053e0da: movzx edx, byte ptr [ecx + 0xfb] */ r_edx = (u32)R8((u32)(r_ecx+0xfbu));
    /* 0053e0e1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e0e3: je 0x53e15f */ if (fZ) goto L_0053e15f;
L_0053e0e5:; BB(0x0053e0e5);
    /* 0053e0e5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053e0e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053e0e9: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x53e0eeu); f_005dcb00();
    /* 0053e0ee: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053e0f1: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 0053e0f7: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0053e0fd: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x53e102u); f_0063aac0();
    /* 0053e102: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0053e104: mov dword ptr [ebp - 0x80], ecx */ W32((u32)(r_ebp+0xffffff80u), r_ecx);
    /* 0053e107: cmp dword ptr [ebp - 0x80], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff80u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e10b: je 0x53e135 */ if (fZ) goto L_0053e135;
L_0053e10d:; BB(0x0053e10d);
    /* 0053e10d: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0053e113: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x53e118u); f_0063aac0();
    /* 0053e118: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0053e11a: mov dword ptr [ebp - 0x84], edx */ W32((u32)(r_ebp+0xffffff7cu), r_edx);
    /* 0053e120: cmp dword ptr [ebp - 0x84], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff7cu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e127: je 0x53e135 */ if (fZ) goto L_0053e135;
L_0053e129:; BB(0x0053e129);
    /* 0053e129: mov dword ptr [ebp - 0x11c], 0 */ W32((u32)(r_ebp+0xfffffee4u), 0x0u);
    /* 0053e133: jmp 0x53e13f */ goto L_0053e13f;
L_0053e135:; BB(0x0053e135);
    /* 0053e135: mov dword ptr [ebp - 0x11c], 1 */ W32((u32)(r_ebp+0xfffffee4u), 0x1u);
L_0053e13f:; BB(0x0053e13f);
    /* 0053e13f: movzx eax, byte ptr [ebp - 0x11c] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffee4u));
    /* 0053e146: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0053e148: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0053e14a: and eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0053e14d: add eax, 0x3fe */ {  u32 a = r_eax; u32 b = 0x3feu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053e152: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0053e155: fld1  */ FPUSH(1.0);
    /* 0053e157: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0053e15a: jmp 0x53e79e */ goto L_0053e79e;
L_0053e15f:; BB(0x0053e15f);
    /* 0053e15f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053e162: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053e163: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053e169: call 0x541de0 */ r_esp -= 4; W32(r_esp, 0x53e16eu); f_00541de0();
    /* 0053e16e: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0053e171: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e173: je 0x53e1fb */ if (fZ) goto L_0053e1fb;
L_0053e179:; BB(0x0053e179);
    /* 0053e179: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053e17c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053e17d: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x53e182u); f_005dcb00();
    /* 0053e182: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053e185: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 0053e18b: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 0053e191: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x53e196u); f_0063aac0();
    /* 0053e196: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0053e198: mov dword ptr [ebp - 0x8c], ecx */ W32((u32)(r_ebp+0xffffff74u), r_ecx);
    /* 0053e19e: cmp dword ptr [ebp - 0x8c], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff74u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e1a5: je 0x53e1cf */ if (fZ) goto L_0053e1cf;
L_0053e1a7:; BB(0x0053e1a7);
    /* 0053e1a7: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 0053e1ad: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x53e1b2u); f_0063aac0();
    /* 0053e1b2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0053e1b4: mov dword ptr [ebp - 0x90], edx */ W32((u32)(r_ebp+0xffffff70u), r_edx);
    /* 0053e1ba: cmp dword ptr [ebp - 0x90], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff70u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e1c1: je 0x53e1cf */ if (fZ) goto L_0053e1cf;
L_0053e1c3:; BB(0x0053e1c3);
    /* 0053e1c3: mov dword ptr [ebp - 0x120], 0 */ W32((u32)(r_ebp+0xfffffee0u), 0x0u);
    /* 0053e1cd: jmp 0x53e1d9 */ goto L_0053e1d9;
L_0053e1cf:; BB(0x0053e1cf);
    /* 0053e1cf: mov dword ptr [ebp - 0x120], 1 */ W32((u32)(r_ebp+0xfffffee0u), 0x1u);
L_0053e1d9:; BB(0x0053e1d9);
    /* 0053e1d9: movzx eax, byte ptr [ebp - 0x120] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffee0u));
    /* 0053e1e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e1e2: jne 0x53e1fb */ if (!fZ) goto L_0053e1fb;
L_0053e1e4:; BB(0x0053e1e4);
    /* 0053e1e4: cmp dword ptr [ebp - 0x58], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053e1e8: jge 0x53e1fb */ if ((fS==fO)) goto L_0053e1fb;
L_0053e1ea:; BB(0x0053e1ea);
    /* 0053e1ea: mov dword ptr [ebp - 0x20], 0x82d */ W32((u32)(r_ebp+0xffffffe0u), 0x82du);
    /* 0053e1f1: fld1  */ FPUSH(1.0);
    /* 0053e1f3: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0053e1f6: jmp 0x53e79e */ goto L_0053e79e;
L_0053e1fb:; BB(0x0053e1fb);
    /* 0053e1fb: cmp dword ptr [ebp - 0x58], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053e1ff: jge 0x53e28a */ if ((fS==fO)) goto L_0053e28a;
L_0053e205:; BB(0x0053e205);
    /* 0053e205: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053e208: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053e209: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x53e20eu); f_005dcb00();
    /* 0053e20e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053e211: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
    /* 0053e217: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 0053e21d: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x53e222u); f_0063aac0();
    /* 0053e222: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0053e224: mov dword ptr [ebp - 0x98], edx */ W32((u32)(r_ebp+0xffffff68u), r_edx);
    /* 0053e22a: cmp dword ptr [ebp - 0x98], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff68u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e231: je 0x53e25b */ if (fZ) goto L_0053e25b;
L_0053e233:; BB(0x0053e233);
    /* 0053e233: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 0053e239: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x53e23eu); f_0063aac0();
    /* 0053e23e: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0053e240: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
    /* 0053e246: cmp dword ptr [ebp - 0x9c], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff64u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e24d: je 0x53e25b */ if (fZ) goto L_0053e25b;
L_0053e24f:; BB(0x0053e24f);
    /* 0053e24f: mov dword ptr [ebp - 0x124], 0 */ W32((u32)(r_ebp+0xfffffedcu), 0x0u);
    /* 0053e259: jmp 0x53e265 */ goto L_0053e265;
L_0053e25b:; BB(0x0053e25b);
    /* 0053e25b: mov dword ptr [ebp - 0x124], 1 */ W32((u32)(r_ebp+0xfffffedcu), 0x1u);
L_0053e265:; BB(0x0053e265);
    /* 0053e265: movzx ecx, byte ptr [ebp - 0x124] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffedcu));
    /* 0053e26c: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 0053e26e: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 0053e270: and ecx, 0xffffffe6 */ {  u32 a = r_ecx; u32 b = 0xffffffe6u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0053e273: add ecx, 0x402 */ {  u32 a = r_ecx; u32 b = 0x402u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0053e279: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0053e27c: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 0053e282: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0053e285: jmp 0x53e79e */ goto L_0053e79e;
L_0053e28a:; BB(0x0053e28a);
    /* 0053e28a: cmp dword ptr [ebp - 0x58], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053e28e: jle 0x53e319 */ if ((fZ||fS!=fO)) goto L_0053e319;
L_0053e294:; BB(0x0053e294);
    /* 0053e294: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053e297: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053e298: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x53e29du); f_005dcb00();
    /* 0053e29d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053e2a0: mov dword ptr [ebp - 0xac], eax */ W32((u32)(r_ebp+0xffffff54u), r_eax);
    /* 0053e2a6: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 0053e2ac: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x53e2b1u); f_0063aac0();
    /* 0053e2b1: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0053e2b3: mov dword ptr [ebp - 0xa4], eax */ W32((u32)(r_ebp+0xffffff5cu), r_eax);
    /* 0053e2b9: cmp dword ptr [ebp - 0xa4], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff5cu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e2c0: je 0x53e2ea */ if (fZ) goto L_0053e2ea;
L_0053e2c2:; BB(0x0053e2c2);
    /* 0053e2c2: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 0053e2c8: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x53e2cdu); f_0063aac0();
    /* 0053e2cd: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0053e2cf: mov dword ptr [ebp - 0xa8], ecx */ W32((u32)(r_ebp+0xffffff58u), r_ecx);
    /* 0053e2d5: cmp dword ptr [ebp - 0xa8], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff58u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e2dc: je 0x53e2ea */ if (fZ) goto L_0053e2ea;
L_0053e2de:; BB(0x0053e2de);
    /* 0053e2de: mov dword ptr [ebp - 0x128], 0 */ W32((u32)(r_ebp+0xfffffed8u), 0x0u);
    /* 0053e2e8: jmp 0x53e2f4 */ goto L_0053e2f4;
L_0053e2ea:; BB(0x0053e2ea);
    /* 0053e2ea: mov dword ptr [ebp - 0x128], 1 */ W32((u32)(r_ebp+0xfffffed8u), 0x1u);
L_0053e2f4:; BB(0x0053e2f4);
    /* 0053e2f4: movzx edx, byte ptr [ebp - 0x128] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffed8u));
    /* 0053e2fb: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 0053e2fd: sbb edx, edx */ { u32 c = fC; u32 a = r_edx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 0053e2ff: and edx, 0xffffffec */ {  u32 a = r_edx; u32 b = 0xffffffecu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0053e302: add edx, 0x404 */ {  u32 a = r_edx; u32 b = 0x404u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0053e308: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0053e30b: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 0053e311: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0053e314: jmp 0x53e79e */ goto L_0053e79e;
L_0053e319:; BB(0x0053e319);
    /* 0053e319: jmp 0x53e79e */ goto L_0053e79e;
L_0053e31e:; BB(0x0053e31e);
    /* 0053e31e: mov ecx, dword ptr [0x7933e8] */ r_ecx = R32((u32)(0x7933e8u));
    /* 0053e324: call 0x5dac90 */ r_esp -= 4; W32(r_esp, 0x53e329u); f_005dac90();
    /* 0053e329: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0053e32c: mov ecx, dword ptr [0x7933e8] */ r_ecx = R32((u32)(0x7933e8u));
    /* 0053e332: call 0x5dada0 */ r_esp -= 4; W32(r_esp, 0x53e337u); f_005dada0();
    /* 0053e337: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0053e33a: mov ecx, dword ptr [0x7933e8] */ r_ecx = R32((u32)(0x7933e8u));
    /* 0053e340: call 0x5db190 */ r_esp -= 4; W32(r_esp, 0x53e345u); f_005db190();
    /* 0053e345: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0053e348: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e34a: je 0x53e464 */ if (fZ) goto L_0053e464;
L_0053e350:; BB(0x0053e350);
    /* 0053e350: cmp dword ptr [ebp - 8], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e354: je 0x53e464 */ if (fZ) goto L_0053e464;
L_0053e35a:; BB(0x0053e35a);
    /* 0053e35a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053e35d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053e35e: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x53e363u); f_005dcb00();
    /* 0053e363: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053e366: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 0053e36c: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 0053e372: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x53e377u); f_0063aac0();
    /* 0053e377: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0053e379: mov dword ptr [ebp - 0xb0], edx */ W32((u32)(r_ebp+0xffffff50u), r_edx);
    /* 0053e37f: cmp dword ptr [ebp - 0xb0], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff50u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e386: je 0x53e3b0 */ if (fZ) goto L_0053e3b0;
L_0053e388:; BB(0x0053e388);
    /* 0053e388: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 0053e38e: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x53e393u); f_0063aac0();
    /* 0053e393: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0053e395: mov dword ptr [ebp - 0xb4], eax */ W32((u32)(r_ebp+0xffffff4cu), r_eax);
    /* 0053e39b: cmp dword ptr [ebp - 0xb4], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff4cu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e3a2: je 0x53e3b0 */ if (fZ) goto L_0053e3b0;
L_0053e3a4:; BB(0x0053e3a4);
    /* 0053e3a4: mov dword ptr [ebp - 0x12c], 0 */ W32((u32)(r_ebp+0xfffffed4u), 0x0u);
    /* 0053e3ae: jmp 0x53e3ba */ goto L_0053e3ba;
L_0053e3b0:; BB(0x0053e3b0);
    /* 0053e3b0: mov dword ptr [ebp - 0x12c], 1 */ W32((u32)(r_ebp+0xfffffed4u), 0x1u);
L_0053e3ba:; BB(0x0053e3ba);
    /* 0053e3ba: movzx ecx, byte ptr [ebp - 0x12c] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffed4u));
    /* 0053e3c1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e3c3: je 0x53e3d1 */ if (fZ) goto L_0053e3d1;
L_0053e3c5:; BB(0x0053e3c5);
    /* 0053e3c5: mov dword ptr [ebp - 0x130], 0xffffffff */ W32((u32)(r_ebp+0xfffffed0u), 0xffffffffu);
    /* 0053e3cf: jmp 0x53e3da */ goto L_0053e3da;
L_0053e3d1:; BB(0x0053e3d1);
    /* 0053e3d1: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053e3d4: mov dword ptr [ebp - 0x130], edx */ W32((u32)(r_ebp+0xfffffed0u), r_edx);
L_0053e3da:; BB(0x0053e3da);
    /* 0053e3da: mov eax, dword ptr [ebp - 0x130] */ r_eax = R32((u32)(r_ebp+0xfffffed0u));
    /* 0053e3e0: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0053e3e3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053e3e6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053e3e7: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x53e3ecu); f_005dcb00();
    /* 0053e3ec: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053e3ef: mov dword ptr [ebp - 0xc4], eax */ W32((u32)(r_ebp+0xffffff3cu), r_eax);
    /* 0053e3f5: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 0053e3fb: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x53e400u); f_0063aac0();
    /* 0053e400: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0053e402: mov dword ptr [ebp - 0xbc], edx */ W32((u32)(r_ebp+0xffffff44u), r_edx);
    /* 0053e408: cmp dword ptr [ebp - 0xbc], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff44u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e40f: je 0x53e439 */ if (fZ) goto L_0053e439;
L_0053e411:; BB(0x0053e411);
    /* 0053e411: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 0053e417: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x53e41cu); f_0063aac0();
    /* 0053e41c: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0053e41e: mov dword ptr [ebp - 0xc0], eax */ W32((u32)(r_ebp+0xffffff40u), r_eax);
    /* 0053e424: cmp dword ptr [ebp - 0xc0], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff40u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e42b: je 0x53e439 */ if (fZ) goto L_0053e439;
L_0053e42d:; BB(0x0053e42d);
    /* 0053e42d: mov dword ptr [ebp - 0x134], 0 */ W32((u32)(r_ebp+0xfffffeccu), 0x0u);
    /* 0053e437: jmp 0x53e443 */ goto L_0053e443;
L_0053e439:; BB(0x0053e439);
    /* 0053e439: mov dword ptr [ebp - 0x134], 1 */ W32((u32)(r_ebp+0xfffffeccu), 0x1u);
L_0053e443:; BB(0x0053e443);
    /* 0053e443: movzx ecx, byte ptr [ebp - 0x134] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffeccu));
    /* 0053e44a: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 0053e44c: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 0053e44e: and ecx, 0x15 */ {  u32 a = r_ecx; u32 b = 0x15u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0053e451: add ecx, 0x3fd */ {  u32 a = r_ecx; u32 b = 0x3fdu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0053e457: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0053e45a: fld1  */ FPUSH(1.0);
    /* 0053e45c: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0053e45f: jmp 0x53e6c8 */ goto L_0053e6c8;
L_0053e464:; BB(0x0053e464);
    /* 0053e464: cmp dword ptr [ebp - 8], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e468: je 0x53e481 */ if (fZ) goto L_0053e481;
L_0053e46a:; BB(0x0053e46a);
    /* 0053e46a: lea edx, [ebp - 0x58] */ r_edx = (u32)(r_ebp+0xffffffa8u);
    /* 0053e46d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053e46e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053e471: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053e472: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x53e477u); f_005dcb00();
    /* 0053e477: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053e47a: mov ecx, eax */ r_ecx = r_eax;
    /* 0053e47c: call 0x5d6020 */ r_esp -= 4; W32(r_esp, 0x53e481u); f_005d6020();
L_0053e481:; BB(0x0053e481);
    /* 0053e481: cmp dword ptr [ebp - 8], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e485: je 0x53e5b5 */ if (fZ) goto L_0053e5b5;
L_0053e48b:; BB(0x0053e48b);
    /* 0053e48b: cmp dword ptr [ebp - 0x58], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053e48f: jle 0x53e5b5 */ if ((fZ||fS!=fO)) goto L_0053e5b5;
L_0053e495:; BB(0x0053e495);
    /* 0053e495: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0053e497: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x53e49cu); f_0062fbf0();
    /* 0053e49c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053e49f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e4a1: jne 0x53e5b5 */ if (!fZ) goto L_0053e5b5;
L_0053e4a7:; BB(0x0053e4a7);
    /* 0053e4a7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053e4aa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053e4ab: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x53e4b0u); f_005dcb00();
    /* 0053e4b0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053e4b3: mov dword ptr [ebp - 0xd0], eax */ W32((u32)(r_ebp+0xffffff30u), r_eax);
    /* 0053e4b9: mov ecx, dword ptr [ebp - 0xd0] */ r_ecx = R32((u32)(r_ebp+0xffffff30u));
    /* 0053e4bf: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x53e4c4u); f_0063aac0();
    /* 0053e4c4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0053e4c6: mov dword ptr [ebp - 0xc8], edx */ W32((u32)(r_ebp+0xffffff38u), r_edx);
    /* 0053e4cc: cmp dword ptr [ebp - 0xc8], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff38u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e4d3: je 0x53e4fd */ if (fZ) goto L_0053e4fd;
L_0053e4d5:; BB(0x0053e4d5);
    /* 0053e4d5: mov ecx, dword ptr [ebp - 0xd0] */ r_ecx = R32((u32)(r_ebp+0xffffff30u));
    /* 0053e4db: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x53e4e0u); f_0063aac0();
    /* 0053e4e0: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0053e4e2: mov dword ptr [ebp - 0xcc], eax */ W32((u32)(r_ebp+0xffffff34u), r_eax);
    /* 0053e4e8: cmp dword ptr [ebp - 0xcc], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff34u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e4ef: je 0x53e4fd */ if (fZ) goto L_0053e4fd;
L_0053e4f1:; BB(0x0053e4f1);
    /* 0053e4f1: mov dword ptr [ebp - 0x138], 0 */ W32((u32)(r_ebp+0xfffffec8u), 0x0u);
    /* 0053e4fb: jmp 0x53e507 */ goto L_0053e507;
L_0053e4fd:; BB(0x0053e4fd);
    /* 0053e4fd: mov dword ptr [ebp - 0x138], 1 */ W32((u32)(r_ebp+0xfffffec8u), 0x1u);
L_0053e507:; BB(0x0053e507);
    /* 0053e507: movzx ecx, byte ptr [ebp - 0x138] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffec8u));
    /* 0053e50e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e510: je 0x53e51e */ if (fZ) goto L_0053e51e;
L_0053e512:; BB(0x0053e512);
    /* 0053e512: mov dword ptr [ebp - 0x13c], 0xffffffff */ W32((u32)(r_ebp+0xfffffec4u), 0xffffffffu);
    /* 0053e51c: jmp 0x53e527 */ goto L_0053e527;
L_0053e51e:; BB(0x0053e51e);
    /* 0053e51e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053e521: mov dword ptr [ebp - 0x13c], edx */ W32((u32)(r_ebp+0xfffffec4u), r_edx);
L_0053e527:; BB(0x0053e527);
    /* 0053e527: mov eax, dword ptr [ebp - 0x13c] */ r_eax = R32((u32)(r_ebp+0xfffffec4u));
    /* 0053e52d: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0053e530: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053e533: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053e534: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x53e539u); f_005dcb00();
    /* 0053e539: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053e53c: mov dword ptr [ebp - 0xdc], eax */ W32((u32)(r_ebp+0xffffff24u), r_eax);
    /* 0053e542: mov ecx, dword ptr [ebp - 0xdc] */ r_ecx = R32((u32)(r_ebp+0xffffff24u));
    /* 0053e548: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x53e54du); f_0063aac0();
    /* 0053e54d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0053e54f: mov dword ptr [ebp - 0xd4], edx */ W32((u32)(r_ebp+0xffffff2cu), r_edx);
    /* 0053e555: cmp dword ptr [ebp - 0xd4], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff2cu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e55c: je 0x53e586 */ if (fZ) goto L_0053e586;
L_0053e55e:; BB(0x0053e55e);
    /* 0053e55e: mov ecx, dword ptr [ebp - 0xdc] */ r_ecx = R32((u32)(r_ebp+0xffffff24u));
    /* 0053e564: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x53e569u); f_0063aac0();
    /* 0053e569: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0053e56b: mov dword ptr [ebp - 0xd8], eax */ W32((u32)(r_ebp+0xffffff28u), r_eax);
    /* 0053e571: cmp dword ptr [ebp - 0xd8], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff28u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e578: je 0x53e586 */ if (fZ) goto L_0053e586;
L_0053e57a:; BB(0x0053e57a);
    /* 0053e57a: mov dword ptr [ebp - 0x140], 0 */ W32((u32)(r_ebp+0xfffffec0u), 0x0u);
    /* 0053e584: jmp 0x53e590 */ goto L_0053e590;
L_0053e586:; BB(0x0053e586);
    /* 0053e586: mov dword ptr [ebp - 0x140], 1 */ W32((u32)(r_ebp+0xfffffec0u), 0x1u);
L_0053e590:; BB(0x0053e590);
    /* 0053e590: movzx ecx, byte ptr [ebp - 0x140] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffec0u));
    /* 0053e597: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 0053e599: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 0053e59b: and ecx, 0x19 */ {  u32 a = r_ecx; u32 b = 0x19u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0053e59e: add ecx, 0x3f2 */ {  u32 a = r_ecx; u32 b = 0x3f2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0053e5a4: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0053e5a7: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 0053e5ad: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0053e5b0: jmp 0x53e6c8 */ goto L_0053e6c8;
L_0053e5b5:; BB(0x0053e5b5);
    /* 0053e5b5: cmp dword ptr [ebp - 0x50], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e5b9: je 0x53e6c8 */ if (fZ) goto L_0053e6c8;
L_0053e5bf:; BB(0x0053e5bf);
    /* 0053e5bf: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0053e5c2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053e5c3: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x53e5c8u); f_005dcb00();
    /* 0053e5c8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053e5cb: mov dword ptr [ebp - 0xe8], eax */ W32((u32)(r_ebp+0xffffff18u), r_eax);
    /* 0053e5d1: mov ecx, dword ptr [ebp - 0xe8] */ r_ecx = R32((u32)(r_ebp+0xffffff18u));
    /* 0053e5d7: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x53e5dcu); f_0063aac0();
    /* 0053e5dc: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0053e5de: mov dword ptr [ebp - 0xe0], eax */ W32((u32)(r_ebp+0xffffff20u), r_eax);
    /* 0053e5e4: cmp dword ptr [ebp - 0xe0], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff20u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e5eb: je 0x53e615 */ if (fZ) goto L_0053e615;
L_0053e5ed:; BB(0x0053e5ed);
    /* 0053e5ed: mov ecx, dword ptr [ebp - 0xe8] */ r_ecx = R32((u32)(r_ebp+0xffffff18u));
    /* 0053e5f3: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x53e5f8u); f_0063aac0();
    /* 0053e5f8: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0053e5fa: mov dword ptr [ebp - 0xe4], ecx */ W32((u32)(r_ebp+0xffffff1cu), r_ecx);
    /* 0053e600: cmp dword ptr [ebp - 0xe4], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff1cu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e607: je 0x53e615 */ if (fZ) goto L_0053e615;
L_0053e609:; BB(0x0053e609);
    /* 0053e609: mov dword ptr [ebp - 0x144], 0 */ W32((u32)(r_ebp+0xfffffebcu), 0x0u);
    /* 0053e613: jmp 0x53e61f */ goto L_0053e61f;
L_0053e615:; BB(0x0053e615);
    /* 0053e615: mov dword ptr [ebp - 0x144], 1 */ W32((u32)(r_ebp+0xfffffebcu), 0x1u);
L_0053e61f:; BB(0x0053e61f);
    /* 0053e61f: movzx edx, byte ptr [ebp - 0x144] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffebcu));
    /* 0053e626: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e628: je 0x53e636 */ if (fZ) goto L_0053e636;
L_0053e62a:; BB(0x0053e62a);
    /* 0053e62a: mov dword ptr [ebp - 0x148], 0xffffffff */ W32((u32)(r_ebp+0xfffffeb8u), 0xffffffffu);
    /* 0053e634: jmp 0x53e63f */ goto L_0053e63f;
L_0053e636:; BB(0x0053e636);
    /* 0053e636: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0053e639: mov dword ptr [ebp - 0x148], eax */ W32((u32)(r_ebp+0xfffffeb8u), r_eax);
L_0053e63f:; BB(0x0053e63f);
    /* 0053e63f: mov ecx, dword ptr [ebp - 0x148] */ r_ecx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 0053e645: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 0053e648: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0053e64b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053e64c: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x53e651u); f_005dcb00();
    /* 0053e651: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053e654: mov dword ptr [ebp - 0xf4], eax */ W32((u32)(r_ebp+0xffffff0cu), r_eax);
    /* 0053e65a: mov ecx, dword ptr [ebp - 0xf4] */ r_ecx = R32((u32)(r_ebp+0xffffff0cu));
    /* 0053e660: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x53e665u); f_0063aac0();
    /* 0053e665: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0053e667: mov dword ptr [ebp - 0xec], eax */ W32((u32)(r_ebp+0xffffff14u), r_eax);
    /* 0053e66d: cmp dword ptr [ebp - 0xec], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff14u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e674: je 0x53e69e */ if (fZ) goto L_0053e69e;
L_0053e676:; BB(0x0053e676);
    /* 0053e676: mov ecx, dword ptr [ebp - 0xf4] */ r_ecx = R32((u32)(r_ebp+0xffffff0cu));
    /* 0053e67c: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x53e681u); f_0063aac0();
    /* 0053e681: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0053e683: mov dword ptr [ebp - 0xf0], ecx */ W32((u32)(r_ebp+0xffffff10u), r_ecx);
    /* 0053e689: cmp dword ptr [ebp - 0xf0], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff10u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e690: je 0x53e69e */ if (fZ) goto L_0053e69e;
L_0053e692:; BB(0x0053e692);
    /* 0053e692: mov dword ptr [ebp - 0x14c], 0 */ W32((u32)(r_ebp+0xfffffeb4u), 0x0u);
    /* 0053e69c: jmp 0x53e6a8 */ goto L_0053e6a8;
L_0053e69e:; BB(0x0053e69e);
    /* 0053e69e: mov dword ptr [ebp - 0x14c], 1 */ W32((u32)(r_ebp+0xfffffeb4u), 0x1u);
L_0053e6a8:; BB(0x0053e6a8);
    /* 0053e6a8: movzx edx, byte ptr [ebp - 0x14c] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffeb4u));
    /* 0053e6af: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 0053e6b1: sbb edx, edx */ { u32 c = fC; u32 a = r_edx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 0053e6b3: and edx, 0x19 */ {  u32 a = r_edx; u32 b = 0x19u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0053e6b6: add edx, 0x3f3 */ {  u32 a = r_edx; u32 b = 0x3f3u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0053e6bc: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0053e6bf: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 0053e6c5: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
L_0053e6c8:; BB(0x0053e6c8);
    /* 0053e6c8: jmp 0x53e79e */ goto L_0053e79e;
L_0053e6cd:; BB(0x0053e6cd);
    /* 0053e6cd: mov dword ptr [ebp - 0x1c], 0x29810 */ W32((u32)(r_ebp+0xffffffe4u), 0x29810u);
    /* 0053e6d4: jmp 0x53e79e */ goto L_0053e79e;
L_0053e6d9:; BB(0x0053e6d9);
    /* 0053e6d9: mov dword ptr [ebp - 0x1c], 0x29816 */ W32((u32)(r_ebp+0xffffffe4u), 0x29816u);
    /* 0053e6e0: jmp 0x53e79e */ goto L_0053e79e;
L_0053e6e5:; BB(0x0053e6e5);
    /* 0053e6e5: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053e6eb: call 0x541790 */ r_esp -= 4; W32(r_esp, 0x53e6f0u); f_00541790();
    /* 0053e6f0: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0053e6f3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e6f5: je 0x53e78e */ if (fZ) goto L_0053e78e;
L_0053e6fb:; BB(0x0053e6fb);
    /* 0053e6fb: mov dword ptr [ebp - 0x1c], 0x2982b */ W32((u32)(r_ebp+0xffffffe4u), 0x2982bu);
    /* 0053e702: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053e708: call 0x541740 */ r_esp -= 4; W32(r_esp, 0x53e70du); f_00541740();
    /* 0053e70d: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0053e710: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e712: je 0x53e725 */ if (fZ) goto L_0053e725;
L_0053e714:; BB(0x0053e714);
    /* 0053e714: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0053e716: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053e718: call 0x62fc30 */ r_esp -= 4; W32(r_esp, 0x53e71du); f_0062fc30();
    /* 0053e71d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053e720: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0053e723: jmp 0x53e734 */ goto L_0053e734;
L_0053e725:; BB(0x0053e725);
    /* 0053e725: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0053e727: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053e729: call 0x62fc30 */ r_esp -= 4; W32(r_esp, 0x53e72eu); f_0062fc30();
    /* 0053e72e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053e731: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
L_0053e734:; BB(0x0053e734);
    /* 0053e734: mov edx, dword ptr [0x7933ec] */ r_edx = R32((u32)(0x7933ecu));
    /* 0053e73a: mov dword ptr [ebp - 0xf8], edx */ W32((u32)(r_ebp+0xffffff08u), r_edx);
    /* 0053e740: mov eax, dword ptr [ebp - 0xf8] */ r_eax = R32((u32)(r_ebp+0xffffff08u));
    /* 0053e746: mov dword ptr [eax + 0x100], 0xffffffff */ W32((u32)(r_eax+0x100u), 0xffffffffu);
    /* 0053e750: mov ecx, dword ptr [ebp - 0xf8] */ r_ecx = R32((u32)(r_ebp+0xffffff08u));
    /* 0053e756: mov dword ptr [ecx + 0x104], 0xffffffff */ W32((u32)(r_ecx+0x104u), 0xffffffffu);
    /* 0053e760: cmp dword ptr [ebp - 0x48], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e764: jne 0x53e78c */ if (!fZ) goto L_0053e78c;
L_0053e766:; BB(0x0053e766);
    /* 0053e766: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053e768: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 0053e76e: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0053e771: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053e772: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0053e775: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053e776: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053e779: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053e77a: mov eax, dword ptr [0x7933f4] */ r_eax = R32((u32)(0x7933f4u));
    /* 0053e77f: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 0053e782: call 0x5cd700 */ r_esp -= 4; W32(r_esp, 0x53e787u); f_005cd700();
    /* 0053e787: jmp 0x53e952 */ goto L_0053e952;
L_0053e78c:; BB(0x0053e78c);
    /* 0053e78c: jmp 0x53e795 */ goto L_0053e795;
L_0053e78e:; BB(0x0053e78e);
    /* 0053e78e: mov dword ptr [ebp - 0x1c], 0x29828 */ W32((u32)(r_ebp+0xffffffe4u), 0x29828u);
L_0053e795:; BB(0x0053e795);
    /* 0053e795: jmp 0x53e79e */ goto L_0053e79e;
L_0053e797:; BB(0x0053e797);
    /* 0053e797: mov dword ptr [ebp - 0x1c], 0x2982e */ W32((u32)(r_ebp+0xffffffe4u), 0x2982eu);
L_0053e79e:; BB(0x0053e79e);
    /* 0053e79e: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053e7a4: mov dword ptr [ebp - 0xfc], ecx */ W32((u32)(r_ebp+0xffffff04u), r_ecx);
    /* 0053e7aa: mov edx, dword ptr [ebp - 0xfc] */ r_edx = R32((u32)(r_ebp+0xffffff04u));
    /* 0053e7b0: mov dword ptr [edx + 0x100], 0xffffffff */ W32((u32)(r_edx+0x100u), 0xffffffffu);
    /* 0053e7ba: mov eax, dword ptr [ebp - 0xfc] */ r_eax = R32((u32)(r_ebp+0xffffff04u));
    /* 0053e7c0: mov dword ptr [eax + 0x104], 0xffffffff */ W32((u32)(r_eax+0x104u), 0xffffffffu);
    /* 0053e7ca: cmp dword ptr [ebp - 0x48], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e7ce: jne 0x53e81a */ if (!fZ) goto L_0053e81a;
L_0053e7d0:; BB(0x0053e7d0);
    /* 0053e7d0: cmp dword ptr [ebp - 0x1c], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e7d4: jne 0x53e7f7 */ if (!fZ) goto L_0053e7f7;
L_0053e7d6:; BB(0x0053e7d6);
    /* 0053e7d6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053e7d8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053e7da: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0053e7e0: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0053e7e3: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 0053e7e8: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0053e7eb: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0053e7ed: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0053e7f0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53e7f2u); call_ind(t); }
    /* 0053e7f2: jmp 0x53e952 */ goto L_0053e952;
L_0053e7f7:; BB(0x0053e7f7);
    /* 0053e7f7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053e7f9: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0053e7ff: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0053e802: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053e803: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053e806: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053e807: mov ecx, dword ptr [0x7933f4] */ r_ecx = R32((u32)(0x7933f4u));
    /* 0053e80d: mov ecx, dword ptr [ecx + 0x48] */ r_ecx = R32((u32)(r_ecx+0x48u));
    /* 0053e810: call 0x5cd7c0 */ r_esp -= 4; W32(r_esp, 0x53e815u); f_005cd7c0();
    /* 0053e815: jmp 0x53e952 */ goto L_0053e952;
L_0053e81a:; BB(0x0053e81a);
    /* 0053e81a: cmp dword ptr [ebp - 0x20], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e81e: je 0x53e8a8 */ if (fZ) goto L_0053e8a8;
L_0053e824:; BB(0x0053e824);
    /* 0053e824: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0053e82a: call 0x636730 */ r_esp -= 4; W32(r_esp, 0x53e82fu); f_00636730();
    /* 0053e82f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e831: je 0x53e8a8 */ if (fZ) goto L_0053e8a8;
L_0053e833:; BB(0x0053e833);
    /* 0053e833: cmp dword ptr [ebp - 0x48], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053e837: jle 0x53e8cb */ if ((fZ||fS!=fO)) goto L_0053e8cb;
L_0053e83d:; BB(0x0053e83d);
    /* 0053e83d: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0053e840: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053e841: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x53e846u); f_005dcb00();
    /* 0053e846: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053e849: mov dword ptr [ebp - 0x108], eax */ W32((u32)(r_ebp+0xfffffef8u), r_eax);
    /* 0053e84f: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 0053e855: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x53e85au); f_0063aac0();
    /* 0053e85a: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0053e85c: mov dword ptr [ebp - 0x100], eax */ W32((u32)(r_ebp+0xffffff00u), r_eax);
    /* 0053e862: cmp dword ptr [ebp - 0x100], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff00u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e869: je 0x53e893 */ if (fZ) goto L_0053e893;
L_0053e86b:; BB(0x0053e86b);
    /* 0053e86b: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 0053e871: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x53e876u); f_0063aac0();
    /* 0053e876: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0053e878: mov dword ptr [ebp - 0x104], ecx */ W32((u32)(r_ebp+0xfffffefcu), r_ecx);
    /* 0053e87e: cmp dword ptr [ebp - 0x104], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffefcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e885: je 0x53e893 */ if (fZ) goto L_0053e893;
L_0053e887:; BB(0x0053e887);
    /* 0053e887: mov dword ptr [ebp - 0x150], 0 */ W32((u32)(r_ebp+0xfffffeb0u), 0x0u);
    /* 0053e891: jmp 0x53e89d */ goto L_0053e89d;
L_0053e893:; BB(0x0053e893);
    /* 0053e893: mov dword ptr [ebp - 0x150], 1 */ W32((u32)(r_ebp+0xfffffeb0u), 0x1u);
L_0053e89d:; BB(0x0053e89d);
    /* 0053e89d: movzx edx, byte ptr [ebp - 0x150] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffeb0u));
    /* 0053e8a4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e8a6: je 0x53e8cb */ if (fZ) goto L_0053e8cb;
L_0053e8a8:; BB(0x0053e8a8);
    /* 0053e8a8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053e8aa: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053e8ac: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 0053e8b1: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0053e8b4: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 0053e8ba: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0053e8bd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0053e8bf: mov ecx, eax */ r_ecx = r_eax;
    /* 0053e8c1: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0053e8c4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53e8c6u); call_ind(t); }
    /* 0053e8c6: jmp 0x53e952 */ goto L_0053e952;
L_0053e8cb:; BB(0x0053e8cb);
    /* 0053e8cb: cmp dword ptr [ebp - 0x48], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e8cf: je 0x53e8dc */ if (fZ) goto L_0053e8dc;
L_0053e8d1:; BB(0x0053e8d1);
    /* 0053e8d1: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0053e8d4: mov dword ptr [ebp - 0x154], ecx */ W32((u32)(r_ebp+0xfffffeacu), r_ecx);
    /* 0053e8da: jmp 0x53e8ed */ goto L_0053e8ed;
L_0053e8dc:; BB(0x0053e8dc);
    /* 0053e8dc: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0053e8e2: call 0x636c50 */ r_esp -= 4; W32(r_esp, 0x53e8e7u); f_00636c50();
    /* 0053e8e7: mov dword ptr [ebp - 0x154], eax */ W32((u32)(r_ebp+0xfffffeacu), r_eax);
L_0053e8ed:; BB(0x0053e8ed);
    /* 0053e8ed: mov edx, dword ptr [ebp - 0x154] */ r_edx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0053e8f3: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 0053e8f6: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053e8f9: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0053e8fc: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0053e8ff: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 0053e902: fld qword ptr [ebp - 0x18] */ FPUSH(R_F64((u32)(r_ebp+0xffffffe8u)));
    /* 0053e905: fstp qword ptr [ebp - 0x30] */ W_F64((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 0053e908: fld qword ptr [ebp - 0x10] */ FPUSH(R_F64((u32)(r_ebp+0xfffffff0u)));
    /* 0053e90b: fstp qword ptr [ebp - 0x28] */ W_F64((u32)(r_ebp+0xffffffd8u), ST(0)); FPOP();
    /* 0053e90e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053e910: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 0053e916: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0053e919: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0053e91f: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0053e922: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0053e924: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0053e927: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53e929u); call_ind(t); }
    /* 0053e929: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053e92b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0053e92d: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0053e933: call 0x637810 */ r_esp -= 4; W32(r_esp, 0x53e938u); f_00637810();
    /* 0053e938: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053e939: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0053e93f: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0053e942: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053e943: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 0053e946: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053e947: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0053e94d: call 0x639390 */ r_esp -= 4; W32(r_esp, 0x53e952u); f_00639390();
L_0053e952:; BB(0x0053e952);
    /* 0053e952: mov esp, ebp */ r_esp = r_ebp;
    /* 0053e954: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053e955: ret  */ FN_RET(0x0053deb0); r_esp += 4; return;
}

