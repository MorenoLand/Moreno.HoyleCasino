#include "protos.h"
#if defined(__EMSCRIPTEN__)
#include "wasm/windows_wasm.h"
#else
#include <windows.h>
#endif

void f_0060e050(void) /* sub_60E050 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060e050);
    /* 0060e050: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060e051: mov ebp, esp */ r_ebp = r_esp;
    /* 0060e053: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060e056: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0060e059: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060e05c: call 0x613600 */ r_esp -= 4; W32(r_esp, 0x60e061u); f_00613600();
    /* 0060e061: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 0060e064: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0060e067: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060e06a: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0060e06d: cmp dword ptr [ebp - 0x10], 0x480 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x480u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060e074: jg 0x60e09c */ if ((!fZ&&fS==fO)) goto L_0060e09c;
L_0060e076:; BB(0x0060e076);
    /* 0060e076: cmp dword ptr [ebp - 0x10], 0x480 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x480u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060e07d: je 0x60e0cb */ if (fZ) goto L_0060e0cb;
L_0060e07f:; BB(0x0060e07f);
    /* 0060e07f: cmp dword ptr [ebp - 0x10], 0x280 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x280u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060e086: je 0x60e0b0 */ if (fZ) goto L_0060e0b0;
L_0060e088:; BB(0x0060e088);
    /* 0060e088: cmp dword ptr [ebp - 0x10], 0x320 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x320u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060e08f: je 0x60e0b9 */ if (fZ) goto L_0060e0b9;
L_0060e091:; BB(0x0060e091);
    /* 0060e091: cmp dword ptr [ebp - 0x10], 0x400 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x400u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060e098: je 0x60e0c2 */ if (fZ) goto L_0060e0c2;
L_0060e09a:; BB(0x0060e09a);
    /* 0060e09a: jmp 0x60e0e6 */ goto L_0060e0e6;
L_0060e09c:; BB(0x0060e09c);
    /* 0060e09c: cmp dword ptr [ebp - 0x10], 0x500 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x500u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060e0a3: je 0x60e0d4 */ if (fZ) goto L_0060e0d4;
L_0060e0a5:; BB(0x0060e0a5);
    /* 0060e0a5: cmp dword ptr [ebp - 0x10], 0x640 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x640u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060e0ac: je 0x60e0dd */ if (fZ) goto L_0060e0dd;
L_0060e0ae:; BB(0x0060e0ae);
    /* 0060e0ae: jmp 0x60e0e6 */ goto L_0060e0e6;
L_0060e0b0:; BB(0x0060e0b0);
    /* 0060e0b0: mov dword ptr [ebp - 8], 0x1e0 */ W32((u32)(r_ebp+0xfffffff8u), 0x1e0u);
    /* 0060e0b7: jmp 0x60e0f4 */ goto L_0060e0f4;
L_0060e0b9:; BB(0x0060e0b9);
    /* 0060e0b9: mov dword ptr [ebp - 8], 0x258 */ W32((u32)(r_ebp+0xfffffff8u), 0x258u);
    /* 0060e0c0: jmp 0x60e0f4 */ goto L_0060e0f4;
L_0060e0c2:; BB(0x0060e0c2);
    /* 0060e0c2: mov dword ptr [ebp - 8], 0x300 */ W32((u32)(r_ebp+0xfffffff8u), 0x300u);
    /* 0060e0c9: jmp 0x60e0f4 */ goto L_0060e0f4;
L_0060e0cb:; BB(0x0060e0cb);
    /* 0060e0cb: mov dword ptr [ebp - 8], 0x360 */ W32((u32)(r_ebp+0xfffffff8u), 0x360u);
    /* 0060e0d2: jmp 0x60e0f4 */ goto L_0060e0f4;
L_0060e0d4:; BB(0x0060e0d4);
    /* 0060e0d4: mov dword ptr [ebp - 8], 0x400 */ W32((u32)(r_ebp+0xfffffff8u), 0x400u);
    /* 0060e0db: jmp 0x60e0f4 */ goto L_0060e0f4;
L_0060e0dd:; BB(0x0060e0dd);
    /* 0060e0dd: mov dword ptr [ebp - 8], 0x4b0 */ W32((u32)(r_ebp+0xfffffff8u), 0x4b0u);
    /* 0060e0e4: jmp 0x60e0f4 */ goto L_0060e0f4;
L_0060e0e6:; BB(0x0060e0e6);
    /* 0060e0e6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060e0e9: call 0x613620 */ r_esp -= 4; W32(r_esp, 0x60e0eeu); f_00613620();
    /* 0060e0ee: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 0060e0f1: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0060e0f4:; BB(0x0060e0f4);
    /* 0060e0f4: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060e0f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060e0f8: mov ecx, dword ptr [0x16306b4] */ r_ecx = R32((u32)(0x16306b4u));
    /* 0060e0fe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060e0ff: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060e101: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060e103: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060e106: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060e107: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060e10a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060e10b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060e10d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060e10f: push 0x80000000 */ { u32 v = 0x80000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0060e114: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060e117: mov edx, dword ptr [ecx + 0x84] */ r_edx = R32((u32)(r_ecx+0x84u));
    /* 0060e11d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060e11e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060e121: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 0060e127: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060e128: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060e12a: call dword ptr [0x6b23c0] */ { u32 t = R32((u32)(0x6b23c0u)); r_esp -= 4; W32(r_esp, 0x60e130u); call_ind(t); }
    /* 0060e130: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060e133: mov dword ptr [edx + 0x8c], eax */ W32((u32)(r_edx+0x8cu), r_eax);
    /* 0060e139: movzx eax, byte ptr [0x795fb9] */ r_eax = (u32)R8((u32)(0x795fb9u));
    /* 0060e140: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060e142: je 0x60e153 */ if (fZ) goto L_0060e153;
L_0060e144:; BB(0x0060e144);
    /* 0060e144: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060e147: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0060e149: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060e14c: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0060e14f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x60e151u); call_ind(t); }
    /* 0060e151: jmp 0x60e160 */ goto L_0060e160;
L_0060e153:; BB(0x0060e153);
    /* 0060e153: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060e156: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0060e158: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060e15b: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0060e15e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x60e160u); call_ind(t); }
L_0060e160:; BB(0x0060e160);
    /* 0060e160: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060e163: mov byte ptr [ecx + 0x95], 1 */ W8((u32)(r_ecx+0x95u), 0x1u);
    /* 0060e16a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060e16d: cmp dword ptr [edx + 0x8c], 0 */ {  u32 a = R32((u32)(r_edx+0x8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060e174: je 0x60e262 */ if (fZ) goto L_0060e262;
L_0060e17a:; BB(0x0060e17a);
    /* 0060e17a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060e17d: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 0060e183: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060e184: call 0x60dc00 */ r_esp -= 4; W32(r_esp, 0x60e189u); f_0060dc00();
    /* 0060e189: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060e18c: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0060e18f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060e191: je 0x60e21a */ if (fZ) goto L_0060e21a;
L_0060e197:; BB(0x0060e197);
    /* 0060e197: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0060e199: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060e19c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060e19d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060e1a0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060e1a1: call 0x60e2c0 */ r_esp -= 4; W32(r_esp, 0x60e1a6u); f_0060e2c0();
    /* 0060e1a6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060e1a9: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0060e1ac: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060e1ae: jne 0x60e228 */ if (!fZ) goto L_0060e228;
L_0060e1b0:; BB(0x0060e1b0);
    /* 0060e1b0: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0060e1b2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060e1b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060e1b6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060e1b9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060e1ba: call 0x60e2c0 */ r_esp -= 4; W32(r_esp, 0x60e1bfu); f_0060e2c0();
    /* 0060e1bf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060e1c2: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0060e1c5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060e1c7: jne 0x60e228 */ if (!fZ) goto L_0060e228;
L_0060e1c9:; BB(0x0060e1c9);
    /* 0060e1c9: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0060e1cb: push 0x1e0 */ { u32 v = 0x1e0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060e1d0: push 0x280 */ { u32 v = 0x280u; r_esp -= 4; W32(r_esp, v); }
    /* 0060e1d5: call 0x60e2c0 */ r_esp -= 4; W32(r_esp, 0x60e1dau); f_0060e2c0();
    /* 0060e1da: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060e1dd: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0060e1e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060e1e2: jne 0x60e228 */ if (!fZ) goto L_0060e228;
L_0060e1e4:; BB(0x0060e1e4);
    /* 0060e1e4: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0060e1e6: push 0x1e0 */ { u32 v = 0x1e0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060e1eb: push 0x280 */ { u32 v = 0x280u; r_esp -= 4; W32(r_esp, v); }
    /* 0060e1f0: call 0x60e2c0 */ r_esp -= 4; W32(r_esp, 0x60e1f5u); f_0060e2c0();
    /* 0060e1f5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060e1f8: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0060e1fb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060e1fd: jne 0x60e228 */ if (!fZ) goto L_0060e228;
L_0060e1ff:; BB(0x0060e1ff);
    /* 0060e1ff: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0060e201: push 0x1e0 */ { u32 v = 0x1e0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060e206: push 0x280 */ { u32 v = 0x280u; r_esp -= 4; W32(r_esp, v); }
    /* 0060e20b: call 0x60e2c0 */ r_esp -= 4; W32(r_esp, 0x60e210u); f_0060e2c0();
    /* 0060e210: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060e213: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0060e216: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060e218: jne 0x60e228 */ if (!fZ) goto L_0060e228;
L_0060e21a:; BB(0x0060e21a);
    /* 0060e21a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060e21d: movzx ecx, byte ptr [eax + 0x96] */ r_ecx = (u32)R8((u32)(r_eax+0x96u));
    /* 0060e224: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060e226: je 0x60e262 */ if (fZ) goto L_0060e262;
L_0060e228:; BB(0x0060e228);
    /* 0060e228: mov byte ptr [0x795f97], 1 */ W8((u32)(0x795f97u), 0x1u);
    /* 0060e22f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060e232: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 0060e238: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060e239: call dword ptr [0x6b23c4] */ { u32 t = R32((u32)(0x6b23c4u)); r_esp -= 4; W32(r_esp, 0x60e23fu); call_ind(t); }
    /* 0060e23f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060e242: mov dword ptr [ecx + 0x90], eax */ W32((u32)(r_ecx+0x90u), r_eax);
    /* 0060e248: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060e24a: call 0x60cd90 */ r_esp -= 4; W32(r_esp, 0x60e24fu); f_0060cd90();
    /* 0060e24f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060e252: mov byte ptr [0x15e55d3], 1 */ W8((u32)(0x15e55d3u), 0x1u);
    /* 0060e259: mov byte ptr [0x15e55d5], 0 */ W8((u32)(0x15e55d5u), 0x0u);
    /* 0060e260: jmp 0x60e29c */ goto L_0060e29c;
L_0060e262:; BB(0x0060e262);
    /* 0060e262: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060e265: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 0060e26b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060e26c: call 0x60dc50 */ r_esp -= 4; W32(r_esp, 0x60e271u); f_0060dc50();
    /* 0060e271: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060e274: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060e277: mov byte ptr [ecx + 0x95], 0 */ W8((u32)(r_ecx+0x95u), 0x0u);
    /* 0060e27e: mov byte ptr [0x795f97], 0 */ W8((u32)(0x795f97u), 0x0u);
    /* 0060e285: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060e288: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0060e28a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060e28d: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0060e290: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x60e292u); call_ind(t); }
    /* 0060e292: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060e294: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060e297: call 0x60dd10 */ r_esp -= 4; W32(r_esp, 0x60e29cu); f_0060dd10();
L_0060e29c:; BB(0x0060e29c);
    /* 0060e29c: mov al, byte ptr [0x795f97] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x795f97u))) & 0xffu);
    /* 0060e2a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060e2a2: push 0x6d82f0 */ { u32 v = 0x6d82f0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060e2a7: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 0060e2ad: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 0060e2b0: call 0x607930 */ r_esp -= 4; W32(r_esp, 0x60e2b5u); f_00607930();
    /* 0060e2b5: mov esp, ebp */ r_esp = r_ebp;
    /* 0060e2b7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060e2b8: ret  */ FN_RET(0x0060e050); r_esp += 4; return;
}

void f_0060e2c0(void) /* sub_60E2C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060e2c0);
    /* 0060e2c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060e2c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0060e2c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060e2c4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060e2c6: mov eax, dword ptr [0x7950b8] */ r_eax = R32((u32)(0x7950b8u));
    /* 0060e2cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060e2cc: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0060e2cf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060e2d0: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0060e2d3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060e2d4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060e2d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060e2d8: mov ecx, dword ptr [0x15e5190] */ r_ecx = R32((u32)(0x15e5190u));
    /* 0060e2de: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0060e2e0: mov eax, dword ptr [0x15e5190] */ r_eax = R32((u32)(0x15e5190u));
    /* 0060e2e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060e2e6: mov ecx, dword ptr [edx + 0x54] */ r_ecx = R32((u32)(r_edx+0x54u));
    /* 0060e2e9: call ecx */ { u32 t = r_ecx; r_esp -= 4; W32(r_esp, 0x60e2ebu); call_ind(t); }
    /* 0060e2eb: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0060e2ee: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060e2f2: je 0x60e2f8 */ if (fZ) goto L_0060e2f8;
L_0060e2f4:; BB(0x0060e2f4);
    /* 0060e2f4: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0060e2f6: jmp 0x60e2fa */ goto L_0060e2fa;
L_0060e2f8:; BB(0x0060e2f8);
    /* 0060e2f8: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0060e2fa:; BB(0x0060e2fa);
    /* 0060e2fa: mov esp, ebp */ r_esp = r_ebp;
    /* 0060e2fc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060e2fd: ret  */ FN_RET(0x0060e2c0); r_esp += 4; return;
}

void f_0060e5e0(void) /* sub_60E5E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060e5e0);
    {
        u32 m = R32(r_esp + 8u);
        u32 hwnd_ = R32(r_esp + 4u);
        u32 obj = (u32)(uintptr_t)GetWindowLongA((HWND)(uintptr_t)hwnd_, 0);
        if (obj && (m == 0x200u || m == 0x201u || m == 0x202u || m == 0x203u || m == 0x204u || m == 0x205u || m == 0x206u || m == 0x207u)) {
            u32 lp = R32(r_esp + 0x10u);
            int mx = (short)(lp & 0xffffu), my = (short)(lp >> 16);
            RECT rc_; GetClientRect((HWND)(uintptr_t)hwnd_, &rc_);
            u32 cx = (u32)rc_.right, cy = (u32)rc_.bottom;
            u32 cw = 640, ch = 480;
            if (cx && cy && cw && ch) {
                mx = (int)(((u64)(u32)mx * cw) / cx) + (int)R32((u32)(obj+0x28u));
                my = (int)(((u64)(u32)my * ch) / cy) + (int)R32((u32)(obj+0x2cu));
                W32(r_esp + 0x10u, (u32)(mx & 0xffff) | ((u32)(my & 0xffff) << 16));
            }
        }
    }
    /* 0060e5e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060e5e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0060e5e3: sub esp, 0x1d0 */ {  u32 a = r_esp; u32 b = 0x1d0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060e5e9: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0060e5ee: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060e5f0: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0060e5f3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0060e5f4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060e5f6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060e5f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060e5fa: call dword ptr [0x6b23f0] */ { u32 t = R32((u32)(0x6b23f0u)); r_esp -= 4; W32(r_esp, 0x60e600u); call_ind(t); }
    /* 0060e600: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 0060e603: cmp dword ptr [ebp + 0xc], 1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060e607: je 0x60e62a */ if (fZ) goto L_0060e62a;
L_0060e609:; BB(0x0060e609);
    /* 0060e609: cmp dword ptr [ebp - 0x64], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff9cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060e60d: jne 0x60e62a */ if (!fZ) goto L_0060e62a;
L_0060e60f:; BB(0x0060e60f);
    /* 0060e60f: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0060e612: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060e613: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0060e616: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060e617: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0060e61a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060e61b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0060e61e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060e61f: call dword ptr [0x6b2418] */ { u32 t = R32((u32)(0x6b2418u)); r_esp -= 4; W32(r_esp, 0x60e625u); call_ind(t); }
    /* 0060e625: jmp 0x60f23d */ goto L_0060f23d;
L_0060e62a:; BB(0x0060e62a);
    /* 0060e62a: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0060e62d: mov dword ptr [ebp - 0x1c4], edx */ W32((u32)(r_ebp+0xfffffe3cu), r_edx);
    /* 0060e633: cmp dword ptr [ebp - 0x1c4], 0x100 */ {  u32 a = R32((u32)(r_ebp+0xfffffe3cu)); u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0060e63d: ja 0x60e682 */ if ((!fC&&!fZ)) goto L_0060e682;
L_0060e63f:; BB(0x0060e63f);
    /* 0060e63f: cmp dword ptr [ebp - 0x1c4], 0x100 */ {  u32 a = R32((u32)(r_ebp+0xfffffe3cu)); u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060e649: je 0x60eb44 */ if (fZ) goto L_0060eb44;
L_0060e64f:; BB(0x0060e64f);
    /* 0060e64f: mov eax, dword ptr [ebp - 0x1c4] */ r_eax = R32((u32)(r_ebp+0xfffffe3cu));
    /* 0060e655: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0060e658: mov dword ptr [ebp - 0x1c4], eax */ W32((u32)(r_ebp+0xfffffe3cu), r_eax);
    /* 0060e65e: cmp dword ptr [ebp - 0x1c4], 0x83 */ {  u32 a = R32((u32)(r_ebp+0xfffffe3cu)); u32 b = 0x83u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0060e668: ja 0x60f223 */ if ((!fC&&!fZ)) goto L_0060f223;
L_0060e66e:; BB(0x0060e66e);
    /* 0060e66e: mov ecx, dword ptr [ebp - 0x1c4] */ r_ecx = R32((u32)(r_ebp+0xfffffe3cu));
    /* 0060e674: movzx edx, byte ptr [ecx + 0x60f284] */ r_edx = (u32)R8((u32)(r_ecx+0x60f284u));
    /* 0060e67b: jmp dword ptr [edx*4 + 0x60f250] */ { u32 t = R32((u32)(r_edx*4+0x60f250u)); switch (t) { case 0x60e77du: goto L_0060e77d; case 0x60ed6du: goto L_0060ed6d; case 0x60ecafu: goto L_0060ecaf; case 0x60ee68u: goto L_0060ee68; case 0x60eb9fu: goto L_0060eb9f; case 0x60ebbfu: goto L_0060ebbf; case 0x60e7afu: goto L_0060e7af; case 0x60e877u: goto L_0060e877; case 0x60e84fu: goto L_0060e84f; case 0x60ee20u: goto L_0060ee20; case 0x60ef69u: goto L_0060ef69; case 0x60ed9bu: goto L_0060ed9b; case 0x60f223u: goto L_0060f223; default: UNSUP(0x0060e67b, "jump table entry is not a known target"); } }
L_0060e682:; BB(0x0060e682);
    /* 0060e682: cmp dword ptr [ebp - 0x1c4], 0x200 */ {  u32 a = R32((u32)(r_ebp+0xfffffe3cu)); u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0060e68c: ja 0x60e6d0 */ if ((!fC&&!fZ)) goto L_0060e6d0;
L_0060e68e:; BB(0x0060e68e);
    /* 0060e68e: cmp dword ptr [ebp - 0x1c4], 0x200 */ {  u32 a = R32((u32)(r_ebp+0xfffffe3cu)); u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060e698: je 0x60ea3d */ if (fZ) goto L_0060ea3d;
L_0060e69e:; BB(0x0060e69e);
    /* 0060e69e: mov eax, dword ptr [ebp - 0x1c4] */ r_eax = R32((u32)(r_ebp+0xfffffe3cu));
    /* 0060e6a4: sub eax, 0x101 */ {  u32 a = r_eax; u32 b = 0x101u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0060e6a9: mov dword ptr [ebp - 0x1c4], eax */ W32((u32)(r_ebp+0xfffffe3cu), r_eax);
    /* 0060e6af: cmp dword ptr [ebp - 0x1c4], 0x11 */ {  u32 a = R32((u32)(r_ebp+0xfffffe3cu)); u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0060e6b6: ja 0x60f223 */ if ((!fC&&!fZ)) goto L_0060f223;
L_0060e6bc:; BB(0x0060e6bc);
    /* 0060e6bc: mov ecx, dword ptr [ebp - 0x1c4] */ r_ecx = R32((u32)(r_ebp+0xfffffe3cu));
    /* 0060e6c2: movzx edx, byte ptr [ecx + 0x60f320] */ r_edx = (u32)R8((u32)(r_ecx+0x60f320u));
    /* 0060e6c9: jmp dword ptr [edx*4 + 0x60f308] */ { u32 t = R32((u32)(r_edx*4+0x60f308u)); switch (t) { case 0x60eb2bu: goto L_0060eb2b; case 0x60ec6au: goto L_0060ec6a; case 0x60ec14u: goto L_0060ec14; case 0x60e85cu: goto L_0060e85c; case 0x60ebdfu: goto L_0060ebdf; case 0x60f223u: goto L_0060f223; default: UNSUP(0x0060e6c9, "jump table entry is not a known target"); } }
L_0060e6d0:; BB(0x0060e6d0);
    /* 0060e6d0: cmp dword ptr [ebp - 0x1c4], 0x20a */ {  u32 a = R32((u32)(r_ebp+0xfffffe3cu)); u32 b = 0x20au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0060e6da: ja 0x60e717 */ if ((!fC&&!fZ)) goto L_0060e717;
L_0060e6dc:; BB(0x0060e6dc);
    /* 0060e6dc: cmp dword ptr [ebp - 0x1c4], 0x20a */ {  u32 a = R32((u32)(r_ebp+0xfffffe3cu)); u32 b = 0x20au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060e6e6: je 0x60eaad */ if (fZ) goto L_0060eaad;
L_0060e6ec:; BB(0x0060e6ec);
    /* 0060e6ec: mov eax, dword ptr [ebp - 0x1c4] */ r_eax = R32((u32)(r_ebp+0xfffffe3cu));
    /* 0060e6f2: sub eax, 0x201 */ {  u32 a = r_eax; u32 b = 0x201u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0060e6f7: mov dword ptr [ebp - 0x1c4], eax */ W32((u32)(r_ebp+0xfffffe3cu), r_eax);
    /* 0060e6fd: cmp dword ptr [ebp - 0x1c4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffe3cu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0060e704: ja 0x60f223 */ if ((!fC&&!fZ)) goto L_0060f223;
L_0060e70a:; BB(0x0060e70a);
    /* 0060e70a: mov ecx, dword ptr [ebp - 0x1c4] */ r_ecx = R32((u32)(r_ebp+0xfffffe3cu));
    /* 0060e710: jmp dword ptr [ecx*4 + 0x60f334] */ { u32 t = R32((u32)(r_ecx*4+0x60f334u)); switch (t) { case 0x60e881u: goto L_0060e881; case 0x60e904u: goto L_0060e904; case 0x60f223u: goto L_0060f223; case 0x60e95fu: goto L_0060e95f; case 0x60e9e2u: goto L_0060e9e2; default: UNSUP(0x0060e710, "jump table entry is not a known target"); } }
L_0060e717:; BB(0x0060e717);
    /* 0060e717: cmp dword ptr [ebp - 0x1c4], 0x219 */ {  u32 a = R32((u32)(r_ebp+0xfffffe3cu)); u32 b = 0x219u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0060e721: ja 0x60e758 */ if ((!fC&&!fZ)) goto L_0060e758;
L_0060e723:; BB(0x0060e723);
    /* 0060e723: cmp dword ptr [ebp - 0x1c4], 0x219 */ {  u32 a = R32((u32)(r_ebp+0xfffffe3cu)); u32 b = 0x219u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060e72d: je 0x60efa7 */ if (fZ) goto L_0060efa7;
L_0060e733:; BB(0x0060e733);
    /* 0060e733: cmp dword ptr [ebp - 0x1c4], 0x211 */ {  u32 a = R32((u32)(r_ebp+0xfffffe3cu)); u32 b = 0x211u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060e73d: je 0x60e86d */ if (fZ) goto L_0060e86d;
L_0060e743:; BB(0x0060e743);
    /* 0060e743: cmp dword ptr [ebp - 0x1c4], 0x212 */ {  u32 a = R32((u32)(r_ebp+0xfffffe3cu)); u32 b = 0x212u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060e74d: je 0x60e872 */ if (fZ) goto L_0060e872;
L_0060e753:; BB(0x0060e753);
    /* 0060e753: jmp 0x60f223 */ goto L_0060f223;
L_0060e758:; BB(0x0060e758);
    /* 0060e758: cmp dword ptr [ebp - 0x1c4], 0x233 */ {  u32 a = R32((u32)(r_ebp+0xfffffe3cu)); u32 b = 0x233u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060e762: je 0x60f1bd */ if (fZ) goto L_0060f1bd;
L_0060e768:; BB(0x0060e768);
    /* 0060e768: cmp dword ptr [ebp - 0x1c4], 0x311 */ {  u32 a = R32((u32)(r_ebp+0xfffffe3cu)); u32 b = 0x311u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060e772: je 0x60ef36 */ if (fZ) goto L_0060ef36;
L_0060e778:; BB(0x0060e778);
    /* 0060e778: jmp 0x60f223 */ goto L_0060f223;
L_0060e77d:; BB(0x0060e77d);
    /* 0060e77d: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0060e780: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0060e782: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060e783: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060e785: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0060e788: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060e789: call dword ptr [0x6b240c] */ { u32 t = R32((u32)(0x6b240cu)); r_esp -= 4; W32(r_esp, 0x60e78fu); call_ind(t); }
    /* 0060e78f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060e791: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0060e794: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060e795: call dword ptr [0x6b23f0] */ { u32 t = R32((u32)(0x6b23f0u)); r_esp -= 4; W32(r_esp, 0x60e79bu); call_ind(t); }
    /* 0060e79b: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 0060e79e: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 0060e7a1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0060e7a4: mov dword ptr [eax + 0x8c], ecx */ W32((u32)(r_eax+0x8cu), r_ecx);
    /* 0060e7aa: jmp 0x60f23b */ goto L_0060f23b;
L_0060e7af:; BB(0x0060e7af);
    /* 0060e7af: lea edx, [ebp - 0x50] */ r_edx = (u32)(r_ebp+0xffffffb0u);
    /* 0060e7b2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060e7b3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060e7b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060e7b7: call dword ptr [0x6b2434] */ { u32 t = R32((u32)(0x6b2434u)); r_esp -= 4; W32(r_esp, 0x60e7bdu); call_ind(t); }
    /* 0060e7bd: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0060e7c0: mov edx, dword ptr [ecx + 0x2c] */ r_edx = R32((u32)(r_ecx+0x2cu));
    /* 0060e7c3: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0060e7c5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060e7c6: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 0060e7c9: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0060e7cc: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0060e7ce: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060e7cf: lea edx, [ebp - 0x48] */ r_edx = (u32)(r_ebp+0xffffffb8u);
    /* 0060e7d2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060e7d3: call dword ptr [0x6b242c] */ { u32 t = R32((u32)(0x6b242cu)); r_esp -= 4; W32(r_esp, 0x60e7d9u); call_ind(t); }
    /* 0060e7d9: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0060e7dc: mov dword ptr [ebp - 0x1c0], eax */ W32((u32)(r_ebp+0xfffffe40u), r_eax);
    /* 0060e7e2: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0060e7e5: mov dword ptr [ebp - 0x1bc], ecx */ W32((u32)(r_ebp+0xfffffe44u), r_ecx);
    /* 0060e7eb: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0060e7ee: mov dword ptr [ebp - 0x1b8], edx */ W32((u32)(r_ebp+0xfffffe48u), r_edx);
    /* 0060e7f4: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0060e7f7: mov dword ptr [ebp - 0x1b4], eax */ W32((u32)(r_ebp+0xfffffe4cu), r_eax);
    /* 0060e7fd: mov ecx, dword ptr [ebp - 0x1b4] */ r_ecx = R32((u32)(r_ebp+0xfffffe4cu));
    /* 0060e803: mov dword ptr [ebp - 0x184], ecx */ W32((u32)(r_ebp+0xfffffe7cu), r_ecx);
    /* 0060e809: mov edx, dword ptr [ebp - 0x1b8] */ r_edx = R32((u32)(r_ebp+0xfffffe48u));
    /* 0060e80f: mov dword ptr [ebp - 0x180], edx */ W32((u32)(r_ebp+0xfffffe80u), r_edx);
    /* 0060e815: mov eax, dword ptr [ebp - 0x1bc] */ r_eax = R32((u32)(r_ebp+0xfffffe44u));
    /* 0060e81b: mov dword ptr [ebp - 0x17c], eax */ W32((u32)(r_ebp+0xfffffe84u), r_eax);
    /* 0060e821: mov ecx, dword ptr [ebp - 0x1c0] */ r_ecx = R32((u32)(r_ebp+0xfffffe40u));
    /* 0060e827: mov dword ptr [ebp - 0x178], ecx */ W32((u32)(r_ebp+0xfffffe88u), r_ecx);
    /* 0060e82d: lea edx, [ebp - 0x50] */ r_edx = (u32)(r_ebp+0xffffffb0u);
    /* 0060e830: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060e831: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060e834: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060e835: call dword ptr [0x6b2428] */ { u32 t = R32((u32)(0x6b2428u)); r_esp -= 4; W32(r_esp, 0x60e83bu); call_ind(t); }
    /* 0060e83b: lea ecx, [ebp - 0x184] */ r_ecx = (u32)(r_ebp+0xfffffe7cu);
    /* 0060e841: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060e842: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0060e845: call 0x613e30 */ r_esp -= 4; W32(r_esp, 0x60e84au); f_00613e30();
    /* 0060e84a: jmp 0x60f23b */ goto L_0060f23b;
L_0060e84f:; BB(0x0060e84f);
    /* 0060e84f: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0060e852: call 0x60d6a0 */ r_esp -= 4; W32(r_esp, 0x60e857u); f_0060d6a0();
    /* 0060e857: jmp 0x60f23b */ goto L_0060f23b;
L_0060e85c:; BB(0x0060e85c);
    /* 0060e85c: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0060e85f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060e860: call 0x5f2d10 */ r_esp -= 4; W32(r_esp, 0x60e865u); f_005f2d10();
    /* 0060e865: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060e868: jmp 0x60f23b */ goto L_0060f23b;
L_0060e86d:; BB(0x0060e86d);
    /* 0060e86d: jmp 0x60f23b */ goto L_0060f23b;
L_0060e872:; BB(0x0060e872);
    /* 0060e872: jmp 0x60f23b */ goto L_0060f23b;
L_0060e877:; BB(0x0060e877);
    /* 0060e877: call 0x630030 */ r_esp -= 4; W32(r_esp, 0x60e87cu); f_00630030();
    /* 0060e87c: jmp 0x60f23b */ goto L_0060f23b;
L_0060e881:; BB(0x0060e881);
    /* 0060e881: force the normal click path */ r_eax = 0;
    /* 0060e888: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060e88a: je 0x60e8af */ if (fZ) goto L_0060e8af;
L_0060e88c:; BB(0x0060e88c);
    /* 0060e88c: mov byte ptr [0x15e55e2], 0 */ W8((u32)(0x15e55e2u), 0x0u);
    /* 0060e893: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0060e896: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060e897: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0060e89a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060e89b: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 0060e8a0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060e8a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060e8a4: call dword ptr [0x6b2424] */ { u32 t = R32((u32)(0x6b2424u)); r_esp -= 4; W32(r_esp, 0x60e8aau); call_ind(t); }
    /* 0060e8aa: jmp 0x60f23b */ goto L_0060f23b;
L_0060e8af:; BB(0x0060e8af);
    /* 0060e8af: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0060e8b2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060e8b3: call dword ptr [0x6b2420] */ { u32 t = R32((u32)(0x6b2420u)); r_esp -= 4; W32(r_esp, 0x60e8b9u); call_ind(t); }
    /* 0060e8b9: mov byte ptr [0x15e55e1], 1 */ W8((u32)(0x15e55e1u), 0x1u);
    /* 0060e8c0: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0060e8c3: and edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0060e8c9: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 0060e8cc: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0060e8cf: sub eax, dword ptr [ecx + 0x28] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x28u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0060e8d2: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0060e8d5: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0060e8d8: shr edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0060e8db: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 0060e8de: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0060e8e1: sub eax, dword ptr [ecx + 0x2c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x2cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0060e8e4: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0060e8e7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060e8e9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060e8eb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060e8ee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060e8ef: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060e8f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060e8f3: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0060e8f6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060e8f7: call 0x630550 */ r_esp -= 4; W32(r_esp, 0x60e8fcu); f_00630550();
    /* 0060e8fc: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060e8ff: jmp 0x60f23b */ goto L_0060f23b;
L_0060e904:; BB(0x0060e904);
    /* 0060e904: movzx edx, byte ptr [0x15e55e0] */ r_edx = (u32)R8((u32)(0x15e55e0u));
    /* 0060e90b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060e90d: jne 0x60e915 */ if (!fZ) goto L_0060e915;
L_0060e90f:; BB(0x0060e90f);
    /* 0060e90f: call dword ptr [0x6b241c] */ { u32 t = R32((u32)(0x6b241cu)); r_esp -= 4; W32(r_esp, 0x60e915u); call_ind(t); }
L_0060e915:; BB(0x0060e915);
    /* 0060e915: mov byte ptr [0x15e55e1], 0 */ W8((u32)(0x15e55e1u), 0x0u);
    /* 0060e91c: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0060e91f: and eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0060e924: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 0060e927: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0060e92a: sub ecx, dword ptr [edx + 0x28] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x28u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0060e92d: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0060e930: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0060e933: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0060e936: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 0060e939: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0060e93c: sub ecx, dword ptr [edx + 0x2c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x2cu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0060e93f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0060e942: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060e944: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060e946: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060e949: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060e94a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060e94d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060e94e: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0060e951: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060e952: call 0x630550 */ r_esp -= 4; W32(r_esp, 0x60e957u); f_00630550();
    /* 0060e957: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060e95a: jmp 0x60f23b */ goto L_0060f23b;
L_0060e95f:; BB(0x0060e95f);
    /* 0060e95f: force the normal click path */ r_eax = 0;
    /* 0060e966: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060e968: je 0x60e98d */ if (fZ) goto L_0060e98d;
L_0060e96a:; BB(0x0060e96a);
    /* 0060e96a: mov byte ptr [0x15e55e2], 0 */ W8((u32)(0x15e55e2u), 0x0u);
    /* 0060e971: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0060e974: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060e975: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0060e978: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060e979: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 0060e97e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060e981: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060e982: call dword ptr [0x6b2424] */ { u32 t = R32((u32)(0x6b2424u)); r_esp -= 4; W32(r_esp, 0x60e988u); call_ind(t); }
    /* 0060e988: jmp 0x60f23b */ goto L_0060f23b;
L_0060e98d:; BB(0x0060e98d);
    /* 0060e98d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0060e990: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060e991: call dword ptr [0x6b2420] */ { u32 t = R32((u32)(0x6b2420u)); r_esp -= 4; W32(r_esp, 0x60e997u); call_ind(t); }
    /* 0060e997: mov byte ptr [0x15e55e0], 1 */ W8((u32)(0x15e55e0u), 0x1u);
    /* 0060e99e: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0060e9a1: and edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0060e9a7: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 0060e9aa: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0060e9ad: sub eax, dword ptr [ecx + 0x28] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x28u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0060e9b0: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0060e9b3: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0060e9b6: shr edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0060e9b9: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 0060e9bc: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0060e9bf: sub eax, dword ptr [ecx + 0x2c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x2cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0060e9c2: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0060e9c5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060e9c7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060e9c9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060e9cc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060e9cd: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060e9d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060e9d1: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0060e9d4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060e9d5: call 0x630550 */ r_esp -= 4; W32(r_esp, 0x60e9dau); f_00630550();
    /* 0060e9da: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060e9dd: jmp 0x60f23b */ goto L_0060f23b;
L_0060e9e2:; BB(0x0060e9e2);
    /* 0060e9e2: movzx edx, byte ptr [0x15e55e1] */ r_edx = (u32)R8((u32)(0x15e55e1u));
    /* 0060e9e9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060e9eb: jne 0x60e9f3 */ if (!fZ) goto L_0060e9f3;
L_0060e9ed:; BB(0x0060e9ed);
    /* 0060e9ed: call dword ptr [0x6b241c] */ { u32 t = R32((u32)(0x6b241cu)); r_esp -= 4; W32(r_esp, 0x60e9f3u); call_ind(t); }
L_0060e9f3:; BB(0x0060e9f3);
    /* 0060e9f3: mov byte ptr [0x15e55e0], 0 */ W8((u32)(0x15e55e0u), 0x0u);
    /* 0060e9fa: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0060e9fd: and eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0060ea02: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 0060ea05: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0060ea08: sub ecx, dword ptr [edx + 0x28] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x28u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0060ea0b: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0060ea0e: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0060ea11: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0060ea14: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 0060ea17: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0060ea1a: sub ecx, dword ptr [edx + 0x2c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x2cu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0060ea1d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0060ea20: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060ea22: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060ea24: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060ea27: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060ea28: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060ea2b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060ea2c: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0060ea2f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060ea30: call 0x630550 */ r_esp -= 4; W32(r_esp, 0x60ea35u); f_00630550();
    /* 0060ea35: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060ea38: jmp 0x60f23b */ goto L_0060f23b;
L_0060ea3d:; BB(0x0060ea3d);
    /* 0060ea3d: movzx eax, byte ptr [0x15e55d1] */ r_eax = (u32)R8((u32)(0x15e55d1u));
    /* 0060ea44: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060ea46: jne 0x60ea5e */ if (!fZ) goto L_0060ea5e;
L_0060ea48:; BB(0x0060ea48);
    /* 0060ea48: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0060ea4b: movzx edx, byte ptr [ecx + 0x59] */ r_edx = (u32)R8((u32)(r_ecx+0x59u));
    /* 0060ea4f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060ea51: jne 0x60ea63 */ if (!fZ) goto L_0060ea63;
L_0060ea53:; BB(0x0060ea53);
    /* 0060ea53: movzx eax, byte ptr [0x15e55d3] */ r_eax = (u32)R8((u32)(0x15e55d3u));
    /* 0060ea5a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060ea5c: jne 0x60ea63 */ if (!fZ) goto L_0060ea63;
L_0060ea5e:; BB(0x0060ea5e);
    /* 0060ea5e: jmp 0x60f23b */ goto L_0060f23b;
L_0060ea63:; BB(0x0060ea63);
    /* 0060ea63: mov byte ptr [0x15e55d1], 1 */ W8((u32)(0x15e55d1u), 0x1u);
    /* 0060ea6a: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0060ea6d: and ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0060ea73: movsx edx, cx */ r_edx = (u32)(i32)(i16)(u16)r_ecx;
    /* 0060ea76: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 0060ea79: sub edx, dword ptr [eax + 0x28] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x28u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0060ea7c: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0060ea7f: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0060ea82: shr ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0060ea85: movsx edx, cx */ r_edx = (u32)(i32)(i16)(u16)r_ecx;
    /* 0060ea88: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 0060ea8b: sub edx, dword ptr [eax + 0x2c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x2cu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0060ea8e: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0060ea91: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060ea94: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060ea95: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060ea98: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060ea99: call 0x630400 */ r_esp -= 4; W32(r_esp, 0x60ea9eu); f_00630400();
    /* 0060ea9e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060eaa1: mov byte ptr [0x15e55d1], 0 */ W8((u32)(0x15e55d1u), 0x0u);
    /* 0060eaa8: jmp 0x60f23b */ goto L_0060f23b;
L_0060eaad:; BB(0x0060eaad);
    /* 0060eaad: movzx eax, byte ptr [0x15e55d1] */ r_eax = (u32)R8((u32)(0x15e55d1u));
    /* 0060eab4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060eab6: jne 0x60eace */ if (!fZ) goto L_0060eace;
L_0060eab8:; BB(0x0060eab8);
    /* 0060eab8: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0060eabb: movzx edx, byte ptr [ecx + 0x59] */ r_edx = (u32)R8((u32)(r_ecx+0x59u));
    /* 0060eabf: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060eac1: jne 0x60ead3 */ if (!fZ) goto L_0060ead3;
L_0060eac3:; BB(0x0060eac3);
    /* 0060eac3: movzx eax, byte ptr [0x15e55d3] */ r_eax = (u32)R8((u32)(0x15e55d3u));
    /* 0060eaca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060eacc: jne 0x60ead3 */ if (!fZ) goto L_0060ead3;
L_0060eace:; BB(0x0060eace);
    /* 0060eace: jmp 0x60f23b */ goto L_0060f23b;
L_0060ead3:; BB(0x0060ead3);
    /* 0060ead3: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0060ead6: and ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0060eadc: movsx edx, cx */ r_edx = (u32)(i32)(i16)(u16)r_ecx;
    /* 0060eadf: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 0060eae5: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0060eae8: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0060eaeb: shr ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0060eaee: movsx edx, cx */ r_edx = (u32)(i32)(i16)(u16)r_ecx;
    /* 0060eaf1: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
/* 0060eaf4: sub edx, [eax+0x2c] (scaled) */ { u32 cy = R32((u32)(r_eax+0x24u)) - R32((u32)(r_eax+0x1cu)); u32 ch = R32((u32)(r_eax+0x34u)) - R32((u32)(r_eax+0x2cu)); r_edx = cy ? (u32)(((u64)r_edx * ch) / cy) + R32((u32)(r_eax+0x2cu)) : r_edx - R32((u32)(r_eax+0x2cu)); }
    /* 0060eaf7: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0060eafa: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 0060eafd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060eafe: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0060eb01: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060eb02: call dword ptr [0x6b2454] */ { u32 t = R32((u32)(0x6b2454u)); r_esp -= 4; W32(r_esp, 0x60eb08u); call_ind(t); }
    /* 0060eb08: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0060eb0b: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0060eb0e: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 0060eb11: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060eb12: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060eb15: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060eb16: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060eb19: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060eb1a: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0060eb1d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060eb1e: call 0x630830 */ r_esp -= 4; W32(r_esp, 0x60eb23u); f_00630830();
    /* 0060eb23: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060eb26: jmp 0x60f23b */ goto L_0060f23b;
L_0060eb2b:; BB(0x0060eb2b);
    /* 0060eb2b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060eb2d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060eb2f: mov dl, byte ptr [ebp + 0x10] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 0060eb32: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060eb33: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 0060eb36: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060eb37: call 0x630950 */ r_esp -= 4; W32(r_esp, 0x60eb3cu); f_00630950();
    /* 0060eb3c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060eb3f: jmp 0x60f23b */ goto L_0060f23b;
L_0060eb44:; BB(0x0060eb44);
    /* 0060eb44: cmp dword ptr [ebp + 0x10], 0x1b */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x1bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0060eb48: jbe 0x60eb86 */ if ((fC||fZ)) goto L_0060eb86;
L_0060eb4a:; BB(0x0060eb4a);
    /* 0060eb4a: cmp dword ptr [ebp + 0x10], 0x29 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x29u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0060eb4e: jb 0x60eb56 */ if (fC) goto L_0060eb56;
L_0060eb50:; BB(0x0060eb50);
    /* 0060eb50: cmp dword ptr [ebp + 0x10], 0x2e */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060eb54: jne 0x60eb86 */ if (!fZ) goto L_0060eb86;
L_0060eb56:; BB(0x0060eb56);
    /* 0060eb56: cmp dword ptr [ebp + 0x10], 0x20 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060eb5a: je 0x60eb86 */ if (fZ) goto L_0060eb86;
L_0060eb5c:; BB(0x0060eb5c);
    /* 0060eb5c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060eb5e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060eb60: mov cl, byte ptr [ebp + 0x10] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 0060eb63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060eb64: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0060eb67: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060eb68: call 0x630a90 */ r_esp -= 4; W32(r_esp, 0x60eb6du); f_00630a90();
    /* 0060eb6d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060eb70: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060eb72: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060eb74: mov al, byte ptr [ebp + 0x10] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 0060eb77: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060eb78: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0060eb7b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060eb7c: call 0x630a90 */ r_esp -= 4; W32(r_esp, 0x60eb81u); f_00630a90();
    /* 0060eb81: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060eb84: jmp 0x60eb9a */ goto L_0060eb9a;
L_0060eb86:; BB(0x0060eb86);
    /* 0060eb86: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060eb88: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060eb8a: mov dl, byte ptr [ebp + 0x10] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 0060eb8d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060eb8e: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 0060eb91: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060eb92: call 0x630a90 */ r_esp -= 4; W32(r_esp, 0x60eb97u); f_00630a90();
    /* 0060eb97: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0060eb9a:; BB(0x0060eb9a);
    /* 0060eb9a: jmp 0x60f23b */ goto L_0060f23b;
L_0060eb9f:; BB(0x0060eb9f);
    /* 0060eb9f: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0060eba2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060eba3: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0060eba6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060eba7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0060ebaa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060ebab: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0060ebae: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060ebaf: call dword ptr [0x6b2418] */ { u32 t = R32((u32)(0x6b2418u)); r_esp -= 4; W32(r_esp, 0x60ebb5u); call_ind(t); }
    /* 0060ebb5: jmp 0x60f23d */ goto L_0060f23d;
L_0060ebbf:; BB(0x0060ebbf);
    /* 0060ebbf: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0060ebc2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060ebc3: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0060ebc6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060ebc7: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0060ebca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060ebcb: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0060ebce: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060ebcf: call dword ptr [0x6b2418] */ { u32 t = R32((u32)(0x6b2418u)); r_esp -= 4; W32(r_esp, 0x60ebd5u); call_ind(t); }
    /* 0060ebd5: jmp 0x60f23d */ goto L_0060f23d;
L_0060ebdf:; BB(0x0060ebdf);
    /* 0060ebdf: cmp dword ptr [ebp + 0x10], 0xf100 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0xf100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060ebe6: jne 0x60ebf9 */ if (!fZ) goto L_0060ebf9;
L_0060ebe8:; BB(0x0060ebe8);
    /* 0060ebe8: call 0x631420 */ r_esp -= 4; W32(r_esp, 0x60ebedu); f_00631420();
    /* 0060ebed: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0060ebf0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060ebf2: je 0x60ebf9 */ if (fZ) goto L_0060ebf9;
L_0060ebf4:; BB(0x0060ebf4);
    /* 0060ebf4: jmp 0x60f23b */ goto L_0060f23b;
L_0060ebf9:; BB(0x0060ebf9);
    /* 0060ebf9: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0060ebfc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060ebfd: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0060ec00: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060ec01: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0060ec04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060ec05: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0060ec08: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060ec09: call dword ptr [0x6b2418] */ { u32 t = R32((u32)(0x6b2418u)); r_esp -= 4; W32(r_esp, 0x60ec0fu); call_ind(t); }
    /* 0060ec0f: jmp 0x60f23d */ goto L_0060f23d;
L_0060ec14:; BB(0x0060ec14);
    /* 0060ec14: cmp dword ptr [ebp + 0x10], 0xd */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060ec18: jne 0x60ec4f */ if (!fZ) goto L_0060ec4f;
L_0060ec1a:; BB(0x0060ec1a);
    /* 0060ec1a: cmp dword ptr [ebp - 0x64], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff9cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060ec1e: je 0x60ec4f */ if (fZ) goto L_0060ec4f;
L_0060ec20:; BB(0x0060ec20);
    /* 0060ec20: call 0x630c90 */ r_esp -= 4; W32(r_esp, 0x60ec25u); f_00630c90();
    /* 0060ec25: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0060ec28: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060ec2a: je 0x60ec4f */ if (fZ) goto L_0060ec4f;
L_0060ec2c:; BB(0x0060ec2c);
    /* 0060ec2c: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 0060ec2f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0060ec31: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0060ec34: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 0060ec37: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x60ec39u); call_ind(t); }
    /* 0060ec39: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0060ec3c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060ec3e: je 0x60ec4f */ if (fZ) goto L_0060ec4f;
L_0060ec40:; BB(0x0060ec40);
    /* 0060ec40: push -0x64 */ { u32 v = 0xffffff9cu; r_esp -= 4; W32(r_esp, v); }
    /* 0060ec42: call 0x5f2d10 */ r_esp -= 4; W32(r_esp, 0x60ec47u); f_005f2d10();
    /* 0060ec47: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060ec4a: jmp 0x60f23b */ goto L_0060f23b;
L_0060ec4f:; BB(0x0060ec4f);
    /* 0060ec4f: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0060ec52: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060ec53: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0060ec56: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060ec57: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0060ec5a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060ec5b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0060ec5e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060ec5f: call dword ptr [0x6b2418] */ { u32 t = R32((u32)(0x6b2418u)); r_esp -= 4; W32(r_esp, 0x60ec65u); call_ind(t); }
    /* 0060ec65: jmp 0x60f23d */ goto L_0060f23d;
L_0060ec6a:; BB(0x0060ec6a);
    /* 0060ec6a: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0060ec6d: and eax, 0x1000000 */ {  u32 a = r_eax; u32 b = 0x1000000u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0060ec72: jne 0x60ec7a */ if (!fZ) goto L_0060ec7a;
L_0060ec74:; BB(0x0060ec74);
    /* 0060ec74: cmp dword ptr [ebp + 0x10], 8 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060ec78: jne 0x60ec96 */ if (!fZ) goto L_0060ec96;
L_0060ec7a:; BB(0x0060ec7a);
    /* 0060ec7a: cmp dword ptr [ebp + 0x10], 0xd */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060ec7e: je 0x60ec96 */ if (fZ) goto L_0060ec96;
L_0060ec80:; BB(0x0060ec80);
    /* 0060ec80: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060ec82: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060ec84: mov cl, byte ptr [ebp + 0x10] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 0060ec87: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060ec88: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0060ec8b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060ec8c: call 0x630a90 */ r_esp -= 4; W32(r_esp, 0x60ec91u); f_00630a90();
    /* 0060ec91: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060ec94: jmp 0x60ecaa */ goto L_0060ecaa;
L_0060ec96:; BB(0x0060ec96);
    /* 0060ec96: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060ec98: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060ec9a: mov al, byte ptr [ebp + 0x10] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 0060ec9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060ec9e: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0060eca1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060eca2: call 0x630950 */ r_esp -= 4; W32(r_esp, 0x60eca7u); f_00630950();
    /* 0060eca7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0060ecaa:; BB(0x0060ecaa);
    /* 0060ecaa: jmp 0x60f23b */ goto L_0060f23b;
L_0060ecaf:; BB(0x0060ecaf);
    /* 0060ecaf: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0060ecb2: mov dword ptr [ebp - 0x1c8], edx */ W32((u32)(r_ebp+0xfffffe38u), r_edx);
    /* 0060ecb8: cmp dword ptr [ebp - 0x1c8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffe38u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060ecbf: je 0x60ed07 */ if (fZ) goto L_0060ed07;
L_0060ecc1:; BB(0x0060ecc1);
    /* 0060ecc1: cmp dword ptr [ebp - 0x1c8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffe38u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060ecc8: je 0x60ecce */ if (fZ) goto L_0060ecce;
L_0060ecca:; BB(0x0060ecca);
    /* 0060ecca: jmp 0x60ed3f */ goto L_0060ed3f;
L_0060ecce:; BB(0x0060ecce);
    /* 0060ecce: cmp dword ptr [ebp - 0x64], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff9cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060ecd2: je 0x60ed05 */ if (fZ) goto L_0060ed05;
L_0060ecd4:; BB(0x0060ecd4);
    /* 0060ecd4: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0060ecd7: call 0x614010 */ r_esp -= 4; W32(r_esp, 0x60ecdcu); f_00614010();
    /* 0060ecdc: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0060ecdf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060ece1: je 0x60ed05 */ if (fZ) goto L_0060ed05;
L_0060ece3:; BB(0x0060ece3);
    /* 0060ece3: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0060ece6: movzx edx, byte ptr [ecx + 0x94] */ r_edx = (u32)R8((u32)(r_ecx+0x94u));
    /* 0060eced: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060ecef: je 0x60ed05 */ if (fZ) goto L_0060ed05;
L_0060ecf1:; BB(0x0060ecf1);
    /* 0060ecf1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060ecf3: push 0x6d82fc */ { u32 v = 0x6d82fcu; r_esp -= 4; W32(r_esp, v); }
    /* 0060ecf8: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0060ecfd: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0060ed00: call 0x607930 */ r_esp -= 4; W32(r_esp, 0x60ed05u); f_00607930();
L_0060ed05:; BB(0x0060ed05);
    /* 0060ed05: jmp 0x60ed3f */ goto L_0060ed3f;
L_0060ed07:; BB(0x0060ed07);
    /* 0060ed07: cmp dword ptr [ebp - 0x64], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff9cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060ed0b: je 0x60ed3f */ if (fZ) goto L_0060ed3f;
L_0060ed0d:; BB(0x0060ed0d);
    /* 0060ed0d: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0060ed10: call 0x614010 */ r_esp -= 4; W32(r_esp, 0x60ed15u); f_00614010();
    /* 0060ed15: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0060ed18: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060ed1a: je 0x60ed3f */ if (fZ) goto L_0060ed3f;
L_0060ed1c:; BB(0x0060ed1c);
    /* 0060ed1c: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0060ed1f: movzx eax, byte ptr [edx + 0x94] */ r_eax = (u32)R8((u32)(r_edx+0x94u));
    /* 0060ed26: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060ed28: je 0x60ed3f */ if (fZ) goto L_0060ed3f;
L_0060ed2a:; BB(0x0060ed2a);
    /* 0060ed2a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060ed2c: push 0x6d82fc */ { u32 v = 0x6d82fcu; r_esp -= 4; W32(r_esp, v); }
    /* 0060ed31: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 0060ed37: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 0060ed3a: call 0x607930 */ r_esp -= 4; W32(r_esp, 0x60ed3fu); f_00607930();
L_0060ed3f:; BB(0x0060ed3f);
    /* 0060ed3f: cmp dword ptr [ebp - 0x64], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff9cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060ed43: je 0x60ed52 */ if (fZ) goto L_0060ed52;
L_0060ed45:; BB(0x0060ed45);
    /* 0060ed45: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0060ed48: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0060ed4a: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0060ed4d: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0060ed50: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x60ed52u); call_ind(t); }
L_0060ed52:; BB(0x0060ed52);
    /* 0060ed52: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0060ed55: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060ed56: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0060ed59: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060ed5a: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0060ed5d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060ed5e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060ed61: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060ed62: call dword ptr [0x6b2418] */ { u32 t = R32((u32)(0x6b2418u)); r_esp -= 4; W32(r_esp, 0x60ed68u); call_ind(t); }
    /* 0060ed68: jmp 0x60f23d */ goto L_0060f23d;
L_0060ed6d:; BB(0x0060ed6d);
    /* 0060ed6d: cmp dword ptr [ebp - 0x64], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff9cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060ed71: je 0x60ed80 */ if (fZ) goto L_0060ed80;
L_0060ed73:; BB(0x0060ed73);
    /* 0060ed73: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0060ed76: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0060ed78: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0060ed7b: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0060ed7e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x60ed80u); call_ind(t); }
L_0060ed80:; BB(0x0060ed80);
    /* 0060ed80: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0060ed83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060ed84: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0060ed87: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060ed88: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0060ed8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060ed8c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0060ed8f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060ed90: call dword ptr [0x6b2418] */ { u32 t = R32((u32)(0x6b2418u)); r_esp -= 4; W32(r_esp, 0x60ed96u); call_ind(t); }
    /* 0060ed96: jmp 0x60f23d */ goto L_0060f23d;
L_0060ed9b:; BB(0x0060ed9b);
    /* 0060ed9b: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0060ed9e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060ed9f: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0060eda2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060eda3: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0060eda6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060eda7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0060edaa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060edab: call dword ptr [0x6b2418] */ { u32 t = R32((u32)(0x6b2418u)); r_esp -= 4; W32(r_esp, 0x60edb1u); call_ind(t); }
    /* 0060edb1: mov dword ptr [ebp - 0x174], eax */ W32((u32)(r_ebp+0xfffffe8cu), r_eax);
    /* 0060edb7: cmp dword ptr [ebp - 0x174], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffe8cu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060edbe: je 0x60edd8 */ if (fZ) goto L_0060edd8;
L_0060edc0:; BB(0x0060edc0);
    /* 0060edc0: call 0x631420 */ r_esp -= 4; W32(r_esp, 0x60edc5u); f_00631420();
    /* 0060edc5: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0060edc8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060edca: je 0x60edd8 */ if (fZ) goto L_0060edd8;
L_0060edcc:; BB(0x0060edcc);
    /* 0060edcc: mov eax, 0xfffffffe */ r_eax = 0xfffffffeu;
    /* 0060edd1: jmp 0x60f23d */ goto L_0060f23d;
L_0060edd8:; BB(0x0060edd8);
    /* 0060edd8: cmp dword ptr [ebp - 0x174], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffe8cu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060eddf: jne 0x60ee15 */ if (!fZ) goto L_0060ee15;
L_0060ede1:; BB(0x0060ede1);
    /* 0060ede1: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0060ede4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0060ede6: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0060ede9: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 0060edec: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x60edeeu); call_ind(t); }
    /* 0060edee: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0060edf1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060edf3: jne 0x60ee0e */ if (!fZ) goto L_0060ee0e;
L_0060edf5:; BB(0x0060edf5);
    /* 0060edf5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060edf7: call dword ptr [0x6b23fc] */ { u32 t = R32((u32)(0x6b23fcu)); r_esp -= 4; W32(r_esp, 0x60edfdu); call_ind(t); }
    /* 0060edfd: mov esi, eax */ r_esi = r_eax;
    /* 0060edff: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0060ee02: call 0x613620 */ r_esp -= 4; W32(r_esp, 0x60ee07u); f_00613620();
    /* 0060ee07: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 0060ee0a: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060ee0c: jne 0x60ee15 */ if (!fZ) goto L_0060ee15;
L_0060ee0e:; BB(0x0060ee0e);
    /* 0060ee0e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060ee10: jmp 0x60f23d */ goto L_0060f23d;
L_0060ee15:; BB(0x0060ee15);
    /* 0060ee15: mov eax, dword ptr [ebp - 0x174] */ r_eax = R32((u32)(r_ebp+0xfffffe8cu));
    /* 0060ee1b: jmp 0x60f23d */ goto L_0060f23d;
L_0060ee20:; BB(0x0060ee20);
    /* 0060ee20: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060ee24: je 0x60ee46 */ if (fZ) goto L_0060ee46;
L_0060ee26:; BB(0x0060ee26);
    /* 0060ee26: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0060ee29: call 0x613d20 */ r_esp -= 4; W32(r_esp, 0x60ee2eu); f_00613d20();
    /* 0060ee2e: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0060ee31: call 0x613e70 */ r_esp -= 4; W32(r_esp, 0x60ee36u); f_00613e70();
    /* 0060ee36: mov byte ptr [0x15e55d3], 1 */ W8((u32)(0x15e55d3u), 0x1u);
    /* 0060ee3d: mov byte ptr [0x15e55d5], 0 */ W8((u32)(0x15e55d5u), 0x0u);
    /* 0060ee44: jmp 0x60ee4d */ goto L_0060ee4d;
L_0060ee46:; BB(0x0060ee46);
    /* 0060ee46: mov byte ptr [0x15e55d5], 1 */ W8((u32)(0x15e55d5u), 0x1u);
L_0060ee4d:; BB(0x0060ee4d);
    /* 0060ee4d: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0060ee50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060ee51: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0060ee54: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060ee55: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0060ee58: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060ee59: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060ee5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060ee5d: call dword ptr [0x6b2418] */ { u32 t = R32((u32)(0x6b2418u)); r_esp -= 4; W32(r_esp, 0x60ee63u); call_ind(t); }
    /* 0060ee63: jmp 0x60f23d */ goto L_0060f23d;
L_0060ee68:; BB(0x0060ee68);
    /* 0060ee68: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0060ee6b: and ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0060ee71: movzx edx, cx */ r_edx = (u32)(u16)r_ecx;
    /* 0060ee74: mov dword ptr [ebp - 0x1cc], edx */ W32((u32)(r_ebp+0xfffffe34u), r_edx);
    /* 0060ee7a: cmp dword ptr [ebp - 0x1cc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffe34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060ee81: je 0x60eef4 */ if (fZ) goto L_0060eef4;
L_0060ee83:; BB(0x0060ee83);
    /* 0060ee83: cmp dword ptr [ebp - 0x1cc], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffe34u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060ee8a: je 0x60eeac */ if (fZ) goto L_0060eeac;
L_0060ee8c:; BB(0x0060ee8c);
    /* 0060ee8c: cmp dword ptr [ebp - 0x1cc], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffe34u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060ee93: je 0x60ee9a */ if (fZ) goto L_0060ee9a;
L_0060ee95:; BB(0x0060ee95);
    /* 0060ee95: jmp 0x60ef1b */ goto L_0060ef1b;
L_0060ee9a:; BB(0x0060ee9a);
    /* 0060ee9a: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 0060ee9d: movzx ecx, byte ptr [eax + 0x59] */ r_ecx = (u32)R8((u32)(r_eax+0x59u));
    /* 0060eea1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060eea3: jne 0x60eeac */ if (!fZ) goto L_0060eeac;
L_0060eea5:; BB(0x0060eea5);
    /* 0060eea5: mov byte ptr [0x15e55e2], 1 */ W8((u32)(0x15e55e2u), 0x1u);
L_0060eeac:; BB(0x0060eeac);
    /* 0060eeac: movzx edx, byte ptr [0x15e55d0] */ r_edx = (u32)R8((u32)(0x15e55d0u));
    /* 0060eeb3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060eeb5: je 0x60eecb */ if (fZ) goto L_0060eecb;
L_0060eeb7:; BB(0x0060eeb7);
    /* 0060eeb7: mov byte ptr [0x15e55d0], 0 */ W8((u32)(0x15e55d0u), 0x0u);
    /* 0060eebe: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 0060eec1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0060eec3: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0060eec6: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 0060eec9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x60eecbu); call_ind(t); }
L_0060eecb:; BB(0x0060eecb);
    /* 0060eecb: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 0060eed1: cmp dword ptr [ecx + 8], 0 */ {  u32 a = R32((u32)(r_ecx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060eed5: je 0x60eef2 */ if (fZ) goto L_0060eef2;
L_0060eed7:; BB(0x0060eed7);
    /* 0060eed7: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 0060eedd: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0060eee0: call 0x608270 */ r_esp -= 4; W32(r_esp, 0x60eee5u); f_00608270();
    /* 0060eee5: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0060eeea: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0060eeed: call 0x60a800 */ r_esp -= 4; W32(r_esp, 0x60eef2u); f_0060a800();
L_0060eef2:; BB(0x0060eef2);
    /* 0060eef2: jmp 0x60ef1b */ goto L_0060ef1b;
L_0060eef4:; BB(0x0060eef4);
    /* 0060eef4: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 0060eefa: cmp dword ptr [ecx + 8], 0 */ {  u32 a = R32((u32)(r_ecx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060eefe: je 0x60ef1b */ if (fZ) goto L_0060ef1b;
L_0060ef00:; BB(0x0060ef00);
    /* 0060ef00: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 0060ef06: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0060ef09: call 0x608290 */ r_esp -= 4; W32(r_esp, 0x60ef0eu); f_00608290();
    /* 0060ef0e: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0060ef13: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0060ef16: call 0x60a6a0 */ r_esp -= 4; W32(r_esp, 0x60ef1bu); f_0060a6a0();
L_0060ef1b:; BB(0x0060ef1b);
    /* 0060ef1b: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0060ef1e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060ef1f: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0060ef22: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060ef23: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0060ef26: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060ef27: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0060ef2a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060ef2b: call dword ptr [0x6b2418] */ { u32 t = R32((u32)(0x6b2418u)); r_esp -= 4; W32(r_esp, 0x60ef31u); call_ind(t); }
    /* 0060ef31: jmp 0x60f23d */ goto L_0060f23d;
L_0060ef36:; BB(0x0060ef36);
    /* 0060ef36: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0060ef39: cmp edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060ef3c: je 0x60ef4e */ if (fZ) goto L_0060ef4e;
L_0060ef3e:; BB(0x0060ef3e);
    /* 0060ef3e: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0060ef41: call 0x613d20 */ r_esp -= 4; W32(r_esp, 0x60ef46u); f_00613d20();
    /* 0060ef46: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0060ef49: call 0x613e70 */ r_esp -= 4; W32(r_esp, 0x60ef4eu); f_00613e70();
L_0060ef4e:; BB(0x0060ef4e);
    /* 0060ef4e: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0060ef51: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060ef52: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0060ef55: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060ef56: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0060ef59: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060ef5a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060ef5d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060ef5e: call dword ptr [0x6b2418] */ { u32 t = R32((u32)(0x6b2418u)); r_esp -= 4; W32(r_esp, 0x60ef64u); call_ind(t); }
    /* 0060ef64: jmp 0x60f23d */ goto L_0060f23d;
L_0060ef69:; BB(0x0060ef69);
    /* 0060ef69: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0060ef6c: movzx edx, byte ptr [ecx + 0x58] */ r_edx = (u32)R8((u32)(r_ecx+0x58u));
    /* 0060ef70: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060ef72: je 0x60ef8c */ if (fZ) goto L_0060ef8c;
L_0060ef74:; BB(0x0060ef74);
    /* 0060ef74: mov al, byte ptr [ebp + 0x10] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 0060ef77: mov byte ptr [0x7950b5], al */ W8((u32)(0x7950b5u), (u8)r_eax);
    /* 0060ef7c: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0060ef7f: call 0x613d20 */ r_esp -= 4; W32(r_esp, 0x60ef84u); f_00613d20();
    /* 0060ef84: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0060ef87: call 0x613e70 */ r_esp -= 4; W32(r_esp, 0x60ef8cu); f_00613e70();
L_0060ef8c:; BB(0x0060ef8c);
    /* 0060ef8c: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0060ef8f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060ef90: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0060ef93: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060ef94: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0060ef97: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060ef98: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0060ef9b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060ef9c: call dword ptr [0x6b2418] */ { u32 t = R32((u32)(0x6b2418u)); r_esp -= 4; W32(r_esp, 0x60efa2u); call_ind(t); }
    /* 0060efa2: jmp 0x60f23d */ goto L_0060f23d;
L_0060efa7:; BB(0x0060efa7);
    /* 0060efa7: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0060efaa: movzx eax, byte ptr [edx + 0x5a] */ r_eax = (u32)R8((u32)(r_edx+0x5au));
    /* 0060efae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060efb0: jne 0x60efb7 */ if (!fZ) goto L_0060efb7;
L_0060efb2:; BB(0x0060efb2);
    /* 0060efb2: jmp 0x60f23b */ goto L_0060f23b;
L_0060efb7:; BB(0x0060efb7);
    /* 0060efb7: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0060efba: mov dword ptr [ebp - 0x1d0], ecx */ W32((u32)(r_ebp+0xfffffe30u), r_ecx);
    /* 0060efc0: cmp dword ptr [ebp - 0x1d0], 0x8001 */ {  u32 a = R32((u32)(r_ebp+0xfffffe30u)); u32 b = 0x8001u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060efca: je 0x60f13c */ if (fZ) goto L_0060f13c;
L_0060efd0:; BB(0x0060efd0);
    /* 0060efd0: cmp dword ptr [ebp - 0x1d0], 0x8004 */ {  u32 a = R32((u32)(r_ebp+0xfffffe30u)); u32 b = 0x8004u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060efda: je 0x60efe1 */ if (fZ) goto L_0060efe1;
L_0060efdc:; BB(0x0060efdc);
    /* 0060efdc: jmp 0x60f1bb */ goto L_0060f1bb;
L_0060efe1:; BB(0x0060efe1);
    /* 0060efe1: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0060efe4: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0060efe7: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060efea: cmp dword ptr [eax + 4], 2 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060efee: jne 0x60f13a */ if (!fZ) goto L_0060f13a;
L_0060eff4:; BB(0x0060eff4);
    /* 0060eff4: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0060eff7: mov dword ptr [ebp - 0x60], ecx */ W32((u32)(r_ebp+0xffffffa0u), r_ecx);
    /* 0060effa: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0060effd: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0060f000: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
L_0060f003:; BB(0x0060f003);
    /* 0060f003: movsx ecx, byte ptr [0x795f6c] */ r_ecx = (u32)(i32)(i8)R8((u32)(0x795f6cu));
    /* 0060f00a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060f00c: je 0x60f135 */ if (fZ) goto L_0060f135;
L_0060f012:; BB(0x0060f012);
    /* 0060f012: movsx ecx, byte ptr [0x795f6c] */ r_ecx = (u32)(i32)(i8)R8((u32)(0x795f6cu));
    /* 0060f019: sub ecx, 0x61 */ {  u32 a = r_ecx; u32 b = 0x61u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0060f01c: mov edx, 1 */ r_edx = 0x1u;
    /* 0060f021: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0060f023: cmp dword ptr [ebp - 0x68], edx */ {  u32 a = R32((u32)(r_ebp+0xffffff98u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060f026: jne 0x60f135 */ if (!fZ) goto L_0060f135;
L_0060f02c:; BB(0x0060f02c);
    /* 0060f02c: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0060f031: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060f035: je 0x60f045 */ if (fZ) goto L_0060f045;
L_0060f037:; BB(0x0060f037);
    /* 0060f037: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 0060f03d: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0060f040: call 0x60a4d0 */ r_esp -= 4; W32(r_esp, 0x60f045u); f_0060a4d0();
L_0060f045:; BB(0x0060f045);
    /* 0060f045: mov dword ptr [ebp - 0x1b0], 0x2c */ W32((u32)(r_ebp+0xfffffe50u), 0x2cu);
    /* 0060f04f: mov dword ptr [ebp - 0x1a8], 2 */ W32((u32)(r_ebp+0xfffffe58u), 0x2u);
    /* 0060f059: lea edx, [ebp - 0x1b0] */ r_edx = (u32)(r_ebp+0xfffffe50u);
    /* 0060f05f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060f060: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060f063: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060f064: call dword ptr [0x6b23d8] */ { u32 t = R32((u32)(0x6b23d8u)); r_esp -= 4; W32(r_esp, 0x60f06au); call_ind(t); }
    /* 0060f06a: cmp dword ptr [ebp - 0x1a8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffe58u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060f071: jne 0x60f07f */ if (!fZ) goto L_0060f07f;
L_0060f073:; BB(0x0060f073);
    /* 0060f073: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0060f075: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0060f078: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060f079: call dword ptr [0x6b23dc] */ { u32 t = R32((u32)(0x6b23dcu)); r_esp -= 4; W32(r_esp, 0x60f07fu); call_ind(t); }
L_0060f07f:; BB(0x0060f07f);
    /* 0060f07f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0060f082: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060f083: call dword ptr [0x6b23f8] */ { u32 t = R32((u32)(0x6b23f8u)); r_esp -= 4; W32(r_esp, 0x60f089u); call_ind(t); }
    /* 0060f089: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060f08b: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 0060f08e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0060f090: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0060f093: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 0060f096: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x60f098u); call_ind(t); }
    /* 0060f098: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0060f09b: movzx edx, byte ptr [ecx + 0x5b] */ r_edx = (u32)R8((u32)(r_ecx+0x5bu));
    /* 0060f09f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060f0a1: jne 0x60f0c1 */ if (!fZ) goto L_0060f0c1;
L_0060f0a3:; BB(0x0060f0a3);
    /* 0060f0a3: push 0x2004 */ { u32 v = 0x2004u; r_esp -= 4; W32(r_esp, v); }
    /* 0060f0a8: call 0x630d20 */ r_esp -= 4; W32(r_esp, 0x60f0adu); f_00630d20();
    /* 0060f0ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060f0ae: call 0x630ce0 */ r_esp -= 4; W32(r_esp, 0x60f0b3u); f_00630ce0();
    /* 0060f0b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060f0b4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060f0b6: call dword ptr [0x6b2440] */ { u32 t = R32((u32)(0x6b2440u)); r_esp -= 4; W32(r_esp, 0x60f0bcu); call_ind(t); }
    /* 0060f0bc: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060f0bf: jne 0x60f0d2 */ if (!fZ) goto L_0060f0d2;
L_0060f0c1:; BB(0x0060f0c1);
    /* 0060f0c1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060f0c3: call dword ptr [0x6b22e4] */ { u32 t = R32((u32)(0x6b22e4u)); r_esp -= 4; W32(r_esp, 0x60f0c9u); call_ind(t); }
    /* 0060f0c9: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
    /* 0060f0d0: jmp 0x60f130 */ goto L_0060f130;
L_0060f0d2:; BB(0x0060f0d2);
    /* 0060f0d2: push 0x1388 */ { u32 v = 0x1388u; r_esp -= 4; W32(r_esp, v); }
    /* 0060f0d7: call dword ptr [0x6b20b8] */ { u32 t = R32((u32)(0x6b20b8u)); r_esp -= 4; W32(r_esp, 0x60f0ddu); call_ind(t); }
    /* 0060f0dd: push 0x795940 */ { u32 v = 0x795940u; r_esp -= 4; W32(r_esp, v); }
    /* 0060f0e2: movsx eax, byte ptr [0x795f6c] */ r_eax = (u32)(i32)(i8)R8((u32)(0x795f6cu));
    /* 0060f0e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060f0ea: push 0x6d8334 */ { u32 v = 0x6d8334u; r_esp -= 4; W32(r_esp, v); }
    /* 0060f0ef: lea ecx, [ebp - 0x170] */ r_ecx = (u32)(r_ebp+0xfffffe90u);
    /* 0060f0f5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060f0f6: call dword ptr [0x6b2438] */ { u32 t = R32((u32)(0x6b2438u)); r_esp -= 4; W32(r_esp, 0x60f0fcu); call_ind(t); }
    /* 0060f0fc: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060f0ff: push 0x6c2d28 */ { u32 v = 0x6c2d28u; r_esp -= 4; W32(r_esp, v); }
    /* 0060f104: lea edx, [ebp - 0x170] */ r_edx = (u32)(r_ebp+0xfffffe90u);
    /* 0060f10a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060f10b: call 0x5ea9c0 */ r_esp -= 4; W32(r_esp, 0x60f110u); f_005ea9c0();
    /* 0060f110: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060f113: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 0060f116: cmp dword ptr [ebp - 0x5c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060f11a: je 0x60f130 */ if (fZ) goto L_0060f130;
L_0060f11c:; BB(0x0060f11c);
    /* 0060f11c: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 0060f11f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060f120: call dword ptr [0x6b2258] */ { u32 t = R32((u32)(0x6b2258u)); r_esp -= 4; W32(r_esp, 0x60f126u); call_ind(t); }
    /* 0060f126: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060f129: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
L_0060f130:; BB(0x0060f130);
    /* 0060f130: jmp 0x60f003 */ goto L_0060f003;
L_0060f135:; BB(0x0060f135);
    /* 0060f135: call 0x6300f0 */ r_esp -= 4; W32(r_esp, 0x60f13au); f_006300f0();
L_0060f13a:; BB(0x0060f13a);
    /* 0060f13a: jmp 0x60f1bb */ goto L_0060f1bb;
L_0060f13c:; BB(0x0060f13c);
    /* 0060f13c: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0060f13f: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0060f142: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060f145: cmp dword ptr [edx + 4], 2 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060f149: jne 0x60f1bb */ if (!fZ) goto L_0060f1bb;
L_0060f14b:; BB(0x0060f14b);
    /* 0060f14b: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0060f14e: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 0060f151: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0060f154: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 0060f157: mov dword ptr [ebp - 0x68], edx */ W32((u32)(r_ebp+0xffffff98u), r_edx);
    /* 0060f15a: movsx eax, byte ptr [0x795f6c] */ r_eax = (u32)(i32)(i8)R8((u32)(0x795f6cu));
    /* 0060f161: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060f163: je 0x60f1bb */ if (fZ) goto L_0060f1bb;
L_0060f165:; BB(0x0060f165);
    /* 0060f165: movsx ecx, byte ptr [0x795f6c] */ r_ecx = (u32)(i32)(i8)R8((u32)(0x795f6cu));
    /* 0060f16c: sub ecx, 0x61 */ {  u32 a = r_ecx; u32 b = 0x61u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0060f16f: mov edx, 1 */ r_edx = 0x1u;
    /* 0060f174: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0060f176: cmp dword ptr [ebp - 0x68], edx */ {  u32 a = R32((u32)(r_ebp+0xffffff98u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060f179: jne 0x60f1bb */ if (!fZ) goto L_0060f1bb;
L_0060f17b:; BB(0x0060f17b);
    /* 0060f17b: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0060f180: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060f184: je 0x60f194 */ if (fZ) goto L_0060f194;
L_0060f186:; BB(0x0060f186);
    /* 0060f186: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 0060f18c: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0060f18f: call 0x60a4d0 */ r_esp -= 4; W32(r_esp, 0x60f194u); f_0060a4d0();
L_0060f194:; BB(0x0060f194);
    /* 0060f194: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0060f197: movzx eax, byte ptr [edx + 0x5b] */ r_eax = (u32)R8((u32)(r_edx+0x5bu));
    /* 0060f19b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060f19d: je 0x60f1b1 */ if (fZ) goto L_0060f1b1;
L_0060f19f:; BB(0x0060f19f);
    /* 0060f19f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060f1a1: call dword ptr [0x6b22e0] */ { u32 t = R32((u32)(0x6b22e0u)); r_esp -= 4; W32(r_esp, 0x60f1a7u); call_ind(t); }
    /* 0060f1a7: mov eax, 1 */ r_eax = 0x1u;
    /* 0060f1ac: jmp 0x60f23d */ goto L_0060f23d;
L_0060f1b1:; BB(0x0060f1b1);
    /* 0060f1b1: mov eax, 0x424d5144 */ r_eax = 0x424d5144u;
    /* 0060f1b6: jmp 0x60f23d */ goto L_0060f23d;
L_0060f1bb:; BB(0x0060f1bb);
    /* 0060f1bb: jmp 0x60f23b */ goto L_0060f23b;
L_0060f1bd:; BB(0x0060f1bd);
    /* 0060f1bd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060f1bf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060f1c1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060f1c3: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0060f1c6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060f1c7: call dword ptr [0x6b23ac] */ { u32 t = R32((u32)(0x6b23acu)); r_esp -= 4; W32(r_esp, 0x60f1cdu); call_ind(t); }
    /* 0060f1cd: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0060f1d0: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 0060f1d7: jmp 0x60f1e2 */ goto L_0060f1e2;
L_0060f1d9:; BB(0x0060f1d9);
    /* 0060f1d9: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0060f1dc: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0060f1df: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
L_0060f1e2:; BB(0x0060f1e2);
    /* 0060f1e2: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0060f1e5: cmp eax, dword ptr [ebp - 0x54] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffacu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060f1e8: jge 0x60f215 */ if ((fS==fO)) goto L_0060f215;
L_0060f1ea:; BB(0x0060f1ea);
    /* 0060f1ea: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 0060f1ef: lea ecx, [ebp - 0x170] */ r_ecx = (u32)(r_ebp+0xfffffe90u);
    /* 0060f1f5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060f1f6: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0060f1f9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060f1fa: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0060f1fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060f1fe: call dword ptr [0x6b23ac] */ { u32 t = R32((u32)(0x6b23acu)); r_esp -= 4; W32(r_esp, 0x60f204u); call_ind(t); }
    /* 0060f204: lea ecx, [ebp - 0x170] */ r_ecx = (u32)(r_ebp+0xfffffe90u);
    /* 0060f20a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060f20b: call 0x6300d0 */ r_esp -= 4; W32(r_esp, 0x60f210u); f_006300d0();
    /* 0060f210: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060f213: jmp 0x60f1d9 */ goto L_0060f1d9;
L_0060f215:; BB(0x0060f215);
    /* 0060f215: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0060f218: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060f219: call dword ptr [0x6b2394] */ { u32 t = R32((u32)(0x6b2394u)); r_esp -= 4; W32(r_esp, 0x60f21fu); call_ind(t); }
    /* 0060f21f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060f221: jmp 0x60f23d */ goto L_0060f23d;
L_0060f223:; BB(0x0060f223);
    /* 0060f223: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0060f226: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060f227: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0060f22a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060f22b: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0060f22e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060f22f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060f232: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060f233: call dword ptr [0x6b2418] */ { u32 t = R32((u32)(0x6b2418u)); r_esp -= 4; W32(r_esp, 0x60f239u); call_ind(t); }
    /* 0060f239: jmp 0x60f23d */ goto L_0060f23d;
L_0060f23b:; BB(0x0060f23b);
    /* 0060f23b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0060f23d:; BB(0x0060f23d);
    /* 0060f23d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0060f23e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060f241: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0060f243: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x60f248u); f_00686d72();
    /* 0060f248: mov esp, ebp */ r_esp = r_ebp;
    /* 0060f24a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060f24b: ret 0x10 */ FN_RET(0x0060e5e0); r_esp += 20; return;
}

