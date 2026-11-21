#include "protos.h"

void f_005f9330(void) /* sub_5F9330 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f9330);
    /* 005f9330: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f9331: mov ebp, esp */ r_ebp = r_esp;
    /* 005f9333: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f9336: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005f9339: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f933c: mov ecx, dword ptr [eax + 0x1a8] */ r_ecx = R32((u32)(r_eax+0x1a8u));
    /* 005f9342: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f9345: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 005f9348: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f9349: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005f934c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f934d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f9350: call 0x5f84f0 */ r_esp -= 4; W32(r_esp, 0x5f9355u); f_005f84f0();
    /* 005f9355: add eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f9358: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f9359: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f935c: call 0x5f84d0 */ r_esp -= 4; W32(r_esp, 0x5f9361u); f_005f84d0();
    /* 005f9361: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f9364: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f9365: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f9368: mov ecx, dword ptr [ecx + 0x50] */ r_ecx = R32((u32)(r_ecx+0x50u));
    /* 005f936b: call 0x623ab0 */ r_esp -= 4; W32(r_esp, 0x5f9370u); f_00623ab0();
    /* 005f9370: mov esp, ebp */ r_esp = r_ebp;
    /* 005f9372: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f9373: ret 0x10 */ FN_RET(0x005f9330); r_esp += 20; return;
}

void f_005f9380(void) /* sub_5F9380 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f9380);
    /* 005f9380: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f9381: mov ebp, esp */ r_ebp = r_esp;
    /* 005f9383: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f9386: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005f9389: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f938c: mov ecx, dword ptr [eax + 0x1a8] */ r_ecx = R32((u32)(r_eax+0x1a8u));
    /* 005f9392: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f9395: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 005f9398: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f9399: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005f939c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f939d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f93a0: call 0x5f84f0 */ r_esp -= 4; W32(r_esp, 0x5f93a5u); f_005f84f0();
    /* 005f93a5: add eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f93a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f93a9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f93ac: call 0x5f84d0 */ r_esp -= 4; W32(r_esp, 0x5f93b1u); f_005f84d0();
    /* 005f93b1: add eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f93b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f93b5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f93b8: call 0x5f84d0 */ r_esp -= 4; W32(r_esp, 0x5f93bdu); f_005f84d0();
    /* 005f93bd: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f93c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f93c1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f93c4: mov ecx, dword ptr [ecx + 0x50] */ r_ecx = R32((u32)(r_ecx+0x50u));
    /* 005f93c7: call 0x623c60 */ r_esp -= 4; W32(r_esp, 0x5f93ccu); f_00623c60();
    /* 005f93cc: mov esp, ebp */ r_esp = r_ebp;
    /* 005f93ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f93cf: ret 0x14 */ FN_RET(0x005f9380); r_esp += 24; return;
}

void f_005f93e0(void) /* sub_5F93E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f93e0);
    /* 005f93e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f93e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f93e3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f93e6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005f93e9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f93ec: mov ecx, dword ptr [eax + 0x1a8] */ r_ecx = R32((u32)(r_eax+0x1a8u));
    /* 005f93f2: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f93f5: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 005f93f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f93f9: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005f93fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f93fd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f9400: call 0x5f84f0 */ r_esp -= 4; W32(r_esp, 0x5f9405u); f_005f84f0();
    /* 005f9405: add eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f9408: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f9409: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f940c: call 0x5f84f0 */ r_esp -= 4; W32(r_esp, 0x5f9411u); f_005f84f0();
    /* 005f9411: add eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f9414: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f9415: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f9418: call 0x5f84d0 */ r_esp -= 4; W32(r_esp, 0x5f941du); f_005f84d0();
    /* 005f941d: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f9420: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f9421: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f9424: mov ecx, dword ptr [ecx + 0x50] */ r_ecx = R32((u32)(r_ecx+0x50u));
    /* 005f9427: call 0x623f00 */ r_esp -= 4; W32(r_esp, 0x5f942cu); f_00623f00();
    /* 005f942c: mov esp, ebp */ r_esp = r_ebp;
    /* 005f942e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f942f: ret 0x14 */ FN_RET(0x005f93e0); r_esp += 24; return;
}

void f_005f9440(void) /* sub_5F9440 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f9440);
    /* 005f9440: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f9441: mov ebp, esp */ r_ebp = r_esp;
    /* 005f9443: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f9446: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005f9449: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f944c: mov ecx, dword ptr [eax + 0x1a8] */ r_ecx = R32((u32)(r_eax+0x1a8u));
    /* 005f9452: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f9455: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 005f9458: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f9459: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 005f945c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f945d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f9460: call 0x5f84f0 */ r_esp -= 4; W32(r_esp, 0x5f9465u); f_005f84f0();
    /* 005f9465: add eax, dword ptr [ebp + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f9468: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f9469: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f946c: call 0x5f84d0 */ r_esp -= 4; W32(r_esp, 0x5f9471u); f_005f84d0();
    /* 005f9471: add eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f9474: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f9475: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f9478: call 0x5f84f0 */ r_esp -= 4; W32(r_esp, 0x5f947du); f_005f84f0();
    /* 005f947d: add eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f9480: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f9481: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f9484: call 0x5f84d0 */ r_esp -= 4; W32(r_esp, 0x5f9489u); f_005f84d0();
    /* 005f9489: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f948c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f948d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f9490: mov ecx, dword ptr [ecx + 0x50] */ r_ecx = R32((u32)(r_ecx+0x50u));
    /* 005f9493: call 0x6241c0 */ r_esp -= 4; W32(r_esp, 0x5f9498u); f_006241c0();
    /* 005f9498: mov esp, ebp */ r_esp = r_ebp;
    /* 005f949a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f949b: ret 0x18 */ FN_RET(0x005f9440); r_esp += 28; return;
}

void f_005f9500(void) /* sub_5F9500 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f9500);
    /* 005f9500: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f9501: mov ebp, esp */ r_ebp = r_esp;
    /* 005f9503: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f9506: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005f9509: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f950c: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005f950e: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005f9511: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005f9514: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005f9517: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005f951a: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005f951d: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 005f9520: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005f9523: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f9526: call 0x5f84f0 */ r_esp -= 4; W32(r_esp, 0x5f952bu); f_005f84f0();
    /* 005f952b: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005f952e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f9531: call 0x5f84d0 */ r_esp -= 4; W32(r_esp, 0x5f9536u); f_005f84d0();
    /* 005f9536: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005f9539: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f953c: add eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f953f: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005f9542: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f9545: add ecx, dword ptr [ebp - 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f9548: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005f954b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f954e: add edx, dword ptr [ebp - 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005f9551: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005f9554: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f9557: add eax, dword ptr [ebp - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f955a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005f955d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f9560: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005f9563: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f9566: mov eax, dword ptr [edx + 0x1a8] */ r_eax = R32((u32)(r_edx+0x1a8u));
    /* 005f956c: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005f956f: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 005f9572: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f9573: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f9576: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f9578: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f957b: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 005f957e: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5f9580u); call_ind(t); }
    /* 005f9580: mov esp, ebp */ r_esp = r_ebp;
    /* 005f9582: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f9583: ret 4 */ FN_RET(0x005f9500); r_esp += 8; return;
}

void f_005f9590(void) /* sub_5F9590 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f9590);
    /* 005f9590: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f9591: mov ebp, esp */ r_ebp = r_esp;
    /* 005f9593: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f9596: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005f9599: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f959c: mov ecx, dword ptr [eax + 0x1ac] */ r_ecx = R32((u32)(r_eax+0x1acu));
    /* 005f95a2: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f95a5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f95a8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f95ab: mov dword ptr [edx + 0x1ac], eax */ W32((u32)(r_edx+0x1acu), r_eax);
    /* 005f95b1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f95b4: mov esp, ebp */ r_esp = r_ebp;
    /* 005f95b6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f95b7: ret 4 */ FN_RET(0x005f9590); r_esp += 8; return;
}

void f_005f95e0(void) /* sub_5F95E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f95e0);
    /* 005f95e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f95e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f95e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f95e5: push 0x6aa249 */ { u32 v = 0x6aa249u; r_esp -= 4; W32(r_esp, v); }
    /* 005f95ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f95f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f95f1: sub esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f95f4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005f95f5: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005f95fa: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005f95fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f95fd: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005f9600: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005f9606: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 005f9609: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005f960c: call 0x5f9a80 */ r_esp -= 4; W32(r_esp, 0x5f9611u); f_005f9a80();
    /* 005f9611: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 005f9614: cmp dword ptr [eax + 0x114], 0 */ {  u32 a = R32((u32)(r_eax+0x114u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f961b: jne 0x5f966d */ if (!fZ) goto L_005f966d;
L_005f961d:; BB(0x005f961d);
    /* 005f961d: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005f9620: cmp dword ptr [ecx + 0x17c], 0 */ {  u32 a = R32((u32)(r_ecx+0x17cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f9627: je 0x5f9668 */ if (fZ) goto L_005f9668;
L_005f9629:; BB(0x005f9629);
    /* 005f9629: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005f962c: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 005f9632: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005f9635: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005f9638: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005f963b: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f963f: je 0x5f9654 */ if (fZ) goto L_005f9654;
L_005f9641:; BB(0x005f9641);
    /* 005f9641: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f9643: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f9646: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f9648: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f964b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005f964d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5f964fu); call_ind(t); }
    /* 005f964f: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 005f9652: jmp 0x5f965b */ goto L_005f965b;
L_005f9654:; BB(0x005f9654);
    /* 005f9654: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_005f965b:; BB(0x005f965b);
    /* 005f965b: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 005f965e: mov dword ptr [eax + 0x17c], 0 */ W32((u32)(r_eax+0x17cu), 0x0u);
L_005f9668:; BB(0x005f9668);
    /* 005f9668: jmp 0x5f9a66 */ goto L_005f9a66;
L_005f966d:; BB(0x005f966d);
    /* 005f966d: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005f9670: cmp dword ptr [ecx + 0x17c], 0 */ {  u32 a = R32((u32)(r_ecx+0x17cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f9677: jne 0x5f9736 */ if (!fZ) goto L_005f9736;
L_005f967d:; BB(0x005f967d);
    /* 005f967d: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 005f9682: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5f9687u); f_00686d82();
    /* 005f9687: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f968a: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005f968d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f9694: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f9698: je 0x5f96a7 */ if (fZ) goto L_005f96a7;
L_005f969a:; BB(0x005f969a);
    /* 005f969a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f969d: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x5f96a2u); f_005eaaf0();
    /* 005f96a2: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 005f96a5: jmp 0x5f96ae */ goto L_005f96ae;
L_005f96a7:; BB(0x005f96a7);
    /* 005f96a7: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
L_005f96ae:; BB(0x005f96ae);
    /* 005f96ae: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005f96b1: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005f96b4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f96bb: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 005f96be: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f96c1: mov dword ptr [eax + 0x17c], ecx */ W32((u32)(r_eax+0x17cu), r_ecx);
    /* 005f96c7: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005f96ca: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 005f96d0: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005f96d3: mov ecx, dword ptr [ecx + 0x17c] */ r_ecx = R32((u32)(r_ecx+0x17cu));
    /* 005f96d9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005f96db: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005f96de: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f96e0u); call_ind(t); }
    /* 005f96e0: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005f96e3: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 005f96e9: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 005f96ec: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005f96ef: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005f96f2: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 005f96f8: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 005f96fb: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 005f9701: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005f9703: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 005f9706: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f9708u); call_ind(t); }
    /* 005f9708: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f970a: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005f970d: mov ecx, dword ptr [ecx + 0x17c] */ r_ecx = R32((u32)(r_ecx+0x17cu));
    /* 005f9713: call 0x5eb000 */ r_esp -= 4; W32(r_esp, 0x5f9718u); f_005eb000();
    /* 005f9718: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f971a: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005f971d: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 005f9723: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005f9726: mov ecx, dword ptr [ecx + 0x17c] */ r_ecx = R32((u32)(r_ecx+0x17cu));
    /* 005f972c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005f972e: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005f9734: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f9736u); call_ind(t); }
L_005f9736:; BB(0x005f9736);
    /* 005f9736: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005f9739: mov edx, dword ptr [ecx + 0x114] */ r_edx = R32((u32)(r_ecx+0x114u));
    /* 005f973f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f9740: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 005f9743: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 005f9749: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x5f974eu); f_005eaf00();
    /* 005f974e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f9750: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005f9753: mov ecx, dword ptr [ecx + 0x17c] */ r_ecx = R32((u32)(r_ecx+0x17cu));
    /* 005f9759: call 0x5eb000 */ r_esp -= 4; W32(r_esp, 0x5f975eu); f_005eb000();
    /* 005f975e: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005f9761: mov eax, dword ptr [edx + 0x118] */ r_eax = R32((u32)(r_edx+0x118u));
    /* 005f9767: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f9768: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005f976b: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 005f9771: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 005f9774: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 005f977a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005f977c: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005f9782: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f9784u); call_ind(t); }
    /* 005f9784: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005f9787: mov ecx, dword ptr [ecx + 0x17c] */ r_ecx = R32((u32)(r_ecx+0x17cu));
    /* 005f978d: call 0x5eb470 */ r_esp -= 4; W32(r_esp, 0x5f9792u); f_005eb470();
    /* 005f9792: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f9794: jne 0x5f97ac */ if (!fZ) goto L_005f97ac;
L_005f9796:; BB(0x005f9796);
    /* 005f9796: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005f9799: mov ecx, dword ptr [edx + 0x17c] */ r_ecx = R32((u32)(r_edx+0x17cu));
    /* 005f979f: call 0x5eb4b0 */ r_esp -= 4; W32(r_esp, 0x5f97a4u); f_005eb4b0();
    /* 005f97a4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f97a6: je 0x5f986c */ if (fZ) goto L_005f986c;
L_005f97ac:; BB(0x005f97ac);
    /* 005f97ac: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 005f97af: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 005f97b5: call 0x5eb4b0 */ r_esp -= 4; W32(r_esp, 0x5f97bau); f_005eb4b0();
    /* 005f97ba: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005f97bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f97bd: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005f97c0: mov ecx, dword ptr [ecx + 0x17c] */ r_ecx = R32((u32)(r_ecx+0x17cu));
    /* 005f97c6: call 0x5eb470 */ r_esp -= 4; W32(r_esp, 0x5f97cbu); f_005eb470();
    /* 005f97cb: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005f97cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f97ce: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005f97d1: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 005f97d7: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005f97da: mov ecx, dword ptr [ecx + 0x17c] */ r_ecx = R32((u32)(r_ecx+0x17cu));
    /* 005f97e0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005f97e2: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005f97e5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f97e7u); call_ind(t); }
    /* 005f97e7: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005f97ea: mov ecx, dword ptr [ecx + 0x17c] */ r_ecx = R32((u32)(r_ecx+0x17cu));
    /* 005f97f0: call 0x5eb470 */ r_esp -= 4; W32(r_esp, 0x5f97f5u); f_005eb470();
    /* 005f97f5: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005f97f8: mov dword ptr [edx + 0x108], eax */ W32((u32)(r_edx+0x108u), r_eax);
    /* 005f97fe: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 005f9801: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 005f9807: call 0x5eb4b0 */ r_esp -= 4; W32(r_esp, 0x5f980cu); f_005eb4b0();
    /* 005f980c: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005f980f: mov dword ptr [ecx + 0x104], eax */ W32((u32)(r_ecx+0x104u), r_eax);
    /* 005f9815: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005f9818: mov ecx, dword ptr [edx + 0x17c] */ r_ecx = R32((u32)(r_edx+0x17cu));
    /* 005f981e: call 0x5eb470 */ r_esp -= 4; W32(r_esp, 0x5f9823u); f_005eb470();
    /* 005f9823: mov esi, eax */ r_esi = r_eax;
    /* 005f9825: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 005f9828: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 005f982e: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x5f9833u); f_005f5550();
    /* 005f9833: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005f9835: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005f9838: mov dword ptr [ecx + 0x110], esi */ W32((u32)(r_ecx+0x110u), r_esi);
    /* 005f983e: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005f9841: mov ecx, dword ptr [edx + 0x17c] */ r_ecx = R32((u32)(r_edx+0x17cu));
    /* 005f9847: call 0x5eb4b0 */ r_esp -= 4; W32(r_esp, 0x5f984cu); f_005eb4b0();
    /* 005f984c: mov esi, eax */ r_esi = r_eax;
    /* 005f984e: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 005f9851: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 005f9857: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x5f985cu); f_005f5590();
    /* 005f985c: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005f985e: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005f9861: mov dword ptr [ecx + 0x10c], esi */ W32((u32)(r_ecx+0x10cu), r_esi);
    /* 005f9867: jmp 0x5f99e0 */ goto L_005f99e0;
L_005f986c:; BB(0x005f986c);
    /* 005f986c: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005f986f: mov ecx, dword ptr [edx + 0x17c] */ r_ecx = R32((u32)(r_edx+0x17cu));
    /* 005f9875: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x5f987au); f_005f5550();
    /* 005f987a: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005f987d: add eax, dword ptr [ecx + 0x108] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x108u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f9883: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005f9886: mov dword ptr [edx + 0x110], eax */ W32((u32)(r_edx+0x110u), r_eax);
    /* 005f988c: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 005f988f: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 005f9895: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x5f989au); f_005f5590();
    /* 005f989a: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005f989d: add eax, dword ptr [ecx + 0x104] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x104u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f98a3: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005f98a6: mov dword ptr [edx + 0x10c], eax */ W32((u32)(r_edx+0x10cu), r_eax);
    /* 005f98ac: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 005f98af: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005f98b2: mov edx, dword ptr [eax + 0x110] */ r_edx = R32((u32)(r_eax+0x110u));
    /* 005f98b8: cmp edx, dword ptr [ecx + 0x108] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x108u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f98be: jne 0x5f98df */ if (!fZ) goto L_005f98df;
L_005f98c0:; BB(0x005f98c0);
    /* 005f98c0: mov eax, dword ptr [0x15e55e8] */ r_eax = R32((u32)(0x15e55e8u));
    /* 005f98c5: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005f98c8: call 0x5f8550 */ r_esp -= 4; W32(r_esp, 0x5f98cdu); f_005f8550();
    /* 005f98cd: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005f98d0: add eax, dword ptr [ecx + 0x108] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x108u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f98d6: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005f98d9: mov dword ptr [edx + 0x110], eax */ W32((u32)(r_edx+0x110u), r_eax);
L_005f98df:; BB(0x005f98df);
    /* 005f98df: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 005f98e2: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005f98e5: mov edx, dword ptr [eax + 0x10c] */ r_edx = R32((u32)(r_eax+0x10cu));
    /* 005f98eb: cmp edx, dword ptr [ecx + 0x104] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x104u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f98f1: jne 0x5f9912 */ if (!fZ) goto L_005f9912;
L_005f98f3:; BB(0x005f98f3);
    /* 005f98f3: mov eax, dword ptr [0x15e55e8] */ r_eax = R32((u32)(0x15e55e8u));
    /* 005f98f8: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005f98fb: call 0x5f8570 */ r_esp -= 4; W32(r_esp, 0x5f9900u); f_005f8570();
    /* 005f9900: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005f9903: add eax, dword ptr [ecx + 0x104] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x104u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f9909: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005f990c: mov dword ptr [edx + 0x10c], eax */ W32((u32)(r_edx+0x10cu), r_eax);
L_005f9912:; BB(0x005f9912);
    /* 005f9912: movzx eax, byte ptr [0x795fb8] */ r_eax = (u32)R8((u32)(0x795fb8u));
    /* 005f9919: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f991b: je 0x5f99e0 */ if (fZ) goto L_005f99e0;
L_005f9921:; BB(0x005f9921);
    /* 005f9921: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005f9927: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005f992a: cmp edx, dword ptr [ecx + 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x14u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f992d: jne 0x5f99e0 */ if (!fZ) goto L_005f99e0;
L_005f9933:; BB(0x005f9933);
    /* 005f9933: mov eax, dword ptr [0x15e55e8] */ r_eax = R32((u32)(0x15e55e8u));
    /* 005f9938: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005f993b: mov edx, dword ptr [ecx + 0x1a8] */ r_edx = R32((u32)(r_ecx+0x1a8u));
    /* 005f9941: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 005f9944: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005f9947: call 0x613600 */ r_esp -= 4; W32(r_esp, 0x5f994cu); f_00613600();
    /* 005f994c: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 005f994f: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005f9952: cmp dword ptr [ecx + 0x110], eax */ {  u32 a = R32((u32)(r_ecx+0x110u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f9958: jne 0x5f9982 */ if (!fZ) goto L_005f9982;
L_005f995a:; BB(0x005f995a);
    /* 005f995a: mov edx, dword ptr [0x15e55e8] */ r_edx = R32((u32)(0x15e55e8u));
    /* 005f9960: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 005f9963: mov ecx, dword ptr [eax + 0x1a8] */ r_ecx = R32((u32)(r_eax+0x1a8u));
    /* 005f9969: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 005f996c: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005f996f: call 0x613620 */ r_esp -= 4; W32(r_esp, 0x5f9974u); f_00613620();
    /* 005f9974: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 005f9977: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 005f997a: cmp dword ptr [eax + 0x10c], edx */ {  u32 a = R32((u32)(r_eax+0x10cu)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f9980: je 0x5f99e0 */ if (fZ) goto L_005f99e0;
L_005f9982:; BB(0x005f9982);
    /* 005f9982: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005f9985: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 005f9988: mov edx, dword ptr [0x15e55e8] */ r_edx = R32((u32)(0x15e55e8u));
    /* 005f998e: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 005f9991: mov ecx, dword ptr [eax + 0x1a8] */ r_ecx = R32((u32)(r_eax+0x1a8u));
    /* 005f9997: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 005f999a: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005f999d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f999f: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005f99a2: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 005f99a5: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5f99a7u); call_ind(t); }
    /* 005f99a7: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005f99aa: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 005f99ad: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005f99b3: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 005f99b6: mov eax, dword ptr [edx + 0x1a8] */ r_eax = R32((u32)(r_edx+0x1a8u));
    /* 005f99bc: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 005f99bf: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005f99c2: mov edx, dword ptr [ecx + 0x10c] */ r_edx = R32((u32)(r_ecx+0x10cu));
    /* 005f99c8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f99c9: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 005f99cc: mov ecx, dword ptr [eax + 0x110] */ r_ecx = R32((u32)(r_eax+0x110u));
    /* 005f99d2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f99d3: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005f99d6: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f99d8: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005f99db: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005f99de: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5f99e0u); call_ind(t); }
L_005f99e0:; BB(0x005f99e0);
    /* 005f99e0: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 005f99e3: mov byte ptr [eax + 0x178], 0 */ W8((u32)(r_eax+0x178u), 0x0u);
    /* 005f99ea: lea ecx, [ebp - 0x2c] */ r_ecx = (u32)(r_ebp+0xffffffd4u);
    /* 005f99ed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f99ee: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005f99f1: mov ecx, dword ptr [edx + 0x17c] */ r_ecx = R32((u32)(r_edx+0x17cu));
    /* 005f99f7: call 0x5ebac0 */ r_esp -= 4; W32(r_esp, 0x5f99fcu); f_005ebac0();
    /* 005f99fc: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005f99ff: add ecx, 0x180 */ {  u32 a = r_ecx; u32 b = 0x180u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f9a05: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005f9a07: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 005f9a09: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005f9a0c: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 005f9a0f: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005f9a12: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 005f9a15: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 005f9a18: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 005f9a1b: lea ecx, [ebp - 0x3c] */ r_ecx = (u32)(r_ebp+0xffffffc4u);
    /* 005f9a1e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f9a1f: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005f9a22: mov ecx, dword ptr [edx + 0x17c] */ r_ecx = R32((u32)(r_edx+0x17cu));
    /* 005f9a28: call 0x5ebf80 */ r_esp -= 4; W32(r_esp, 0x5f9a2du); f_005ebf80();
    /* 005f9a2d: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005f9a30: add ecx, 0x190 */ {  u32 a = r_ecx; u32 b = 0x190u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f9a36: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005f9a38: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 005f9a3a: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005f9a3d: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 005f9a40: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005f9a43: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 005f9a46: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 005f9a49: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 005f9a4c: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005f9a4f: call 0x5f9a80 */ r_esp -= 4; W32(r_esp, 0x5f9a54u); f_005f9a80();
    /* 005f9a54: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005f9a57: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 005f9a5d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f9a5e: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005f9a61: call 0x5f8ce0 */ r_esp -= 4; W32(r_esp, 0x5f9a66u); f_005f8ce0();
L_005f9a66:; BB(0x005f9a66);
    /* 005f9a66: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f9a69: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f9a70: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f9a71: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005f9a72: mov esp, ebp */ r_esp = r_ebp;
    /* 005f9a74: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f9a75: ret  */ FN_RET(0x005f95e0); r_esp += 4; return;
}

void f_005f9a80(void) /* sub_5F9A80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f9a80);
    /* 005f9a80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f9a81: mov ebp, esp */ r_ebp = r_esp;
    /* 005f9a83: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f9a86: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005f9a89: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005f9a8c: mov ecx, dword ptr [eax + 0x10c] */ r_ecx = R32((u32)(r_eax+0x10cu));
    /* 005f9a92: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005f9a95: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005f9a98: mov eax, dword ptr [edx + 0x110] */ r_eax = R32((u32)(r_edx+0x110u));
    /* 005f9a9e: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005f9aa1: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005f9aa4: mov edx, dword ptr [ecx + 0x104] */ r_edx = R32((u32)(r_ecx+0x104u));
    /* 005f9aaa: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005f9aad: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005f9ab0: mov ecx, dword ptr [eax + 0x108] */ r_ecx = R32((u32)(r_eax+0x108u));
    /* 005f9ab6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005f9ab9: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005f9abc: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005f9abf: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f9ac2: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005f9ac5: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f9ac8: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005f9acb: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f9ace: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005f9ad1: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f9ad4: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005f9ad7: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005f9ada: mov edx, dword ptr [ecx + 0x1a8] */ r_edx = R32((u32)(r_ecx+0x1a8u));
    /* 005f9ae0: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 005f9ae3: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 005f9ae6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f9ae7: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005f9aea: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005f9aec: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005f9aef: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 005f9af2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f9af4u); call_ind(t); }
    /* 005f9af4: mov esp, ebp */ r_esp = r_ebp;
    /* 005f9af6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f9af7: ret  */ FN_RET(0x005f9a80); r_esp += 4; return;
}

void f_005f9b00(void) /* sub_5F9B00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f9b00);
    /* 005f9b00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f9b01: mov ebp, esp */ r_ebp = r_esp;
    /* 005f9b03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f9b04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f9b07: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f9b0a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f9b0b: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005f9b11: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f9b14: call 0x60c840 */ r_esp -= 4; W32(r_esp, 0x5f9b19u); f_0060c840();
    /* 005f9b19: mov esp, ebp */ r_esp = r_ebp;
    /* 005f9b1b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f9b1c: ret  */ FN_RET(0x005f9b00); r_esp += 4; return;
}

void f_005f9b20(void) /* sub_5F9B20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f9b20);
    /* 005f9b20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f9b21: mov ebp, esp */ r_ebp = r_esp;
    /* 005f9b23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f9b24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f9b27: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f9b2a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f9b2b: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005f9b31: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f9b34: call 0x60c890 */ r_esp -= 4; W32(r_esp, 0x5f9b39u); f_0060c890();
    /* 005f9b39: mov esp, ebp */ r_esp = r_ebp;
    /* 005f9b3b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f9b3c: ret  */ FN_RET(0x005f9b20); r_esp += 4; return;
}

void f_005f9b40(void) /* sub_5F9B40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f9b40);
    /* 005f9b40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f9b41: mov ebp, esp */ r_ebp = r_esp;
    /* 005f9b43: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f9b45: push 0x6aa26f */ { u32 v = 0x6aa26fu; r_esp -= 4; W32(r_esp, v); }
    /* 005f9b4a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f9b50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f9b51: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f9b54: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005f9b59: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005f9b5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f9b5c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005f9b5f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005f9b65: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005f9b68: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f9b6c: jne 0x5f9bb2 */ if (!fZ) goto L_005f9bb2;
L_005f9b6e:; BB(0x005f9b6e);
    /* 005f9b6e: push 0x190 */ { u32 v = 0x190u; r_esp -= 4; W32(r_esp, v); }
    /* 005f9b73: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5f9b78u); f_00686d82();
    /* 005f9b78: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f9b7b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005f9b7e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f9b85: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f9b89: je 0x5f9b98 */ if (fZ) goto L_005f9b98;
L_005f9b8b:; BB(0x005f9b8b);
    /* 005f9b8b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005f9b8e: call 0x5f5f50 */ r_esp -= 4; W32(r_esp, 0x5f9b93u); f_005f5f50();
    /* 005f9b93: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005f9b96: jmp 0x5f9b9f */ goto L_005f9b9f;
L_005f9b98:; BB(0x005f9b98);
    /* 005f9b98: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005f9b9f:; BB(0x005f9b9f);
    /* 005f9b9f: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f9ba2: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005f9ba5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f9bac: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f9baf: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
L_005f9bb2:; BB(0x005f9bb2);
    /* 005f9bb2: mov dl, byte ptr [ebp + 0x34] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x34u))) & 0xffu);
    /* 005f9bb5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f9bb6: mov al, byte ptr [ebp + 0x30] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x30u))) & 0xffu);
    /* 005f9bb9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f9bba: mov ecx, dword ptr [ebp + 0x2c] */ r_ecx = R32((u32)(r_ebp+0x2cu));
    /* 005f9bbd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f9bbe: mov edx, dword ptr [ebp + 0x24] */ r_edx = R32((u32)(r_ebp+0x24u));
    /* 005f9bc1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f9bc2: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 005f9bc5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f9bc6: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 005f9bc9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f9bca: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 005f9bcd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f9bce: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005f9bd1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f9bd2: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005f9bd5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f9bd6: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005f9bd9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f9bda: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f9bdd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f9bde: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f9be1: call 0x5f9c10 */ r_esp -= 4; W32(r_esp, 0x5f9be6u); f_005f9c10();
    /* 005f9be6: mov ecx, dword ptr [ebp + 0x28] */ r_ecx = R32((u32)(r_ebp+0x28u));
    /* 005f9be9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f9bea: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f9bed: call 0x5f6050 */ r_esp -= 4; W32(r_esp, 0x5f9bf2u); f_005f6050();
    /* 005f9bf2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f9bf5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f9bf8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f9bff: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f9c00: mov esp, ebp */ r_esp = r_ebp;
    /* 005f9c02: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f9c03: ret 0x30 */ FN_RET(0x005f9b40); r_esp += 52; return;
}

void f_005f9c10(void) /* sub_5F9C10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f9c10);
    /* 005f9c10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f9c11: mov ebp, esp */ r_ebp = r_esp;
    /* 005f9c13: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f9c15: push 0x6aa295 */ { u32 v = 0x6aa295u; r_esp -= 4; W32(r_esp, v); }
    /* 005f9c1a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f9c20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f9c21: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f9c24: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005f9c29: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005f9c2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f9c2c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005f9c2f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005f9c35: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005f9c38: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f9c3c: jne 0x5f9c82 */ if (!fZ) goto L_005f9c82;
L_005f9c3e:; BB(0x005f9c3e);
    /* 005f9c3e: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 005f9c43: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5f9c48u); f_00686d82();
    /* 005f9c48: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f9c4b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005f9c4e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f9c55: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f9c59: je 0x5f9c68 */ if (fZ) goto L_005f9c68;
L_005f9c5b:; BB(0x005f9c5b);
    /* 005f9c5b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005f9c5e: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x5f9c63u); f_005f5bf0();
    /* 005f9c63: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005f9c66: jmp 0x5f9c6f */ goto L_005f9c6f;
L_005f9c68:; BB(0x005f9c68);
    /* 005f9c68: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005f9c6f:; BB(0x005f9c6f);
    /* 005f9c6f: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f9c72: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005f9c75: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f9c7c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f9c7f: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
L_005f9c82:; BB(0x005f9c82);
    /* 005f9c82: mov dl, byte ptr [ebp + 0x30] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x30u))) & 0xffu);
    /* 005f9c85: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f9c86: mov al, byte ptr [ebp + 0x2c] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x2cu))) & 0xffu);
    /* 005f9c89: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f9c8a: mov ecx, dword ptr [ebp + 0x28] */ r_ecx = R32((u32)(r_ebp+0x28u));
    /* 005f9c8d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f9c8e: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 005f9c91: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f9c92: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 005f9c95: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f9c96: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 005f9c99: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f9c9a: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005f9c9d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f9c9e: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005f9ca1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f9ca2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f9ca5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f9ca6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f9ca9: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x5f9caeu); f_005f9ce0();
    /* 005f9cae: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 005f9cb1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f9cb2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f9cb5: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x5f9cbau); f_005f5d50();
    /* 005f9cba: mov eax, dword ptr [ebp + 0x24] */ r_eax = R32((u32)(r_ebp+0x24u));
    /* 005f9cbd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f9cbe: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f9cc1: call 0x5f5df0 */ r_esp -= 4; W32(r_esp, 0x5f9cc6u); f_005f5df0();
    /* 005f9cc6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f9cc9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f9ccc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f9cd3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f9cd4: mov esp, ebp */ r_esp = r_ebp;
    /* 005f9cd6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f9cd7: ret 0x2c */ FN_RET(0x005f9c10); r_esp += 48; return;
}

void f_005f9ce0(void) /* sub_5F9CE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f9ce0);
    /* 005f9ce0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f9ce1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f9ce3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f9ce5: push 0x6aa2bb */ { u32 v = 0x6aa2bbu; r_esp -= 4; W32(r_esp, v); }
    /* 005f9cea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f9cf0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f9cf1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f9cf4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005f9cf9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005f9cfb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f9cfc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005f9cff: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005f9d05: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005f9d08: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f9d0c: jne 0x5f9d52 */ if (!fZ) goto L_005f9d52;
L_005f9d0e:; BB(0x005f9d0e);
    /* 005f9d0e: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 005f9d13: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5f9d18u); f_00686d82();
    /* 005f9d18: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f9d1b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005f9d1e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f9d25: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f9d29: je 0x5f9d38 */ if (fZ) goto L_005f9d38;
L_005f9d2b:; BB(0x005f9d2b);
    /* 005f9d2b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005f9d2e: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x5f9d33u); f_005eaaf0();
    /* 005f9d33: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005f9d36: jmp 0x5f9d3f */ goto L_005f9d3f;
L_005f9d38:; BB(0x005f9d38);
    /* 005f9d38: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005f9d3f:; BB(0x005f9d3f);
    /* 005f9d3f: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f9d42: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005f9d45: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f9d4c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f9d4f: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
L_005f9d52:; BB(0x005f9d52);
    /* 005f9d52: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005f9d55: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f9d56: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f9d59: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f9d5c: call 0x60c840 */ r_esp -= 4; W32(r_esp, 0x5f9d61u); f_0060c840();
    /* 005f9d61: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f9d64: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f9d67: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 005f9d6a: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005f9d6d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f9d6e: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 005f9d71: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f9d72: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 005f9d75: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f9d76: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 005f9d79: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f9d7a: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005f9d7d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f9d7e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f9d81: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x5f9d86u); f_005eae80();
    /* 005f9d86: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 005f9d89: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f9d8a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005f9d8d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f9d8f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f9d92: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 005f9d98: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5f9d9au); call_ind(t); }
    /* 005f9d9a: mov al, byte ptr [ebp + 0x24] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x24u))) & 0xffu);
    /* 005f9d9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f9d9e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f9da1: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x5f9da6u); f_005eb5d0();
    /* 005f9da6: mov cl, byte ptr [ebp + 0x28] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x28u))) & 0xffu);
    /* 005f9da9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f9daa: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f9dad: call 0x5eb700 */ r_esp -= 4; W32(r_esp, 0x5f9db2u); f_005eb700();
    /* 005f9db2: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005f9db5: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f9db7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f9dba: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 005f9dbd: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5f9dbfu); call_ind(t); }
    /* 005f9dbf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f9dc2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f9dc5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f9dcc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f9dcd: mov esp, ebp */ r_esp = r_ebp;
    /* 005f9dcf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f9dd0: ret 0x24 */ FN_RET(0x005f9ce0); r_esp += 40; return;
}

void f_005f9de0(void) /* sub_5F9DE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f9de0);
    /* 005f9de0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f9de1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f9de3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f9de5: push 0x6aa2e1 */ { u32 v = 0x6aa2e1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f9dea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f9df0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f9df1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f9df4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005f9df9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005f9dfb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f9dfc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005f9dff: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005f9e05: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005f9e08: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f9e0c: jne 0x5f9e52 */ if (!fZ) goto L_005f9e52;
L_005f9e0e:; BB(0x005f9e0e);
    /* 005f9e0e: push 0x1dc */ { u32 v = 0x1dcu; r_esp -= 4; W32(r_esp, v); }
    /* 005f9e13: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5f9e18u); f_00686d82();
    /* 005f9e18: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f9e1b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005f9e1e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f9e25: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f9e29: je 0x5f9e38 */ if (fZ) goto L_005f9e38;
L_005f9e2b:; BB(0x005f9e2b);
    /* 005f9e2b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005f9e2e: call 0x601a80 */ r_esp -= 4; W32(r_esp, 0x5f9e33u); f_00601a80();
    /* 005f9e33: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005f9e36: jmp 0x5f9e3f */ goto L_005f9e3f;
L_005f9e38:; BB(0x005f9e38);
    /* 005f9e38: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005f9e3f:; BB(0x005f9e3f);
    /* 005f9e3f: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f9e42: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005f9e45: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f9e4c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f9e4f: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
L_005f9e52:; BB(0x005f9e52);
    /* 005f9e52: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005f9e55: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f9e56: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f9e59: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f9e5c: call 0x60c840 */ r_esp -= 4; W32(r_esp, 0x5f9e61u); f_0060c840();
    /* 005f9e61: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f9e64: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f9e67: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 005f9e6a: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005f9e6d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f9e6e: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 005f9e71: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f9e72: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 005f9e75: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f9e76: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 005f9e79: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f9e7a: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005f9e7d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f9e7e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f9e81: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x5f9e86u); f_005eae80();
    /* 005f9e86: cmp dword ptr [ebp + 0x24], -1 */ {  u32 a = R32((u32)(r_ebp+0x24u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f9e8a: je 0x5f9eb4 */ if (fZ) goto L_005f9eb4;
L_005f9e8c:; BB(0x005f9e8c);
    /* 005f9e8c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f9e8e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f9e90: mov ecx, dword ptr [ebp + 0x30] */ r_ecx = R32((u32)(r_ebp+0x30u));
    /* 005f9e93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f9e94: mov edx, dword ptr [ebp + 0x2c] */ r_edx = R32((u32)(r_ebp+0x2cu));
    /* 005f9e97: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f9e98: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 005f9e9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f9e9c: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 005f9e9f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f9ea0: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 005f9ea3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f9ea4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f9ea7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005f9ea9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f9eac: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 005f9eb2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f9eb4u); call_ind(t); }
L_005f9eb4:; BB(0x005f9eb4);
    /* 005f9eb4: mov cl, byte ptr [ebp + 0x34] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x34u))) & 0xffu);
    /* 005f9eb7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f9eb8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f9ebb: call 0x6026f0 */ r_esp -= 4; W32(r_esp, 0x5f9ec0u); f_006026f0();
    /* 005f9ec0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005f9ec3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f9ec5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f9ec8: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 005f9ecb: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5f9ecdu); call_ind(t); }
    /* 005f9ecd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f9ed0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f9ed3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f9eda: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f9edb: mov esp, ebp */ r_esp = r_ebp;
    /* 005f9edd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f9ede: ret 0x30 */ FN_RET(0x005f9de0); r_esp += 52; return;
}

void f_005f9ef0(void) /* sub_5F9EF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f9ef0);
    /* 005f9ef0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f9ef1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f9ef3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f9ef5: push 0x6aa307 */ { u32 v = 0x6aa307u; r_esp -= 4; W32(r_esp, v); }
    /* 005f9efa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f9f00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f9f01: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f9f04: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005f9f09: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005f9f0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f9f0c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005f9f0f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005f9f15: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005f9f18: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f9f1c: jne 0x5f9f62 */ if (!fZ) goto L_005f9f62;
L_005f9f1e:; BB(0x005f9f1e);
    /* 005f9f1e: push 0x208 */ { u32 v = 0x208u; r_esp -= 4; W32(r_esp, v); }
    /* 005f9f23: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5f9f28u); f_00686d82();
    /* 005f9f28: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f9f2b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005f9f2e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f9f35: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f9f39: je 0x5f9f48 */ if (fZ) goto L_005f9f48;
L_005f9f3b:; BB(0x005f9f3b);
    /* 005f9f3b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005f9f3e: call 0x5ffbb0 */ r_esp -= 4; W32(r_esp, 0x5f9f43u); f_005ffbb0();
    /* 005f9f43: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005f9f46: jmp 0x5f9f4f */ goto L_005f9f4f;
L_005f9f48:; BB(0x005f9f48);
    /* 005f9f48: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005f9f4f:; BB(0x005f9f4f);
    /* 005f9f4f: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f9f52: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005f9f55: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f9f5c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f9f5f: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
L_005f9f62:; BB(0x005f9f62);
    /* 005f9f62: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005f9f65: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f9f66: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f9f69: add ecx, 0x24 */ {  u32 a = r_ecx; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f9f6c: call 0x60c840 */ r_esp -= 4; W32(r_esp, 0x5f9f71u); f_0060c840();
    /* 005f9f71: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f9f74: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f9f77: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 005f9f7a: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005f9f7d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f9f7e: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 005f9f81: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f9f82: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 005f9f85: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f9f86: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 005f9f89: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f9f8a: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005f9f8d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f9f8e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f9f91: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x5f9f96u); f_005eae80();
    /* 005f9f96: mov ecx, dword ptr [ebp + 0x38] */ r_ecx = R32((u32)(r_ebp+0x38u));
    /* 005f9f99: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f9f9a: mov edx, dword ptr [ebp + 0x34] */ r_edx = R32((u32)(r_ebp+0x34u));
    /* 005f9f9d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f9f9e: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 005f9fa1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f9fa2: mov ecx, dword ptr [ebp + 0x2c] */ r_ecx = R32((u32)(r_ebp+0x2cu));
    /* 005f9fa5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f9fa6: mov edx, dword ptr [ebp + 0x28] */ r_edx = R32((u32)(r_ebp+0x28u));
    /* 005f9fa9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f9faa: mov eax, dword ptr [ebp + 0x24] */ r_eax = R32((u32)(r_ebp+0x24u));
    /* 005f9fad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f9fae: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 005f9fb1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f9fb2: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005f9fb5: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f9fb7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f9fba: mov edx, dword ptr [eax + 0xdc] */ r_edx = R32((u32)(r_eax+0xdcu));
    /* 005f9fc0: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5f9fc2u); call_ind(t); }
    /* 005f9fc2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f9fc5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005f9fc7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f9fca: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005f9fcd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f9fcfu); call_ind(t); }
    /* 005f9fcf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f9fd2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f9fd5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f9fdc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f9fdd: mov esp, ebp */ r_esp = r_ebp;
    /* 005f9fdf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f9fe0: ret 0x34 */ FN_RET(0x005f9ef0); r_esp += 56; return;
}

void f_005f9ff0(void) /* sub_5F9FF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f9ff0);
    /* 005f9ff0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f9ff1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f9ff3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f9ff5: push 0x6aa338 */ { u32 v = 0x6aa338u; r_esp -= 4; W32(r_esp, v); }
    /* 005f9ffa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005fa000: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fa001: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fa004: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005fa009: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005fa00b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fa00c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005fa00f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005fa015: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005fa018: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fa01c: jne 0x5fa071 */ if (!fZ) goto L_005fa071;
L_005fa01e:; BB(0x005fa01e);
    /* 005fa01e: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005fa025: jmp 0x5fa030 */ goto L_005fa030;
L_005fa027:; BB(0x005fa027);
    /* 005fa027: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fa02a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fa02d: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_005fa030:; BB(0x005fa030);
    /* 005fa030: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005fa033: add ecx, 0x34 */ {  u32 a = r_ecx; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fa036: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x5fa03bu); f_0060c9a0();
    /* 005fa03b: cmp dword ptr [ebp - 0x10], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005fa03e: jge 0x5fa071 */ if ((fS==fO)) goto L_005fa071;
L_005fa040:; BB(0x005fa040);
    /* 005fa040: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fa043: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa044: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005fa047: add ecx, 0x34 */ {  u32 a = r_ecx; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fa04a: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x5fa04fu); f_0060ca40();
    /* 005fa04f: mov ecx, eax */ r_ecx = r_eax;
    /* 005fa051: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x5fa056u); f_005f5400();
    /* 005fa056: cmp eax, dword ptr [ebp + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fa059: jne 0x5fa06f */ if (!fZ) goto L_005fa06f;
L_005fa05b:; BB(0x005fa05b);
    /* 005fa05b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fa05e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa05f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005fa062: add ecx, 0x34 */ {  u32 a = r_ecx; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fa065: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x5fa06au); f_0060ca40();
    /* 005fa06a: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 005fa06d: jmp 0x5fa071 */ goto L_005fa071;
L_005fa06f:; BB(0x005fa06f);
    /* 005fa06f: jmp 0x5fa027 */ goto L_005fa027;
L_005fa071:; BB(0x005fa071);
    /* 005fa071: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005fa074: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fa075: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005fa078: add ecx, 0x34 */ {  u32 a = r_ecx; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fa07b: call 0x60c9e0 */ r_esp -= 4; W32(r_esp, 0x5fa080u); f_0060c9e0();
    /* 005fa080: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005fa083: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fa085: jne 0x5fa114 */ if (!fZ) goto L_005fa114;
L_005fa08b:; BB(0x005fa08b);
    /* 005fa08b: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fa08f: jne 0x5fa0d2 */ if (!fZ) goto L_005fa0d2;
L_005fa091:; BB(0x005fa091);
    /* 005fa091: push 0x58 */ { u32 v = 0x58u; r_esp -= 4; W32(r_esp, v); }
    /* 005fa093: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5fa098u); f_00686d82();
    /* 005fa098: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fa09b: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005fa09e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005fa0a5: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fa0a9: je 0x5fa0b8 */ if (fZ) goto L_005fa0b8;
L_005fa0ab:; BB(0x005fa0ab);
    /* 005fa0ab: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fa0ae: call 0x6061c0 */ r_esp -= 4; W32(r_esp, 0x5fa0b3u); f_006061c0();
    /* 005fa0b3: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005fa0b6: jmp 0x5fa0bf */ goto L_005fa0bf;
L_005fa0b8:; BB(0x005fa0b8);
    /* 005fa0b8: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005fa0bf:; BB(0x005fa0bf);
    /* 005fa0bf: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005fa0c2: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005fa0c5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005fa0cc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005fa0cf: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
L_005fa0d2:; BB(0x005fa0d2);
    /* 005fa0d2: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005fa0d5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa0d6: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005fa0d9: add ecx, 0x34 */ {  u32 a = r_ecx; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fa0dc: call 0x60c840 */ r_esp -= 4; W32(r_esp, 0x5fa0e1u); f_0060c840();
    /* 005fa0e1: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005fa0e4: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005fa0e7: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005fa0ea: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 005fa0ed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa0ee: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005fa0f1: call 0x5f53e0 */ r_esp -= 4; W32(r_esp, 0x5fa0f6u); f_005f53e0();
    /* 005fa0f6: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005fa0f9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005fa0fb: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005fa0fe: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 005fa101: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5fa103u); call_ind(t); }
    /* 005fa103: mov eax, dword ptr [ebp + 0x24] */ r_eax = R32((u32)(r_ebp+0x24u));
    /* 005fa106: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fa107: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005fa10a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005fa10c: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005fa10f: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 005fa112: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fa114u); call_ind(t); }
L_005fa114:; BB(0x005fa114);
    /* 005fa114: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fa118: jne 0x5fa15e */ if (!fZ) goto L_005fa15e;
L_005fa11a:; BB(0x005fa11a);
    /* 005fa11a: push 0x210 */ { u32 v = 0x210u; r_esp -= 4; W32(r_esp, v); }
    /* 005fa11f: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5fa124u); f_00686d82();
    /* 005fa124: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fa127: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005fa12a: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005fa131: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fa135: je 0x5fa144 */ if (fZ) goto L_005fa144;
L_005fa137:; BB(0x005fa137);
    /* 005fa137: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005fa13a: call 0x6060a0 */ r_esp -= 4; W32(r_esp, 0x5fa13fu); f_006060a0();
    /* 005fa13f: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005fa142: jmp 0x5fa14b */ goto L_005fa14b;
L_005fa144:; BB(0x005fa144);
    /* 005fa144: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_005fa14b:; BB(0x005fa14b);
    /* 005fa14b: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005fa14e: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005fa151: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005fa158: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005fa15b: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
L_005fa15e:; BB(0x005fa15e);
    /* 005fa15e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fa161: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fa162: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005fa165: call 0x6062a0 */ r_esp -= 4; W32(r_esp, 0x5fa16au); f_006062a0();
    /* 005fa16a: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005fa16d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa16e: mov edx, dword ptr [ebp + 0x24] */ r_edx = R32((u32)(r_ebp+0x24u));
    /* 005fa171: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa172: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 005fa175: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fa176: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 005fa179: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa17a: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 005fa17d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa17e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005fa181: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x5fa186u); f_005eae80();
    /* 005fa186: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 005fa189: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fa18a: mov ecx, dword ptr [ebp + 0x3c] */ r_ecx = R32((u32)(r_ebp+0x3cu));
    /* 005fa18d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa18e: mov edx, dword ptr [ebp + 0x38] */ r_edx = R32((u32)(r_ebp+0x38u));
    /* 005fa191: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa192: mov eax, dword ptr [ebp + 0x34] */ r_eax = R32((u32)(r_ebp+0x34u));
    /* 005fa195: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fa196: mov ecx, dword ptr [ebp + 0x30] */ r_ecx = R32((u32)(r_ebp+0x30u));
    /* 005fa199: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa19a: mov edx, dword ptr [ebp + 0x2c] */ r_edx = R32((u32)(r_ebp+0x2cu));
    /* 005fa19d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa19e: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 005fa1a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fa1a2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005fa1a5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005fa1a7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005fa1aa: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 005fa1b0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fa1b2u); call_ind(t); }
    /* 005fa1b2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005fa1b5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005fa1b7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005fa1ba: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005fa1bd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fa1bfu); call_ind(t); }
    /* 005fa1bf: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005fa1c2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fa1c5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fa1cc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005fa1cd: mov esp, ebp */ r_esp = r_ebp;
    /* 005fa1cf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fa1d0: ret 0x3c */ FN_RET(0x005f9ff0); r_esp += 64; return;
}

