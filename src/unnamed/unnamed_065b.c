#include "protos.h"

void f_0065b1b0(void) /* sub_65B1B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065b1b0);
    /* 0065b1b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065b1b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0065b1b3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065b1b6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0065b1b9: mov eax, dword ptr [0x16306a4] */ r_eax = R32((u32)(0x16306a4u));
    /* 0065b1be: mov ecx, dword ptr [eax + 0x1dc] */ r_ecx = R32((u32)(r_eax+0x1dcu));
    /* 0065b1c4: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0065b1c7: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b1ca: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0065b1cd: mov dword ptr [edx + 0x210], eax */ W32((u32)(r_edx+0x210u), r_eax);
    /* 0065b1d3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b1d6: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0065b1d9: mov dword ptr [ecx + 0x214], edx */ W32((u32)(r_ecx+0x214u), r_edx);
    /* 0065b1df: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065b1e6: jmp 0x65b1f1 */ goto L_0065b1f1;
L_0065b1e8:; BB(0x0065b1e8);
    /* 0065b1e8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065b1eb: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065b1ee: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0065b1f1:; BB(0x0065b1f1);
    /* 0065b1f1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b1f4: mov edx, dword ptr [ecx + 0x214] */ r_edx = R32((u32)(r_ecx+0x214u));
    /* 0065b1fa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065b1fb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065b1fe: call 0x6647c0 */ r_esp -= 4; W32(r_esp, 0x65b203u); f_006647c0();
    /* 0065b203: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065b206: jge 0x65b62c */ if ((fS==fO)) goto L_0065b62c;
L_0065b20c:; BB(0x0065b20c);
    /* 0065b20c: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065b210: jne 0x65b325 */ if (!fZ) goto L_0065b325;
L_0065b216:; BB(0x0065b216);
    /* 0065b216: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b219: cmp dword ptr [eax + 0x214], 5 */ {  u32 a = R32((u32)(r_eax+0x214u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065b220: je 0x65b23e */ if (fZ) goto L_0065b23e;
L_0065b222:; BB(0x0065b222);
    /* 0065b222: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b225: cmp dword ptr [ecx + 0x214], 0 */ {  u32 a = R32((u32)(r_ecx+0x214u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065b22c: je 0x65b23e */ if (fZ) goto L_0065b23e;
L_0065b22e:; BB(0x0065b22e);
    /* 0065b22e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b231: cmp dword ptr [edx + 0x214], 2 */ {  u32 a = R32((u32)(r_edx+0x214u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065b238: jne 0x65b325 */ if (!fZ) goto L_0065b325;
L_0065b23e:; BB(0x0065b23e);
    /* 0065b23e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b241: cmp dword ptr [eax + 0x214], 5 */ {  u32 a = R32((u32)(r_eax+0x214u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065b248: jne 0x65b2b7 */ if (!fZ) goto L_0065b2b7;
L_0065b24a:; BB(0x0065b24a);
    /* 0065b24a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065b24c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065b24f: call 0x6651e0 */ r_esp -= 4; W32(r_esp, 0x65b254u); f_006651e0();
    /* 0065b254: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065b255: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b258: mov edx, dword ptr [ecx + 0x210] */ r_edx = R32((u32)(r_ecx+0x210u));
    /* 0065b25e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065b25f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b262: mov ecx, dword ptr [eax + 0x214] */ r_ecx = R32((u32)(r_eax+0x214u));
    /* 0065b268: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065b269: mov edx, dword ptr [0x16306a4] */ r_edx = R32((u32)(0x16306a4u));
    /* 0065b26f: mov ecx, dword ptr [edx + 0x63c] */ r_ecx = R32((u32)(r_edx+0x63cu));
    /* 0065b275: call 0x675b40 */ r_esp -= 4; W32(r_esp, 0x65b27au); f_00675b40();
    /* 0065b27a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065b27b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065b27e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b281: mov ecx, dword ptr [ecx + eax*4 + 0x21c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x21cu));
    /* 0065b288: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x65b28du); f_005eaf00();
    /* 0065b28d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065b28f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065b292: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b295: mov ecx, dword ptr [eax + edx*4 + 0x21c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x21cu));
    /* 0065b29c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065b29f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b2a2: mov edx, dword ptr [eax + edx*4 + 0x21c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x21cu));
    /* 0065b2a9: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0065b2ab: mov ecx, edx */ r_ecx = r_edx;
    /* 0065b2ad: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 0065b2b3: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x65b2b5u); call_ind(t); }
    /* 0065b2b5: jmp 0x65b320 */ goto L_0065b320;
L_0065b2b7:; BB(0x0065b2b7);
    /* 0065b2b7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065b2b9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065b2bc: call 0x6651e0 */ r_esp -= 4; W32(r_esp, 0x65b2c1u); f_006651e0();
    /* 0065b2c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065b2c2: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b2c5: mov ecx, dword ptr [eax + 0x210] */ r_ecx = R32((u32)(r_eax+0x210u));
    /* 0065b2cb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065b2cc: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b2cf: mov eax, dword ptr [edx + 0x214] */ r_eax = R32((u32)(r_edx+0x214u));
    /* 0065b2d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065b2d6: mov ecx, dword ptr [0x16306a4] */ r_ecx = R32((u32)(0x16306a4u));
    /* 0065b2dc: mov ecx, dword ptr [ecx + 0x63c] */ r_ecx = R32((u32)(r_ecx+0x63cu));
    /* 0065b2e2: call 0x675b40 */ r_esp -= 4; W32(r_esp, 0x65b2e7u); f_00675b40();
    /* 0065b2e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065b2e8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065b2eb: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b2ee: mov ecx, dword ptr [eax + edx*4 + 0x218] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x218u));
    /* 0065b2f5: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x65b2fau); f_005eaf00();
    /* 0065b2fa: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0065b2fc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065b2ff: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b302: mov eax, dword ptr [edx + ecx*4 + 0x218] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x218u));
    /* 0065b309: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065b30c: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b30f: mov ecx, dword ptr [edx + ecx*4 + 0x218] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x218u));
    /* 0065b316: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0065b318: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 0065b31e: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x65b320u); call_ind(t); }
L_0065b320:; BB(0x0065b320);
    /* 0065b320: jmp 0x65b4ce */ goto L_0065b4ce;
L_0065b325:; BB(0x0065b325);
    /* 0065b325: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b328: cmp dword ptr [eax + 0x214], 5 */ {  u32 a = R32((u32)(r_eax+0x214u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065b32f: jne 0x65b3a7 */ if (!fZ) goto L_0065b3a7;
L_0065b331:; BB(0x0065b331);
    /* 0065b331: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065b333: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065b336: call 0x6651e0 */ r_esp -= 4; W32(r_esp, 0x65b33bu); f_006651e0();
    /* 0065b33b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065b33c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b33f: mov edx, dword ptr [ecx + 0x210] */ r_edx = R32((u32)(r_ecx+0x210u));
    /* 0065b345: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065b346: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b349: mov ecx, dword ptr [eax + 0x214] */ r_ecx = R32((u32)(r_eax+0x214u));
    /* 0065b34f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065b350: mov edx, dword ptr [0x16306a4] */ r_edx = R32((u32)(0x16306a4u));
    /* 0065b356: mov ecx, dword ptr [edx + 0x63c] */ r_ecx = R32((u32)(r_edx+0x63cu));
    /* 0065b35c: call 0x675b40 */ r_esp -= 4; W32(r_esp, 0x65b361u); f_00675b40();
    /* 0065b361: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065b362: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065b365: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b368: mov ecx, dword ptr [ecx + eax*4 + 0x218] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x218u));
    /* 0065b36f: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x65b374u); f_005eaf00();
    /* 0065b374: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065b378: jne 0x65b3a2 */ if (!fZ) goto L_0065b3a2;
L_0065b37a:; BB(0x0065b37a);
    /* 0065b37a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065b37c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065b37f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b382: mov ecx, dword ptr [eax + edx*4 + 0x218] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x218u));
    /* 0065b389: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065b38c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b38f: mov edx, dword ptr [eax + edx*4 + 0x218] */ r_edx = R32((u32)(r_eax+r_edx*4+0x218u));
    /* 0065b396: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0065b398: mov ecx, edx */ r_ecx = r_edx;
    /* 0065b39a: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 0065b3a0: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x65b3a2u); call_ind(t); }
L_0065b3a2:; BB(0x0065b3a2);
    /* 0065b3a2: jmp 0x65b4ce */ goto L_0065b4ce;
L_0065b3a7:; BB(0x0065b3a7);
    /* 0065b3a7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065b3a9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065b3ac: call 0x6651e0 */ r_esp -= 4; W32(r_esp, 0x65b3b1u); f_006651e0();
    /* 0065b3b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065b3b2: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b3b5: mov ecx, dword ptr [eax + 0x210] */ r_ecx = R32((u32)(r_eax+0x210u));
    /* 0065b3bb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065b3bc: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b3bf: mov eax, dword ptr [edx + 0x214] */ r_eax = R32((u32)(r_edx+0x214u));
    /* 0065b3c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065b3c6: mov ecx, dword ptr [0x16306a4] */ r_ecx = R32((u32)(0x16306a4u));
    /* 0065b3cc: mov ecx, dword ptr [ecx + 0x63c] */ r_ecx = R32((u32)(r_ecx+0x63cu));
    /* 0065b3d2: call 0x675b40 */ r_esp -= 4; W32(r_esp, 0x65b3d7u); f_00675b40();
    /* 0065b3d7: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065b3da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065b3db: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065b3de: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b3e1: mov ecx, dword ptr [eax + edx*4 + 0x218] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x218u));
    /* 0065b3e8: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x65b3edu); f_005eaf00();
    /* 0065b3ed: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b3f0: cmp dword ptr [ecx + 0x214], 0 */ {  u32 a = R32((u32)(r_ecx+0x214u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065b3f7: je 0x65b405 */ if (fZ) goto L_0065b405;
L_0065b3f9:; BB(0x0065b3f9);
    /* 0065b3f9: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b3fc: cmp dword ptr [edx + 0x214], 2 */ {  u32 a = R32((u32)(r_edx+0x214u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065b403: jne 0x65b43a */ if (!fZ) goto L_0065b43a;
L_0065b405:; BB(0x0065b405);
    /* 0065b405: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065b408: call 0x664cb0 */ r_esp -= 4; W32(r_esp, 0x65b40du); f_00664cb0();
    /* 0065b40d: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 0065b410: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065b411: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065b414: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b417: mov eax, dword ptr [edx + ecx*4 + 0x218] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x218u));
    /* 0065b41e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065b421: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b424: mov ecx, dword ptr [edx + ecx*4 + 0x218] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x218u));
    /* 0065b42b: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0065b42d: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 0065b433: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x65b435u); call_ind(t); }
    /* 0065b435: jmp 0x65b4ce */ goto L_0065b4ce;
L_0065b43a:; BB(0x0065b43a);
    /* 0065b43a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b43d: cmp dword ptr [eax + 0x214], 3 */ {  u32 a = R32((u32)(r_eax+0x214u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065b444: jne 0x65b485 */ if (!fZ) goto L_0065b485;
L_0065b446:; BB(0x0065b446);
    /* 0065b446: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065b448: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065b44b: call 0x6651e0 */ r_esp -= 4; W32(r_esp, 0x65b450u); f_006651e0();
    /* 0065b450: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065b451: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b454: mov edx, dword ptr [ecx + 0x210] */ r_edx = R32((u32)(r_ecx+0x210u));
    /* 0065b45a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065b45b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0065b45d: mov eax, dword ptr [0x16306a4] */ r_eax = R32((u32)(0x16306a4u));
    /* 0065b462: mov ecx, dword ptr [eax + 0x63c] */ r_ecx = R32((u32)(r_eax+0x63cu));
    /* 0065b468: call 0x675b40 */ r_esp -= 4; W32(r_esp, 0x65b46du); f_00675b40();
    /* 0065b46d: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065b470: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065b471: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065b474: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b477: mov ecx, dword ptr [edx + ecx*4 + 0x224] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x224u));
    /* 0065b47e: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x65b483u); f_005eaf00();
    /* 0065b483: jmp 0x65b4ce */ goto L_0065b4ce;
L_0065b485:; BB(0x0065b485);
    /* 0065b485: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b488: cmp dword ptr [eax + 0x214], 8 */ {  u32 a = R32((u32)(r_eax+0x214u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065b48f: jne 0x65b4ce */ if (!fZ) goto L_0065b4ce;
L_0065b491:; BB(0x0065b491);
    /* 0065b491: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065b493: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065b496: call 0x6651e0 */ r_esp -= 4; W32(r_esp, 0x65b49bu); f_006651e0();
    /* 0065b49b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065b49c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b49f: mov edx, dword ptr [ecx + 0x210] */ r_edx = R32((u32)(r_ecx+0x210u));
    /* 0065b4a5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065b4a6: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0065b4a8: mov eax, dword ptr [0x16306a4] */ r_eax = R32((u32)(0x16306a4u));
    /* 0065b4ad: mov ecx, dword ptr [eax + 0x63c] */ r_ecx = R32((u32)(r_eax+0x63cu));
    /* 0065b4b3: call 0x675b40 */ r_esp -= 4; W32(r_esp, 0x65b4b8u); f_00675b40();
    /* 0065b4b8: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065b4bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065b4bc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065b4bf: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b4c2: mov ecx, dword ptr [edx + ecx*4 + 0x224] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x224u));
    /* 0065b4c9: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x65b4ceu); f_005eaf00();
L_0065b4ce:; BB(0x0065b4ce);
    /* 0065b4ce: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b4d1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0065b4d3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b4d6: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 0065b4d9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65b4dbu); call_ind(t); }
    /* 0065b4db: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065b4de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065b4df: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b4e2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065b4e4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b4e7: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0065b4ea: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65b4ecu); call_ind(t); }
    /* 0065b4ec: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065b4ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065b4f0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065b4f3: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b4f6: mov eax, dword ptr [edx + ecx*4 + 0x218] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x218u));
    /* 0065b4fd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065b500: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b503: mov ecx, dword ptr [edx + ecx*4 + 0x218] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x218u));
    /* 0065b50a: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0065b50c: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0065b50f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x65b511u); call_ind(t); }
    /* 0065b511: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065b514: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b517: mov edx, dword ptr [ecx + eax*4 + 0x218] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x218u));
    /* 0065b51e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065b521: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b524: mov ecx, dword ptr [ecx + eax*4 + 0x218] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x218u));
    /* 0065b52b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0065b52d: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0065b530: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65b532u); call_ind(t); }
    /* 0065b532: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065b536: jne 0x65b588 */ if (!fZ) goto L_0065b588;
L_0065b538:; BB(0x0065b538);
    /* 0065b538: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b53b: cmp dword ptr [ecx + 0x214], 5 */ {  u32 a = R32((u32)(r_ecx+0x214u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065b542: jne 0x65b588 */ if (!fZ) goto L_0065b588;
L_0065b544:; BB(0x0065b544);
    /* 0065b544: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065b547: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b54a: mov ecx, dword ptr [eax + edx*4 + 0x218] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x218u));
    /* 0065b551: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065b554: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b557: mov edx, dword ptr [eax + edx*4 + 0x218] */ r_edx = R32((u32)(r_eax+r_edx*4+0x218u));
    /* 0065b55e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0065b560: mov ecx, edx */ r_ecx = r_edx;
    /* 0065b562: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 0065b565: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x65b567u); call_ind(t); }
    /* 0065b567: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065b56a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b56d: mov edx, dword ptr [ecx + eax*4 + 0x21c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x21cu));
    /* 0065b574: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065b577: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b57a: mov ecx, dword ptr [ecx + eax*4 + 0x21c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x21cu));
    /* 0065b581: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0065b583: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0065b586: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65b588u); call_ind(t); }
L_0065b588:; BB(0x0065b588);
    /* 0065b588: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b58b: cmp dword ptr [ecx + 0x214], 3 */ {  u32 a = R32((u32)(r_ecx+0x214u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065b592: je 0x65b5a0 */ if (fZ) goto L_0065b5a0;
L_0065b594:; BB(0x0065b594);
    /* 0065b594: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b597: cmp dword ptr [edx + 0x214], 8 */ {  u32 a = R32((u32)(r_edx+0x214u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065b59e: jne 0x65b606 */ if (!fZ) goto L_0065b606;
L_0065b5a0:; BB(0x0065b5a0);
    /* 0065b5a0: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b5a3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0065b5a5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b5a8: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 0065b5ab: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65b5adu); call_ind(t); }
    /* 0065b5ad: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065b5b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065b5b1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b5b4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065b5b6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b5b9: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0065b5bc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65b5beu); call_ind(t); }
    /* 0065b5be: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065b5c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065b5c2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065b5c5: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b5c8: mov eax, dword ptr [edx + ecx*4 + 0x224] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x224u));
    /* 0065b5cf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065b5d2: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b5d5: mov ecx, dword ptr [edx + ecx*4 + 0x224] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x224u));
    /* 0065b5dc: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0065b5de: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0065b5e1: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x65b5e3u); call_ind(t); }
    /* 0065b5e3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065b5e6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b5e9: mov edx, dword ptr [ecx + eax*4 + 0x224] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x224u));
    /* 0065b5f0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065b5f3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b5f6: mov ecx, dword ptr [ecx + eax*4 + 0x224] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x224u));
    /* 0065b5fd: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0065b5ff: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0065b602: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65b604u); call_ind(t); }
    /* 0065b604: jmp 0x65b627 */ goto L_0065b627;
L_0065b606:; BB(0x0065b606);
    /* 0065b606: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065b609: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b60c: mov eax, dword ptr [edx + ecx*4 + 0x224] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x224u));
    /* 0065b613: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065b616: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b619: mov ecx, dword ptr [edx + ecx*4 + 0x224] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x224u));
    /* 0065b620: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0065b622: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 0065b625: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x65b627u); call_ind(t); }
L_0065b627:; BB(0x0065b627);
    /* 0065b627: jmp 0x65b1e8 */ goto L_0065b1e8;
L_0065b62c:; BB(0x0065b62c);
    /* 0065b62c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b62f: cmp dword ptr [eax + 0x214], 0 */ {  u32 a = R32((u32)(r_eax+0x214u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065b636: jne 0x65b7a8 */ if (!fZ) goto L_0065b7a8;
L_0065b63c:; BB(0x0065b63c);
    /* 0065b63c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065b63e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b641: call 0x5f53c0 */ r_esp -= 4; W32(r_esp, 0x65b646u); f_005f53c0();
    /* 0065b646: add eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065b649: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065b64a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b64d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065b64f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b652: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 0065b655: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65b657u); call_ind(t); }
    /* 0065b657: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065b658: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b65b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065b65d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b660: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0065b663: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65b665u); call_ind(t); }
    /* 0065b665: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065b668: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065b669: push 0x1e84cc */ { u32 v = 0x1e84ccu; r_esp -= 4; W32(r_esp, v); }
    /* 0065b66e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b671: mov ecx, dword ptr [ecx + 0x230] */ r_ecx = R32((u32)(r_ecx+0x230u));
    /* 0065b677: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x65b67cu); f_005eae80();
    /* 0065b67c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065b67e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b681: mov eax, dword ptr [edx + 0x230] */ r_eax = R32((u32)(r_edx+0x230u));
    /* 0065b687: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b68a: mov ecx, dword ptr [ecx + 0x230] */ r_ecx = R32((u32)(r_ecx+0x230u));
    /* 0065b690: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0065b692: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0065b698: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65b69au); call_ind(t); }
    /* 0065b69a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b69d: mov edx, dword ptr [ecx + 0x230] */ r_edx = R32((u32)(r_ecx+0x230u));
    /* 0065b6a3: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b6a6: mov ecx, dword ptr [eax + 0x230] */ r_ecx = R32((u32)(r_eax+0x230u));
    /* 0065b6ac: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0065b6ae: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0065b6b1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65b6b3u); call_ind(t); }
    /* 0065b6b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065b6b5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b6b8: call 0x5f53c0 */ r_esp -= 4; W32(r_esp, 0x65b6bdu); f_005f53c0();
    /* 0065b6bd: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065b6c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065b6c1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b6c4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065b6c6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b6c9: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 0065b6cc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65b6ceu); call_ind(t); }
    /* 0065b6ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065b6cf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b6d2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065b6d4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b6d7: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0065b6da: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65b6dcu); call_ind(t); }
    /* 0065b6dc: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065b6df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065b6e0: push 0x1e84cc */ { u32 v = 0x1e84ccu; r_esp -= 4; W32(r_esp, v); }
    /* 0065b6e5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b6e8: mov ecx, dword ptr [ecx + 0x234] */ r_ecx = R32((u32)(r_ecx+0x234u));
    /* 0065b6ee: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x65b6f3u); f_005eae80();
    /* 0065b6f3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065b6f5: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b6f8: mov eax, dword ptr [edx + 0x234] */ r_eax = R32((u32)(r_edx+0x234u));
    /* 0065b6fe: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b701: mov ecx, dword ptr [ecx + 0x234] */ r_ecx = R32((u32)(r_ecx+0x234u));
    /* 0065b707: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0065b709: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0065b70f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65b711u); call_ind(t); }
    /* 0065b711: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b714: mov edx, dword ptr [ecx + 0x234] */ r_edx = R32((u32)(r_ecx+0x234u));
    /* 0065b71a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b71d: mov ecx, dword ptr [eax + 0x234] */ r_ecx = R32((u32)(r_eax+0x234u));
    /* 0065b723: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0065b725: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0065b728: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65b72au); call_ind(t); }
    /* 0065b72a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065b72c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b72f: call 0x5f53c0 */ r_esp -= 4; W32(r_esp, 0x65b734u); f_005f53c0();
    /* 0065b734: add eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065b737: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065b738: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b73b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065b73d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b740: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 0065b743: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65b745u); call_ind(t); }
    /* 0065b745: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065b748: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065b749: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b74c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065b74e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b751: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0065b754: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65b756u); call_ind(t); }
    /* 0065b756: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065b759: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065b75a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b75d: mov ecx, dword ptr [ecx + 0x218] */ r_ecx = R32((u32)(r_ecx+0x218u));
    /* 0065b763: call 0x5eafc0 */ r_esp -= 4; W32(r_esp, 0x65b768u); f_005eafc0();
    /* 0065b768: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065b769: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065b76b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065b76d: mov edx, dword ptr [0x16306a4] */ r_edx = R32((u32)(0x16306a4u));
    /* 0065b773: mov ecx, dword ptr [edx + 0x63c] */ r_ecx = R32((u32)(r_edx+0x63cu));
    /* 0065b779: call 0x675b40 */ r_esp -= 4; W32(r_esp, 0x65b77eu); f_00675b40();
    /* 0065b77e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065b77f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b782: mov ecx, dword ptr [eax + 0x238] */ r_ecx = R32((u32)(r_eax+0x238u));
    /* 0065b788: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x65b78du); f_005eae80();
    /* 0065b78d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b790: mov edx, dword ptr [ecx + 0x238] */ r_edx = R32((u32)(r_ecx+0x238u));
    /* 0065b796: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b799: mov ecx, dword ptr [eax + 0x238] */ r_ecx = R32((u32)(r_eax+0x238u));
    /* 0065b79f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0065b7a1: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0065b7a4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65b7a6u); call_ind(t); }
    /* 0065b7a6: jmp 0x65b7f3 */ goto L_0065b7f3;
L_0065b7a8:; BB(0x0065b7a8);
    /* 0065b7a8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b7ab: mov edx, dword ptr [ecx + 0x230] */ r_edx = R32((u32)(r_ecx+0x230u));
    /* 0065b7b1: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b7b4: mov ecx, dword ptr [eax + 0x230] */ r_ecx = R32((u32)(r_eax+0x230u));
    /* 0065b7ba: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0065b7bc: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0065b7bf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65b7c1u); call_ind(t); }
    /* 0065b7c1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b7c4: mov edx, dword ptr [ecx + 0x234] */ r_edx = R32((u32)(r_ecx+0x234u));
    /* 0065b7ca: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b7cd: mov ecx, dword ptr [eax + 0x234] */ r_ecx = R32((u32)(r_eax+0x234u));
    /* 0065b7d3: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0065b7d5: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0065b7d8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65b7dau); call_ind(t); }
    /* 0065b7da: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b7dd: mov edx, dword ptr [ecx + 0x238] */ r_edx = R32((u32)(r_ecx+0x238u));
    /* 0065b7e3: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b7e6: mov ecx, dword ptr [eax + 0x238] */ r_ecx = R32((u32)(r_eax+0x238u));
    /* 0065b7ec: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0065b7ee: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0065b7f1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65b7f3u); call_ind(t); }
L_0065b7f3:; BB(0x0065b7f3);
    /* 0065b7f3: mov esp, ebp */ r_esp = r_ebp;
    /* 0065b7f5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065b7f6: ret 8 */ FN_RET(0x0065b1b0); r_esp += 12; return;
}

