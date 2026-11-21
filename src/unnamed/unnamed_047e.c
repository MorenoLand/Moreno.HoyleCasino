#include "protos.h"

void f_0047e170(void) /* sub_47E170 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047e170);
    /* 0047e170: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047e171: mov ebp, esp */ r_ebp = r_esp;
    /* 0047e173: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047e174: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0047e177: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 0047e17c: mov eax, dword ptr [eax + 0x4f18] */ r_eax = R32((u32)(r_eax+0x4f18u));
    /* 0047e182: mov esp, ebp */ r_esp = r_ebp;
    /* 0047e184: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047e185: ret  */ FN_RET(0x0047e170); r_esp += 4; return;
}

void f_0047e190(void) /* sub_47E190 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047e190);
    /* 0047e190: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047e191: mov ebp, esp */ r_ebp = r_esp;
    /* 0047e193: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047e194: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0047e197: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047e19a: mov eax, dword ptr [eax + 0x460] */ r_eax = R32((u32)(r_eax+0x460u));
    /* 0047e1a0: mov esp, ebp */ r_esp = r_ebp;
    /* 0047e1a2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047e1a3: ret  */ FN_RET(0x0047e190); r_esp += 4; return;
}

void f_0047e1b0(void) /* sub_47E1B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047e1b0);
    /* 0047e1b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047e1b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0047e1b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047e1b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0047e1b7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047e1ba: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0047e1bd: mov dword ptr [eax + 0x460], ecx */ W32((u32)(r_eax+0x460u), r_ecx);
    /* 0047e1c3: mov esp, ebp */ r_esp = r_ebp;
    /* 0047e1c5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047e1c6: ret 4 */ FN_RET(0x0047e1b0); r_esp += 8; return;
}

void f_0047e1d0(void) /* sub_47E1D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047e1d0);
    /* 0047e1d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047e1d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0047e1d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047e1d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0047e1d7: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 0047e1dc: cmp dword ptr [eax + 0x4f18], 0 */ {  u32 a = R32((u32)(r_eax+0x4f18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047e1e3: je 0x47e203 */ if (fZ) goto L_0047e203;
L_0047e1e5:; BB(0x0047e1e5);
    /* 0047e1e5: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0047e1eb: cmp dword ptr [ecx + 0x4f18], 1 */ {  u32 a = R32((u32)(r_ecx+0x4f18u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047e1f2: je 0x47e203 */ if (fZ) goto L_0047e203;
L_0047e1f4:; BB(0x0047e1f4);
    /* 0047e1f4: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 0047e1fa: cmp dword ptr [edx + 0x4f18], 2 */ {  u32 a = R32((u32)(r_edx+0x4f18u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047e201: jne 0x47e20a */ if (!fZ) goto L_0047e20a;
L_0047e203:; BB(0x0047e203);
    /* 0047e203: mov eax, 2 */ r_eax = 0x2u;
    /* 0047e208: jmp 0x47e258 */ goto L_0047e258;
L_0047e20a:; BB(0x0047e20a);
    /* 0047e20a: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 0047e20f: cmp dword ptr [eax + 0x4f18], 3 */ {  u32 a = R32((u32)(r_eax+0x4f18u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047e216: je 0x47e227 */ if (fZ) goto L_0047e227;
L_0047e218:; BB(0x0047e218);
    /* 0047e218: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0047e21e: cmp dword ptr [ecx + 0x4f18], 4 */ {  u32 a = R32((u32)(r_ecx+0x4f18u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047e225: jne 0x47e22e */ if (!fZ) goto L_0047e22e;
L_0047e227:; BB(0x0047e227);
    /* 0047e227: mov eax, 1 */ r_eax = 0x1u;
    /* 0047e22c: jmp 0x47e258 */ goto L_0047e258;
L_0047e22e:; BB(0x0047e22e);
    /* 0047e22e: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 0047e234: cmp dword ptr [edx + 0x4f18], 5 */ {  u32 a = R32((u32)(r_edx+0x4f18u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047e23b: je 0x47e24b */ if (fZ) goto L_0047e24b;
L_0047e23d:; BB(0x0047e23d);
    /* 0047e23d: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 0047e242: cmp dword ptr [eax + 0x4f18], 6 */ {  u32 a = R32((u32)(r_eax+0x4f18u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047e249: jne 0x47e24f */ if (!fZ) goto L_0047e24f;
L_0047e24b:; BB(0x0047e24b);
    /* 0047e24b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0047e24d: jmp 0x47e258 */ goto L_0047e258;
L_0047e24f:; BB(0x0047e24f);
    /* 0047e24f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047e252: mov eax, dword ptr [ecx + 0x464] */ r_eax = R32((u32)(r_ecx+0x464u));
L_0047e258:; BB(0x0047e258);
    /* 0047e258: mov esp, ebp */ r_esp = r_ebp;
    /* 0047e25a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047e25b: ret  */ FN_RET(0x0047e1d0); r_esp += 4; return;
}

void f_0047e260(void) /* sub_47E260 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047e260);
    /* 0047e260: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047e261: mov ebp, esp */ r_ebp = r_esp;
    /* 0047e263: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047e264: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0047e267: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047e26a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0047e26d: mov dword ptr [eax + 0x464], ecx */ W32((u32)(r_eax+0x464u), r_ecx);
    /* 0047e273: mov esp, ebp */ r_esp = r_ebp;
    /* 0047e275: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047e276: ret 4 */ FN_RET(0x0047e260); r_esp += 8; return;
}

void f_0047e280(void) /* sub_47E280 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047e280);
    /* 0047e280: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047e281: mov ebp, esp */ r_ebp = r_esp;
    /* 0047e283: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047e284: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0047e287: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047e28a: mov eax, dword ptr [eax + 0x468] */ r_eax = R32((u32)(r_eax+0x468u));
    /* 0047e290: mov esp, ebp */ r_esp = r_ebp;
    /* 0047e292: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047e293: ret  */ FN_RET(0x0047e280); r_esp += 4; return;
}

void f_0047e2a0(void) /* sub_47E2A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047e2a0);
    /* 0047e2a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047e2a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0047e2a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047e2a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0047e2a7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047e2aa: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0047e2ad: mov dword ptr [eax + 0x468], ecx */ W32((u32)(r_eax+0x468u), r_ecx);
    /* 0047e2b3: mov esp, ebp */ r_esp = r_ebp;
    /* 0047e2b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047e2b6: ret 4 */ FN_RET(0x0047e2a0); r_esp += 8; return;
}

void f_0047e390(void) /* sub_47E390 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047e390);
    /* 0047e390: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047e391: mov ebp, esp */ r_ebp = r_esp;
    /* 0047e393: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047e394: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0047e397: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0047e39a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047e39b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047e39e: mov ecx, dword ptr [ecx + 0x2c] */ r_ecx = R32((u32)(r_ecx+0x2cu));
    /* 0047e3a1: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x47e3a6u); f_0060ca40();
    /* 0047e3a6: mov esp, ebp */ r_esp = r_ebp;
    /* 0047e3a8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047e3a9: ret 4 */ FN_RET(0x0047e390); r_esp += 8; return;
}

void f_0047e3b0(void) /* sub_47E3B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047e3b0);
    /* 0047e3b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047e3b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0047e3b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047e3b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0047e3b7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047e3ba: call 0x47e420 */ r_esp -= 4; W32(r_esp, 0x47e3bfu); f_0047e420();
    /* 0047e3bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047e3c0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047e3c3: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x47e3c8u); f_0047e390();
    /* 0047e3c8: mov esp, ebp */ r_esp = r_ebp;
    /* 0047e3ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047e3cb: ret  */ FN_RET(0x0047e3b0); r_esp += 4; return;
}

void f_0047e3d0(void) /* sub_47E3D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047e3d0);
    /* 0047e3d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047e3d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0047e3d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047e3d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0047e3d7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0047e3da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047e3db: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047e3de: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x47e3e3u); f_0047e490();
    /* 0047e3e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047e3e4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047e3e7: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x47e3ecu); f_0047e390();
    /* 0047e3ec: mov esp, ebp */ r_esp = r_ebp;
    /* 0047e3ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047e3ef: ret 4 */ FN_RET(0x0047e3d0); r_esp += 8; return;
}

void f_0047e400(void) /* sub_47E400 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047e400);
    /* 0047e400: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047e401: mov ebp, esp */ r_ebp = r_esp;
    /* 0047e403: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047e404: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0047e407: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047e40a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0047e40d: mov dword ptr [eax + 0x428], ecx */ W32((u32)(r_eax+0x428u), r_ecx);
    /* 0047e413: mov esp, ebp */ r_esp = r_ebp;
    /* 0047e415: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047e416: ret 4 */ FN_RET(0x0047e400); r_esp += 8; return;
}

void f_0047e420(void) /* sub_47E420 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047e420);
    /* 0047e420: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047e421: mov ebp, esp */ r_ebp = r_esp;
    /* 0047e423: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047e424: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0047e427: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047e42a: mov eax, dword ptr [eax + 0x428] */ r_eax = R32((u32)(r_eax+0x428u));
    /* 0047e430: mov esp, ebp */ r_esp = r_ebp;
    /* 0047e432: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047e433: ret  */ FN_RET(0x0047e420); r_esp += 4; return;
}

void f_0047e440(void) /* sub_47E440 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047e440);
    /* 0047e440: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047e441: mov ebp, esp */ r_ebp = r_esp;
    /* 0047e443: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047e444: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0047e447: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047e44a: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 0047e450: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0047e453: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047e456: mov dword ptr [edx + 0x428], ecx */ W32((u32)(r_edx+0x428u), r_ecx);
    /* 0047e45c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047e462: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x47e467u); f_0047f950();
    /* 0047e467: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047e46a: cmp dword ptr [ecx + 0x428], eax */ {  u32 a = R32((u32)(r_ecx+0x428u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047e470: jl 0x47e47f */ if ((fS!=fO)) goto L_0047e47f;
L_0047e472:; BB(0x0047e472);
    /* 0047e472: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047e475: mov dword ptr [edx + 0x428], 0 */ W32((u32)(r_edx+0x428u), 0x0u);
L_0047e47f:; BB(0x0047e47f);
    /* 0047e47f: mov esp, ebp */ r_esp = r_ebp;
    /* 0047e481: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047e482: ret  */ FN_RET(0x0047e440); r_esp += 4; return;
}

void f_0047e500(void) /* sub_47E500 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047e500);
    /* 0047e500: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047e501: mov ebp, esp */ r_ebp = r_esp;
    /* 0047e503: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047e504: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0047e507: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047e509: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047e50a: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0047e510: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0047e513: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047e514: fld1  */ FPUSH(1.0);
    /* 0047e516: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0047e519: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047e51b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0047e51d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047e51f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047e521: push 0x186a1 */ { u32 v = 0x186a1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047e526: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0047e52b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0047e52d: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0047e533: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 0047e539: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47e53bu); call_ind(t); }
    /* 0047e53b: mov esp, ebp */ r_esp = r_ebp;
    /* 0047e53d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047e53e: ret  */ FN_RET(0x0047e500); r_esp += 4; return;
}

void f_0047e540(void) /* sub_47E540 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047e540);
    /* 0047e540: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047e541: mov ebp, esp */ r_ebp = r_esp;
    /* 0047e543: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0047e546: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0047e549: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0047e550: jmp 0x47e55b */ goto L_0047e55b;
L_0047e552:; BB(0x0047e552);
    /* 0047e552: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047e555: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0047e558: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0047e55b:; BB(0x0047e55b);
    /* 0047e55b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047e561: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x47e566u); f_0047f950();
    /* 0047e566: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047e569: jge 0x47e601 */ if ((fS==fO)) goto L_0047e601;
L_0047e56f:; BB(0x0047e56f);
    /* 0047e56f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047e572: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047e573: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047e576: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x47e57bu); f_0047e390();
    /* 0047e57b: mov ecx, eax */ r_ecx = r_eax;
    /* 0047e57d: call 0x4da3a0 */ r_esp -= 4; W32(r_esp, 0x47e582u); f_004da3a0();
    /* 0047e582: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047e585: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0047e586: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047e589: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x47e58eu); f_0047e390();
    /* 0047e58e: mov ecx, eax */ r_ecx = r_eax;
    /* 0047e590: call 0x4da450 */ r_esp -= 4; W32(r_esp, 0x47e595u); f_004da450();
    /* 0047e595: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047e598: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047e599: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047e59c: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x47e5a1u); f_0047e390();
    /* 0047e5a1: mov ecx, eax */ r_ecx = r_eax;
    /* 0047e5a3: call 0x4da4b0 */ r_esp -= 4; W32(r_esp, 0x47e5a8u); f_004da4b0();
    /* 0047e5a8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047e5ab: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047e5ac: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047e5af: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x47e5b4u); f_0047e390();
    /* 0047e5b4: mov ecx, eax */ r_ecx = r_eax;
    /* 0047e5b6: call 0x4da890 */ r_esp -= 4; W32(r_esp, 0x47e5bbu); f_004da890();
    /* 0047e5bb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047e5be: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0047e5bf: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047e5c2: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x47e5c7u); f_0047e390();
    /* 0047e5c7: mov ecx, eax */ r_ecx = r_eax;
    /* 0047e5c9: call 0x4db610 */ r_esp -= 4; W32(r_esp, 0x47e5ceu); f_004db610();
    /* 0047e5ce: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047e5d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047e5d2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047e5d5: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x47e5dau); f_0047e390();
    /* 0047e5da: mov ecx, eax */ r_ecx = r_eax;
    /* 0047e5dc: call 0x4dc490 */ r_esp -= 4; W32(r_esp, 0x47e5e1u); f_004dc490();
    /* 0047e5e1: movzx ecx, byte ptr [ebp + 8] */ r_ecx = (u32)R8((u32)(r_ebp+0x8u));
    /* 0047e5e5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047e5e7: je 0x47e5fc */ if (fZ) goto L_0047e5fc;
L_0047e5e9:; BB(0x0047e5e9);
    /* 0047e5e9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047e5ec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0047e5ed: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047e5f0: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x47e5f5u); f_0047e390();
    /* 0047e5f5: mov ecx, eax */ r_ecx = r_eax;
    /* 0047e5f7: call 0x4c6b10 */ r_esp -= 4; W32(r_esp, 0x47e5fcu); f_004c6b10();
L_0047e5fc:; BB(0x0047e5fc);
    /* 0047e5fc: jmp 0x47e552 */ goto L_0047e552;
L_0047e601:; BB(0x0047e601);
    /* 0047e601: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047e604: call 0x47f090 */ r_esp -= 4; W32(r_esp, 0x47e609u); f_0047f090();
    /* 0047e609: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 0047e60d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047e60f: je 0x47e621 */ if (fZ) goto L_0047e621;
L_0047e611:; BB(0x0047e611);
    /* 0047e611: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047e614: call 0x47ecd0 */ r_esp -= 4; W32(r_esp, 0x47e619u); f_0047ecd0();
    /* 0047e619: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047e61c: call 0x47ec10 */ r_esp -= 4; W32(r_esp, 0x47e621u); f_0047ec10();
L_0047e621:; BB(0x0047e621);
    /* 0047e621: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047e624: call 0x47e650 */ r_esp -= 4; W32(r_esp, 0x47e629u); f_0047e650();
    /* 0047e629: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047e62c: call 0x47e6a0 */ r_esp -= 4; W32(r_esp, 0x47e631u); f_0047e6a0();
    /* 0047e631: mov esp, ebp */ r_esp = r_ebp;
    /* 0047e633: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047e634: ret 4 */ FN_RET(0x0047e540); r_esp += 8; return;
}

void f_0047e650(void) /* sub_47E650 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047e650);
    /* 0047e650: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047e651: mov ebp, esp */ r_ebp = r_esp;
    /* 0047e653: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0047e656: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0047e659: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047e65c: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0047e65f: call 0x4c7230 */ r_esp -= 4; W32(r_esp, 0x47e664u); f_004c7230();
    /* 0047e664: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0047e66b: jmp 0x47e676 */ goto L_0047e676;
L_0047e66d:; BB(0x0047e66d);
    /* 0047e66d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047e670: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0047e673: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0047e676:; BB(0x0047e676);
    /* 0047e676: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047e679: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 0047e67c: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x47e681u); f_0060c9a0();
    /* 0047e681: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047e684: jge 0x47e69b */ if ((fS==fO)) goto L_0047e69b;
L_0047e686:; BB(0x0047e686);
    /* 0047e686: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047e689: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047e68a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047e68d: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x47e692u); f_0047e390();
    /* 0047e692: mov ecx, eax */ r_ecx = r_eax;
    /* 0047e694: call 0x4c7230 */ r_esp -= 4; W32(r_esp, 0x47e699u); f_004c7230();
    /* 0047e699: jmp 0x47e66d */ goto L_0047e66d;
L_0047e69b:; BB(0x0047e69b);
    /* 0047e69b: mov esp, ebp */ r_esp = r_ebp;
    /* 0047e69d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047e69e: ret  */ FN_RET(0x0047e650); r_esp += 4; return;
}

void f_0047e6a0(void) /* sub_47E6A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047e6a0);
    /* 0047e6a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047e6a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0047e6a3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0047e6a6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0047e6a9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047e6ac: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0047e6af: call 0x4c7330 */ r_esp -= 4; W32(r_esp, 0x47e6b4u); f_004c7330();
    /* 0047e6b4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0047e6bb: jmp 0x47e6c6 */ goto L_0047e6c6;
L_0047e6bd:; BB(0x0047e6bd);
    /* 0047e6bd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047e6c0: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0047e6c3: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0047e6c6:; BB(0x0047e6c6);
    /* 0047e6c6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047e6c9: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 0047e6cc: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x47e6d1u); f_0060c9a0();
    /* 0047e6d1: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047e6d4: jge 0x47e6eb */ if ((fS==fO)) goto L_0047e6eb;
L_0047e6d6:; BB(0x0047e6d6);
    /* 0047e6d6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047e6d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047e6da: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047e6dd: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x47e6e2u); f_0047e390();
    /* 0047e6e2: mov ecx, eax */ r_ecx = r_eax;
    /* 0047e6e4: call 0x4c7330 */ r_esp -= 4; W32(r_esp, 0x47e6e9u); f_004c7330();
    /* 0047e6e9: jmp 0x47e6bd */ goto L_0047e6bd;
L_0047e6eb:; BB(0x0047e6eb);
    /* 0047e6eb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047e6ee: call 0x47fab0 */ r_esp -= 4; W32(r_esp, 0x47e6f3u); f_0047fab0();
    /* 0047e6f3: mov esp, ebp */ r_esp = r_ebp;
    /* 0047e6f5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047e6f6: ret  */ FN_RET(0x0047e6a0); r_esp += 4; return;
}

void f_0047e700(void) /* sub_47E700 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047e700);
    /* 0047e700: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047e701: mov ebp, esp */ r_ebp = r_esp;
    /* 0047e703: sub esp, 0x74 */ {  u32 a = r_esp; u32 b = 0x74u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0047e706: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0047e70b: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0047e70d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0047e710: mov dword ptr [ebp - 0x74], ecx */ W32((u32)(r_ebp+0xffffff8cu), r_ecx);
    /* 0047e713: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0047e716: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0047e719: call 0x4f6840 */ r_esp -= 4; W32(r_esp, 0x47e71eu); f_004f6840();
    /* 0047e71e: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0047e721: imul eax, dword ptr [ecx + 0x430] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ecx+0x430u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0047e728: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0047e72b: cmp dword ptr [ebp - 4], 0xf423f */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xf423fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047e732: jle 0x47e77f */ if ((fZ||fS!=fO)) goto L_0047e77f;
L_0047e734:; BB(0x0047e734);
    /* 0047e734: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047e737: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0047e738: mov ecx, 0x3e8 */ r_ecx = 0x3e8u;
    /* 0047e73d: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0047e73d, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0047e73d, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0047e73f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0047e740: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047e743: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0047e744: mov ecx, 0xf4240 */ r_ecx = 0xf4240u;
    /* 0047e749: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0047e749, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0047e749, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0047e74b: mov eax, edx */ r_eax = r_edx;
    /* 0047e74d: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0047e74e: mov ecx, 0x3e8 */ r_ecx = 0x3e8u;
    /* 0047e753: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0047e753, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0047e753, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0047e755: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047e756: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047e759: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0047e75a: mov ecx, 0xf4240 */ r_ecx = 0xf4240u;
    /* 0047e75f: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0047e75f, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0047e75f, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0047e761: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047e762: push 0x6bcbf8 */ { u32 v = 0x6bcbf8u; r_esp -= 4; W32(r_esp, v); }
    /* 0047e767: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x47e76cu); f_00630f40();
    /* 0047e76c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047e76f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047e770: lea edx, [ebp - 0x70] */ r_edx = (u32)(r_ebp+0xffffff90u);
    /* 0047e773: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0047e774: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x47e77au); call_ind(t); }
    /* 0047e77a: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047e77d: jmp 0x47e7dc */ goto L_0047e7dc;
L_0047e77f:; BB(0x0047e77f);
    /* 0047e77f: cmp dword ptr [ebp - 4], 0x3e7 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3e7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047e786: jle 0x47e7bd */ if ((fZ||fS!=fO)) goto L_0047e7bd;
L_0047e788:; BB(0x0047e788);
    /* 0047e788: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047e78b: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0047e78c: mov ecx, 0x3e8 */ r_ecx = 0x3e8u;
    /* 0047e791: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0047e791, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0047e791, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0047e793: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0047e794: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047e797: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0047e798: mov ecx, 0x3e8 */ r_ecx = 0x3e8u;
    /* 0047e79d: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0047e79d, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0047e79d, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0047e79f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047e7a0: push 0x6bcbe0 */ { u32 v = 0x6bcbe0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047e7a5: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x47e7aau); f_00630f40();
    /* 0047e7aa: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047e7ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047e7ae: lea edx, [ebp - 0x70] */ r_edx = (u32)(r_ebp+0xffffff90u);
    /* 0047e7b1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0047e7b2: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x47e7b8u); call_ind(t); }
    /* 0047e7b8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047e7bb: jmp 0x47e7dc */ goto L_0047e7dc;
L_0047e7bd:; BB(0x0047e7bd);
    /* 0047e7bd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047e7c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047e7c1: push 0x6bcbc8 */ { u32 v = 0x6bcbc8u; r_esp -= 4; W32(r_esp, v); }
    /* 0047e7c6: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x47e7cbu); f_00630f40();
    /* 0047e7cb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047e7ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047e7cf: lea ecx, [ebp - 0x70] */ r_ecx = (u32)(r_ebp+0xffffff90u);
    /* 0047e7d2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047e7d3: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x47e7d9u); call_ind(t); }
    /* 0047e7d9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0047e7dc:; BB(0x0047e7dc);
    /* 0047e7dc: lea edx, [ebp - 0x70] */ r_edx = (u32)(r_ebp+0xffffff90u);
    /* 0047e7df: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0047e7e0: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0047e7e3: mov ecx, dword ptr [eax + 0xe4] */ r_ecx = R32((u32)(r_eax+0xe4u));
    /* 0047e7e9: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0047e7ec: mov eax, dword ptr [edx + 0xe4] */ r_eax = R32((u32)(r_edx+0xe4u));
    /* 0047e7f2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0047e7f4: mov ecx, eax */ r_ecx = r_eax;
    /* 0047e7f6: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0047e7fc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47e7feu); call_ind(t); }
    /* 0047e7fe: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0047e801: mov edx, dword ptr [ecx + 0xe4] */ r_edx = R32((u32)(r_ecx+0xe4u));
    /* 0047e807: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0047e80a: mov ecx, dword ptr [eax + 0xe4] */ r_ecx = R32((u32)(r_eax+0xe4u));
    /* 0047e810: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0047e812: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0047e815: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47e817u); call_ind(t); }
    /* 0047e817: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047e81a: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0047e81c: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x47e821u); f_00686d72();
    /* 0047e821: mov esp, ebp */ r_esp = r_ebp;
    /* 0047e823: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047e824: ret  */ FN_RET(0x0047e700); r_esp += 4; return;
}

void f_0047e830(void) /* sub_47E830 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047e830);
    /* 0047e830: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047e831: mov ebp, esp */ r_ebp = r_esp;
    /* 0047e833: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047e834: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0047e837: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047e83a: mov ecx, dword ptr [eax + 0xe4] */ r_ecx = R32((u32)(r_eax+0xe4u));
    /* 0047e840: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047e843: mov eax, dword ptr [edx + 0xe4] */ r_eax = R32((u32)(r_edx+0xe4u));
    /* 0047e849: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0047e84b: mov ecx, eax */ r_ecx = r_eax;
    /* 0047e84d: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0047e850: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47e852u); call_ind(t); }
    /* 0047e852: mov esp, ebp */ r_esp = r_ebp;
    /* 0047e854: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047e855: ret  */ FN_RET(0x0047e830); r_esp += 4; return;
}

void f_0047e860(void) /* sub_47E860 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047e860);
    /* 0047e860: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047e861: mov ebp, esp */ r_ebp = r_esp;
    /* 0047e863: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0047e866: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0047e869: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047e86c: mov ecx, dword ptr [eax + 0x45c] */ r_ecx = R32((u32)(r_eax+0x45cu));
    /* 0047e872: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0047e875: cmp dword ptr [ebp - 8], 0x16 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0047e879: ja 0x47eb72 */ if ((!fC&&!fZ)) goto L_0047eb72;
L_0047e87f:; BB(0x0047e87f);
    /* 0047e87f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047e882: jmp dword ptr [edx*4 + 0x47ebb0] */ { u32 t = R32((u32)(r_edx*4+0x47ebb0u)); switch (t) { case 0x47e889u: goto L_0047e889; case 0x47e8bau: goto L_0047e8ba; case 0x47e8e9u: goto L_0047e8e9; case 0x47e918u: goto L_0047e918; case 0x47e947u: goto L_0047e947; case 0x47e976u: goto L_0047e976; case 0x47e9a5u: goto L_0047e9a5; case 0x47e9d4u: goto L_0047e9d4; case 0x47ea03u: goto L_0047ea03; case 0x47ea32u: goto L_0047ea32; case 0x47ea61u: goto L_0047ea61; case 0x47ea90u: goto L_0047ea90; case 0x47eabfu: goto L_0047eabf; case 0x47eaeeu: goto L_0047eaee; case 0x47eb1au: goto L_0047eb1a; case 0x47eb46u: goto L_0047eb46; default: UNSUP(0x0047e882, "jump table entry is not a known target"); } }
L_0047e889:; BB(0x0047e889);
    /* 0047e889: push 0x6bcbb0 */ { u32 v = 0x6bcbb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047e88e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x47e893u); f_00630f40();
    /* 0047e893: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047e896: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047e897: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047e89a: mov ecx, dword ptr [eax + 0x498] */ r_ecx = R32((u32)(r_eax+0x498u));
    /* 0047e8a0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047e8a3: mov eax, dword ptr [edx + 0x498] */ r_eax = R32((u32)(r_edx+0x498u));
    /* 0047e8a9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0047e8ab: mov ecx, eax */ r_ecx = r_eax;
    /* 0047e8ad: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0047e8b3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47e8b5u); call_ind(t); }
    /* 0047e8b5: jmp 0x47eb93 */ goto L_0047eb93;
L_0047e8ba:; BB(0x0047e8ba);
    /* 0047e8ba: push 0x6bcb98 */ { u32 v = 0x6bcb98u; r_esp -= 4; W32(r_esp, v); }
    /* 0047e8bf: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x47e8c4u); f_00630f40();
    /* 0047e8c4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047e8c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047e8c8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047e8cb: mov edx, dword ptr [ecx + 0x498] */ r_edx = R32((u32)(r_ecx+0x498u));
    /* 0047e8d1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047e8d4: mov ecx, dword ptr [eax + 0x498] */ r_ecx = R32((u32)(r_eax+0x498u));
    /* 0047e8da: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0047e8dc: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0047e8e2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47e8e4u); call_ind(t); }
    /* 0047e8e4: jmp 0x47eb93 */ goto L_0047eb93;
L_0047e8e9:; BB(0x0047e8e9);
    /* 0047e8e9: push 0x6bcb7c */ { u32 v = 0x6bcb7cu; r_esp -= 4; W32(r_esp, v); }
    /* 0047e8ee: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x47e8f3u); f_00630f40();
    /* 0047e8f3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047e8f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047e8f7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047e8fa: mov edx, dword ptr [ecx + 0x498] */ r_edx = R32((u32)(r_ecx+0x498u));
    /* 0047e900: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047e903: mov ecx, dword ptr [eax + 0x498] */ r_ecx = R32((u32)(r_eax+0x498u));
    /* 0047e909: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0047e90b: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0047e911: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47e913u); call_ind(t); }
    /* 0047e913: jmp 0x47eb93 */ goto L_0047eb93;
L_0047e918:; BB(0x0047e918);
    /* 0047e918: push 0x6bcb68 */ { u32 v = 0x6bcb68u; r_esp -= 4; W32(r_esp, v); }
    /* 0047e91d: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x47e922u); f_00630f40();
    /* 0047e922: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047e925: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047e926: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047e929: mov edx, dword ptr [ecx + 0x498] */ r_edx = R32((u32)(r_ecx+0x498u));
    /* 0047e92f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047e932: mov ecx, dword ptr [eax + 0x498] */ r_ecx = R32((u32)(r_eax+0x498u));
    /* 0047e938: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0047e93a: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0047e940: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47e942u); call_ind(t); }
    /* 0047e942: jmp 0x47eb93 */ goto L_0047eb93;
L_0047e947:; BB(0x0047e947);
    /* 0047e947: push 0x6bcb50 */ { u32 v = 0x6bcb50u; r_esp -= 4; W32(r_esp, v); }
    /* 0047e94c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x47e951u); f_00630f40();
    /* 0047e951: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047e954: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047e955: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047e958: mov edx, dword ptr [ecx + 0x498] */ r_edx = R32((u32)(r_ecx+0x498u));
    /* 0047e95e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047e961: mov ecx, dword ptr [eax + 0x498] */ r_ecx = R32((u32)(r_eax+0x498u));
    /* 0047e967: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0047e969: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0047e96f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47e971u); call_ind(t); }
    /* 0047e971: jmp 0x47eb93 */ goto L_0047eb93;
L_0047e976:; BB(0x0047e976);
    /* 0047e976: push 0x6bcb3c */ { u32 v = 0x6bcb3cu; r_esp -= 4; W32(r_esp, v); }
    /* 0047e97b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x47e980u); f_00630f40();
    /* 0047e980: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047e983: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047e984: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047e987: mov edx, dword ptr [ecx + 0x498] */ r_edx = R32((u32)(r_ecx+0x498u));
    /* 0047e98d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047e990: mov ecx, dword ptr [eax + 0x498] */ r_ecx = R32((u32)(r_eax+0x498u));
    /* 0047e996: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0047e998: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0047e99e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47e9a0u); call_ind(t); }
    /* 0047e9a0: jmp 0x47eb93 */ goto L_0047eb93;
L_0047e9a5:; BB(0x0047e9a5);
    /* 0047e9a5: push 0x6bcb20 */ { u32 v = 0x6bcb20u; r_esp -= 4; W32(r_esp, v); }
    /* 0047e9aa: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x47e9afu); f_00630f40();
    /* 0047e9af: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047e9b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047e9b3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047e9b6: mov edx, dword ptr [ecx + 0x498] */ r_edx = R32((u32)(r_ecx+0x498u));
    /* 0047e9bc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047e9bf: mov ecx, dword ptr [eax + 0x498] */ r_ecx = R32((u32)(r_eax+0x498u));
    /* 0047e9c5: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0047e9c7: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0047e9cd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47e9cfu); call_ind(t); }
    /* 0047e9cf: jmp 0x47eb93 */ goto L_0047eb93;
L_0047e9d4:; BB(0x0047e9d4);
    /* 0047e9d4: push 0x6bcc28 */ { u32 v = 0x6bcc28u; r_esp -= 4; W32(r_esp, v); }
    /* 0047e9d9: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x47e9deu); f_00630f40();
    /* 0047e9de: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047e9e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047e9e2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047e9e5: mov edx, dword ptr [ecx + 0x498] */ r_edx = R32((u32)(r_ecx+0x498u));
    /* 0047e9eb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047e9ee: mov ecx, dword ptr [eax + 0x498] */ r_ecx = R32((u32)(r_eax+0x498u));
    /* 0047e9f4: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0047e9f6: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0047e9fc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47e9feu); call_ind(t); }
    /* 0047e9fe: jmp 0x47eb93 */ goto L_0047eb93;
L_0047ea03:; BB(0x0047ea03);
    /* 0047ea03: push 0x6bcad8 */ { u32 v = 0x6bcad8u; r_esp -= 4; W32(r_esp, v); }
    /* 0047ea08: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x47ea0du); f_00630f40();
    /* 0047ea0d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047ea10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047ea11: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047ea14: mov edx, dword ptr [ecx + 0x498] */ r_edx = R32((u32)(r_ecx+0x498u));
    /* 0047ea1a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047ea1d: mov ecx, dword ptr [eax + 0x498] */ r_ecx = R32((u32)(r_eax+0x498u));
    /* 0047ea23: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0047ea25: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0047ea2b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47ea2du); call_ind(t); }
    /* 0047ea2d: jmp 0x47eb93 */ goto L_0047eb93;
L_0047ea32:; BB(0x0047ea32);
    /* 0047ea32: push 0x6bcac4 */ { u32 v = 0x6bcac4u; r_esp -= 4; W32(r_esp, v); }
    /* 0047ea37: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x47ea3cu); f_00630f40();
    /* 0047ea3c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047ea3f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047ea40: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047ea43: mov edx, dword ptr [ecx + 0x498] */ r_edx = R32((u32)(r_ecx+0x498u));
    /* 0047ea49: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047ea4c: mov ecx, dword ptr [eax + 0x498] */ r_ecx = R32((u32)(r_eax+0x498u));
    /* 0047ea52: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0047ea54: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0047ea5a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47ea5cu); call_ind(t); }
    /* 0047ea5c: jmp 0x47eb93 */ goto L_0047eb93;
L_0047ea61:; BB(0x0047ea61);
    /* 0047ea61: push 0x6bcaac */ { u32 v = 0x6bcaacu; r_esp -= 4; W32(r_esp, v); }
    /* 0047ea66: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x47ea6bu); f_00630f40();
    /* 0047ea6b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047ea6e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047ea6f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047ea72: mov edx, dword ptr [ecx + 0x498] */ r_edx = R32((u32)(r_ecx+0x498u));
    /* 0047ea78: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047ea7b: mov ecx, dword ptr [eax + 0x498] */ r_ecx = R32((u32)(r_eax+0x498u));
    /* 0047ea81: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0047ea83: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0047ea89: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47ea8bu); call_ind(t); }
    /* 0047ea8b: jmp 0x47eb93 */ goto L_0047eb93;
L_0047ea90:; BB(0x0047ea90);
    /* 0047ea90: push 0x6bca98 */ { u32 v = 0x6bca98u; r_esp -= 4; W32(r_esp, v); }
    /* 0047ea95: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x47ea9au); f_00630f40();
    /* 0047ea9a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047ea9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047ea9e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047eaa1: mov edx, dword ptr [ecx + 0x498] */ r_edx = R32((u32)(r_ecx+0x498u));
    /* 0047eaa7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047eaaa: mov ecx, dword ptr [eax + 0x498] */ r_ecx = R32((u32)(r_eax+0x498u));
    /* 0047eab0: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0047eab2: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0047eab8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47eabau); call_ind(t); }
    /* 0047eaba: jmp 0x47eb93 */ goto L_0047eb93;
L_0047eabf:; BB(0x0047eabf);
    /* 0047eabf: push 0x6bca84 */ { u32 v = 0x6bca84u; r_esp -= 4; W32(r_esp, v); }
    /* 0047eac4: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x47eac9u); f_00630f40();
    /* 0047eac9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047eacc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047eacd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047ead0: mov edx, dword ptr [ecx + 0x498] */ r_edx = R32((u32)(r_ecx+0x498u));
    /* 0047ead6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047ead9: mov ecx, dword ptr [eax + 0x498] */ r_ecx = R32((u32)(r_eax+0x498u));
    /* 0047eadf: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0047eae1: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0047eae7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47eae9u); call_ind(t); }
    /* 0047eae9: jmp 0x47eb93 */ goto L_0047eb93;
L_0047eaee:; BB(0x0047eaee);
    /* 0047eaee: push 0x6bca6c */ { u32 v = 0x6bca6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0047eaf3: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x47eaf8u); f_00630f40();
    /* 0047eaf8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047eafb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047eafc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047eaff: mov edx, dword ptr [ecx + 0x498] */ r_edx = R32((u32)(r_ecx+0x498u));
    /* 0047eb05: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047eb08: mov ecx, dword ptr [eax + 0x498] */ r_ecx = R32((u32)(r_eax+0x498u));
    /* 0047eb0e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0047eb10: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0047eb16: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47eb18u); call_ind(t); }
    /* 0047eb18: jmp 0x47eb93 */ goto L_0047eb93;
L_0047eb1a:; BB(0x0047eb1a);
    /* 0047eb1a: push 0x6bcc10 */ { u32 v = 0x6bcc10u; r_esp -= 4; W32(r_esp, v); }
    /* 0047eb1f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x47eb24u); f_00630f40();
    /* 0047eb24: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047eb27: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047eb28: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047eb2b: mov edx, dword ptr [ecx + 0x498] */ r_edx = R32((u32)(r_ecx+0x498u));
    /* 0047eb31: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047eb34: mov ecx, dword ptr [eax + 0x498] */ r_ecx = R32((u32)(r_eax+0x498u));
    /* 0047eb3a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0047eb3c: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0047eb42: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47eb44u); call_ind(t); }
    /* 0047eb44: jmp 0x47eb93 */ goto L_0047eb93;
L_0047eb46:; BB(0x0047eb46);
    /* 0047eb46: push 0x6bca3c */ { u32 v = 0x6bca3cu; r_esp -= 4; W32(r_esp, v); }
    /* 0047eb4b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x47eb50u); f_00630f40();
    /* 0047eb50: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047eb53: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047eb54: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047eb57: mov edx, dword ptr [ecx + 0x498] */ r_edx = R32((u32)(r_ecx+0x498u));
    /* 0047eb5d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047eb60: mov ecx, dword ptr [eax + 0x498] */ r_ecx = R32((u32)(r_eax+0x498u));
    /* 0047eb66: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0047eb68: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0047eb6e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47eb70u); call_ind(t); }
    /* 0047eb70: jmp 0x47eb93 */ goto L_0047eb93;
L_0047eb72:; BB(0x0047eb72);
    /* 0047eb72: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0047eb77: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047eb7a: mov edx, dword ptr [ecx + 0x498] */ r_edx = R32((u32)(r_ecx+0x498u));
    /* 0047eb80: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047eb83: mov ecx, dword ptr [eax + 0x498] */ r_ecx = R32((u32)(r_eax+0x498u));
    /* 0047eb89: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0047eb8b: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0047eb91: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47eb93u); call_ind(t); }
L_0047eb93:; BB(0x0047eb93);
    /* 0047eb93: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047eb96: mov edx, dword ptr [ecx + 0x498] */ r_edx = R32((u32)(r_ecx+0x498u));
    /* 0047eb9c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047eb9f: mov ecx, dword ptr [eax + 0x498] */ r_ecx = R32((u32)(r_eax+0x498u));
    /* 0047eba5: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0047eba7: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0047ebaa: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47ebacu); call_ind(t); }
    /* 0047ebac: mov esp, ebp */ r_esp = r_ebp;
    /* 0047ebae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047ebaf: ret  */ FN_RET(0x0047e860); r_esp += 4; return;
}

void f_0047ec10(void) /* sub_47EC10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047ec10);
    /* 0047ec10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047ec11: mov ebp, esp */ r_ebp = r_esp;
    /* 0047ec13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047ec14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0047ec17: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047ec1a: mov ecx, dword ptr [eax + 0x498] */ r_ecx = R32((u32)(r_eax+0x498u));
    /* 0047ec20: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047ec23: mov eax, dword ptr [edx + 0x498] */ r_eax = R32((u32)(r_edx+0x498u));
    /* 0047ec29: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0047ec2b: mov ecx, eax */ r_ecx = r_eax;
    /* 0047ec2d: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0047ec30: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47ec32u); call_ind(t); }
    /* 0047ec32: mov esp, ebp */ r_esp = r_ebp;
    /* 0047ec34: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047ec35: ret  */ FN_RET(0x0047ec10); r_esp += 4; return;
}

void f_0047ec50(void) /* sub_47EC50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047ec50);
    /* 0047ec50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047ec51: mov ebp, esp */ r_ebp = r_esp;
    /* 0047ec53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047ec54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0047ec57: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047ec5a: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 0047ec60: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047ec63: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 0047ec69: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0047ec6b: mov ecx, eax */ r_ecx = r_eax;
    /* 0047ec6d: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0047ec70: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47ec72u); call_ind(t); }
    /* 0047ec72: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047ec75: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 0047ec7b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047ec7e: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 0047ec84: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0047ec86: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0047ec89: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47ec8bu); call_ind(t); }
    /* 0047ec8b: mov esp, ebp */ r_esp = r_ebp;
    /* 0047ec8d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047ec8e: ret  */ FN_RET(0x0047ec50); r_esp += 4; return;
}

void f_0047ec90(void) /* sub_47EC90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047ec90);
    /* 0047ec90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047ec91: mov ebp, esp */ r_ebp = r_esp;
    /* 0047ec93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047ec94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0047ec97: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047ec9a: call 0x47e700 */ r_esp -= 4; W32(r_esp, 0x47ec9fu); f_0047e700();
    /* 0047ec9f: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047eca3: jle 0x47ecc3 */ if ((fZ||fS!=fO)) goto L_0047ecc3;
L_0047eca5:; BB(0x0047eca5);
    /* 0047eca5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047eca8: movsx ecx, word ptr [eax + 0x7d0] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x7d0u));
    /* 0047ecaf: cmp ecx, 0xc8 */ {  u32 a = r_ecx; u32 b = 0xc8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047ecb5: jge 0x47ecc3 */ if ((fS==fO)) goto L_0047ecc3;
L_0047ecb7:; BB(0x0047ecb7);
    /* 0047ecb7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0047ecba: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0047ecbb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047ecbe: call 0x47f0e0 */ r_esp -= 4; W32(r_esp, 0x47ecc3u); f_0047f0e0();
L_0047ecc3:; BB(0x0047ecc3);
    /* 0047ecc3: mov esp, ebp */ r_esp = r_ebp;
    /* 0047ecc5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047ecc6: ret 4 */ FN_RET(0x0047ec90); r_esp += 8; return;
}

void f_0047ecf0(void) /* sub_47ECF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047ecf0);
    /* 0047ecf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047ecf1: mov ebp, esp */ r_ebp = r_esp;
    /* 0047ecf3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0047ecf6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0047ecf9: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0047ecfc: mov ecx, dword ptr [eax + 0x488] */ r_ecx = R32((u32)(r_eax+0x488u));
    /* 0047ed02: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0047ed05: mov ecx, dword ptr [edx + ecx*4 + 4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 0047ed09: call 0x4c6180 */ r_esp -= 4; W32(r_esp, 0x47ed0eu); f_004c6180();
    /* 0047ed0e: mov ecx, eax */ r_ecx = r_eax;
    /* 0047ed10: call 0x646e40 */ r_esp -= 4; W32(r_esp, 0x47ed15u); f_00646e40();
    /* 0047ed15: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0047ed18: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0047ed1b: mov ecx, dword ptr [eax + 0x488] */ r_ecx = R32((u32)(r_eax+0x488u));
    /* 0047ed21: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0047ed24: mov ecx, dword ptr [edx + ecx*4 + 4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 0047ed28: call 0x4c6180 */ r_esp -= 4; W32(r_esp, 0x47ed2du); f_004c6180();
    /* 0047ed2d: mov ecx, eax */ r_ecx = r_eax;
    /* 0047ed2f: call 0x646e70 */ r_esp -= 4; W32(r_esp, 0x47ed34u); f_00646e70();
    /* 0047ed34: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0047ed37: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0047ed3a: cmp dword ptr [eax + 0x488], 2 */ {  u32 a = R32((u32)(r_eax+0x488u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047ed41: jl 0x47ed58 */ if ((fS!=fO)) goto L_0047ed58;
L_0047ed43:; BB(0x0047ed43);
    /* 0047ed43: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0047ed46: cmp dword ptr [ecx + 0x488], 5 */ {  u32 a = R32((u32)(r_ecx+0x488u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047ed4d: jg 0x47ed58 */ if ((!fZ&&fS==fO)) goto L_0047ed58;
L_0047ed4f:; BB(0x0047ed4f);
    /* 0047ed4f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047ed52: add edx, 0x50 */ {  u32 a = r_edx; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0047ed55: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0047ed58:; BB(0x0047ed58);
    /* 0047ed58: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047ed5b: add eax, 0x41 */ {  u32 a = r_eax; u32 b = 0x41u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0047ed5e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047ed5f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047ed62: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047ed63: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0047ed66: mov eax, dword ptr [edx + 0x49c] */ r_eax = R32((u32)(r_edx+0x49cu));
    /* 0047ed6c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0047ed6f: mov ecx, dword ptr [ecx + 0x49c] */ r_ecx = R32((u32)(r_ecx+0x49cu));
    /* 0047ed75: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0047ed77: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0047ed7a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47ed7cu); call_ind(t); }
    /* 0047ed7c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0047ed7f: mov edx, dword ptr [ecx + 0x49c] */ r_edx = R32((u32)(r_ecx+0x49cu));
    /* 0047ed85: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0047ed88: mov ecx, dword ptr [eax + 0x49c] */ r_ecx = R32((u32)(r_eax+0x49cu));
    /* 0047ed8e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0047ed90: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0047ed93: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47ed95u); call_ind(t); }
    /* 0047ed95: mov esp, ebp */ r_esp = r_ebp;
    /* 0047ed97: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047ed98: ret  */ FN_RET(0x0047ecf0); r_esp += 4; return;
}

