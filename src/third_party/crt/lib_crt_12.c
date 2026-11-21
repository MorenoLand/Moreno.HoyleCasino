#include "protos.h"

void f_0068702f(void) /* ___tmainCRTStartup */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068702f);
    /* 0068702f: push 0x58 */ { u32 v = 0x58u; r_esp -= 4; W32(r_esp, v); }
    /* 00687031: push 0x702af0 */ { u32 v = 0x702af0u; r_esp -= 4; W32(r_esp, v); }
    /* 00687036: call 0x68768c */ r_esp -= 4; W32(r_esp, 0x68703bu); f_0068768c();
    /* 0068703b: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0068703d: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00687040: mov dword ptr [ebp - 4], ebx */ W32((u32)(r_ebp+0xfffffffcu), r_ebx);
    /* 00687043: lea eax, [ebp - 0x68] */ r_eax = (u32)(r_ebp+0xffffff98u);
    /* 00687046: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00687047: call dword ptr [0x6b20e0] */ { u32 t = R32((u32)(0x6b20e0u)); r_esp -= 4; W32(r_esp, 0x68704du); call_ind(t); }
    /* 0068704d: mov dword ptr [ebp - 4], 0xfffffffe */ W32((u32)(r_ebp+0xfffffffcu), 0xfffffffeu);
    /* 00687054: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0068705b: mov eax, dword ptr fs:[0x18] */ r_eax = R32((u32)(TEB+0x18u));
    /* 00687061: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 00687064: mov edi, 0x1631be8 */ r_edi = 0x1631be8u;
L_00687069:; BB(0x00687069);
    /* 00687069: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068706b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068706c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068706d: call dword ptr [0x6b20a0] */ { u32 t = R32((u32)(0x6b20a0u)); r_esp -= 4; W32(r_esp, 0x687073u); call_ind(t); }
    /* 00687073: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00687075: je 0x68708f */ if (fZ) goto L_0068708f;
L_00687077:; BB(0x00687077);
    /* 00687077: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00687079: jne 0x687082 */ if (!fZ) goto L_00687082;
L_0068707b:; BB(0x0068707b);
    /* 0068707b: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0068707d: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0068707e: mov ebx, esi */ r_ebx = r_esi;
    /* 00687080: jmp 0x687092 */ goto L_00687092;
L_00687082:; BB(0x00687082);
    /* 00687082: push 0x3e8 */ { u32 v = 0x3e8u; r_esp -= 4; W32(r_esp, v); }
    /* 00687087: call dword ptr [0x6b20b8] */ { u32 t = R32((u32)(0x6b20b8u)); r_esp -= 4; W32(r_esp, 0x68708du); call_ind(t); }
    /* 0068708d: jmp 0x687069 */ goto L_00687069;
L_0068708f:; BB(0x0068708f);
    /* 0068708f: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00687091: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_00687092:; BB(0x00687092);
    /* 00687092: mov eax, dword ptr [0x1631be4] */ r_eax = R32((u32)(0x1631be4u));
    /* 00687097: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00687099: jne 0x6870a5 */ if (!fZ) goto L_006870a5;
L_0068709b:; BB(0x0068709b);
    /* 0068709b: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0068709d: call 0x68774a */ r_esp -= 4; W32(r_esp, 0x6870a2u); f_0068774a();
    /* 006870a2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006870a3: jmp 0x6870d4 */ goto L_006870d4;
L_006870a5:; BB(0x006870a5);
    /* 006870a5: mov eax, dword ptr [0x1631be4] */ r_eax = R32((u32)(0x1631be4u));
    /* 006870aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006870ac: jne 0x6870ce */ if (!fZ) goto L_006870ce;
L_006870ae:; BB(0x006870ae);
    /* 006870ae: mov dword ptr [0x1631be4], esi */ W32((u32)(0x1631be4u), r_esi);
    /* 006870b4: push 0x6b26ec */ { u32 v = 0x6b26ecu; r_esp -= 4; W32(r_esp, v); }
    /* 006870b9: push 0x6b26dc */ { u32 v = 0x6b26dcu; r_esp -= 4; W32(r_esp, v); }
    /* 006870be: call 0x6878e2 */ r_esp -= 4; W32(r_esp, 0x6870c3u); f_006878e2();
    /* 006870c3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006870c4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006870c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006870c7: je 0x6870d4 */ if (fZ) goto L_006870d4;
L_006870c9:; BB(0x006870c9);
    /* 006870c9: jmp 0x6871fc */ goto L_006871fc;
L_006870ce:; BB(0x006870ce);
    /* 006870ce: mov dword ptr [0x1631870], esi */ W32((u32)(0x1631870u), r_esi);
L_006870d4:; BB(0x006870d4);
    /* 006870d4: mov eax, dword ptr [0x1631be4] */ r_eax = R32((u32)(0x1631be4u));
    /* 006870d9: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006870db: jne 0x6870f8 */ if (!fZ) goto L_006870f8;
L_006870dd:; BB(0x006870dd);
    /* 006870dd: push 0x6b26d8 */ { u32 v = 0x6b26d8u; r_esp -= 4; W32(r_esp, v); }
    /* 006870e2: push 0x6b2508 */ { u32 v = 0x6b2508u; r_esp -= 4; W32(r_esp, v); }
    /* 006870e7: call 0x6878dc */ r_esp -= 4; W32(r_esp, 0x6870ecu); f_006878dc();
    /* 006870ec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006870ed: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006870ee: mov dword ptr [0x1631be4], 2 */ W32((u32)(0x1631be4u), 0x2u);
L_006870f8:; BB(0x006870f8);
    /* 006870f8: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006870fa: jne 0x687104 */ if (!fZ) goto L_00687104;
L_006870fc:; BB(0x006870fc);
    /* 006870fc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006870fd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006870fe: call dword ptr [0x6b20a4] */ { u32 t = R32((u32)(0x6b20a4u)); r_esp -= 4; W32(r_esp, 0x687104u); call_ind(t); }
L_00687104:; BB(0x00687104);
    /* 00687104: cmp dword ptr [0x1631bf0], 0 */ {  u32 a = R32((u32)(0x1631bf0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068710b: je 0x687128 */ if (fZ) goto L_00687128;
L_0068710d:; BB(0x0068710d);
    /* 0068710d: push 0x1631bf0 */ { u32 v = 0x1631bf0u; r_esp -= 4; W32(r_esp, v); }
    /* 00687112: call 0x687820 */ r_esp -= 4; W32(r_esp, 0x687117u); f_00687820();
    /* 00687117: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00687118: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068711a: je 0x687128 */ if (fZ) goto L_00687128;
L_0068711c:; BB(0x0068711c);
    /* 0068711c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068711e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00687120: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00687122: call dword ptr [0x1631bf0] */ { u32 t = R32((u32)(0x1631bf0u)); r_esp -= 4; W32(r_esp, 0x687128u); call_ind(t); }
L_00687128:; BB(0x00687128);
    /* 00687128: mov eax, dword ptr [0x6b2138] */ r_eax = R32((u32)(0x6b2138u));
    /* 0068712d: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
L_0068712f:; BB(0x0068712f);
    /* 0068712f: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00687132: mov al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 00687134: cmp al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 00687136: ja 0x687184 */ if ((!fC&&!fZ)) goto L_00687184;
L_00687138:; BB(0x00687138);
    /* 00687138: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0068713a: je 0x687142 */ if (fZ) goto L_00687142;
L_0068713c:; BB(0x0068713c);
    /* 0068713c: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00687140: jne 0x687184 */ if (!fZ) goto L_00687184;
L_00687142:; BB(0x00687142);
    /* 00687142: mov al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 00687144: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00687146: je 0x687152 */ if (fZ) goto L_00687152;
L_00687148:; BB(0x00687148);
    /* 00687148: cmp al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 0068714a: ja 0x687152 */ if ((!fC&&!fZ)) goto L_00687152;
L_0068714c:; BB(0x0068714c);
    /* 0068714c: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0068714d: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00687150: jmp 0x687142 */ goto L_00687142;
L_00687152:; BB(0x00687152);
    /* 00687152: test byte ptr [ebp - 0x3c], 1 */ {  u32 a = R8((u32)(r_ebp+0xffffffc4u)); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00687156: je 0x68715e */ if (fZ) goto L_0068715e;
L_00687158:; BB(0x00687158);
    /* 00687158: movzx eax, word ptr [ebp - 0x38] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc8u));
    /* 0068715c: jmp 0x687161 */ goto L_00687161;
L_0068715e:; BB(0x0068715e);
    /* 0068715e: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00687160: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
L_00687161:; BB(0x00687161);
    /* 00687161: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00687162: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00687163: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00687165: push 0x400000 */ { u32 v = 0x400000u; r_esp -= 4; W32(r_esp, v); }
    /* 0068716a: call 0x6663c0 */ r_esp -= 4; W32(r_esp, 0x68716fu); f_006663c0();
    /* 0068716f: mov dword ptr [0x163186c], eax */ W32((u32)(0x163186cu), r_eax);
    /* 00687174: cmp dword ptr [0x1631860], 0 */ {  u32 a = R32((u32)(0x1631860u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068717b: jne 0x6871d8 */ if (!fZ) goto L_006871d8;
L_0068717d:; BB(0x0068717d);
    /* 0068717d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068717e: call dword ptr [0x6b22e4] */ { u32 t = R32((u32)(0x6b22e4u)); r_esp -= 4; W32(r_esp, 0x687184u); call_ind(t); }
L_00687184:; BB(0x00687184);
    /* 00687184: cmp al, 0x22 */ {  u32 a = (u8)r_eax; u32 b = 0x22u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00687186: jne 0x687193 */ if (!fZ) goto L_00687193;
L_00687188:; BB(0x00687188);
    /* 00687188: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0068718a: cmp dword ptr [ebp - 0x1c], ecx */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068718d: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00687190: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
L_00687193:; BB(0x00687193);
    /* 00687193: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00687196: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00687197: call dword ptr [0x6b2134] */ { u32 t = R32((u32)(0x6b2134u)); r_esp -= 4; W32(r_esp, 0x68719du); call_ind(t); }
    /* 0068719d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068719e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006871a0: je 0x6871a6 */ if (fZ) goto L_006871a6;
L_006871a2:; BB(0x006871a2);
    /* 006871a2: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006871a3: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
L_006871a6:; BB(0x006871a6);
    /* 006871a6: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006871a7: jmp 0x68712f */ goto L_0068712f;
L_006871d8:; BB(0x006871d8);
    /* 006871d8: cmp dword ptr [0x1631870], 0 */ {  u32 a = R32((u32)(0x1631870u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006871df: jne 0x6871e7 */ if (!fZ) goto L_006871e7;
L_006871e1:; BB(0x006871e1);
    /* 006871e1: call dword ptr [0x6b220c] */ { u32 t = R32((u32)(0x6b220cu)); r_esp -= 4; W32(r_esp, 0x6871e7u); call_ind(t); }
L_006871e7:; BB(0x006871e7);
    /* 006871e7: mov dword ptr [ebp - 4], 0xfffffffe */ W32((u32)(r_ebp+0xfffffffcu), 0xfffffffeu);
    /* 006871ee: mov eax, dword ptr [0x163186c] */ r_eax = R32((u32)(0x163186cu));
    /* 006871f3: jmp 0x687208 */ goto L_00687208;
L_006871fc:; BB(0x006871fc);
    /* 006871fc: mov dword ptr [ebp - 4], 0xfffffffe */ W32((u32)(r_ebp+0xfffffffcu), 0xfffffffeu);
    /* 00687203: mov eax, 0xff */ r_eax = 0xffu;
L_00687208:; BB(0x00687208);
    /* 00687208: call 0x6876d1 */ r_esp -= 4; W32(r_esp, 0x68720du); f_006876d1();
    /* 0068720d: ret  */ FN_RET(0x0068702f); r_esp += 4; return;
}

void f_0068720e(void) /* _pre_c_init */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068720e);
    /* 0068720e: cmp word ptr [0x400000], 0x5a4d */ {  u32 a = R16((u32)(0x400000u)); u32 b = 0x5a4du; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00687217: je 0x68721d */ if (fZ) goto L_0068721d;
L_00687219:; BB(0x00687219);
    /* 00687219: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068721b: jmp 0x68726e */ goto L_0068726e;
L_0068721d:; BB(0x0068721d);
    /* 0068721d: mov eax, dword ptr [0x40003c] */ r_eax = R32((u32)(0x40003cu));
    /* 00687222: cmp dword ptr [eax + 0x400000], 0x4550 */ {  u32 a = R32((u32)(r_eax+0x400000u)); u32 b = 0x4550u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068722c: jne 0x687219 */ if (!fZ) goto L_00687219;
L_0068722e:; BB(0x0068722e);
    /* 0068722e: movzx ecx, word ptr [eax + 0x400018] */ r_ecx = (u32)R16((u32)(r_eax+0x400018u));
    /* 00687235: cmp ecx, 0x10b */ {  u32 a = r_ecx; u32 b = 0x10bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068723b: je 0x687258 */ if (fZ) goto L_00687258;
L_0068723d:; BB(0x0068723d);
    /* 0068723d: cmp ecx, 0x20b */ {  u32 a = r_ecx; u32 b = 0x20bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00687243: jne 0x687219 */ if (!fZ) goto L_00687219;
L_00687245:; BB(0x00687245);
    /* 00687245: cmp dword ptr [eax + 0x400084], 0xe */ {  u32 a = R32((u32)(r_eax+0x400084u)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0068724c: jbe 0x687219 */ if ((fC||fZ)) goto L_00687219;
L_0068724e:; BB(0x0068724e);
    /* 0068724e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00687250: cmp dword ptr [eax + 0x4000f8], ecx */ {  u32 a = R32((u32)(r_eax+0x4000f8u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00687256: jmp 0x687269 */ goto L_00687269;
L_00687258:; BB(0x00687258);
    /* 00687258: cmp dword ptr [eax + 0x400074], 0xe */ {  u32 a = R32((u32)(r_eax+0x400074u)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0068725f: jbe 0x687219 */ if ((fC||fZ)) goto L_00687219;
L_00687261:; BB(0x00687261);
    /* 00687261: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00687263: cmp dword ptr [eax + 0x4000e8], ecx */ {  u32 a = R32((u32)(r_eax+0x4000e8u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
L_00687269:; BB(0x00687269);
    /* 00687269: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0068726c: mov eax, ecx */ r_eax = r_ecx;
L_0068726e:; BB(0x0068726e);
    /* 0068726e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00687270: mov dword ptr [0x1631860], eax */ W32((u32)(0x1631860u), r_eax);
    /* 00687275: call dword ptr [0x6b21c4] */ { u32 t = R32((u32)(0x6b21c4u)); r_esp -= 4; W32(r_esp, 0x68727bu); call_ind(t); }
    /* 0068727b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0068727d: call dword ptr [0x6b2140] */ { u32 t = R32((u32)(0x6b2140u)); r_esp -= 4; W32(r_esp, 0x687283u); call_ind(t); }
    /* 00687283: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00687284: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00687285: mov dword ptr [0x1631bf4], eax */ W32((u32)(0x1631bf4u), r_eax);
    /* 0068728a: mov dword ptr [0x1631bf8], eax */ W32((u32)(0x1631bf8u), r_eax);
    /* 0068728f: call dword ptr [0x6b21c0] */ { u32 t = R32((u32)(0x6b21c0u)); r_esp -= 4; W32(r_esp, 0x687295u); call_ind(t); }
    /* 00687295: mov ecx, dword ptr [0x1631bac] */ r_ecx = R32((u32)(0x1631bacu));
    /* 0068729b: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0068729d: call dword ptr [0x6b21bc] */ { u32 t = R32((u32)(0x6b21bcu)); r_esp -= 4; W32(r_esp, 0x6872a3u); call_ind(t); }
    /* 006872a3: mov ecx, dword ptr [0x1631ba8] */ r_ecx = R32((u32)(0x1631ba8u));
    /* 006872a9: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 006872ab: mov eax, dword ptr [0x6b21b8] */ r_eax = R32((u32)(0x6b21b8u));
    /* 006872b0: mov eax, dword ptr [eax] */ r_eax = 0x5a5a5a5au;   /* import thunk is a sentinel: seed the cookie without reading it */
    /* 006872b2: mov dword ptr [0x1631be0], eax */ W32((u32)(0x1631be0u), r_eax);
    /* 006872b7: call 0x687750 */ r_esp -= 4; W32(r_esp, 0x6872bcu); f_00687750();
    /* 006872bc: call 0x687911 */ r_esp -= 4; W32(r_esp, 0x6872c1u); f_00687911();
    /* 006872c1: cmp dword ptr [0x78188c], 0 */ {  u32 a = R32((u32)(0x78188cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006872c8: jne 0x6872d6 */ if (!fZ) goto L_006872d6;
L_006872ca:; BB(0x006872ca);
    /* 006872ca: push 0x687911 */ { u32 v = 0x687911u; r_esp -= 4; W32(r_esp, v); }
    /* 006872cf: call dword ptr [0x6b21b4] */ { u32 t = R32((u32)(0x6b21b4u)); r_esp -= 4; W32(r_esp, 0x6872d5u); call_ind(t); }
    /* 006872d5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006872d6:; BB(0x006872d6);
    /* 006872d6: call 0x6878e8 */ r_esp -= 4; W32(r_esp, 0x6872dbu); f_006878e8();
    /* 006872db: cmp dword ptr [0x781888], -1 */ {  u32 a = R32((u32)(0x781888u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006872e2: jne 0x6872ed */ if (!fZ) goto L_006872ed;
L_006872e4:; BB(0x006872e4);
    /* 006872e4: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006872e6: call dword ptr [0x6b21b0] */ { u32 t = R32((u32)(0x6b21b0u)); r_esp -= 4; W32(r_esp, 0x6872ecu); call_ind(t); }
    /* 006872ec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006872ed:; BB(0x006872ed);
    /* 006872ed: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006872ef: ret  */ FN_RET(0x0068720e); r_esp += 4; return;
}

void f_006872f0(void) /* start */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006872f0);
    /* 006872f0: call 0x687914 */ r_esp -= 4; W32(r_esp, 0x6872f5u); f_00687914();
    /* 006872f5: jmp 0x68702f */ f_0068702f(); return;
}

void f_00687340(void) /* __alloca_probe */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00687340);
    /* 00687340: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00687341: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00687345: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); }
    /* 00687347: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00687349: not eax */ r_eax = ~r_eax;
    /* 0068734b: and ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0068734d: mov eax, esp */ r_eax = r_esp;
    /* 0068734f: and eax, 0xfffff000 */ {  u32 a = r_eax; u32 b = 0xfffff000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
L_00687354:; BB(0x00687354);
    /* 00687354: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00687356: jb 0x687362 */ if (fC) goto L_00687362;
L_00687358:; BB(0x00687358);
    /* 00687358: mov eax, ecx */ r_eax = r_ecx;
    /* 0068735a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068735b: xchg esp, eax */ { u32 x = r_esp; u32 y = r_eax; r_esp = y; r_eax = x; }
    /* 0068735c: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0068735e: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00687361: ret  */ FN_RET(0x00687340); r_esp += 4; return;
L_00687362:; BB(0x00687362);
    /* 00687362: sub eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00687367: test dword ptr [eax], eax */ {  u32 a = R32((u32)(r_eax)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;   }
    /* 00687369: jmp 0x687354 */ goto L_00687354;
}

void f_0068736b(void) /* __except_handler4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068736b);
    /* 0068736b: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0068736f: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00687373: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00687377: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0068737b: push 0x686d72 */ { u32 v = 0x686d72u; r_esp -= 4; W32(r_esp, v); }
    /* 00687380: push 0x781870 */ { u32 v = 0x781870u; r_esp -= 4; W32(r_esp, v); }
    /* 00687385: call 0x6879a8 */ r_esp -= 4; W32(r_esp, 0x68738au); f_006879a8();
    /* 0068738a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068738d: ret  */ FN_RET(0x0068736b); r_esp += 4; return;
}

void f_006873a0(void) /* __alldiv */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006873a0);
    /* 006873a0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006873a1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006873a2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006873a3: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 006873a5: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 006873a9: or eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_eax = r; fS = ((r >> 31) & 1); fO = 0; }
    /* 006873ab: jge 0x6873c1 */ if ((fS==fO)) goto L_006873c1;
L_006873ad:; BB(0x006873ad);
    /* 006873ad: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006873ae: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 006873b2: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006873b4: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 006873b6: sbb eax, 0 */ { u32 c = fC; u32 a = r_eax; u32 b = 0x0u; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 006873b9: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 006873bd: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
L_006873c1:; BB(0x006873c1);
    /* 006873c1: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 006873c5: or eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_eax = r; fS = ((r >> 31) & 1); fO = 0; }
    /* 006873c7: jge 0x6873dd */ if ((fS==fO)) goto L_006873dd;
L_006873c9:; BB(0x006873c9);
    /* 006873c9: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006873ca: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 006873ce: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006873d0: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 006873d2: sbb eax, 0 */ { u32 c = fC; u32 a = r_eax; u32 b = 0x0u; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 006873d5: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 006873d9: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
L_006873dd:; BB(0x006873dd);
    /* 006873dd: or eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fA = (((a ^ b ^ r) & 0x10u) != 0); }
    /* 006873df: jne 0x6873f9 */ if (!fZ) goto L_006873f9;
L_006873e1:; BB(0x006873e1);
    /* 006873e1: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 006873e5: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 006873e9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006873eb: div ecx */ { u32 d = r_ecx; if (!d) UNSUP(0x006873eb, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x006873eb, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 006873ed: mov ebx, eax */ r_ebx = r_eax;
    /* 006873ef: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 006873f3: div ecx */ { u32 d = r_ecx; if (!d) UNSUP(0x006873f3, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x006873f3, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 006873f5: mov edx, ebx */ r_edx = r_ebx;
    /* 006873f7: jmp 0x68743a */ goto L_0068743a;
L_006873f9:; BB(0x006873f9);
    /* 006873f9: mov ebx, eax */ r_ebx = r_eax;
    /* 006873fb: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 006873ff: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00687403: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
L_00687407:; BB(0x00687407);
    /* 00687407: shr ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 00687409: rcr ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; while (c--) { u32 nc = a & 1; a = (a >> 1) | ((u32)fC << 31); fC = nc; } fO = ((a >> 31) ^ (a >> 30)) & 1; r_ecx = a; }
    /* 0068740b: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 0068740d: rcr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; while (c--) { u32 nc = a & 1; a = (a >> 1) | ((u32)fC << 31); fC = nc; } fO = ((a >> 31) ^ (a >> 30)) & 1; r_eax = a; }
    /* 0068740f: or ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fA = (((a ^ b ^ r) & 0x10u) != 0); }
    /* 00687411: jne 0x687407 */ if (!fZ) goto L_00687407;
L_00687413:; BB(0x00687413);
    /* 00687413: div ecx */ { u32 d = r_ecx; if (!d) UNSUP(0x00687413, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x00687413, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00687415: mov esi, eax */ r_esi = r_eax;
    /* 00687417: mul dword ptr [esp + 0x1c] */ { u64 t = (u64)r_eax * R32((u32)(r_esp+0x1cu)); r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 0068741b: mov ecx, eax */ r_ecx = r_eax;
    /* 0068741d: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00687421: mul esi */ { u64 t = (u64)r_eax * r_esi; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 00687423: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r; fC = (r < a); }
    /* 00687425: jb 0x687435 */ if (fC) goto L_00687435;
L_00687427:; BB(0x00687427);
    /* 00687427: cmp edx, dword ptr [esp + 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x14u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0068742b: ja 0x687435 */ if ((!fC&&!fZ)) goto L_00687435;
L_0068742d:; BB(0x0068742d);
    /* 0068742d: jb 0x687436 */ if (fC) goto L_00687436;
L_0068742f:; BB(0x0068742f);
    /* 0068742f: cmp eax, dword ptr [esp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00687433: jbe 0x687436 */ if ((fC||fZ)) goto L_00687436;
L_00687435:; BB(0x00687435);
    /* 00687435: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
L_00687436:; BB(0x00687436);
    /* 00687436: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00687438: mov eax, esi */ r_eax = r_esi;
L_0068743a:; BB(0x0068743a);
    /* 0068743a: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 0068743b: jne 0x687444 */ if (!fZ) goto L_00687444;
L_0068743d:; BB(0x0068743d);
    /* 0068743d: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0068743f: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 00687441: sbb edx, 0 */ { u32 c = fC; u32 a = r_edx; u32 b = 0x0u; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
L_00687444:; BB(0x00687444);
    /* 00687444: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00687445: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00687446: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00687447: ret 0x10 */ FN_RET(0x006873a0); r_esp += 20; return;
}

void f_00687460(void) /* __allmul */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00687460);
    /* 00687460: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00687464: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00687468: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0068746a: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0068746e: jne 0x687479 */ if (!fZ) goto L_00687479;
L_00687470:; BB(0x00687470);
    /* 00687470: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00687474: mul ecx */ { u64 t = (u64)r_eax * r_ecx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 00687476: ret 0x10 */ FN_RET(0x00687460); r_esp += 20; return;
L_00687479:; BB(0x00687479);
    /* 00687479: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068747a: mul ecx */ { u64 t = (u64)r_eax * r_ecx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 0068747c: mov ebx, eax */ r_ebx = r_eax;
    /* 0068747e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00687482: mul dword ptr [esp + 0x14] */ { u64 t = (u64)r_eax * R32((u32)(r_esp+0x14u)); r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 00687486: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00687488: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0068748c: mul ecx */ { u64 t = (u64)r_eax * r_ecx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 0068748e: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00687490: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00687491: ret 0x10 */ FN_RET(0x00687460); r_esp += 20; return;
}

void f_006874a0(void) /* __allshr */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006874a0);
    /* 006874a0: cmp cl, 0x40 */ {  u32 a = (u8)r_ecx; u32 b = 0x40u; u32 r = (a - b) & 0xffu;  fC = (a < b); }
    /* 006874a3: jae 0x6874bb */ if (!fC) goto L_006874bb;
L_006874a5:; BB(0x006874a5);
    /* 006874a5: cmp cl, 0x20 */ {  u32 a = (u8)r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 006874a8: jae 0x6874b0 */ if (!fC) goto L_006874b0;
L_006874aa:; BB(0x006874aa);
    /* 006874aa: shrd eax, edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 b = r_edx; u32 r = a; if (c) { r = (a >> c) | (b << (32 - c)); fC = (a >> (c - 1)) & 1; r_eax = r; fZ = (r == 0); fS = r >> 31; fP = !__builtin_parity(r & 0xffu); fO = ((r ^ a) >> 31) & 1; } }
    /* 006874ad: sar edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006874af: ret  */ FN_RET(0x006874a0); r_esp += 4; return;
L_006874b0:; BB(0x006874b0);
    /* 006874b0: mov eax, edx */ r_eax = r_edx;
    /* 006874b2: sar edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006874b5: and cl, 0x1f */ {  u32 a = (u8)r_ecx; u32 b = 0x1fu; u32 r = (a & b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 006874b8: sar eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 006874ba: ret  */ FN_RET(0x006874a0); r_esp += 4; return;
L_006874bb:; BB(0x006874bb);
    /* 006874bb: sar edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006874be: mov eax, edx */ r_eax = r_edx;
    /* 006874c0: ret  */ FN_RET(0x006874a0); r_esp += 4; return;
}

void f_006874c8(void) /* _has_osfxsr_set */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006874c8);
    /* 006874c8: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 006874ca: push 0x702b18 */ { u32 v = 0x702b18u; r_esp -= 4; W32(r_esp, v); }
    /* 006874cf: call 0x68768c */ r_esp -= 4; W32(r_esp, 0x6874d4u); f_0068768c();
    /* 006874d4: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 006874d8: movapd xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0] = s; }
    /* 006874dc: mov dword ptr [ebp - 0x1c], 1 */ W32((u32)(r_ebp+0xffffffe4u), 0x1u);
    /* 006874e3: jmp 0x687508 */ goto L_00687508;
L_00687508:; BB(0x00687508);
    /* 00687508: mov dword ptr [ebp - 4], 0xfffffffe */ W32((u32)(r_ebp+0xfffffffcu), 0xfffffffeu);
    /* 0068750f: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00687512: call 0x6876d1 */ r_esp -= 4; W32(r_esp, 0x687517u); f_006876d1();
    /* 00687517: ret  */ FN_RET(0x006874c8); r_esp += 4; return;
}

void f_00687518(void) /* __get_sse2_info */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00687518);
    /* 00687518: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00687519: mov ebp, esp */ r_ebp = r_esp;
    /* 0068751b: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068751e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00687520: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00687521: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00687524: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00687527: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0068752a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068752b: pushfd  */ { u32 v = 0x202u | rt_eflags_extra | (u32)fC | ((u32)fP << 2) | ((u32)fA << 4) | ((u32)fZ << 6) | ((u32)fS << 7) | ((u32)fO << 11); r_esp -= 4; W32(r_esp, v); }
    /* 0068752c: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
    /* 0068752d: mov ecx, eax */ r_ecx = r_eax;
    /* 0068752f: xor eax, 0x200000 */ {  u32 a = r_eax; u32 b = 0x200000u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00687534: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00687535: popfd  */ { u32 v = R32(r_esp); r_esp += 4; fC = v & 1; fP = (v >> 2) & 1; fA = (v >> 4) & 1; fZ = (v >> 6) & 1; fS = (v >> 7) & 1; fO = (v >> 11) & 1; rt_eflags_extra = v & 0x240000u; }
    /* 00687536: pushfd  */ { u32 v = 0x202u | rt_eflags_extra | (u32)fC | ((u32)fP << 2) | ((u32)fA << 4) | ((u32)fZ << 6) | ((u32)fS << 7) | ((u32)fO << 11); r_esp -= 4; W32(r_esp, v); }
    /* 00687537: pop edx */ { u32 v = R32(r_esp); r_esp += 4; r_edx = v; }
    /* 00687538: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0068753a: je 0x68755b */ if (fZ) goto L_0068755b;
L_0068753c:; BB(0x0068753c);
    /* 0068753c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068753d: popfd  */ { u32 v = R32(r_esp); r_esp += 4; fC = v & 1; fP = (v >> 2) & 1; fA = (v >> 4) & 1; fZ = (v >> 6) & 1; fS = (v >> 7) & 1; fO = (v >> 11) & 1; rt_eflags_extra = v & 0x240000u; }
    /* 0068753e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00687540: cpuid  */ { u32 a, b, c, d; rt_cpuid(r_eax, r_ecx, &a, &b, &c, &d); r_eax = a; r_ebx = b; r_ecx = c; r_edx = d; }
    /* 00687542: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00687545: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00687548: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0068754b: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0068754e: mov eax, 1 */ r_eax = 0x1u;
    /* 00687553: cpuid  */ { u32 a, b, c, d; rt_cpuid(r_eax, r_ecx, &a, &b, &c, &d); r_eax = a; r_ebx = b; r_ecx = c; r_edx = d; }
    /* 00687555: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00687558: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0068755b:; BB(0x0068755b);
    /* 0068755b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068755c: test dword ptr [ebp - 4], 0x4000000 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00687563: je 0x687573 */ if (fZ) goto L_00687573;
L_00687565:; BB(0x00687565);
    /* 00687565: call 0x6874c8 */ r_esp -= 4; W32(r_esp, 0x68756au); f_006874c8();
    /* 0068756a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068756c: je 0x687573 */ if (fZ) goto L_00687573;
L_0068756e:; BB(0x0068756e);
    /* 0068756e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00687570: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00687571: jmp 0x687575 */ goto L_00687575;
L_00687573:; BB(0x00687573);
    /* 00687573: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00687575:; BB(0x00687575);
    /* 00687575: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00687576: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00687577: ret  */ FN_RET(0x00687518); r_esp += 4; return;
}

void f_00687578(void) /* ___sse2_available_init */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00687578);
    /* 00687578: call 0x687518 */ r_esp -= 4; W32(r_esp, 0x68757du); f_00687518();
    /* 0068757d: mov dword ptr [0x1631bec], eax */ W32((u32)(0x1631becu), r_eax);
    /* 00687582: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00687584: ret  */ FN_RET(0x00687578); r_esp += 4; return;
}

void f_00687585(void) /* ___report_gsfailure */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00687585);
    /* 00687585: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00687586: mov ebp, esp */ r_ebp = r_esp;
    /* 00687588: sub esp, 0x328 */ {  u32 a = r_esp; u32 b = 0x328u; u32 r = (a - b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0068758e: mov dword ptr [0x1631980], eax */ W32((u32)(0x1631980u), r_eax);
    /* 00687593: mov dword ptr [0x163197c], ecx */ W32((u32)(0x163197cu), r_ecx);
    /* 00687599: mov dword ptr [0x1631978], edx */ W32((u32)(0x1631978u), r_edx);
    /* 0068759f: mov dword ptr [0x1631974], ebx */ W32((u32)(0x1631974u), r_ebx);
    /* 006875a5: mov dword ptr [0x1631970], esi */ W32((u32)(0x1631970u), r_esi);
    /* 006875ab: mov dword ptr [0x163196c], edi */ W32((u32)(0x163196cu), r_edi);
    /* 006875b1: mov word ptr [0x1631998], ss */ W16((u32)(0x1631998u), 0x2bu);
    /* 006875b8: mov word ptr [0x163198c], cs */ W16((u32)(0x163198cu), 0x23u);
    /* 006875bf: mov word ptr [0x1631968], ds */ W16((u32)(0x1631968u), 0x2bu);
    /* 006875c6: mov word ptr [0x1631964], es */ W16((u32)(0x1631964u), 0x2bu);
    /* 006875cd: mov word ptr [0x1631960], fs */ W16((u32)(0x1631960u), 0x53u);
    /* 006875d4: mov word ptr [0x163195c], gs */ W16((u32)(0x163195cu), 0x2bu);
    /* 006875db: pushfd  */ { u32 v = 0x202u | rt_eflags_extra | (u32)fC | ((u32)fP << 2) | ((u32)fA << 4) | ((u32)fZ << 6) | ((u32)fS << 7) | ((u32)fO << 11); r_esp -= 4; W32(r_esp, v); }
    /* 006875dc: pop dword ptr [0x1631990] */ { u32 v = R32(r_esp); r_esp += 4; W32((u32)(0x1631990u), v); }
    /* 006875e2: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 006875e5: mov dword ptr [0x1631984], eax */ W32((u32)(0x1631984u), r_eax);
    /* 006875ea: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 006875ed: mov dword ptr [0x1631988], eax */ W32((u32)(0x1631988u), r_eax);
    /* 006875f2: lea eax, [ebp + 8] */ r_eax = (u32)(r_ebp+0x8u);
    /* 006875f5: mov dword ptr [0x1631994], eax */ W32((u32)(0x1631994u), r_eax);
    /* 006875fa: mov eax, dword ptr [ebp - 0x320] */ r_eax = R32((u32)(r_ebp+0xfffffce0u));
    /* 00687600: mov dword ptr [0x16318d0], 0x10001 */ W32((u32)(0x16318d0u), 0x10001u);
    /* 0068760a: mov eax, dword ptr [0x1631988] */ r_eax = R32((u32)(0x1631988u));
    /* 0068760f: mov dword ptr [0x1631884], eax */ W32((u32)(0x1631884u), r_eax);
    /* 00687614: mov dword ptr [0x1631878], 0xc0000409 */ W32((u32)(0x1631878u), 0xc0000409u);
    /* 0068761e: mov dword ptr [0x163187c], 1 */ W32((u32)(0x163187cu), 0x1u);
    /* 00687628: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0068762d: mov dword ptr [ebp - 0x328], eax */ W32((u32)(r_ebp+0xfffffcd8u), r_eax);
    /* 00687633: mov eax, dword ptr [0x781874] */ r_eax = R32((u32)(0x781874u));
    /* 00687638: mov dword ptr [ebp - 0x324], eax */ W32((u32)(r_ebp+0xfffffcdcu), r_eax);
    /* 0068763e: call dword ptr [0x6b208c] */ { u32 t = R32((u32)(0x6b208cu)); r_esp -= 4; W32(r_esp, 0x687644u); call_ind(t); }
    /* 00687644: mov dword ptr [0x16318c8], eax */ W32((u32)(0x16318c8u), r_eax);
    /* 00687649: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0068764b: call 0x6879b4 */ r_esp -= 4; W32(r_esp, 0x687650u); f_006879b4();
    /* 00687650: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00687651: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00687653: call dword ptr [0x6b2090] */ { u32 t = R32((u32)(0x6b2090u)); r_esp -= 4; W32(r_esp, 0x687659u); call_ind(t); }
    /* 00687659: push 0x6e4fa8 */ { u32 v = 0x6e4fa8u; r_esp -= 4; W32(r_esp, v); }
    /* 0068765e: call dword ptr [0x6b2094] */ { u32 t = R32((u32)(0x6b2094u)); r_esp -= 4; W32(r_esp, 0x687664u); call_ind(t); }
    /* 00687664: cmp dword ptr [0x16318c8], 0 */ {  u32 a = R32((u32)(0x16318c8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068766b: jne 0x687675 */ if (!fZ) goto L_00687675;
L_0068766d:; BB(0x0068766d);
    /* 0068766d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0068766f: call 0x6879b4 */ r_esp -= 4; W32(r_esp, 0x687674u); f_006879b4();
    /* 00687674: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00687675:; BB(0x00687675);
    /* 00687675: push 0xc0000409 */ { u32 v = 0xc0000409u; r_esp -= 4; W32(r_esp, v); }
    /* 0068767a: call dword ptr [0x6b2098] */ { u32 t = R32((u32)(0x6b2098u)); r_esp -= 4; W32(r_esp, 0x687680u); call_ind(t); }
    /* 00687680: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00687681: call dword ptr [0x6b209c] */ { u32 t = R32((u32)(0x6b209cu)); r_esp -= 4; W32(r_esp, 0x687687u); call_ind(t); }
    /* 00687687: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00687688: ret  */ FN_RET(0x00687585); r_esp += 4; return;
}

void f_0068768c(void) /* __SEH_prolog4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068768c);
    /* 0068768c: push 0x68736b */ { u32 v = 0x68736bu; r_esp -= 4; W32(r_esp, v); }
    /* 00687691: push dword ptr fs:[0] */ { u32 v = R32((u32)(TEB)); r_esp -= 4; W32(r_esp, v); }
    /* 00687698: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0068769c: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 006876a0: lea ebp, [esp + 0x10] */ r_ebp = (u32)(r_esp+0x10u);
    /* 006876a4: sub esp, eax */ {  u32 a = r_esp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006876a6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006876a7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006876a8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006876a9: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 006876ae: xor dword ptr [ebp - 4], eax */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; W32(ad, r);  }
    /* 006876b1: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006876b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006876b4: mov dword ptr [ebp - 0x18], esp */ W32((u32)(r_ebp+0xffffffe8u), r_esp);
    /* 006876b7: push dword ptr [ebp - 8] */ { u32 v = R32((u32)(r_ebp+0xfffffff8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006876ba: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006876bd: mov dword ptr [ebp - 4], 0xfffffffe */ W32((u32)(r_ebp+0xfffffffcu), 0xfffffffeu);
    /* 006876c4: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 006876c7: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 006876ca: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 006876d0: ret  */ FN_RET(0x0068768c); r_esp += 4; return;
}

void f_006876d1(void) /* __SEH_epilog4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006876d1);
    /* 006876d1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006876d4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006876db: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006876dc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006876dd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006876de: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006876df: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006876e0: mov esp, ebp */ r_esp = r_ebp;
    /* 006876e2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006876e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006876e4: ret  */ FN_RET(0x006876d1); r_esp += 4; return;
}

void f_006876e6(void) /* ?terminate@@YAXXZ */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006876e6);
    /* 006876e6: jmp dword ptr [0x6b214c] */ { u32 t = R32((u32)(0x6b214cu)); call_ind(t); return; }
}

void f_006876fe(void) /* ?__CxxUnhandledExceptionFilter@@YGJPAU_EXCEPTION_POINTERS@@@Z */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006876fe);
    /* 006876fe: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00687702: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00687704: cmp dword ptr [eax], 0xe06d7363 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0xe06d7363u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068770a: jne 0x687736 */ if (!fZ) goto L_00687736;
L_0068770c:; BB(0x0068770c);
    /* 0068770c: cmp dword ptr [eax + 0x10], 3 */ {  u32 a = R32((u32)(r_eax+0x10u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00687710: jne 0x687736 */ if (!fZ) goto L_00687736;
L_00687712:; BB(0x00687712);
    /* 00687712: mov eax, dword ptr [eax + 0x14] */ r_eax = R32((u32)(r_eax+0x14u));
    /* 00687715: cmp eax, 0x19930520 */ {  u32 a = r_eax; u32 b = 0x19930520u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068771a: je 0x687731 */ if (fZ) goto L_00687731;
L_0068771c:; BB(0x0068771c);
    /* 0068771c: cmp eax, 0x19930521 */ {  u32 a = r_eax; u32 b = 0x19930521u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00687721: je 0x687731 */ if (fZ) goto L_00687731;
L_00687723:; BB(0x00687723);
    /* 00687723: cmp eax, 0x19930522 */ {  u32 a = r_eax; u32 b = 0x19930522u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00687728: je 0x687731 */ if (fZ) goto L_00687731;
L_0068772a:; BB(0x0068772a);
    /* 0068772a: cmp eax, 0x1994000 */ {  u32 a = r_eax; u32 b = 0x1994000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068772f: jne 0x687736 */ if (!fZ) goto L_00687736;
L_00687731:; BB(0x00687731);
    /* 00687731: call 0x6876e6 */ r_esp -= 4; W32(r_esp, 0x687736u); f_006876e6();
L_00687736:; BB(0x00687736);
    /* 00687736: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00687738: ret 4 */ FN_RET(0x006876fe); r_esp += 8; return;
}

void f_0068773b(void) /* ___CxxSetUnhandledExceptionFilter */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068773b);
    /* 0068773b: push 0x6876fe */ { u32 v = 0x6876feu; r_esp -= 4; W32(r_esp, v); }
    /* 00687740: call dword ptr [0x6b2090] */ { u32 t = R32((u32)(0x6b2090u)); r_esp -= 4; W32(r_esp, 0x687746u); call_ind(t); }
    /* 00687746: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00687748: ret  */ FN_RET(0x0068773b); r_esp += 4; return;
}

void f_006877a0(void) /* __ValidateImageBase */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006877a0);
    /* 006877a0: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 006877a4: cmp word ptr [ecx], 0x5a4d */ {  u32 a = R16((u32)(r_ecx)); u32 b = 0x5a4du; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 006877a9: je 0x6877ae */ if (fZ) goto L_006877ae;
L_006877ab:; BB(0x006877ab);
    /* 006877ab: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006877ad: ret  */ FN_RET(0x006877a0); r_esp += 4; return;
L_006877ae:; BB(0x006877ae);
    /* 006877ae: mov eax, dword ptr [ecx + 0x3c] */ r_eax = R32((u32)(r_ecx+0x3cu));
    /* 006877b1: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006877b3: cmp dword ptr [eax], 0x4550 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x4550u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006877b9: jne 0x6877ab */ if (!fZ) goto L_006877ab;
L_006877bb:; BB(0x006877bb);
    /* 006877bb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006877bd: cmp word ptr [eax + 0x18], 0x10b */ {  u32 a = R16((u32)(r_eax+0x18u)); u32 b = 0x10bu; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 006877c3: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 006877c6: mov eax, ecx */ r_eax = r_ecx;
    /* 006877c8: ret  */ FN_RET(0x006877a0); r_esp += 4; return;
}

void f_006877d0(void) /* __FindPESection */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006877d0);
    /* 006877d0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006877d4: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 006877d7: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006877d9: movzx eax, word ptr [ecx + 0x14] */ r_eax = (u32)R16((u32)(r_ecx+0x14u));
    /* 006877dd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006877de: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006877df: movzx esi, word ptr [ecx + 6] */ r_esi = (u32)R16((u32)(r_ecx+0x6u));
    /* 006877e3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006877e5: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 006877e7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006877e8: lea eax, [eax + ecx + 0x18] */ r_eax = (u32)(r_eax+r_ecx+0x18u);
    /* 006877ec: jbe 0x68780c */ if ((fC||fZ)) goto L_0068780c;
L_006877ee:; BB(0x006877ee);
    /* 006877ee: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
L_006877f2:; BB(0x006877f2);
    /* 006877f2: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 006877f5: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006877f7: jb 0x687802 */ if (fC) goto L_00687802;
L_006877f9:; BB(0x006877f9);
    /* 006877f9: mov ebx, dword ptr [eax + 8] */ r_ebx = R32((u32)(r_eax+0x8u));
    /* 006877fc: add ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006877fe: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00687800: jb 0x68780e */ if (fC) goto L_0068780e;
L_00687802:; BB(0x00687802);
    /* 00687802: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00687805: add eax, 0x28 */ {  u32 a = r_eax; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00687808: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0068780a: jb 0x6877f2 */ if (fC) goto L_006877f2;
L_0068780c:; BB(0x0068780c);
    /* 0068780c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0068780e:; BB(0x0068780e);
    /* 0068780e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068780f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00687810: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00687811: ret  */ FN_RET(0x006877d0); r_esp += 4; return;
}

void f_00687820(void) /* __IsNonwritableInCurrentImage */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00687820);
    /* 00687820: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00687821: mov ebp, esp */ r_ebp = r_esp;
    /* 00687823: push -2 */ { u32 v = 0xfffffffeu; r_esp -= 4; W32(r_esp, v); }
    /* 00687825: push 0x702b38 */ { u32 v = 0x702b38u; r_esp -= 4; W32(r_esp, v); }
    /* 0068782a: push 0x68736b */ { u32 v = 0x68736bu; r_esp -= 4; W32(r_esp, v); }
    /* 0068782f: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00687835: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00687836: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00687839: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068783a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068783b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068783c: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00687841: xor dword ptr [ebp - 8], eax */ { u32 ad = (u32)(r_ebp+0xfffffff8u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; W32(ad, r);  }
    /* 00687844: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00687846: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00687847: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 0068784a: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00687850: mov dword ptr [ebp - 0x18], esp */ W32((u32)(r_ebp+0xffffffe8u), r_esp);
    /* 00687853: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0068785a: push 0x400000 */ { u32 v = 0x400000u; r_esp -= 4; W32(r_esp, v); }
    /* 0068785f: call 0x6877a0 */ r_esp -= 4; W32(r_esp, 0x687864u); f_006877a0();
    /* 00687864: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00687867: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00687869: je 0x6878c0 */ if (fZ) goto L_006878c0;
L_0068786b:; BB(0x0068786b);
    /* 0068786b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068786e: sub eax, 0x400000 */ {  u32 a = r_eax; u32 b = 0x400000u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00687873: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00687874: push 0x400000 */ { u32 v = 0x400000u; r_esp -= 4; W32(r_esp, v); }
    /* 00687879: call 0x6877d0 */ r_esp -= 4; W32(r_esp, 0x68787eu); f_006877d0();
    /* 0068787e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00687881: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00687883: je 0x6878c0 */ if (fZ) goto L_006878c0;
L_00687885:; BB(0x00687885);
    /* 00687885: mov eax, dword ptr [eax + 0x24] */ r_eax = R32((u32)(r_eax+0x24u));
    /* 00687888: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0068788b: not eax */ r_eax = ~r_eax;
    /* 0068788d: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00687890: mov dword ptr [ebp - 4], 0xfffffffe */ W32((u32)(r_ebp+0xfffffffcu), 0xfffffffeu);
    /* 00687897: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068789a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006878a1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006878a2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006878a3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006878a4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006878a5: mov esp, ebp */ r_esp = r_ebp;
    /* 006878a7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006878a8: ret  */ FN_RET(0x00687820); r_esp += 4; return;
L_006878c0:; BB(0x006878c0);
    /* 006878c0: mov dword ptr [ebp - 4], 0xfffffffe */ W32((u32)(r_ebp+0xfffffffcu), 0xfffffffeu);
    /* 006878c7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006878c9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006878cc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006878d3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006878d4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006878d5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006878d6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006878d7: mov esp, ebp */ r_esp = r_ebp;
    /* 006878d9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006878da: ret  */ FN_RET(0x00687820); r_esp += 4; return;
}

void f_006878e8(void) /* __setdefaultprecision */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006878e8);
    /* 006878e8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006878e9: push 0x30000 */ { u32 v = 0x30000u; r_esp -= 4; W32(r_esp, v); }
    /* 006878ee: push 0x10000 */ { u32 v = 0x10000u; r_esp -= 4; W32(r_esp, v); }
    /* 006878f3: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 006878f5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006878f6: call 0x6879c0 */ r_esp -= 4; W32(r_esp, 0x6878fbu); f_006879c0();
    /* 006878fb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006878fe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00687900: je 0x68790f */ if (fZ) goto L_0068790f;
L_00687902:; BB(0x00687902);
    /* 00687902: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00687903: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00687904: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00687905: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00687906: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00687907: call 0x6879ba */ r_esp -= 4; W32(r_esp, 0x68790cu); f_006879ba();
    /* 0068790c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0068790f:; BB(0x0068790f);
    /* 0068790f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00687910: ret  */ FN_RET(0x006878e8); r_esp += 4; return;
}

void f_00687914(void) /* ___security_init_cookie */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00687914);
    /* 00687914: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00687915: mov ebp, esp */ r_ebp = r_esp;
    /* 00687917: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068791a: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0068791f: and dword ptr [ebp - 8], 0 */ { u32 ad = (u32)(r_ebp+0xfffffff8u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00687923: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00687927: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00687928: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00687929: mov edi, 0xbb40e64e */ r_edi = 0xbb40e64eu;
    /* 0068792e: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00687930: mov ebx, 0xffff0000 */ r_ebx = 0xffff0000u;
    /* 00687935: je 0x687944 */ if (fZ) goto L_00687944;
L_00687937:; BB(0x00687937);
    /* 00687937: test ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00687939: je 0x687944 */ if (fZ) goto L_00687944;
L_0068793b:; BB(0x0068793b);
    /* 0068793b: not eax */ r_eax = ~r_eax;
    /* 0068793d: mov dword ptr [0x781874], eax */ W32((u32)(0x781874u), r_eax);
    /* 00687942: jmp 0x6879a4 */ goto L_006879a4;
L_00687944:; BB(0x00687944);
    /* 00687944: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00687945: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 00687948: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00687949: call dword ptr [0x6b207c] */ { u32 t = R32((u32)(0x6b207cu)); r_esp -= 4; W32(r_esp, 0x68794fu); call_ind(t); }
    /* 0068794f: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 00687952: xor esi, dword ptr [ebp - 8] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00687955: call dword ptr [0x6b2080] */ { u32 t = R32((u32)(0x6b2080u)); r_esp -= 4; W32(r_esp, 0x68795bu); call_ind(t); }
    /* 0068795b: xor esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0068795d: call dword ptr [0x6b2084] */ { u32 t = R32((u32)(0x6b2084u)); r_esp -= 4; W32(r_esp, 0x687963u); call_ind(t); }
    /* 00687963: xor esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00687965: call dword ptr [0x6b20bc] */ { u32 t = R32((u32)(0x6b20bcu)); r_esp -= 4; W32(r_esp, 0x68796bu); call_ind(t); }
    /* 0068796b: xor esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0068796d: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 00687970: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00687971: call dword ptr [0x6b2088] */ { u32 t = R32((u32)(0x6b2088u)); r_esp -= 4; W32(r_esp, 0x687977u); call_ind(t); }
    /* 00687977: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0068797a: xor eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068797d: xor esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0068797f: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00687981: jne 0x68798a */ if (!fZ) goto L_0068798a;
L_00687983:; BB(0x00687983);
    /* 00687983: mov esi, 0xbb40e64f */ r_esi = 0xbb40e64fu;
    /* 00687988: jmp 0x687995 */ goto L_00687995;
L_0068798a:; BB(0x0068798a);
    /* 0068798a: test ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068798c: jne 0x687995 */ if (!fZ) goto L_00687995;
L_0068798e:; BB(0x0068798e);
    /* 0068798e: mov eax, esi */ r_eax = r_esi;
    /* 00687990: shl eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00687993: or esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
L_00687995:; BB(0x00687995);
    /* 00687995: mov dword ptr [0x781870], esi */ W32((u32)(0x781870u), r_esi);
    /* 0068799b: not esi */ r_esi = ~r_esi;
    /* 0068799d: mov dword ptr [0x781874], esi */ W32((u32)(0x781874u), r_esi);
    /* 006879a3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
L_006879a4:; BB(0x006879a4);
    /* 006879a4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006879a5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006879a6: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 006879a7: ret  */ FN_RET(0x00687914); r_esp += 4; return;
}

void f_00689720(void) /* ??_G_com_error@@UAEPAXI@Z_412 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00689720);
    /* 00689720: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00689721: mov ebp, esp */ r_ebp = r_esp;
    /* 00689723: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00689724: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00689727: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068972a: call 0x688ca0 */ r_esp -= 4; W32(r_esp, 0x68972fu); f_00688ca0();
    /* 0068972f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00689732: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00689735: je 0x689743 */ if (fZ) goto L_00689743;
L_00689737:; BB(0x00689737);
    /* 00689737: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068973a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068973b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x689740u); f_00686cae();
    /* 00689740: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00689743:; BB(0x00689743);
    /* 00689743: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00689746: mov esp, ebp */ r_esp = r_ebp;
    /* 00689748: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00689749: ret 4 */ FN_RET(0x00689720); r_esp += 8; return;
}

void f_00689d80(void) /* ??_G_com_error@@UAEPAXI@Z_413 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00689d80);
    /* 00689d80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00689d81: mov ebp, esp */ r_ebp = r_esp;
    /* 00689d83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00689d84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00689d87: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00689d8a: call 0x6898a0 */ r_esp -= 4; W32(r_esp, 0x689d8fu); f_006898a0();
    /* 00689d8f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00689d92: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00689d95: je 0x689da3 */ if (fZ) goto L_00689da3;
L_00689d97:; BB(0x00689d97);
    /* 00689d97: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00689d9a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00689d9b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x689da0u); f_00686cae();
    /* 00689da0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00689da3:; BB(0x00689da3);
    /* 00689da3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00689da6: mov esp, ebp */ r_esp = r_ebp;
    /* 00689da8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00689da9: ret 4 */ FN_RET(0x00689d80); r_esp += 8; return;
}

void f_00689df0(void) /* ??1CExpandoObject@@UAE@XZ_141 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00689df0);
    /* 00689df0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00689df1: mov ebp, esp */ r_ebp = r_esp;
    /* 00689df3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00689df4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00689df7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00689dfa: mov dword ptr [eax], 0x6e55f8 */ W32((u32)(r_eax), 0x6e55f8u);
    /* 00689e00: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00689e03: call 0x62aef0 */ r_esp -= 4; W32(r_esp, 0x689e08u); f_0062aef0();
    /* 00689e08: mov esp, ebp */ r_esp = r_ebp;
    /* 00689e0a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00689e0b: ret  */ FN_RET(0x00689df0); r_esp += 4; return;
}

void f_00689e80(void) /* ??_G_com_error@@UAEPAXI@Z_414 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00689e80);
    /* 00689e80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00689e81: mov ebp, esp */ r_ebp = r_esp;
    /* 00689e83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00689e84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00689e87: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00689e8a: call 0x689df0 */ r_esp -= 4; W32(r_esp, 0x689e8fu); f_00689df0();
    /* 00689e8f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00689e92: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00689e95: je 0x689ea3 */ if (fZ) goto L_00689ea3;
L_00689e97:; BB(0x00689e97);
    /* 00689e97: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00689e9a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00689e9b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x689ea0u); f_00686cae();
    /* 00689ea0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00689ea3:; BB(0x00689ea3);
    /* 00689ea3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00689ea6: mov esp, ebp */ r_esp = r_ebp;
    /* 00689ea8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00689ea9: ret 4 */ FN_RET(0x00689e80); r_esp += 8; return;
}

void f_00689eb0(void) /* ??_G_com_error@@UAEPAXI@Z_415 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00689eb0);
    /* 00689eb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00689eb1: mov ebp, esp */ r_ebp = r_esp;
    /* 00689eb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00689eb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00689eb7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00689eba: call 0x62aef0 */ r_esp -= 4; W32(r_esp, 0x689ebfu); f_0062aef0();
    /* 00689ebf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00689ec2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00689ec5: je 0x689ed3 */ if (fZ) goto L_00689ed3;
L_00689ec7:; BB(0x00689ec7);
    /* 00689ec7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00689eca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00689ecb: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x689ed0u); f_00686cae();
    /* 00689ed0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00689ed3:; BB(0x00689ed3);
    /* 00689ed3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00689ed6: mov esp, ebp */ r_esp = r_ebp;
    /* 00689ed8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00689ed9: ret 4 */ FN_RET(0x00689eb0); r_esp += 8; return;
}

void f_0068b6d0(void) /* ??_G_com_error@@UAEPAXI@Z_416 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068b6d0);
    /* 0068b6d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068b6d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0068b6d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068b6d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0068b6d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068b6da: call 0x68a0d0 */ r_esp -= 4; W32(r_esp, 0x68b6dfu); f_0068a0d0();
    /* 0068b6df: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068b6e2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0068b6e5: je 0x68b6f3 */ if (fZ) goto L_0068b6f3;
L_0068b6e7:; BB(0x0068b6e7);
    /* 0068b6e7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068b6ea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068b6eb: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x68b6f0u); f_00686cae();
    /* 0068b6f0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0068b6f3:; BB(0x0068b6f3);
    /* 0068b6f3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068b6f6: mov esp, ebp */ r_esp = r_ebp;
    /* 0068b6f8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068b6f9: ret 4 */ FN_RET(0x0068b6d0); r_esp += 8; return;
}

void f_0068fc3e(void) /* _WinMain@16_137 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068fc3e);
    /* 0068fc3e: jmp 0x68fe29 */ f_0068fe29(); return;
}

void f_0068fc73(void) /* _WinMain@16_138 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068fc73);
    /* 0068fc73: jmp 0x68fe29 */ f_0068fe29(); return;
}

void f_0068fe29(void) /* _WinMain@16_137_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068fe29);
    /* 0068fe29: mov esp, ebp */ r_esp = r_ebp;
    /* 0068fe2b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068fe2c: ret 8 */ FN_RET(0x0068fe29); r_esp += 12; return;
}

void f_00690620(void) /* ??_G_com_error@@UAEPAXI@Z_417 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00690620);
    /* 00690620: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00690621: mov ebp, esp */ r_ebp = r_esp;
    /* 00690623: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00690624: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00690627: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0069062a: call 0x68fb70 */ r_esp -= 4; W32(r_esp, 0x69062fu); f_0068fb70();
    /* 0069062f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00690632: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00690635: je 0x690643 */ if (fZ) goto L_00690643;
L_00690637:; BB(0x00690637);
    /* 00690637: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0069063a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069063b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x690640u); f_00686cae();
    /* 00690640: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00690643:; BB(0x00690643);
    /* 00690643: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00690646: mov esp, ebp */ r_esp = r_ebp;
    /* 00690648: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00690649: ret 4 */ FN_RET(0x00690620); r_esp += 8; return;
}

void f_00699e32(void) /* _WinMain@16_139 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00699e32);
    /* 00699e32: jmp 0x699e40 */ f_00699e40(); return;
}

void f_006afb40(void) /* unknown_libname_665 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006afb40);
    /* 006afb40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006afb41: mov ebp, esp */ r_ebp = r_esp;
    /* 006afb43: mov ecx, 0x792f88 */ r_ecx = 0x792f88u;
    /* 006afb48: call 0x464110 */ r_esp -= 4; W32(r_esp, 0x6afb4du); f_00464110();
    /* 006afb4d: push 0x6b1ae0 */ { u32 v = 0x6b1ae0u; r_esp -= 4; W32(r_esp, v); }
    /* 006afb52: call 0x686f8f */ r_esp -= 4; W32(r_esp, 0x6afb57u); f_00686f8f();
    /* 006afb57: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006afb5a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006afb5b: ret  */ FN_RET(0x006afb40); r_esp += 4; return;
}

void f_006afb60(void) /* __cfltcvt_init_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006afb60);
    /* 006afb60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006afb61: mov ebp, esp */ r_ebp = r_esp;
    /* 006afb63: mov dword ptr [0x793618], 5 */ W32((u32)(0x793618u), 0x5u);
    /* 006afb6d: mov dword ptr [0x79361c], 3 */ W32((u32)(0x79361cu), 0x3u);
    /* 006afb77: mov dword ptr [0x793620], 0xf */ W32((u32)(0x793620u), 0xfu);
    /* 006afb81: mov dword ptr [0x793624], 3 */ W32((u32)(0x793624u), 0x3u);
    /* 006afb8b: mov dword ptr [0x793628], 0x75c998 */ W32((u32)(0x793628u), 0x75c998u);
    /* 006afb95: mov dword ptr [0x79362c], 9 */ W32((u32)(0x79362cu), 0x9u);
    /* 006afb9f: mov dword ptr [0x793630], 1 */ W32((u32)(0x793630u), 0x1u);
    /* 006afba9: mov dword ptr [0x793634], 0x75cce0 */ W32((u32)(0x793634u), 0x75cce0u);
    /* 006afbb3: mov dword ptr [0x793638], 0xffffffff */ W32((u32)(0x793638u), 0xffffffffu);
    /* 006afbbd: mov dword ptr [0x79363c], 6 */ W32((u32)(0x79363cu), 0x6u);
    /* 006afbc7: mov dword ptr [0x793640], 7 */ W32((u32)(0x793640u), 0x7u);
    /* 006afbd1: mov dword ptr [0x793644], 5 */ W32((u32)(0x793644u), 0x5u);
    /* 006afbdb: mov dword ptr [0x793648], 7 */ W32((u32)(0x793648u), 0x7u);
    /* 006afbe5: mov dword ptr [0x79364c], 7 */ W32((u32)(0x79364cu), 0x7u);
    /* 006afbef: mov dword ptr [0x793650], 8 */ W32((u32)(0x793650u), 0x8u);
    /* 006afbf9: mov dword ptr [0x793654], 6 */ W32((u32)(0x793654u), 0x6u);
    /* 006afc03: mov dword ptr [0x793658], 8 */ W32((u32)(0x793658u), 0x8u);
    /* 006afc0d: mov dword ptr [0x79365c], 2 */ W32((u32)(0x79365cu), 0x2u);
    /* 006afc17: mov dword ptr [0x793660], 8 */ W32((u32)(0x793660u), 0x8u);
    /* 006afc21: mov dword ptr [0x793664], 1 */ W32((u32)(0x793664u), 0x1u);
    /* 006afc2b: mov dword ptr [0x793668], 4 */ W32((u32)(0x793668u), 0x4u);
    /* 006afc35: mov dword ptr [0x79366c], 6 */ W32((u32)(0x79366cu), 0x6u);
    /* 006afc3f: mov dword ptr [0x793670], 8 */ W32((u32)(0x793670u), 0x8u);
    /* 006afc49: mov dword ptr [0x793674], 7 */ W32((u32)(0x793674u), 0x7u);
    /* 006afc53: mov dword ptr [0x793678], 3 */ W32((u32)(0x793678u), 0x3u);
    /* 006afc5d: mov dword ptr [0x79367c], 9 */ W32((u32)(0x79367cu), 0x9u);
    /* 006afc67: mov dword ptr [0x793680], 0xffffffff */ W32((u32)(0x793680u), 0xffffffffu);
    /* 006afc71: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 006afc73: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006afc75: push 0x793684 */ { u32 v = 0x793684u; r_esp -= 4; W32(r_esp, v); }
    /* 006afc7a: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x6afc7fu); f_00686fa2();
    /* 006afc7f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006afc82: mov dword ptr [0x7936b4], 0xffffffff */ W32((u32)(0x7936b4u), 0xffffffffu);
    /* 006afc8c: mov dword ptr [0x7936b8], 1 */ W32((u32)(0x7936b8u), 0x1u);
    /* 006afc96: mov dword ptr [0x7936bc], 2 */ W32((u32)(0x7936bcu), 0x2u);
    /* 006afca0: mov dword ptr [0x7936c0], 6 */ W32((u32)(0x7936c0u), 0x6u);
    /* 006afcaa: mov dword ptr [0x7936c4], 6 */ W32((u32)(0x7936c4u), 0x6u);
    /* 006afcb4: mov dword ptr [0x7936c8], 7 */ W32((u32)(0x7936c8u), 0x7u);
    /* 006afcbe: mov dword ptr [0x7936cc], 3 */ W32((u32)(0x7936ccu), 0x3u);
    /* 006afcc8: mov dword ptr [0x7936d0], 6 */ W32((u32)(0x7936d0u), 0x6u);
    /* 006afcd2: mov dword ptr [0x7936d4], 8 */ W32((u32)(0x7936d4u), 0x8u);
    /* 006afcdc: mov dword ptr [0x7936d8], 7 */ W32((u32)(0x7936d8u), 0x7u);
    /* 006afce6: mov dword ptr [0x7936dc], 7 */ W32((u32)(0x7936dcu), 0x7u);
    /* 006afcf0: mov dword ptr [0x7936e0], 5 */ W32((u32)(0x7936e0u), 0x5u);
    /* 006afcfa: mov dword ptr [0x7936e4], 8 */ W32((u32)(0x7936e4u), 0x8u);
    /* 006afd04: mov dword ptr [0x7936e8], 7 */ W32((u32)(0x7936e8u), 0x7u);
    /* 006afd0e: mov dword ptr [0x7936ec], 8 */ W32((u32)(0x7936ecu), 0x8u);
    /* 006afd18: mov dword ptr [0x7936f0], 4 */ W32((u32)(0x7936f0u), 0x4u);
    /* 006afd22: mov dword ptr [0x7936f4], 8 */ W32((u32)(0x7936f4u), 0x8u);
    /* 006afd2c: mov dword ptr [0x7936f8], 0xffffffff */ W32((u32)(0x7936f8u), 0xffffffffu);
    /* 006afd36: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 006afd38: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006afd3a: push 0x7936fc */ { u32 v = 0x7936fcu; r_esp -= 4; W32(r_esp, v); }
    /* 006afd3f: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x6afd44u); f_00686fa2();
    /* 006afd44: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006afd47: mov dword ptr [0x793730], 0xffffffff */ W32((u32)(0x793730u), 0xffffffffu);
    /* 006afd51: mov dword ptr [0x793734], 4 */ W32((u32)(0x793734u), 0x4u);
    /* 006afd5b: mov dword ptr [0x793738], 8 */ W32((u32)(0x793738u), 0x8u);
    /* 006afd65: mov dword ptr [0x79373c], 6 */ W32((u32)(0x79373cu), 0x6u);
    /* 006afd6f: mov dword ptr [0x793740], 6 */ W32((u32)(0x793740u), 0x6u);
    /* 006afd79: mov dword ptr [0x793744], 3 */ W32((u32)(0x793744u), 0x3u);
    /* 006afd83: mov dword ptr [0x793748], 8 */ W32((u32)(0x793748u), 0x8u);
    /* 006afd8d: mov dword ptr [0x79374c], 8 */ W32((u32)(0x79374cu), 0x8u);
    /* 006afd97: mov dword ptr [0x793750], 2 */ W32((u32)(0x793750u), 0x2u);
    /* 006afda1: mov dword ptr [0x793754], 7 */ W32((u32)(0x793754u), 0x7u);
    /* 006afdab: mov dword ptr [0x793758], 9 */ W32((u32)(0x793758u), 0x9u);
    /* 006afdb5: mov dword ptr [0x79375c], 7 */ W32((u32)(0x79375cu), 0x7u);
    /* 006afdbf: mov dword ptr [0x793760], 7 */ W32((u32)(0x793760u), 0x7u);
    /* 006afdc9: mov dword ptr [0x793764], 5 */ W32((u32)(0x793764u), 0x5u);
    /* 006afdd3: mov dword ptr [0x793768], 6 */ W32((u32)(0x793768u), 0x6u);
    /* 006afddd: mov dword ptr [0x79376c], 7 */ W32((u32)(0x79376cu), 0x7u);
    /* 006afde7: mov dword ptr [0x793770], 8 */ W32((u32)(0x793770u), 0x8u);
    /* 006afdf1: mov dword ptr [0x793774], 1 */ W32((u32)(0x793774u), 0x1u);
    /* 006afdfb: mov dword ptr [0x793778], 0xffffffff */ W32((u32)(0x793778u), 0xffffffffu);
    /* 006afe05: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 006afe07: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006afe09: push 0x79377c */ { u32 v = 0x79377cu; r_esp -= 4; W32(r_esp, v); }
    /* 006afe0e: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x6afe13u); f_00686fa2();
    /* 006afe13: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006afe16: mov dword ptr [0x7937ac], 0xffffffff */ W32((u32)(0x7937acu), 0xffffffffu);
    /* 006afe20: mov dword ptr [0x7937b0], 5 */ W32((u32)(0x7937b0u), 0x5u);
    /* 006afe2a: mov dword ptr [0x7937b4], 7 */ W32((u32)(0x7937b4u), 0x7u);
    /* 006afe34: mov dword ptr [0x7937b8], 3 */ W32((u32)(0x7937b8u), 0x3u);
    /* 006afe3e: mov dword ptr [0x7937bc], 8 */ W32((u32)(0x7937bcu), 0x8u);
    /* 006afe48: mov dword ptr [0x7937c0], 2 */ W32((u32)(0x7937c0u), 0x2u);
    /* 006afe52: mov dword ptr [0x7937c4], 6 */ W32((u32)(0x7937c4u), 0x6u);
    /* 006afe5c: mov dword ptr [0x7937c8], 7 */ W32((u32)(0x7937c8u), 0x7u);
    /* 006afe66: mov dword ptr [0x7937cc], 7 */ W32((u32)(0x7937ccu), 0x7u);
    /* 006afe70: mov dword ptr [0x7937d0], 8 */ W32((u32)(0x7937d0u), 0x8u);
    /* 006afe7a: mov dword ptr [0x7937d4], 4 */ W32((u32)(0x7937d4u), 0x4u);
    /* 006afe84: mov dword ptr [0x7937d8], 8 */ W32((u32)(0x7937d8u), 0x8u);
    /* 006afe8e: mov dword ptr [0x7937dc], 8 */ W32((u32)(0x7937dcu), 0x8u);
    /* 006afe98: mov dword ptr [0x7937e0], 7 */ W32((u32)(0x7937e0u), 0x7u);
    /* 006afea2: mov dword ptr [0x7937e4], 1 */ W32((u32)(0x7937e4u), 0x1u);
    /* 006afeac: mov dword ptr [0x7937e8], 6 */ W32((u32)(0x7937e8u), 0x6u);
    /* 006afeb6: mov dword ptr [0x7937ec], 6 */ W32((u32)(0x7937ecu), 0x6u);
    /* 006afec0: mov dword ptr [0x7937f0], 0xffffffff */ W32((u32)(0x7937f0u), 0xffffffffu);
    /* 006afeca: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 006afecc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006afece: push 0x7937f4 */ { u32 v = 0x7937f4u; r_esp -= 4; W32(r_esp, v); }
    /* 006afed3: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x6afed8u); f_00686fa2();
    /* 006afed8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006afedb: mov dword ptr [0x793828], 0xffffffff */ W32((u32)(0x793828u), 0xffffffffu);
    /* 006afee5: mov dword ptr [0x79382c], 7 */ W32((u32)(0x79382cu), 0x7u);
    /* 006afeef: mov dword ptr [0x793830], 2 */ W32((u32)(0x793830u), 0x2u);
    /* 006afef9: mov dword ptr [0x793834], 8 */ W32((u32)(0x793834u), 0x8u);
    /* 006aff03: mov dword ptr [0x793838], 9 */ W32((u32)(0x793838u), 0x9u);
    /* 006aff0d: mov dword ptr [0x79383c], 4 */ W32((u32)(0x79383cu), 0x4u);
    /* 006aff17: mov dword ptr [0x793840], 7 */ W32((u32)(0x793840u), 0x7u);
    /* 006aff21: mov dword ptr [0x793844], 1 */ W32((u32)(0x793844u), 0x1u);
    /* 006aff2b: mov dword ptr [0x793848], 8 */ W32((u32)(0x793848u), 0x8u);
    /* 006aff35: mov dword ptr [0x79384c], 7 */ W32((u32)(0x79384cu), 0x7u);
    /* 006aff3f: mov dword ptr [0x793850], 6 */ W32((u32)(0x793850u), 0x6u);
    /* 006aff49: mov dword ptr [0x793854], 6 */ W32((u32)(0x793854u), 0x6u);
    /* 006aff53: mov dword ptr [0x793858], 5 */ W32((u32)(0x793858u), 0x5u);
    /* 006aff5d: mov dword ptr [0x79385c], 8 */ W32((u32)(0x79385cu), 0x8u);
    /* 006aff67: mov dword ptr [0x793860], 6 */ W32((u32)(0x793860u), 0x6u);
    /* 006aff71: mov dword ptr [0x793864], 3 */ W32((u32)(0x793864u), 0x3u);
    /* 006aff7b: mov dword ptr [0x793868], 7 */ W32((u32)(0x793868u), 0x7u);
    /* 006aff85: mov dword ptr [0x79386c], 8 */ W32((u32)(0x79386cu), 0x8u);
    /* 006aff8f: mov dword ptr [0x793870], 0xffffffff */ W32((u32)(0x793870u), 0xffffffffu);
    /* 006aff99: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 006aff9b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006aff9d: push 0x793874 */ { u32 v = 0x793874u; r_esp -= 4; W32(r_esp, v); }
    /* 006affa2: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x6affa7u); f_00686fa2();
    /* 006affa7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006affaa: push 0xf8 */ { u32 v = 0xf8u; r_esp -= 4; W32(r_esp, v); }
    /* 006affaf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006affb1: push 0x7938a4 */ { u32 v = 0x7938a4u; r_esp -= 4; W32(r_esp, v); }
    /* 006affb6: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x6affbbu); f_00686fa2();
    /* 006affbb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006affbe: mov dword ptr [0x79399c], 5 */ W32((u32)(0x79399cu), 0x5u);
    /* 006affc8: mov dword ptr [0x7939a0], 3 */ W32((u32)(0x7939a0u), 0x3u);
    /* 006affd2: mov dword ptr [0x7939a4], 0xf */ W32((u32)(0x7939a4u), 0xfu);
    /* 006affdc: mov dword ptr [0x7939a8], 3 */ W32((u32)(0x7939a8u), 0x3u);
    /* 006affe6: mov dword ptr [0x7939ac], 0x75c998 */ W32((u32)(0x7939acu), 0x75c998u);
    /* 006afff0: mov dword ptr [0x7939b0], 9 */ W32((u32)(0x7939b0u), 0x9u);
    /* 006afffa: mov dword ptr [0x7939b4], 1 */ W32((u32)(0x7939b4u), 0x1u);
    /* 006b0004: mov dword ptr [0x7939b8], 0x75ce00 */ W32((u32)(0x7939b8u), 0x75ce00u);
    /* 006b000e: mov dword ptr [0x7939bc], 0xffffffff */ W32((u32)(0x7939bcu), 0xffffffffu);
    /* 006b0018: mov dword ptr [0x7939c0], 2 */ W32((u32)(0x7939c0u), 0x2u);
    /* 006b0022: mov dword ptr [0x7939c4], 7 */ W32((u32)(0x7939c4u), 0x7u);
    /* 006b002c: mov dword ptr [0x7939c8], 7 */ W32((u32)(0x7939c8u), 0x7u);
    /* 006b0036: mov dword ptr [0x7939cc], 3 */ W32((u32)(0x7939ccu), 0x3u);
    /* 006b0040: mov dword ptr [0x7939d0], 8 */ W32((u32)(0x7939d0u), 0x8u);
    /* 006b004a: mov dword ptr [0x7939d4], 1 */ W32((u32)(0x7939d4u), 0x1u);
    /* 006b0054: mov dword ptr [0x7939d8], 5 */ W32((u32)(0x7939d8u), 0x5u);
    /* 006b005e: mov dword ptr [0x7939dc], 6 */ W32((u32)(0x7939dcu), 0x6u);
    /* 006b0068: mov dword ptr [0x7939e0], 8 */ W32((u32)(0x7939e0u), 0x8u);
    /* 006b0072: mov dword ptr [0x7939e4], 7 */ W32((u32)(0x7939e4u), 0x7u);
    /* 006b007c: mov dword ptr [0x7939e8], 6 */ W32((u32)(0x7939e8u), 0x6u);
    /* 006b0086: mov dword ptr [0x7939ec], 9 */ W32((u32)(0x7939ecu), 0x9u);
    /* 006b0090: mov dword ptr [0x7939f0], 6 */ W32((u32)(0x7939f0u), 0x6u);
    /* 006b009a: mov dword ptr [0x7939f4], 4 */ W32((u32)(0x7939f4u), 0x4u);
    /* 006b00a4: mov dword ptr [0x7939f8], 7 */ W32((u32)(0x7939f8u), 0x7u);
    /* 006b00ae: mov dword ptr [0x7939fc], 8 */ W32((u32)(0x7939fcu), 0x8u);
    /* 006b00b8: mov dword ptr [0x793a00], 8 */ W32((u32)(0x793a00u), 0x8u);
    /* 006b00c2: mov dword ptr [0x793a04], 0xffffffff */ W32((u32)(0x793a04u), 0xffffffffu);
    /* 006b00cc: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 006b00ce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006b00d0: push 0x793a08 */ { u32 v = 0x793a08u; r_esp -= 4; W32(r_esp, v); }
    /* 006b00d5: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x6b00dau); f_00686fa2();
    /* 006b00da: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b00dd: mov dword ptr [0x793a38], 0xffffffff */ W32((u32)(0x793a38u), 0xffffffffu);
    /* 006b00e7: mov dword ptr [0x793a3c], 6 */ W32((u32)(0x793a3cu), 0x6u);
    /* 006b00f1: mov dword ptr [0x793a40], 1 */ W32((u32)(0x793a40u), 0x1u);
    /* 006b00fb: mov dword ptr [0x793a44], 8 */ W32((u32)(0x793a44u), 0x8u);
    /* 006b0105: mov dword ptr [0x793a48], 6 */ W32((u32)(0x793a48u), 0x6u);
    /* 006b010f: mov dword ptr [0x793a4c], 7 */ W32((u32)(0x793a4cu), 0x7u);
    /* 006b0119: mov dword ptr [0x793a50], 8 */ W32((u32)(0x793a50u), 0x8u);
    /* 006b0123: mov dword ptr [0x793a54], 2 */ W32((u32)(0x793a54u), 0x2u);
    /* 006b012d: mov dword ptr [0x793a58], 8 */ W32((u32)(0x793a58u), 0x8u);
    /* 006b0137: mov dword ptr [0x793a5c], 5 */ W32((u32)(0x793a5cu), 0x5u);
    /* 006b0141: mov dword ptr [0x793a60], 7 */ W32((u32)(0x793a60u), 0x7u);
    /* 006b014b: mov dword ptr [0x793a64], 7 */ W32((u32)(0x793a64u), 0x7u);
    /* 006b0155: mov dword ptr [0x793a68], 3 */ W32((u32)(0x793a68u), 0x3u);
    /* 006b015f: mov dword ptr [0x793a6c], 8 */ W32((u32)(0x793a6cu), 0x8u);
    /* 006b0169: mov dword ptr [0x793a70], 4 */ W32((u32)(0x793a70u), 0x4u);
    /* 006b0173: mov dword ptr [0x793a74], 7 */ W32((u32)(0x793a74u), 0x7u);
    /* 006b017d: mov dword ptr [0x793a78], 6 */ W32((u32)(0x793a78u), 0x6u);
    /* 006b0187: mov dword ptr [0x793a7c], 0xffffffff */ W32((u32)(0x793a7cu), 0xffffffffu);
    /* 006b0191: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 006b0193: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006b0195: push 0x793a80 */ { u32 v = 0x793a80u; r_esp -= 4; W32(r_esp, v); }
    /* 006b019a: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x6b019fu); f_00686fa2();
    /* 006b019f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b01a2: mov dword ptr [0x793ab4], 0xffffffff */ W32((u32)(0x793ab4u), 0xffffffffu);
    /* 006b01ac: mov dword ptr [0x793ab8], 3 */ W32((u32)(0x793ab8u), 0x3u);
    /* 006b01b6: mov dword ptr [0x793abc], 9 */ W32((u32)(0x793abcu), 0x9u);
    /* 006b01c0: mov dword ptr [0x793ac0], 7 */ W32((u32)(0x793ac0u), 0x7u);
    /* 006b01ca: mov dword ptr [0x793ac4], 7 */ W32((u32)(0x793ac4u), 0x7u);
    /* 006b01d4: mov dword ptr [0x793ac8], 8 */ W32((u32)(0x793ac8u), 0x8u);
    /* 006b01de: mov dword ptr [0x793acc], 4 */ W32((u32)(0x793accu), 0x4u);
    /* 006b01e8: mov dword ptr [0x793ad0], 8 */ W32((u32)(0x793ad0u), 0x8u);
    /* 006b01f2: mov dword ptr [0x793ad4], 8 */ W32((u32)(0x793ad4u), 0x8u);
    /* 006b01fc: mov dword ptr [0x793ad8], 1 */ W32((u32)(0x793ad8u), 0x1u);
    /* 006b0206: mov dword ptr [0x793adc], 7 */ W32((u32)(0x793adcu), 0x7u);
    /* 006b0210: mov dword ptr [0x793ae0], 6 */ W32((u32)(0x793ae0u), 0x6u);
    /* 006b021a: mov dword ptr [0x793ae4], 8 */ W32((u32)(0x793ae4u), 0x8u);
    /* 006b0224: mov dword ptr [0x793ae8], 6 */ W32((u32)(0x793ae8u), 0x6u);
    /* 006b022e: mov dword ptr [0x793aec], 2 */ W32((u32)(0x793aecu), 0x2u);
    /* 006b0238: mov dword ptr [0x793af0], 7 */ W32((u32)(0x793af0u), 0x7u);
    /* 006b0242: mov dword ptr [0x793af4], 5 */ W32((u32)(0x793af4u), 0x5u);
    /* 006b024c: mov dword ptr [0x793af8], 6 */ W32((u32)(0x793af8u), 0x6u);
    /* 006b0256: mov dword ptr [0x793afc], 0xffffffff */ W32((u32)(0x793afcu), 0xffffffffu);
    /* 006b0260: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 006b0262: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006b0264: push 0x793b00 */ { u32 v = 0x793b00u; r_esp -= 4; W32(r_esp, v); }
    /* 006b0269: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x6b026eu); f_00686fa2();
    /* 006b026e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b0271: mov dword ptr [0x793b30], 0xffffffff */ W32((u32)(0x793b30u), 0xffffffffu);
    /* 006b027b: mov dword ptr [0x793b34], 1 */ W32((u32)(0x793b34u), 0x1u);
    /* 006b0285: mov dword ptr [0x793b38], 8 */ W32((u32)(0x793b38u), 0x8u);
    /* 006b028f: mov dword ptr [0x793b3c], 5 */ W32((u32)(0x793b3cu), 0x5u);
    /* 006b0299: mov dword ptr [0x793b40], 6 */ W32((u32)(0x793b40u), 0x6u);
    /* 006b02a3: mov dword ptr [0x793b44], 7 */ W32((u32)(0x793b44u), 0x7u);
    /* 006b02ad: mov dword ptr [0x793b48], 7 */ W32((u32)(0x793b48u), 0x7u);
    /* 006b02b7: mov dword ptr [0x793b4c], 2 */ W32((u32)(0x793b4cu), 0x2u);
    /* 006b02c1: mov dword ptr [0x793b50], 7 */ W32((u32)(0x793b50u), 0x7u);
    /* 006b02cb: mov dword ptr [0x793b54], 7 */ W32((u32)(0x793b54u), 0x7u);
    /* 006b02d5: mov dword ptr [0x793b58], 8 */ W32((u32)(0x793b58u), 0x8u);
    /* 006b02df: mov dword ptr [0x793b5c], 8 */ W32((u32)(0x793b5cu), 0x8u);
    /* 006b02e9: mov dword ptr [0x793b60], 6 */ W32((u32)(0x793b60u), 0x6u);
    /* 006b02f3: mov dword ptr [0x793b64], 8 */ W32((u32)(0x793b64u), 0x8u);
    /* 006b02fd: mov dword ptr [0x793b68], 4 */ W32((u32)(0x793b68u), 0x4u);
    /* 006b0307: mov dword ptr [0x793b6c], 6 */ W32((u32)(0x793b6cu), 0x6u);
    /* 006b0311: mov dword ptr [0x793b70], 3 */ W32((u32)(0x793b70u), 0x3u);
    /* 006b031b: mov dword ptr [0x793b74], 0xffffffff */ W32((u32)(0x793b74u), 0xffffffffu);
    /* 006b0325: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 006b0327: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006b0329: push 0x793b78 */ { u32 v = 0x793b78u; r_esp -= 4; W32(r_esp, v); }
    /* 006b032e: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x6b0333u); f_00686fa2();
    /* 006b0333: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b0336: mov dword ptr [0x793bac], 0xffffffff */ W32((u32)(0x793bacu), 0xffffffffu);
    /* 006b0340: mov dword ptr [0x793bb0], 7 */ W32((u32)(0x793bb0u), 0x7u);
    /* 006b034a: mov dword ptr [0x793bb4], 8 */ W32((u32)(0x793bb4u), 0x8u);
    /* 006b0354: mov dword ptr [0x793bb8], 8 */ W32((u32)(0x793bb8u), 0x8u);
    /* 006b035e: mov dword ptr [0x793bbc], 6 */ W32((u32)(0x793bbcu), 0x6u);
    /* 006b0368: mov dword ptr [0x793bc0], 3 */ W32((u32)(0x793bc0u), 0x3u);
    /* 006b0372: mov dword ptr [0x793bc4], 7 */ W32((u32)(0x793bc4u), 0x7u);
    /* 006b037c: mov dword ptr [0x793bc8], 7 */ W32((u32)(0x793bc8u), 0x7u);
    /* 006b0386: mov dword ptr [0x793bcc], 1 */ W32((u32)(0x793bccu), 0x1u);
    /* 006b0390: mov dword ptr [0x793bd0], 5 */ W32((u32)(0x793bd0u), 0x5u);
    /* 006b039a: mov dword ptr [0x793bd4], 6 */ W32((u32)(0x793bd4u), 0x6u);
    /* 006b03a4: mov dword ptr [0x793bd8], 7 */ W32((u32)(0x793bd8u), 0x7u);
    /* 006b03ae: mov dword ptr [0x793bdc], 2 */ W32((u32)(0x793bdcu), 0x2u);
    /* 006b03b8: mov dword ptr [0x793be0], 8 */ W32((u32)(0x793be0u), 0x8u);
    /* 006b03c2: mov dword ptr [0x793be4], 6 */ W32((u32)(0x793be4u), 0x6u);
    /* 006b03cc: mov dword ptr [0x793be8], 9 */ W32((u32)(0x793be8u), 0x9u);
    /* 006b03d6: mov dword ptr [0x793bec], 4 */ W32((u32)(0x793becu), 0x4u);
    /* 006b03e0: mov dword ptr [0x793bf0], 8 */ W32((u32)(0x793bf0u), 0x8u);
    /* 006b03ea: mov dword ptr [0x793bf4], 0xffffffff */ W32((u32)(0x793bf4u), 0xffffffffu);
    /* 006b03f4: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 006b03f6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006b03f8: push 0x793bf8 */ { u32 v = 0x793bf8u; r_esp -= 4; W32(r_esp, v); }
    /* 006b03fd: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x6b0402u); f_00686fa2();
    /* 006b0402: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b0405: push 0xf8 */ { u32 v = 0xf8u; r_esp -= 4; W32(r_esp, v); }
    /* 006b040a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006b040c: push 0x793c28 */ { u32 v = 0x793c28u; r_esp -= 4; W32(r_esp, v); }
    /* 006b0411: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x6b0416u); f_00686fa2();
    /* 006b0416: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b0419: mov dword ptr [0x793d20], 5 */ W32((u32)(0x793d20u), 0x5u);
    /* 006b0423: mov dword ptr [0x793d24], 3 */ W32((u32)(0x793d24u), 0x3u);
    /* 006b042d: mov dword ptr [0x793d28], 0xf */ W32((u32)(0x793d28u), 0xfu);
    /* 006b0437: mov dword ptr [0x793d2c], 3 */ W32((u32)(0x793d2cu), 0x3u);
    /* 006b0441: mov dword ptr [0x793d30], 0x75c998 */ W32((u32)(0x793d30u), 0x75c998u);
    /* 006b044b: mov dword ptr [0x793d34], 9 */ W32((u32)(0x793d34u), 0x9u);
    /* 006b0455: mov dword ptr [0x793d38], 1 */ W32((u32)(0x793d38u), 0x1u);
    /* 006b045f: mov dword ptr [0x793d3c], 0x75cf20 */ W32((u32)(0x793d3cu), 0x75cf20u);
    /* 006b0469: mov dword ptr [0x793d40], 0xffffffff */ W32((u32)(0x793d40u), 0xffffffffu);
    /* 006b0473: mov dword ptr [0x793d44], 1 */ W32((u32)(0x793d44u), 0x1u);
    /* 006b047d: mov dword ptr [0x793d48], 3 */ W32((u32)(0x793d48u), 0x3u);
    /* 006b0487: mov dword ptr [0x793d4c], 2 */ W32((u32)(0x793d4cu), 0x2u);
    /* 006b0491: mov dword ptr [0x793d50], 7 */ W32((u32)(0x793d50u), 0x7u);
    /* 006b049b: mov dword ptr [0x793d54], 7 */ W32((u32)(0x793d54u), 0x7u);
    /* 006b04a5: mov dword ptr [0x793d58], 6 */ W32((u32)(0x793d58u), 0x6u);
    /* 006b04af: mov dword ptr [0x793d5c], 5 */ W32((u32)(0x793d5cu), 0x5u);
    /* 006b04b9: mov dword ptr [0x793d60], 7 */ W32((u32)(0x793d60u), 0x7u);
    /* 006b04c3: mov dword ptr [0x793d64], 8 */ W32((u32)(0x793d64u), 0x8u);
    /* 006b04cd: mov dword ptr [0x793d68], 6 */ W32((u32)(0x793d68u), 0x6u);
    /* 006b04d7: mov dword ptr [0x793d6c], 8 */ W32((u32)(0x793d6cu), 0x8u);
    /* 006b04e1: mov dword ptr [0x793d70], 4 */ W32((u32)(0x793d70u), 0x4u);
    /* 006b04eb: mov dword ptr [0x793d74], 7 */ W32((u32)(0x793d74u), 0x7u);
    /* 006b04f5: mov dword ptr [0x793d78], 9 */ W32((u32)(0x793d78u), 0x9u);
    /* 006b04ff: mov dword ptr [0x793d7c], 8 */ W32((u32)(0x793d7cu), 0x8u);
    /* 006b0509: mov dword ptr [0x793d80], 8 */ W32((u32)(0x793d80u), 0x8u);
    /* 006b0513: mov dword ptr [0x793d84], 6 */ W32((u32)(0x793d84u), 0x6u);
    /* 006b051d: mov dword ptr [0x793d88], 0xffffffff */ W32((u32)(0x793d88u), 0xffffffffu);
    /* 006b0527: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 006b0529: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006b052b: push 0x793d8c */ { u32 v = 0x793d8cu; r_esp -= 4; W32(r_esp, v); }
    /* 006b0530: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x6b0535u); f_00686fa2();
    /* 006b0535: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b0538: mov dword ptr [0x793dbc], 0xffffffff */ W32((u32)(0x793dbcu), 0xffffffffu);
    /* 006b0542: mov dword ptr [0x793dc0], 6 */ W32((u32)(0x793dc0u), 0x6u);
    /* 006b054c: mov dword ptr [0x793dc4], 1 */ W32((u32)(0x793dc4u), 0x1u);
    /* 006b0556: mov dword ptr [0x793dc8], 7 */ W32((u32)(0x793dc8u), 0x7u);
    /* 006b0560: mov dword ptr [0x793dcc], 6 */ W32((u32)(0x793dccu), 0x6u);
    /* 006b056a: mov dword ptr [0x793dd0], 8 */ W32((u32)(0x793dd0u), 0x8u);
    /* 006b0574: mov dword ptr [0x793dd4], 8 */ W32((u32)(0x793dd4u), 0x8u);
    /* 006b057e: mov dword ptr [0x793dd8], 7 */ W32((u32)(0x793dd8u), 0x7u);
    /* 006b0588: mov dword ptr [0x793ddc], 3 */ W32((u32)(0x793ddcu), 0x3u);
    /* 006b0592: mov dword ptr [0x793de0], 6 */ W32((u32)(0x793de0u), 0x6u);
    /* 006b059c: mov dword ptr [0x793de4], 7 */ W32((u32)(0x793de4u), 0x7u);
    /* 006b05a6: mov dword ptr [0x793de8], 7 */ W32((u32)(0x793de8u), 0x7u);
    /* 006b05b0: mov dword ptr [0x793dec], 2 */ W32((u32)(0x793decu), 0x2u);
    /* 006b05ba: mov dword ptr [0x793df0], 8 */ W32((u32)(0x793df0u), 0x8u);
    /* 006b05c4: mov dword ptr [0x793df4], 5 */ W32((u32)(0x793df4u), 0x5u);
    /* 006b05ce: mov dword ptr [0x793df8], 8 */ W32((u32)(0x793df8u), 0x8u);
    /* 006b05d8: mov dword ptr [0x793dfc], 4 */ W32((u32)(0x793dfcu), 0x4u);
    /* 006b05e2: mov dword ptr [0x793e00], 0xffffffff */ W32((u32)(0x793e00u), 0xffffffffu);
    /* 006b05ec: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 006b05ee: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006b05f0: push 0x793e04 */ { u32 v = 0x793e04u; r_esp -= 4; W32(r_esp, v); }
    /* 006b05f5: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x6b05fau); f_00686fa2();
    /* 006b05fa: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b05fd: mov dword ptr [0x793e38], 0xffffffff */ W32((u32)(0x793e38u), 0xffffffffu);
    /* 006b0607: mov dword ptr [0x793e3c], 9 */ W32((u32)(0x793e3cu), 0x9u);
    /* 006b0611: mov dword ptr [0x793e40], 6 */ W32((u32)(0x793e40u), 0x6u);
    /* 006b061b: mov dword ptr [0x793e44], 8 */ W32((u32)(0x793e44u), 0x8u);
    /* 006b0625: mov dword ptr [0x793e48], 6 */ W32((u32)(0x793e48u), 0x6u);
    /* 006b062f: mov dword ptr [0x793e4c], 1 */ W32((u32)(0x793e4cu), 0x1u);
    /* 006b0639: mov dword ptr [0x793e50], 3 */ W32((u32)(0x793e50u), 0x3u);
    /* 006b0643: mov dword ptr [0x793e54], 7 */ W32((u32)(0x793e54u), 0x7u);
    /* 006b064d: mov dword ptr [0x793e58], 8 */ W32((u32)(0x793e58u), 0x8u);
    /* 006b0657: mov dword ptr [0x793e5c], 5 */ W32((u32)(0x793e5cu), 0x5u);
    /* 006b0661: mov dword ptr [0x793e60], 7 */ W32((u32)(0x793e60u), 0x7u);
    /* 006b066b: mov dword ptr [0x793e64], 6 */ W32((u32)(0x793e64u), 0x6u);
    /* 006b0675: mov dword ptr [0x793e68], 4 */ W32((u32)(0x793e68u), 0x4u);
    /* 006b067f: mov dword ptr [0x793e6c], 8 */ W32((u32)(0x793e6cu), 0x8u);
    /* 006b0689: mov dword ptr [0x793e70], 7 */ W32((u32)(0x793e70u), 0x7u);
    /* 006b0693: mov dword ptr [0x793e74], 8 */ W32((u32)(0x793e74u), 0x8u);
    /* 006b069d: mov dword ptr [0x793e78], 7 */ W32((u32)(0x793e78u), 0x7u);
    /* 006b06a7: mov dword ptr [0x793e7c], 2 */ W32((u32)(0x793e7cu), 0x2u);
    /* 006b06b1: mov dword ptr [0x793e80], 0xffffffff */ W32((u32)(0x793e80u), 0xffffffffu);
    /* 006b06bb: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 006b06bd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006b06bf: push 0x793e84 */ { u32 v = 0x793e84u; r_esp -= 4; W32(r_esp, v); }
    /* 006b06c4: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x6b06c9u); f_00686fa2();
    /* 006b06c9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b06cc: mov dword ptr [0x793eb4], 0xffffffff */ W32((u32)(0x793eb4u), 0xffffffffu);
    /* 006b06d6: mov dword ptr [0x793eb8], 8 */ W32((u32)(0x793eb8u), 0x8u);
    /* 006b06e0: mov dword ptr [0x793ebc], 6 */ W32((u32)(0x793ebcu), 0x6u);
    /* 006b06ea: mov dword ptr [0x793ec0], 3 */ W32((u32)(0x793ec0u), 0x3u);
    /* 006b06f4: mov dword ptr [0x793ec4], 5 */ W32((u32)(0x793ec4u), 0x5u);
    /* 006b06fe: mov dword ptr [0x793ec8], 1 */ W32((u32)(0x793ec8u), 0x1u);
    /* 006b0708: mov dword ptr [0x793ecc], 8 */ W32((u32)(0x793eccu), 0x8u);
    /* 006b0712: mov dword ptr [0x793ed0], 6 */ W32((u32)(0x793ed0u), 0x6u);
    /* 006b071c: mov dword ptr [0x793ed4], 7 */ W32((u32)(0x793ed4u), 0x7u);
    /* 006b0726: mov dword ptr [0x793ed8], 8 */ W32((u32)(0x793ed8u), 0x8u);
    /* 006b0730: mov dword ptr [0x793edc], 6 */ W32((u32)(0x793edcu), 0x6u);
    /* 006b073a: mov dword ptr [0x793ee0], 7 */ W32((u32)(0x793ee0u), 0x7u);
    /* 006b0744: mov dword ptr [0x793ee4], 4 */ W32((u32)(0x793ee4u), 0x4u);
    /* 006b074e: mov dword ptr [0x793ee8], 7 */ W32((u32)(0x793ee8u), 0x7u);
    /* 006b0758: mov dword ptr [0x793eec], 7 */ W32((u32)(0x793eecu), 0x7u);
    /* 006b0762: mov dword ptr [0x793ef0], 2 */ W32((u32)(0x793ef0u), 0x2u);
    /* 006b076c: mov dword ptr [0x793ef4], 8 */ W32((u32)(0x793ef4u), 0x8u);
    /* 006b0776: mov dword ptr [0x793ef8], 0xffffffff */ W32((u32)(0x793ef8u), 0xffffffffu);
    /* 006b0780: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 006b0782: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006b0784: push 0x793efc */ { u32 v = 0x793efcu; r_esp -= 4; W32(r_esp, v); }
    /* 006b0789: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x6b078eu); f_00686fa2();
    /* 006b078e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b0791: mov dword ptr [0x793f30], 0xffffffff */ W32((u32)(0x793f30u), 0xffffffffu);
    /* 006b079b: mov dword ptr [0x793f34], 5 */ W32((u32)(0x793f34u), 0x5u);
    /* 006b07a5: mov dword ptr [0x793f38], 6 */ W32((u32)(0x793f38u), 0x6u);
    /* 006b07af: mov dword ptr [0x793f3c], 6 */ W32((u32)(0x793f3cu), 0x6u);
    /* 006b07b9: mov dword ptr [0x793f40], 1 */ W32((u32)(0x793f40u), 0x1u);
    /* 006b07c3: mov dword ptr [0x793f44], 8 */ W32((u32)(0x793f44u), 0x8u);
    /* 006b07cd: mov dword ptr [0x793f48], 7 */ W32((u32)(0x793f48u), 0x7u);
    /* 006b07d7: mov dword ptr [0x793f4c], 2 */ W32((u32)(0x793f4cu), 0x2u);
    /* 006b07e1: mov dword ptr [0x793f50], 3 */ W32((u32)(0x793f50u), 0x3u);
    /* 006b07eb: mov dword ptr [0x793f54], 7 */ W32((u32)(0x793f54u), 0x7u);
    /* 006b07f5: mov dword ptr [0x793f58], 8 */ W32((u32)(0x793f58u), 0x8u);
    /* 006b07ff: mov dword ptr [0x793f5c], 8 */ W32((u32)(0x793f5cu), 0x8u);
    /* 006b0809: mov dword ptr [0x793f60], 7 */ W32((u32)(0x793f60u), 0x7u);
    /* 006b0813: mov dword ptr [0x793f64], 9 */ W32((u32)(0x793f64u), 0x9u);
    /* 006b081d: mov dword ptr [0x793f68], 7 */ W32((u32)(0x793f68u), 0x7u);
    /* 006b0827: mov dword ptr [0x793f6c], 6 */ W32((u32)(0x793f6cu), 0x6u);
    /* 006b0831: mov dword ptr [0x793f70], 4 */ W32((u32)(0x793f70u), 0x4u);
    /* 006b083b: mov dword ptr [0x793f74], 8 */ W32((u32)(0x793f74u), 0x8u);
    /* 006b0845: mov dword ptr [0x793f78], 0xffffffff */ W32((u32)(0x793f78u), 0xffffffffu);
    /* 006b084f: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 006b0851: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006b0853: push 0x793f7c */ { u32 v = 0x793f7cu; r_esp -= 4; W32(r_esp, v); }
    /* 006b0858: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x6b085du); f_00686fa2();
    /* 006b085d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b0860: push 0xf8 */ { u32 v = 0xf8u; r_esp -= 4; W32(r_esp, v); }
    /* 006b0865: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006b0867: push 0x793fac */ { u32 v = 0x793facu; r_esp -= 4; W32(r_esp, v); }
    /* 006b086c: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x6b0871u); f_00686fa2();
    /* 006b0871: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b0874: mov dword ptr [0x7940a4], 5 */ W32((u32)(0x7940a4u), 0x5u);
    /* 006b087e: mov dword ptr [0x7940a8], 3 */ W32((u32)(0x7940a8u), 0x3u);
    /* 006b0888: mov dword ptr [0x7940ac], 0xf */ W32((u32)(0x7940acu), 0xfu);
    /* 006b0892: mov dword ptr [0x7940b0], 3 */ W32((u32)(0x7940b0u), 0x3u);
    /* 006b089c: mov dword ptr [0x7940b4], 0x75c998 */ W32((u32)(0x7940b4u), 0x75c998u);
    /* 006b08a6: mov dword ptr [0x7940b8], 0xa */ W32((u32)(0x7940b8u), 0xau);
    /* 006b08b0: mov dword ptr [0x7940bc], 2 */ W32((u32)(0x7940bcu), 0x2u);
    /* 006b08ba: mov dword ptr [0x7940c0], 0x75d040 */ W32((u32)(0x7940c0u), 0x75d040u);
    /* 006b08c4: mov dword ptr [0x7940c4], 0xffffffff */ W32((u32)(0x7940c4u), 0xffffffffu);
    /* 006b08ce: mov dword ptr [0x7940c8], 4 */ W32((u32)(0x7940c8u), 0x4u);
    /* 006b08d8: mov dword ptr [0x7940cc], 8 */ W32((u32)(0x7940ccu), 0x8u);
    /* 006b08e2: mov dword ptr [0x7940d0], 9 */ W32((u32)(0x7940d0u), 0x9u);
    /* 006b08ec: mov dword ptr [0x7940d4], 6 */ W32((u32)(0x7940d4u), 0x6u);
    /* 006b08f6: mov dword ptr [0x7940d8], 8 */ W32((u32)(0x7940d8u), 0x8u);
    /* 006b0900: mov dword ptr [0x7940dc], 7 */ W32((u32)(0x7940dcu), 0x7u);
    /* 006b090a: mov dword ptr [0x7940e0], 3 */ W32((u32)(0x7940e0u), 0x3u);
    /* 006b0914: mov dword ptr [0x7940e4], 9 */ W32((u32)(0x7940e4u), 0x9u);
    /* 006b091e: mov dword ptr [0x7940e8], 2 */ W32((u32)(0x7940e8u), 0x2u);
    /* 006b0928: mov dword ptr [0x7940ec], 9 */ W32((u32)(0x7940ecu), 0x9u);
    /* 006b0932: mov dword ptr [0x7940f0], 5 */ W32((u32)(0x7940f0u), 0x5u);
    /* 006b093c: mov dword ptr [0x7940f4], 8 */ W32((u32)(0x7940f4u), 0x8u);
    /* 006b0946: mov dword ptr [0x7940f8], 7 */ W32((u32)(0x7940f8u), 0x7u);
    /* 006b0950: mov dword ptr [0x7940fc], 9 */ W32((u32)(0x7940fcu), 0x9u);
    /* 006b095a: mov dword ptr [0x794100], 0xa */ W32((u32)(0x794100u), 0xau);
    /* 006b0964: mov dword ptr [0x794104], 8 */ W32((u32)(0x794104u), 0x8u);
    /* 006b096e: mov dword ptr [0x794108], 7 */ W32((u32)(0x794108u), 0x7u);
    /* 006b0978: mov dword ptr [0x79410c], 0xffffffff */ W32((u32)(0x79410cu), 0xffffffffu);
    /* 006b0982: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 006b0984: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006b0986: push 0x794110 */ { u32 v = 0x794110u; r_esp -= 4; W32(r_esp, v); }
    /* 006b098b: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x6b0990u); f_00686fa2();
    /* 006b0990: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b0993: mov dword ptr [0x794140], 0xffffffff */ W32((u32)(0x794140u), 0xffffffffu);
    /* 006b099d: mov dword ptr [0x794144], 8 */ W32((u32)(0x794144u), 0x8u);
    /* 006b09a7: mov dword ptr [0x794148], 2 */ W32((u32)(0x794148u), 0x2u);
    /* 006b09b1: mov dword ptr [0x79414c], 9 */ W32((u32)(0x79414cu), 0x9u);
    /* 006b09bb: mov dword ptr [0x794150], 4 */ W32((u32)(0x794150u), 0x4u);
    /* 006b09c5: mov dword ptr [0x794154], 5 */ W32((u32)(0x794154u), 0x5u);
    /* 006b09cf: mov dword ptr [0x794158], 8 */ W32((u32)(0x794158u), 0x8u);
    /* 006b09d9: mov dword ptr [0x79415c], 3 */ W32((u32)(0x79415cu), 0x3u);
    /* 006b09e3: mov dword ptr [0x794160], 6 */ W32((u32)(0x794160u), 0x6u);
    /* 006b09ed: mov dword ptr [0x794164], 7 */ W32((u32)(0x794164u), 0x7u);
    /* 006b09f7: mov dword ptr [0x794168], 9 */ W32((u32)(0x794168u), 0x9u);
    /* 006b0a01: mov dword ptr [0x79416c], 7 */ W32((u32)(0x79416cu), 0x7u);
    /* 006b0a0b: mov dword ptr [0x794170], 8 */ W32((u32)(0x794170u), 0x8u);
    /* 006b0a15: mov dword ptr [0x794174], 7 */ W32((u32)(0x794174u), 0x7u);
    /* 006b0a1f: mov dword ptr [0x794178], 9 */ W32((u32)(0x794178u), 0x9u);
    /* 006b0a29: mov dword ptr [0x79417c], 8 */ W32((u32)(0x79417cu), 0x8u);
    /* 006b0a33: mov dword ptr [0x794180], 9 */ W32((u32)(0x794180u), 0x9u);
    /* 006b0a3d: mov dword ptr [0x794184], 0xffffffff */ W32((u32)(0x794184u), 0xffffffffu);
    /* 006b0a47: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 006b0a49: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006b0a4b: push 0x794188 */ { u32 v = 0x794188u; r_esp -= 4; W32(r_esp, v); }
    /* 006b0a50: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x6b0a55u); f_00686fa2();
    /* 006b0a55: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b0a58: mov dword ptr [0x7941bc], 0xffffffff */ W32((u32)(0x7941bcu), 0xffffffffu);
    /* 006b0a62: mov dword ptr [0x7941c0], 8 */ W32((u32)(0x7941c0u), 0x8u);
    /* 006b0a6c: mov dword ptr [0x7941c4], 4 */ W32((u32)(0x7941c4u), 0x4u);
    /* 006b0a76: mov dword ptr [0x7941c8], 9 */ W32((u32)(0x7941c8u), 0x9u);
    /* 006b0a80: mov dword ptr [0x7941cc], 5 */ W32((u32)(0x7941ccu), 0x5u);
    /* 006b0a8a: mov dword ptr [0x7941d0], 9 */ W32((u32)(0x7941d0u), 0x9u);
    /* 006b0a94: mov dword ptr [0x7941d4], 8 */ W32((u32)(0x7941d4u), 0x8u);
    /* 006b0a9e: mov dword ptr [0x7941d8], 2 */ W32((u32)(0x7941d8u), 0x2u);
    /* 006b0aa8: mov dword ptr [0x7941dc], 9 */ W32((u32)(0x7941dcu), 0x9u);
    /* 006b0ab2: mov dword ptr [0x7941e0], 8 */ W32((u32)(0x7941e0u), 0x8u);
    /* 006b0abc: mov dword ptr [0x7941e4], 7 */ W32((u32)(0x7941e4u), 0x7u);
    /* 006b0ac6: mov dword ptr [0x7941e8], 9 */ W32((u32)(0x7941e8u), 0x9u);
    /* 006b0ad0: mov dword ptr [0x7941ec], 6 */ W32((u32)(0x7941ecu), 0x6u);
    /* 006b0ada: mov dword ptr [0x7941f0], 8 */ W32((u32)(0x7941f0u), 0x8u);
    /* 006b0ae4: mov dword ptr [0x7941f4], 3 */ W32((u32)(0x7941f4u), 0x3u);
    /* 006b0aee: mov dword ptr [0x7941f8], 0xa */ W32((u32)(0x7941f8u), 0xau);
    /* 006b0af8: mov dword ptr [0x7941fc], 7 */ W32((u32)(0x7941fcu), 0x7u);
    /* 006b0b02: mov dword ptr [0x794200], 7 */ W32((u32)(0x794200u), 0x7u);
    /* 006b0b0c: mov dword ptr [0x794204], 0xffffffff */ W32((u32)(0x794204u), 0xffffffffu);
    /* 006b0b16: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 006b0b18: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006b0b1a: push 0x794208 */ { u32 v = 0x794208u; r_esp -= 4; W32(r_esp, v); }
    /* 006b0b1f: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x6b0b24u); f_00686fa2();
    /* 006b0b24: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b0b27: mov dword ptr [0x794238], 0xffffffff */ W32((u32)(0x794238u), 0xffffffffu);
    /* 006b0b31: mov dword ptr [0x79423c], 2 */ W32((u32)(0x79423cu), 0x2u);
    /* 006b0b3b: mov dword ptr [0x794240], 7 */ W32((u32)(0x794240u), 0x7u);
    /* 006b0b45: mov dword ptr [0x794244], 6 */ W32((u32)(0x794244u), 0x6u);
    /* 006b0b4f: mov dword ptr [0x794248], 8 */ W32((u32)(0x794248u), 0x8u);
    /* 006b0b59: mov dword ptr [0x79424c], 9 */ W32((u32)(0x79424cu), 0x9u);
    /* 006b0b63: mov dword ptr [0x794250], 3 */ W32((u32)(0x794250u), 0x3u);
    /* 006b0b6d: mov dword ptr [0x794254], 9 */ W32((u32)(0x794254u), 0x9u);
    /* 006b0b77: mov dword ptr [0x794258], 7 */ W32((u32)(0x794258u), 0x7u);
    /* 006b0b81: mov dword ptr [0x79425c], 5 */ W32((u32)(0x79425cu), 0x5u);
    /* 006b0b8b: mov dword ptr [0x794260], 9 */ W32((u32)(0x794260u), 0x9u);
    /* 006b0b95: mov dword ptr [0x794264], 8 */ W32((u32)(0x794264u), 0x8u);
    /* 006b0b9f: mov dword ptr [0x794268], 8 */ W32((u32)(0x794268u), 0x8u);
    /* 006b0ba9: mov dword ptr [0x79426c], 4 */ W32((u32)(0x79426cu), 0x4u);
    /* 006b0bb3: mov dword ptr [0x794270], 7 */ W32((u32)(0x794270u), 0x7u);
    /* 006b0bbd: mov dword ptr [0x794274], 9 */ W32((u32)(0x794274u), 0x9u);
    /* 006b0bc7: mov dword ptr [0x794278], 8 */ W32((u32)(0x794278u), 0x8u);
    /* 006b0bd1: mov dword ptr [0x79427c], 0xffffffff */ W32((u32)(0x79427cu), 0xffffffffu);
    /* 006b0bdb: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 006b0bdd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006b0bdf: push 0x794280 */ { u32 v = 0x794280u; r_esp -= 4; W32(r_esp, v); }
    /* 006b0be4: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x6b0be9u); f_00686fa2();
    /* 006b0be9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b0bec: mov dword ptr [0x7942b4], 0xffffffff */ W32((u32)(0x7942b4u), 0xffffffffu);
    /* 006b0bf6: mov dword ptr [0x7942b8], 9 */ W32((u32)(0x7942b8u), 0x9u);
    /* 006b0c00: mov dword ptr [0x7942bc], 7 */ W32((u32)(0x7942bcu), 0x7u);
    /* 006b0c0a: mov dword ptr [0x7942c0], 9 */ W32((u32)(0x7942c0u), 0x9u);
    /* 006b0c14: mov dword ptr [0x7942c4], 7 */ W32((u32)(0x7942c4u), 0x7u);
    /* 006b0c1e: mov dword ptr [0x7942c8], 8 */ W32((u32)(0x7942c8u), 0x8u);
    /* 006b0c28: mov dword ptr [0x7942cc], 8 */ W32((u32)(0x7942ccu), 0x8u);
    /* 006b0c32: mov dword ptr [0x7942d0], 6 */ W32((u32)(0x7942d0u), 0x6u);
    /* 006b0c3c: mov dword ptr [0x7942d4], 9 */ W32((u32)(0x7942d4u), 0x9u);
    /* 006b0c46: mov dword ptr [0x7942d8], 9 */ W32((u32)(0x7942d8u), 0x9u);
    /* 006b0c50: mov dword ptr [0x7942dc], 0xa */ W32((u32)(0x7942dcu), 0xau);
    /* 006b0c5a: mov dword ptr [0x7942e0], 8 */ W32((u32)(0x7942e0u), 0x8u);
    /* 006b0c64: mov dword ptr [0x7942e4], 8 */ W32((u32)(0x7942e4u), 0x8u);
    /* 006b0c6e: mov dword ptr [0x7942e8], 7 */ W32((u32)(0x7942e8u), 0x7u);
    /* 006b0c78: mov dword ptr [0x7942ec], 3 */ W32((u32)(0x7942ecu), 0x3u);
    /* 006b0c82: mov dword ptr [0x7942f0], 5 */ W32((u32)(0x7942f0u), 0x5u);
    /* 006b0c8c: mov dword ptr [0x7942f4], 2 */ W32((u32)(0x7942f4u), 0x2u);
    /* 006b0c96: mov dword ptr [0x7942f8], 4 */ W32((u32)(0x7942f8u), 0x4u);
    /* 006b0ca0: mov dword ptr [0x7942fc], 0xffffffff */ W32((u32)(0x7942fcu), 0xffffffffu);
    /* 006b0caa: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 006b0cac: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006b0cae: push 0x794300 */ { u32 v = 0x794300u; r_esp -= 4; W32(r_esp, v); }
    /* 006b0cb3: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x6b0cb8u); f_00686fa2();
    /* 006b0cb8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b0cbb: push 0xf8 */ { u32 v = 0xf8u; r_esp -= 4; W32(r_esp, v); }
    /* 006b0cc0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006b0cc2: push 0x794330 */ { u32 v = 0x794330u; r_esp -= 4; W32(r_esp, v); }
    /* 006b0cc7: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x6b0cccu); f_00686fa2();
    /* 006b0ccc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b0ccf: mov dword ptr [0x794428], 5 */ W32((u32)(0x794428u), 0x5u);
    /* 006b0cd9: mov dword ptr [0x79442c], 3 */ W32((u32)(0x79442cu), 0x3u);
    /* 006b0ce3: mov dword ptr [0x794430], 0xf */ W32((u32)(0x794430u), 0xfu);
    /* 006b0ced: mov dword ptr [0x794434], 3 */ W32((u32)(0x794434u), 0x3u);
    /* 006b0cf7: mov dword ptr [0x794438], 0x75c998 */ W32((u32)(0x794438u), 0x75c998u);
    /* 006b0d01: mov dword ptr [0x79443c], 0xa */ W32((u32)(0x79443cu), 0xau);
    /* 006b0d0b: mov dword ptr [0x794440], 2 */ W32((u32)(0x794440u), 0x2u);
    /* 006b0d15: mov dword ptr [0x794444], 0x75d160 */ W32((u32)(0x794444u), 0x75d160u);
    /* 006b0d1f: mov dword ptr [0x794448], 0xffffffff */ W32((u32)(0x794448u), 0xffffffffu);
    /* 006b0d29: mov dword ptr [0x79444c], 7 */ W32((u32)(0x79444cu), 0x7u);
    /* 006b0d33: mov dword ptr [0x794450], 4 */ W32((u32)(0x794450u), 0x4u);
    /* 006b0d3d: mov dword ptr [0x794454], 8 */ W32((u32)(0x794454u), 0x8u);
    /* 006b0d47: mov dword ptr [0x794458], 9 */ W32((u32)(0x794458u), 0x9u);
    /* 006b0d51: mov dword ptr [0x79445c], 8 */ W32((u32)(0x79445cu), 0x8u);
    /* 006b0d5b: mov dword ptr [0x794460], 3 */ W32((u32)(0x794460u), 0x3u);
    /* 006b0d65: mov dword ptr [0x794464], 7 */ W32((u32)(0x794464u), 0x7u);
    /* 006b0d6f: mov dword ptr [0x794468], 9 */ W32((u32)(0x794468u), 0x9u);
    /* 006b0d79: mov dword ptr [0x79446c], 6 */ W32((u32)(0x79446cu), 0x6u);
    /* 006b0d83: mov dword ptr [0x794470], 0xa */ W32((u32)(0x794470u), 0xau);
    /* 006b0d8d: mov dword ptr [0x794474], 8 */ W32((u32)(0x794474u), 0x8u);
    /* 006b0d97: mov dword ptr [0x794478], 9 */ W32((u32)(0x794478u), 0x9u);
    /* 006b0da1: mov dword ptr [0x79447c], 2 */ W32((u32)(0x79447cu), 0x2u);
    /* 006b0dab: mov dword ptr [0x794480], 9 */ W32((u32)(0x794480u), 0x9u);
    /* 006b0db5: mov dword ptr [0x794484], 5 */ W32((u32)(0x794484u), 0x5u);
    /* 006b0dbf: mov dword ptr [0x794488], 8 */ W32((u32)(0x794488u), 0x8u);
    /* 006b0dc9: mov dword ptr [0x79448c], 7 */ W32((u32)(0x79448cu), 0x7u);
    /* 006b0dd3: mov dword ptr [0x794490], 0xffffffff */ W32((u32)(0x794490u), 0xffffffffu);
    /* 006b0ddd: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 006b0ddf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006b0de1: push 0x794494 */ { u32 v = 0x794494u; r_esp -= 4; W32(r_esp, v); }
    /* 006b0de6: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x6b0debu); f_00686fa2();
    /* 006b0deb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b0dee: mov dword ptr [0x7944c4], 0xffffffff */ W32((u32)(0x7944c4u), 0xffffffffu);
    /* 006b0df8: mov dword ptr [0x7944c8], 7 */ W32((u32)(0x7944c8u), 0x7u);
    /* 006b0e02: mov dword ptr [0x7944cc], 2 */ W32((u32)(0x7944ccu), 0x2u);
    /* 006b0e0c: mov dword ptr [0x7944d0], 8 */ W32((u32)(0x7944d0u), 0x8u);
    /* 006b0e16: mov dword ptr [0x7944d4], 7 */ W32((u32)(0x7944d4u), 0x7u);
    /* 006b0e20: mov dword ptr [0x7944d8], 5 */ W32((u32)(0x7944d8u), 0x5u);
    /* 006b0e2a: mov dword ptr [0x7944dc], 9 */ W32((u32)(0x7944dcu), 0x9u);
    /* 006b0e34: mov dword ptr [0x7944e0], 4 */ W32((u32)(0x7944e0u), 0x4u);
    /* 006b0e3e: mov dword ptr [0x7944e4], 9 */ W32((u32)(0x7944e4u), 0x9u);
    /* 006b0e48: mov dword ptr [0x7944e8], 6 */ W32((u32)(0x7944e8u), 0x6u);
    /* 006b0e52: mov dword ptr [0x7944ec], 8 */ W32((u32)(0x7944ecu), 0x8u);
    /* 006b0e5c: mov dword ptr [0x7944f0], 8 */ W32((u32)(0x7944f0u), 0x8u);
    /* 006b0e66: mov dword ptr [0x7944f4], 9 */ W32((u32)(0x7944f4u), 0x9u);
    /* 006b0e70: mov dword ptr [0x7944f8], 7 */ W32((u32)(0x7944f8u), 0x7u);
    /* 006b0e7a: mov dword ptr [0x7944fc], 9 */ W32((u32)(0x7944fcu), 0x9u);
    /* 006b0e84: mov dword ptr [0x794500], 8 */ W32((u32)(0x794500u), 0x8u);
    /* 006b0e8e: mov dword ptr [0x794504], 3 */ W32((u32)(0x794504u), 0x3u);
    /* 006b0e98: mov dword ptr [0x794508], 0xffffffff */ W32((u32)(0x794508u), 0xffffffffu);
    /* 006b0ea2: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 006b0ea4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006b0ea6: push 0x79450c */ { u32 v = 0x79450cu; r_esp -= 4; W32(r_esp, v); }
    /* 006b0eab: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x6b0eb0u); f_00686fa2();
    /* 006b0eb0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b0eb3: mov dword ptr [0x794540], 0xffffffff */ W32((u32)(0x794540u), 0xffffffffu);
    /* 006b0ebd: mov dword ptr [0x794544], 5 */ W32((u32)(0x794544u), 0x5u);
    /* 006b0ec7: mov dword ptr [0x794548], 7 */ W32((u32)(0x794548u), 0x7u);
    /* 006b0ed1: mov dword ptr [0x79454c], 6 */ W32((u32)(0x79454cu), 0x6u);
    /* 006b0edb: mov dword ptr [0x794550], 3 */ W32((u32)(0x794550u), 0x3u);
    /* 006b0ee5: mov dword ptr [0x794554], 9 */ W32((u32)(0x794554u), 0x9u);
    /* 006b0eef: mov dword ptr [0x794558], 0xa */ W32((u32)(0x794558u), 0xau);
    /* 006b0ef9: mov dword ptr [0x79455c], 8 */ W32((u32)(0x79455cu), 0x8u);
    /* 006b0f03: mov dword ptr [0x794560], 8 */ W32((u32)(0x794560u), 0x8u);
    /* 006b0f0d: mov dword ptr [0x794564], 9 */ W32((u32)(0x794564u), 0x9u);
    /* 006b0f17: mov dword ptr [0x794568], 2 */ W32((u32)(0x794568u), 0x2u);
    /* 006b0f21: mov dword ptr [0x79456c], 9 */ W32((u32)(0x79456cu), 0x9u);
    /* 006b0f2b: mov dword ptr [0x794570], 7 */ W32((u32)(0x794570u), 0x7u);
    /* 006b0f35: mov dword ptr [0x794574], 4 */ W32((u32)(0x794574u), 0x4u);
    /* 006b0f3f: mov dword ptr [0x794578], 7 */ W32((u32)(0x794578u), 0x7u);
    /* 006b0f49: mov dword ptr [0x79457c], 3 */ W32((u32)(0x79457cu), 0x3u);
    /* 006b0f53: mov dword ptr [0x794580], 8 */ W32((u32)(0x794580u), 0x8u);
    /* 006b0f5d: mov dword ptr [0x794584], 8 */ W32((u32)(0x794584u), 0x8u);
    /* 006b0f67: mov dword ptr [0x794588], 0xffffffff */ W32((u32)(0x794588u), 0xffffffffu);
    /* 006b0f71: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 006b0f73: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006b0f75: push 0x79458c */ { u32 v = 0x79458cu; r_esp -= 4; W32(r_esp, v); }
    /* 006b0f7a: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x6b0f7fu); f_00686fa2();
    /* 006b0f7f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b0f82: mov dword ptr [0x7945bc], 0xffffffff */ W32((u32)(0x7945bcu), 0xffffffffu);
    /* 006b0f8c: mov dword ptr [0x7945c0], 6 */ W32((u32)(0x7945c0u), 0x6u);
    /* 006b0f96: mov dword ptr [0x7945c4], 8 */ W32((u32)(0x7945c4u), 0x8u);
    /* 006b0fa0: mov dword ptr [0x7945c8], 9 */ W32((u32)(0x7945c8u), 0x9u);
    /* 006b0faa: mov dword ptr [0x7945cc], 7 */ W32((u32)(0x7945ccu), 0x7u);
    /* 006b0fb4: mov dword ptr [0x7945d0], 8 */ W32((u32)(0x7945d0u), 0x8u);
    /* 006b0fbe: mov dword ptr [0x7945d4], 4 */ W32((u32)(0x7945d4u), 0x4u);
    /* 006b0fc8: mov dword ptr [0x7945d8], 9 */ W32((u32)(0x7945d8u), 0x9u);
    /* 006b0fd2: mov dword ptr [0x7945dc], 7 */ W32((u32)(0x7945dcu), 0x7u);
    /* 006b0fdc: mov dword ptr [0x7945e0], 8 */ W32((u32)(0x7945e0u), 0x8u);
    /* 006b0fe6: mov dword ptr [0x7945e4], 8 */ W32((u32)(0x7945e4u), 0x8u);
    /* 006b0ff0: mov dword ptr [0x7945e8], 3 */ W32((u32)(0x7945e8u), 0x3u);
    /* 006b0ffa: mov dword ptr [0x7945ec], 5 */ W32((u32)(0x7945ecu), 0x5u);
    /* 006b1004: mov dword ptr [0x7945f0], 9 */ W32((u32)(0x7945f0u), 0x9u);
    /* 006b100e: mov dword ptr [0x7945f4], 2 */ W32((u32)(0x7945f4u), 0x2u);
    /* 006b1018: mov dword ptr [0x7945f8], 7 */ W32((u32)(0x7945f8u), 0x7u);
    /* 006b1022: mov dword ptr [0x7945fc], 9 */ W32((u32)(0x7945fcu), 0x9u);
    /* 006b102c: mov dword ptr [0x794600], 0xffffffff */ W32((u32)(0x794600u), 0xffffffffu);
    /* 006b1036: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 006b1038: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006b103a: push 0x794604 */ { u32 v = 0x794604u; r_esp -= 4; W32(r_esp, v); }
    /* 006b103f: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x6b1044u); f_00686fa2();
    /* 006b1044: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b1047: mov dword ptr [0x794638], 0xffffffff */ W32((u32)(0x794638u), 0xffffffffu);
    /* 006b1051: mov dword ptr [0x79463c], 9 */ W32((u32)(0x79463cu), 0x9u);
    /* 006b105b: mov dword ptr [0x794640], 7 */ W32((u32)(0x794640u), 0x7u);
    /* 006b1065: mov dword ptr [0x794644], 8 */ W32((u32)(0x794644u), 0x8u);
    /* 006b106f: mov dword ptr [0x794648], 7 */ W32((u32)(0x794648u), 0x7u);
    /* 006b1079: mov dword ptr [0x79464c], 2 */ W32((u32)(0x79464cu), 0x2u);
    /* 006b1083: mov dword ptr [0x794650], 5 */ W32((u32)(0x794650u), 0x5u);
    /* 006b108d: mov dword ptr [0x794654], 6 */ W32((u32)(0x794654u), 0x6u);
    /* 006b1097: mov dword ptr [0x794658], 3 */ W32((u32)(0x794658u), 0x3u);
    /* 006b10a1: mov dword ptr [0x79465c], 8 */ W32((u32)(0x79465cu), 0x8u);
    /* 006b10ab: mov dword ptr [0x794660], 8 */ W32((u32)(0x794660u), 0x8u);
    /* 006b10b5: mov dword ptr [0x794664], 9 */ W32((u32)(0x794664u), 0x9u);
    /* 006b10bf: mov dword ptr [0x794668], 4 */ W32((u32)(0x794668u), 0x4u);
    /* 006b10c9: mov dword ptr [0x79466c], 8 */ W32((u32)(0x79466cu), 0x8u);
    /* 006b10d3: mov dword ptr [0x794670], 9 */ W32((u32)(0x794670u), 0x9u);
    /* 006b10dd: mov dword ptr [0x794674], 9 */ W32((u32)(0x794674u), 0x9u);
    /* 006b10e7: mov dword ptr [0x794678], 7 */ W32((u32)(0x794678u), 0x7u);
    /* 006b10f1: mov dword ptr [0x79467c], 0xa */ W32((u32)(0x79467cu), 0xau);
    /* 006b10fb: mov dword ptr [0x794680], 0xffffffff */ W32((u32)(0x794680u), 0xffffffffu);
    /* 006b1105: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 006b1107: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006b1109: push 0x794684 */ { u32 v = 0x794684u; r_esp -= 4; W32(r_esp, v); }
    /* 006b110e: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x6b1113u); f_00686fa2();
    /* 006b1113: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b1116: push 0xf8 */ { u32 v = 0xf8u; r_esp -= 4; W32(r_esp, v); }
    /* 006b111b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006b111d: push 0x7946b4 */ { u32 v = 0x7946b4u; r_esp -= 4; W32(r_esp, v); }
    /* 006b1122: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x6b1127u); f_00686fa2();
    /* 006b1127: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b112a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b112b: ret  */ FN_RET(0x006afb60); r_esp += 4; return;
}

void f_006b1a30(void) /* unknown_libname_666 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006b1a30);
    /* 006b1a30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b1a31: mov ebp, esp */ r_ebp = r_esp;
    /* 006b1a33: mov ecx, 0x795098 */ r_ecx = 0x795098u;
    /* 006b1a38: call 0x60c5f0 */ r_esp -= 4; W32(r_esp, 0x6b1a3du); f_0060c5f0();
    /* 006b1a3d: push 0x6b1b10 */ { u32 v = 0x6b1b10u; r_esp -= 4; W32(r_esp, v); }
    /* 006b1a42: call 0x686f8f */ r_esp -= 4; W32(r_esp, 0x6b1a47u); f_00686f8f();
    /* 006b1a47: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b1a4a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b1a4b: ret  */ FN_RET(0x006b1a30); r_esp += 4; return;
}

