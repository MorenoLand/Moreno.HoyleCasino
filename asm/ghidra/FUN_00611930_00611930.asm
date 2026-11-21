; FUN_00611930  00611930
00611930  PUSH EBP
00611931  MOV EBP,ESP
00611933  SUB ESP,0x80
00611939  MOV dword ptr [EBP + -0x74],ECX
0061193c  MOV EAX,dword ptr [EBP + -0x74]
0061193f  CMP dword ptr [EAX + 0x4],0x0
00611943  JNZ 0x0061194e
00611945  MOV dword ptr [EBP + -0x78],0x0
0061194c  JMP 0x00611960
0061194e  MOV ECX,dword ptr [EBP + -0x74]
00611951  MOV EDX,dword ptr [EBP + -0x74]
00611954  MOV EAX,dword ptr [ECX + 0x8]
00611957  SUB EAX,dword ptr [EDX + 0x4]
0061195a  SAR EAX,0x2
0061195d  MOV dword ptr [EBP + -0x78],EAX
00611960  MOV ECX,dword ptr [EBP + -0x78]
00611963  CMP ECX,dword ptr [EBP + 0x8]
00611966  JNC 0x006119ee
0061196c  MOV EDX,dword ptr [EBP + -0x74]
0061196f  CMP dword ptr [EDX + 0x4],0x0
00611973  JNZ 0x0061197e
00611975  MOV dword ptr [EBP + -0x7c],0x0
0061197c  JMP 0x00611990
0061197e  MOV EAX,dword ptr [EBP + -0x74]
00611981  MOV ECX,dword ptr [EBP + -0x74]
00611984  MOV EDX,dword ptr [EAX + 0x8]
00611987  SUB EDX,dword ptr [ECX + 0x4]
0061198a  SAR EDX,0x2
0061198d  MOV dword ptr [EBP + -0x7c],EDX
00611990  MOV EAX,dword ptr [EBP + -0x74]
00611993  MOV ECX,dword ptr [EAX + 0x8]
00611996  MOV dword ptr [EBP + -0x2c],ECX
00611999  MOV dword ptr [EBP + -0x8],0x0
006119a0  CMP dword ptr [EBP + -0x74],0x0
006119a4  JZ 0x006119bc
006119a6  MOV EDX,dword ptr [EBP + -0x74]
006119a9  MOV EAX,dword ptr [EDX + 0x4]
006119ac  CMP EAX,dword ptr [EBP + -0x2c]
006119af  JA 0x006119bc
006119b1  MOV ECX,dword ptr [EBP + -0x74]
006119b4  MOV EDX,dword ptr [EBP + -0x2c]
006119b7  CMP EDX,dword ptr [ECX + 0x8]
006119ba  JBE 0x006119c2
006119bc  CALL dword ptr [0x006b2274]
006119c2  MOV EAX,dword ptr [EBP + -0x74]
006119c5  MOV dword ptr [EBP + -0x8],EAX
006119c8  MOV ECX,dword ptr [EBP + -0x2c]
006119cb  MOV dword ptr [EBP + -0x4],ECX
006119ce  LEA EDX,[EBP + 0xc]
006119d1  PUSH EDX
006119d2  MOV EAX,dword ptr [EBP + 0x8]
006119d5  SUB EAX,dword ptr [EBP + -0x7c]
006119d8  PUSH EAX
006119d9  MOV ECX,dword ptr [EBP + -0x4]
006119dc  PUSH ECX
006119dd  MOV EDX,dword ptr [EBP + -0x8]
006119e0  PUSH EDX
006119e1  MOV ECX,dword ptr [EBP + -0x74]
006119e4  CALL 0x005bafc0
006119e9  JMP 0x00611ada
006119ee  MOV EAX,dword ptr [EBP + -0x74]
006119f1  CMP dword ptr [EAX + 0x4],0x0
006119f5  JNZ 0x00611a00
006119f7  MOV dword ptr [EBP + -0x80],0x0
006119fe  JMP 0x00611a12
00611a00  MOV ECX,dword ptr [EBP + -0x74]
00611a03  MOV EDX,dword ptr [EBP + -0x74]
00611a06  MOV EAX,dword ptr [ECX + 0x8]
00611a09  SUB EAX,dword ptr [EDX + 0x4]
00611a0c  SAR EAX,0x2
00611a0f  MOV dword ptr [EBP + -0x80],EAX
00611a12  MOV ECX,dword ptr [EBP + 0x8]
00611a15  CMP ECX,dword ptr [EBP + -0x80]
00611a18  JNC 0x00611ada
00611a1e  MOV EDX,dword ptr [EBP + -0x74]
00611a21  MOV EAX,dword ptr [EDX + 0x8]
00611a24  MOV dword ptr [EBP + -0x30],EAX
00611a27  MOV dword ptr [EBP + -0x10],0x0
00611a2e  CMP dword ptr [EBP + -0x74],0x0
00611a32  JZ 0x00611a4a
00611a34  MOV ECX,dword ptr [EBP + -0x74]
00611a37  MOV EDX,dword ptr [ECX + 0x4]
00611a3a  CMP EDX,dword ptr [EBP + -0x30]
00611a3d  JA 0x00611a4a
00611a3f  MOV EAX,dword ptr [EBP + -0x74]
00611a42  MOV ECX,dword ptr [EBP + -0x30]
00611a45  CMP ECX,dword ptr [EAX + 0x8]
00611a48  JBE 0x00611a50
00611a4a  CALL dword ptr [0x006b2274]
00611a50  MOV EDX,dword ptr [EBP + -0x74]
00611a53  MOV dword ptr [EBP + -0x10],EDX
00611a56  MOV EAX,dword ptr [EBP + -0x30]
00611a59  MOV dword ptr [EBP + -0xc],EAX
00611a5c  MOV ECX,dword ptr [EBP + -0x74]
00611a5f  MOV EDX,dword ptr [ECX + 0x4]
00611a62  MOV dword ptr [EBP + -0x34],EDX
00611a65  MOV dword ptr [EBP + -0x18],0x0
00611a6c  CMP dword ptr [EBP + -0x74],0x0
00611a70  JZ 0x00611a88
00611a72  MOV EAX,dword ptr [EBP + -0x74]
00611a75  MOV ECX,dword ptr [EAX + 0x4]
00611a78  CMP ECX,dword ptr [EBP + -0x34]
00611a7b  JA 0x00611a88
00611a7d  MOV EDX,dword ptr [EBP + -0x74]
00611a80  MOV EAX,dword ptr [EBP + -0x34]
00611a83  CMP EAX,dword ptr [EDX + 0x8]
00611a86  JBE 0x00611a8e
00611a88  CALL dword ptr [0x006b2274]
00611a8e  MOV ECX,dword ptr [EBP + -0x74]
00611a91  MOV dword ptr [EBP + -0x18],ECX
00611a94  MOV EDX,dword ptr [EBP + -0x34]
00611a97  MOV dword ptr [EBP + -0x14],EDX
00611a9a  MOV EAX,dword ptr [EBP + -0x18]
00611a9d  MOV ECX,dword ptr [EBP + -0x14]
00611aa0  MOV dword ptr [EBP + -0x3c],EAX
00611aa3  MOV dword ptr [EBP + -0x38],ECX
00611aa6  MOV EDX,dword ptr [EBP + 0x8]
00611aa9  PUSH EDX
00611aaa  LEA ECX,[EBP + -0x3c]
00611aad  CALL 0x005beeb0
00611ab2  MOV EAX,dword ptr [EBP + -0x3c]
00611ab5  MOV ECX,dword ptr [EBP + -0x38]
00611ab8  MOV dword ptr [EBP + -0x20],EAX
00611abb  MOV dword ptr [EBP + -0x1c],ECX
00611abe  MOV EDX,dword ptr [EBP + -0xc]
00611ac1  PUSH EDX
00611ac2  MOV EAX,dword ptr [EBP + -0x10]
00611ac5  PUSH EAX
00611ac6  MOV ECX,dword ptr [EBP + -0x1c]
00611ac9  PUSH ECX
00611aca  MOV EDX,dword ptr [EBP + -0x20]
00611acd  PUSH EDX
00611ace  LEA EAX,[EBP + -0x28]
00611ad1  PUSH EAX
00611ad2  MOV ECX,dword ptr [EBP + -0x74]
00611ad5  CALL 0x005bc490
00611ada  MOV ESP,EBP
00611adc  POP EBP
00611add  RET 0x8
