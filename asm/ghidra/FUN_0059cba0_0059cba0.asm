; FUN_0059cba0  0059cba0
0059cba0  PUSH EBP
0059cba1  MOV EBP,ESP
0059cba3  PUSH -0x1
0059cba5  PUSH 0x6a7562
0059cbaa  MOV EAX,FS:[0x0]
0059cbb0  PUSH EAX
0059cbb1  SUB ESP,0x14
0059cbb4  MOV EAX,[0x00781870]
0059cbb9  XOR EAX,EBP
0059cbbb  PUSH EAX
0059cbbc  LEA EAX,[EBP + -0xc]
0059cbbf  MOV FS:[0x0],EAX
0059cbc5  MOV dword ptr [EBP + -0x18],ECX
0059cbc8  CMP dword ptr [EBP + 0x8],0x1
0059cbcc  JZ 0x0059cbda
0059cbce  CMP dword ptr [EBP + 0x8],0x2
0059cbd2  JZ 0x0059cbda
0059cbd4  MOV byte ptr [EBP + -0x19],0x0
0059cbd8  JMP 0x0059cbde
0059cbda  MOV byte ptr [EBP + -0x19],0x1
0059cbde  CMP dword ptr [EBP + 0x8],0x0
0059cbe2  JZ 0x0059cbf0
0059cbe4  CMP dword ptr [EBP + 0x8],0x2
0059cbe8  JZ 0x0059cbf0
0059cbea  MOV byte ptr [EBP + -0x1a],0x0
0059cbee  JMP 0x0059cbf4
0059cbf0  MOV byte ptr [EBP + -0x1a],0x1
0059cbf4  MOV AL,byte ptr [EBP + -0x19]
0059cbf7  PUSH EAX
0059cbf8  MOV CL,byte ptr [EBP + -0x1a]
0059cbfb  PUSH ECX
0059cbfc  MOV ECX,dword ptr [0x007935d0]
0059cc02  CALL 0x005a2020
0059cc07  PUSH EAX
0059cc08  MOV ECX,dword ptr [0x007935d0]
0059cc0e  CALL 0x005a2a40
0059cc13  MOVZX EDX,AL
0059cc16  TEST EDX,EDX
0059cc18  JZ 0x0059cc1c
0059cc1a  JMP 0x0059cc77
0059cc1c  MOV ECX,dword ptr [0x007935c4]
0059cc22  CALL 0x0059b800
0059cc27  PUSH 0x24
0059cc29  CALL 0x00686d82
0059cc2e  ADD ESP,0x4
0059cc31  MOV dword ptr [EBP + -0x14],EAX
0059cc34  MOV dword ptr [EBP + -0x4],0x0
0059cc3b  CMP dword ptr [EBP + -0x14],0x0
0059cc3f  JZ 0x0059cc52
0059cc41  MOV EAX,dword ptr [EBP + 0x8]
0059cc44  PUSH EAX
0059cc45  MOV ECX,dword ptr [EBP + -0x14]
0059cc48  CALL 0x0059e5b0
0059cc4d  MOV dword ptr [EBP + -0x20],EAX
0059cc50  JMP 0x0059cc59
0059cc52  MOV dword ptr [EBP + -0x20],0x0
0059cc59  MOV ECX,dword ptr [EBP + -0x20]
0059cc5c  MOV dword ptr [EBP + -0x10],ECX
0059cc5f  MOV dword ptr [EBP + -0x4],0xffffffff
0059cc66  MOV EDX,dword ptr [EBP + -0x10]
0059cc69  PUSH EDX
0059cc6a  MOV EAX,[0x007935cc]
0059cc6f  MOV ECX,dword ptr [EAX + 0x4]
0059cc72  CALL 0x005fc420
0059cc77  MOV ECX,dword ptr [EBP + -0xc]
0059cc7a  MOV dword ptr FS:[0x0],ECX
0059cc81  POP ECX
0059cc82  MOV ESP,EBP
0059cc84  POP EBP
0059cc85  RET 0x4
