; FUN_0060b5b0  0060b5b0
0060b5b0  PUSH EBP
0060b5b1  MOV EBP,ESP
0060b5b3  PUSH -0x1
0060b5b5  PUSH 0x6aacdb
0060b5ba  MOV EAX,FS:[0x0]
0060b5c0  PUSH EAX
0060b5c1  SUB ESP,0x28
0060b5c4  MOV EAX,[0x00781870]
0060b5c9  XOR EAX,EBP
0060b5cb  PUSH EAX
0060b5cc  LEA EAX,[EBP + -0xc]
0060b5cf  MOV FS:[0x0],EAX
0060b5d5  MOV dword ptr [EBP + -0x28],ECX
0060b5d8  MOV EAX,dword ptr [EBP + -0x28]
0060b5db  MOV dword ptr [EAX],0x6d8184
0060b5e1  MOV dword ptr [EBP + -0x4],0x0
0060b5e8  MOV ECX,dword ptr [EBP + -0x28]
0060b5eb  CMP dword ptr [ECX + 0x1e4],0x0
0060b5f2  JZ 0x0060b626
0060b5f4  MOV EDX,dword ptr [EBP + -0x28]
0060b5f7  MOV EAX,dword ptr [EDX + 0x1e4]
0060b5fd  MOV dword ptr [EBP + -0x14],EAX
0060b600  MOV ECX,dword ptr [EBP + -0x14]
0060b603  MOV dword ptr [EBP + -0x10],ECX
0060b606  CMP dword ptr [EBP + -0x10],0x0
0060b60a  JZ 0x0060b61f
0060b60c  PUSH 0x1
0060b60e  MOV EDX,dword ptr [EBP + -0x10]
0060b611  MOV EAX,dword ptr [EDX]
0060b613  MOV ECX,dword ptr [EBP + -0x10]
0060b616  MOV EDX,dword ptr [EAX]
0060b618  CALL EDX
0060b61a  MOV dword ptr [EBP + -0x2c],EAX
0060b61d  JMP 0x0060b626
0060b61f  MOV dword ptr [EBP + -0x2c],0x0
0060b626  MOV EAX,dword ptr [EBP + -0x28]
0060b629  CMP dword ptr [EAX + 0x1dc],0x0
0060b630  JZ 0x0060b664
0060b632  MOV ECX,dword ptr [EBP + -0x28]
0060b635  MOV EDX,dword ptr [ECX + 0x1dc]
0060b63b  MOV dword ptr [EBP + -0x1c],EDX
0060b63e  MOV EAX,dword ptr [EBP + -0x1c]
0060b641  MOV dword ptr [EBP + -0x18],EAX
0060b644  CMP dword ptr [EBP + -0x18],0x0
0060b648  JZ 0x0060b65d
0060b64a  PUSH 0x1
0060b64c  MOV ECX,dword ptr [EBP + -0x18]
0060b64f  MOV EDX,dword ptr [ECX]
0060b651  MOV ECX,dword ptr [EBP + -0x18]
0060b654  MOV EAX,dword ptr [EDX]
0060b656  CALL EAX
0060b658  MOV dword ptr [EBP + -0x30],EAX
0060b65b  JMP 0x0060b664
0060b65d  MOV dword ptr [EBP + -0x30],0x0
0060b664  MOV ECX,dword ptr [EBP + -0x28]
0060b667  CMP dword ptr [ECX + 0x1e0],0x0
0060b66e  JZ 0x0060b6a2
0060b670  MOV EDX,dword ptr [EBP + -0x28]
0060b673  MOV EAX,dword ptr [EDX + 0x1e0]
0060b679  MOV dword ptr [EBP + -0x24],EAX
0060b67c  MOV ECX,dword ptr [EBP + -0x24]
0060b67f  MOV dword ptr [EBP + -0x20],ECX
0060b682  CMP dword ptr [EBP + -0x20],0x0
0060b686  JZ 0x0060b69b
0060b688  PUSH 0x1
0060b68a  MOV EDX,dword ptr [EBP + -0x20]
0060b68d  MOV EAX,dword ptr [EDX]
0060b68f  MOV ECX,dword ptr [EBP + -0x20]
0060b692  MOV EDX,dword ptr [EAX]
0060b694  CALL EDX
0060b696  MOV dword ptr [EBP + -0x34],EAX
0060b699  JMP 0x0060b6a2
0060b69b  MOV dword ptr [EBP + -0x34],0x0
0060b6a2  MOV dword ptr [EBP + -0x4],0xffffffff
0060b6a9  MOV ECX,dword ptr [EBP + -0x28]
0060b6ac  CALL 0x005ec760
0060b6b1  MOV ECX,dword ptr [EBP + -0xc]
0060b6b4  MOV dword ptr FS:[0x0],ECX
0060b6bb  POP ECX
0060b6bc  MOV ESP,EBP
0060b6be  POP EBP
0060b6bf  RET
