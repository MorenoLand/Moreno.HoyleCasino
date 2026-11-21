#include "protos.h"

void f_005297d0(void) /* RouletteBet::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005297d0);
    /* 005297d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005297d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005297d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005297d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005297d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005297da: call 0x5cb4b0 */ r_esp -= 4; W32(r_esp, 0x5297dfu); f_005cb4b0();
    /* 005297df: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005297e2: mov dword ptr [eax], 0x6c38bc */ W32((u32)(r_eax), 0x6c38bcu);
    /* 005297e8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005297eb: mov dword ptr [ecx + 0xf0], 2 */ W32((u32)(r_ecx+0xf0u), 0x2u);
    /* 005297f5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005297f8: mov esp, ebp */ r_esp = r_ebp;
    /* 005297fa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005297fb: ret  */ FN_RET(0x005297d0); r_esp += 4; return;
}

void f_00529820(void) /* RouletteBet::vfunc49 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00529820);
    /* 00529820: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00529821: mov ebp, esp */ r_ebp = r_esp;
    /* 00529823: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00529826: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00529829: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052982b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052982d: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x529832u); f_0064c8a0();
    /* 00529832: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00529835: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00529838: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0052983b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0052983e: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00529841: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00529844: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00529847: mov edx, dword ptr [0x793370] */ r_edx = R32((u32)(0x793370u));
    /* 0052984d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0052984f: mov ecx, dword ptr [0x793370] */ r_ecx = R32((u32)(0x793370u));
    /* 00529855: mov edx, dword ptr [eax + 0x2b0] */ r_edx = R32((u32)(r_eax+0x2b0u));
    /* 0052985b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x52985du); call_ind(t); }
    /* 0052985d: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00529860: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 00529866: call 0x528000 */ r_esp -= 4; W32(r_esp, 0x52986bu); f_00528000();
    /* 0052986b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052986d: jne 0x529874 */ if (!fZ) goto L_00529874;
L_0052986f:; BB(0x0052986f);
    /* 0052986f: jmp 0x529907 */ goto L_00529907;
L_00529874:; BB(0x00529874);
    /* 00529874: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 0052987a: call 0x528000 */ r_esp -= 4; W32(r_esp, 0x52987fu); f_00528000();
    /* 0052987f: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00529882: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00529885: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x52988au); f_0063aac0();
    /* 0052988a: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0052988c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0052988f: cmp dword ptr [ebp - 0x18], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00529893: je 0x5298b1 */ if (fZ) goto L_005298b1;
L_00529895:; BB(0x00529895);
    /* 00529895: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00529898: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x52989du); f_0063aac0();
    /* 0052989d: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0052989f: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005298a2: cmp dword ptr [ebp - 0x1c], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005298a6: je 0x5298b1 */ if (fZ) goto L_005298b1;
L_005298a8:; BB(0x005298a8);
    /* 005298a8: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 005298af: jmp 0x5298b8 */ goto L_005298b8;
L_005298b1:; BB(0x005298b1);
    /* 005298b1: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
L_005298b8:; BB(0x005298b8);
    /* 005298b8: movzx edx, byte ptr [ebp - 0x28] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffd8u));
    /* 005298bc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005298be: je 0x5298f3 */ if (fZ) goto L_005298f3;
L_005298c0:; BB(0x005298c0);
    /* 005298c0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005298c3: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005298c6: jne 0x5298f3 */ if (!fZ) goto L_005298f3;
L_005298c8:; BB(0x005298c8);
    /* 005298c8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005298cb: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005298cf: jne 0x5298f3 */ if (!fZ) goto L_005298f3;
L_005298d1:; BB(0x005298d1);
    /* 005298d1: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 005298d4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005298d5: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 005298db: call 0x528000 */ r_esp -= 4; W32(r_esp, 0x5298e0u); f_00528000();
    /* 005298e0: mov ecx, eax */ r_ecx = r_eax;
    /* 005298e2: call 0x5d5de0 */ r_esp -= 4; W32(r_esp, 0x5298e7u); f_005d5de0();
    /* 005298e7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005298ea: cmp eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005298ed: jge 0x5298f3 */ if ((fS==fO)) goto L_005298f3;
L_005298ef:; BB(0x005298ef);
    /* 005298ef: mov byte ptr [ebp + 0x10], 0 */ W8((u32)(r_ebp+0x10u), 0x0u);
L_005298f3:; BB(0x005298f3);
    /* 005298f3: mov cl, byte ptr [ebp + 0x10] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 005298f6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005298f7: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005298fa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005298fb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005298fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005298ff: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00529902: call 0x5cba10 */ r_esp -= 4; W32(r_esp, 0x529907u); f_005cba10();
L_00529907:; BB(0x00529907);
    /* 00529907: mov esp, ebp */ r_esp = r_ebp;
    /* 00529909: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052990a: ret 0xc */ FN_RET(0x00529820); r_esp += 16; return;
}

void f_00529910(void) /* RouletteBet::vfunc44 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00529910);
    /* 00529910: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00529911: mov ebp, esp */ r_ebp = r_esp;
    /* 00529913: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00529916: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00529919: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 0052991f: call 0x528000 */ r_esp -= 4; W32(r_esp, 0x529924u); f_00528000();
    /* 00529924: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00529926: je 0x52999a */ if (fZ) goto L_0052999a;
L_00529928:; BB(0x00529928);
    /* 00529928: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 0052992e: call 0x528000 */ r_esp -= 4; W32(r_esp, 0x529933u); f_00528000();
    /* 00529933: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00529936: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00529939: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x52993eu); f_0063aac0();
    /* 0052993e: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00529940: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00529943: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00529947: je 0x529965 */ if (fZ) goto L_00529965;
L_00529949:; BB(0x00529949);
    /* 00529949: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052994c: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x529951u); f_0063aac0();
    /* 00529951: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00529953: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00529956: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052995a: je 0x529965 */ if (fZ) goto L_00529965;
L_0052995c:; BB(0x0052995c);
    /* 0052995c: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 00529963: jmp 0x52996c */ goto L_0052996c;
L_00529965:; BB(0x00529965);
    /* 00529965: mov dword ptr [ebp - 0x1c], 1 */ W32((u32)(r_ebp+0xffffffe4u), 0x1u);
L_0052996c:; BB(0x0052996c);
    /* 0052996c: movzx edx, byte ptr [ebp - 0x1c] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffe4u));
    /* 00529970: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00529972: je 0x52999a */ if (fZ) goto L_0052999a;
L_00529974:; BB(0x00529974);
    /* 00529974: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 0052997a: call 0x528000 */ r_esp -= 4; W32(r_esp, 0x52997fu); f_00528000();
    /* 0052997f: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00529982: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00529985: mov cl, byte ptr [eax + 0x4a0] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x4a0u))) & 0xffu);
    /* 0052998b: mov byte ptr [ebp - 0x11], cl */ W8((u32)(r_ebp+0xffffffefu), (u8)r_ecx);
    /* 0052998e: movzx edx, byte ptr [ebp - 0x11] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffefu));
    /* 00529992: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00529994: jne 0x52999a */ if (!fZ) goto L_0052999a;
L_00529996:; BB(0x00529996);
    /* 00529996: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00529998: jmp 0x52999c */ goto L_0052999c;
L_0052999a:; BB(0x0052999a);
    /* 0052999a: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0052999c:; BB(0x0052999c);
    /* 0052999c: mov esp, ebp */ r_esp = r_ebp;
    /* 0052999e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052999f: ret  */ FN_RET(0x00529910); r_esp += 4; return;
}

void f_005299a0(void) /* RouletteBet::vfunc48 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005299a0);
    /* 005299a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005299a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005299a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005299a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005299a7: cmp dword ptr [0x79337c], 0 */ {  u32 a = R32((u32)(0x79337cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005299ae: je 0x5299cc */ if (fZ) goto L_005299cc;
L_005299b0:; BB(0x005299b0);
    /* 005299b0: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005299b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005299b4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005299b7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005299b8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005299bb: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x5299c0u); f_005f5400();
    /* 005299c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005299c1: mov ecx, dword ptr [0x79337c] */ r_ecx = R32((u32)(0x79337cu));
    /* 005299c7: call 0x522800 */ r_esp -= 4; W32(r_esp, 0x5299ccu); f_00522800();
L_005299cc:; BB(0x005299cc);
    /* 005299cc: mov esp, ebp */ r_esp = r_ebp;
    /* 005299ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005299cf: ret 8 */ FN_RET(0x005299a0); r_esp += 12; return;
}

