#include "protos.h"

void f_00674d40(void) /* FMResourceManager::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00674d40);
    /* 00674d40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00674d41: mov ebp, esp */ r_ebp = r_esp;
    /* 00674d43: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00674d45: push 0x6ad45e */ { u32 v = 0x6ad45eu; r_esp -= 4; W32(r_esp, v); }
    /* 00674d4a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00674d50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00674d51: sub esp, 0x40c */ {  u32 a = r_esp; u32 b = 0x40cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00674d57: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00674d5c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00674d5e: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00674d61: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00674d62: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00674d65: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00674d6b: mov dword ptr [ebp - 0x418], ecx */ W32((u32)(r_ebp+0xfffffbe8u), r_ecx);
    /* 00674d71: mov ecx, dword ptr [ebp - 0x418] */ r_ecx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 00674d77: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x674d7cu); f_005e9e20();
    /* 00674d7c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00674d83: mov eax, dword ptr [ebp - 0x418] */ r_eax = R32((u32)(r_ebp+0xfffffbe8u));
    /* 00674d89: mov dword ptr [eax], 0x6e19cc */ W32((u32)(r_eax), 0x6e19ccu);
    /* 00674d8f: mov ecx, dword ptr [ebp - 0x418] */ r_ecx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 00674d95: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00674d98: call 0x676410 */ r_esp -= 4; W32(r_esp, 0x674d9du); f_00676410();
    /* 00674d9d: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00674da1: mov ecx, dword ptr [ebp - 0x418] */ r_ecx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 00674da7: add ecx, 0x1c */ {  u32 a = r_ecx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00674daa: call 0x676410 */ r_esp -= 4; W32(r_esp, 0x674dafu); f_00676410();
    /* 00674daf: mov byte ptr [ebp - 4], 2 */ W8((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00674db3: mov ecx, dword ptr [ebp - 0x418] */ r_ecx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 00674db9: add ecx, 0x2c */ {  u32 a = r_ecx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00674dbc: call 0x676410 */ r_esp -= 4; W32(r_esp, 0x674dc1u); f_00676410();
    /* 00674dc1: mov byte ptr [ebp - 4], 3 */ W8((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00674dc5: mov ecx, dword ptr [ebp - 0x418] */ r_ecx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 00674dcb: add ecx, 0x3c */ {  u32 a = r_ecx; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00674dce: call 0x676410 */ r_esp -= 4; W32(r_esp, 0x674dd3u); f_00676410();
    /* 00674dd3: mov byte ptr [ebp - 4], 4 */ W8((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 00674dd7: mov ecx, dword ptr [ebp - 0x418] */ r_ecx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 00674ddd: add ecx, 0x4c */ {  u32 a = r_ecx; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00674de0: call 0x676410 */ r_esp -= 4; W32(r_esp, 0x674de5u); f_00676410();
    /* 00674de5: mov byte ptr [ebp - 4], 5 */ W8((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 00674de9: mov ecx, dword ptr [ebp - 0x418] */ r_ecx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 00674def: add ecx, 0x5c */ {  u32 a = r_ecx; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00674df2: call 0x676410 */ r_esp -= 4; W32(r_esp, 0x674df7u); f_00676410();
    /* 00674df7: mov byte ptr [ebp - 4], 6 */ W8((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 00674dfb: mov ecx, dword ptr [ebp - 0x418] */ r_ecx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 00674e01: add ecx, 0x6c */ {  u32 a = r_ecx; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00674e04: call 0x676410 */ r_esp -= 4; W32(r_esp, 0x674e09u); f_00676410();
    /* 00674e09: mov byte ptr [ebp - 4], 7 */ W8((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 00674e0d: mov ecx, dword ptr [ebp - 0x418] */ r_ecx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 00674e13: add ecx, 0x7c */ {  u32 a = r_ecx; u32 b = 0x7cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00674e16: call 0x676410 */ r_esp -= 4; W32(r_esp, 0x674e1bu); f_00676410();
    /* 00674e1b: mov byte ptr [ebp - 4], 8 */ W8((u32)(r_ebp+0xfffffffcu), 0x8u);
    /* 00674e1f: mov ecx, dword ptr [ebp - 0x418] */ r_ecx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 00674e25: add ecx, 0x8c */ {  u32 a = r_ecx; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00674e2b: call 0x676410 */ r_esp -= 4; W32(r_esp, 0x674e30u); f_00676410();
    /* 00674e30: mov byte ptr [ebp - 4], 9 */ W8((u32)(r_ebp+0xfffffffcu), 0x9u);
    /* 00674e34: mov ecx, dword ptr [ebp - 0x418] */ r_ecx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 00674e3a: add ecx, 0x9c */ {  u32 a = r_ecx; u32 b = 0x9cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00674e40: call 0x676410 */ r_esp -= 4; W32(r_esp, 0x674e45u); f_00676410();
    /* 00674e45: mov byte ptr [ebp - 4], 0xa */ W8((u32)(r_ebp+0xfffffffcu), 0xau);
    /* 00674e49: mov ecx, dword ptr [ebp - 0x418] */ r_ecx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 00674e4f: add ecx, 0xac */ {  u32 a = r_ecx; u32 b = 0xacu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00674e55: call 0x676410 */ r_esp -= 4; W32(r_esp, 0x674e5au); f_00676410();
    /* 00674e5a: mov byte ptr [ebp - 4], 0xb */ W8((u32)(r_ebp+0xfffffffcu), 0xbu);
    /* 00674e5e: mov byte ptr [ebp - 0x414], 0 */ W8((u32)(r_ebp+0xfffffbecu), 0x0u);
    /* 00674e65: push 0x3ff */ { u32 v = 0x3ffu; r_esp -= 4; W32(r_esp, v); }
    /* 00674e6a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00674e6c: lea ecx, [ebp - 0x413] */ r_ecx = (u32)(r_ebp+0xfffffbedu);
    /* 00674e72: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00674e73: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x674e78u); f_00686fa2();
    /* 00674e78: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00674e7b: push 0x6e19b8 */ { u32 v = 0x6e19b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00674e80: push 0x6d61f8 */ { u32 v = 0x6d61f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00674e85: push 0x795fc0 */ { u32 v = 0x795fc0u; r_esp -= 4; W32(r_esp, v); }
    /* 00674e8a: push 0x6de52c */ { u32 v = 0x6de52cu; r_esp -= 4; W32(r_esp, v); }
    /* 00674e8f: mov edx, dword ptr [ebp - 0x418] */ r_edx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 00674e95: add edx, 0xbc */ {  u32 a = r_edx; u32 b = 0xbcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00674e9b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00674e9c: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x674ea2u); call_ind(t); }
    /* 00674ea2: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00674ea5: mov eax, dword ptr [ebp - 0x418] */ r_eax = R32((u32)(r_ebp+0xfffffbe8u));
    /* 00674eab: mov dword ptr [eax + 4], 0 */ W32((u32)(r_eax+0x4u), 0x0u);
    /* 00674eb2: mov ecx, dword ptr [ebp - 0x418] */ r_ecx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 00674eb8: mov byte ptr [ecx + 8], 0 */ W8((u32)(r_ecx+0x8u), 0x0u);
    /* 00674ebc: mov ecx, dword ptr [ebp - 0x418] */ r_ecx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 00674ec2: call 0x675650 */ r_esp -= 4; W32(r_esp, 0x674ec7u); f_00675650();
    /* 00674ec7: push 0x6e19b0 */ { u32 v = 0x6e19b0u; r_esp -= 4; W32(r_esp, v); }
    /* 00674ecc: mov edx, dword ptr [ebp - 0x418] */ r_edx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 00674ed2: add edx, 0x1c */ {  u32 a = r_edx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00674ed5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00674ed6: mov ecx, dword ptr [ebp - 0x418] */ r_ecx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 00674edc: call 0x675560 */ r_esp -= 4; W32(r_esp, 0x674ee1u); f_00675560();
    /* 00674ee1: push 0x6e19a8 */ { u32 v = 0x6e19a8u; r_esp -= 4; W32(r_esp, v); }
    /* 00674ee6: mov eax, dword ptr [ebp - 0x418] */ r_eax = R32((u32)(r_ebp+0xfffffbe8u));
    /* 00674eec: add eax, 0x2c */ {  u32 a = r_eax; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00674eef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00674ef0: mov ecx, dword ptr [ebp - 0x418] */ r_ecx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 00674ef6: call 0x675560 */ r_esp -= 4; W32(r_esp, 0x674efbu); f_00675560();
    /* 00674efb: push 0x6e19a0 */ { u32 v = 0x6e19a0u; r_esp -= 4; W32(r_esp, v); }
    /* 00674f00: mov ecx, dword ptr [ebp - 0x418] */ r_ecx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 00674f06: add ecx, 0x3c */ {  u32 a = r_ecx; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00674f09: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00674f0a: mov ecx, dword ptr [ebp - 0x418] */ r_ecx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 00674f10: call 0x675560 */ r_esp -= 4; W32(r_esp, 0x674f15u); f_00675560();
    /* 00674f15: push 0x6e1998 */ { u32 v = 0x6e1998u; r_esp -= 4; W32(r_esp, v); }
    /* 00674f1a: mov edx, dword ptr [ebp - 0x418] */ r_edx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 00674f20: add edx, 0x4c */ {  u32 a = r_edx; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00674f23: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00674f24: mov ecx, dword ptr [ebp - 0x418] */ r_ecx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 00674f2a: call 0x675560 */ r_esp -= 4; W32(r_esp, 0x674f2fu); f_00675560();
    /* 00674f2f: push 0x6e1990 */ { u32 v = 0x6e1990u; r_esp -= 4; W32(r_esp, v); }
    /* 00674f34: mov eax, dword ptr [ebp - 0x418] */ r_eax = R32((u32)(r_ebp+0xfffffbe8u));
    /* 00674f3a: add eax, 0x5c */ {  u32 a = r_eax; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00674f3d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00674f3e: mov ecx, dword ptr [ebp - 0x418] */ r_ecx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 00674f44: call 0x675560 */ r_esp -= 4; W32(r_esp, 0x674f49u); f_00675560();
    /* 00674f49: push 0x6e1988 */ { u32 v = 0x6e1988u; r_esp -= 4; W32(r_esp, v); }
    /* 00674f4e: mov ecx, dword ptr [ebp - 0x418] */ r_ecx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 00674f54: add ecx, 0x6c */ {  u32 a = r_ecx; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00674f57: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00674f58: mov ecx, dword ptr [ebp - 0x418] */ r_ecx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 00674f5e: call 0x675560 */ r_esp -= 4; W32(r_esp, 0x674f63u); f_00675560();
    /* 00674f63: push 0x6e1980 */ { u32 v = 0x6e1980u; r_esp -= 4; W32(r_esp, v); }
    /* 00674f68: mov edx, dword ptr [ebp - 0x418] */ r_edx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 00674f6e: add edx, 0x7c */ {  u32 a = r_edx; u32 b = 0x7cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00674f71: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00674f72: mov ecx, dword ptr [ebp - 0x418] */ r_ecx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 00674f78: call 0x675560 */ r_esp -= 4; W32(r_esp, 0x674f7du); f_00675560();
    /* 00674f7d: push 0x6e1978 */ { u32 v = 0x6e1978u; r_esp -= 4; W32(r_esp, v); }
    /* 00674f82: mov eax, dword ptr [ebp - 0x418] */ r_eax = R32((u32)(r_ebp+0xfffffbe8u));
    /* 00674f88: add eax, 0x8c */ {  u32 a = r_eax; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00674f8d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00674f8e: mov ecx, dword ptr [ebp - 0x418] */ r_ecx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 00674f94: call 0x675560 */ r_esp -= 4; W32(r_esp, 0x674f99u); f_00675560();
    /* 00674f99: push 0x6e196c */ { u32 v = 0x6e196cu; r_esp -= 4; W32(r_esp, v); }
    /* 00674f9e: mov ecx, dword ptr [ebp - 0x418] */ r_ecx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 00674fa4: add ecx, 0x9c */ {  u32 a = r_ecx; u32 b = 0x9cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00674faa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00674fab: mov ecx, dword ptr [ebp - 0x418] */ r_ecx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 00674fb1: call 0x675560 */ r_esp -= 4; W32(r_esp, 0x674fb6u); f_00675560();
    /* 00674fb6: push 0x6e1964 */ { u32 v = 0x6e1964u; r_esp -= 4; W32(r_esp, v); }
    /* 00674fbb: mov edx, dword ptr [ebp - 0x418] */ r_edx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 00674fc1: add edx, 0xac */ {  u32 a = r_edx; u32 b = 0xacu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00674fc7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00674fc8: mov ecx, dword ptr [ebp - 0x418] */ r_ecx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 00674fce: call 0x675560 */ r_esp -= 4; W32(r_esp, 0x674fd3u); f_00675560();
    /* 00674fd3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00674fda: mov eax, dword ptr [ebp - 0x418] */ r_eax = R32((u32)(r_ebp+0xfffffbe8u));
    /* 00674fe0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00674fe3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00674fea: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00674feb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00674fee: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00674ff0: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x674ff5u); f_00686d72();
    /* 00674ff5: mov esp, ebp */ r_esp = r_ebp;
    /* 00674ff7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00674ff8: ret  */ FN_RET(0x00674d40); r_esp += 4; return;
}

void f_00675000(void) /* FMResourceManager::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00675000);
    /* 00675000: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00675001: mov ebp, esp */ r_ebp = r_esp;
    /* 00675003: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00675005: push 0x6ad502 */ { u32 v = 0x6ad502u; r_esp -= 4; W32(r_esp, v); }
    /* 0067500a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00675010: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00675011: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00675012: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00675017: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00675019: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067501a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0067501d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00675023: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00675026: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00675029: mov dword ptr [eax], 0x6e19cc */ W32((u32)(r_eax), 0x6e19ccu);
    /* 0067502f: mov dword ptr [ebp - 4], 0xa */ W32((u32)(r_ebp+0xfffffffcu), 0xau);
    /* 00675036: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00675039: add ecx, 0xac */ {  u32 a = r_ecx; u32 b = 0xacu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067503f: call 0x676430 */ r_esp -= 4; W32(r_esp, 0x675044u); f_00676430();
    /* 00675044: mov byte ptr [ebp - 4], 9 */ W8((u32)(r_ebp+0xfffffffcu), 0x9u);
    /* 00675048: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067504b: add ecx, 0x9c */ {  u32 a = r_ecx; u32 b = 0x9cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00675051: call 0x676430 */ r_esp -= 4; W32(r_esp, 0x675056u); f_00676430();
    /* 00675056: mov byte ptr [ebp - 4], 8 */ W8((u32)(r_ebp+0xfffffffcu), 0x8u);
    /* 0067505a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067505d: add ecx, 0x8c */ {  u32 a = r_ecx; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00675063: call 0x676430 */ r_esp -= 4; W32(r_esp, 0x675068u); f_00676430();
    /* 00675068: mov byte ptr [ebp - 4], 7 */ W8((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 0067506c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067506f: add ecx, 0x7c */ {  u32 a = r_ecx; u32 b = 0x7cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00675072: call 0x676430 */ r_esp -= 4; W32(r_esp, 0x675077u); f_00676430();
    /* 00675077: mov byte ptr [ebp - 4], 6 */ W8((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 0067507b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067507e: add ecx, 0x6c */ {  u32 a = r_ecx; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00675081: call 0x676430 */ r_esp -= 4; W32(r_esp, 0x675086u); f_00676430();
    /* 00675086: mov byte ptr [ebp - 4], 5 */ W8((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 0067508a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067508d: add ecx, 0x5c */ {  u32 a = r_ecx; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00675090: call 0x676430 */ r_esp -= 4; W32(r_esp, 0x675095u); f_00676430();
    /* 00675095: mov byte ptr [ebp - 4], 4 */ W8((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 00675099: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067509c: add ecx, 0x4c */ {  u32 a = r_ecx; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067509f: call 0x676430 */ r_esp -= 4; W32(r_esp, 0x6750a4u); f_00676430();
    /* 006750a4: mov byte ptr [ebp - 4], 3 */ W8((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 006750a8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006750ab: add ecx, 0x3c */ {  u32 a = r_ecx; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006750ae: call 0x676430 */ r_esp -= 4; W32(r_esp, 0x6750b3u); f_00676430();
    /* 006750b3: mov byte ptr [ebp - 4], 2 */ W8((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 006750b7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006750ba: add ecx, 0x2c */ {  u32 a = r_ecx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006750bd: call 0x676430 */ r_esp -= 4; W32(r_esp, 0x6750c2u); f_00676430();
    /* 006750c2: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006750c6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006750c9: add ecx, 0x1c */ {  u32 a = r_ecx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006750cc: call 0x676430 */ r_esp -= 4; W32(r_esp, 0x6750d1u); f_00676430();
    /* 006750d1: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006750d5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006750d8: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006750db: call 0x676430 */ r_esp -= 4; W32(r_esp, 0x6750e0u); f_00676430();
    /* 006750e0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006750e7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006750ea: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x6750efu); f_005e9e40();
    /* 006750ef: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006750f2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006750f9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006750fa: mov esp, ebp */ r_esp = r_ebp;
    /* 006750fc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006750fd: ret  */ FN_RET(0x00675000); r_esp += 4; return;
}

