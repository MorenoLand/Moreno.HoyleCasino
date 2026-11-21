#include "protos.h"

void f_005a4b20(void) /* royalmatchai::func_005a4b20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a4b20);
    /* 005a4b20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a4b21: mov ebp, esp */ r_ebp = r_esp;
    /* 005a4b23: sub esp, 0x4e8 */ {  u32 a = r_esp; u32 b = 0x4e8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a4b29: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a4b2a: mov dword ptr [ebp - 0x4e4], ecx */ W32((u32)(r_ebp+0xfffffb1cu), r_ecx);
    /* 005a4b30: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a4b33: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a4b34: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a4b3a: call 0x5b6040 */ r_esp -= 4; W32(r_esp, 0x5a4b3fu); f_005b6040();
    /* 005a4b3f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005a4b42: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a4b44: je 0x5a4b4d */ if (fZ) goto L_005a4b4d;
L_005a4b46:; BB(0x005a4b46);
    /* 005a4b46: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a4b48: jmp 0x5a5816 */ goto L_005a5816;
L_005a4b4d:; BB(0x005a4b4d);
    /* 005a4b4d: mov dword ptr [ebp - 0x4d8], 2 */ W32((u32)(r_ebp+0xfffffb28u), 0x2u);
    /* 005a4b57: mov dword ptr [ebp - 0x4d4], 2 */ W32((u32)(r_ebp+0xfffffb2cu), 0x2u);
    /* 005a4b61: mov dword ptr [ebp - 0x4d0], 2 */ W32((u32)(r_ebp+0xfffffb30u), 0x2u);
    /* 005a4b6b: mov dword ptr [ebp - 0x4cc], 2 */ W32((u32)(r_ebp+0xfffffb34u), 0x2u);
    /* 005a4b75: mov dword ptr [ebp - 0x4c8], 2 */ W32((u32)(r_ebp+0xfffffb38u), 0x2u);
    /* 005a4b7f: mov dword ptr [ebp - 0x4c4], 2 */ W32((u32)(r_ebp+0xfffffb3cu), 0x2u);
    /* 005a4b89: mov dword ptr [ebp - 0x4c0], 2 */ W32((u32)(r_ebp+0xfffffb40u), 0x2u);
    /* 005a4b93: mov dword ptr [ebp - 0x4bc], 2 */ W32((u32)(r_ebp+0xfffffb44u), 0x2u);
    /* 005a4b9d: mov dword ptr [ebp - 0x4b8], 2 */ W32((u32)(r_ebp+0xfffffb48u), 0x2u);
    /* 005a4ba7: mov dword ptr [ebp - 0x4b4], 2 */ W32((u32)(r_ebp+0xfffffb4cu), 0x2u);
    /* 005a4bb1: mov dword ptr [ebp - 0x4b0], 1 */ W32((u32)(r_ebp+0xfffffb50u), 0x1u);
    /* 005a4bbb: mov dword ptr [ebp - 0x4ac], 1 */ W32((u32)(r_ebp+0xfffffb54u), 0x1u);
    /* 005a4bc5: mov dword ptr [ebp - 0x4a8], 1 */ W32((u32)(r_ebp+0xfffffb58u), 0x1u);
    /* 005a4bcf: mov dword ptr [ebp - 0x4a4], 1 */ W32((u32)(r_ebp+0xfffffb5cu), 0x1u);
    /* 005a4bd9: mov dword ptr [ebp - 0x4a0], 1 */ W32((u32)(r_ebp+0xfffffb60u), 0x1u);
    /* 005a4be3: mov dword ptr [ebp - 0x49c], 1 */ W32((u32)(r_ebp+0xfffffb64u), 0x1u);
    /* 005a4bed: mov dword ptr [ebp - 0x498], 1 */ W32((u32)(r_ebp+0xfffffb68u), 0x1u);
    /* 005a4bf7: mov dword ptr [ebp - 0x494], 1 */ W32((u32)(r_ebp+0xfffffb6cu), 0x1u);
    /* 005a4c01: mov dword ptr [ebp - 0x490], 1 */ W32((u32)(r_ebp+0xfffffb70u), 0x1u);
    /* 005a4c0b: mov dword ptr [ebp - 0x48c], 1 */ W32((u32)(r_ebp+0xfffffb74u), 0x1u);
    /* 005a4c15: mov dword ptr [ebp - 0x488], 1 */ W32((u32)(r_ebp+0xfffffb78u), 0x1u);
    /* 005a4c1f: mov dword ptr [ebp - 0x484], 1 */ W32((u32)(r_ebp+0xfffffb7cu), 0x1u);
    /* 005a4c29: mov dword ptr [ebp - 0x480], 1 */ W32((u32)(r_ebp+0xfffffb80u), 0x1u);
    /* 005a4c33: mov dword ptr [ebp - 0x47c], 1 */ W32((u32)(r_ebp+0xfffffb84u), 0x1u);
    /* 005a4c3d: mov dword ptr [ebp - 0x478], 1 */ W32((u32)(r_ebp+0xfffffb88u), 0x1u);
    /* 005a4c47: mov dword ptr [ebp - 0x474], 1 */ W32((u32)(r_ebp+0xfffffb8cu), 0x1u);
    /* 005a4c51: mov dword ptr [ebp - 0x470], 1 */ W32((u32)(r_ebp+0xfffffb90u), 0x1u);
    /* 005a4c5b: mov dword ptr [ebp - 0x46c], 1 */ W32((u32)(r_ebp+0xfffffb94u), 0x1u);
    /* 005a4c65: mov dword ptr [ebp - 0x468], 1 */ W32((u32)(r_ebp+0xfffffb98u), 0x1u);
    /* 005a4c6f: mov dword ptr [ebp - 0x464], 1 */ W32((u32)(r_ebp+0xfffffb9cu), 0x1u);
    /* 005a4c79: mov dword ptr [ebp - 0x460], 1 */ W32((u32)(r_ebp+0xfffffba0u), 0x1u);
    /* 005a4c83: mov dword ptr [ebp - 0x45c], 1 */ W32((u32)(r_ebp+0xfffffba4u), 0x1u);
    /* 005a4c8d: mov dword ptr [ebp - 0x458], 1 */ W32((u32)(r_ebp+0xfffffba8u), 0x1u);
    /* 005a4c97: mov dword ptr [ebp - 0x454], 1 */ W32((u32)(r_ebp+0xfffffbacu), 0x1u);
    /* 005a4ca1: mov dword ptr [ebp - 0x450], 1 */ W32((u32)(r_ebp+0xfffffbb0u), 0x1u);
    /* 005a4cab: mov dword ptr [ebp - 0x44c], 1 */ W32((u32)(r_ebp+0xfffffbb4u), 0x1u);
    /* 005a4cb5: mov dword ptr [ebp - 0x448], 1 */ W32((u32)(r_ebp+0xfffffbb8u), 0x1u);
    /* 005a4cbf: mov dword ptr [ebp - 0x444], 1 */ W32((u32)(r_ebp+0xfffffbbcu), 0x1u);
    /* 005a4cc9: mov dword ptr [ebp - 0x440], 1 */ W32((u32)(r_ebp+0xfffffbc0u), 0x1u);
    /* 005a4cd3: mov dword ptr [ebp - 0x43c], 1 */ W32((u32)(r_ebp+0xfffffbc4u), 0x1u);
    /* 005a4cdd: mov dword ptr [ebp - 0x438], 1 */ W32((u32)(r_ebp+0xfffffbc8u), 0x1u);
    /* 005a4ce7: mov dword ptr [ebp - 0x434], 1 */ W32((u32)(r_ebp+0xfffffbccu), 0x1u);
    /* 005a4cf1: mov dword ptr [ebp - 0x430], 1 */ W32((u32)(r_ebp+0xfffffbd0u), 0x1u);
    /* 005a4cfb: mov dword ptr [ebp - 0x42c], 1 */ W32((u32)(r_ebp+0xfffffbd4u), 0x1u);
    /* 005a4d05: mov dword ptr [ebp - 0x428], 1 */ W32((u32)(r_ebp+0xfffffbd8u), 0x1u);
    /* 005a4d0f: mov dword ptr [ebp - 0x424], 1 */ W32((u32)(r_ebp+0xfffffbdcu), 0x1u);
    /* 005a4d19: mov dword ptr [ebp - 0x420], 1 */ W32((u32)(r_ebp+0xfffffbe0u), 0x1u);
    /* 005a4d23: mov dword ptr [ebp - 0x41c], 1 */ W32((u32)(r_ebp+0xfffffbe4u), 0x1u);
    /* 005a4d2d: mov dword ptr [ebp - 0x418], 1 */ W32((u32)(r_ebp+0xfffffbe8u), 0x1u);
    /* 005a4d37: mov dword ptr [ebp - 0x414], 1 */ W32((u32)(r_ebp+0xfffffbecu), 0x1u);
    /* 005a4d41: mov dword ptr [ebp - 0x410], 1 */ W32((u32)(r_ebp+0xfffffbf0u), 0x1u);
    /* 005a4d4b: mov dword ptr [ebp - 0x40c], 3 */ W32((u32)(r_ebp+0xfffffbf4u), 0x3u);
    /* 005a4d55: mov dword ptr [ebp - 0x408], 3 */ W32((u32)(r_ebp+0xfffffbf8u), 0x3u);
    /* 005a4d5f: mov dword ptr [ebp - 0x404], 3 */ W32((u32)(r_ebp+0xfffffbfcu), 0x3u);
    /* 005a4d69: mov dword ptr [ebp - 0x400], 3 */ W32((u32)(r_ebp+0xfffffc00u), 0x3u);
    /* 005a4d73: mov dword ptr [ebp - 0x3fc], 1 */ W32((u32)(r_ebp+0xfffffc04u), 0x1u);
    /* 005a4d7d: mov dword ptr [ebp - 0x3f8], 1 */ W32((u32)(r_ebp+0xfffffc08u), 0x1u);
    /* 005a4d87: mov dword ptr [ebp - 0x3f4], 1 */ W32((u32)(r_ebp+0xfffffc0cu), 0x1u);
    /* 005a4d91: mov dword ptr [ebp - 0x3f0], 1 */ W32((u32)(r_ebp+0xfffffc10u), 0x1u);
    /* 005a4d9b: mov dword ptr [ebp - 0x3ec], 1 */ W32((u32)(r_ebp+0xfffffc14u), 0x1u);
    /* 005a4da5: mov dword ptr [ebp - 0x3e8], 3 */ W32((u32)(r_ebp+0xfffffc18u), 0x3u);
    /* 005a4daf: mov dword ptr [ebp - 0x3e4], 3 */ W32((u32)(r_ebp+0xfffffc1cu), 0x3u);
    /* 005a4db9: mov dword ptr [ebp - 0x3e0], 3 */ W32((u32)(r_ebp+0xfffffc20u), 0x3u);
    /* 005a4dc3: mov dword ptr [ebp - 0x3dc], 3 */ W32((u32)(r_ebp+0xfffffc24u), 0x3u);
    /* 005a4dcd: mov dword ptr [ebp - 0x3d8], 3 */ W32((u32)(r_ebp+0xfffffc28u), 0x3u);
    /* 005a4dd7: mov dword ptr [ebp - 0x3d4], 3 */ W32((u32)(r_ebp+0xfffffc2cu), 0x3u);
    /* 005a4de1: mov dword ptr [ebp - 0x3d0], 3 */ W32((u32)(r_ebp+0xfffffc30u), 0x3u);
    /* 005a4deb: mov dword ptr [ebp - 0x3cc], 3 */ W32((u32)(r_ebp+0xfffffc34u), 0x3u);
    /* 005a4df5: mov dword ptr [ebp - 0x3c8], 1 */ W32((u32)(r_ebp+0xfffffc38u), 0x1u);
    /* 005a4dff: mov dword ptr [ebp - 0x3c4], 1 */ W32((u32)(r_ebp+0xfffffc3cu), 0x1u);
    /* 005a4e09: mov dword ptr [ebp - 0x3c0], 3 */ W32((u32)(r_ebp+0xfffffc40u), 0x3u);
    /* 005a4e13: mov dword ptr [ebp - 0x3bc], 3 */ W32((u32)(r_ebp+0xfffffc44u), 0x3u);
    /* 005a4e1d: mov dword ptr [ebp - 0x3b8], 3 */ W32((u32)(r_ebp+0xfffffc48u), 0x3u);
    /* 005a4e27: mov dword ptr [ebp - 0x3b4], 3 */ W32((u32)(r_ebp+0xfffffc4cu), 0x3u);
    /* 005a4e31: mov dword ptr [ebp - 0x3b0], 3 */ W32((u32)(r_ebp+0xfffffc50u), 0x3u);
    /* 005a4e3b: mov dword ptr [ebp - 0x3ac], 3 */ W32((u32)(r_ebp+0xfffffc54u), 0x3u);
    /* 005a4e45: mov dword ptr [ebp - 0x3a8], 3 */ W32((u32)(r_ebp+0xfffffc58u), 0x3u);
    /* 005a4e4f: mov dword ptr [ebp - 0x3a4], 3 */ W32((u32)(r_ebp+0xfffffc5cu), 0x3u);
    /* 005a4e59: mov dword ptr [ebp - 0x3a0], 3 */ W32((u32)(r_ebp+0xfffffc60u), 0x3u);
    /* 005a4e63: mov dword ptr [ebp - 0x39c], 1 */ W32((u32)(r_ebp+0xfffffc64u), 0x1u);
    /* 005a4e6d: mov dword ptr [ebp - 0x398], 1 */ W32((u32)(r_ebp+0xfffffc68u), 0x1u);
    /* 005a4e77: mov dword ptr [ebp - 0x394], 1 */ W32((u32)(r_ebp+0xfffffc6cu), 0x1u);
    /* 005a4e81: mov dword ptr [ebp - 0x390], 2 */ W32((u32)(r_ebp+0xfffffc70u), 0x2u);
    /* 005a4e8b: mov dword ptr [ebp - 0x38c], 2 */ W32((u32)(r_ebp+0xfffffc74u), 0x2u);
    /* 005a4e95: mov dword ptr [ebp - 0x388], 2 */ W32((u32)(r_ebp+0xfffffc78u), 0x2u);
    /* 005a4e9f: mov dword ptr [ebp - 0x384], 1 */ W32((u32)(r_ebp+0xfffffc7cu), 0x1u);
    /* 005a4ea9: mov dword ptr [ebp - 0x380], 1 */ W32((u32)(r_ebp+0xfffffc80u), 0x1u);
    /* 005a4eb3: mov dword ptr [ebp - 0x37c], 1 */ W32((u32)(r_ebp+0xfffffc84u), 0x1u);
    /* 005a4ebd: mov dword ptr [ebp - 0x378], 1 */ W32((u32)(r_ebp+0xfffffc88u), 0x1u);
    /* 005a4ec7: mov dword ptr [ebp - 0x374], 1 */ W32((u32)(r_ebp+0xfffffc8cu), 0x1u);
    /* 005a4ed1: mov dword ptr [ebp - 0x370], 2 */ W32((u32)(r_ebp+0xfffffc90u), 0x2u);
    /* 005a4edb: mov dword ptr [ebp - 0x36c], 2 */ W32((u32)(r_ebp+0xfffffc94u), 0x2u);
    /* 005a4ee5: mov dword ptr [ebp - 0x368], 2 */ W32((u32)(r_ebp+0xfffffc98u), 0x2u);
    /* 005a4eef: mov dword ptr [ebp - 0x364], 2 */ W32((u32)(r_ebp+0xfffffc9cu), 0x2u);
    /* 005a4ef9: mov dword ptr [ebp - 0x360], 2 */ W32((u32)(r_ebp+0xfffffca0u), 0x2u);
    /* 005a4f03: mov dword ptr [ebp - 0x35c], 1 */ W32((u32)(r_ebp+0xfffffca4u), 0x1u);
    /* 005a4f0d: mov dword ptr [ebp - 0x358], 1 */ W32((u32)(r_ebp+0xfffffca8u), 0x1u);
    /* 005a4f17: mov dword ptr [ebp - 0x354], 1 */ W32((u32)(r_ebp+0xfffffcacu), 0x1u);
    /* 005a4f21: mov dword ptr [ebp - 0x350], 1 */ W32((u32)(r_ebp+0xfffffcb0u), 0x1u);
    /* 005a4f2b: mov dword ptr [ebp - 0x34c], 1 */ W32((u32)(r_ebp+0xfffffcb4u), 0x1u);
    /* 005a4f35: mov dword ptr [ebp - 0x348], 2 */ W32((u32)(r_ebp+0xfffffcb8u), 0x2u);
    /* 005a4f3f: mov dword ptr [ebp - 0x344], 2 */ W32((u32)(r_ebp+0xfffffcbcu), 0x2u);
    /* 005a4f49: mov dword ptr [ebp - 0x340], 2 */ W32((u32)(r_ebp+0xfffffcc0u), 0x2u);
    /* 005a4f53: mov dword ptr [ebp - 0x33c], 2 */ W32((u32)(r_ebp+0xfffffcc4u), 0x2u);
    /* 005a4f5d: mov dword ptr [ebp - 0x338], 2 */ W32((u32)(r_ebp+0xfffffcc8u), 0x2u);
    /* 005a4f67: mov dword ptr [ebp - 0x334], 1 */ W32((u32)(r_ebp+0xfffffcccu), 0x1u);
    /* 005a4f71: mov dword ptr [ebp - 0x330], 1 */ W32((u32)(r_ebp+0xfffffcd0u), 0x1u);
    /* 005a4f7b: mov dword ptr [ebp - 0x32c], 1 */ W32((u32)(r_ebp+0xfffffcd4u), 0x1u);
    /* 005a4f85: mov dword ptr [ebp - 0x328], 1 */ W32((u32)(r_ebp+0xfffffcd8u), 0x1u);
    /* 005a4f8f: mov dword ptr [ebp - 0x324], 1 */ W32((u32)(r_ebp+0xfffffcdcu), 0x1u);
    /* 005a4f99: mov dword ptr [ebp - 0x320], 2 */ W32((u32)(r_ebp+0xfffffce0u), 0x2u);
    /* 005a4fa3: mov dword ptr [ebp - 0x31c], 2 */ W32((u32)(r_ebp+0xfffffce4u), 0x2u);
    /* 005a4fad: mov dword ptr [ebp - 0x318], 2 */ W32((u32)(r_ebp+0xfffffce8u), 0x2u);
    /* 005a4fb7: mov dword ptr [ebp - 0x314], 2 */ W32((u32)(r_ebp+0xfffffcecu), 0x2u);
    /* 005a4fc1: mov dword ptr [ebp - 0x310], 2 */ W32((u32)(r_ebp+0xfffffcf0u), 0x2u);
    /* 005a4fcb: mov dword ptr [ebp - 0x30c], 1 */ W32((u32)(r_ebp+0xfffffcf4u), 0x1u);
    /* 005a4fd5: mov dword ptr [ebp - 0x308], 1 */ W32((u32)(r_ebp+0xfffffcf8u), 0x1u);
    /* 005a4fdf: mov dword ptr [ebp - 0x304], 1 */ W32((u32)(r_ebp+0xfffffcfcu), 0x1u);
    /* 005a4fe9: mov dword ptr [ebp - 0x300], 5 */ W32((u32)(r_ebp+0xfffffd00u), 0x5u);
    /* 005a4ff3: mov dword ptr [ebp - 0x2fc], 1 */ W32((u32)(r_ebp+0xfffffd04u), 0x1u);
    /* 005a4ffd: mov dword ptr [ebp - 0x2f8], 2 */ W32((u32)(r_ebp+0xfffffd08u), 0x2u);
    /* 005a5007: mov dword ptr [ebp - 0x2f4], 2 */ W32((u32)(r_ebp+0xfffffd0cu), 0x2u);
    /* 005a5011: mov dword ptr [ebp - 0x2f0], 2 */ W32((u32)(r_ebp+0xfffffd10u), 0x2u);
    /* 005a501b: mov dword ptr [ebp - 0x2ec], 2 */ W32((u32)(r_ebp+0xfffffd14u), 0x2u);
    /* 005a5025: mov dword ptr [ebp - 0x2e8], 2 */ W32((u32)(r_ebp+0xfffffd18u), 0x2u);
    /* 005a502f: mov dword ptr [ebp - 0x2e4], 1 */ W32((u32)(r_ebp+0xfffffd1cu), 0x1u);
    /* 005a5039: mov dword ptr [ebp - 0x2e0], 1 */ W32((u32)(r_ebp+0xfffffd20u), 0x1u);
    /* 005a5043: mov dword ptr [ebp - 0x2dc], 5 */ W32((u32)(r_ebp+0xfffffd24u), 0x5u);
    /* 005a504d: mov dword ptr [ebp - 0x2d8], 5 */ W32((u32)(r_ebp+0xfffffd28u), 0x5u);
    /* 005a5057: mov dword ptr [ebp - 0x2d4], 5 */ W32((u32)(r_ebp+0xfffffd2cu), 0x5u);
    /* 005a5061: mov dword ptr [ebp - 0x2d0], 1 */ W32((u32)(r_ebp+0xfffffd30u), 0x1u);
    /* 005a506b: mov dword ptr [ebp - 0x2cc], 1 */ W32((u32)(r_ebp+0xfffffd34u), 0x1u);
    /* 005a5075: mov dword ptr [ebp - 0x2c8], 1 */ W32((u32)(r_ebp+0xfffffd38u), 0x1u);
    /* 005a507f: mov dword ptr [ebp - 0x2c4], 3 */ W32((u32)(r_ebp+0xfffffd3cu), 0x3u);
    /* 005a5089: mov dword ptr [ebp - 0x2c0], 3 */ W32((u32)(r_ebp+0xfffffd40u), 0x3u);
    /* 005a5093: mov dword ptr [ebp - 0x2bc], 1 */ W32((u32)(r_ebp+0xfffffd44u), 0x1u);
    /* 005a509d: mov dword ptr [ebp - 0x2b8], 1 */ W32((u32)(r_ebp+0xfffffd48u), 0x1u);
    /* 005a50a7: mov dword ptr [ebp - 0x2b4], 1 */ W32((u32)(r_ebp+0xfffffd4cu), 0x1u);
    /* 005a50b1: mov dword ptr [ebp - 0x2b0], 1 */ W32((u32)(r_ebp+0xfffffd50u), 0x1u);
    /* 005a50bb: mov dword ptr [ebp - 0x2ac], 1 */ W32((u32)(r_ebp+0xfffffd54u), 0x1u);
    /* 005a50c5: mov dword ptr [ebp - 0x2a8], 1 */ W32((u32)(r_ebp+0xfffffd58u), 0x1u);
    /* 005a50cf: mov dword ptr [ebp - 0x2a4], 1 */ W32((u32)(r_ebp+0xfffffd5cu), 0x1u);
    /* 005a50d9: mov dword ptr [ebp - 0x2a0], 1 */ W32((u32)(r_ebp+0xfffffd60u), 0x1u);
    /* 005a50e3: mov dword ptr [ebp - 0x29c], 3 */ W32((u32)(r_ebp+0xfffffd64u), 0x3u);
    /* 005a50ed: mov dword ptr [ebp - 0x298], 3 */ W32((u32)(r_ebp+0xfffffd68u), 0x3u);
    /* 005a50f7: mov dword ptr [ebp - 0x294], 1 */ W32((u32)(r_ebp+0xfffffd6cu), 0x1u);
    /* 005a5101: mov dword ptr [ebp - 0x290], 1 */ W32((u32)(r_ebp+0xfffffd70u), 0x1u);
    /* 005a510b: mov dword ptr [ebp - 0x28c], 1 */ W32((u32)(r_ebp+0xfffffd74u), 0x1u);
    /* 005a5115: mov dword ptr [ebp - 0x288], 1 */ W32((u32)(r_ebp+0xfffffd78u), 0x1u);
    /* 005a511f: mov dword ptr [ebp - 0x284], 1 */ W32((u32)(r_ebp+0xfffffd7cu), 0x1u);
    /* 005a5129: mov dword ptr [ebp - 0x280], 1 */ W32((u32)(r_ebp+0xfffffd80u), 0x1u);
    /* 005a5133: mov dword ptr [ebp - 0x27c], 1 */ W32((u32)(r_ebp+0xfffffd84u), 0x1u);
    /* 005a513d: mov dword ptr [ebp - 0x278], 3 */ W32((u32)(r_ebp+0xfffffd88u), 0x3u);
    /* 005a5147: mov dword ptr [ebp - 0x274], 3 */ W32((u32)(r_ebp+0xfffffd8cu), 0x3u);
    /* 005a5151: mov dword ptr [ebp - 0x270], 3 */ W32((u32)(r_ebp+0xfffffd90u), 0x3u);
    /* 005a515b: mov dword ptr [ebp - 0x26c], 1 */ W32((u32)(r_ebp+0xfffffd94u), 0x1u);
    /* 005a5165: mov dword ptr [ebp - 0x268], 1 */ W32((u32)(r_ebp+0xfffffd98u), 0x1u);
    /* 005a516f: mov dword ptr [ebp - 0x264], 1 */ W32((u32)(r_ebp+0xfffffd9cu), 0x1u);
    /* 005a5179: mov dword ptr [ebp - 0x260], 1 */ W32((u32)(r_ebp+0xfffffda0u), 0x1u);
    /* 005a5183: mov dword ptr [ebp - 0x25c], 1 */ W32((u32)(r_ebp+0xfffffda4u), 0x1u);
    /* 005a518d: mov dword ptr [ebp - 0x258], 1 */ W32((u32)(r_ebp+0xfffffda8u), 0x1u);
    /* 005a5197: mov dword ptr [ebp - 0x254], 1 */ W32((u32)(r_ebp+0xfffffdacu), 0x1u);
    /* 005a51a1: mov dword ptr [ebp - 0x250], 3 */ W32((u32)(r_ebp+0xfffffdb0u), 0x3u);
    /* 005a51ab: mov dword ptr [ebp - 0x24c], 3 */ W32((u32)(r_ebp+0xfffffdb4u), 0x3u);
    /* 005a51b5: mov dword ptr [ebp - 0x248], 3 */ W32((u32)(r_ebp+0xfffffdb8u), 0x3u);
    /* 005a51bf: mov dword ptr [ebp - 0x244], 1 */ W32((u32)(r_ebp+0xfffffdbcu), 0x1u);
    /* 005a51c9: mov dword ptr [ebp - 0x240], 1 */ W32((u32)(r_ebp+0xfffffdc0u), 0x1u);
    /* 005a51d3: mov dword ptr [ebp - 0x23c], 1 */ W32((u32)(r_ebp+0xfffffdc4u), 0x1u);
    /* 005a51dd: mov dword ptr [ebp - 0x238], 1 */ W32((u32)(r_ebp+0xfffffdc8u), 0x1u);
    /* 005a51e7: mov dword ptr [ebp - 0x234], 1 */ W32((u32)(r_ebp+0xfffffdccu), 0x1u);
    /* 005a51f1: mov dword ptr [ebp - 0x230], 1 */ W32((u32)(r_ebp+0xfffffdd0u), 0x1u);
    /* 005a51fb: mov dword ptr [ebp - 0x22c], 3 */ W32((u32)(r_ebp+0xfffffdd4u), 0x3u);
    /* 005a5205: mov dword ptr [ebp - 0x228], 3 */ W32((u32)(r_ebp+0xfffffdd8u), 0x3u);
    /* 005a520f: mov dword ptr [ebp - 0x224], 3 */ W32((u32)(r_ebp+0xfffffddcu), 0x3u);
    /* 005a5219: mov dword ptr [ebp - 0x220], 3 */ W32((u32)(r_ebp+0xfffffde0u), 0x3u);
    /* 005a5223: mov dword ptr [ebp - 0x21c], 1 */ W32((u32)(r_ebp+0xfffffde4u), 0x1u);
    /* 005a522d: mov dword ptr [ebp - 0x218], 1 */ W32((u32)(r_ebp+0xfffffde8u), 0x1u);
    /* 005a5237: mov dword ptr [ebp - 0x214], 1 */ W32((u32)(r_ebp+0xfffffdecu), 0x1u);
    /* 005a5241: mov dword ptr [ebp - 0x210], 1 */ W32((u32)(r_ebp+0xfffffdf0u), 0x1u);
    /* 005a524b: mov dword ptr [ebp - 0x20c], 1 */ W32((u32)(r_ebp+0xfffffdf4u), 0x1u);
    /* 005a5255: mov dword ptr [ebp - 0x208], 2 */ W32((u32)(r_ebp+0xfffffdf8u), 0x2u);
    /* 005a525f: mov dword ptr [ebp - 0x204], 3 */ W32((u32)(r_ebp+0xfffffdfcu), 0x3u);
    /* 005a5269: mov dword ptr [ebp - 0x200], 3 */ W32((u32)(r_ebp+0xfffffe00u), 0x3u);
    /* 005a5273: mov dword ptr [ebp - 0x1fc], 3 */ W32((u32)(r_ebp+0xfffffe04u), 0x3u);
    /* 005a527d: mov dword ptr [ebp - 0x1f8], 3 */ W32((u32)(r_ebp+0xfffffe08u), 0x3u);
    /* 005a5287: mov dword ptr [ebp - 0x1f4], 2 */ W32((u32)(r_ebp+0xfffffe0cu), 0x2u);
    /* 005a5291: mov dword ptr [ebp - 0x1f0], 2 */ W32((u32)(r_ebp+0xfffffe10u), 0x2u);
    /* 005a529b: mov dword ptr [ebp - 0x1ec], 1 */ W32((u32)(r_ebp+0xfffffe14u), 0x1u);
    /* 005a52a5: mov dword ptr [ebp - 0x1e8], 1 */ W32((u32)(r_ebp+0xfffffe18u), 0x1u);
    /* 005a52af: mov dword ptr [ebp - 0x1e4], 1 */ W32((u32)(r_ebp+0xfffffe1cu), 0x1u);
    /* 005a52b9: mov dword ptr [ebp - 0x1e0], 2 */ W32((u32)(r_ebp+0xfffffe20u), 0x2u);
    /* 005a52c3: mov dword ptr [ebp - 0x1dc], 2 */ W32((u32)(r_ebp+0xfffffe24u), 0x2u);
    /* 005a52cd: mov dword ptr [ebp - 0x1d8], 2 */ W32((u32)(r_ebp+0xfffffe28u), 0x2u);
    /* 005a52d7: mov dword ptr [ebp - 0x1d4], 2 */ W32((u32)(r_ebp+0xfffffe2cu), 0x2u);
    /* 005a52e1: mov dword ptr [ebp - 0x1d0], 2 */ W32((u32)(r_ebp+0xfffffe30u), 0x2u);
    /* 005a52eb: mov dword ptr [ebp - 0x1cc], 2 */ W32((u32)(r_ebp+0xfffffe34u), 0x2u);
    /* 005a52f5: mov dword ptr [ebp - 0x1c8], 2 */ W32((u32)(r_ebp+0xfffffe38u), 0x2u);
    /* 005a52ff: mov dword ptr [ebp - 0x1c4], 2 */ W32((u32)(r_ebp+0xfffffe3cu), 0x2u);
    /* 005a5309: mov dword ptr [ebp - 0x1c0], 2 */ W32((u32)(r_ebp+0xfffffe40u), 0x2u);
    /* 005a5313: mov dword ptr [ebp - 0x1bc], 2 */ W32((u32)(r_ebp+0xfffffe44u), 0x2u);
    /* 005a531d: mov dword ptr [ebp - 0x1b8], 2 */ W32((u32)(r_ebp+0xfffffe48u), 0x2u);
    /* 005a5327: mov dword ptr [ebp - 0x1b4], 2 */ W32((u32)(r_ebp+0xfffffe4cu), 0x2u);
    /* 005a5331: mov dword ptr [ebp - 0x1b0], 2 */ W32((u32)(r_ebp+0xfffffe50u), 0x2u);
    /* 005a533b: mov dword ptr [ebp - 0x1ac], 2 */ W32((u32)(r_ebp+0xfffffe54u), 0x2u);
    /* 005a5345: mov dword ptr [ebp - 0x1a8], 2 */ W32((u32)(r_ebp+0xfffffe58u), 0x2u);
    /* 005a534f: mov dword ptr [ebp - 0x1a4], 2 */ W32((u32)(r_ebp+0xfffffe5cu), 0x2u);
    /* 005a5359: mov dword ptr [ebp - 0x1a0], 2 */ W32((u32)(r_ebp+0xfffffe60u), 0x2u);
    /* 005a5363: mov dword ptr [ebp - 0x19c], 2 */ W32((u32)(r_ebp+0xfffffe64u), 0x2u);
    /* 005a536d: mov dword ptr [ebp - 0x198], 2 */ W32((u32)(r_ebp+0xfffffe68u), 0x2u);
    /* 005a5377: mov dword ptr [ebp - 0x194], 2 */ W32((u32)(r_ebp+0xfffffe6cu), 0x2u);
    /* 005a5381: mov dword ptr [ebp - 0x190], 4 */ W32((u32)(r_ebp+0xfffffe70u), 0x4u);
    /* 005a538b: mov dword ptr [ebp - 0x18c], 4 */ W32((u32)(r_ebp+0xfffffe74u), 0x4u);
    /* 005a5395: mov dword ptr [ebp - 0x188], 4 */ W32((u32)(r_ebp+0xfffffe78u), 0x4u);
    /* 005a539f: mov dword ptr [ebp - 0x184], 4 */ W32((u32)(r_ebp+0xfffffe7cu), 0x4u);
    /* 005a53a9: mov dword ptr [ebp - 0x180], 4 */ W32((u32)(r_ebp+0xfffffe80u), 0x4u);
    /* 005a53b3: mov dword ptr [ebp - 0x17c], 4 */ W32((u32)(r_ebp+0xfffffe84u), 0x4u);
    /* 005a53bd: mov dword ptr [ebp - 0x178], 1 */ W32((u32)(r_ebp+0xfffffe88u), 0x1u);
    /* 005a53c7: mov dword ptr [ebp - 0x174], 1 */ W32((u32)(r_ebp+0xfffffe8cu), 0x1u);
    /* 005a53d1: mov dword ptr [ebp - 0x170], 1 */ W32((u32)(r_ebp+0xfffffe90u), 0x1u);
    /* 005a53db: mov dword ptr [ebp - 0x16c], 1 */ W32((u32)(r_ebp+0xfffffe94u), 0x1u);
    /* 005a53e5: mov dword ptr [ebp - 0x168], 4 */ W32((u32)(r_ebp+0xfffffe98u), 0x4u);
    /* 005a53ef: mov dword ptr [ebp - 0x164], 4 */ W32((u32)(r_ebp+0xfffffe9cu), 0x4u);
    /* 005a53f9: mov dword ptr [ebp - 0x160], 4 */ W32((u32)(r_ebp+0xfffffea0u), 0x4u);
    /* 005a5403: mov dword ptr [ebp - 0x15c], 4 */ W32((u32)(r_ebp+0xfffffea4u), 0x4u);
    /* 005a540d: mov dword ptr [ebp - 0x158], 4 */ W32((u32)(r_ebp+0xfffffea8u), 0x4u);
    /* 005a5417: mov dword ptr [ebp - 0x154], 4 */ W32((u32)(r_ebp+0xfffffeacu), 0x4u);
    /* 005a5421: mov dword ptr [ebp - 0x150], 1 */ W32((u32)(r_ebp+0xfffffeb0u), 0x1u);
    /* 005a542b: mov dword ptr [ebp - 0x14c], 1 */ W32((u32)(r_ebp+0xfffffeb4u), 0x1u);
    /* 005a5435: mov dword ptr [ebp - 0x148], 1 */ W32((u32)(r_ebp+0xfffffeb8u), 0x1u);
    /* 005a543f: mov dword ptr [ebp - 0x144], 1 */ W32((u32)(r_ebp+0xfffffebcu), 0x1u);
    /* 005a5449: mov dword ptr [ebp - 0x140], 1 */ W32((u32)(r_ebp+0xfffffec0u), 0x1u);
    /* 005a5453: mov dword ptr [ebp - 0x13c], 1 */ W32((u32)(r_ebp+0xfffffec4u), 0x1u);
    /* 005a545d: mov dword ptr [ebp - 0x138], 1 */ W32((u32)(r_ebp+0xfffffec8u), 0x1u);
    /* 005a5467: mov dword ptr [ebp - 0x134], 4 */ W32((u32)(r_ebp+0xfffffeccu), 0x4u);
    /* 005a5471: mov dword ptr [ebp - 0x130], 4 */ W32((u32)(r_ebp+0xfffffed0u), 0x4u);
    /* 005a547b: mov dword ptr [ebp - 0x12c], 1 */ W32((u32)(r_ebp+0xfffffed4u), 0x1u);
    /* 005a5485: mov dword ptr [ebp - 0x128], 1 */ W32((u32)(r_ebp+0xfffffed8u), 0x1u);
    /* 005a548f: mov dword ptr [ebp - 0x124], 1 */ W32((u32)(r_ebp+0xfffffedcu), 0x1u);
    /* 005a5499: mov dword ptr [ebp - 0x120], 1 */ W32((u32)(r_ebp+0xfffffee0u), 0x1u);
    /* 005a54a3: mov dword ptr [ebp - 0x11c], 1 */ W32((u32)(r_ebp+0xfffffee4u), 0x1u);
    /* 005a54ad: mov dword ptr [ebp - 0x118], 3 */ W32((u32)(r_ebp+0xfffffee8u), 0x3u);
    /* 005a54b7: mov dword ptr [ebp - 0x114], 3 */ W32((u32)(r_ebp+0xfffffeecu), 0x3u);
    /* 005a54c1: mov dword ptr [ebp - 0x110], 3 */ W32((u32)(r_ebp+0xfffffef0u), 0x3u);
    /* 005a54cb: mov dword ptr [ebp - 0x10c], 3 */ W32((u32)(r_ebp+0xfffffef4u), 0x3u);
    /* 005a54d5: mov dword ptr [ebp - 0x108], 3 */ W32((u32)(r_ebp+0xfffffef8u), 0x3u);
    /* 005a54df: mov dword ptr [ebp - 0x104], 3 */ W32((u32)(r_ebp+0xfffffefcu), 0x3u);
    /* 005a54e9: mov dword ptr [ebp - 0x100], 3 */ W32((u32)(r_ebp+0xffffff00u), 0x3u);
    /* 005a54f3: mov dword ptr [ebp - 0xfc], 3 */ W32((u32)(r_ebp+0xffffff04u), 0x3u);
    /* 005a54fd: mov dword ptr [ebp - 0xf8], 1 */ W32((u32)(r_ebp+0xffffff08u), 0x1u);
    /* 005a5507: mov dword ptr [ebp - 0xf4], 1 */ W32((u32)(r_ebp+0xffffff0cu), 0x1u);
    /* 005a5511: mov dword ptr [ebp - 0xf0], 4 */ W32((u32)(r_ebp+0xffffff10u), 0x4u);
    /* 005a551b: mov dword ptr [ebp - 0xec], 4 */ W32((u32)(r_ebp+0xffffff14u), 0x4u);
    /* 005a5525: mov dword ptr [ebp - 0xe8], 4 */ W32((u32)(r_ebp+0xffffff18u), 0x4u);
    /* 005a552f: mov dword ptr [ebp - 0xe4], 4 */ W32((u32)(r_ebp+0xffffff1cu), 0x4u);
    /* 005a5539: mov dword ptr [ebp - 0xe0], 4 */ W32((u32)(r_ebp+0xffffff20u), 0x4u);
    /* 005a5543: mov dword ptr [ebp - 0xdc], 1 */ W32((u32)(r_ebp+0xffffff24u), 0x1u);
    /* 005a554d: mov dword ptr [ebp - 0xd8], 1 */ W32((u32)(r_ebp+0xffffff28u), 0x1u);
    /* 005a5557: mov dword ptr [ebp - 0xd4], 1 */ W32((u32)(r_ebp+0xffffff2cu), 0x1u);
    /* 005a5561: mov dword ptr [ebp - 0xd0], 1 */ W32((u32)(r_ebp+0xffffff30u), 0x1u);
    /* 005a556b: mov dword ptr [ebp - 0xcc], 1 */ W32((u32)(r_ebp+0xffffff34u), 0x1u);
    /* 005a5575: mov dword ptr [ebp - 0xc8], 4 */ W32((u32)(r_ebp+0xffffff38u), 0x4u);
    /* 005a557f: mov dword ptr [ebp - 0xc4], 4 */ W32((u32)(r_ebp+0xffffff3cu), 0x4u);
    /* 005a5589: mov dword ptr [ebp - 0xc0], 4 */ W32((u32)(r_ebp+0xffffff40u), 0x4u);
    /* 005a5593: mov dword ptr [ebp - 0xbc], 4 */ W32((u32)(r_ebp+0xffffff44u), 0x4u);
    /* 005a559d: mov dword ptr [ebp - 0xb8], 4 */ W32((u32)(r_ebp+0xffffff48u), 0x4u);
    /* 005a55a7: mov dword ptr [ebp - 0xb4], 4 */ W32((u32)(r_ebp+0xffffff4cu), 0x4u);
    /* 005a55b1: mov dword ptr [ebp - 0xb0], 1 */ W32((u32)(r_ebp+0xffffff50u), 0x1u);
    /* 005a55bb: mov dword ptr [ebp - 0xac], 1 */ W32((u32)(r_ebp+0xffffff54u), 0x1u);
    /* 005a55c5: mov dword ptr [ebp - 0xa8], 1 */ W32((u32)(r_ebp+0xffffff58u), 0x1u);
    /* 005a55cf: mov dword ptr [ebp - 0xa4], 1 */ W32((u32)(r_ebp+0xffffff5cu), 0x1u);
    /* 005a55d9: mov dword ptr [ebp - 0xa0], 4 */ W32((u32)(r_ebp+0xffffff60u), 0x4u);
    /* 005a55e3: mov dword ptr [ebp - 0x9c], 4 */ W32((u32)(r_ebp+0xffffff64u), 0x4u);
    /* 005a55ed: mov dword ptr [ebp - 0x98], 4 */ W32((u32)(r_ebp+0xffffff68u), 0x4u);
    /* 005a55f7: mov dword ptr [ebp - 0x94], 4 */ W32((u32)(r_ebp+0xffffff6cu), 0x4u);
    /* 005a5601: mov dword ptr [ebp - 0x90], 4 */ W32((u32)(r_ebp+0xffffff70u), 0x4u);
    /* 005a560b: mov dword ptr [ebp - 0x8c], 4 */ W32((u32)(r_ebp+0xffffff74u), 0x4u);
    /* 005a5615: mov dword ptr [ebp - 0x88], 4 */ W32((u32)(r_ebp+0xffffff78u), 0x4u);
    /* 005a561f: mov dword ptr [ebp - 0x84], 4 */ W32((u32)(r_ebp+0xffffff7cu), 0x4u);
    /* 005a5629: mov dword ptr [ebp - 0x80], 4 */ W32((u32)(r_ebp+0xffffff80u), 0x4u);
    /* 005a5630: mov dword ptr [ebp - 0x7c], 4 */ W32((u32)(r_ebp+0xffffff84u), 0x4u);
    /* 005a5637: mov dword ptr [ebp - 0x78], 4 */ W32((u32)(r_ebp+0xffffff88u), 0x4u);
    /* 005a563e: mov dword ptr [ebp - 0x74], 4 */ W32((u32)(r_ebp+0xffffff8cu), 0x4u);
    /* 005a5645: mov dword ptr [ebp - 0x70], 4 */ W32((u32)(r_ebp+0xffffff90u), 0x4u);
    /* 005a564c: mov dword ptr [ebp - 0x6c], 4 */ W32((u32)(r_ebp+0xffffff94u), 0x4u);
    /* 005a5653: mov dword ptr [ebp - 0x68], 4 */ W32((u32)(r_ebp+0xffffff98u), 0x4u);
    /* 005a565a: mov dword ptr [ebp - 0x64], 2 */ W32((u32)(r_ebp+0xffffff9cu), 0x2u);
    /* 005a5661: mov dword ptr [ebp - 0x60], 4 */ W32((u32)(r_ebp+0xffffffa0u), 0x4u);
    /* 005a5668: mov dword ptr [ebp - 0x5c], 4 */ W32((u32)(r_ebp+0xffffffa4u), 0x4u);
    /* 005a566f: mov dword ptr [ebp - 0x58], 2 */ W32((u32)(r_ebp+0xffffffa8u), 0x2u);
    /* 005a5676: mov dword ptr [ebp - 0x54], 2 */ W32((u32)(r_ebp+0xffffffacu), 0x2u);
    /* 005a567d: mov dword ptr [ebp - 0x50], 2 */ W32((u32)(r_ebp+0xffffffb0u), 0x2u);
    /* 005a5684: mov dword ptr [ebp - 0x4c], 2 */ W32((u32)(r_ebp+0xffffffb4u), 0x2u);
    /* 005a568b: mov dword ptr [ebp - 0x48], 2 */ W32((u32)(r_ebp+0xffffffb8u), 0x2u);
    /* 005a5692: mov dword ptr [ebp - 0x44], 2 */ W32((u32)(r_ebp+0xffffffbcu), 0x2u);
    /* 005a5699: mov dword ptr [ebp - 0x40], 2 */ W32((u32)(r_ebp+0xffffffc0u), 0x2u);
    /* 005a56a0: mov dword ptr [ebp - 0x3c], 2 */ W32((u32)(r_ebp+0xffffffc4u), 0x2u);
    /* 005a56a7: mov dword ptr [ebp - 0x38], 2 */ W32((u32)(r_ebp+0xffffffc8u), 0x2u);
    /* 005a56ae: mov dword ptr [ebp - 0x34], 2 */ W32((u32)(r_ebp+0xffffffccu), 0x2u);
    /* 005a56b5: mov dword ptr [ebp - 0x30], 2 */ W32((u32)(r_ebp+0xffffffd0u), 0x2u);
    /* 005a56bc: mov dword ptr [ebp - 0x2c], 2 */ W32((u32)(r_ebp+0xffffffd4u), 0x2u);
    /* 005a56c3: mov dword ptr [ebp - 0x28], 4 */ W32((u32)(r_ebp+0xffffffd8u), 0x4u);
    /* 005a56ca: mov dword ptr [ebp - 0x24], 4 */ W32((u32)(r_ebp+0xffffffdcu), 0x4u);
    /* 005a56d1: mov dword ptr [ebp - 0x20], 4 */ W32((u32)(r_ebp+0xffffffe0u), 0x4u);
    /* 005a56d8: mov dword ptr [ebp - 0x1c], 4 */ W32((u32)(r_ebp+0xffffffe4u), 0x4u);
    /* 005a56df: mov dword ptr [ebp - 0x18], 4 */ W32((u32)(r_ebp+0xffffffe8u), 0x4u);
    /* 005a56e6: mov dword ptr [ebp - 0x14], 4 */ W32((u32)(r_ebp+0xffffffecu), 0x4u);
    /* 005a56ed: mov dword ptr [ebp - 0x10], 4 */ W32((u32)(r_ebp+0xfffffff0u), 0x4u);
    /* 005a56f4: mov dword ptr [ebp - 0xc], 4 */ W32((u32)(r_ebp+0xfffffff4u), 0x4u);
    /* 005a56fb: mov dword ptr [ebp - 8], 4 */ W32((u32)(r_ebp+0xfffffff8u), 0x4u);
    /* 005a5702: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 005a5709: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a570c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a570d: mov ecx, dword ptr [ebp - 0x4e4] */ r_ecx = R32((u32)(r_ebp+0xfffffb1cu));
    /* 005a5713: call 0x5a67d0 */ r_esp -= 4; W32(r_esp, 0x5a5718u); f_005a67d0();
    /* 005a5718: mov dword ptr [ebp - 0x4dc], eax */ W32((u32)(r_ebp+0xfffffb24u), r_eax);
    /* 005a571e: mov eax, dword ptr [ebp - 0x4dc] */ r_eax = R32((u32)(r_ebp+0xfffffb24u));
    /* 005a5724: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a5727: lea esi, [ebp + eax - 0x4d8] */ r_esi = (u32)(r_ebp+r_eax+0xfffffb28u);
    /* 005a572e: mov ecx, dword ptr [ebp - 0x4e4] */ r_ecx = R32((u32)(r_ebp+0xfffffb1cu));
    /* 005a5734: call 0x5a6760 */ r_esp -= 4; W32(r_esp, 0x5a5739u); f_005a6760();
    /* 005a5739: mov ecx, dword ptr [esi + eax*4] */ r_ecx = R32((u32)(r_esi+r_eax*4));
    /* 005a573c: mov dword ptr [ebp - 0x4e0], ecx */ W32((u32)(r_ebp+0xfffffb20u), r_ecx);
    /* 005a5742: mov edx, dword ptr [ebp - 0x4e0] */ r_edx = R32((u32)(r_ebp+0xfffffb20u));
    /* 005a5748: mov dword ptr [ebp - 0x4e8], edx */ W32((u32)(r_ebp+0xfffffb18u), r_edx);
    /* 005a574e: mov eax, dword ptr [ebp - 0x4e8] */ r_eax = R32((u32)(r_ebp+0xfffffb18u));
    /* 005a5754: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005a5757: mov dword ptr [ebp - 0x4e8], eax */ W32((u32)(r_ebp+0xfffffb18u), r_eax);
    /* 005a575d: cmp dword ptr [ebp - 0x4e8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffb18u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005a5764: ja 0x5a57de */ if ((!fC&&!fZ)) goto L_005a57de;
L_005a5766:; BB(0x005a5766);
    /* 005a5766: mov ecx, dword ptr [ebp - 0x4e8] */ r_ecx = R32((u32)(r_ebp+0xfffffb18u));
    /* 005a576c: jmp dword ptr [ecx*4 + 0x5a5820] */ { u32 t = R32((u32)(r_ecx*4+0x5a5820u)); switch (t) { case 0x5a5773u: goto L_005a5773; case 0x5a577du: goto L_005a577d; case 0x5a5784u: goto L_005a5784; case 0x5a57b9u: goto L_005a57b9; case 0x5a57c0u: goto L_005a57c0; default: UNSUP(0x005a576c, "jump table entry is not a known target"); } }
L_005a5773:; BB(0x005a5773);
    /* 005a5773: mov eax, 1 */ r_eax = 0x1u;
    /* 005a5778: jmp 0x5a5816 */ goto L_005a5816;
L_005a577d:; BB(0x005a577d);
    /* 005a577d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a577f: jmp 0x5a5816 */ goto L_005a5816;
L_005a5784:; BB(0x005a5784);
    /* 005a5784: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a5787: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a5788: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a578e: call 0x5b3430 */ r_esp -= 4; W32(r_esp, 0x5a5793u); f_005b3430();
    /* 005a5793: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005a5796: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a5798: je 0x5a57a3 */ if (fZ) goto L_005a57a3;
L_005a579a:; BB(0x005a579a);
    /* 005a579a: mov eax, 2 */ r_eax = 0x2u;
    /* 005a579f: jmp 0x5a5816 */ goto L_005a5816;
L_005a57a3:; BB(0x005a57a3);
    /* 005a57a3: cmp dword ptr [ebp - 0x4dc], 0x12 */ {  u32 a = R32((u32)(r_ebp+0xfffffb24u)); u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a57aa: jne 0x5a57b2 */ if (!fZ) goto L_005a57b2;
L_005a57ac:; BB(0x005a57ac);
    /* 005a57ac: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a57ae: jmp 0x5a5816 */ goto L_005a5816;
L_005a57b2:; BB(0x005a57b2);
    /* 005a57b2: mov eax, 1 */ r_eax = 0x1u;
    /* 005a57b7: jmp 0x5a5816 */ goto L_005a5816;
L_005a57b9:; BB(0x005a57b9);
    /* 005a57b9: mov eax, 3 */ r_eax = 0x3u;
    /* 005a57be: jmp 0x5a5816 */ goto L_005a5816;
L_005a57c0:; BB(0x005a57c0);
    /* 005a57c0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a57c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a57c4: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a57ca: call 0x5b37f0 */ r_esp -= 4; W32(r_esp, 0x5a57cfu); f_005b37f0();
    /* 005a57cf: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005a57d2: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 005a57d4: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 005a57d6: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005a57d9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a57dc: jmp 0x5a5816 */ goto L_005a5816;
L_005a57de:; BB(0x005a57de);
    /* 005a57de: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 005a57e0: jne 0x5a57f9 */ if (!fZ) goto L_005a57f9;
L_005a57e2:; BB(0x005a57e2);
    /* 005a57e2: push 0xc6 */ { u32 v = 0xc6u; r_esp -= 4; W32(r_esp, v); }
    /* 005a57e7: push 0x6cf7b4 */ { u32 v = 0x6cf7b4u; r_esp -= 4; W32(r_esp, v); }
    /* 005a57ec: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 005a57f1: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5a57f6u); f_005e9f20();
    /* 005a57f6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005a57f9:; BB(0x005a57f9);
    /* 005a57f9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 005a57fb: jne 0x5a5814 */ if (!fZ) goto L_005a5814;
L_005a57fd:; BB(0x005a57fd);
    /* 005a57fd: push 0xca */ { u32 v = 0xcau; r_esp -= 4; W32(r_esp, v); }
    /* 005a5802: push 0x6cf7b4 */ { u32 v = 0x6cf7b4u; r_esp -= 4; W32(r_esp, v); }
    /* 005a5807: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 005a580c: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5a5811u); f_005e9f20();
    /* 005a5811: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005a5814:; BB(0x005a5814);
    /* 005a5814: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005a5816:; BB(0x005a5816);
    /* 005a5816: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005a5817: mov esp, ebp */ r_esp = r_ebp;
    /* 005a5819: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a581a: ret 4 */ FN_RET(0x005a4b20); r_esp += 8; return;
}

void f_005a6760(void) /* royalmatchai::func_005a6760 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a6760);
    /* 005a6760: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a6761: mov ebp, esp */ r_ebp = r_esp;
    /* 005a6763: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a6766: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005a6769: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a676b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a676d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005a676f: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a6775: call 0x5b5c60 */ r_esp -= 4; W32(r_esp, 0x5a677au); f_005b5c60();
    /* 005a677a: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 005a677d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a677f: jne 0x5a6798 */ if (!fZ) goto L_005a6798;
L_005a6781:; BB(0x005a6781);
    /* 005a6781: push 0x367 */ { u32 v = 0x367u; r_esp -= 4; W32(r_esp, v); }
    /* 005a6786: push 0x6cf7b4 */ { u32 v = 0x6cf7b4u; r_esp -= 4; W32(r_esp, v); }
    /* 005a678b: push 0x6cf7d0 */ { u32 v = 0x6cf7d0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a6790: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5a6795u); f_005e9f20();
    /* 005a6795: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005a6798:; BB(0x005a6798);
    /* 005a6798: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a679a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a679c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005a679e: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a67a4: call 0x5b5f60 */ r_esp -= 4; W32(r_esp, 0x5a67a9u); f_005b5f60();
    /* 005a67a9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005a67ac: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a67b0: jne 0x5a67b9 */ if (!fZ) goto L_005a67b9;
L_005a67b2:; BB(0x005a67b2);
    /* 005a67b2: mov dword ptr [ebp - 4], 0xb */ W32((u32)(r_ebp+0xfffffffcu), 0xbu);
L_005a67b9:; BB(0x005a67b9);
    /* 005a67b9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a67bc: sub eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005a67bf: mov esp, ebp */ r_esp = r_ebp;
    /* 005a67c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a67c2: ret  */ FN_RET(0x005a6760); r_esp += 4; return;
}

