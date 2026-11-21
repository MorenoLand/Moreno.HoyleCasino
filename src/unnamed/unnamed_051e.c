#include "protos.h"

void f_0051e100(void) /* sub_51E100 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0051e100);
    /* 0051e100: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051e101: mov ebp, esp */ r_ebp = r_esp;
    /* 0051e103: sub esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051e106: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0051e10b: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0051e10d: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0051e110: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 0051e113: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0051e116: mov ecx, dword ptr [eax*4 + 0x7219ec] */ r_ecx = R32((u32)(r_eax*4+0x7219ecu));
    /* 0051e11d: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 0051e120: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0051e123: call 0x51e5f0 */ r_esp -= 4; W32(r_esp, 0x51e128u); f_0051e5f0();
    /* 0051e128: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0051e12b: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 0051e132: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 0051e139: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 0051e140: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0051e147: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0051e14a: imul edx, edx, 0x180 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x180u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0051e150: add edx, 0x7207e8 */ {  u32 a = r_edx; u32 b = 0x7207e8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051e156: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0051e159: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0051e15c: imul eax, eax, 0x180 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x180u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0051e162: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0051e165: mov edx, dword ptr [ecx + 0x1c4] */ r_edx = R32((u32)(r_ecx+0x1c4u));
    /* 0051e16b: imul edx, edx, 0x30 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x30u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0051e16e: lea eax, [eax + edx + 0x7207ec] */ r_eax = (u32)(r_eax+r_edx+0x7207ecu);
    /* 0051e175: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0051e178: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0051e17b: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0051e17e: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051e180: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0051e183: cmp dword ptr [ebp - 0x4c], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051e187: je 0x51e1a3 */ if (fZ) goto L_0051e1a3;
L_0051e189:; BB(0x0051e189);
    /* 0051e189: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051e18c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0051e18e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051e18f: push 0x6b2fd8 */ { u32 v = 0x6b2fd8u; r_esp -= 4; W32(r_esp, v); }
    /* 0051e194: lea ecx, [ebp - 0x44] */ r_ecx = (u32)(r_ebp+0xffffffbcu);
    /* 0051e197: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051e198: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x51e19eu); call_ind(t); }
    /* 0051e19e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051e1a1: jmp 0x51e212 */ goto L_0051e212;
L_0051e1a3:; BB(0x0051e1a3);
    /* 0051e1a3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0051e1a6: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 0051e1a9: cmp dword ptr [ebp - 0x60], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffa0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051e1ad: je 0x51e1bd */ if (fZ) goto L_0051e1bd;
L_0051e1af:; BB(0x0051e1af);
    /* 0051e1af: cmp dword ptr [ebp - 0x60], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffa0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051e1b3: je 0x51e1da */ if (fZ) goto L_0051e1da;
L_0051e1b5:; BB(0x0051e1b5);
    /* 0051e1b5: cmp dword ptr [ebp - 0x60], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffa0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051e1b9: je 0x51e1f7 */ if (fZ) goto L_0051e1f7;
L_0051e1bb:; BB(0x0051e1bb);
    /* 0051e1bb: jmp 0x51e212 */ goto L_0051e212;
L_0051e1bd:; BB(0x0051e1bd);
    /* 0051e1bd: push 0x6bcb7c */ { u32 v = 0x6bcb7cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051e1c2: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51e1c7u); f_00630f40();
    /* 0051e1c7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051e1ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051e1cb: lea eax, [ebp - 0x44] */ r_eax = (u32)(r_ebp+0xffffffbcu);
    /* 0051e1ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051e1cf: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x51e1d5u); call_ind(t); }
    /* 0051e1d5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051e1d8: jmp 0x51e212 */ goto L_0051e212;
L_0051e1da:; BB(0x0051e1da);
    /* 0051e1da: push 0x6c234c */ { u32 v = 0x6c234cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051e1df: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51e1e4u); f_00630f40();
    /* 0051e1e4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051e1e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051e1e8: lea ecx, [ebp - 0x44] */ r_ecx = (u32)(r_ebp+0xffffffbcu);
    /* 0051e1eb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051e1ec: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x51e1f2u); call_ind(t); }
    /* 0051e1f2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051e1f5: jmp 0x51e212 */ goto L_0051e212;
L_0051e1f7:; BB(0x0051e1f7);
    /* 0051e1f7: push 0x6c232c */ { u32 v = 0x6c232cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051e1fc: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51e201u); f_00630f40();
    /* 0051e201: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051e204: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051e205: lea edx, [ebp - 0x44] */ r_edx = (u32)(r_ebp+0xffffffbcu);
    /* 0051e208: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051e209: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x51e20fu); call_ind(t); }
    /* 0051e20f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0051e212:; BB(0x0051e212);
    /* 0051e212: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0051e215: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051e218: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051e219: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0051e21c: call 0x5fb550 */ r_esp -= 4; W32(r_esp, 0x51e221u); f_005fb550();
    /* 0051e221: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 0051e224: lea ecx, [ebp - 0x44] */ r_ecx = (u32)(r_ebp+0xffffffbcu);
    /* 0051e227: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051e228: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0051e22b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0051e22d: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0051e230: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0051e236: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x51e238u); call_ind(t); }
    /* 0051e238: mov dword ptr [ebp - 0x48], 1 */ W32((u32)(r_ebp+0xffffffb8u), 0x1u);
    /* 0051e23f: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0051e242: add eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051e245: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0051e248: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051e24b: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0051e24e: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 0051e251: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0051e254: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0051e256: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0051e259: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0051e25b: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0051e25e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051e25f: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0051e262: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051e263: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0051e266: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051e267: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051e26a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051e26b: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0051e26e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051e26f: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0051e272: call 0x51e370 */ r_esp -= 4; W32(r_esp, 0x51e277u); f_0051e370();
    /* 0051e277: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051e27a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051e27d: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0051e280: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0051e283: add ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051e286: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0051e289: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051e28c: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0051e28f: add eax, dword ptr [edx + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051e292: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 0051e295: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0051e298: shl ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0051e29a: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 0051e29d: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0051e29f: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 0051e2a2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051e2a3: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0051e2a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051e2a7: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0051e2aa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051e2ab: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051e2ae: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051e2af: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0051e2b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051e2b3: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0051e2b6: call 0x51e370 */ r_esp -= 4; W32(r_esp, 0x51e2bbu); f_0051e370();
    /* 0051e2bb: cmp dword ptr [ebp + 8], 1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051e2bf: jne 0x51e2c6 */ if (!fZ) goto L_0051e2c6;
L_0051e2c1:; BB(0x0051e2c1);
    /* 0051e2c1: jmp 0x51e35d */ goto L_0051e35d;
L_0051e2c6:; BB(0x0051e2c6);
    /* 0051e2c6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051e2c9: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051e2cc: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 0051e2cf: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0051e2d2: add edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051e2d5: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0051e2d8: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051e2db: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0051e2de: add ecx, dword ptr [eax + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051e2e1: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 0051e2e4: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0051e2e7: shl edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0051e2e9: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 0051e2ec: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0051e2ee: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0051e2f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051e2f2: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0051e2f5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051e2f6: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0051e2f9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051e2fa: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051e2fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051e2fe: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0051e301: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051e302: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0051e305: call 0x51e370 */ r_esp -= 4; W32(r_esp, 0x51e30au); f_0051e370();
    /* 0051e30a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051e30d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051e310: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 0051e313: cmp dword ptr [ebp + 8], 2 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051e317: jne 0x51e324 */ if (!fZ) goto L_0051e324;
L_0051e319:; BB(0x0051e319);
    /* 0051e319: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0051e31c: add eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051e31f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0051e322: jmp 0x51e32b */ goto L_0051e32b;
L_0051e324:; BB(0x0051e324);
    /* 0051e324: mov dword ptr [ebp - 8], 0x64 */ W32((u32)(r_ebp+0xfffffff8u), 0x64u);
L_0051e32b:; BB(0x0051e32b);
    /* 0051e32b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051e32e: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0051e331: add edx, dword ptr [ecx + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051e334: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 0051e337: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0051e33a: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0051e33c: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0051e33f: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0051e341: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0051e344: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051e345: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0051e348: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051e349: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0051e34c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051e34d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051e350: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051e351: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0051e354: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051e355: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0051e358: call 0x51e370 */ r_esp -= 4; W32(r_esp, 0x51e35du); f_0051e370();
L_0051e35d:; BB(0x0051e35d);
    /* 0051e35d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0051e360: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0051e362: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x51e367u); f_00686d72();
    /* 0051e367: mov esp, ebp */ r_esp = r_ebp;
    /* 0051e369: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051e36a: ret 4 */ FN_RET(0x0051e100); r_esp += 8; return;
}

void f_0051e370(void) /* sub_51E370 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0051e370);
    /* 0051e370: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051e371: mov ebp, esp */ r_ebp = r_esp;
    /* 0051e373: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051e376: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0051e37b: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0051e37d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0051e380: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 0051e383: cmp dword ptr [ebp + 0xc], 0x64 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051e387: jge 0x51e3a5 */ if ((fS==fO)) goto L_0051e3a5;
L_0051e389:; BB(0x0051e389);
    /* 0051e389: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0051e38c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051e38d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0051e390: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051e391: push 0x6c2394 */ { u32 v = 0x6c2394u; r_esp -= 4; W32(r_esp, v); }
    /* 0051e396: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 0051e399: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051e39a: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x51e3a0u); call_ind(t); }
    /* 0051e3a0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051e3a3: jmp 0x51e3bb */ goto L_0051e3bb;
L_0051e3a5:; BB(0x0051e3a5);
    /* 0051e3a5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0051e3a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051e3a9: push 0x6c2390 */ { u32 v = 0x6c2390u; r_esp -= 4; W32(r_esp, v); }
    /* 0051e3ae: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 0051e3b1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051e3b2: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x51e3b8u); call_ind(t); }
    /* 0051e3b8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0051e3bb:; BB(0x0051e3bb);
    /* 0051e3bb: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 0051e3be: add edx, dword ptr [ebp + 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x1cu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051e3c1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051e3c2: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051e3c5: call 0x5fb550 */ r_esp -= 4; W32(r_esp, 0x51e3cau); f_005fb550();
    /* 0051e3ca: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0051e3cd: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 0051e3d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051e3d1: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0051e3d4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0051e3d6: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0051e3d9: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0051e3df: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x51e3e1u); call_ind(t); }
    /* 0051e3e1: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0051e3e4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051e3e5: push 0x6bb590 */ { u32 v = 0x6bb590u; r_esp -= 4; W32(r_esp, v); }
    /* 0051e3ea: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 0051e3ed: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051e3ee: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x51e3f4u); call_ind(t); }
    /* 0051e3f4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051e3f7: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 0051e3fa: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 0051e3fd: lea edx, [ecx + eax + 1] */ r_edx = (u32)(r_ecx+r_eax+0x1u);
    /* 0051e401: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051e402: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051e405: call 0x5fb550 */ r_esp -= 4; W32(r_esp, 0x51e40au); f_005fb550();
    /* 0051e40a: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0051e40d: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 0051e410: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051e411: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0051e414: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0051e416: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0051e419: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0051e41f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x51e421u); call_ind(t); }
    /* 0051e421: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0051e424: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051e425: push 0x6bb590 */ { u32 v = 0x6bb590u; r_esp -= 4; W32(r_esp, v); }
    /* 0051e42a: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 0051e42d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051e42e: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x51e434u); call_ind(t); }
    /* 0051e434: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051e437: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 0051e43a: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 0051e43d: lea edx, [ecx + eax + 2] */ r_edx = (u32)(r_ecx+r_eax+0x2u);
    /* 0051e441: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051e442: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051e445: call 0x5fb550 */ r_esp -= 4; W32(r_esp, 0x51e44au); f_005fb550();
    /* 0051e44a: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0051e44d: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 0051e450: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051e451: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0051e454: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0051e456: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0051e459: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0051e45f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x51e461u); call_ind(t); }
    /* 0051e461: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051e464: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0051e466: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x51e46bu); f_00686d72();
    /* 0051e46b: mov esp, ebp */ r_esp = r_ebp;
    /* 0051e46d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051e46e: ret 0x18 */ FN_RET(0x0051e370); r_esp += 28; return;
}

void f_0051e480(void) /* sub_51E480 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0051e480);
    /* 0051e480: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051e481: mov ebp, esp */ r_ebp = r_esp;
    /* 0051e483: sub esp, 0xe8 */ {  u32 a = r_esp; u32 b = 0xe8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051e489: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0051e48e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0051e490: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0051e493: mov dword ptr [ebp - 0xe0], ecx */ W32((u32)(r_ebp+0xffffff20u), r_ecx);
    /* 0051e499: mov ecx, dword ptr [ebp - 0xe0] */ r_ecx = R32((u32)(r_ebp+0xffffff20u));
    /* 0051e49f: call 0x51e5f0 */ r_esp -= 4; W32(r_esp, 0x51e4a4u); f_0051e5f0();
    /* 0051e4a4: imul eax, eax, 0x180 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x180u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0051e4aa: add eax, 0x7207e8 */ {  u32 a = r_eax; u32 b = 0x7207e8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051e4af: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0051e4b2: lea eax, [ebp - 0xdc] */ r_eax = (u32)(r_ebp+0xffffff24u);
    /* 0051e4b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051e4b9: mov ecx, dword ptr [ebp - 0xe0] */ r_ecx = R32((u32)(r_ebp+0xffffff20u));
    /* 0051e4bf: mov edx, dword ptr [ecx + 0x1c4] */ r_edx = R32((u32)(r_ecx+0x1c4u));
    /* 0051e4c5: imul edx, edx, 0x1c */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x1cu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0051e4c8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051e4cb: mov ecx, dword ptr [eax + edx + 0xf4] */ r_ecx = R32((u32)(r_eax+r_edx+0xf4u));
    /* 0051e4d2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051e4d3: call 0x6311e0 */ r_esp -= 4; W32(r_esp, 0x51e4d8u); f_006311e0();
    /* 0051e4d8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051e4db: lea edx, [ebp - 0xdc] */ r_edx = (u32)(r_ebp+0xffffff24u);
    /* 0051e4e1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051e4e2: push 0x6c23c4 */ { u32 v = 0x6c23c4u; r_esp -= 4; W32(r_esp, v); }
    /* 0051e4e7: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51e4ecu); f_00630f40();
    /* 0051e4ec: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051e4ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051e4f0: lea eax, [ebp - 0xa8] */ r_eax = (u32)(r_ebp+0xffffff58u);
    /* 0051e4f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051e4f7: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x51e4fdu); call_ind(t); }
    /* 0051e4fd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051e500: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0051e502: mov ecx, dword ptr [ebp - 0xe0] */ r_ecx = R32((u32)(r_ebp+0xffffff20u));
    /* 0051e508: call 0x5fb550 */ r_esp -= 4; W32(r_esp, 0x51e50du); f_005fb550();
    /* 0051e50d: mov dword ptr [ebp - 0xe4], eax */ W32((u32)(r_ebp+0xffffff1cu), r_eax);
    /* 0051e513: lea ecx, [ebp - 0xa8] */ r_ecx = (u32)(r_ebp+0xffffff58u);
    /* 0051e519: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051e51a: mov edx, dword ptr [ebp - 0xe4] */ r_edx = R32((u32)(r_ebp+0xffffff1cu));
    /* 0051e520: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0051e522: mov ecx, dword ptr [ebp - 0xe4] */ r_ecx = R32((u32)(r_ebp+0xffffff1cu));
    /* 0051e528: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0051e52e: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x51e530u); call_ind(t); }
    /* 0051e530: lea eax, [ebp - 0xdc] */ r_eax = (u32)(r_ebp+0xffffff24u);
    /* 0051e536: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051e537: mov ecx, dword ptr [ebp - 0xe0] */ r_ecx = R32((u32)(r_ebp+0xffffff20u));
    /* 0051e53d: mov edx, dword ptr [ecx + 0x1c4] */ r_edx = R32((u32)(r_ecx+0x1c4u));
    /* 0051e543: imul edx, edx, 0x1c */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x1cu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0051e546: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051e549: mov ecx, dword ptr [eax + edx + 0xf8] */ r_ecx = R32((u32)(r_eax+r_edx+0xf8u));
    /* 0051e550: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051e551: call 0x6311e0 */ r_esp -= 4; W32(r_esp, 0x51e556u); f_006311e0();
    /* 0051e556: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051e559: lea edx, [ebp - 0x3c] */ r_edx = (u32)(r_ebp+0xffffffc4u);
    /* 0051e55c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051e55d: mov eax, dword ptr [ebp - 0xe0] */ r_eax = R32((u32)(r_ebp+0xffffff20u));
    /* 0051e563: mov ecx, dword ptr [eax + 0x1c4] */ r_ecx = R32((u32)(r_eax+0x1c4u));
    /* 0051e569: imul ecx, ecx, 0x1c */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x1cu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0051e56c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051e56f: mov eax, dword ptr [edx + ecx + 0xfc] */ r_eax = R32((u32)(r_edx+r_ecx+0xfcu));
    /* 0051e576: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051e577: call 0x6311e0 */ r_esp -= 4; W32(r_esp, 0x51e57cu); f_006311e0();
    /* 0051e57c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051e57f: lea ecx, [ebp - 0x3c] */ r_ecx = (u32)(r_ebp+0xffffffc4u);
    /* 0051e582: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051e583: lea edx, [ebp - 0xdc] */ r_edx = (u32)(r_ebp+0xffffff24u);
    /* 0051e589: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051e58a: push 0x6c239c */ { u32 v = 0x6c239cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051e58f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51e594u); f_00630f40();
    /* 0051e594: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051e597: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051e598: lea eax, [ebp - 0xa8] */ r_eax = (u32)(r_ebp+0xffffff58u);
    /* 0051e59e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051e59f: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x51e5a5u); call_ind(t); }
    /* 0051e5a5: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051e5a8: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0051e5aa: mov ecx, dword ptr [ebp - 0xe0] */ r_ecx = R32((u32)(r_ebp+0xffffff20u));
    /* 0051e5b0: call 0x5fb550 */ r_esp -= 4; W32(r_esp, 0x51e5b5u); f_005fb550();
    /* 0051e5b5: mov dword ptr [ebp - 0xe8], eax */ W32((u32)(r_ebp+0xffffff18u), r_eax);
    /* 0051e5bb: lea ecx, [ebp - 0xa8] */ r_ecx = (u32)(r_ebp+0xffffff58u);
    /* 0051e5c1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051e5c2: mov edx, dword ptr [ebp - 0xe8] */ r_edx = R32((u32)(r_ebp+0xffffff18u));
    /* 0051e5c8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0051e5ca: mov ecx, dword ptr [ebp - 0xe8] */ r_ecx = R32((u32)(r_ebp+0xffffff18u));
    /* 0051e5d0: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0051e5d6: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x51e5d8u); call_ind(t); }
    /* 0051e5d8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051e5db: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0051e5dd: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x51e5e2u); f_00686d72();
    /* 0051e5e2: mov esp, ebp */ r_esp = r_ebp;
    /* 0051e5e4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051e5e5: ret  */ FN_RET(0x0051e480); r_esp += 4; return;
}

void f_0051e630(void) /* sub_51E630 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0051e630);
    /* 0051e630: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051e631: mov ebp, esp */ r_ebp = r_esp;
    /* 0051e633: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051e636: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0051e639: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0051e63b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051e63e: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x51e643u); f_005fb2b0();
    /* 0051e643: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0051e646: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0051e649: mov ecx, dword ptr [eax*4 + 0x7219fc] */ r_ecx = R32((u32)(r_eax*4+0x7219fcu));
    /* 0051e650: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051e651: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051e654: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0051e656: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051e659: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 0051e65c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x51e65eu); call_ind(t); }
    /* 0051e65e: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0051e660: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051e663: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x51e668u); f_005fb2b0();
    /* 0051e668: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0051e66b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051e66e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0051e670: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051e673: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0051e676: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x51e678u); call_ind(t); }
    /* 0051e678: mov esp, ebp */ r_esp = r_ebp;
    /* 0051e67a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051e67b: ret 4 */ FN_RET(0x0051e630); r_esp += 8; return;
}

void f_0051e730(void) /* sub_51E730 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0051e730);
    /* 0051e730: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051e731: mov ebp, esp */ r_ebp = r_esp;
    /* 0051e733: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051e736: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0051e739: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051e73c: mov cl, byte ptr [eax + 0x1c0] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x1c0u))) & 0xffu);
    /* 0051e742: mov byte ptr [ebp - 1], cl */ W8((u32)(r_ebp+0xffffffffu), (u8)r_ecx);
    /* 0051e745: movzx edx, byte ptr [ebp - 1] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 0051e749: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051e74b: je 0x51e75a */ if (fZ) goto L_0051e75a;
L_0051e74d:; BB(0x0051e74d);
    /* 0051e74d: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 0051e753: call 0x4fc8e0 */ r_esp -= 4; W32(r_esp, 0x51e758u); f_004fc8e0();
    /* 0051e758: jmp 0x51e76a */ goto L_0051e76a;
L_0051e75a:; BB(0x0051e75a);
    /* 0051e75a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051e75d: call 0x5f87d0 */ r_esp -= 4; W32(r_esp, 0x51e762u); f_005f87d0();
    /* 0051e762: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051e765: call 0x51e7b0 */ r_esp -= 4; W32(r_esp, 0x51e76au); f_0051e7b0();
L_0051e76a:; BB(0x0051e76a);
    /* 0051e76a: mov esp, ebp */ r_esp = r_ebp;
    /* 0051e76c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051e76d: ret  */ FN_RET(0x0051e730); r_esp += 4; return;
}

void f_0051e7b0(void) /* sub_51E7B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0051e7b0);
    /* 0051e7b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051e7b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0051e7b3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051e7b6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0051e7b9: mov dword ptr [ebp - 4], 8 */ W32((u32)(r_ebp+0xfffffffcu), 0x8u);
    /* 0051e7c0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051e7c3: call 0x51e5f0 */ r_esp -= 4; W32(r_esp, 0x51e7c8u); f_0051e5f0();
    /* 0051e7c8: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0051e7cb: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051e7cf: jl 0x51e8e5 */ if ((fS!=fO)) goto L_0051e8e5;
L_0051e7d5:; BB(0x0051e7d5);
    /* 0051e7d5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051e7d8: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051e7db: jge 0x51e8e5 */ if ((fS==fO)) goto L_0051e8e5;
L_0051e7e1:; BB(0x0051e7e1);
    /* 0051e7e1: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0051e7e7: call 0x5e2f90 */ r_esp -= 4; W32(r_esp, 0x51e7ecu); f_005e2f90();
    /* 0051e7ec: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0051e7f2: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051e7f5: mov dword ptr [ecx + 0x4efc], edx */ W32((u32)(r_ecx+0x4efcu), r_edx);
    /* 0051e7fb: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 0051e800: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051e803: mov edx, dword ptr [ecx + 0x1c4] */ r_edx = R32((u32)(r_ecx+0x1c4u));
    /* 0051e809: mov dword ptr [eax + 0x4f00], edx */ W32((u32)(r_eax+0x4f00u), r_edx);
    /* 0051e80f: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 0051e814: mov byte ptr [eax + 0x4f04], 1 */ W8((u32)(r_eax+0x4f04u), 0x1u);
    /* 0051e81b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051e81e: mov edx, dword ptr [ecx + 0x1c4] */ r_edx = R32((u32)(r_ecx+0x1c4u));
    /* 0051e824: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051e825: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051e828: call 0x51e770 */ r_esp -= 4; W32(r_esp, 0x51e82du); f_0051e770();
    /* 0051e82d: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0051e833: mov dword ptr [ecx + 0x4eec], eax */ W32((u32)(r_ecx+0x4eecu), r_eax);
    /* 0051e839: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 0051e83f: mov dword ptr [edx + 0x4ef0], 0xc8 */ W32((u32)(r_edx+0x4ef0u), 0xc8u);
    /* 0051e849: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 0051e84e: mov byte ptr [eax + 0x4ee9], 1 */ W8((u32)(r_eax+0x4ee9u), 0x1u);
    /* 0051e855: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051e858: mov edx, dword ptr [ecx*4 + 0x7217e8] */ r_edx = R32((u32)(r_ecx*4+0x7217e8u));
    /* 0051e85f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051e860: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051e863: call 0x51ea70 */ r_esp -= 4; W32(r_esp, 0x51e868u); f_0051ea70();
    /* 0051e868: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0051e86e: mov dword ptr [ecx + 0x4f18], eax */ W32((u32)(r_ecx+0x4f18u), r_eax);
    /* 0051e874: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051e877: mov eax, dword ptr [edx*4 + 0x7217e8] */ r_eax = R32((u32)(r_edx*4+0x7217e8u));
    /* 0051e87e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051e87f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051e882: call 0x51ea70 */ r_esp -= 4; W32(r_esp, 0x51e887u); f_0051ea70();
    /* 0051e887: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0051e88d: mov dword ptr [ecx + 0x4f24], eax */ W32((u32)(r_ecx+0x4f24u), r_eax);
    /* 0051e893: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 0051e899: mov byte ptr [edx + 0x4eea], 0 */ W8((u32)(r_edx+0x4eeau), 0x0u);
    /* 0051e8a0: push 0x30e792 */ { u32 v = 0x30e792u; r_esp -= 4; W32(r_esp, v); }
    /* 0051e8a5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051e8a8: call 0x51eb20 */ r_esp -= 4; W32(r_esp, 0x51e8adu); f_0051eb20();
    /* 0051e8ad: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0051e8b3: mov dword ptr [ecx + 0x4f0c], eax */ W32((u32)(r_ecx+0x4f0cu), r_eax);
    /* 0051e8b9: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051e8bb: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0051e8bd: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 0051e8c3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0051e8c5: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0051e8cb: mov edx, dword ptr [eax + 0x334] */ r_edx = R32((u32)(r_eax+0x334u));
    /* 0051e8d1: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x51e8d3u); call_ind(t); }
    /* 0051e8d3: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0051e8d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051e8d8: jne 0x51e8e5 */ if (!fZ) goto L_0051e8e5;
L_0051e8da:; BB(0x0051e8da);
    /* 0051e8da: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0051e8e0: call 0x5e3130 */ r_esp -= 4; W32(r_esp, 0x51e8e5u); f_005e3130();
L_0051e8e5:; BB(0x0051e8e5);
    /* 0051e8e5: mov esp, ebp */ r_esp = r_ebp;
    /* 0051e8e7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051e8e8: ret  */ FN_RET(0x0051e7b0); r_esp += 4; return;
}

void f_0051ea70(void) /* sub_51EA70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0051ea70);
    /* 0051ea70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051ea71: mov ebp, esp */ r_ebp = r_esp;
    /* 0051ea73: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051ea76: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0051ea79: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0051ea7c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0051ea7f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051ea82: sub ecx, 0x30e78a */ {  u32 a = r_ecx; u32 b = 0x30e78au; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0051ea88: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0051ea8b: cmp dword ptr [ebp - 8], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0051ea8f: ja 0x51eaf5 */ if ((!fC&&!fZ)) goto L_0051eaf5;
L_0051ea91:; BB(0x0051ea91);
    /* 0051ea91: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051ea94: jmp dword ptr [edx*4 + 0x51eb00] */ { u32 t = R32((u32)(r_edx*4+0x51eb00u)); switch (t) { case 0x51ea9bu: goto L_0051ea9b; case 0x51ea9fu: goto L_0051ea9f; case 0x51eaa6u: goto L_0051eaa6; case 0x51eaadu: goto L_0051eaad; case 0x51eab4u: goto L_0051eab4; case 0x51eabbu: goto L_0051eabb; case 0x51eac2u: goto L_0051eac2; case 0x51eac9u: goto L_0051eac9; default: UNSUP(0x0051ea94, "jump table entry is not a known target"); } }
L_0051ea9b:; BB(0x0051ea9b);
    /* 0051ea9b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0051ea9d: jmp 0x51eaf8 */ goto L_0051eaf8;
L_0051ea9f:; BB(0x0051ea9f);
    /* 0051ea9f: mov eax, 1 */ r_eax = 0x1u;
    /* 0051eaa4: jmp 0x51eaf8 */ goto L_0051eaf8;
L_0051eaa6:; BB(0x0051eaa6);
    /* 0051eaa6: mov eax, 2 */ r_eax = 0x2u;
    /* 0051eaab: jmp 0x51eaf8 */ goto L_0051eaf8;
L_0051eaad:; BB(0x0051eaad);
    /* 0051eaad: mov eax, 3 */ r_eax = 0x3u;
    /* 0051eab2: jmp 0x51eaf8 */ goto L_0051eaf8;
L_0051eab4:; BB(0x0051eab4);
    /* 0051eab4: mov eax, 4 */ r_eax = 0x4u;
    /* 0051eab9: jmp 0x51eaf8 */ goto L_0051eaf8;
L_0051eabb:; BB(0x0051eabb);
    /* 0051eabb: mov eax, 5 */ r_eax = 0x5u;
    /* 0051eac0: jmp 0x51eaf8 */ goto L_0051eaf8;
L_0051eac2:; BB(0x0051eac2);
    /* 0051eac2: mov eax, 6 */ r_eax = 0x6u;
    /* 0051eac7: jmp 0x51eaf8 */ goto L_0051eaf8;
L_0051eac9:; BB(0x0051eac9);
    /* 0051eac9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051eacc: mov ecx, dword ptr [eax + 0x1c8] */ r_ecx = R32((u32)(r_eax+0x1c8u));
    /* 0051ead2: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0051ead5: cmp dword ptr [ebp - 0xc], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051ead9: je 0x51eae3 */ if (fZ) goto L_0051eae3;
L_0051eadb:; BB(0x0051eadb);
    /* 0051eadb: cmp dword ptr [ebp - 0xc], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051eadf: je 0x51eaea */ if (fZ) goto L_0051eaea;
L_0051eae1:; BB(0x0051eae1);
    /* 0051eae1: jmp 0x51eaee */ goto L_0051eaee;
L_0051eae3:; BB(0x0051eae3);
    /* 0051eae3: mov eax, 3 */ r_eax = 0x3u;
    /* 0051eae8: jmp 0x51eaf8 */ goto L_0051eaf8;
L_0051eaea:; BB(0x0051eaea);
    /* 0051eaea: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0051eaec: jmp 0x51eaf8 */ goto L_0051eaf8;
L_0051eaee:; BB(0x0051eaee);
    /* 0051eaee: mov eax, 2 */ r_eax = 0x2u;
    /* 0051eaf3: jmp 0x51eaf8 */ goto L_0051eaf8;
L_0051eaf5:; BB(0x0051eaf5);
    /* 0051eaf5: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_0051eaf8:; BB(0x0051eaf8);
    /* 0051eaf8: mov esp, ebp */ r_esp = r_ebp;
    /* 0051eafa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051eafb: ret 4 */ FN_RET(0x0051ea70); r_esp += 8; return;
}

void f_0051eb20(void) /* sub_51EB20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0051eb20);
    /* 0051eb20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051eb21: mov ebp, esp */ r_ebp = r_esp;
    /* 0051eb23: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051eb26: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0051eb29: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0051eb2c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0051eb2f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051eb32: sub ecx, 0x30e792 */ {  u32 a = r_ecx; u32 b = 0x30e792u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0051eb38: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0051eb3b: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0051eb3f: ja 0x51eb67 */ if ((!fC&&!fZ)) goto L_0051eb67;
L_0051eb41:; BB(0x0051eb41);
    /* 0051eb41: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051eb44: jmp dword ptr [edx*4 + 0x51eb74] */ { u32 t = R32((u32)(r_edx*4+0x51eb74u)); switch (t) { case 0x51eb4bu: goto L_0051eb4b; case 0x51eb52u: goto L_0051eb52; case 0x51eb59u: goto L_0051eb59; case 0x51eb60u: goto L_0051eb60; default: UNSUP(0x0051eb44, "jump table entry is not a known target"); } }
L_0051eb4b:; BB(0x0051eb4b);
    /* 0051eb4b: mov eax, 5 */ r_eax = 0x5u;
    /* 0051eb50: jmp 0x51eb6c */ goto L_0051eb6c;
L_0051eb52:; BB(0x0051eb52);
    /* 0051eb52: mov eax, 0x19 */ r_eax = 0x19u;
    /* 0051eb57: jmp 0x51eb6c */ goto L_0051eb6c;
L_0051eb59:; BB(0x0051eb59);
    /* 0051eb59: mov eax, 0xfa */ r_eax = 0xfau;
    /* 0051eb5e: jmp 0x51eb6c */ goto L_0051eb6c;
L_0051eb60:; BB(0x0051eb60);
    /* 0051eb60: mov eax, 0x3e8 */ r_eax = 0x3e8u;
    /* 0051eb65: jmp 0x51eb6c */ goto L_0051eb6c;
L_0051eb67:; BB(0x0051eb67);
    /* 0051eb67: mov eax, 5 */ r_eax = 0x5u;
L_0051eb6c:; BB(0x0051eb6c);
    /* 0051eb6c: mov esp, ebp */ r_esp = r_ebp;
    /* 0051eb6e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051eb6f: ret 4 */ FN_RET(0x0051eb20); r_esp += 8; return;
}

void f_0051eb90(void) /* sub_51EB90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0051eb90);
    /* 0051eb90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051eb91: mov ebp, esp */ r_ebp = r_esp;
    /* 0051eb93: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051eb96: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0051eb99: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051eb9c: mov cl, byte ptr [eax + 0x1c0] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x1c0u))) & 0xffu);
    /* 0051eba2: mov byte ptr [ebp - 1], cl */ W8((u32)(r_ebp+0xffffffffu), (u8)r_ecx);
    /* 0051eba5: movzx edx, byte ptr [ebp - 1] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 0051eba9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051ebab: je 0x51ebba */ if (fZ) goto L_0051ebba;
L_0051ebad:; BB(0x0051ebad);
    /* 0051ebad: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 0051ebb3: call 0x4fc8e0 */ r_esp -= 4; W32(r_esp, 0x51ebb8u); f_004fc8e0();
    /* 0051ebb8: jmp 0x51ebc5 */ goto L_0051ebc5;
L_0051ebba:; BB(0x0051ebba);
    /* 0051ebba: mov ecx, dword ptr [0x793160] */ r_ecx = R32((u32)(0x793160u));
    /* 0051ebc0: call 0x520240 */ r_esp -= 4; W32(r_esp, 0x51ebc5u); f_00520240();
L_0051ebc5:; BB(0x0051ebc5);
    /* 0051ebc5: mov esp, ebp */ r_esp = r_ebp;
    /* 0051ebc7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051ebc8: ret  */ FN_RET(0x0051eb90); r_esp += 4; return;
}

void f_0051ec30(void) /* sub_51EC30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0051ec30);
    /* 0051ec30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051ec31: mov ebp, esp */ r_ebp = r_esp;
    /* 0051ec33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051ec34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0051ec37: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051ec3a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0051ec3d: mov dword ptr [eax + 0x1bc], ecx */ W32((u32)(r_eax+0x1bcu), r_ecx);
    /* 0051ec43: mov esp, ebp */ r_esp = r_ebp;
    /* 0051ec45: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051ec46: ret 4 */ FN_RET(0x0051ec30); r_esp += 8; return;
}

void f_0051ec50(void) /* sub_51EC50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0051ec50);
    /* 0051ec50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051ec51: mov ebp, esp */ r_ebp = r_esp;
    /* 0051ec53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051ec54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0051ec57: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051ec5a: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 0051ec5d: mov byte ptr [eax + 0x1c0], cl */ W8((u32)(r_eax+0x1c0u), (u8)r_ecx);
    /* 0051ec63: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051ec66: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0051ec69: mov dword ptr [edx + 0x1c4], eax */ W32((u32)(r_edx+0x1c4u), r_eax);
    /* 0051ec6f: mov esp, ebp */ r_esp = r_ebp;
    /* 0051ec71: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051ec72: ret 8 */ FN_RET(0x0051ec50); r_esp += 12; return;
}

void f_0051ec80(void) /* sub_51EC80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0051ec80);
    /* 0051ec80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051ec81: mov ebp, esp */ r_ebp = r_esp;
    /* 0051ec83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051ec84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0051ec87: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0051ec8a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051ec8b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051ec8e: add ecx, 0x1c8 */ {  u32 a = r_ecx; u32 b = 0x1c8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051ec94: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051ec95: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x51ec9au); f_00686d8e();
    /* 0051ec9a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051ec9d: mov esp, ebp */ r_esp = r_ebp;
    /* 0051ec9f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051eca0: ret 4 */ FN_RET(0x0051ec80); r_esp += 8; return;
}

