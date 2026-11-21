; FUN_0044d5a0  0044d5a0
0044d5a0  PUSH EBP
0044d5a1  MOV EBP,ESP
0044d5a3  SUB ESP,0x8
0044d5a6  MOV dword ptr [EBP + -0x8],ECX
0044d5a9  MOV dword ptr [EBP + -0x4],0x0
0044d5b0  JMP 0x0044d5bb
0044d5b2  MOV EAX,dword ptr [EBP + -0x4]
0044d5b5  ADD EAX,0x1
0044d5b8  MOV dword ptr [EBP + -0x4],EAX
0044d5bb  CMP dword ptr [EBP + -0x4],0x4
0044d5bf  JGE 0x0044d5d0
0044d5c1  MOV ECX,dword ptr [EBP + -0x8]
0044d5c4  ADD ECX,dword ptr [EBP + -0x4]
0044d5c7  MOV byte ptr [ECX + 0xcd],0x0
0044d5ce  JMP 0x0044d5b2
0044d5d0  MOV ESP,EBP
0044d5d2  POP EBP
0044d5d3  RET
