#include "protos.h"

void f_005ab410(void) /* RoyalMatchFlickPad::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ab410);
    /* 005ab410: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ab411: mov ebp, esp */ r_ebp = r_esp;
    /* 005ab413: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ab414: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ab417: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ab41a: call 0x5f49d0 */ r_esp -= 4; W32(r_esp, 0x5ab41fu); f_005f49d0();
    /* 005ab41f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ab422: mov dword ptr [eax], 0x6cfcfc */ W32((u32)(r_eax), 0x6cfcfcu);
    /* 005ab428: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ab42b: mov dword ptr [ecx + 0x48], 0 */ W32((u32)(r_ecx+0x48u), 0x0u);
    /* 005ab432: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ab435: mov dword ptr [edx + 0x4c], 0 */ W32((u32)(r_edx+0x4cu), 0x0u);
    /* 005ab43c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ab43f: mov dword ptr [eax + 0x50], 0 */ W32((u32)(r_eax+0x50u), 0x0u);
    /* 005ab446: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ab449: mov dword ptr [ecx + 0x54], 0 */ W32((u32)(r_ecx+0x54u), 0x0u);
    /* 005ab450: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ab453: mov dword ptr [edx + 0x14], 0 */ W32((u32)(r_edx+0x14u), 0x0u);
    /* 005ab45a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ab45d: mov dword ptr [eax + 0x10], 0 */ W32((u32)(r_eax+0x10u), 0x0u);
    /* 005ab464: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ab467: mov dword ptr [ecx + 0x18], 0x280 */ W32((u32)(r_ecx+0x18u), 0x280u);
    /* 005ab46e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ab471: mov dword ptr [edx + 0x1c], 0x1e0 */ W32((u32)(r_edx+0x1cu), 0x1e0u);
    /* 005ab478: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ab47b: mov dword ptr [eax + 0x58], 0 */ W32((u32)(r_eax+0x58u), 0x0u);
    /* 005ab482: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ab485: mov esp, ebp */ r_esp = r_ebp;
    /* 005ab487: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ab488: ret  */ FN_RET(0x005ab410); r_esp += 4; return;
}

void f_005ab660(void) /* RoyalMatchFlickPad::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ab660);
    /* 005ab660: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ab661: mov ebp, esp */ r_ebp = r_esp;
    /* 005ab663: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ab666: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005ab669: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ab66c: movzx ecx, byte ptr [eax + 4] */ r_ecx = (u32)R8((u32)(r_eax+0x4u));
    /* 005ab670: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ab672: je 0x5ab679 */ if (fZ) goto L_005ab679;
L_005ab674:; BB(0x005ab674);
    /* 005ab674: jmp 0x5ab7e2 */ goto L_005ab7e2;
L_005ab679:; BB(0x005ab679);
    /* 005ab679: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005ab67f: call 0x5b4f00 */ r_esp -= 4; W32(r_esp, 0x5ab684u); f_005b4f00();
    /* 005ab684: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ab687: je 0x5ab6fa */ if (fZ) goto L_005ab6fa;
L_005ab689:; BB(0x005ab689);
    /* 005ab689: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005ab68f: call 0x5b4f00 */ r_esp -= 4; W32(r_esp, 0x5ab694u); f_005b4f00();
    /* 005ab694: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ab697: je 0x5ab6fa */ if (fZ) goto L_005ab6fa;
L_005ab699:; BB(0x005ab699);
    /* 005ab699: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005ab69f: call 0x5b4f00 */ r_esp -= 4; W32(r_esp, 0x5ab6a4u); f_005b4f00();
    /* 005ab6a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ab6a5: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5ab6aau); f_005dcb00();
    /* 005ab6aa: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ab6ad: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005ab6b0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ab6b3: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5ab6b8u); f_0063aac0();
    /* 005ab6b8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ab6ba: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005ab6bd: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ab6c1: je 0x5ab6df */ if (fZ) goto L_005ab6df;
L_005ab6c3:; BB(0x005ab6c3);
    /* 005ab6c3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ab6c6: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5ab6cbu); f_0063aac0();
    /* 005ab6cb: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005ab6cd: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005ab6d0: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ab6d4: je 0x5ab6df */ if (fZ) goto L_005ab6df;
L_005ab6d6:; BB(0x005ab6d6);
    /* 005ab6d6: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 005ab6dd: jmp 0x5ab6e6 */ goto L_005ab6e6;
L_005ab6df:; BB(0x005ab6df);
    /* 005ab6df: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
L_005ab6e6:; BB(0x005ab6e6);
    /* 005ab6e6: movzx ecx, byte ptr [ebp - 0x14] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffecu));
    /* 005ab6ea: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ab6ec: je 0x5ab6fa */ if (fZ) goto L_005ab6fa;
L_005ab6ee:; BB(0x005ab6ee);
    /* 005ab6ee: mov edx, dword ptr [0x7935f8] */ r_edx = R32((u32)(0x7935f8u));
    /* 005ab6f4: cmp dword ptr [edx + 0x34], 0 */ {  u32 a = R32((u32)(r_edx+0x34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ab6f8: jne 0x5ab6ff */ if (!fZ) goto L_005ab6ff;
L_005ab6fa:; BB(0x005ab6fa);
    /* 005ab6fa: jmp 0x5ab7e2 */ goto L_005ab7e2;
L_005ab6ff:; BB(0x005ab6ff);
    /* 005ab6ff: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ab702: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 005ab705: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005ab708: cmp dword ptr [ebp - 0x18], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ab70c: je 0x5ab719 */ if (fZ) goto L_005ab719;
L_005ab70e:; BB(0x005ab70e);
    /* 005ab70e: cmp dword ptr [ebp - 0x18], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ab712: je 0x5ab78f */ if (fZ) goto L_005ab78f;
L_005ab714:; BB(0x005ab714);
    /* 005ab714: jmp 0x5ab7e2 */ goto L_005ab7e2;
L_005ab719:; BB(0x005ab719);
    /* 005ab719: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005ab71c: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005ab71f: and eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005ab722: je 0x5ab78d */ if (fZ) goto L_005ab78d;
L_005ab724:; BB(0x005ab724);
    /* 005ab724: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ab727: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ab729: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ab72c: mov eax, dword ptr [edx + 0xa8] */ r_eax = R32((u32)(r_edx+0xa8u));
    /* 005ab732: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ab734u); call_ind(t); }
    /* 005ab734: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005ab737: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ab739: jne 0x5ab78d */ if (!fZ) goto L_005ab78d;
L_005ab73b:; BB(0x005ab73b);
    /* 005ab73b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ab73e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ab741: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005ab744: mov dword ptr [edx + 0x48], ecx */ W32((u32)(r_edx+0x48u), r_ecx);
    /* 005ab747: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ab74a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ab74d: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005ab750: mov dword ptr [edx + 0x4c], ecx */ W32((u32)(r_edx+0x4cu), r_ecx);
    /* 005ab753: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ab756: mov byte ptr [edx + 8], 1 */ W8((u32)(r_edx+0x8u), 0x1u);
    /* 005ab75a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ab75d: mov byte ptr [eax + 9], 1 */ W8((u32)(r_eax+0x9u), 0x1u);
    /* 005ab761: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ab764: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 005ab767: and edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 005ab76a: je 0x5ab778 */ if (fZ) goto L_005ab778;
L_005ab76c:; BB(0x005ab76c);
    /* 005ab76c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ab76f: mov dword ptr [eax + 0x58], 8 */ W32((u32)(r_eax+0x58u), 0x8u);
    /* 005ab776: jmp 0x5ab78d */ goto L_005ab78d;
L_005ab778:; BB(0x005ab778);
    /* 005ab778: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ab77b: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 005ab77e: and edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 005ab781: je 0x5ab78d */ if (fZ) goto L_005ab78d;
L_005ab783:; BB(0x005ab783);
    /* 005ab783: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ab786: mov dword ptr [eax + 0x58], 0x10 */ W32((u32)(r_eax+0x58u), 0x10u);
L_005ab78d:; BB(0x005ab78d);
    /* 005ab78d: jmp 0x5ab7e2 */ goto L_005ab7e2;
L_005ab78f:; BB(0x005ab78f);
    /* 005ab78f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ab792: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ab795: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 005ab798: and eax, dword ptr [edx + 0x58] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x58u)); u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005ab79b: je 0x5ab7e2 */ if (fZ) goto L_005ab7e2;
L_005ab79d:; BB(0x005ab79d);
    /* 005ab79d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ab7a0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ab7a2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ab7a5: mov eax, dword ptr [edx + 0xa8] */ r_eax = R32((u32)(r_edx+0xa8u));
    /* 005ab7ab: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ab7adu); call_ind(t); }
    /* 005ab7ad: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005ab7b0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ab7b2: je 0x5ab7e2 */ if (fZ) goto L_005ab7e2;
L_005ab7b4:; BB(0x005ab7b4);
    /* 005ab7b4: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ab7b7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ab7ba: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005ab7bd: mov dword ptr [edx + 0x50], ecx */ W32((u32)(r_edx+0x50u), r_ecx);
    /* 005ab7c0: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ab7c3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ab7c6: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005ab7c9: mov dword ptr [edx + 0x54], ecx */ W32((u32)(r_edx+0x54u), r_ecx);
    /* 005ab7cc: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ab7cf: call 0x5ab4b0 */ r_esp -= 4; W32(r_esp, 0x5ab7d4u); f_005ab4b0();
    /* 005ab7d4: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ab7d7: mov byte ptr [edx + 8], 0 */ W8((u32)(r_edx+0x8u), 0x0u);
    /* 005ab7db: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ab7de: mov byte ptr [eax + 9], 0 */ W8((u32)(r_eax+0x9u), 0x0u);
L_005ab7e2:; BB(0x005ab7e2);
    /* 005ab7e2: mov esp, ebp */ r_esp = r_ebp;
    /* 005ab7e4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ab7e5: ret 4 */ FN_RET(0x005ab660); r_esp += 8; return;
}

