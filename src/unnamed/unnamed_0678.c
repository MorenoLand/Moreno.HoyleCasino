#include "protos.h"

void f_006780c0(void) /* sub_6780C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006780c0);
    /* 006780c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006780c1: mov ebp, esp */ r_ebp = r_esp;
    /* 006780c3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006780c6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 006780c9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006780d0: jmp 0x6780db */ goto L_006780db;
L_006780d2:; BB(0x006780d2);
    /* 006780d2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006780d5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006780d8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_006780db:; BB(0x006780db);
    /* 006780db: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006780dd: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006780e0: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x6780e5u); f_005fb720();
    /* 006780e5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006780e8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006780eb: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006780ed: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006780f0: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 006780f6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6780f8u); call_ind(t); }
    /* 006780f8: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006780fb: jge 0x678164 */ if ((fS==fO)) goto L_00678164;
L_006780fd:; BB(0x006780fd);
    /* 006780fd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006780ff: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00678102: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x678107u); f_005fb720();
    /* 00678107: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0067810a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0067810d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067810e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00678111: add ecx, 0x70 */ {  u32 a = r_ecx; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00678114: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x678119u); f_0060ca40();
    /* 00678119: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0067811c: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00678122: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00678124: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0067812a: mov edx, dword ptr [eax + 0x390] */ r_edx = R32((u32)(r_eax+0x390u));
    /* 00678130: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x678132u); call_ind(t); }
    /* 00678132: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00678135: cmp dword ptr [ecx + 0x14], eax */ {  u32 a = R32((u32)(r_ecx+0x14u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00678138: jne 0x67815f */ if (!fZ) goto L_0067815f;
L_0067813a:; BB(0x0067813a);
    /* 0067813a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067813c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067813f: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x678144u); f_005fb720();
    /* 00678144: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00678147: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00678149: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0067814c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067814d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00678150: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00678152: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00678155: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 0067815b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67815du); call_ind(t); }
    /* 0067815d: jmp 0x678164 */ goto L_00678164;
L_0067815f:; BB(0x0067815f);
    /* 0067815f: jmp 0x6780d2 */ goto L_006780d2;
L_00678164:; BB(0x00678164);
    /* 00678164: mov esp, ebp */ r_esp = r_ebp;
    /* 00678166: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00678167: ret  */ FN_RET(0x006780c0); r_esp += 4; return;
}

void f_00678170(void) /* sub_678170 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00678170);
    /* 00678170: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00678171: mov ebp, esp */ r_ebp = r_esp;
    /* 00678173: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00678176: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00678179: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067817b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0067817e: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x678183u); f_005fb720();
    /* 00678183: mov ecx, eax */ r_ecx = r_eax;
    /* 00678185: call 0x5e4390 */ r_esp -= 4; W32(r_esp, 0x67818au); f_005e4390();
    /* 0067818a: mov eax, dword ptr [eax + 0x14] */ r_eax = R32((u32)(r_eax+0x14u));
    /* 0067818d: mov esp, ebp */ r_esp = r_ebp;
    /* 0067818f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00678190: ret  */ FN_RET(0x00678170); r_esp += 4; return;
}

