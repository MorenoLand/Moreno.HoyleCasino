#include "protos.h"

void f_00627220(void) /* sub_627220 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00627220);
    /* 00627220: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00627221: mov ebp, esp */ r_ebp = r_esp;
    /* 00627223: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00627226: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00627229: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0062722c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062722d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00627230: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00627231: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 00627234: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00627235: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00627238: call 0x627260 */ r_esp -= 4; W32(r_esp, 0x62723du); f_00627260();
    /* 0062723d: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00627240: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00627241: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00627244: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00627245: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 00627248: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00627249: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062724c: call 0x627330 */ r_esp -= 4; W32(r_esp, 0x627251u); f_00627330();
    /* 00627251: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00627253: mov esp, ebp */ r_esp = r_ebp;
    /* 00627255: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00627256: ret 0x10 */ FN_RET(0x00627220); r_esp += 20; return;
}

void f_00627260(void) /* sub_627260 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00627260);
    /* 00627260: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00627261: mov ebp, esp */ r_ebp = r_esp;
    /* 00627263: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00627264: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00627267: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062726a: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0062726d: mov dword ptr [eax + 0x50], ecx */ W32((u32)(r_eax+0x50u), r_ecx);
    /* 00627270: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00627273: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00627276: mov dword ptr [edx + 0x54], eax */ W32((u32)(r_edx+0x54u), r_eax);
    /* 00627279: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062727c: call 0x627b10 */ r_esp -= 4; W32(r_esp, 0x627281u); f_00627b10();
    /* 00627281: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00627284: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 00627287: mov eax, dword ptr [ecx + 0x54] */ r_eax = R32((u32)(r_ecx+0x54u));
    /* 0062728a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0062728d: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0062728f: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00627292: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00627295: mov esp, ebp */ r_esp = r_ebp;
    /* 00627297: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00627298: ret 0xc */ FN_RET(0x00627260); r_esp += 16; return;
}

void f_006272a0(void) /* sub_6272A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006272a0);
    /* 006272a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006272a1: mov ebp, esp */ r_ebp = r_esp;
    /* 006272a3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006272a6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 006272a9: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 006272ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006272ad: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 006272b0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006272b1: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 006272b4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006272b5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006272b8: call 0x627260 */ r_esp -= 4; W32(r_esp, 0x6272bdu); f_00627260();
    /* 006272bd: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 006272c0: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 006272c3: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 006272c6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006272c9: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 006272cb: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 006272ce: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006272d1: mov esp, ebp */ r_esp = r_ebp;
    /* 006272d3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006272d4: ret 0xc */ FN_RET(0x006272a0); r_esp += 16; return;
}

void f_00627330(void) /* sub_627330 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00627330);
    /* 00627330: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00627331: mov ebp, esp */ r_ebp = r_esp;
    /* 00627333: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00627334: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00627337: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062733a: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0062733d: mov dword ptr [eax + 0x58], ecx */ W32((u32)(r_eax+0x58u), r_ecx);
    /* 00627340: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00627343: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00627346: mov dword ptr [edx + 0x5c], eax */ W32((u32)(r_edx+0x5cu), r_eax);
    /* 00627349: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062734c: call 0x627b10 */ r_esp -= 4; W32(r_esp, 0x627351u); f_00627b10();
    /* 00627351: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00627354: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 00627357: mov eax, dword ptr [ecx + 0x5c] */ r_eax = R32((u32)(r_ecx+0x5cu));
    /* 0062735a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0062735d: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0062735f: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00627362: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00627365: mov esp, ebp */ r_esp = r_ebp;
    /* 00627367: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00627368: ret 0xc */ FN_RET(0x00627330); r_esp += 16; return;
}

void f_00627370(void) /* sub_627370 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00627370);
    /* 00627370: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00627371: mov ebp, esp */ r_ebp = r_esp;
    /* 00627373: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00627376: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00627379: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0062737c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062737d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00627380: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00627381: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 00627384: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00627385: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00627388: call 0x627330 */ r_esp -= 4; W32(r_esp, 0x62738du); f_00627330();
    /* 0062738d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00627390: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 00627393: mov edx, dword ptr [eax + 0x5c] */ r_edx = R32((u32)(r_eax+0x5cu));
    /* 00627396: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00627399: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0062739b: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0062739e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006273a1: mov esp, ebp */ r_esp = r_ebp;
    /* 006273a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006273a4: ret 0xc */ FN_RET(0x00627370); r_esp += 16; return;
}

void f_00627400(void) /* sub_627400 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00627400);
    /* 00627400: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00627401: mov ebp, esp */ r_ebp = r_esp;
    /* 00627403: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00627406: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00627409: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062740c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062740f: mov edx, dword ptr [eax + 0x50] */ r_edx = R32((u32)(r_eax+0x50u));
    /* 00627412: cmp edx, dword ptr [ecx + 0x58] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x58u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627415: jne 0x62742f */ if (!fZ) goto L_0062742f;
L_00627417:; BB(0x00627417);
    /* 00627417: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062741a: call 0x627480 */ r_esp -= 4; W32(r_esp, 0x62741fu); f_00627480();
    /* 0062741f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00627422: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627424: jne 0x62742f */ if (!fZ) goto L_0062742f;
L_00627426:; BB(0x00627426);
    /* 00627426: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 0062742d: jmp 0x627436 */ goto L_00627436;
L_0062742f:; BB(0x0062742f);
    /* 0062742f: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_00627436:; BB(0x00627436);
    /* 00627436: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 00627439: mov esp, ebp */ r_esp = r_ebp;
    /* 0062743b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062743c: ret  */ FN_RET(0x00627400); r_esp += 4; return;
}

void f_00627440(void) /* sub_627440 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00627440);
    /* 00627440: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00627441: mov ebp, esp */ r_ebp = r_esp;
    /* 00627443: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00627446: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00627449: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062744c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062744f: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 00627452: cmp edx, dword ptr [ecx + 0x5c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x5cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627455: jne 0x62746f */ if (!fZ) goto L_0062746f;
L_00627457:; BB(0x00627457);
    /* 00627457: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062745a: call 0x627480 */ r_esp -= 4; W32(r_esp, 0x62745fu); f_00627480();
    /* 0062745f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00627462: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627464: jne 0x62746f */ if (!fZ) goto L_0062746f;
L_00627466:; BB(0x00627466);
    /* 00627466: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 0062746d: jmp 0x627476 */ goto L_00627476;
L_0062746f:; BB(0x0062746f);
    /* 0062746f: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_00627476:; BB(0x00627476);
    /* 00627476: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 00627479: mov esp, ebp */ r_esp = r_ebp;
    /* 0062747b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062747c: ret  */ FN_RET(0x00627440); r_esp += 4; return;
}

void f_00627480(void) /* sub_627480 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00627480);
    /* 00627480: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00627481: mov ebp, esp */ r_ebp = r_esp;
    /* 00627483: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00627486: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00627489: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062748c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062748f: mov edx, dword ptr [eax + 0x50] */ r_edx = R32((u32)(r_eax+0x50u));
    /* 00627492: cmp edx, dword ptr [ecx + 0x58] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x58u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627495: jne 0x6274ae */ if (!fZ) goto L_006274ae;
L_00627497:; BB(0x00627497);
    /* 00627497: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062749a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062749d: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 006274a0: cmp edx, dword ptr [ecx + 0x5c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x5cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006274a3: jne 0x6274ae */ if (!fZ) goto L_006274ae;
L_006274a5:; BB(0x006274a5);
    /* 006274a5: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 006274ac: jmp 0x6274b5 */ goto L_006274b5;
L_006274ae:; BB(0x006274ae);
    /* 006274ae: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_006274b5:; BB(0x006274b5);
    /* 006274b5: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 006274b8: mov esp, ebp */ r_esp = r_ebp;
    /* 006274ba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006274bb: ret  */ FN_RET(0x00627480); r_esp += 4; return;
}

void f_00627520(void) /* sub_627520 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00627520);
    /* 00627520: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00627521: mov ebp, esp */ r_ebp = r_esp;
    /* 00627523: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00627526: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00627529: mov byte ptr [ebp - 1], 0 */ W8((u32)(r_ebp+0xffffffffu), 0x0u);
    /* 0062752d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00627530: movzx ecx, byte ptr [eax + 0x48] */ r_ecx = (u32)R8((u32)(r_eax+0x48u));
    /* 00627534: movzx edx, byte ptr [ebp + 0xc] */ r_edx = (u32)R8((u32)(r_ebp+0xcu));
    /* 00627538: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062753a: je 0x627549 */ if (fZ) goto L_00627549;
L_0062753c:; BB(0x0062753c);
    /* 0062753c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062753f: mov cl, byte ptr [ebp + 0xc] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 00627542: mov byte ptr [eax + 0x48], cl */ W8((u32)(r_eax+0x48u), (u8)r_ecx);
    /* 00627545: mov byte ptr [ebp - 1], 1 */ W8((u32)(r_ebp+0xffffffffu), 0x1u);
L_00627549:; BB(0x00627549);
    /* 00627549: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062754c: movzx eax, byte ptr [edx + 0x49] */ r_eax = (u32)R8((u32)(r_edx+0x49u));
    /* 00627550: movzx ecx, byte ptr [ebp + 0x10] */ r_ecx = (u32)R8((u32)(r_ebp+0x10u));
    /* 00627554: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627556: je 0x627565 */ if (fZ) goto L_00627565;
L_00627558:; BB(0x00627558);
    /* 00627558: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062755b: mov al, byte ptr [ebp + 0x10] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 0062755e: mov byte ptr [edx + 0x49], al */ W8((u32)(r_edx+0x49u), (u8)r_eax);
    /* 00627561: mov byte ptr [ebp - 1], 1 */ W8((u32)(r_ebp+0xffffffffu), 0x1u);
L_00627565:; BB(0x00627565);
    /* 00627565: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00627568: movzx edx, byte ptr [ecx + 0x4a] */ r_edx = (u32)R8((u32)(r_ecx+0x4au));
    /* 0062756c: movzx eax, byte ptr [ebp + 0x14] */ r_eax = (u32)R8((u32)(r_ebp+0x14u));
    /* 00627570: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627572: je 0x627581 */ if (fZ) goto L_00627581;
L_00627574:; BB(0x00627574);
    /* 00627574: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00627577: mov dl, byte ptr [ebp + 0x14] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x14u))) & 0xffu);
    /* 0062757a: mov byte ptr [ecx + 0x4a], dl */ W8((u32)(r_ecx+0x4au), (u8)r_edx);
    /* 0062757d: mov byte ptr [ebp - 1], 1 */ W8((u32)(r_ebp+0xffffffffu), 0x1u);
L_00627581:; BB(0x00627581);
    /* 00627581: movzx eax, byte ptr [ebp - 1] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 00627585: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627587: je 0x627599 */ if (fZ) goto L_00627599;
L_00627589:; BB(0x00627589);
    /* 00627589: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062758c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0062758e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00627591: mov eax, dword ptr [edx + 0xac] */ r_eax = R32((u32)(r_edx+0xacu));
    /* 00627597: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x627599u); call_ind(t); }
L_00627599:; BB(0x00627599);
    /* 00627599: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062759c: add ecx, 0x48 */ {  u32 a = r_ecx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062759f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006275a2: mov ax, word ptr [ecx] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ecx))) & 0xffffu);
    /* 006275a5: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 006275a8: mov cl, byte ptr [ecx + 2] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ecx+0x2u))) & 0xffu);
    /* 006275ab: mov byte ptr [edx + 2], cl */ W8((u32)(r_edx+0x2u), (u8)r_ecx);
    /* 006275ae: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006275b1: mov esp, ebp */ r_esp = r_ebp;
    /* 006275b3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006275b4: ret 0x10 */ FN_RET(0x00627520); r_esp += 20; return;
}

void f_00627620(void) /* sub_627620 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00627620);
    /* 00627620: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00627621: mov ebp, esp */ r_ebp = r_esp;
    /* 00627623: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00627624: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00627627: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062762a: movzx ecx, byte ptr [eax + 0x4b] */ r_ecx = (u32)R8((u32)(r_eax+0x4bu));
    /* 0062762e: movzx edx, byte ptr [ebp + 8] */ r_edx = (u32)R8((u32)(r_ebp+0x8u));
    /* 00627632: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627634: je 0x62764f */ if (fZ) goto L_0062764f;
L_00627636:; BB(0x00627636);
    /* 00627636: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00627639: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 0062763c: mov byte ptr [eax + 0x4b], cl */ W8((u32)(r_eax+0x4bu), (u8)r_ecx);
    /* 0062763f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00627642: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00627644: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00627647: mov edx, dword ptr [eax + 0xac] */ r_edx = R32((u32)(r_eax+0xacu));
    /* 0062764d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x62764fu); call_ind(t); }
L_0062764f:; BB(0x0062764f);
    /* 0062764f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00627652: mov al, byte ptr [eax + 0x4b] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x4bu))) & 0xffu);
    /* 00627655: mov esp, ebp */ r_esp = r_ebp;
    /* 00627657: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00627658: ret 4 */ FN_RET(0x00627620); r_esp += 8; return;
}

void f_00627660(void) /* sub_627660 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00627660);
    /* 00627660: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00627661: mov ebp, esp */ r_ebp = r_esp;
    /* 00627663: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00627664: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00627667: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062766a: mov al, byte ptr [eax + 0x4b] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x4bu))) & 0xffu);
    /* 0062766d: mov esp, ebp */ r_esp = r_ebp;
    /* 0062766f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00627670: ret  */ FN_RET(0x00627660); r_esp += 4; return;
}

void f_00627680(void) /* sub_627680 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00627680);
    /* 00627680: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00627681: mov ebp, esp */ r_ebp = r_esp;
    /* 00627683: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00627684: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00627687: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062768a: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 0062768d: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627690: je 0x6276ab */ if (fZ) goto L_006276ab;
L_00627692:; BB(0x00627692);
    /* 00627692: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00627695: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00627698: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 0062769b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062769e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006276a0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006276a3: mov eax, dword ptr [edx + 0xac] */ r_eax = R32((u32)(r_edx+0xacu));
    /* 006276a9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6276abu); call_ind(t); }
L_006276ab:; BB(0x006276ab);
    /* 006276ab: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006276ae: mov eax, dword ptr [ecx + 0x4c] */ r_eax = R32((u32)(r_ecx+0x4cu));
    /* 006276b1: mov esp, ebp */ r_esp = r_ebp;
    /* 006276b3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006276b4: ret 4 */ FN_RET(0x00627680); r_esp += 8; return;
}

void f_006277f0(void) /* sub_6277F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006277f0);
    /* 006277f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006277f1: mov ebp, esp */ r_ebp = r_esp;
    /* 006277f3: sub esp, 0x74 */ {  u32 a = r_esp; u32 b = 0x74u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006277f6: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 006277f9: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006277fd: je 0x627805 */ if (fZ) goto L_00627805;
L_006277ff:; BB(0x006277ff);
    /* 006277ff: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627803: jne 0x62780c */ if (!fZ) goto L_0062780c;
L_00627805:; BB(0x00627805);
    /* 00627805: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00627807: jmp 0x627b02 */ goto L_00627b02;
L_0062780c:; BB(0x0062780c);
    /* 0062780c: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0062780f: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 00627812: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 00627815: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00627818: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0062781b: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0062781e: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00627821: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 00627824: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 00627827: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0062782a: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0062782d: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00627830: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00627833: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00627836: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00627839: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0062783c: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0062783f: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00627842: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00627845: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00627848: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062784b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062784c: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 0062784f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00627850: lea edx, [ebp - 0x20] */ r_edx = (u32)(r_ebp+0xffffffe0u);
    /* 00627853: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00627854: call 0x627fa0 */ r_esp -= 4; W32(r_esp, 0x627859u); f_00627fa0();
    /* 00627859: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062785c: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0062785f: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 00627862: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 00627865: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00627868: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0062786a: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0062786d: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00627870: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 00627873: mov eax, dword ptr [ecx + 0x5c] */ r_eax = R32((u32)(r_ecx+0x5cu));
    /* 00627876: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00627879: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0062787b: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0062787e: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00627881: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00627884: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00627886: sub ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00627888: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0062788b: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0062788e: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00627891: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00627894: sub ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00627897: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0062789a: mov byte ptr [ebp - 1], 0 */ W8((u32)(r_ebp+0xffffffffu), 0x0u);
    /* 0062789e: fild dword ptr [ebp - 8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff8u)));
    /* 006278a1: fidiv dword ptr [ebp - 0x2c] */ ST(0) = ST(0) / (long double)(i32)R32((u32)(r_ebp+0xffffffd4u));
    /* 006278a4: fstp qword ptr [ebp - 0x28] */ W_F64((u32)(r_ebp+0xffffffd8u), ST(0)); FPOP();
    /* 006278a7: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006278aa: fild dword ptr [edx + 4] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x4u)));
    /* 006278ad: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006278b0: fild dword ptr [eax] */ FPUSH((long double)(i32)R32((u32)(r_eax)));
    /* 006278b2: fmul qword ptr [ebp - 0x28] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffffd8u));
    /* 006278b5: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 006278b7: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 006278ba: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006278bd: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006278c0: mov eax, dword ptr [ecx + 0x10] */ r_eax = R32((u32)(r_ecx+0x10u));
    /* 006278c3: cmp eax, dword ptr [edx + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x18u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006278c6: jne 0x6278cc */ if (!fZ) goto L_006278cc;
L_006278c8:; BB(0x006278c8);
    /* 006278c8: mov byte ptr [ebp - 1], 1 */ W8((u32)(r_ebp+0xffffffffu), 0x1u);
L_006278cc:; BB(0x006278cc);
    /* 006278cc: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 006278cf: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006278d1: cmp edx, dword ptr [ebp - 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006278d4: jl 0x6278e0 */ if ((fS!=fO)) goto L_006278e0;
L_006278d6:; BB(0x006278d6);
    /* 006278d6: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006278d9: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 006278db: cmp ecx, dword ptr [ebp - 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006278de: jle 0x627941 */ if ((fZ||fS!=fO)) goto L_00627941;
L_006278e0:; BB(0x006278e0);
    /* 006278e0: movzx edx, byte ptr [ebp - 1] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 006278e4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006278e6: je 0x6278ef */ if (fZ) goto L_006278ef;
L_006278e8:; BB(0x006278e8);
    /* 006278e8: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006278ea: jmp 0x627b02 */ goto L_00627b02;
L_006278ef:; BB(0x006278ef);
    /* 006278ef: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006278f2: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 006278f4: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 006278f7: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 006278fa: cmp edx, dword ptr [ebp - 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006278fd: jge 0x627907 */ if ((fS==fO)) goto L_00627907;
L_006278ff:; BB(0x006278ff);
    /* 006278ff: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00627902: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00627905: jmp 0x627923 */ goto L_00627923;
L_00627907:; BB(0x00627907);
    /* 00627907: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0062790a: cmp ecx, dword ptr [ebp - 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062790d: jge 0x627917 */ if ((fS==fO)) goto L_00627917;
L_0062790f:; BB(0x0062790f);
    /* 0062790f: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00627912: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 00627915: jmp 0x62791d */ goto L_0062791d;
L_00627917:; BB(0x00627917);
    /* 00627917: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062791a: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
L_0062791d:; BB(0x0062791d);
    /* 0062791d: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00627920: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
L_00627923:; BB(0x00627923);
    /* 00627923: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00627926: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 00627929: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0062792b: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0062792e: fild dword ptr [ecx] */ FPUSH((long double)(i32)R32((u32)(r_ecx)));
    /* 00627930: fmul qword ptr [ebp - 0x28] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffffd8u));
    /* 00627933: fadd qword ptr [ebp - 0x10] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xfffffff0u));
    /* 00627936: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x62793bu); f_00686cc0();
    /* 0062793b: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0062793e: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
L_00627941:; BB(0x00627941);
    /* 00627941: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00627944: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00627947: cmp ecx, dword ptr [ebp - 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062794a: jl 0x627957 */ if ((fS!=fO)) goto L_00627957;
L_0062794c:; BB(0x0062794c);
    /* 0062794c: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0062794f: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00627952: cmp eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00627955: jle 0x6279ce */ if ((fZ||fS!=fO)) goto L_006279ce;
L_00627957:; BB(0x00627957);
    /* 00627957: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0062795a: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0062795d: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 00627960: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00627963: cmp eax, dword ptr [ebp - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00627966: jge 0x627970 */ if ((fS==fO)) goto L_00627970;
L_00627968:; BB(0x00627968);
    /* 00627968: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0062796b: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 0062796e: jmp 0x62798c */ goto L_0062798c;
L_00627970:; BB(0x00627970);
    /* 00627970: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00627973: cmp edx, dword ptr [ebp - 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00627976: jge 0x627980 */ if ((fS==fO)) goto L_00627980;
L_00627978:; BB(0x00627978);
    /* 00627978: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0062797b: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 0062797e: jmp 0x627986 */ goto L_00627986;
L_00627980:; BB(0x00627980);
    /* 00627980: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00627983: mov dword ptr [ebp - 0x60], ecx */ W32((u32)(r_ebp+0xffffffa0u), r_ecx);
L_00627986:; BB(0x00627986);
    /* 00627986: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00627989: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
L_0062798c:; BB(0x0062798c);
    /* 0062798c: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0062798f: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00627992: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 00627995: movzx edx, byte ptr [ebp - 1] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 00627999: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062799b: jne 0x6279b3 */ if (!fZ) goto L_006279b3;
L_0062799d:; BB(0x0062799d);
    /* 0062799d: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006279a0: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 006279a3: fsub qword ptr [ebp - 0x10] */ ST(0) = ST(0) - R_F64((u32)(r_ebp+0xfffffff0u));
    /* 006279a6: fdiv qword ptr [ebp - 0x28] */ ST(0) = ST(0) / R_F64((u32)(r_ebp+0xffffffd8u));
    /* 006279a9: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x6279aeu); f_00686cc0();
    /* 006279ae: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 006279b1: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
L_006279b3:; BB(0x006279b3);
    /* 006279b3: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006279b6: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006279b8: cmp eax, dword ptr [ebp - 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006279bb: jl 0x6279c7 */ if ((fS!=fO)) goto L_006279c7;
L_006279bd:; BB(0x006279bd);
    /* 006279bd: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 006279c0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006279c2: cmp edx, dword ptr [ebp - 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006279c5: jle 0x6279ce */ if ((fZ||fS!=fO)) goto L_006279ce;
L_006279c7:; BB(0x006279c7);
    /* 006279c7: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006279c9: jmp 0x627b02 */ goto L_00627b02;
L_006279ce:; BB(0x006279ce);
    /* 006279ce: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 006279d1: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 006279d3: cmp ecx, dword ptr [ebp - 0x20] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006279d6: jl 0x6279e2 */ if ((fS!=fO)) goto L_006279e2;
L_006279d8:; BB(0x006279d8);
    /* 006279d8: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 006279db: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006279dd: cmp eax, dword ptr [ebp - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006279e0: jle 0x627a43 */ if ((fZ||fS!=fO)) goto L_00627a43;
L_006279e2:; BB(0x006279e2);
    /* 006279e2: movzx ecx, byte ptr [ebp - 1] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 006279e6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006279e8: je 0x6279f1 */ if (fZ) goto L_006279f1;
L_006279ea:; BB(0x006279ea);
    /* 006279ea: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006279ec: jmp 0x627b02 */ goto L_00627b02;
L_006279f1:; BB(0x006279f1);
    /* 006279f1: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 006279f4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006279f6: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 006279f9: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 006279fc: cmp ecx, dword ptr [ebp - 0x20] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006279ff: jge 0x627a09 */ if ((fS==fO)) goto L_00627a09;
L_00627a01:; BB(0x00627a01);
    /* 00627a01: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00627a04: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 00627a07: jmp 0x627a25 */ goto L_00627a25;
L_00627a09:; BB(0x00627a09);
    /* 00627a09: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00627a0c: cmp eax, dword ptr [ebp - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00627a0f: jge 0x627a19 */ if ((fS==fO)) goto L_00627a19;
L_00627a11:; BB(0x00627a11);
    /* 00627a11: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00627a14: mov dword ptr [ebp - 0x68], ecx */ W32((u32)(r_ebp+0xffffff98u), r_ecx);
    /* 00627a17: jmp 0x627a1f */ goto L_00627a1f;
L_00627a19:; BB(0x00627a19);
    /* 00627a19: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00627a1c: mov dword ptr [ebp - 0x68], edx */ W32((u32)(r_ebp+0xffffff98u), r_edx);
L_00627a1f:; BB(0x00627a1f);
    /* 00627a1f: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 00627a22: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
L_00627a25:; BB(0x00627a25);
    /* 00627a25: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00627a28: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 00627a2b: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 00627a2d: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00627a30: fild dword ptr [eax] */ FPUSH((long double)(i32)R32((u32)(r_eax)));
    /* 00627a32: fmul qword ptr [ebp - 0x28] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffffd8u));
    /* 00627a35: fadd qword ptr [ebp - 0x10] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xfffffff0u));
    /* 00627a38: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x627a3du); f_00686cc0();
    /* 00627a3d: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00627a40: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
L_00627a43:; BB(0x00627a43);
    /* 00627a43: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00627a46: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00627a49: cmp eax, dword ptr [ebp - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00627a4c: jl 0x627a59 */ if ((fS!=fO)) goto L_00627a59;
L_00627a4e:; BB(0x00627a4e);
    /* 00627a4e: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00627a51: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00627a54: cmp edx, dword ptr [ebp - 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00627a57: jle 0x627acd */ if ((fZ||fS!=fO)) goto L_00627acd;
L_00627a59:; BB(0x00627a59);
    /* 00627a59: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00627a5c: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00627a5f: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 00627a62: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00627a65: cmp edx, dword ptr [ebp - 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00627a68: jge 0x627a72 */ if ((fS==fO)) goto L_00627a72;
L_00627a6a:; BB(0x00627a6a);
    /* 00627a6a: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00627a6d: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 00627a70: jmp 0x627a8e */ goto L_00627a8e;
L_00627a72:; BB(0x00627a72);
    /* 00627a72: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00627a75: cmp ecx, dword ptr [ebp - 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00627a78: jge 0x627a82 */ if ((fS==fO)) goto L_00627a82;
L_00627a7a:; BB(0x00627a7a);
    /* 00627a7a: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00627a7d: mov dword ptr [ebp - 0x70], edx */ W32((u32)(r_ebp+0xffffff90u), r_edx);
    /* 00627a80: jmp 0x627a88 */ goto L_00627a88;
L_00627a82:; BB(0x00627a82);
    /* 00627a82: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00627a85: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
L_00627a88:; BB(0x00627a88);
    /* 00627a88: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 00627a8b: mov dword ptr [ebp - 0x6c], ecx */ W32((u32)(r_ebp+0xffffff94u), r_ecx);
L_00627a8e:; BB(0x00627a8e);
    /* 00627a8e: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00627a91: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 00627a94: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00627a97: movzx ecx, byte ptr [ebp - 1] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 00627a9b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627a9d: jne 0x627ab5 */ if (!fZ) goto L_00627ab5;
L_00627a9f:; BB(0x00627a9f);
    /* 00627a9f: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00627aa2: fild dword ptr [edx + 4] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x4u)));
    /* 00627aa5: fsub qword ptr [ebp - 0x10] */ ST(0) = ST(0) - R_F64((u32)(r_ebp+0xfffffff0u));
    /* 00627aa8: fdiv qword ptr [ebp - 0x28] */ ST(0) = ST(0) / R_F64((u32)(r_ebp+0xffffffd8u));
    /* 00627aab: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x627ab0u); f_00686cc0();
    /* 00627ab0: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00627ab3: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
L_00627ab5:; BB(0x00627ab5);
    /* 00627ab5: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00627ab8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00627aba: cmp eax, dword ptr [ebp - 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00627abd: jl 0x627ac9 */ if ((fS!=fO)) goto L_00627ac9;
L_00627abf:; BB(0x00627abf);
    /* 00627abf: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00627ac2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00627ac4: cmp edx, dword ptr [ebp - 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00627ac7: jle 0x627acd */ if ((fZ||fS!=fO)) goto L_00627acd;
L_00627ac9:; BB(0x00627ac9);
    /* 00627ac9: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00627acb: jmp 0x627b02 */ goto L_00627b02;
L_00627acd:; BB(0x00627acd);
    /* 00627acd: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00627ad0: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627ad3: jne 0x627af8 */ if (!fZ) goto L_00627af8;
L_00627ad5:; BB(0x00627ad5);
    /* 00627ad5: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00627ad8: cmp dword ptr [ecx], 0 */ {  u32 a = R32((u32)(r_ecx)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627adb: jne 0x627af8 */ if (!fZ) goto L_00627af8;
L_00627add:; BB(0x00627add);
    /* 00627add: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00627ae0: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627ae4: jne 0x627af8 */ if (!fZ) goto L_00627af8;
L_00627ae6:; BB(0x00627ae6);
    /* 00627ae6: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00627ae9: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627aed: jne 0x627af8 */ if (!fZ) goto L_00627af8;
L_00627aef:; BB(0x00627aef);
    /* 00627aef: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
    /* 00627af6: jmp 0x627aff */ goto L_00627aff;
L_00627af8:; BB(0x00627af8);
    /* 00627af8: mov dword ptr [ebp - 0x74], 1 */ W32((u32)(r_ebp+0xffffff8cu), 0x1u);
L_00627aff:; BB(0x00627aff);
    /* 00627aff: mov al, byte ptr [ebp - 0x74] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff8cu))) & 0xffu);
L_00627b02:; BB(0x00627b02);
    /* 00627b02: mov esp, ebp */ r_esp = r_ebp;
    /* 00627b04: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00627b05: ret 0xc */ FN_RET(0x006277f0); r_esp += 16; return;
}

void f_00627b10(void) /* sub_627B10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00627b10);
    /* 00627b10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00627b11: mov ebp, esp */ r_ebp = r_esp;
    /* 00627b13: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00627b16: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00627b19: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00627b1c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00627b1f: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 00627b22: cmp edx, dword ptr [ecx + 0x5c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x5cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00627b25: jge 0x627b32 */ if ((fS==fO)) goto L_00627b32;
L_00627b27:; BB(0x00627b27);
    /* 00627b27: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00627b2a: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 00627b2d: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00627b30: jmp 0x627b3b */ goto L_00627b3b;
L_00627b32:; BB(0x00627b32);
    /* 00627b32: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00627b35: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 00627b38: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_00627b3b:; BB(0x00627b3b);
    /* 00627b3b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00627b3e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00627b41: mov eax, dword ptr [ecx + 0x50] */ r_eax = R32((u32)(r_ecx+0x50u));
    /* 00627b44: cmp eax, dword ptr [edx + 0x58] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x58u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00627b47: jge 0x627b54 */ if ((fS==fO)) goto L_00627b54;
L_00627b49:; BB(0x00627b49);
    /* 00627b49: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00627b4c: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 00627b4f: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00627b52: jmp 0x627b5d */ goto L_00627b5d;
L_00627b54:; BB(0x00627b54);
    /* 00627b54: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00627b57: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 00627b5a: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_00627b5d:; BB(0x00627b5d);
    /* 00627b5d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00627b60: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00627b61: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00627b64: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00627b65: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00627b68: call 0x5f5110 */ r_esp -= 4; W32(r_esp, 0x627b6du); f_005f5110();
    /* 00627b6d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00627b70: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00627b73: mov eax, dword ptr [ecx + 0x50] */ r_eax = R32((u32)(r_ecx+0x50u));
    /* 00627b76: cmp eax, dword ptr [edx + 0x58] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x58u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00627b79: jle 0x627b86 */ if ((fZ||fS!=fO)) goto L_00627b86;
L_00627b7b:; BB(0x00627b7b);
    /* 00627b7b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00627b7e: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 00627b81: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00627b84: jmp 0x627b8f */ goto L_00627b8f;
L_00627b86:; BB(0x00627b86);
    /* 00627b86: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00627b89: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 00627b8c: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_00627b8f:; BB(0x00627b8f);
    /* 00627b8f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00627b92: call 0x5f51a0 */ r_esp -= 4; W32(r_esp, 0x627b97u); f_005f51a0();
    /* 00627b97: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00627b9a: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00627b9c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00627b9d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00627ba0: call 0x5f5530 */ r_esp -= 4; W32(r_esp, 0x627ba5u); f_005f5530();
    /* 00627ba5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00627ba8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00627bab: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 00627bae: cmp edx, dword ptr [ecx + 0x5c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x5cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00627bb1: jle 0x627bbe */ if ((fZ||fS!=fO)) goto L_00627bbe;
L_00627bb3:; BB(0x00627bb3);
    /* 00627bb3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00627bb6: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 00627bb9: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00627bbc: jmp 0x627bc7 */ goto L_00627bc7;
L_00627bbe:; BB(0x00627bbe);
    /* 00627bbe: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00627bc1: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 00627bc4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_00627bc7:; BB(0x00627bc7);
    /* 00627bc7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00627bca: call 0x5f51f0 */ r_esp -= 4; W32(r_esp, 0x627bcfu); f_005f51f0();
    /* 00627bcf: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00627bd2: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00627bd4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00627bd5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00627bd8: call 0x5f5570 */ r_esp -= 4; W32(r_esp, 0x627bddu); f_005f5570();
    /* 00627bdd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00627be0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00627be2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00627be5: mov edx, dword ptr [eax + 0xac] */ r_edx = R32((u32)(r_eax+0xacu));
    /* 00627beb: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x627bedu); call_ind(t); }
    /* 00627bed: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00627bef: mov esp, ebp */ r_esp = r_ebp;
    /* 00627bf1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00627bf2: ret  */ FN_RET(0x00627b10); r_esp += 4; return;
}

void f_00627fa0(void) /* sub_627FA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00627fa0);
    /* 00627fa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00627fa1: mov ebp, esp */ r_ebp = r_esp;
    /* 00627fa3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00627fa6: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00627fa9: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00627fac: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00627fae: cmp edx, dword ptr [ecx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00627fb0: jle 0x627fbc */ if ((fZ||fS!=fO)) goto L_00627fbc;
L_00627fb2:; BB(0x00627fb2);
    /* 00627fb2: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00627fb5: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00627fb7: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00627fba: jmp 0x627fc4 */ goto L_00627fc4;
L_00627fbc:; BB(0x00627fbc);
    /* 00627fbc: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00627fbf: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00627fc1: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00627fc4:; BB(0x00627fc4);
    /* 00627fc4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00627fc7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00627fca: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 00627fcc: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00627fcf: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00627fd2: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00627fd5: cmp edx, dword ptr [ecx + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00627fd8: jge 0x627fe5 */ if ((fS==fO)) goto L_00627fe5;
L_00627fda:; BB(0x00627fda);
    /* 00627fda: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00627fdd: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00627fe0: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00627fe3: jmp 0x627fee */ goto L_00627fee;
L_00627fe5:; BB(0x00627fe5);
    /* 00627fe5: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00627fe8: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00627feb: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_00627fee:; BB(0x00627fee);
    /* 00627fee: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00627ff1: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00627ff4: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00627ff7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00627ffa: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00627ffd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00627fff: cmp edx, dword ptr [ecx + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00628002: jle 0x628018 */ if ((fZ||fS!=fO)) goto L_00628018;
L_00628004:; BB(0x00628004);
    /* 00628004: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00628006: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00628008: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062800b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062800c: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x628011u); f_00686fa2();
    /* 00628011: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00628014: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00628016: jmp 0x628092 */ goto L_00628092;
L_00628018:; BB(0x00628018);
    /* 00628018: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0062801b: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0062801e: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 00628021: cmp eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00628024: jle 0x628031 */ if ((fZ||fS!=fO)) goto L_00628031;
L_00628026:; BB(0x00628026);
    /* 00628026: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00628029: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0062802c: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0062802f: jmp 0x62803a */ goto L_0062803a;
L_00628031:; BB(0x00628031);
    /* 00628031: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00628034: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00628037: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_0062803a:; BB(0x0062803a);
    /* 0062803a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0062803d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00628040: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00628043: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00628046: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00628049: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 0062804c: cmp eax, dword ptr [edx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062804f: jge 0x62805c */ if ((fS==fO)) goto L_0062805c;
L_00628051:; BB(0x00628051);
    /* 00628051: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00628054: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 00628057: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0062805a: jmp 0x628065 */ goto L_00628065;
L_0062805c:; BB(0x0062805c);
    /* 0062805c: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0062805f: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 00628062: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_00628065:; BB(0x00628065);
    /* 00628065: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00628068: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062806b: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 0062806e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00628071: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00628074: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 00628077: cmp eax, dword ptr [edx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062807a: jle 0x628090 */ if ((fZ||fS!=fO)) goto L_00628090;
L_0062807c:; BB(0x0062807c);
    /* 0062807c: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0062807e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00628080: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00628083: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00628084: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x628089u); f_00686fa2();
    /* 00628089: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062808c: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0062808e: jmp 0x628092 */ goto L_00628092;
L_00628090:; BB(0x00628090);
    /* 00628090: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00628092:; BB(0x00628092);
    /* 00628092: mov esp, ebp */ r_esp = r_ebp;
    /* 00628094: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00628095: ret  */ FN_RET(0x00627fa0); r_esp += 4; return;
}

