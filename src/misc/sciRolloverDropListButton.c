#include "protos.h"

void f_006612a0(void) /* sciRolloverDropListButton::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006612a0);
    /* 006612a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006612a1: mov ebp, esp */ r_ebp = r_esp;
    /* 006612a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006612a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006612a7: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 006612aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006612ab: mov cl, byte ptr [ebp + 0x10] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 006612ae: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006612af: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006612b2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006612b3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006612b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006612b7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006612ba: call 0x605b90 */ r_esp -= 4; W32(r_esp, 0x6612bfu); f_00605b90();
    /* 006612bf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006612c2: mov dword ptr [ecx], 0x6df2a4 */ W32((u32)(r_ecx), 0x6df2a4u);
    /* 006612c8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006612cb: mov dword ptr [edx + 0x1fc], 0 */ W32((u32)(r_edx+0x1fcu), 0x0u);
    /* 006612d5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006612d8: mov dword ptr [eax + 0x200], 0 */ W32((u32)(r_eax+0x200u), 0x0u);
    /* 006612e2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006612e5: mov dword ptr [ecx + 0x204], 0 */ W32((u32)(r_ecx+0x204u), 0x0u);
    /* 006612ef: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006612f2: mov esp, ebp */ r_esp = r_ebp;
    /* 006612f4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006612f5: ret 0x10 */ FN_RET(0x006612a0); r_esp += 20; return;
}

void f_00661340(void) /* sciRolloverDropListButton::vfunc54 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00661340);
    /* 00661340: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00661341: mov ebp, esp */ r_ebp = r_esp;
    /* 00661343: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00661344: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00661347: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066134a: cmp dword ptr [eax + 0x194], 3 */ {  u32 a = R32((u32)(r_eax+0x194u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00661351: jne 0x6613a4 */ if (!fZ) goto L_006613a4;
L_00661353:; BB(0x00661353);
    /* 00661353: cmp dword ptr [ebp + 8], 1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00661357: jne 0x6613a4 */ if (!fZ) goto L_006613a4;
L_00661359:; BB(0x00661359);
    /* 00661359: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066135c: cmp dword ptr [ecx + 0x1fc], 0 */ {  u32 a = R32((u32)(r_ecx+0x1fcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00661363: je 0x66139f */ if (fZ) goto L_0066139f;
L_00661365:; BB(0x00661365);
    /* 00661365: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00661367: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00661368: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0066136e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00661371: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00661372: fld1  */ FPUSH(1.0);
    /* 00661374: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00661377: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00661379: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0066137b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066137d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066137f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00661382: mov eax, dword ptr [edx + 0x1fc] */ r_eax = R32((u32)(r_edx+0x1fcu));
    /* 00661388: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00661389: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 0066138f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00661391: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 00661397: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 0066139d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66139fu); call_ind(t); }
L_0066139f:; BB(0x0066139f);
    /* 0066139f: jmp 0x661456 */ goto L_00661456;
L_006613a4:; BB(0x006613a4);
    /* 006613a4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006613a7: cmp dword ptr [ecx + 0x194], 0 */ {  u32 a = R32((u32)(r_ecx+0x194u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006613ae: jne 0x661456 */ if (!fZ) goto L_00661456;
L_006613b4:; BB(0x006613b4);
    /* 006613b4: cmp dword ptr [ebp + 8], 3 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006613b8: jne 0x661456 */ if (!fZ) goto L_00661456;
L_006613be:; BB(0x006613be);
    /* 006613be: movzx edx, byte ptr [0x795fbf] */ r_edx = (u32)R8((u32)(0x795fbfu));
    /* 006613c5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006613c7: je 0x661410 */ if (fZ) goto L_00661410;
L_006613c9:; BB(0x006613c9);
    /* 006613c9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006613cc: cmp dword ptr [eax + 0x204], 0 */ {  u32 a = R32((u32)(r_eax+0x204u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006613d3: je 0x66140e */ if (fZ) goto L_0066140e;
L_006613d5:; BB(0x006613d5);
    /* 006613d5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006613d7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006613d8: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 006613de: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006613e1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006613e2: fld1  */ FPUSH(1.0);
    /* 006613e4: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006613e7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006613e9: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006613eb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006613ed: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006613ef: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006613f2: mov edx, dword ptr [ecx + 0x204] */ r_edx = R32((u32)(r_ecx+0x204u));
    /* 006613f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006613f9: mov eax, dword ptr [0x15e55e8] */ r_eax = R32((u32)(0x15e55e8u));
    /* 006613fe: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00661400: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 00661406: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 0066140c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66140eu); call_ind(t); }
L_0066140e:; BB(0x0066140e);
    /* 0066140e: jmp 0x661456 */ goto L_00661456;
L_00661410:; BB(0x00661410);
    /* 00661410: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00661413: cmp dword ptr [ecx + 0x200], 0 */ {  u32 a = R32((u32)(r_ecx+0x200u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066141a: je 0x661456 */ if (fZ) goto L_00661456;
L_0066141c:; BB(0x0066141c);
    /* 0066141c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066141e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066141f: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 00661425: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00661428: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00661429: fld1  */ FPUSH(1.0);
    /* 0066142b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0066142e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00661430: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00661432: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00661434: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00661436: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00661439: mov eax, dword ptr [edx + 0x200] */ r_eax = R32((u32)(r_edx+0x200u));
    /* 0066143f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00661440: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 00661446: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00661448: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 0066144e: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 00661454: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x661456u); call_ind(t); }
L_00661456:; BB(0x00661456);
    /* 00661456: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00661459: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066145a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066145d: call 0x6031d0 */ r_esp -= 4; W32(r_esp, 0x661462u); f_006031d0();
    /* 00661462: mov esp, ebp */ r_esp = r_ebp;
    /* 00661464: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00661465: ret 4 */ FN_RET(0x00661340); r_esp += 8; return;
}

