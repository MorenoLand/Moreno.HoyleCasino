; FUN_005d8110  005d8110
005d8110  PUSH EBP
005d8111  MOV EBP,ESP
005d8113  SUB ESP,0x18
005d8116  MOV dword ptr [EBP + -0x14],ECX
005d8119  MOV dword ptr [EBP + -0x4],0xffffffff
005d8120  LEA EAX,[EBP + -0x10]
005d8123  PUSH EAX
005d8124  CALL dword ptr [0x006b229c]
005d812a  ADD ESP,0x4
005d812d  LEA ECX,[EBP + -0x10]
005d8130  PUSH ECX
005d8131  CALL dword ptr [0x006b2298]
005d8137  ADD ESP,0x4
005d813a  MOV dword ptr [EBP + -0x8],EAX
005d813d  MOV EDX,dword ptr [EBP + -0x8]
005d8140  CMP dword ptr [EDX + 0x8],0x16
005d8144  JGE 0x005d814f
005d8146  MOV EAX,dword ptr [EBP + -0x8]
005d8149  CMP dword ptr [EAX + 0x8],0x3
005d814d  JG 0x005d8156
005d814f  MOV dword ptr [EBP + -0x4],0x406
005d8156  MOV ECX,dword ptr [EBP + -0x8]
005d8159  CMP dword ptr [ECX + 0x8],0x5
005d815d  JL 0x005d816f
005d815f  MOV EDX,dword ptr [EBP + -0x8]
005d8162  CMP dword ptr [EDX + 0x8],0xa
005d8166  JGE 0x005d816f
005d8168  MOV dword ptr [EBP + -0x4],0x408
005d816f  MOV EAX,dword ptr [EBP + -0x8]
005d8172  CMP dword ptr [EAX + 0x8],0xc
005d8176  JNZ 0x005d817f
005d8178  MOV dword ptr [EBP + -0x4],0x407
005d817f  MOV ECX,dword ptr [EBP + -0x8]
005d8182  CMP dword ptr [ECX + 0x8],0x11
005d8186  JL 0x005d8198
005d8188  MOV EDX,dword ptr [EBP + -0x8]
005d818b  CMP dword ptr [EDX + 0x18],0x5
005d818f  JNZ 0x005d8198
005d8191  MOV dword ptr [EBP + -0x4],0x405
005d8198  CMP dword ptr [EBP + -0x4],-0x1
005d819c  JZ 0x005d81ac
005d819e  PUSH 0x3
005d81a0  CALL 0x0062fbf0
005d81a5  ADD ESP,0x4
005d81a8  TEST EAX,EAX
005d81aa  JNZ 0x005d8202
005d81ac  MOV EAX,dword ptr [EBP + -0x8]
005d81af  MOV ECX,dword ptr [EAX + 0x18]
005d81b2  MOV dword ptr [EBP + -0x18],ECX
005d81b5  CMP dword ptr [EBP + -0x18],0x6
005d81b9  JA 0x005d8202
005d81bb  MOV EDX,dword ptr [EBP + -0x18]
005d81be  JMP dword ptr [EDX*0x4 + 0x5d820c]
005d81c5  MOV dword ptr [EBP + -0x4],0x3ec
005d81cc  JMP 0x005d8202
005d81ce  MOV dword ptr [EBP + -0x4],0x3ea
005d81d5  JMP 0x005d8202
005d81d7  MOV dword ptr [EBP + -0x4],0x3ee
005d81de  JMP 0x005d8202
005d81e0  MOV dword ptr [EBP + -0x4],0x3ef
005d81e7  JMP 0x005d8202
005d81e9  MOV dword ptr [EBP + -0x4],0x3ed
005d81f0  JMP 0x005d8202
005d81f2  MOV dword ptr [EBP + -0x4],0x3e9
005d81f9  JMP 0x005d8202
005d81fb  MOV dword ptr [EBP + -0x4],0x3eb
005d8202  MOV EAX,dword ptr [EBP + -0x4]
005d8205  MOV ESP,EBP
005d8207  POP EBP
005d8208  RET
