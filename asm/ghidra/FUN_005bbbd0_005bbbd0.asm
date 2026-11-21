; FUN_005bbbd0  005bbbd0
005bbbd0  PUSH EBP
005bbbd1  MOV EBP,ESP
005bbbd3  SUB ESP,0x10
005bbbd6  CMP dword ptr [EBP + 0x8],0x0
005bbbda  JA 0x005bbbe5
005bbbdc  MOV dword ptr [EBP + 0x8],0x0
005bbbe3  JMP 0x005bbc1b
005bbbe5  OR EAX,0xffffffff
005bbbe8  XOR EDX,EDX
005bbbea  DIV dword ptr [EBP + 0x8]
005bbbed  CMP EAX,0x10
005bbbf0  JNC 0x005bbc1b
005bbbf2  MOV dword ptr [EBP + -0x10],0x0
005bbbf9  LEA EAX,[EBP + -0x10]
005bbbfc  PUSH EAX
005bbbfd  LEA ECX,[EBP + -0xc]
005bbc00  CALL dword ptr [0x006b2284]
005bbc06  MOV dword ptr [EBP + -0xc],0x6d1c0c
005bbc0d  PUSH 0x6fc670
005bbc12  LEA ECX,[EBP + -0xc]
005bbc15  PUSH ECX
005bbc16  CALL 0x00686fc0
005bbc1b  MOV EDX,dword ptr [EBP + 0x8]
005bbc1e  SHL EDX,0x4
005bbc21  PUSH EDX
005bbc22  CALL 0x00686d82
005bbc27  ADD ESP,0x4
005bbc2a  MOV ESP,EBP
005bbc2c  POP EBP
005bbc2d  RET
