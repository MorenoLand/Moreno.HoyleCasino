#include "protos.h"

void f_005c8110(void) /* MLVSlotRoom::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c8110);
    /* 005c8110: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c8111: mov ebp, esp */ r_ebp = r_esp;
    /* 005c8113: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c8114: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c8117: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c811a: call 0x5d7b60 */ r_esp -= 4; W32(r_esp, 0x5c811fu); f_005d7b60();
    /* 005c811f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c8122: mov dword ptr [eax], 0x6d1f44 */ W32((u32)(r_eax), 0x6d1f44u);
    /* 005c8128: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c812b: mov dword ptr [ecx + 0x80], 0 */ W32((u32)(r_ecx+0x80u), 0x0u);
    /* 005c8135: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c8138: mov esp, ebp */ r_esp = r_ebp;
    /* 005c813a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c813b: ret  */ FN_RET(0x005c8110); r_esp += 4; return;
}

void f_005c8140(void) /* MLVSlotRoom::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c8140);
    /* 005c8140: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c8141: mov ebp, esp */ r_ebp = r_esp;
    /* 005c8143: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c8145: push 0x6a8948 */ { u32 v = 0x6a8948u; r_esp -= 4; W32(r_esp, v); }
    /* 005c814a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005c8150: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c8151: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c8154: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005c8159: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c815b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c815c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005c815f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005c8165: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005c8168: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c816b: mov dword ptr [eax], 0x6d1f44 */ W32((u32)(r_eax), 0x6d1f44u);
    /* 005c8171: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c8178: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c817b: cmp dword ptr [ecx + 0x80], 0 */ {  u32 a = R32((u32)(r_ecx+0x80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8182: je 0x5c81b6 */ if (fZ) goto L_005c81b6;
L_005c8184:; BB(0x005c8184);
    /* 005c8184: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c8187: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 005c818d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005c8190: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c8193: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005c8196: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c819a: je 0x5c81af */ if (fZ) goto L_005c81af;
L_005c819c:; BB(0x005c819c);
    /* 005c819c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c819e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c81a1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c81a3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c81a6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c81a8: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5c81aau); call_ind(t); }
    /* 005c81aa: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005c81ad: jmp 0x5c81b6 */ goto L_005c81b6;
L_005c81af:; BB(0x005c81af);
    /* 005c81af: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005c81b6:; BB(0x005c81b6);
    /* 005c81b6: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c81b9: mov dword ptr [eax + 0x80], 0 */ W32((u32)(r_eax+0x80u), 0x0u);
    /* 005c81c3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005c81ca: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c81cd: call 0x5d7bd0 */ r_esp -= 4; W32(r_esp, 0x5c81d2u); f_005d7bd0();
    /* 005c81d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c81d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005c81dc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c81dd: mov esp, ebp */ r_esp = r_ebp;
    /* 005c81df: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c81e0: ret  */ FN_RET(0x005c8140); r_esp += 4; return;
}

void f_005c81f0(void) /* MLVSlotRoom::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c81f0);
    /* 005c81f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c81f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c81f3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c81f6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005c81f9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c81fc: call 0x5d8230 */ r_esp -= 4; W32(r_esp, 0x5c8201u); f_005d8230();
    /* 005c8201: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c8204: cmp dword ptr [eax + 0x80], 0 */ {  u32 a = R32((u32)(r_eax+0x80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c820b: je 0x5c823f */ if (fZ) goto L_005c823f;
L_005c820d:; BB(0x005c820d);
    /* 005c820d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c8210: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 005c8216: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005c8219: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c821c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005c821f: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8223: je 0x5c8238 */ if (fZ) goto L_005c8238;
L_005c8225:; BB(0x005c8225);
    /* 005c8225: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c8227: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c822a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005c822c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c822f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c8231: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c8233u); call_ind(t); }
    /* 005c8233: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005c8236: jmp 0x5c823f */ goto L_005c823f;
L_005c8238:; BB(0x005c8238);
    /* 005c8238: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_005c823f:; BB(0x005c823f);
    /* 005c823f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c8242: mov dword ptr [ecx + 0x80], 0 */ W32((u32)(r_ecx+0x80u), 0x0u);
    /* 005c824c: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c824f: cmp dword ptr [edx + 0x80], 0 */ {  u32 a = R32((u32)(r_edx+0x80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8256: jne 0x5c8275 */ if (!fZ) goto L_005c8275;
L_005c8258:; BB(0x005c8258);
    /* 005c8258: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 005c825d: mov ecx, dword ptr [eax + 0x4f14] */ r_ecx = R32((u32)(r_eax+0x4f14u));
    /* 005c8263: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c8264: call 0x5c2200 */ r_esp -= 4; W32(r_esp, 0x5c8269u); f_005c2200();
    /* 005c8269: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c826c: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c826f: mov dword ptr [edx + 0x80], eax */ W32((u32)(r_edx+0x80u), r_eax);
L_005c8275:; BB(0x005c8275);
    /* 005c8275: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c8278: cmp dword ptr [eax + 0x80], 0 */ {  u32 a = R32((u32)(r_eax+0x80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c827f: jne 0x5c829f */ if (!fZ) goto L_005c829f;
L_005c8281:; BB(0x005c8281);
    /* 005c8281: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005c8287: mov edx, dword ptr [ecx + 0x4f14] */ r_edx = R32((u32)(r_ecx+0x4f14u));
    /* 005c828d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c828e: call 0x5c6d50 */ r_esp -= 4; W32(r_esp, 0x5c8293u); f_005c6d50();
    /* 005c8293: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c8296: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c8299: mov dword ptr [ecx + 0x80], eax */ W32((u32)(r_ecx+0x80u), r_eax);
L_005c829f:; BB(0x005c829f);
    /* 005c829f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c82a2: cmp dword ptr [edx + 0x80], 0 */ {  u32 a = R32((u32)(r_edx+0x80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c82a9: jne 0x5c82c8 */ if (!fZ) goto L_005c82c8;
L_005c82ab:; BB(0x005c82ab);
    /* 005c82ab: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 005c82b0: mov ecx, dword ptr [eax + 0x4f14] */ r_ecx = R32((u32)(r_eax+0x4f14u));
    /* 005c82b6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c82b7: call 0x5bc720 */ r_esp -= 4; W32(r_esp, 0x5c82bcu); f_005bc720();
    /* 005c82bc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c82bf: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c82c2: mov dword ptr [edx + 0x80], eax */ W32((u32)(r_edx+0x80u), r_eax);
L_005c82c8:; BB(0x005c82c8);
    /* 005c82c8: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c82cb: cmp dword ptr [eax + 0x80], 0 */ {  u32 a = R32((u32)(r_eax+0x80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c82d2: je 0x5c82fc */ if (fZ) goto L_005c82fc;
L_005c82d4:; BB(0x005c82d4);
    /* 005c82d4: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005c82da: mov edx, dword ptr [ecx + 0x4f14] */ r_edx = R32((u32)(r_ecx+0x4f14u));
    /* 005c82e0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c82e1: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c82e4: mov ecx, dword ptr [eax + 0x80] */ r_ecx = R32((u32)(r_eax+0x80u));
    /* 005c82ea: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c82ed: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 005c82f3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005c82f5: mov ecx, eax */ r_ecx = r_eax;
    /* 005c82f7: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005c82fa: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c82fcu); call_ind(t); }
L_005c82fc:; BB(0x005c82fc);
    /* 005c82fc: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c82fe: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005c8304: call 0x5df700 */ r_esp -= 4; W32(r_esp, 0x5c8309u); f_005df700();
    /* 005c8309: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005c830c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c830e: je 0x5c8324 */ if (fZ) goto L_005c8324;
L_005c8310:; BB(0x005c8310);
    /* 005c8310: push 0x75a3c8 */ { u32 v = 0x75a3c8u; r_esp -= 4; W32(r_esp, v); }
    /* 005c8315: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005c8317: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 005c831d: call 0x57ab80 */ r_esp -= 4; W32(r_esp, 0x5c8322u); f_0057ab80();
    /* 005c8322: jmp 0x5c832f */ goto L_005c832f;
L_005c8324:; BB(0x005c8324);
    /* 005c8324: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 005c832a: call 0x57ae30 */ r_esp -= 4; W32(r_esp, 0x5c832fu); f_0057ae30();
L_005c832f:; BB(0x005c832f);
    /* 005c832f: mov esp, ebp */ r_esp = r_ebp;
    /* 005c8331: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c8332: ret  */ FN_RET(0x005c81f0); r_esp += 4; return;
}

void f_005c8340(void) /* MLVSlotRoom::vfunc155 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c8340);
    /* 005c8340: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c8341: mov ebp, esp */ r_ebp = r_esp;
    /* 005c8343: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c8344: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c8347: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c834a: mov dword ptr [eax], 1 */ W32((u32)(r_eax), 0x1u);
    /* 005c8350: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005c8353: mov dword ptr [ecx], 0x3b9aca00 */ W32((u32)(r_ecx), 0x3b9aca00u);
    /* 005c8359: mov esp, ebp */ r_esp = r_ebp;
    /* 005c835b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c835c: ret 8 */ FN_RET(0x005c8340); r_esp += 12; return;
}

void f_005c8360(void) /* MLVSlotRoom::vfunc12 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c8360);
    /* 005c8360: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c8361: mov ebp, esp */ r_ebp = r_esp;
    /* 005c8363: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c8366: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c8369: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005c836c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005c836f: cmp dword ptr [ebp - 8], 0x186a1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x186a1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8376: je 0x5c8393 */ if (fZ) goto L_005c8393;
L_005c8378:; BB(0x005c8378);
    /* 005c8378: cmp dword ptr [ebp - 8], 0x186c3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x186c3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c837f: je 0x5c83fd */ if (fZ) goto L_005c83fd;
L_005c8381:; BB(0x005c8381);
    /* 005c8381: cmp dword ptr [ebp - 8], 0x186d7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x186d7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8388: je 0x5c8429 */ if (fZ) goto L_005c8429;
L_005c838e:; BB(0x005c838e);
    /* 005c838e: jmp 0x5c845e */ goto L_005c845e;
L_005c8393:; BB(0x005c8393);
    /* 005c8393: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c8395: push 0x186a6 */ { u32 v = 0x186a6u; r_esp -= 4; W32(r_esp, v); }
    /* 005c839a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005c839d: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x5c83a2u); f_005fe640();
    /* 005c83a2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c83a4: push 0x186a9 */ { u32 v = 0x186a9u; r_esp -= 4; W32(r_esp, v); }
    /* 005c83a9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005c83ac: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x5c83b1u); f_005fe640();
    /* 005c83b1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c83b3: push 0x186a7 */ { u32 v = 0x186a7u; r_esp -= 4; W32(r_esp, v); }
    /* 005c83b8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005c83bb: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x5c83c0u); f_005fe640();
    /* 005c83c0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c83c2: push 0x186a8 */ { u32 v = 0x186a8u; r_esp -= 4; W32(r_esp, v); }
    /* 005c83c7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005c83ca: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x5c83cfu); f_005fe640();
    /* 005c83cf: movzx ecx, byte ptr [0x795f95] */ r_ecx = (u32)R8((u32)(0x795f95u));
    /* 005c83d6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c83d8: jne 0x5c83ef */ if (!fZ) goto L_005c83ef;
L_005c83da:; BB(0x005c83da);
    /* 005c83da: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c83dc: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c83de: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c83e0: push 0x1399 */ { u32 v = 0x1399u; r_esp -= 4; W32(r_esp, v); }
    /* 005c83e5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005c83e8: call 0x5fe240 */ r_esp -= 4; W32(r_esp, 0x5c83edu); f_005fe240();
    /* 005c83ed: jmp 0x5c83fb */ goto L_005c83fb;
L_005c83ef:; BB(0x005c83ef);
    /* 005c83ef: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c83f1: push -2 */ { u32 v = 0xfffffffeu; r_esp -= 4; W32(r_esp, v); }
    /* 005c83f3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005c83f6: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x5c83fbu); f_005fe640();
L_005c83fb:; BB(0x005c83fb);
    /* 005c83fb: jmp 0x5c845e */ goto L_005c845e;
L_005c83fd:; BB(0x005c83fd);
    /* 005c83fd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c83ff: push 0x186c6 */ { u32 v = 0x186c6u; r_esp -= 4; W32(r_esp, v); }
    /* 005c8404: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005c8407: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x5c840cu); f_005fe640();
    /* 005c840c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c840e: push 0x186c5 */ { u32 v = 0x186c5u; r_esp -= 4; W32(r_esp, v); }
    /* 005c8413: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005c8416: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x5c841bu); f_005fe640();
    /* 005c841b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005c841d: push -2 */ { u32 v = 0xfffffffeu; r_esp -= 4; W32(r_esp, v); }
    /* 005c841f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005c8422: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x5c8427u); f_005fe640();
    /* 005c8427: jmp 0x5c845e */ goto L_005c845e;
L_005c8429:; BB(0x005c8429);
    /* 005c8429: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c842b: push 0x186da */ { u32 v = 0x186dau; r_esp -= 4; W32(r_esp, v); }
    /* 005c8430: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005c8433: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x5c8438u); f_005fe640();
    /* 005c8438: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c843a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c843c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c843e: push 0x1391 */ { u32 v = 0x1391u; r_esp -= 4; W32(r_esp, v); }
    /* 005c8443: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005c8446: call 0x5fe240 */ r_esp -= 4; W32(r_esp, 0x5c844bu); f_005fe240();
    /* 005c844b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c844d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c844f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c8451: push 0x139b */ { u32 v = 0x139bu; r_esp -= 4; W32(r_esp, v); }
    /* 005c8456: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005c8459: call 0x5fe240 */ r_esp -= 4; W32(r_esp, 0x5c845eu); f_005fe240();
L_005c845e:; BB(0x005c845e);
    /* 005c845e: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005c8461: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c8462: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c8465: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c8466: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c8469: call 0x5d8670 */ r_esp -= 4; W32(r_esp, 0x5c846eu); f_005d8670();
    /* 005c846e: mov esp, ebp */ r_esp = r_ebp;
    /* 005c8470: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c8471: ret 8 */ FN_RET(0x005c8360); r_esp += 12; return;
}

void f_005c8480(void) /* MLVSlotRoom::vfunc11 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c8480);
    /* 005c8480: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c8481: mov ebp, esp */ r_ebp = r_esp;
    /* 005c8483: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c8484: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c8487: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c848a: call 0x64e430 */ r_esp -= 4; W32(r_esp, 0x5c848fu); f_0064e430();
    /* 005c848f: mov esp, ebp */ r_esp = r_ebp;
    /* 005c8491: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c8492: ret  */ FN_RET(0x005c8480); r_esp += 4; return;
}

void f_005c84c0(void) /* MLVSlotRoom::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c84c0);
    /* 005c84c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c84c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c84c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c84c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c84c7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c84ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c84cb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c84ce: call 0x5d7f40 */ r_esp -= 4; W32(r_esp, 0x5c84d3u); f_005d7f40();
    /* 005c84d3: mov esp, ebp */ r_esp = r_ebp;
    /* 005c84d5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c84d6: ret 4 */ FN_RET(0x005c84c0); r_esp += 8; return;
}

void f_005c8500(void) /* MLVSlotRoom::vfunc164 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c8500);
    /* 005c8500: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c8501: mov ebp, esp */ r_ebp = r_esp;
    /* 005c8503: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c8506: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005c8509: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005c850c: mov ecx, dword ptr [eax + 0x80] */ r_ecx = R32((u32)(r_eax+0x80u));
    /* 005c8512: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005c8515: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005c8518: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c851b: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005c851e: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005c8521: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c8524: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c8525: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 005c8528: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c8529: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c852c: call 0x5d0c30 */ r_esp -= 4; W32(r_esp, 0x5c8531u); f_005d0c30();
    /* 005c8531: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c8534: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c8535: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c8538: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c8539: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c853c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c853d: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5c8542u); f_005dcb00();
    /* 005c8542: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c8545: mov ecx, eax */ r_ecx = r_eax;
    /* 005c8547: call 0x5d5fb0 */ r_esp -= 4; W32(r_esp, 0x5c854cu); f_005d5fb0();
    /* 005c854c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c854f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c8550: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c8553: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c8554: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c8557: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c8558: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5c855du); f_005dcb00();
    /* 005c855d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c8560: mov ecx, eax */ r_ecx = r_eax;
    /* 005c8562: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x5c8567u); f_005d5cf0();
    /* 005c8567: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c8569: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c856c: call 0x5d0a20 */ r_esp -= 4; W32(r_esp, 0x5c8571u); f_005d0a20();
    /* 005c8571: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c8574: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 005c857a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005c857d: mov ecx, dword ptr [eax + 0x80] */ r_ecx = R32((u32)(r_eax+0x80u));
    /* 005c8583: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005c8585: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005c8588: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c858au); call_ind(t); }
    /* 005c858a: mov esp, ebp */ r_esp = r_ebp;
    /* 005c858c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c858d: ret 4 */ FN_RET(0x005c8500); r_esp += 8; return;
}

void f_005c8590(void) /* MLVSlotRoom::vfunc167 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c8590);
    /* 005c8590: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c8591: mov ebp, esp */ r_ebp = r_esp;
    /* 005c8593: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c8596: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005c8599: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005c859c: mov ecx, dword ptr [eax + 0x80] */ r_ecx = R32((u32)(r_eax+0x80u));
    /* 005c85a2: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005c85a5: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005c85a8: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 005c85aa: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005c85b0: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x5c85b5u); f_006375b0();
    /* 005c85b5: mov ecx, eax */ r_ecx = r_eax;
    /* 005c85b7: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x5c85bcu); f_0063aae0();
    /* 005c85bc: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005c85bf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c85c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c85c3: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5c85c8u); f_005dcb00();
    /* 005c85c8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c85cb: mov ecx, dword ptr [eax + 0x4c8] */ r_ecx = R32((u32)(r_eax+0x4c8u));
    /* 005c85d1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c85d2: mov edx, dword ptr [eax + 0x4c4] */ r_edx = R32((u32)(r_eax+0x4c4u));
    /* 005c85d8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c85d9: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 005c85dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c85dd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c85e0: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x5c85e5u); f_0064c5c0();
    /* 005c85e5: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005c85e7: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005c85ea: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c85ed: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 005c85ef: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 005c85f2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005c85f5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c85f6: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5c85fbu); f_005dcb00();
    /* 005c85fb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c85fe: mov ecx, eax */ r_ecx = r_eax;
    /* 005c8600: call 0x63b0a0 */ r_esp -= 4; W32(r_esp, 0x5c8605u); f_0063b0a0();
    /* 005c8605: mov esp, ebp */ r_esp = r_ebp;
    /* 005c8607: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c8608: ret 4 */ FN_RET(0x005c8590); r_esp += 8; return;
}

void f_005c8620(void) /* MLVSlotRoom::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c8620);
    /* 005c8620: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c8621: mov ebp, esp */ r_ebp = r_esp;
    /* 005c8623: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c8624: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c8627: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c862a: cmp dword ptr [eax + 0x80], 0 */ {  u32 a = R32((u32)(r_eax+0x80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8631: je 0x5c8650 */ if (fZ) goto L_005c8650;
L_005c8633:; BB(0x005c8633);
    /* 005c8633: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005c8636: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c8637: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c863a: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 005c8640: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c8643: mov ecx, dword ptr [ecx + 0x80] */ r_ecx = R32((u32)(r_ecx+0x80u));
    /* 005c8649: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c864b: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005c864e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c8650u); call_ind(t); }
L_005c8650:; BB(0x005c8650);
    /* 005c8650: mov esp, ebp */ r_esp = r_ebp;
    /* 005c8652: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c8653: ret 4 */ FN_RET(0x005c8620); r_esp += 8; return;
}

void f_005c8660(void) /* MLVSlotRoom::vfunc175 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c8660);
    /* 005c8660: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c8661: mov ebp, esp */ r_ebp = r_esp;
    /* 005c8663: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c8666: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005c8669: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c866c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c866d: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 005c8670: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c8671: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c8674: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 005c867a: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005c867d: call 0x5d0db0 */ r_esp -= 4; W32(r_esp, 0x5c8682u); f_005d0db0();
    /* 005c8682: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c8685: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 005c868b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c868e: mov ecx, dword ptr [eax + 0x80] */ r_ecx = R32((u32)(r_eax+0x80u));
    /* 005c8694: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005c8696: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 005c8699: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c869bu); call_ind(t); }
    /* 005c869b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c869e: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 005c86a4: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c86a7: mov ecx, dword ptr [eax + 0x80] */ r_ecx = R32((u32)(r_eax+0x80u));
    /* 005c86ad: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005c86af: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005c86b2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c86b4u); call_ind(t); }
    /* 005c86b4: mov esp, ebp */ r_esp = r_ebp;
    /* 005c86b6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c86b7: ret 4 */ FN_RET(0x005c8660); r_esp += 8; return;
}

void f_005c86c0(void) /* MLVSlotRoom::vfunc3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c86c0);
    /* 005c86c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c86c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c86c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c86c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c86c7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c86ca: call 0x5d8020 */ r_esp -= 4; W32(r_esp, 0x5c86cfu); f_005d8020();
    /* 005c86cf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c86d2: cmp dword ptr [eax + 0x80], 0 */ {  u32 a = R32((u32)(r_eax+0x80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c86d9: je 0x5c86f4 */ if (fZ) goto L_005c86f4;
L_005c86db:; BB(0x005c86db);
    /* 005c86db: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c86de: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 005c86e4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c86e7: mov ecx, dword ptr [eax + 0x80] */ r_ecx = R32((u32)(r_eax+0x80u));
    /* 005c86ed: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005c86ef: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005c86f2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c86f4u); call_ind(t); }
L_005c86f4:; BB(0x005c86f4);
    /* 005c86f4: mov esp, ebp */ r_esp = r_ebp;
    /* 005c86f6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c86f7: ret  */ FN_RET(0x005c86c0); r_esp += 4; return;
}

