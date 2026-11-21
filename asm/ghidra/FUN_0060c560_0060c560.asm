; FUN_0060c560  0060c560
0060c560  PUSH EBP
0060c561  MOV EBP,ESP
0060c563  SUB ESP,0x10
0060c566  MOV dword ptr [EBP + -0xc],ECX
0060c569  MOV EAX,dword ptr [EBP + -0xc]
0060c56c  CMP dword ptr [EAX + 0x1e0],0x0
0060c573  JZ 0x0060c5b4
0060c575  MOV ECX,dword ptr [EBP + -0xc]
0060c578  MOV EDX,dword ptr [ECX + 0x1e0]
0060c57e  MOV dword ptr [EBP + -0x8],EDX
0060c581  MOV EAX,dword ptr [EBP + -0x8]
0060c584  MOV dword ptr [EBP + -0x4],EAX
0060c587  CMP dword ptr [EBP + -0x4],0x0
0060c58b  JZ 0x0060c5a0
0060c58d  PUSH 0x1
0060c58f  MOV ECX,dword ptr [EBP + -0x4]
0060c592  MOV EDX,dword ptr [ECX]
0060c594  MOV ECX,dword ptr [EBP + -0x4]
0060c597  MOV EAX,dword ptr [EDX]
0060c599  CALL EAX
0060c59b  MOV dword ptr [EBP + -0x10],EAX
0060c59e  JMP 0x0060c5a7
0060c5a0  MOV dword ptr [EBP + -0x10],0x0
0060c5a7  MOV ECX,dword ptr [EBP + -0xc]
0060c5aa  MOV dword ptr [ECX + 0x1e0],0x0
0060c5b4  MOV ESP,EBP
0060c5b6  POP EBP
0060c5b7  RET
