; FUN_0042d070  0042d070
0042d070  PUSH EBP
0042d071  MOV EBP,ESP
0042d073  SUB ESP,0x10
0042d076  MOV dword ptr [EBP + -0xc],ECX
0042d079  MOV EAX,dword ptr [EBP + -0xc]
0042d07c  CMP dword ptr [EAX + 0xae0],0x0
0042d083  JZ 0x0042d0dd
0042d085  MOV ECX,dword ptr [EBP + -0xc]
0042d088  MOV EDX,dword ptr [ECX + 0xae0]
0042d08e  MOV EAX,dword ptr [EBP + -0xc]
0042d091  MOV ECX,dword ptr [EAX + 0xae0]
0042d097  MOV EDX,dword ptr [EDX]
0042d099  MOV EAX,dword ptr [EDX + 0x70]
0042d09c  CALL EAX
0042d09e  MOV ECX,dword ptr [EBP + -0xc]
0042d0a1  MOV EDX,dword ptr [ECX + 0xae0]
0042d0a7  MOV dword ptr [EBP + -0x8],EDX
0042d0aa  MOV EAX,dword ptr [EBP + -0x8]
0042d0ad  MOV dword ptr [EBP + -0x4],EAX
0042d0b0  CMP dword ptr [EBP + -0x4],0x0
0042d0b4  JZ 0x0042d0c9
0042d0b6  PUSH 0x1
0042d0b8  MOV ECX,dword ptr [EBP + -0x4]
0042d0bb  MOV EDX,dword ptr [ECX]
0042d0bd  MOV ECX,dword ptr [EBP + -0x4]
0042d0c0  MOV EAX,dword ptr [EDX]
0042d0c2  CALL EAX
0042d0c4  MOV dword ptr [EBP + -0x10],EAX
0042d0c7  JMP 0x0042d0d0
0042d0c9  MOV dword ptr [EBP + -0x10],0x0
0042d0d0  MOV ECX,dword ptr [EBP + -0xc]
0042d0d3  MOV dword ptr [ECX + 0xae0],0x0
0042d0dd  MOV ESP,EBP
0042d0df  POP EBP
0042d0e0  RET
