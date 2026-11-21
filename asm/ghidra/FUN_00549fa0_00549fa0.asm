; FUN_00549fa0  00549fa0
00549fa0  PUSH EBP
00549fa1  MOV EBP,ESP
00549fa3  SUB ESP,0x18
00549fa6  MOV dword ptr [EBP + -0x14],ECX
00549fa9  MOV dword ptr [EBP + -0x4],0x0
00549fb0  MOV dword ptr [EBP + -0x10],0x0
00549fb7  MOV dword ptr [EBP + -0xc],0x0
00549fbe  MOV EAX,dword ptr [EBP + -0xc]
00549fc1  MOV dword ptr [EBP + -0x8],EAX
00549fc4  JMP 0x00549fcf
00549fc6  MOV ECX,dword ptr [EBP + -0x8]
00549fc9  ADD ECX,0x1
00549fcc  MOV dword ptr [EBP + -0x8],ECX
00549fcf  CMP dword ptr [EBP + -0x8],0x6
00549fd3  JGE 0x0054a042
00549fd5  MOV EDX,dword ptr [EBP + 0x8]
00549fd8  IMUL EDX,EDX,0xc
00549fdb  MOV EAX,dword ptr [EBP + -0x14]
00549fde  LEA ECX,[EAX + EDX*0x1 + 0x28]
00549fe2  MOV EDX,dword ptr [EBP + -0x8]
00549fe5  MOVZX EAX,word ptr [ECX + EDX*0x2]
00549fe9  TEST EAX,EAX
00549feb  JZ 0x0054a040
00549fed  MOV ECX,dword ptr [EBP + 0x8]
00549ff0  IMUL ECX,ECX,0xc
00549ff3  MOV EDX,dword ptr [EBP + -0x14]
00549ff6  LEA EAX,[EDX + ECX*0x1 + 0x28]
00549ffa  MOV ECX,dword ptr [EBP + -0x8]
00549ffd  MOV DX,word ptr [EAX + ECX*0x2]
0054a001  PUSH EDX
0054a002  CALL 0x00641280
0054a007  ADD ESP,0x4
0054a00a  MOV dword ptr [EBP + -0x10],EAX
0054a00d  MOV EAX,dword ptr [EBP + -0x10]
0054a010  MOV dword ptr [EBP + -0x18],EAX
0054a013  CMP dword ptr [EBP + -0x18],0xb
0054a017  JL 0x0054a037
0054a019  CMP dword ptr [EBP + -0x18],0xd
0054a01d  JLE 0x0054a027
0054a01f  CMP dword ptr [EBP + -0x18],0xe
0054a023  JZ 0x0054a030
0054a025  JMP 0x0054a037
0054a027  MOV dword ptr [EBP + -0x10],0xa
0054a02e  JMP 0x0054a037
0054a030  MOV dword ptr [EBP + -0x10],0x1
0054a037  MOV ECX,dword ptr [EBP + -0x4]
0054a03a  ADD ECX,dword ptr [EBP + -0x10]
0054a03d  MOV dword ptr [EBP + -0x4],ECX
0054a040  JMP 0x00549fc6
0054a042  MOV EAX,dword ptr [EBP + -0x4]
0054a045  MOV ESP,EBP
0054a047  POP EBP
0054a048  RET 0x4
