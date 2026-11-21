; FUN_0053b8f0  0053b8f0
0053b8f0  PUSH EBP
0053b8f1  MOV EBP,ESP
0053b8f3  SUB ESP,0x18
0053b8f6  MOV dword ptr [EBP + -0x18],ECX
0053b8f9  MOV dword ptr [EBP + -0x14],0x14c
0053b900  MOV dword ptr [EBP + -0x10],0xde
0053b907  MOV dword ptr [EBP + -0xc],0x1a9
0053b90e  MOV dword ptr [EBP + -0x8],0x73
0053b915  MOV dword ptr [EBP + -0x4],0x113
0053b91c  MOV EAX,dword ptr [EBP + 0xc]
0053b91f  IMUL EAX,EAX,0xc
0053b922  MOV ECX,dword ptr [EBP + 0x8]
0053b925  ADD EAX,dword ptr [EBP + ECX*0x4 + -0x14]
0053b929  MOV ESP,EBP
0053b92b  POP EBP
0053b92c  RET 0x8
