; FUN_0059b9a0  0059b9a0
0059b9a0  PUSH EBP
0059b9a1  MOV EBP,ESP
0059b9a3  SUB ESP,0x1c
0059b9a6  MOV dword ptr [EBP + -0x1c],ECX
0059b9a9  MOV dword ptr [EBP + -0x18],0x14c
0059b9b0  MOV dword ptr [EBP + -0x14],0xde
0059b9b7  MOV dword ptr [EBP + -0x10],0x1a9
0059b9be  MOV dword ptr [EBP + -0xc],0x73
0059b9c5  MOV dword ptr [EBP + -0x8],0x113
0059b9cc  MOV dword ptr [EBP + -0x4],0x113
0059b9d3  MOV EAX,dword ptr [EBP + 0xc]
0059b9d6  IMUL EAX,EAX,0xc
0059b9d9  MOV ECX,dword ptr [EBP + 0x8]
0059b9dc  ADD EAX,dword ptr [EBP + ECX*0x4 + -0x18]
0059b9e0  MOV ESP,EBP
0059b9e2  POP EBP
0059b9e3  RET 0x8
