; FUN_0058d040  0058d040
0058d040  PUSH EBP
0058d041  MOV EBP,ESP
0058d043  SUB ESP,0x20
0058d046  MOV dword ptr [EBP + -0x18],ECX
0058d049  MOV EAX,dword ptr [EBP + -0x18]
0058d04c  MOV ECX,dword ptr [EAX + 0x178]
0058d052  MOV EDX,dword ptr [EBP + -0x18]
0058d055  MOV EAX,dword ptr [EDX + 0x178]
0058d05b  MOV EDX,dword ptr [ECX]
0058d05d  MOV ECX,EAX
0058d05f  MOV EAX,dword ptr [EDX + 0x70]
0058d062  CALL EAX
0058d064  MOV ECX,dword ptr [EBP + -0x18]
0058d067  MOV EDX,dword ptr [ECX + 0x224]
0058d06d  MOV EAX,dword ptr [EBP + -0x18]
0058d070  MOV ECX,dword ptr [EAX + 0x224]
0058d076  MOV EDX,dword ptr [EDX]
0058d078  MOV EAX,dword ptr [EDX + 0x70]
0058d07b  CALL EAX
0058d07d  MOV dword ptr [EBP + -0x4],0x0
0058d084  JMP 0x0058d08f
0058d086  MOV ECX,dword ptr [EBP + -0x4]
0058d089  ADD ECX,0x1
0058d08c  MOV dword ptr [EBP + -0x4],ECX
0058d08f  CMP dword ptr [EBP + -0x4],0x15
0058d093  JGE 0x0058d14c
0058d099  MOV EDX,dword ptr [EBP + -0x4]
0058d09c  MOV EAX,dword ptr [EBP + -0x18]
0058d09f  CMP dword ptr [EAX + EDX*0x4 + 0x17c],0x0
0058d0a7  JZ 0x0058d0f0
0058d0a9  MOV ECX,dword ptr [EBP + -0x4]
0058d0ac  MOV EDX,dword ptr [EBP + -0x18]
0058d0af  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x17c]
0058d0b6  MOV dword ptr [EBP + -0xc],EAX
0058d0b9  MOV ECX,dword ptr [EBP + -0xc]
0058d0bc  MOV dword ptr [EBP + -0x8],ECX
0058d0bf  CMP dword ptr [EBP + -0x8],0x0
0058d0c3  JZ 0x0058d0d8
0058d0c5  PUSH 0x1
0058d0c7  MOV EDX,dword ptr [EBP + -0x8]
0058d0ca  MOV EAX,dword ptr [EDX]
0058d0cc  MOV ECX,dword ptr [EBP + -0x8]
0058d0cf  MOV EDX,dword ptr [EAX]
0058d0d1  CALL EDX
0058d0d3  MOV dword ptr [EBP + -0x1c],EAX
0058d0d6  JMP 0x0058d0df
0058d0d8  MOV dword ptr [EBP + -0x1c],0x0
0058d0df  MOV EAX,dword ptr [EBP + -0x4]
0058d0e2  MOV ECX,dword ptr [EBP + -0x18]
0058d0e5  MOV dword ptr [ECX + EAX*0x4 + 0x17c],0x0
0058d0f0  MOV EDX,dword ptr [EBP + -0x4]
0058d0f3  MOV EAX,dword ptr [EBP + -0x18]
0058d0f6  CMP dword ptr [EAX + EDX*0x4 + 0x1d0],0x0
0058d0fe  JZ 0x0058d147
0058d100  MOV ECX,dword ptr [EBP + -0x4]
0058d103  MOV EDX,dword ptr [EBP + -0x18]
0058d106  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x1d0]
0058d10d  MOV dword ptr [EBP + -0x14],EAX
0058d110  MOV ECX,dword ptr [EBP + -0x14]
0058d113  MOV dword ptr [EBP + -0x10],ECX
0058d116  CMP dword ptr [EBP + -0x10],0x0
0058d11a  JZ 0x0058d12f
0058d11c  PUSH 0x1
0058d11e  MOV EDX,dword ptr [EBP + -0x10]
0058d121  MOV EAX,dword ptr [EDX]
0058d123  MOV ECX,dword ptr [EBP + -0x10]
0058d126  MOV EDX,dword ptr [EAX]
0058d128  CALL EDX
0058d12a  MOV dword ptr [EBP + -0x20],EAX
0058d12d  JMP 0x0058d136
0058d12f  MOV dword ptr [EBP + -0x20],0x0
0058d136  MOV EAX,dword ptr [EBP + -0x4]
0058d139  MOV ECX,dword ptr [EBP + -0x18]
0058d13c  MOV dword ptr [ECX + EAX*0x4 + 0x1d0],0x0
0058d147  JMP 0x0058d086
0058d14c  MOV ECX,dword ptr [EBP + -0x18]
0058d14f  CALL 0x005eb5a0
0058d154  MOV ESP,EBP
0058d156  POP EBP
0058d157  RET
