; FUN_0061dd90  0061dd90
0061dd90  PUSH EBP
0061dd91  MOV EBP,ESP
0061dd93  PUSH -0x1
0061dd95  PUSH 0x6ab2f8
0061dd9a  MOV EAX,FS:[0x0]
0061dda0  PUSH EAX
0061dda1  PUSH ECX
0061dda2  MOV EAX,[0x00781870]
0061dda7  XOR EAX,EBP
0061dda9  PUSH EAX
0061ddaa  LEA EAX,[EBP + -0xc]
0061ddad  MOV FS:[0x0],EAX
0061ddb3  MOV dword ptr [EBP + -0x10],ECX
0061ddb6  MOV ECX,dword ptr [EBP + -0x10]
0061ddb9  CALL 0x0062aea0
0061ddbe  MOV dword ptr [EBP + -0x4],0x0
0061ddc5  MOV EAX,dword ptr [EBP + -0x10]
0061ddc8  MOV dword ptr [EAX],0x6d8ba4
0061ddce  MOV ECX,dword ptr [EBP + -0x10]
0061ddd1  MOV EDX,dword ptr [EBP + 0x8]
0061ddd4  MOV dword ptr [ECX + 0x30],EDX
0061ddd7  MOV EAX,dword ptr [EBP + -0x10]
0061ddda  MOV dword ptr [EAX + 0x34],0x0
0061dde1  MOV ECX,dword ptr [EBP + 0xc]
0061dde4  PUSH ECX
0061dde5  MOV EDX,dword ptr [EBP + -0x10]
0061dde8  ADD EDX,0x38
0061ddeb  PUSH EDX
0061ddec  CALL 0x00686d8e
0061ddf1  ADD ESP,0x8
0061ddf4  MOVZX EAX,byte ptr [EBP + 0x14]
0061ddf8  PUSH EAX
0061ddf9  MOV ECX,dword ptr [EBP + 0x10]
0061ddfc  PUSH ECX
0061ddfd  MOV ECX,dword ptr [EBP + -0x10]
0061de00  CALL 0x0061dff0
0061de05  MOV dword ptr [EBP + -0x4],0xffffffff
0061de0c  MOV EAX,dword ptr [EBP + -0x10]
0061de0f  MOV ECX,dword ptr [EBP + -0xc]
0061de12  MOV dword ptr FS:[0x0],ECX
0061de19  POP ECX
0061de1a  MOV ESP,EBP
0061de1c  POP EBP
0061de1d  RET 0x10
