#include "protos.h"

void f_00425140(void) /* CaribbeanStudSettingsHelpText::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00425140);
    /* 00425140: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00425141: mov ebp, esp */ r_ebp = r_esp;
    /* 00425143: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00425146: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00425149: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00425150: cmp dword ptr [0x163068c], 0 */ {  u32 a = R32((u32)(0x163068cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00425157: jne 0x42515e */ if (!fZ) goto L_0042515e;
L_00425159:; BB(0x00425159);
    /* 00425159: jmp 0x425256 */ goto L_00425256;
L_0042515e:; BB(0x0042515e);
    /* 0042515e: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00425160: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 00425166: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x42516bu); f_005fb350();
    /* 0042516b: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0042516e: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 00425175: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 00425177: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0042517d: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x425182u); f_005fb350();
    /* 00425182: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00425185: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
    /* 0042518c: mov dword ptr [ebp - 0xc], 2 */ W32((u32)(r_ebp+0xfffffff4u), 0x2u);
    /* 00425193: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0042519a: jmp 0x4251a5 */ goto L_004251a5;
L_0042519c:; BB(0x0042519c);
    /* 0042519c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042519f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004251a2: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_004251a5:; BB(0x004251a5);
    /* 004251a5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004251a8: cmp ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004251ab: jge 0x4251e8 */ if ((fS==fO)) goto L_004251e8;
L_004251ad:; BB(0x004251ad);
    /* 004251ad: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004251b0: cmp dword ptr [ebp + edx*8 - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+r_edx*8+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004251b5: je 0x4251e6 */ if (fZ) goto L_004251e6;
L_004251b7:; BB(0x004251b7);
    /* 004251b7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004251ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004251bb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004251be: mov edx, dword ptr [ebp + ecx*8 - 0x1c] */ r_edx = R32((u32)(r_ebp+r_ecx*8+0xffffffe4u));
    /* 004251c2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004251c5: mov ecx, dword ptr [ebp + eax*8 - 0x1c] */ r_ecx = R32((u32)(r_ebp+r_eax*8+0xffffffe4u));
    /* 004251c9: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004251cb: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 004251d1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4251d3u); call_ind(t); }
    /* 004251d3: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004251d6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004251d8: je 0x4251e6 */ if (fZ) goto L_004251e6;
L_004251da:; BB(0x004251da);
    /* 004251da: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004251dd: mov eax, dword ptr [ebp + edx*8 - 0x18] */ r_eax = R32((u32)(r_ebp+r_edx*8+0xffffffe8u));
    /* 004251e1: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004251e4: jmp 0x4251e8 */ goto L_004251e8;
L_004251e6:; BB(0x004251e6);
    /* 004251e6: jmp 0x42519c */ goto L_0042519c;
L_004251e8:; BB(0x004251e8);
    /* 004251e8: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004251ec: jne 0x42520e */ if (!fZ) goto L_0042520e;
L_004251ee:; BB(0x004251ee);
    /* 004251ee: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004251f1: cmp dword ptr [ecx + 0x18], 3 */ {  u32 a = R32((u32)(r_ecx+0x18u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004251f5: jne 0x42520c */ if (!fZ) goto L_0042520c;
L_004251f7:; BB(0x004251f7);
    /* 004251f7: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 004251fc: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004251ff: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00425201: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00425204: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0042520a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x42520cu); call_ind(t); }
L_0042520c:; BB(0x0042520c);
    /* 0042520c: jmp 0x425256 */ goto L_00425256;
L_0042520e:; BB(0x0042520e);
    /* 0042520e: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00425212: jne 0x425232 */ if (!fZ) goto L_00425232;
L_00425214:; BB(0x00425214);
    /* 00425214: push 0x6b312c */ { u32 v = 0x6b312cu; r_esp -= 4; W32(r_esp, v); }
    /* 00425219: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x42521eu); f_00630f40();
    /* 0042521e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00425221: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00425222: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00425225: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00425227: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042522a: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00425230: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x425232u); call_ind(t); }
L_00425232:; BB(0x00425232);
    /* 00425232: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00425236: jne 0x425256 */ if (!fZ) goto L_00425256;
L_00425238:; BB(0x00425238);
    /* 00425238: push 0x6b310c */ { u32 v = 0x6b310cu; r_esp -= 4; W32(r_esp, v); }
    /* 0042523d: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x425242u); f_00630f40();
    /* 00425242: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00425245: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00425246: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00425249: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0042524b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042524e: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00425254: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x425256u); call_ind(t); }
L_00425256:; BB(0x00425256);
    /* 00425256: mov esp, ebp */ r_esp = r_ebp;
    /* 00425258: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00425259: ret 4 */ FN_RET(0x00425140); r_esp += 8; return;
}

