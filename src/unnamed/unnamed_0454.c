#include "protos.h"

void f_00454200(void) /* sub_454200 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00454200);
    /* 00454200: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00454201: mov ebp, esp */ r_ebp = r_esp;
    /* 00454203: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00454206: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00454209: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 00454210: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00454217: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 0045421a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045421b: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 0045421e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045421f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00454221: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00454224: call 0x450cd0 */ r_esp -= 4; W32(r_esp, 0x454229u); f_00450cd0();
    /* 00454229: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0045422c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045422d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00454230: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454231: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00454234: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00454235: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00454238: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00454239: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045423c: call 0x44f840 */ r_esp -= 4; W32(r_esp, 0x454241u); f_0044f840();
    /* 00454241: xor ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a ^ b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00454244: mov esp, ebp */ r_esp = r_ebp;
    /* 00454246: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00454247: ret 8 */ FN_RET(0x00454200); r_esp += 12; return;
}

void f_00454250(void) /* sub_454250 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00454250);
    /* 00454250: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00454251: mov ebp, esp */ r_ebp = r_esp;
    /* 00454253: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00454256: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00454259: mov dword ptr [ebp - 0xc], 0xffffffff */ W32((u32)(r_ebp+0xfffffff4u), 0xffffffffu);
    /* 00454260: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00454267: mov dword ptr [ebp - 0x14], 0xffffffff */ W32((u32)(r_ebp+0xffffffecu), 0xffffffffu);
    /* 0045426e: mov dword ptr [ebp - 0x24], 0xffffffff */ W32((u32)(r_ebp+0xffffffdcu), 0xffffffffu);
    /* 00454275: mov dword ptr [ebp - 0x20], 0xffffffff */ W32((u32)(r_ebp+0xffffffe0u), 0xffffffffu);
    /* 0045427c: mov dword ptr [ebp - 0x1c], 0xffffffff */ W32((u32)(r_ebp+0xffffffe4u), 0xffffffffu);
    /* 00454283: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
    /* 0045428a: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00454291: jmp 0x45429c */ goto L_0045429c;
L_00454293:; BB(0x00454293);
    /* 00454293: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00454296: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00454299: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0045429c:; BB(0x0045429c);
    /* 0045429c: cmp dword ptr [ebp - 8], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004542a0: jge 0x4542d0 */ if ((fS==fO)) goto L_004542d0;
L_004542a2:; BB(0x004542a2);
    /* 004542a2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004542a5: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004542a8: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 004542ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004542ae: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004542b1: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x4542b6u); f_0044f680();
    /* 004542b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004542b7: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004542ba: call 0x450c20 */ r_esp -= 4; W32(r_esp, 0x4542bfu); f_00450c20();
    /* 004542bf: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004542c2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004542c4: je 0x4542ce */ if (fZ) goto L_004542ce;
L_004542c6:; BB(0x004542c6);
    /* 004542c6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004542c9: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 004542cc: jmp 0x4542d0 */ goto L_004542d0;
L_004542ce:; BB(0x004542ce);
    /* 004542ce: jmp 0x454293 */ goto L_00454293;
L_004542d0:; BB(0x004542d0);
    /* 004542d0: lea eax, [ebp - 0x14] */ r_eax = (u32)(r_ebp+0xffffffecu);
    /* 004542d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004542d4: lea ecx, [ebp - 0xc] */ r_ecx = (u32)(r_ebp+0xfffffff4u);
    /* 004542d7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004542d8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004542da: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004542dd: call 0x450c50 */ r_esp -= 4; W32(r_esp, 0x4542e2u); f_00450c50();
    /* 004542e2: lea edx, [ebp - 0x24] */ r_edx = (u32)(r_ebp+0xffffffdcu);
    /* 004542e5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004542e6: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 004542e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004542ea: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004542ec: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004542ef: call 0x450c50 */ r_esp -= 4; W32(r_esp, 0x4542f4u); f_00450c50();
    /* 004542f4: mov word ptr [ebp - 0x18], 3 */ W16((u32)(r_ebp+0xffffffe8u), 0x3u);
    /* 004542fa: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004542fd: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00454300: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00454303: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00454306: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 00454308: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0045430b: call 0x44f700 */ r_esp -= 4; W32(r_esp, 0x454310u); f_0044f700();
    /* 00454310: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454313: jne 0x454329 */ if (!fZ) goto L_00454329;
L_00454315:; BB(0x00454315);
    /* 00454315: mov word ptr [ebp - 0x18], 0 */ W16((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 0045431b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045431e: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00454321: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00454324: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00454327: jmp 0x454379 */ goto L_00454379;
L_00454329:; BB(0x00454329);
    /* 00454329: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0045432b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0045432e: call 0x44f700 */ r_esp -= 4; W32(r_esp, 0x454333u); f_0044f700();
    /* 00454333: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454336: jne 0x454358 */ if (!fZ) goto L_00454358;
L_00454338:; BB(0x00454338);
    /* 00454338: cmp dword ptr [ebp - 0xc], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045433c: jg 0x454358 */ if ((!fZ&&fS==fO)) goto L_00454358;
L_0045433e:; BB(0x0045433e);
    /* 0045433e: cmp dword ptr [ebp - 4], 9 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00454342: jg 0x454358 */ if ((!fZ&&fS==fO)) goto L_00454358;
L_00454344:; BB(0x00454344);
    /* 00454344: mov word ptr [ebp - 0x18], 1 */ W16((u32)(r_ebp+0xffffffe8u), 0x1u);
    /* 0045434a: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045434d: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00454350: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00454353: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00454356: jmp 0x454379 */ goto L_00454379;
L_00454358:; BB(0x00454358);
    /* 00454358: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0045435a: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0045435d: call 0x44f700 */ r_esp -= 4; W32(r_esp, 0x454362u); f_0044f700();
    /* 00454362: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454365: jne 0x454379 */ if (!fZ) goto L_00454379;
L_00454367:; BB(0x00454367);
    /* 00454367: mov word ptr [ebp - 0x18], 2 */ W16((u32)(r_ebp+0xffffffe8u), 0x2u);
    /* 0045436d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00454370: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00454373: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00454376: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_00454379:; BB(0x00454379);
    /* 00454379: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045437c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045437d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00454380: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00454381: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00454384: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00454385: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00454388: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454389: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0045438c: call 0x44f840 */ r_esp -= 4; W32(r_esp, 0x454391u); f_0044f840();
    /* 00454391: mov ax, word ptr [ebp - 0x18] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe8u))) & 0xffffu);
    /* 00454395: mov esp, ebp */ r_esp = r_ebp;
    /* 00454397: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00454398: ret 8 */ FN_RET(0x00454250); r_esp += 12; return;
}

void f_004543a0(void) /* sub_4543A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004543a0);
    /* 004543a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004543a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004543a3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004543a6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004543a9: mov dword ptr [ebp - 8], 0xffffffff */ W32((u32)(r_ebp+0xfffffff8u), 0xffffffffu);
    /* 004543b0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004543b7: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 004543ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004543bb: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 004543be: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004543bf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004543c2: call 0x4512c0 */ r_esp -= 4; W32(r_esp, 0x4543c7u); f_004512c0();
    /* 004543c7: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 004543ca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004543cb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004543ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004543cf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004543d2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004543d3: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004543d6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004543d7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004543da: call 0x44f840 */ r_esp -= 4; W32(r_esp, 0x4543dfu); f_0044f840();
    /* 004543df: xor ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a ^ b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004543e2: mov esp, ebp */ r_esp = r_ebp;
    /* 004543e4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004543e5: ret 8 */ FN_RET(0x004543a0); r_esp += 12; return;
}

void f_004543f0(void) /* sub_4543F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004543f0);
    /* 004543f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004543f1: mov ebp, esp */ r_ebp = r_esp;
    /* 004543f3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004543f6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004543f9: mov dword ptr [ebp - 8], 0xffffffff */ W32((u32)(r_ebp+0xfffffff8u), 0xffffffffu);
    /* 00454400: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00454407: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 0045440a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045440b: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 0045440e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045440f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00454412: call 0x4516a0 */ r_esp -= 4; W32(r_esp, 0x454417u); f_004516a0();
    /* 00454417: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0045441a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045441b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045441e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045441f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00454422: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00454423: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00454426: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00454427: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045442a: call 0x44f840 */ r_esp -= 4; W32(r_esp, 0x45442fu); f_0044f840();
    /* 0045442f: xor ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a ^ b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00454432: mov esp, ebp */ r_esp = r_ebp;
    /* 00454434: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00454435: ret 8 */ FN_RET(0x004543f0); r_esp += 12; return;
}

void f_00454440(void) /* sub_454440 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00454440);
    /* 00454440: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00454441: mov ebp, esp */ r_ebp = r_esp;
    /* 00454443: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00454446: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00454449: mov dword ptr [ebp - 0x1c], 0xffffffff */ W32((u32)(r_ebp+0xffffffe4u), 0xffffffffu);
    /* 00454450: mov dword ptr [ebp - 0x10], 0xffffffff */ W32((u32)(r_ebp+0xfffffff0u), 0xffffffffu);
    /* 00454457: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 0045445a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045445b: lea ecx, [ebp - 0xc] */ r_ecx = (u32)(r_ebp+0xfffffff4u);
    /* 0045445e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045445f: lea edx, [ebp - 0x14] */ r_edx = (u32)(r_ebp+0xffffffecu);
    /* 00454462: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00454463: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00454466: call 0x4517a0 */ r_esp -= 4; W32(r_esp, 0x45446bu); f_004517a0();
    /* 0045446b: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 0045446e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045446f: lea ecx, [ebp - 0x1c] */ r_ecx = (u32)(r_ebp+0xffffffe4u);
    /* 00454472: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00454473: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00454476: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00454477: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045447a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045447b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045447e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045447f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00454482: call 0x451870 */ r_esp -= 4; W32(r_esp, 0x454487u); f_00451870();
    /* 00454487: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0045448a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045448c: je 0x4544ae */ if (fZ) goto L_004544ae;
L_0045448e:; BB(0x0045448e);
    /* 0045448e: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00454491: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454492: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00454495: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00454496: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00454499: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045449a: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0045449d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045449e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004544a1: call 0x44f840 */ r_esp -= 4; W32(r_esp, 0x4544a6u); f_0044f840();
    /* 004544a6: xor ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a ^ b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004544a9: jmp 0x454557 */ goto L_00454557;
L_004544ae:; BB(0x004544ae);
    /* 004544ae: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004544b1: mov edx, dword ptr [ecx + 0x2f4] */ r_edx = R32((u32)(r_ecx+0x2f4u));
    /* 004544b7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004544ba: cmp dword ptr [eax + edx*4 + 0x2d4], 0xe */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x2d4u)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004544c2: jne 0x454525 */ if (!fZ) goto L_00454525;
L_004544c4:; BB(0x004544c4);
    /* 004544c4: cmp dword ptr [ebp - 4], 9 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004544c8: jle 0x454525 */ if ((fZ||fS!=fO)) goto L_00454525;
L_004544ca:; BB(0x004544ca);
    /* 004544ca: cmp dword ptr [ebp - 4], 0xd */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004544ce: jge 0x454525 */ if ((fS==fO)) goto L_00454525;
L_004544d0:; BB(0x004544d0);
    /* 004544d0: mov word ptr [ebp - 0x18], 2 */ W16((u32)(r_ebp+0xffffffe8u), 0x2u);
    /* 004544d6: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 004544dd: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 004544e4: jmp 0x4544ef */ goto L_004544ef;
L_004544e6:; BB(0x004544e6);
    /* 004544e6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004544e9: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004544ec: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_004544ef:; BB(0x004544ef);
    /* 004544ef: cmp dword ptr [ebp - 8], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004544f3: jge 0x454523 */ if ((fS==fO)) goto L_00454523;
L_004544f5:; BB(0x004544f5);
    /* 004544f5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004544f8: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004544fb: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 00454500: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00454501: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00454504: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x454509u); f_0044f680();
    /* 00454509: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045450a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045450d: call 0x450c20 */ r_esp -= 4; W32(r_esp, 0x454512u); f_00450c20();
    /* 00454512: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00454515: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454517: jne 0x454521 */ if (!fZ) goto L_00454521;
L_00454519:; BB(0x00454519);
    /* 00454519: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045451c: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0045451f: jmp 0x454523 */ goto L_00454523;
L_00454521:; BB(0x00454521);
    /* 00454521: jmp 0x4544e6 */ goto L_004544e6;
L_00454523:; BB(0x00454523);
    /* 00454523: jmp 0x45453b */ goto L_0045453b;
L_00454525:; BB(0x00454525);
    /* 00454525: mov word ptr [ebp - 0x18], 1 */ W16((u32)(r_ebp+0xffffffe8u), 0x1u);
    /* 0045452b: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0045452e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045452f: lea edx, [ebp - 0x1c] */ r_edx = (u32)(r_ebp+0xffffffe4u);
    /* 00454532: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00454533: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00454536: call 0x4512c0 */ r_esp -= 4; W32(r_esp, 0x45453bu); f_004512c0();
L_0045453b:; BB(0x0045453b);
    /* 0045453b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045453e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045453f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00454542: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00454543: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00454546: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00454547: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0045454a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045454b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045454e: call 0x44f840 */ r_esp -= 4; W32(r_esp, 0x454553u); f_0044f840();
    /* 00454553: mov ax, word ptr [ebp - 0x18] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe8u))) & 0xffffu);
L_00454557:; BB(0x00454557);
    /* 00454557: mov esp, ebp */ r_esp = r_ebp;
    /* 00454559: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045455a: ret 8 */ FN_RET(0x00454440); r_esp += 12; return;
}

void f_00454560(void) /* sub_454560 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00454560);
    /* 00454560: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00454561: mov ebp, esp */ r_ebp = r_esp;
    /* 00454563: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00454566: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00454569: mov dword ptr [ebp - 0x24], 0xffffffff */ W32((u32)(r_ebp+0xffffffdcu), 0xffffffffu);
    /* 00454570: mov dword ptr [ebp - 0x28], 0xffffffff */ W32((u32)(r_ebp+0xffffffd8u), 0xffffffffu);
    /* 00454577: mov dword ptr [ebp - 0x2c], 0xffffffff */ W32((u32)(r_ebp+0xffffffd4u), 0xffffffffu);
    /* 0045457e: mov dword ptr [ebp - 0x18], 0xffffffff */ W32((u32)(r_ebp+0xffffffe8u), 0xffffffffu);
    /* 00454585: mov dword ptr [ebp - 0x20], 0xffffffff */ W32((u32)(r_ebp+0xffffffe0u), 0xffffffffu);
    /* 0045458c: mov dword ptr [ebp - 0x14], 0xffffffff */ W32((u32)(r_ebp+0xffffffecu), 0xffffffffu);
    /* 00454593: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 00454596: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454597: lea ecx, [ebp - 4] */ r_ecx = (u32)(r_ebp+0xfffffffcu);
    /* 0045459a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045459b: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 0045459e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045459f: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004545a2: call 0x4517a0 */ r_esp -= 4; W32(r_esp, 0x4545a7u); f_004517a0();
    /* 004545a7: lea eax, [ebp - 0x14] */ r_eax = (u32)(r_ebp+0xffffffecu);
    /* 004545aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004545ab: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 004545ae: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004545af: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004545b2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004545b3: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004545b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004545b7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004545ba: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004545bb: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004545be: call 0x451c20 */ r_esp -= 4; W32(r_esp, 0x4545c3u); f_00451c20();
    /* 004545c3: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004545c6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004545c8: je 0x4545ea */ if (fZ) goto L_004545ea;
L_004545ca:; BB(0x004545ca);
    /* 004545ca: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004545cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004545ce: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004545d1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004545d2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004545d5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004545d6: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004545d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004545da: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004545dd: call 0x44f840 */ r_esp -= 4; W32(r_esp, 0x4545e2u); f_0044f840();
    /* 004545e2: xor ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a ^ b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004545e5: jmp 0x454939 */ goto L_00454939;
L_004545ea:; BB(0x004545ea);
    /* 004545ea: lea ecx, [ebp - 0x28] */ r_ecx = (u32)(r_ebp+0xffffffd8u);
    /* 004545ed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004545ee: lea edx, [ebp - 0x24] */ r_edx = (u32)(r_ebp+0xffffffdcu);
    /* 004545f1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004545f2: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004545f5: call 0x451540 */ r_esp -= 4; W32(r_esp, 0x4545fau); f_00451540();
    /* 004545fa: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004545fd: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00454600: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 00454605: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00454606: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00454609: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x45460eu); f_0044f680();
    /* 0045460e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045460f: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00454612: call 0x450c20 */ r_esp -= 4; W32(r_esp, 0x454617u); f_00450c20();
    /* 00454617: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0045461a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045461c: je 0x454632 */ if (fZ) goto L_00454632;
L_0045461e:; BB(0x0045461e);
    /* 0045461e: mov word ptr [ebp - 0x1c], 1 */ W16((u32)(r_ebp+0xffffffe4u), 0x1u);
    /* 00454624: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00454627: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0045462a: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0045462d: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00454630: jmp 0x454644 */ goto L_00454644;
L_00454632:; BB(0x00454632);
    /* 00454632: mov word ptr [ebp - 0x1c], 1 */ W16((u32)(r_ebp+0xffffffe4u), 0x1u);
    /* 00454638: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0045463b: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0045463e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00454641: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_00454644:; BB(0x00454644);
    /* 00454644: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0045464b: jmp 0x454656 */ goto L_00454656;
L_0045464d:; BB(0x0045464d);
    /* 0045464d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00454650: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00454653: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_00454656:; BB(0x00454656);
    /* 00454656: cmp dword ptr [ebp - 0xc], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045465a: jge 0x4546f9 */ if ((fS==fO)) goto L_004546f9;
L_00454660:; BB(0x00454660);
    /* 00454660: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00454663: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00454666: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0045466b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045466c: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0045466f: call 0x44f6c0 */ r_esp -= 4; W32(r_esp, 0x454674u); f_0044f6c0();
    /* 00454674: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00454677: cmp eax, dword ptr [ecx + 0x2d0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x2d0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045467d: je 0x454698 */ if (fZ) goto L_00454698;
L_0045467f:; BB(0x0045467f);
    /* 0045467f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00454682: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00454685: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 0045468a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045468b: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0045468e: call 0x44f6c0 */ r_esp -= 4; W32(r_esp, 0x454693u); f_0044f6c0();
    /* 00454693: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454696: jne 0x4546f4 */ if (!fZ) goto L_004546f4;
L_00454698:; BB(0x00454698);
    /* 00454698: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045469b: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0045469e: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 004546a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004546a4: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004546a7: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x4546acu); f_0044f680();
    /* 004546ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004546ad: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004546b0: call 0x450c20 */ r_esp -= 4; W32(r_esp, 0x4546b5u); f_00450c20();
    /* 004546b5: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004546b8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004546ba: jne 0x4546f4 */ if (!fZ) goto L_004546f4;
L_004546bc:; BB(0x004546bc);
    /* 004546bc: cmp dword ptr [ebp - 0x2c], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004546c0: jne 0x4546db */ if (!fZ) goto L_004546db;
L_004546c2:; BB(0x004546c2);
    /* 004546c2: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004546c5: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004546c8: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 004546cd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004546ce: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004546d1: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x4546d6u); f_0044f680();
    /* 004546d6: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 004546d9: jmp 0x4546f4 */ goto L_004546f4;
L_004546db:; BB(0x004546db);
    /* 004546db: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004546de: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004546e1: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 004546e6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004546e7: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004546ea: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x4546efu); f_0044f680();
    /* 004546ef: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004546f2: jmp 0x4546f9 */ goto L_004546f9;
L_004546f4:; BB(0x004546f4);
    /* 004546f4: jmp 0x45464d */ goto L_0045464d;
L_004546f9:; BB(0x004546f9);
    /* 004546f9: cmp dword ptr [ebp - 0x2c], 0xe */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004546fd: jne 0x45491d */ if (!fZ) goto L_0045491d;
L_00454703:; BB(0x00454703);
    /* 00454703: cmp dword ptr [ebp - 0x18], 0xb */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00454707: jl 0x45491d */ if ((fS!=fO)) goto L_0045491d;
L_0045470d:; BB(0x0045470d);
    /* 0045470d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00454710: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00454713: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 00454718: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00454719: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0045471c: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x454721u); f_0044f680();
    /* 00454721: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00454724: jge 0x45491d */ if ((fS==fO)) goto L_0045491d;
L_0045472a:; BB(0x0045472a);
    /* 0045472a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045472d: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00454730: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 00454735: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00454736: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00454739: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x45473eu); f_0044f680();
    /* 0045473e: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00454741: jle 0x45491d */ if ((fZ||fS!=fO)) goto L_0045491d;
L_00454747:; BB(0x00454747);
    /* 00454747: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045474a: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0045474d: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 00454752: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00454753: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00454756: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x45475bu); f_0044f680();
    /* 0045475b: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0045475e: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00454761: sub eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00454764: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00454767: cmp dword ptr [ebp - 0x34], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0045476b: ja 0x45491d */ if ((!fC&&!fZ)) goto L_0045491d;
L_00454771:; BB(0x00454771);
    /* 00454771: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00454774: jmp dword ptr [ecx*4 + 0x454940] */ { u32 t = R32((u32)(r_ecx*4+0x454940u)); switch (t) { case 0x45477bu: goto L_0045477b; case 0x4547b3u: goto L_004547b3; case 0x45480au: goto L_0045480a; case 0x454880u: goto L_00454880; case 0x4548d4u: goto L_004548d4; case 0x454903u: goto L_00454903; default: UNSUP(0x00454774, "jump table entry is not a known target"); } }
L_0045477b:; BB(0x0045477b);
    /* 0045477b: cmp dword ptr [ebp - 0x18], 0xd */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045477f: jne 0x4547ae */ if (!fZ) goto L_004547ae;
L_00454781:; BB(0x00454781);
    /* 00454781: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00454784: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00454787: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 0045478c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045478d: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00454790: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x454795u); f_0044f680();
    /* 00454795: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00454798: jg 0x4547ae */ if ((!fZ&&fS==fO)) goto L_004547ae;
L_0045479a:; BB(0x0045479a);
    /* 0045479a: mov word ptr [ebp - 0x1c], 2 */ W16((u32)(r_ebp+0xffffffe4u), 0x2u);
    /* 004547a0: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 004547a7: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
L_004547ae:; BB(0x004547ae);
    /* 004547ae: jmp 0x45491d */ goto L_0045491d;
L_004547b3:; BB(0x004547b3);
    /* 004547b3: cmp dword ptr [ebp - 0x18], 0xc */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004547b7: jne 0x4547d2 */ if (!fZ) goto L_004547d2;
L_004547b9:; BB(0x004547b9);
    /* 004547b9: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004547bc: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004547bf: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 004547c4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004547c5: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004547c8: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x4547cdu); f_0044f680();
    /* 004547cd: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004547d0: jle 0x4547f1 */ if ((fZ||fS!=fO)) goto L_004547f1;
L_004547d2:; BB(0x004547d2);
    /* 004547d2: cmp dword ptr [ebp - 0x18], 0xd */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004547d6: jne 0x454805 */ if (!fZ) goto L_00454805;
L_004547d8:; BB(0x004547d8);
    /* 004547d8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004547db: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004547de: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 004547e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004547e4: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004547e7: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x4547ecu); f_0044f680();
    /* 004547ec: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004547ef: jg 0x454805 */ if ((!fZ&&fS==fO)) goto L_00454805;
L_004547f1:; BB(0x004547f1);
    /* 004547f1: mov word ptr [ebp - 0x1c], 2 */ W16((u32)(r_ebp+0xffffffe4u), 0x2u);
    /* 004547f7: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 004547fe: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
L_00454805:; BB(0x00454805);
    /* 00454805: jmp 0x45491d */ goto L_0045491d;
L_0045480a:; BB(0x0045480a);
    /* 0045480a: cmp dword ptr [ebp - 0x18], 0xb */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045480e: jne 0x454829 */ if (!fZ) goto L_00454829;
L_00454810:; BB(0x00454810);
    /* 00454810: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00454813: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00454816: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 0045481b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045481c: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0045481f: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x454824u); f_0044f680();
    /* 00454824: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00454827: jle 0x454867 */ if ((fZ||fS!=fO)) goto L_00454867;
L_00454829:; BB(0x00454829);
    /* 00454829: cmp dword ptr [ebp - 0x18], 0xc */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045482d: jne 0x454848 */ if (!fZ) goto L_00454848;
L_0045482f:; BB(0x0045482f);
    /* 0045482f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00454832: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00454835: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 0045483a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045483b: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0045483e: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x454843u); f_0044f680();
    /* 00454843: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00454846: jle 0x454867 */ if ((fZ||fS!=fO)) goto L_00454867;
L_00454848:; BB(0x00454848);
    /* 00454848: cmp dword ptr [ebp - 0x18], 0xd */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045484c: jne 0x45487b */ if (!fZ) goto L_0045487b;
L_0045484e:; BB(0x0045484e);
    /* 0045484e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00454851: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00454854: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 00454859: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045485a: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0045485d: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x454862u); f_0044f680();
    /* 00454862: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00454865: jg 0x45487b */ if ((!fZ&&fS==fO)) goto L_0045487b;
L_00454867:; BB(0x00454867);
    /* 00454867: mov word ptr [ebp - 0x1c], 2 */ W16((u32)(r_ebp+0xffffffe4u), 0x2u);
    /* 0045486d: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 00454874: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
L_0045487b:; BB(0x0045487b);
    /* 0045487b: jmp 0x45491d */ goto L_0045491d;
L_00454880:; BB(0x00454880);
    /* 00454880: cmp dword ptr [ebp - 0x18], 0xc */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00454884: jg 0x45489f */ if ((!fZ&&fS==fO)) goto L_0045489f;
L_00454886:; BB(0x00454886);
    /* 00454886: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00454889: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0045488c: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 00454891: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00454892: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00454895: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x45489au); f_0044f680();
    /* 0045489a: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045489d: jle 0x4548be */ if ((fZ||fS!=fO)) goto L_004548be;
L_0045489f:; BB(0x0045489f);
    /* 0045489f: cmp dword ptr [ebp - 0x18], 0xd */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004548a3: jne 0x4548d2 */ if (!fZ) goto L_004548d2;
L_004548a5:; BB(0x004548a5);
    /* 004548a5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004548a8: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004548ab: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 004548b0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004548b1: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004548b4: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x4548b9u); f_0044f680();
    /* 004548b9: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004548bc: jg 0x4548d2 */ if ((!fZ&&fS==fO)) goto L_004548d2;
L_004548be:; BB(0x004548be);
    /* 004548be: mov word ptr [ebp - 0x1c], 2 */ W16((u32)(r_ebp+0xffffffe4u), 0x2u);
    /* 004548c4: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 004548cb: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
L_004548d2:; BB(0x004548d2);
    /* 004548d2: jmp 0x45491d */ goto L_0045491d;
L_004548d4:; BB(0x004548d4);
    /* 004548d4: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004548d7: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004548da: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 004548df: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004548e0: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004548e3: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x4548e8u); f_0044f680();
    /* 004548e8: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004548eb: jg 0x454901 */ if ((!fZ&&fS==fO)) goto L_00454901;
L_004548ed:; BB(0x004548ed);
    /* 004548ed: mov word ptr [ebp - 0x1c], 2 */ W16((u32)(r_ebp+0xffffffe4u), 0x2u);
    /* 004548f3: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 004548fa: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
L_00454901:; BB(0x00454901);
    /* 00454901: jmp 0x45491d */ goto L_0045491d;
L_00454903:; BB(0x00454903);
    /* 00454903: cmp dword ptr [ebp - 0x18], 0xd */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454907: jne 0x45491d */ if (!fZ) goto L_0045491d;
L_00454909:; BB(0x00454909);
    /* 00454909: mov word ptr [ebp - 0x1c], 2 */ W16((u32)(r_ebp+0xffffffe4u), 0x2u);
    /* 0045490f: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 00454916: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
L_0045491d:; BB(0x0045491d);
    /* 0045491d: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00454920: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00454921: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00454924: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454925: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00454928: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00454929: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045492c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045492d: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00454930: call 0x44f840 */ r_esp -= 4; W32(r_esp, 0x454935u); f_0044f840();
    /* 00454935: mov ax, word ptr [ebp - 0x1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe4u))) & 0xffffu);
L_00454939:; BB(0x00454939);
    /* 00454939: mov esp, ebp */ r_esp = r_ebp;
    /* 0045493b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045493c: ret 8 */ FN_RET(0x00454560); r_esp += 12; return;
}

void f_00454950(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00454950);
    /* 00454950: aam 0x48 */ UNSUP(0x00454950, "aam 0x48");
    /* 00454952: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00454953: add byte ptr [ebx], al */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00454955: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00454956: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00454957: add ah, cl */ {  u32 a = (u8)(r_eax>>8); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 00454959: int3  */ UNSUP(0x00454959, "int3");
}

void f_00454960(void) /* sub_454960 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00454960);
    /* 00454960: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00454961: mov ebp, esp */ r_ebp = r_esp;
    /* 00454963: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00454966: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00454969: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00454970: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00454973: mov ecx, dword ptr [eax + 0x2f8] */ r_ecx = R32((u32)(r_eax+0x2f8u));
    /* 00454979: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0045497c: mov dword ptr [ebp - 0x20], 0xffffffff */ W32((u32)(r_ebp+0xffffffe0u), 0xffffffffu);
    /* 00454983: mov dword ptr [ebp - 0x10], 0xffffffff */ W32((u32)(r_ebp+0xfffffff0u), 0xffffffffu);
    /* 0045498a: lea edx, [ebp - 4] */ r_edx = (u32)(r_ebp+0xfffffffcu);
    /* 0045498d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045498e: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00454991: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454992: lea ecx, [ebp - 0x1c] */ r_ecx = (u32)(r_ebp+0xffffffe4u);
    /* 00454995: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00454996: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00454999: call 0x4517a0 */ r_esp -= 4; W32(r_esp, 0x45499eu); f_004517a0();
    /* 0045499e: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 004549a1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004549a2: lea eax, [ebp - 0x20] */ r_eax = (u32)(r_ebp+0xffffffe0u);
    /* 004549a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004549a6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004549a9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004549aa: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004549ad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004549ae: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004549b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004549b2: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004549b5: call 0x451870 */ r_esp -= 4; W32(r_esp, 0x4549bau); f_00451870();
    /* 004549ba: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004549bd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004549bf: je 0x4549e1 */ if (fZ) goto L_004549e1;
L_004549c1:; BB(0x004549c1);
    /* 004549c1: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 004549c4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004549c5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004549c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004549c9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004549cc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004549cd: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004549d0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004549d1: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004549d4: call 0x44f840 */ r_esp -= 4; W32(r_esp, 0x4549d9u); f_0044f840();
    /* 004549d9: xor ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a ^ b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004549dc: jmp 0x454d5a */ goto L_00454d5a;
L_004549e1:; BB(0x004549e1);
    /* 004549e1: cmp dword ptr [ebp - 4], 0xe */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004549e5: jne 0x454b2b */ if (!fZ) goto L_00454b2b;
L_004549eb:; BB(0x004549eb);
    /* 004549eb: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004549ee: cmp dword ptr [eax + 0x2f4], 5 */ {  u32 a = R32((u32)(r_eax+0x2f4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004549f5: jne 0x454a0f */ if (!fZ) goto L_00454a0f;
L_004549f7:; BB(0x004549f7);
    /* 004549f7: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004549fa: cmp dword ptr [ecx + 0x2d8], 1 */ {  u32 a = R32((u32)(r_ecx+0x2d8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454a01: je 0x454a0f */ if (fZ) goto L_00454a0f;
L_00454a03:; BB(0x00454a03);
    /* 00454a03: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00454a06: cmp dword ptr [edx + 0x2e8], 0xe */ {  u32 a = R32((u32)(r_edx+0x2e8u)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454a0d: jne 0x454a1f */ if (!fZ) goto L_00454a1f;
L_00454a0f:; BB(0x00454a0f);
    /* 00454a0f: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00454a12: cmp dword ptr [eax + 0x2f4], 6 */ {  u32 a = R32((u32)(r_eax+0x2f4u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454a19: jne 0x454aa6 */ if (!fZ) goto L_00454aa6;
L_00454a1f:; BB(0x00454a1f);
    /* 00454a1f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00454a22: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00454a25: mov dword ptr [ebp - 8], 2 */ W32((u32)(r_ebp+0xfffffff8u), 0x2u);
    /* 00454a2c: jmp 0x454a37 */ goto L_00454a37;
L_00454a2e:; BB(0x00454a2e);
    /* 00454a2e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00454a31: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00454a34: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_00454a37:; BB(0x00454a37);
    /* 00454a37: cmp dword ptr [ebp - 8], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00454a3b: jge 0x454a85 */ if ((fS==fO)) goto L_00454a85;
L_00454a3d:; BB(0x00454a3d);
    /* 00454a3d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00454a40: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00454a43: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 00454a48: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00454a49: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00454a4c: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x454a51u); f_0044f680();
    /* 00454a51: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00454a54: cmp eax, dword ptr [ecx + 0x2e8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x2e8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00454a5a: jg 0x454a7b */ if ((!fZ&&fS==fO)) goto L_00454a7b;
L_00454a5c:; BB(0x00454a5c);
    /* 00454a5c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00454a5f: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00454a62: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 00454a67: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00454a68: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00454a6b: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x454a70u); f_0044f680();
    /* 00454a70: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00454a73: cmp eax, dword ptr [edx + 0x2d8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x2d8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00454a79: jge 0x454a83 */ if ((fS==fO)) goto L_00454a83;
L_00454a7b:; BB(0x00454a7b);
    /* 00454a7b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00454a7e: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00454a81: jmp 0x454a85 */ goto L_00454a85;
L_00454a83:; BB(0x00454a83);
    /* 00454a83: jmp 0x454a2e */ goto L_00454a2e;
L_00454a85:; BB(0x00454a85);
    /* 00454a85: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00454a88: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00454a89: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00454a8c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00454a8d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00454a90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454a91: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00454a94: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00454a95: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00454a98: call 0x44f840 */ r_esp -= 4; W32(r_esp, 0x454a9du); f_0044f840();
    /* 00454a9d: mov ax, 3 */ r_eax = (r_eax & 0xffff0000u) | ((0x3u) & 0xffffu);
    /* 00454aa1: jmp 0x454d5a */ goto L_00454d5a;
L_00454aa6:; BB(0x00454aa6);
    /* 00454aa6: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00454aa9: cmp dword ptr [edx + 0x2f4], 7 */ {  u32 a = R32((u32)(r_edx+0x2f4u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454ab0: jne 0x454ae0 */ if (!fZ) goto L_00454ae0;
L_00454ab2:; BB(0x00454ab2);
    /* 00454ab2: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00454ab5: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00454ab8: mov dword ptr [ebp - 0x10], 2 */ W32((u32)(r_ebp+0xfffffff0u), 0x2u);
    /* 00454abf: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00454ac2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00454ac3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00454ac6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00454ac7: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00454aca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454acb: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00454ace: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00454acf: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00454ad2: call 0x44f840 */ r_esp -= 4; W32(r_esp, 0x454ad7u); f_0044f840();
    /* 00454ad7: mov ax, 3 */ r_eax = (r_eax & 0xffff0000u) | ((0x3u) & 0xffffu);
    /* 00454adb: jmp 0x454d5a */ goto L_00454d5a;
L_00454ae0:; BB(0x00454ae0);
    /* 00454ae0: mov dword ptr [ebp - 0x20], 2 */ W32((u32)(r_ebp+0xffffffe0u), 0x2u);
    /* 00454ae7: mov dword ptr [ebp - 0x10], 3 */ W32((u32)(r_ebp+0xfffffff0u), 0x3u);
    /* 00454aee: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00454af1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00454af2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00454af5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454af6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00454af9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00454afa: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00454afd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00454afe: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00454b01: call 0x44f840 */ r_esp -= 4; W32(r_esp, 0x454b06u); f_0044f840();
    /* 00454b06: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00454b09: cmp dword ptr [eax + 0x2d8], 1 */ {  u32 a = R32((u32)(r_eax+0x2d8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454b10: jne 0x454b1d */ if (!fZ) goto L_00454b1d;
L_00454b12:; BB(0x00454b12);
    /* 00454b12: mov ax, 1 */ r_eax = (r_eax & 0xffff0000u) | ((0x1u) & 0xffffu);
    /* 00454b16: jmp 0x454d5a */ goto L_00454d5a;
L_00454b1d:; BB(0x00454b1d);
    /* 00454b1d: mov ax, 4 */ r_eax = (r_eax & 0xffff0000u) | ((0x4u) & 0xffffu);
    /* 00454b21: jmp 0x454d5a */ goto L_00454d5a;
L_00454b2b:; BB(0x00454b2b);
    /* 00454b2b: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00454b32: jmp 0x454b3d */ goto L_00454b3d;
L_00454b34:; BB(0x00454b34);
    /* 00454b34: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00454b37: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00454b3a: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_00454b3d:; BB(0x00454b3d);
    /* 00454b3d: cmp dword ptr [ebp - 8], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00454b41: jge 0x454bbb */ if ((fS==fO)) goto L_00454bbb;
L_00454b43:; BB(0x00454b43);
    /* 00454b43: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00454b46: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00454b49: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 00454b4e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00454b4f: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00454b52: call 0x44f6c0 */ r_esp -= 4; W32(r_esp, 0x454b57u); f_0044f6c0();
    /* 00454b57: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454b5a: jne 0x454b6a */ if (!fZ) goto L_00454b6a;
L_00454b5c:; BB(0x00454b5c);
    /* 00454b5c: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00454b5f: mov eax, dword ptr [edx + 0x2fc] */ r_eax = R32((u32)(r_edx+0x2fcu));
    /* 00454b65: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00454b68: jmp 0x454b81 */ goto L_00454b81;
L_00454b6a:; BB(0x00454b6a);
    /* 00454b6a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00454b6d: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00454b70: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 00454b75: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454b76: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00454b79: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x454b7eu); f_0044f680();
    /* 00454b7e: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
L_00454b81:; BB(0x00454b81);
    /* 00454b81: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00454b84: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00454b87: cmp edx, dword ptr [ecx + 0x2e8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x2e8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00454b8d: jg 0x454b9d */ if ((!fZ&&fS==fO)) goto L_00454b9d;
L_00454b8f:; BB(0x00454b8f);
    /* 00454b8f: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00454b92: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00454b95: cmp ecx, dword ptr [eax + 0x2d8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x2d8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00454b9b: jge 0x454bb6 */ if ((fS==fO)) goto L_00454bb6;
L_00454b9d:; BB(0x00454b9d);
    /* 00454b9d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00454ba0: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00454ba3: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 00454ba8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00454ba9: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00454bac: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x454bb1u); f_0044f680();
    /* 00454bb1: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00454bb4: jmp 0x454bbb */ goto L_00454bbb;
L_00454bb6:; BB(0x00454bb6);
    /* 00454bb6: jmp 0x454b34 */ goto L_00454b34;
L_00454bbb:; BB(0x00454bbb);
    /* 00454bbb: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00454bbe: mov eax, dword ptr [edx + 0x2e8] */ r_eax = R32((u32)(r_edx+0x2e8u));
    /* 00454bc4: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00454bc7: cmp dword ptr [ebp - 0x14], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00454bca: jg 0x454d2e */ if ((!fZ&&fS==fO)) goto L_00454d2e;
L_00454bd0:; BB(0x00454bd0);
    /* 00454bd0: cmp dword ptr [ebp - 4], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00454bd4: jl 0x454d2e */ if ((fS!=fO)) goto L_00454d2e;
L_00454bda:; BB(0x00454bda);
    /* 00454bda: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00454bdd: cmp dword ptr [ecx + 0x2e8], 0xa */ {  u32 a = R32((u32)(r_ecx+0x2e8u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00454be4: jl 0x454d2e */ if ((fS!=fO)) goto L_00454d2e;
L_00454bea:; BB(0x00454bea);
    /* 00454bea: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00454bed: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00454bf0: mov ecx, dword ptr [edx + 0x2e8] */ r_ecx = R32((u32)(r_edx+0x2e8u));
    /* 00454bf6: cmp ecx, dword ptr [eax + 0x2fc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x2fcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454bfc: je 0x454d2e */ if (fZ) goto L_00454d2e;
L_00454c02:; BB(0x00454c02);
    /* 00454c02: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00454c05: cmp dword ptr [edx + 0x2e8], 0xa */ {  u32 a = R32((u32)(r_edx+0x2e8u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454c0c: jne 0x454c22 */ if (!fZ) goto L_00454c22;
L_00454c0e:; BB(0x00454c0e);
    /* 00454c0e: cmp dword ptr [ebp - 4], 9 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454c12: je 0x454cce */ if (fZ) goto L_00454cce;
L_00454c18:; BB(0x00454c18);
    /* 00454c18: cmp dword ptr [ebp - 4], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454c1c: je 0x454cce */ if (fZ) goto L_00454cce;
L_00454c22:; BB(0x00454c22);
    /* 00454c22: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00454c25: cmp dword ptr [eax + 0x2e8], 0xb */ {  u32 a = R32((u32)(r_eax+0x2e8u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454c2c: jne 0x454c3e */ if (!fZ) goto L_00454c3e;
L_00454c2e:; BB(0x00454c2e);
    /* 00454c2e: cmp dword ptr [ebp - 4], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00454c32: jl 0x454c3e */ if ((fS!=fO)) goto L_00454c3e;
L_00454c34:; BB(0x00454c34);
    /* 00454c34: cmp dword ptr [ebp - 4], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00454c38: jle 0x454cce */ if ((fZ||fS!=fO)) goto L_00454cce;
L_00454c3e:; BB(0x00454c3e);
    /* 00454c3e: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00454c41: cmp dword ptr [ecx + 0x2e8], 0xc */ {  u32 a = R32((u32)(r_ecx+0x2e8u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454c48: jne 0x454c62 */ if (!fZ) goto L_00454c62;
L_00454c4a:; BB(0x00454c4a);
    /* 00454c4a: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00454c4d: cmp dword ptr [edx + 0x2fc], 0xb */ {  u32 a = R32((u32)(r_edx+0x2fcu)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454c54: jne 0x454c62 */ if (!fZ) goto L_00454c62;
L_00454c56:; BB(0x00454c56);
    /* 00454c56: cmp dword ptr [ebp - 4], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00454c5a: jl 0x454c62 */ if ((fS!=fO)) goto L_00454c62;
L_00454c5c:; BB(0x00454c5c);
    /* 00454c5c: cmp dword ptr [ebp - 4], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00454c60: jle 0x454cce */ if ((fZ||fS!=fO)) goto L_00454cce;
L_00454c62:; BB(0x00454c62);
    /* 00454c62: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00454c65: cmp dword ptr [eax + 0x2e8], 0xc */ {  u32 a = R32((u32)(r_eax+0x2e8u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454c6c: jne 0x454c86 */ if (!fZ) goto L_00454c86;
L_00454c6e:; BB(0x00454c6e);
    /* 00454c6e: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00454c71: cmp dword ptr [ecx + 0x2fc], 0xb */ {  u32 a = R32((u32)(r_ecx+0x2fcu)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454c78: je 0x454c86 */ if (fZ) goto L_00454c86;
L_00454c7a:; BB(0x00454c7a);
    /* 00454c7a: cmp dword ptr [ebp - 4], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00454c7e: jl 0x454c86 */ if ((fS!=fO)) goto L_00454c86;
L_00454c80:; BB(0x00454c80);
    /* 00454c80: cmp dword ptr [ebp - 4], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00454c84: jle 0x454cce */ if ((fZ||fS!=fO)) goto L_00454cce;
L_00454c86:; BB(0x00454c86);
    /* 00454c86: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00454c89: cmp dword ptr [edx + 0x2e8], 0xd */ {  u32 a = R32((u32)(r_edx+0x2e8u)); u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454c90: jne 0x454caa */ if (!fZ) goto L_00454caa;
L_00454c92:; BB(0x00454c92);
    /* 00454c92: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00454c95: cmp dword ptr [eax + 0x2fc], 0xc */ {  u32 a = R32((u32)(r_eax+0x2fcu)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454c9c: jne 0x454caa */ if (!fZ) goto L_00454caa;
L_00454c9e:; BB(0x00454c9e);
    /* 00454c9e: cmp dword ptr [ebp - 4], 9 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00454ca2: jl 0x454caa */ if ((fS!=fO)) goto L_00454caa;
L_00454ca4:; BB(0x00454ca4);
    /* 00454ca4: cmp dword ptr [ebp - 4], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00454ca8: jle 0x454cce */ if ((fZ||fS!=fO)) goto L_00454cce;
L_00454caa:; BB(0x00454caa);
    /* 00454caa: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00454cad: cmp dword ptr [ecx + 0x2e8], 0xd */ {  u32 a = R32((u32)(r_ecx+0x2e8u)); u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454cb4: jne 0x454d2e */ if (!fZ) goto L_00454d2e;
L_00454cb6:; BB(0x00454cb6);
    /* 00454cb6: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00454cb9: cmp dword ptr [edx + 0x2fc], 0xc */ {  u32 a = R32((u32)(r_edx+0x2fcu)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454cc0: je 0x454d2e */ if (fZ) goto L_00454d2e;
L_00454cc2:; BB(0x00454cc2);
    /* 00454cc2: cmp dword ptr [ebp - 4], 9 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00454cc6: jl 0x454d2e */ if ((fS!=fO)) goto L_00454d2e;
L_00454cc8:; BB(0x00454cc8);
    /* 00454cc8: cmp dword ptr [ebp - 4], 0xd */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00454ccc: jg 0x454d2e */ if ((!fZ&&fS==fO)) goto L_00454d2e;
L_00454cce:; BB(0x00454cce);
    /* 00454cce: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 00454cd5: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 00454cdc: jmp 0x454ce7 */ goto L_00454ce7;
L_00454cde:; BB(0x00454cde);
    /* 00454cde: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00454ce1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00454ce4: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_00454ce7:; BB(0x00454ce7);
    /* 00454ce7: cmp dword ptr [ebp - 8], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00454ceb: jge 0x454d10 */ if ((fS==fO)) goto L_00454d10;
L_00454ced:; BB(0x00454ced);
    /* 00454ced: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00454cf0: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00454cf3: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 00454cf8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454cf9: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00454cfc: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x454d01u); f_0044f680();
    /* 00454d01: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454d04: je 0x454d0e */ if (fZ) goto L_00454d0e;
L_00454d06:; BB(0x00454d06);
    /* 00454d06: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00454d09: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00454d0c: jmp 0x454d10 */ goto L_00454d10;
L_00454d0e:; BB(0x00454d0e);
    /* 00454d0e: jmp 0x454cde */ goto L_00454cde;
L_00454d10:; BB(0x00454d10);
    /* 00454d10: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00454d13: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00454d14: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00454d17: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454d18: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00454d1b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00454d1c: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00454d1f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00454d20: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00454d23: call 0x44f840 */ r_esp -= 4; W32(r_esp, 0x454d28u); f_0044f840();
    /* 00454d28: mov ax, 2 */ r_eax = (r_eax & 0xffff0000u) | ((0x2u) & 0xffffu);
    /* 00454d2c: jmp 0x454d5a */ goto L_00454d5a;
L_00454d2e:; BB(0x00454d2e);
    /* 00454d2e: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 00454d31: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454d32: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 00454d35: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00454d36: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00454d39: call 0x451f60 */ r_esp -= 4; W32(r_esp, 0x454d3eu); f_00451f60();
    /* 00454d3e: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00454d41: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00454d42: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00454d45: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454d46: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00454d49: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00454d4a: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00454d4d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00454d4e: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00454d51: call 0x44f840 */ r_esp -= 4; W32(r_esp, 0x454d56u); f_0044f840();
    /* 00454d56: mov ax, 1 */ r_eax = (r_eax & 0xffff0000u) | ((0x1u) & 0xffffu);
L_00454d5a:; BB(0x00454d5a);
    /* 00454d5a: mov esp, ebp */ r_esp = r_ebp;
    /* 00454d5c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00454d5d: ret 8 */ FN_RET(0x00454960); r_esp += 12; return;
}

void f_00454d60(void) /* sub_454D60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00454d60);
    /* 00454d60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00454d61: mov ebp, esp */ r_ebp = r_esp;
    /* 00454d63: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00454d66: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00454d69: mov dword ptr [ebp - 0x20], 0xffffffff */ W32((u32)(r_ebp+0xffffffe0u), 0xffffffffu);
    /* 00454d70: mov dword ptr [ebp - 0x14], 0xffffffff */ W32((u32)(r_ebp+0xffffffecu), 0xffffffffu);
    /* 00454d77: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 00454d7a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454d7b: lea ecx, [ebp - 4] */ r_ecx = (u32)(r_ebp+0xfffffffcu);
    /* 00454d7e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00454d7f: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 00454d82: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00454d83: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00454d86: call 0x4517a0 */ r_esp -= 4; W32(r_esp, 0x454d8bu); f_004517a0();
    /* 00454d8b: lea eax, [ebp - 0x14] */ r_eax = (u32)(r_ebp+0xffffffecu);
    /* 00454d8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454d8f: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 00454d92: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00454d93: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00454d96: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00454d97: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00454d9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454d9b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00454d9e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00454d9f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00454da2: call 0x451c20 */ r_esp -= 4; W32(r_esp, 0x454da7u); f_00451c20();
    /* 00454da7: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00454daa: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454dac: je 0x454dce */ if (fZ) goto L_00454dce;
L_00454dae:; BB(0x00454dae);
    /* 00454dae: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00454db1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454db2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00454db5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00454db6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00454db9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00454dba: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00454dbd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454dbe: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00454dc1: call 0x44f840 */ r_esp -= 4; W32(r_esp, 0x454dc6u); f_0044f840();
    /* 00454dc6: xor ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a ^ b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00454dc9: jmp 0x455055 */ goto L_00455055;
L_00454dce:; BB(0x00454dce);
    /* 00454dce: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00454dd1: cmp dword ptr [ecx + 0x2d4], 5 */ {  u32 a = R32((u32)(r_ecx+0x2d4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454dd8: jne 0x454e7f */ if (!fZ) goto L_00454e7f;
L_00454dde:; BB(0x00454dde);
    /* 00454dde: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00454de5: jmp 0x454df0 */ goto L_00454df0;
L_00454de7:; BB(0x00454de7);
    /* 00454de7: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00454dea: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00454ded: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_00454df0:; BB(0x00454df0);
    /* 00454df0: cmp dword ptr [ebp - 0xc], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00454df4: jge 0x454e5e */ if ((fS==fO)) goto L_00454e5e;
L_00454df6:; BB(0x00454df6);
    /* 00454df6: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00454df9: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00454dfc: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 00454e01: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00454e02: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00454e05: call 0x44f6c0 */ r_esp -= 4; W32(r_esp, 0x454e0au); f_0044f6c0();
    /* 00454e0a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00454e0d: cmp eax, dword ptr [ecx + 0x2d0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x2d0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454e13: je 0x454e5c */ if (fZ) goto L_00454e5c;
L_00454e15:; BB(0x00454e15);
    /* 00454e15: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00454e18: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00454e1b: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 00454e20: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00454e21: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00454e24: call 0x44f6c0 */ r_esp -= 4; W32(r_esp, 0x454e29u); f_0044f6c0();
    /* 00454e29: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454e2c: jne 0x454e46 */ if (!fZ) goto L_00454e46;
L_00454e2e:; BB(0x00454e2e);
    /* 00454e2e: cmp dword ptr [ebp - 0x20], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454e32: jne 0x454e3c */ if (!fZ) goto L_00454e3c;
L_00454e34:; BB(0x00454e34);
    /* 00454e34: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00454e37: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00454e3a: jmp 0x454e44 */ goto L_00454e44;
L_00454e3c:; BB(0x00454e3c);
    /* 00454e3c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00454e3f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00454e42: jmp 0x454e5e */ goto L_00454e5e;
L_00454e44:; BB(0x00454e44);
    /* 00454e44: jmp 0x454e5c */ goto L_00454e5c;
L_00454e46:; BB(0x00454e46);
    /* 00454e46: cmp dword ptr [ebp - 0x20], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454e4a: jne 0x454e54 */ if (!fZ) goto L_00454e54;
L_00454e4c:; BB(0x00454e4c);
    /* 00454e4c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00454e4f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00454e52: jmp 0x454e5c */ goto L_00454e5c;
L_00454e54:; BB(0x00454e54);
    /* 00454e54: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00454e57: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00454e5a: jmp 0x454e5e */ goto L_00454e5e;
L_00454e5c:; BB(0x00454e5c);
    /* 00454e5c: jmp 0x454de7 */ goto L_00454de7;
L_00454e5e:; BB(0x00454e5e);
    /* 00454e5e: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00454e61: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454e62: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00454e65: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00454e66: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00454e69: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00454e6a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00454e6d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454e6e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00454e71: call 0x44f840 */ r_esp -= 4; W32(r_esp, 0x454e76u); f_0044f840();
    /* 00454e76: mov ax, 1 */ r_eax = (r_eax & 0xffff0000u) | ((0x1u) & 0xffffu);
    /* 00454e7a: jmp 0x455055 */ goto L_00455055;
L_00454e7f:; BB(0x00454e7f);
    /* 00454e7f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00454e82: cmp dword ptr [ecx + 0x2d4], 4 */ {  u32 a = R32((u32)(r_ecx+0x2d4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454e89: jne 0x45503d */ if (!fZ) goto L_0045503d;
L_00454e8f:; BB(0x00454e8f);
    /* 00454e8f: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00454e92: mov eax, dword ptr [edx + 0x2d0] */ r_eax = R32((u32)(r_edx+0x2d0u));
    /* 00454e98: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454e99: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 00454e9b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00454e9e: call 0x44f750 */ r_esp -= 4; W32(r_esp, 0x454ea3u); f_0044f750();
    /* 00454ea3: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00454ea6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454ea8: je 0x45503d */ if (fZ) goto L_0045503d;
L_00454eae:; BB(0x00454eae);
    /* 00454eae: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00454eb1: mov ax, word ptr [edx + 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x8u))) & 0xffffu);
    /* 00454eb5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454eb6: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00454eb9: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x454ebeu); f_0044f680();
    /* 00454ebe: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00454ec1: cmp dword ptr [ebp - 0x18], 0xd */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454ec5: jne 0x454f44 */ if (!fZ) goto L_00454f44;
L_00454ec7:; BB(0x00454ec7);
    /* 00454ec7: mov word ptr [ebp - 0x1c], 4 */ W16((u32)(r_ebp+0xffffffe4u), 0x4u);
    /* 00454ecd: mov dword ptr [ebp - 0x20], 2 */ W32((u32)(r_ebp+0xffffffe0u), 0x2u);
    /* 00454ed4: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00454ed7: mov dx, word ptr [ecx + 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+0x8u))) & 0xffffu);
    /* 00454edb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00454edc: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00454edf: call 0x44f6c0 */ r_esp -= 4; W32(r_esp, 0x454ee4u); f_0044f6c0();
    /* 00454ee4: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00454ee7: cmp eax, dword ptr [ecx + 0x2d0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x2d0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454eed: je 0x454f38 */ if (fZ) goto L_00454f38;
L_00454eef:; BB(0x00454eef);
    /* 00454eef: mov word ptr [ebp - 0x1c], 3 */ W16((u32)(r_ebp+0xffffffe4u), 0x3u);
    /* 00454ef5: mov dword ptr [ebp - 0xc], 3 */ W32((u32)(r_ebp+0xfffffff4u), 0x3u);
    /* 00454efc: jmp 0x454f07 */ goto L_00454f07;
L_00454efe:; BB(0x00454efe);
    /* 00454efe: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00454f01: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00454f04: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_00454f07:; BB(0x00454f07);
    /* 00454f07: cmp dword ptr [ebp - 0xc], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00454f0b: jge 0x454f36 */ if ((fS==fO)) goto L_00454f36;
L_00454f0d:; BB(0x00454f0d);
    /* 00454f0d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00454f10: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00454f13: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 00454f18: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00454f19: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00454f1c: call 0x44f6c0 */ r_esp -= 4; W32(r_esp, 0x454f21u); f_0044f6c0();
    /* 00454f21: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00454f24: cmp eax, dword ptr [ecx + 0x2d0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x2d0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454f2a: je 0x454f34 */ if (fZ) goto L_00454f34;
L_00454f2c:; BB(0x00454f2c);
    /* 00454f2c: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00454f2f: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00454f32: jmp 0x454f36 */ goto L_00454f36;
L_00454f34:; BB(0x00454f34);
    /* 00454f34: jmp 0x454efe */ goto L_00454efe;
L_00454f36:; BB(0x00454f36);
    /* 00454f36: jmp 0x454f3f */ goto L_00454f3f;
L_00454f38:; BB(0x00454f38);
    /* 00454f38: mov dword ptr [ebp - 0x14], 3 */ W32((u32)(r_ebp+0xffffffecu), 0x3u);
L_00454f3f:; BB(0x00454f3f);
    /* 00454f3f: jmp 0x45501f */ goto L_0045501f;
L_00454f44:; BB(0x00454f44);
    /* 00454f44: cmp dword ptr [ebp - 0x18], 0xc */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454f48: jne 0x454fb1 */ if (!fZ) goto L_00454fb1;
L_00454f4a:; BB(0x00454f4a);
    /* 00454f4a: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00454f4d: mov cx, word ptr [eax + 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0x8u))) & 0xffffu);
    /* 00454f51: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00454f52: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00454f55: call 0x44f6c0 */ r_esp -= 4; W32(r_esp, 0x454f5au); f_0044f6c0();
    /* 00454f5a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00454f5d: cmp eax, dword ptr [edx + 0x2d0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x2d0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454f63: jne 0x454fb1 */ if (!fZ) goto L_00454fb1;
L_00454f65:; BB(0x00454f65);
    /* 00454f65: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00454f68: mov ecx, dword ptr [eax + 0x2d0] */ r_ecx = R32((u32)(r_eax+0x2d0u));
    /* 00454f6e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00454f6f: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00454f71: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00454f74: call 0x44f750 */ r_esp -= 4; W32(r_esp, 0x454f79u); f_0044f750();
    /* 00454f79: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00454f7c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454f7e: jne 0x454f9b */ if (!fZ) goto L_00454f9b;
L_00454f80:; BB(0x00454f80);
    /* 00454f80: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00454f83: mov ecx, dword ptr [eax + 0x2d0] */ r_ecx = R32((u32)(r_eax+0x2d0u));
    /* 00454f89: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00454f8a: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00454f8c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00454f8f: call 0x44f750 */ r_esp -= 4; W32(r_esp, 0x454f94u); f_0044f750();
    /* 00454f94: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00454f97: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454f99: je 0x454fb1 */ if (fZ) goto L_00454fb1;
L_00454f9b:; BB(0x00454f9b);
    /* 00454f9b: mov word ptr [ebp - 0x1c], 4 */ W16((u32)(r_ebp+0xffffffe4u), 0x4u);
    /* 00454fa1: mov dword ptr [ebp - 0x20], 2 */ W32((u32)(r_ebp+0xffffffe0u), 0x2u);
    /* 00454fa8: mov dword ptr [ebp - 0x14], 3 */ W32((u32)(r_ebp+0xffffffecu), 0x3u);
    /* 00454faf: jmp 0x45501f */ goto L_0045501f;
L_00454fb1:; BB(0x00454fb1);
    /* 00454fb1: mov word ptr [ebp - 0x1c], 3 */ W16((u32)(r_ebp+0xffffffe4u), 0x3u);
    /* 00454fb7: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 00454fbe: jmp 0x454fc9 */ goto L_00454fc9;
L_00454fc0:; BB(0x00454fc0);
    /* 00454fc0: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00454fc3: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00454fc6: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_00454fc9:; BB(0x00454fc9);
    /* 00454fc9: cmp dword ptr [ebp - 0xc], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00454fcd: jge 0x45501f */ if ((fS==fO)) goto L_0045501f;
L_00454fcf:; BB(0x00454fcf);
    /* 00454fcf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00454fd2: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00454fd5: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 00454fda: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454fdb: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00454fde: call 0x44f6c0 */ r_esp -= 4; W32(r_esp, 0x454fe3u); f_0044f6c0();
    /* 00454fe3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00454fe6: cmp eax, dword ptr [ecx + 0x2d0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x2d0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454fec: je 0x45501d */ if (fZ) goto L_0045501d;
L_00454fee:; BB(0x00454fee);
    /* 00454fee: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00454ff1: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00454ff4: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 00454ff9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00454ffa: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00454ffd: call 0x44f6c0 */ r_esp -= 4; W32(r_esp, 0x455002u); f_0044f6c0();
    /* 00455002: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455005: je 0x45501d */ if (fZ) goto L_0045501d;
L_00455007:; BB(0x00455007);
    /* 00455007: cmp dword ptr [ebp - 0x20], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045500b: jne 0x455015 */ if (!fZ) goto L_00455015;
L_0045500d:; BB(0x0045500d);
    /* 0045500d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00455010: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00455013: jmp 0x45501d */ goto L_0045501d;
L_00455015:; BB(0x00455015);
    /* 00455015: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00455018: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0045501b: jmp 0x45501f */ goto L_0045501f;
L_0045501d:; BB(0x0045501d);
    /* 0045501d: jmp 0x454fc0 */ goto L_00454fc0;
L_0045501f:; BB(0x0045501f);
    /* 0045501f: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00455022: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00455023: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00455026: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00455027: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045502a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045502b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045502e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045502f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00455032: call 0x44f840 */ r_esp -= 4; W32(r_esp, 0x455037u); f_0044f840();
    /* 00455037: mov ax, word ptr [ebp - 0x1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe4u))) & 0xffffu);
    /* 0045503b: jmp 0x455055 */ goto L_00455055;
L_0045503d:; BB(0x0045503d);
    /* 0045503d: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00455040: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00455041: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00455044: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00455045: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00455048: call 0x454560 */ r_esp -= 4; W32(r_esp, 0x45504du); f_00454560();
    /* 0045504d: mov word ptr [ebp - 0x1c], ax */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_eax);
    /* 00455051: mov ax, word ptr [ebp - 0x1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe4u))) & 0xffffu);
L_00455055:; BB(0x00455055);
    /* 00455055: mov esp, ebp */ r_esp = r_ebp;
    /* 00455057: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00455058: ret 8 */ FN_RET(0x00454d60); r_esp += 12; return;
}

