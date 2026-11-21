#include "protos.h"

void f_004ee520(void) /* sub_4EE520 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004ee520);
    /* 004ee520: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ee521: mov ebp, esp */ r_ebp = r_esp;
    /* 004ee523: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004ee524: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004ee527: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ee52a: mov ax, word ptr [eax + 0x392] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x392u))) & 0xffffu);
    /* 004ee531: mov esp, ebp */ r_esp = r_ebp;
    /* 004ee533: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ee534: ret  */ FN_RET(0x004ee520); r_esp += 4; return;
}

void f_004ee540(void) /* sub_4EE540 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004ee540);
    /* 004ee540: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ee541: mov ebp, esp */ r_ebp = r_esp;
    /* 004ee543: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004ee544: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004ee547: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ee54a: mov ax, word ptr [eax + 0x394] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x394u))) & 0xffffu);
    /* 004ee551: mov esp, ebp */ r_esp = r_ebp;
    /* 004ee553: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ee554: ret  */ FN_RET(0x004ee540); r_esp += 4; return;
}

void f_004ee620(void) /* sub_4EE620 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004ee620);
    /* 004ee620: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ee621: mov ebp, esp */ r_ebp = r_esp;
    /* 004ee623: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004ee624: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004ee627: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ee62a: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004ee62e: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ee631: jne 0x4ee643 */ if (!fZ) goto L_004ee643;
L_004ee633:; BB(0x004ee633);
    /* 004ee633: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ee636: movsx eax, word ptr [edx + 0x398] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x398u));
    /* 004ee63d: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004ee63f: jmp 0x4ee64d */ goto L_004ee64d;
L_004ee643:; BB(0x004ee643);
    /* 004ee643: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ee646: mov ax, word ptr [eax + 0x398] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x398u))) & 0xffffu);
L_004ee64d:; BB(0x004ee64d);
    /* 004ee64d: mov esp, ebp */ r_esp = r_ebp;
    /* 004ee64f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ee650: ret  */ FN_RET(0x004ee620); r_esp += 4; return;
}

void f_004ee660(void) /* sub_4EE660 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004ee660);
    /* 004ee660: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ee661: mov ebp, esp */ r_ebp = r_esp;
    /* 004ee663: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004ee664: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004ee667: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ee66a: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004ee66e: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ee671: jne 0x4ee686 */ if (!fZ) goto L_004ee686;
L_004ee673:; BB(0x004ee673);
    /* 004ee673: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ee676: movsx eax, word ptr [edx + 0x39a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x39au));
    /* 004ee67d: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004ee67e: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004ee680: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004ee682: jmp 0x4ee690 */ goto L_004ee690;
L_004ee686:; BB(0x004ee686);
    /* 004ee686: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ee689: mov ax, word ptr [eax + 0x39a] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x39au))) & 0xffffu);
L_004ee690:; BB(0x004ee690);
    /* 004ee690: mov esp, ebp */ r_esp = r_ebp;
    /* 004ee692: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ee693: ret  */ FN_RET(0x004ee660); r_esp += 4; return;
}

