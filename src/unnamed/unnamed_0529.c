#include "protos.h"

void f_005291e0(void) /* sub_5291E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005291e0);
    /* 005291e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005291e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005291e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005291e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005291e7: cmp dword ptr [ebp + 0x10], 1 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005291eb: jne 0x529215 */ if (!fZ) goto L_00529215;
L_005291ed:; BB(0x005291ed);
    /* 005291ed: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005291ef: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005291f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005291f3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005291f6: call 0x529240 */ r_esp -= 4; W32(r_esp, 0x5291fbu); f_00529240();
    /* 005291fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005291fc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005291fe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00529200: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00529203: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00529204: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00529207: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052920a: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 0052920e: call 0x5299e0 */ r_esp -= 4; W32(r_esp, 0x529213u); f_005299e0();
    /* 00529213: jmp 0x529230 */ goto L_00529230;
L_00529215:; BB(0x00529215);
    /* 00529215: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00529217: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00529219: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052921b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052921d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00529220: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00529221: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00529224: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00529227: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 0052922b: call 0x5299e0 */ r_esp -= 4; W32(r_esp, 0x529230u); f_005299e0();
L_00529230:; BB(0x00529230);
    /* 00529230: mov esp, ebp */ r_esp = r_ebp;
    /* 00529232: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00529233: ret 0xc */ FN_RET(0x005291e0); r_esp += 16; return;
}

void f_00529240(void) /* sub_529240 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00529240);
    /* 00529240: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00529241: mov ebp, esp */ r_ebp = r_esp;
    /* 00529243: sub esp, 0x164 */ {  u32 a = r_esp; u32 b = 0x164u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00529249: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0052924e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00529250: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00529253: mov dword ptr [ebp - 0x164], ecx */ W32((u32)(r_ebp+0xfffffe9cu), r_ecx);
    /* 00529259: mov word ptr [ebp - 0x160], 0x23 */ W16((u32)(r_ebp+0xfffffea0u), 0x23u);
    /* 00529262: mov word ptr [ebp - 0x15e], 0x11 */ W16((u32)(r_ebp+0xfffffea2u), 0x11u);
    /* 0052926b: mov word ptr [ebp - 0x15c], 0xb */ W16((u32)(r_ebp+0xfffffea4u), 0xbu);
    /* 00529274: mov word ptr [ebp - 0x15a], 8 */ W16((u32)(r_ebp+0xfffffea6u), 0x8u);
    /* 0052927d: mov word ptr [ebp - 0x158], 6 */ W16((u32)(r_ebp+0xfffffea8u), 0x6u);
    /* 00529286: mov word ptr [ebp - 0x156], 5 */ W16((u32)(r_ebp+0xfffffeaau), 0x5u);
    /* 0052928f: mov word ptr [ebp - 0x154], 2 */ W16((u32)(r_ebp+0xfffffeacu), 0x2u);
    /* 00529298: mov word ptr [ebp - 0x152], 1 */ W16((u32)(r_ebp+0xfffffeaeu), 0x1u);
    /* 005292a1: mov word ptr [ebp - 0x150], 0 */ W16((u32)(r_ebp+0xfffffeb0u), 0x0u);
    /* 005292aa: mov word ptr [ebp - 0x14e], 0 */ W16((u32)(r_ebp+0xfffffeb2u), 0x0u);
    /* 005292b3: mov word ptr [ebp - 0x14c], 0 */ W16((u32)(r_ebp+0xfffffeb4u), 0x0u);
    /* 005292bc: mov word ptr [ebp - 0x14a], 0 */ W16((u32)(r_ebp+0xfffffeb6u), 0x0u);
    /* 005292c5: mov word ptr [ebp - 0x148], 0 */ W16((u32)(r_ebp+0xfffffeb8u), 0x0u);
    /* 005292ce: mov word ptr [ebp - 0x146], 0 */ W16((u32)(r_ebp+0xfffffebau), 0x0u);
    /* 005292d7: mov word ptr [ebp - 0x144], 0 */ W16((u32)(r_ebp+0xfffffebcu), 0x0u);
    /* 005292e0: mov word ptr [ebp - 0x142], 0 */ W16((u32)(r_ebp+0xfffffebeu), 0x0u);
    /* 005292e9: mov word ptr [ebp - 0x140], 0 */ W16((u32)(r_ebp+0xfffffec0u), 0x0u);
    /* 005292f2: mov word ptr [ebp - 0x13e], 0 */ W16((u32)(r_ebp+0xfffffec2u), 0x0u);
    /* 005292fb: mov word ptr [ebp - 0x13c], 0 */ W16((u32)(r_ebp+0xfffffec4u), 0x0u);
    /* 00529304: mov word ptr [ebp - 0x13a], 0 */ W16((u32)(r_ebp+0xfffffec6u), 0x0u);
    /* 0052930d: mov word ptr [ebp - 0x138], 0 */ W16((u32)(r_ebp+0xfffffec8u), 0x0u);
    /* 00529316: mov word ptr [ebp - 0x136], 0 */ W16((u32)(r_ebp+0xfffffecau), 0x0u);
    /* 0052931f: mov word ptr [ebp - 0x134], 0 */ W16((u32)(r_ebp+0xfffffeccu), 0x0u);
    /* 00529328: mov word ptr [ebp - 0x132], 0 */ W16((u32)(r_ebp+0xfffffeceu), 0x0u);
    /* 00529331: mov word ptr [ebp - 0x130], 0 */ W16((u32)(r_ebp+0xfffffed0u), 0x0u);
    /* 0052933a: mov word ptr [ebp - 0x12e], 0 */ W16((u32)(r_ebp+0xfffffed2u), 0x0u);
    /* 00529343: mov word ptr [ebp - 0x12c], 0 */ W16((u32)(r_ebp+0xfffffed4u), 0x0u);
    /* 0052934c: mov word ptr [ebp - 0x12a], 0 */ W16((u32)(r_ebp+0xfffffed6u), 0x0u);
    /* 00529355: mov word ptr [ebp - 0x128], 0 */ W16((u32)(r_ebp+0xfffffed8u), 0x0u);
    /* 0052935e: mov word ptr [ebp - 0x126], 0 */ W16((u32)(r_ebp+0xfffffedau), 0x0u);
    /* 00529367: mov word ptr [ebp - 0x124], 0 */ W16((u32)(r_ebp+0xfffffedcu), 0x0u);
    /* 00529370: mov word ptr [ebp - 0x122], 0 */ W16((u32)(r_ebp+0xfffffedeu), 0x0u);
    /* 00529379: mov word ptr [ebp - 0x120], 0 */ W16((u32)(r_ebp+0xfffffee0u), 0x0u);
    /* 00529382: mov word ptr [ebp - 0x11e], 0 */ W16((u32)(r_ebp+0xfffffee2u), 0x0u);
    /* 0052938b: mov word ptr [ebp - 0x11c], 0 */ W16((u32)(r_ebp+0xfffffee4u), 0x0u);
    /* 00529394: mov word ptr [ebp - 0x11a], 0 */ W16((u32)(r_ebp+0xfffffee6u), 0x0u);
    /* 0052939d: mov word ptr [ebp - 0x118], 0 */ W16((u32)(r_ebp+0xfffffee8u), 0x0u);
    /* 005293a6: mov word ptr [ebp - 0x116], 0 */ W16((u32)(r_ebp+0xfffffeeau), 0x0u);
    /* 005293af: mov word ptr [ebp - 0x114], 0 */ W16((u32)(r_ebp+0xfffffeecu), 0x0u);
    /* 005293b8: mov word ptr [ebp - 0x112], 0 */ W16((u32)(r_ebp+0xfffffeeeu), 0x0u);
    /* 005293c1: mov word ptr [ebp - 0x110], 0 */ W16((u32)(r_ebp+0xfffffef0u), 0x0u);
    /* 005293ca: mov word ptr [ebp - 0x10e], 0 */ W16((u32)(r_ebp+0xfffffef2u), 0x0u);
    /* 005293d3: mov word ptr [ebp - 0x10c], 0 */ W16((u32)(r_ebp+0xfffffef4u), 0x0u);
    /* 005293dc: mov word ptr [ebp - 0x10a], 0 */ W16((u32)(r_ebp+0xfffffef6u), 0x0u);
    /* 005293e5: mov word ptr [ebp - 0x108], 0 */ W16((u32)(r_ebp+0xfffffef8u), 0x0u);
    /* 005293ee: mov word ptr [ebp - 0x106], 0 */ W16((u32)(r_ebp+0xfffffefau), 0x0u);
    /* 005293f7: mov word ptr [ebp - 0x104], 1 */ W16((u32)(r_ebp+0xfffffefcu), 0x1u);
    /* 00529400: mov word ptr [ebp - 0x102], 1 */ W16((u32)(r_ebp+0xfffffefeu), 0x1u);
    /* 00529409: mov word ptr [ebp - 0x100], 1 */ W16((u32)(r_ebp+0xffffff00u), 0x1u);
    /* 00529412: mov word ptr [ebp - 0xfe], 1 */ W16((u32)(r_ebp+0xffffff02u), 0x1u);
    /* 0052941b: mov word ptr [ebp - 0xfc], 1 */ W16((u32)(r_ebp+0xffffff04u), 0x1u);
    /* 00529424: mov word ptr [ebp - 0xfa], 1 */ W16((u32)(r_ebp+0xffffff06u), 0x1u);
    /* 0052942d: mov word ptr [ebp - 0xf8], 1 */ W16((u32)(r_ebp+0xffffff08u), 0x1u);
    /* 00529436: mov word ptr [ebp - 0xf6], 1 */ W16((u32)(r_ebp+0xffffff0au), 0x1u);
    /* 0052943f: mov word ptr [ebp - 0xf4], 1 */ W16((u32)(r_ebp+0xffffff0cu), 0x1u);
    /* 00529448: mov word ptr [ebp - 0xf2], 1 */ W16((u32)(r_ebp+0xffffff0eu), 0x1u);
    /* 00529451: mov word ptr [ebp - 0xf0], 1 */ W16((u32)(r_ebp+0xffffff10u), 0x1u);
    /* 0052945a: mov word ptr [ebp - 0xee], 1 */ W16((u32)(r_ebp+0xffffff12u), 0x1u);
    /* 00529463: mov word ptr [ebp - 0xec], 1 */ W16((u32)(r_ebp+0xffffff14u), 0x1u);
    /* 0052946c: mov word ptr [ebp - 0xea], 1 */ W16((u32)(r_ebp+0xffffff16u), 0x1u);
    /* 00529475: mov word ptr [ebp - 0xe8], 1 */ W16((u32)(r_ebp+0xffffff18u), 0x1u);
    /* 0052947e: mov word ptr [ebp - 0xe6], 1 */ W16((u32)(r_ebp+0xffffff1au), 0x1u);
    /* 00529487: mov word ptr [ebp - 0xe4], 1 */ W16((u32)(r_ebp+0xffffff1cu), 0x1u);
    /* 00529490: mov word ptr [ebp - 0xe2], 1 */ W16((u32)(r_ebp+0xffffff1eu), 0x1u);
    /* 00529499: mov word ptr [ebp - 0xe0], 1 */ W16((u32)(r_ebp+0xffffff20u), 0x1u);
    /* 005294a2: mov word ptr [ebp - 0xde], 1 */ W16((u32)(r_ebp+0xffffff22u), 0x1u);
    /* 005294ab: mov word ptr [ebp - 0xdc], 1 */ W16((u32)(r_ebp+0xffffff24u), 0x1u);
    /* 005294b4: mov word ptr [ebp - 0xda], 1 */ W16((u32)(r_ebp+0xffffff26u), 0x1u);
    /* 005294bd: mov word ptr [ebp - 0xd8], 1 */ W16((u32)(r_ebp+0xffffff28u), 0x1u);
    /* 005294c6: mov word ptr [ebp - 0xd6], 1 */ W16((u32)(r_ebp+0xffffff2au), 0x1u);
    /* 005294cf: mov word ptr [ebp - 0xd4], 1 */ W16((u32)(r_ebp+0xffffff2cu), 0x1u);
    /* 005294d8: mov word ptr [ebp - 0xd2], 1 */ W16((u32)(r_ebp+0xffffff2eu), 0x1u);
    /* 005294e1: mov word ptr [ebp - 0xd0], 1 */ W16((u32)(r_ebp+0xffffff30u), 0x1u);
    /* 005294ea: mov word ptr [ebp - 0xce], 1 */ W16((u32)(r_ebp+0xffffff32u), 0x1u);
    /* 005294f3: mov word ptr [ebp - 0xcc], 1 */ W16((u32)(r_ebp+0xffffff34u), 0x1u);
    /* 005294fc: mov word ptr [ebp - 0xca], 1 */ W16((u32)(r_ebp+0xffffff36u), 0x1u);
    /* 00529505: mov word ptr [ebp - 0xc8], 1 */ W16((u32)(r_ebp+0xffffff38u), 0x1u);
    /* 0052950e: mov word ptr [ebp - 0xc6], 1 */ W16((u32)(r_ebp+0xffffff3au), 0x1u);
    /* 00529517: mov word ptr [ebp - 0xc4], 1 */ W16((u32)(r_ebp+0xffffff3cu), 0x1u);
    /* 00529520: mov word ptr [ebp - 0xc2], 1 */ W16((u32)(r_ebp+0xffffff3eu), 0x1u);
    /* 00529529: mov word ptr [ebp - 0xc0], 1 */ W16((u32)(r_ebp+0xffffff40u), 0x1u);
    /* 00529532: mov word ptr [ebp - 0xbe], 1 */ W16((u32)(r_ebp+0xffffff42u), 0x1u);
    /* 0052953b: mov word ptr [ebp - 0xbc], 1 */ W16((u32)(r_ebp+0xffffff44u), 0x1u);
    /* 00529544: mov word ptr [ebp - 0xba], 1 */ W16((u32)(r_ebp+0xffffff46u), 0x1u);
    /* 0052954d: mov word ptr [ebp - 0xb8], 1 */ W16((u32)(r_ebp+0xffffff48u), 0x1u);
    /* 00529556: mov word ptr [ebp - 0xb6], 1 */ W16((u32)(r_ebp+0xffffff4au), 0x1u);
    /* 0052955f: mov word ptr [ebp - 0xb4], 1 */ W16((u32)(r_ebp+0xffffff4cu), 0x1u);
    /* 00529568: mov word ptr [ebp - 0xb2], 1 */ W16((u32)(r_ebp+0xffffff4eu), 0x1u);
    /* 00529571: mov word ptr [ebp - 0xb0], 1 */ W16((u32)(r_ebp+0xffffff50u), 0x1u);
    /* 0052957a: mov word ptr [ebp - 0xae], 1 */ W16((u32)(r_ebp+0xffffff52u), 0x1u);
    /* 00529583: mov word ptr [ebp - 0xac], 1 */ W16((u32)(r_ebp+0xffffff54u), 0x1u);
    /* 0052958c: mov word ptr [ebp - 0xaa], 1 */ W16((u32)(r_ebp+0xffffff56u), 0x1u);
    /* 00529595: mov word ptr [ebp - 0xa8], 1 */ W16((u32)(r_ebp+0xffffff58u), 0x1u);
    /* 0052959e: mov word ptr [ebp - 0xa6], 1 */ W16((u32)(r_ebp+0xffffff5au), 0x1u);
    /* 005295a7: mov word ptr [ebp - 0xa4], 1 */ W16((u32)(r_ebp+0xffffff5cu), 0x1u);
    /* 005295b0: mov word ptr [ebp - 0xa2], 1 */ W16((u32)(r_ebp+0xffffff5eu), 0x1u);
    /* 005295b9: mov word ptr [ebp - 0xa0], 1 */ W16((u32)(r_ebp+0xffffff60u), 0x1u);
    /* 005295c2: mov word ptr [ebp - 0x9e], 1 */ W16((u32)(r_ebp+0xffffff62u), 0x1u);
    /* 005295cb: mov word ptr [ebp - 0x9c], 1 */ W16((u32)(r_ebp+0xffffff64u), 0x1u);
    /* 005295d4: mov word ptr [ebp - 0x9a], 1 */ W16((u32)(r_ebp+0xffffff66u), 0x1u);
    /* 005295dd: mov word ptr [ebp - 0x98], 1 */ W16((u32)(r_ebp+0xffffff68u), 0x1u);
    /* 005295e6: mov word ptr [ebp - 0x96], 1 */ W16((u32)(r_ebp+0xffffff6au), 0x1u);
    /* 005295ef: mov word ptr [ebp - 0x94], 1 */ W16((u32)(r_ebp+0xffffff6cu), 0x1u);
    /* 005295f8: mov word ptr [ebp - 0x92], 1 */ W16((u32)(r_ebp+0xffffff6eu), 0x1u);
    /* 00529601: mov word ptr [ebp - 0x90], 1 */ W16((u32)(r_ebp+0xffffff70u), 0x1u);
    /* 0052960a: mov word ptr [ebp - 0x8e], 1 */ W16((u32)(r_ebp+0xffffff72u), 0x1u);
    /* 00529613: mov word ptr [ebp - 0x8c], 1 */ W16((u32)(r_ebp+0xffffff74u), 0x1u);
    /* 0052961c: mov word ptr [ebp - 0x8a], 2 */ W16((u32)(r_ebp+0xffffff76u), 0x2u);
    /* 00529625: mov word ptr [ebp - 0x88], 2 */ W16((u32)(r_ebp+0xffffff78u), 0x2u);
    /* 0052962e: mov word ptr [ebp - 0x86], 2 */ W16((u32)(r_ebp+0xffffff7au), 0x2u);
    /* 00529637: mov word ptr [ebp - 0x84], 2 */ W16((u32)(r_ebp+0xffffff7cu), 0x2u);
    /* 00529640: mov word ptr [ebp - 0x82], 2 */ W16((u32)(r_ebp+0xffffff7eu), 0x2u);
    /* 00529649: mov word ptr [ebp - 0x80], 2 */ W16((u32)(r_ebp+0xffffff80u), 0x2u);
    /* 0052964f: mov word ptr [ebp - 0x7e], 2 */ W16((u32)(r_ebp+0xffffff82u), 0x2u);
    /* 00529655: mov word ptr [ebp - 0x7c], 2 */ W16((u32)(r_ebp+0xffffff84u), 0x2u);
    /* 0052965b: mov word ptr [ebp - 0x7a], 2 */ W16((u32)(r_ebp+0xffffff86u), 0x2u);
    /* 00529661: mov word ptr [ebp - 0x78], 2 */ W16((u32)(r_ebp+0xffffff88u), 0x2u);
    /* 00529667: mov word ptr [ebp - 0x76], 2 */ W16((u32)(r_ebp+0xffffff8au), 0x2u);
    /* 0052966d: mov word ptr [ebp - 0x74], 2 */ W16((u32)(r_ebp+0xffffff8cu), 0x2u);
    /* 00529673: mov word ptr [ebp - 0x72], 3 */ W16((u32)(r_ebp+0xffffff8eu), 0x3u);
    /* 00529679: mov word ptr [ebp - 0x70], 3 */ W16((u32)(r_ebp+0xffffff90u), 0x3u);
    /* 0052967f: mov word ptr [ebp - 0x6e], 3 */ W16((u32)(r_ebp+0xffffff92u), 0x3u);
    /* 00529685: mov word ptr [ebp - 0x6c], 3 */ W16((u32)(r_ebp+0xffffff94u), 0x3u);
    /* 0052968b: mov word ptr [ebp - 0x6a], 3 */ W16((u32)(r_ebp+0xffffff96u), 0x3u);
    /* 00529691: mov word ptr [ebp - 0x68], 3 */ W16((u32)(r_ebp+0xffffff98u), 0x3u);
    /* 00529697: mov word ptr [ebp - 0x66], 3 */ W16((u32)(r_ebp+0xffffff9au), 0x3u);
    /* 0052969d: mov word ptr [ebp - 0x64], 3 */ W16((u32)(r_ebp+0xffffff9cu), 0x3u);
    /* 005296a3: mov word ptr [ebp - 0x62], 3 */ W16((u32)(r_ebp+0xffffff9eu), 0x3u);
    /* 005296a9: mov word ptr [ebp - 0x60], 3 */ W16((u32)(r_ebp+0xffffffa0u), 0x3u);
    /* 005296af: mov word ptr [ebp - 0x5e], 3 */ W16((u32)(r_ebp+0xffffffa2u), 0x3u);
    /* 005296b5: mov word ptr [ebp - 0x5c], 3 */ W16((u32)(r_ebp+0xffffffa4u), 0x3u);
    /* 005296bb: mov word ptr [ebp - 0x5a], 3 */ W16((u32)(r_ebp+0xffffffa6u), 0x3u);
    /* 005296c1: mov word ptr [ebp - 0x58], 3 */ W16((u32)(r_ebp+0xffffffa8u), 0x3u);
    /* 005296c7: mov word ptr [ebp - 0x56], 3 */ W16((u32)(r_ebp+0xffffffaau), 0x3u);
    /* 005296cd: mov word ptr [ebp - 0x54], 3 */ W16((u32)(r_ebp+0xffffffacu), 0x3u);
    /* 005296d3: mov word ptr [ebp - 0x52], 3 */ W16((u32)(r_ebp+0xffffffaeu), 0x3u);
    /* 005296d9: mov word ptr [ebp - 0x50], 3 */ W16((u32)(r_ebp+0xffffffb0u), 0x3u);
    /* 005296df: mov word ptr [ebp - 0x4e], 3 */ W16((u32)(r_ebp+0xffffffb2u), 0x3u);
    /* 005296e5: mov word ptr [ebp - 0x4c], 3 */ W16((u32)(r_ebp+0xffffffb4u), 0x3u);
    /* 005296eb: mov word ptr [ebp - 0x4a], 3 */ W16((u32)(r_ebp+0xffffffb6u), 0x3u);
    /* 005296f1: mov word ptr [ebp - 0x48], 3 */ W16((u32)(r_ebp+0xffffffb8u), 0x3u);
    /* 005296f7: mov word ptr [ebp - 0x46], 4 */ W16((u32)(r_ebp+0xffffffbau), 0x4u);
    /* 005296fd: mov word ptr [ebp - 0x44], 5 */ W16((u32)(r_ebp+0xffffffbcu), 0x5u);
    /* 00529703: mov word ptr [ebp - 0x42], 5 */ W16((u32)(r_ebp+0xffffffbeu), 0x5u);
    /* 00529709: mov word ptr [ebp - 0x40], 5 */ W16((u32)(r_ebp+0xffffffc0u), 0x5u);
    /* 0052970f: mov word ptr [ebp - 0x3e], 5 */ W16((u32)(r_ebp+0xffffffc2u), 0x5u);
    /* 00529715: mov word ptr [ebp - 0x3c], 5 */ W16((u32)(r_ebp+0xffffffc4u), 0x5u);
    /* 0052971b: mov word ptr [ebp - 0x3a], 5 */ W16((u32)(r_ebp+0xffffffc6u), 0x5u);
    /* 00529721: mov word ptr [ebp - 0x38], 5 */ W16((u32)(r_ebp+0xffffffc8u), 0x5u);
    /* 00529727: mov word ptr [ebp - 0x36], 5 */ W16((u32)(r_ebp+0xffffffcau), 0x5u);
    /* 0052972d: mov word ptr [ebp - 0x34], 5 */ W16((u32)(r_ebp+0xffffffccu), 0x5u);
    /* 00529733: mov word ptr [ebp - 0x32], 5 */ W16((u32)(r_ebp+0xffffffceu), 0x5u);
    /* 00529739: mov word ptr [ebp - 0x30], 5 */ W16((u32)(r_ebp+0xffffffd0u), 0x5u);
    /* 0052973f: mov word ptr [ebp - 0x2e], 6 */ W16((u32)(r_ebp+0xffffffd2u), 0x6u);
    /* 00529745: mov word ptr [ebp - 0x2c], 6 */ W16((u32)(r_ebp+0xffffffd4u), 0x6u);
    /* 0052974b: mov word ptr [ebp - 0x2a], 6 */ W16((u32)(r_ebp+0xffffffd6u), 0x6u);
    /* 00529751: mov word ptr [ebp - 0x28], 6 */ W16((u32)(r_ebp+0xffffffd8u), 0x6u);
    /* 00529757: mov word ptr [ebp - 0x26], 6 */ W16((u32)(r_ebp+0xffffffdau), 0x6u);
    /* 0052975d: mov word ptr [ebp - 0x24], 6 */ W16((u32)(r_ebp+0xffffffdcu), 0x6u);
    /* 00529763: mov word ptr [ebp - 0x22], 7 */ W16((u32)(r_ebp+0xffffffdeu), 0x7u);
    /* 00529769: mov word ptr [ebp - 0x20], 7 */ W16((u32)(r_ebp+0xffffffe0u), 0x7u);
    /* 0052976f: mov word ptr [ebp - 0x1e], 7 */ W16((u32)(r_ebp+0xffffffe2u), 0x7u);
    /* 00529775: mov word ptr [ebp - 0x1c], 7 */ W16((u32)(r_ebp+0xffffffe4u), 0x7u);
    /* 0052977b: mov word ptr [ebp - 0x1a], 7 */ W16((u32)(r_ebp+0xffffffe6u), 0x7u);
    /* 00529781: mov word ptr [ebp - 0x18], 7 */ W16((u32)(r_ebp+0xffffffe8u), 0x7u);
    /* 00529787: mov word ptr [ebp - 0x16], 1 */ W16((u32)(r_ebp+0xffffffeau), 0x1u);
    /* 0052978d: mov word ptr [ebp - 0x14], 2 */ W16((u32)(r_ebp+0xffffffecu), 0x2u);
    /* 00529793: mov word ptr [ebp - 0x12], 2 */ W16((u32)(r_ebp+0xffffffeeu), 0x2u);
    /* 00529799: mov word ptr [ebp - 0x10], 2 */ W16((u32)(r_ebp+0xfffffff0u), 0x2u);
    /* 0052979f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005297a2: movsx ecx, word ptr [ebp + eax*2 - 0x150] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+r_eax*2+0xfffffeb0u));
    /* 005297aa: movsx eax, word ptr [ebp + ecx*2 - 0x160] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+r_ecx*2+0xfffffea0u));
    /* 005297b2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005297b5: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005297b7: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x5297bcu); f_00686d72();
    /* 005297bc: mov esp, ebp */ r_esp = r_ebp;
    /* 005297be: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005297bf: ret 4 */ FN_RET(0x00529240); r_esp += 8; return;
}

void f_005299e0(void) /* sub_5299E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005299e0);
    /* 005299e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005299e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005299e3: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005299e6: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 005299e9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005299ec: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005299ef: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005299f2: lea edx, [ecx + eax + 0x48] */ r_edx = (u32)(r_ecx+r_eax+0x48u);
    /* 005299f6: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005299f9: mov ecx, dword ptr [edx + eax*8] */ r_ecx = R32((u32)(r_edx+r_eax*8));
    /* 005299fc: mov edx, dword ptr [edx + eax*8 + 4] */ r_edx = R32((u32)(r_edx+r_eax*8+0x4u));
    /* 00529a00: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00529a03: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00529a06: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00529a08: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00529a0a: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x529a0fu); f_0064c8a0();
    /* 00529a0f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00529a12: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00529a15: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 00529a18: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00529a1b: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00529a1e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00529a21: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00529a24: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00529a26: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00529a28: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x529a2du); f_0064c8a0();
    /* 00529a2d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00529a30: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00529a33: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 00529a36: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00529a39: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00529a3c: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00529a3f: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00529a42: fild dword ptr [ebp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x14u)));
    /* 00529a45: fidiv dword ptr [ebp + 0x18] */ ST(0) = ST(0) / (long double)(i32)R32((u32)(r_ebp+0x18u));
    /* 00529a48: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 00529a4b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00529a4e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00529a4f: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x529a54u); f_005dcb00();
    /* 00529a54: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00529a57: mov ecx, eax */ r_ecx = r_eax;
    /* 00529a59: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x529a5eu); f_005d5a50();
    /* 00529a5e: cmp eax, 0x3b9aca00 */ {  u32 a = r_eax; u32 b = 0x3b9aca00u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00529a63: jl 0x529a6a */ if ((fS!=fO)) goto L_00529a6a;
L_00529a65:; BB(0x00529a65);
    /* 00529a65: jmp 0x529b99 */ goto L_00529b99;
L_00529a6a:; BB(0x00529a6a);
    /* 00529a6a: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00529a6d: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 00529a70: cmp dword ptr [ebp - 0x48], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00529a74: je 0x529a81 */ if (fZ) goto L_00529a81;
L_00529a76:; BB(0x00529a76);
    /* 00529a76: cmp dword ptr [ebp - 0x48], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00529a7a: je 0x529ac0 */ if (fZ) goto L_00529ac0;
L_00529a7c:; BB(0x00529a7c);
    /* 00529a7c: jmp 0x529b99 */ goto L_00529b99;
L_00529a81:; BB(0x00529a81);
    /* 00529a81: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00529a84: imul eax, eax, -1 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xffffffffu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00529a87: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00529a8a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00529a8d: imul ecx, ecx, -1 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xffffffffu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00529a90: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00529a93: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00529a96: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00529a97: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00529a9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00529a9b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00529a9e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00529a9f: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x529aa4u); f_005dcb00();
    /* 00529aa4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00529aa7: mov ecx, eax */ r_ecx = r_eax;
    /* 00529aa9: call 0x5d5fb0 */ r_esp -= 4; W32(r_esp, 0x529aaeu); f_005d5fb0();
    /* 00529aae: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00529ab1: mov dword ptr [edx + 0xf0], 0 */ W32((u32)(r_edx+0xf0u), 0x0u);
    /* 00529abb: jmp 0x529b99 */ goto L_00529b99;
L_00529ac0:; BB(0x00529ac0);
    /* 00529ac0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00529ac3: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00529ac6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00529ac9: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00529acc: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00529acf: fld qword ptr [ebp - 0x18] */ FPUSH(R_F64((u32)(r_ebp+0xffffffe8u)));
    /* 00529ad2: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 00529ad5: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 00529ad8: call 0x64c560 */ r_esp -= 4; W32(r_esp, 0x529addu); f_0064c560();
    /* 00529add: cmp dword ptr [ebp - 0x20], 0x3b9aca00 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x3b9aca00u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00529ae4: jle 0x529aed */ if ((fZ||fS!=fO)) goto L_00529aed;
L_00529ae6:; BB(0x00529ae6);
    /* 00529ae6: mov dword ptr [ebp - 0x20], 0x3b9aca00 */ W32((u32)(r_ebp+0xffffffe0u), 0x3b9aca00u);
L_00529aed:; BB(0x00529aed);
    /* 00529aed: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00529af0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00529af1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00529af4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00529af5: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 00529af8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00529af9: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 00529afc: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x529b01u); f_0064c5c0();
    /* 00529b01: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00529b03: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00529b06: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00529b09: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00529b0c: cmp dword ptr [ebp - 0x10], 0x3b9aca00 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3b9aca00u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00529b13: jl 0x529b36 */ if ((fS!=fO)) goto L_00529b36;
L_00529b15:; BB(0x00529b15);
    /* 00529b15: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00529b17: push 0x3b9aca00 */ { u32 v = 0x3b9aca00u; r_esp -= 4; W32(r_esp, v); }
    /* 00529b1c: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x529b21u); f_0064c8a0();
    /* 00529b21: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00529b24: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00529b27: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 00529b2a: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00529b2d: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00529b30: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00529b33: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_00529b36:; BB(0x00529b36);
    /* 00529b36: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00529b39: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00529b3a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00529b3d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00529b3e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00529b41: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00529b42: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x529b47u); f_005dcb00();
    /* 00529b47: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00529b4a: mov ecx, eax */ r_ecx = r_eax;
    /* 00529b4c: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x529b51u); f_005d5cf0();
    /* 00529b51: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00529b54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00529b55: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00529b58: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00529b59: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00529b5c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00529b5d: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x529b62u); f_005dcb00();
    /* 00529b62: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00529b65: mov ecx, eax */ r_ecx = r_eax;
    /* 00529b67: call 0x5d5fb0 */ r_esp -= 4; W32(r_esp, 0x529b6cu); f_005d5fb0();
    /* 00529b6c: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00529b6f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00529b70: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00529b73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00529b74: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00529b77: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00529b78: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00529b7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00529b7c: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00529b7f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00529b81: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00529b84: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00529b8a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x529b8cu); call_ind(t); }
    /* 00529b8c: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00529b8f: mov dword ptr [ecx + 0xf0], 1 */ W32((u32)(r_ecx+0xf0u), 0x1u);
L_00529b99:; BB(0x00529b99);
    /* 00529b99: mov esp, ebp */ r_esp = r_ebp;
    /* 00529b9b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00529b9c: ret 0x14 */ FN_RET(0x005299e0); r_esp += 24; return;
}

