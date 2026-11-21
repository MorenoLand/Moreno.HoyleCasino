#include "protos.h"

void f_0040b260(void) /* blackjackai::func_0040b260 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040b260);
    /* 0040b260: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040b261: mov ebp, esp */ r_ebp = r_esp;
    /* 0040b263: sub esp, 0x4f0 */ {  u32 a = r_esp; u32 b = 0x4f0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040b269: mov dword ptr [ebp - 0x4ec], ecx */ W32((u32)(r_ebp+0xfffffb14u), r_ecx);
    /* 0040b26f: mov dword ptr [ebp - 0x4e0], 2 */ W32((u32)(r_ebp+0xfffffb20u), 0x2u);
    /* 0040b279: mov dword ptr [ebp - 0x4dc], 2 */ W32((u32)(r_ebp+0xfffffb24u), 0x2u);
    /* 0040b283: mov dword ptr [ebp - 0x4d8], 2 */ W32((u32)(r_ebp+0xfffffb28u), 0x2u);
    /* 0040b28d: mov dword ptr [ebp - 0x4d4], 2 */ W32((u32)(r_ebp+0xfffffb2cu), 0x2u);
    /* 0040b297: mov dword ptr [ebp - 0x4d0], 2 */ W32((u32)(r_ebp+0xfffffb30u), 0x2u);
    /* 0040b2a1: mov dword ptr [ebp - 0x4cc], 2 */ W32((u32)(r_ebp+0xfffffb34u), 0x2u);
    /* 0040b2ab: mov dword ptr [ebp - 0x4c8], 2 */ W32((u32)(r_ebp+0xfffffb38u), 0x2u);
    /* 0040b2b5: mov dword ptr [ebp - 0x4c4], 2 */ W32((u32)(r_ebp+0xfffffb3cu), 0x2u);
    /* 0040b2bf: mov dword ptr [ebp - 0x4c0], 2 */ W32((u32)(r_ebp+0xfffffb40u), 0x2u);
    /* 0040b2c9: mov dword ptr [ebp - 0x4bc], 2 */ W32((u32)(r_ebp+0xfffffb44u), 0x2u);
    /* 0040b2d3: mov dword ptr [ebp - 0x4b8], 1 */ W32((u32)(r_ebp+0xfffffb48u), 0x1u);
    /* 0040b2dd: mov dword ptr [ebp - 0x4b4], 1 */ W32((u32)(r_ebp+0xfffffb4cu), 0x1u);
    /* 0040b2e7: mov dword ptr [ebp - 0x4b0], 1 */ W32((u32)(r_ebp+0xfffffb50u), 0x1u);
    /* 0040b2f1: mov dword ptr [ebp - 0x4ac], 1 */ W32((u32)(r_ebp+0xfffffb54u), 0x1u);
    /* 0040b2fb: mov dword ptr [ebp - 0x4a8], 1 */ W32((u32)(r_ebp+0xfffffb58u), 0x1u);
    /* 0040b305: mov dword ptr [ebp - 0x4a4], 1 */ W32((u32)(r_ebp+0xfffffb5cu), 0x1u);
    /* 0040b30f: mov dword ptr [ebp - 0x4a0], 1 */ W32((u32)(r_ebp+0xfffffb60u), 0x1u);
    /* 0040b319: mov dword ptr [ebp - 0x49c], 1 */ W32((u32)(r_ebp+0xfffffb64u), 0x1u);
    /* 0040b323: mov dword ptr [ebp - 0x498], 1 */ W32((u32)(r_ebp+0xfffffb68u), 0x1u);
    /* 0040b32d: mov dword ptr [ebp - 0x494], 1 */ W32((u32)(r_ebp+0xfffffb6cu), 0x1u);
    /* 0040b337: mov dword ptr [ebp - 0x490], 1 */ W32((u32)(r_ebp+0xfffffb70u), 0x1u);
    /* 0040b341: mov dword ptr [ebp - 0x48c], 1 */ W32((u32)(r_ebp+0xfffffb74u), 0x1u);
    /* 0040b34b: mov dword ptr [ebp - 0x488], 1 */ W32((u32)(r_ebp+0xfffffb78u), 0x1u);
    /* 0040b355: mov dword ptr [ebp - 0x484], 1 */ W32((u32)(r_ebp+0xfffffb7cu), 0x1u);
    /* 0040b35f: mov dword ptr [ebp - 0x480], 1 */ W32((u32)(r_ebp+0xfffffb80u), 0x1u);
    /* 0040b369: mov dword ptr [ebp - 0x47c], 1 */ W32((u32)(r_ebp+0xfffffb84u), 0x1u);
    /* 0040b373: mov dword ptr [ebp - 0x478], 1 */ W32((u32)(r_ebp+0xfffffb88u), 0x1u);
    /* 0040b37d: mov dword ptr [ebp - 0x474], 1 */ W32((u32)(r_ebp+0xfffffb8cu), 0x1u);
    /* 0040b387: mov dword ptr [ebp - 0x470], 1 */ W32((u32)(r_ebp+0xfffffb90u), 0x1u);
    /* 0040b391: mov dword ptr [ebp - 0x46c], 1 */ W32((u32)(r_ebp+0xfffffb94u), 0x1u);
    /* 0040b39b: mov dword ptr [ebp - 0x468], 1 */ W32((u32)(r_ebp+0xfffffb98u), 0x1u);
    /* 0040b3a5: mov dword ptr [ebp - 0x464], 1 */ W32((u32)(r_ebp+0xfffffb9cu), 0x1u);
    /* 0040b3af: mov dword ptr [ebp - 0x460], 1 */ W32((u32)(r_ebp+0xfffffba0u), 0x1u);
    /* 0040b3b9: mov dword ptr [ebp - 0x45c], 1 */ W32((u32)(r_ebp+0xfffffba4u), 0x1u);
    /* 0040b3c3: mov dword ptr [ebp - 0x458], 1 */ W32((u32)(r_ebp+0xfffffba8u), 0x1u);
    /* 0040b3cd: mov dword ptr [ebp - 0x454], 1 */ W32((u32)(r_ebp+0xfffffbacu), 0x1u);
    /* 0040b3d7: mov dword ptr [ebp - 0x450], 1 */ W32((u32)(r_ebp+0xfffffbb0u), 0x1u);
    /* 0040b3e1: mov dword ptr [ebp - 0x44c], 1 */ W32((u32)(r_ebp+0xfffffbb4u), 0x1u);
    /* 0040b3eb: mov dword ptr [ebp - 0x448], 1 */ W32((u32)(r_ebp+0xfffffbb8u), 0x1u);
    /* 0040b3f5: mov dword ptr [ebp - 0x444], 1 */ W32((u32)(r_ebp+0xfffffbbcu), 0x1u);
    /* 0040b3ff: mov dword ptr [ebp - 0x440], 1 */ W32((u32)(r_ebp+0xfffffbc0u), 0x1u);
    /* 0040b409: mov dword ptr [ebp - 0x43c], 1 */ W32((u32)(r_ebp+0xfffffbc4u), 0x1u);
    /* 0040b413: mov dword ptr [ebp - 0x438], 1 */ W32((u32)(r_ebp+0xfffffbc8u), 0x1u);
    /* 0040b41d: mov dword ptr [ebp - 0x434], 1 */ W32((u32)(r_ebp+0xfffffbccu), 0x1u);
    /* 0040b427: mov dword ptr [ebp - 0x430], 1 */ W32((u32)(r_ebp+0xfffffbd0u), 0x1u);
    /* 0040b431: mov dword ptr [ebp - 0x42c], 1 */ W32((u32)(r_ebp+0xfffffbd4u), 0x1u);
    /* 0040b43b: mov dword ptr [ebp - 0x428], 1 */ W32((u32)(r_ebp+0xfffffbd8u), 0x1u);
    /* 0040b445: mov dword ptr [ebp - 0x424], 1 */ W32((u32)(r_ebp+0xfffffbdcu), 0x1u);
    /* 0040b44f: mov dword ptr [ebp - 0x420], 1 */ W32((u32)(r_ebp+0xfffffbe0u), 0x1u);
    /* 0040b459: mov dword ptr [ebp - 0x41c], 1 */ W32((u32)(r_ebp+0xfffffbe4u), 0x1u);
    /* 0040b463: mov dword ptr [ebp - 0x418], 1 */ W32((u32)(r_ebp+0xfffffbe8u), 0x1u);
    /* 0040b46d: mov dword ptr [ebp - 0x414], 3 */ W32((u32)(r_ebp+0xfffffbecu), 0x3u);
    /* 0040b477: mov dword ptr [ebp - 0x410], 3 */ W32((u32)(r_ebp+0xfffffbf0u), 0x3u);
    /* 0040b481: mov dword ptr [ebp - 0x40c], 3 */ W32((u32)(r_ebp+0xfffffbf4u), 0x3u);
    /* 0040b48b: mov dword ptr [ebp - 0x408], 3 */ W32((u32)(r_ebp+0xfffffbf8u), 0x3u);
    /* 0040b495: mov dword ptr [ebp - 0x404], 1 */ W32((u32)(r_ebp+0xfffffbfcu), 0x1u);
    /* 0040b49f: mov dword ptr [ebp - 0x400], 1 */ W32((u32)(r_ebp+0xfffffc00u), 0x1u);
    /* 0040b4a9: mov dword ptr [ebp - 0x3fc], 1 */ W32((u32)(r_ebp+0xfffffc04u), 0x1u);
    /* 0040b4b3: mov dword ptr [ebp - 0x3f8], 1 */ W32((u32)(r_ebp+0xfffffc08u), 0x1u);
    /* 0040b4bd: mov dword ptr [ebp - 0x3f4], 1 */ W32((u32)(r_ebp+0xfffffc0cu), 0x1u);
    /* 0040b4c7: mov dword ptr [ebp - 0x3f0], 3 */ W32((u32)(r_ebp+0xfffffc10u), 0x3u);
    /* 0040b4d1: mov dword ptr [ebp - 0x3ec], 3 */ W32((u32)(r_ebp+0xfffffc14u), 0x3u);
    /* 0040b4db: mov dword ptr [ebp - 0x3e8], 3 */ W32((u32)(r_ebp+0xfffffc18u), 0x3u);
    /* 0040b4e5: mov dword ptr [ebp - 0x3e4], 3 */ W32((u32)(r_ebp+0xfffffc1cu), 0x3u);
    /* 0040b4ef: mov dword ptr [ebp - 0x3e0], 3 */ W32((u32)(r_ebp+0xfffffc20u), 0x3u);
    /* 0040b4f9: mov dword ptr [ebp - 0x3dc], 3 */ W32((u32)(r_ebp+0xfffffc24u), 0x3u);
    /* 0040b503: mov dword ptr [ebp - 0x3d8], 3 */ W32((u32)(r_ebp+0xfffffc28u), 0x3u);
    /* 0040b50d: mov dword ptr [ebp - 0x3d4], 3 */ W32((u32)(r_ebp+0xfffffc2cu), 0x3u);
    /* 0040b517: mov dword ptr [ebp - 0x3d0], 1 */ W32((u32)(r_ebp+0xfffffc30u), 0x1u);
    /* 0040b521: mov dword ptr [ebp - 0x3cc], 1 */ W32((u32)(r_ebp+0xfffffc34u), 0x1u);
    /* 0040b52b: mov dword ptr [ebp - 0x3c8], 3 */ W32((u32)(r_ebp+0xfffffc38u), 0x3u);
    /* 0040b535: mov dword ptr [ebp - 0x3c4], 3 */ W32((u32)(r_ebp+0xfffffc3cu), 0x3u);
    /* 0040b53f: mov dword ptr [ebp - 0x3c0], 3 */ W32((u32)(r_ebp+0xfffffc40u), 0x3u);
    /* 0040b549: mov dword ptr [ebp - 0x3bc], 3 */ W32((u32)(r_ebp+0xfffffc44u), 0x3u);
    /* 0040b553: mov dword ptr [ebp - 0x3b8], 3 */ W32((u32)(r_ebp+0xfffffc48u), 0x3u);
    /* 0040b55d: mov dword ptr [ebp - 0x3b4], 3 */ W32((u32)(r_ebp+0xfffffc4cu), 0x3u);
    /* 0040b567: mov dword ptr [ebp - 0x3b0], 3 */ W32((u32)(r_ebp+0xfffffc50u), 0x3u);
    /* 0040b571: mov dword ptr [ebp - 0x3ac], 3 */ W32((u32)(r_ebp+0xfffffc54u), 0x3u);
    /* 0040b57b: mov dword ptr [ebp - 0x3a8], 3 */ W32((u32)(r_ebp+0xfffffc58u), 0x3u);
    /* 0040b585: mov dword ptr [ebp - 0x3a4], 1 */ W32((u32)(r_ebp+0xfffffc5cu), 0x1u);
    /* 0040b58f: mov dword ptr [ebp - 0x3a0], 1 */ W32((u32)(r_ebp+0xfffffc60u), 0x1u);
    /* 0040b599: mov dword ptr [ebp - 0x39c], 1 */ W32((u32)(r_ebp+0xfffffc64u), 0x1u);
    /* 0040b5a3: mov dword ptr [ebp - 0x398], 2 */ W32((u32)(r_ebp+0xfffffc68u), 0x2u);
    /* 0040b5ad: mov dword ptr [ebp - 0x394], 2 */ W32((u32)(r_ebp+0xfffffc6cu), 0x2u);
    /* 0040b5b7: mov dword ptr [ebp - 0x390], 2 */ W32((u32)(r_ebp+0xfffffc70u), 0x2u);
    /* 0040b5c1: mov dword ptr [ebp - 0x38c], 1 */ W32((u32)(r_ebp+0xfffffc74u), 0x1u);
    /* 0040b5cb: mov dword ptr [ebp - 0x388], 1 */ W32((u32)(r_ebp+0xfffffc78u), 0x1u);
    /* 0040b5d5: mov dword ptr [ebp - 0x384], 1 */ W32((u32)(r_ebp+0xfffffc7cu), 0x1u);
    /* 0040b5df: mov dword ptr [ebp - 0x380], 1 */ W32((u32)(r_ebp+0xfffffc80u), 0x1u);
    /* 0040b5e9: mov dword ptr [ebp - 0x37c], 1 */ W32((u32)(r_ebp+0xfffffc84u), 0x1u);
    /* 0040b5f3: mov dword ptr [ebp - 0x378], 2 */ W32((u32)(r_ebp+0xfffffc88u), 0x2u);
    /* 0040b5fd: mov dword ptr [ebp - 0x374], 2 */ W32((u32)(r_ebp+0xfffffc8cu), 0x2u);
    /* 0040b607: mov dword ptr [ebp - 0x370], 2 */ W32((u32)(r_ebp+0xfffffc90u), 0x2u);
    /* 0040b611: mov dword ptr [ebp - 0x36c], 2 */ W32((u32)(r_ebp+0xfffffc94u), 0x2u);
    /* 0040b61b: mov dword ptr [ebp - 0x368], 2 */ W32((u32)(r_ebp+0xfffffc98u), 0x2u);
    /* 0040b625: mov dword ptr [ebp - 0x364], 1 */ W32((u32)(r_ebp+0xfffffc9cu), 0x1u);
    /* 0040b62f: mov dword ptr [ebp - 0x360], 1 */ W32((u32)(r_ebp+0xfffffca0u), 0x1u);
    /* 0040b639: mov dword ptr [ebp - 0x35c], 1 */ W32((u32)(r_ebp+0xfffffca4u), 0x1u);
    /* 0040b643: mov dword ptr [ebp - 0x358], 1 */ W32((u32)(r_ebp+0xfffffca8u), 0x1u);
    /* 0040b64d: mov dword ptr [ebp - 0x354], 1 */ W32((u32)(r_ebp+0xfffffcacu), 0x1u);
    /* 0040b657: mov dword ptr [ebp - 0x350], 2 */ W32((u32)(r_ebp+0xfffffcb0u), 0x2u);
    /* 0040b661: mov dword ptr [ebp - 0x34c], 2 */ W32((u32)(r_ebp+0xfffffcb4u), 0x2u);
    /* 0040b66b: mov dword ptr [ebp - 0x348], 2 */ W32((u32)(r_ebp+0xfffffcb8u), 0x2u);
    /* 0040b675: mov dword ptr [ebp - 0x344], 2 */ W32((u32)(r_ebp+0xfffffcbcu), 0x2u);
    /* 0040b67f: mov dword ptr [ebp - 0x340], 2 */ W32((u32)(r_ebp+0xfffffcc0u), 0x2u);
    /* 0040b689: mov dword ptr [ebp - 0x33c], 1 */ W32((u32)(r_ebp+0xfffffcc4u), 0x1u);
    /* 0040b693: mov dword ptr [ebp - 0x338], 1 */ W32((u32)(r_ebp+0xfffffcc8u), 0x1u);
    /* 0040b69d: mov dword ptr [ebp - 0x334], 1 */ W32((u32)(r_ebp+0xfffffcccu), 0x1u);
    /* 0040b6a7: mov dword ptr [ebp - 0x330], 1 */ W32((u32)(r_ebp+0xfffffcd0u), 0x1u);
    /* 0040b6b1: mov dword ptr [ebp - 0x32c], 1 */ W32((u32)(r_ebp+0xfffffcd4u), 0x1u);
    /* 0040b6bb: mov dword ptr [ebp - 0x328], 2 */ W32((u32)(r_ebp+0xfffffcd8u), 0x2u);
    /* 0040b6c5: mov dword ptr [ebp - 0x324], 2 */ W32((u32)(r_ebp+0xfffffcdcu), 0x2u);
    /* 0040b6cf: mov dword ptr [ebp - 0x320], 2 */ W32((u32)(r_ebp+0xfffffce0u), 0x2u);
    /* 0040b6d9: mov dword ptr [ebp - 0x31c], 2 */ W32((u32)(r_ebp+0xfffffce4u), 0x2u);
    /* 0040b6e3: mov dword ptr [ebp - 0x318], 2 */ W32((u32)(r_ebp+0xfffffce8u), 0x2u);
    /* 0040b6ed: mov dword ptr [ebp - 0x314], 1 */ W32((u32)(r_ebp+0xfffffcecu), 0x1u);
    /* 0040b6f7: mov dword ptr [ebp - 0x310], 1 */ W32((u32)(r_ebp+0xfffffcf0u), 0x1u);
    /* 0040b701: mov dword ptr [ebp - 0x30c], 1 */ W32((u32)(r_ebp+0xfffffcf4u), 0x1u);
    /* 0040b70b: mov dword ptr [ebp - 0x308], 5 */ W32((u32)(r_ebp+0xfffffcf8u), 0x5u);
    /* 0040b715: mov dword ptr [ebp - 0x304], 1 */ W32((u32)(r_ebp+0xfffffcfcu), 0x1u);
    /* 0040b71f: mov dword ptr [ebp - 0x300], 2 */ W32((u32)(r_ebp+0xfffffd00u), 0x2u);
    /* 0040b729: mov dword ptr [ebp - 0x2fc], 2 */ W32((u32)(r_ebp+0xfffffd04u), 0x2u);
    /* 0040b733: mov dword ptr [ebp - 0x2f8], 2 */ W32((u32)(r_ebp+0xfffffd08u), 0x2u);
    /* 0040b73d: mov dword ptr [ebp - 0x2f4], 2 */ W32((u32)(r_ebp+0xfffffd0cu), 0x2u);
    /* 0040b747: mov dword ptr [ebp - 0x2f0], 2 */ W32((u32)(r_ebp+0xfffffd10u), 0x2u);
    /* 0040b751: mov dword ptr [ebp - 0x2ec], 1 */ W32((u32)(r_ebp+0xfffffd14u), 0x1u);
    /* 0040b75b: mov dword ptr [ebp - 0x2e8], 1 */ W32((u32)(r_ebp+0xfffffd18u), 0x1u);
    /* 0040b765: mov dword ptr [ebp - 0x2e4], 5 */ W32((u32)(r_ebp+0xfffffd1cu), 0x5u);
    /* 0040b76f: mov dword ptr [ebp - 0x2e0], 5 */ W32((u32)(r_ebp+0xfffffd20u), 0x5u);
    /* 0040b779: mov dword ptr [ebp - 0x2dc], 5 */ W32((u32)(r_ebp+0xfffffd24u), 0x5u);
    /* 0040b783: mov dword ptr [ebp - 0x2d8], 1 */ W32((u32)(r_ebp+0xfffffd28u), 0x1u);
    /* 0040b78d: mov dword ptr [ebp - 0x2d4], 1 */ W32((u32)(r_ebp+0xfffffd2cu), 0x1u);
    /* 0040b797: mov dword ptr [ebp - 0x2d0], 1 */ W32((u32)(r_ebp+0xfffffd30u), 0x1u);
    /* 0040b7a1: mov dword ptr [ebp - 0x2cc], 3 */ W32((u32)(r_ebp+0xfffffd34u), 0x3u);
    /* 0040b7ab: mov dword ptr [ebp - 0x2c8], 3 */ W32((u32)(r_ebp+0xfffffd38u), 0x3u);
    /* 0040b7b5: mov dword ptr [ebp - 0x2c4], 1 */ W32((u32)(r_ebp+0xfffffd3cu), 0x1u);
    /* 0040b7bf: mov dword ptr [ebp - 0x2c0], 1 */ W32((u32)(r_ebp+0xfffffd40u), 0x1u);
    /* 0040b7c9: mov dword ptr [ebp - 0x2bc], 1 */ W32((u32)(r_ebp+0xfffffd44u), 0x1u);
    /* 0040b7d3: mov dword ptr [ebp - 0x2b8], 1 */ W32((u32)(r_ebp+0xfffffd48u), 0x1u);
    /* 0040b7dd: mov dword ptr [ebp - 0x2b4], 1 */ W32((u32)(r_ebp+0xfffffd4cu), 0x1u);
    /* 0040b7e7: mov dword ptr [ebp - 0x2b0], 1 */ W32((u32)(r_ebp+0xfffffd50u), 0x1u);
    /* 0040b7f1: mov dword ptr [ebp - 0x2ac], 1 */ W32((u32)(r_ebp+0xfffffd54u), 0x1u);
    /* 0040b7fb: mov dword ptr [ebp - 0x2a8], 1 */ W32((u32)(r_ebp+0xfffffd58u), 0x1u);
    /* 0040b805: mov dword ptr [ebp - 0x2a4], 3 */ W32((u32)(r_ebp+0xfffffd5cu), 0x3u);
    /* 0040b80f: mov dword ptr [ebp - 0x2a0], 3 */ W32((u32)(r_ebp+0xfffffd60u), 0x3u);
    /* 0040b819: mov dword ptr [ebp - 0x29c], 1 */ W32((u32)(r_ebp+0xfffffd64u), 0x1u);
    /* 0040b823: mov dword ptr [ebp - 0x298], 1 */ W32((u32)(r_ebp+0xfffffd68u), 0x1u);
    /* 0040b82d: mov dword ptr [ebp - 0x294], 1 */ W32((u32)(r_ebp+0xfffffd6cu), 0x1u);
    /* 0040b837: mov dword ptr [ebp - 0x290], 1 */ W32((u32)(r_ebp+0xfffffd70u), 0x1u);
    /* 0040b841: mov dword ptr [ebp - 0x28c], 1 */ W32((u32)(r_ebp+0xfffffd74u), 0x1u);
    /* 0040b84b: mov dword ptr [ebp - 0x288], 1 */ W32((u32)(r_ebp+0xfffffd78u), 0x1u);
    /* 0040b855: mov dword ptr [ebp - 0x284], 1 */ W32((u32)(r_ebp+0xfffffd7cu), 0x1u);
    /* 0040b85f: mov dword ptr [ebp - 0x280], 3 */ W32((u32)(r_ebp+0xfffffd80u), 0x3u);
    /* 0040b869: mov dword ptr [ebp - 0x27c], 3 */ W32((u32)(r_ebp+0xfffffd84u), 0x3u);
    /* 0040b873: mov dword ptr [ebp - 0x278], 3 */ W32((u32)(r_ebp+0xfffffd88u), 0x3u);
    /* 0040b87d: mov dword ptr [ebp - 0x274], 1 */ W32((u32)(r_ebp+0xfffffd8cu), 0x1u);
    /* 0040b887: mov dword ptr [ebp - 0x270], 1 */ W32((u32)(r_ebp+0xfffffd90u), 0x1u);
    /* 0040b891: mov dword ptr [ebp - 0x26c], 1 */ W32((u32)(r_ebp+0xfffffd94u), 0x1u);
    /* 0040b89b: mov dword ptr [ebp - 0x268], 1 */ W32((u32)(r_ebp+0xfffffd98u), 0x1u);
    /* 0040b8a5: mov dword ptr [ebp - 0x264], 1 */ W32((u32)(r_ebp+0xfffffd9cu), 0x1u);
    /* 0040b8af: mov dword ptr [ebp - 0x260], 1 */ W32((u32)(r_ebp+0xfffffda0u), 0x1u);
    /* 0040b8b9: mov dword ptr [ebp - 0x25c], 1 */ W32((u32)(r_ebp+0xfffffda4u), 0x1u);
    /* 0040b8c3: mov dword ptr [ebp - 0x258], 3 */ W32((u32)(r_ebp+0xfffffda8u), 0x3u);
    /* 0040b8cd: mov dword ptr [ebp - 0x254], 3 */ W32((u32)(r_ebp+0xfffffdacu), 0x3u);
    /* 0040b8d7: mov dword ptr [ebp - 0x250], 3 */ W32((u32)(r_ebp+0xfffffdb0u), 0x3u);
    /* 0040b8e1: mov dword ptr [ebp - 0x24c], 1 */ W32((u32)(r_ebp+0xfffffdb4u), 0x1u);
    /* 0040b8eb: mov dword ptr [ebp - 0x248], 1 */ W32((u32)(r_ebp+0xfffffdb8u), 0x1u);
    /* 0040b8f5: mov dword ptr [ebp - 0x244], 1 */ W32((u32)(r_ebp+0xfffffdbcu), 0x1u);
    /* 0040b8ff: mov dword ptr [ebp - 0x240], 1 */ W32((u32)(r_ebp+0xfffffdc0u), 0x1u);
    /* 0040b909: mov dword ptr [ebp - 0x23c], 1 */ W32((u32)(r_ebp+0xfffffdc4u), 0x1u);
    /* 0040b913: mov dword ptr [ebp - 0x238], 1 */ W32((u32)(r_ebp+0xfffffdc8u), 0x1u);
    /* 0040b91d: mov dword ptr [ebp - 0x234], 3 */ W32((u32)(r_ebp+0xfffffdccu), 0x3u);
    /* 0040b927: mov dword ptr [ebp - 0x230], 3 */ W32((u32)(r_ebp+0xfffffdd0u), 0x3u);
    /* 0040b931: mov dword ptr [ebp - 0x22c], 3 */ W32((u32)(r_ebp+0xfffffdd4u), 0x3u);
    /* 0040b93b: mov dword ptr [ebp - 0x228], 3 */ W32((u32)(r_ebp+0xfffffdd8u), 0x3u);
    /* 0040b945: mov dword ptr [ebp - 0x224], 1 */ W32((u32)(r_ebp+0xfffffddcu), 0x1u);
    /* 0040b94f: mov dword ptr [ebp - 0x220], 1 */ W32((u32)(r_ebp+0xfffffde0u), 0x1u);
    /* 0040b959: mov dword ptr [ebp - 0x21c], 1 */ W32((u32)(r_ebp+0xfffffde4u), 0x1u);
    /* 0040b963: mov dword ptr [ebp - 0x218], 1 */ W32((u32)(r_ebp+0xfffffde8u), 0x1u);
    /* 0040b96d: mov dword ptr [ebp - 0x214], 1 */ W32((u32)(r_ebp+0xfffffdecu), 0x1u);
    /* 0040b977: mov dword ptr [ebp - 0x210], 2 */ W32((u32)(r_ebp+0xfffffdf0u), 0x2u);
    /* 0040b981: mov dword ptr [ebp - 0x20c], 3 */ W32((u32)(r_ebp+0xfffffdf4u), 0x3u);
    /* 0040b98b: mov dword ptr [ebp - 0x208], 3 */ W32((u32)(r_ebp+0xfffffdf8u), 0x3u);
    /* 0040b995: mov dword ptr [ebp - 0x204], 3 */ W32((u32)(r_ebp+0xfffffdfcu), 0x3u);
    /* 0040b99f: mov dword ptr [ebp - 0x200], 3 */ W32((u32)(r_ebp+0xfffffe00u), 0x3u);
    /* 0040b9a9: mov dword ptr [ebp - 0x1fc], 2 */ W32((u32)(r_ebp+0xfffffe04u), 0x2u);
    /* 0040b9b3: mov dword ptr [ebp - 0x1f8], 2 */ W32((u32)(r_ebp+0xfffffe08u), 0x2u);
    /* 0040b9bd: mov dword ptr [ebp - 0x1f4], 1 */ W32((u32)(r_ebp+0xfffffe0cu), 0x1u);
    /* 0040b9c7: mov dword ptr [ebp - 0x1f0], 1 */ W32((u32)(r_ebp+0xfffffe10u), 0x1u);
    /* 0040b9d1: mov dword ptr [ebp - 0x1ec], 1 */ W32((u32)(r_ebp+0xfffffe14u), 0x1u);
    /* 0040b9db: mov dword ptr [ebp - 0x1e8], 2 */ W32((u32)(r_ebp+0xfffffe18u), 0x2u);
    /* 0040b9e5: mov dword ptr [ebp - 0x1e4], 2 */ W32((u32)(r_ebp+0xfffffe1cu), 0x2u);
    /* 0040b9ef: mov dword ptr [ebp - 0x1e0], 2 */ W32((u32)(r_ebp+0xfffffe20u), 0x2u);
    /* 0040b9f9: mov dword ptr [ebp - 0x1dc], 2 */ W32((u32)(r_ebp+0xfffffe24u), 0x2u);
    /* 0040ba03: mov dword ptr [ebp - 0x1d8], 2 */ W32((u32)(r_ebp+0xfffffe28u), 0x2u);
    /* 0040ba0d: mov dword ptr [ebp - 0x1d4], 2 */ W32((u32)(r_ebp+0xfffffe2cu), 0x2u);
    /* 0040ba17: mov dword ptr [ebp - 0x1d0], 2 */ W32((u32)(r_ebp+0xfffffe30u), 0x2u);
    /* 0040ba21: mov dword ptr [ebp - 0x1cc], 2 */ W32((u32)(r_ebp+0xfffffe34u), 0x2u);
    /* 0040ba2b: mov dword ptr [ebp - 0x1c8], 2 */ W32((u32)(r_ebp+0xfffffe38u), 0x2u);
    /* 0040ba35: mov dword ptr [ebp - 0x1c4], 2 */ W32((u32)(r_ebp+0xfffffe3cu), 0x2u);
    /* 0040ba3f: mov dword ptr [ebp - 0x1c0], 2 */ W32((u32)(r_ebp+0xfffffe40u), 0x2u);
    /* 0040ba49: mov dword ptr [ebp - 0x1bc], 2 */ W32((u32)(r_ebp+0xfffffe44u), 0x2u);
    /* 0040ba53: mov dword ptr [ebp - 0x1b8], 2 */ W32((u32)(r_ebp+0xfffffe48u), 0x2u);
    /* 0040ba5d: mov dword ptr [ebp - 0x1b4], 2 */ W32((u32)(r_ebp+0xfffffe4cu), 0x2u);
    /* 0040ba67: mov dword ptr [ebp - 0x1b0], 2 */ W32((u32)(r_ebp+0xfffffe50u), 0x2u);
    /* 0040ba71: mov dword ptr [ebp - 0x1ac], 2 */ W32((u32)(r_ebp+0xfffffe54u), 0x2u);
    /* 0040ba7b: mov dword ptr [ebp - 0x1a8], 2 */ W32((u32)(r_ebp+0xfffffe58u), 0x2u);
    /* 0040ba85: mov dword ptr [ebp - 0x1a4], 2 */ W32((u32)(r_ebp+0xfffffe5cu), 0x2u);
    /* 0040ba8f: mov dword ptr [ebp - 0x1a0], 2 */ W32((u32)(r_ebp+0xfffffe60u), 0x2u);
    /* 0040ba99: mov dword ptr [ebp - 0x19c], 2 */ W32((u32)(r_ebp+0xfffffe64u), 0x2u);
    /* 0040baa3: mov dword ptr [ebp - 0x198], 4 */ W32((u32)(r_ebp+0xfffffe68u), 0x4u);
    /* 0040baad: mov dword ptr [ebp - 0x194], 4 */ W32((u32)(r_ebp+0xfffffe6cu), 0x4u);
    /* 0040bab7: mov dword ptr [ebp - 0x190], 4 */ W32((u32)(r_ebp+0xfffffe70u), 0x4u);
    /* 0040bac1: mov dword ptr [ebp - 0x18c], 4 */ W32((u32)(r_ebp+0xfffffe74u), 0x4u);
    /* 0040bacb: mov dword ptr [ebp - 0x188], 4 */ W32((u32)(r_ebp+0xfffffe78u), 0x4u);
    /* 0040bad5: mov dword ptr [ebp - 0x184], 4 */ W32((u32)(r_ebp+0xfffffe7cu), 0x4u);
    /* 0040badf: mov dword ptr [ebp - 0x180], 1 */ W32((u32)(r_ebp+0xfffffe80u), 0x1u);
    /* 0040bae9: mov dword ptr [ebp - 0x17c], 1 */ W32((u32)(r_ebp+0xfffffe84u), 0x1u);
    /* 0040baf3: mov dword ptr [ebp - 0x178], 1 */ W32((u32)(r_ebp+0xfffffe88u), 0x1u);
    /* 0040bafd: mov dword ptr [ebp - 0x174], 1 */ W32((u32)(r_ebp+0xfffffe8cu), 0x1u);
    /* 0040bb07: mov dword ptr [ebp - 0x170], 4 */ W32((u32)(r_ebp+0xfffffe90u), 0x4u);
    /* 0040bb11: mov dword ptr [ebp - 0x16c], 4 */ W32((u32)(r_ebp+0xfffffe94u), 0x4u);
    /* 0040bb1b: mov dword ptr [ebp - 0x168], 4 */ W32((u32)(r_ebp+0xfffffe98u), 0x4u);
    /* 0040bb25: mov dword ptr [ebp - 0x164], 4 */ W32((u32)(r_ebp+0xfffffe9cu), 0x4u);
    /* 0040bb2f: mov dword ptr [ebp - 0x160], 4 */ W32((u32)(r_ebp+0xfffffea0u), 0x4u);
    /* 0040bb39: mov dword ptr [ebp - 0x15c], 4 */ W32((u32)(r_ebp+0xfffffea4u), 0x4u);
    /* 0040bb43: mov dword ptr [ebp - 0x158], 1 */ W32((u32)(r_ebp+0xfffffea8u), 0x1u);
    /* 0040bb4d: mov dword ptr [ebp - 0x154], 1 */ W32((u32)(r_ebp+0xfffffeacu), 0x1u);
    /* 0040bb57: mov dword ptr [ebp - 0x150], 1 */ W32((u32)(r_ebp+0xfffffeb0u), 0x1u);
    /* 0040bb61: mov dword ptr [ebp - 0x14c], 1 */ W32((u32)(r_ebp+0xfffffeb4u), 0x1u);
    /* 0040bb6b: mov dword ptr [ebp - 0x148], 1 */ W32((u32)(r_ebp+0xfffffeb8u), 0x1u);
    /* 0040bb75: mov dword ptr [ebp - 0x144], 1 */ W32((u32)(r_ebp+0xfffffebcu), 0x1u);
    /* 0040bb7f: mov dword ptr [ebp - 0x140], 1 */ W32((u32)(r_ebp+0xfffffec0u), 0x1u);
    /* 0040bb89: mov dword ptr [ebp - 0x13c], 4 */ W32((u32)(r_ebp+0xfffffec4u), 0x4u);
    /* 0040bb93: mov dword ptr [ebp - 0x138], 4 */ W32((u32)(r_ebp+0xfffffec8u), 0x4u);
    /* 0040bb9d: mov dword ptr [ebp - 0x134], 1 */ W32((u32)(r_ebp+0xfffffeccu), 0x1u);
    /* 0040bba7: mov dword ptr [ebp - 0x130], 1 */ W32((u32)(r_ebp+0xfffffed0u), 0x1u);
    /* 0040bbb1: mov dword ptr [ebp - 0x12c], 1 */ W32((u32)(r_ebp+0xfffffed4u), 0x1u);
    /* 0040bbbb: mov dword ptr [ebp - 0x128], 1 */ W32((u32)(r_ebp+0xfffffed8u), 0x1u);
    /* 0040bbc5: mov dword ptr [ebp - 0x124], 1 */ W32((u32)(r_ebp+0xfffffedcu), 0x1u);
    /* 0040bbcf: mov dword ptr [ebp - 0x120], 3 */ W32((u32)(r_ebp+0xfffffee0u), 0x3u);
    /* 0040bbd9: mov dword ptr [ebp - 0x11c], 3 */ W32((u32)(r_ebp+0xfffffee4u), 0x3u);
    /* 0040bbe3: mov dword ptr [ebp - 0x118], 3 */ W32((u32)(r_ebp+0xfffffee8u), 0x3u);
    /* 0040bbed: mov dword ptr [ebp - 0x114], 3 */ W32((u32)(r_ebp+0xfffffeecu), 0x3u);
    /* 0040bbf7: mov dword ptr [ebp - 0x110], 3 */ W32((u32)(r_ebp+0xfffffef0u), 0x3u);
    /* 0040bc01: mov dword ptr [ebp - 0x10c], 3 */ W32((u32)(r_ebp+0xfffffef4u), 0x3u);
    /* 0040bc0b: mov dword ptr [ebp - 0x108], 3 */ W32((u32)(r_ebp+0xfffffef8u), 0x3u);
    /* 0040bc15: mov dword ptr [ebp - 0x104], 3 */ W32((u32)(r_ebp+0xfffffefcu), 0x3u);
    /* 0040bc1f: mov dword ptr [ebp - 0x100], 1 */ W32((u32)(r_ebp+0xffffff00u), 0x1u);
    /* 0040bc29: mov dword ptr [ebp - 0xfc], 1 */ W32((u32)(r_ebp+0xffffff04u), 0x1u);
    /* 0040bc33: mov dword ptr [ebp - 0xf8], 4 */ W32((u32)(r_ebp+0xffffff08u), 0x4u);
    /* 0040bc3d: mov dword ptr [ebp - 0xf4], 4 */ W32((u32)(r_ebp+0xffffff0cu), 0x4u);
    /* 0040bc47: mov dword ptr [ebp - 0xf0], 4 */ W32((u32)(r_ebp+0xffffff10u), 0x4u);
    /* 0040bc51: mov dword ptr [ebp - 0xec], 4 */ W32((u32)(r_ebp+0xffffff14u), 0x4u);
    /* 0040bc5b: mov dword ptr [ebp - 0xe8], 4 */ W32((u32)(r_ebp+0xffffff18u), 0x4u);
    /* 0040bc65: mov dword ptr [ebp - 0xe4], 1 */ W32((u32)(r_ebp+0xffffff1cu), 0x1u);
    /* 0040bc6f: mov dword ptr [ebp - 0xe0], 1 */ W32((u32)(r_ebp+0xffffff20u), 0x1u);
    /* 0040bc79: mov dword ptr [ebp - 0xdc], 1 */ W32((u32)(r_ebp+0xffffff24u), 0x1u);
    /* 0040bc83: mov dword ptr [ebp - 0xd8], 1 */ W32((u32)(r_ebp+0xffffff28u), 0x1u);
    /* 0040bc8d: mov dword ptr [ebp - 0xd4], 1 */ W32((u32)(r_ebp+0xffffff2cu), 0x1u);
    /* 0040bc97: mov dword ptr [ebp - 0xd0], 4 */ W32((u32)(r_ebp+0xffffff30u), 0x4u);
    /* 0040bca1: mov dword ptr [ebp - 0xcc], 4 */ W32((u32)(r_ebp+0xffffff34u), 0x4u);
    /* 0040bcab: mov dword ptr [ebp - 0xc8], 4 */ W32((u32)(r_ebp+0xffffff38u), 0x4u);
    /* 0040bcb5: mov dword ptr [ebp - 0xc4], 4 */ W32((u32)(r_ebp+0xffffff3cu), 0x4u);
    /* 0040bcbf: mov dword ptr [ebp - 0xc0], 4 */ W32((u32)(r_ebp+0xffffff40u), 0x4u);
    /* 0040bcc9: mov dword ptr [ebp - 0xbc], 4 */ W32((u32)(r_ebp+0xffffff44u), 0x4u);
    /* 0040bcd3: mov dword ptr [ebp - 0xb8], 1 */ W32((u32)(r_ebp+0xffffff48u), 0x1u);
    /* 0040bcdd: mov dword ptr [ebp - 0xb4], 1 */ W32((u32)(r_ebp+0xffffff4cu), 0x1u);
    /* 0040bce7: mov dword ptr [ebp - 0xb0], 1 */ W32((u32)(r_ebp+0xffffff50u), 0x1u);
    /* 0040bcf1: mov dword ptr [ebp - 0xac], 1 */ W32((u32)(r_ebp+0xffffff54u), 0x1u);
    /* 0040bcfb: mov dword ptr [ebp - 0xa8], 4 */ W32((u32)(r_ebp+0xffffff58u), 0x4u);
    /* 0040bd05: mov dword ptr [ebp - 0xa4], 4 */ W32((u32)(r_ebp+0xffffff5cu), 0x4u);
    /* 0040bd0f: mov dword ptr [ebp - 0xa0], 4 */ W32((u32)(r_ebp+0xffffff60u), 0x4u);
    /* 0040bd19: mov dword ptr [ebp - 0x9c], 4 */ W32((u32)(r_ebp+0xffffff64u), 0x4u);
    /* 0040bd23: mov dword ptr [ebp - 0x98], 4 */ W32((u32)(r_ebp+0xffffff68u), 0x4u);
    /* 0040bd2d: mov dword ptr [ebp - 0x94], 4 */ W32((u32)(r_ebp+0xffffff6cu), 0x4u);
    /* 0040bd37: mov dword ptr [ebp - 0x90], 4 */ W32((u32)(r_ebp+0xffffff70u), 0x4u);
    /* 0040bd41: mov dword ptr [ebp - 0x8c], 4 */ W32((u32)(r_ebp+0xffffff74u), 0x4u);
    /* 0040bd4b: mov dword ptr [ebp - 0x88], 4 */ W32((u32)(r_ebp+0xffffff78u), 0x4u);
    /* 0040bd55: mov dword ptr [ebp - 0x84], 4 */ W32((u32)(r_ebp+0xffffff7cu), 0x4u);
    /* 0040bd5f: mov dword ptr [ebp - 0x80], 4 */ W32((u32)(r_ebp+0xffffff80u), 0x4u);
    /* 0040bd66: mov dword ptr [ebp - 0x7c], 4 */ W32((u32)(r_ebp+0xffffff84u), 0x4u);
    /* 0040bd6d: mov dword ptr [ebp - 0x78], 4 */ W32((u32)(r_ebp+0xffffff88u), 0x4u);
    /* 0040bd74: mov dword ptr [ebp - 0x74], 4 */ W32((u32)(r_ebp+0xffffff8cu), 0x4u);
    /* 0040bd7b: mov dword ptr [ebp - 0x70], 4 */ W32((u32)(r_ebp+0xffffff90u), 0x4u);
    /* 0040bd82: mov dword ptr [ebp - 0x6c], 2 */ W32((u32)(r_ebp+0xffffff94u), 0x2u);
    /* 0040bd89: mov dword ptr [ebp - 0x68], 4 */ W32((u32)(r_ebp+0xffffff98u), 0x4u);
    /* 0040bd90: mov dword ptr [ebp - 0x64], 4 */ W32((u32)(r_ebp+0xffffff9cu), 0x4u);
    /* 0040bd97: mov dword ptr [ebp - 0x60], 2 */ W32((u32)(r_ebp+0xffffffa0u), 0x2u);
    /* 0040bd9e: mov dword ptr [ebp - 0x5c], 2 */ W32((u32)(r_ebp+0xffffffa4u), 0x2u);
    /* 0040bda5: mov dword ptr [ebp - 0x58], 2 */ W32((u32)(r_ebp+0xffffffa8u), 0x2u);
    /* 0040bdac: mov dword ptr [ebp - 0x54], 2 */ W32((u32)(r_ebp+0xffffffacu), 0x2u);
    /* 0040bdb3: mov dword ptr [ebp - 0x50], 2 */ W32((u32)(r_ebp+0xffffffb0u), 0x2u);
    /* 0040bdba: mov dword ptr [ebp - 0x4c], 2 */ W32((u32)(r_ebp+0xffffffb4u), 0x2u);
    /* 0040bdc1: mov dword ptr [ebp - 0x48], 2 */ W32((u32)(r_ebp+0xffffffb8u), 0x2u);
    /* 0040bdc8: mov dword ptr [ebp - 0x44], 2 */ W32((u32)(r_ebp+0xffffffbcu), 0x2u);
    /* 0040bdcf: mov dword ptr [ebp - 0x40], 2 */ W32((u32)(r_ebp+0xffffffc0u), 0x2u);
    /* 0040bdd6: mov dword ptr [ebp - 0x3c], 2 */ W32((u32)(r_ebp+0xffffffc4u), 0x2u);
    /* 0040bddd: mov dword ptr [ebp - 0x38], 2 */ W32((u32)(r_ebp+0xffffffc8u), 0x2u);
    /* 0040bde4: mov dword ptr [ebp - 0x34], 2 */ W32((u32)(r_ebp+0xffffffccu), 0x2u);
    /* 0040bdeb: mov dword ptr [ebp - 0x30], 4 */ W32((u32)(r_ebp+0xffffffd0u), 0x4u);
    /* 0040bdf2: mov dword ptr [ebp - 0x2c], 4 */ W32((u32)(r_ebp+0xffffffd4u), 0x4u);
    /* 0040bdf9: mov dword ptr [ebp - 0x28], 4 */ W32((u32)(r_ebp+0xffffffd8u), 0x4u);
    /* 0040be00: mov dword ptr [ebp - 0x24], 4 */ W32((u32)(r_ebp+0xffffffdcu), 0x4u);
    /* 0040be07: mov dword ptr [ebp - 0x20], 4 */ W32((u32)(r_ebp+0xffffffe0u), 0x4u);
    /* 0040be0e: mov dword ptr [ebp - 0x1c], 4 */ W32((u32)(r_ebp+0xffffffe4u), 0x4u);
    /* 0040be15: mov dword ptr [ebp - 0x18], 4 */ W32((u32)(r_ebp+0xffffffe8u), 0x4u);
    /* 0040be1c: mov dword ptr [ebp - 0x14], 4 */ W32((u32)(r_ebp+0xffffffecu), 0x4u);
    /* 0040be23: mov dword ptr [ebp - 0x10], 4 */ W32((u32)(r_ebp+0xfffffff0u), 0x4u);
    /* 0040be2a: mov dword ptr [ebp - 0xc], 4 */ W32((u32)(r_ebp+0xfffffff4u), 0x4u);
    /* 0040be31: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040be34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040be35: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0040be3b: call 0x41a830 */ r_esp -= 4; W32(r_esp, 0x40be40u); f_0041a830();
    /* 0040be40: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0040be43: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040be45: je 0x40be4e */ if (fZ) goto L_0040be4e;
L_0040be47:; BB(0x0040be47);
    /* 0040be47: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040be49: jmp 0x40bf5d */ goto L_0040bf5d;
L_0040be4e:; BB(0x0040be4e);
    /* 0040be4e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0040be51: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040be52: mov ecx, dword ptr [ebp - 0x4ec] */ r_ecx = R32((u32)(r_ebp+0xfffffb14u));
    /* 0040be58: call 0x40bf80 */ r_esp -= 4; W32(r_esp, 0x40be5du); f_0040bf80();
    /* 0040be5d: mov dword ptr [ebp - 0x4e4], eax */ W32((u32)(r_ebp+0xfffffb1cu), r_eax);
    /* 0040be63: mov ecx, dword ptr [ebp - 0x4ec] */ r_ecx = R32((u32)(r_ebp+0xfffffb14u));
    /* 0040be69: call 0x40c380 */ r_esp -= 4; W32(r_esp, 0x40be6eu); f_0040c380();
    /* 0040be6e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0040be71: mov eax, dword ptr [ebp - 0x4e4] */ r_eax = R32((u32)(r_ebp+0xfffffb1cu));
    /* 0040be77: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040be7a: lea ecx, [ebp + eax - 0x4e0] */ r_ecx = (u32)(r_ebp+r_eax+0xfffffb20u);
    /* 0040be81: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040be84: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 0040be87: mov dword ptr [ebp - 0x4e8], eax */ W32((u32)(r_ebp+0xfffffb18u), r_eax);
    /* 0040be8d: mov ecx, dword ptr [ebp - 0x4e8] */ r_ecx = R32((u32)(r_ebp+0xfffffb18u));
    /* 0040be93: mov dword ptr [ebp - 0x4f0], ecx */ W32((u32)(r_ebp+0xfffffb10u), r_ecx);
    /* 0040be99: mov edx, dword ptr [ebp - 0x4f0] */ r_edx = R32((u32)(r_ebp+0xfffffb10u));
    /* 0040be9f: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0040bea2: mov dword ptr [ebp - 0x4f0], edx */ W32((u32)(r_ebp+0xfffffb10u), r_edx);
    /* 0040bea8: cmp dword ptr [ebp - 0x4f0], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffb10u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0040beaf: ja 0x40bf25 */ if ((!fC&&!fZ)) goto L_0040bf25;
L_0040beb1:; BB(0x0040beb1);
    /* 0040beb1: mov eax, dword ptr [ebp - 0x4f0] */ r_eax = R32((u32)(r_ebp+0xfffffb10u));
    /* 0040beb7: jmp dword ptr [eax*4 + 0x40bf64] */ { u32 t = R32((u32)(r_eax*4+0x40bf64u)); switch (t) { case 0x40bebeu: goto L_0040bebe; case 0x40bec8u: goto L_0040bec8; case 0x40becfu: goto L_0040becf; case 0x40bf00u: goto L_0040bf00; case 0x40bf07u: goto L_0040bf07; default: UNSUP(0x0040beb7, "jump table entry is not a known target"); } }
L_0040bebe:; BB(0x0040bebe);
    /* 0040bebe: mov eax, 1 */ r_eax = 0x1u;
    /* 0040bec3: jmp 0x40bf5d */ goto L_0040bf5d;
L_0040bec8:; BB(0x0040bec8);
    /* 0040bec8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040beca: jmp 0x40bf5d */ goto L_0040bf5d;
L_0040becf:; BB(0x0040becf);
    /* 0040becf: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040bed2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040bed3: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0040bed9: call 0x41a960 */ r_esp -= 4; W32(r_esp, 0x40bedeu); f_0041a960();
    /* 0040bede: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0040bee1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040bee3: je 0x40beec */ if (fZ) goto L_0040beec;
L_0040bee5:; BB(0x0040bee5);
    /* 0040bee5: mov eax, 2 */ r_eax = 0x2u;
    /* 0040beea: jmp 0x40bf5d */ goto L_0040bf5d;
L_0040beec:; BB(0x0040beec);
    /* 0040beec: cmp dword ptr [ebp - 0x4e4], 0x12 */ {  u32 a = R32((u32)(r_ebp+0xfffffb1cu)); u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040bef3: jne 0x40bef9 */ if (!fZ) goto L_0040bef9;
L_0040bef5:; BB(0x0040bef5);
    /* 0040bef5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040bef7: jmp 0x40bf5d */ goto L_0040bf5d;
L_0040bef9:; BB(0x0040bef9);
    /* 0040bef9: mov eax, 1 */ r_eax = 0x1u;
    /* 0040befe: jmp 0x40bf5d */ goto L_0040bf5d;
L_0040bf00:; BB(0x0040bf00);
    /* 0040bf00: mov eax, 3 */ r_eax = 0x3u;
    /* 0040bf05: jmp 0x40bf5d */ goto L_0040bf5d;
L_0040bf07:; BB(0x0040bf07);
    /* 0040bf07: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040bf0a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040bf0b: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0040bf11: call 0x41aec0 */ r_esp -= 4; W32(r_esp, 0x40bf16u); f_0041aec0();
    /* 0040bf16: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0040bf19: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0040bf1b: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0040bf1d: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0040bf20: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040bf23: jmp 0x40bf5d */ goto L_0040bf5d;
L_0040bf25:; BB(0x0040bf25);
    /* 0040bf25: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0040bf27: jne 0x40bf40 */ if (!fZ) goto L_0040bf40;
L_0040bf29:; BB(0x0040bf29);
    /* 0040bf29: push 0x2f6 */ { u32 v = 0x2f6u; r_esp -= 4; W32(r_esp, v); }
    /* 0040bf2e: push 0x6b3750 */ { u32 v = 0x6b3750u; r_esp -= 4; W32(r_esp, v); }
    /* 0040bf33: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0040bf38: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x40bf3du); f_005e9f20();
    /* 0040bf3d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0040bf40:; BB(0x0040bf40);
    /* 0040bf40: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0040bf42: jne 0x40bf5b */ if (!fZ) goto L_0040bf5b;
L_0040bf44:; BB(0x0040bf44);
    /* 0040bf44: push 0x2f9 */ { u32 v = 0x2f9u; r_esp -= 4; W32(r_esp, v); }
    /* 0040bf49: push 0x6b3750 */ { u32 v = 0x6b3750u; r_esp -= 4; W32(r_esp, v); }
    /* 0040bf4e: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0040bf53: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x40bf58u); f_005e9f20();
    /* 0040bf58: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0040bf5b:; BB(0x0040bf5b);
    /* 0040bf5b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0040bf5d:; BB(0x0040bf5d);
    /* 0040bf5d: mov esp, ebp */ r_esp = r_ebp;
    /* 0040bf5f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040bf60: ret 4 */ FN_RET(0x0040b260); r_esp += 8; return;
}

void f_0040c380(void) /* blackjackai::func_0040c380 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040c380);
    /* 0040c380: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040c381: mov ebp, esp */ r_ebp = r_esp;
    /* 0040c383: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040c386: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0040c389: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c38b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c38d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c38f: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0040c395: call 0x4193d0 */ r_esp -= 4; W32(r_esp, 0x40c39au); f_004193d0();
    /* 0040c39a: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 0040c39d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c39f: jne 0x40c3b8 */ if (!fZ) goto L_0040c3b8;
L_0040c3a1:; BB(0x0040c3a1);
    /* 0040c3a1: push 0x34e */ { u32 v = 0x34eu; r_esp -= 4; W32(r_esp, v); }
    /* 0040c3a6: push 0x6b3750 */ { u32 v = 0x6b3750u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c3ab: push 0x6b376c */ { u32 v = 0x6b376cu; r_esp -= 4; W32(r_esp, v); }
    /* 0040c3b0: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x40c3b5u); f_005e9f20();
    /* 0040c3b5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0040c3b8:; BB(0x0040c3b8);
    /* 0040c3b8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c3ba: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c3bc: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c3be: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0040c3c4: call 0x419780 */ r_esp -= 4; W32(r_esp, 0x40c3c9u); f_00419780();
    /* 0040c3c9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0040c3cc: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c3d0: jne 0x40c3d9 */ if (!fZ) goto L_0040c3d9;
L_0040c3d2:; BB(0x0040c3d2);
    /* 0040c3d2: mov dword ptr [ebp - 4], 0xb */ W32((u32)(r_ebp+0xfffffffcu), 0xbu);
L_0040c3d9:; BB(0x0040c3d9);
    /* 0040c3d9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040c3dc: sub eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040c3df: mov esp, ebp */ r_esp = r_ebp;
    /* 0040c3e1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040c3e2: ret  */ FN_RET(0x0040c380); r_esp += 4; return;
}

