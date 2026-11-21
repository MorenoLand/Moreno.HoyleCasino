#include "protos.h"

void f_00467090(void) /* MakePlayDialog::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00467090);
    /* 00467090: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00467091: mov ebp, esp */ r_ebp = r_esp;
    /* 00467093: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00467094: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00467097: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00467099: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046709b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046709e: call 0x518900 */ r_esp -= 4; W32(r_esp, 0x4670a3u); f_00518900();
    /* 004670a3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004670a6: mov dword ptr [eax], 0x6baffc */ W32((u32)(r_eax), 0x6baffcu);
    /* 004670ac: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004670af: mov dword ptr [ecx + 0x1e0], 0 */ W32((u32)(r_ecx+0x1e0u), 0x0u);
    /* 004670b9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004670bc: mov dword ptr [edx + 0x1e4], 0 */ W32((u32)(r_edx+0x1e4u), 0x0u);
    /* 004670c6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004670c9: mov dword ptr [eax + 0x1e8], 0 */ W32((u32)(r_eax+0x1e8u), 0x0u);
    /* 004670d3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004670d6: mov dword ptr [ecx + 0x1fc], 0 */ W32((u32)(r_ecx+0x1fcu), 0x0u);
    /* 004670e0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004670e3: mov dword ptr [edx + 0x200], 0 */ W32((u32)(r_edx+0x200u), 0x0u);
    /* 004670ed: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004670f0: mov dword ptr [eax + 0x204], 0 */ W32((u32)(r_eax+0x204u), 0x0u);
    /* 004670fa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004670fd: mov dword ptr [ecx + 0x1f8], 0 */ W32((u32)(r_ecx+0x1f8u), 0x0u);
    /* 00467107: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046710a: mov dword ptr [edx + 0x1ec], 0 */ W32((u32)(r_edx+0x1ecu), 0x0u);
    /* 00467114: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00467117: mov dword ptr [eax + 0x1f0], 0 */ W32((u32)(r_eax+0x1f0u), 0x0u);
    /* 00467121: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00467124: mov esp, ebp */ r_esp = r_ebp;
    /* 00467126: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00467127: ret  */ FN_RET(0x00467090); r_esp += 4; return;
}

void f_00467130(void) /* MakePlayDialog::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00467130);
    /* 00467130: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00467131: mov ebp, esp */ r_ebp = r_esp;
    /* 00467133: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00467135: push 0x69f58a */ { u32 v = 0x69f58au; r_esp -= 4; W32(r_esp, v); }
    /* 0046713a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00467140: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00467141: sub esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00467144: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00467149: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0046714b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046714c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0046714f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00467155: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 00467158: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0046715b: mov dword ptr [eax], 0x6baffc */ W32((u32)(r_eax), 0x6baffcu);
    /* 00467161: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00467168: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0046716b: cmp dword ptr [ecx + 0x1e0], 0 */ {  u32 a = R32((u32)(r_ecx+0x1e0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00467172: je 0x4671a6 */ if (fZ) goto L_004671a6;
L_00467174:; BB(0x00467174);
    /* 00467174: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467177: mov eax, dword ptr [edx + 0x1e0] */ r_eax = R32((u32)(r_edx+0x1e0u));
    /* 0046717d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00467180: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00467183: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00467186: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046718a: je 0x46719f */ if (fZ) goto L_0046719f;
L_0046718c:; BB(0x0046718c);
    /* 0046718c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046718e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00467191: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00467193: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00467196: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00467198: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x46719au); call_ind(t); }
    /* 0046719a: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 0046719d: jmp 0x4671a6 */ goto L_004671a6;
L_0046719f:; BB(0x0046719f);
    /* 0046719f: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
L_004671a6:; BB(0x004671a6);
    /* 004671a6: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 004671a9: cmp dword ptr [eax + 0x1e4], 0 */ {  u32 a = R32((u32)(r_eax+0x1e4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004671b0: je 0x4671e4 */ if (fZ) goto L_004671e4;
L_004671b2:; BB(0x004671b2);
    /* 004671b2: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 004671b5: mov edx, dword ptr [ecx + 0x1e4] */ r_edx = R32((u32)(r_ecx+0x1e4u));
    /* 004671bb: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 004671be: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004671c1: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004671c4: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004671c8: je 0x4671dd */ if (fZ) goto L_004671dd;
L_004671ca:; BB(0x004671ca);
    /* 004671ca: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004671cc: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004671cf: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004671d1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004671d4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004671d6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4671d8u); call_ind(t); }
    /* 004671d8: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 004671db: jmp 0x4671e4 */ goto L_004671e4;
L_004671dd:; BB(0x004671dd);
    /* 004671dd: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
L_004671e4:; BB(0x004671e4);
    /* 004671e4: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 004671e7: cmp dword ptr [ecx + 0x1e8], 0 */ {  u32 a = R32((u32)(r_ecx+0x1e8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004671ee: je 0x467222 */ if (fZ) goto L_00467222;
L_004671f0:; BB(0x004671f0);
    /* 004671f0: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 004671f3: mov eax, dword ptr [edx + 0x1e8] */ r_eax = R32((u32)(r_edx+0x1e8u));
    /* 004671f9: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004671fc: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004671ff: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00467202: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00467206: je 0x46721b */ if (fZ) goto L_0046721b;
L_00467208:; BB(0x00467208);
    /* 00467208: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046720a: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0046720d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0046720f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00467212: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00467214: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x467216u); call_ind(t); }
    /* 00467216: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 00467219: jmp 0x467222 */ goto L_00467222;
L_0046721b:; BB(0x0046721b);
    /* 0046721b: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
L_00467222:; BB(0x00467222);
    /* 00467222: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467225: cmp dword ptr [eax + 0x1fc], 0 */ {  u32 a = R32((u32)(r_eax+0x1fcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046722c: je 0x467260 */ if (fZ) goto L_00467260;
L_0046722e:; BB(0x0046722e);
    /* 0046722e: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467231: mov edx, dword ptr [ecx + 0x1fc] */ r_edx = R32((u32)(r_ecx+0x1fcu));
    /* 00467237: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 0046723a: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0046723d: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00467240: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00467244: je 0x467259 */ if (fZ) goto L_00467259;
L_00467246:; BB(0x00467246);
    /* 00467246: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00467248: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0046724b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0046724d: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00467250: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00467252: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x467254u); call_ind(t); }
    /* 00467254: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 00467257: jmp 0x467260 */ goto L_00467260;
L_00467259:; BB(0x00467259);
    /* 00467259: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
L_00467260:; BB(0x00467260);
    /* 00467260: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467263: cmp dword ptr [ecx + 0x200], 0 */ {  u32 a = R32((u32)(r_ecx+0x200u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046726a: je 0x46729e */ if (fZ) goto L_0046729e;
L_0046726c:; BB(0x0046726c);
    /* 0046726c: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0046726f: mov eax, dword ptr [edx + 0x200] */ r_eax = R32((u32)(r_edx+0x200u));
    /* 00467275: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00467278: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0046727b: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 0046727e: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00467282: je 0x467297 */ if (fZ) goto L_00467297;
L_00467284:; BB(0x00467284);
    /* 00467284: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00467286: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00467289: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0046728b: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0046728e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00467290: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x467292u); call_ind(t); }
    /* 00467292: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 00467295: jmp 0x46729e */ goto L_0046729e;
L_00467297:; BB(0x00467297);
    /* 00467297: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
L_0046729e:; BB(0x0046729e);
    /* 0046729e: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 004672a1: cmp dword ptr [eax + 0x204], 0 */ {  u32 a = R32((u32)(r_eax+0x204u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004672a8: je 0x4672dc */ if (fZ) goto L_004672dc;
L_004672aa:; BB(0x004672aa);
    /* 004672aa: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 004672ad: mov edx, dword ptr [ecx + 0x204] */ r_edx = R32((u32)(r_ecx+0x204u));
    /* 004672b3: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 004672b6: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 004672b9: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 004672bc: cmp dword ptr [ebp - 0x38], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004672c0: je 0x4672d5 */ if (fZ) goto L_004672d5;
L_004672c2:; BB(0x004672c2);
    /* 004672c2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004672c4: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004672c7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004672c9: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004672cc: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004672ce: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4672d0u); call_ind(t); }
    /* 004672d0: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 004672d3: jmp 0x4672dc */ goto L_004672dc;
L_004672d5:; BB(0x004672d5);
    /* 004672d5: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
L_004672dc:; BB(0x004672dc);
    /* 004672dc: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 004672df: cmp dword ptr [ecx + 0x1f8], 0 */ {  u32 a = R32((u32)(r_ecx+0x1f8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004672e6: je 0x46731a */ if (fZ) goto L_0046731a;
L_004672e8:; BB(0x004672e8);
    /* 004672e8: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 004672eb: mov eax, dword ptr [edx + 0x1f8] */ r_eax = R32((u32)(r_edx+0x1f8u));
    /* 004672f1: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 004672f4: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 004672f7: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 004672fa: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004672fe: je 0x467313 */ if (fZ) goto L_00467313;
L_00467300:; BB(0x00467300);
    /* 00467300: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00467302: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00467305: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00467307: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0046730a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0046730c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x46730eu); call_ind(t); }
    /* 0046730e: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 00467311: jmp 0x46731a */ goto L_0046731a;
L_00467313:; BB(0x00467313);
    /* 00467313: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
L_0046731a:; BB(0x0046731a);
    /* 0046731a: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0046731d: cmp dword ptr [eax + 0x1ec], 0 */ {  u32 a = R32((u32)(r_eax+0x1ecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00467324: je 0x467358 */ if (fZ) goto L_00467358;
L_00467326:; BB(0x00467326);
    /* 00467326: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467329: mov edx, dword ptr [ecx + 0x1ec] */ r_edx = R32((u32)(r_ecx+0x1ecu));
    /* 0046732f: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 00467332: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00467335: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 00467338: cmp dword ptr [ebp - 0x48], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046733c: je 0x467351 */ if (fZ) goto L_00467351;
L_0046733e:; BB(0x0046733e);
    /* 0046733e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00467340: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00467343: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00467345: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00467348: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0046734a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46734cu); call_ind(t); }
    /* 0046734c: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 0046734f: jmp 0x467358 */ goto L_00467358;
L_00467351:; BB(0x00467351);
    /* 00467351: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
L_00467358:; BB(0x00467358);
    /* 00467358: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0046735b: cmp dword ptr [ecx + 0x1f0], 0 */ {  u32 a = R32((u32)(r_ecx+0x1f0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00467362: je 0x467396 */ if (fZ) goto L_00467396;
L_00467364:; BB(0x00467364);
    /* 00467364: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467367: mov eax, dword ptr [edx + 0x1f0] */ r_eax = R32((u32)(r_edx+0x1f0u));
    /* 0046736d: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00467370: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00467373: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 00467376: cmp dword ptr [ebp - 0x50], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046737a: je 0x46738f */ if (fZ) goto L_0046738f;
L_0046737c:; BB(0x0046737c);
    /* 0046737c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046737e: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00467381: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00467383: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00467386: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00467388: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x46738au); call_ind(t); }
    /* 0046738a: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 0046738d: jmp 0x467396 */ goto L_00467396;
L_0046738f:; BB(0x0046738f);
    /* 0046738f: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
L_00467396:; BB(0x00467396);
    /* 00467396: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0046739d: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 004673a0: call 0x518980 */ r_esp -= 4; W32(r_esp, 0x4673a5u); f_00518980();
    /* 004673a5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004673a8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004673af: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004673b0: mov esp, ebp */ r_esp = r_ebp;
    /* 004673b2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004673b3: ret  */ FN_RET(0x00467130); r_esp += 4; return;
}

void f_004673c0(void) /* MakePlayDialog::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004673c0);
    /* 004673c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004673c1: mov ebp, esp */ r_ebp = r_esp;
    /* 004673c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004673c5: push 0x69f608 */ { u32 v = 0x69f608u; r_esp -= 4; W32(r_esp, v); }
    /* 004673ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004673d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004673d1: sub esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004673d4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 004673d9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004673db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004673dc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 004673df: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 004673e5: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 004673e8: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 004673ed: movzx ecx, byte ptr [eax + 0x4f34] */ r_ecx = (u32)R8((u32)(r_eax+0x4f34u));
    /* 004673f4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004673f6: je 0x467409 */ if (fZ) goto L_00467409;
L_004673f8:; BB(0x004673f8);
    /* 004673f8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004673fa: push 0xfdf2 */ { u32 v = 0xfdf2u; r_esp -= 4; W32(r_esp, v); }
    /* 004673ff: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467402: call 0x5f83d0 */ r_esp -= 4; W32(r_esp, 0x467407u); f_005f83d0();
    /* 00467407: jmp 0x467418 */ goto L_00467418;
L_00467409:; BB(0x00467409);
    /* 00467409: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046740b: push 0x186ac */ { u32 v = 0x186acu; r_esp -= 4; W32(r_esp, v); }
    /* 00467410: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467413: call 0x5f83d0 */ r_esp -= 4; W32(r_esp, 0x467418u); f_005f83d0();
L_00467418:; BB(0x00467418);
    /* 00467418: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0046741a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00467420: call 0x47e1d0 */ r_esp -= 4; W32(r_esp, 0x467425u); f_0047e1d0();
    /* 00467425: sub eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00467428: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0046742a: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0046742c: and eax, 0xffffffce */ {  u32 a = r_eax; u32 b = 0xffffffceu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0046742f: add eax, 0x32 */ {  u32 a = r_eax; u32 b = 0x32u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00467432: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00467433: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467436: call 0x5f7340 */ r_esp -= 4; W32(r_esp, 0x46743bu); f_005f7340();
    /* 0046743b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046743d: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467440: call 0x518ac0 */ r_esp -= 4; W32(r_esp, 0x467445u); f_00518ac0();
    /* 00467445: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00467447: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00467449: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046744b: push 0xa1 */ { u32 v = 0xa1u; r_esp -= 4; W32(r_esp, v); }
    /* 00467450: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 00467452: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 00467454: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00467456: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 00467458: push 0x57 */ { u32 v = 0x57u; r_esp -= 4; W32(r_esp, v); }
    /* 0046745a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046745c: push 0x3d */ { u32 v = 0x3du; r_esp -= 4; W32(r_esp, v); }
    /* 0046745e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00467460: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00467462: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467465: call 0x5fa880 */ r_esp -= 4; W32(r_esp, 0x46746au); f_005fa880();
    /* 0046746a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046746c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046746e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00467470: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00467475: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0046747a: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0046747f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00467481: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 00467483: push 0x57 */ { u32 v = 0x57u; r_esp -= 4; W32(r_esp, v); }
    /* 00467485: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00467487: push 0x3d */ { u32 v = 0x3du; r_esp -= 4; W32(r_esp, v); }
    /* 00467489: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0046748b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046748d: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467490: call 0x5fa880 */ r_esp -= 4; W32(r_esp, 0x467495u); f_005fa880();
    /* 00467495: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00467497: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00467499: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046749b: push 0xa1 */ { u32 v = 0xa1u; r_esp -= 4; W32(r_esp, v); }
    /* 004674a0: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 004674a2: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 004674a4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004674a6: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 004674a8: push 0x57 */ { u32 v = 0x57u; r_esp -= 4; W32(r_esp, v); }
    /* 004674aa: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 004674ac: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004674ae: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004674b0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004674b2: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 004674b5: call 0x5fa880 */ r_esp -= 4; W32(r_esp, 0x4674bau); f_005fa880();
    /* 004674ba: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004674bc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004674be: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004674c0: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 004674c5: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 004674ca: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 004674cf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004674d1: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 004674d3: push 0x93 */ { u32 v = 0x93u; r_esp -= 4; W32(r_esp, v); }
    /* 004674d8: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 004674da: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004674dc: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004674de: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004674e0: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 004674e3: call 0x5fa880 */ r_esp -= 4; W32(r_esp, 0x4674e8u); f_005fa880();
    /* 004674e8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004674ea: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004674ec: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004674ee: push 0xa1 */ { u32 v = 0xa1u; r_esp -= 4; W32(r_esp, v); }
    /* 004674f3: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 004674f5: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 004674f7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004674f9: push 0x54 */ { u32 v = 0x54u; r_esp -= 4; W32(r_esp, v); }
    /* 004674fb: push 0x57 */ { u32 v = 0x57u; r_esp -= 4; W32(r_esp, v); }
    /* 004674fd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004674ff: push 0x3d */ { u32 v = 0x3du; r_esp -= 4; W32(r_esp, v); }
    /* 00467501: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00467503: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00467505: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467508: call 0x5fa880 */ r_esp -= 4; W32(r_esp, 0x46750du); f_005fa880();
    /* 0046750d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046750f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00467511: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00467513: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00467518: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0046751d: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00467522: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00467524: push 0x6a */ { u32 v = 0x6au; r_esp -= 4; W32(r_esp, v); }
    /* 00467526: push 0x57 */ { u32 v = 0x57u; r_esp -= 4; W32(r_esp, v); }
    /* 00467528: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046752a: push 0x3d */ { u32 v = 0x3du; r_esp -= 4; W32(r_esp, v); }
    /* 0046752c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0046752e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00467530: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467533: call 0x5fa880 */ r_esp -= 4; W32(r_esp, 0x467538u); f_005fa880();
    /* 00467538: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046753a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046753c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046753e: push 0xa1 */ { u32 v = 0xa1u; r_esp -= 4; W32(r_esp, v); }
    /* 00467543: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 00467545: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 00467547: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00467549: push 0x54 */ { u32 v = 0x54u; r_esp -= 4; W32(r_esp, v); }
    /* 0046754b: push 0x57 */ { u32 v = 0x57u; r_esp -= 4; W32(r_esp, v); }
    /* 0046754d: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 0046754f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00467551: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00467553: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00467555: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467558: call 0x5fa880 */ r_esp -= 4; W32(r_esp, 0x46755du); f_005fa880();
    /* 0046755d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046755f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00467561: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00467563: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00467568: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0046756d: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00467572: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00467574: push 0x54 */ { u32 v = 0x54u; r_esp -= 4; W32(r_esp, v); }
    /* 00467576: push 0x93 */ { u32 v = 0x93u; r_esp -= 4; W32(r_esp, v); }
    /* 0046757b: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 0046757d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046757f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00467581: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00467583: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467586: call 0x5fa880 */ r_esp -= 4; W32(r_esp, 0x46758bu); f_005fa880();
    /* 0046758b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0046758d: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0046758f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00467591: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00467593: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00467595: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00467597: push 0x93 */ { u32 v = 0x93u; r_esp -= 4; W32(r_esp, v); }
    /* 0046759c: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0046759e: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 004675a3: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004675a5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004675a7: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 004675aa: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x4675afu); f_005fa5b0();
    /* 004675af: push 0x1e0 */ { u32 v = 0x1e0u; r_esp -= 4; W32(r_esp, v); }
    /* 004675b4: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4675b9u); f_00686d82();
    /* 004675b9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004675bc: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004675bf: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004675c6: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004675ca: je 0x4675dd */ if (fZ) goto L_004675dd;
L_004675cc:; BB(0x004675cc);
    /* 004675cc: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 004675cf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004675d0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004675d3: call 0x469d00 */ r_esp -= 4; W32(r_esp, 0x4675d8u); f_00469d00();
    /* 004675d8: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 004675db: jmp 0x4675e4 */ goto L_004675e4;
L_004675dd:; BB(0x004675dd);
    /* 004675dd: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
L_004675e4:; BB(0x004675e4);
    /* 004675e4: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 004675e7: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004675ea: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004675f1: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 004675f4: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004675f7: mov dword ptr [ecx + 0x1e0], edx */ W32((u32)(r_ecx+0x1e0u), r_edx);
    /* 004675fd: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467600: mov ecx, dword ptr [eax + 0x1e0] */ r_ecx = R32((u32)(r_eax+0x1e0u));
    /* 00467606: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467609: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 0046760c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0046760e: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00467610: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 00467612: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00467614: push 0x30d4de */ { u32 v = 0x30d4deu; r_esp -= 4; W32(r_esp, v); }
    /* 00467619: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0046761c: mov ecx, dword ptr [eax + 0x1e0] */ r_ecx = R32((u32)(r_eax+0x1e0u));
    /* 00467622: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x467627u); f_005eae80();
    /* 00467627: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00467629: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046762b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0046762d: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 0046762f: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 00467631: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 00467633: push 0x6bb06c */ { u32 v = 0x6bb06cu; r_esp -= 4; W32(r_esp, v); }
    /* 00467638: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x46763du); f_00630f40();
    /* 0046763d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00467640: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00467641: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467644: mov edx, dword ptr [ecx + 0x1e0] */ r_edx = R32((u32)(r_ecx+0x1e0u));
    /* 0046764a: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0046764d: mov ecx, dword ptr [eax + 0x1e0] */ r_ecx = R32((u32)(r_eax+0x1e0u));
    /* 00467653: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00467655: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 0046765b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46765du); call_ind(t); }
    /* 0046765d: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467660: mov edx, dword ptr [ecx + 0x1e0] */ r_edx = R32((u32)(r_ecx+0x1e0u));
    /* 00467666: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467669: mov ecx, dword ptr [eax + 0x1e0] */ r_ecx = R32((u32)(r_eax+0x1e0u));
    /* 0046766f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00467671: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00467674: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x467676u); call_ind(t); }
    /* 00467676: push 0x63 */ { u32 v = 0x63u; r_esp -= 4; W32(r_esp, v); }
    /* 00467678: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0046767b: mov ecx, dword ptr [ecx + 0x1e0] */ r_ecx = R32((u32)(r_ecx+0x1e0u));
    /* 00467681: call 0x6026f0 */ r_esp -= 4; W32(r_esp, 0x467686u); f_006026f0();
    /* 00467686: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467689: mov eax, dword ptr [edx + 0x1e0] */ r_eax = R32((u32)(r_edx+0x1e0u));
    /* 0046768f: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467692: mov ecx, dword ptr [ecx + 0x1e0] */ r_ecx = R32((u32)(r_ecx+0x1e0u));
    /* 00467698: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0046769a: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 004676a0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4676a2u); call_ind(t); }
    /* 004676a2: push 0x1e0 */ { u32 v = 0x1e0u; r_esp -= 4; W32(r_esp, v); }
    /* 004676a7: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4676acu); f_00686d82();
    /* 004676ac: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004676af: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004676b2: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004676b9: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004676bd: je 0x4676d0 */ if (fZ) goto L_004676d0;
L_004676bf:; BB(0x004676bf);
    /* 004676bf: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 004676c2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004676c3: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004676c6: call 0x469d90 */ r_esp -= 4; W32(r_esp, 0x4676cbu); f_00469d90();
    /* 004676cb: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 004676ce: jmp 0x4676d7 */ goto L_004676d7;
L_004676d0:; BB(0x004676d0);
    /* 004676d0: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
L_004676d7:; BB(0x004676d7);
    /* 004676d7: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 004676da: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 004676dd: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004676e4: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 004676e7: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004676ea: mov dword ptr [eax + 0x1e4], ecx */ W32((u32)(r_eax+0x1e4u), r_ecx);
    /* 004676f0: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 004676f3: mov eax, dword ptr [edx + 0x1e4] */ r_eax = R32((u32)(r_edx+0x1e4u));
    /* 004676f9: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 004676fc: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 004676ff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00467701: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00467703: push 0x54 */ { u32 v = 0x54u; r_esp -= 4; W32(r_esp, v); }
    /* 00467705: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00467707: push 0x30d4de */ { u32 v = 0x30d4deu; r_esp -= 4; W32(r_esp, v); }
    /* 0046770c: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0046770f: mov ecx, dword ptr [edx + 0x1e4] */ r_ecx = R32((u32)(r_edx+0x1e4u));
    /* 00467715: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x46771au); f_005eae80();
    /* 0046771a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046771c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046771e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00467720: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 00467722: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 00467724: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 00467726: push 0x6bb05c */ { u32 v = 0x6bb05cu; r_esp -= 4; W32(r_esp, v); }
    /* 0046772b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x467730u); f_00630f40();
    /* 00467730: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00467733: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00467734: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467737: mov ecx, dword ptr [eax + 0x1e4] */ r_ecx = R32((u32)(r_eax+0x1e4u));
    /* 0046773d: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467740: mov eax, dword ptr [edx + 0x1e4] */ r_eax = R32((u32)(r_edx+0x1e4u));
    /* 00467746: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00467748: mov ecx, eax */ r_ecx = r_eax;
    /* 0046774a: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 00467750: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x467752u); call_ind(t); }
    /* 00467752: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467755: mov edx, dword ptr [ecx + 0x1e4] */ r_edx = R32((u32)(r_ecx+0x1e4u));
    /* 0046775b: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0046775e: mov ecx, dword ptr [eax + 0x1e4] */ r_ecx = R32((u32)(r_eax+0x1e4u));
    /* 00467764: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00467766: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00467769: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46776bu); call_ind(t); }
    /* 0046776b: push 0x72 */ { u32 v = 0x72u; r_esp -= 4; W32(r_esp, v); }
    /* 0046776d: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467770: mov ecx, dword ptr [ecx + 0x1e4] */ r_ecx = R32((u32)(r_ecx+0x1e4u));
    /* 00467776: call 0x6026f0 */ r_esp -= 4; W32(r_esp, 0x46777bu); f_006026f0();
    /* 0046777b: push 0x6f */ { u32 v = 0x6fu; r_esp -= 4; W32(r_esp, v); }
    /* 0046777d: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467780: mov ecx, dword ptr [edx + 0x1e4] */ r_ecx = R32((u32)(r_edx+0x1e4u));
    /* 00467786: call 0x602740 */ r_esp -= 4; W32(r_esp, 0x46778bu); f_00602740();
    /* 0046778b: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0046778e: mov ecx, dword ptr [eax + 0x1e4] */ r_ecx = R32((u32)(r_eax+0x1e4u));
    /* 00467794: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467797: mov eax, dword ptr [edx + 0x1e4] */ r_eax = R32((u32)(r_edx+0x1e4u));
    /* 0046779d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0046779f: mov ecx, eax */ r_ecx = r_eax;
    /* 004677a1: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 004677a7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4677a9u); call_ind(t); }
    /* 004677a9: push 0x1e0 */ { u32 v = 0x1e0u; r_esp -= 4; W32(r_esp, v); }
    /* 004677ae: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4677b3u); f_00686d82();
    /* 004677b3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004677b6: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004677b9: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 004677c0: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004677c4: je 0x4677d7 */ if (fZ) goto L_004677d7;
L_004677c6:; BB(0x004677c6);
    /* 004677c6: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 004677c9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004677ca: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004677cd: call 0x469e90 */ r_esp -= 4; W32(r_esp, 0x4677d2u); f_00469e90();
    /* 004677d2: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 004677d5: jmp 0x4677de */ goto L_004677de;
L_004677d7:; BB(0x004677d7);
    /* 004677d7: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
L_004677de:; BB(0x004677de);
    /* 004677de: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004677e1: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 004677e4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004677eb: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 004677ee: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004677f1: mov dword ptr [eax + 0x1e8], ecx */ W32((u32)(r_eax+0x1e8u), r_ecx);
    /* 004677f7: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 004677fa: mov eax, dword ptr [edx + 0x1e8] */ r_eax = R32((u32)(r_edx+0x1e8u));
    /* 00467800: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467803: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 00467806: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00467808: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0046780a: push 0x75 */ { u32 v = 0x75u; r_esp -= 4; W32(r_esp, v); }
    /* 0046780c: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0046780e: push 0x30d4de */ { u32 v = 0x30d4deu; r_esp -= 4; W32(r_esp, v); }
    /* 00467813: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467816: mov ecx, dword ptr [edx + 0x1e8] */ r_ecx = R32((u32)(r_edx+0x1e8u));
    /* 0046781c: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x467821u); f_005eae80();
    /* 00467821: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00467823: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00467825: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00467827: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 00467829: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 0046782b: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 0046782d: push 0x6bb04c */ { u32 v = 0x6bb04cu; r_esp -= 4; W32(r_esp, v); }
    /* 00467832: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x467837u); f_00630f40();
    /* 00467837: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046783a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046783b: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0046783e: mov ecx, dword ptr [eax + 0x1e8] */ r_ecx = R32((u32)(r_eax+0x1e8u));
    /* 00467844: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467847: mov eax, dword ptr [edx + 0x1e8] */ r_eax = R32((u32)(r_edx+0x1e8u));
    /* 0046784d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0046784f: mov ecx, eax */ r_ecx = r_eax;
    /* 00467851: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 00467857: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x467859u); call_ind(t); }
    /* 00467859: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0046785c: mov edx, dword ptr [ecx + 0x1e8] */ r_edx = R32((u32)(r_ecx+0x1e8u));
    /* 00467862: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467865: mov ecx, dword ptr [eax + 0x1e8] */ r_ecx = R32((u32)(r_eax+0x1e8u));
    /* 0046786b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0046786d: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00467870: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x467872u); call_ind(t); }
    /* 00467872: push 0x66 */ { u32 v = 0x66u; r_esp -= 4; W32(r_esp, v); }
    /* 00467874: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467877: mov ecx, dword ptr [ecx + 0x1e8] */ r_ecx = R32((u32)(r_ecx+0x1e8u));
    /* 0046787d: call 0x6026f0 */ r_esp -= 4; W32(r_esp, 0x467882u); f_006026f0();
    /* 00467882: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467885: mov eax, dword ptr [edx + 0x1e8] */ r_eax = R32((u32)(r_edx+0x1e8u));
    /* 0046788b: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0046788e: mov ecx, dword ptr [ecx + 0x1e8] */ r_ecx = R32((u32)(r_ecx+0x1e8u));
    /* 00467894: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00467896: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 0046789c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46789eu); call_ind(t); }
    /* 0046789e: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 004678a3: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4678a8u); f_00686d82();
    /* 004678a8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004678ab: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 004678ae: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 004678b5: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004678b9: je 0x4678c8 */ if (fZ) goto L_004678c8;
L_004678bb:; BB(0x004678bb);
    /* 004678bb: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004678be: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x4678c3u); f_005ec5a0();
    /* 004678c3: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 004678c6: jmp 0x4678cf */ goto L_004678cf;
L_004678c8:; BB(0x004678c8);
    /* 004678c8: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
L_004678cf:; BB(0x004678cf);
    /* 004678cf: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 004678d2: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 004678d5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004678dc: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 004678df: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004678e2: mov dword ptr [edx + 0x1fc], eax */ W32((u32)(r_edx+0x1fcu), r_eax);
    /* 004678e8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004678e9: mov ecx, esp */ r_ecx = r_esp;
    /* 004678eb: mov dx, word ptr [0x75ee1c] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 004678f2: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 004678f5: mov al, byte ptr [0x75ee1e] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 004678fa: mov byte ptr [ecx + 2], al */ W8((u32)(r_ecx+0x2u), (u8)r_eax);
    /* 004678fd: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004678ff: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00467901: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467904: mov ecx, dword ptr [ecx + 0x1fc] */ r_ecx = R32((u32)(r_ecx+0x1fcu));
    /* 0046790a: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x46790fu); f_005ecd00();
    /* 0046790f: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00467911: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467914: mov ecx, dword ptr [edx + 0x1fc] */ r_ecx = R32((u32)(r_edx+0x1fcu));
    /* 0046791a: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x46791fu); f_005ecc60();
    /* 0046791f: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 00467921: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467924: mov ecx, dword ptr [eax + 0x1fc] */ r_ecx = R32((u32)(r_eax+0x1fcu));
    /* 0046792a: call 0x5eccb0 */ r_esp -= 4; W32(r_esp, 0x46792fu); f_005eccb0();
    /* 0046792f: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 00467931: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467934: mov ecx, dword ptr [ecx + 0x1fc] */ r_ecx = R32((u32)(r_ecx+0x1fcu));
    /* 0046793a: call 0x5ef310 */ r_esp -= 4; W32(r_esp, 0x46793fu); f_005ef310();
    /* 0046793f: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 00467941: push 0x58 */ { u32 v = 0x58u; r_esp -= 4; W32(r_esp, v); }
    /* 00467943: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467946: mov eax, dword ptr [edx + 0x1fc] */ r_eax = R32((u32)(r_edx+0x1fcu));
    /* 0046794c: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0046794f: mov ecx, dword ptr [ecx + 0x1fc] */ r_ecx = R32((u32)(r_ecx+0x1fcu));
    /* 00467955: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00467957: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0046795a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46795cu); call_ind(t); }
    /* 0046795c: push 0x6bb048 */ { u32 v = 0x6bb048u; r_esp -= 4; W32(r_esp, v); }
    /* 00467961: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467964: mov edx, dword ptr [ecx + 0x1fc] */ r_edx = R32((u32)(r_ecx+0x1fcu));
    /* 0046796a: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0046796d: mov ecx, dword ptr [eax + 0x1fc] */ r_ecx = R32((u32)(r_eax+0x1fcu));
    /* 00467973: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00467975: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0046797b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46797du); call_ind(t); }
    /* 0046797d: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 00467982: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x467987u); f_00686d82();
    /* 00467987: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046798a: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0046798d: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 00467994: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00467998: je 0x4679a7 */ if (fZ) goto L_004679a7;
L_0046799a:; BB(0x0046799a);
    /* 0046799a: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0046799d: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x4679a2u); f_005ec5a0();
    /* 004679a2: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 004679a5: jmp 0x4679ae */ goto L_004679ae;
L_004679a7:; BB(0x004679a7);
    /* 004679a7: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
L_004679ae:; BB(0x004679ae);
    /* 004679ae: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 004679b1: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 004679b4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004679bb: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 004679be: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004679c1: mov dword ptr [edx + 0x200], eax */ W32((u32)(r_edx+0x200u), r_eax);
    /* 004679c7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004679c8: mov ecx, esp */ r_ecx = r_esp;
    /* 004679ca: mov dx, word ptr [0x75ee1c] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 004679d1: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 004679d4: mov al, byte ptr [0x75ee1e] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 004679d9: mov byte ptr [ecx + 2], al */ W8((u32)(r_ecx+0x2u), (u8)r_eax);
    /* 004679dc: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004679de: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 004679e0: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 004679e3: mov ecx, dword ptr [ecx + 0x200] */ r_ecx = R32((u32)(r_ecx+0x200u));
    /* 004679e9: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x4679eeu); f_005ecd00();
    /* 004679ee: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 004679f0: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 004679f3: mov ecx, dword ptr [edx + 0x200] */ r_ecx = R32((u32)(r_edx+0x200u));
    /* 004679f9: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x4679feu); f_005ecc60();
    /* 004679fe: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 00467a00: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467a03: mov ecx, dword ptr [eax + 0x200] */ r_ecx = R32((u32)(r_eax+0x200u));
    /* 00467a09: call 0x5eccb0 */ r_esp -= 4; W32(r_esp, 0x467a0eu); f_005eccb0();
    /* 00467a0e: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00467a10: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467a13: mov ecx, dword ptr [ecx + 0x200] */ r_ecx = R32((u32)(r_ecx+0x200u));
    /* 00467a19: call 0x5ef310 */ r_esp -= 4; W32(r_esp, 0x467a1eu); f_005ef310();
    /* 00467a1e: push 0x29 */ { u32 v = 0x29u; r_esp -= 4; W32(r_esp, v); }
    /* 00467a20: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00467a22: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467a25: mov eax, dword ptr [edx + 0x200] */ r_eax = R32((u32)(r_edx+0x200u));
    /* 00467a2b: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467a2e: mov ecx, dword ptr [ecx + 0x200] */ r_ecx = R32((u32)(r_ecx+0x200u));
    /* 00467a34: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00467a36: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00467a39: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x467a3bu); call_ind(t); }
    /* 00467a3b: push 0x6bb048 */ { u32 v = 0x6bb048u; r_esp -= 4; W32(r_esp, v); }
    /* 00467a40: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467a43: mov edx, dword ptr [ecx + 0x200] */ r_edx = R32((u32)(r_ecx+0x200u));
    /* 00467a49: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467a4c: mov ecx, dword ptr [eax + 0x200] */ r_ecx = R32((u32)(r_eax+0x200u));
    /* 00467a52: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00467a54: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00467a5a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x467a5cu); call_ind(t); }
    /* 00467a5c: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 00467a61: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x467a66u); f_00686d82();
    /* 00467a66: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00467a69: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00467a6c: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 00467a73: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00467a77: je 0x467a86 */ if (fZ) goto L_00467a86;
L_00467a79:; BB(0x00467a79);
    /* 00467a79: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00467a7c: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x467a81u); f_005ec5a0();
    /* 00467a81: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 00467a84: jmp 0x467a8d */ goto L_00467a8d;
L_00467a86:; BB(0x00467a86);
    /* 00467a86: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
L_00467a8d:; BB(0x00467a8d);
    /* 00467a8d: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 00467a90: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 00467a93: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00467a9a: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467a9d: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00467aa0: mov dword ptr [edx + 0x204], eax */ W32((u32)(r_edx+0x204u), r_eax);
    /* 00467aa6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00467aa7: mov ecx, esp */ r_ecx = r_esp;
    /* 00467aa9: mov dx, word ptr [0x75ee1c] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 00467ab0: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 00467ab3: mov al, byte ptr [0x75ee1e] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 00467ab8: mov byte ptr [ecx + 2], al */ W8((u32)(r_ecx+0x2u), (u8)r_eax);
    /* 00467abb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00467abd: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00467abf: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467ac2: mov ecx, dword ptr [ecx + 0x204] */ r_ecx = R32((u32)(r_ecx+0x204u));
    /* 00467ac8: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x467acdu); f_005ecd00();
    /* 00467acd: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00467acf: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467ad2: mov ecx, dword ptr [edx + 0x204] */ r_ecx = R32((u32)(r_edx+0x204u));
    /* 00467ad8: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x467addu); f_005ecc60();
    /* 00467add: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 00467adf: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467ae2: mov ecx, dword ptr [eax + 0x204] */ r_ecx = R32((u32)(r_eax+0x204u));
    /* 00467ae8: call 0x5eccb0 */ r_esp -= 4; W32(r_esp, 0x467aedu); f_005eccb0();
    /* 00467aed: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 00467aef: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467af2: mov ecx, dword ptr [ecx + 0x204] */ r_ecx = R32((u32)(r_ecx+0x204u));
    /* 00467af8: call 0x5ef310 */ r_esp -= 4; W32(r_esp, 0x467afdu); f_005ef310();
    /* 00467afd: push 0x55 */ { u32 v = 0x55u; r_esp -= 4; W32(r_esp, v); }
    /* 00467aff: push 0x58 */ { u32 v = 0x58u; r_esp -= 4; W32(r_esp, v); }
    /* 00467b01: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467b04: mov eax, dword ptr [edx + 0x204] */ r_eax = R32((u32)(r_edx+0x204u));
    /* 00467b0a: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467b0d: mov ecx, dword ptr [ecx + 0x204] */ r_ecx = R32((u32)(r_ecx+0x204u));
    /* 00467b13: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00467b15: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00467b18: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x467b1au); call_ind(t); }
    /* 00467b1a: push 0x6bb048 */ { u32 v = 0x6bb048u; r_esp -= 4; W32(r_esp, v); }
    /* 00467b1f: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467b22: mov edx, dword ptr [ecx + 0x204] */ r_edx = R32((u32)(r_ecx+0x204u));
    /* 00467b28: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467b2b: mov ecx, dword ptr [eax + 0x204] */ r_ecx = R32((u32)(r_eax+0x204u));
    /* 00467b31: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00467b33: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00467b39: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x467b3bu); call_ind(t); }
    /* 00467b3b: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 00467b40: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x467b45u); f_00686d82();
    /* 00467b45: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00467b48: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00467b4b: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 00467b52: cmp dword ptr [ebp - 0x44], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00467b56: je 0x467b65 */ if (fZ) goto L_00467b65;
L_00467b58:; BB(0x00467b58);
    /* 00467b58: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00467b5b: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x467b60u); f_005eaaf0();
    /* 00467b60: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 00467b63: jmp 0x467b6c */ goto L_00467b6c;
L_00467b65:; BB(0x00467b65);
    /* 00467b65: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
L_00467b6c:; BB(0x00467b6c);
    /* 00467b6c: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00467b6f: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 00467b72: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00467b79: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467b7c: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00467b7f: mov dword ptr [edx + 0x1f8], eax */ W32((u32)(r_edx+0x1f8u), r_eax);
    /* 00467b85: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467b88: mov edx, dword ptr [ecx + 0x1f8] */ r_edx = R32((u32)(r_ecx+0x1f8u));
    /* 00467b8e: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467b91: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00467b94: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467b97: mov edx, dword ptr [ecx + 0x1f8] */ r_edx = R32((u32)(r_ecx+0x1f8u));
    /* 00467b9d: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467ba0: mov ecx, dword ptr [eax + 0x1f8] */ r_ecx = R32((u32)(r_eax+0x1f8u));
    /* 00467ba6: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00467ba8: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00467bab: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x467badu); call_ind(t); }
    /* 00467bad: push 0x1398 */ { u32 v = 0x1398u; r_esp -= 4; W32(r_esp, v); }
    /* 00467bb2: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467bb5: mov ecx, dword ptr [ecx + 0x1f8] */ r_ecx = R32((u32)(r_ecx+0x1f8u));
    /* 00467bbb: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x467bc0u); f_005eaf00();
    /* 00467bc0: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467bc3: mov eax, dword ptr [edx + 0x1f8] */ r_eax = R32((u32)(r_edx+0x1f8u));
    /* 00467bc9: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467bcc: mov ecx, dword ptr [ecx + 0x1f8] */ r_ecx = R32((u32)(r_ecx+0x1f8u));
    /* 00467bd2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00467bd4: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00467bd7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x467bd9u); call_ind(t); }
    /* 00467bd9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00467bdb: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467bde: mov edx, dword ptr [ecx + 0x1fc] */ r_edx = R32((u32)(r_ecx+0x1fcu));
    /* 00467be4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00467be5: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467be8: call 0x519960 */ r_esp -= 4; W32(r_esp, 0x467bedu); f_00519960();
    /* 00467bed: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00467bef: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467bf2: mov ecx, dword ptr [eax + 0x1fc] */ r_ecx = R32((u32)(r_eax+0x1fcu));
    /* 00467bf8: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467bfb: mov eax, dword ptr [edx + 0x1fc] */ r_eax = R32((u32)(r_edx+0x1fcu));
    /* 00467c01: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00467c03: mov ecx, eax */ r_ecx = r_eax;
    /* 00467c05: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00467c08: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x467c0au); call_ind(t); }
    /* 00467c0a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00467c0c: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467c0f: mov edx, dword ptr [ecx + 0x204] */ r_edx = R32((u32)(r_ecx+0x204u));
    /* 00467c15: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00467c16: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467c19: call 0x519960 */ r_esp -= 4; W32(r_esp, 0x467c1eu); f_00519960();
    /* 00467c1e: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00467c20: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467c23: mov ecx, dword ptr [eax + 0x204] */ r_ecx = R32((u32)(r_eax+0x204u));
    /* 00467c29: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467c2c: mov eax, dword ptr [edx + 0x204] */ r_eax = R32((u32)(r_edx+0x204u));
    /* 00467c32: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00467c34: mov ecx, eax */ r_ecx = r_eax;
    /* 00467c36: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00467c39: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x467c3bu); call_ind(t); }
    /* 00467c3b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00467c3d: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467c40: mov edx, dword ptr [ecx + 0x1e0] */ r_edx = R32((u32)(r_ecx+0x1e0u));
    /* 00467c46: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00467c47: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467c4a: call 0x5199c0 */ r_esp -= 4; W32(r_esp, 0x467c4fu); f_005199c0();
    /* 00467c4f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00467c51: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467c54: mov ecx, dword ptr [eax + 0x1e4] */ r_ecx = R32((u32)(r_eax+0x1e4u));
    /* 00467c5a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00467c5b: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467c5e: call 0x5199c0 */ r_esp -= 4; W32(r_esp, 0x467c63u); f_005199c0();
    /* 00467c63: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00467c65: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467c68: mov eax, dword ptr [edx + 0x1e8] */ r_eax = R32((u32)(r_edx+0x1e8u));
    /* 00467c6e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00467c6f: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467c72: call 0x5199c0 */ r_esp -= 4; W32(r_esp, 0x467c77u); f_005199c0();
    /* 00467c77: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00467c79: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467c7c: mov edx, dword ptr [ecx + 0x1f8] */ r_edx = R32((u32)(r_ecx+0x1f8u));
    /* 00467c82: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00467c83: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467c86: call 0x519900 */ r_esp -= 4; W32(r_esp, 0x467c8bu); f_00519900();
    /* 00467c8b: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 00467c90: movzx ecx, byte ptr [eax + 0x4f34] */ r_ecx = (u32)R8((u32)(r_eax+0x4f34u));
    /* 00467c97: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00467c99: je 0x467e21 */ if (fZ) goto L_00467e21;
L_00467c9f:; BB(0x00467c9f);
    /* 00467c9f: push 0x1e0 */ { u32 v = 0x1e0u; r_esp -= 4; W32(r_esp, v); }
    /* 00467ca4: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x467ca9u); f_00686d82();
    /* 00467ca9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00467cac: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00467caf: mov dword ptr [ebp - 4], 7 */ W32((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 00467cb6: cmp dword ptr [ebp - 0x4c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00467cba: je 0x467ccd */ if (fZ) goto L_00467ccd;
L_00467cbc:; BB(0x00467cbc);
    /* 00467cbc: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467cbf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00467cc0: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00467cc3: call 0x469f20 */ r_esp -= 4; W32(r_esp, 0x467cc8u); f_00469f20();
    /* 00467cc8: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 00467ccb: jmp 0x467cd4 */ goto L_00467cd4;
L_00467ccd:; BB(0x00467ccd);
    /* 00467ccd: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
L_00467cd4:; BB(0x00467cd4);
    /* 00467cd4: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 00467cd7: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 00467cda: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00467ce1: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467ce4: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00467ce7: mov dword ptr [ecx + 0x1ec], edx */ W32((u32)(r_ecx+0x1ecu), r_edx);
    /* 00467ced: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467cf0: mov ecx, dword ptr [eax + 0x1ec] */ r_ecx = R32((u32)(r_eax+0x1ecu));
    /* 00467cf6: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467cf9: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 00467cfc: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00467cfe: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00467d00: push 0x55 */ { u32 v = 0x55u; r_esp -= 4; W32(r_esp, v); }
    /* 00467d02: push 0x95 */ { u32 v = 0x95u; r_esp -= 4; W32(r_esp, v); }
    /* 00467d07: push 0xfdf1 */ { u32 v = 0xfdf1u; r_esp -= 4; W32(r_esp, v); }
    /* 00467d0c: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467d0f: mov ecx, dword ptr [eax + 0x1ec] */ r_ecx = R32((u32)(r_eax+0x1ecu));
    /* 00467d15: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x467d1au); f_005eae80();
    /* 00467d1a: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467d1d: mov edx, dword ptr [ecx + 0x1ec] */ r_edx = R32((u32)(r_ecx+0x1ecu));
    /* 00467d23: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467d26: mov ecx, dword ptr [eax + 0x1ec] */ r_ecx = R32((u32)(r_eax+0x1ecu));
    /* 00467d2c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00467d2e: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00467d31: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x467d33u); call_ind(t); }
    /* 00467d33: push 0x3d */ { u32 v = 0x3du; r_esp -= 4; W32(r_esp, v); }
    /* 00467d35: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467d38: mov ecx, dword ptr [ecx + 0x1ec] */ r_ecx = R32((u32)(r_ecx+0x1ecu));
    /* 00467d3e: call 0x6026f0 */ r_esp -= 4; W32(r_esp, 0x467d43u); f_006026f0();
    /* 00467d43: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467d46: mov eax, dword ptr [edx + 0x1ec] */ r_eax = R32((u32)(r_edx+0x1ecu));
    /* 00467d4c: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467d4f: mov ecx, dword ptr [ecx + 0x1ec] */ r_ecx = R32((u32)(r_ecx+0x1ecu));
    /* 00467d55: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00467d57: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 00467d5d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x467d5fu); call_ind(t); }
    /* 00467d5f: push 0x1e0 */ { u32 v = 0x1e0u; r_esp -= 4; W32(r_esp, v); }
    /* 00467d64: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x467d69u); f_00686d82();
    /* 00467d69: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00467d6c: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00467d6f: mov dword ptr [ebp - 4], 8 */ W32((u32)(r_ebp+0xfffffffcu), 0x8u);
    /* 00467d76: cmp dword ptr [ebp - 0x54], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00467d7a: je 0x467d8d */ if (fZ) goto L_00467d8d;
L_00467d7c:; BB(0x00467d7c);
    /* 00467d7c: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467d7f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00467d80: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00467d83: call 0x46a0b0 */ r_esp -= 4; W32(r_esp, 0x467d88u); f_0046a0b0();
    /* 00467d88: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 00467d8b: jmp 0x467d94 */ goto L_00467d94;
L_00467d8d:; BB(0x00467d8d);
    /* 00467d8d: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
L_00467d94:; BB(0x00467d94);
    /* 00467d94: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 00467d97: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 00467d9a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00467da1: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467da4: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00467da7: mov dword ptr [eax + 0x1f0], ecx */ W32((u32)(r_eax+0x1f0u), r_ecx);
    /* 00467dad: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467db0: mov eax, dword ptr [edx + 0x1f0] */ r_eax = R32((u32)(r_edx+0x1f0u));
    /* 00467db6: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467db9: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 00467dbc: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00467dbe: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00467dc0: push 0x61 */ { u32 v = 0x61u; r_esp -= 4; W32(r_esp, v); }
    /* 00467dc2: push 0x95 */ { u32 v = 0x95u; r_esp -= 4; W32(r_esp, v); }
    /* 00467dc7: push 0xfdf0 */ { u32 v = 0xfdf0u; r_esp -= 4; W32(r_esp, v); }
    /* 00467dcc: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467dcf: mov ecx, dword ptr [edx + 0x1f0] */ r_ecx = R32((u32)(r_edx+0x1f0u));
    /* 00467dd5: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x467ddau); f_005eae80();
    /* 00467dda: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467ddd: mov ecx, dword ptr [eax + 0x1f0] */ r_ecx = R32((u32)(r_eax+0x1f0u));
    /* 00467de3: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467de6: mov eax, dword ptr [edx + 0x1f0] */ r_eax = R32((u32)(r_edx+0x1f0u));
    /* 00467dec: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00467dee: mov ecx, eax */ r_ecx = r_eax;
    /* 00467df0: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00467df3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x467df5u); call_ind(t); }
    /* 00467df5: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 00467df7: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467dfa: mov ecx, dword ptr [ecx + 0x1f0] */ r_ecx = R32((u32)(r_ecx+0x1f0u));
    /* 00467e00: call 0x6026f0 */ r_esp -= 4; W32(r_esp, 0x467e05u); f_006026f0();
    /* 00467e05: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467e08: mov eax, dword ptr [edx + 0x1f0] */ r_eax = R32((u32)(r_edx+0x1f0u));
    /* 00467e0e: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00467e11: mov ecx, dword ptr [ecx + 0x1f0] */ r_ecx = R32((u32)(r_ecx+0x1f0u));
    /* 00467e17: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00467e19: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 00467e1f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x467e21u); call_ind(t); }
L_00467e21:; BB(0x00467e21);
    /* 00467e21: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00467e24: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00467e2b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00467e2c: mov esp, ebp */ r_esp = r_ebp;
    /* 00467e2e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00467e2f: ret  */ FN_RET(0x004673c0); r_esp += 4; return;
}

void f_00467e30(void) /* MakePlayDialog::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00467e30);
    /* 00467e30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00467e31: mov ebp, esp */ r_ebp = r_esp;
    /* 00467e33: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00467e36: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00467e39: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00467e3c: movzx ecx, byte ptr [eax + 4] */ r_ecx = (u32)R8((u32)(r_eax+0x4u));
    /* 00467e40: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00467e42: jne 0x467e53 */ if (!fZ) goto L_00467e53;
L_00467e44:; BB(0x00467e44);
    /* 00467e44: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00467e47: call 0x5f88f0 */ r_esp -= 4; W32(r_esp, 0x467e4cu); f_005f88f0();
    /* 00467e4c: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00467e4f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00467e51: je 0x467e55 */ if (fZ) goto L_00467e55;
L_00467e53:; BB(0x00467e53);
    /* 00467e53: jmp 0x467e91 */ goto L_00467e91;
L_00467e55:; BB(0x00467e55);
    /* 00467e55: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00467e58: cmp dword ptr [eax + 0x18], 4 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00467e5c: jne 0x467e85 */ if (!fZ) goto L_00467e85;
L_00467e5e:; BB(0x00467e5e);
    /* 00467e5e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00467e61: movsx edx, byte ptr [ecx + 0x14] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x14u));
    /* 00467e65: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00467e66: call dword ptr [0x6b2224] */ { u32 t = R32((u32)(0x6b2224u)); r_esp -= 4; W32(r_esp, 0x467e6cu); call_ind(t); }
    /* 00467e6c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00467e6f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00467e72: cmp dword ptr [ebp - 8], 0x74 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x74u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00467e76: je 0x467e7a */ if (fZ) goto L_00467e7a;
L_00467e78:; BB(0x00467e78);
    /* 00467e78: jmp 0x467e85 */ goto L_00467e85;
L_00467e7a:; BB(0x00467e7a);
    /* 00467e7a: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 00467e80: call 0x5db240 */ r_esp -= 4; W32(r_esp, 0x467e85u); f_005db240();
L_00467e85:; BB(0x00467e85);
    /* 00467e85: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00467e88: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00467e89: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00467e8c: call 0x5f72f0 */ r_esp -= 4; W32(r_esp, 0x467e91u); f_005f72f0();
L_00467e91:; BB(0x00467e91);
    /* 00467e91: mov esp, ebp */ r_esp = r_ebp;
    /* 00467e93: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00467e94: ret 4 */ FN_RET(0x00467e30); r_esp += 8; return;
}

