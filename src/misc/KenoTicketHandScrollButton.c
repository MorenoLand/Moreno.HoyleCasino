#include "protos.h"

void f_00582610(void) /* KenoTicketHandScrollButton::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00582610);
    /* 00582610: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00582611: mov ebp, esp */ r_ebp = r_esp;
    /* 00582613: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00582614: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00582617: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058261a: call 0x601a80 */ r_esp -= 4; W32(r_esp, 0x58261fu); f_00601a80();
    /* 0058261f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00582622: mov dword ptr [eax], 0x6cc154 */ W32((u32)(r_eax), 0x6cc154u);
    /* 00582628: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058262b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0058262e: mov dword ptr [ecx + 0x1dc], edx */ W32((u32)(r_ecx+0x1dcu), r_edx);
    /* 00582634: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00582637: mov esp, ebp */ r_esp = r_ebp;
    /* 00582639: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058263a: ret 4 */ FN_RET(0x00582610); r_esp += 8; return;
}

void f_00582660(void) /* KenoTicketHandScrollButton::vfunc48 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00582660);
    /* 00582660: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00582661: mov ebp, esp */ r_ebp = r_esp;
    /* 00582663: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00582666: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00582669: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058266c: call 0x602330 */ r_esp -= 4; W32(r_esp, 0x582671u); f_00602330();
    /* 00582671: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00582674: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x582679u); f_005f5400();
    /* 00582679: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0058267c: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00582680: ja 0x582706 */ if ((!fC&&!fZ)) goto L_00582706;
L_00582686:; BB(0x00582686);
    /* 00582686: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00582689: jmp dword ptr [eax*4 + 0x58270c] */ { u32 t = R32((u32)(r_eax*4+0x58270cu)); switch (t) { case 0x582690u: goto L_00582690; case 0x5826aeu: goto L_005826ae; case 0x5826ccu: goto L_005826cc; case 0x5826eau: goto L_005826ea; default: UNSUP(0x00582689, "jump table entry is not a known target"); } }
L_00582690:; BB(0x00582690);
    /* 00582690: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00582693: mov ecx, dword ptr [ecx + 0x1dc] */ r_ecx = R32((u32)(r_ecx+0x1dcu));
    /* 00582699: call 0x582180 */ r_esp -= 4; W32(r_esp, 0x58269eu); f_00582180();
    /* 0058269e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005826a1: mov ecx, dword ptr [edx + 0x1dc] */ r_ecx = R32((u32)(r_edx+0x1dcu));
    /* 005826a7: call 0x5822e0 */ r_esp -= 4; W32(r_esp, 0x5826acu); f_005822e0();
    /* 005826ac: jmp 0x582706 */ goto L_00582706;
L_005826ae:; BB(0x005826ae);
    /* 005826ae: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005826b1: mov ecx, dword ptr [eax + 0x1dc] */ r_ecx = R32((u32)(r_eax+0x1dcu));
    /* 005826b7: call 0x5821c0 */ r_esp -= 4; W32(r_esp, 0x5826bcu); f_005821c0();
    /* 005826bc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005826bf: mov ecx, dword ptr [ecx + 0x1dc] */ r_ecx = R32((u32)(r_ecx+0x1dcu));
    /* 005826c5: call 0x5822e0 */ r_esp -= 4; W32(r_esp, 0x5826cau); f_005822e0();
    /* 005826ca: jmp 0x582706 */ goto L_00582706;
L_005826cc:; BB(0x005826cc);
    /* 005826cc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005826cf: mov ecx, dword ptr [edx + 0x1dc] */ r_ecx = R32((u32)(r_edx+0x1dcu));
    /* 005826d5: call 0x582210 */ r_esp -= 4; W32(r_esp, 0x5826dau); f_00582210();
    /* 005826da: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005826dd: mov ecx, dword ptr [eax + 0x1dc] */ r_ecx = R32((u32)(r_eax+0x1dcu));
    /* 005826e3: call 0x5822e0 */ r_esp -= 4; W32(r_esp, 0x5826e8u); f_005822e0();
    /* 005826e8: jmp 0x582706 */ goto L_00582706;
L_005826ea:; BB(0x005826ea);
    /* 005826ea: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005826ed: mov ecx, dword ptr [ecx + 0x1dc] */ r_ecx = R32((u32)(r_ecx+0x1dcu));
    /* 005826f3: call 0x582270 */ r_esp -= 4; W32(r_esp, 0x5826f8u); f_00582270();
    /* 005826f8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005826fb: mov ecx, dword ptr [edx + 0x1dc] */ r_ecx = R32((u32)(r_edx+0x1dcu));
    /* 00582701: call 0x5822e0 */ r_esp -= 4; W32(r_esp, 0x582706u); f_005822e0();
L_00582706:; BB(0x00582706);
    /* 00582706: mov esp, ebp */ r_esp = r_ebp;
    /* 00582708: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00582709: ret  */ FN_RET(0x00582660); r_esp += 4; return;
}

