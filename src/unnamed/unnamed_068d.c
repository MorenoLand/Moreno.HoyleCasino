#include "protos.h"

void f_0068d000(void) /* sub_68D000 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068d000);
    /* 0068d000: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068d001: mov ebp, esp */ r_ebp = r_esp;
    /* 0068d003: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068d006: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0068d009: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0068d00c: call 0x68e520 */ r_esp -= 4; W32(r_esp, 0x68d011u); f_0068e520();
    /* 0068d011: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0068d014: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0068d017: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0068d01a: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0068d01d: mov byte ptr [eax + 0x35], 1 */ W8((u32)(r_eax+0x35u), 0x1u);
    /* 0068d021: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0068d024: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068d027: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0068d02a: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068d02d: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 0068d030: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0068d033: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0068d036: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0068d039: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068d03c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0068d03f: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0068d042: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0068d044: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0068d047: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068d04a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0068d04d: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068d050: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 0068d053: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0068d056: mov dword ptr [edx + 8], 0 */ W32((u32)(r_edx+0x8u), 0x0u);
    /* 0068d05d: mov esp, ebp */ r_esp = r_ebp;
    /* 0068d05f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068d060: ret  */ FN_RET(0x0068d000); r_esp += 4; return;
}

void f_0068d4b0(void) /* sub_68D4B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068d4b0);
    /* 0068d4b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068d4b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0068d4b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068d4b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0068d4b7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068d4ba: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 0068d4c0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068d4c3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0068d4c6: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 0068d4c9: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068d4cd: jne 0x68d4d5 */ if (!fZ) goto L_0068d4d5;
L_0068d4cf:; BB(0x0068d4cf);
    /* 0068d4cf: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x68d4d5u); call_ind(t); }
L_0068d4d5:; BB(0x0068d4d5);
    /* 0068d4d5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068d4d8: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0068d4db: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0068d4dd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068d4e0: mov esp, ebp */ r_esp = r_ebp;
    /* 0068d4e2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068d4e3: ret 8 */ FN_RET(0x0068d4b0); r_esp += 12; return;
}

void f_0068d4f0(void) /* sub_68D4F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068d4f0);
    /* 0068d4f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068d4f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0068d4f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068d4f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0068d4f7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068d4fa: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068d4fd: jne 0x68d505 */ if (!fZ) goto L_0068d505;
L_0068d4ff:; BB(0x0068d4ff);
    /* 0068d4ff: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x68d505u); call_ind(t); }
L_0068d505:; BB(0x0068d505);
    /* 0068d505: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068d508: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0068d50a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068d50d: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068d510: cmp ecx, dword ptr [edx + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068d513: jne 0x68d51b */ if (!fZ) goto L_0068d51b;
L_0068d515:; BB(0x0068d515);
    /* 0068d515: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x68d51bu); call_ind(t); }
L_0068d51b:; BB(0x0068d51b);
    /* 0068d51b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068d51e: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0068d521: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068d524: mov esp, ebp */ r_esp = r_ebp;
    /* 0068d526: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068d527: ret  */ FN_RET(0x0068d4f0); r_esp += 4; return;
}

void f_0068d530(void) /* sub_68D530 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068d530);
    /* 0068d530: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068d531: mov ebp, esp */ r_ebp = r_esp;
    /* 0068d533: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0068d535: push 0x6ae120 */ { u32 v = 0x6ae120u; r_esp -= 4; W32(r_esp, v); }
    /* 0068d53a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0068d540: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068d541: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068d542: sub esp, 0xb8 */ {  u32 a = r_esp; u32 b = 0xb8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068d548: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068d549: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068d54a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068d54b: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0068d550: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068d552: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068d553: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0068d556: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0068d55c: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0068d55f: mov dword ptr [ebp - 0xc8], ecx */ W32((u32)(r_ebp+0xffffff38u), r_ecx);
    /* 0068d565: lea eax, [ebp - 0x2f] */ r_eax = (u32)(r_ebp+0xffffffd1u);
    /* 0068d568: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0068d56b: lea ecx, [ebp - 0x2e] */ r_ecx = (u32)(r_ebp+0xffffffd2u);
    /* 0068d56e: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0068d571: lea edx, [ebp - 0x2d] */ r_edx = (u32)(r_ebp+0xffffffd3u);
    /* 0068d574: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 0068d577: mov ecx, dword ptr [ebp - 0xc8] */ r_ecx = R32((u32)(r_ebp+0xffffff38u));
    /* 0068d57d: call 0x68eae0 */ r_esp -= 4; W32(r_esp, 0x68d582u); f_0068eae0();
    /* 0068d582: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0068d589: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068d58c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068d58d: mov ecx, dword ptr [ebp - 0xc8] */ r_ecx = R32((u32)(r_ebp+0xffffff38u));
    /* 0068d593: call 0x68e9d0 */ r_esp -= 4; W32(r_esp, 0x68d598u); f_0068e9d0();
    /* 0068d598: jmp 0x68d5bb */ goto L_0068d5bb;
L_0068d5bb:; BB(0x0068d5bb);
    /* 0068d5bb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0068d5c2: mov eax, dword ptr [ebp - 0xc8] */ r_eax = R32((u32)(r_ebp+0xffffff38u));
    /* 0068d5c8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0068d5cb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0068d5d2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068d5d3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068d5d4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068d5d5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068d5d6: mov esp, ebp */ r_esp = r_ebp;
    /* 0068d5d8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068d5d9: ret 4 */ FN_RET(0x0068d530); r_esp += 8; return;
}

void f_0068d5e0(void) /* sub_68D5E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068d5e0);
    /* 0068d5e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068d5e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0068d5e3: sub esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068d5e9: mov dword ptr [ebp - 0xac], ecx */ W32((u32)(r_ebp+0xffffff54u), r_ecx);
    /* 0068d5ef: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 0068d5f5: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068d5f8: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068d5fb: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0068d5fe: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 0068d604: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068d607: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0068d60a: mov byte ptr [ebp - 1], 1 */ W8((u32)(r_ebp+0xffffffffu), 0x1u);
L_0068d60e:; BB(0x0068d60e);
    /* 0068d60e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0068d611: movsx eax, byte ptr [edx + 0x45] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x45u));
    /* 0068d615: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068d617: jne 0x68d662 */ if (!fZ) goto L_0068d662;
L_0068d619:; BB(0x0068d619);
    /* 0068d619: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0068d61c: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0068d61f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0068d622: add edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0068d625: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068d626: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0068d629: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068d62a: call dword ptr [0x6b20f0] */ { u32 t = R32((u32)(0x6b20f0u)); r_esp -= 4; W32(r_esp, 0x68d630u); call_ind(t); }
    /* 0068d630: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068d633: mov byte ptr [ebp - 1], al */ W8((u32)(r_ebp+0xffffffffu), (u8)r_eax);
    /* 0068d636: movzx ecx, byte ptr [ebp - 1] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 0068d63a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068d63c: je 0x68d64b */ if (fZ) goto L_0068d64b;
L_0068d63e:; BB(0x0068d63e);
    /* 0068d63e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0068d641: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0068d643: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 0068d649: jmp 0x68d657 */ goto L_0068d657;
L_0068d64b:; BB(0x0068d64b);
    /* 0068d64b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0068d64e: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0068d651: mov dword ptr [ebp - 0xb0], edx */ W32((u32)(r_ebp+0xffffff50u), r_edx);
L_0068d657:; BB(0x0068d657);
    /* 0068d657: mov eax, dword ptr [ebp - 0xb0] */ r_eax = R32((u32)(r_ebp+0xffffff50u));
    /* 0068d65d: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0068d660: jmp 0x68d60e */ goto L_0068d60e;
L_0068d662:; BB(0x0068d662);
    /* 0068d662: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0068d664: je 0x68d6b4 */ if (fZ) goto L_0068d6b4;
L_0068d666:; BB(0x0068d666);
    /* 0068d666: mov byte ptr [ebp - 0x15], 1 */ W8((u32)(r_ebp+0xffffffebu), 0x1u);
    /* 0068d66a: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0068d66d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068d66e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0068d671: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068d672: mov cl, byte ptr [ebp - 1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
    /* 0068d675: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068d676: lea edx, [ebp - 0x20] */ r_edx = (u32)(r_ebp+0xffffffe0u);
    /* 0068d679: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068d67a: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 0068d680: call 0x68d820 */ r_esp -= 4; W32(r_esp, 0x68d685u); f_0068d820();
    /* 0068d685: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 0068d68b: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 0068d691: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0068d693: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0068d696: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068d699: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0068d69b: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0068d69e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0068d6a1: mov dl, byte ptr [ebp - 0x15] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffebu))) & 0xffu);
    /* 0068d6a4: mov byte ptr [ecx + 8], dl */ W8((u32)(r_ecx+0x8u), (u8)r_edx);
    /* 0068d6a7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068d6aa: jmp 0x68d80b */ goto L_0068d80b;
L_0068d6b4:; BB(0x0068d6b4);
    /* 0068d6b4: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 0068d6ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068d6bb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0068d6be: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068d6bf: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 0068d6c2: call 0x68d4b0 */ r_esp -= 4; W32(r_esp, 0x68d6c7u); f_0068d4b0();
    /* 0068d6c7: movzx edx, byte ptr [ebp - 1] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 0068d6cb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068d6cd: jne 0x68d6d4 */ if (!fZ) goto L_0068d6d4;
L_0068d6cf:; BB(0x0068d6cf);
    /* 0068d6cf: jmp 0x68d77e */ goto L_0068d77e;
L_0068d6d4:; BB(0x0068d6d4);
    /* 0068d6d4: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 0068d6da: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068d6dd: mov dword ptr [ebp - 0x98], ecx */ W32((u32)(r_ebp+0xffffff68u), r_ecx);
    /* 0068d6e3: mov edx, dword ptr [ebp - 0x98] */ r_edx = R32((u32)(r_ebp+0xffffff68u));
    /* 0068d6e9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0068d6eb: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
    /* 0068d6f1: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 0068d6f7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068d6f8: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 0068d6fe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068d6ff: lea ecx, [ebp - 0x28] */ r_ecx = (u32)(r_ebp+0xffffffd8u);
    /* 0068d702: call 0x68d4b0 */ r_esp -= 4; W32(r_esp, 0x68d707u); f_0068d4b0();
    /* 0068d707: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068d70b: je 0x68d715 */ if (fZ) goto L_0068d715;
L_0068d70d:; BB(0x0068d70d);
    /* 0068d70d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0068d710: cmp eax, dword ptr [ebp - 0x28] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffd8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068d713: je 0x68d71b */ if (fZ) goto L_0068d71b;
L_0068d715:; BB(0x0068d715);
    /* 0068d715: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x68d71bu); call_ind(t); }
L_0068d71b:; BB(0x0068d71b);
    /* 0068d71b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068d71e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0068d720: cmp ecx, dword ptr [ebp - 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068d723: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0068d726: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 0068d729: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068d72b: je 0x68d776 */ if (fZ) goto L_0068d776;
L_0068d72d:; BB(0x0068d72d);
    /* 0068d72d: mov byte ptr [ebp - 0x29], 1 */ W8((u32)(r_ebp+0xffffffd7u), 0x1u);
    /* 0068d731: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0068d734: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068d735: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0068d738: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068d739: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0068d73b: lea eax, [ebp - 0x34] */ r_eax = (u32)(r_ebp+0xffffffccu);
    /* 0068d73e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068d73f: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 0068d745: call 0x68d820 */ r_esp -= 4; W32(r_esp, 0x68d74au); f_0068d820();
    /* 0068d74a: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
    /* 0068d750: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 0068d756: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0068d758: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 0068d75b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0068d75e: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0068d760: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0068d763: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0068d766: mov al, byte ptr [ebp - 0x29] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffd7u))) & 0xffu);
    /* 0068d769: mov byte ptr [edx + 8], al */ W8((u32)(r_edx+0x8u), (u8)r_eax);
    /* 0068d76c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068d76f: jmp 0x68d80b */ goto L_0068d80b;
L_0068d776:; BB(0x0068d776);
    /* 0068d776: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 0068d779: call 0x68f800 */ r_esp -= 4; W32(r_esp, 0x68d77eu); f_0068f800();
L_0068d77e:; BB(0x0068d77e);
    /* 0068d77e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068d781: mov dword ptr [ebp - 0xa4], ecx */ W32((u32)(r_ebp+0xffffff5cu), r_ecx);
    /* 0068d787: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0068d78a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068d78b: mov eax, dword ptr [ebp - 0xa4] */ r_eax = R32((u32)(r_ebp+0xffffff5cu));
    /* 0068d791: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068d794: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068d795: call dword ptr [0x6b20f0] */ { u32 t = R32((u32)(0x6b20f0u)); r_esp -= 4; W32(r_esp, 0x68d79bu); call_ind(t); }
    /* 0068d79b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068d79e: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0068d7a1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068d7a3: je 0x68d7ed */ if (fZ) goto L_0068d7ed;
L_0068d7a5:; BB(0x0068d7a5);
    /* 0068d7a5: mov byte ptr [ebp - 0x35], 1 */ W8((u32)(r_ebp+0xffffffcbu), 0x1u);
    /* 0068d7a9: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0068d7ac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068d7ad: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0068d7b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068d7b1: mov cl, byte ptr [ebp - 1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
    /* 0068d7b4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068d7b5: lea edx, [ebp - 0x40] */ r_edx = (u32)(r_ebp+0xffffffc0u);
    /* 0068d7b8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068d7b9: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 0068d7bf: call 0x68d820 */ r_esp -= 4; W32(r_esp, 0x68d7c4u); f_0068d820();
    /* 0068d7c4: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 0068d7ca: mov eax, dword ptr [ebp - 0xa8] */ r_eax = R32((u32)(r_ebp+0xffffff58u));
    /* 0068d7d0: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0068d7d2: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0068d7d5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068d7d8: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0068d7da: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0068d7dd: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0068d7e0: mov dl, byte ptr [ebp - 0x35] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffcbu))) & 0xffu);
    /* 0068d7e3: mov byte ptr [ecx + 8], dl */ W8((u32)(r_ecx+0x8u), (u8)r_edx);
    /* 0068d7e6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068d7e9: jmp 0x68d80b */ goto L_0068d80b;
L_0068d7ed:; BB(0x0068d7ed);
    /* 0068d7ed: mov byte ptr [ebp - 0x41], 0 */ W8((u32)(r_ebp+0xffffffbfu), 0x0u);
    /* 0068d7f1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0068d7f4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068d7f7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0068d7fa: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0068d7fc: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 0068d7ff: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068d802: mov cl, byte ptr [ebp - 0x41] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffbfu))) & 0xffu);
    /* 0068d805: mov byte ptr [eax + 8], cl */ W8((u32)(r_eax+0x8u), (u8)r_ecx);
    /* 0068d808: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
L_0068d80b:; BB(0x0068d80b);
    /* 0068d80b: mov esp, ebp */ r_esp = r_ebp;
    /* 0068d80d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068d80e: ret 8 */ FN_RET(0x0068d5e0); r_esp += 12; return;
}

void f_0068dbf0(void) /* sub_68DBF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068dbf0);
    /* 0068dbf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068dbf1: mov ebp, esp */ r_ebp = r_esp;
    /* 0068dbf3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068dbf6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0068dbf9: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0068dbfc: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068dbff: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068dc02: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0068dc05: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0068dc08: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068dc0b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0068dc0e:; BB(0x0068dc0e);
    /* 0068dc0e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0068dc11: movsx eax, byte ptr [edx + 0x45] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x45u));
    /* 0068dc15: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068dc17: jne 0x68dc4f */ if (!fZ) goto L_0068dc4f;
L_0068dc19:; BB(0x0068dc19);
    /* 0068dc19: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0068dc1c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068dc1d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0068dc20: add edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0068dc23: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068dc24: call dword ptr [0x6b20f0] */ { u32 t = R32((u32)(0x6b20f0u)); r_esp -= 4; W32(r_esp, 0x68dc2au); call_ind(t); }
    /* 0068dc2a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068dc2d: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0068dc30: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068dc32: je 0x68dc3f */ if (fZ) goto L_0068dc3f;
L_0068dc34:; BB(0x0068dc34);
    /* 0068dc34: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0068dc37: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0068dc3a: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0068dc3d: jmp 0x68dc4d */ goto L_0068dc4d;
L_0068dc3f:; BB(0x0068dc3f);
    /* 0068dc3f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0068dc42: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0068dc45: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0068dc48: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0068dc4a: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0068dc4d:; BB(0x0068dc4d);
    /* 0068dc4d: jmp 0x68dc0e */ goto L_0068dc0e;
L_0068dc4f:; BB(0x0068dc4f);
    /* 0068dc4f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068dc52: mov esp, ebp */ r_esp = r_ebp;
    /* 0068dc54: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068dc55: ret 4 */ FN_RET(0x0068dbf0); r_esp += 8; return;
}

void f_0068dc60(void) /* sub_68DC60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068dc60);
    /* 0068dc60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068dc61: mov ebp, esp */ r_ebp = r_esp;
    /* 0068dc63: sub esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068dc66: mov dword ptr [ebp - 0x64], ecx */ W32((u32)(r_ebp+0xffffff9cu), r_ecx);
    /* 0068dc69: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 0068dc6c: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068dc6f: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0068dc72: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0068dc79: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068dc7c: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0068dc7f: cmp dword ptr [ebp - 0x64], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff9cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068dc83: jne 0x68dc8b */ if (!fZ) goto L_0068dc8b;
L_0068dc85:; BB(0x0068dc85);
    /* 0068dc85: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x68dc8bu); call_ind(t); }
L_0068dc8b:; BB(0x0068dc8b);
    /* 0068dc8b: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 0068dc8e: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0068dc91: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0068dc94: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068dc97: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0068dc9a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0068dc9d: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0068dc9f: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0068dca2: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0068dca9: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0068dcac: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0068dcaf: cmp dword ptr [ebp - 0x64], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff9cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068dcb3: jne 0x68dcbb */ if (!fZ) goto L_0068dcbb;
L_0068dcb5:; BB(0x0068dcb5);
    /* 0068dcb5: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x68dcbbu); call_ind(t); }
L_0068dcbb:; BB(0x0068dcbb);
    /* 0068dcbb: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 0068dcbe: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0068dcc1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068dcc4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068dcc5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0068dcc8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068dcc9: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0068dccc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068dccd: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068dcd0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068dcd1: lea edx, [ebp - 0x18] */ r_edx = (u32)(r_ebp+0xffffffe8u);
    /* 0068dcd4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068dcd5: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0068dcd8: call 0x68e850 */ r_esp -= 4; W32(r_esp, 0x68dcddu); f_0068e850();
    /* 0068dcdd: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 0068dce0: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068dce3: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 0068dce6: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0068dce9: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0068dcec: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 0068dcef: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0068dcf2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068dcf3: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x68dcf8u); f_00686cae();
    /* 0068dcf8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068dcfb: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0068dcfe: mov dword ptr [edx + 4], 0 */ W32((u32)(r_edx+0x4u), 0x0u);
    /* 0068dd05: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 0068dd08: mov dword ptr [eax + 8], 0 */ W32((u32)(r_eax+0x8u), 0x0u);
    /* 0068dd0f: mov esp, ebp */ r_esp = r_ebp;
    /* 0068dd11: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068dd12: ret  */ FN_RET(0x0068dc60); r_esp += 4; return;
}

