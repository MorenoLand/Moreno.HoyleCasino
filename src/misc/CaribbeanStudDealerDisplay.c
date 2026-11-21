#include "protos.h"

void f_0041e910(void) /* CaribbeanStudDealerDisplay::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041e910);
    /* 0041e910: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041e911: mov ebp, esp */ r_ebp = r_esp;
    /* 0041e913: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0041e915: push 0x69df94 */ { u32 v = 0x69df94u; r_esp -= 4; W32(r_esp, v); }
    /* 0041e91a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0041e920: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041e921: sub esp, 0xe8 */ {  u32 a = r_esp; u32 b = 0xe8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041e927: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0041e92c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041e92e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041e92f: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0041e932: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0041e938: mov dword ptr [ebp - 0xd0], ecx */ W32((u32)(r_ebp+0xffffff30u), r_ecx);
    /* 0041e93e: mov dword ptr [ebp - 0x50], 2 */ W32((u32)(r_ebp+0xffffffb0u), 0x2u);
    /* 0041e945: mov dword ptr [ebp - 0x4c], 3 */ W32((u32)(r_ebp+0xffffffb4u), 0x3u);
    /* 0041e94c: mov dword ptr [ebp - 0x48], 4 */ W32((u32)(r_ebp+0xffffffb8u), 0x4u);
    /* 0041e953: mov dword ptr [ebp - 0x44], 5 */ W32((u32)(r_ebp+0xffffffbcu), 0x5u);
    /* 0041e95a: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 0041e961: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 0041e968: mov dword ptr [ebp - 0x38], 6 */ W32((u32)(r_ebp+0xffffffc8u), 0x6u);
    /* 0041e96f: mov dword ptr [ebp - 0x34], 7 */ W32((u32)(r_ebp+0xffffffccu), 0x7u);
    /* 0041e976: mov dword ptr [ebp - 0x60], 0x3106d8 */ W32((u32)(r_ebp+0xffffffa0u), 0x3106d8u);
    /* 0041e97d: mov dword ptr [ebp - 0x5c], 0x3106d9 */ W32((u32)(r_ebp+0xffffffa4u), 0x3106d9u);
    /* 0041e984: mov dword ptr [ebp - 0x58], 0x3106d7 */ W32((u32)(r_ebp+0xffffffa8u), 0x3106d7u);
    /* 0041e98b: mov dword ptr [ebp - 0x54], 0x3106da */ W32((u32)(r_ebp+0xffffffacu), 0x3106dau);
    /* 0041e992: mov dword ptr [ebp - 0x30], 0x168 */ W32((u32)(r_ebp+0xffffffd0u), 0x168u);
    /* 0041e999: mov dword ptr [ebp - 0x2c], 0xf5 */ W32((u32)(r_ebp+0xffffffd4u), 0xf5u);
    /* 0041e9a0: mov dword ptr [ebp - 0x28], 0xef */ W32((u32)(r_ebp+0xffffffd8u), 0xefu);
    /* 0041e9a7: mov dword ptr [ebp - 0x24], 0xf4 */ W32((u32)(r_ebp+0xffffffdcu), 0xf4u);
    /* 0041e9ae: mov dword ptr [ebp - 0x20], 0x1da */ W32((u32)(r_ebp+0xffffffe0u), 0x1dau);
    /* 0041e9b5: mov dword ptr [ebp - 0x1c], 0xc1 */ W32((u32)(r_ebp+0xffffffe4u), 0xc1u);
    /* 0041e9bc: mov dword ptr [ebp - 0x18], 0x75 */ W32((u32)(r_ebp+0xffffffe8u), 0x75u);
    /* 0041e9c3: mov dword ptr [ebp - 0x14], 0xc2 */ W32((u32)(r_ebp+0xffffffecu), 0xc2u);
    /* 0041e9ca: mov dword ptr [ebp - 0x80], 0x151 */ W32((u32)(r_ebp+0xffffff80u), 0x151u);
    /* 0041e9d1: mov dword ptr [ebp - 0x7c], 0x10b */ W32((u32)(r_ebp+0xffffff84u), 0x10bu);
    /* 0041e9d8: mov dword ptr [ebp - 0x78], 0xf0 */ W32((u32)(r_ebp+0xffffff88u), 0xf0u);
    /* 0041e9df: mov dword ptr [ebp - 0x74], 0x10b */ W32((u32)(r_ebp+0xffffff8cu), 0x10bu);
    /* 0041e9e6: mov dword ptr [ebp - 0x70], 0x1c1 */ W32((u32)(r_ebp+0xffffff90u), 0x1c1u);
    /* 0041e9ed: mov dword ptr [ebp - 0x6c], 0xd8 */ W32((u32)(r_ebp+0xffffff94u), 0xd8u);
    /* 0041e9f4: mov dword ptr [ebp - 0x68], 0x76 */ W32((u32)(r_ebp+0xffffff98u), 0x76u);
    /* 0041e9fb: mov dword ptr [ebp - 0x64], 0xd9 */ W32((u32)(r_ebp+0xffffff9cu), 0xd9u);
    /* 0041ea02: push 0x6b5d64 */ { u32 v = 0x6b5d64u; r_esp -= 4; W32(r_esp, v); }
    /* 0041ea07: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41ea0cu); f_00630f40();
    /* 0041ea0c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041ea0f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041ea10: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0041ea16: call 0x5f38b0 */ r_esp -= 4; W32(r_esp, 0x41ea1bu); f_005f38b0();
    /* 0041ea1b: push 0x3106c8 */ { u32 v = 0x3106c8u; r_esp -= 4; W32(r_esp, v); }
    /* 0041ea20: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0041ea26: call 0x5f1ad0 */ r_esp -= 4; W32(r_esp, 0x41ea2bu); f_005f1ad0();
    /* 0041ea2b: push 0x3106cb */ { u32 v = 0x3106cbu; r_esp -= 4; W32(r_esp, v); }
    /* 0041ea30: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0041ea36: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x41ea3bu); f_005f2ba0();
    /* 0041ea3b: push 0x3106cc */ { u32 v = 0x3106ccu; r_esp -= 4; W32(r_esp, v); }
    /* 0041ea40: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0041ea46: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x41ea4bu); f_005f2ba0();
    /* 0041ea4b: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0041ea52: jmp 0x41ea5d */ goto L_0041ea5d;
L_0041ea54:; BB(0x0041ea54);
    /* 0041ea54: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041ea57: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041ea5a: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_0041ea5d:; BB(0x0041ea5d);
    /* 0041ea5d: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041ea61: jge 0x41eb75 */ if ((fS==fO)) goto L_0041eb75;
L_0041ea67:; BB(0x0041ea67);
    /* 0041ea67: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0041ea69: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x41ea6eu); f_00686d82();
    /* 0041ea6e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041ea71: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 0041ea77: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0041ea7e: cmp dword ptr [ebp - 0x88], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041ea85: je 0x41ea9a */ if (fZ) goto L_0041ea9a;
L_0041ea87:; BB(0x0041ea87);
    /* 0041ea87: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0041ea8d: call 0x41fd80 */ r_esp -= 4; W32(r_esp, 0x41ea92u); f_0041fd80();
    /* 0041ea92: mov dword ptr [ebp - 0xd4], eax */ W32((u32)(r_ebp+0xffffff2cu), r_eax);
    /* 0041ea98: jmp 0x41eaa4 */ goto L_0041eaa4;
L_0041ea9a:; BB(0x0041ea9a);
    /* 0041ea9a: mov dword ptr [ebp - 0xd4], 0 */ W32((u32)(r_ebp+0xffffff2cu), 0x0u);
L_0041eaa4:; BB(0x0041eaa4);
    /* 0041eaa4: mov ecx, dword ptr [ebp - 0xd4] */ r_ecx = R32((u32)(r_ebp+0xffffff2cu));
    /* 0041eaaa: mov dword ptr [ebp - 0x84], ecx */ W32((u32)(r_ebp+0xffffff7cu), r_ecx);
    /* 0041eab0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0041eab7: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041eaba: mov eax, dword ptr [ebp - 0xd0] */ r_eax = R32((u32)(r_ebp+0xffffff30u));
    /* 0041eac0: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0041eac6: mov dword ptr [eax + edx*4 + 4], ecx */ W32((u32)(r_eax+r_edx*4+0x4u), r_ecx);
    /* 0041eaca: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041eacd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041eace: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041ead1: mov ecx, dword ptr [ebp - 0xd0] */ r_ecx = R32((u32)(r_ebp+0xffffff30u));
    /* 0041ead7: mov ecx, dword ptr [ecx + eax*4 + 4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 0041eadb: call 0x41fef0 */ r_esp -= 4; W32(r_esp, 0x41eae0u); f_0041fef0();
    /* 0041eae0: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041eae5: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x41eaeau); f_00686d82();
    /* 0041eaea: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041eaed: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 0041eaf3: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0041eafa: cmp dword ptr [ebp - 0x90], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff70u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041eb01: je 0x41eb16 */ if (fZ) goto L_0041eb16;
L_0041eb03:; BB(0x0041eb03);
    /* 0041eb03: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 0041eb09: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x41eb0eu); f_005ec5a0();
    /* 0041eb0e: mov dword ptr [ebp - 0xd8], eax */ W32((u32)(r_ebp+0xffffff28u), r_eax);
    /* 0041eb14: jmp 0x41eb20 */ goto L_0041eb20;
L_0041eb16:; BB(0x0041eb16);
    /* 0041eb16: mov dword ptr [ebp - 0xd8], 0 */ W32((u32)(r_ebp+0xffffff28u), 0x0u);
L_0041eb20:; BB(0x0041eb20);
    /* 0041eb20: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 0041eb26: mov dword ptr [ebp - 0x8c], edx */ W32((u32)(r_ebp+0xffffff74u), r_edx);
    /* 0041eb2c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0041eb33: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041eb36: mov ecx, dword ptr [ebp - 0xd0] */ r_ecx = R32((u32)(r_ebp+0xffffff30u));
    /* 0041eb3c: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 0041eb42: mov dword ptr [ecx + eax*4 + 0x64], edx */ W32((u32)(r_ecx+r_eax*4+0x64u), r_edx);
    /* 0041eb46: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0041eb48: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0041eb4a: push 0x51 */ { u32 v = 0x51u; r_esp -= 4; W32(r_esp, v); }
    /* 0041eb4c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041eb4e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041eb50: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0041eb52: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 0041eb57: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 0041eb59: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0041eb5e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041eb61: mov ecx, dword ptr [ebp - 0xd0] */ r_ecx = R32((u32)(r_ebp+0xffffff30u));
    /* 0041eb67: mov ecx, dword ptr [ecx + eax*4 + 0x64] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x64u));
    /* 0041eb6b: call 0x5ec8f0 */ r_esp -= 4; W32(r_esp, 0x41eb70u); f_005ec8f0();
    /* 0041eb70: jmp 0x41ea54 */ goto L_0041ea54;
L_0041eb75:; BB(0x0041eb75);
    /* 0041eb75: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0041eb7c: jmp 0x41eb87 */ goto L_0041eb87;
L_0041eb7e:; BB(0x0041eb7e);
    /* 0041eb7e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041eb81: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0041eb84: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_0041eb87:; BB(0x0041eb87);
    /* 0041eb87: cmp dword ptr [ebp - 0x10], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041eb8b: jge 0x41ecb4 */ if ((fS==fO)) goto L_0041ecb4;
L_0041eb91:; BB(0x0041eb91);
    /* 0041eb91: push 0xae4 */ { u32 v = 0xae4u; r_esp -= 4; W32(r_esp, v); }
    /* 0041eb96: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x41eb9bu); f_00686d82();
    /* 0041eb9b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041eb9e: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 0041eba4: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0041ebab: cmp dword ptr [ebp - 0x98], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff68u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041ebb2: je 0x41ebc7 */ if (fZ) goto L_0041ebc7;
L_0041ebb4:; BB(0x0041ebb4);
    /* 0041ebb4: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 0041ebba: call 0x420950 */ r_esp -= 4; W32(r_esp, 0x41ebbfu); f_00420950();
    /* 0041ebbf: mov dword ptr [ebp - 0xdc], eax */ W32((u32)(r_ebp+0xffffff24u), r_eax);
    /* 0041ebc5: jmp 0x41ebd1 */ goto L_0041ebd1;
L_0041ebc7:; BB(0x0041ebc7);
    /* 0041ebc7: mov dword ptr [ebp - 0xdc], 0 */ W32((u32)(r_ebp+0xffffff24u), 0x0u);
L_0041ebd1:; BB(0x0041ebd1);
    /* 0041ebd1: mov eax, dword ptr [ebp - 0xdc] */ r_eax = R32((u32)(r_ebp+0xffffff24u));
    /* 0041ebd7: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 0041ebdd: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0041ebe4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041ebe7: mov edx, dword ptr [ebp - 0xd0] */ r_edx = R32((u32)(r_ebp+0xffffff30u));
    /* 0041ebed: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 0041ebf3: mov dword ptr [edx + ecx*4 + 0x18], eax */ W32((u32)(r_edx+r_ecx*4+0x18u), r_eax);
    /* 0041ebf7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041ebfa: mov edx, dword ptr [ebp - 0xd0] */ r_edx = R32((u32)(r_ebp+0xffffff30u));
    /* 0041ec00: mov eax, dword ptr [edx + ecx*4 + 0x18] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 0041ec04: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041ec07: mov dword ptr [eax + 0xae0], ecx */ W32((u32)(r_eax+0xae0u), r_ecx);
    /* 0041ec0d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0041ec0f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0041ec11: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041ec13: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041ec15: push 0x3106ce */ { u32 v = 0x3106ceu; r_esp -= 4; W32(r_esp, v); }
    /* 0041ec1a: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041ec1d: mov eax, dword ptr [ebp - 0xd0] */ r_eax = R32((u32)(r_ebp+0xffffff30u));
    /* 0041ec23: mov ecx, dword ptr [eax + edx*4 + 0x18] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x18u));
    /* 0041ec27: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x41ec2cu); f_005eae80();
    /* 0041ec2c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041ec2f: mov edx, dword ptr [ebp + ecx*4 - 0x50] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffb0u));
    /* 0041ec33: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041ec34: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041ec37: mov ecx, dword ptr [ebp - 0xd0] */ r_ecx = R32((u32)(r_ebp+0xffffff30u));
    /* 0041ec3d: mov edx, dword ptr [ecx + eax*4 + 0x18] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x18u));
    /* 0041ec41: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041ec44: mov ecx, dword ptr [ebp - 0xd0] */ r_ecx = R32((u32)(r_ebp+0xffffff30u));
    /* 0041ec4a: mov ecx, dword ptr [ecx + eax*4 + 0x18] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x18u));
    /* 0041ec4e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0041ec50: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0041ec56: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x41ec58u); call_ind(t); }
    /* 0041ec58: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041ec5a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041ec5d: mov edx, dword ptr [ebp - 0xd0] */ r_edx = R32((u32)(r_ebp+0xffffff30u));
    /* 0041ec63: mov ecx, dword ptr [edx + ecx*4 + 0x18] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 0041ec67: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x41ec6cu); f_005eb5d0();
    /* 0041ec6c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041ec6f: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 0041ec75: mov edx, dword ptr [ecx + eax*4 + 8] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 0041ec79: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041ec7a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041ec7d: mov ecx, dword ptr [ebp - 0xd0] */ r_ecx = R32((u32)(r_ebp+0xffffff30u));
    /* 0041ec83: mov ecx, dword ptr [ecx + eax*4 + 0x18] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x18u));
    /* 0041ec87: call 0x5cc2c0 */ r_esp -= 4; W32(r_esp, 0x41ec8cu); f_005cc2c0();
    /* 0041ec8c: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041ec8f: mov eax, dword ptr [ebp - 0xd0] */ r_eax = R32((u32)(r_ebp+0xffffff30u));
    /* 0041ec95: mov ecx, dword ptr [eax + edx*4 + 0x18] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x18u));
    /* 0041ec99: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041ec9c: mov eax, dword ptr [ebp - 0xd0] */ r_eax = R32((u32)(r_ebp+0xffffff30u));
    /* 0041eca2: mov edx, dword ptr [eax + edx*4 + 0x18] */ r_edx = R32((u32)(r_eax+r_edx*4+0x18u));
    /* 0041eca6: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0041eca8: mov ecx, edx */ r_ecx = r_edx;
    /* 0041ecaa: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 0041ecad: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x41ecafu); call_ind(t); }
    /* 0041ecaf: jmp 0x41eb7e */ goto L_0041eb7e;
L_0041ecb4:; BB(0x0041ecb4);
    /* 0041ecb4: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0041ecbb: jmp 0x41ecc6 */ goto L_0041ecc6;
L_0041ecbd:; BB(0x0041ecbd);
    /* 0041ecbd: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041ecc0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041ecc3: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_0041ecc6:; BB(0x0041ecc6);
    /* 0041ecc6: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041ecca: jge 0x41ee8e */ if ((fS==fO)) goto L_0041ee8e;
L_0041ecd0:; BB(0x0041ecd0);
    /* 0041ecd0: push 0x1dc */ { u32 v = 0x1dcu; r_esp -= 4; W32(r_esp, v); }
    /* 0041ecd5: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x41ecdau); f_00686d82();
    /* 0041ecda: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041ecdd: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
    /* 0041ece3: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0041ecea: cmp dword ptr [ebp - 0xa0], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff60u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041ecf1: je 0x41ed06 */ if (fZ) goto L_0041ed06;
L_0041ecf3:; BB(0x0041ecf3);
    /* 0041ecf3: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 0041ecf9: call 0x601a80 */ r_esp -= 4; W32(r_esp, 0x41ecfeu); f_00601a80();
    /* 0041ecfe: mov dword ptr [ebp - 0xe0], eax */ W32((u32)(r_ebp+0xffffff20u), r_eax);
    /* 0041ed04: jmp 0x41ed10 */ goto L_0041ed10;
L_0041ed06:; BB(0x0041ed06);
    /* 0041ed06: mov dword ptr [ebp - 0xe0], 0 */ W32((u32)(r_ebp+0xffffff20u), 0x0u);
L_0041ed10:; BB(0x0041ed10);
    /* 0041ed10: mov ecx, dword ptr [ebp - 0xe0] */ r_ecx = R32((u32)(r_ebp+0xffffff20u));
    /* 0041ed16: mov dword ptr [ebp - 0x9c], ecx */ W32((u32)(r_ebp+0xffffff64u), r_ecx);
    /* 0041ed1c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0041ed23: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041ed26: mov eax, dword ptr [ebp - 0xd0] */ r_eax = R32((u32)(r_ebp+0xffffff30u));
    /* 0041ed2c: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 0041ed32: mov dword ptr [eax + edx*4 + 0x44], ecx */ W32((u32)(r_eax+r_edx*4+0x44u), r_ecx);
    /* 0041ed36: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0041ed38: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041ed3a: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041ed3d: mov eax, dword ptr [ebp + edx*8 - 0x7c] */ r_eax = R32((u32)(r_ebp+r_edx*8+0xffffff84u));
    /* 0041ed41: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041ed42: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041ed45: mov edx, dword ptr [ebp + ecx*8 - 0x80] */ r_edx = R32((u32)(r_ebp+r_ecx*8+0xffffff80u));
    /* 0041ed49: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041ed4a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041ed4d: mov ecx, dword ptr [ebp + eax*4 - 0x60] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffa0u));
    /* 0041ed51: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041ed52: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041ed55: mov eax, dword ptr [ebp - 0xd0] */ r_eax = R32((u32)(r_ebp+0xffffff30u));
    /* 0041ed5b: mov ecx, dword ptr [eax + edx*4 + 0x44] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x44u));
    /* 0041ed5f: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x41ed64u); f_005eae80();
    /* 0041ed64: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041ed67: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041ed68: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041ed6b: mov eax, dword ptr [ebp - 0xd0] */ r_eax = R32((u32)(r_ebp+0xffffff30u));
    /* 0041ed71: mov ecx, dword ptr [eax + edx*4 + 0x44] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x44u));
    /* 0041ed75: call 0x5f53e0 */ r_esp -= 4; W32(r_esp, 0x41ed7au); f_005f53e0();
    /* 0041ed7a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041ed7d: mov edx, dword ptr [ebp - 0xd0] */ r_edx = R32((u32)(r_ebp+0xffffff30u));
    /* 0041ed83: mov ecx, dword ptr [edx + ecx*4 + 0x44] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x44u));
    /* 0041ed87: call 0x602eb0 */ r_esp -= 4; W32(r_esp, 0x41ed8cu); f_00602eb0();
    /* 0041ed8c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041ed8f: mov ecx, dword ptr [ebp - 0xd0] */ r_ecx = R32((u32)(r_ebp+0xffffff30u));
    /* 0041ed95: mov edx, dword ptr [ecx + eax*4 + 0x44] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x44u));
    /* 0041ed99: mov dword ptr [edx + 0x178], 3 */ W32((u32)(r_edx+0x178u), 0x3u);
    /* 0041eda3: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041eda6: mov ecx, dword ptr [ebp - 0xd0] */ r_ecx = R32((u32)(r_ebp+0xffffff30u));
    /* 0041edac: mov edx, dword ptr [ecx + eax*4 + 0x44] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x44u));
    /* 0041edb0: mov dword ptr [ebp - 0xcc], edx */ W32((u32)(r_ebp+0xffffff34u), r_edx);
    /* 0041edb6: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 0041edbc: mov byte ptr [eax + 0x1b5], 1 */ W8((u32)(r_eax+0x1b5u), 0x1u);
    /* 0041edc3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041edc6: mov edx, dword ptr [ebp - 0xd0] */ r_edx = R32((u32)(r_ebp+0xffffff30u));
    /* 0041edcc: mov eax, dword ptr [edx + ecx*4 + 0x44] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x44u));
    /* 0041edd0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041edd3: mov edx, dword ptr [ebp - 0xd0] */ r_edx = R32((u32)(r_ebp+0xffffff30u));
    /* 0041edd9: mov ecx, dword ptr [edx + ecx*4 + 0x44] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x44u));
    /* 0041eddd: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0041eddf: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 0041ede2: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x41ede4u); call_ind(t); }
    /* 0041ede4: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 0041ede9: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x41edeeu); f_00686d82();
    /* 0041edee: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041edf1: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 0041edf7: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 0041edfe: cmp dword ptr [ebp - 0xa8], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff58u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041ee05: je 0x41ee2c */ if (fZ) goto L_0041ee2c;
L_0041ee07:; BB(0x0041ee07);
    /* 0041ee07: mov ecx, dword ptr [ebp - 0xa8] */ r_ecx = R32((u32)(r_ebp+0xffffff58u));
    /* 0041ee0d: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x41ee12u); f_005f5bf0();
    /* 0041ee12: mov eax, dword ptr [ebp - 0xa8] */ r_eax = R32((u32)(r_ebp+0xffffff58u));
    /* 0041ee18: mov dword ptr [eax], 0x6b5ca4 */ W32((u32)(r_eax), 0x6b5ca4u);
    /* 0041ee1e: mov ecx, dword ptr [ebp - 0xa8] */ r_ecx = R32((u32)(r_ebp+0xffffff58u));
    /* 0041ee24: mov dword ptr [ebp - 0xe4], ecx */ W32((u32)(r_ebp+0xffffff1cu), r_ecx);
    /* 0041ee2a: jmp 0x41ee36 */ goto L_0041ee36;
L_0041ee2c:; BB(0x0041ee2c);
    /* 0041ee2c: mov dword ptr [ebp - 0xe4], 0 */ W32((u32)(r_ebp+0xffffff1cu), 0x0u);
L_0041ee36:; BB(0x0041ee36);
    /* 0041ee36: mov edx, dword ptr [ebp - 0xe4] */ r_edx = R32((u32)(r_ebp+0xffffff1cu));
    /* 0041ee3c: mov dword ptr [ebp - 0xa4], edx */ W32((u32)(r_ebp+0xffffff5cu), r_edx);
    /* 0041ee42: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0041ee49: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041ee4c: mov ecx, dword ptr [ebp - 0xd0] */ r_ecx = R32((u32)(r_ebp+0xffffff30u));
    /* 0041ee52: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0041ee58: mov dword ptr [ecx + eax*4 + 0x54], edx */ W32((u32)(r_ecx+r_eax*4+0x54u), r_edx);
    /* 0041ee5c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041ee5f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041ee60: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0041ee62: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041ee65: mov edx, dword ptr [ebp + ecx*8 - 0x2c] */ r_edx = R32((u32)(r_ebp+r_ecx*8+0xffffffd4u));
    /* 0041ee69: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041ee6a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041ee6d: mov ecx, dword ptr [ebp + eax*8 - 0x30] */ r_ecx = R32((u32)(r_ebp+r_eax*8+0xffffffd0u));
    /* 0041ee71: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041ee72: push 0x3106db */ { u32 v = 0x3106dbu; r_esp -= 4; W32(r_esp, v); }
    /* 0041ee77: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041ee7a: mov eax, dword ptr [ebp - 0xd0] */ r_eax = R32((u32)(r_ebp+0xffffff30u));
    /* 0041ee80: mov ecx, dword ptr [eax + edx*4 + 0x54] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x54u));
    /* 0041ee84: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x41ee89u); f_005eae80();
    /* 0041ee89: jmp 0x41ecbd */ goto L_0041ecbd;
L_0041ee8e:; BB(0x0041ee8e);
    /* 0041ee8e: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 0041ee90: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x41ee95u); f_00686d82();
    /* 0041ee95: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041ee98: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 0041ee9e: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 0041eea5: cmp dword ptr [ebp - 0xb0], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff50u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041eeac: je 0x41eec1 */ if (fZ) goto L_0041eec1;
L_0041eeae:; BB(0x0041eeae);
    /* 0041eeae: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 0041eeb4: call 0x420bb0 */ r_esp -= 4; W32(r_esp, 0x41eeb9u); f_00420bb0();
    /* 0041eeb9: mov dword ptr [ebp - 0xe8], eax */ W32((u32)(r_ebp+0xffffff18u), r_eax);
    /* 0041eebf: jmp 0x41eecb */ goto L_0041eecb;
L_0041eec1:; BB(0x0041eec1);
    /* 0041eec1: mov dword ptr [ebp - 0xe8], 0 */ W32((u32)(r_ebp+0xffffff18u), 0x0u);
L_0041eecb:; BB(0x0041eecb);
    /* 0041eecb: mov ecx, dword ptr [ebp - 0xe8] */ r_ecx = R32((u32)(r_ebp+0xffffff18u));
    /* 0041eed1: mov dword ptr [ebp - 0xac], ecx */ W32((u32)(r_ebp+0xffffff54u), r_ecx);
    /* 0041eed7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0041eede: mov edx, dword ptr [ebp - 0xd0] */ r_edx = R32((u32)(r_ebp+0xffffff30u));
    /* 0041eee4: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 0041eeea: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 0041eeed: mov ecx, dword ptr [ebp - 0xd0] */ r_ecx = R32((u32)(r_ebp+0xffffff30u));
    /* 0041eef3: mov ecx, dword ptr [ecx + 0x3c] */ r_ecx = R32((u32)(r_ecx+0x3cu));
    /* 0041eef6: call 0x420d90 */ r_esp -= 4; W32(r_esp, 0x41eefbu); f_00420d90();
    /* 0041eefb: mov edx, dword ptr [ebp - 0xd0] */ r_edx = R32((u32)(r_ebp+0xffffff30u));
    /* 0041ef01: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 0041ef04: call 0x421070 */ r_esp -= 4; W32(r_esp, 0x41ef09u); f_00421070();
    /* 0041ef09: push 0x198 */ { u32 v = 0x198u; r_esp -= 4; W32(r_esp, v); }
    /* 0041ef0e: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x41ef13u); f_00686d82();
    /* 0041ef13: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041ef16: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 0041ef1c: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 0041ef23: cmp dword ptr [ebp - 0xb8], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff48u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041ef2a: je 0x41ef51 */ if (fZ) goto L_0041ef51;
L_0041ef2c:; BB(0x0041ef2c);
    /* 0041ef2c: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 0041ef32: call 0x5cd6a0 */ r_esp -= 4; W32(r_esp, 0x41ef37u); f_005cd6a0();
    /* 0041ef37: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 0041ef3d: mov dword ptr [eax], 0x6b5bdc */ W32((u32)(r_eax), 0x6b5bdcu);
    /* 0041ef43: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 0041ef49: mov dword ptr [ebp - 0xec], ecx */ W32((u32)(r_ebp+0xffffff14u), r_ecx);
    /* 0041ef4f: jmp 0x41ef5b */ goto L_0041ef5b;
L_0041ef51:; BB(0x0041ef51);
    /* 0041ef51: mov dword ptr [ebp - 0xec], 0 */ W32((u32)(r_ebp+0xffffff14u), 0x0u);
L_0041ef5b:; BB(0x0041ef5b);
    /* 0041ef5b: mov edx, dword ptr [ebp - 0xec] */ r_edx = R32((u32)(r_ebp+0xffffff14u));
    /* 0041ef61: mov dword ptr [ebp - 0xb4], edx */ W32((u32)(r_ebp+0xffffff4cu), r_edx);
    /* 0041ef67: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0041ef6e: mov eax, dword ptr [ebp - 0xd0] */ r_eax = R32((u32)(r_ebp+0xffffff30u));
    /* 0041ef74: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0041ef7a: mov dword ptr [eax + 0x38], ecx */ W32((u32)(r_eax+0x38u), r_ecx);
    /* 0041ef7d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0041ef7f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041ef81: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041ef83: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041ef85: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041ef87: mov edx, dword ptr [ebp - 0xd0] */ r_edx = R32((u32)(r_ebp+0xffffff30u));
    /* 0041ef8d: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 0041ef90: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x41ef95u); f_005eae80();
    /* 0041ef95: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 0041ef9a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x41ef9fu); f_00686d82();
    /* 0041ef9f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041efa2: mov dword ptr [ebp - 0xc0], eax */ W32((u32)(r_ebp+0xffffff40u), r_eax);
    /* 0041efa8: mov dword ptr [ebp - 4], 7 */ W32((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 0041efaf: cmp dword ptr [ebp - 0xc0], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff40u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041efb6: je 0x41efcb */ if (fZ) goto L_0041efcb;
L_0041efb8:; BB(0x0041efb8);
    /* 0041efb8: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 0041efbe: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x41efc3u); f_005f5bf0();
    /* 0041efc3: mov dword ptr [ebp - 0xf0], eax */ W32((u32)(r_ebp+0xffffff10u), r_eax);
    /* 0041efc9: jmp 0x41efd5 */ goto L_0041efd5;
L_0041efcb:; BB(0x0041efcb);
    /* 0041efcb: mov dword ptr [ebp - 0xf0], 0 */ W32((u32)(r_ebp+0xffffff10u), 0x0u);
L_0041efd5:; BB(0x0041efd5);
    /* 0041efd5: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 0041efdb: mov dword ptr [ebp - 0xbc], eax */ W32((u32)(r_ebp+0xffffff44u), r_eax);
    /* 0041efe1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0041efe8: mov ecx, dword ptr [ebp - 0xd0] */ r_ecx = R32((u32)(r_ebp+0xffffff30u));
    /* 0041efee: mov edx, dword ptr [ebp - 0xbc] */ r_edx = R32((u32)(r_ebp+0xffffff44u));
    /* 0041eff4: mov dword ptr [ecx + 0x78], edx */ W32((u32)(r_ecx+0x78u), r_edx);
    /* 0041eff7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0041eff9: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 0041effb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041effd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041efff: push 0x13a2 */ { u32 v = 0x13a2u; r_esp -= 4; W32(r_esp, v); }
    /* 0041f004: mov eax, dword ptr [ebp - 0xd0] */ r_eax = R32((u32)(r_ebp+0xffffff30u));
    /* 0041f00a: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 0041f00d: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x41f012u); f_005eae80();
    /* 0041f012: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 0041f017: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x41f01cu); f_00686d82();
    /* 0041f01c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041f01f: mov dword ptr [ebp - 0xc8], eax */ W32((u32)(r_ebp+0xffffff38u), r_eax);
    /* 0041f025: mov dword ptr [ebp - 4], 8 */ W32((u32)(r_ebp+0xfffffffcu), 0x8u);
    /* 0041f02c: cmp dword ptr [ebp - 0xc8], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff38u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041f033: je 0x41f048 */ if (fZ) goto L_0041f048;
L_0041f035:; BB(0x0041f035);
    /* 0041f035: mov ecx, dword ptr [ebp - 0xc8] */ r_ecx = R32((u32)(r_ebp+0xffffff38u));
    /* 0041f03b: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x41f040u); f_005f5bf0();
    /* 0041f040: mov dword ptr [ebp - 0xf4], eax */ W32((u32)(r_ebp+0xffffff0cu), r_eax);
    /* 0041f046: jmp 0x41f052 */ goto L_0041f052;
L_0041f048:; BB(0x0041f048);
    /* 0041f048: mov dword ptr [ebp - 0xf4], 0 */ W32((u32)(r_ebp+0xffffff0cu), 0x0u);
L_0041f052:; BB(0x0041f052);
    /* 0041f052: mov ecx, dword ptr [ebp - 0xf4] */ r_ecx = R32((u32)(r_ebp+0xffffff0cu));
    /* 0041f058: mov dword ptr [ebp - 0xc4], ecx */ W32((u32)(r_ebp+0xffffff3cu), r_ecx);
    /* 0041f05e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0041f065: mov edx, dword ptr [ebp - 0xd0] */ r_edx = R32((u32)(r_ebp+0xffffff30u));
    /* 0041f06b: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 0041f071: mov dword ptr [edx + 0x7c], eax */ W32((u32)(r_edx+0x7cu), r_eax);
    /* 0041f074: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0041f076: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 0041f078: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041f07a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041f07c: push 0x13a3 */ { u32 v = 0x13a3u; r_esp -= 4; W32(r_esp, v); }
    /* 0041f081: mov ecx, dword ptr [ebp - 0xd0] */ r_ecx = R32((u32)(r_ebp+0xffffff30u));
    /* 0041f087: mov ecx, dword ptr [ecx + 0x7c] */ r_ecx = R32((u32)(r_ecx+0x7cu));
    /* 0041f08a: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x41f08fu); f_005eae80();
    /* 0041f08f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041f092: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0041f099: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0041f09a: mov esp, ebp */ r_esp = r_ebp;
    /* 0041f09c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041f09d: ret  */ FN_RET(0x0041e910); r_esp += 4; return;
}

