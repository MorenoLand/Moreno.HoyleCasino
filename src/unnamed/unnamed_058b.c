#include "protos.h"

void f_0058b380(void) /* sub_58B380 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0058b380);
    /* 0058b380: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058b381: mov ebp, esp */ r_ebp = r_esp;
    /* 0058b383: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0058b385: push 0x6a6f00 */ { u32 v = 0x6a6f00u; r_esp -= 4; W32(r_esp, v); }
    /* 0058b38a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0058b390: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058b391: sub esp, 0x764 */ {  u32 a = r_esp; u32 b = 0x764u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058b397: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0058b39c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0058b39e: mov dword ptr [ebp - 0xc0], eax */ W32((u32)(r_ebp+0xffffff40u), r_eax);
    /* 0058b3a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058b3a5: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0058b3a8: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0058b3ae: mov dword ptr [ebp - 0x75c], ecx */ W32((u32)(r_ebp+0xfffff8a4u), r_ecx);
    /* 0058b3b4: mov dword ptr [ebp - 0x6dc], 1 */ W32((u32)(r_ebp+0xfffff924u), 0x1u);
    /* 0058b3be: mov dword ptr [ebp - 0x6d8], 1 */ W32((u32)(r_ebp+0xfffff928u), 0x1u);
    /* 0058b3c8: mov dword ptr [ebp - 0x6d4], 2 */ W32((u32)(r_ebp+0xfffff92cu), 0x2u);
    /* 0058b3d2: mov dword ptr [ebp - 0x6d0], 3 */ W32((u32)(r_ebp+0xfffff930u), 0x3u);
    /* 0058b3dc: mov dword ptr [ebp - 0x6cc], 3 */ W32((u32)(r_ebp+0xfffff934u), 0x3u);
    /* 0058b3e6: mov dword ptr [ebp - 0x6c8], 4 */ W32((u32)(r_ebp+0xfffff938u), 0x4u);
    /* 0058b3f0: mov dword ptr [ebp - 0x6c4], 4 */ W32((u32)(r_ebp+0xfffff93cu), 0x4u);
    /* 0058b3fa: mov dword ptr [ebp - 0x6c0], 4 */ W32((u32)(r_ebp+0xfffff940u), 0x4u);
    /* 0058b404: mov dword ptr [ebp - 0x6bc], 5 */ W32((u32)(r_ebp+0xfffff944u), 0x5u);
    /* 0058b40e: mov dword ptr [ebp - 0x6b8], 6 */ W32((u32)(r_ebp+0xfffff948u), 0x6u);
    /* 0058b418: mov dword ptr [ebp - 0x6b4], 6 */ W32((u32)(r_ebp+0xfffff94cu), 0x6u);
    /* 0058b422: mov dword ptr [ebp - 0x6b0], 7 */ W32((u32)(r_ebp+0xfffff950u), 0x7u);
    /* 0058b42c: mov dword ptr [ebp - 0x6ac], 8 */ W32((u32)(r_ebp+0xfffff954u), 0x8u);
    /* 0058b436: mov dword ptr [ebp - 0x6a8], 9 */ W32((u32)(r_ebp+0xfffff958u), 0x9u);
    /* 0058b440: mov dword ptr [ebp - 0x6a4], 9 */ W32((u32)(r_ebp+0xfffff95cu), 0x9u);
    /* 0058b44a: mov eax, dword ptr [0x793584] */ r_eax = R32((u32)(0x793584u));
    /* 0058b44f: mov ecx, dword ptr [eax + 0x3b68] */ r_ecx = R32((u32)(r_eax+0x3b68u));
    /* 0058b455: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0058b458: movsx eax, byte ptr [edx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx));
    /* 0058b45b: mov dword ptr [ebp - 0x738], eax */ W32((u32)(r_ebp+0xfffff8c8u), r_eax);
    /* 0058b461: mov dword ptr [ebp - 0x5ec], 0x6cd654 */ W32((u32)(r_ebp+0xfffffa14u), 0x6cd654u);
    /* 0058b46b: mov dword ptr [ebp - 0x5e8], 0x6cd650 */ W32((u32)(r_ebp+0xfffffa18u), 0x6cd650u);
    /* 0058b475: mov dword ptr [ebp - 0x5e4], 0x6cd64c */ W32((u32)(r_ebp+0xfffffa1cu), 0x6cd64cu);
    /* 0058b47f: mov dword ptr [ebp - 0x5e0], 0x6cd648 */ W32((u32)(r_ebp+0xfffffa20u), 0x6cd648u);
    /* 0058b489: mov dword ptr [ebp - 0x5dc], 0x6cd644 */ W32((u32)(r_ebp+0xfffffa24u), 0x6cd644u);
    /* 0058b493: mov dword ptr [ebp - 0x5d8], 0x6cd648 */ W32((u32)(r_ebp+0xfffffa28u), 0x6cd648u);
    /* 0058b49d: mov dword ptr [ebp - 0x5d4], 0x6cd640 */ W32((u32)(r_ebp+0xfffffa2cu), 0x6cd640u);
    /* 0058b4a7: mov dword ptr [ebp - 0x5d0], 0x6cd63c */ W32((u32)(r_ebp+0xfffffa30u), 0x6cd63cu);
    /* 0058b4b1: mov dword ptr [ebp - 0x5cc], 0x6cd638 */ W32((u32)(r_ebp+0xfffffa34u), 0x6cd638u);
    /* 0058b4bb: mov dword ptr [ebp - 0x5c8], 0x6cd634 */ W32((u32)(r_ebp+0xfffffa38u), 0x6cd634u);
    /* 0058b4c5: mov dword ptr [ebp - 0x5c4], 0x6cd630 */ W32((u32)(r_ebp+0xfffffa3cu), 0x6cd630u);
    /* 0058b4cf: mov dword ptr [ebp - 0x5c0], 0x6cd62c */ W32((u32)(r_ebp+0xfffffa40u), 0x6cd62cu);
    /* 0058b4d9: mov dword ptr [ebp - 0x5bc], 0x6b83fc */ W32((u32)(r_ebp+0xfffffa44u), 0x6b83fcu);
    /* 0058b4e3: mov dword ptr [ebp - 0x5b8], 0x6cd628 */ W32((u32)(r_ebp+0xfffffa48u), 0x6cd628u);
    /* 0058b4ed: mov dword ptr [ebp - 0x5b4], 0x6cd624 */ W32((u32)(r_ebp+0xfffffa4cu), 0x6cd624u);
    /* 0058b4f7: mov dword ptr [ebp - 0x5b0], 0x6cd620 */ W32((u32)(r_ebp+0xfffffa50u), 0x6cd620u);
    /* 0058b501: mov dword ptr [ebp - 0x5ac], 0x6cd640 */ W32((u32)(r_ebp+0xfffffa54u), 0x6cd640u);
    /* 0058b50b: mov dword ptr [ebp - 0x5a8], 0x6cd61c */ W32((u32)(r_ebp+0xfffffa58u), 0x6cd61cu);
    /* 0058b515: mov dword ptr [ebp - 0x5a4], 0x6cd614 */ W32((u32)(r_ebp+0xfffffa5cu), 0x6cd614u);
    /* 0058b51f: mov dword ptr [ebp - 0x5a0], 0x6cd60c */ W32((u32)(r_ebp+0xfffffa60u), 0x6cd60cu);
    /* 0058b529: mov dword ptr [ebp - 0x59c], 0x6cd654 */ W32((u32)(r_ebp+0xfffffa64u), 0x6cd654u);
    /* 0058b533: mov dword ptr [ebp - 0x598], 0x6cd650 */ W32((u32)(r_ebp+0xfffffa68u), 0x6cd650u);
    /* 0058b53d: mov dword ptr [ebp - 0x594], 0x6cd64c */ W32((u32)(r_ebp+0xfffffa6cu), 0x6cd64cu);
    /* 0058b547: mov dword ptr [ebp - 0x590], 0x6cd648 */ W32((u32)(r_ebp+0xfffffa70u), 0x6cd648u);
    /* 0058b551: mov dword ptr [ebp - 0x58c], 0x6b83fc */ W32((u32)(r_ebp+0xfffffa74u), 0x6b83fcu);
    /* 0058b55b: mov dword ptr [ebp - 0x588], 0x6cd628 */ W32((u32)(r_ebp+0xfffffa78u), 0x6cd628u);
    /* 0058b565: mov dword ptr [ebp - 0x584], 0x6cd624 */ W32((u32)(r_ebp+0xfffffa7cu), 0x6cd624u);
    /* 0058b56f: mov dword ptr [ebp - 0x580], 0x6cd620 */ W32((u32)(r_ebp+0xfffffa80u), 0x6cd620u);
    /* 0058b579: mov dword ptr [ebp - 0x57c], 0x6cd604 */ W32((u32)(r_ebp+0xfffffa84u), 0x6cd604u);
    /* 0058b583: mov dword ptr [ebp - 0x578], 0x6cd5fc */ W32((u32)(r_ebp+0xfffffa88u), 0x6cd5fcu);
    /* 0058b58d: mov dword ptr [ebp - 0x574], 0x6cd5f4 */ W32((u32)(r_ebp+0xfffffa8cu), 0x6cd5f4u);
    /* 0058b597: mov dword ptr [ebp - 0x570], 0x6cd5ec */ W32((u32)(r_ebp+0xfffffa90u), 0x6cd5ecu);
    /* 0058b5a1: mov dword ptr [ebp - 0x56c], 0x6cd620 */ W32((u32)(r_ebp+0xfffffa94u), 0x6cd620u);
    /* 0058b5ab: mov dword ptr [ebp - 0x568], 0x6cd5e8 */ W32((u32)(r_ebp+0xfffffa98u), 0x6cd5e8u);
    /* 0058b5b5: mov dword ptr [ebp - 0x564], 0x6cd5e4 */ W32((u32)(r_ebp+0xfffffa9cu), 0x6cd5e4u);
    /* 0058b5bf: mov dword ptr [ebp - 0x560], 0x6cd5e0 */ W32((u32)(r_ebp+0xfffffaa0u), 0x6cd5e0u);
    /* 0058b5c9: mov dword ptr [ebp - 0x55c], 0x6cd5dc */ W32((u32)(r_ebp+0xfffffaa4u), 0x6cd5dcu);
    /* 0058b5d3: mov dword ptr [ebp - 0x558], 0x6cd5d4 */ W32((u32)(r_ebp+0xfffffaa8u), 0x6cd5d4u);
    /* 0058b5dd: mov dword ptr [ebp - 0x554], 0x6cd5cc */ W32((u32)(r_ebp+0xfffffaacu), 0x6cd5ccu);
    /* 0058b5e7: mov dword ptr [ebp - 0x550], 0x6cd5c4 */ W32((u32)(r_ebp+0xfffffab0u), 0x6cd5c4u);
    /* 0058b5f1: mov dword ptr [ebp - 0x54c], 0x6cd5c0 */ W32((u32)(r_ebp+0xfffffab4u), 0x6cd5c0u);
    /* 0058b5fb: mov dword ptr [ebp - 0x548], 0x6cd5bc */ W32((u32)(r_ebp+0xfffffab8u), 0x6cd5bcu);
    /* 0058b605: mov dword ptr [ebp - 0x544], 0x6cd5b8 */ W32((u32)(r_ebp+0xfffffabcu), 0x6cd5b8u);
    /* 0058b60f: mov dword ptr [ebp - 0x540], 0x6cd5b4 */ W32((u32)(r_ebp+0xfffffac0u), 0x6cd5b4u);
    /* 0058b619: mov dword ptr [ebp - 0x53c], 0x6b83fc */ W32((u32)(r_ebp+0xfffffac4u), 0x6b83fcu);
    /* 0058b623: mov dword ptr [ebp - 0x538], 0x6cd628 */ W32((u32)(r_ebp+0xfffffac8u), 0x6cd628u);
    /* 0058b62d: mov dword ptr [ebp - 0x534], 0x6cd624 */ W32((u32)(r_ebp+0xfffffaccu), 0x6cd624u);
    /* 0058b637: mov dword ptr [ebp - 0x530], 0x6cd620 */ W32((u32)(r_ebp+0xfffffad0u), 0x6cd620u);
    /* 0058b641: mov dword ptr [ebp - 0x52c], 0x6cd5ac */ W32((u32)(r_ebp+0xfffffad4u), 0x6cd5acu);
    /* 0058b64b: mov dword ptr [ebp - 0x528], 0x6cd5a4 */ W32((u32)(r_ebp+0xfffffad8u), 0x6cd5a4u);
    /* 0058b655: mov dword ptr [ebp - 0x524], 0x6cd59c */ W32((u32)(r_ebp+0xfffffadcu), 0x6cd59cu);
    /* 0058b65f: mov dword ptr [ebp - 0x520], 0x6cd594 */ W32((u32)(r_ebp+0xfffffae0u), 0x6cd594u);
    /* 0058b669: mov dword ptr [ebp - 0x51c], 0x6cd5e8 */ W32((u32)(r_ebp+0xfffffae4u), 0x6cd5e8u);
    /* 0058b673: mov dword ptr [ebp - 0x518], 0x6cd5e4 */ W32((u32)(r_ebp+0xfffffae8u), 0x6cd5e4u);
    /* 0058b67d: mov dword ptr [ebp - 0x514], 0x6cd590 */ W32((u32)(r_ebp+0xfffffaecu), 0x6cd590u);
    /* 0058b687: mov dword ptr [ebp - 0x510], 0x6cd58c */ W32((u32)(r_ebp+0xfffffaf0u), 0x6cd58cu);
    /* 0058b691: mov dword ptr [ebp - 0x50c], 0x6cd584 */ W32((u32)(r_ebp+0xfffffaf4u), 0x6cd584u);
    /* 0058b69b: mov dword ptr [ebp - 0x508], 0x6cd57c */ W32((u32)(r_ebp+0xfffffaf8u), 0x6cd57cu);
    /* 0058b6a5: mov dword ptr [ebp - 0x504], 0x6cd574 */ W32((u32)(r_ebp+0xfffffafcu), 0x6cd574u);
    /* 0058b6af: mov dword ptr [ebp - 0x500], 0x6cd56c */ W32((u32)(r_ebp+0xfffffb00u), 0x6cd56cu);
    /* 0058b6b9: mov dword ptr [ebp - 0x4fc], 0x6cd568 */ W32((u32)(r_ebp+0xfffffb04u), 0x6cd568u);
    /* 0058b6c3: mov dword ptr [ebp - 0x4f8], 0x6cd564 */ W32((u32)(r_ebp+0xfffffb08u), 0x6cd564u);
    /* 0058b6cd: mov dword ptr [ebp - 0x4f4], 0x6cd560 */ W32((u32)(r_ebp+0xfffffb0cu), 0x6cd560u);
    /* 0058b6d7: mov dword ptr [ebp - 0x4f0], 0x6cd558 */ W32((u32)(r_ebp+0xfffffb10u), 0x6cd558u);
    /* 0058b6e1: mov dword ptr [ebp - 0x4ec], 0x6cd554 */ W32((u32)(r_ebp+0xfffffb14u), 0x6cd554u);
    /* 0058b6eb: mov dword ptr [ebp - 0x4e8], 0x6cd620 */ W32((u32)(r_ebp+0xfffffb18u), 0x6cd620u);
    /* 0058b6f5: mov dword ptr [ebp - 0x4e4], 0x6cd5e8 */ W32((u32)(r_ebp+0xfffffb1cu), 0x6cd5e8u);
    /* 0058b6ff: mov dword ptr [ebp - 0x4e0], 0x6cd5e4 */ W32((u32)(r_ebp+0xfffffb20u), 0x6cd5e4u);
    /* 0058b709: mov dword ptr [ebp - 0x4dc], 0x6b83fc */ W32((u32)(r_ebp+0xfffffb24u), 0x6b83fcu);
    /* 0058b713: mov dword ptr [ebp - 0x4d8], 0x6cd628 */ W32((u32)(r_ebp+0xfffffb28u), 0x6cd628u);
    /* 0058b71d: mov dword ptr [ebp - 0x4d4], 0x6cd624 */ W32((u32)(r_ebp+0xfffffb2cu), 0x6cd624u);
    /* 0058b727: mov dword ptr [ebp - 0x4d0], 0x6cd620 */ W32((u32)(r_ebp+0xfffffb30u), 0x6cd620u);
    /* 0058b731: mov dword ptr [ebp - 0x4cc], 0x6cd54c */ W32((u32)(r_ebp+0xfffffb34u), 0x6cd54cu);
    /* 0058b73b: mov dword ptr [ebp - 0x4c8], 0x6cd544 */ W32((u32)(r_ebp+0xfffffb38u), 0x6cd544u);
    /* 0058b745: mov dword ptr [ebp - 0x4c4], 0x6cd53c */ W32((u32)(r_ebp+0xfffffb3cu), 0x6cd53cu);
    /* 0058b74f: mov dword ptr [ebp - 0x4c0], 0x6cd534 */ W32((u32)(r_ebp+0xfffffb40u), 0x6cd534u);
    /* 0058b759: mov dword ptr [ebp - 0x4bc], 0x6cd630 */ W32((u32)(r_ebp+0xfffffb44u), 0x6cd630u);
    /* 0058b763: mov dword ptr [ebp - 0x4b8], 0x6cd62c */ W32((u32)(r_ebp+0xfffffb48u), 0x6cd62cu);
    /* 0058b76d: mov dword ptr [ebp - 0x4b4], 0x6cd52c */ W32((u32)(r_ebp+0xfffffb4cu), 0x6cd52cu);
    /* 0058b777: mov dword ptr [ebp - 0x4b0], 0x6cd524 */ W32((u32)(r_ebp+0xfffffb50u), 0x6cd524u);
    /* 0058b781: mov dword ptr [ebp - 0x4ac], 0x6cd5e8 */ W32((u32)(r_ebp+0xfffffb54u), 0x6cd5e8u);
    /* 0058b78b: mov dword ptr [ebp - 0x4a8], 0x6cd5e4 */ W32((u32)(r_ebp+0xfffffb58u), 0x6cd5e4u);
    /* 0058b795: mov dword ptr [ebp - 0x4a4], 0x6cd590 */ W32((u32)(r_ebp+0xfffffb5cu), 0x6cd590u);
    /* 0058b79f: mov dword ptr [ebp - 0x4a0], 0x6cd58c */ W32((u32)(r_ebp+0xfffffb60u), 0x6cd58cu);
    /* 0058b7a9: mov dword ptr [ebp - 0x49c], 0x6cd5ac */ W32((u32)(r_ebp+0xfffffb64u), 0x6cd5acu);
    /* 0058b7b3: mov dword ptr [ebp - 0x498], 0x6cd51c */ W32((u32)(r_ebp+0xfffffb68u), 0x6cd51cu);
    /* 0058b7bd: mov dword ptr [ebp - 0x494], 0x6cd594 */ W32((u32)(r_ebp+0xfffffb6cu), 0x6cd594u);
    /* 0058b7c7: mov dword ptr [ebp - 0x490], 0x6cd534 */ W32((u32)(r_ebp+0xfffffb70u), 0x6cd534u);
    /* 0058b7d1: mov dword ptr [ebp - 0x48c], 0x6cd518 */ W32((u32)(r_ebp+0xfffffb74u), 0x6cd518u);
    /* 0058b7db: mov dword ptr [ebp - 0x488], 0x6cd510 */ W32((u32)(r_ebp+0xfffffb78u), 0x6cd510u);
    /* 0058b7e5: mov dword ptr [ebp - 0x484], 0x6cd508 */ W32((u32)(r_ebp+0xfffffb7cu), 0x6cd508u);
    /* 0058b7ef: mov dword ptr [ebp - 0x480], 0x6cd5ac */ W32((u32)(r_ebp+0xfffffb80u), 0x6cd5acu);
    /* 0058b7f9: mov dword ptr [ebp - 0x47c], 0x6cd620 */ W32((u32)(r_ebp+0xfffffb84u), 0x6cd620u);
    /* 0058b803: mov dword ptr [ebp - 0x478], 0x6cd504 */ W32((u32)(r_ebp+0xfffffb88u), 0x6cd504u);
    /* 0058b80d: mov dword ptr [ebp - 0x474], 0x6cd5e0 */ W32((u32)(r_ebp+0xfffffb8cu), 0x6cd5e0u);
    /* 0058b817: mov dword ptr [ebp - 0x470], 0x6cd58c */ W32((u32)(r_ebp+0xfffffb90u), 0x6cd58cu);
    /* 0058b821: mov dword ptr [ebp - 0x46c], 0x6b83f8 */ W32((u32)(r_ebp+0xfffffb94u), 0x6b83f8u);
    /* 0058b82b: mov dword ptr [ebp - 0x468], 0x6cd624 */ W32((u32)(r_ebp+0xfffffb98u), 0x6cd624u);
    /* 0058b835: mov dword ptr [ebp - 0x464], 0x6cd620 */ W32((u32)(r_ebp+0xfffffb9cu), 0x6cd620u);
    /* 0058b83f: mov dword ptr [ebp - 0x460], 0x6cd5e8 */ W32((u32)(r_ebp+0xfffffba0u), 0x6cd5e8u);
    /* 0058b849: mov dword ptr [ebp - 0x45c], 0x6cd54c */ W32((u32)(r_ebp+0xfffffba4u), 0x6cd54cu);
    /* 0058b853: mov dword ptr [ebp - 0x458], 0x6cd534 */ W32((u32)(r_ebp+0xfffffba8u), 0x6cd534u);
    /* 0058b85d: mov dword ptr [ebp - 0x454], 0x6cd534 */ W32((u32)(r_ebp+0xfffffbacu), 0x6cd534u);
    /* 0058b867: mov dword ptr [ebp - 0x450], 0x6cd534 */ W32((u32)(r_ebp+0xfffffbb0u), 0x6cd534u);
    /* 0058b871: mov dword ptr [ebp - 0x44c], 0x6cd584 */ W32((u32)(r_ebp+0xfffffbb4u), 0x6cd584u);
    /* 0058b87b: mov dword ptr [ebp - 0x448], 0x6cd57c */ W32((u32)(r_ebp+0xfffffbb8u), 0x6cd57cu);
    /* 0058b885: mov dword ptr [ebp - 0x444], 0x6cd574 */ W32((u32)(r_ebp+0xfffffbbcu), 0x6cd574u);
    /* 0058b88f: mov dword ptr [ebp - 0x440], 0x6cd56c */ W32((u32)(r_ebp+0xfffffbc0u), 0x6cd56cu);
    /* 0058b899: mov dword ptr [ebp - 0x43c], 0x6cd5b8 */ W32((u32)(r_ebp+0xfffffbc4u), 0x6cd5b8u);
    /* 0058b8a3: mov dword ptr [ebp - 0x438], 0x6cd500 */ W32((u32)(r_ebp+0xfffffbc8u), 0x6cd500u);
    /* 0058b8ad: mov dword ptr [ebp - 0x434], 0x6cd4fc */ W32((u32)(r_ebp+0xfffffbccu), 0x6cd4fcu);
    /* 0058b8b7: mov dword ptr [ebp - 0x430], 0x6cd4f4 */ W32((u32)(r_ebp+0xfffffbd0u), 0x6cd4f4u);
    /* 0058b8c1: mov dword ptr [ebp - 0x42c], 0x6cd5c0 */ W32((u32)(r_ebp+0xfffffbd4u), 0x6cd5c0u);
    /* 0058b8cb: mov dword ptr [ebp - 0x428], 0x6cd5bc */ W32((u32)(r_ebp+0xfffffbd8u), 0x6cd5bcu);
    /* 0058b8d5: mov dword ptr [ebp - 0x424], 0x6cd5b8 */ W32((u32)(r_ebp+0xfffffbdcu), 0x6cd5b8u);
    /* 0058b8df: mov dword ptr [ebp - 0x420], 0x6cd5b4 */ W32((u32)(r_ebp+0xfffffbe0u), 0x6cd5b4u);
    /* 0058b8e9: mov dword ptr [ebp - 0x41c], 0x6cd4ec */ W32((u32)(r_ebp+0xfffffbe4u), 0x6cd4ecu);
    /* 0058b8f3: mov dword ptr [ebp - 0x418], 0x6cd534 */ W32((u32)(r_ebp+0xfffffbe8u), 0x6cd534u);
    /* 0058b8fd: mov dword ptr [ebp - 0x414], 0x6cd534 */ W32((u32)(r_ebp+0xfffffbecu), 0x6cd534u);
    /* 0058b907: mov dword ptr [ebp - 0x410], 0x6cd534 */ W32((u32)(r_ebp+0xfffffbf0u), 0x6cd534u);
    /* 0058b911: mov dword ptr [ebp - 0x40c], 0x6cd5d4 */ W32((u32)(r_ebp+0xfffffbf4u), 0x6cd5d4u);
    /* 0058b91b: mov dword ptr [ebp - 0x408], 0x6cd54c */ W32((u32)(r_ebp+0xfffffbf8u), 0x6cd54cu);
    /* 0058b925: mov dword ptr [ebp - 0x404], 0x6cd544 */ W32((u32)(r_ebp+0xfffffbfcu), 0x6cd544u);
    /* 0058b92f: mov dword ptr [ebp - 0x400], 0x6cd53c */ W32((u32)(r_ebp+0xfffffc00u), 0x6cd53cu);
    /* 0058b939: mov dword ptr [ebp - 0x3fc], 0x6cd4e8 */ W32((u32)(r_ebp+0xfffffc04u), 0x6cd4e8u);
    /* 0058b943: mov dword ptr [ebp - 0x3f8], 0x6cd584 */ W32((u32)(r_ebp+0xfffffc08u), 0x6cd584u);
    /* 0058b94d: mov dword ptr [ebp - 0x3f4], 0x6cd4e0 */ W32((u32)(r_ebp+0xfffffc0cu), 0x6cd4e0u);
    /* 0058b957: mov dword ptr [ebp - 0x3f0], 0x6cd4d8 */ W32((u32)(r_ebp+0xfffffc10u), 0x6cd4d8u);
    /* 0058b961: mov dword ptr [ebp - 0x3ec], 0x6cd4d4 */ W32((u32)(r_ebp+0xfffffc14u), 0x6cd4d4u);
    /* 0058b96b: mov dword ptr [ebp - 0x3e8], 0x6cd4d0 */ W32((u32)(r_ebp+0xfffffc18u), 0x6cd4d0u);
    /* 0058b975: mov dword ptr [ebp - 0x3e4], 0x6cd4cc */ W32((u32)(r_ebp+0xfffffc1cu), 0x6cd4ccu);
    /* 0058b97f: mov dword ptr [ebp - 0x3e0], 0x6cd4c8 */ W32((u32)(r_ebp+0xfffffc20u), 0x6cd4c8u);
    /* 0058b989: mov dword ptr [ebp - 0x3dc], 0x6cd554 */ W32((u32)(r_ebp+0xfffffc24u), 0x6cd554u);
    /* 0058b993: mov dword ptr [ebp - 0x3d8], 0x6cd620 */ W32((u32)(r_ebp+0xfffffc28u), 0x6cd620u);
    /* 0058b99d: mov dword ptr [ebp - 0x3d4], 0x6cd5e8 */ W32((u32)(r_ebp+0xfffffc2cu), 0x6cd5e8u);
    /* 0058b9a7: mov dword ptr [ebp - 0x3d0], 0x6cd5e4 */ W32((u32)(r_ebp+0xfffffc30u), 0x6cd5e4u);
    /* 0058b9b1: mov dword ptr [ebp - 0x3cc], 0x6cd4c0 */ W32((u32)(r_ebp+0xfffffc34u), 0x6cd4c0u);
    /* 0058b9bb: mov dword ptr [ebp - 0x3c8], 0x6cd534 */ W32((u32)(r_ebp+0xfffffc38u), 0x6cd534u);
    /* 0058b9c5: mov dword ptr [ebp - 0x3c4], 0x6cd534 */ W32((u32)(r_ebp+0xfffffc3cu), 0x6cd534u);
    /* 0058b9cf: mov dword ptr [ebp - 0x3c0], 0x6cd534 */ W32((u32)(r_ebp+0xfffffc40u), 0x6cd534u);
    /* 0058b9d9: mov dword ptr [ebp - 0x3bc], 0x6cd5cc */ W32((u32)(r_ebp+0xfffffc44u), 0x6cd5ccu);
    /* 0058b9e3: mov dword ptr [ebp - 0x3b8], 0x6cd54c */ W32((u32)(r_ebp+0xfffffc48u), 0x6cd54cu);
    /* 0058b9ed: mov dword ptr [ebp - 0x3b4], 0x6cd544 */ W32((u32)(r_ebp+0xfffffc4cu), 0x6cd544u);
    /* 0058b9f7: mov dword ptr [ebp - 0x3b0], 0x6cd53c */ W32((u32)(r_ebp+0xfffffc50u), 0x6cd53cu);
    /* 0058ba01: mov dword ptr [ebp - 0x3ac], 0x6cd4b8 */ W32((u32)(r_ebp+0xfffffc54u), 0x6cd4b8u);
    /* 0058ba0b: mov dword ptr [ebp - 0x3a8], 0x6cd4b0 */ W32((u32)(r_ebp+0xfffffc58u), 0x6cd4b0u);
    /* 0058ba15: mov dword ptr [ebp - 0x3a4], 0x6cd4a8 */ W32((u32)(r_ebp+0xfffffc5cu), 0x6cd4a8u);
    /* 0058ba1f: mov dword ptr [ebp - 0x3a0], 0x6cd54c */ W32((u32)(r_ebp+0xfffffc60u), 0x6cd54cu);
    /* 0058ba29: mov dword ptr [ebp - 0x39c], 0x6cd4a4 */ W32((u32)(r_ebp+0xfffffc64u), 0x6cd4a4u);
    /* 0058ba33: mov dword ptr [ebp - 0x398], 0x6cd4a0 */ W32((u32)(r_ebp+0xfffffc68u), 0x6cd4a0u);
    /* 0058ba3d: mov dword ptr [ebp - 0x394], 0x6cd498 */ W32((u32)(r_ebp+0xfffffc6cu), 0x6cd498u);
    /* 0058ba47: mov dword ptr [ebp - 0x390], 0x6cd490 */ W32((u32)(r_ebp+0xfffffc70u), 0x6cd490u);
    /* 0058ba51: mov dword ptr [ebp - 0x38c], 0x6cd5e8 */ W32((u32)(r_ebp+0xfffffc74u), 0x6cd5e8u);
    /* 0058ba5b: mov dword ptr [ebp - 0x388], 0x6cd504 */ W32((u32)(r_ebp+0xfffffc78u), 0x6cd504u);
    /* 0058ba65: mov dword ptr [ebp - 0x384], 0x6cd5e0 */ W32((u32)(r_ebp+0xfffffc7cu), 0x6cd5e0u);
    /* 0058ba6f: mov dword ptr [ebp - 0x380], 0x6cd58c */ W32((u32)(r_ebp+0xfffffc80u), 0x6cd58cu);
    /* 0058ba79: mov dword ptr [ebp - 0x37c], 0x6cd554 */ W32((u32)(r_ebp+0xfffffc84u), 0x6cd554u);
    /* 0058ba83: mov dword ptr [ebp - 0x378], 0x6cd624 */ W32((u32)(r_ebp+0xfffffc88u), 0x6cd624u);
    /* 0058ba8d: mov dword ptr [ebp - 0x374], 0x6cd620 */ W32((u32)(r_ebp+0xfffffc8cu), 0x6cd620u);
    /* 0058ba97: mov dword ptr [ebp - 0x370], 0x6cd5e8 */ W32((u32)(r_ebp+0xfffffc90u), 0x6cd5e8u);
    /* 0058baa1: mov dword ptr [ebp - 0x36c], 0x6cd4c0 */ W32((u32)(r_ebp+0xfffffc94u), 0x6cd4c0u);
    /* 0058baab: mov dword ptr [ebp - 0x368], 0x6cd534 */ W32((u32)(r_ebp+0xfffffc98u), 0x6cd534u);
    /* 0058bab5: mov dword ptr [ebp - 0x364], 0x6cd534 */ W32((u32)(r_ebp+0xfffffc9cu), 0x6cd534u);
    /* 0058babf: mov dword ptr [ebp - 0x360], 0x6cd534 */ W32((u32)(r_ebp+0xfffffca0u), 0x6cd534u);
    /* 0058bac9: mov dword ptr [ebp - 0x35c], 0x6cd4ec */ W32((u32)(r_ebp+0xfffffca4u), 0x6cd4ecu);
    /* 0058bad3: mov dword ptr [ebp - 0x358], 0x6cd488 */ W32((u32)(r_ebp+0xfffffca8u), 0x6cd488u);
    /* 0058badd: mov dword ptr [ebp - 0x354], 0x6cd534 */ W32((u32)(r_ebp+0xfffffcacu), 0x6cd534u);
    /* 0058bae7: mov dword ptr [ebp - 0x350], 0x6cd534 */ W32((u32)(r_ebp+0xfffffcb0u), 0x6cd534u);
    /* 0058baf1: mov dword ptr [ebp - 0x34c], 0x6cd480 */ W32((u32)(r_ebp+0xfffffcb4u), 0x6cd480u);
    /* 0058bafb: mov dword ptr [ebp - 0x348], 0x6cd478 */ W32((u32)(r_ebp+0xfffffcb8u), 0x6cd478u);
    /* 0058bb05: mov dword ptr [ebp - 0x344], 0x6cd470 */ W32((u32)(r_ebp+0xfffffcbcu), 0x6cd470u);
    /* 0058bb0f: mov dword ptr [ebp - 0x340], 0x6cd468 */ W32((u32)(r_ebp+0xfffffcc0u), 0x6cd468u);
    /* 0058bb19: mov dword ptr [ebp - 0x33c], 0x6cd5dc */ W32((u32)(r_ebp+0xfffffcc4u), 0x6cd5dcu);
    /* 0058bb23: mov dword ptr [ebp - 0x338], 0x6cd4b8 */ W32((u32)(r_ebp+0xfffffcc8u), 0x6cd4b8u);
    /* 0058bb2d: mov dword ptr [ebp - 0x334], 0x6cd5d4 */ W32((u32)(r_ebp+0xfffffcccu), 0x6cd5d4u);
    /* 0058bb37: mov dword ptr [ebp - 0x330], 0x6cd5cc */ W32((u32)(r_ebp+0xfffffcd0u), 0x6cd5ccu);
    /* 0058bb41: mov dword ptr [ebp - 0x32c], 0x6cd464 */ W32((u32)(r_ebp+0xfffffcd4u), 0x6cd464u);
    /* 0058bb4b: mov dword ptr [ebp - 0x328], 0x6cd460 */ W32((u32)(r_ebp+0xfffffcd8u), 0x6cd460u);
    /* 0058bb55: mov dword ptr [ebp - 0x324], 0x6cd45c */ W32((u32)(r_ebp+0xfffffcdcu), 0x6cd45cu);
    /* 0058bb5f: mov dword ptr [ebp - 0x320], 0x6cd584 */ W32((u32)(r_ebp+0xfffffce0u), 0x6cd584u);
    /* 0058bb69: mov dword ptr [ebp - 0x31c], 0x6cd458 */ W32((u32)(r_ebp+0xfffffce4u), 0x6cd458u);
    /* 0058bb73: mov dword ptr [ebp - 0x318], 0x6cd5bc */ W32((u32)(r_ebp+0xfffffce8u), 0x6cd5bcu);
    /* 0058bb7d: mov dword ptr [ebp - 0x314], 0x6cd5b8 */ W32((u32)(r_ebp+0xfffffcecu), 0x6cd5b8u);
    /* 0058bb87: mov dword ptr [ebp - 0x310], 0x6cd5b4 */ W32((u32)(r_ebp+0xfffffcf0u), 0x6cd5b4u);
    /* 0058bb91: mov dword ptr [ebp - 0x30c], 0x6cd4c0 */ W32((u32)(r_ebp+0xfffffcf4u), 0x6cd4c0u);
    /* 0058bb9b: mov dword ptr [ebp - 0x308], 0x6cd534 */ W32((u32)(r_ebp+0xfffffcf8u), 0x6cd534u);
    /* 0058bba5: mov dword ptr [ebp - 0x304], 0x6cd534 */ W32((u32)(r_ebp+0xfffffcfcu), 0x6cd534u);
    /* 0058bbaf: mov dword ptr [ebp - 0x300], 0x6cd534 */ W32((u32)(r_ebp+0xfffffd00u), 0x6cd534u);
    /* 0058bbb9: mov dword ptr [ebp - 0x2fc], 0x6cd4ec */ W32((u32)(r_ebp+0xfffffd04u), 0x6cd4ecu);
    /* 0058bbc3: mov dword ptr [ebp - 0x2f8], 0x6cd488 */ W32((u32)(r_ebp+0xfffffd08u), 0x6cd488u);
    /* 0058bbcd: mov dword ptr [ebp - 0x2f4], 0x6cd534 */ W32((u32)(r_ebp+0xfffffd0cu), 0x6cd534u);
    /* 0058bbd7: mov dword ptr [ebp - 0x2f0], 0x6cd534 */ W32((u32)(r_ebp+0xfffffd10u), 0x6cd534u);
    /* 0058bbe1: mov dword ptr [ebp - 0x2ec], 0x6cd4b0 */ W32((u32)(r_ebp+0xfffffd14u), 0x6cd4b0u);
    /* 0058bbeb: mov dword ptr [ebp - 0x2e8], 0x6cd450 */ W32((u32)(r_ebp+0xfffffd18u), 0x6cd450u);
    /* 0058bbf5: mov dword ptr [ebp - 0x2e4], 0x6cd4ec */ W32((u32)(r_ebp+0xfffffd1cu), 0x6cd4ecu);
    /* 0058bbff: mov dword ptr [ebp - 0x2e0], 0x6cd4c0 */ W32((u32)(r_ebp+0xfffffd20u), 0x6cd4c0u);
    /* 0058bc09: mov dword ptr [ebp - 0x2dc], 0x6cd614 */ W32((u32)(r_ebp+0xfffffd24u), 0x6cd614u);
    /* 0058bc13: mov dword ptr [ebp - 0x2d8], 0x6cd4e0 */ W32((u32)(r_ebp+0xfffffd28u), 0x6cd4e0u);
    /* 0058bc1d: mov dword ptr [ebp - 0x2d4], 0x6cd4d8 */ W32((u32)(r_ebp+0xfffffd2cu), 0x6cd4d8u);
    /* 0058bc27: mov dword ptr [ebp - 0x2d0], 0x6cd448 */ W32((u32)(r_ebp+0xfffffd30u), 0x6cd448u);
    /* 0058bc31: mov dword ptr [ebp - 0x2cc], 0x6cd444 */ W32((u32)(r_ebp+0xfffffd34u), 0x6cd444u);
    /* 0058bc3b: mov dword ptr [ebp - 0x2c8], 0x6cd43c */ W32((u32)(r_ebp+0xfffffd38u), 0x6cd43cu);
    /* 0058bc45: mov dword ptr [ebp - 0x2c4], 0x6cd434 */ W32((u32)(r_ebp+0xfffffd3cu), 0x6cd434u);
    /* 0058bc4f: mov dword ptr [ebp - 0x2c0], 0x6cd4b0 */ W32((u32)(r_ebp+0xfffffd40u), 0x6cd4b0u);
    /* 0058bc59: mov dword ptr [ebp - 0x2bc], 0x6cd648 */ W32((u32)(r_ebp+0xfffffd44u), 0x6cd648u);
    /* 0058bc63: mov dword ptr [ebp - 0x2b8], 0x6cd464 */ W32((u32)(r_ebp+0xfffffd48u), 0x6cd464u);
    /* 0058bc6d: mov dword ptr [ebp - 0x2b4], 0x6cd4e8 */ W32((u32)(r_ebp+0xfffffd4cu), 0x6cd4e8u);
    /* 0058bc77: mov dword ptr [ebp - 0x2b0], 0x6cd61c */ W32((u32)(r_ebp+0xfffffd50u), 0x6cd61cu);
    /* 0058bc81: mov dword ptr [ebp - 0x2ac], 0x6cd624 */ W32((u32)(r_ebp+0xfffffd54u), 0x6cd624u);
    /* 0058bc8b: mov dword ptr [ebp - 0x2a8], 0x6cd430 */ W32((u32)(r_ebp+0xfffffd58u), 0x6cd430u);
    /* 0058bc95: mov dword ptr [ebp - 0x2a4], 0x6cd42c */ W32((u32)(r_ebp+0xfffffd5cu), 0x6cd42cu);
    /* 0058bc9f: mov dword ptr [ebp - 0x2a0], 0x6cd504 */ W32((u32)(r_ebp+0xfffffd60u), 0x6cd504u);
    /* 0058bca9: mov dword ptr [ebp - 0x29c], 0x6cd534 */ W32((u32)(r_ebp+0xfffffd64u), 0x6cd534u);
    /* 0058bcb3: mov dword ptr [ebp - 0x298], 0x6cd534 */ W32((u32)(r_ebp+0xfffffd68u), 0x6cd534u);
    /* 0058bcbd: mov dword ptr [ebp - 0x294], 0x6cd534 */ W32((u32)(r_ebp+0xfffffd6cu), 0x6cd534u);
    /* 0058bcc7: mov dword ptr [ebp - 0x290], 0x6cd534 */ W32((u32)(r_ebp+0xfffffd70u), 0x6cd534u);
    /* 0058bcd1: mov dword ptr [ebp - 0x28c], 0x6cd4c0 */ W32((u32)(r_ebp+0xfffffd74u), 0x6cd4c0u);
    /* 0058bcdb: mov dword ptr [ebp - 0x288], 0x6cd534 */ W32((u32)(r_ebp+0xfffffd78u), 0x6cd534u);
    /* 0058bce5: mov dword ptr [ebp - 0x284], 0x6cd534 */ W32((u32)(r_ebp+0xfffffd7cu), 0x6cd534u);
    /* 0058bcef: mov dword ptr [ebp - 0x280], 0x6cd534 */ W32((u32)(r_ebp+0xfffffd80u), 0x6cd534u);
    /* 0058bcf9: mov dword ptr [ebp - 0x27c], 0x6cd424 */ W32((u32)(r_ebp+0xfffffd84u), 0x6cd424u);
    /* 0058bd03: mov dword ptr [ebp - 0x278], 0x6cd468 */ W32((u32)(r_ebp+0xfffffd88u), 0x6cd468u);
    /* 0058bd0d: mov dword ptr [ebp - 0x274], 0x6cd41c */ W32((u32)(r_ebp+0xfffffd8cu), 0x6cd41cu);
    /* 0058bd17: mov dword ptr [ebp - 0x270], 0x6cd534 */ W32((u32)(r_ebp+0xfffffd90u), 0x6cd534u);
    /* 0058bd21: mov dword ptr [ebp - 0x26c], 0x6cd5cc */ W32((u32)(r_ebp+0xfffffd94u), 0x6cd5ccu);
    /* 0058bd2b: mov dword ptr [ebp - 0x268], 0x6cd54c */ W32((u32)(r_ebp+0xfffffd98u), 0x6cd54cu);
    /* 0058bd35: mov dword ptr [ebp - 0x264], 0x6cd544 */ W32((u32)(r_ebp+0xfffffd9cu), 0x6cd544u);
    /* 0058bd3f: mov dword ptr [ebp - 0x260], 0x6cd53c */ W32((u32)(r_ebp+0xfffffda0u), 0x6cd53cu);
    /* 0058bd49: mov dword ptr [ebp - 0x25c], 0x6cd584 */ W32((u32)(r_ebp+0xfffffda4u), 0x6cd584u);
    /* 0058bd53: mov dword ptr [ebp - 0x258], 0x6cd414 */ W32((u32)(r_ebp+0xfffffda8u), 0x6cd414u);
    /* 0058bd5d: mov dword ptr [ebp - 0x254], 0x6cd57c */ W32((u32)(r_ebp+0xfffffdacu), 0x6cd57cu);
    /* 0058bd67: mov dword ptr [ebp - 0x250], 0x6cd574 */ W32((u32)(r_ebp+0xfffffdb0u), 0x6cd574u);
    /* 0058bd71: mov dword ptr [ebp - 0x24c], 0x6cd590 */ W32((u32)(r_ebp+0xfffffdb4u), 0x6cd590u);
    /* 0058bd7b: mov dword ptr [ebp - 0x248], 0x6cd58c */ W32((u32)(r_ebp+0xfffffdb8u), 0x6cd58cu);
    /* 0058bd85: mov dword ptr [ebp - 0x244], 0x6cd5dc */ W32((u32)(r_ebp+0xfffffdbcu), 0x6cd5dcu);
    /* 0058bd8f: mov dword ptr [ebp - 0x240], 0x6cd40c */ W32((u32)(r_ebp+0xfffffdc0u), 0x6cd40cu);
    /* 0058bd99: mov dword ptr [ebp - 0x23c], 0x6cd64c */ W32((u32)(r_ebp+0xfffffdc4u), 0x6cd64cu);
    /* 0058bda3: mov dword ptr [ebp - 0x238], 0x6cd408 */ W32((u32)(r_ebp+0xfffffdc8u), 0x6cd408u);
    /* 0058bdad: mov dword ptr [ebp - 0x234], 0x6cd464 */ W32((u32)(r_ebp+0xfffffdccu), 0x6cd464u);
    /* 0058bdb7: mov dword ptr [ebp - 0x230], 0x6cd4e8 */ W32((u32)(r_ebp+0xfffffdd0u), 0x6cd4e8u);
    /* 0058bdc1: mov dword ptr [ebp - 0x22c], 0x6b83f8 */ W32((u32)(r_ebp+0xfffffdd4u), 0x6b83f8u);
    /* 0058bdcb: mov dword ptr [ebp - 0x228], 0x6cd628 */ W32((u32)(r_ebp+0xfffffdd8u), 0x6cd628u);
    /* 0058bdd5: mov dword ptr [ebp - 0x224], 0x6cd624 */ W32((u32)(r_ebp+0xfffffddcu), 0x6cd624u);
    /* 0058bddf: mov dword ptr [ebp - 0x220], 0x6cd620 */ W32((u32)(r_ebp+0xfffffde0u), 0x6cd620u);
    /* 0058bde9: mov dword ptr [ebp - 0x21c], 0x6cd534 */ W32((u32)(r_ebp+0xfffffde4u), 0x6cd534u);
    /* 0058bdf3: mov dword ptr [ebp - 0x218], 0x6cd534 */ W32((u32)(r_ebp+0xfffffde8u), 0x6cd534u);
    /* 0058bdfd: mov dword ptr [ebp - 0x214], 0x6cd534 */ W32((u32)(r_ebp+0xfffffdecu), 0x6cd534u);
    /* 0058be07: mov dword ptr [ebp - 0x210], 0x6cd534 */ W32((u32)(r_ebp+0xfffffdf0u), 0x6cd534u);
    /* 0058be11: mov dword ptr [ebp - 0x20c], 0x6cd594 */ W32((u32)(r_ebp+0xfffffdf4u), 0x6cd594u);
    /* 0058be1b: mov dword ptr [ebp - 0x208], 0x6cd534 */ W32((u32)(r_ebp+0xfffffdf8u), 0x6cd534u);
    /* 0058be25: mov dword ptr [ebp - 0x204], 0x6cd534 */ W32((u32)(r_ebp+0xfffffdfcu), 0x6cd534u);
    /* 0058be2f: mov dword ptr [ebp - 0x200], 0x6cd534 */ W32((u32)(r_ebp+0xfffffe00u), 0x6cd534u);
    /* 0058be39: mov dword ptr [ebp - 0x1fc], 0x6cd4ec */ W32((u32)(r_ebp+0xfffffe04u), 0x6cd4ecu);
    /* 0058be43: mov dword ptr [ebp - 0x1f8], 0x6cd488 */ W32((u32)(r_ebp+0xfffffe08u), 0x6cd488u);
    /* 0058be4d: mov dword ptr [ebp - 0x1f4], 0x6cd534 */ W32((u32)(r_ebp+0xfffffe0cu), 0x6cd534u);
    /* 0058be57: mov dword ptr [ebp - 0x1f0], 0x6cd534 */ W32((u32)(r_ebp+0xfffffe10u), 0x6cd534u);
    /* 0058be61: mov dword ptr [ebp - 0x1ec], 0x6cd574 */ W32((u32)(r_ebp+0xfffffe14u), 0x6cd574u);
    /* 0058be6b: mov dword ptr [ebp - 0x1e8], 0x6cd400 */ W32((u32)(r_ebp+0xfffffe18u), 0x6cd400u);
    /* 0058be75: mov dword ptr [ebp - 0x1e4], 0x6cd3f8 */ W32((u32)(r_ebp+0xfffffe1cu), 0x6cd3f8u);
    /* 0058be7f: mov dword ptr [ebp - 0x1e0], 0x6cd534 */ W32((u32)(r_ebp+0xfffffe20u), 0x6cd534u);
    /* 0058be89: mov dword ptr [ebp - 0x1dc], 0x6cd584 */ W32((u32)(r_ebp+0xfffffe24u), 0x6cd584u);
    /* 0058be93: mov dword ptr [ebp - 0x1d8], 0x6cd414 */ W32((u32)(r_ebp+0xfffffe28u), 0x6cd414u);
    /* 0058be9d: mov dword ptr [ebp - 0x1d4], 0x6cd57c */ W32((u32)(r_ebp+0xfffffe2cu), 0x6cd57cu);
    /* 0058bea7: mov dword ptr [ebp - 0x1d0], 0x6cd574 */ W32((u32)(r_ebp+0xfffffe30u), 0x6cd574u);
    /* 0058beb1: mov dword ptr [ebp - 0x1cc], 0x6cd61c */ W32((u32)(r_ebp+0xfffffe34u), 0x6cd61cu);
    /* 0058bebb: mov dword ptr [ebp - 0x1c8], 0x6cd584 */ W32((u32)(r_ebp+0xfffffe38u), 0x6cd584u);
    /* 0058bec5: mov dword ptr [ebp - 0x1c4], 0x6cd4e0 */ W32((u32)(r_ebp+0xfffffe3cu), 0x6cd4e0u);
    /* 0058becf: mov dword ptr [ebp - 0x1c0], 0x6cd4d8 */ W32((u32)(r_ebp+0xfffffe40u), 0x6cd4d8u);
    /* 0058bed9: mov dword ptr [ebp - 0x1bc], 0x6cd3f4 */ W32((u32)(r_ebp+0xfffffe44u), 0x6cd3f4u);
    /* 0058bee3: mov dword ptr [ebp - 0x1b8], 0x6cd3f0 */ W32((u32)(r_ebp+0xfffffe48u), 0x6cd3f0u);
    /* 0058beed: mov dword ptr [ebp - 0x1b4], 0x6cd3ec */ W32((u32)(r_ebp+0xfffffe4cu), 0x6cd3ecu);
    /* 0058bef7: mov dword ptr [ebp - 0x1b0], 0x6cd3e8 */ W32((u32)(r_ebp+0xfffffe50u), 0x6cd3e8u);
    /* 0058bf01: mov dword ptr [ebp - 0x1ac], 0x6cd620 */ W32((u32)(r_ebp+0xfffffe54u), 0x6cd620u);
    /* 0058bf0b: mov dword ptr [ebp - 0x1a8], 0x6cd42c */ W32((u32)(r_ebp+0xfffffe58u), 0x6cd42cu);
    /* 0058bf15: mov dword ptr [ebp - 0x1a4], 0x6cd504 */ W32((u32)(r_ebp+0xfffffe5cu), 0x6cd504u);
    /* 0058bf1f: mov dword ptr [ebp - 0x1a0], 0x6cd5e0 */ W32((u32)(r_ebp+0xfffffe60u), 0x6cd5e0u);
    /* 0058bf29: mov dword ptr [ebp - 0x19c], 0x6b83f8 */ W32((u32)(r_ebp+0xfffffe64u), 0x6b83f8u);
    /* 0058bf33: mov dword ptr [ebp - 0x198], 0x6cd628 */ W32((u32)(r_ebp+0xfffffe68u), 0x6cd628u);
    /* 0058bf3d: mov dword ptr [ebp - 0x194], 0x6cd624 */ W32((u32)(r_ebp+0xfffffe6cu), 0x6cd624u);
    /* 0058bf47: mov dword ptr [ebp - 0x190], 0x6cd620 */ W32((u32)(r_ebp+0xfffffe70u), 0x6cd620u);
    /* 0058bf51: mov dword ptr [ebp - 0x18c], 0x6cd534 */ W32((u32)(r_ebp+0xfffffe74u), 0x6cd534u);
    /* 0058bf5b: mov dword ptr [ebp - 0x188], 0x6cd534 */ W32((u32)(r_ebp+0xfffffe78u), 0x6cd534u);
    /* 0058bf65: mov dword ptr [ebp - 0x184], 0x6cd534 */ W32((u32)(r_ebp+0xfffffe7cu), 0x6cd534u);
    /* 0058bf6f: mov dword ptr [ebp - 0x180], 0x6cd534 */ W32((u32)(r_ebp+0xfffffe80u), 0x6cd534u);
    /* 0058bf79: mov dword ptr [ebp - 0x17c], 0x6cd534 */ W32((u32)(r_ebp+0xfffffe84u), 0x6cd534u);
    /* 0058bf83: mov dword ptr [ebp - 0x178], 0x6cd534 */ W32((u32)(r_ebp+0xfffffe88u), 0x6cd534u);
    /* 0058bf8d: mov dword ptr [ebp - 0x174], 0x6cd534 */ W32((u32)(r_ebp+0xfffffe8cu), 0x6cd534u);
    /* 0058bf97: mov dword ptr [ebp - 0x170], 0x6cd534 */ W32((u32)(r_ebp+0xfffffe90u), 0x6cd534u);
    /* 0058bfa1: mov dword ptr [ebp - 0x16c], 0x6cd594 */ W32((u32)(r_ebp+0xfffffe94u), 0x6cd594u);
    /* 0058bfab: mov dword ptr [ebp - 0x168], 0x6cd534 */ W32((u32)(r_ebp+0xfffffe98u), 0x6cd534u);
    /* 0058bfb5: mov dword ptr [ebp - 0x164], 0x6cd534 */ W32((u32)(r_ebp+0xfffffe9cu), 0x6cd534u);
    /* 0058bfbf: mov dword ptr [ebp - 0x160], 0x6cd534 */ W32((u32)(r_ebp+0xfffffea0u), 0x6cd534u);
    /* 0058bfc9: mov dword ptr [ebp - 0x15c], 0x6cd4ec */ W32((u32)(r_ebp+0xfffffea4u), 0x6cd4ecu);
    /* 0058bfd3: mov dword ptr [ebp - 0x158], 0x6cd488 */ W32((u32)(r_ebp+0xfffffea8u), 0x6cd488u);
    /* 0058bfdd: mov dword ptr [ebp - 0x154], 0x6cd534 */ W32((u32)(r_ebp+0xfffffeacu), 0x6cd534u);
    /* 0058bfe7: mov dword ptr [ebp - 0x150], 0x6cd534 */ W32((u32)(r_ebp+0xfffffeb0u), 0x6cd534u);
    /* 0058bff1: mov dword ptr [ebp - 0x14c], 0x6cd3e0 */ W32((u32)(r_ebp+0xfffffeb4u), 0x6cd3e0u);
    /* 0058bffb: mov dword ptr [ebp - 0x148], 0x6cd5a4 */ W32((u32)(r_ebp+0xfffffeb8u), 0x6cd5a4u);
    /* 0058c005: mov dword ptr [ebp - 0x144], 0x6cd59c */ W32((u32)(r_ebp+0xfffffebcu), 0x6cd59cu);
    /* 0058c00f: mov dword ptr [ebp - 0x140], 0x6cd3d8 */ W32((u32)(r_ebp+0xfffffec0u), 0x6cd3d8u);
    /* 0058c019: mov dword ptr [ebp - 0x13c], 0x6cd61c */ W32((u32)(r_ebp+0xfffffec4u), 0x6cd61cu);
    /* 0058c023: mov dword ptr [ebp - 0x138], 0x6cd584 */ W32((u32)(r_ebp+0xfffffec8u), 0x6cd584u);
    /* 0058c02d: mov dword ptr [ebp - 0x134], 0x6cd4e0 */ W32((u32)(r_ebp+0xfffffeccu), 0x6cd4e0u);
    /* 0058c037: mov dword ptr [ebp - 0x130], 0x6cd4d8 */ W32((u32)(r_ebp+0xfffffed0u), 0x6cd4d8u);
    /* 0058c041: mov dword ptr [ebp - 0x12c], 0x6cd5e0 */ W32((u32)(r_ebp+0xfffffed4u), 0x6cd5e0u);
    /* 0058c04b: mov dword ptr [ebp - 0x128], 0x6cd444 */ W32((u32)(r_ebp+0xfffffed8u), 0x6cd444u);
    /* 0058c055: mov dword ptr [ebp - 0x124], 0x6cd3d0 */ W32((u32)(r_ebp+0xfffffedcu), 0x6cd3d0u);
    /* 0058c05f: mov dword ptr [ebp - 0x120], 0x6cd4b8 */ W32((u32)(r_ebp+0xfffffee0u), 0x6cd4b8u);
    /* 0058c069: mov dword ptr [ebp - 0x11c], 0x6cd42c */ W32((u32)(r_ebp+0xfffffee4u), 0x6cd42cu);
    /* 0058c073: mov dword ptr [ebp - 0x118], 0x6cd3cc */ W32((u32)(r_ebp+0xfffffee8u), 0x6cd3ccu);
    /* 0058c07d: mov dword ptr [ebp - 0x114], 0x6cd3c8 */ W32((u32)(r_ebp+0xfffffeecu), 0x6cd3c8u);
    /* 0058c087: mov dword ptr [ebp - 0x110], 0x6cd444 */ W32((u32)(r_ebp+0xfffffef0u), 0x6cd444u);
    /* 0058c091: mov dword ptr [ebp - 0x10c], 0x6cd620 */ W32((u32)(r_ebp+0xfffffef4u), 0x6cd620u);
    /* 0058c09b: mov dword ptr [ebp - 0x108], 0x6cd42c */ W32((u32)(r_ebp+0xfffffef8u), 0x6cd42cu);
    /* 0058c0a5: mov dword ptr [ebp - 0x104], 0x6cd504 */ W32((u32)(r_ebp+0xfffffefcu), 0x6cd504u);
    /* 0058c0af: mov dword ptr [ebp - 0x100], 0x6cd5e0 */ W32((u32)(r_ebp+0xffffff00u), 0x6cd5e0u);
    /* 0058c0b9: mov dword ptr [ebp - 0xbc], 0x6cd534 */ W32((u32)(r_ebp+0xffffff44u), 0x6cd534u);
    /* 0058c0c3: mov dword ptr [ebp - 0xb8], 0x6cd534 */ W32((u32)(r_ebp+0xffffff48u), 0x6cd534u);
    /* 0058c0cd: mov dword ptr [ebp - 0xb4], 0x6cd534 */ W32((u32)(r_ebp+0xffffff4cu), 0x6cd534u);
    /* 0058c0d7: mov dword ptr [ebp - 0xb0], 0x6cd534 */ W32((u32)(r_ebp+0xffffff50u), 0x6cd534u);
    /* 0058c0e1: mov dword ptr [ebp - 0xac], 0x6cd534 */ W32((u32)(r_ebp+0xffffff54u), 0x6cd534u);
    /* 0058c0eb: mov dword ptr [ebp - 0xa8], 0x6cd534 */ W32((u32)(r_ebp+0xffffff58u), 0x6cd534u);
    /* 0058c0f5: mov dword ptr [ebp - 0xa4], 0x6cd534 */ W32((u32)(r_ebp+0xffffff5cu), 0x6cd534u);
    /* 0058c0ff: mov dword ptr [ebp - 0xa0], 0x6cd534 */ W32((u32)(r_ebp+0xffffff60u), 0x6cd534u);
    /* 0058c109: mov dword ptr [ebp - 0x9c], 0x6cd4c0 */ W32((u32)(r_ebp+0xffffff64u), 0x6cd4c0u);
    /* 0058c113: mov dword ptr [ebp - 0x98], 0x6cd534 */ W32((u32)(r_ebp+0xffffff68u), 0x6cd534u);
    /* 0058c11d: mov dword ptr [ebp - 0x94], 0x6cd4ec */ W32((u32)(r_ebp+0xffffff6cu), 0x6cd4ecu);
    /* 0058c127: mov dword ptr [ebp - 0x90], 0x6cd4c0 */ W32((u32)(r_ebp+0xffffff70u), 0x6cd4c0u);
    /* 0058c131: mov dword ptr [ebp - 0x8c], 0x6cd450 */ W32((u32)(r_ebp+0xffffff74u), 0x6cd450u);
    /* 0058c13b: mov dword ptr [ebp - 0x88], 0x6cd4ec */ W32((u32)(r_ebp+0xffffff78u), 0x6cd4ecu);
    /* 0058c145: mov dword ptr [ebp - 0x84], 0x6cd4b0 */ W32((u32)(r_ebp+0xffffff7cu), 0x6cd4b0u);
    /* 0058c14f: mov dword ptr [ebp - 0x80], 0x6cd4a8 */ W32((u32)(r_ebp+0xffffff80u), 0x6cd4a8u);
    /* 0058c156: mov dword ptr [ebp - 0x7c], 0x6cd3d0 */ W32((u32)(r_ebp+0xffffff84u), 0x6cd3d0u);
    /* 0058c15d: mov dword ptr [ebp - 0x78], 0x6cd4b8 */ W32((u32)(r_ebp+0xffffff88u), 0x6cd4b8u);
    /* 0058c164: mov dword ptr [ebp - 0x74], 0x6cd5e0 */ W32((u32)(r_ebp+0xffffff8cu), 0x6cd5e0u);
    /* 0058c16b: mov dword ptr [ebp - 0x70], 0x6cd58c */ W32((u32)(r_ebp+0xffffff90u), 0x6cd58cu);
    /* 0058c172: mov dword ptr [ebp - 0x6c], 0x6cd42c */ W32((u32)(r_ebp+0xffffff94u), 0x6cd42cu);
    /* 0058c179: mov dword ptr [ebp - 0x68], 0x6cd504 */ W32((u32)(r_ebp+0xffffff98u), 0x6cd504u);
    /* 0058c180: mov dword ptr [ebp - 0x64], 0x6cd430 */ W32((u32)(r_ebp+0xffffff9cu), 0x6cd430u);
    /* 0058c187: mov dword ptr [ebp - 0x60], 0x6cd42c */ W32((u32)(r_ebp+0xffffffa0u), 0x6cd42cu);
    /* 0058c18e: mov dword ptr [ebp - 0x5c], 0x6cd624 */ W32((u32)(r_ebp+0xffffffa4u), 0x6cd624u);
    /* 0058c195: mov dword ptr [ebp - 0x58], 0x6cd620 */ W32((u32)(r_ebp+0xffffffa8u), 0x6cd620u);
    /* 0058c19c: mov dword ptr [ebp - 0x54], 0x6cd628 */ W32((u32)(r_ebp+0xffffffacu), 0x6cd628u);
    /* 0058c1a3: mov dword ptr [ebp - 0x50], 0x6cd624 */ W32((u32)(r_ebp+0xffffffb0u), 0x6cd624u);
    /* 0058c1aa: mov dword ptr [ebp - 0x4c], 0x6b2b64 */ W32((u32)(r_ebp+0xffffffb4u), 0x6b2b64u);
    /* 0058c1b1: mov dword ptr [ebp - 0x48], 0x6b2b64 */ W32((u32)(r_ebp+0xffffffb8u), 0x6b2b64u);
    /* 0058c1b8: mov dword ptr [ebp - 0x44], 0x6b2b64 */ W32((u32)(r_ebp+0xffffffbcu), 0x6b2b64u);
    /* 0058c1bf: mov dword ptr [ebp - 0x40], 0x6b2b64 */ W32((u32)(r_ebp+0xffffffc0u), 0x6b2b64u);
    /* 0058c1c6: mov dword ptr [ebp - 0x3c], 0x6b2b64 */ W32((u32)(r_ebp+0xffffffc4u), 0x6b2b64u);
    /* 0058c1cd: mov dword ptr [ebp - 0x38], 0x6b2b64 */ W32((u32)(r_ebp+0xffffffc8u), 0x6b2b64u);
    /* 0058c1d4: mov dword ptr [ebp - 0x34], 0x6cd628 */ W32((u32)(r_ebp+0xffffffccu), 0x6cd628u);
    /* 0058c1db: mov dword ptr [ebp - 0x30], 0x6cd624 */ W32((u32)(r_ebp+0xffffffd0u), 0x6cd624u);
    /* 0058c1e2: mov dword ptr [ebp - 0x2c], 0x6cd628 */ W32((u32)(r_ebp+0xffffffd4u), 0x6cd628u);
    /* 0058c1e9: mov dword ptr [ebp - 0x28], 0x6cd624 */ W32((u32)(r_ebp+0xffffffd8u), 0x6cd624u);
    /* 0058c1f0: mov dword ptr [ebp - 0x24], 0x6cd624 */ W32((u32)(r_ebp+0xffffffdcu), 0x6cd624u);
    /* 0058c1f7: mov dword ptr [ebp - 0x20], 0x6cd620 */ W32((u32)(r_ebp+0xffffffe0u), 0x6cd620u);
    /* 0058c1fe: mov dword ptr [ebp - 0x1c], 0x6cd444 */ W32((u32)(r_ebp+0xffffffe4u), 0x6cd444u);
    /* 0058c205: mov dword ptr [ebp - 0x18], 0x6cd3d0 */ W32((u32)(r_ebp+0xffffffe8u), 0x6cd3d0u);
    /* 0058c20c: mov dword ptr [ebp - 0x734], 0x6cd3c0 */ W32((u32)(r_ebp+0xfffff8ccu), 0x6cd3c0u);
    /* 0058c216: mov dword ptr [ebp - 0x730], 0x6cd4c0 */ W32((u32)(r_ebp+0xfffff8d0u), 0x6cd4c0u);
    /* 0058c220: mov dword ptr [ebp - 0x72c], 0x6cd4e0 */ W32((u32)(r_ebp+0xfffff8d4u), 0x6cd4e0u);
    /* 0058c22a: mov dword ptr [ebp - 0x728], 0x6cd3d0 */ W32((u32)(r_ebp+0xfffff8d8u), 0x6cd3d0u);
    /* 0058c234: mov dword ptr [ebp - 0x724], 0x6cd5e0 */ W32((u32)(r_ebp+0xfffff8dcu), 0x6cd5e0u);
    /* 0058c23e: mov dword ptr [ebp - 0x720], 0x6cd5e8 */ W32((u32)(r_ebp+0xfffff8e0u), 0x6cd5e8u);
    /* 0058c248: mov dword ptr [ebp - 0x71c], 0x6cd624 */ W32((u32)(r_ebp+0xfffff8e4u), 0x6cd624u);
    /* 0058c252: mov dword ptr [ebp - 0x718], 0x6cd654 */ W32((u32)(r_ebp+0xfffff8e8u), 0x6cd654u);
    /* 0058c25c: mov dword ptr [ebp - 0x714], 0x6b83fc */ W32((u32)(r_ebp+0xfffff8ecu), 0x6b83fcu);
    /* 0058c266: mov dword ptr [ebp - 0x710], 0x6b83fc */ W32((u32)(r_ebp+0xfffff8f0u), 0x6b83fcu);
    /* 0058c270: mov dword ptr [ebp - 0x70c], 0x6b83fc */ W32((u32)(r_ebp+0xfffff8f4u), 0x6b83fcu);
    /* 0058c27a: mov dword ptr [ebp - 0x708], 0x6b83fc */ W32((u32)(r_ebp+0xfffff8f8u), 0x6b83fcu);
    /* 0058c284: mov dword ptr [ebp - 0x704], 0x6b83fc */ W32((u32)(r_ebp+0xfffff8fcu), 0x6b83fcu);
    /* 0058c28e: mov dword ptr [ebp - 0x700], 0x6cd654 */ W32((u32)(r_ebp+0xfffff900u), 0x6cd654u);
    /* 0058c298: mov dword ptr [ebp - 0x6fc], 0x6cd624 */ W32((u32)(r_ebp+0xfffff904u), 0x6cd624u);
    /* 0058c2a2: mov dword ptr [ebp - 0x6f8], 0x6cd5e8 */ W32((u32)(r_ebp+0xfffff908u), 0x6cd5e8u);
    /* 0058c2ac: mov dword ptr [ebp - 0x6f4], 0x6cd5e0 */ W32((u32)(r_ebp+0xfffff90cu), 0x6cd5e0u);
    /* 0058c2b6: mov dword ptr [ebp - 0x6f0], 0x6cd3d0 */ W32((u32)(r_ebp+0xfffff910u), 0x6cd3d0u);
    /* 0058c2c0: mov dword ptr [ebp - 0x6ec], 0x6cd4e0 */ W32((u32)(r_ebp+0xfffff914u), 0x6cd4e0u);
    /* 0058c2ca: mov dword ptr [ebp - 0x6e8], 0x6cd4c0 */ W32((u32)(r_ebp+0xfffff918u), 0x6cd4c0u);
    /* 0058c2d4: mov dword ptr [ebp - 0x6e4], 0x6cd3c0 */ W32((u32)(r_ebp+0xfffff91cu), 0x6cd3c0u);
    /* 0058c2de: mov dword ptr [ebp - 0x664], 0x6cd3c0 */ W32((u32)(r_ebp+0xfffff99cu), 0x6cd3c0u);
    /* 0058c2e8: mov dword ptr [ebp - 0x660], 0x6cd534 */ W32((u32)(r_ebp+0xfffff9a0u), 0x6cd534u);
    /* 0058c2f2: mov dword ptr [ebp - 0x65c], 0x6cd3b8 */ W32((u32)(r_ebp+0xfffff9a4u), 0x6cd3b8u);
    /* 0058c2fc: mov dword ptr [ebp - 0x658], 0x6cd4ec */ W32((u32)(r_ebp+0xfffff9a8u), 0x6cd4ecu);
    /* 0058c306: mov dword ptr [ebp - 0x654], 0x6cd4b0 */ W32((u32)(r_ebp+0xfffff9acu), 0x6cd4b0u);
    /* 0058c310: mov dword ptr [ebp - 0x650], 0x6cd3d0 */ W32((u32)(r_ebp+0xfffff9b0u), 0x6cd3d0u);
    /* 0058c31a: mov dword ptr [ebp - 0x64c], 0x6cd5e0 */ W32((u32)(r_ebp+0xfffff9b4u), 0x6cd5e0u);
    /* 0058c324: mov dword ptr [ebp - 0x648], 0x6cd42c */ W32((u32)(r_ebp+0xfffff9b8u), 0x6cd42cu);
    /* 0058c32e: mov dword ptr [ebp - 0x644], 0x6cd624 */ W32((u32)(r_ebp+0xfffff9bcu), 0x6cd624u);
    /* 0058c338: mov dword ptr [ebp - 0x640], 0x6cd654 */ W32((u32)(r_ebp+0xfffff9c0u), 0x6cd654u);
    /* 0058c342: mov dword ptr [ebp - 0x63c], 0x6b83fc */ W32((u32)(r_ebp+0xfffff9c4u), 0x6b83fcu);
    /* 0058c34c: mov dword ptr [ebp - 0x638], 0x6b83fc */ W32((u32)(r_ebp+0xfffff9c8u), 0x6b83fcu);
    /* 0058c356: mov dword ptr [ebp - 0x634], 0x6b83fc */ W32((u32)(r_ebp+0xfffff9ccu), 0x6b83fcu);
    /* 0058c360: mov dword ptr [ebp - 0x630], 0x6b83fc */ W32((u32)(r_ebp+0xfffff9d0u), 0x6b83fcu);
    /* 0058c36a: mov dword ptr [ebp - 0x62c], 0x6b83fc */ W32((u32)(r_ebp+0xfffff9d4u), 0x6b83fcu);
    /* 0058c374: mov dword ptr [ebp - 0x628], 0x6cd654 */ W32((u32)(r_ebp+0xfffff9d8u), 0x6cd654u);
    /* 0058c37e: mov dword ptr [ebp - 0x624], 0x6cd624 */ W32((u32)(r_ebp+0xfffff9dcu), 0x6cd624u);
    /* 0058c388: mov dword ptr [ebp - 0x620], 0x6cd64c */ W32((u32)(r_ebp+0xfffff9e0u), 0x6cd64cu);
    /* 0058c392: mov dword ptr [ebp - 0x61c], 0x6cd4e8 */ W32((u32)(r_ebp+0xfffff9e4u), 0x6cd4e8u);
    /* 0058c39c: mov dword ptr [ebp - 0x618], 0x6cd584 */ W32((u32)(r_ebp+0xfffff9e8u), 0x6cd584u);
    /* 0058c3a6: mov dword ptr [ebp - 0x614], 0x6cd4ec */ W32((u32)(r_ebp+0xfffff9ecu), 0x6cd4ecu);
    /* 0058c3b0: mov dword ptr [ebp - 0x6a0], 0 */ W32((u32)(r_ebp+0xfffff960u), 0x0u);
    /* 0058c3ba: mov dword ptr [ebp - 0x69c], 1 */ W32((u32)(r_ebp+0xfffff964u), 0x1u);
    /* 0058c3c4: mov dword ptr [ebp - 0x698], 2 */ W32((u32)(r_ebp+0xfffff968u), 0x2u);
    /* 0058c3ce: mov dword ptr [ebp - 0x694], 4 */ W32((u32)(r_ebp+0xfffff96cu), 0x4u);
    /* 0058c3d8: mov dword ptr [ebp - 0x690], 9 */ W32((u32)(r_ebp+0xfffff970u), 0x9u);
    /* 0058c3e2: mov dword ptr [ebp - 0x68c], 0xe */ W32((u32)(r_ebp+0xfffff974u), 0xeu);
    /* 0058c3ec: mov dword ptr [ebp - 0x688], 0x15 */ W32((u32)(r_ebp+0xfffff978u), 0x15u);
    /* 0058c3f6: mov dword ptr [ebp - 0x684], 0x19 */ W32((u32)(r_ebp+0xfffff97cu), 0x19u);
    /* 0058c400: mov dword ptr [ebp - 0x680], 0x1d */ W32((u32)(r_ebp+0xfffff980u), 0x1du);
    /* 0058c40a: mov dword ptr [ebp - 0x67c], 0x22 */ W32((u32)(r_ebp+0xfffff984u), 0x22u);
    /* 0058c414: mov dword ptr [ebp - 0x678], 0x28 */ W32((u32)(r_ebp+0xfffff988u), 0x28u);
    /* 0058c41e: mov dword ptr [ebp - 0x674], 0x2e */ W32((u32)(r_ebp+0xfffff98cu), 0x2eu);
    /* 0058c428: mov dword ptr [ebp - 0x670], 0x35 */ W32((u32)(r_ebp+0xfffff990u), 0x35u);
    /* 0058c432: mov dword ptr [ebp - 0x66c], 0x3d */ W32((u32)(r_ebp+0xfffff994u), 0x3du);
    /* 0058c43c: mov dword ptr [ebp - 0x668], 0x46 */ W32((u32)(r_ebp+0xfffff998u), 0x46u);
    /* 0058c446: mov dword ptr [ebp - 0x60c], 0 */ W32((u32)(r_ebp+0xfffff9f4u), 0x0u);
    /* 0058c450: mov dword ptr [ebp - 0x608], 0 */ W32((u32)(r_ebp+0xfffff9f8u), 0x0u);
    /* 0058c45a: mov dword ptr [ebp - 0x604], 0 */ W32((u32)(r_ebp+0xfffff9fcu), 0x0u);
    /* 0058c464: mov dword ptr [ebp - 0x600], 7 */ W32((u32)(r_ebp+0xfffffa00u), 0x7u);
    /* 0058c46e: mov dword ptr [ebp - 0x5fc], 0xc */ W32((u32)(r_ebp+0xfffffa04u), 0xcu);
    /* 0058c478: mov dword ptr [ebp - 0x5f8], 0x12 */ W32((u32)(r_ebp+0xfffffa08u), 0x12u);
    /* 0058c482: cmp dword ptr [ebp + 8], 9 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058c486: jg 0x58c49a */ if ((!fZ&&fS==fO)) goto L_0058c49a;
L_0058c488:; BB(0x0058c488);
    /* 0058c488: push 0x30dfbc */ { u32 v = 0x30dfbcu; r_esp -= 4; W32(r_esp, v); }
    /* 0058c48d: mov ecx, dword ptr [ebp - 0x75c] */ r_ecx = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058c493: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x58c498u); f_005eaf00();
    /* 0058c498: jmp 0x58c4c2 */ goto L_0058c4c2;
L_0058c49a:; BB(0x0058c49a);
    /* 0058c49a: cmp dword ptr [ebp + 8], 0xf */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058c49e: jg 0x58c4b2 */ if ((!fZ&&fS==fO)) goto L_0058c4b2;
L_0058c4a0:; BB(0x0058c4a0);
    /* 0058c4a0: push 0x30dfbb */ { u32 v = 0x30dfbbu; r_esp -= 4; W32(r_esp, v); }
    /* 0058c4a5: mov ecx, dword ptr [ebp - 0x75c] */ r_ecx = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058c4ab: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x58c4b0u); f_005eaf00();
    /* 0058c4b0: jmp 0x58c4c2 */ goto L_0058c4c2;
L_0058c4b2:; BB(0x0058c4b2);
    /* 0058c4b2: push 0x30dfba */ { u32 v = 0x30dfbau; r_esp -= 4; W32(r_esp, v); }
    /* 0058c4b7: mov ecx, dword ptr [ebp - 0x75c] */ r_ecx = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058c4bd: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x58c4c2u); f_005eaf00();
L_0058c4c2:; BB(0x0058c4c2);
    /* 0058c4c2: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058c4c6: jne 0x58c4cf */ if (!fZ) goto L_0058c4cf;
L_0058c4c8:; BB(0x0058c4c8);
    /* 0058c4c8: mov dword ptr [ebp + 0x10], 1 */ W32((u32)(r_ebp+0x10u), 0x1u);
L_0058c4cf:; BB(0x0058c4cf);
    /* 0058c4cf: mov ecx, dword ptr [ebp - 0x75c] */ r_ecx = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058c4d5: cmp dword ptr [ecx + 0x178], 0 */ {  u32 a = R32((u32)(r_ecx+0x178u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058c4dc: jne 0x58c543 */ if (!fZ) goto L_0058c543;
L_0058c4de:; BB(0x0058c4de);
    /* 0058c4de: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0058c4e3: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x58c4e8u); f_00686d82();
    /* 0058c4e8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058c4eb: mov dword ptr [ebp - 0x740], eax */ W32((u32)(r_ebp+0xfffff8c0u), r_eax);
    /* 0058c4f1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0058c4f8: cmp dword ptr [ebp - 0x740], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffff8c0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058c4ff: je 0x58c514 */ if (fZ) goto L_0058c514;
L_0058c501:; BB(0x0058c501);
    /* 0058c501: mov ecx, dword ptr [ebp - 0x740] */ r_ecx = R32((u32)(r_ebp+0xfffff8c0u));
    /* 0058c507: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x58c50cu); f_005ec5a0();
    /* 0058c50c: mov dword ptr [ebp - 0x760], eax */ W32((u32)(r_ebp+0xfffff8a0u), r_eax);
    /* 0058c512: jmp 0x58c51e */ goto L_0058c51e;
L_0058c514:; BB(0x0058c514);
    /* 0058c514: mov dword ptr [ebp - 0x760], 0 */ W32((u32)(r_ebp+0xfffff8a0u), 0x0u);
L_0058c51e:; BB(0x0058c51e);
    /* 0058c51e: mov edx, dword ptr [ebp - 0x760] */ r_edx = R32((u32)(r_ebp+0xfffff8a0u));
    /* 0058c524: mov dword ptr [ebp - 0x73c], edx */ W32((u32)(r_ebp+0xfffff8c4u), r_edx);
    /* 0058c52a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0058c531: mov eax, dword ptr [ebp - 0x75c] */ r_eax = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058c537: mov ecx, dword ptr [ebp - 0x73c] */ r_ecx = R32((u32)(r_ebp+0xfffff8c4u));
    /* 0058c53d: mov dword ptr [eax + 0x178], ecx */ W32((u32)(r_eax+0x178u), r_ecx);
L_0058c543:; BB(0x0058c543);
    /* 0058c543: mov edx, dword ptr [ebp - 0x75c] */ r_edx = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058c549: mov eax, dword ptr [edx + 0x178] */ r_eax = R32((u32)(r_edx+0x178u));
    /* 0058c54f: mov ecx, dword ptr [ebp - 0x75c] */ r_ecx = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058c555: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0058c558: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0058c55b: cmp dword ptr [ebp - 0x738], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffff8c8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058c562: jl 0x58c5db */ if ((fS!=fO)) goto L_0058c5db;
L_0058c564:; BB(0x0058c564);
    /* 0058c564: cmp dword ptr [ebp - 0x738], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffff8c8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058c56b: jne 0x58c58b */ if (!fZ) goto L_0058c58b;
L_0058c56d:; BB(0x0058c56d);
    /* 0058c56d: push 0x6cd3a4 */ { u32 v = 0x6cd3a4u; r_esp -= 4; W32(r_esp, v); }
    /* 0058c572: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x58c577u); f_00630f40();
    /* 0058c577: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058c57a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058c57b: lea eax, [ebp - 0xf4] */ r_eax = (u32)(r_ebp+0xffffff0cu);
    /* 0058c581: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058c582: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x58c588u); call_ind(t); }
    /* 0058c588: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0058c58b:; BB(0x0058c58b);
    /* 0058c58b: cmp dword ptr [ebp - 0x738], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffff8c8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058c592: jne 0x58c5b2 */ if (!fZ) goto L_0058c5b2;
L_0058c594:; BB(0x0058c594);
    /* 0058c594: push 0x6cd38c */ { u32 v = 0x6cd38cu; r_esp -= 4; W32(r_esp, v); }
    /* 0058c599: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x58c59eu); f_00630f40();
    /* 0058c59e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058c5a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058c5a2: lea ecx, [ebp - 0xf4] */ r_ecx = (u32)(r_ebp+0xffffff0cu);
    /* 0058c5a8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058c5a9: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x58c5afu); call_ind(t); }
    /* 0058c5af: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0058c5b2:; BB(0x0058c5b2);
    /* 0058c5b2: cmp dword ptr [ebp - 0x738], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffff8c8u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058c5b9: jne 0x58c5d9 */ if (!fZ) goto L_0058c5d9;
L_0058c5bb:; BB(0x0058c5bb);
    /* 0058c5bb: push 0x6cd374 */ { u32 v = 0x6cd374u; r_esp -= 4; W32(r_esp, v); }
    /* 0058c5c0: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x58c5c5u); f_00630f40();
    /* 0058c5c5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058c5c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058c5c9: lea edx, [ebp - 0xf4] */ r_edx = (u32)(r_ebp+0xffffff0cu);
    /* 0058c5cf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058c5d0: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x58c5d6u); call_ind(t); }
    /* 0058c5d6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0058c5d9:; BB(0x0058c5d9);
    /* 0058c5d9: jmp 0x58c627 */ goto L_0058c627;
L_0058c5db:; BB(0x0058c5db);
    /* 0058c5db: cmp dword ptr [ebp + 8], 1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058c5df: jne 0x58c601 */ if (!fZ) goto L_0058c601;
L_0058c5e1:; BB(0x0058c5e1);
    /* 0058c5e1: push 0x6cd364 */ { u32 v = 0x6cd364u; r_esp -= 4; W32(r_esp, v); }
    /* 0058c5e6: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x58c5ebu); f_00630f40();
    /* 0058c5eb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058c5ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058c5ef: lea eax, [ebp - 0xf4] */ r_eax = (u32)(r_ebp+0xffffff0cu);
    /* 0058c5f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058c5f6: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x58c5fcu); call_ind(t); }
    /* 0058c5fc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058c5ff: jmp 0x58c627 */ goto L_0058c627;
L_0058c601:; BB(0x0058c601);
    /* 0058c601: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0058c604: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058c605: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0058c608: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058c609: push 0x6cd344 */ { u32 v = 0x6cd344u; r_esp -= 4; W32(r_esp, v); }
    /* 0058c60e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x58c613u); f_00630f40();
    /* 0058c613: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058c616: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058c617: lea eax, [ebp - 0xf4] */ r_eax = (u32)(r_ebp+0xffffff0cu);
    /* 0058c61d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058c61e: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x58c624u); call_ind(t); }
    /* 0058c624: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0058c627:; BB(0x0058c627);
    /* 0058c627: lea ecx, [ebp - 0xf4] */ r_ecx = (u32)(r_ebp+0xffffff0cu);
    /* 0058c62d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058c62e: mov edx, dword ptr [ebp - 0x75c] */ r_edx = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058c634: mov eax, dword ptr [edx + 0x178] */ r_eax = R32((u32)(r_edx+0x178u));
    /* 0058c63a: mov ecx, dword ptr [ebp - 0x75c] */ r_ecx = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058c640: mov ecx, dword ptr [ecx + 0x178] */ r_ecx = R32((u32)(r_ecx+0x178u));
    /* 0058c646: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0058c648: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0058c64e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58c650u); call_ind(t); }
    /* 0058c650: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 0058c655: mov ecx, dword ptr [ebp - 0x75c] */ r_ecx = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058c65b: mov ecx, dword ptr [ecx + 0x178] */ r_ecx = R32((u32)(r_ecx+0x178u));
    /* 0058c661: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x58c666u); f_005ecc60();
    /* 0058c666: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0058c668: mov edx, dword ptr [ebp - 0x75c] */ r_edx = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058c66e: mov ecx, dword ptr [edx + 0x178] */ r_ecx = R32((u32)(r_edx+0x178u));
    /* 0058c674: call 0x5eccb0 */ r_esp -= 4; W32(r_esp, 0x58c679u); f_005eccb0();
    /* 0058c679: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058c67a: mov eax, esp */ r_eax = r_esp;
    /* 0058c67c: mov cx, word ptr [0x75ee1c] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 0058c683: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 0058c686: mov dl, byte ptr [0x75ee1e] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 0058c68c: mov byte ptr [eax + 2], dl */ W8((u32)(r_eax+0x2u), (u8)r_edx);
    /* 0058c68f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0058c691: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 0058c693: mov eax, dword ptr [ebp - 0x75c] */ r_eax = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058c699: mov ecx, dword ptr [eax + 0x178] */ r_ecx = R32((u32)(r_eax+0x178u));
    /* 0058c69f: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x58c6a4u); f_005ecd00();
    /* 0058c6a4: mov ecx, dword ptr [ebp - 0x75c] */ r_ecx = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058c6aa: mov edx, dword ptr [ecx + 0x178] */ r_edx = R32((u32)(r_ecx+0x178u));
    /* 0058c6b0: mov eax, dword ptr [ebp - 0x75c] */ r_eax = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058c6b6: mov ecx, dword ptr [eax + 0x178] */ r_ecx = R32((u32)(r_eax+0x178u));
    /* 0058c6bc: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0058c6be: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0058c6c1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58c6c3u); call_ind(t); }
    /* 0058c6c3: mov ecx, dword ptr [ebp - 0x75c] */ r_ecx = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058c6c9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0058c6cb: mov ecx, dword ptr [ebp - 0x75c] */ r_ecx = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058c6d1: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 0058c6d4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58c6d6u); call_ind(t); }
    /* 0058c6d6: add eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0058c6d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058c6da: mov ecx, dword ptr [ebp - 0x75c] */ r_ecx = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058c6e0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0058c6e2: mov ecx, dword ptr [ebp - 0x75c] */ r_ecx = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058c6e8: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0058c6eb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58c6edu); call_ind(t); }
    /* 0058c6ed: add eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0058c6f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058c6f1: mov ecx, dword ptr [ebp - 0x75c] */ r_ecx = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058c6f7: mov edx, dword ptr [ecx + 0x178] */ r_edx = R32((u32)(r_ecx+0x178u));
    /* 0058c6fd: mov eax, dword ptr [ebp - 0x75c] */ r_eax = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058c703: mov ecx, dword ptr [eax + 0x178] */ r_ecx = R32((u32)(r_eax+0x178u));
    /* 0058c709: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0058c70b: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0058c70e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58c710u); call_ind(t); }
    /* 0058c710: mov ecx, dword ptr [ebp - 0x75c] */ r_ecx = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058c716: call 0x5f53c0 */ r_esp -= 4; W32(r_esp, 0x58c71bu); f_005f53c0();
    /* 0058c71b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0058c71e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058c71f: mov ecx, dword ptr [ebp - 0x75c] */ r_ecx = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058c725: mov edx, dword ptr [ecx + 0x178] */ r_edx = R32((u32)(r_ecx+0x178u));
    /* 0058c72b: mov eax, dword ptr [ebp - 0x75c] */ r_eax = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058c731: mov ecx, dword ptr [eax + 0x178] */ r_ecx = R32((u32)(r_eax+0x178u));
    /* 0058c737: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0058c739: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0058c73c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58c73eu); call_ind(t); }
    /* 0058c73e: mov ecx, dword ptr [ebp - 0x75c] */ r_ecx = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058c744: mov edx, dword ptr [ecx + 0x178] */ r_edx = R32((u32)(r_ecx+0x178u));
    /* 0058c74a: mov eax, dword ptr [ebp - 0x75c] */ r_eax = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058c750: mov ecx, dword ptr [eax + 0x178] */ r_ecx = R32((u32)(r_eax+0x178u));
    /* 0058c756: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0058c758: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0058c75b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58c75du); call_ind(t); }
    /* 0058c75d: mov ecx, dword ptr [ebp - 0x75c] */ r_ecx = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058c763: cmp dword ptr [ecx + 0x224], 0 */ {  u32 a = R32((u32)(r_ecx+0x224u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058c76a: jne 0x58c7d1 */ if (!fZ) goto L_0058c7d1;
L_0058c76c:; BB(0x0058c76c);
    /* 0058c76c: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0058c771: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x58c776u); f_00686d82();
    /* 0058c776: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058c779: mov dword ptr [ebp - 0x748], eax */ W32((u32)(r_ebp+0xfffff8b8u), r_eax);
    /* 0058c77f: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0058c786: cmp dword ptr [ebp - 0x748], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffff8b8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058c78d: je 0x58c7a2 */ if (fZ) goto L_0058c7a2;
L_0058c78f:; BB(0x0058c78f);
    /* 0058c78f: mov ecx, dword ptr [ebp - 0x748] */ r_ecx = R32((u32)(r_ebp+0xfffff8b8u));
    /* 0058c795: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x58c79au); f_005eaaf0();
    /* 0058c79a: mov dword ptr [ebp - 0x764], eax */ W32((u32)(r_ebp+0xfffff89cu), r_eax);
    /* 0058c7a0: jmp 0x58c7ac */ goto L_0058c7ac;
L_0058c7a2:; BB(0x0058c7a2);
    /* 0058c7a2: mov dword ptr [ebp - 0x764], 0 */ W32((u32)(r_ebp+0xfffff89cu), 0x0u);
L_0058c7ac:; BB(0x0058c7ac);
    /* 0058c7ac: mov edx, dword ptr [ebp - 0x764] */ r_edx = R32((u32)(r_ebp+0xfffff89cu));
    /* 0058c7b2: mov dword ptr [ebp - 0x744], edx */ W32((u32)(r_ebp+0xfffff8bcu), r_edx);
    /* 0058c7b8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0058c7bf: mov eax, dword ptr [ebp - 0x75c] */ r_eax = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058c7c5: mov ecx, dword ptr [ebp - 0x744] */ r_ecx = R32((u32)(r_ebp+0xfffff8bcu));
    /* 0058c7cb: mov dword ptr [eax + 0x224], ecx */ W32((u32)(r_eax+0x224u), r_ecx);
L_0058c7d1:; BB(0x0058c7d1);
    /* 0058c7d1: mov edx, dword ptr [ebp - 0x75c] */ r_edx = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058c7d7: mov eax, dword ptr [edx + 0x224] */ r_eax = R32((u32)(r_edx+0x224u));
    /* 0058c7dd: mov ecx, dword ptr [ebp - 0x75c] */ r_ecx = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058c7e3: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0058c7e6: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0058c7e9: push 0x30dfc0 */ { u32 v = 0x30dfc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0058c7ee: mov eax, dword ptr [ebp - 0x75c] */ r_eax = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058c7f4: mov ecx, dword ptr [eax + 0x224] */ r_ecx = R32((u32)(r_eax+0x224u));
    /* 0058c7fa: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x58c7ffu); f_005eaf00();
    /* 0058c7ff: mov ecx, dword ptr [ebp - 0x75c] */ r_ecx = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058c805: mov edx, dword ptr [ecx + 0x224] */ r_edx = R32((u32)(r_ecx+0x224u));
    /* 0058c80b: mov eax, dword ptr [ebp - 0x75c] */ r_eax = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058c811: mov ecx, dword ptr [eax + 0x224] */ r_ecx = R32((u32)(r_eax+0x224u));
    /* 0058c817: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0058c819: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0058c81c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58c81eu); call_ind(t); }
    /* 0058c81e: mov ecx, dword ptr [ebp - 0x75c] */ r_ecx = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058c824: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0058c826: mov ecx, dword ptr [ebp - 0x75c] */ r_ecx = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058c82c: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 0058c82f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58c831u); call_ind(t); }
    /* 0058c831: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058c832: mov ecx, dword ptr [ebp - 0x75c] */ r_ecx = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058c838: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0058c83a: mov ecx, dword ptr [ebp - 0x75c] */ r_ecx = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058c840: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0058c843: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58c845u); call_ind(t); }
    /* 0058c845: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058c846: mov ecx, dword ptr [ebp - 0x75c] */ r_ecx = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058c84c: mov edx, dword ptr [ecx + 0x224] */ r_edx = R32((u32)(r_ecx+0x224u));
    /* 0058c852: mov eax, dword ptr [ebp - 0x75c] */ r_eax = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058c858: mov ecx, dword ptr [eax + 0x224] */ r_ecx = R32((u32)(r_eax+0x224u));
    /* 0058c85e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0058c860: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0058c863: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58c865u); call_ind(t); }
    /* 0058c865: mov ecx, dword ptr [ebp - 0x75c] */ r_ecx = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058c86b: call 0x5f53c0 */ r_esp -= 4; W32(r_esp, 0x58c870u); f_005f53c0();
    /* 0058c870: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0058c873: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058c874: mov ecx, dword ptr [ebp - 0x75c] */ r_ecx = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058c87a: mov edx, dword ptr [ecx + 0x224] */ r_edx = R32((u32)(r_ecx+0x224u));
    /* 0058c880: mov eax, dword ptr [ebp - 0x75c] */ r_eax = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058c886: mov ecx, dword ptr [eax + 0x224] */ r_ecx = R32((u32)(r_eax+0x224u));
    /* 0058c88c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0058c88e: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0058c891: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58c893u); call_ind(t); }
    /* 0058c893: mov ecx, dword ptr [ebp - 0x75c] */ r_ecx = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058c899: mov edx, dword ptr [ecx + 0x224] */ r_edx = R32((u32)(r_ecx+0x224u));
    /* 0058c89f: mov eax, dword ptr [ebp - 0x75c] */ r_eax = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058c8a5: mov ecx, dword ptr [eax + 0x224] */ r_ecx = R32((u32)(r_eax+0x224u));
    /* 0058c8ab: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0058c8ad: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0058c8b0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58c8b2u); call_ind(t); }
    /* 0058c8b2: cmp dword ptr [ebp + 8], 0xf */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058c8b6: jle 0x58c8c4 */ if ((fZ||fS!=fO)) goto L_0058c8c4;
L_0058c8b8:; BB(0x0058c8b8);
    /* 0058c8b8: mov dword ptr [ebp - 0x5f0], 0x15 */ W32((u32)(r_ebp+0xfffffa10u), 0x15u);
    /* 0058c8c2: jmp 0x58c8da */ goto L_0058c8da;
L_0058c8c4:; BB(0x0058c8c4);
    /* 0058c8c4: movzx ecx, byte ptr [ebp + 0xc] */ r_ecx = (u32)R8((u32)(r_ebp+0xcu));
    /* 0058c8c8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0058c8cb: mov eax, dword ptr [ebp + edx*4 - 0x6e0] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xfffff920u));
    /* 0058c8d2: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0058c8d4: mov dword ptr [ebp - 0x5f0], eax */ W32((u32)(r_ebp+0xfffffa10u), r_eax);
L_0058c8da:; BB(0x0058c8da);
    /* 0058c8da: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0058c8e1: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0058c8e4: mov dword ptr [ebp - 0x768], ecx */ W32((u32)(r_ebp+0xfffff898u), r_ecx);
    /* 0058c8ea: mov edx, dword ptr [ebp - 0x768] */ r_edx = R32((u32)(r_ebp+0xfffff898u));
    /* 0058c8f0: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0058c8f3: mov dword ptr [ebp - 0x768], edx */ W32((u32)(r_ebp+0xfffff898u), r_edx);
    /* 0058c8f9: cmp dword ptr [ebp - 0x768], 0x45 */ {  u32 a = R32((u32)(r_ebp+0xfffff898u)); u32 b = 0x45u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0058c900: ja 0x58c938 */ if ((!fC&&!fZ)) goto L_0058c938;
L_0058c902:; BB(0x0058c902);
    /* 0058c902: mov eax, dword ptr [ebp - 0x768] */ r_eax = R32((u32)(r_ebp+0xfffff898u));
    /* 0058c908: movzx ecx, byte ptr [eax + 0x58cff0] */ r_ecx = (u32)R8((u32)(r_eax+0x58cff0u));
    /* 0058c90f: jmp dword ptr [ecx*4 + 0x58cfdc] */ { u32 t = R32((u32)(r_ecx*4+0x58cfdcu)); switch (t) { case 0x58c916u: goto L_0058c916; case 0x58c91fu: goto L_0058c91f; case 0x58c928u: goto L_0058c928; case 0x58c931u: goto L_0058c931; case 0x58c938u: goto L_0058c938; default: UNSUP(0x0058c90f, "jump table entry is not a known target"); } }
L_0058c916:; BB(0x0058c916);
    /* 0058c916: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0058c91d: jmp 0x58c938 */ goto L_0058c938;
L_0058c91f:; BB(0x0058c91f);
    /* 0058c91f: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
    /* 0058c926: jmp 0x58c938 */ goto L_0058c938;
L_0058c928:; BB(0x0058c928);
    /* 0058c928: mov dword ptr [ebp - 0x10], 2 */ W32((u32)(r_ebp+0xfffffff0u), 0x2u);
    /* 0058c92f: jmp 0x58c938 */ goto L_0058c938;
L_0058c931:; BB(0x0058c931);
    /* 0058c931: mov dword ptr [ebp - 0x10], 3 */ W32((u32)(r_ebp+0xfffffff0u), 0x3u);
L_0058c938:; BB(0x0058c938);
    /* 0058c938: movzx edx, byte ptr [ebp + 0xc] */ r_edx = (u32)R8((u32)(r_ebp+0xcu));
    /* 0058c93c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058c93e: je 0x58c952 */ if (fZ) goto L_0058c952;
L_0058c940:; BB(0x0058c940);
    /* 0058c940: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0058c943: mov ecx, dword ptr [ebp + eax*4 - 0x610] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xfffff9f0u));
    /* 0058c94a: mov dword ptr [ebp - 0x5f4], ecx */ W32((u32)(r_ebp+0xfffffa0cu), r_ecx);
    /* 0058c950: jmp 0x58c962 */ goto L_0058c962;
L_0058c952:; BB(0x0058c952);
    /* 0058c952: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0058c955: mov eax, dword ptr [ebp + edx*4 - 0x6a4] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xfffff95cu));
    /* 0058c95c: mov dword ptr [ebp - 0x5f4], eax */ W32((u32)(r_ebp+0xfffffa0cu), r_eax);
L_0058c962:; BB(0x0058c962);
    /* 0058c962: cmp dword ptr [ebp + 8], 0x14 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058c966: jne 0x58c974 */ if (!fZ) goto L_0058c974;
L_0058c968:; BB(0x0058c968);
    /* 0058c968: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0058c96a: cmp dword ptr [ebp + 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058c96e: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0058c971: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0058c974:; BB(0x0058c974);
    /* 0058c974: cmp dword ptr [ebp - 0x738], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffff8c8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058c97b: jl 0x58c9a5 */ if ((fS!=fO)) goto L_0058c9a5;
L_0058c97d:; BB(0x0058c97d);
    /* 0058c97d: push 0x30dfba */ { u32 v = 0x30dfbau; r_esp -= 4; W32(r_esp, v); }
    /* 0058c982: mov ecx, dword ptr [ebp - 0x75c] */ r_ecx = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058c988: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x58c98du); f_005eaf00();
    /* 0058c98d: mov dword ptr [ebp - 0x5f0], 0x15 */ W32((u32)(r_ebp+0xfffffa10u), 0x15u);
    /* 0058c997: mov dword ptr [ebp + 8], 0x14 */ W32((u32)(r_ebp+0x8u), 0x14u);
    /* 0058c99e: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_0058c9a5:; BB(0x0058c9a5);
    /* 0058c9a5: mov dword ptr [ebp - 0xf8], 0 */ W32((u32)(r_ebp+0xffffff08u), 0x0u);
    /* 0058c9af: jmp 0x58c9c0 */ goto L_0058c9c0;
L_0058c9b1:; BB(0x0058c9b1);
    /* 0058c9b1: mov edx, dword ptr [ebp - 0xf8] */ r_edx = R32((u32)(r_ebp+0xffffff08u));
    /* 0058c9b7: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0058c9ba: mov dword ptr [ebp - 0xf8], edx */ W32((u32)(r_ebp+0xffffff08u), r_edx);
L_0058c9c0:; BB(0x0058c9c0);
    /* 0058c9c0: mov eax, dword ptr [ebp - 0xf8] */ r_eax = R32((u32)(r_ebp+0xffffff08u));
    /* 0058c9c6: cmp eax, dword ptr [ebp - 0x5f0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffa10u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058c9cc: jge 0x58cfb1 */ if ((fS==fO)) goto L_0058cfb1;
L_0058c9d2:; BB(0x0058c9d2);
    /* 0058c9d2: mov ecx, dword ptr [ebp - 0xf8] */ r_ecx = R32((u32)(r_ebp+0xffffff08u));
    /* 0058c9d8: mov edx, dword ptr [ebp - 0x75c] */ r_edx = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058c9de: cmp dword ptr [edx + ecx*4 + 0x17c], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x17cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058c9e6: jne 0x58ca54 */ if (!fZ) goto L_0058ca54;
L_0058c9e8:; BB(0x0058c9e8);
    /* 0058c9e8: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0058c9ed: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x58c9f2u); f_00686d82();
    /* 0058c9f2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058c9f5: mov dword ptr [ebp - 0x750], eax */ W32((u32)(r_ebp+0xfffff8b0u), r_eax);
    /* 0058c9fb: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0058ca02: cmp dword ptr [ebp - 0x750], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffff8b0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058ca09: je 0x58ca1e */ if (fZ) goto L_0058ca1e;
L_0058ca0b:; BB(0x0058ca0b);
    /* 0058ca0b: mov ecx, dword ptr [ebp - 0x750] */ r_ecx = R32((u32)(r_ebp+0xfffff8b0u));
    /* 0058ca11: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x58ca16u); f_005ec5a0();
    /* 0058ca16: mov dword ptr [ebp - 0x76c], eax */ W32((u32)(r_ebp+0xfffff894u), r_eax);
    /* 0058ca1c: jmp 0x58ca28 */ goto L_0058ca28;
L_0058ca1e:; BB(0x0058ca1e);
    /* 0058ca1e: mov dword ptr [ebp - 0x76c], 0 */ W32((u32)(r_ebp+0xfffff894u), 0x0u);
L_0058ca28:; BB(0x0058ca28);
    /* 0058ca28: mov eax, dword ptr [ebp - 0x76c] */ r_eax = R32((u32)(r_ebp+0xfffff894u));
    /* 0058ca2e: mov dword ptr [ebp - 0x74c], eax */ W32((u32)(r_ebp+0xfffff8b4u), r_eax);
    /* 0058ca34: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0058ca3b: mov ecx, dword ptr [ebp - 0xf8] */ r_ecx = R32((u32)(r_ebp+0xffffff08u));
    /* 0058ca41: mov edx, dword ptr [ebp - 0x75c] */ r_edx = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058ca47: mov eax, dword ptr [ebp - 0x74c] */ r_eax = R32((u32)(r_ebp+0xfffff8b4u));
    /* 0058ca4d: mov dword ptr [edx + ecx*4 + 0x17c], eax */ W32((u32)(r_edx+r_ecx*4+0x17cu), r_eax);
L_0058ca54:; BB(0x0058ca54);
    /* 0058ca54: mov ecx, dword ptr [ebp - 0xf8] */ r_ecx = R32((u32)(r_ebp+0xffffff08u));
    /* 0058ca5a: mov edx, dword ptr [ebp - 0x75c] */ r_edx = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058ca60: mov eax, dword ptr [edx + ecx*4 + 0x17c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x17cu));
    /* 0058ca67: mov ecx, dword ptr [ebp - 0x75c] */ r_ecx = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058ca6d: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0058ca70: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0058ca73: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0058ca76: sub eax, dword ptr [ebp - 0xf8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffff08u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0058ca7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058ca7d: push 0x6b2828 */ { u32 v = 0x6b2828u; r_esp -= 4; W32(r_esp, v); }
    /* 0058ca82: lea ecx, [ebp - 0xf4] */ r_ecx = (u32)(r_ebp+0xffffff0cu);
    /* 0058ca88: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058ca89: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x58ca8fu); call_ind(t); }
    /* 0058ca8f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058ca92: mov edx, dword ptr [ebp - 0xf8] */ r_edx = R32((u32)(r_ebp+0xffffff08u));
    /* 0058ca98: mov eax, dword ptr [ebp - 0x75c] */ r_eax = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058ca9e: mov ecx, dword ptr [eax + edx*4 + 0x17c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x17cu));
    /* 0058caa5: mov edx, dword ptr [ebp - 0xf8] */ r_edx = R32((u32)(r_ebp+0xffffff08u));
    /* 0058caab: mov eax, dword ptr [ebp - 0x75c] */ r_eax = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058cab1: mov edx, dword ptr [eax + edx*4 + 0x17c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x17cu));
    /* 0058cab8: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0058caba: mov ecx, edx */ r_ecx = r_edx;
    /* 0058cabc: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0058cabf: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x58cac1u); call_ind(t); }
    /* 0058cac1: lea eax, [ebp - 0xf4] */ r_eax = (u32)(r_ebp+0xffffff0cu);
    /* 0058cac7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058cac8: mov ecx, dword ptr [ebp - 0xf8] */ r_ecx = R32((u32)(r_ebp+0xffffff08u));
    /* 0058cace: mov edx, dword ptr [ebp - 0x75c] */ r_edx = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058cad4: mov eax, dword ptr [edx + ecx*4 + 0x17c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x17cu));
    /* 0058cadb: mov ecx, dword ptr [ebp - 0xf8] */ r_ecx = R32((u32)(r_ebp+0xffffff08u));
    /* 0058cae1: mov edx, dword ptr [ebp - 0x75c] */ r_edx = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058cae7: mov ecx, dword ptr [edx + ecx*4 + 0x17c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x17cu));
    /* 0058caee: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0058caf0: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0058caf6: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x58caf8u); call_ind(t); }
    /* 0058caf8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058caf9: mov eax, esp */ r_eax = r_esp;
    /* 0058cafb: mov cx, word ptr [0x75ee1c] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 0058cb02: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 0058cb05: mov dl, byte ptr [0x75ee1e] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 0058cb0b: mov byte ptr [eax + 2], dl */ W8((u32)(r_eax+0x2u), (u8)r_edx);
    /* 0058cb0e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0058cb10: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0058cb12: mov eax, dword ptr [ebp - 0xf8] */ r_eax = R32((u32)(r_ebp+0xffffff08u));
    /* 0058cb18: mov ecx, dword ptr [ebp - 0x75c] */ r_ecx = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058cb1e: mov ecx, dword ptr [ecx + eax*4 + 0x17c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x17cu));
    /* 0058cb25: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x58cb2au); f_005ecd00();
    /* 0058cb2a: mov edx, dword ptr [ebp - 0x75c] */ r_edx = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058cb30: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0058cb32: mov ecx, dword ptr [ebp - 0x75c] */ r_ecx = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058cb38: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 0058cb3b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x58cb3du); call_ind(t); }
    /* 0058cb3d: mov ecx, dword ptr [ebp - 0xf8] */ r_ecx = R32((u32)(r_ebp+0xffffff08u));
    /* 0058cb43: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0058cb46: imul ecx, ecx, 0xf */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xfu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0058cb49: lea edx, [eax + ecx + 0x20] */ r_edx = (u32)(r_eax+r_ecx+0x20u);
    /* 0058cb4d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058cb4e: mov eax, dword ptr [ebp - 0x75c] */ r_eax = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058cb54: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0058cb56: mov ecx, dword ptr [ebp - 0x75c] */ r_ecx = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058cb5c: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0058cb5f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58cb61u); call_ind(t); }
    /* 0058cb61: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0058cb64: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058cb65: mov ecx, dword ptr [ebp - 0xf8] */ r_ecx = R32((u32)(r_ebp+0xffffff08u));
    /* 0058cb6b: mov edx, dword ptr [ebp - 0x75c] */ r_edx = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058cb71: mov eax, dword ptr [edx + ecx*4 + 0x17c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x17cu));
    /* 0058cb78: mov ecx, dword ptr [ebp - 0xf8] */ r_ecx = R32((u32)(r_ebp+0xffffff08u));
    /* 0058cb7e: mov edx, dword ptr [ebp - 0x75c] */ r_edx = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058cb84: mov ecx, dword ptr [edx + ecx*4 + 0x17c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x17cu));
    /* 0058cb8b: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0058cb8d: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0058cb90: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x58cb92u); call_ind(t); }
    /* 0058cb92: mov ecx, dword ptr [ebp - 0x75c] */ r_ecx = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058cb98: call 0x5f53c0 */ r_esp -= 4; W32(r_esp, 0x58cb9du); f_005f53c0();
    /* 0058cb9d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0058cba0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058cba1: mov eax, dword ptr [ebp - 0xf8] */ r_eax = R32((u32)(r_ebp+0xffffff08u));
    /* 0058cba7: mov ecx, dword ptr [ebp - 0x75c] */ r_ecx = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058cbad: mov edx, dword ptr [ecx + eax*4 + 0x17c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x17cu));
    /* 0058cbb4: mov eax, dword ptr [ebp - 0xf8] */ r_eax = R32((u32)(r_ebp+0xffffff08u));
    /* 0058cbba: mov ecx, dword ptr [ebp - 0x75c] */ r_ecx = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058cbc0: mov ecx, dword ptr [ecx + eax*4 + 0x17c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x17cu));
    /* 0058cbc7: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0058cbc9: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0058cbcc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58cbceu); call_ind(t); }
    /* 0058cbce: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0058cbd0: mov ecx, dword ptr [ebp - 0xf8] */ r_ecx = R32((u32)(r_ebp+0xffffff08u));
    /* 0058cbd6: mov edx, dword ptr [ebp - 0x75c] */ r_edx = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058cbdc: mov ecx, dword ptr [edx + ecx*4 + 0x17c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x17cu));
    /* 0058cbe3: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x58cbe8u); f_005ecc60();
    /* 0058cbe8: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0058cbea: mov eax, dword ptr [ebp - 0xf8] */ r_eax = R32((u32)(r_ebp+0xffffff08u));
    /* 0058cbf0: mov ecx, dword ptr [ebp - 0x75c] */ r_ecx = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058cbf6: mov ecx, dword ptr [ecx + eax*4 + 0x17c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x17cu));
    /* 0058cbfd: call 0x5eccb0 */ r_esp -= 4; W32(r_esp, 0x58cc02u); f_005eccb0();
    /* 0058cc02: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0058cc04: mov edx, dword ptr [ebp - 0xf8] */ r_edx = R32((u32)(r_ebp+0xffffff08u));
    /* 0058cc0a: mov eax, dword ptr [ebp - 0x75c] */ r_eax = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058cc10: mov ecx, dword ptr [eax + edx*4 + 0x17c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x17cu));
    /* 0058cc17: call 0x5ef310 */ r_esp -= 4; W32(r_esp, 0x58cc1cu); f_005ef310();
    /* 0058cc1c: mov ecx, dword ptr [ebp - 0xf8] */ r_ecx = R32((u32)(r_ebp+0xffffff08u));
    /* 0058cc22: mov edx, dword ptr [ebp - 0x75c] */ r_edx = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058cc28: mov eax, dword ptr [edx + ecx*4 + 0x17c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x17cu));
    /* 0058cc2f: mov ecx, dword ptr [ebp - 0xf8] */ r_ecx = R32((u32)(r_ebp+0xffffff08u));
    /* 0058cc35: mov edx, dword ptr [ebp - 0x75c] */ r_edx = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058cc3b: mov ecx, dword ptr [edx + ecx*4 + 0x17c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x17cu));
    /* 0058cc42: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0058cc44: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 0058cc47: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x58cc49u); call_ind(t); }
    /* 0058cc49: mov eax, dword ptr [ebp - 0xf8] */ r_eax = R32((u32)(r_ebp+0xffffff08u));
    /* 0058cc4f: mov ecx, dword ptr [ebp - 0x75c] */ r_ecx = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058cc55: cmp dword ptr [ecx + eax*4 + 0x1d0], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x1d0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058cc5d: jne 0x58cccb */ if (!fZ) goto L_0058cccb;
L_0058cc5f:; BB(0x0058cc5f);
    /* 0058cc5f: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0058cc64: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x58cc69u); f_00686d82();
    /* 0058cc69: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058cc6c: mov dword ptr [ebp - 0x758], eax */ W32((u32)(r_ebp+0xfffff8a8u), r_eax);
    /* 0058cc72: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0058cc79: cmp dword ptr [ebp - 0x758], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffff8a8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058cc80: je 0x58cc95 */ if (fZ) goto L_0058cc95;
L_0058cc82:; BB(0x0058cc82);
    /* 0058cc82: mov ecx, dword ptr [ebp - 0x758] */ r_ecx = R32((u32)(r_ebp+0xfffff8a8u));
    /* 0058cc88: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x58cc8du); f_005ec5a0();
    /* 0058cc8d: mov dword ptr [ebp - 0x770], eax */ W32((u32)(r_ebp+0xfffff890u), r_eax);
    /* 0058cc93: jmp 0x58cc9f */ goto L_0058cc9f;
L_0058cc95:; BB(0x0058cc95);
    /* 0058cc95: mov dword ptr [ebp - 0x770], 0 */ W32((u32)(r_ebp+0xfffff890u), 0x0u);
L_0058cc9f:; BB(0x0058cc9f);
    /* 0058cc9f: mov edx, dword ptr [ebp - 0x770] */ r_edx = R32((u32)(r_ebp+0xfffff890u));
    /* 0058cca5: mov dword ptr [ebp - 0x754], edx */ W32((u32)(r_ebp+0xfffff8acu), r_edx);
    /* 0058ccab: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0058ccb2: mov eax, dword ptr [ebp - 0xf8] */ r_eax = R32((u32)(r_ebp+0xffffff08u));
    /* 0058ccb8: mov ecx, dword ptr [ebp - 0x75c] */ r_ecx = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058ccbe: mov edx, dword ptr [ebp - 0x754] */ r_edx = R32((u32)(r_ebp+0xfffff8acu));
    /* 0058ccc4: mov dword ptr [ecx + eax*4 + 0x1d0], edx */ W32((u32)(r_ecx+r_eax*4+0x1d0u), r_edx);
L_0058cccb:; BB(0x0058cccb);
    /* 0058cccb: mov eax, dword ptr [ebp - 0xf8] */ r_eax = R32((u32)(r_ebp+0xffffff08u));
    /* 0058ccd1: mov ecx, dword ptr [ebp - 0x75c] */ r_ecx = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058ccd7: mov edx, dword ptr [ecx + eax*4 + 0x1d0] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x1d0u));
    /* 0058ccde: mov eax, dword ptr [ebp - 0x75c] */ r_eax = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058cce4: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0058cce7: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 0058ccea: mov edx, dword ptr [ebp - 0xf8] */ r_edx = R32((u32)(r_ebp+0xffffff08u));
    /* 0058ccf0: mov eax, dword ptr [ebp - 0x75c] */ r_eax = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058ccf6: mov ecx, dword ptr [eax + edx*4 + 0x1d0] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1d0u));
    /* 0058ccfd: mov edx, dword ptr [ebp - 0xf8] */ r_edx = R32((u32)(r_ebp+0xffffff08u));
    /* 0058cd03: mov eax, dword ptr [ebp - 0x75c] */ r_eax = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058cd09: mov edx, dword ptr [eax + edx*4 + 0x1d0] */ r_edx = R32((u32)(r_eax+r_edx*4+0x1d0u));
    /* 0058cd10: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0058cd12: mov ecx, edx */ r_ecx = r_edx;
    /* 0058cd14: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0058cd17: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x58cd19u); call_ind(t); }
    /* 0058cd19: cmp dword ptr [ebp + 8], 0x14 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058cd1d: jne 0x58cd71 */ if (!fZ) goto L_0058cd71;
L_0058cd1f:; BB(0x0058cd1f);
    /* 0058cd1f: cmp dword ptr [ebp - 0x738], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffff8c8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058cd26: jge 0x58cd71 */ if ((fS==fO)) goto L_0058cd71;
L_0058cd28:; BB(0x0058cd28);
    /* 0058cd28: mov eax, dword ptr [ebp - 0xf8] */ r_eax = R32((u32)(r_ebp+0xffffff08u));
    /* 0058cd2e: lea ecx, [ebp + eax*8 - 0xbc] */ r_ecx = (u32)(r_ebp+r_eax*8+0xffffff44u);
    /* 0058cd35: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058cd38: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 0058cd3b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058cd3c: mov ecx, dword ptr [ebp - 0xf8] */ r_ecx = R32((u32)(r_ebp+0xffffff08u));
    /* 0058cd42: mov edx, dword ptr [ebp - 0x75c] */ r_edx = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058cd48: mov eax, dword ptr [edx + ecx*4 + 0x1d0] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x1d0u));
    /* 0058cd4f: mov ecx, dword ptr [ebp - 0xf8] */ r_ecx = R32((u32)(r_ebp+0xffffff08u));
    /* 0058cd55: mov edx, dword ptr [ebp - 0x75c] */ r_edx = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058cd5b: mov ecx, dword ptr [edx + ecx*4 + 0x1d0] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x1d0u));
    /* 0058cd62: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0058cd64: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0058cd6a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x58cd6cu); call_ind(t); }
    /* 0058cd6c: jmp 0x58ce58 */ goto L_0058ce58;
L_0058cd71:; BB(0x0058cd71);
    /* 0058cd71: cmp dword ptr [ebp - 0x738], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffff8c8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058cd78: jl 0x58ce0b */ if ((fS!=fO)) goto L_0058ce0b;
L_0058cd7e:; BB(0x0058cd7e);
    /* 0058cd7e: cmp dword ptr [ebp - 0x738], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffff8c8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058cd85: jne 0x58cdc9 */ if (!fZ) goto L_0058cdc9;
L_0058cd87:; BB(0x0058cd87);
    /* 0058cd87: mov eax, dword ptr [ebp - 0xf8] */ r_eax = R32((u32)(r_ebp+0xffffff08u));
    /* 0058cd8d: mov ecx, dword ptr [ebp + eax*4 - 0x664] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xfffff99cu));
    /* 0058cd94: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058cd95: mov edx, dword ptr [ebp - 0xf8] */ r_edx = R32((u32)(r_ebp+0xffffff08u));
    /* 0058cd9b: mov eax, dword ptr [ebp - 0x75c] */ r_eax = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058cda1: mov ecx, dword ptr [eax + edx*4 + 0x1d0] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1d0u));
    /* 0058cda8: mov edx, dword ptr [ebp - 0xf8] */ r_edx = R32((u32)(r_ebp+0xffffff08u));
    /* 0058cdae: mov eax, dword ptr [ebp - 0x75c] */ r_eax = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058cdb4: mov edx, dword ptr [eax + edx*4 + 0x1d0] */ r_edx = R32((u32)(r_eax+r_edx*4+0x1d0u));
    /* 0058cdbb: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0058cdbd: mov ecx, edx */ r_ecx = r_edx;
    /* 0058cdbf: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0058cdc5: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x58cdc7u); call_ind(t); }
    /* 0058cdc7: jmp 0x58ce09 */ goto L_0058ce09;
L_0058cdc9:; BB(0x0058cdc9);
    /* 0058cdc9: mov eax, dword ptr [ebp - 0xf8] */ r_eax = R32((u32)(r_ebp+0xffffff08u));
    /* 0058cdcf: mov ecx, dword ptr [ebp + eax*4 - 0x734] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xfffff8ccu));
    /* 0058cdd6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058cdd7: mov edx, dword ptr [ebp - 0xf8] */ r_edx = R32((u32)(r_ebp+0xffffff08u));
    /* 0058cddd: mov eax, dword ptr [ebp - 0x75c] */ r_eax = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058cde3: mov ecx, dword ptr [eax + edx*4 + 0x1d0] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1d0u));
    /* 0058cdea: mov edx, dword ptr [ebp - 0xf8] */ r_edx = R32((u32)(r_ebp+0xffffff08u));
    /* 0058cdf0: mov eax, dword ptr [ebp - 0x75c] */ r_eax = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058cdf6: mov edx, dword ptr [eax + edx*4 + 0x1d0] */ r_edx = R32((u32)(r_eax+r_edx*4+0x1d0u));
    /* 0058cdfd: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0058cdff: mov ecx, edx */ r_ecx = r_edx;
    /* 0058ce01: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0058ce07: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x58ce09u); call_ind(t); }
L_0058ce09:; BB(0x0058ce09);
    /* 0058ce09: jmp 0x58ce58 */ goto L_0058ce58;
L_0058ce0b:; BB(0x0058ce0b);
    /* 0058ce0b: mov eax, dword ptr [ebp - 0x5f4] */ r_eax = R32((u32)(r_ebp+0xfffffa0cu));
    /* 0058ce11: add eax, dword ptr [ebp - 0xf8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffff08u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0058ce17: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0058ce1a: lea ecx, [ebp + eax - 0x5ec] */ r_ecx = (u32)(r_ebp+r_eax+0xfffffa14u);
    /* 0058ce21: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058ce24: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 0058ce27: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058ce28: mov ecx, dword ptr [ebp - 0xf8] */ r_ecx = R32((u32)(r_ebp+0xffffff08u));
    /* 0058ce2e: mov edx, dword ptr [ebp - 0x75c] */ r_edx = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058ce34: mov eax, dword ptr [edx + ecx*4 + 0x1d0] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x1d0u));
    /* 0058ce3b: mov ecx, dword ptr [ebp - 0xf8] */ r_ecx = R32((u32)(r_ebp+0xffffff08u));
    /* 0058ce41: mov edx, dword ptr [ebp - 0x75c] */ r_edx = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058ce47: mov ecx, dword ptr [edx + ecx*4 + 0x1d0] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x1d0u));
    /* 0058ce4e: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0058ce50: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0058ce56: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x58ce58u); call_ind(t); }
L_0058ce58:; BB(0x0058ce58);
    /* 0058ce58: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058ce59: mov eax, esp */ r_eax = r_esp;
    /* 0058ce5b: mov cx, word ptr [0x75ee1c] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 0058ce62: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 0058ce65: mov dl, byte ptr [0x75ee1e] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 0058ce6b: mov byte ptr [eax + 2], dl */ W8((u32)(r_eax+0x2u), (u8)r_edx);
    /* 0058ce6e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0058ce70: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0058ce72: mov eax, dword ptr [ebp - 0xf8] */ r_eax = R32((u32)(r_ebp+0xffffff08u));
    /* 0058ce78: mov ecx, dword ptr [ebp - 0x75c] */ r_ecx = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058ce7e: mov ecx, dword ptr [ecx + eax*4 + 0x1d0] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x1d0u));
    /* 0058ce85: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x58ce8au); f_005ecd00();
    /* 0058ce8a: mov edx, dword ptr [ebp - 0x75c] */ r_edx = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058ce90: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0058ce92: mov ecx, dword ptr [ebp - 0x75c] */ r_ecx = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058ce98: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 0058ce9b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x58ce9du); call_ind(t); }
    /* 0058ce9d: mov ecx, dword ptr [ebp - 0xf8] */ r_ecx = R32((u32)(r_ebp+0xffffff08u));
    /* 0058cea3: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0058cea6: imul ecx, ecx, 0xf */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xfu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0058cea9: lea edx, [eax + ecx + 0x20] */ r_edx = (u32)(r_eax+r_ecx+0x20u);
    /* 0058cead: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058ceae: mov eax, dword ptr [ebp - 0x75c] */ r_eax = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058ceb4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0058ceb6: mov ecx, dword ptr [ebp - 0x75c] */ r_ecx = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058cebc: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0058cebf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58cec1u); call_ind(t); }
    /* 0058cec1: add eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0058cec4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058cec5: mov ecx, dword ptr [ebp - 0xf8] */ r_ecx = R32((u32)(r_ebp+0xffffff08u));
    /* 0058cecb: mov edx, dword ptr [ebp - 0x75c] */ r_edx = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058ced1: mov eax, dword ptr [edx + ecx*4 + 0x1d0] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x1d0u));
    /* 0058ced8: mov ecx, dword ptr [ebp - 0xf8] */ r_ecx = R32((u32)(r_ebp+0xffffff08u));
    /* 0058cede: mov edx, dword ptr [ebp - 0x75c] */ r_edx = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058cee4: mov ecx, dword ptr [edx + ecx*4 + 0x1d0] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x1d0u));
    /* 0058ceeb: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0058ceed: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0058cef0: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x58cef2u); call_ind(t); }
    /* 0058cef2: push 0x8c */ { u32 v = 0x8cu; r_esp -= 4; W32(r_esp, v); }
    /* 0058cef7: mov eax, dword ptr [ebp - 0xf8] */ r_eax = R32((u32)(r_ebp+0xffffff08u));
    /* 0058cefd: mov ecx, dword ptr [ebp - 0x75c] */ r_ecx = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058cf03: mov ecx, dword ptr [ecx + eax*4 + 0x1d0] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x1d0u));
    /* 0058cf0a: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x58cf0fu); f_005ecc60();
    /* 0058cf0f: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0058cf11: mov edx, dword ptr [ebp - 0xf8] */ r_edx = R32((u32)(r_ebp+0xffffff08u));
    /* 0058cf17: mov eax, dword ptr [ebp - 0x75c] */ r_eax = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058cf1d: mov ecx, dword ptr [eax + edx*4 + 0x1d0] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1d0u));
    /* 0058cf24: call 0x5eccb0 */ r_esp -= 4; W32(r_esp, 0x58cf29u); f_005eccb0();
    /* 0058cf29: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0058cf2b: mov ecx, dword ptr [ebp - 0xf8] */ r_ecx = R32((u32)(r_ebp+0xffffff08u));
    /* 0058cf31: mov edx, dword ptr [ebp - 0x75c] */ r_edx = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058cf37: mov ecx, dword ptr [edx + ecx*4 + 0x1d0] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x1d0u));
    /* 0058cf3e: call 0x5ef310 */ r_esp -= 4; W32(r_esp, 0x58cf43u); f_005ef310();
    /* 0058cf43: mov ecx, dword ptr [ebp - 0x75c] */ r_ecx = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058cf49: call 0x5f53c0 */ r_esp -= 4; W32(r_esp, 0x58cf4eu); f_005f53c0();
    /* 0058cf4e: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0058cf51: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058cf52: mov eax, dword ptr [ebp - 0xf8] */ r_eax = R32((u32)(r_ebp+0xffffff08u));
    /* 0058cf58: mov ecx, dword ptr [ebp - 0x75c] */ r_ecx = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058cf5e: mov edx, dword ptr [ecx + eax*4 + 0x1d0] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x1d0u));
    /* 0058cf65: mov eax, dword ptr [ebp - 0xf8] */ r_eax = R32((u32)(r_ebp+0xffffff08u));
    /* 0058cf6b: mov ecx, dword ptr [ebp - 0x75c] */ r_ecx = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058cf71: mov ecx, dword ptr [ecx + eax*4 + 0x1d0] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x1d0u));
    /* 0058cf78: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0058cf7a: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0058cf7d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58cf7fu); call_ind(t); }
    /* 0058cf7f: mov ecx, dword ptr [ebp - 0xf8] */ r_ecx = R32((u32)(r_ebp+0xffffff08u));
    /* 0058cf85: mov edx, dword ptr [ebp - 0x75c] */ r_edx = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058cf8b: mov eax, dword ptr [edx + ecx*4 + 0x1d0] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x1d0u));
    /* 0058cf92: mov ecx, dword ptr [ebp - 0xf8] */ r_ecx = R32((u32)(r_ebp+0xffffff08u));
    /* 0058cf98: mov edx, dword ptr [ebp - 0x75c] */ r_edx = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058cf9e: mov ecx, dword ptr [edx + ecx*4 + 0x1d0] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x1d0u));
    /* 0058cfa5: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0058cfa7: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 0058cfaa: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x58cfacu); call_ind(t); }
    /* 0058cfac: jmp 0x58c9b1 */ goto L_0058c9b1;
L_0058cfb1:; BB(0x0058cfb1);
    /* 0058cfb1: mov ecx, dword ptr [ebp - 0x75c] */ r_ecx = R32((u32)(r_ebp+0xfffff8a4u));
    /* 0058cfb7: call 0x5eb570 */ r_esp -= 4; W32(r_esp, 0x58cfbcu); f_005eb570();
    /* 0058cfbc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058cfbf: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0058cfc6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0058cfc7: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 0058cfcd: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0058cfcf: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x58cfd4u); f_00686d72();
    /* 0058cfd4: mov esp, ebp */ r_esp = r_ebp;
    /* 0058cfd6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058cfd7: ret 0xc */ FN_RET(0x0058b380); r_esp += 16; return;
}

