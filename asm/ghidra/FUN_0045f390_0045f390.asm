; FUN_0045f390  0045f390
0045f390  PUSH EBP
0045f391  MOV EBP,ESP
0045f393  SUB ESP,0xc
0045f396  MOV dword ptr [EBP + -0x8],ECX
0045f399  MOV dword ptr [EBP + -0x4],0x0
0045f3a0  MOV EAX,dword ptr [EBP + -0x8]
0045f3a3  MOV ECX,dword ptr [EAX + 0x4]
0045f3a6  MOV dword ptr [EBP + -0xc],ECX
0045f3a9  CMP dword ptr [EBP + -0xc],0x1
0045f3ad  JZ 0x0045f3b8
0045f3af  MOV dword ptr [EBP + -0x4],0x71b03c
0045f3b6  JMP 0x0045f3bf
0045f3b8  MOV dword ptr [EBP + -0x4],0x71b01c
0045f3bf  MOV EAX,dword ptr [EBP + -0x4]
0045f3c2  MOV ESP,EBP
0045f3c4  POP EBP
0045f3c5  RET
