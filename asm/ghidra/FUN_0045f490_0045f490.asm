; FUN_0045f490  0045f490
0045f490  PUSH EBP
0045f491  MOV EBP,ESP
0045f493  SUB ESP,0xc
0045f496  MOV dword ptr [EBP + -0x8],ECX
0045f499  MOV dword ptr [EBP + -0x4],0x0
0045f4a0  MOV EAX,dword ptr [EBP + -0x8]
0045f4a3  MOV ECX,dword ptr [EAX + 0x4]
0045f4a6  MOV dword ptr [EBP + -0xc],ECX
0045f4a9  CMP dword ptr [EBP + -0xc],0x0
0045f4ad  JZ 0x0045f4b7
0045f4af  CMP dword ptr [EBP + -0xc],0x1
0045f4b3  JZ 0x0045f4c0
0045f4b5  JMP 0x0045f4c7
0045f4b7  MOV dword ptr [EBP + -0x4],0x71a588
0045f4be  JMP 0x0045f4c7
0045f4c0  MOV dword ptr [EBP + -0x4],0x71aa48
0045f4c7  MOV EAX,dword ptr [EBP + -0x4]
0045f4ca  MOV ESP,EBP
0045f4cc  POP EBP
0045f4cd  RET
