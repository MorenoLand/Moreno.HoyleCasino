; FUN_0045ece0  0045ece0
0045ece0  PUSH EBP
0045ece1  MOV EBP,ESP
0045ece3  SUB ESP,0xc
0045ece6  MOV dword ptr [EBP + -0x8],ECX
0045ece9  MOV dword ptr [EBP + -0x4],0x0
0045ecf0  MOV EAX,dword ptr [EBP + -0x8]
0045ecf3  MOV ECX,dword ptr [EAX + 0x4]
0045ecf6  MOV dword ptr [EBP + -0xc],ECX
0045ecf9  CMP dword ptr [EBP + -0xc],0x1
0045ecfd  JZ 0x0045ed11
0045ecff  PUSH 0x6b977c
0045ed04  CALL 0x00630f40
0045ed09  ADD ESP,0x4
0045ed0c  MOV dword ptr [EBP + -0x4],EAX
0045ed0f  JMP 0x0045ed21
0045ed11  PUSH 0x6b9768
0045ed16  CALL 0x00630f40
0045ed1b  ADD ESP,0x4
0045ed1e  MOV dword ptr [EBP + -0x4],EAX
0045ed21  MOV EAX,dword ptr [EBP + -0x4]
0045ed24  MOV ESP,EBP
0045ed26  POP EBP
0045ed27  RET
