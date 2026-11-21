#include "protos.h"

void f_006480d0(void) /* sub_6480D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006480d0);
    /* 006480d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006480d1: mov ebp, esp */ r_ebp = r_esp;
    /* 006480d3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006480d6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006480d9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006480dc: cmp dword ptr [eax + 0xc], 0 */ {  u32 a = R32((u32)(r_eax+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006480e0: je 0x648126 */ if (fZ) goto L_00648126;
L_006480e2:; BB(0x006480e2);
    /* 006480e2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006480e5: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 006480e8: cmp dword ptr [edx + 0x17c], 0 */ {  u32 a = R32((u32)(r_edx+0x17cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006480ef: je 0x648126 */ if (fZ) goto L_00648126;
L_006480f1:; BB(0x006480f1);
    /* 006480f1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006480f4: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 006480f7: mov ecx, dword ptr [ecx + 0x17c] */ r_ecx = R32((u32)(r_ecx+0x17cu));
    /* 006480fd: call 0x5fc380 */ r_esp -= 4; W32(r_esp, 0x648102u); f_005fc380();
    /* 00648102: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00648105: jl 0x648126 */ if ((fS!=fO)) goto L_00648126;
L_00648107:; BB(0x00648107);
    /* 00648107: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064810a: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0064810d: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 00648113: call 0x5fc380 */ r_esp -= 4; W32(r_esp, 0x648118u); f_005fc380();
    /* 00648118: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064811b: jg 0x648126 */ if ((!fZ&&fS==fO)) goto L_00648126;
L_0064811d:; BB(0x0064811d);
    /* 0064811d: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 00648124: jmp 0x64812d */ goto L_0064812d;
L_00648126:; BB(0x00648126);
    /* 00648126: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_0064812d:; BB(0x0064812d);
    /* 0064812d: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 00648130: mov esp, ebp */ r_esp = r_ebp;
    /* 00648132: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00648133: ret  */ FN_RET(0x006480d0); r_esp += 4; return;
}

void f_00648140(void) /* sub_648140 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00648140);
    /* 00648140: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00648141: mov ebp, esp */ r_ebp = r_esp;
    /* 00648143: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00648146: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00648149: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064814c: cmp dword ptr [eax + 0xc], 0 */ {  u32 a = R32((u32)(r_eax+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00648150: je 0x648196 */ if (fZ) goto L_00648196;
L_00648152:; BB(0x00648152);
    /* 00648152: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00648155: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 00648158: cmp dword ptr [edx + 0x17c], 0 */ {  u32 a = R32((u32)(r_edx+0x17cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064815f: je 0x648196 */ if (fZ) goto L_00648196;
L_00648161:; BB(0x00648161);
    /* 00648161: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00648164: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 00648167: mov ecx, dword ptr [ecx + 0x17c] */ r_ecx = R32((u32)(r_ecx+0x17cu));
    /* 0064816d: call 0x5fc380 */ r_esp -= 4; W32(r_esp, 0x648172u); f_005fc380();
    /* 00648172: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00648175: jl 0x648196 */ if ((fS!=fO)) goto L_00648196;
L_00648177:; BB(0x00648177);
    /* 00648177: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064817a: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0064817d: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 00648183: call 0x5fc380 */ r_esp -= 4; W32(r_esp, 0x648188u); f_005fc380();
    /* 00648188: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064818b: jg 0x648196 */ if ((!fZ&&fS==fO)) goto L_00648196;
L_0064818d:; BB(0x0064818d);
    /* 0064818d: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 00648194: jmp 0x64819d */ goto L_0064819d;
L_00648196:; BB(0x00648196);
    /* 00648196: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_0064819d:; BB(0x0064819d);
    /* 0064819d: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 006481a0: mov esp, ebp */ r_esp = r_ebp;
    /* 006481a2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006481a3: ret  */ FN_RET(0x00648140); r_esp += 4; return;
}

void f_006481b0(void) /* sub_6481B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006481b0);
    /* 006481b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006481b1: mov ebp, esp */ r_ebp = r_esp;
    /* 006481b3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006481b6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006481b9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006481bc: cmp dword ptr [eax + 0xc], 0 */ {  u32 a = R32((u32)(r_eax+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006481c0: je 0x6481f0 */ if (fZ) goto L_006481f0;
L_006481c2:; BB(0x006481c2);
    /* 006481c2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006481c5: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 006481c8: cmp dword ptr [edx + 0x17c], 0 */ {  u32 a = R32((u32)(r_edx+0x17cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006481cf: je 0x6481f0 */ if (fZ) goto L_006481f0;
L_006481d1:; BB(0x006481d1);
    /* 006481d1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006481d4: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 006481d7: mov ecx, dword ptr [ecx + 0x17c] */ r_ecx = R32((u32)(r_ecx+0x17cu));
    /* 006481dd: call 0x5fc380 */ r_esp -= 4; W32(r_esp, 0x6481e2u); f_005fc380();
    /* 006481e2: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006481e5: jne 0x6481f0 */ if (!fZ) goto L_006481f0;
L_006481e7:; BB(0x006481e7);
    /* 006481e7: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 006481ee: jmp 0x6481f7 */ goto L_006481f7;
L_006481f0:; BB(0x006481f0);
    /* 006481f0: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_006481f7:; BB(0x006481f7);
    /* 006481f7: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 006481fa: mov esp, ebp */ r_esp = r_ebp;
    /* 006481fc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006481fd: ret  */ FN_RET(0x006481b0); r_esp += 4; return;
}

void f_00648200(void) /* sub_648200 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00648200);
    /* 00648200: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00648201: mov ebp, esp */ r_ebp = r_esp;
    /* 00648203: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00648206: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00648209: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064820c: cmp dword ptr [eax + 0xc], 0 */ {  u32 a = R32((u32)(r_eax+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00648210: je 0x648256 */ if (fZ) goto L_00648256;
L_00648212:; BB(0x00648212);
    /* 00648212: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00648215: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 00648218: cmp dword ptr [edx + 0x17c], 0 */ {  u32 a = R32((u32)(r_edx+0x17cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064821f: je 0x648256 */ if (fZ) goto L_00648256;
L_00648221:; BB(0x00648221);
    /* 00648221: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00648224: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 00648227: mov ecx, dword ptr [ecx + 0x17c] */ r_ecx = R32((u32)(r_ecx+0x17cu));
    /* 0064822d: call 0x5fc380 */ r_esp -= 4; W32(r_esp, 0x648232u); f_005fc380();
    /* 00648232: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00648235: je 0x64824d */ if (fZ) goto L_0064824d;
L_00648237:; BB(0x00648237);
    /* 00648237: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064823a: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0064823d: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 00648243: call 0x5fc380 */ r_esp -= 4; W32(r_esp, 0x648248u); f_005fc380();
    /* 00648248: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064824b: jne 0x648256 */ if (!fZ) goto L_00648256;
L_0064824d:; BB(0x0064824d);
    /* 0064824d: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 00648254: jmp 0x64825d */ goto L_0064825d;
L_00648256:; BB(0x00648256);
    /* 00648256: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_0064825d:; BB(0x0064825d);
    /* 0064825d: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 00648260: mov esp, ebp */ r_esp = r_ebp;
    /* 00648262: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00648263: ret  */ FN_RET(0x00648200); r_esp += 4; return;
}

void f_00648270(void) /* sub_648270 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00648270);
    /* 00648270: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00648271: mov ebp, esp */ r_ebp = r_esp;
    /* 00648273: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00648276: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00648279: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0064827c: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
    /* 00648283: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00648286: cmp dword ptr [ecx + 0x4c], 0 */ {  u32 a = R32((u32)(r_ecx+0x4cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064828a: je 0x6482d9 */ if (fZ) goto L_006482d9;
L_0064828c:; BB(0x0064828c);
    /* 0064828c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0064828f: movzx eax, byte ptr [edx + 0x50] */ r_eax = (u32)R8((u32)(r_edx+0x50u));
    /* 00648293: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00648295: jne 0x6482d9 */ if (!fZ) goto L_006482d9;
L_00648297:; BB(0x00648297);
    /* 00648297: movzx ecx, byte ptr [0x7960cb] */ r_ecx = (u32)R8((u32)(0x7960cbu));
    /* 0064829e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006482a0: je 0x6482b9 */ if (fZ) goto L_006482b9;
L_006482a2:; BB(0x006482a2);
    /* 006482a2: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006482a5: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 006482a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006482a9: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 006482af: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 006482b2: call 0x6041d0 */ r_esp -= 4; W32(r_esp, 0x6482b7u); f_006041d0();
    /* 006482b7: jmp 0x6482cf */ goto L_006482cf;
L_006482b9:; BB(0x006482b9);
    /* 006482b9: mov dl, byte ptr [ebp + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 006482bc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006482bd: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006482c0: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 006482c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006482c4: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006482ca: call 0x5f4510 */ r_esp -= 4; W32(r_esp, 0x6482cfu); f_005f4510();
L_006482cf:; BB(0x006482cf);
    /* 006482cf: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006482d2: mov dword ptr [edx + 0x4c], 0 */ W32((u32)(r_edx+0x4cu), 0x0u);
L_006482d9:; BB(0x006482d9);
    /* 006482d9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006482dc: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 006482df: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 006482e5: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 006482e8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006482eb: cmp dword ptr [eax + 0x24], 0 */ {  u32 a = R32((u32)(r_eax+0x24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006482ef: je 0x64830e */ if (fZ) goto L_0064830e;
L_006482f1:; BB(0x006482f1);
    /* 006482f1: movzx ecx, byte ptr [ebp + 8] */ r_ecx = (u32)R8((u32)(r_ebp+0x8u));
    /* 006482f5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006482f7: je 0x64830e */ if (fZ) goto L_0064830e;
L_006482f9:; BB(0x006482f9);
    /* 006482f9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006482fb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006482fe: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 00648301: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00648304: mov ecx, dword ptr [ecx + 0x24] */ r_ecx = R32((u32)(r_ecx+0x24u));
    /* 00648307: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00648309: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0064830c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64830eu); call_ind(t); }
L_0064830e:; BB(0x0064830e);
    /* 0064830e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00648311: mov dword ptr [ecx + 0x24], 0 */ W32((u32)(r_ecx+0x24u), 0x0u);
    /* 00648318: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064831a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064831c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064831f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00648321: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00648324: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00648327: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x648329u); call_ind(t); }
    /* 00648329: mov esp, ebp */ r_esp = r_ebp;
    /* 0064832b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064832c: ret 4 */ FN_RET(0x00648270); r_esp += 8; return;
}

void f_00648330(void) /* sub_648330 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00648330);
    /* 00648330: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00648331: mov ebp, esp */ r_ebp = r_esp;
    /* 00648333: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00648336: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00648339: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064833c: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0064833f: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00648342: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00648345: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00648348: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00648349: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064834f: call 0x639520 */ r_esp -= 4; W32(r_esp, 0x648354u); f_00639520();
    /* 00648354: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00648357: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0064835e: jmp 0x648369 */ goto L_00648369;
L_00648360:; BB(0x00648360);
    /* 00648360: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00648363: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00648366: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_00648369:; BB(0x00648369);
    /* 00648369: cmp dword ptr [ebp - 8], 0x14 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064836d: jge 0x6483cb */ if ((fS==fO)) goto L_006483cb;
L_0064836f:; BB(0x0064836f);
    /* 0064836f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00648372: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00648373: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00648376: imul eax, eax, 0x380 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x380u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0064837c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0064837f: imul ecx, ecx, 0x2c */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x2cu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00648382: lea edx, [eax + ecx + 0x763588] */ r_edx = (u32)(r_eax+r_ecx+0x763588u);
    /* 00648389: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064838a: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x64838fu); f_00686ec0();
    /* 0064838f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00648392: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00648394: jne 0x6483ae */ if (!fZ) goto L_006483ae;
L_00648396:; BB(0x00648396);
    /* 00648396: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00648399: imul eax, eax, 0x380 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x380u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0064839f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006483a2: imul ecx, ecx, 0x2c */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x2cu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006483a5: mov eax, dword ptr [eax + ecx + 0x763580] */ r_eax = R32((u32)(r_eax+r_ecx+0x763580u));
    /* 006483ac: jmp 0x6483cd */ goto L_006483cd;
L_006483ae:; BB(0x006483ae);
    /* 006483ae: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006483b1: imul edx, edx, 0x380 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x380u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006483b7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006483ba: imul eax, eax, 0x2c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x2cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006483bd: cmp dword ptr [edx + eax + 0x763580], 0 */ {  u32 a = R32((u32)(r_edx+r_eax+0x763580u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006483c5: jne 0x6483c9 */ if (!fZ) goto L_006483c9;
L_006483c7:; BB(0x006483c7);
    /* 006483c7: jmp 0x6483cb */ goto L_006483cb;
L_006483c9:; BB(0x006483c9);
    /* 006483c9: jmp 0x648360 */ goto L_00648360;
L_006483cb:; BB(0x006483cb);
    /* 006483cb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006483cd:; BB(0x006483cd);
    /* 006483cd: mov esp, ebp */ r_esp = r_ebp;
    /* 006483cf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006483d0: ret 4 */ FN_RET(0x00648330); r_esp += 8; return;
}

void f_006483e0(void) /* sub_6483E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006483e0);
    /* 006483e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006483e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006483e3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006483e6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 006483e9: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 006483f0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006483f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006483f4: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006483fa: call 0x639520 */ r_esp -= 4; W32(r_esp, 0x6483ffu); f_00639520();
    /* 006483ff: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00648402: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00648409: jmp 0x648414 */ goto L_00648414;
L_0064840b:; BB(0x0064840b);
    /* 0064840b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064840e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00648411: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00648414:; BB(0x00648414);
    /* 00648414: cmp dword ptr [ebp - 4], 0x14 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00648418: jge 0x648459 */ if ((fS==fO)) goto L_00648459;
L_0064841a:; BB(0x0064841a);
    /* 0064841a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0064841d: imul edx, edx, 0x380 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x380u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00648423: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00648426: imul eax, eax, 0x2c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x2cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00648429: cmp dword ptr [edx + eax + 0x763580], 0 */ {  u32 a = R32((u32)(r_edx+r_eax+0x763580u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00648431: jne 0x648435 */ if (!fZ) goto L_00648435;
L_00648433:; BB(0x00648433);
    /* 00648433: jmp 0x648459 */ goto L_00648459;
L_00648435:; BB(0x00648435);
    /* 00648435: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00648438: imul ecx, ecx, 0x380 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x380u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0064843e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00648441: imul edx, edx, 0x2c */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x2cu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00648444: cmp dword ptr [ecx + edx + 0x7635a8], 0 */ {  u32 a = R32((u32)(r_ecx+r_edx+0x7635a8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064844c: jne 0x648457 */ if (!fZ) goto L_00648457;
L_0064844e:; BB(0x0064844e);
    /* 0064844e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00648451: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00648454: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_00648457:; BB(0x00648457);
    /* 00648457: jmp 0x64840b */ goto L_0064840b;
L_00648459:; BB(0x00648459);
    /* 00648459: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064845c: mov esp, ebp */ r_esp = r_ebp;
    /* 0064845e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064845f: ret 4 */ FN_RET(0x006483e0); r_esp += 8; return;
}

void f_00648470(void) /* sub_648470 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00648470);
    /* 00648470: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00648471: mov ebp, esp */ r_ebp = r_esp;
    /* 00648473: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00648476: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00648479: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064847c: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0064847f: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00648482: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00648485: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00648488: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00648489: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064848f: call 0x639520 */ r_esp -= 4; W32(r_esp, 0x648494u); f_00639520();
    /* 00648494: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00648497: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0064849a: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 006484a0: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 006484a3: mov dword ptr [edx], 0 */ W32((u32)(r_edx), 0x0u);
    /* 006484a9: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 006484b0: jmp 0x6484bb */ goto L_006484bb;
L_006484b2:; BB(0x006484b2);
    /* 006484b2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006484b5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006484b8: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_006484bb:; BB(0x006484bb);
    /* 006484bb: cmp dword ptr [ebp - 8], 0x14 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006484bf: jge 0x648546 */ if ((fS==fO)) goto L_00648546;
L_006484c5:; BB(0x006484c5);
    /* 006484c5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006484c8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006484c9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006484cc: imul edx, edx, 0x380 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x380u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006484d2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006484d5: imul eax, eax, 0x2c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x2cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006484d8: lea ecx, [edx + eax + 0x763588] */ r_ecx = (u32)(r_edx+r_eax+0x763588u);
    /* 006484df: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006484e0: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x6484e5u); f_00686ec0();
    /* 006484e5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006484e8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006484ea: jne 0x648526 */ if (!fZ) goto L_00648526;
L_006484ec:; BB(0x006484ec);
    /* 006484ec: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006484ef: imul edx, edx, 0x380 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x380u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006484f5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006484f8: imul eax, eax, 0x2c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x2cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006484fb: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 006484fe: mov edx, dword ptr [edx + eax + 0x763580] */ r_edx = R32((u32)(r_edx+r_eax+0x763580u));
    /* 00648505: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 00648507: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064850a: imul eax, eax, 0x380 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x380u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00648510: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00648513: imul ecx, ecx, 0x2c */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x2cu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00648516: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00648519: mov eax, dword ptr [eax + ecx + 0x763584] */ r_eax = R32((u32)(r_eax+r_ecx+0x763584u));
    /* 00648520: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00648522: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00648524: jmp 0x648548 */ goto L_00648548;
L_00648526:; BB(0x00648526);
    /* 00648526: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00648529: imul ecx, ecx, 0x380 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x380u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0064852f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00648532: imul edx, edx, 0x2c */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x2cu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00648535: cmp dword ptr [ecx + edx + 0x763580], 0 */ {  u32 a = R32((u32)(r_ecx+r_edx+0x763580u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064853d: jne 0x648541 */ if (!fZ) goto L_00648541;
L_0064853f:; BB(0x0064853f);
    /* 0064853f: jmp 0x648546 */ goto L_00648546;
L_00648541:; BB(0x00648541);
    /* 00648541: jmp 0x6484b2 */ goto L_006484b2;
L_00648546:; BB(0x00648546);
    /* 00648546: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00648548:; BB(0x00648548);
    /* 00648548: mov esp, ebp */ r_esp = r_ebp;
    /* 0064854a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064854b: ret 0xc */ FN_RET(0x00648470); r_esp += 16; return;
}

void f_00648550(void) /* sub_648550 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00648550);
    /* 00648550: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00648551: mov ebp, esp */ r_ebp = r_esp;
    /* 00648553: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00648556: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00648559: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 00648560: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 00648567: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0064856e: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00648575: mov dword ptr [ebp - 0x20], 2 */ W32((u32)(r_ebp+0xffffffe0u), 0x2u);
    /* 0064857c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00648583: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00648585: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x64858au); f_0062fbf0();
    /* 0064858a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064858d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00648590: mov dword ptr [ebp - 0x10], 0xffffffff */ W32((u32)(r_ebp+0xfffffff0u), 0xffffffffu);
    /* 00648597: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064859b: jne 0x6485ad */ if (!fZ) goto L_006485ad;
L_0064859d:; BB(0x0064859d);
    /* 0064859d: mov dword ptr [ebp - 0x14], 3 */ W32((u32)(r_ebp+0xffffffecu), 0x3u);
    /* 006485a4: mov dword ptr [ebp - 0x20], 7 */ W32((u32)(r_ebp+0xffffffe0u), 0x7u);
    /* 006485ab: jmp 0x6485c1 */ goto L_006485c1;
L_006485ad:; BB(0x006485ad);
    /* 006485ad: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006485b1: jne 0x6485c1 */ if (!fZ) goto L_006485c1;
L_006485b3:; BB(0x006485b3);
    /* 006485b3: mov dword ptr [ebp - 0x14], 8 */ W32((u32)(r_ebp+0xffffffecu), 0x8u);
    /* 006485ba: mov dword ptr [ebp - 0x20], 0xa */ W32((u32)(r_ebp+0xffffffe0u), 0xau);
L_006485c1:; BB(0x006485c1);
    /* 006485c1: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 006485c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006485c5: lea ecx, [ebp - 0x1c] */ r_ecx = (u32)(r_ebp+0xffffffe4u);
    /* 006485c8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006485c9: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006485cc: mov eax, dword ptr [edx*4 + 0x76d334] */ r_eax = R32((u32)(r_edx*4+0x76d334u));
    /* 006485d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006485d4: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006485d7: call 0x648470 */ r_esp -= 4; W32(r_esp, 0x6485dcu); f_00648470();
    /* 006485dc: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 006485df: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006485e1: je 0x648631 */ if (fZ) goto L_00648631;
L_006485e3:; BB(0x006485e3);
    /* 006485e3: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006485e6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006485e7: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x6485ecu); f_0062fbf0();
    /* 006485ec: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006485ef: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006485f2: movzx eax, byte ptr [ebp + 0xc] */ r_eax = (u32)R8((u32)(r_ebp+0xcu));
    /* 006485f6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006485f8: je 0x648601 */ if (fZ) goto L_00648601;
L_006485fa:; BB(0x006485fa);
    /* 006485fa: mov dword ptr [ebp - 0x10], 0x49e */ W32((u32)(r_ebp+0xfffffff0u), 0x49eu);
L_00648601:; BB(0x00648601);
    /* 00648601: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00648604: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00648605: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00648608: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00648609: call 0x62fc30 */ r_esp -= 4; W32(r_esp, 0x64860eu); f_0062fc30();
    /* 0064860e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00648611: mov eax, dword ptr [eax*4 + 0x76d308] */ r_eax = R32((u32)(r_eax*4+0x76d308u));
    /* 00648618: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00648619: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064861c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064861d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00648620: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00648621: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00648624: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00648625: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00648628: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00648629: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064862c: call 0x647210 */ r_esp -= 4; W32(r_esp, 0x648631u); f_00647210();
L_00648631:; BB(0x00648631);
    /* 00648631: mov esp, ebp */ r_esp = r_ebp;
    /* 00648633: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00648634: ret 8 */ FN_RET(0x00648550); r_esp += 12; return;
}

void f_00648640(void) /* sub_648640 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00648640);
    /* 00648640: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00648641: mov ebp, esp */ r_ebp = r_esp;
    /* 00648643: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00648646: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 00648649: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0064864c: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0064864f: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00648652: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00648655: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x64865au); f_0063aac0();
    /* 0064865a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064865c: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0064865f: cmp dword ptr [ebp - 0x1c], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00648663: je 0x648681 */ if (fZ) goto L_00648681;
L_00648665:; BB(0x00648665);
    /* 00648665: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00648668: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x64866du); f_0063aac0();
    /* 0064866d: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0064866f: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00648672: cmp dword ptr [ebp - 0x20], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00648676: je 0x648681 */ if (fZ) goto L_00648681;
L_00648678:; BB(0x00648678);
    /* 00648678: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 0064867f: jmp 0x648688 */ goto L_00648688;
L_00648681:; BB(0x00648681);
    /* 00648681: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
L_00648688:; BB(0x00648688);
    /* 00648688: mov cl, byte ptr [ebp - 0x4c] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffb4u))) & 0xffu);
    /* 0064868b: mov byte ptr [ebp - 9], cl */ W8((u32)(r_ebp+0xfffffff7u), (u8)r_ecx);
    /* 0064868e: mov dword ptr [ebp - 0x14], 0xffffffff */ W32((u32)(r_ebp+0xffffffecu), 0xffffffffu);
    /* 00648695: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00648697: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064869d: call 0x637730 */ r_esp -= 4; W32(r_esp, 0x6486a2u); f_00637730();
    /* 006486a2: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 006486a5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006486a7: jne 0x6486d4 */ if (!fZ) goto L_006486d4;
L_006486a9:; BB(0x006486a9);
    /* 006486a9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006486ab: push 0x6dc8c0 */ { u32 v = 0x6dc8c0u; r_esp -= 4; W32(r_esp, v); }
    /* 006486b0: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6486b5u); f_00630f40();
    /* 006486b5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006486b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006486b9: push 0x6dc8ac */ { u32 v = 0x6dc8acu; r_esp -= 4; W32(r_esp, v); }
    /* 006486be: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6486c3u); f_00630f40();
    /* 006486c3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006486c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006486c7: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x6486ccu); f_0062ff10();
    /* 006486cc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006486cf: jmp 0x648ace */ goto L_00648ace;
L_006486d4:; BB(0x006486d4);
    /* 006486d4: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 006486d7: call 0x648ae0 */ r_esp -= 4; W32(r_esp, 0x6486dcu); f_00648ae0();
    /* 006486dc: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006486df: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006486e1: jne 0x64870e */ if (!fZ) goto L_0064870e;
L_006486e3:; BB(0x006486e3);
    /* 006486e3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006486e5: push 0x6dc8c0 */ { u32 v = 0x6dc8c0u; r_esp -= 4; W32(r_esp, v); }
    /* 006486ea: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6486efu); f_00630f40();
    /* 006486ef: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006486f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006486f3: push 0x6dc888 */ { u32 v = 0x6dc888u; r_esp -= 4; W32(r_esp, v); }
    /* 006486f8: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6486fdu); f_00630f40();
    /* 006486fd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00648700: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00648701: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x648706u); f_0062ff10();
    /* 00648706: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00648709: jmp 0x648ace */ goto L_00648ace;
L_0064870e:; BB(0x0064870e);
    /* 0064870e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00648714: call 0x636e70 */ r_esp -= 4; W32(r_esp, 0x648719u); f_00636e70();
    /* 00648719: movzx ecx, byte ptr [ebp - 9] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffff7u));
    /* 0064871d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064871f: je 0x64891c */ if (fZ) goto L_0064891c;
L_00648725:; BB(0x00648725);
    /* 00648725: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00648727: movzx edx, byte ptr [ebp + 8] */ r_edx = (u32)R8((u32)(r_ebp+0x8u));
    /* 0064872b: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 0064872d: sbb edx, edx */ { u32 c = fC; u32 a = r_edx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 0064872f: and edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00648732: add edx, 0x402 */ {  u32 a = r_edx; u32 b = 0x402u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00648738: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00648739: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0064873c: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0064873f: call 0x57a470 */ r_esp -= 4; W32(r_esp, 0x648744u); f_0057a470();
    /* 00648744: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00648745: call 0x665800 */ r_esp -= 4; W32(r_esp, 0x64874au); f_00665800();
    /* 0064874a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064874d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064874e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00648754: call 0x637000 */ r_esp -= 4; W32(r_esp, 0x648759u); f_00637000();
    /* 00648759: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0064875c: movzx ecx, byte ptr [ebp + 8] */ r_ecx = (u32)R8((u32)(r_ebp+0x8u));
    /* 00648760: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 00648762: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 00648764: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00648767: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0064876a: mov dword ptr [edx + 0x34], ecx */ W32((u32)(r_edx+0x34u), r_ecx);
    /* 0064876d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064876f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00648771: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00648773: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00648775: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00648778: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00648779: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0064877c: call 0x646fa0 */ r_esp -= 4; W32(r_esp, 0x648781u); f_00646fa0();
    /* 00648781: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00648784: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00648787: cmp dword ptr [edx + 4], -1 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064878b: je 0x648917 */ if (fZ) goto L_00648917;
L_00648791:; BB(0x00648791);
    /* 00648791: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00648797: call 0x636730 */ r_esp -= 4; W32(r_esp, 0x64879cu); f_00636730();
    /* 0064879c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0064879e: jle 0x648917 */ if ((fZ||fS!=fO)) goto L_00648917;
L_006487a4:; BB(0x006487a4);
    /* 006487a4: mov al, byte ptr [ebp + 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 006487a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006487a8: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 006487ab: call 0x648bd0 */ r_esp -= 4; W32(r_esp, 0x6487b0u); f_00648bd0();
    /* 006487b0: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 006487b3: call 0x648bb0 */ r_esp -= 4; W32(r_esp, 0x6487b8u); f_00648bb0();
    /* 006487b8: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 006487bb: cmp eax, dword ptr [ecx + 0x3c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x3cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006487be: jne 0x6488e9 */ if (!fZ) goto L_006488e9;
L_006487c4:; BB(0x006487c4);
    /* 006487c4: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 006487ca: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 006487cd: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 006487d3: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 006487d6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006487d8: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 006487db: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6487ddu); call_ind(t); }
    /* 006487dd: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 006487e0: sub eax, dword ptr [ecx + 0x40] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x40u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006487e3: cmp eax, 0x4650 */ {  u32 a = r_eax; u32 b = 0x4650u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006487e8: jae 0x6488e9 */ if (!fC) goto L_006488e9;
L_006487ee:; BB(0x006487ee);
    /* 006487ee: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006487f4: call 0x636610 */ r_esp -= 4; W32(r_esp, 0x6487f9u); f_00636610();
    /* 006487f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006487fa: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x6487ffu); f_0062fbf0();
    /* 006487ff: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00648802: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00648805: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0064880b: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 0064880e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00648811: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 00648814: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 00648817: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0064881a: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x64881fu); f_0063aac0();
    /* 0064881f: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00648821: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00648824: cmp dword ptr [ebp - 0x2c], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00648828: je 0x648846 */ if (fZ) goto L_00648846;
L_0064882a:; BB(0x0064882a);
    /* 0064882a: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0064882d: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x648832u); f_0063aac0();
    /* 00648832: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00648834: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00648837: cmp dword ptr [ebp - 0x30], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064883b: je 0x648846 */ if (fZ) goto L_00648846;
L_0064883d:; BB(0x0064883d);
    /* 0064883d: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 00648844: jmp 0x64884d */ goto L_0064884d;
L_00648846:; BB(0x00648846);
    /* 00648846: mov dword ptr [ebp - 0x50], 1 */ W32((u32)(r_ebp+0xffffffb0u), 0x1u);
L_0064884d:; BB(0x0064884d);
    /* 0064884d: movzx edx, byte ptr [ebp - 0x50] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffb0u));
    /* 00648851: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00648853: jne 0x6487ee */ if (!fZ) goto L_006487ee;
L_00648855:; BB(0x00648855);
    /* 00648855: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0064885a: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 0064885d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00648860: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 00648863: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00648866: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00648869: movzx edx, byte ptr [ebp + 8] */ r_edx = (u32)R8((u32)(r_ebp+0x8u));
    /* 0064886d: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 0064886f: sbb edx, edx */ { u32 c = fC; u32 a = r_edx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 00648871: add edx, 0x49c */ {  u32 a = r_edx; u32 b = 0x49cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00648877: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0064887a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064887c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064887f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00648880: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00648883: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00648884: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064888a: call 0x637000 */ r_esp -= 4; W32(r_esp, 0x64888fu); f_00637000();
    /* 0064888f: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00648892: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00648894: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00648896: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00648898: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064889a: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064889d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064889e: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 006488a3: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 006488a6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006488a9: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 006488ac: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 006488af: call 0x646fa0 */ r_esp -= 4; W32(r_esp, 0x6488b4u); f_00646fa0();
    /* 006488b4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006488b6: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006488bc: call 0x639070 */ r_esp -= 4; W32(r_esp, 0x6488c1u); f_00639070();
    /* 006488c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006488c2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006488c5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006488c6: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006488cc: call 0x639070 */ r_esp -= 4; W32(r_esp, 0x6488d1u); f_00639070();
    /* 006488d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006488d2: push 0x6dc86c */ { u32 v = 0x6dc86cu; r_esp -= 4; W32(r_esp, v); }
    /* 006488d7: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x6488dcu); f_0062fde0();
    /* 006488dc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006488df: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 006488e2: call 0x648c20 */ r_esp -= 4; W32(r_esp, 0x6488e7u); f_00648c20();
    /* 006488e7: jmp 0x648917 */ goto L_00648917;
L_006488e9:; BB(0x006488e9);
    /* 006488e9: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 006488ef: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 006488f2: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 006488f8: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 006488fb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006488fd: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00648900: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x648902u); call_ind(t); }
    /* 00648902: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00648905: sub eax, dword ptr [ecx + 0x40] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x40u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00648908: cmp eax, 0x4650 */ {  u32 a = r_eax; u32 b = 0x4650u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0064890d: jbe 0x648917 */ if ((fC||fZ)) goto L_00648917;
L_0064890f:; BB(0x0064890f);
    /* 0064890f: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00648912: call 0x648c20 */ r_esp -= 4; W32(r_esp, 0x648917u); f_00648c20();
L_00648917:; BB(0x00648917);
    /* 00648917: jmp 0x648ace */ goto L_00648ace;
L_0064891c:; BB(0x0064891c);
    /* 0064891c: movzx edx, byte ptr [ebp + 8] */ r_edx = (u32)R8((u32)(r_ebp+0x8u));
    /* 00648920: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00648922: jne 0x648960 */ if (!fZ) goto L_00648960;
L_00648924:; BB(0x00648924);
    /* 00648924: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00648926: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x64892bu); f_0062fbf0();
    /* 0064892b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064892e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00648931: jg 0x648960 */ if ((!fZ&&fS==fO)) goto L_00648960;
L_00648933:; BB(0x00648933);
    /* 00648933: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00648938: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064893a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00648940: mov eax, dword ptr [edx + 0xc4] */ r_eax = R32((u32)(r_edx+0xc4u));
    /* 00648946: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x648948u); call_ind(t); }
    /* 00648948: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0064894b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064894d: je 0x648960 */ if (fZ) goto L_00648960;
L_0064894f:; BB(0x0064894f);
    /* 0064894f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00648951: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00648953: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00648956: call 0x648550 */ r_esp -= 4; W32(r_esp, 0x64895bu); f_00648550();
    /* 0064895b: jmp 0x648ace */ goto L_00648ace;
L_00648960:; BB(0x00648960);
    /* 00648960: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00648963: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00648966: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00648969: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 0064896c: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0064896f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00648970: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 00648974: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 00648976: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00648978: add eax, 0x4a2 */ {  u32 a = r_eax; u32 b = 0x4a2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0064897d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064897e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00648984: call 0x637260 */ r_esp -= 4; W32(r_esp, 0x648989u); f_00637260();
    /* 00648989: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0064898c: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00648992: call 0x6340d0 */ r_esp -= 4; W32(r_esp, 0x648997u); f_006340d0();
    /* 00648997: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0064899a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064899c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064899f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006489a0: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 006489a6: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 006489a9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006489ac: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 006489af: call 0x57a470 */ r_esp -= 4; W32(r_esp, 0x6489b4u); f_0057a470();
    /* 006489b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006489b5: call 0x665800 */ r_esp -= 4; W32(r_esp, 0x6489bau); f_00665800();
    /* 006489ba: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006489bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006489be: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006489c4: call 0x637000 */ r_esp -= 4; W32(r_esp, 0x6489c9u); f_00637000();
    /* 006489c9: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006489cc: movzx edx, byte ptr [ebp + 8] */ r_edx = (u32)R8((u32)(r_ebp+0x8u));
    /* 006489d0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006489d2: jne 0x6489f0 */ if (!fZ) goto L_006489f0;
L_006489d4:; BB(0x006489d4);
    /* 006489d4: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 006489d9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006489db: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006489e1: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 006489e7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6489e9u); call_ind(t); }
    /* 006489e9: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 006489ec: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006489ee: je 0x648a16 */ if (fZ) goto L_00648a16;
L_006489f0:; BB(0x006489f0);
    /* 006489f0: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 006489f6: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 006489f9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006489fc: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 006489ff: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00648a02: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00648a05: movzx ecx, byte ptr [ebp + 8] */ r_ecx = (u32)R8((u32)(r_ebp+0x8u));
    /* 00648a09: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 00648a0b: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 00648a0d: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00648a10: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00648a13: mov dword ptr [edx + 0x34], ecx */ W32((u32)(r_edx+0x34u), r_ecx);
L_00648a16:; BB(0x00648a16);
    /* 00648a16: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00648a18: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00648a1a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00648a1c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00648a1e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00648a21: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00648a22: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00648a28: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 00648a2b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00648a2e: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 00648a31: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 00648a34: call 0x646fa0 */ r_esp -= 4; W32(r_esp, 0x648a39u); f_00646fa0();
    /* 00648a39: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00648a3f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00648a41: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00648a47: mov edx, dword ptr [eax + 0xd0] */ r_edx = R32((u32)(r_eax+0xd0u));
    /* 00648a4d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x648a4fu); call_ind(t); }
    /* 00648a4f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00648a52: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00648a54: je 0x648ace */ if (fZ) goto L_00648ace;
L_00648a56:; BB(0x00648a56);
    /* 00648a56: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00648a5c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00648a5e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00648a64: mov eax, dword ptr [edx + 0xd4] */ r_eax = R32((u32)(r_edx+0xd4u));
    /* 00648a6a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x648a6cu); call_ind(t); }
    /* 00648a6c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00648a6f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00648a71: je 0x648a86 */ if (fZ) goto L_00648a86;
L_00648a73:; BB(0x00648a73);
    /* 00648a73: movzx edx, byte ptr [ebp + 8] */ r_edx = (u32)R8((u32)(r_ebp+0x8u));
    /* 00648a77: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 00648a79: sbb edx, edx */ { u32 c = fC; u32 a = r_edx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 00648a7b: add edx, 0x4a0 */ {  u32 a = r_edx; u32 b = 0x4a0u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00648a81: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00648a84: jmp 0x648a96 */ goto L_00648a96;
L_00648a86:; BB(0x00648a86);
    /* 00648a86: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 00648a8a: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 00648a8c: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00648a8e: add eax, 0x49e */ {  u32 a = r_eax; u32 b = 0x49eu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00648a93: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_00648a96:; BB(0x00648a96);
    /* 00648a96: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00648a99: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00648a9c: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00648a9f: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00648aa2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00648aa4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00648aa7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00648aa8: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00648aab: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00648aac: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00648ab2: call 0x637000 */ r_esp -= 4; W32(r_esp, 0x648ab7u); f_00637000();
    /* 00648ab7: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00648aba: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00648abc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00648abe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00648ac0: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00648ac2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00648ac5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00648ac6: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00648ac9: call 0x646fa0 */ r_esp -= 4; W32(r_esp, 0x648aceu); f_00646fa0();
L_00648ace:; BB(0x00648ace);
    /* 00648ace: mov esp, ebp */ r_esp = r_ebp;
    /* 00648ad0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00648ad1: ret 4 */ FN_RET(0x00648640); r_esp += 8; return;
}

void f_00648ae0(void) /* sub_648AE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00648ae0);
    /* 00648ae0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00648ae1: mov ebp, esp */ r_ebp = r_esp;
    /* 00648ae3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00648ae6: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00648ae9: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00648aee: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00648af0: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00648af6: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 00648afc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x648afeu); call_ind(t); }
    /* 00648afe: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00648b01: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00648b03: je 0x648b22 */ if (fZ) goto L_00648b22;
L_00648b05:; BB(0x00648b05);
    /* 00648b05: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 00648b0b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00648b0d: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00648b13: mov edx, dword ptr [eax + 0x1e0] */ r_edx = R32((u32)(r_eax+0x1e0u));
    /* 00648b19: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x648b1bu); call_ind(t); }
    /* 00648b1b: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00648b1e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00648b20: jne 0x648b29 */ if (!fZ) goto L_00648b29;
L_00648b22:; BB(0x00648b22);
    /* 00648b22: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00648b24: jmp 0x648ba9 */ goto L_00648ba9;
L_00648b29:; BB(0x00648b29);
    /* 00648b29: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00648b2c: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00648b2f: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00648b32: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00648b35: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x648b3au); f_0063aac0();
    /* 00648b3a: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00648b3c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00648b3f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00648b41: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00648b45: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00648b48: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 00648b4b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00648b4d: je 0x648b68 */ if (fZ) goto L_00648b68;
L_00648b4f:; BB(0x00648b4f);
    /* 00648b4f: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00648b55: call 0x6340d0 */ r_esp -= 4; W32(r_esp, 0x648b5au); f_006340d0();
    /* 00648b5a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00648b5d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00648b5f: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00648b63: setge al */ r_eax = (r_eax & 0xffffff00u) | ((((fS==fO)) ? 1 : 0) & 0xffu);
    /* 00648b66: jmp 0x648ba9 */ goto L_00648ba9;
L_00648b68:; BB(0x00648b68);
    /* 00648b68: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00648b6b: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00648b6e: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00648b71: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00648b74: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x648b79u); f_0063aac0();
    /* 00648b79: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00648b7b: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00648b7e: cmp dword ptr [ebp - 0x14], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00648b82: je 0x648b88 */ if (fZ) goto L_00648b88;
L_00648b84:; BB(0x00648b84);
    /* 00648b84: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00648b86: jmp 0x648ba9 */ goto L_00648ba9;
L_00648b88:; BB(0x00648b88);
    /* 00648b88: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00648b8b: cmp dword ptr [eax + 0x14], 0 */ {  u32 a = R32((u32)(r_eax+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00648b8f: je 0x648ba3 */ if (fZ) goto L_00648ba3;
L_00648b91:; BB(0x00648b91);
    /* 00648b91: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00648b94: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 00648b97: call 0x665250 */ r_esp -= 4; W32(r_esp, 0x648b9cu); f_00665250();
    /* 00648b9c: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00648b9f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00648ba1: jne 0x648ba7 */ if (!fZ) goto L_00648ba7;
L_00648ba3:; BB(0x00648ba3);
    /* 00648ba3: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00648ba5: jmp 0x648ba9 */ goto L_00648ba9;
L_00648ba7:; BB(0x00648ba7);
    /* 00648ba7: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00648ba9:; BB(0x00648ba9);
    /* 00648ba9: mov esp, ebp */ r_esp = r_ebp;
    /* 00648bab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00648bac: ret  */ FN_RET(0x00648ae0); r_esp += 4; return;
}

void f_00648bd0(void) /* sub_648BD0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00648bd0);
    /* 00648bd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00648bd1: mov ebp, esp */ r_ebp = r_esp;
    /* 00648bd3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00648bd4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00648bd7: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 00648bdb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00648bde: movzx edx, byte ptr [ecx + 0x44] */ r_edx = (u32)R8((u32)(r_ecx+0x44u));
    /* 00648be2: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00648be4: je 0x648bf2 */ if (fZ) goto L_00648bf2;
L_00648be6:; BB(0x00648be6);
    /* 00648be6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00648be9: call 0x648bb0 */ r_esp -= 4; W32(r_esp, 0x648beeu); f_00648bb0();
    /* 00648bee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00648bf0: jne 0x648c03 */ if (!fZ) goto L_00648c03;
L_00648bf2:; BB(0x00648bf2);
    /* 00648bf2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00648bf5: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 00648bf8: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00648bfb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00648bfe: mov dword ptr [edx + 0x38], ecx */ W32((u32)(r_edx+0x38u), r_ecx);
    /* 00648c01: jmp 0x648c0b */ goto L_00648c0b;
L_00648c03:; BB(0x00648c03);
    /* 00648c03: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00648c06: call 0x648c20 */ r_esp -= 4; W32(r_esp, 0x648c0bu); f_00648c20();
L_00648c0b:; BB(0x00648c0b);
    /* 00648c0b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00648c0e: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 00648c11: mov byte ptr [eax + 0x44], cl */ W8((u32)(r_eax+0x44u), (u8)r_ecx);
    /* 00648c14: mov esp, ebp */ r_esp = r_ebp;
    /* 00648c16: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00648c17: ret 4 */ FN_RET(0x00648bd0); r_esp += 8; return;
}

void f_00648c20(void) /* sub_648C20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00648c20);
    /* 00648c20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00648c21: mov ebp, esp */ r_ebp = r_esp;
    /* 00648c23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00648c24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00648c27: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00648c2a: mov dword ptr [eax + 0x38], 0 */ W32((u32)(r_eax+0x38u), 0x0u);
    /* 00648c31: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00648c34: mov byte ptr [ecx + 0x44], 1 */ W8((u32)(r_ecx+0x44u), 0x1u);
    /* 00648c38: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00648c3a: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x648c3fu); f_0062fbf0();
    /* 00648c3f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00648c42: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00648c45: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00648c48: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 00648c4b: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 00648c50: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 00648c53: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 00648c59: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 00648c5c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00648c5e: mov ecx, eax */ r_ecx = r_eax;
    /* 00648c60: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00648c63: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x648c65u); call_ind(t); }
    /* 00648c65: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00648c68: mov dword ptr [ecx + 0x40], eax */ W32((u32)(r_ecx+0x40u), r_eax);
    /* 00648c6b: mov esp, ebp */ r_esp = r_ebp;
    /* 00648c6d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00648c6e: ret  */ FN_RET(0x00648c20); r_esp += 4; return;
}

