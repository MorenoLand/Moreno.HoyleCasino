; FUN_0045f4d0  0045f4d0
0045f4d0  PUSH EBP
0045f4d1  MOV EBP,ESP
0045f4d3  SUB ESP,0xc
0045f4d6  MOV dword ptr [EBP + -0x8],ECX
0045f4d9  MOV dword ptr [EBP + -0x4],0x0
0045f4e0  MOV EAX,dword ptr [EBP + -0x8]
0045f4e3  MOV ECX,dword ptr [EAX + 0x4]
0045f4e6  MOV dword ptr [EBP + -0xc],ECX
0045f4e9  CMP dword ptr [EBP + -0xc],0x0
0045f4ed  JZ 0x0045f4f7
0045f4ef  CMP dword ptr [EBP + -0xc],0x1
0045f4f3  JZ 0x0045f500
0045f4f5  JMP 0x0045f507
0045f4f7  MOV dword ptr [EBP + -0x4],0x71af08
0045f4fe  JMP 0x0045f507
0045f500  MOV dword ptr [EBP + -0x4],0x71af78
0045f507  MOV EAX,dword ptr [EBP + -0x4]
0045f50a  MOV ESP,EBP
0045f50c  POP EBP
0045f50d  RET
